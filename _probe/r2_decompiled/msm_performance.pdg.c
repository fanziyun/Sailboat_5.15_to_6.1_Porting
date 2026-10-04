// decompiled from msm_performance by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 432) =====

//WARNING: Switch with 1 destination removed at 0x08002910

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x1b6c344e75cfc4ea) {
        if (arg1 < -0xec78b8726b9c1e8) {
            if (arg1 != -0x550b9e52359ac614) {
                if ((arg1 == -0x53c887a672ae5243) && ((pcVar1 + -0x80011e0 >> 3 | pcVar1 << 0x3d) < 2)) {
                    return;
                }
                goto code_r0x080028d0;
            }
            pcVar2 = sym.nr_notify_userspace.75f2dd6024396ffa308185497e7aaec8.cfi_jt;
        }
        else {
            if (arg1 == -0xec78b8726b9c1e8) {
                if ((pcVar1 + -0x80011f0 >> 3 | pcVar1 << 0x3d) < 0xb) {
                    return;
                }
                goto code_r0x080028d0;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x080028d0;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x641d19c7be126e92) {
        if (arg1 == 0x1b6c344e75cfc4ea) {
            if ((pcVar1 + -0x8001248 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x080028d0;
        }
        if (arg1 != 0x1d093b1daee2e996) goto code_r0x080028d0;
        pcVar2 = sym.msm_perf_events_update.cfi_jt;
    }
    else if (arg1 == 0x641d19c7be126e92) {
        pcVar2 = sym.events_notify_userspace.75f2dd6024396ffa308185497e7aaec8.cfi_jt;
    }
    else {
        if (arg1 != 0x7d57972cd3914fb1) goto code_r0x080028d0;
        pcVar2 = sym.msm_perf_core_ctl_notify.75f2dd6024396ffa308185497e7aaec8.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080028d0:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002924);
    (*pcVar1)();
}


// ===== sym.msm_perf_core_ctl_notify.75f2dd6024396ffa308185497e7aaec8.cfi_jt @ 0x080011b8 (size 8) =====

ulong sym.msm_perf_core_ctl_notify.75f2dd6024396ffa308185497e7aaec8.cfi_jt
                (ulong param_1,ulong param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8004000 = *0x8004000 + *(param_3 + 4) + *(param_3 + 0xc) + *(param_3 + 0x10) + 1;
    if (*0x8004000 == 0x19) {
        *0x8004000 = 0;
        queue_work_on(0x20,_mutex_lock,obj.msm_perf_core_ctl_notify.sysfs_notify_work);
    }
    return 1;
}


// ===== sym.nr_notify_userspace.75f2dd6024396ffa308185497e7aaec8.cfi_jt @ 0x080011c0 (size 8) =====

void sym.nr_notify_userspace.75f2dd6024396ffa308185497e7aaec8.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sysfs_notify(*0x8004000,0,"aggr_top_load");
    sysfs_notify(*0x8004000,0,"aggr_big_nr");
    sysfs_notify(*0x8004000,0,"top_load_cluster");
    sysfs_notify(*0x8004000,0,"curr_cap_cluster");
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011c8 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    uint *puVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    ulong uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint32_t *in_x5;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    ulong *in_x18;
    uint32_t uVar10;
    uint32_t unaff_w21;
    uint64_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8004000 = kset_create_and_add("msm_performance",0,_mutex_unlock);
    if (*0x8004000 == NULL) {
        *0x8004000 = NULL;
        return 0xfffffff4;
    }
    *0x8004000 = kobject_create_and_add("parameters",*0x8004000 + 0x18);
    if (*0x8004000 == NULL) {
        uVar6 = 0x80006b5;
code_r0x08002a70:
        _printk(uVar6);
    }
    else {
        iVar3 = sysfs_create_group(*0x8004000,obj.param_attr_group);
        if (iVar3 != 0) {
            uVar6 = 0x8000395;
            goto code_r0x08002a70;
        }
    }
    *0x8004000 = kobject_create_and_add("events",*0x8004000 + 0x18);
    if (*0x8004000 == NULL) {
        uVar6 = 0x80006db;
code_r0x08002a80:
        _printk(uVar6);
        uVar5 = *0x8004000;
    }
    else {
        iVar3 = sysfs_create_group(*0x8004000,obj.events_attr_group);
        if (iVar3 != 0) {
            uVar6 = 0x8000395;
            goto code_r0x08002a80;
        }
        *0x8004000 = *0x8004000 & 0xffffffff00000000;
        uVar5 = kthread_create_on_node
                          (sym.events_notify_userspace.75f2dd6024396ffa308185497e7aaec8.cfi_jt,0,0xffffffff,
                           "msm_perf:events_notify");
        unaff_w21 = 0x8004000;
        if (uVar5 < 0xfffffffffffff001) {
            wake_up_process(uVar5);
            *0x8004145 = 1;
        }
    }
    *0x8004000 = uVar5;
    *0x8004000 = kobject_create_and_add("notify",*0x8004000 + 0x18);
    if (*0x8004000 == NULL) {
        uVar6 = 0x80004c6;
code_r0x08002e0c:
        _printk(uVar6);
    }
    else {
        iVar3 = sysfs_create_group(*0x8004000,obj.notify_attr_group);
        if (iVar3 != 0) {
            kobject_put(*0x8004000);
            uVar6 = 0x8000395;
            goto code_r0x08002e0c;
        }
    }
    uVar5 = 0xffffffff;
    uVar6 = 0xffffffff;
    *in_x5 = unaff_w21;
    do {
        uVar6 = cpumask_next(uVar6,__cpu_possible_mask);
        uVar10 = uVar5 + 1;
        uVar5 = uVar10;
    } while (uVar6 < unaff_w21);
    iVar8 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar8 = 0x30;
    }
    piVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xdc0,0x10);
    *0x8004000 = piVar7;
    if (piVar7 != NULL) {
        if (uVar10 >> 0x3b == 0) {
            uVar5 = -(uVar10 >> 0x1f) & 0xffffffe000000000 | uVar5 << 5;
            iVar8 = __kmalloc(uVar5,0xdc0);
            piVar7 = *0x8004000;
            **0x8004000 = iVar8;
            if (iVar8 == 0) {
                iVar8 = 0;
            }
            else {
                iVar8 = __kmalloc(uVar5,0xdc0);
                piVar7 = *0x8004000;
                (*0x8004000)[1] = iVar8;
                if (iVar8 != 0) {
                    uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
                    *in_x5 = extraout_w8;
                    if (uVar5 < extraout_w8) {
                        uVar10 = 0x11;
                        do {
                            uVar9 = uVar5 & 0xffffffff;
                            *(*piVar7 + (-(uVar9 >> 0x1f) & 0xffffffe000000000 | uVar9 << 5)) = 8;
                            uVar11 = uVar5;
                            puVar1 = *piVar7 + uVar11 * 0x20;
                            iVar3 = qcom_pmu_event_supported(*puVar1);
                            if ((iVar3 != 0) && (_printk(0x8000679,"set_event",*puVar1,uVar9,iVar3), iVar3 < 0))
                            break;
                            piVar7 = *0x8004000;
                            *((*0x8004000)[1] + uVar11 * 0x20) = 0x11;
                            puVar1 = piVar7[1] + uVar11 * 0x20;
                            iVar3 = qcom_pmu_event_supported(*puVar1,uVar9);
                            if ((iVar3 != 0) &&
                               (_printk(0x8000679,"set_event",*puVar1,uVar9,iVar3), piVar7 = *0x8004000, iVar3 < 0
                               )) {
                                if ((*(__cpu_possible_mask + (uVar11 >> 6 & 0x3ffffff) * 8) >> (uVar5 & 0x3f) & 1) != 0)
                                {
                                    *(**0x8004000 + uVar9 * 0x20 + 8) = 0;
                                    *(*piVar7 + uVar9 * 0x20 + 0x10) = 0;
                                    *(*piVar7 + uVar9 * 0x20 + 0x18) = 0;
                                    *(piVar7[1] + uVar9 * 0x20 + 8) = 0;
                                    *(piVar7[1] + uVar9 * 0x20 + 0x10) = 0;
                                    *(piVar7[1] + uVar9 * 0x20 + 0x18) = 0;
                                }
                                break;
                            }
                            if (0x1f < uVar5) goto code_r0x08002e24;
                            if (*(cpu_scale + *(__per_cpu_offset + uVar9 * 8)) < _segment.ehdr) {
                                _segment.ehdr = *(cpu_scale + *(__per_cpu_offset + uVar9 * 8));
                            }
                            uVar5 = cpumask_next(uVar9,__cpu_possible_mask);
                            *in_x5 = extraout_w8_00;
                            piVar7 = *0x8004000;
                        } while (uVar5 < extraout_w8_00);
                    }
                    goto code_r0x08002d24;
                }
                iVar8 = 1;
            }
        }
        else {
            iVar8 = 0;
            *piVar7 = 0;
        }
        iVar8 = iVar8 << 3;
        do {
            kfree(*(piVar7 + iVar8));
            piVar7 = *0x8004000;
            *(*0x8004000 + iVar8) = 0;
            iVar8 = iVar8 + -8;
        } while (iVar8 != -8);
        kfree(piVar7);
        *0x8004000 = NULL;
    }
code_r0x08002d24:
    cpus_read_lock();
    *in_x5 = uVar10;
    uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
    uVar4 = uVar5;
    do {
        if (uVar10 <= uVar4) {
            __cpuhp_setup_state(0xc0,"msm_performance_cpu_hotplug",0,
                                sym.hotplug_notify_up.75f2dd6024396ffa308185497e7aaec8.cfi_jt,
                                sym.hotplug_notify_down.75f2dd6024396ffa308185497e7aaec8.cfi_jt,0);
            cpus_read_unlock();
            return 0;
        }
        if ((*(__cpu_online_mask + (uVar5 >> 6 & 0x3ffffff) * 8) >> (uVar5 & 0x3f) & 1) == 0) {
            if (0x1f < uVar5) {
code_r0x08002e24:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8002e28);
                (*pcVar2)();
            }
            obj.cpu_is_hp[*(__per_cpu_offset + (uVar5 & 0xffffffff) * 8)] = 0x1;
            *in_x5 = uVar10;
        }
        uVar5 = cpumask_next(uVar5,__cpu_possible_mask);
        uVar4 = uVar5;
    } while( true );
}


// ===== sym.msm_perf_events_update.cfi_jt @ 0x080011d0 (size 8) =====

void sym.msm_perf_events_update.cfi_jt
               (int param_1,uint32_t param_2,int param_3,uint param_4,int param_5,uint32_t param_6)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    ulong uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((param_1 != 0) || (param_5 == 0)) || (_obj.game_status_pid != param_3)) || ((param_6 & 1) == 0)) {
        return;
    }
    uVar4 = _raw_spin_lock_irqsave(obj.gfx_circ_buff_lock);
    uVar2 = _segment.ehdr;
    uVar6 = _segment.ehdr;
    uVar1 = _segment.ehdr + 0x200;
    if (-1 < _segment.ehdr + 1) {
        uVar1 = _segment.ehdr + 1;
    }
    _segment.ehdr = (_segment.ehdr + 1) - (uVar1 & 0xfffffe00);
    _raw_spin_unlock_irqrestore(obj.gfx_circ_buff_lock,uVar4);
    if (uVar2 < 0x200) {
        uVar5 = uVar6 * 0x20;
        *(obj.gpu_circ_buff + uVar5) = param_3;
        if ((uVar6 << 5 | 4) < 0x4001) {
            *(uVar6 * 0x20 + 0x80000bc) = param_4;
            if (((uVar5 | 8) < 0x4001) && (*(uVar6 * 0x20 + 0x80000c0) = param_5, (uVar5 | 0x18) < 0x4001)) {
                *(uVar6 * 0x20 + 0x80000d0) = param_2;
                uVar4 = ktime_get();
                if ((uVar5 | 0x10) < 0x4001) {
                    *(obj.param_attr_group + uVar6 * 0x20) = uVar4;
                    if ((param_2 & 0xfffffffd) != 1) {
                        return;
                    }
                    complete(obj.game_status_pid);
                    return;
                }
            }
        }
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(1,0x8001398);
        (*pcVar3)();
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x800139c);
    (*pcVar3)();
}


// ===== sym.events_notify_userspace.75f2dd6024396ffa308185497e7aaec8.cfi_jt @ 0x080011d8 (size 8) =====

ulong sym.events_notify_userspace.75f2dd6024396ffa308185497e7aaec8.cfi_jt(void)

{
    int64_t iVar1;
    char cVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    do {
        *(iVar1 + 0x28) = 1;
        DataMemoryBarrier(2,3);
        uVar3 = _raw_spin_lock_irqsave(obj.events_group);
        if (*0x8004144 == '\0') {
            _raw_spin_unlock_irqrestore(obj.events_group,uVar3);
            schedule();
            uVar4 = kthread_should_stop();
            if ((uVar4 & 1) != 0) {
                return 0;
            }
            uVar3 = _raw_spin_lock_irqsave(obj.events_group);
        }
        *(iVar1 + 0x28) = 0;
        cVar2 = *0x8004144;
        DataMemoryBarrier(2,3);
        *0x8004144 = '\0';
        _raw_spin_unlock_irqrestore(obj.events_group,uVar3);
        if (cVar2 != '\0') {
            sysfs_notify(*0x8004000,0,"cpu_hotplug");
        }
    } while( true );
}


// ===== sym.hotplug_notify_down.75f2dd6024396ffa308185497e7aaec8.cfi_jt @ 0x080011e0 (size 8) =====

ulong sym.hotplug_notify_down.75f2dd6024396ffa308185497e7aaec8.cfi_jt(uint64_t param_1)

{
    int64_t *piVar1;
    code *pcVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.perfevent_lock);
    if (param_1 < 0x20) {
        obj.cpu_is_hp[*(__per_cpu_offset + (param_1 & 0xffffffff) * 8)] = 0x1;
        piVar1 = *0x8004000;
        if ((__raw_spin_lock_irqsave >> (param_1 & 0x3f) & 1) != 0) {
            iVar3 = (param_1 & 0xffffffff) * 0x20;
            *(**0x8004000 + iVar3 + 8) = 0;
            *(*piVar1 + iVar3 + 0x10) = 0;
            *(*piVar1 + iVar3 + 0x18) = 0;
            *(piVar1[1] + iVar3 + 8) = 0;
            *(piVar1[1] + iVar3 + 0x10) = 0;
            *(piVar1[1] + iVar3 + 0x18) = 0;
        }
        mutex_unlock(obj.perfevent_lock);
        return 0;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8001520);
    (*pcVar2)();
}


// ===== sym.hotplug_notify_up.75f2dd6024396ffa308185497e7aaec8.cfi_jt @ 0x080011e8 (size 8) =====

ulong sym.hotplug_notify_up.75f2dd6024396ffa308185497e7aaec8.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.perfevent_lock);
    if (param_1 < 0x20) {
        obj.cpu_is_hp[*(__per_cpu_offset + param_1 * 8)] = 0x0;
        mutex_unlock(obj.perfevent_lock);
        if (*0x8004145 != '\0') {
            uVar2 = _raw_spin_lock_irqsave(obj.events_group);
            *0x8004144 = 1;
            _raw_spin_unlock_irqrestore(obj.events_group,uVar2);
            wake_up_process(*0x8004000);
        }
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8001448);
    (*pcVar1)();
}


// ===== sym.get_game_start_pid.75f2dd6024396ffa308185497e7aaec8.cfi_jt @ 0x080011f0 (size 8) =====

int64_t sym.get_game_start_pid.75f2dd6024396ffa308185497e7aaec8.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"%ld\n",_obj.game_status_pid);
    return iVar1;
}


// ===== sym.show_big_nr.75f2dd6024396ffa308185497e7aaec8.cfi_jt @ 0x080011f8 (size 8) =====

int64_t sym.show_big_nr.75f2dd6024396ffa308185497e7aaec8.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x80004a4,*0x8004000);
    return iVar1;
}


// ===== sym.show_top_load_cluster.75f2dd6024396ffa308185497e7aaec8.cfi_jt @ 0x08001200 (size 8) =====

int64_t sym.show_top_load_cluster.75f2dd6024396ffa308185497e7aaec8.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"%u %u %u\n",*0x8004000,*0x8004000,*0x8004000);
    return iVar1;
}


// ===== sym.show_cpu_hotplug.75f2dd6024396ffa308185497e7aaec8.cfi_jt @ 0x08001208 (size 8) =====

int64_t sym.show_cpu_hotplug.75f2dd6024396ffa308185497e7aaec8.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000600);
    return iVar1;
}


// ===== sym.get_core_ctl_register.75f2dd6024396ffa308185497e7aaec8.cfi_jt @ 0x08001210 (size 8) =====

int64_t sym.get_core_ctl_register.75f2dd6024396ffa308185497e7aaec8.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0x4e;
    if (obj.core_ctl_register != 0x0) {
        uVar2 = 0x59;
    }
    iVar1 = scnprintf(param_3,0x1000,0x8000613,uVar2);
    return iVar1;
}


// ===== sym.get_cpu_total_instruction.75f2dd6024396ffa308185497e7aaec8.cfi_jt @ 0x08001218 (size 8) =====

int64_t sym.get_cpu_total_instruction.75f2dd6024396ffa308185497e7aaec8.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong *param_6)

{
    uint64_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    char *pcVar5;
    uint uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    uVar3 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *param_6 = _raw_spin_lock_irqsave;
    if (uVar3 < 0x8016000) {
        iVar12 = 0;
        iVar10 = 0;
        uVar11 = 0;
        uVar9 = 0;
        iVar13 = **0x8004000;
        do {
            uVar15 = uVar3;
            iVar14 = uVar3;
            iStack_70 = 0;
            mutex_lock(obj.perfevent_lock);
            iVar4 = *(iVar13 + (-(uVar3 >> 0x1f) & 0xffffffe000000000 | uVar15 << 5));
            if (iVar4 != 0) {
                if (0x1f < uVar3) goto code_r0x08002120;
                if (obj.cpu_is_hp[*(__per_cpu_offset + uVar15 * 8)] == 0x0) {
                    iVar4 = qcom_pmu_read(uVar15,iVar4,&iStack_70);
                    if (iVar4 != 0) goto code_r0x08001f98;
                }
                else {
                    iStack_70 = *(iVar13 + iVar14 * 0x20 + 0x18);
                }
                iVar13 = iVar13 + iVar14 * 0x20;
                iVar8 = *(iVar13 + 8);
                *(iVar13 + 8) = iStack_70;
                *(iVar13 + 0x10) = iStack_70 - iVar8;
            }
code_r0x08001f98:
            mutex_unlock(obj.perfevent_lock);
            iVar13 = (*0x8004000)[1];
            iStack_70 = 0;
            mutex_lock(obj.perfevent_lock);
            iVar8 = iVar14 * 0x20;
            if (*(iVar13 + iVar8) != 0) {
                if (0x1f < uVar3) goto code_r0x08002120;
                if (obj.cpu_is_hp[*(__per_cpu_offset + uVar15 * 8)] == 0x0) {
                    iVar4 = qcom_pmu_read(uVar15,*(iVar13 + iVar8),&iStack_70);
                    if (iVar4 != 0) goto code_r0x0800200c;
                }
                else {
                    iStack_70 = *(iVar13 + iVar14 * 0x20 + 0x18);
                }
                iVar13 = iVar13 + iVar14 * 0x20;
                iVar14 = *(iVar13 + 8);
                *(iVar13 + 8) = iStack_70;
                *(iVar13 + 0x10) = iStack_70 - iVar14;
            }
code_r0x0800200c:
            mutex_unlock(obj.perfevent_lock);
            if (0x1f < uVar3) {
code_r0x08002120:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8002124);
                (*pcVar2)();
            }
            iVar13 = **0x8004000;
            iVar14 = *(iVar13 + iVar8 + 0x10);
            uVar7 = *((*0x8004000)[1] + iVar8 + 0x10);
            if (_segment.ehdr < *(cpu_scale + *(__per_cpu_offset + uVar15 * 8))) {
                if (649999 < uVar7) {
                    uVar1 = 0;
                    if (uVar7 != 0) {
                        uVar1 = (iVar14 * 100) / uVar7;
                    }
                    if (uVar11 <= uVar1) {
                        uVar11 = uVar1;
                    }
                }
                iVar12 = iVar14 + iVar12;
            }
            else {
                if (uVar7 != 0) {
                    uVar1 = 0;
                    if (uVar7 != 0) {
                        uVar1 = (iVar14 * 100) / uVar7;
                    }
                    if (uVar9 <= uVar1) {
                        uVar9 = uVar1;
                    }
                }
                iVar10 = iVar14 + iVar10;
            }
            uVar3 = cpumask_next(uVar15,__cpu_possible_mask);
            *param_6 = _raw_spin_lock_irqsave;
        } while (uVar3 < 0x8016000);
    }
    else {
        uVar9 = 0;
        uVar11 = 0;
        iVar10 = 0;
        iVar12 = 0;
    }
    pcVar5 = "%llu:%llu:%llu:%llu\n";
    iVar4 = scnprintf(param_3,0x1000,"%llu:%llu:%llu:%llu\n",iVar12,uVar11,iVar10,uVar9);
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        *extraout_x18 = sym.get_core_ctl_register;
        uVar6 = 0x4e;
        if (obj.core_ctl_register != 0x0) {
            uVar6 = 0x59;
        }
        iVar4 = scnprintf(pcVar5,0x1000,0x8000613,uVar6);
        return iVar4;
    }
    return iVar4;
}


// ===== sym.show_curr_cap_cluster.75f2dd6024396ffa308185497e7aaec8.cfi_jt @ 0x08001220 (size 8) =====

int64_t sym.show_curr_cap_cluster.75f2dd6024396ffa308185497e7aaec8.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"%u %u %u\n",*0x8004000,*0x8004000,*0x8004000);
    return iVar1;
}


// ===== sym.show_top_load.75f2dd6024396ffa308185497e7aaec8.cfi_jt @ 0x08001228 (size 8) =====

int64_t sym.show_top_load.75f2dd6024396ffa308185497e7aaec8.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x80004a4,*0x8004000);
    return iVar1;
}


// ===== sym.get_cpu_max_freq.75f2dd6024396ffa308185497e7aaec8.cfi_jt @ 0x08001230 (size 8) =====

int64_t sym.get_cpu_max_freq.75f2dd6024396ffa308185497e7aaec8.cfi_jt
                  (ulong param_1,ulong param_2,int64_t param_3,ulong param_4,ulong param_5,ulong *param_6)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong *in_x18;
    uint64_t uVar4;
    int iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = cpumask_next(0xffffffff,__cpu_present_mask);
    *param_6 = extraout_x8;
    if (uVar2 < extraout_x8) {
        iVar5 = 0;
        do {
            uVar4 = uVar2;
            if (0x1f < uVar2) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8001c04);
                (*pcVar1)();
            }
            iVar3 = scnprintf(param_3 + iVar5,0x1000 - iVar5,"%d:%u ",uVar4,
                              *(*(__per_cpu_offset + uVar4 * 8) + 0x8002ee0));
            iVar5 = iVar3 + iVar5;
            uVar2 = cpumask_next(uVar4,__cpu_present_mask);
            *param_6 = extraout_x8_00;
        } while (uVar2 < extraout_x8_00);
    }
    else {
        iVar5 = 0;
    }
    iVar3 = scnprintf(param_3 + iVar5,0x1000 - iVar5,0x8000600);
    return iVar3 + iVar5;
}


// ===== sym.get_cpu_min_freq.75f2dd6024396ffa308185497e7aaec8.cfi_jt @ 0x08001238 (size 8) =====

int64_t sym.get_cpu_min_freq.75f2dd6024396ffa308185497e7aaec8.cfi_jt
                  (ulong param_1,ulong param_2,int64_t param_3,ulong param_4,ulong param_5,ulong *param_6)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong *in_x18;
    uint64_t uVar4;
    int iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = cpumask_next(0xffffffff,__cpu_present_mask);
    *param_6 = extraout_x8;
    if (uVar2 < extraout_x8) {
        iVar5 = 0;
        do {
            uVar4 = uVar2;
            if (0x1f < uVar2) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8001634);
                (*pcVar1)();
            }
            iVar3 = scnprintf(param_3 + iVar5,0x1000 - iVar5,"%d:%u ",uVar4,
                              *(obj.msm_perf_cpu_stats + *(__per_cpu_offset + uVar4 * 8)));
            iVar5 = iVar3 + iVar5;
            uVar2 = cpumask_next(uVar4,__cpu_present_mask);
            *param_6 = extraout_x8_00;
        } while (uVar2 < extraout_x8_00);
    }
    else {
        iVar5 = 0;
    }
    iVar3 = scnprintf(param_3 + iVar5,0x1000 - iVar5,0x8000600);
    return iVar3 + iVar5;
}


// ===== sym.show_perf_gfx_evts.75f2dd6024396ffa308185497e7aaec8.cfi_jt @ 0x08001240 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080027d4)
//WARNING: Removing unreachable block (ram,0x080027f8)
//WARNING: Removing unreachable block (ram,0x08002800)
//WARNING: Removing unreachable block (ram,0x080028c8)
//WARNING: Removing unreachable block (ram,0x08002814)
//WARNING: Removing unreachable block (ram,0x08002824)
//WARNING: Removing unreachable block (ram,0x08002834)
//WARNING: Removing unreachable block (ram,0x080028c4)
//WARNING: Removing unreachable block (ram,0x08002840)
//WARNING: Removing unreachable block (ram,0x080028b4)
//WARNING: Removing unreachable block (ram,0x08002884)

ulong sym.show_perf_gfx_evts.75f2dd6024396ffa308185497e7aaec8.cfi_jt(void)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = wait_for_completion_interruptible(obj.game_status_pid);
    if (iVar1 == 0) {
        uVar2 = _raw_spin_lock_irqsave(obj.gfx_circ_buff_lock);
        _segment.ehdr = _segment.ehdr % 0x200;
        _raw_spin_unlock_irqrestore(obj.gfx_circ_buff_lock,uVar2);
    }
    return 0;
}


// ===== sym.set_game_start_pid.75f2dd6024396ffa308185497e7aaec8.cfi_jt @ 0x08001248 (size 8) =====

int64_t sym.set_game_start_pid.75f2dd6024396ffa308185497e7aaec8.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    char cVar2;
    int iVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    iVar3 = kstrtoll(param_3,0,&uStack_30);
    if (iVar3 == 0) {
        _segment.ehdr = uStack_30;
    }
    else {
        _printk(0x8000543,iVar3);
        param_4 = iVar3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.events_notify_userspace;
    iVar1 = sp_el0;
    do {
        *(iVar1 + 0x28) = 1;
        DataMemoryBarrier(2,3);
        uVar4 = _raw_spin_lock_irqsave(obj.events_group);
        if (*0x8004144 == '\0') {
            _raw_spin_unlock_irqrestore(obj.events_group,uVar4);
            schedule();
            uVar5 = kthread_should_stop();
            if ((uVar5 & 1) != 0) {
                return 0;
            }
            uVar4 = _raw_spin_lock_irqsave(obj.events_group);
        }
        *(iVar1 + 0x28) = 0;
        cVar2 = *0x8004144;
        DataMemoryBarrier(2,3);
        *0x8004144 = '\0';
        _raw_spin_unlock_irqrestore(obj.events_group,uVar4);
        if (cVar2 != '\0') {
            sysfs_notify(*0x8004000,0,"cpu_hotplug");
        }
    } while( true );
}


// ===== sym.set_cpu_max_freq.75f2dd6024396ffa308185497e7aaec8.cfi_jt @ 0x08001250 (size 8) =====

int64_t sym.set_cpu_max_freq.75f2dd6024396ffa308185497e7aaec8.cfi_jt
                  (ulong param_1,ulong param_2,code *param_3,int64_t param_4,ulong param_5,ulong *param_6)

{
    char cVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    code *pcVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong extraout_x8;
    ulong extraout_x8_00;
    uint64_t extraout_x8_01;
    ulong extraout_x9;
    code *extraout_x11;
    ulong *in_x18;
    char *pcVar9;
    code *unaff_x23;
    code *unaff_x24;
    uint32_t unaff_w25;
    int unaff_w26;
    code *unaff_x27;
    uint32_t unaff_w28;
    ulong unaff_x30;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_70 = 0;
    if ((obj.ready_for_freq_updates & 1) == 0) {
        uVar3 = sym.freq_qos_request_init();
        if (uVar3 != 0) {
            pcVar9 = uVar3;
            _printk(0x8000453,"set_cpu_max_freq",pcVar9);
            param_4 = uVar3;
            goto code_r0x08001e1c;
        }
        obj.ready_for_freq_updates = 0x1;
    }
    unaff_w25 = 0xffffffff;
    pcVar9 = 0x80004ed;
    pcVar5 = param_3;
    do {
        pcVar5 = strpbrk(pcVar5 + 1,0x80004ed);
        unaff_w25 = unaff_w25 + 1;
    } while (pcVar5 != NULL);
    if ((unaff_w25 & 1) != 0) {
        unaff_x23 = __per_cpu_offset;
        unaff_x24 = obj.msm_perf_cpu_stats;
        *0x8004000 = 0;
        if (unaff_w25 < 1) goto code_r0x08001dac;
        unaff_w26 = 0;
        unaff_w28 = 0x7fffffff;
        pcVar9 = "%u:%u";
        unaff_x27 = __cpu_possible_mask;
        goto code_r0x08001d2c;
    }
code_r0x08001c88:
    param_4 = -0x16;
code_r0x08001e1c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return param_4;
    }
    __stack_chk_fail();
    uVar8 = extraout_x8_01;
    pcVar5 = extraout_x11;
    while( true ) {
        Hint_Prefetch(pcVar5,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(pcVar5,0x10);
            if (bVar2) {
                *pcVar5 = *pcVar5 | uVar8;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        do {
            uVar6 = strlen(param_3);
            iVar7 = strnchr(param_3,uVar6,0x20);
            unaff_w26 = unaff_w26 + 2;
            param_3 = iVar7 + 1;
            if (unaff_w25 <= unaff_w26) goto code_r0x08001dac;
code_r0x08001d2c:
            iVar4 = sscanf(param_3,pcVar9,&uStack_70,&uStack_70 + 4);
            if (iVar4 != 2) goto code_r0x08001c88;
            *param_6 = extraout_x9;
            if (extraout_x9 <= uStack_70) goto code_r0x08001dac;
        } while ((*(unaff_x27 + (uStack_70 >> 3 & 0x1ffffff8)) >> (uStack_70 & 0x3f) & 1) == 0);
        if (0x1f < uStack_70) break;
        uVar8 = 1L << (uStack_70 & 0x3f);
        uVar3 = uStack_70._4_4_;
        if (unaff_w28 <= uStack_70._4_4_) {
            uVar3 = unaff_w28;
        }
        *(unaff_x24 + *(unaff_x23 + (uStack_70 & 0xffffffff) * 8) + 4) = uVar3;
        pcVar5 = obj.limit_mask_max;
    }
code_r0x08001e5c:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8001e60);
    (*pcVar5)();
code_r0x08001dac:
    cpus_read_lock();
    uVar3 = cpumask_next(0xffffffff,obj.limit_mask_max);
    *param_6 = extraout_x8;
    if (uVar3 < extraout_x8) {
        pcVar9 = uVar3;
        unaff_w25 = 0x8002f30;
        param_3 = obj.limit_mask_max;
        do {
            if (0x1f < pcVar9) goto code_r0x08001e5c;
            freq_qos_update_request
                      (obj.qos_req_max + *(unaff_x23 + pcVar9 * 8),*(unaff_x24 + *(unaff_x23 + pcVar9 * 8) + 4));
            uVar3 = cpumask_next(pcVar9,obj.limit_mask_max);
            *param_6 = extraout_x8_00;
            pcVar9 = uVar3;
        } while (uVar3 < extraout_x8_00);
    }
    cpus_read_unlock();
    goto code_r0x08001e1c;
}


// ===== sym.set_cpu_min_freq.75f2dd6024396ffa308185497e7aaec8.cfi_jt @ 0x08001258 (size 8) =====

int64_t sym.set_cpu_min_freq.75f2dd6024396ffa308185497e7aaec8.cfi_jt
                  (ulong param_1,ulong param_2,code *param_3,int64_t param_4,ulong param_5,ulong *param_6)

{
    char cVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    code *pcVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong extraout_x8;
    ulong extraout_x8_00;
    code *extraout_x8_01;
    ulong extraout_x9;
    uint64_t uVar8;
    uint64_t extraout_x9_00;
    ulong *in_x18;
    char *pcVar9;
    code *unaff_x23;
    code *unaff_x24;
    uint32_t unaff_w25;
    int unaff_w26;
    code *unaff_x27;
    code *unaff_x28;
    ulong unaff_x30;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_70 = 0;
    if ((obj.ready_for_freq_updates & 1) == 0) {
        uVar3 = sym.freq_qos_request_init();
        if (uVar3 != 0) {
            pcVar9 = uVar3;
            _printk(0x8000453,"set_cpu_min_freq",pcVar9);
            param_4 = uVar3;
            goto code_r0x08001840;
        }
        obj.ready_for_freq_updates = 0x1;
    }
    unaff_w25 = 0xffffffff;
    pcVar9 = 0x80004ed;
    pcVar5 = param_3;
    do {
        pcVar5 = strpbrk(pcVar5 + 1,0x80004ed);
        unaff_w25 = unaff_w25 + 1;
    } while (pcVar5 != NULL);
    if ((unaff_w25 & 1) != 0) {
        unaff_x23 = __per_cpu_offset;
        unaff_x24 = obj.msm_perf_cpu_stats;
        *0x8004000 = 0;
        if (unaff_w25 < 1) goto code_r0x080017d4;
        unaff_w26 = 0;
        unaff_x28 = obj.limit_mask_min;
        pcVar9 = "%u:%u";
        unaff_x27 = __cpu_possible_mask;
        goto code_r0x08001758;
    }
code_r0x080016b8:
    param_4 = -0x16;
code_r0x08001840:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return param_4;
    }
    __stack_chk_fail();
    pcVar5 = extraout_x8_01;
    uVar8 = extraout_x9_00;
    while( true ) {
        Hint_Prefetch(pcVar5,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(pcVar5,0x10);
            if (bVar2) {
                *pcVar5 = *pcVar5 | uVar8;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        do {
            uVar6 = strlen(param_3);
            iVar7 = strnchr(param_3,uVar6,0x20);
            unaff_w26 = unaff_w26 + 2;
            param_3 = iVar7 + 1;
            if (unaff_w25 <= unaff_w26) goto code_r0x080017d4;
code_r0x08001758:
            iVar4 = sscanf(param_3,pcVar9,&uStack_70,&uStack_70 + 4);
            if (iVar4 != 2) goto code_r0x080016b8;
            *param_6 = extraout_x9;
            if (extraout_x9 <= uStack_70) goto code_r0x080017d4;
        } while ((*(unaff_x27 + (uStack_70 >> 3 & 0x1ffffff8)) >> (uStack_70 & 0x3f) & 1) == 0);
        if (0x1f < uStack_70) break;
        *(unaff_x24 + *(unaff_x23 + (uStack_70 & 0xffffffff) * 8)) = uStack_70._4_4_;
        uVar8 = 1L << (uStack_70 & 0x3f);
        pcVar5 = unaff_x28 + (uStack_70 >> 3 & 0x1ffffff8);
    }
code_r0x08001880:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8001884);
    (*pcVar5)();
code_r0x080017d4:
    cpus_read_lock();
    uVar3 = cpumask_next(0xffffffff,obj.limit_mask_min);
    *param_6 = extraout_x8;
    if (uVar3 < extraout_x8) {
        pcVar9 = uVar3;
        unaff_w25 = 0x8002ee8;
        param_3 = obj.limit_mask_min;
        do {
            if (0x1f < pcVar9) goto code_r0x08001880;
            freq_qos_update_request
                      (obj.qos_req_min + *(unaff_x23 + pcVar9 * 8),*(unaff_x24 + *(unaff_x23 + pcVar9 * 8)));
            uVar3 = cpumask_next(pcVar9,obj.limit_mask_min);
            *param_6 = extraout_x8_00;
            pcVar9 = uVar3;
        } while (uVar3 < extraout_x8_00);
    }
    cpus_read_unlock();
    goto code_r0x08001840;
}


// ===== sym.set_core_ctl_register.75f2dd6024396ffa308185497e7aaec8.cfi_jt @ 0x08001260 (size 8) =====

int64_t sym.set_core_ctl_register.75f2dd6024396ffa308185497e7aaec8.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    code cVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cVar1 = obj.core_ctl_register;
    iVar2 = kstrtobool(param_3);
    if (iVar2 < 0) {
        _printk(0x80003ee,iVar2);
        param_4 = iVar2;
    }
    else if (obj.core_ctl_register != cVar1) {
        if (obj.core_ctl_register == 0x0) {
            core_ctl_notifier_unregister(reloc.msm_perf_core_ctl_notify.75f2dd6024396ffa308185497e7aaec8.cfi_jt);
        }
        else {
            core_ctl_notifier_register();
        }
    }
    return param_4;
}


// ===== sym.msm_perf_events_update @ 0x08001268 (size 308) =====

void sym.msm_perf_events_update(ulong noname_0,int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    int in_w0;
    ulong uVar4;
    int in_w4;
    uint32_t in_w5;
    ulong *in_x18;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((in_w0 != 0) || (in_w4 == 0)) || (_obj.game_status_pid != arg2)) || ((in_w5 & 1) == 0)) {
        return;
    }
    uVar4 = _raw_spin_lock_irqsave(obj.gfx_circ_buff_lock);
    uVar2 = _segment.ehdr;
    uVar6 = _segment.ehdr;
    uVar1 = _segment.ehdr + 0x200;
    if (-1 < _segment.ehdr + 1) {
        uVar1 = _segment.ehdr + 1;
    }
    _segment.ehdr = (_segment.ehdr + 1) - (uVar1 & 0xfffffe00);
    _raw_spin_unlock_irqrestore(obj.gfx_circ_buff_lock,uVar4);
    if (uVar2 < 0x200) {
        uVar5 = uVar6 * 0x20;
        *(obj.gpu_circ_buff + uVar5) = arg2;
        if ((uVar6 << 5 | 4) < 0x4001) {
            *(uVar6 * 0x20 + 0x80000bc) = arg3;
            if (((uVar5 | 8) < 0x4001) && (*(uVar6 * 0x20 + 0x80000c0) = in_w4, (uVar5 | 0x18) < 0x4001)) {
                *(uVar6 * 0x20 + 0x80000d0) = arg1;
                uVar4 = ktime_get();
                if ((uVar5 | 0x10) < 0x4001) {
                    *(obj.param_attr_group + uVar6 * 0x20) = uVar4;
                    if ((arg1 & 0xfffffffd) != 1) {
                        return;
                    }
                    complete(obj.game_status_pid);
                    return;
                }
            }
        }
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(1,0x8001398);
        (*pcVar3)();
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x800139c);
    (*pcVar3)();
}


// ===== sym.hotplug_notify_up @ 0x080013a0 (size 168) =====

ulong sym.hotplug_notify_up(int64_t arg1)

{
    code *pcVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.perfevent_lock);
    if (arg1 < 0x20) {
        obj.cpu_is_hp[*(__per_cpu_offset + (arg1 & 0xffffffffU) * 8)] = 0x0;
        mutex_unlock(obj.perfevent_lock);
        if (*0x8004145 != '\0') {
            uVar2 = _raw_spin_lock_irqsave(obj.events_group);
            *0x8004144 = 1;
            _raw_spin_unlock_irqrestore(obj.events_group,uVar2);
            wake_up_process(*0x8004000);
        }
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8001448);
    (*pcVar1)();
}


// ===== sym.hotplug_notify_down @ 0x08001448 (size 216) =====

ulong sym.hotplug_notify_down(int64_t arg1)

{
    int64_t *piVar1;
    code *pcVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.perfevent_lock);
    if (arg1 < 0x20) {
        obj.cpu_is_hp[*(__per_cpu_offset + (arg1 & 0xffffffffU) * 8)] = 0x1;
        piVar1 = *0x8004000;
        if ((__raw_spin_lock_irqsave >> (arg1 & 0x3fU) & 1) != 0) {
            iVar3 = (arg1 & 0xffffffffU) * 0x20;
            *(**0x8004000 + iVar3 + 8) = 0;
            *(*piVar1 + iVar3 + 0x10) = 0;
            *(*piVar1 + iVar3 + 0x18) = 0;
            *(piVar1[1] + iVar3 + 8) = 0;
            *(piVar1[1] + iVar3 + 0x10) = 0;
            *(piVar1[1] + iVar3 + 0x18) = 0;
        }
        mutex_unlock(obj.perfevent_lock);
        return 0;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8001520);
    (*pcVar2)();
}


// ===== sym.get_cpu_min_freq @ 0x08001520 (size 276) =====

int64_t sym.get_cpu_min_freq(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    ulong *in_x5;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong *in_x18;
    uint64_t uVar4;
    int iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = cpumask_next(0xffffffff,__cpu_present_mask);
    *in_x5 = extraout_x8;
    if (uVar2 < extraout_x8) {
        iVar5 = 0;
        do {
            uVar4 = uVar2;
            if (0x1f < uVar2) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8001634);
                (*pcVar1)();
            }
            iVar3 = scnprintf(arg1 + iVar5,0x1000 - iVar5,"%d:%u ",uVar4,
                              *(obj.msm_perf_cpu_stats + *(__per_cpu_offset + uVar4 * 8)));
            iVar5 = iVar3 + iVar5;
            uVar2 = cpumask_next(uVar4,__cpu_present_mask);
            *in_x5 = extraout_x8_00;
        } while (uVar2 < extraout_x8_00);
    }
    else {
        iVar5 = 0;
    }
    iVar3 = scnprintf(arg1 + iVar5,0x1000 - iVar5,0x8000600);
    return iVar3 + iVar5;
}


// ===== sym.set_cpu_min_freq @ 0x08001634 (size 620) =====

int64_t sym.set_cpu_min_freq(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    char cVar1;
    bool bVar2;
    code *pcVar3;
    uint32_t uVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong *in_x5;
    ulong extraout_x8;
    ulong extraout_x8_00;
    code *extraout_x8_01;
    code *pcVar8;
    ulong extraout_x9;
    uint64_t uVar9;
    uint64_t extraout_x9_00;
    ulong *in_x18;
    char *pcVar10;
    code *unaff_x23;
    code *unaff_x24;
    uint32_t unaff_w25;
    int unaff_w26;
    code *unaff_x27;
    code *unaff_x28;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_70 = 0;
    pcVar3 = arg1;
    if ((obj.ready_for_freq_updates & 1) == 0) {
        uVar4 = sym.freq_qos_request_init();
        if (uVar4 != 0) {
            pcVar10 = uVar4;
            _printk(0x8000453,"set_cpu_min_freq",pcVar10);
            arg2 = uVar4;
            goto code_r0x08001840;
        }
        obj.ready_for_freq_updates = 0x1;
        noname_1 = extraout_q0;
    }
    unaff_w25 = 0xffffffff;
    pcVar10 = 0x80004ed;
    do {
        arg1 = strpbrk(noname_1,arg1 + 1,0x80004ed);
        unaff_w25 = unaff_w25 + 1;
        noname_1 = extraout_q0_00;
    } while (arg1 != 0);
    if ((unaff_w25 & 1) != 0) {
        unaff_x23 = __per_cpu_offset;
        unaff_x24 = obj.msm_perf_cpu_stats;
        *0x8004000 = 0;
        if (unaff_w25 < 1) goto code_r0x080017d4;
        unaff_w26 = 0;
        unaff_x28 = obj.limit_mask_min;
        pcVar10 = "%u:%u";
        unaff_x27 = __cpu_possible_mask;
        goto code_r0x08001758;
    }
code_r0x080016b8:
    arg2 = -0x16;
code_r0x08001840:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return arg2;
    }
    __stack_chk_fail();
    pcVar8 = extraout_x8_01;
    uVar9 = extraout_x9_00;
    while( true ) {
        Hint_Prefetch(pcVar8,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(pcVar8,0x10);
            if (bVar2) {
                *pcVar8 = *pcVar8 | uVar9;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        do {
            uVar6 = strlen(pcVar3);
            iVar7 = strnchr(pcVar3,uVar6,0x20);
            unaff_w26 = unaff_w26 + 2;
            pcVar3 = iVar7 + 1;
            if (unaff_w25 <= unaff_w26) goto code_r0x080017d4;
code_r0x08001758:
            iVar5 = sscanf(pcVar3,pcVar10,&uStack_70,&uStack_70 + 4);
            if (iVar5 != 2) goto code_r0x080016b8;
            *in_x5 = extraout_x9;
            if (extraout_x9 <= uStack_70) goto code_r0x080017d4;
        } while ((*(unaff_x27 + (uStack_70 >> 3 & 0x1ffffff8)) >> (uStack_70 & 0x3f) & 1) == 0);
        if (0x1f < uStack_70) break;
        *(unaff_x24 + *(unaff_x23 + (uStack_70 & 0xffffffff) * 8)) = uStack_70._4_4_;
        uVar9 = 1L << (uStack_70 & 0x3f);
        pcVar8 = unaff_x28 + (uStack_70 >> 3 & 0x1ffffff8);
    }
code_r0x08001880:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8001884);
    (*pcVar3)();
code_r0x080017d4:
    cpus_read_lock();
    uVar4 = cpumask_next(0xffffffff,obj.limit_mask_min);
    *in_x5 = extraout_x8;
    if (uVar4 < extraout_x8) {
        pcVar10 = uVar4;
        unaff_w25 = 0x8002ee8;
        pcVar3 = obj.limit_mask_min;
        do {
            if (0x1f < pcVar10) goto code_r0x08001880;
            freq_qos_update_request
                      (obj.qos_req_min + *(unaff_x23 + pcVar10 * 8),*(unaff_x24 + *(unaff_x23 + pcVar10 * 8)));
            uVar4 = cpumask_next(pcVar10,obj.limit_mask_min);
            *in_x5 = extraout_x8_00;
            pcVar10 = uVar4;
        } while (uVar4 < extraout_x8_00);
    }
    cpus_read_unlock();
    goto code_r0x08001840;
}


// ===== sym.freq_qos_request_init @ 0x080018a0 (size 588) =====

int sym.freq_qos_request_init(void)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x5;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong extraout_x8_01;
    ulong extraout_x8_02;
    ulong *in_x18;
    uint64_t uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = cpumask_next(0xffffffff,__cpu_present_mask);
    *in_x5 = extraout_x8;
    if (uVar2 < extraout_x8) {
        do {
            uVar6 = uVar2;
            iVar4 = cpufreq_cpu_get(uVar6);
            if (iVar4 == 0) {
                _printk(0x80004f0,"freq_qos_request_init",uVar6);
                iVar3 = -0xb;
code_r0x08001a28:
                uVar2 = cpumask_next(0xffffffff,__cpu_present_mask);
                *in_x5 = extraout_x8_01;
                if (extraout_x8_01 <= uVar2) {
                    return iVar3;
                }
                while (uVar6 = uVar2, uVar2 < 0x20) {
                    iVar4 = *(__per_cpu_offset + uVar6 * 8);
                    if (((iVar4 != -0x8002ee8) && (*(iVar4 + 0x8002f18) != 0)) &&
                       (*(iVar4 + 0x8002f18) < 0xfffffffffffff001)) {
                        freq_qos_remove_request();
                        iVar4 = *(__per_cpu_offset + uVar6 * 8);
                    }
                    if (((iVar4 != -0x8002f30) && (*(iVar4 + 0x8002f60) != 0)) &&
                       (*(iVar4 + 0x8002f60) < 0xfffffffffffff001)) {
                        freq_qos_remove_request();
                        iVar4 = *(__per_cpu_offset + uVar6 * 8);
                    }
                    *(obj.msm_perf_cpu_stats + iVar4) = 0;
                    *(*(__per_cpu_offset + uVar6 * 8) + 0x8002ee0) = 0x7fffffff;
                    uVar2 = cpumask_next(uVar6,__cpu_present_mask);
                    *in_x5 = extraout_x8_02;
                    if (extraout_x8_02 <= uVar2) {
                        return iVar3;
                    }
                }
code_r0x08001ae8:
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8001aec);
                (*pcVar1)();
            }
            if (0x1f < uVar2) goto code_r0x08001ae8;
            iVar7 = uVar6 * 8;
            *(obj.msm_perf_cpu_stats + *(__per_cpu_offset + iVar7)) = 0;
            iVar3 = freq_qos_add_request(iVar4 + 0xa0,obj.qos_req_min + *(__per_cpu_offset + iVar7),1,0);
            if (iVar3 < 0) {
                uVar5 = 0x8000628;
code_r0x08001a10:
                _printk(uVar5,"freq_qos_request_init",iVar3);
                cpufreq_cpu_put(iVar4);
                goto code_r0x08001a28;
            }
            *(*(__per_cpu_offset + iVar7) + 0x8002ee0) = 0x7fffffff;
            iVar3 = freq_qos_add_request(iVar4 + 0xa0,obj.qos_req_max + *(__per_cpu_offset + iVar7),2,0x7fffffff);
            if (iVar3 < 0) {
                uVar5 = 0x8000593;
                goto code_r0x08001a10;
            }
            cpufreq_cpu_put(iVar4);
            uVar2 = cpumask_next(uVar6,__cpu_present_mask);
            *in_x5 = extraout_x8_00;
        } while (uVar2 < extraout_x8_00);
    }
    return 0;
}


// ===== sym.get_cpu_max_freq @ 0x08001aec (size 280) =====

int64_t sym.get_cpu_max_freq(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    ulong *in_x5;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong *in_x18;
    uint64_t uVar4;
    int iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = cpumask_next(0xffffffff,__cpu_present_mask);
    *in_x5 = extraout_x8;
    if (uVar2 < extraout_x8) {
        iVar5 = 0;
        do {
            uVar4 = uVar2;
            if (0x1f < uVar2) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8001c04);
                (*pcVar1)();
            }
            iVar3 = scnprintf(arg1 + iVar5,0x1000 - iVar5,"%d:%u ",uVar4,
                              *(*(__per_cpu_offset + uVar4 * 8) + 0x8002ee0));
            iVar5 = iVar3 + iVar5;
            uVar2 = cpumask_next(uVar4,__cpu_present_mask);
            *in_x5 = extraout_x8_00;
        } while (uVar2 < extraout_x8_00);
    }
    else {
        iVar5 = 0;
    }
    iVar3 = scnprintf(arg1 + iVar5,0x1000 - iVar5,0x8000600);
    return iVar3 + iVar5;
}


// ===== sym.set_cpu_max_freq @ 0x08001c04 (size 632) =====

int64_t sym.set_cpu_max_freq(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    char cVar1;
    bool bVar2;
    code *pcVar3;
    uint32_t uVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong *in_x5;
    uint64_t uVar8;
    ulong extraout_x8;
    ulong extraout_x8_00;
    uint64_t extraout_x8_01;
    ulong extraout_x9;
    code *extraout_x11;
    code *pcVar9;
    ulong *in_x18;
    char *pcVar10;
    code *unaff_x23;
    code *unaff_x24;
    uint32_t unaff_w25;
    int unaff_w26;
    code *unaff_x27;
    uint32_t unaff_w28;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_70 = 0;
    pcVar3 = arg1;
    if ((obj.ready_for_freq_updates & 1) == 0) {
        uVar4 = sym.freq_qos_request_init();
        if (uVar4 != 0) {
            pcVar10 = uVar4;
            _printk(0x8000453,"set_cpu_max_freq",pcVar10);
            arg2 = uVar4;
            goto code_r0x08001e1c;
        }
        obj.ready_for_freq_updates = 0x1;
        noname_1 = extraout_q0;
    }
    unaff_w25 = 0xffffffff;
    pcVar10 = 0x80004ed;
    do {
        arg1 = strpbrk(noname_1,arg1 + 1,0x80004ed);
        unaff_w25 = unaff_w25 + 1;
        noname_1 = extraout_q0_00;
    } while (arg1 != 0);
    if ((unaff_w25 & 1) != 0) {
        unaff_x23 = __per_cpu_offset;
        unaff_x24 = obj.msm_perf_cpu_stats;
        *0x8004000 = 0;
        if (unaff_w25 < 1) goto code_r0x08001dac;
        unaff_w26 = 0;
        unaff_w28 = 0x7fffffff;
        pcVar10 = "%u:%u";
        unaff_x27 = __cpu_possible_mask;
        goto code_r0x08001d2c;
    }
code_r0x08001c88:
    arg2 = -0x16;
code_r0x08001e1c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return arg2;
    }
    __stack_chk_fail();
    uVar8 = extraout_x8_01;
    pcVar9 = extraout_x11;
    while( true ) {
        Hint_Prefetch(pcVar9,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(pcVar9,0x10);
            if (bVar2) {
                *pcVar9 = *pcVar9 | uVar8;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        do {
            uVar6 = strlen(pcVar3);
            iVar7 = strnchr(pcVar3,uVar6,0x20);
            unaff_w26 = unaff_w26 + 2;
            pcVar3 = iVar7 + 1;
            if (unaff_w25 <= unaff_w26) goto code_r0x08001dac;
code_r0x08001d2c:
            iVar5 = sscanf(pcVar3,pcVar10,&uStack_70,&uStack_70 + 4);
            if (iVar5 != 2) goto code_r0x08001c88;
            *in_x5 = extraout_x9;
            if (extraout_x9 <= uStack_70) goto code_r0x08001dac;
        } while ((*(unaff_x27 + (uStack_70 >> 3 & 0x1ffffff8)) >> (uStack_70 & 0x3f) & 1) == 0);
        if (0x1f < uStack_70) break;
        uVar8 = 1L << (uStack_70 & 0x3f);
        uVar4 = uStack_70._4_4_;
        if (unaff_w28 <= uStack_70._4_4_) {
            uVar4 = unaff_w28;
        }
        *(unaff_x24 + *(unaff_x23 + (uStack_70 & 0xffffffff) * 8) + 4) = uVar4;
        pcVar9 = obj.limit_mask_max;
    }
code_r0x08001e5c:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8001e60);
    (*pcVar3)();
code_r0x08001dac:
    cpus_read_lock();
    uVar4 = cpumask_next(0xffffffff,obj.limit_mask_max);
    *in_x5 = extraout_x8;
    if (uVar4 < extraout_x8) {
        pcVar10 = uVar4;
        unaff_w25 = 0x8002f30;
        pcVar3 = obj.limit_mask_max;
        do {
            if (0x1f < pcVar10) goto code_r0x08001e5c;
            freq_qos_update_request
                      (obj.qos_req_max + *(unaff_x23 + pcVar10 * 8),*(unaff_x24 + *(unaff_x23 + pcVar10 * 8) + 4));
            uVar4 = cpumask_next(pcVar10,obj.limit_mask_max);
            *in_x5 = extraout_x8_00;
            pcVar10 = uVar4;
        } while (uVar4 < extraout_x8_00);
    }
    cpus_read_unlock();
    goto code_r0x08001e1c;
}


// ===== sym.get_cpu_total_instruction @ 0x08001e7c (size 684) =====

int64_t sym.get_cpu_total_instruction(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    uint64_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    char *pcVar5;
    ulong *in_x5;
    uint uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    uVar3 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *in_x5 = _raw_spin_lock_irqsave;
    if (uVar3 < 0x8016000) {
        iVar12 = 0;
        iVar10 = 0;
        uVar11 = 0;
        uVar9 = 0;
        iVar13 = **0x8004000;
        do {
            uVar15 = uVar3;
            iVar14 = uVar3;
            iStack_70 = 0;
            mutex_lock(obj.perfevent_lock);
            iVar4 = *(iVar13 + (-(uVar3 >> 0x1f) & 0xffffffe000000000 | uVar15 << 5));
            if (iVar4 != 0) {
                if (0x1f < uVar3) goto code_r0x08002120;
                if (obj.cpu_is_hp[*(__per_cpu_offset + uVar15 * 8)] == 0x0) {
                    iVar4 = qcom_pmu_read(uVar15,iVar4,&iStack_70);
                    if (iVar4 != 0) goto code_r0x08001f98;
                }
                else {
                    iStack_70 = *(iVar13 + iVar14 * 0x20 + 0x18);
                }
                iVar13 = iVar13 + iVar14 * 0x20;
                iVar8 = *(iVar13 + 8);
                *(iVar13 + 8) = iStack_70;
                *(iVar13 + 0x10) = iStack_70 - iVar8;
            }
code_r0x08001f98:
            mutex_unlock(obj.perfevent_lock);
            iVar13 = (*0x8004000)[1];
            iStack_70 = 0;
            mutex_lock(obj.perfevent_lock);
            iVar8 = iVar14 * 0x20;
            if (*(iVar13 + iVar8) != 0) {
                if (0x1f < uVar3) goto code_r0x08002120;
                if (obj.cpu_is_hp[*(__per_cpu_offset + uVar15 * 8)] == 0x0) {
                    iVar4 = qcom_pmu_read(uVar15,*(iVar13 + iVar8),&iStack_70);
                    if (iVar4 != 0) goto code_r0x0800200c;
                }
                else {
                    iStack_70 = *(iVar13 + iVar14 * 0x20 + 0x18);
                }
                iVar13 = iVar13 + iVar14 * 0x20;
                iVar14 = *(iVar13 + 8);
                *(iVar13 + 8) = iStack_70;
                *(iVar13 + 0x10) = iStack_70 - iVar14;
            }
code_r0x0800200c:
            mutex_unlock(obj.perfevent_lock);
            if (0x1f < uVar3) {
code_r0x08002120:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8002124);
                (*pcVar2)();
            }
            iVar13 = **0x8004000;
            iVar14 = *(iVar13 + iVar8 + 0x10);
            uVar7 = *((*0x8004000)[1] + iVar8 + 0x10);
            if (_segment.ehdr < *(cpu_scale + *(__per_cpu_offset + uVar15 * 8))) {
                if (649999 < uVar7) {
                    uVar1 = 0;
                    if (uVar7 != 0) {
                        uVar1 = (iVar14 * 100) / uVar7;
                    }
                    if (uVar11 <= uVar1) {
                        uVar11 = uVar1;
                    }
                }
                iVar12 = iVar14 + iVar12;
            }
            else {
                if (uVar7 != 0) {
                    uVar1 = 0;
                    if (uVar7 != 0) {
                        uVar1 = (iVar14 * 100) / uVar7;
                    }
                    if (uVar9 <= uVar1) {
                        uVar9 = uVar1;
                    }
                }
                iVar10 = iVar14 + iVar10;
            }
            uVar3 = cpumask_next(uVar15,__cpu_possible_mask);
            *in_x5 = _raw_spin_lock_irqsave;
        } while (uVar3 < 0x8016000);
    }
    else {
        uVar9 = 0;
        uVar11 = 0;
        iVar10 = 0;
        iVar12 = 0;
    }
    pcVar5 = "%llu:%llu:%llu:%llu\n";
    iVar4 = scnprintf(arg1,0x1000,"%llu:%llu:%llu:%llu\n",iVar12,uVar11,iVar10,uVar9);
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        *extraout_x18 = sym.get_core_ctl_register;
        uVar6 = 0x4e;
        if (obj.core_ctl_register != 0x0) {
            uVar6 = 0x59;
        }
        iVar4 = scnprintf(pcVar5,0x1000,0x8000613,uVar6);
        return iVar4;
    }
    return iVar4;
}


// ===== sym.get_core_ctl_register @ 0x08002128 (size 80) =====

int64_t sym.get_core_ctl_register(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0x4e;
    if (obj.core_ctl_register != 0x0) {
        uVar2 = 0x59;
    }
    iVar1 = scnprintf(arg1,0x1000,0x8000613,uVar2);
    return iVar1;
}


// ===== sym.set_core_ctl_register @ 0x08002178 (size 148) =====

int64_t sym.set_core_ctl_register(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    code cVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cVar1 = obj.core_ctl_register;
    iVar2 = kstrtobool(arg1);
    if (iVar2 < 0) {
        _printk(0x80003ee,iVar2);
        arg2 = iVar2;
    }
    else if (obj.core_ctl_register != cVar1) {
        if (obj.core_ctl_register == 0x0) {
            core_ctl_notifier_unregister(reloc.msm_perf_core_ctl_notify.75f2dd6024396ffa308185497e7aaec8.cfi_jt);
        }
        else {
            core_ctl_notifier_register();
        }
    }
    return arg2;
}


// ===== sym.msm_perf_core_ctl_notify @ 0x0800220c (size 436) =====

ulong sym.msm_perf_core_ctl_notify(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8004000 = *0x8004000 + *(arg1 + 4) + *(arg1 + 0xc) + *(arg1 + 0x10) + 1;
    if (*0x8004000 == 0x19) {
        *0x8004000 = 0;
        queue_work_on(0x20,_mutex_lock,obj.msm_perf_core_ctl_notify.sysfs_notify_work);
    }
    return 1;
}


// ===== sym.nr_notify_userspace @ 0x080023c0 (size 124) =====

void sym.nr_notify_userspace(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sysfs_notify(*0x8004000,0,"aggr_top_load");
    sysfs_notify(*0x8004000,0,"aggr_big_nr");
    sysfs_notify(*0x8004000,0,"top_load_cluster");
    sysfs_notify(*0x8004000,0,"curr_cap_cluster");
    return;
}


// ===== sym.get_game_start_pid @ 0x0800243c (size 72) =====

int64_t sym.get_game_start_pid(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,"%ld\n",_obj.game_status_pid);
    return iVar1;
}


// ===== sym.set_game_start_pid @ 0x08002488 (size 156) =====

int64_t sym.set_game_start_pid(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char cVar2;
    int iVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    iVar3 = kstrtoll(arg1,0,&uStack_30);
    if (iVar3 == 0) {
        _segment.ehdr = uStack_30;
    }
    else {
        _printk(0x8000543,iVar3);
        arg2 = iVar3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.events_notify_userspace;
    iVar1 = sp_el0;
    do {
        *(iVar1 + 0x28) = 1;
        DataMemoryBarrier(2,3);
        uVar4 = _raw_spin_lock_irqsave(obj.events_group);
        if (*0x8004144 == '\0') {
            _raw_spin_unlock_irqrestore(obj.events_group,uVar4);
            schedule();
            uVar5 = kthread_should_stop();
            if ((uVar5 & 1) != 0) {
                return 0;
            }
            uVar4 = _raw_spin_lock_irqsave(obj.events_group);
        }
        *(iVar1 + 0x28) = 0;
        cVar2 = *0x8004144;
        DataMemoryBarrier(2,3);
        *0x8004144 = '\0';
        _raw_spin_unlock_irqrestore(obj.events_group,uVar4);
        if (cVar2 != '\0') {
            sysfs_notify(*0x8004000,0,"cpu_hotplug");
        }
    } while( true );
}


// ===== sym.events_notify_userspace @ 0x08002524 (size 196) =====

ulong sym.events_notify_userspace(void)

{
    int64_t iVar1;
    char cVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    do {
        *(iVar1 + 0x28) = 1;
        DataMemoryBarrier(2,3);
        uVar3 = _raw_spin_lock_irqsave(obj.events_group);
        if (*0x8004144 == '\0') {
            _raw_spin_unlock_irqrestore(obj.events_group,uVar3);
            schedule();
            uVar4 = kthread_should_stop();
            if ((uVar4 & 1) != 0) {
                return 0;
            }
            uVar3 = _raw_spin_lock_irqsave(obj.events_group);
        }
        *(iVar1 + 0x28) = 0;
        cVar2 = *0x8004144;
        DataMemoryBarrier(2,3);
        *0x8004144 = '\0';
        _raw_spin_unlock_irqrestore(obj.events_group,uVar3);
        if (cVar2 != '\0') {
            sysfs_notify(*0x8004000,0,"cpu_hotplug");
        }
    } while( true );
}


// ===== sym.show_cpu_hotplug @ 0x080025e8 (size 56) =====

int64_t sym.show_cpu_hotplug(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,0x8000600);
    return iVar1;
}


// ===== sym.show_big_nr @ 0x08002620 (size 64) =====

int64_t sym.show_big_nr(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,0x80004a4,*0x8004000);
    return iVar1;
}


// ===== sym.show_top_load @ 0x08002660 (size 64) =====

int64_t sym.show_top_load(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,0x80004a4,*0x8004000);
    return iVar1;
}


// ===== sym.show_top_load_cluster @ 0x080026a0 (size 80) =====

int64_t sym.show_top_load_cluster(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,"%u %u %u\n",*0x8004000,*0x8004000,*0x8004000);
    return iVar1;
}


// ===== sym.show_curr_cap_cluster @ 0x080026f0 (size 80) =====

int64_t sym.show_curr_cap_cluster(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,"%u %u %u\n",*0x8004000,*0x8004000,*0x8004000);
    return iVar1;
}


// ===== sym.show_perf_gfx_evts @ 0x08002740 (size 396) =====

//WARNING: Removing unreachable block (ram,0x080027d4)
//WARNING: Removing unreachable block (ram,0x080027f8)
//WARNING: Removing unreachable block (ram,0x08002800)
//WARNING: Removing unreachable block (ram,0x080028c8)
//WARNING: Removing unreachable block (ram,0x08002814)
//WARNING: Removing unreachable block (ram,0x08002824)
//WARNING: Removing unreachable block (ram,0x08002834)
//WARNING: Removing unreachable block (ram,0x080028c4)
//WARNING: Removing unreachable block (ram,0x08002840)
//WARNING: Removing unreachable block (ram,0x080028b4)
//WARNING: Removing unreachable block (ram,0x08002884)

ulong sym.show_perf_gfx_evts(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = wait_for_completion_interruptible(obj.game_status_pid);
    if (iVar1 == 0) {
        uVar2 = _raw_spin_lock_irqsave(obj.gfx_circ_buff_lock);
        _segment.ehdr = _segment.ehdr % 0x200;
        _raw_spin_unlock_irqrestore(obj.gfx_circ_buff_lock,uVar2);
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x080028cc (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002910

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
    //switch table (4 cases) at 0x8000390
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002924);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x0800294c (size 1244) =====

ulong sym.init_module(void)

{
    uint *puVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    ulong uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint32_t *in_x5;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    ulong *in_x18;
    uint32_t uVar10;
    uint32_t unaff_w21;
    uint64_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8004000 = kset_create_and_add("msm_performance",0,_mutex_unlock);
    if (*0x8004000 == NULL) {
        *0x8004000 = NULL;
        return 0xfffffff4;
    }
    *0x8004000 = kobject_create_and_add("parameters",*0x8004000 + 0x18);
    if (*0x8004000 == NULL) {
        uVar6 = 0x80006b5;
code_r0x08002a70:
        _printk(uVar6);
    }
    else {
        iVar3 = sysfs_create_group(*0x8004000,obj.param_attr_group);
        if (iVar3 != 0) {
            uVar6 = 0x8000395;
            goto code_r0x08002a70;
        }
    }
    *0x8004000 = kobject_create_and_add("events",*0x8004000 + 0x18);
    if (*0x8004000 == NULL) {
        uVar6 = 0x80006db;
code_r0x08002a80:
        _printk(uVar6);
        uVar5 = *0x8004000;
    }
    else {
        iVar3 = sysfs_create_group(*0x8004000,obj.events_attr_group);
        if (iVar3 != 0) {
            uVar6 = 0x8000395;
            goto code_r0x08002a80;
        }
        *0x8004000 = *0x8004000 & 0xffffffff00000000;
        uVar5 = kthread_create_on_node
                          (sym.events_notify_userspace.75f2dd6024396ffa308185497e7aaec8.cfi_jt,0,0xffffffff,
                           "msm_perf:events_notify");
        unaff_w21 = 0x8004000;
        if (uVar5 < 0xfffffffffffff001) {
            wake_up_process(uVar5);
            *0x8004145 = 1;
        }
    }
    *0x8004000 = uVar5;
    *0x8004000 = kobject_create_and_add("notify",*0x8004000 + 0x18);
    if (*0x8004000 == NULL) {
        uVar6 = 0x80004c6;
code_r0x08002e0c:
        _printk(uVar6);
    }
    else {
        iVar3 = sysfs_create_group(*0x8004000,obj.notify_attr_group);
        if (iVar3 != 0) {
            kobject_put(*0x8004000);
            uVar6 = 0x8000395;
            goto code_r0x08002e0c;
        }
    }
    uVar5 = 0xffffffff;
    uVar6 = 0xffffffff;
    *in_x5 = unaff_w21;
    do {
        uVar6 = cpumask_next(uVar6,__cpu_possible_mask);
        uVar10 = uVar5 + 1;
        uVar5 = uVar10;
    } while (uVar6 < unaff_w21);
    iVar8 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar8 = 0x30;
    }
    piVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xdc0,0x10);
    *0x8004000 = piVar7;
    if (piVar7 != NULL) {
        if (uVar10 >> 0x3b == 0) {
            uVar5 = -(uVar10 >> 0x1f) & 0xffffffe000000000 | uVar5 << 5;
            iVar8 = __kmalloc(uVar5,0xdc0);
            piVar7 = *0x8004000;
            **0x8004000 = iVar8;
            if (iVar8 == 0) {
                iVar8 = 0;
            }
            else {
                iVar8 = __kmalloc(uVar5,0xdc0);
                piVar7 = *0x8004000;
                (*0x8004000)[1] = iVar8;
                if (iVar8 != 0) {
                    uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
                    *in_x5 = extraout_w8;
                    if (uVar5 < extraout_w8) {
                        uVar10 = 0x11;
                        do {
                            uVar9 = uVar5 & 0xffffffff;
                            *(*piVar7 + (-(uVar9 >> 0x1f) & 0xffffffe000000000 | uVar9 << 5)) = 8;
                            uVar11 = uVar5;
                            puVar1 = *piVar7 + uVar11 * 0x20;
                            iVar3 = qcom_pmu_event_supported(*puVar1);
                            if ((iVar3 != 0) && (_printk(0x8000679,"set_event",*puVar1,uVar9,iVar3), iVar3 < 0))
                            break;
                            piVar7 = *0x8004000;
                            *((*0x8004000)[1] + uVar11 * 0x20) = 0x11;
                            puVar1 = piVar7[1] + uVar11 * 0x20;
                            iVar3 = qcom_pmu_event_supported(*puVar1,uVar9);
                            if ((iVar3 != 0) &&
                               (_printk(0x8000679,"set_event",*puVar1,uVar9,iVar3), piVar7 = *0x8004000, iVar3 < 0
                               )) {
                                if ((*(__cpu_possible_mask + (uVar11 >> 6 & 0x3ffffff) * 8) >> (uVar5 & 0x3f) & 1) != 0)
                                {
                                    *(**0x8004000 + uVar9 * 0x20 + 8) = 0;
                                    *(*piVar7 + uVar9 * 0x20 + 0x10) = 0;
                                    *(*piVar7 + uVar9 * 0x20 + 0x18) = 0;
                                    *(piVar7[1] + uVar9 * 0x20 + 8) = 0;
                                    *(piVar7[1] + uVar9 * 0x20 + 0x10) = 0;
                                    *(piVar7[1] + uVar9 * 0x20 + 0x18) = 0;
                                }
                                break;
                            }
                            if (0x1f < uVar5) goto code_r0x08002e24;
                            if (*(cpu_scale + *(__per_cpu_offset + uVar9 * 8)) < _segment.ehdr) {
                                _segment.ehdr = *(cpu_scale + *(__per_cpu_offset + uVar9 * 8));
                            }
                            uVar5 = cpumask_next(uVar9,__cpu_possible_mask);
                            *in_x5 = extraout_w8_00;
                            piVar7 = *0x8004000;
                        } while (uVar5 < extraout_w8_00);
                    }
                    goto code_r0x08002d24;
                }
                iVar8 = 1;
            }
        }
        else {
            iVar8 = 0;
            *piVar7 = 0;
        }
        iVar8 = iVar8 << 3;
        do {
            kfree(*(piVar7 + iVar8));
            piVar7 = *0x8004000;
            *(*0x8004000 + iVar8) = 0;
            iVar8 = iVar8 + -8;
        } while (iVar8 != -8);
        kfree(piVar7);
        *0x8004000 = NULL;
    }
code_r0x08002d24:
    cpus_read_lock();
    *in_x5 = uVar10;
    uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
    uVar4 = uVar5;
    do {
        if (uVar10 <= uVar4) {
            __cpuhp_setup_state(0xc0,"msm_performance_cpu_hotplug",0,
                                sym.hotplug_notify_up.75f2dd6024396ffa308185497e7aaec8.cfi_jt,
                                sym.hotplug_notify_down.75f2dd6024396ffa308185497e7aaec8.cfi_jt,0);
            cpus_read_unlock();
            return 0;
        }
        if ((*(__cpu_online_mask + (uVar5 >> 6 & 0x3ffffff) * 8) >> (uVar5 & 0x3f) & 1) == 0) {
            if (0x1f < uVar5) {
code_r0x08002e24:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8002e28);
                (*pcVar2)();
            }
            obj.cpu_is_hp[*(__per_cpu_offset + (uVar5 & 0xffffffff) * 8)] = 0x1;
            *in_x5 = uVar10;
        }
        uVar5 = cpumask_next(uVar5,__cpu_possible_mask);
        uVar4 = uVar5;
    } while( true );
}

