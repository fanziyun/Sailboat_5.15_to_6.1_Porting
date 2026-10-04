// decompiled from thermal_pause by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 508) =====

//WARNING: Switch with 1 destination removed at 0x08001cec

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x2c125b764c4a2aaa) {
        if (arg1 < -0x53c887a672ae5243) {
            if (arg1 == -0x5a382e5323215593) {
                pcVar2 = sym.thermal_pause_notifier_register.cfi_jt;
            }
            else {
                if (arg1 != -0x550b9e52359ac614) goto code_r0x08001cac;
                pcVar2 = sym.thermal_pause_update_work.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt;
            }
code_r0x080011e0:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001cac;
        }
        if (arg1 == -0x53c887a672ae5243) {
            pcVar2 = sym.thermal_pause_hp_online.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt;
        }
        else {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.thermal_pause_probe.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt;
                goto code_r0x080011e0;
            }
            if (arg1 != -0x2ee0710dce68437c) goto code_r0x08001cac;
            pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
        }
    }
    else if (arg1 < 0x53312e57d3ecbd1c) {
        if (arg1 == -0x2c125b764c4a2aaa) {
            pcVar2 = sym.thermal_paused_cpumask.cfi_jt;
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x519d946a5cb8d608) goto code_r0x08001cac;
            pcVar2 = sym.thermal_pause_set_cur_state.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt;
        }
    }
    else if (arg1 == 0x53312e57d3ecbd1c) {
        pcVar2 = sym.disable_cdev_stats.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt;
    }
    else {
        if (arg1 == 0x6b571d3f779580cd) {
            pcVar2 = sym.thermal_pause_get_max_state.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt;
            goto code_r0x080011e0;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001cac;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001cac:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001d00);
    (*pcVar1)();
}


// ===== sym.thermal_paused_cpumask.cfi_jt @ 0x08001208 (size 8) =====

code * sym.thermal_paused_cpumask.cfi_jt(void)

{
    return obj.thermal_pause_notifier;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001210 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.thermal_pause_probe.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001218 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.thermal_pause_probe.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x08001220 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.thermal_pause_get_max_state.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt @ 0x08001228 (size 8) =====

ulong sym.thermal_pause_get_max_state.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt(ulong param_1,ulong *param_2)

{
    *param_2 = 1;
    return 0;
}


// ===== sym.thermal_pause_get_cur_state.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt @ 0x08001230 (size 8) =====

ulong sym.thermal_pause_get_cur_state.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    *param_2 = *(*(param_1 + 0x3a8) + 0x18);
    return 0;
}


// ===== sym.thermal_pause_probe.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt @ 0x08001238 (size 8) =====

void sym.thermal_pause_probe.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt(int64_t param_1)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    code *pcVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong *extraout_x1;
    ulong extraout_x8;
    ulong extraout_x8_00;
    uint64_t extraout_x8_01;
    uint64_t *extraout_x9;
    uint64_t *puVar10;
    uint64_t uVar11;
    uint64_t extraout_x10;
    ulong *in_x18;
    ulong uVar12;
    int64_t unaff_x21;
    int64_t unaff_x22;
    code *unaff_x23;
    int64_t *unaff_x26;
    code *unaff_x28;
    ulong unaff_x30;
    uchar auVar13 [16];
    int64_t iStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    uVar12 = *(param_1 + 0x300);
    uStack_80 = 0;
    iStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    iStack_70 = 0;
    uStack_b8 = 0;
    iVar3 = tracepoint_probe_register
                      (__tracepoint_android_vh_disable_thermal_cooling_stats,
                       sym.disable_cdev_stats.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt,0);
    if (iVar3 != 0) {
        _printk(0x800034d,"thermal_pause","thermal_vendor_hooks_init");
    }
    _obj.thermal_pause_cdev_list = obj.thermal_pause_cdev_list;
    *0x80001d0 = obj.thermal_pause_cdev_list;
    _segment.ehdr = 0;
    iVar5 = of_get_next_available_child(uVar12,0);
    if (iVar5 == 0) goto code_r0x08001590;
    unaff_x23 = __cpu_possible_mask;
    iStack_c0 = param_1 + 0x10;
    unaff_x26 = &iStack_70;
    unaff_x22 = 1;
code_r0x080013c4:
    iStack_70 = 0;
    of_phandle_iterator_init(&uStack_b0,iVar5,"qcom,cpus",0,0);
    iVar3 = of_phandle_iterator_next(&uStack_b0);
    unaff_x28 = NULL;
    unaff_x21 = iVar5;
    if (iVar3 == 0) {
        unaff_x28 = NULL;
        goto code_r0x08001514;
    }
    do {
        if (iStack_70 == 0) {
code_r0x080013b0:
            iVar5 = of_get_next_available_child(uVar12,unaff_x21);
            unaff_x21 = iVar5;
            if (iVar5 != 0) goto code_r0x080013c4;
code_r0x08001590:
            uVar9 = __cpuhp_setup_state(0xc0,"thermal-pause/cdev:online",1,
                                        sym.thermal_pause_hp_online.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt,0,0);
            if (-1 < uVar9) {
                _segment.ehdr = CONCAT44(*0x8000004,uVar9);
                uVar9 = 0;
            }
        }
        else {
            pcVar6 = devm_kmalloc(iStack_c0,0x108,0xdc0);
            if (pcVar6 != NULL) {
                iVar3 = of_property_read_string(unaff_x21,"qcom,cdev-alias",&uStack_b8);
                if (iVar3 == 0) {
                    strscpy(pcVar6 + 0x30,uStack_b8,0x14);
                }
                else {
                    snprintf(pcVar6 + 0x30,0x14,"thermal-pause-%X",unaff_x28);
                }
                *(pcVar6 + 0x18) = 0;
                *(pcVar6 + 0x20) = 0;
                *(pcVar6 + 0x28) = unaff_x21;
                *(pcVar6 + 0x100) = 0xffffffff;
                *(pcVar6 + 0x10) = iStack_70;
                *(pcVar6 + 0x48) = 0xfffffffe0;
                *(pcVar6 + 0x50) = pcVar6 + 0x50;
                *(pcVar6 + 0x58) = pcVar6 + 0x50;
                *(pcVar6 + 0x78) = 0xfffffffe0;
                *(pcVar6 + 0x60) = sym.thermal_pause_register_cdev.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt;
                *(pcVar6 + 0x80) = pcVar6 + 0x80;
                *(pcVar6 + 0x88) = pcVar6 + 0x80;
                *(pcVar6 + 0x90) = sym.thermal_pause_update_work.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt;
                init_timer_key(pcVar6 + 0xa8,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                unaff_x28 = _obj.thermal_pause_cdev_list;
                uVar7 = __list_add_valid(pcVar6,obj.thermal_pause_cdev_list,_obj.thermal_pause_cdev_list);
                if ((uVar7 & 1) != 0) {
                    *(unaff_x28 + 8) = pcVar6;
                    *pcVar6 = unaff_x28;
                    *(pcVar6 + 8) = obj.thermal_pause_cdev_list;
                    _obj.thermal_pause_cdev_list = pcVar6;
                }
                goto code_r0x080013b0;
            }
            uVar9 = 0xfffffff4;
        }
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_68) {
            return;
        }
        __stack_chk_fail(uVar9);
        uVar7 = extraout_x8_01;
        puVar10 = extraout_x9;
        uVar11 = extraout_x10;
code_r0x0800162c:
        Hint_Prefetch(puVar10,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar10,0x10);
            if (bVar2) {
                *puVar10 = *puVar10 | uVar11;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        unaff_x28 = unaff_x22 << (uVar7 & 0x3f) | unaff_x28;
        while (iVar3 = of_phandle_iterator_next(&uStack_b0), iVar3 == 0) {
code_r0x08001514:
            iVar5 = iStack_78;
            uVar4 = cpumask_next(0xffffffff,unaff_x23);
            *extraout_x1 = extraout_x8;
            if (uVar4 < extraout_x8) {
                uVar7 = uVar4;
                do {
                    iVar8 = get_cpu_device(uVar7);
                    if ((iVar8 != 0) && (*(iVar8 + 0x2f0) == iVar5)) {
                        puVar10 = unaff_x26 + (uVar7 >> 3 & 0x1ffffff8);
                        uVar11 = unaff_x22 << (uVar7 & 0x3f);
                        goto code_r0x0800162c;
                    }
                    auVar13 = cpumask_next(uVar7,unaff_x23);
                    *auVar13._8_8_ = extraout_x8_00;
                    uVar7 = auVar13._0_8_ & 0xffffffff;
                } while (auVar13._0_4_ < extraout_x8_00);
            }
        }
    } while( true );
}


// ===== sym.thermal_pause_remove.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt @ 0x08001240 (size 8) =====

ulong sym.thermal_pause_remove.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    code *pcVar5;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    tracepoint_probe_unregister
              (__tracepoint_android_vh_disable_thermal_cooling_stats,
               sym.disable_cdev_stats.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt,0);
    if (_segment.ehdr != 0) {
        __cpuhp_remove_state(_segment.ehdr,0);
        _segment.ehdr = 0;
    }
    mutex_lock(obj.cpus_pause_lock);
    pcVar5 = _obj.thermal_pause_cdev_list;
    if (_obj.thermal_pause_cdev_list != obj.thermal_pause_cdev_list) {
        do {
            uVar3 = _blocking_notifier_chain_unregister;
            pcVar6 = *pcVar5;
            if (*(pcVar5 + 0x18) != 0) {
                *(pcVar5 + 0x1c) = 0;
                queue_delayed_work_on(0x20,uVar3,pcVar5 + 0x78,0);
            }
            if (*(pcVar5 + 0x20) != 0) {
                thermal_cooling_device_unregister();
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
        } while (pcVar6 != obj.thermal_pause_cdev_list);
    }
    mutex_unlock(obj.cpus_pause_lock);
    return 0;
}


// ===== sym.thermal_pause_hp_online.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt @ 0x08001248 (size 8) =====

ulong sym.thermal_pause_hp_online.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt(uint64_t param_1)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cpus_pause_lock);
    if (_obj.thermal_pause_cdev_list != obj.thermal_pause_cdev_list) {
        pcVar1 = _obj.thermal_pause_cdev_list;
        do {
            if (((*(pcVar1 + (((param_1 & 0xffffffff) >> 6) + 2) * 8) & 1L << (param_1 & 0x3f)) != 0) &&
               (*(pcVar1 + 0x20) == 0)) {
                queue_work_on(0x20,_blocking_notifier_chain_unregister,pcVar1 + 0x48);
            }
            pcVar1 = *pcVar1;
        } while (pcVar1 != obj.thermal_pause_cdev_list);
    }
    mutex_unlock(obj.cpus_pause_lock);
    return 0;
}


// ===== sym.thermal_pause_set_cur_state.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt @ 0x08001250 (size 8) =====

ulong sym.thermal_pause_set_cur_state.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt(int64_t param_1,uint64_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    if (1 < param_2) {
        return 0xffffffea;
    }
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x3a8);
    mutex_lock(obj.cpus_pause_lock);
    uVar1 = _blocking_notifier_chain_unregister;
    *(iVar2 + 0x1c) = param_2 != 0;
    queue_delayed_work_on(0x20,uVar1,iVar2 + 0x78,0);
    mutex_unlock(obj.cpus_pause_lock);
    return 0;
}


// ===== sym.thermal_pause_notifier_register.cfi_jt @ 0x08001258 (size 8) =====

void sym.thermal_pause_notifier_register.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    blocking_notifier_chain_register(obj.thermal_pause_notifier,param_1);
    return;
}


// ===== sym.thermal_pause_notifier_unregister.cfi_jt @ 0x08001260 (size 8) =====

void sym.thermal_pause_notifier_unregister.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    blocking_notifier_chain_unregister(obj.thermal_pause_notifier,param_1);
    return;
}


// ===== sym.disable_cdev_stats.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt @ 0x08001268 (size 8) =====

void sym.disable_cdev_stats.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt(ulong param_1,ulong param_2,uint *param_3)

{
    *param_3 = 1;
    return;
}


// ===== sym.thermal_pause_update_work.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt @ 0x08001270 (size 8) =====

ulong sym.thermal_pause_update_work.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *extraout_x1;
    ulong *extraout_x1_00;
    ulong *extraout_x1_01;
    ulong *extraout_x1_02;
    int iVar6;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong extraout_x8_01;
    ulong extraout_x8_02;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    code *pcVar8;
    int iVar9;
    int iVar10;
    ulong unaff_x30;
    uint64_t uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    mutex_lock(obj.cpus_pause_lock);
    iVar6 = *(param_1 + -0x5c);
    if (iVar6 == *(param_1 + -0x60)) {
        iVar2 = 0;
    }
    else {
        iVar10 = 5;
        do {
            if (iVar6 == 0) {
                uStack_70 = *(param_1 + -0x68);
                mutex_unlock(obj.cpus_pause_lock);
                iVar2 = walt_resume_cpus(&uStack_70,2);
                mutex_lock(obj.cpus_pause_lock);
                if (iVar2 == 0) {
                    if (_obj.thermal_pause_cdev_list == obj.thermal_pause_cdev_list) {
                        uVar5 = 0;
                    }
                    else {
                        uVar5 = 0;
                        pcVar8 = _obj.thermal_pause_cdev_list;
                        do {
                            if ((*(pcVar8 + 0x18) != 0) && (pcVar8 != param_1 + -0x78)) {
                                uVar5 = *(pcVar8 + 0x10) | uVar5;
                            }
                            pcVar8 = *pcVar8;
                        } while (pcVar8 != obj.thermal_pause_cdev_list);
                    }
                    uStack_78 = _segment.ehdr & (uVar5 ^ 0xffffffff);
                    uVar3 = cpumask_next(0xffffffff,&uStack_78);
                    *extraout_x1_01 = extraout_x8_01;
                    if (uVar3 < extraout_x8_01) {
                        do {
                            blocking_notifier_call_chain(obj.thermal_pause_notifier,0,uVar3);
                            uVar3 = cpumask_next(uVar3,&uStack_78);
                            *extraout_x1_02 = extraout_x8_02;
                        } while (uVar3 < extraout_x8_02);
                    }
                }
                else {
                    _segment.ehdr = param_4;
                    _printk(0x8000245,"thermal_pause","thermal_resume_work");
                    uVar5 = _segment.ehdr;
                    if (iVar2 < 0) goto code_r0x0800186c;
                }
                _segment.ehdr = uVar5;
                iVar6 = 0;
code_r0x08001a00:
                *(param_1 + -0x60) = iVar6;
                if (*(param_1 + -0x5c) == iVar6) goto code_r0x0800183c;
                iVar9 = 5;
            }
            else {
                uStack_70 = *(param_1 + -0x68);
                mutex_unlock(obj.cpus_pause_lock);
                iVar2 = walt_pause_cpus(&uStack_70,2);
                mutex_lock(obj.cpus_pause_lock);
                uVar5 = _segment.ehdr;
                if (iVar2 == 0) {
                    uVar7 = *(param_1 + -0x68);
                    uStack_78 = uVar7 & (_segment.ehdr ^ 0xffffffff);
                    uVar3 = cpumask_next(0xffffffff,&uStack_78);
                    *extraout_x1 = extraout_x8;
                    if (uVar3 < extraout_x8) {
                        do {
                            blocking_notifier_call_chain(obj.thermal_pause_notifier,1,uVar3);
                            uVar3 = cpumask_next(uVar3,&uStack_78);
                            *extraout_x1_00 = extraout_x8_00;
                        } while (uVar3 < extraout_x8_00);
                        uVar7 = *(param_1 + -0x68);
                        uVar5 = _segment.ehdr;
                    }
                    _segment.ehdr = uVar7 | uVar5;
code_r0x08001924:
                    iVar6 = 1;
                    goto code_r0x08001a00;
                }
                _segment.ehdr = param_4;
                _printk(0x800026f,"thermal_pause","thermal_pause_work");
                if (-1 < iVar2) goto code_r0x08001924;
code_r0x0800186c:
                iVar9 = iVar10 + -1;
                if (iVar10 < 1) goto code_r0x08001a78;
            }
            iVar6 = *(param_1 + -0x5c);
            iVar10 = iVar9;
        } while (iVar6 != *(param_1 + -0x60));
    }
    if (iVar2 < 0) {
code_r0x08001a78:
        if (0 < *(param_1 + 0x88)) {
            queue_delayed_work_on(0x20,_blocking_notifier_chain_unregister,param_1,2);
            iVar6 = *(param_1 + 0x88) + -1;
            goto code_r0x08001aa4;
        }
        if (*(param_1 + 0x88) == -1) {
            queue_delayed_work_on(0x20,_blocking_notifier_chain_unregister,param_1,2);
            iVar6 = 0x14;
            goto code_r0x08001aa4;
        }
    }
code_r0x0800183c:
    iVar6 = -1;
code_r0x08001aa4:
    *(param_1 + 0x88) = iVar6;
    uVar4 = mutex_unlock(obj.cpus_pause_lock);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18 = sym.thermal_pause_hp_online;
    mutex_lock(obj.cpus_pause_lock);
    if (_obj.thermal_pause_cdev_list != obj.thermal_pause_cdev_list) {
        pcVar8 = _obj.thermal_pause_cdev_list;
        do {
            if (((*(pcVar8 + (((uVar5 & 0xffffffff) >> 6) + 2) * 8) & 1L << (uVar5 & 0x3f)) != 0) &&
               (*(pcVar8 + 0x20) == 0)) {
                queue_work_on(0x20,_blocking_notifier_chain_unregister,pcVar8 + 0x48);
            }
            pcVar8 = *pcVar8;
        } while (pcVar8 != obj.thermal_pause_cdev_list);
    }
    mutex_unlock(obj.cpus_pause_lock);
    return 0;
}


// ===== sym.thermal_pause_register_cdev.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt @ 0x08001278 (size 8) =====

void sym.thermal_pause_register_cdev.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt(int64_t param_1,ulong *param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(param_1 + -0x38);
    *param_2 = delayed_work_timer_fn;
    if ((uVar1 & 0xf7ff8fff) == 0) {
        uVar2 = thermal_of_cooling_device_register
                          (*(param_1 + -0x20),param_1 + -0x18,param_1 + -0x48,
                           reloc.thermal_pause_get_max_state.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt);
        *(param_1 + -0x28) = uVar2;
        if (0xfffffffffffff000 < uVar2) {
            _printk(0x80002c0,"thermal_pause","thermal_pause_register_cdev",param_1 + -0x18,uVar2);
            *(param_1 + -0x28) = 0;
        }
    }
    return;
}


// ===== sym.thermal_pause_notifier_register @ 0x08001280 (size 48) =====

void sym.thermal_pause_notifier_register(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    blocking_notifier_chain_register(obj.thermal_pause_notifier,arg1);
    return;
}


// ===== sym.thermal_pause_notifier_unregister @ 0x080012b0 (size 48) =====

void sym.thermal_pause_notifier_unregister(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    blocking_notifier_chain_unregister(obj.thermal_pause_notifier,arg1);
    return;
}


// ===== sym.thermal_paused_cpumask @ 0x080012e0 (size 20) =====

code * sym.thermal_paused_cpumask(void)

{
    return obj.thermal_pause_notifier;
}


// ===== sym.thermal_pause_probe @ 0x080012f4 (size 848) =====

void sym.thermal_pause_probe(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    code *pcVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong *extraout_x1;
    ulong extraout_x8;
    ulong extraout_x8_00;
    uint64_t extraout_x8_01;
    uint64_t *extraout_x9;
    uint64_t *puVar10;
    uint64_t uVar11;
    uint64_t extraout_x10;
    ulong *in_x18;
    ulong uVar12;
    int64_t unaff_x21;
    int64_t unaff_x22;
    code *unaff_x23;
    int64_t *unaff_x26;
    code *unaff_x28;
    ulong unaff_x30;
    uchar auVar13 [16];
    int64_t iStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    uVar12 = *(arg1 + 0x300);
    uStack_80 = 0;
    iStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    iStack_70 = 0;
    uStack_b8 = 0;
    iVar3 = tracepoint_probe_register
                      (__tracepoint_android_vh_disable_thermal_cooling_stats,
                       sym.disable_cdev_stats.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt,0);
    if (iVar3 != 0) {
        _printk(0x800034d,"thermal_pause","thermal_vendor_hooks_init");
    }
    _obj.thermal_pause_cdev_list = obj.thermal_pause_cdev_list;
    *0x80001d0 = obj.thermal_pause_cdev_list;
    _segment.ehdr = 0;
    iVar5 = of_get_next_available_child(uVar12,0);
    if (iVar5 == 0) goto code_r0x08001590;
    unaff_x23 = __cpu_possible_mask;
    iStack_c0 = arg1 + 0x10;
    unaff_x26 = &iStack_70;
    unaff_x22 = 1;
code_r0x080013c4:
    iStack_70 = 0;
    of_phandle_iterator_init(&uStack_b0,iVar5,"qcom,cpus",0,0);
    iVar3 = of_phandle_iterator_next(&uStack_b0);
    unaff_x28 = NULL;
    unaff_x21 = iVar5;
    if (iVar3 == 0) {
        unaff_x28 = NULL;
        goto code_r0x08001514;
    }
    do {
        if (iStack_70 == 0) {
code_r0x080013b0:
            iVar5 = of_get_next_available_child(uVar12,unaff_x21);
            unaff_x21 = iVar5;
            if (iVar5 != 0) goto code_r0x080013c4;
code_r0x08001590:
            uVar9 = __cpuhp_setup_state(0xc0,"thermal-pause/cdev:online",1,
                                        sym.thermal_pause_hp_online.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt,0,0);
            if (-1 < uVar9) {
                _segment.ehdr = CONCAT44(*0x8000004,uVar9);
                uVar9 = 0;
            }
        }
        else {
            pcVar6 = devm_kmalloc(iStack_c0,0x108,0xdc0);
            if (pcVar6 != NULL) {
                iVar3 = of_property_read_string(unaff_x21,"qcom,cdev-alias",&uStack_b8);
                if (iVar3 == 0) {
                    strscpy(pcVar6 + 0x30,uStack_b8,0x14);
                }
                else {
                    snprintf(pcVar6 + 0x30,0x14,"thermal-pause-%X",unaff_x28);
                }
                *(pcVar6 + 0x18) = 0;
                *(pcVar6 + 0x20) = 0;
                *(pcVar6 + 0x28) = unaff_x21;
                *(pcVar6 + 0x100) = 0xffffffff;
                *(pcVar6 + 0x10) = iStack_70;
                *(pcVar6 + 0x48) = 0xfffffffe0;
                *(pcVar6 + 0x50) = pcVar6 + 0x50;
                *(pcVar6 + 0x58) = pcVar6 + 0x50;
                *(pcVar6 + 0x78) = 0xfffffffe0;
                *(pcVar6 + 0x60) = sym.thermal_pause_register_cdev.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt;
                *(pcVar6 + 0x80) = pcVar6 + 0x80;
                *(pcVar6 + 0x88) = pcVar6 + 0x80;
                *(pcVar6 + 0x90) = sym.thermal_pause_update_work.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt;
                init_timer_key(pcVar6 + 0xa8,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                unaff_x28 = _obj.thermal_pause_cdev_list;
                uVar7 = __list_add_valid(pcVar6,obj.thermal_pause_cdev_list,_obj.thermal_pause_cdev_list);
                if ((uVar7 & 1) != 0) {
                    *(unaff_x28 + 8) = pcVar6;
                    *pcVar6 = unaff_x28;
                    *(pcVar6 + 8) = obj.thermal_pause_cdev_list;
                    _obj.thermal_pause_cdev_list = pcVar6;
                }
                goto code_r0x080013b0;
            }
            uVar9 = 0xfffffff4;
        }
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_68) {
            return;
        }
        __stack_chk_fail(uVar9);
        uVar7 = extraout_x8_01;
        puVar10 = extraout_x9;
        uVar11 = extraout_x10;
code_r0x0800162c:
        Hint_Prefetch(puVar10,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar10,0x10);
            if (bVar2) {
                *puVar10 = *puVar10 | uVar11;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        unaff_x28 = unaff_x22 << (uVar7 & 0x3f) | unaff_x28;
        while (iVar3 = of_phandle_iterator_next(&uStack_b0), iVar3 == 0) {
code_r0x08001514:
            iVar5 = iStack_78;
            uVar4 = cpumask_next(0xffffffff,unaff_x23);
            *extraout_x1 = extraout_x8;
            if (uVar4 < extraout_x8) {
                uVar7 = uVar4;
                do {
                    iVar8 = get_cpu_device(uVar7);
                    if ((iVar8 != 0) && (*(iVar8 + 0x2f0) == iVar5)) {
                        puVar10 = unaff_x26 + (uVar7 >> 3 & 0x1ffffff8);
                        uVar11 = unaff_x22 << (uVar7 & 0x3f);
                        goto code_r0x0800162c;
                    }
                    auVar13 = cpumask_next(uVar7,unaff_x23);
                    *auVar13._8_8_ = extraout_x8_00;
                    uVar7 = auVar13._0_8_ & 0xffffffff;
                } while (auVar13._0_4_ < extraout_x8_00);
            }
        }
    } while( true );
}


// ===== sym.thermal_pause_remove @ 0x08001644 (size 264) =====

ulong sym.thermal_pause_remove(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    code *pcVar5;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    tracepoint_probe_unregister
              (__tracepoint_android_vh_disable_thermal_cooling_stats,
               sym.disable_cdev_stats.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt,0);
    if (_segment.ehdr != 0) {
        __cpuhp_remove_state(_segment.ehdr,0);
        _segment.ehdr = 0;
    }
    mutex_lock(obj.cpus_pause_lock);
    pcVar5 = _obj.thermal_pause_cdev_list;
    if (_obj.thermal_pause_cdev_list != obj.thermal_pause_cdev_list) {
        do {
            uVar3 = _blocking_notifier_chain_unregister;
            pcVar6 = *pcVar5;
            if (*(pcVar5 + 0x18) != 0) {
                *(pcVar5 + 0x1c) = 0;
                queue_delayed_work_on(0x20,uVar3,pcVar5 + 0x78,0);
            }
            if (*(pcVar5 + 0x20) != 0) {
                thermal_cooling_device_unregister();
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
        } while (pcVar6 != obj.thermal_pause_cdev_list);
    }
    mutex_unlock(obj.cpus_pause_lock);
    return 0;
}


// ===== sym.thermal_pause_register_cdev @ 0x0800174c (size 148) =====

void sym.thermal_pause_register_cdev(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + -0x38);
    *arg2 = delayed_work_timer_fn;
    if ((uVar1 & 0xf7ff8fff) == 0) {
        uVar2 = thermal_of_cooling_device_register
                          (*(arg1 + -0x20),arg1 + -0x18,arg1 + -0x48,
                           reloc.thermal_pause_get_max_state.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt);
        *(arg1 + -0x28) = uVar2;
        if (0xfffffffffffff000 < uVar2) {
            _printk(0x80002c0,"thermal_pause","thermal_pause_register_cdev",arg1 + -0x18,uVar2);
            *(arg1 + -0x28) = 0;
        }
    }
    return;
}


// ===== sym.thermal_pause_update_work @ 0x080017e0 (size 828) =====

ulong sym.thermal_pause_update_work(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *extraout_x1;
    ulong *extraout_x1_00;
    ulong *extraout_x1_01;
    ulong *extraout_x1_02;
    uint64_t in_x3;
    int iVar6;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong extraout_x8_01;
    ulong extraout_x8_02;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    code *pcVar8;
    int iVar9;
    int iVar10;
    ulong unaff_x30;
    uint64_t uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    mutex_lock(obj.cpus_pause_lock);
    iVar6 = *(arg1 + -0x5c);
    if (iVar6 == *(arg1 + -0x60)) {
        iVar2 = 0;
    }
    else {
        iVar10 = 5;
        do {
            if (iVar6 == 0) {
                uStack_70 = *(arg1 + -0x68);
                mutex_unlock(obj.cpus_pause_lock);
                iVar2 = walt_resume_cpus(&uStack_70,2);
                mutex_lock(obj.cpus_pause_lock);
                if (iVar2 == 0) {
                    if (_obj.thermal_pause_cdev_list == obj.thermal_pause_cdev_list) {
                        uVar5 = 0;
                    }
                    else {
                        uVar5 = 0;
                        pcVar8 = _obj.thermal_pause_cdev_list;
                        do {
                            if ((*(pcVar8 + 0x18) != 0) && (pcVar8 != arg1 + -0x78)) {
                                uVar5 = *(pcVar8 + 0x10) | uVar5;
                            }
                            pcVar8 = *pcVar8;
                        } while (pcVar8 != obj.thermal_pause_cdev_list);
                    }
                    uStack_78 = _segment.ehdr & (uVar5 ^ 0xffffffff);
                    uVar3 = cpumask_next(0xffffffff,&uStack_78);
                    *extraout_x1_01 = extraout_x8_01;
                    if (uVar3 < extraout_x8_01) {
                        do {
                            blocking_notifier_call_chain(obj.thermal_pause_notifier,0,uVar3);
                            uVar3 = cpumask_next(uVar3,&uStack_78);
                            *extraout_x1_02 = extraout_x8_02;
                        } while (uVar3 < extraout_x8_02);
                    }
                }
                else {
                    _segment.ehdr = in_x3;
                    _printk(0x8000245,"thermal_pause","thermal_resume_work");
                    uVar5 = _segment.ehdr;
                    if (iVar2 < 0) goto code_r0x0800186c;
                }
                _segment.ehdr = uVar5;
                iVar6 = 0;
code_r0x08001a00:
                *(arg1 + -0x60) = iVar6;
                if (*(arg1 + -0x5c) == iVar6) goto code_r0x0800183c;
                iVar9 = 5;
            }
            else {
                uStack_70 = *(arg1 + -0x68);
                mutex_unlock(obj.cpus_pause_lock);
                iVar2 = walt_pause_cpus(&uStack_70,2);
                mutex_lock(obj.cpus_pause_lock);
                uVar5 = _segment.ehdr;
                if (iVar2 == 0) {
                    uVar7 = *(arg1 + -0x68);
                    uStack_78 = uVar7 & (_segment.ehdr ^ 0xffffffff);
                    uVar3 = cpumask_next(0xffffffff,&uStack_78);
                    *extraout_x1 = extraout_x8;
                    if (uVar3 < extraout_x8) {
                        do {
                            blocking_notifier_call_chain(obj.thermal_pause_notifier,1,uVar3);
                            uVar3 = cpumask_next(uVar3,&uStack_78);
                            *extraout_x1_00 = extraout_x8_00;
                        } while (uVar3 < extraout_x8_00);
                        uVar7 = *(arg1 + -0x68);
                        uVar5 = _segment.ehdr;
                    }
                    _segment.ehdr = uVar7 | uVar5;
code_r0x08001924:
                    iVar6 = 1;
                    goto code_r0x08001a00;
                }
                _segment.ehdr = in_x3;
                _printk(0x800026f,"thermal_pause","thermal_pause_work");
                if (-1 < iVar2) goto code_r0x08001924;
code_r0x0800186c:
                iVar9 = iVar10 + -1;
                if (iVar10 < 1) goto code_r0x08001a78;
            }
            iVar6 = *(arg1 + -0x5c);
            iVar10 = iVar9;
        } while (iVar6 != *(arg1 + -0x60));
    }
    if (iVar2 < 0) {
code_r0x08001a78:
        if (0 < *(arg1 + 0x88)) {
            queue_delayed_work_on(0x20,_blocking_notifier_chain_unregister,arg1,2);
            iVar6 = *(arg1 + 0x88) + -1;
            goto code_r0x08001aa4;
        }
        if (*(arg1 + 0x88) == -1) {
            queue_delayed_work_on(0x20,_blocking_notifier_chain_unregister,arg1,2);
            iVar6 = 0x14;
            goto code_r0x08001aa4;
        }
    }
code_r0x0800183c:
    iVar6 = -1;
code_r0x08001aa4:
    *(arg1 + 0x88) = iVar6;
    uVar4 = mutex_unlock(obj.cpus_pause_lock);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18 = sym.thermal_pause_hp_online;
    mutex_lock(obj.cpus_pause_lock);
    if (_obj.thermal_pause_cdev_list != obj.thermal_pause_cdev_list) {
        pcVar8 = _obj.thermal_pause_cdev_list;
        do {
            if (((*(pcVar8 + (((uVar5 & 0xffffffff) >> 6) + 2) * 8) & 1L << (uVar5 & 0x3f)) != 0) &&
               (*(pcVar8 + 0x20) == 0)) {
                queue_work_on(0x20,_blocking_notifier_chain_unregister,pcVar8 + 0x48);
            }
            pcVar8 = *pcVar8;
        } while (pcVar8 != obj.thermal_pause_cdev_list);
    }
    mutex_unlock(obj.cpus_pause_lock);
    return 0;
}


// ===== sym.thermal_pause_hp_online @ 0x08001b1c (size 184) =====

ulong sym.thermal_pause_hp_online(int64_t arg1)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cpus_pause_lock);
    if (_obj.thermal_pause_cdev_list != obj.thermal_pause_cdev_list) {
        pcVar1 = _obj.thermal_pause_cdev_list;
        do {
            if (((*(pcVar1 + (((arg1 & 0xffffffffU) >> 6) + 2) * 8) & 1L << (arg1 & 0x3fU)) != 0) &&
               (*(pcVar1 + 0x20) == 0)) {
                queue_work_on(0x20,_blocking_notifier_chain_unregister,pcVar1 + 0x48);
            }
            pcVar1 = *pcVar1;
        } while (pcVar1 != obj.thermal_pause_cdev_list);
    }
    mutex_unlock(obj.cpus_pause_lock);
    return 0;
}


// ===== sym.disable_cdev_stats @ 0x08001bd4 (size 20) =====

void sym.disable_cdev_stats(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    *arg1 = 1;
    return;
}


// ===== sym.thermal_pause_get_max_state @ 0x08001be8 (size 24) =====

ulong sym.thermal_pause_get_max_state(int64_t arg1,int64_t arg2)

{
    *arg2 = 1;
    return 0;
}


// ===== sym.thermal_pause_get_cur_state @ 0x08001c00 (size 28) =====

ulong sym.thermal_pause_get_cur_state(int64_t arg1,int64_t arg2)

{
    *arg2 = *(*(arg1 + 0x3a8) + 0x18);
    return 0;
}


// ===== sym.thermal_pause_set_cur_state @ 0x08001c1c (size 140) =====

ulong sym.thermal_pause_set_cur_state(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    if (1 < arg2) {
        return 0xffffffea;
    }
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x3a8);
    mutex_lock(obj.cpus_pause_lock);
    uVar1 = _blocking_notifier_chain_unregister;
    *(iVar2 + 0x1c) = arg2 != 0;
    queue_delayed_work_on(0x20,uVar1,iVar2 + 0x78,0);
    mutex_unlock(obj.cpus_pause_lock);
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08001ca8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001cec

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
    //switch table (4 cases) at 0x8000240
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001d00);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001d60 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.thermal_pause_probe.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001d94 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.thermal_pause_probe.0994cac085b5899f8a0a7cca7a34ca6f.cfi_jt);
    return;
}

