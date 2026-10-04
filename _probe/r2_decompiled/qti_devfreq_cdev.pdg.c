// decompiled from qti_devfreq_cdev by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 404) =====

//WARNING: Switch with 1 destination removed at 0x0800163c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x519d946a5cb8d608) {
        if (arg1 < -0x2ee0710dce68437c) {
            if (arg1 != -0x550b9e52359ac614) {
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x080015fc;
                pcVar2 = sym.devfreq_cdev_remove.a9065db39d39c536a93193ec139f92df.cfi_jt;
code_r0x080010c0:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x080015fc;
            }
            pcVar2 = sym.devfreq_cdev_work.a9065db39d39c536a93193ec139f92df.cfi_jt;
        }
        else if (arg1 == -0x2ee0710dce68437c) {
            pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x080015fc;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x6dc47d641f895af1) {
        if (arg1 != 0x519d946a5cb8d608) {
            if (arg1 != 0x6b571d3f779580cd) goto code_r0x080015fc;
            pcVar2 = sym.devfreq_cdev_get_max_state.a9065db39d39c536a93193ec139f92df.cfi_jt;
            goto code_r0x080010c0;
        }
        pcVar2 = sym.devfreq_cdev_set_state.a9065db39d39c536a93193ec139f92df.cfi_jt;
    }
    else if (arg1 == 0x6dc47d641f895af1) {
        pcVar2 = sym.get_perfmgr_devfreq.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080015fc;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080015fc:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001650);
    (*pcVar1)();
}


// ===== sym.devfreq_cdev_set_state.a9065db39d39c536a93193ec139f92df.cfi_jt @ 0x080011a0 (size 8) =====

int sym.devfreq_cdev_set_state.a9065db39d39c536a93193ec139f92df.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    uint64_t uVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x3a8);
    if (*(iVar3 + 0x24) < param_2) {
        iVar1 = -0x16;
    }
    else if (*(iVar3 + 0x20) == param_2) {
        iVar1 = 0;
    }
    else {
        uVar2 = *(*(iVar3 + 0x18) + param_2 * 8);
        iVar1 = dev_pm_qos_update_request(iVar3 + 0x30,uVar2 & 0xffffffff);
        if (iVar1 < 0) {
            _printk(0x800018a,"qti_devfreq_cdev","devfreq_cdev_set_state",uVar2,*(param_1 + 8),iVar1);
        }
        else {
            iVar1 = 0;
            *(iVar3 + 0x20) = param_2;
        }
    }
    return iVar1;
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x080011a8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011b0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.devfreq_cdev_probe.a9065db39d39c536a93193ec139f92df.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011b8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.devfreq_cdev_probe.a9065db39d39c536a93193ec139f92df.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.get_perfmgr_devfreq.cfi_jt @ 0x080011c0 (size 8) =====

ulong sym.get_perfmgr_devfreq.cfi_jt(void)

{
    return _segment.ehdr;
}


// ===== sym.devfreq_cdev_get_max_state.a9065db39d39c536a93193ec139f92df.cfi_jt @ 0x080011c8 (size 8) =====

ulong sym.devfreq_cdev_get_max_state.a9065db39d39c536a93193ec139f92df.cfi_jt(int64_t param_1,int64_t *param_2)

{
    *param_2 = *(*(param_1 + 0x3a8) + 0x24);
    return 0;
}


// ===== sym.devfreq_cdev_get_state.a9065db39d39c536a93193ec139f92df.cfi_jt @ 0x080011d0 (size 8) =====

ulong sym.devfreq_cdev_get_state.a9065db39d39c536a93193ec139f92df.cfi_jt(int64_t param_1,int64_t *param_2)

{
    *param_2 = *(*(param_1 + 0x3a8) + 0x20);
    return 0;
}


// ===== sym.devfreq_cdev_work.a9065db39d39c536a93193ec139f92df.cfi_jt @ 0x080011d8 (size 8) =====

uint64_t sym.devfreq_cdev_work.a9065db39d39c536a93193ec139f92df.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t *puVar5;
    ulong uVar6;
    ulong *in_x18;
    uint64_t *puVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    uVar3 = devfreq_get_devfreq_by_node(*(param_1 + -0x88));
    if (uVar3 < 0xfffffffffffff001) {
        if (_segment.ehdr == 0) {
            _segment.ehdr = uVar3;
        }
        uVar6 = *(uVar3 + 0xa0);
        *(param_1 + -0x80) = uVar3;
        *(param_1 + -0x78) = uVar6;
        uVar4 = dev_pm_opp_get_opp_count(uVar6);
        iVar2 = uVar4;
        uVar3 = uVar4;
        if ((iVar2 >> 0x3d == 0) &&
           (puVar5 = __kmalloc(-((uVar4 & 0xffffffff) >> 0x1f) & 0xfffffff800000000 | (uVar4 & 0xffffffff) << 3,0xdc0)
           , uVar3 = 0, puVar5 != NULL)) {
            iStack_50 = -1;
            if (0 < iVar2) {
                uVar4 = uVar4 & 0xffffffff;
                puVar7 = puVar5;
                do {
                    uVar3 = dev_pm_opp_find_freq_floor(*(param_1 + -0x78),&iStack_50);
                    if (0xfffffffffffff000 < uVar3) goto code_r0x080014b8;
                    dev_pm_opp_put();
                    uVar4 = uVar4 - 1;
                    uVar3 = iStack_50 + 999;
                    iStack_50 = iStack_50 + -1;
                    *puVar7 = uVar3 / 1000;
                    puVar7 = puVar7 + 1;
                } while (uVar4 != 0);
            }
            *(param_1 + -100) = iVar2 + -1;
            *(param_1 + -0x70) = puVar5;
            iVar2 = dev_pm_qos_add_request(*(param_1 + -0x78),param_1 + -0x58,4,0x7fffffff);
            if (-1 < iVar2) {
                uVar3 = thermal_cooling_device_register
                                  (0x80001f5,param_1 + -0x88,
                                   reloc.devfreq_cdev_get_max_state.a9065db39d39c536a93193ec139f92df.cfi_jt);
                *(param_1 + 0x88) = uVar3;
                if (uVar3 < 0xfffffffffffff001) goto code_r0x080014c8;
                _printk(0x80001f9,"qti_devfreq_cdev","devfreq_cdev_work",uVar3);
                *(param_1 + 0x88) = 0;
            }
code_r0x080014b8:
            kfree(*(param_1 + -0x70));
            uVar3 = dev_pm_qos_remove_request(param_1 + -0x58);
        }
    }
    else {
        iVar2 = *(param_1 + -0x60) + -1;
        *(param_1 + -0x60) = iVar2;
        if (iVar2 != 0) {
            uVar3 = queue_delayed_work_on(0x20,_delayed_work_timer_fn,param_1,0xfa);
        }
    }
code_r0x080014c8:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return uVar3;
    }
    auVar8 = __stack_chk_fail();
    *auVar8._8_8_ = *(*(auVar8._0_8_ + 0x3a8) + 0x24);
    return 0;
}


// ===== sym.devfreq_cdev_remove.a9065db39d39c536a93193ec139f92df.cfi_jt @ 0x080011e0 (size 8) =====

ulong sym.devfreq_cdev_remove.a9065db39d39c536a93193ec139f92df.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(_segment.ehdr + 0x110) != 0) {
        thermal_cooling_device_unregister();
        dev_pm_qos_remove_request(_segment.ehdr + 0x30);
        kfree(*(_segment.ehdr + 0x18));
        *(_segment.ehdr + 0x110) = 0;
    }
    return 0;
}


// ===== sym.devfreq_cdev_probe.a9065db39d39c536a93193ec139f92df.cfi_jt @ 0x080011e8 (size 8) =====

ulong sym.devfreq_cdev_probe.a9065db39d39c536a93193ec139f92df.cfi_jt(int64_t param_1)

{
    ulong *puVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = devm_kmalloc(param_1 + 0x10,0x118,0xdc0);
    if (_segment.ehdr == NULL) {
        uVar2 = 0xfffffff4;
    }
    else {
        uVar2 = of_parse_phandle(*(param_1 + 0x300),"qcom,devfreq",0);
        puVar1 = _segment.ehdr;
        *_segment.ehdr = uVar2;
        *(puVar1 + 5) = 0x14;
        puVar1[0x11] = 0xfffffffe0;
        puVar1[0x12] = puVar1 + 0x12;
        puVar1[0x13] = puVar1 + 0x12;
        puVar1[0x14] = sym.devfreq_cdev_work.a9065db39d39c536a93193ec139f92df.cfi_jt;
        init_timer_key(puVar1 + 0x17,sym.delayed_work_timer_fn.cfi_jt,0x280000,0,0);
        queue_delayed_work_on(0x20,_delayed_work_timer_fn,_segment.ehdr + 0x11,0);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.get_perfmgr_devfreq @ 0x080011f0 (size 20) =====

ulong sym.get_perfmgr_devfreq(void)

{
    return _segment.ehdr;
}


// ===== sym.devfreq_cdev_probe @ 0x08001204 (size 208) =====

ulong sym.devfreq_cdev_probe(int64_t arg1)

{
    ulong *puVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = devm_kmalloc(arg1 + 0x10,0x118,0xdc0);
    if (_segment.ehdr == NULL) {
        uVar2 = 0xfffffff4;
    }
    else {
        uVar2 = of_parse_phandle(*(arg1 + 0x300),"qcom,devfreq",0);
        puVar1 = _segment.ehdr;
        *_segment.ehdr = uVar2;
        *(puVar1 + 5) = 0x14;
        puVar1[0x11] = 0xfffffffe0;
        puVar1[0x12] = puVar1 + 0x12;
        puVar1[0x13] = puVar1 + 0x12;
        puVar1[0x14] = sym.devfreq_cdev_work.a9065db39d39c536a93193ec139f92df.cfi_jt;
        init_timer_key(puVar1 + 0x17,sym.delayed_work_timer_fn.cfi_jt,0x280000,0,0);
        queue_delayed_work_on(0x20,_delayed_work_timer_fn,_segment.ehdr + 0x11,0);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.devfreq_cdev_remove @ 0x080012d4 (size 96) =====

ulong sym.devfreq_cdev_remove(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(_segment.ehdr + 0x110) != 0) {
        thermal_cooling_device_unregister();
        dev_pm_qos_remove_request(_segment.ehdr + 0x30);
        kfree(*(_segment.ehdr + 0x18));
        *(_segment.ehdr + 0x110) = 0;
    }
    return 0;
}


// ===== sym.devfreq_cdev_work @ 0x08001334 (size 460) =====

uint64_t sym.devfreq_cdev_work(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t *puVar5;
    ulong uVar6;
    ulong *in_x18;
    uint64_t *puVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    uVar3 = devfreq_get_devfreq_by_node(*(arg1 + -0x88));
    if (uVar3 < 0xfffffffffffff001) {
        if (_segment.ehdr == 0) {
            _segment.ehdr = uVar3;
        }
        uVar6 = *(uVar3 + 0xa0);
        *(arg1 + -0x80) = uVar3;
        *(arg1 + -0x78) = uVar6;
        uVar4 = dev_pm_opp_get_opp_count(uVar6);
        iVar2 = uVar4;
        uVar3 = uVar4;
        if ((iVar2 >> 0x3d == 0) &&
           (puVar5 = __kmalloc(-((uVar4 & 0xffffffff) >> 0x1f) & 0xfffffff800000000 | (uVar4 & 0xffffffff) << 3,0xdc0)
           , uVar3 = 0, puVar5 != NULL)) {
            iStack_50 = -1;
            if (0 < iVar2) {
                uVar4 = uVar4 & 0xffffffff;
                puVar7 = puVar5;
                do {
                    uVar3 = dev_pm_opp_find_freq_floor(*(arg1 + -0x78),&iStack_50);
                    if (0xfffffffffffff000 < uVar3) goto code_r0x080014b8;
                    dev_pm_opp_put();
                    uVar4 = uVar4 - 1;
                    uVar3 = iStack_50 + 999;
                    iStack_50 = iStack_50 + -1;
                    *puVar7 = uVar3 / 1000;
                    puVar7 = puVar7 + 1;
                } while (uVar4 != 0);
            }
            *(arg1 + -100) = iVar2 + -1;
            *(arg1 + -0x70) = puVar5;
            iVar2 = dev_pm_qos_add_request(*(arg1 + -0x78),arg1 + -0x58,4,0x7fffffff);
            if (-1 < iVar2) {
                uVar3 = thermal_cooling_device_register
                                  (0x80001f5,arg1 + -0x88,
                                   reloc.devfreq_cdev_get_max_state.a9065db39d39c536a93193ec139f92df.cfi_jt);
                *(arg1 + 0x88) = uVar3;
                if (uVar3 < 0xfffffffffffff001) goto code_r0x080014c8;
                _printk(0x80001f9,"qti_devfreq_cdev","devfreq_cdev_work",uVar3);
                *(arg1 + 0x88) = 0;
            }
code_r0x080014b8:
            kfree(*(arg1 + -0x70));
            uVar3 = dev_pm_qos_remove_request(arg1 + -0x58);
        }
    }
    else {
        iVar2 = *(arg1 + -0x60) + -1;
        *(arg1 + -0x60) = iVar2;
        if (iVar2 != 0) {
            uVar3 = queue_delayed_work_on(0x20,_delayed_work_timer_fn,arg1,0xfa);
        }
    }
code_r0x080014c8:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return uVar3;
    }
    auVar8 = __stack_chk_fail();
    *auVar8._8_8_ = *(*(auVar8._0_8_ + 0x3a8) + 0x24);
    return 0;
}


// ===== sym.devfreq_cdev_get_max_state @ 0x08001500 (size 28) =====

ulong sym.devfreq_cdev_get_max_state(int64_t arg1,int64_t arg2)

{
    *arg2 = *(*(arg1 + 0x3a8) + 0x24);
    return 0;
}


// ===== sym.devfreq_cdev_get_state @ 0x0800151c (size 28) =====

ulong sym.devfreq_cdev_get_state(int64_t arg1,int64_t arg2)

{
    *arg2 = *(*(arg1 + 0x3a8) + 0x20);
    return 0;
}


// ===== sym.devfreq_cdev_set_state @ 0x08001538 (size 192) =====

int sym.devfreq_cdev_set_state(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    ulong *in_x18;
    uint64_t uVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    uVar2 = arg2;
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x3a8);
    if (*(iVar3 + 0x24) < uVar2) {
        iVar1 = -0x16;
    }
    else if (*(iVar3 + 0x20) == uVar2) {
        iVar1 = 0;
    }
    else {
        uVar2 = *(*(iVar3 + 0x18) + uVar2 * 8);
        iVar1 = dev_pm_qos_update_request(iVar3 + 0x30,uVar2 & 0xffffffff);
        if (iVar1 < 0) {
            _printk(0x800018a,"qti_devfreq_cdev","devfreq_cdev_set_state",uVar2,*(arg1 + 8),iVar1);
        }
        else {
            iVar1 = 0;
            *(iVar3 + 0x20) = arg2;
        }
    }
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x080015f8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800163c

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
    //switch table (4 cases) at 0x8000178
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001650);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001668 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.devfreq_cdev_probe.a9065db39d39c536a93193ec139f92df.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x0800169c (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.devfreq_cdev_probe.a9065db39d39c536a93193ec139f92df.cfi_jt);
    return;
}

