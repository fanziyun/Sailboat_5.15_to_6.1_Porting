// decompiled from qti_cpufreq_cdev by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 340) =====

//WARNING: Switch with 1 destination removed at 0x0800182c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x550b9e52359ac614) {
            pcVar2 = sym.cpufreq_cdev_register.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != -0x53c887a672ae5243) {
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x080017ec;
                pcVar2 = sym.cpufreq_cdev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                goto code_r0x08001120;
            }
            pcVar2 = sym.cpufreq_cdev_hp_online.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 < 0x6b571d3f779580cd) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x519d946a5cb8d608) goto code_r0x080017ec;
            pcVar2 = sym.cpufreq_cdev_set_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x6b571d3f779580cd) {
            pcVar2 = sym.cpufreq_cdev_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
code_r0x08001120:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x080017ec;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080017ec;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080017ec:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001840);
    (*pcVar1)();
}


// ===== sym.cpufreq_cdev_register.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001160 (size 8) =====

void sym.cpufreq_cdev_register.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint *puVar3;
    uint uVar4;
    int *piVar5;
    int64_t iVar6;
    ulong *in_x18;
    int iVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = cpufreq_cpu_get(*(param_1 + -0x88));
    if (iVar2 == 0) {
        _printk(0x8000260,"qti_cpufreq_cdev","cpufreq_cdev_register",*(param_1 + -0x88));
        return;
    }
    if (*(iVar2 + 400) != 0) {
        uVar8 = 0;
        piVar5 = *(iVar2 + 400) + 8;
        do {
            if (*piVar5 != -1) {
                iVar7 = uVar8;
                if (*piVar5 == -2) goto code_r0x080014e4;
                uVar8 = iVar7 + 1;
            }
            piVar5 = piVar5 + 3;
        } while( true );
    }
code_r0x080015d4:
    cpufreq_cpu_put(iVar2);
    if (*(param_1 + -0x90) != 0) {
        *(param_1 + -0x90) = 0;
    }
    kfree(*(param_1 + -0x70));
    return;
code_r0x080014e4:
    if (iVar7 != 0) {
        if (iVar7 >> 0x3e == 0) {
            puVar3 = __kmalloc(-(uVar8 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2,0xcc0);
            *(param_1 + -0x70) = puVar3;
            if (puVar3 != NULL) {
                if (0 < iVar7) {
                    iVar6 = 0;
                    do {
                        uVar8 = uVar8 - 1;
                        iVar1 = uVar8;
                        if (*(iVar2 + 0x198) != 1) {
                            iVar1 = iVar6;
                        }
                        *(*(param_1 + -0x70) + iVar6 * 4) = *(*(iVar2 + 400) + iVar1 * 0xc + 8);
                        iVar6 = iVar6 + 1;
                    } while (uVar8 != 0);
                    puVar3 = *(param_1 + -0x70);
                }
                *(param_1 + -8) = iVar2;
                *(param_1 + -0x80) = 0;
                *(param_1 + -0x78) = iVar7 + -1;
                if (puVar3 == NULL) {
                    uVar4 = 0xffffffff;
                }
                else {
                    uVar4 = *puVar3;
                }
                freq_qos_add_request(iVar2 + 0xa0,param_1 + -0x68,2,uVar4);
                uVar8 = thermal_cooling_device_register
                                  (param_1 + -0x20,param_1 + -0xa0,
                                   reloc.cpufreq_cdev_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                *(param_1 + -0x90) = uVar8;
                if (uVar8 < 0xfffffffffffff001) {
                    return;
                }
                _printk(0x80001ad,"qti_cpufreq_cdev","cpufreq_cdev_register",param_1 + -0x20,uVar8);
                freq_qos_remove_request(param_1 + -0x68);
            }
        }
        else {
            *(param_1 + -0x70) = 0;
        }
    }
    goto code_r0x080015d4;
}


// ===== sym.cpufreq_cdev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001168 (size 8) =====

ulong sym.cpufreq_cdev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    code *pcVar5;
    int64_t iVar6;
    uint32_t *extraout_x1;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    uVar7 = *(param_1 + 0x300);
    uStack_78 = 0;
    iStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    mutex_lock(obj.qti_cpufreq_cdev_lock);
    of_phandle_iterator_init(&uStack_a8,uVar7,"qcom,cpus",0,0);
    iVar3 = of_phandle_iterator_next(&uStack_a8);
    if (iVar3 == 0) {
        do {
            pcVar5 = devm_kmalloc(param_1 + 0x10,0xd0,0xdc0);
            iVar1 = iStack_70;
            if (pcVar5 == NULL) {
                mutex_unlock(obj.qti_cpufreq_cdev_lock);
                uVar7 = 0xfffffff4;
                goto code_r0x08001390;
            }
            *(pcVar5 + 0x18) = 0xffffffff;
            uVar4 = cpumask_next(0xffffffff,__cpu_possible_mask);
            *extraout_x1 = extraout_w8;
            if (uVar4 < extraout_w8) {
                uVar8 = uVar4;
                do {
                    iVar6 = get_cpu_device(uVar8);
                    if ((iVar6 != 0) && (*(iVar6 + 0x2f0) == iVar1)) {
                        *(pcVar5 + 0x18) = uVar8;
                        goto code_r0x0800132c;
                    }
                    auVar9 = cpumask_next(uVar8,__cpu_possible_mask);
                    *auVar9._8_8_ = extraout_w8_00;
                    uVar8 = auVar9._0_8_ & 0xffffffff;
                } while (auVar9._0_4_ < extraout_w8_00);
                if (*(pcVar5 + 0x18) != -1) {
code_r0x0800132c:
                    snprintf(pcVar5 + 0x80,0x14,"cpu%d",uVar8);
                    *(pcVar5 + 0xa0) = 0xfffffffe0;
                    *(pcVar5 + 0xa8) = pcVar5 + 0xa8;
                    *(pcVar5 + 0xb0) = pcVar5 + 0xa8;
                    pcVar2 = _obj.qti_cpufreq_cdev_list;
                    *(pcVar5 + 0xb8) = sym.cpufreq_cdev_register.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    uVar8 = __list_add_valid(pcVar5,obj.qti_cpufreq_cdev_list,pcVar2);
                    if ((uVar8 & 1) != 0) {
                        *(pcVar2 + 8) = pcVar5;
                        *pcVar5 = pcVar2;
                        *(pcVar5 + 8) = obj.qti_cpufreq_cdev_list;
                        _obj.qti_cpufreq_cdev_list = pcVar5;
                    }
                }
            }
            iVar3 = of_phandle_iterator_next(&uStack_a8);
        } while (iVar3 == 0);
    }
    mutex_unlock(obj.qti_cpufreq_cdev_lock);
    uVar7 = __cpuhp_setup_state(0xc0,"thermal-cpu/cdev:online",1,
                                sym.cpufreq_cdev_hp_online.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0,0);
    iVar3 = uVar7;
    if (-1 < iVar3) {
        uVar7 = 0;
        _segment.ehdr = iVar3;
    }
code_r0x08001390:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_68) {
        __stack_chk_fail(uVar7);
        *extraout_x18 = sym.cpufreq_cdev_remove;
        mutex_lock(obj.qti_cpufreq_cdev_lock);
        pcVar5 = _obj.qti_cpufreq_cdev_list;
        if (_segment.ehdr != 0) {
            __cpuhp_remove_state(_segment.ehdr,0);
            _segment.ehdr = 0;
            pcVar5 = _obj.qti_cpufreq_cdev_list;
        }
        for (; pcVar5 != obj.qti_cpufreq_cdev_list; pcVar5 = *pcVar5) {
            if (*(pcVar5 + 0x10) != 0) {
                thermal_cooling_device_unregister();
                if ((*(pcVar5 + 0x68) != 0) && (*(pcVar5 + 0x68) < 0xfffffffffffff001)) {
                    freq_qos_remove_request(pcVar5 + 0x38);
                }
                *(pcVar5 + 0x10) = 0;
                cpufreq_cpu_put(*(pcVar5 + 0x98));
                kfree(*(pcVar5 + 0x30));
            }
        }
        mutex_unlock(obj.qti_cpufreq_cdev_lock);
        return 0;
    }
    return uVar7;
}


// ===== sym.cpufreq_cdev_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001170 (size 8) =====

ulong sym.cpufreq_cdev_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.qti_cpufreq_cdev_lock);
    pcVar1 = _obj.qti_cpufreq_cdev_list;
    if (_segment.ehdr != 0) {
        __cpuhp_remove_state(_segment.ehdr,0);
        _segment.ehdr = 0;
        pcVar1 = _obj.qti_cpufreq_cdev_list;
    }
    for (; pcVar1 != obj.qti_cpufreq_cdev_list; pcVar1 = *pcVar1) {
        if (*(pcVar1 + 0x10) != 0) {
            thermal_cooling_device_unregister();
            if ((*(pcVar1 + 0x68) != 0) && (*(pcVar1 + 0x68) < 0xfffffffffffff001)) {
                freq_qos_remove_request(pcVar1 + 0x38);
            }
            *(pcVar1 + 0x10) = 0;
            cpufreq_cpu_put(*(pcVar1 + 0x98));
            kfree(*(pcVar1 + 0x30));
        }
    }
    mutex_unlock(obj.qti_cpufreq_cdev_lock);
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001178 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.cpufreq_cdev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001180 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.cpufreq_cdev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cpufreq_cdev_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001188 (size 8) =====

ulong sym.cpufreq_cdev_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong *param_2)

{
    *param_2 = *(*(param_1 + 0x3a8) + 0x28);
    return 0;
}


// ===== sym.cpufreq_cdev_get_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001190 (size 8) =====

ulong sym.cpufreq_cdev_get_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong *param_2)

{
    *param_2 = *(*(param_1 + 0x3a8) + 0x20);
    return 0;
}


// ===== sym.cpufreq_cdev_hp_online.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001198 (size 8) =====

ulong sym.cpufreq_cdev_hp_online.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int param_1)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.qti_cpufreq_cdev_lock);
    pcVar1 = _obj.qti_cpufreq_cdev_list;
    if (_obj.qti_cpufreq_cdev_list != obj.qti_cpufreq_cdev_list) {
        do {
            if ((*(pcVar1 + 0x18) == param_1) && (*(pcVar1 + 0x10) == 0)) {
                queue_work_on(0x20,_of_phandle_iterator_next,pcVar1 + 0xa0);
            }
            pcVar1 = *pcVar1;
        } while (pcVar1 != obj.qti_cpufreq_cdev_list);
    }
    mutex_unlock(obj.qti_cpufreq_cdev_lock);
    return 0;
}


// ===== sym.cpufreq_cdev_set_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011a0 (size 8) =====

int sym.cpufreq_cdev_set_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    uint uVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x3a8);
    if (*(iVar3 + 0x28) < param_2) {
        iVar1 = -0x16;
    }
    else if (*(iVar3 + 0x20) == param_2) {
        iVar1 = 0;
    }
    else {
        if ((*(iVar3 + 0x68) != 0) && (*(iVar3 + 0x68) < 0xfffffffffffff001)) {
            if (*(iVar3 + 0x30) == 0) {
                uVar2 = 0xffffffff;
            }
            else {
                uVar2 = *(*(iVar3 + 0x30) + param_2 * 4);
            }
            iVar1 = freq_qos_update_request(iVar3 + 0x38,uVar2);
            if (iVar1 < 0) {
                _printk(0x80001da,"qti_cpufreq_cdev","cpufreq_cdev_set_state",uVar2,*(param_1 + 8),iVar1);
                return iVar1;
            }
        }
        iVar1 = 0;
        *(iVar3 + 0x20) = param_2;
    }
    return iVar1;
}


// ===== sym.cpufreq_cdev_probe @ 0x080011a8 (size 552) =====

ulong sym.cpufreq_cdev_probe(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    code *pcVar5;
    int64_t iVar6;
    uint32_t *extraout_x1;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    uVar7 = *(arg1 + 0x300);
    uStack_78 = 0;
    iStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    mutex_lock(obj.qti_cpufreq_cdev_lock);
    of_phandle_iterator_init(&uStack_a8,uVar7,"qcom,cpus",0,0);
    iVar3 = of_phandle_iterator_next(&uStack_a8);
    if (iVar3 == 0) {
        do {
            pcVar5 = devm_kmalloc(arg1 + 0x10,0xd0,0xdc0);
            iVar1 = iStack_70;
            if (pcVar5 == NULL) {
                mutex_unlock(obj.qti_cpufreq_cdev_lock);
                uVar7 = 0xfffffff4;
                goto code_r0x08001390;
            }
            *(pcVar5 + 0x18) = 0xffffffff;
            uVar4 = cpumask_next(0xffffffff,__cpu_possible_mask);
            *extraout_x1 = extraout_w8;
            if (uVar4 < extraout_w8) {
                uVar8 = uVar4;
                do {
                    iVar6 = get_cpu_device(uVar8);
                    if ((iVar6 != 0) && (*(iVar6 + 0x2f0) == iVar1)) {
                        *(pcVar5 + 0x18) = uVar8;
                        goto code_r0x0800132c;
                    }
                    auVar9 = cpumask_next(uVar8,__cpu_possible_mask);
                    *auVar9._8_8_ = extraout_w8_00;
                    uVar8 = auVar9._0_8_ & 0xffffffff;
                } while (auVar9._0_4_ < extraout_w8_00);
                if (*(pcVar5 + 0x18) != -1) {
code_r0x0800132c:
                    snprintf(pcVar5 + 0x80,0x14,"cpu%d",uVar8);
                    *(pcVar5 + 0xa0) = 0xfffffffe0;
                    *(pcVar5 + 0xa8) = pcVar5 + 0xa8;
                    *(pcVar5 + 0xb0) = pcVar5 + 0xa8;
                    pcVar2 = _obj.qti_cpufreq_cdev_list;
                    *(pcVar5 + 0xb8) = sym.cpufreq_cdev_register.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    uVar8 = __list_add_valid(pcVar5,obj.qti_cpufreq_cdev_list,pcVar2);
                    if ((uVar8 & 1) != 0) {
                        *(pcVar2 + 8) = pcVar5;
                        *pcVar5 = pcVar2;
                        *(pcVar5 + 8) = obj.qti_cpufreq_cdev_list;
                        _obj.qti_cpufreq_cdev_list = pcVar5;
                    }
                }
            }
            iVar3 = of_phandle_iterator_next(&uStack_a8);
        } while (iVar3 == 0);
    }
    mutex_unlock(obj.qti_cpufreq_cdev_lock);
    uVar7 = __cpuhp_setup_state(0xc0,"thermal-cpu/cdev:online",1,
                                sym.cpufreq_cdev_hp_online.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0,0);
    iVar3 = uVar7;
    if (-1 < iVar3) {
        uVar7 = 0;
        _segment.ehdr = iVar3;
    }
code_r0x08001390:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_68) {
        __stack_chk_fail(uVar7);
        *extraout_x18 = sym.cpufreq_cdev_remove;
        mutex_lock(obj.qti_cpufreq_cdev_lock);
        pcVar5 = _obj.qti_cpufreq_cdev_list;
        if (_segment.ehdr != 0) {
            __cpuhp_remove_state(_segment.ehdr,0);
            _segment.ehdr = 0;
            pcVar5 = _obj.qti_cpufreq_cdev_list;
        }
        for (; pcVar5 != obj.qti_cpufreq_cdev_list; pcVar5 = *pcVar5) {
            if (*(pcVar5 + 0x10) != 0) {
                thermal_cooling_device_unregister();
                if ((*(pcVar5 + 0x68) != 0) && (*(pcVar5 + 0x68) < 0xfffffffffffff001)) {
                    freq_qos_remove_request(pcVar5 + 0x38);
                }
                *(pcVar5 + 0x10) = 0;
                cpufreq_cpu_put(*(pcVar5 + 0x98));
                kfree(*(pcVar5 + 0x30));
            }
        }
        mutex_unlock(obj.qti_cpufreq_cdev_lock);
        return 0;
    }
    return uVar7;
}


// ===== sym.cpufreq_cdev_remove @ 0x080013d0 (size 180) =====

ulong sym.cpufreq_cdev_remove(void)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.qti_cpufreq_cdev_lock);
    pcVar1 = _obj.qti_cpufreq_cdev_list;
    if (_segment.ehdr != 0) {
        __cpuhp_remove_state(_segment.ehdr,0);
        _segment.ehdr = 0;
        pcVar1 = _obj.qti_cpufreq_cdev_list;
    }
    for (; pcVar1 != obj.qti_cpufreq_cdev_list; pcVar1 = *pcVar1) {
        if (*(pcVar1 + 0x10) != 0) {
            thermal_cooling_device_unregister();
            if ((*(pcVar1 + 0x68) != 0) && (*(pcVar1 + 0x68) < 0xfffffffffffff001)) {
                freq_qos_remove_request(pcVar1 + 0x38);
            }
            *(pcVar1 + 0x10) = 0;
            cpufreq_cpu_put(*(pcVar1 + 0x98));
            kfree(*(pcVar1 + 0x30));
        }
    }
    mutex_unlock(obj.qti_cpufreq_cdev_lock);
    return 0;
}


// ===== sym.cpufreq_cdev_register @ 0x08001484 (size 432) =====

void sym.cpufreq_cdev_register(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint *puVar3;
    uint uVar4;
    int *piVar5;
    int64_t iVar6;
    ulong *in_x18;
    int iVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = cpufreq_cpu_get(*(arg1 + -0x88));
    if (iVar2 == 0) {
        _printk(0x8000260,"qti_cpufreq_cdev","cpufreq_cdev_register",*(arg1 + -0x88));
        return;
    }
    if (*(iVar2 + 400) != 0) {
        uVar8 = 0;
        piVar5 = *(iVar2 + 400) + 8;
        do {
            if (*piVar5 != -1) {
                iVar7 = uVar8;
                if (*piVar5 == -2) goto code_r0x080014e4;
                uVar8 = iVar7 + 1;
            }
            piVar5 = piVar5 + 3;
        } while( true );
    }
code_r0x080015d4:
    cpufreq_cpu_put(iVar2);
    if (*(arg1 + -0x90) != 0) {
        *(arg1 + -0x90) = 0;
    }
    kfree(*(arg1 + -0x70));
    return;
code_r0x080014e4:
    if (iVar7 != 0) {
        if (iVar7 >> 0x3e == 0) {
            puVar3 = __kmalloc(-(uVar8 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2,0xcc0);
            *(arg1 + -0x70) = puVar3;
            if (puVar3 != NULL) {
                if (0 < iVar7) {
                    iVar6 = 0;
                    do {
                        uVar8 = uVar8 - 1;
                        iVar1 = uVar8;
                        if (*(iVar2 + 0x198) != 1) {
                            iVar1 = iVar6;
                        }
                        *(*(arg1 + -0x70) + iVar6 * 4) = *(*(iVar2 + 400) + iVar1 * 0xc + 8);
                        iVar6 = iVar6 + 1;
                    } while (uVar8 != 0);
                    puVar3 = *(arg1 + -0x70);
                }
                *(arg1 + -8) = iVar2;
                *(arg1 + -0x80) = 0;
                *(arg1 + -0x78) = iVar7 + -1;
                if (puVar3 == NULL) {
                    uVar4 = 0xffffffff;
                }
                else {
                    uVar4 = *puVar3;
                }
                freq_qos_add_request(iVar2 + 0xa0,arg1 + -0x68,2,uVar4);
                uVar8 = thermal_cooling_device_register
                                  (arg1 + -0x20,arg1 + -0xa0,
                                   reloc.cpufreq_cdev_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                *(arg1 + -0x90) = uVar8;
                if (uVar8 < 0xfffffffffffff001) {
                    return;
                }
                _printk(0x80001ad,"qti_cpufreq_cdev","cpufreq_cdev_register",arg1 + -0x20,uVar8);
                freq_qos_remove_request(arg1 + -0x68);
            }
        }
        else {
            *(arg1 + -0x70) = 0;
        }
    }
    goto code_r0x080015d4;
}


// ===== sym.cpufreq_cdev_hp_online @ 0x08001634 (size 160) =====

ulong sym.cpufreq_cdev_hp_online(int64_t arg1)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.qti_cpufreq_cdev_lock);
    pcVar1 = _obj.qti_cpufreq_cdev_list;
    if (_obj.qti_cpufreq_cdev_list != obj.qti_cpufreq_cdev_list) {
        do {
            if ((*(pcVar1 + 0x18) == arg1) && (*(pcVar1 + 0x10) == 0)) {
                queue_work_on(0x20,_of_phandle_iterator_next,pcVar1 + 0xa0);
            }
            pcVar1 = *pcVar1;
        } while (pcVar1 != obj.qti_cpufreq_cdev_list);
    }
    mutex_unlock(obj.qti_cpufreq_cdev_lock);
    return 0;
}


// ===== sym.cpufreq_cdev_get_max_state @ 0x080016d4 (size 28) =====

ulong sym.cpufreq_cdev_get_max_state(int64_t arg1,int64_t arg2)

{
    *arg2 = *(*(arg1 + 0x3a8) + 0x28);
    return 0;
}


// ===== sym.cpufreq_cdev_get_state @ 0x080016f0 (size 28) =====

ulong sym.cpufreq_cdev_get_state(int64_t arg1,int64_t arg2)

{
    *arg2 = *(*(arg1 + 0x3a8) + 0x20);
    return 0;
}


// ===== sym.cpufreq_cdev_set_state @ 0x0800170c (size 220) =====

int sym.cpufreq_cdev_set_state(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    uint uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    uVar2 = arg2;
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x3a8);
    if (*(iVar4 + 0x28) < uVar2) {
        iVar1 = -0x16;
    }
    else if (*(iVar4 + 0x20) == uVar2) {
        iVar1 = 0;
    }
    else {
        if ((*(iVar4 + 0x68) != 0) && (*(iVar4 + 0x68) < 0xfffffffffffff001)) {
            if (*(iVar4 + 0x30) == 0) {
                uVar3 = 0xffffffff;
            }
            else {
                uVar3 = *(*(iVar4 + 0x30) + uVar2 * 4);
            }
            iVar1 = freq_qos_update_request(iVar4 + 0x38,uVar3);
            if (iVar1 < 0) {
                _printk(0x80001da,"qti_cpufreq_cdev","cpufreq_cdev_set_state",uVar3,*(arg1 + 8),iVar1);
                return iVar1;
            }
        }
        iVar1 = 0;
        *(iVar4 + 0x20) = uVar2;
    }
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x080017e8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800182c

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
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001840);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001844 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.cpufreq_cdev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001878 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.cpufreq_cdev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

