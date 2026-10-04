// decompiled from smp2p_sleepstate by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 196) =====

//WARNING: Switch with 1 destination removed at 0x08001364

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x3987c0e26ee29729) {
            uVar2 = 0x80010e8;
        }
        else {
            if (arg1 != -0x3557318fb8d07b71) goto code_r0x08001324;
            uVar2 = 0x80010e0;
        }
    }
    else if (arg1 == 0x2b3a43e29242445) {
        uVar2 = 0x80010d0;
    }
    else {
        if (arg1 != 0x7d57972cd3914fb1) goto code_r0x08001324;
        uVar2 = 0x80010d8;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x08001324:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001378);
    (*pcVar1)();
}


// ===== sym.init_module.cfi_jt @ 0x080010d0 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register
                      (reloc.smp2p_sleepstate_probe.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,obj.__this_module);
    if (iVar1 != 0) {
        _printk(0x800016e,"smp2p_sleepstate_init",iVar1);
    }
    return iVar1;
}


// ===== sym.sleepstate_pm_notifier.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080010d8 (size 8) =====

ulong sym.sleepstate_pm_notifier.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_2 == 3) {
        uVar1 = 0;
    }
    else {
        if (param_2 != 4) {
            return 0;
        }
        uVar1 = 0x1000;
    }
    *in_x18 = unaff_x30;
    qcom_smem_state_update_bits(*(param_1 + -8),0x1000,uVar1);
    return 0;
}


// ===== sym.smp2p_sleepstate_probe.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080010e0 (size 8) =====

uint64_t sym.smp2p_sleepstate_probe.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    uint64_t *puVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t *puVar6;
    ulong uVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iVar1 = param_1 + 0x10;
    iStack_38 = *(iVar2 + 0x5e0);
    uVar7 = *(param_1 + 0x300);
    uStack_3c = 0;
    puVar4 = devm_kmalloc(iVar1,0x20,0xdc0);
    uVar5 = 0;
    if (puVar4 != NULL) {
        uVar5 = qcom_smem_state_get(iVar1,0,&uStack_3c);
        *puVar4 = uVar5;
        if (uVar5 < 0xfffffffffffff001) {
            qcom_smem_state_update_bits(uVar5,0x1000,0x1000);
            puVar6 = puVar4 + 1;
            *puVar6 = sym.sleepstate_pm_notifier.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
            *(puVar4 + 3) = 0x7fffffff;
            uStack_3c = register_pm_notifier(puVar6);
            if (uStack_3c == 0) {
                _segment.ehdr = wakeup_source_register(iVar1,0x8000135);
                if (_segment.ehdr == 0) {
                    uVar5 = 0xfffffff4;
                    goto code_r0x08001264;
                }
                iVar3 = of_irq_get_byname(uVar7,"smp2p-sleepstate-in");
                if (iVar3 < 1) {
                    _dev_err(iVar1,"failed to get irq for smp2p_sleep_state\n");
                    uStack_3c = 0xfffffdfb;
                }
                else {
                    uVar5 = devm_request_threaded_irq
                                      (iVar1,iVar3,0,
                                       sym.smp2p_sleepstate_handler.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,0x2001,
                                       "smp2p_sleepstate",iVar1);
                    uStack_3c = uVar5;
                    if (uStack_3c == 0) goto code_r0x08001264;
                    _dev_err(iVar1,"fail to register smp2p threaded_irq=%d\n",iVar3);
                }
                wakeup_source_unregister(_segment.ehdr);
                __pm_relax(_segment.ehdr);
                unregister_pm_notifier(puVar6);
            }
            else {
                _dev_err(iVar1,"%s: power state notif error %d\n","smp2p_sleepstate_probe",uStack_3c);
            }
            uVar5 = uStack_3c;
        }
    }
code_r0x08001264:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar5;
    }
    auVar8 = __stack_chk_fail(uVar5);
    if (auVar8._8_8_ == 3) {
        uVar7 = 0;
    }
    else {
        if (auVar8._8_8_ != 4) {
            return 0;
        }
        uVar7 = 0x1000;
    }
    *extraout_x18 = sym.sleepstate_pm_notifier;
    qcom_smem_state_update_bits(*(auVar8._0_8_ + -8),0x1000,uVar7);
    return 0;
}


// ===== sym.smp2p_sleepstate_handler.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080010e8 (size 8) =====

ulong sym.smp2p_sleepstate_handler.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pm_wakeup_ws_event(_segment.ehdr,200,0);
    return 1;
}


// ===== sym.smp2p_sleepstate_probe @ 0x080010f0 (size 424) =====

uint64_t sym.smp2p_sleepstate_probe(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    uint64_t *puVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t *puVar6;
    ulong uVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iVar1 = arg1 + 0x10;
    iStack_38 = *(iVar2 + 0x5e0);
    uVar7 = *(arg1 + 0x300);
    uStack_3c = 0;
    puVar4 = devm_kmalloc(iVar1,0x20,0xdc0);
    uVar5 = 0;
    if (puVar4 != NULL) {
        uVar5 = qcom_smem_state_get(iVar1,0,&uStack_3c);
        *puVar4 = uVar5;
        if (uVar5 < 0xfffffffffffff001) {
            qcom_smem_state_update_bits(uVar5,0x1000,0x1000);
            puVar6 = puVar4 + 1;
            *puVar6 = sym.sleepstate_pm_notifier.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
            *(puVar4 + 3) = 0x7fffffff;
            uStack_3c = register_pm_notifier(puVar6);
            if (uStack_3c == 0) {
                _segment.ehdr = wakeup_source_register(iVar1,0x8000135);
                if (_segment.ehdr == 0) {
                    uVar5 = 0xfffffff4;
                    goto code_r0x08001264;
                }
                iVar3 = of_irq_get_byname(uVar7,"smp2p-sleepstate-in");
                if (iVar3 < 1) {
                    _dev_err(iVar1,"failed to get irq for smp2p_sleep_state\n");
                    uStack_3c = 0xfffffdfb;
                }
                else {
                    uVar5 = devm_request_threaded_irq
                                      (iVar1,iVar3,0,
                                       sym.smp2p_sleepstate_handler.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,0x2001,
                                       "smp2p_sleepstate",iVar1);
                    uStack_3c = uVar5;
                    if (uStack_3c == 0) goto code_r0x08001264;
                    _dev_err(iVar1,"fail to register smp2p threaded_irq=%d\n",iVar3);
                }
                wakeup_source_unregister(_segment.ehdr);
                __pm_relax(_segment.ehdr);
                unregister_pm_notifier(puVar6);
            }
            else {
                _dev_err(iVar1,"%s: power state notif error %d\n","smp2p_sleepstate_probe",uStack_3c);
            }
            uVar5 = uStack_3c;
        }
    }
code_r0x08001264:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar5;
    }
    auVar8 = __stack_chk_fail(uVar5);
    if (auVar8._8_8_ == 3) {
        uVar7 = 0;
    }
    else {
        if (auVar8._8_8_ != 4) {
            return 0;
        }
        uVar7 = 0x1000;
    }
    *extraout_x18 = sym.sleepstate_pm_notifier;
    qcom_smem_state_update_bits(*(auVar8._0_8_ + -8),0x1000,uVar7);
    return 0;
}


// ===== sym.sleepstate_pm_notifier @ 0x08001298 (size 80) =====

ulong sym.sleepstate_pm_notifier(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg2 == 3) {
        uVar1 = 0;
    }
    else {
        if (arg2 != 4) {
            return 0;
        }
        uVar1 = 0x1000;
    }
    *in_x18 = unaff_x30;
    qcom_smem_state_update_bits(*(arg1 + -8),0x1000,uVar1);
    return 0;
}


// ===== sym.smp2p_sleepstate_handler @ 0x080012e8 (size 56) =====

ulong sym.smp2p_sleepstate_handler(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pm_wakeup_ws_event(_segment.ehdr,200,0);
    return 1;
}


// ===== sym.__cfi_check_fail @ 0x08001320 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001364

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
    //switch table (4 cases) at 0x8000130
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001378);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001384 (size 100) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register
                      (reloc.smp2p_sleepstate_probe.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,obj.__this_module);
    if (iVar1 != 0) {
        _printk(0x800016e,"smp2p_sleepstate_init",iVar1);
    }
    return iVar1;
}

