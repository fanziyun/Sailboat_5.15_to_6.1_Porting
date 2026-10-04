// decompiled from fpc1555 by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 468) =====

//WARNING: Switch with 1 destination removed at 0x08003fa8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x2ee0710dce68437c) {
        if (arg1 < -0x3987c0e26ee29729) {
            if (arg1 == -0x66d421a09845f9f8) {
                if ((pcVar1 + -0x8002290 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x08003f68;
            }
            if (arg1 != -0x550b9e52359ac614) goto code_r0x08003f68;
            pcVar2 = sym.fpc_register_panel_notifier_work.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt;
        }
        else {
            if (arg1 != -0x3987c0e26ee29729) {
                if ((arg1 == -0x3557318fb8d07b71) && ((pcVar1 + -0x80021e8 >> 3 | pcVar1 << 0x3d) < 2)) {
                    return;
                }
                goto code_r0x08003f68;
            }
            pcVar2 = sym.fpc1020_irq_handler.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt;
        }
    }
    else if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x2ee0710dce68437c) {
            pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
        }
        else {
            if (arg1 != 0x51c87a31c6197e) goto code_r0x08003f68;
            pcVar2 = sym.fpc_screen_state_for_fingerprint_callback.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt;
        }
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 == 0x1e3d0ffe3d0499e9) {
            if ((pcVar1 + -0x8002220 >> 3 | pcVar1 << 0x3d) < 0xe) {
                return;
            }
            goto code_r0x08003f68;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08003f68;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08003f68:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003fbc);
    (*pcVar1)();
}


// ===== sym.fpc1020_irq_handler.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt @ 0x080021e0 (size 8) =====

ulong sym.fpc1020_irq_handler.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt(ulong param_1,ulong *param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 0x144) != 0) {
        *(param_2 + 0x104) = *(param_2 + 0x104) + 1;
        pm_wakeup_ws_event(param_2[4],2000,0);
    }
    sysfs_notify(*param_2,0,_segment.ehdr);
    if (((*(param_2 + 0x43) != '\0') && (*(param_2 + 0x3c) != '\0')) && (*(param_2 + 0x28) != '\0')) {
        _printk(0x8000836,"fpc1020_irq_handler");
        *(param_2 + 0x43) = 0;
    }
    return 1;
}


// ===== sym.fpc1020_probe.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt @ 0x080021e8 (size 8) =====

int sym.fpc1020_probe.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    int64_t *arg1;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    char *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x10;
    iVar4 = *(param_1 + 0x300);
    arg1 = devm_kmalloc(iVar1,0x250,0xdc0);
    _dev_info(iVar1,"fpc %s --->: enter! \n","fpc1020_probe");
    if (arg1 == NULL) {
        _dev_err(iVar1,"failed to allocate memory for struct fpc1020_data\n");
        iVar2 = -0xc;
    }
    else {
        *arg1 = iVar1;
        *(param_1 + 0xa8) = arg1;
        if (iVar4 == 0) {
            _dev_err(iVar1,"no of node found\n");
            iVar2 = -0x16;
        }
        else {
            uVar3 = devm_pinctrl_get(iVar1);
            arg1[1] = uVar3;
            if (uVar3 < 0xfffffffffffff001) {
                pcVar5 = "fpc1020_reset_reset";
                uVar3 = pinctrl_lookup_state(uVar3,"fpc1020_reset_reset");
                if (uVar3 < 0xfffffffffffff001) {
                    _dev_info(iVar1,"found pin control %s\n","fpc1020_reset_reset");
                    pcVar5 = "fpc1020_reset_active";
                    arg1[2] = uVar3;
                    uVar3 = pinctrl_lookup_state(arg1[1],"fpc1020_reset_active");
                    if (uVar3 < 0xfffffffffffff001) {
                        _dev_info(iVar1,"found pin control %s\n","fpc1020_reset_active");
                        arg1[3] = uVar3;
                        *(arg1 + 0x144) = 1;
                        *(arg1 + 0x29) = 0x2001;
                        *(arg1 + 0x141) = 0;
                        device_init_wakeup(iVar1,1);
                        __mutex_init(arg1 + 0x22,"&fpc1020->lock",obj.fpc1020_probe.__key);
                        __mutex_init(arg1 + 0x3d,"&fpc1020->fb_lock",obj.fpc1020_probe.__key);
                        iVar4 = wakeup_source_register(iVar1,"fpc_ttw_wl");
                        arg1[4] = iVar4;
                        iVar2 = sysfs_create_group(iVar1,obj.attribute_group);
                        if (iVar2 == 0) {
                            iVar4 = *arg1;
                            _dev_info(iVar4,"fpc %s --->: enter!\n","reset_gpio_res");
                            *(arg1 + 0x20) = 0xffffffff;
                            *(arg1 + 0x1f) = 0xffffffff;
                            _dev_info(iVar4,"fpc %s <---: exit!\n","reset_gpio_res");
                            iVar4 = of_find_property(*(param_1 + 0x300),"fpc,enable-on-boot",0);
                            if (iVar4 != 0) {
                                _dev_info(iVar1,"Enabling hardware\n");
                                sym.device_prepare(arg1);
                            }
                            *(arg1 + 0x3c) = 0;
                            *(arg1 + 0x43) = 0;
                            iVar4 = alloc_workqueue(0x80006f2,0xe000a,1,"screen_state_wq");
                            arg1[0x2a] = iVar4;
                            if (iVar4 != 0) {
                                arg1[0x2b] = 0xfffffffe0;
                                arg1[0x2c] = arg1 + 0x2c;
                                arg1[0x2d] = arg1 + 0x2c;
                                arg1[0x2e] = 
                                sym.fpc_register_panel_notifier_work.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt;
                                init_timer_key(arg1 + 0x31,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                                queue_delayed_work_on(0x20,arg1[0x2a],arg1 + 0x2b,0x4e2);
                            }
                            _dev_info(iVar1,"%s: ok\n","fpc1020_probe");
                            iVar2 = 0;
                        }
                        else {
                            _dev_err(iVar1,"fpc could not create sysfs\n");
                        }
                        goto code_r0x080023f8;
                    }
                }
                _dev_err(iVar1,"cannot find \'%s\'\n",pcVar5);
                iVar2 = -0x16;
            }
            else if (uVar3 == 0xfffffffffffffdfb) {
                _dev_info(iVar1,"pinctrl not ready\n");
                iVar2 = -0x205;
            }
            else {
                _dev_err(iVar1,"Target does not use pinctrl\n");
                iVar2 = -0x16;
                arg1[1] = 0;
            }
        }
    }
code_r0x080023f8:
    _dev_info(iVar1,"fpc %s <---: exit! \n","fpc1020_probe");
    return iVar2;
}


// ===== sym.fpc1020_remove.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt @ 0x080021f0 (size 8) =====

ulong sym.fpc1020_remove.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong *arg1;
    ulong uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xa8);
    if (arg1[0x2a] != 0) {
        cancel_delayed_work_sync(arg1 + 0x2b);
        destroy_workqueue(arg1[0x2a]);
    }
    if (_segment.ehdr != 0) {
        if (_segment.ehdr < 0xfffffffffffff001) {
            panel_event_notifier_unregister();
            goto code_r0x0800266c;
        }
    }
    _printk(0x80009cf,"fpc1020_remove");
code_r0x0800266c:
    sysfs_remove_group(param_1 + 0x10,obj.attribute_group);
    wakeup_source_unregister(arg1[4]);
    sym.vreg_setup(arg1,0x8000e34);
    if (arg1 == NULL) {
        _printk("fpc %s: failed to allocate memory for struct fpc1020_data!\n","reset_gpio_res");
    }
    else {
        uVar1 = *arg1;
        _dev_info(uVar1,"fpc %s --->: enter!\n","reset_gpio_res");
        *(arg1 + 0x20) = 0xffffffff;
        *(arg1 + 0x1f) = 0xffffffff;
        _dev_info(uVar1,"fpc %s <---: exit!\n","reset_gpio_res");
    }
    _dev_info(param_1 + 0x10,0x8001289,"fpc1020_remove");
    return 0;
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x080021f8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002200 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8001080,"fpc1020_exit");
    platform_driver_unregister(reloc.fpc1020_probe.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002208 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register(reloc.fpc1020_probe.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt,obj.__this_module);
    if (iVar1 == 0) {
        _printk(0x80007b6,"fpc1020_init");
    }
    else {
        _printk(0x8000617,"fpc1020_init",iVar1);
    }
    return iVar1;
}


// ===== sym.fpc_register_panel_notifier_work.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt @ 0x08002210 (size 8) =====

void sym.fpc_register_panel_notifier_work.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    int iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = of_find_node_by_name(0,"fingerprint-screen");
    if (iVar2 == 0) {
        uVar3 = 0x8000b51;
    }
    else {
        iVar1 = of_count_phandle_with_args(iVar2,"panel",0);
        _printk(0x8000905,"fpc_check_panel",iVar1);
        if (0 < iVar1) {
            iVar4 = 0;
            do {
                of_parse_phandle(iVar2,"panel",iVar4);
                _segment.ehdr = of_drm_find_panel();
                if (_segment.ehdr < 0xfffffffffffff001) {
                    _printk(0x8000697,"fpc_check_panel");
                    break;
                }
                _segment.ehdr = 0;
                _printk(0x8000ac2,"fpc_check_panel");
                iVar4 = iVar4 + 1;
            } while (iVar1 != iVar4);
        }
        if (_segment.ehdr == 0xfffffffffffffdfb) {
            _printk(0x80006bd,"fpc_check_panel");
        }
        if (_segment.ehdr == 0) {
            _printk(0x8000fc5);
            iVar1 = _segment.ehdr;
            _segment.ehdr = CONCAT44(*0x8000004,_segment.ehdr + 1);
            if (iVar1 < 5) {
                queue_delayed_work_on(0x20,*(param_1 + -8),param_1,0x4e2);
                return;
            }
            _printk(0x8000777);
            return;
        }
        _printk(0x8000f2e,_segment.ehdr & 0xffffffff);
        if (_segment.ehdr != 0) {
            return;
        }
        _segment.ehdr =
             panel_event_notifier_register
                       (1,6,0,sym.fpc_screen_state_for_fingerprint_callback.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt,
                        param_1 + -0x158);
        if (_segment.ehdr < 0xfffffffffffff001) {
            uVar3 = 0x800098c;
        }
        else {
            uVar3 = 0x8000f8d;
        }
    }
    _printk(uVar3,"fpc_register_panel_notifier_work");
    return;
}


// ===== sym.fpc_screen_state_for_fingerprint_callback.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt @ 0x08002218 (size 8) =====

void sym.fpc_screen_state_for_fingerprint_callback.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt
               (int param_1,int *param_2,ulong *param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_3 != NULL) {
        if (param_2 == NULL) {
            _printk(0x8000ea1,"fpc_screen_state_for_fingerprint_callback");
        }
        else if (((param_2[3] == '\0') && (param_1 == 1)) && (*(param_3 + 0x28) != '\0')) {
            if (*param_2 == 1) {
                _printk(0x8000598,"fpc_screen_state_for_fingerprint_callback");
                mutex_lock(param_3 + 0x3d);
                *(param_3 + 0x3c) = 1;
                mutex_unlock(param_3 + 0x3d);
                sysfs_notify(*param_3,0,_segment.ehdr);
            }
            else if (*param_2 == 2) {
                _printk(0x8000938,"fpc_screen_state_for_fingerprint_callback");
                mutex_lock(param_3 + 0x3d);
                *(param_3 + 0x3c) = 0;
                mutex_unlock(param_3 + 0x3d);
            }
        }
    }
    return;
}


// ===== sym.irq_ack.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt @ 0x08002220 (size 8) =====

ulong sym.irq_ack.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt(void)

{
    ulong in_x3;
    
    return in_x3;
}


// ===== sym.vendor_update.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt @ 0x08002228 (size 8) =====

ulong sym.vendor_update.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt(void)

{
    ulong in_x3;
    
    return in_x3;
}


// ===== sym.fingerdown_wait_set.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt @ 0x08002230 (size 8) =====

ulong sym.fingerdown_wait_set.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int iVar1;
    uchar uVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = *(param_1 + 0x98);
    _dev_info(*puVar3,"%s -> %s\n","fingerdown_wait_set",param_3);
    iVar1 = strncmp(param_3,"enable",6);
    if ((iVar1 == 0) && (*(puVar3 + 0x28) != '\0')) {
        uVar2 = 1;
    }
    else {
        iVar1 = strncmp(param_3,"disable",7);
        if ((iVar1 != 0) || (*(puVar3 + 0x28) == '\0')) {
            return 0xffffffffffffffea;
        }
        uVar2 = 0;
    }
    *(puVar3 + 0x43) = uVar2;
    return param_4;
}


// ===== sym.request_vreg_gpio_set.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt @ 0x08002238 (size 8) =====

int64_t sym.request_vreg_gpio_set.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt
                  (int64_t param_1,ulong param_2,uint32_t *param_3,int64_t param_4)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint uVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *param_3 ^ 0x62616e65;
    piVar7 = *(param_1 + 0x98);
    uVar1 = param_3[1] ^ 0x656c;
    if ((uVar2 != 0 || uVar1 != 0) && (*param_3 != 0x61736964 || *(param_3 + 3) != 0x656c6261)) {
        return -0x16;
    }
    piVar6 = *piVar7;
    _dev_info(piVar6,"fpc %s --->: enter!\n","request_vreg_gpio");
    mutex_lock(piVar7 + 0x22);
    if (uVar2 != 0 || uVar1 != 0) {
        if (*(piVar7 + 0x142) == '\0') {
            uVar5 = 0;
            goto code_r0x080030c0;
        }
        if (*(piVar7 + 0x141) == '\0') {
            iVar3 = 0;
        }
        else {
            gpio_to_desc(piVar7[0x1f]);
            uVar4 = gpiod_to_irq();
            devm_free_irq(piVar6,uVar4,piVar7);
            _dev_info(piVar6,"fpc irq free successfully!\n");
            iVar3 = 0;
            *(piVar7 + 0x141) = 0;
        }
code_r0x080032f4:
        if (*(piVar7 + 0x1f) < 0x200) {
            devm_gpio_free(piVar6);
            *(piVar7 + 0x1f) = 0xffffffff;
            _dev_info(piVar6,"fpc irq gpio released successfully!\n");
        }
    }
    else {
        if (*(piVar7 + 0x142) != '\0') {
            uVar5 = 1;
code_r0x080030c0:
            _dev_info(piVar6,"%s: enable: %d, gpios_requested: %d ???\n","request_vreg_gpio",uVar2 == 0 && uVar1 == 0
                      ,uVar5);
            iVar3 = 0;
            goto code_r0x08003358;
        }
        iVar8 = *piVar7;
        iVar3 = of_get_named_gpio_flags(*(iVar8 + 0x2f0),"fpc,gpio_vdd1v8",0,0);
        if (iVar3 < 0) {
            _dev_err(iVar8,"failed to get \'%s\'\n","fpc,gpio_vdd1v8");
            _dev_err(piVar6,"fpc vdd1v8 gpio get failed! \n");
            _segment.ehdr = 0xffffffff;
code_r0x0800312c:
            _dev_info(piVar6,"fpc vreg gpio requested successfully!\n");
            iVar8 = *piVar7;
            iVar3 = of_get_named_gpio_flags(*(iVar8 + 0x2f0),"fpc,gpio_irq",0,0);
            if (iVar3 < 0) {
                _dev_err(iVar8,"failed to get \'%s\'\n","fpc,gpio_irq");
                iVar3 = -2;
            }
            else {
                *(piVar7 + 0x1f) = iVar3;
                iVar3 = devm_gpio_request(iVar8,iVar3,"fpc,gpio_irq");
                if (iVar3 == 0) {
                    _dev_info(piVar6,"fpc irq gpio applied at  %d\n",piVar7[0x1f]);
                    _dev_info(piVar6,"fpc irq gpio requested successfully!\n");
                    if (*(piVar7 + 0x141) != '\0') {
                        gpio_to_desc(piVar7[0x1f]);
                        uVar4 = gpiod_to_irq();
                        devm_free_irq(piVar6,uVar4,piVar7);
                        *(piVar7 + 0x141) = 0;
                        _dev_info(piVar6,"fpc irq has been requested already, free firstly!\n");
                    }
                    gpio_to_desc(piVar7[0x1f]);
                    uVar4 = gpiod_to_irq();
                    iVar8 = piVar6[0xe];
                    if (iVar8 == 0) {
                        iVar8 = *piVar6;
                    }
                    iVar3 = devm_request_threaded_irq
                                      (piVar6,uVar4,0,sym.fpc1020_irq_handler.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt
                                       ,piVar7[0x29],iVar8,piVar7);
                    if (iVar3 == 0) {
                        *(piVar7 + 0x141) = 0x101;
                        gpio_to_desc(piVar7[0x1f]);
                        uVar4 = gpiod_to_irq();
                        _dev_info(piVar6,"fpc requested irq %d\n",uVar4);
                        goto code_r0x08003358;
                    }
                    gpio_to_desc(piVar7[0x1f]);
                    uVar4 = gpiod_to_irq();
                    _printk(0x80010d0,uVar4);
                    goto code_r0x080032f4;
                }
                _dev_err(iVar8,"failed to request gpio %d\n",piVar7[0x1f]);
                iVar3 = -3;
            }
            _printk(0x8001219);
            goto code_r0x080032f4;
        }
        *(piVar7 + 0x20) = iVar3;
        iVar3 = devm_gpio_request(iVar8,iVar3,"fpc,gpio_vdd1v8");
        if (iVar3 == 0) {
            _dev_info(piVar6,"fpc vdd1v8 gpio applied at  %d\n",piVar7[0x20]);
            _segment.ehdr = piVar7[0x20];
            goto code_r0x0800312c;
        }
        _dev_err(iVar8,"failed to request gpio %d\n",piVar7[0x20]);
        _dev_err(piVar6,"fpc vdd1v8 gpio request failed! \n");
        iVar3 = -3;
    }
    if (*(piVar7 + 0x20) < 0x200) {
        devm_gpio_free(piVar6);
        *(piVar7 + 0x20) = 0xffffffff;
        _segment.ehdr = 0xffffffff;
        _dev_info(piVar6,"fpc vreg gpio released successfully!\n");
    }
    *(piVar7 + 0x142) = 0;
code_r0x08003358:
    mutex_unlock(piVar7 + 0x22);
    _dev_info(piVar6,"fpc %s <---: exit!\n","request_vreg_gpio");
    if (iVar3 != 0) {
        param_4 = iVar3;
    }
    return param_4;
}


// ===== sym.hw_reset_set.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt @ 0x08002240 (size 8) =====

int64_t sym.hw_reset_set.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    uint uVar3;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    iVar2 = strncmp(param_3,"reset",5);
    if (iVar2 == 0) {
        iVar1 = arg1 + 0x110;
        mutex_lock(iVar1);
        uVar3 = regulator_get_voltage(_segment.ehdr);
        _printk(0x8001242,"power_reset",uVar3);
        regulator_disable(_segment.ehdr);
        usleep_range_state(100000,200000,2);
        regulator_enable(_segment.ehdr);
        usleep_range_state(100000,200000,2);
        iVar2 = sym.hw_reset(arg1);
        mutex_unlock(iVar1);
        if (iVar2 != 0) {
            param_4 = iVar2;
        }
    }
    else {
        param_4 = -0x16;
    }
    return param_4;
}


// ===== sym.handle_wakelock_cmd.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt @ 0x08002248 (size 8) =====

uint64_t sym.handle_wakelock_cmd.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    uint64_t uVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x98);
    mutex_lock(iVar3 + 0x110);
    uVar1 = param_4;
    if (0x21 < param_4) {
        uVar1 = 0x22;
    }
    iVar2 = strncmp(param_3,"release_wakelock_with_verification",uVar1);
    if (iVar2 == 0) {
        if (*(iVar3 + 0x108) != *(iVar3 + 0x104)) goto code_r0x08003b58;
    }
    else {
        uVar1 = param_4;
        if (0xf < param_4) {
            uVar1 = 0x10;
        }
        iVar2 = strncmp(param_3,"release_wakelock",uVar1);
        if (iVar2 != 0) {
            uVar1 = param_4;
            if (0x1a < param_4) {
                uVar1 = 0x1b;
            }
            iVar2 = strncmp(param_3,"start_irqs_received_counter",uVar1);
            if (iVar2 == 0) {
                *(iVar3 + 0x108) = *(iVar3 + 0x104);
            }
            else {
                param_4 = 0xffffffffffffffea;
            }
            goto code_r0x08003b58;
        }
    }
    __pm_relax(*(iVar3 + 0x20));
code_r0x08003b58:
    mutex_unlock(iVar3 + 0x110);
    return param_4;
}


// ===== sym.clk_enable_set.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt @ 0x08002250 (size 8) =====

ulong sym.clk_enable_set.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt(void)

{
    ulong in_x3;
    
    return in_x3;
}


// ===== sym.device_prepare_set.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt @ 0x08002258 (size 8) =====

int64_t sym.device_prepare_set.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    iVar1 = strncmp(param_3,"enable",6);
    if ((iVar1 == 0) || (iVar1 = strncmp(param_3,"disable",7), iVar1 == 0)) {
        iVar1 = sym.device_prepare(arg1);
        if (iVar1 != 0) {
            param_4 = iVar1;
        }
    }
    else {
        param_4 = -0x16;
    }
    return param_4;
}


// ===== sym.pinctl_set.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt @ 0x08002260 (size 8) =====

int64_t sym.pinctl_set.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t *param_3,int64_t param_4)

{
    ulong *puVar1;
    int iVar2;
    char *pcVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong uVar5;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar6 = *(param_1 + 0x98);
    puVar1 = puVar6 + 0x22;
    mutex_lock(puVar1);
    uVar5 = *puVar6;
    iVar4 = 0;
    if ((*param_3 != 0x5f30323031637066 || param_3[1] != 0x65725f7465736572) || *(param_3 + 0xb) != 0x74657365725f7465)
    {
        if ((*param_3 != 0x5f30323031637066 || param_3[1] != 0x63615f7465736572) || param_3[2] != 0x65766974) {
            iVar2 = -0x16;
            pcVar3 = "%s:\'%s\' not found gpio\n";
            goto code_r0x08003568;
        }
        iVar4 = 1;
    }
    iVar2 = pinctrl_select_state(puVar6[1],puVar6[iVar4 + 2]);
    if (iVar2 == 0) {
        mutex_unlock(puVar1);
        return param_4;
    }
    pcVar3 = "fpc %s: cannot select \'%s\'\n";
code_r0x08003568:
    _dev_err(uVar5,pcVar3,"select_pin_ctl",param_3);
    mutex_unlock(puVar1);
    return iVar2;
}


// ===== sym.wakeup_enable_set.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt @ 0x08002268 (size 8) =====

ulong sym.wakeup_enable_set.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98) + 0x110;
    mutex_lock(iVar1);
    mutex_unlock(iVar1);
    return param_4;
}


// ===== sym.power_ctrl_set.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt @ 0x08002270 (size 8) =====

int64_t sym.power_ctrl_set.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    iVar1 = arg1 + 0x110;
    mutex_lock(iVar1);
    iVar2 = strncmp(param_3,"enable",6);
    if (iVar2 == 0) {
        iVar2 = regulator_is_enabled(_segment.ehdr);
        if (iVar2 < 1) {
            iVar2 = regulator_enable(_segment.ehdr);
            usleep_range_state(100000,200000,2);
            goto code_r0x08002e00;
        }
    }
    else {
        iVar2 = strncmp(param_3,"disable",7);
        if (iVar2 != 0) {
            iVar2 = strncmp(param_3,"force_disable",0xd);
            if (iVar2 == 0) {
                iVar2 = regulator_force_disable(_segment.ehdr);
            }
            else {
                iVar2 = strncmp(param_3,"power_on_reset",0xe);
                if (iVar2 == 0) {
                    iVar2 = regulator_is_enabled(_segment.ehdr);
                    if (iVar2 < 1) {
                        regulator_enable(_segment.ehdr);
                        usleep_range_state(100000,200000,2);
                    }
                    iVar2 = sym.hw_reset(arg1);
                }
                else {
                    iVar2 = -0x16;
                }
            }
            goto code_r0x08002e00;
        }
        iVar2 = regulator_is_enabled(_segment.ehdr);
        if (0 < iVar2) {
            iVar2 = regulator_disable(_segment.ehdr);
            goto code_r0x08002e00;
        }
    }
    iVar2 = 0;
code_r0x08002e00:
    uVar3 = regulator_get_voltage(_segment.ehdr);
    uVar4 = regulator_is_enabled(_segment.ehdr);
    _printk(0x8000a0c,"power_ctrl_set",param_3,iVar2,uVar4,uVar3);
    mutex_unlock(iVar1);
    if (iVar2 != 0) {
        param_4 = iVar2;
    }
    return param_4;
}


// ===== sym.irq_enable_set.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt @ 0x08002278 (size 8) =====

ulong sym.irq_enable_set.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt
                (int64_t param_1,ulong param_2,char *param_3,ulong param_4)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    if (*param_3 == '0') {
        mutex_lock(iVar1 + 0x110);
        gpio_to_desc(*(iVar1 + 0xf8));
        gpiod_to_irq();
        disable_irq();
    }
    else {
        if (*param_3 != '1') {
            return param_4;
        }
        mutex_lock(iVar1 + 0x110);
        gpio_to_desc(*(iVar1 + 0xf8));
        gpiod_to_irq();
        enable_irq();
    }
    mutex_unlock(iVar1 + 0x110);
    return param_4;
}


// ===== sym.regulator_enable_set.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt @ 0x08002280 (size 8) =====

uint64_t sym.regulator_enable_set.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    int *piVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar7;
    uint32_t uVar8;
    int64_t iVar9;
    ulong *puVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint8_t auStack_4c [4];
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    puVar10 = &uStack_48;
    iVar9 = *(param_1 + 0x98);
    auStack_4c[0] = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar2 = sscanf(param_3,"%15[^,],%c",puVar10,auStack_4c);
    if ((iVar2 == 2) && ((auStack_4c[0] & 0xfe) == 100)) {
        iVar1 = iVar9 + 0x110;
        puVar10 = auStack_4c[0] == 0x65;
        mutex_lock(iVar1);
        iVar2 = sym.vreg_setup(iVar9,&uStack_48);
        mutex_unlock(iVar1);
        if (iVar2 != 0) {
            param_4 = iVar2;
        }
    }
    else {
        param_4 = 0xffffffffffffffea;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return param_4;
    }
    auVar11 = __stack_chk_fail(param_4);
    piVar5 = auVar11._8_8_;
    *extraout_x18 = sym.vreg_setup;
    uVar7 = *auVar11._0_8_;
    if ((puVar10 & 1) == 0) {
        _dev_info(uVar7,"fpc %s --->: enter, for power off at %s.\n","vreg_setup",piVar5);
        uVar8 = _segment.ehdr;
        if (*piVar5 != 0x5f646476 || *(piVar5 + 3) != 0x616e615f) goto code_r0x080038f4;
        if (_segment.ehdr < 0x200) {
            uVar4 = gpio_to_desc(_segment.ehdr);
            uVar3 = gpiod_direction_output_raw(uVar4,0);
            if (uVar3 != 0) {
                pcVar6 = "fpc %s: fail to clear gpio %d!\n";
                goto code_r0x080038dc;
            }
            goto code_r0x08003934;
        }
    }
    else {
        _dev_info(uVar7,"fpc %s --->: enter, for power on at %s.\n","vreg_setup",piVar5);
        uVar8 = _segment.ehdr;
        if (*piVar5 != 0x5f646476 || *(piVar5 + 3) != 0x616e615f) {
code_r0x080038f4:
            _dev_err(uVar7,"fpc %s: Regulator %s not found\n","vreg_setup",piVar5);
            return 0xffffffea;
        }
        if (_segment.ehdr < 0x200) {
            uVar4 = gpio_to_desc(_segment.ehdr);
            uVar3 = gpiod_direction_output_raw(uVar4,1);
            if (uVar3 != 0) {
                pcVar6 = "fpc %s: fail to set gpio %d !\n";
code_r0x080038dc:
                _dev_err(uVar7,pcVar6,"vreg_setup",uVar8);
                return uVar3;
            }
            goto code_r0x08003934;
        }
    }
    _dev_err(uVar7,"fpc %s: unable to get gpio %d!\n","vreg_setup",_segment.ehdr);
code_r0x08003934:
    _dev_info(uVar7,"fpc %s <---: exit!\n","vreg_setup");
    return 0;
}


// ===== sym.power_cfg_set.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt @ 0x08002288 (size 8) =====

int64_t sym.power_cfg_set.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98) + 0x110;
    mutex_lock(iVar1);
    iVar3 = strncmp(param_3,0x8000b4d,3);
    if ((iVar3 == 0) || (iVar4 = strncmp(param_3,0x8000b49,3), iVar4 == 0)) {
        obj.fpc1020_probe.__key = iVar3 != 0;
        iVar3 = 0;
        bVar2 = true;
    }
    else {
        bVar2 = false;
        iVar3 = -0x16;
    }
    mutex_unlock(iVar1);
    _dev_info(param_1,"fpc set power_cfg: %d, rc: %d",obj.fpc1020_probe.__key,iVar3);
    if (!bVar2) {
        param_4 = iVar3;
    }
    return param_4;
}


// ===== sym.power_ctrl_get.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt @ 0x08002290 (size 8) =====

int64_t sym.power_ctrl_get.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98) + 0x110;
    mutex_lock(iVar1);
    uVar2 = regulator_is_enabled(_segment.ehdr);
    mutex_unlock(iVar1);
    iVar3 = scnprintf(param_3,0x1000,0x8000a08,uVar2);
    return iVar3;
}


// ===== sym.irq_get.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt @ 0x08002298 (size 8) =====

int64_t sym.irq_get.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpio_to_desc(*(*(param_1 + 0x98) + 0xf8));
    uVar1 = gpiod_get_raw_value();
    iVar2 = scnprintf(param_3,0x1000,0x8000a08,uVar1);
    return iVar2;
}


// ===== sym.screen_get.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt @ 0x080022a0 (size 8) =====

int64_t sym.screen_get.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    uchar uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x98);
    iVar1 = iVar4 + 0x1e8;
    mutex_lock(iVar1);
    uVar2 = *(iVar4 + 0x1e0);
    mutex_unlock(iVar1);
    iVar3 = scnprintf(param_3,0x1000,0x8000a08,uVar2);
    return iVar3;
}


// ===== sym.fpc1020_probe @ 0x080022a8 (size 852) =====

int sym.fpc1020_probe(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int64_t *arg1_00;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    char *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x10;
    iVar4 = *(arg1 + 0x300);
    arg1_00 = devm_kmalloc(iVar1,0x250,0xdc0);
    _dev_info(iVar1,"fpc %s --->: enter! \n","fpc1020_probe");
    if (arg1_00 == NULL) {
        _dev_err(iVar1,"failed to allocate memory for struct fpc1020_data\n");
        iVar2 = -0xc;
    }
    else {
        *arg1_00 = iVar1;
        *(arg1 + 0xa8) = arg1_00;
        if (iVar4 == 0) {
            _dev_err(iVar1,"no of node found\n");
            iVar2 = -0x16;
        }
        else {
            uVar3 = devm_pinctrl_get(iVar1);
            arg1_00[1] = uVar3;
            if (uVar3 < 0xfffffffffffff001) {
                pcVar5 = "fpc1020_reset_reset";
                uVar3 = pinctrl_lookup_state(uVar3,"fpc1020_reset_reset");
                if (uVar3 < 0xfffffffffffff001) {
                    _dev_info(iVar1,"found pin control %s\n","fpc1020_reset_reset");
                    pcVar5 = "fpc1020_reset_active";
                    arg1_00[2] = uVar3;
                    uVar3 = pinctrl_lookup_state(arg1_00[1],"fpc1020_reset_active");
                    if (uVar3 < 0xfffffffffffff001) {
                        _dev_info(iVar1,"found pin control %s\n","fpc1020_reset_active");
                        arg1_00[3] = uVar3;
                        *(arg1_00 + 0x144) = 1;
                        *(arg1_00 + 0x29) = 0x2001;
                        *(arg1_00 + 0x141) = 0;
                        device_init_wakeup(iVar1,1);
                        __mutex_init(arg1_00 + 0x22,"&fpc1020->lock",obj.fpc1020_probe.__key);
                        __mutex_init(arg1_00 + 0x3d,"&fpc1020->fb_lock",obj.fpc1020_probe.__key);
                        iVar4 = wakeup_source_register(iVar1,"fpc_ttw_wl");
                        arg1_00[4] = iVar4;
                        iVar2 = sysfs_create_group(iVar1,obj.attribute_group);
                        if (iVar2 == 0) {
                            iVar4 = *arg1_00;
                            _dev_info(iVar4,"fpc %s --->: enter!\n","reset_gpio_res");
                            *(arg1_00 + 0x20) = 0xffffffff;
                            *(arg1_00 + 0x1f) = 0xffffffff;
                            _dev_info(iVar4,"fpc %s <---: exit!\n","reset_gpio_res");
                            iVar4 = of_find_property(*(arg1 + 0x300),"fpc,enable-on-boot",0);
                            if (iVar4 != 0) {
                                _dev_info(iVar1,"Enabling hardware\n");
                                sym.device_prepare(arg1_00);
                            }
                            *(arg1_00 + 0x3c) = 0;
                            *(arg1_00 + 0x43) = 0;
                            iVar4 = alloc_workqueue(0x80006f2,0xe000a,1,"screen_state_wq");
                            arg1_00[0x2a] = iVar4;
                            if (iVar4 != 0) {
                                arg1_00[0x2b] = 0xfffffffe0;
                                arg1_00[0x2c] = arg1_00 + 0x2c;
                                arg1_00[0x2d] = arg1_00 + 0x2c;
                                arg1_00[0x2e] =
                                     sym.fpc_register_panel_notifier_work.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt;
                                init_timer_key(arg1_00 + 0x31,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                                queue_delayed_work_on(0x20,arg1_00[0x2a],arg1_00 + 0x2b,0x4e2);
                            }
                            _dev_info(iVar1,"%s: ok\n","fpc1020_probe");
                            iVar2 = 0;
                        }
                        else {
                            _dev_err(iVar1,"fpc could not create sysfs\n");
                        }
                        goto code_r0x080023f8;
                    }
                }
                _dev_err(iVar1,"cannot find \'%s\'\n",pcVar5);
                iVar2 = -0x16;
            }
            else if (uVar3 == 0xfffffffffffffdfb) {
                _dev_info(iVar1,"pinctrl not ready\n");
                iVar2 = -0x205;
            }
            else {
                _dev_err(iVar1,"Target does not use pinctrl\n");
                iVar2 = -0x16;
                arg1_00[1] = 0;
            }
        }
    }
code_r0x080023f8:
    _dev_info(iVar1,"fpc %s <---: exit! \n","fpc1020_probe");
    return iVar2;
}


// ===== sym.fpc1020_remove @ 0x080025fc (size 304) =====

ulong sym.fpc1020_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong *arg1_00;
    ulong uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xa8);
    if (arg1_00[0x2a] != 0) {
        cancel_delayed_work_sync(arg1_00 + 0x2b);
        destroy_workqueue(arg1_00[0x2a]);
    }
    if (_segment.ehdr != 0) {
        if (_segment.ehdr < 0xfffffffffffff001) {
            panel_event_notifier_unregister();
            goto code_r0x0800266c;
        }
    }
    _printk(0x80009cf,"fpc1020_remove");
code_r0x0800266c:
    sysfs_remove_group(arg1 + 0x10,obj.attribute_group);
    wakeup_source_unregister(arg1_00[4]);
    sym.vreg_setup(arg1_00,0x8000e34);
    if (arg1_00 == NULL) {
        _printk("fpc %s: failed to allocate memory for struct fpc1020_data!\n","reset_gpio_res");
    }
    else {
        uVar1 = *arg1_00;
        _dev_info(uVar1,"fpc %s --->: enter!\n","reset_gpio_res");
        *(arg1_00 + 0x20) = 0xffffffff;
        *(arg1_00 + 0x1f) = 0xffffffff;
        _dev_info(uVar1,"fpc %s <---: exit!\n","reset_gpio_res");
    }
    _dev_info(arg1 + 0x10,0x8001289,"fpc1020_remove");
    return 0;
}


// ===== sym.device_prepare @ 0x0800272c (size 704) =====

int sym.device_prepare(int64_t arg1)

{
    ulong uVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    uint64_t in_x1;
    ulong *in_x18;
    ulong uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = *arg1;
    if ((in_x1 & 1) == 0) {
        _dev_info(uVar5,"fpc %s --->: enter, for disable power! \n","device_prepare");
        mutex_lock(arg1 + 0x110);
        if (*(arg1 + 0x140) != '\0') {
            sym.irq_setup(arg1);
            uVar5 = *arg1;
            iVar2 = pinctrl_select_state(*(arg1 + 8),*(arg1 + 0x10));
            if (iVar2 != 0) {
                _dev_err(uVar5,"fpc %s: cannot select \'%s\'\n","select_pin_ctl","fpc1020_reset_reset");
            }
            usleep_range_state(100,1000,2);
            if ((obj.fpc1020_probe.__key & 1) == 0) {
                iVar2 = regulator_disable(_segment.ehdr);
            }
            else {
                iVar2 = sym.vreg_setup(arg1,0x8000e34);
            }
            goto code_r0x08002890;
        }
    }
    else {
        _dev_info(uVar5,"fpc %s --->: enter, for enable power! \n","device_prepare");
        mutex_lock(arg1 + 0x110);
        if (*(arg1 + 0x140) == '\0') {
            iVar2 = sym.irq_setup(arg1);
            uVar1 = *arg1;
            iVar3 = pinctrl_select_state(*(arg1 + 8),*(arg1 + 0x10));
            if (iVar3 != 0) {
                _dev_err(uVar1,"fpc %s: cannot select \'%s\'\n","select_pin_ctl","fpc1020_reset_reset");
            }
            if ((obj.fpc1020_probe.__key & 1) == 0) {
                _printk(0x8000656);
                _segment.ehdr = regulator_get(uVar5,"fp_vdd_vreg");
                if (_segment.ehdr == 0) {
                    _dev_err(uVar5,"fp_vdd_vreg regulator get failed!\n");
                    goto code_r0x08002890;
                }
                iVar3 = regulator_is_enabled();
                if (iVar3 == 0) {
                    iVar2 = regulator_set_load(_segment.ehdr,100000);
                    if (iVar2 < 0) {
                        _dev_err(uVar5,"Regulator set load failed rc = %d\n",iVar2);
                    }
                    iVar2 = regulator_enable(_segment.ehdr);
                    if (iVar2 != 0) {
                        _dev_err(uVar5,"error enabling fp_vdd_vreg!\n");
                        regulator_put(_segment.ehdr);
                        _segment.ehdr = 0;
                        goto code_r0x08002890;
                    }
                }
                else {
                    _printk(0x8001103);
                }
                uVar4 = regulator_get_voltage(_segment.ehdr);
                _printk(0x8001298,uVar4);
            }
            else {
                iVar2 = sym.vreg_setup(arg1,0x8000e34);
                if (iVar2 != 0) {
code_r0x08002890:
                    *(arg1 + 0x140) = 0;
                    goto code_r0x08002894;
                }
            }
            usleep_range_state(100,1000,2);
            uVar5 = *arg1;
            iVar3 = pinctrl_select_state(*(arg1 + 8),*(arg1 + 0x18));
            if (iVar3 != 0) {
                _dev_err(uVar5,"fpc %s: cannot select \'%s\'\n","select_pin_ctl","fpc1020_reset_active");
            }
            sym.hw_reset(arg1);
            *(arg1 + 0x140) = 1;
            goto code_r0x08002894;
        }
    }
    iVar2 = 0;
code_r0x08002894:
    mutex_unlock(arg1 + 0x110);
    return iVar2;
}


// ===== sym.fpc_register_panel_notifier_work @ 0x080029ec (size 500) =====

void sym.fpc_register_panel_notifier_work(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    int iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = of_find_node_by_name(0,"fingerprint-screen");
    if (iVar2 == 0) {
        uVar3 = 0x8000b51;
    }
    else {
        iVar1 = of_count_phandle_with_args(iVar2,"panel",0);
        _printk(0x8000905,"fpc_check_panel",iVar1);
        if (0 < iVar1) {
            iVar4 = 0;
            do {
                of_parse_phandle(iVar2,"panel",iVar4);
                _segment.ehdr = of_drm_find_panel();
                if (_segment.ehdr < 0xfffffffffffff001) {
                    _printk(0x8000697,"fpc_check_panel");
                    break;
                }
                _segment.ehdr = 0;
                _printk(0x8000ac2,"fpc_check_panel");
                iVar4 = iVar4 + 1;
            } while (iVar1 != iVar4);
        }
        if (_segment.ehdr == 0xfffffffffffffdfb) {
            _printk(0x80006bd,"fpc_check_panel");
        }
        if (_segment.ehdr == 0) {
            _printk(0x8000fc5);
            iVar1 = _segment.ehdr;
            _segment.ehdr = CONCAT44(*0x8000004,_segment.ehdr + 1);
            if (iVar1 < 5) {
                queue_delayed_work_on(0x20,*(arg1 + -8),arg1,0x4e2);
                return;
            }
            _printk(0x8000777);
            return;
        }
        _printk(0x8000f2e,_segment.ehdr & 0xffffffff);
        if (_segment.ehdr != 0) {
            return;
        }
        _segment.ehdr =
             panel_event_notifier_register
                       (1,6,0,sym.fpc_screen_state_for_fingerprint_callback.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt,
                        arg1 + -0x158);
        if (_segment.ehdr < 0xfffffffffffff001) {
            uVar3 = 0x800098c;
        }
        else {
            uVar3 = 0x8000f8d;
        }
    }
    _printk(uVar3,"fpc_register_panel_notifier_work");
    return;
}


// ===== sym.screen_get @ 0x08002be0 (size 108) =====

int64_t sym.screen_get(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    uchar uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x98);
    iVar1 = iVar4 + 0x1e8;
    mutex_lock(iVar1);
    uVar2 = *(iVar4 + 0x1e0);
    mutex_unlock(iVar1);
    iVar3 = scnprintf(arg2,0x1000,0x8000a08,uVar2);
    return iVar3;
}


// ===== sym.power_ctrl_get @ 0x08002c4c (size 120) =====

int64_t sym.power_ctrl_get(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98) + 0x110;
    mutex_lock(iVar1);
    uVar2 = regulator_is_enabled(_segment.ehdr);
    mutex_unlock(iVar1);
    iVar3 = scnprintf(arg2,0x1000,0x8000a08,uVar2);
    return iVar3;
}


// ===== sym.power_ctrl_set @ 0x08002cc4 (size 428) =====

int64_t sym.power_ctrl_set(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    iVar1 = arg1_00 + 0x110;
    mutex_lock(iVar1);
    iVar2 = strncmp(arg2,"enable",6);
    if (iVar2 == 0) {
        iVar2 = regulator_is_enabled(_segment.ehdr);
        if (iVar2 < 1) {
            iVar2 = regulator_enable(_segment.ehdr);
            usleep_range_state(100000,200000,2);
            goto code_r0x08002e00;
        }
    }
    else {
        iVar2 = strncmp(arg2,"disable",7);
        if (iVar2 != 0) {
            iVar2 = strncmp(arg2,"force_disable",0xd);
            if (iVar2 == 0) {
                iVar2 = regulator_force_disable(_segment.ehdr);
            }
            else {
                iVar2 = strncmp(arg2,"power_on_reset",0xe);
                if (iVar2 == 0) {
                    iVar2 = regulator_is_enabled(_segment.ehdr);
                    if (iVar2 < 1) {
                        regulator_enable(_segment.ehdr);
                        usleep_range_state(100000,200000,2);
                    }
                    iVar2 = sym.hw_reset(arg1_00);
                }
                else {
                    iVar2 = -0x16;
                }
            }
            goto code_r0x08002e00;
        }
        iVar2 = regulator_is_enabled(_segment.ehdr);
        if (0 < iVar2) {
            iVar2 = regulator_disable(_segment.ehdr);
            goto code_r0x08002e00;
        }
    }
    iVar2 = 0;
code_r0x08002e00:
    uVar3 = regulator_get_voltage(_segment.ehdr);
    uVar4 = regulator_is_enabled(_segment.ehdr);
    _printk(0x8000a0c,"power_ctrl_set",arg2,iVar2,uVar4,uVar3);
    mutex_unlock(iVar1);
    if (iVar2 != 0) {
        arg3 = iVar2;
    }
    return arg3;
}


// ===== sym.hw_reset @ 0x08002e70 (size 292) =====

int sym.hw_reset(int64_t arg1)

{
    ulong uVar1;
    int iVar2;
    uint uVar3;
    ulong uVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *arg1;
    iVar2 = pinctrl_select_state(*(arg1 + 8),*(arg1 + 0x18));
    if (iVar2 == 0) {
        usleep_range_state(100,200,2);
        uVar4 = *arg1;
        iVar2 = pinctrl_select_state(*(arg1 + 8),*(arg1 + 0x10));
        if (iVar2 == 0) {
            usleep_range_state(5000,0x13ec,2);
            uVar4 = *arg1;
            iVar2 = pinctrl_select_state(*(arg1 + 8),*(arg1 + 0x18));
            if (iVar2 == 0) {
                usleep_range_state(5000,0x13ec,2);
                gpio_to_desc(*(arg1 + 0xf8));
                uVar3 = gpiod_get_raw_value();
                _dev_info(uVar1,"IRQ after reset %d\n",uVar3);
                return 0;
            }
            pcVar5 = "fpc1020_reset_active";
        }
        else {
            pcVar5 = "fpc1020_reset_reset";
        }
    }
    else {
        pcVar5 = "fpc1020_reset_active";
        uVar4 = uVar1;
    }
    _dev_err(uVar4,"fpc %s: cannot select \'%s\'\n","select_pin_ctl",pcVar5);
    return iVar2;
}


// ===== sym.request_vreg_gpio_set @ 0x08002f94 (size 1044) =====

int64_t sym.request_vreg_gpio_set(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint uVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *arg2 ^ 0x62616e65;
    piVar7 = *(arg1 + 0x98);
    uVar1 = *(arg2 + 4) ^ 0x656c;
    if ((uVar2 != 0 || uVar1 != 0) && (*arg2 != 0x61736964 || *(arg2 + 3) != 0x656c6261)) {
        return -0x16;
    }
    piVar6 = *piVar7;
    _dev_info(piVar6,"fpc %s --->: enter!\n","request_vreg_gpio");
    mutex_lock(piVar7 + 0x22);
    if (uVar2 != 0 || uVar1 != 0) {
        if (*(piVar7 + 0x142) == '\0') {
            uVar5 = 0;
            goto code_r0x080030c0;
        }
        if (*(piVar7 + 0x141) == '\0') {
            iVar3 = 0;
        }
        else {
            gpio_to_desc(piVar7[0x1f]);
            uVar4 = gpiod_to_irq();
            devm_free_irq(piVar6,uVar4,piVar7);
            _dev_info(piVar6,"fpc irq free successfully!\n");
            iVar3 = 0;
            *(piVar7 + 0x141) = 0;
        }
code_r0x080032f4:
        if (*(piVar7 + 0x1f) < 0x200) {
            devm_gpio_free(piVar6);
            *(piVar7 + 0x1f) = 0xffffffff;
            _dev_info(piVar6,"fpc irq gpio released successfully!\n");
        }
    }
    else {
        if (*(piVar7 + 0x142) != '\0') {
            uVar5 = 1;
code_r0x080030c0:
            _dev_info(piVar6,"%s: enable: %d, gpios_requested: %d ???\n","request_vreg_gpio",uVar2 == 0 && uVar1 == 0
                      ,uVar5);
            iVar3 = 0;
            goto code_r0x08003358;
        }
        iVar8 = *piVar7;
        iVar3 = of_get_named_gpio_flags(*(iVar8 + 0x2f0),"fpc,gpio_vdd1v8",0,0);
        if (iVar3 < 0) {
            _dev_err(iVar8,"failed to get \'%s\'\n","fpc,gpio_vdd1v8");
            _dev_err(piVar6,"fpc vdd1v8 gpio get failed! \n");
            _segment.ehdr = 0xffffffff;
code_r0x0800312c:
            _dev_info(piVar6,"fpc vreg gpio requested successfully!\n");
            iVar8 = *piVar7;
            iVar3 = of_get_named_gpio_flags(*(iVar8 + 0x2f0),"fpc,gpio_irq",0,0);
            if (iVar3 < 0) {
                _dev_err(iVar8,"failed to get \'%s\'\n","fpc,gpio_irq");
                iVar3 = -2;
            }
            else {
                *(piVar7 + 0x1f) = iVar3;
                iVar3 = devm_gpio_request(iVar8,iVar3,"fpc,gpio_irq");
                if (iVar3 == 0) {
                    _dev_info(piVar6,"fpc irq gpio applied at  %d\n",piVar7[0x1f]);
                    _dev_info(piVar6,"fpc irq gpio requested successfully!\n");
                    if (*(piVar7 + 0x141) != '\0') {
                        gpio_to_desc(piVar7[0x1f]);
                        uVar4 = gpiod_to_irq();
                        devm_free_irq(piVar6,uVar4,piVar7);
                        *(piVar7 + 0x141) = 0;
                        _dev_info(piVar6,"fpc irq has been requested already, free firstly!\n");
                    }
                    gpio_to_desc(piVar7[0x1f]);
                    uVar4 = gpiod_to_irq();
                    iVar8 = piVar6[0xe];
                    if (iVar8 == 0) {
                        iVar8 = *piVar6;
                    }
                    iVar3 = devm_request_threaded_irq
                                      (piVar6,uVar4,0,sym.fpc1020_irq_handler.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt
                                       ,piVar7[0x29],iVar8,piVar7);
                    if (iVar3 == 0) {
                        *(piVar7 + 0x141) = 0x101;
                        gpio_to_desc(piVar7[0x1f]);
                        uVar4 = gpiod_to_irq();
                        _dev_info(piVar6,"fpc requested irq %d\n",uVar4);
                        goto code_r0x08003358;
                    }
                    gpio_to_desc(piVar7[0x1f]);
                    uVar4 = gpiod_to_irq();
                    _printk(0x80010d0,uVar4);
                    goto code_r0x080032f4;
                }
                _dev_err(iVar8,"failed to request gpio %d\n",piVar7[0x1f]);
                iVar3 = -3;
            }
            _printk(0x8001219);
            goto code_r0x080032f4;
        }
        *(piVar7 + 0x20) = iVar3;
        iVar3 = devm_gpio_request(iVar8,iVar3,"fpc,gpio_vdd1v8");
        if (iVar3 == 0) {
            _dev_info(piVar6,"fpc vdd1v8 gpio applied at  %d\n",piVar7[0x20]);
            _segment.ehdr = piVar7[0x20];
            goto code_r0x0800312c;
        }
        _dev_err(iVar8,"failed to request gpio %d\n",piVar7[0x20]);
        _dev_err(piVar6,"fpc vdd1v8 gpio request failed! \n");
        iVar3 = -3;
    }
    if (*(piVar7 + 0x20) < 0x200) {
        devm_gpio_free(piVar6);
        *(piVar7 + 0x20) = 0xffffffff;
        _segment.ehdr = 0xffffffff;
        _dev_info(piVar6,"fpc vreg gpio released successfully!\n");
    }
    *(piVar7 + 0x142) = 0;
code_r0x08003358:
    mutex_unlock(piVar7 + 0x22);
    _dev_info(piVar6,"fpc %s <---: exit!\n","request_vreg_gpio");
    if (iVar3 != 0) {
        arg3 = iVar3;
    }
    return arg3;
}


// ===== sym.fpc1020_irq_handler @ 0x080033a8 (size 160) =====

ulong sym.fpc1020_irq_handler(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x144) != 0) {
        *(arg1 + 0x104) = *(arg1 + 0x104) + 1;
        pm_wakeup_ws_event(*(arg1 + 0x20),2000,0);
    }
    sysfs_notify(*arg1,0,_segment.ehdr);
    if (((*(arg1 + 0x218) != '\0') && (*(arg1 + 0x1e0) != '\0')) && (*(arg1 + 0x140) != '\0')) {
        _printk(0x8000836,"fpc1020_irq_handler");
        *(arg1 + 0x218) = 0;
    }
    return 1;
}


// ===== sym.pinctl_set @ 0x0800344c (size 320) =====

int64_t sym.pinctl_set(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    int iVar2;
    char *pcVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong uVar5;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar6 = *(arg1 + 0x98);
    puVar1 = puVar6 + 0x22;
    mutex_lock(puVar1);
    uVar5 = *puVar6;
    iVar4 = 0;
    if ((*arg2 != 0x5f30323031637066 || *(arg2 + 8) != 0x65725f7465736572) || *(arg2 + 0xb) != 0x74657365725f7465) {
        if ((*arg2 != 0x5f30323031637066 || *(arg2 + 8) != 0x63615f7465736572) || *(arg2 + 0x10) != 0x65766974) {
            iVar2 = -0x16;
            pcVar3 = "%s:\'%s\' not found gpio\n";
            goto code_r0x08003568;
        }
        iVar4 = 1;
    }
    iVar2 = pinctrl_select_state(puVar6[1],puVar6[iVar4 + 2]);
    if (iVar2 == 0) {
        mutex_unlock(puVar1);
        return arg3;
    }
    pcVar3 = "fpc %s: cannot select \'%s\'\n";
code_r0x08003568:
    _dev_err(uVar5,pcVar3,"select_pin_ctl",arg2);
    mutex_unlock(puVar1);
    return iVar2;
}


// ===== sym.device_prepare_set @ 0x0800358c (size 148) =====

int64_t sym.device_prepare_set(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    iVar1 = strncmp(arg2,"enable",6);
    if ((iVar1 == 0) || (iVar1 = strncmp(arg2,"disable",7), iVar1 == 0)) {
        iVar1 = sym.device_prepare(arg1_00);
        if (iVar1 != 0) {
            arg3 = iVar1;
        }
    }
    else {
        arg3 = -0x16;
    }
    return arg3;
}


// ===== sym.power_cfg_set @ 0x08003620 (size 216) =====

int64_t sym.power_cfg_set(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98) + 0x110;
    mutex_lock(iVar1);
    iVar3 = strncmp(arg2,0x8000b4d,3);
    if ((iVar3 == 0) || (iVar4 = strncmp(arg2,0x8000b49,3), iVar4 == 0)) {
        obj.fpc1020_probe.__key = iVar3 != 0;
        iVar3 = 0;
        bVar2 = true;
    }
    else {
        bVar2 = false;
        iVar3 = -0x16;
    }
    mutex_unlock(iVar1);
    _dev_info(arg1,"fpc set power_cfg: %d, rc: %d",obj.fpc1020_probe.__key,iVar3);
    if (!bVar2) {
        arg3 = iVar3;
    }
    return arg3;
}


// ===== sym.regulator_enable_set @ 0x080036f8 (size 228) =====

int64_t sym.regulator_enable_set(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    int *piVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar7;
    uint32_t uVar8;
    int64_t iVar9;
    ulong *puVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint8_t auStack_4c [4];
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    puVar10 = &uStack_48;
    iVar9 = *(arg1 + 0x98);
    auStack_4c[0] = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar2 = sscanf(arg2,"%15[^,],%c",puVar10,auStack_4c);
    if ((iVar2 == 2) && ((auStack_4c[0] & 0xfe) == 100)) {
        iVar1 = iVar9 + 0x110;
        puVar10 = auStack_4c[0] == 0x65;
        mutex_lock(iVar1);
        iVar2 = sym.vreg_setup(iVar9,&uStack_48);
        mutex_unlock(iVar1);
        if (iVar2 != 0) {
            arg3 = iVar2;
        }
    }
    else {
        arg3 = 0xffffffffffffffea;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return arg3;
    }
    auVar11 = __stack_chk_fail(arg3);
    piVar5 = auVar11._8_8_;
    *extraout_x18 = sym.vreg_setup;
    uVar7 = *auVar11._0_8_;
    if ((puVar10 & 1) == 0) {
        _dev_info(uVar7,"fpc %s --->: enter, for power off at %s.\n","vreg_setup",piVar5);
        uVar8 = _segment.ehdr;
        if (*piVar5 != 0x5f646476 || *(piVar5 + 3) != 0x616e615f) goto code_r0x080038f4;
        if (_segment.ehdr < 0x200) {
            uVar4 = gpio_to_desc(_segment.ehdr);
            uVar3 = gpiod_direction_output_raw(uVar4,0);
            if (uVar3 != 0) {
                pcVar6 = "fpc %s: fail to clear gpio %d!\n";
                goto code_r0x080038dc;
            }
            goto code_r0x08003934;
        }
    }
    else {
        _dev_info(uVar7,"fpc %s --->: enter, for power on at %s.\n","vreg_setup",piVar5);
        uVar8 = _segment.ehdr;
        if (*piVar5 != 0x5f646476 || *(piVar5 + 3) != 0x616e615f) {
code_r0x080038f4:
            _dev_err(uVar7,"fpc %s: Regulator %s not found\n","vreg_setup",piVar5);
            return 0xffffffea;
        }
        if (_segment.ehdr < 0x200) {
            uVar4 = gpio_to_desc(_segment.ehdr);
            uVar3 = gpiod_direction_output_raw(uVar4,1);
            if (uVar3 != 0) {
                pcVar6 = "fpc %s: fail to set gpio %d !\n";
code_r0x080038dc:
                _dev_err(uVar7,pcVar6,"vreg_setup",uVar8);
                return uVar3;
            }
            goto code_r0x08003934;
        }
    }
    _dev_err(uVar7,"fpc %s: unable to get gpio %d!\n","vreg_setup",_segment.ehdr);
code_r0x08003934:
    _dev_info(uVar7,"fpc %s <---: exit!\n","vreg_setup");
    return 0;
}


// ===== sym.vreg_setup @ 0x080037dc (size 400) =====

int sym.vreg_setup(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    char *pcVar3;
    uint64_t in_x2;
    ulong *in_x18;
    ulong uVar4;
    uint32_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = *arg1;
    if ((in_x2 & 1) == 0) {
        _dev_info(uVar4,"fpc %s --->: enter, for power off at %s.\n","vreg_setup",arg2);
        uVar5 = _segment.ehdr;
        if (*arg2 != 0x5f646476 || *(arg2 + 3) != 0x616e615f) goto code_r0x080038f4;
        if (_segment.ehdr < 0x200) {
            uVar2 = gpio_to_desc(_segment.ehdr);
            iVar1 = gpiod_direction_output_raw(uVar2,0);
            if (iVar1 != 0) {
                pcVar3 = "fpc %s: fail to clear gpio %d!\n";
                goto code_r0x080038dc;
            }
            goto code_r0x08003934;
        }
    }
    else {
        _dev_info(uVar4,"fpc %s --->: enter, for power on at %s.\n","vreg_setup",arg2);
        uVar5 = _segment.ehdr;
        if (*arg2 != 0x5f646476 || *(arg2 + 3) != 0x616e615f) {
code_r0x080038f4:
            _dev_err(uVar4,"fpc %s: Regulator %s not found\n","vreg_setup",arg2);
            return -0x16;
        }
        if (_segment.ehdr < 0x200) {
            uVar2 = gpio_to_desc(_segment.ehdr);
            iVar1 = gpiod_direction_output_raw(uVar2,1);
            if (iVar1 != 0) {
                pcVar3 = "fpc %s: fail to set gpio %d !\n";
code_r0x080038dc:
                _dev_err(uVar4,pcVar3,"vreg_setup",uVar5);
                return iVar1;
            }
            goto code_r0x08003934;
        }
    }
    _dev_err(uVar4,"fpc %s: unable to get gpio %d!\n","vreg_setup",_segment.ehdr);
code_r0x08003934:
    _dev_info(uVar4,"fpc %s <---: exit!\n","vreg_setup");
    return 0;
}


// ===== sym.hw_reset_set @ 0x0800396c (size 232) =====

int64_t sym.hw_reset_set(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    uint uVar3;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    iVar2 = strncmp(arg2,"reset",5);
    if (iVar2 == 0) {
        iVar1 = arg1_00 + 0x110;
        mutex_lock(iVar1);
        uVar3 = regulator_get_voltage(_segment.ehdr);
        _printk(0x8001242,"power_reset",uVar3);
        regulator_disable(_segment.ehdr);
        usleep_range_state(100000,200000,2);
        regulator_enable(_segment.ehdr);
        usleep_range_state(100000,200000,2);
        iVar2 = sym.hw_reset(arg1_00);
        mutex_unlock(iVar1);
        if (iVar2 != 0) {
            arg3 = iVar2;
        }
    }
    else {
        arg3 = -0x16;
    }
    return arg3;
}


// ===== sym.wakeup_enable_set @ 0x08003a54 (size 72) =====

int64_t sym.wakeup_enable_set(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98) + 0x110;
    mutex_lock(iVar1);
    mutex_unlock(iVar1);
    return arg2;
}


// ===== sym.handle_wakelock_cmd @ 0x08003a9c (size 224) =====

int64_t sym.handle_wakelock_cmd(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x98);
    mutex_lock(iVar3 + 0x110);
    iVar1 = arg3;
    if (0x21 < arg3) {
        iVar1 = 0x22;
    }
    iVar2 = strncmp(arg2,"release_wakelock_with_verification",iVar1);
    if (iVar2 == 0) {
        if (*(iVar3 + 0x108) != *(iVar3 + 0x104)) goto code_r0x08003b58;
    }
    else {
        iVar1 = arg3;
        if (0xf < arg3) {
            iVar1 = 0x10;
        }
        iVar2 = strncmp(arg2,"release_wakelock",iVar1);
        if (iVar2 != 0) {
            iVar1 = arg3;
            if (0x1a < arg3) {
                iVar1 = 0x1b;
            }
            iVar2 = strncmp(arg2,"start_irqs_received_counter",iVar1);
            if (iVar2 == 0) {
                *(iVar3 + 0x108) = *(iVar3 + 0x104);
            }
            else {
                arg3 = -0x16;
            }
            goto code_r0x08003b58;
        }
    }
    __pm_relax(*(iVar3 + 0x20));
code_r0x08003b58:
    mutex_unlock(iVar3 + 0x110);
    return arg3;
}


// ===== sym.clk_enable_set @ 0x08003b7c (size 16) =====

int64_t sym.clk_enable_set(int64_t arg1)

{
    return arg1;
}


// ===== sym.irq_enable_set @ 0x08003b8c (size 148) =====

int64_t sym.irq_enable_set(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    if (*arg2 == '0') {
        mutex_lock(iVar1 + 0x110);
        gpio_to_desc(*(iVar1 + 0xf8));
        gpiod_to_irq();
        disable_irq();
    }
    else {
        if (*arg2 != '1') {
            return arg3;
        }
        mutex_lock(iVar1 + 0x110);
        gpio_to_desc(*(iVar1 + 0xf8));
        gpiod_to_irq();
        enable_irq();
    }
    mutex_unlock(iVar1 + 0x110);
    return arg3;
}


// ===== sym.irq_get @ 0x08003c20 (size 88) =====

int64_t sym.irq_get(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpio_to_desc(*(*(arg1 + 0x98) + 0xf8));
    uVar1 = gpiod_get_raw_value();
    iVar2 = scnprintf(arg2,0x1000,0x8000a08,uVar1);
    return iVar2;
}


// ===== sym.irq_ack @ 0x08003c78 (size 16) =====

int64_t sym.irq_ack(int64_t arg1)

{
    return arg1;
}


// ===== sym.vendor_update @ 0x08003c88 (size 16) =====

int64_t sym.vendor_update(int64_t arg1)

{
    return arg1;
}


// ===== sym.fingerdown_wait_set @ 0x08003c98 (size 180) =====

int64_t sym.fingerdown_wait_set(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uchar uVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = *(arg1 + 0x98);
    _dev_info(*puVar3,"%s -> %s\n","fingerdown_wait_set",arg2);
    iVar1 = strncmp(arg2,"enable",6);
    if ((iVar1 == 0) && (*(puVar3 + 0x28) != '\0')) {
        uVar2 = 1;
    }
    else {
        iVar1 = strncmp(arg2,"disable",7);
        if ((iVar1 != 0) || (*(puVar3 + 0x28) == '\0')) {
            return -0x16;
        }
        uVar2 = 0;
    }
    *(puVar3 + 0x43) = uVar2;
    return arg3;
}


// ===== sym.irq_setup @ 0x08003d4c (size 300) =====

uint sym.irq_setup(int64_t arg1)

{
    ulong uVar1;
    uint64_t in_x1;
    char *pcVar2;
    ulong *in_x18;
    ulong uVar3;
    uint uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *arg1;
    if ((in_x1 & 1) == 0) {
        _dev_info(uVar3,"fpc %s --->: enter, for disable irq!\n","irq_setup");
        if (0x1ff < *(arg1 + 0xf8)) goto code_r0x08003e2c;
        _dev_info(uVar3,"fpc %s irq_gpio is validate!\n","irq_setup");
        gpio_to_desc(*(arg1 + 0xf8));
        gpiod_to_irq();
        disable_irq();
        pcVar2 = "fpc irq_gpio is disable. \n";
    }
    else {
        _dev_info(uVar3,"fpc %s --->: enter, for enable irq!\n","irq_setup");
        if (0x1ff < *(arg1 + 0xf8)) {
code_r0x08003e2c:
            _dev_info(uVar3,"fpc %s irq_gpio is invalidate!\n","irq_setup");
            uVar4 = 0xffffffea;
            goto code_r0x08003e48;
        }
        _dev_info(uVar3,"fpc %s irq_gpio is validate!\n","irq_setup");
        gpio_to_desc(*(arg1 + 0xf8));
        uVar1 = gpiod_to_irq();
        irq_set_irq_wake(uVar1,1);
        pcVar2 = "fpc irq_gpio is enable. \n";
    }
    _dev_info(uVar3,pcVar2);
    uVar4 = 0;
code_r0x08003e48:
    _dev_info(uVar3,"fpc %s <---: exit!\n","irq_setup");
    return uVar4;
}


// ===== sym.fpc_screen_state_for_fingerprint_callback @ 0x08003e78 (size 236) =====

void sym.fpc_screen_state_for_fingerprint_callback(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (arg2 == 0) {
            _printk(0x8000ea1,"fpc_screen_state_for_fingerprint_callback");
        }
        else if (((*(arg2 + 0xc) == '\0') && (arg1 == 1)) && (*(arg3 + 0x140) != '\0')) {
            if (*arg2 == 1) {
                _printk(0x8000598,"fpc_screen_state_for_fingerprint_callback");
                mutex_lock(arg3 + 0x1e8);
                *(arg3 + 0x1e0) = 1;
                mutex_unlock(arg3 + 0x1e8);
                sysfs_notify(*arg3,0,_segment.ehdr);
            }
            else if (*arg2 == 2) {
                _printk(0x8000938,"fpc_screen_state_for_fingerprint_callback");
                mutex_lock(arg3 + 0x1e8);
                *(arg3 + 0x1e0) = 0;
                mutex_unlock(arg3 + 0x1e8);
            }
        }
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08003f64 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08003fa8

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
    //switch table (4 cases) at 0x8000538
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003fbc);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08003fc4 (size 120) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register(reloc.fpc1020_probe.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt,obj.__this_module);
    if (iVar1 == 0) {
        _printk(0x80007b6,"fpc1020_init");
    }
    else {
        _printk(0x8000617,"fpc1020_init",iVar1);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x0800403c (size 64) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8001080,"fpc1020_exit");
    platform_driver_unregister(reloc.fpc1020_probe.cf65308ffbabe97c5c5117a5b0f3248c.cfi_jt);
    return;
}

