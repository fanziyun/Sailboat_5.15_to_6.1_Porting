// decompiled from cpu_hotplug by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 340) =====

//WARNING: Switch with 1 destination removed at 0x08001850

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x550b9e52359ac614) {
            pcVar2 = sym.cpu_hot_register_cdev.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 == -0x53c887a672ae5243) {
                pcVar2 = sym.cpu_hot_hp_online.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                goto code_r0x08001144;
            }
            if (arg1 != -0x3557318fb8d07b71) goto code_r0x08001810;
            pcVar2 = sym.cpu_hot_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
code_r0x08001120:
        if (1 < (pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d)) goto code_r0x08001810;
    }
    else {
        if (arg1 < 0x6b571d3f779580cd) {
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 != 0x519d946a5cb8d608) goto code_r0x08001810;
                pcVar2 = sym.cpu_hot_set_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
        }
        else {
            if (arg1 == 0x6b571d3f779580cd) {
                pcVar2 = sym.cpu_hot_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                goto code_r0x08001120;
            }
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001810;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
code_r0x08001144:
        if (pcVar1 != pcVar2) {
code_r0x08001810:
            *in_x18 = unaff_x30;
            if (arg3 != 0) {
                if (4 < *arg3) {
                    return;
                }
                __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5502,0x8001864);
            (*pcVar1)();
        }
    }
    return;
}


// ===== sym.cpu_hot_hp_online.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001160 (size 8) =====

uint sym.cpu_hot_hp_online.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int param_1)

{
    uint uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cpu_hot_lock);
    pcVar2 = _obj.cpu_hot_cdev_list;
    do {
        if (pcVar2 == obj.cpu_hot_cdev_list) {
code_r0x0800169c:
            uVar1 = 0;
code_r0x080016bc:
            mutex_unlock(obj.cpu_hot_lock);
            return uVar1;
        }
        if (*(pcVar2 + 0x10) == param_1) {
            if (*(pcVar2 + 0x18) != 0) {
                uVar1 = 0;
                if (pcVar2[0x14] != 0x0) {
                    uVar1 = 0x8002;
                }
                goto code_r0x080016bc;
            }
            queue_work_on(0x20,_nr_cpu_ids,pcVar2 + 0x28);
            goto code_r0x0800169c;
        }
        pcVar2 = *pcVar2;
    } while( true );
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001168 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.cpu_hot_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001170 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.cpu_hot_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cpu_hot_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001178 (size 8) =====

ulong sym.cpu_hot_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    code *pcVar5;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        __cpuhp_remove_state(_segment.ehdr,0);
        _segment.ehdr = 0;
    }
    mutex_lock(obj.cpu_hot_lock);
    pcVar5 = _obj.cpu_hot_cdev_list;
    if (_obj.cpu_hot_cdev_list != obj.cpu_hot_cdev_list) {
        do {
            pcVar6 = *pcVar5;
            if ((*(pcVar5 + 0x18) != 0) && (thermal_cooling_device_unregister(), pcVar5[0x14] != 0x0)) {
                pcVar5[0x14] = 0x0;
                iVar3 = add_cpu(*(pcVar5 + 0x10));
                if (iVar3 != 0) {
                    _printk(0x80001c2,*(pcVar5 + 0x10),iVar3);
                }
            }
            uVar4 = __list_del_entry_valid(pcVar5);
            if ((uVar4 & 1) != 0) {
                iVar1 = *pcVar5;
                piVar2 = *(pcVar5 + 8);
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *pcVar5 = -0x2152ffffffffff00;
            *(pcVar5 + 8) = -0x2152fffffffffede;
            pcVar5 = pcVar6;
        } while (pcVar6 != obj.cpu_hot_cdev_list);
    }
    mutex_unlock(obj.cpu_hot_lock);
    return 0;
}


// ===== sym.cpu_hot_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001180 (size 8) =====

ulong sym.cpu_hot_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    code *pcVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t *extraout_x1;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    ulong *in_x18;
    ulong uVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    
    *in_x18 = unaff_x30;
    uVar8 = *(param_1 + 0x300);
    _obj.cpu_hot_cdev_list = obj.cpu_hot_cdev_list;
    *0x8000138 = obj.cpu_hot_cdev_list;
    iVar4 = of_get_next_available_child(uVar8,0);
    if (iVar4 != 0) {
        do {
            pcVar5 = devm_kmalloc(param_1 + 0x10,0x88,0xdc0);
            if (pcVar5 == NULL) {
                return 0xfffffff4;
            }
            *(pcVar5 + 0x18) = 0;
            *(pcVar5 + 0x20) = iVar4;
            *(pcVar5 + 0x10) = 0xffffffff;
            *(pcVar5 + 0x14) = 0x100;
            iVar6 = of_parse_phandle(iVar4,"qcom,cpu",0);
            uVar2 = cpumask_next(0xffffffff,__cpu_possible_mask);
            *extraout_x1 = extraout_w8;
            if (uVar2 < extraout_w8) {
                uVar9 = uVar2;
                do {
                    iVar7 = get_cpu_device(uVar9);
                    if ((iVar7 != 0) && (*(iVar7 + 0x2f0) == iVar6)) {
                        *(pcVar5 + 0x10) = uVar9;
                        goto code_r0x080012e8;
                    }
                    auVar10 = cpumask_next(uVar9,__cpu_possible_mask);
                    *auVar10._8_8_ = extraout_w8_00;
                    uVar9 = auVar10._0_8_ & 0xffffffff;
                } while (auVar10._0_4_ < extraout_w8_00);
            }
            if (*(pcVar5 + 0x10) == -1) {
                _dev_err(param_1 + 0x10,"Invalid CPU phandle\n");
            }
            else {
code_r0x080012e8:
                *(pcVar5 + 0x28) = 0xfffffffe0;
                *(pcVar5 + 0x30) = pcVar5 + 0x30;
                *(pcVar5 + 0x38) = pcVar5 + 0x30;
                *(pcVar5 + 0x58) = 0xfffffffe0;
                *(pcVar5 + 0x40) = sym.cpu_hot_register_cdev.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                *(pcVar5 + 0x60) = pcVar5 + 0x60;
                *(pcVar5 + 0x68) = pcVar5 + 0x60;
                pcVar1 = _obj.cpu_hot_cdev_list;
                *(pcVar5 + 0x70) = sym.cpu_hot_execute_cdev.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                uVar9 = __list_add_valid(pcVar5,obj.cpu_hot_cdev_list,pcVar1);
                if ((uVar9 & 1) != 0) {
                    *(pcVar1 + 8) = pcVar5;
                    *pcVar5 = pcVar1;
                    *(pcVar5 + 8) = obj.cpu_hot_cdev_list;
                    _obj.cpu_hot_cdev_list = pcVar5;
                }
            }
            iVar4 = of_get_next_available_child(uVar8,iVar4);
        } while (iVar4 != 0);
    }
    uVar8 = __cpuhp_setup_state(0xc0,"cpu-hotplug/cdev:online",1,
                                sym.cpu_hot_hp_online.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0,0);
    iVar3 = uVar8;
    if (-1 < iVar3) {
        uVar8 = 0;
        _segment.ehdr = iVar3;
    }
    return uVar8;
}


// ===== sym.cpu_hot_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001188 (size 8) =====

ulong sym.cpu_hot_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong *param_2)

{
    *param_2 = 1;
    return 0;
}


// ===== sym.cpu_hot_get_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001190 (size 8) =====

ulong sym.cpu_hot_get_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x3a8);
    mutex_lock(obj.cpu_hot_lock);
    *param_2 = *(iVar1 + 0x14);
    mutex_unlock(obj.cpu_hot_lock);
    return 0;
}


// ===== sym.cpu_hot_set_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001198 (size 8) =====

ulong sym.cpu_hot_set_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint64_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x3a8);
    if (*(iVar2 + 0x10) == -1) {
        uVar1 = 0xffffffed;
    }
    else if (param_2 < 2) {
        if (*(iVar2 + 0x14) != (param_2 != 0)) {
            mutex_lock(obj.cpu_hot_lock);
            *(iVar2 + 0x14) = param_2 != 0;
            mutex_unlock(obj.cpu_hot_lock);
            queue_work_on(0x20,_nr_cpu_ids,iVar2 + 0x58);
        }
        uVar1 = 0;
    }
    else {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.cpu_hot_register_cdev.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011a0 (size 8) =====

void sym.cpu_hot_register_cdev.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_40;
    ulong uStack_38;
    uint uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_30 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    snprintf(&uStack_40,0x14,"cpu-hotplug%d",*(param_1 + -0x18));
    uVar3 = thermal_of_cooling_device_register
                      (*(param_1 + -8),&uStack_40,param_1 + -0x28,
                       reloc.cpu_hot_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    *(param_1 + -0x10) = uVar3;
    if (0xfffffffffffff000 < uVar3) {
        _printk(0x8000200,&uStack_40,uVar3);
        *(param_1 + -0x10) = 0;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.cpu_hot_execute_cdev;
    mutex_lock(obj.cpu_hot_lock);
    uVar1 = *(iVar4 + -0x48);
    if (*(iVar4 + -0x44) == '\0') {
        if (*(iVar4 + -0x43) != '\0') goto code_r0x08001604;
        mutex_unlock(obj.cpu_hot_lock);
        iVar2 = add_cpu(uVar1);
        mutex_lock(obj.cpu_hot_lock);
        if (iVar2 == 0) {
            *(iVar4 + -0x43) = 1;
            goto code_r0x08001604;
        }
        uVar5 = 0x80001c2;
    }
    else {
        if (*(iVar4 + -0x43) == '\0') goto code_r0x08001604;
        mutex_unlock(obj.cpu_hot_lock);
        iVar2 = remove_cpu(uVar1);
        mutex_lock(obj.cpu_hot_lock);
        if (-1 < iVar2) {
            *(iVar4 + -0x43) = 0;
            goto code_r0x08001604;
        }
        uVar5 = 0x8000241;
    }
    _printk(uVar5,uVar1,iVar2);
code_r0x08001604:
    mutex_unlock(obj.cpu_hot_lock);
    return;
}


// ===== sym.cpu_hot_execute_cdev.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011a8 (size 8) =====

void sym.cpu_hot_execute_cdev.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cpu_hot_lock);
    uVar1 = *(param_1 + -0x48);
    if (*(param_1 + -0x44) == '\0') {
        if (*(param_1 + -0x43) != '\0') goto code_r0x08001604;
        mutex_unlock(obj.cpu_hot_lock);
        iVar2 = add_cpu(uVar1);
        mutex_lock(obj.cpu_hot_lock);
        if (iVar2 == 0) {
            *(param_1 + -0x43) = 1;
            goto code_r0x08001604;
        }
        uVar3 = 0x80001c2;
    }
    else {
        if (*(param_1 + -0x43) == '\0') goto code_r0x08001604;
        mutex_unlock(obj.cpu_hot_lock);
        iVar2 = remove_cpu(uVar1);
        mutex_lock(obj.cpu_hot_lock);
        if (-1 < iVar2) {
            *(param_1 + -0x43) = 0;
            goto code_r0x08001604;
        }
        uVar3 = 0x8000241;
    }
    _printk(uVar3,uVar1,iVar2);
code_r0x08001604:
    mutex_unlock(obj.cpu_hot_lock);
    return;
}


// ===== sym.cpu_hot_probe @ 0x080011b0 (size 504) =====

ulong sym.cpu_hot_probe(int64_t arg1)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    code *pcVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t *extraout_x1;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    ulong *in_x18;
    ulong uVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    
    *in_x18 = unaff_x30;
    uVar8 = *(arg1 + 0x300);
    _obj.cpu_hot_cdev_list = obj.cpu_hot_cdev_list;
    *0x8000138 = obj.cpu_hot_cdev_list;
    iVar4 = of_get_next_available_child(uVar8,0);
    if (iVar4 != 0) {
        do {
            pcVar5 = devm_kmalloc(arg1 + 0x10,0x88,0xdc0);
            if (pcVar5 == NULL) {
                return 0xfffffff4;
            }
            *(pcVar5 + 0x18) = 0;
            *(pcVar5 + 0x20) = iVar4;
            *(pcVar5 + 0x10) = 0xffffffff;
            *(pcVar5 + 0x14) = 0x100;
            iVar6 = of_parse_phandle(iVar4,"qcom,cpu",0);
            uVar2 = cpumask_next(0xffffffff,__cpu_possible_mask);
            *extraout_x1 = extraout_w8;
            if (uVar2 < extraout_w8) {
                uVar9 = uVar2;
                do {
                    iVar7 = get_cpu_device(uVar9);
                    if ((iVar7 != 0) && (*(iVar7 + 0x2f0) == iVar6)) {
                        *(pcVar5 + 0x10) = uVar9;
                        goto code_r0x080012e8;
                    }
                    auVar10 = cpumask_next(uVar9,__cpu_possible_mask);
                    *auVar10._8_8_ = extraout_w8_00;
                    uVar9 = auVar10._0_8_ & 0xffffffff;
                } while (auVar10._0_4_ < extraout_w8_00);
            }
            if (*(pcVar5 + 0x10) == -1) {
                _dev_err(arg1 + 0x10,"Invalid CPU phandle\n");
            }
            else {
code_r0x080012e8:
                *(pcVar5 + 0x28) = 0xfffffffe0;
                *(pcVar5 + 0x30) = pcVar5 + 0x30;
                *(pcVar5 + 0x38) = pcVar5 + 0x30;
                *(pcVar5 + 0x58) = 0xfffffffe0;
                *(pcVar5 + 0x40) = sym.cpu_hot_register_cdev.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                *(pcVar5 + 0x60) = pcVar5 + 0x60;
                *(pcVar5 + 0x68) = pcVar5 + 0x60;
                pcVar1 = _obj.cpu_hot_cdev_list;
                *(pcVar5 + 0x70) = sym.cpu_hot_execute_cdev.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                uVar9 = __list_add_valid(pcVar5,obj.cpu_hot_cdev_list,pcVar1);
                if ((uVar9 & 1) != 0) {
                    *(pcVar1 + 8) = pcVar5;
                    *pcVar5 = pcVar1;
                    *(pcVar5 + 8) = obj.cpu_hot_cdev_list;
                    _obj.cpu_hot_cdev_list = pcVar5;
                }
            }
            iVar4 = of_get_next_available_child(uVar8,iVar4);
        } while (iVar4 != 0);
    }
    uVar8 = __cpuhp_setup_state(0xc0,"cpu-hotplug/cdev:online",1,
                                sym.cpu_hot_hp_online.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0,0);
    iVar3 = uVar8;
    if (-1 < iVar3) {
        uVar8 = 0;
        _segment.ehdr = iVar3;
    }
    return uVar8;
}


// ===== sym.cpu_hot_remove @ 0x080013a8 (size 256) =====

ulong sym.cpu_hot_remove(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    code *pcVar5;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        __cpuhp_remove_state(_segment.ehdr,0);
        _segment.ehdr = 0;
    }
    mutex_lock(obj.cpu_hot_lock);
    pcVar5 = _obj.cpu_hot_cdev_list;
    if (_obj.cpu_hot_cdev_list != obj.cpu_hot_cdev_list) {
        do {
            pcVar6 = *pcVar5;
            if ((*(pcVar5 + 0x18) != 0) && (thermal_cooling_device_unregister(), pcVar5[0x14] != 0x0)) {
                pcVar5[0x14] = 0x0;
                iVar3 = add_cpu(*(pcVar5 + 0x10));
                if (iVar3 != 0) {
                    _printk(0x80001c2,*(pcVar5 + 0x10),iVar3);
                }
            }
            uVar4 = __list_del_entry_valid(pcVar5);
            if ((uVar4 & 1) != 0) {
                iVar1 = *pcVar5;
                piVar2 = *(pcVar5 + 8);
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *pcVar5 = -0x2152ffffffffff00;
            *(pcVar5 + 8) = -0x2152fffffffffede;
            pcVar5 = pcVar6;
        } while (pcVar6 != obj.cpu_hot_cdev_list);
    }
    mutex_unlock(obj.cpu_hot_lock);
    return 0;
}


// ===== sym.cpu_hot_register_cdev @ 0x080014a8 (size 188) =====

void sym.cpu_hot_register_cdev(int64_t arg1)

{
    uint uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_40;
    ulong uStack_38;
    uint uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_30 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    snprintf(&uStack_40,0x14,"cpu-hotplug%d",*(arg1 + -0x18));
    uVar3 = thermal_of_cooling_device_register
                      (*(arg1 + -8),&uStack_40,arg1 + -0x28,
                       reloc.cpu_hot_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    *(arg1 + -0x10) = uVar3;
    if (0xfffffffffffff000 < uVar3) {
        _printk(0x8000200,&uStack_40,uVar3);
        *(arg1 + -0x10) = 0;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.cpu_hot_execute_cdev;
    mutex_lock(obj.cpu_hot_lock);
    uVar1 = *(iVar4 + -0x48);
    if (*(iVar4 + -0x44) == '\0') {
        if (*(iVar4 + -0x43) != '\0') goto code_r0x08001604;
        mutex_unlock(obj.cpu_hot_lock);
        iVar2 = add_cpu(uVar1);
        mutex_lock(obj.cpu_hot_lock);
        if (iVar2 == 0) {
            *(iVar4 + -0x43) = 1;
            goto code_r0x08001604;
        }
        uVar5 = 0x80001c2;
    }
    else {
        if (*(iVar4 + -0x43) == '\0') goto code_r0x08001604;
        mutex_unlock(obj.cpu_hot_lock);
        iVar2 = remove_cpu(uVar1);
        mutex_lock(obj.cpu_hot_lock);
        if (-1 < iVar2) {
            *(iVar4 + -0x43) = 0;
            goto code_r0x08001604;
        }
        uVar5 = 0x8000241;
    }
    _printk(uVar5,uVar1,iVar2);
code_r0x08001604:
    mutex_unlock(obj.cpu_hot_lock);
    return;
}


// ===== sym.cpu_hot_execute_cdev @ 0x08001564 (size 232) =====

void sym.cpu_hot_execute_cdev(int64_t arg1)

{
    uint uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cpu_hot_lock);
    uVar1 = *(arg1 + -0x48);
    if (*(arg1 + -0x44) == '\0') {
        if (*(arg1 + -0x43) != '\0') goto code_r0x08001604;
        mutex_unlock(obj.cpu_hot_lock);
        iVar2 = add_cpu(uVar1);
        mutex_lock(obj.cpu_hot_lock);
        if (iVar2 == 0) {
            *(arg1 + -0x43) = 1;
            goto code_r0x08001604;
        }
        uVar3 = 0x80001c2;
    }
    else {
        if (*(arg1 + -0x43) == '\0') goto code_r0x08001604;
        mutex_unlock(obj.cpu_hot_lock);
        iVar2 = remove_cpu(uVar1);
        mutex_lock(obj.cpu_hot_lock);
        if (-1 < iVar2) {
            *(arg1 + -0x43) = 0;
            goto code_r0x08001604;
        }
        uVar3 = 0x8000241;
    }
    _printk(uVar3,uVar1,iVar2);
code_r0x08001604:
    mutex_unlock(obj.cpu_hot_lock);
    return;
}


// ===== sym.cpu_hot_hp_online @ 0x0800164c (size 172) =====

uint sym.cpu_hot_hp_online(int64_t arg1)

{
    uint uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cpu_hot_lock);
    pcVar2 = _obj.cpu_hot_cdev_list;
    do {
        if (pcVar2 == obj.cpu_hot_cdev_list) {
code_r0x0800169c:
            uVar1 = 0;
code_r0x080016bc:
            mutex_unlock(obj.cpu_hot_lock);
            return uVar1;
        }
        if (*(pcVar2 + 0x10) == arg1) {
            if (*(pcVar2 + 0x18) != 0) {
                uVar1 = 0;
                if (pcVar2[0x14] != 0x0) {
                    uVar1 = 0x8002;
                }
                goto code_r0x080016bc;
            }
            queue_work_on(0x20,_nr_cpu_ids,pcVar2 + 0x28);
            goto code_r0x0800169c;
        }
        pcVar2 = *pcVar2;
    } while( true );
}


// ===== sym.cpu_hot_get_max_state @ 0x080016f8 (size 24) =====

ulong sym.cpu_hot_get_max_state(int64_t arg1,int64_t arg2)

{
    *arg2 = 1;
    return 0;
}


// ===== sym.cpu_hot_get_cur_state @ 0x08001710 (size 92) =====

ulong sym.cpu_hot_get_cur_state(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x3a8);
    mutex_lock(obj.cpu_hot_lock);
    *arg2 = *(iVar1 + 0x14);
    mutex_unlock(obj.cpu_hot_lock);
    return 0;
}


// ===== sym.cpu_hot_set_cur_state @ 0x0800176c (size 160) =====

ulong sym.cpu_hot_set_cur_state(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x3a8);
    if (*(iVar2 + 0x10) == -1) {
        uVar1 = 0xffffffed;
    }
    else if (arg2 < 2) {
        if (*(iVar2 + 0x14) != (arg2 != 0)) {
            mutex_lock(obj.cpu_hot_lock);
            *(iVar2 + 0x14) = arg2 != 0;
            mutex_unlock(obj.cpu_hot_lock);
            queue_work_on(0x20,_nr_cpu_ids,iVar2 + 0x58);
        }
        uVar1 = 0;
    }
    else {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.__cfi_check_fail @ 0x0800180c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001850

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
    //switch table (4 cases) at 0x80001a8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001864);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001874 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.cpu_hot_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080018a8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.cpu_hot_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

