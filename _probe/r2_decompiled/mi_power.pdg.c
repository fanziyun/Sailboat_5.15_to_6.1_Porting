// decompiled from mi_power by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 788) =====

//WARNING: Switch with 1 destination removed at 0x08003fa8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x29bbde323c1d7b3c) {
        if (arg1 < -0x66d421a09845f9f8) {
            if (arg1 == -0x7f84e47e3435aabc) {
                pcVar2 = sym.pm_register_system_dbg_info.cfi_jt;
            }
            else if (arg1 == -0x7946ee14de9d94fb) {
                pcVar2 = sym.log_irq_wakeup_reason.cfi_jt;
            }
            else {
                if (arg1 != -0x735c6c06ca6a9ce5) goto code_r0x08003f68;
                pcVar2 = sym.pm_system_dbg_info_print.cfi_jt;
            }
        }
        else {
            if (arg1 < -0x616079625425b92c) {
                if (arg1 == -0x66d421a09845f9f8) {
                    if ((pcVar1 + -0x80023d8 >> 3 | pcVar1 << 0x3d) < 10) {
                        return;
                    }
                    goto code_r0x08003f68;
                }
                if (arg1 != -0x617bd01ec57b1ccc) goto code_r0x08003f68;
                pcVar2 = sym.__typeid__ZTSFvP15system_dbg_infoE_global_addr;
code_r0x08002290:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08003f68;
            }
            if (arg1 != -0x616079625425b92c) {
                if ((arg1 == -0x5324bef43a497a1c) && ((pcVar1 + -0x80023b8 >> 3 | pcVar1 << 0x3d) < 4)) {
                    return;
                }
                goto code_r0x08003f68;
            }
            pcVar2 = sym.mi_power_save_battery_cave.cfi_jt;
        }
    }
    else if (arg1 < 0x4ee9b628f4c18e63) {
        if (arg1 < 0x27a13beb5447e293) {
            if (arg1 == -0x29bbde323c1d7b3c) {
                pcVar2 = sym.power_debug_suspend_property_trace_probe.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt;
                goto code_r0x08002290;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08003f68;
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x27a13beb5447e293) {
                if ((arg1 == 0x4a47875dcd644744) && ((pcVar1 + -0x8002390 >> 3 | pcVar1 << 0x3d) < 5)) {
                    return;
                }
                goto code_r0x08003f68;
            }
            pcVar2 = sym.soc_sleep_stats_dbg_register.cfi_jt;
        }
    }
    else if (arg1 < 0x7531b8856cc0be02) {
        if (arg1 == 0x4ee9b628f4c18e63) {
            pcVar2 = sym.subsystem_sleep_stats_dbg_register.cfi_jt;
        }
        else {
            if (arg1 != 0x605e5176d60dacab) goto code_r0x08003f68;
            pcVar2 = sym.mi_power_mode.cfi_jt;
        }
    }
    else {
        if (arg1 != 0x7531b8856cc0be02) {
            if ((arg1 == 0x7e04a0fb7ad8bcd5) && ((pcVar1 + -0x8002368 >> 3 | pcVar1 << 0x3d) < 3)) {
                return;
            }
            goto code_r0x08003f68;
        }
        pcVar2 = sym.pm_register_wakeup_device.cfi_jt;
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


// ===== sym.mi_power_save_battery_cave.cfi_jt @ 0x08002320 (size 8) =====

uint64_t sym.mi_power_save_battery_cave.cfi_jt(uint64_t param_1)

{
    if (obj.gpower_mode - 2 < 3) {
        if (param_1 < 0x15) {
            if (-1 < param_1) {
                param_1 = (param_1 * 100 + 0x4fU & 0xffff) / 0x50;
            }
        }
        else {
            param_1 = (param_1 * 100 + -0x766) / 0x6b + 0x19;
        }
        if (99 < param_1) {
            param_1 = 100;
        }
        param_1 = param_1 & (param_1 >> 0x3f ^ 0xffffffffffffffffU);
    }
    return param_1;
}


// ===== sym.soc_sleep_stats_dbg_register.cfi_jt @ 0x08002328 (size 8) =====

void sym.soc_sleep_stats_dbg_register.cfi_jt(int64_t param_1)

{
    if (param_1 != 0) {
        _segment.ehdr = param_1;
    }
    return;
}


// ===== sym.subsystem_sleep_stats_dbg_register.cfi_jt @ 0x08002330 (size 8) =====

void sym.subsystem_sleep_stats_dbg_register.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 == 0) {
        return;
    }
    *in_x18 = unaff_x30;
    _printk(0x800068a,"[xiaomi_power]","subsystem_sleep_stats_dbg_register");
    _segment.ehdr = param_1;
    return;
}


// ===== sym.pm_system_dbg_info_print.cfi_jt @ 0x08002338 (size 8) =====

void sym.pm_system_dbg_info_print.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (4 < param_1) {
        _printk(0x800091f,"[xiaomi_power]","pm_system_dbg_info_print");
    }
    _raw_spin_lock(obj.wakeup_devices);
    pcVar2 = _obj.system_dbg_info_list;
    if (_obj.system_dbg_info_list != obj.system_dbg_info_list) {
        do {
            if (*(pcVar2 + 0x10) == param_1) {
                pcVar1 = *(pcVar2 + 0x18);
                if (1 < (pcVar1 + -0x8002428 >> 3 | pcVar1 << 0x3d)) {
                    __cfi_slowpath_diag(0x9e842fe13a84e334,pcVar1,0x8000520);
                }
                (*pcVar1)(*(pcVar2 + 0x20));
            }
            pcVar2 = *pcVar2;
        } while (pcVar2 != obj.system_dbg_info_list);
    }
    _raw_spin_unlock(obj.wakeup_devices);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002340 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *puVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar6 = 0x30;
    }
    _segment.ehdr = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,0x18);
    if (_segment.ehdr == NULL) {
        iVar2 = -0xc;
        _segment.ehdr = NULL;
    }
    else {
        iVar6 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar6 = 0x30;
        }
        _segment.ehdr = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,0x20);
        if (_segment.ehdr == NULL) {
            iVar2 = -0xc;
code_r0x08004140:
            kfree(_segment.ehdr);
        }
        else {
            uVar3 = __class_create(obj.__this_module,"power_debug",obj.pm_debug_init.__key);
            iVar6 = 0;
            *_segment.ehdr = uVar3;
            while( true ) {
                if (*(obj.power_debug_attrs + iVar6) == 0) break;
                iVar2 = class_create_file_ns(*_segment.ehdr,obj.power_debug_attrs + iVar6,0);
                if (iVar2 != 0) {
                    _printk(0x80007cc,"[xiaomi_power]","pm_debug_init");
                    class_destroy(0);
                    goto code_r0x08004140;
                }
                iVar6 = iVar6 + 0x20;
                if (iVar6 == 0xc0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x80041cc);
                    (*pcVar1)();
                }
            }
            register_syscore_ops(obj.pm_debug_ops);
            sym.pm_register_system_dbg_info(0x8000120);
            tracepoint_probe_register
                      (__tracepoint_suspend_resume,
                       sym.power_debug_suspend_trace_probe.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt,0);
            iVar2 = __register_chrdev(0,0,0x100,"mi_power_module",obj.power_ops);
            puVar5 = _segment.ehdr;
            *(_segment.ehdr + 2) = iVar2;
            if (iVar2 < 0) {
                _printk(0x8000622,"[xiaomi_power]","pm_debug_init");
                iVar2 = *(_segment.ehdr + 2);
                puVar5 = _segment.ehdr;
            }
            uVar4 = device_create(*puVar5,0,iVar2 << 0x14 | 1,0,"mi_power_device");
            _segment.ehdr[1] = uVar4;
            if (0xfffffffffffff000 < uVar4) {
                _printk(0x80008e4,"[xiaomi_power]","pm_debug_init",0xffffffed);
                uVar4 = _segment.ehdr[1];
            }
            iVar2 = sysfs_create_group(uVar4,obj.qcom_sleep_stats_sysfs_group);
            if (iVar2 != 0) {
                _printk(0x8000718,"[xiaomi_power]","pm_debug_init");
            }
            _printk(0x8000b34,"[xiaomi_power]","pm_debug_init");
        }
    }
    return iVar2;
}


// ===== sym.pm_register_wakeup_device.cfi_jt @ 0x08002348 (size 8) =====

ulong sym.pm_register_wakeup_device.cfi_jt(ulong *param_1)

{
    ulong *puVar1;
    uint64_t uVar2;
    ulong uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == NULL) {
        uVar3 = 0x16;
    }
    else {
        if (_obj.wakeup_devices != obj.wakeup_devices) {
            pcVar4 = _obj.wakeup_devices;
            do {
                if (*(pcVar4 + 0x10) == param_1[2]) {
                    return 0x11;
                }
                pcVar4 = *pcVar4;
            } while (pcVar4 != obj.wakeup_devices);
        }
        _raw_spin_lock(obj.wakeup_lock);
        puVar1 = _obj.sleep_stats_g;
        uVar2 = __list_add_valid(param_1,_obj.sleep_stats_g,obj.wakeup_devices);
        if ((uVar2 & 1) != 0) {
            _obj.sleep_stats_g = param_1;
            *param_1 = obj.wakeup_devices;
            param_1[1] = puVar1;
            *puVar1 = param_1;
        }
        _raw_spin_unlock(obj.wakeup_lock);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.mi_power_mode.cfi_jt @ 0x08002350 (size 8) =====

uint32_t sym.mi_power_mode.cfi_jt(void)

{
    uint32_t uVar1;
    
    uVar1 = obj.gpower_mode;
    if (3 < uVar1 - 1) {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.power_debug_suspend_property_trace_probe.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt @ 0x08002358 (size 8) =====

void sym.power_debug_suspend_property_trace_probe.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt
               (ulong param_1,ulong param_2,int param_3,uint32_t param_4)

{
    int iVar1;
    ulong *in_x18;
    code *pcVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000e0a,"[xiaomi_power]","power_debug_suspend_property_trace_probe",param_4 & 1,param_3);
    if (((0 < param_3) && ((param_4 & 1) != 0)) && (iVar1 = strcmp("machine_suspend",param_2), iVar1 == 0)) {
        _printk(0x8000aa3,"[xiaomi_power]","power_debug_suspend_property_trace_probe");
        _raw_spin_lock(obj.wakeup_devices);
        pcVar3 = _obj.system_dbg_info_list;
        if (_obj.system_dbg_info_list != obj.system_dbg_info_list) {
            do {
                if (*(pcVar3 + 0x10) == 2) {
                    pcVar2 = *(pcVar3 + 0x18);
                    if (1 < (pcVar2 + -0x8002428 >> 3 | pcVar2 << 0x3d)) {
                        __cfi_slowpath_diag(0x9e842fe13a84e334,pcVar2,0x8000520);
                    }
                    (*pcVar2)(*(pcVar3 + 0x20));
                }
                pcVar3 = *pcVar3;
            } while (pcVar3 != obj.system_dbg_info_list);
        }
        _raw_spin_unlock(obj.wakeup_devices);
    }
    return;
}


// ===== sym.power_debug_suspend_trace_probe.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt @ 0x08002360 (size 8) =====

int64_t sym.power_debug_suspend_trace_probe.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3,uint64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar4;
    code *pcVar5;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    ulong uStack_50;
    ulong uStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    if (((0 < param_3) && ((param_4 & 1) != 0)) && (param_1 = strcmp("machine_suspend"), param_1 == 0)) {
        uStack_48 = 0;
        iStack_40 = 0;
        iStack_58 = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_70 = 0;
        ktime_get_real_ts64(&uStack_48);
        time64_to_tm(uStack_48,0x7080,&uStack_70);
        param_3 = iStack_58 + 0x76c;
        _printk(0x8000d0d,"[xiaomi_power]",param_3,uStack_60 + 1,uStack_68._4_4_,uStack_68 & 0xffffffff,
                uStack_70._4_4_,uStack_70 & 0xffffffff,iStack_40 / 1000);
        _raw_spin_lock(obj.wakeup_devices);
        if (_obj.system_dbg_info_list != obj.system_dbg_info_list) {
            pcVar5 = _obj.system_dbg_info_list;
            do {
                if (*(pcVar5 + 0x10) == 3) {
                    pcVar3 = *(pcVar5 + 0x18);
                    if (1 < (pcVar3 + -0x8002428 >> 3 | pcVar3 << 0x3d)) {
                        param_3 = 0x8000520;
                        __cfi_slowpath_diag(0x9e842fe13a84e334,pcVar3);
                    }
                    (*pcVar3)(*(pcVar5 + 0x20));
                }
                pcVar5 = *pcVar5;
            } while (pcVar5 != obj.system_dbg_info_list);
        }
        _raw_spin_unlock(obj.wakeup_devices);
        _raw_spin_lock(obj.wakeup_devices);
        if (_obj.system_dbg_info_list != obj.system_dbg_info_list) {
            pcVar5 = _obj.system_dbg_info_list;
            do {
                if (*(pcVar5 + 0x10) == 4) {
                    pcVar3 = *(pcVar5 + 0x18);
                    if (1 < (pcVar3 + -0x8002428 >> 3 | pcVar3 << 0x3d)) {
                        param_3 = 0x8000520;
                        __cfi_slowpath_diag(0x9e842fe13a84e334,pcVar3);
                    }
                    (*pcVar3)(*(pcVar5 + 0x20));
                }
                pcVar5 = *pcVar5;
            } while (pcVar5 != obj.system_dbg_info_list);
        }
        param_1 = _raw_spin_unlock(obj.wakeup_devices);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return param_1;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.wakeup_devices_show;
    _raw_spin_lock(obj.wakeup_lock);
    if (_obj.wakeup_devices == obj.wakeup_devices) {
        iVar4 = 0;
    }
    else {
        iVar4 = 0;
        pcVar5 = _obj.wakeup_devices;
        do {
            if (*(pcVar5 + 0x10) != 0) {
                iVar2 = sprintf(param_3 + iVar4,0x8000e6e);
                iVar4 = iVar2 + iVar4;
            }
            pcVar5 = *pcVar5;
        } while (pcVar5 != obj.wakeup_devices);
    }
    _raw_spin_unlock(obj.wakeup_lock);
    *(param_3 + iVar4) = 10;
    return iVar4 + 1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002368 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    tracepoint_probe_unregister
              (__tracepoint_suspend_resume,sym.power_debug_suspend_trace_probe.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt
               ,0);
    return;
}


// ===== sym.pm_debug_resume.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt @ 0x08002370 (size 8) =====

void sym.pm_debug_resume.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt(void)

{
    ulong *in_x18;
    code *pcVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.wakeup_lock);
    pcVar2 = _obj.wakeup_devices;
    if (_obj.wakeup_devices != obj.wakeup_devices) {
        do {
            pcVar1 = *(pcVar2 + 0x28);
            if (pcVar1 != NULL) {
                __cfi_slowpath_diag(0x59e6215b9d01bc88,pcVar1,0x80005c0);
                (*pcVar1)(*(pcVar2 + 0x18));
            }
            pcVar2 = *pcVar2;
        } while (pcVar2 != obj.wakeup_devices);
    }
    _raw_spin_unlock(obj.wakeup_lock);
    return;
}


// ===== sym.subsystem_sleep_stats_dbg_unregister.cfi_jt @ 0x08002378 (size 8) =====

void sym.subsystem_sleep_stats_dbg_unregister.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800068a,"[xiaomi_power]","subsystem_sleep_stats_dbg_unregister");
    _segment.ehdr = 0;
    return;
}


// ===== sym.log_irq_wakeup_reason.cfi_jt @ 0x08002380 (size 8) =====

void sym.log_irq_wakeup_reason.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80006dd,"log_irq_wakeup_reason");
    return;
}


// ===== sym.pm_register_system_dbg_info.cfi_jt @ 0x08002388 (size 8) =====

ulong sym.pm_register_system_dbg_info.cfi_jt(ulong *param_1)

{
    code *pcVar1;
    ulong *puVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 != NULL) {
        pcVar1 = _obj.system_dbg_info_list;
        if (*(param_1 + 2) < 5) {
            for (; pcVar1 != obj.system_dbg_info_list; pcVar1 = *pcVar1) {
                if (*(pcVar1 + 0x10) == *(param_1 + 2)) {
                    return 0x11;
                }
            }
            _raw_spin_lock(obj.wakeup_devices);
            puVar2 = _obj.pm_debug_init.__key;
            uVar3 = __list_add_valid(param_1,_obj.pm_debug_init.__key,obj.system_dbg_info_list);
            if ((uVar3 & 1) != 0) {
                _obj.pm_debug_init.__key = param_1;
                *param_1 = obj.system_dbg_info_list;
                param_1[1] = puVar2;
                *puVar2 = param_1;
            }
            _raw_spin_unlock(obj.wakeup_devices);
        }
        else {
            _printk(0x800091f,"[xiaomi_power]","pm_register_system_dbg_info");
        }
    }
    return 0;
}


// ===== sym.power_mode_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt @ 0x08002390 (size 8) =====

int64_t sym.power_mode_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000b58,obj.gpower_mode);
    return iVar1;
}


// ===== sym.temp_aware_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt @ 0x08002398 (size 8) =====

int64_t sym.temp_aware_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000b58,obj.temp_aware_mode);
    return iVar1;
}


// ===== sym.subsystem_sleep_state_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt @ 0x080023a0 (size 8) =====

int64_t sym.subsystem_sleep_state_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt
                  (ulong param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.subsystem_sleep_stats_sysfs_print(param_3);
    return iVar1;
}


// ===== sym.wakeup_devices_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt @ 0x080023a8 (size 8) =====

int64_t sym.wakeup_devices_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int iVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.wakeup_lock);
    if (_obj.wakeup_devices == obj.wakeup_devices) {
        iVar2 = 0;
    }
    else {
        iVar2 = 0;
        pcVar3 = _obj.wakeup_devices;
        do {
            if (*(pcVar3 + 0x10) != 0) {
                iVar1 = sprintf(param_3 + iVar2,0x8000e6e);
                iVar2 = iVar1 + iVar2;
            }
            pcVar3 = *pcVar3;
        } while (pcVar3 != obj.wakeup_devices);
    }
    _raw_spin_unlock(obj.wakeup_lock);
    *(param_3 + iVar2) = 10;
    return iVar2 + 1;
}


// ===== sym.power_debug_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt @ 0x080023b0 (size 8) =====

int64_t sym.power_debug_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000b58,obj.pm_debug_init.__key);
    return iVar1;
}


// ===== sym.power_debug_store.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt @ 0x080023b8 (size 8) =====

int64_t sym.power_debug_store.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    ulong uVar1;
    int64_t iVar2;
    int iVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int64_t iStack_30;
    int64_t iStack_28;
    
    pcVar4 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iStack_30 = 0;
    iVar3 = kstrtoull(param_3,10,&iStack_30);
    if (iVar3 == 0) {
        if (iStack_30 == 0) {
            if ((obj.pm_debug_init.__key & 1) == 0) goto code_r0x08003b44;
            pcVar4 = NULL;
            obj.pm_debug_init.__key = 0x0;
            iVar3 = tracepoint_probe_unregister
                              (__tracepoint_suspend_resume,
                               sym.power_debug_suspend_property_trace_probe.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt,0);
        }
        else {
            iStack_30 = 1;
            if ((obj.pm_debug_init.__key & 1) != 0) goto code_r0x08003b44;
            pcVar4 = NULL;
            obj.pm_debug_init.__key = 0x1;
            iVar3 = tracepoint_probe_register
                              (__tracepoint_suspend_resume,
                               sym.power_debug_suspend_property_trace_probe.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt,0);
        }
        if (iVar3 != 0) {
            uVar1 = 0x8000e07;
            if (iStack_30 != 0) {
                uVar1 = 0x8000d87;
            }
            pcVar4 = "power_debug_store";
            _printk(0x800076a,"[xiaomi_power]","power_debug_store",uVar1,iVar3);
            param_4 = iVar3;
        }
    }
    else {
        param_4 = -0x16;
    }
code_r0x08003b44:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.power_mode_show;
    iVar3 = scnprintf(pcVar4,0x1000,0x8000b58,obj.gpower_mode);
    return iVar3;
}


// ===== sym.temp_aware_store.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt @ 0x080023c0 (size 8) =====

uint64_t sym.temp_aware_store.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt
                   (ulong param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    ulong extraout_x1;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar6;
    code *pcVar7;
    ulong unaff_x30;
    int64_t iStack_30;
    int64_t iStack_28;
    
    piVar4 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_30 = 0;
    uVar5 = param_4;
    iVar2 = kstrtoull(param_3,10);
    if (iVar2 == 0) {
        if (iStack_30 - 1U < 9) {
            obj.temp_aware_mode = SUB81(iStack_30,0);
        }
    }
    else {
        param_4 = 0xffffffffffffffea;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        __stack_chk_fail();
        *extraout_x18 = sym.power_debug_suspend_property_trace_probe;
        uVar3 = _printk(0x8000e0a,"[xiaomi_power]","power_debug_suspend_property_trace_probe",uVar5 & 1,
                        piVar4 & 0xffffffff);
        if (((0 < piVar4) && ((uVar5 & 1) != 0)) && (uVar3 = strcmp("machine_suspend",extraout_x1), uVar3 == 0)) {
            _printk(0x8000aa3,"[xiaomi_power]","power_debug_suspend_property_trace_probe");
            _raw_spin_lock(obj.wakeup_devices);
            pcVar7 = _obj.system_dbg_info_list;
            if (_obj.system_dbg_info_list != obj.system_dbg_info_list) {
                do {
                    if (*(pcVar7 + 0x10) == 2) {
                        pcVar6 = *(pcVar7 + 0x18);
                        if (1 < (pcVar6 + -0x8002428 >> 3 | pcVar6 << 0x3d)) {
                            __cfi_slowpath_diag(0x9e842fe13a84e334,pcVar6,0x8000520);
                        }
                        (*pcVar6)(*(pcVar7 + 0x20));
                    }
                    pcVar7 = *pcVar7;
                } while (pcVar7 != obj.system_dbg_info_list);
            }
            uVar3 = _raw_spin_unlock(obj.wakeup_devices);
        }
        return uVar3;
    }
    return param_4;
}


// ===== sym.power_mode_store.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt @ 0x080023c8 (size 8) =====

int64_t sym.power_mode_store.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    ulong *arg1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    arg1 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    iVar2 = kstrtoull(param_3,10);
    if (iVar2 == 0) {
        obj.gpower_mode = SUB81(uStack_30,0);
    }
    else {
        param_4 = -0x16;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.subsystem_sleep_state_show;
    iVar2 = sym.subsystem_sleep_stats_sysfs_print(arg1);
    return iVar2;
}


// ===== sym.wakeup_devices_store.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt @ 0x080023d0 (size 8) =====

ulong sym.wakeup_devices_store.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt(void)

{
    return 0;
}


// ===== sym.modem_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt @ 0x080023d8 (size 8) =====

int64_t sym.modem_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    char *pcVar1;
    int iVar2;
    uint64_t arg1;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = qcom_smem_get(1,0x25d,0);
    if ((arg1 == 0) || (0xfffffffffffff000 < arg1)) {
        pcVar1 = "is not support";
        if (arg1 < 0xfffffffffffff001) {
            pcVar1 = "is null";
        }
        _printk(0x8000a1d,"[xiaomi_power]","modem_show",pcVar1);
        iVar3 = 0;
    }
    else {
        iVar2 = sym.soc_rpmh_master_sysfs_print_one(arg1,0x80008bd,param_3);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.cxsd_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt @ 0x080023e0 (size 8) =====

int64_t sym.cxsd_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    char *pcVar1;
    uint64_t arg1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = _segment.ehdr;
    if (_segment.ehdr == 0) {
        _printk(0x800094b,"[xiaomi_power]","cxsd_show");
    }
    else {
        __memcpy_fromio(_segment.ehdr,*(*(_segment.ehdr + 0xb8) + 8),0x20);
        if (arg1 < 0xfffffffffffff001) {
            iVar2 = sym.soc_rpmh_master_sysfs_print_one(arg1,0x8000991,param_3);
            return iVar2;
        }
    }
    pcVar1 = "is not support";
    if (arg1 < 0xfffffffffffff001) {
        pcVar1 = "is null";
    }
    _printk(0x80006b9,"[xiaomi_power]","cxsd_show",pcVar1);
    return 0;
}


// ===== sym.cdsp_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt @ 0x080023e8 (size 8) =====

int64_t sym.cdsp_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    char *pcVar1;
    int iVar2;
    uint64_t arg1;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = qcom_smem_get(5,0x25f,0);
    if ((arg1 == 0) || (0xfffffffffffff000 < arg1)) {
        pcVar1 = "is not support";
        if (arg1 < 0xfffffffffffff001) {
            pcVar1 = "is null";
        }
        _printk(0x80005fe,"[xiaomi_power]","cdsp_show",pcVar1);
        iVar3 = 0;
    }
    else {
        iVar2 = sym.soc_rpmh_master_sysfs_print_one(arg1,0x8000b06,param_3);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.adsp_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt @ 0x080023f0 (size 8) =====

int64_t sym.adsp_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    char *pcVar1;
    int iVar2;
    uint64_t arg1;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = qcom_smem_get(2,0x25e,0);
    if ((arg1 == 0) || (0xfffffffffffff000 < arg1)) {
        pcVar1 = "is not support";
        if (arg1 < 0xfffffffffffff001) {
            pcVar1 = "is null";
        }
        _printk(0x8000b8d,"[xiaomi_power]","adsp_show",pcVar1);
        iVar3 = 0;
    }
    else {
        iVar2 = sym.soc_rpmh_master_sysfs_print_one(arg1,0x80009d7,param_3);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.aosd_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt @ 0x080023f8 (size 8) =====

int64_t sym.aosd_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    char *pcVar1;
    uint64_t arg1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = _segment.ehdr;
    if (_segment.ehdr == 0) {
        _printk(0x800094b,"[xiaomi_power]","aosd_show");
    }
    else {
        __memcpy_fromio(_segment.ehdr,**(_segment.ehdr + 0xb8),0x20);
        if (arg1 < 0xfffffffffffff001) {
            iVar2 = sym.soc_rpmh_master_sysfs_print_one(arg1,0x8000a5c,param_3);
            return iVar2;
        }
    }
    pcVar1 = "is not support";
    if (arg1 < 0xfffffffffffff001) {
        pcVar1 = "is null";
    }
    _printk(0x8000cd6,"[xiaomi_power]","aosd_show",pcVar1);
    return 0;
}


// ===== sym.slpi_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt @ 0x08002400 (size 8) =====

int64_t sym.slpi_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    char *pcVar1;
    int iVar2;
    uint64_t arg1;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = qcom_smem_get(3,0x260,0);
    if ((arg1 == 0) || (0xfffffffffffff000 < arg1)) {
        pcVar1 = "is not support";
        if (arg1 < 0xfffffffffffff001) {
            pcVar1 = "is null";
        }
        _printk(0x8000ac9,"[xiaomi_power]","slpi_show",pcVar1);
        iVar3 = 0;
    }
    else {
        iVar2 = sym.soc_rpmh_master_sysfs_print_one(arg1,0x800073e,param_3);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.adsp_island_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt @ 0x08002408 (size 8) =====

int64_t sym.adsp_island_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    char *pcVar1;
    int iVar2;
    uint64_t arg1;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = qcom_smem_get(2,0x265,0);
    if ((arg1 == 0) || (0xfffffffffffff000 < arg1)) {
        pcVar1 = "is not support";
        if (arg1 < 0xfffffffffffff001) {
            pcVar1 = "is null";
        }
        _printk(0x8000996,"[xiaomi_power]","adsp_island_show",pcVar1);
        iVar3 = 0;
    }
    else {
        iVar2 = sym.soc_rpmh_master_sysfs_print_one(arg1,0x8000d6d,param_3);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.ddr_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt @ 0x08002410 (size 8) =====

int64_t sym.ddr_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    char *pcVar1;
    uint64_t arg1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = _segment.ehdr;
    if (_segment.ehdr == 0) {
        _printk(0x800094b,"[xiaomi_power]","ddr_show");
    }
    else {
        __memcpy_fromio(_segment.ehdr,*(*(_segment.ehdr + 0xb8) + 0x10),0x20);
        if (arg1 < 0xfffffffffffff001) {
            iVar2 = sym.soc_rpmh_master_sysfs_print_one(arg1,0x8000d5a,param_3);
            return iVar2;
        }
    }
    pcVar1 = "is not support";
    if (arg1 < 0xfffffffffffff001) {
        pcVar1 = "is null";
    }
    _printk(0x8000c04,"[xiaomi_power]","ddr_show",pcVar1);
    return 0;
}


// ===== sym.slpi_island_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt @ 0x08002418 (size 8) =====

int64_t sym.slpi_island_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    char *pcVar1;
    int iVar2;
    uint64_t arg1;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = qcom_smem_get(3,0x265,0);
    if ((arg1 == 0) || (0xfffffffffffff000 < arg1)) {
        pcVar1 = "is not support";
        if (arg1 < 0xfffffffffffff001) {
            pcVar1 = "is null";
        }
        _printk(0x8000e43,"[xiaomi_power]","slpi_island_show",pcVar1);
        iVar3 = 0;
    }
    else {
        iVar2 = sym.soc_rpmh_master_sysfs_print_one(arg1,0x80008c8,param_3);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.apss_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt @ 0x08002420 (size 8) =====

int64_t sym.apss_show.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    char *pcVar1;
    int iVar2;
    uint64_t arg1;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = qcom_smem_get(0,0x277,0);
    if ((arg1 == 0) || (0xfffffffffffff000 < arg1)) {
        pcVar1 = "is not support";
        if (arg1 < 0xfffffffffffff001) {
            pcVar1 = "is null";
        }
        _printk(0x80009f9,"[xiaomi_power]","apss_show",pcVar1);
        iVar3 = 0;
    }
    else {
        iVar2 = sym.soc_rpmh_master_sysfs_print_one(arg1,0x8000966,param_3);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.__typeid__ZTSFvP15system_dbg_infoE_global_addr @ 0x08002428 (size 8) =====

uint64_t sym.__typeid__ZTSFvP15system_dbg_infoE_global_addr(void)

{
    uint32_t uVar1;
    int64_t *piVar2;
    code *pcVar3;
    uint uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint32_t *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    ulong unaff_x30;
    uint uStack_60;
    uchar uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    piVar2 = _segment.ehdr;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iVar10 = _segment.ehdr[1];
    uVar4 = sym.readl_relaxed(iVar10 + 4);
    uVar5 = sym.readq(iVar10 + 8);
    uVar6 = sym.readq(iVar10 + 0x10);
    iVar7 = sym.readq(iVar10 + 0x18);
    pcVar3 = __raw_spin_lock;
    uStack_5c = 0;
    uStack_60 = 0;
    if (uVar6 < uVar5) {
        __cfi_slowpath_diag(0x19e9081ee75ef79b,__raw_spin_lock,0x80005a0);
        iVar8 = (*pcVar3)();
        iVar7 = (iVar7 - uVar5) + iVar8;
    }
    _printk(0x800070a,"[xiaomi_power]","soc_rpmh_dbg_info_print_one",&uStack_60);
    _printk(0x8000bee,"[xiaomi_power]","soc_rpmh_dbg_info_print_one",uVar4);
    _printk(0x8000872,"[xiaomi_power]","soc_rpmh_dbg_info_print_one",uVar5);
    _printk(0x8000b13,"[xiaomi_power]","soc_rpmh_dbg_info_print_one",uVar6);
    uVar5 = _printk(0x8000bc7,"[xiaomi_power]","soc_rpmh_dbg_info_print_one",iVar7);
    if (*(*piVar2 + 0xc) != '\0') {
        uVar4 = sym.readl_relaxed(iVar10 + 0x1c);
        uVar5 = _printk(0x800069b,"[xiaomi_power]","soc_sleep_stats_dbg_info_print",uVar4);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return uVar5;
    }
    puVar9 = __stack_chk_fail();
    *extraout_x18 = sym.readl_relaxed;
    log_read_mmio(0x20,puVar9,0x8002fd4);
    uVar1 = *puVar9;
    log_post_read_mmio(uVar1,0x20,puVar9,0x8003008);
    return uVar1;
}


// ===== sym.subsystem_sleep_stats_print.cfi_jt @ 0x08002430 (size 8) =====

void sym.subsystem_sleep_stats_print.cfi_jt(void)

{
    code *pcVar1;
    bool bVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    uint64_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    int *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar8 = 0x8000e80;
    uVar5 = 0xfffffffffffffff3;
    do {
        uVar3 = _segment.ehdr;
        if (uVar5 < 0xfffffffffffffffd) {
            uVar3 = qcom_smem_get(piVar8[1],*piVar8,0);
            pcVar1 = __raw_spin_lock;
joined_r0x08002ce0:
            __raw_spin_lock = pcVar1;
            if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
                uVar7 = *(piVar8 + -2);
                iVar6 = *(uVar3 + 0x18);
                if (*(uVar3 + 0x10) < *(uVar3 + 8)) {
                    __cfi_slowpath_diag(0x19e9081ee75ef79b,pcVar1,0x8000580);
                    iVar4 = (*pcVar1)();
                    iVar6 = (iVar4 + iVar6) - *(uVar3 + 8);
                }
                _printk(0x8000c98,"[xiaomi_power]","soc_rpmh_master_print_one",uVar7,*(uVar3 + 4),iVar6);
                _printk(0x8000743,"[xiaomi_power]","soc_rpmh_master_print_one",*(uVar3 + 8),*(uVar3 + 0x10));
            }
        }
        else if (_segment.ehdr != 0) {
            __memcpy_fromio(_segment.ehdr,*(*(_segment.ehdr + 0xb8) + *piVar8 * 8),0x20);
            pcVar1 = __raw_spin_lock;
            goto joined_r0x08002ce0;
        }
        bVar2 = 0xfffffffffffffffe < uVar5;
        uVar5 = uVar5 + 1;
        piVar8 = piVar8 + 4;
        if (bVar2) {
            return;
        }
    } while( true );
}


// ===== sym.pm_register_wakeup_device @ 0x08002438 (size 184) =====

ulong sym.pm_register_wakeup_device(int64_t arg1)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar3 = 0x16;
    }
    else {
        if (_obj.wakeup_devices != obj.wakeup_devices) {
            pcVar4 = _obj.wakeup_devices;
            do {
                if (*(pcVar4 + 0x10) == *(arg1 + 0x10)) {
                    return 0x11;
                }
                pcVar4 = *pcVar4;
            } while (pcVar4 != obj.wakeup_devices);
        }
        _raw_spin_lock(obj.wakeup_lock);
        piVar1 = _obj.sleep_stats_g;
        uVar2 = __list_add_valid(arg1,_obj.sleep_stats_g,obj.wakeup_devices);
        if ((uVar2 & 1) != 0) {
            _obj.sleep_stats_g = arg1;
            *arg1 = obj.wakeup_devices;
            *(arg1 + 8) = piVar1;
            *piVar1 = arg1;
        }
        _raw_spin_unlock(obj.wakeup_lock);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.pm_register_system_event_recorder @ 0x080024f0 (size 248) =====

ulong sym.pm_register_system_event_recorder(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint64_t uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return 0xffffffea;
    }
    if (*(arg1 + 0x38) != 0) {
        iVar2 = __kmalloc(*(arg1 + 0x38) * 0x78,0xcc0);
        *(arg1 + 0x40) = iVar2;
        if (iVar2 == 0) {
            _printk(0x8000c65,"[xiaomi_power]","pm_register_system_event_recorder");
            return 0;
        }
    }
    if (_obj.system_event_recorders != obj.system_event_recorders) {
        pcVar4 = _obj.system_event_recorders;
        do {
            if (*(pcVar4 + 0x18) == *(arg1 + 0x18)) {
                return 0xffffffef;
            }
            pcVar4 = *pcVar4;
        } while (pcVar4 != obj.system_event_recorders);
    }
    _raw_spin_lock(obj.records_lock);
    piVar1 = _obj.soc_data;
    uVar3 = __list_add_valid(arg1,_obj.soc_data,obj.system_event_recorders);
    if ((uVar3 & 1) != 0) {
        _obj.soc_data = arg1;
        *arg1 = obj.system_event_recorders;
        *(arg1 + 8) = piVar1;
        *piVar1 = arg1;
    }
    _raw_spin_unlock(obj.records_lock);
    return 0;
}


// ===== sym.pm_register_system_dbg_info @ 0x080025e8 (size 220) =====

ulong sym.pm_register_system_dbg_info(int64_t arg1)

{
    code *pcVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        pcVar1 = _obj.system_dbg_info_list;
        if (*(arg1 + 0x10) < 5) {
            for (; pcVar1 != obj.system_dbg_info_list; pcVar1 = *pcVar1) {
                if (*(pcVar1 + 0x10) == *(arg1 + 0x10)) {
                    return 0x11;
                }
            }
            _raw_spin_lock(obj.wakeup_devices);
            piVar2 = _obj.pm_debug_init.__key;
            uVar3 = __list_add_valid(arg1,_obj.pm_debug_init.__key,obj.system_dbg_info_list);
            if ((uVar3 & 1) != 0) {
                _obj.pm_debug_init.__key = arg1;
                *arg1 = obj.system_dbg_info_list;
                *(arg1 + 8) = piVar2;
                *piVar2 = arg1;
            }
            _raw_spin_unlock(obj.wakeup_devices);
        }
        else {
            _printk(0x800091f,"[xiaomi_power]","pm_register_system_dbg_info");
        }
    }
    return 0;
}


// ===== sym.pm_system_dbg_info_print @ 0x080026c4 (size 256) =====

void sym.pm_system_dbg_info_print(uint32_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (4 < arg1) {
        _printk(0x800091f,"[xiaomi_power]","pm_system_dbg_info_print");
    }
    _raw_spin_lock(obj.wakeup_devices);
    pcVar2 = _obj.system_dbg_info_list;
    if (_obj.system_dbg_info_list != obj.system_dbg_info_list) {
        do {
            if (*(pcVar2 + 0x10) == arg1) {
                pcVar1 = *(pcVar2 + 0x18);
                if (1 < (pcVar1 + -0x8002428 >> 3 | pcVar1 << 0x3d)) {
                    __cfi_slowpath_diag(0x9e842fe13a84e334,pcVar1,0x8000520);
                }
                (*pcVar1)(*(pcVar2 + 0x20));
            }
            pcVar2 = *pcVar2;
        } while (pcVar2 != obj.system_dbg_info_list);
    }
    _raw_spin_unlock(obj.wakeup_devices);
    return;
}


// ===== sym.pm_trigger_system_event_record @ 0x080027c4 (size 204) =====

void sym.pm_trigger_system_event_record(uint32_t arg1,int64_t arg2)

{
    ulong *in_x18;
    code *pcVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 < 2) && (arg2 != 0)) {
        _raw_spin_lock(obj.records_lock);
        pcVar1 = _obj.system_event_recorders;
        if (_obj.system_event_recorders != obj.system_event_recorders) {
            do {
                if (*(pcVar1 + 0x18) == arg1) {
                    pcVar2 = *(pcVar1 + 0x28);
                    __cfi_slowpath_diag(0xca48e4b8b1a655d1,pcVar2,0x8000540);
                    (*pcVar2)(pcVar1,arg2);
                }
                pcVar1 = *pcVar1;
            } while (pcVar1 != obj.system_event_recorders);
        }
        _raw_spin_unlock(obj.records_lock);
    }
    return;
}


// ===== sym.mi_power_mode @ 0x08002890 (size 32) =====

uint32_t sym.mi_power_mode(void)

{
    uint32_t uVar1;
    
    uVar1 = obj.gpower_mode;
    if (3 < uVar1 - 1) {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.mi_power_save_battery_cave @ 0x080028b0 (size 136) =====

int64_t sym.mi_power_save_battery_cave(int64_t arg1)

{
    if (obj.gpower_mode - 2 < 3) {
        if (arg1 < 0x15) {
            if (-1 < arg1) {
                arg1 = (arg1 * 100 + 0x4fU & 0xffff) / 0x50;
            }
        }
        else {
            arg1 = (arg1 * 100 + -0x766) / 0x6b + 0x19;
        }
        if (99 < arg1) {
            arg1 = 100;
        }
        arg1 = arg1 & (arg1 >> 0x3f ^ 0xffffffffffffffffU);
    }
    return arg1;
}


// ===== sym.log_irq_wakeup_reason @ 0x08002938 (size 52) =====

void sym.log_irq_wakeup_reason(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80006dd,"log_irq_wakeup_reason");
    return;
}


// ===== sym.subsystem_sleep_stats_sysfs_print @ 0x0800296c (size 320) =====

int sym.subsystem_sleep_stats_sysfs_print(int64_t arg1)

{
    bool bVar1;
    int iVar2;
    uint64_t arg1_00;
    char *pcVar3;
    ulong *in_x18;
    int iVar4;
    uint64_t uVar5;
    int *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = 0;
    uVar5 = 0xfffffffffffffff3;
    piVar6 = 0x8000e80;
    do {
        arg1_00 = _segment.ehdr;
        if (uVar5 < 0xfffffffffffffffd) {
            arg1_00 = qcom_smem_get(piVar6[1],*piVar6,0);
            if (arg1_00 == 0) {
code_r0x08002a44:
                pcVar3 = "is not support";
                if (arg1_00 < 0xfffffffffffff001) {
                    pcVar3 = "is NULL";
                }
                goto code_r0x08002a4c;
            }
code_r0x08002a3c:
            if (0xfffffffffffff000 < arg1_00) goto code_r0x08002a44;
            iVar2 = sym.soc_rpmh_master_sysfs_print_one(arg1_00,*(piVar6 + -2),arg1 + iVar4);
        }
        else {
            if (_segment.ehdr != 0) {
                __memcpy_fromio(_segment.ehdr,*(*(_segment.ehdr + 0xb8) + *piVar6 * 8),0x20);
                if (arg1_00 != 0) goto code_r0x08002a3c;
                goto code_r0x08002a44;
            }
            _printk(0x800094b,"[xiaomi_power]","subsystem_sleep_stats_sysfs_print");
            pcVar3 = "is NULL";
code_r0x08002a4c:
            iVar2 = sprintf(arg1 + iVar4,"subsystem %s stats %s.\n",*(piVar6 + -2),pcVar3);
        }
        iVar4 = iVar2 + iVar4;
        bVar1 = 0xfffffffffffffffe < uVar5;
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
        if (bVar1) {
            return iVar4;
        }
    } while( true );
}


// ===== sym.soc_rpmh_master_sysfs_print_one @ 0x08002aac (size 340) =====

uint64_t sym.soc_rpmh_master_sysfs_print_one(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    code *pcVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong in_x6;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar9;
    int64_t iVar10;
    ulong uVar11;
    int *piVar12;
    ulong unaff_x30;
    uchar *puVar13;
    code *pcVar14;
    uint uStack_50;
    uchar uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    pcVar14 = __raw_spin_lock;
    puVar13 = &stack0xffffffffffffffc0;
    iVar10 = sp_el0;
    iStack_48 = *(iVar10 + 0x5e0);
    uStack_4c = 0;
    uStack_50 = *arg1;
    iVar10 = *(arg1 + 0x18);
    if (*(arg1 + 0x10) < *(arg1 + 8)) {
        __cfi_slowpath_diag(0x19e9081ee75ef79b,__raw_spin_lock,0x8000560);
        iVar7 = (*pcVar14)();
        iVar10 = (iVar7 + iVar10) - *(arg1 + 8);
    }
    iVar4 = sprintf(arg3,0x8000d88,arg2);
    iVar5 = sprintf(arg3 + iVar4,0x8000b58,&uStack_50);
    iVar6 = sprintf(arg3 + (iVar5 + iVar4),"Count = %u\n",*(arg1 + 4));
    iVar6 = iVar6 + iVar5 + iVar4;
    iVar4 = sprintf(arg3 + iVar6,"Last Entered At = %llu\n",*(arg1 + 8));
    iVar4 = iVar4 + iVar6;
    iVar6 = sprintf(arg3 + iVar4,"Last Exited At = %llu\n",*(arg1 + 0x10));
    iVar6 = iVar6 + iVar4;
    iVar4 = sprintf(arg3 + iVar6,"Accumulated Duration = %llu\n",iVar10);
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_48) {
        return iVar6 + iVar4;
    }
    uVar8 = __stack_chk_fail();
    *extraout_x18 = sym.subsystem_sleep_stats_print;
    pcVar14 = sym.subsystem_sleep_stats_print;
    piVar12 = 0x8000e80;
    uVar9 = 0xfffffffffffffff3;
    do {
        uVar1 = _segment.ehdr;
        if (uVar9 < 0xfffffffffffffffd) {
            uVar8 = qcom_smem_get(piVar12[1],*piVar12,0);
            uVar1 = uVar8;
            pcVar2 = __raw_spin_lock;
joined_r0x08002ce0:
            __raw_spin_lock = pcVar2;
            if ((uVar1 != 0) && (uVar1 < 0xfffffffffffff001)) {
                uVar11 = *(piVar12 + -2);
                iVar10 = *(uVar1 + 0x18);
                if (*(uVar1 + 0x10) < *(uVar1 + 8)) {
                    __cfi_slowpath_diag(0x19e9081ee75ef79b,pcVar2,0x8000580);
                    iVar7 = (*pcVar2)();
                    iVar10 = (iVar7 + iVar10) - *(uVar1 + 8);
                }
                _printk(0x8000c98,"[xiaomi_power]","soc_rpmh_master_print_one",uVar11,*(uVar1 + 4),iVar10,in_x6,
                        in_x7,puVar13,pcVar14);
                uVar8 = _printk(0x8000743,"[xiaomi_power]","soc_rpmh_master_print_one",*(uVar1 + 8),*(uVar1 + 0x10))
                ;
            }
        }
        else if (_segment.ehdr != 0) {
            uVar8 = __memcpy_fromio(_segment.ehdr,*(*(_segment.ehdr + 0xb8) + *piVar12 * 8),0x20);
            pcVar2 = __raw_spin_lock;
            goto joined_r0x08002ce0;
        }
        bVar3 = 0xfffffffffffffffe < uVar9;
        uVar9 = uVar9 + 1;
        piVar12 = piVar12 + 4;
        if (bVar3) {
            return uVar8;
        }
    } while( true );
}


// ===== sym.subsystem_sleep_stats_print @ 0x08002c00 (size 360) =====

void sym.subsystem_sleep_stats_print(void)

{
    code *pcVar1;
    bool bVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    uint64_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    int *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar8 = 0x8000e80;
    uVar5 = 0xfffffffffffffff3;
    do {
        uVar3 = _segment.ehdr;
        if (uVar5 < 0xfffffffffffffffd) {
            uVar3 = qcom_smem_get(piVar8[1],*piVar8,0);
            pcVar1 = __raw_spin_lock;
joined_r0x08002ce0:
            __raw_spin_lock = pcVar1;
            if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
                uVar7 = *(piVar8 + -2);
                iVar6 = *(uVar3 + 0x18);
                if (*(uVar3 + 0x10) < *(uVar3 + 8)) {
                    __cfi_slowpath_diag(0x19e9081ee75ef79b,pcVar1,0x8000580);
                    iVar4 = (*pcVar1)();
                    iVar6 = (iVar4 + iVar6) - *(uVar3 + 8);
                }
                _printk(0x8000c98,"[xiaomi_power]","soc_rpmh_master_print_one",uVar7,*(uVar3 + 4),iVar6);
                _printk(0x8000743,"[xiaomi_power]","soc_rpmh_master_print_one",*(uVar3 + 8),*(uVar3 + 0x10));
            }
        }
        else if (_segment.ehdr != 0) {
            __memcpy_fromio(_segment.ehdr,*(*(_segment.ehdr + 0xb8) + *piVar8 * 8),0x20);
            pcVar1 = __raw_spin_lock;
            goto joined_r0x08002ce0;
        }
        bVar2 = 0xfffffffffffffffe < uVar5;
        uVar5 = uVar5 + 1;
        piVar8 = piVar8 + 4;
        if (bVar2) {
            return;
        }
    } while( true );
}


// ===== sym.soc_sleep_stats_dbg_register @ 0x08002d68 (size 28) =====

void sym.soc_sleep_stats_dbg_register(int64_t arg1)

{
    if (arg1 != 0) {
        _segment.ehdr = arg1;
    }
    return;
}


// ===== sym.subsystem_sleep_stats_dbg_register @ 0x08002d84 (size 92) =====

void sym.subsystem_sleep_stats_dbg_register(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 == 0) {
        return;
    }
    *in_x18 = unaff_x30;
    _printk(0x800068a,"[xiaomi_power]","subsystem_sleep_stats_dbg_register");
    _segment.ehdr = arg1;
    return;
}


// ===== sym.subsystem_sleep_stats_dbg_unregister @ 0x08002de0 (size 68) =====

void sym.subsystem_sleep_stats_dbg_unregister(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800068a,"[xiaomi_power]","subsystem_sleep_stats_dbg_unregister");
    _segment.ehdr = 0;
    return;
}


// ===== sym.soc_sleep_stats_dbg_info_print @ 0x08002e24 (size 428) =====

uint64_t sym.soc_sleep_stats_dbg_info_print(void)

{
    uint32_t uVar1;
    int64_t *piVar2;
    code *pcVar3;
    uint uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint32_t *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    ulong unaff_x30;
    uint uStack_60;
    uchar uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    piVar2 = _segment.ehdr;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iVar10 = _segment.ehdr[1];
    uVar4 = sym.readl_relaxed(iVar10 + 4);
    uVar5 = sym.readq(iVar10 + 8);
    uVar6 = sym.readq(iVar10 + 0x10);
    iVar7 = sym.readq(iVar10 + 0x18);
    pcVar3 = __raw_spin_lock;
    uStack_5c = 0;
    uStack_60 = 0;
    if (uVar6 < uVar5) {
        __cfi_slowpath_diag(0x19e9081ee75ef79b,__raw_spin_lock,0x80005a0);
        iVar8 = (*pcVar3)();
        iVar7 = (iVar7 - uVar5) + iVar8;
    }
    _printk(0x800070a,"[xiaomi_power]","soc_rpmh_dbg_info_print_one",&uStack_60);
    _printk(0x8000bee,"[xiaomi_power]","soc_rpmh_dbg_info_print_one",uVar4);
    _printk(0x8000872,"[xiaomi_power]","soc_rpmh_dbg_info_print_one",uVar5);
    _printk(0x8000b13,"[xiaomi_power]","soc_rpmh_dbg_info_print_one",uVar6);
    uVar5 = _printk(0x8000bc7,"[xiaomi_power]","soc_rpmh_dbg_info_print_one",iVar7);
    if (*(*piVar2 + 0xc) != '\0') {
        uVar4 = sym.readl_relaxed(iVar10 + 0x1c);
        uVar5 = _printk(0x800069b,"[xiaomi_power]","soc_sleep_stats_dbg_info_print",uVar4);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return uVar5;
    }
    puVar9 = __stack_chk_fail();
    *extraout_x18 = sym.readl_relaxed;
    log_read_mmio(0x20,puVar9,0x8002fd4);
    uVar1 = *puVar9;
    log_post_read_mmio(uVar1,0x20,puVar9,0x8003008);
    return uVar1;
}


// ===== sym.readl_relaxed @ 0x08002fd0 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8002fd4);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8003008);
    return uVar1;
}


// ===== sym.readq @ 0x08003040 (size 120) =====

ulong sym.readq(int64_t arg1)

{
    ulong *in_x18;
    ulong uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x40,arg1,0x8003044);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x40,arg1,0x8003084);
    return uVar1;
}


// ===== sym.apss_show @ 0x080030bc (size 152) =====

int64_t sym.apss_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    char *pcVar1;
    int iVar2;
    uint64_t arg1_00;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = qcom_smem_get(0,0x277,0);
    if ((arg1_00 == 0) || (0xfffffffffffff000 < arg1_00)) {
        pcVar1 = "is not support";
        if (arg1_00 < 0xfffffffffffff001) {
            pcVar1 = "is null";
        }
        _printk(0x80009f9,"[xiaomi_power]","apss_show",pcVar1);
        iVar3 = 0;
    }
    else {
        iVar2 = sym.soc_rpmh_master_sysfs_print_one(arg1_00,0x8000966,arg2);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.modem_show @ 0x08003154 (size 152) =====

int64_t sym.modem_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    char *pcVar1;
    int iVar2;
    uint64_t arg1_00;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = qcom_smem_get(1,0x25d,0);
    if ((arg1_00 == 0) || (0xfffffffffffff000 < arg1_00)) {
        pcVar1 = "is not support";
        if (arg1_00 < 0xfffffffffffff001) {
            pcVar1 = "is null";
        }
        _printk(0x8000a1d,"[xiaomi_power]","modem_show",pcVar1);
        iVar3 = 0;
    }
    else {
        iVar2 = sym.soc_rpmh_master_sysfs_print_one(arg1_00,0x80008bd,arg1);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.adsp_show @ 0x080031ec (size 152) =====

int64_t sym.adsp_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    char *pcVar1;
    int iVar2;
    uint64_t arg1_00;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = qcom_smem_get(2,0x25e,0);
    if ((arg1_00 == 0) || (0xfffffffffffff000 < arg1_00)) {
        pcVar1 = "is not support";
        if (arg1_00 < 0xfffffffffffff001) {
            pcVar1 = "is null";
        }
        _printk(0x8000b8d,"[xiaomi_power]","adsp_show",pcVar1);
        iVar3 = 0;
    }
    else {
        iVar2 = sym.soc_rpmh_master_sysfs_print_one(arg1_00,0x80009d7,arg1);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.adsp_island_show @ 0x08003284 (size 152) =====

int64_t sym.adsp_island_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    char *pcVar1;
    int iVar2;
    uint64_t arg1_00;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = qcom_smem_get(2,0x265,0);
    if ((arg1_00 == 0) || (0xfffffffffffff000 < arg1_00)) {
        pcVar1 = "is not support";
        if (arg1_00 < 0xfffffffffffff001) {
            pcVar1 = "is null";
        }
        _printk(0x8000996,"[xiaomi_power]","adsp_island_show",pcVar1);
        iVar3 = 0;
    }
    else {
        iVar2 = sym.soc_rpmh_master_sysfs_print_one(arg1_00,0x8000d6d,arg1);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.cdsp_show @ 0x0800331c (size 152) =====

int64_t sym.cdsp_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    char *pcVar1;
    int iVar2;
    uint64_t arg1_00;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = qcom_smem_get(5,0x25f,0);
    if ((arg1_00 == 0) || (0xfffffffffffff000 < arg1_00)) {
        pcVar1 = "is not support";
        if (arg1_00 < 0xfffffffffffff001) {
            pcVar1 = "is null";
        }
        _printk(0x80005fe,"[xiaomi_power]","cdsp_show",pcVar1);
        iVar3 = 0;
    }
    else {
        iVar2 = sym.soc_rpmh_master_sysfs_print_one(arg1_00,0x8000b06,arg1);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.slpi_show @ 0x080033b4 (size 152) =====

int64_t sym.slpi_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    char *pcVar1;
    int iVar2;
    uint64_t arg1_00;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = qcom_smem_get(3,0x260,0);
    if ((arg1_00 == 0) || (0xfffffffffffff000 < arg1_00)) {
        pcVar1 = "is not support";
        if (arg1_00 < 0xfffffffffffff001) {
            pcVar1 = "is null";
        }
        _printk(0x8000ac9,"[xiaomi_power]","slpi_show",pcVar1);
        iVar3 = 0;
    }
    else {
        iVar2 = sym.soc_rpmh_master_sysfs_print_one(arg1_00,0x800073e,arg1);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.slpi_island_show @ 0x0800344c (size 152) =====

int64_t sym.slpi_island_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    char *pcVar1;
    int iVar2;
    uint64_t arg1_00;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = qcom_smem_get(3,0x265,0);
    if ((arg1_00 == 0) || (0xfffffffffffff000 < arg1_00)) {
        pcVar1 = "is not support";
        if (arg1_00 < 0xfffffffffffff001) {
            pcVar1 = "is null";
        }
        _printk(0x8000e43,"[xiaomi_power]","slpi_island_show",pcVar1);
        iVar3 = 0;
    }
    else {
        iVar2 = sym.soc_rpmh_master_sysfs_print_one(arg1_00,0x80008c8,arg1);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.aosd_show @ 0x080034e4 (size 212) =====

int64_t sym.aosd_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    char *pcVar1;
    uint64_t arg1_00;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = _segment.ehdr;
    if (_segment.ehdr == 0) {
        _printk(0x800094b,"[xiaomi_power]","aosd_show");
    }
    else {
        __memcpy_fromio(_segment.ehdr,**(_segment.ehdr + 0xb8),0x20);
        if (arg1_00 < 0xfffffffffffff001) {
            iVar2 = sym.soc_rpmh_master_sysfs_print_one(arg1_00,0x8000a5c,arg1);
            return iVar2;
        }
    }
    pcVar1 = "is not support";
    if (arg1_00 < 0xfffffffffffff001) {
        pcVar1 = "is null";
    }
    _printk(0x8000cd6,"[xiaomi_power]","aosd_show",pcVar1);
    return 0;
}


// ===== sym.cxsd_show @ 0x080035b8 (size 212) =====

int64_t sym.cxsd_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    char *pcVar1;
    uint64_t arg1_00;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = _segment.ehdr;
    if (_segment.ehdr == 0) {
        _printk(0x800094b,"[xiaomi_power]","cxsd_show");
    }
    else {
        __memcpy_fromio(_segment.ehdr,*(*(_segment.ehdr + 0xb8) + 8),0x20);
        if (arg1_00 < 0xfffffffffffff001) {
            iVar2 = sym.soc_rpmh_master_sysfs_print_one(arg1_00,0x8000991,arg1);
            return iVar2;
        }
    }
    pcVar1 = "is not support";
    if (arg1_00 < 0xfffffffffffff001) {
        pcVar1 = "is null";
    }
    _printk(0x80006b9,"[xiaomi_power]","cxsd_show",pcVar1);
    return 0;
}


// ===== sym.ddr_show @ 0x0800368c (size 220) =====

int64_t sym.ddr_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    char *pcVar1;
    uint64_t arg1_00;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = _segment.ehdr;
    if (_segment.ehdr == 0) {
        _printk(0x800094b,"[xiaomi_power]","ddr_show");
    }
    else {
        __memcpy_fromio(_segment.ehdr,*(*(_segment.ehdr + 0xb8) + 0x10),0x20);
        if (arg1_00 < 0xfffffffffffff001) {
            iVar2 = sym.soc_rpmh_master_sysfs_print_one(arg1_00,0x8000d5a,arg1);
            return iVar2;
        }
    }
    pcVar1 = "is not support";
    if (arg1_00 < 0xfffffffffffff001) {
        pcVar1 = "is null";
    }
    _printk(0x8000c04,"[xiaomi_power]","ddr_show",pcVar1);
    return 0;
}


// ===== sym.power_debug_suspend_trace_probe @ 0x08003768 (size 540) =====

int64_t sym.power_debug_suspend_trace_probe(ulong noname_0,uchar noname_1 [16],uint32_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int64_t in_x0;
    uint64_t uVar3;
    uint64_t in_x3;
    code *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar5;
    code *pcVar6;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    ulong uStack_50;
    ulong uStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    uVar3 = arg1;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    if (((0 < arg1) && ((in_x3 & 1) != 0)) && (in_x0 = strcmp("machine_suspend"), noname_1 = extraout_q0, in_x0 == 0))
    {
        uStack_48 = 0;
        iStack_40 = 0;
        iStack_58 = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_70 = 0;
        ktime_get_real_ts64(&uStack_48);
        time64_to_tm(uStack_48,0x7080,&uStack_70);
        uVar3 = iStack_58 + 0x76c;
        _printk(0x8000d0d,"[xiaomi_power]",uVar3,uStack_60 + 1,uStack_68._4_4_,uStack_68 & 0xffffffff,
                uStack_70._4_4_,uStack_70 & 0xffffffff,iStack_40 / 1000);
        _raw_spin_lock(obj.wakeup_devices);
        if (_obj.system_dbg_info_list != obj.system_dbg_info_list) {
            pcVar6 = _obj.system_dbg_info_list;
            do {
                if (*(pcVar6 + 0x10) == 3) {
                    pcVar4 = *(pcVar6 + 0x18);
                    if (1 < (pcVar4 + -0x8002428 >> 3 | pcVar4 << 0x3d)) {
                        uVar3 = 0x8000520;
                        __cfi_slowpath_diag(0x9e842fe13a84e334,pcVar4);
                    }
                    (*pcVar4)(*(pcVar6 + 0x20));
                }
                pcVar6 = *pcVar6;
            } while (pcVar6 != obj.system_dbg_info_list);
        }
        _raw_spin_unlock(obj.wakeup_devices);
        _raw_spin_lock(obj.wakeup_devices);
        if (_obj.system_dbg_info_list != obj.system_dbg_info_list) {
            pcVar6 = _obj.system_dbg_info_list;
            do {
                if (*(pcVar6 + 0x10) == 4) {
                    pcVar4 = *(pcVar6 + 0x18);
                    if (1 < (pcVar4 + -0x8002428 >> 3 | pcVar4 << 0x3d)) {
                        uVar3 = 0x8000520;
                        __cfi_slowpath_diag(0x9e842fe13a84e334,pcVar4);
                    }
                    (*pcVar4)(*(pcVar6 + 0x20));
                }
                pcVar6 = *pcVar6;
            } while (pcVar6 != obj.system_dbg_info_list);
        }
        in_x0 = _raw_spin_unlock(obj.wakeup_devices);
        noname_1 = extraout_q0_00;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return in_x0;
    }
    __stack_chk_fail(noname_1);
    *extraout_x18 = sym.wakeup_devices_show;
    _raw_spin_lock(obj.wakeup_lock);
    if (_obj.wakeup_devices == obj.wakeup_devices) {
        iVar5 = 0;
    }
    else {
        iVar5 = 0;
        pcVar6 = _obj.wakeup_devices;
        do {
            if (*(pcVar6 + 0x10) != 0) {
                iVar2 = sprintf(uVar3 + iVar5,0x8000e6e);
                iVar5 = iVar2 + iVar5;
            }
            pcVar6 = *pcVar6;
        } while (pcVar6 != obj.wakeup_devices);
    }
    _raw_spin_unlock(obj.wakeup_lock);
    *(uVar3 + iVar5) = 10;
    return iVar5 + 1;
}


// ===== sym.wakeup_devices_show @ 0x08003984 (size 180) =====

int64_t sym.wakeup_devices_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int iVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.wakeup_lock);
    if (_obj.wakeup_devices == obj.wakeup_devices) {
        iVar2 = 0;
    }
    else {
        iVar2 = 0;
        pcVar3 = _obj.wakeup_devices;
        do {
            if (*(pcVar3 + 0x10) != 0) {
                iVar1 = sprintf(arg1 + iVar2,0x8000e6e);
                iVar2 = iVar1 + iVar2;
            }
            pcVar3 = *pcVar3;
        } while (pcVar3 != obj.wakeup_devices);
    }
    _raw_spin_unlock(obj.wakeup_lock);
    *(arg1 + iVar2) = 10;
    return iVar2 + 1;
}


// ===== sym.wakeup_devices_store @ 0x08003a38 (size 16) =====

ulong sym.wakeup_devices_store(void)

{
    return 0;
}


// ===== sym.power_debug_show @ 0x08003a48 (size 64) =====

int64_t sym.power_debug_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,0x8000b58,obj.pm_debug_init.__key);
    return iVar1;
}


// ===== sym.power_debug_store @ 0x08003a88 (size 308) =====

int64_t sym.power_debug_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    int iVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int64_t iStack_30;
    int64_t iStack_28;
    
    pcVar4 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iStack_30 = 0;
    iVar3 = kstrtoull(arg1,10,&iStack_30);
    if (iVar3 == 0) {
        if (iStack_30 == 0) {
            if ((obj.pm_debug_init.__key & 1) == 0) goto code_r0x08003b44;
            pcVar4 = NULL;
            obj.pm_debug_init.__key = 0x0;
            iVar3 = tracepoint_probe_unregister
                              (__tracepoint_suspend_resume,
                               sym.power_debug_suspend_property_trace_probe.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt,0);
        }
        else {
            iStack_30 = 1;
            if ((obj.pm_debug_init.__key & 1) != 0) goto code_r0x08003b44;
            pcVar4 = NULL;
            obj.pm_debug_init.__key = 0x1;
            iVar3 = tracepoint_probe_register
                              (__tracepoint_suspend_resume,
                               sym.power_debug_suspend_property_trace_probe.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt,0);
        }
        if (iVar3 != 0) {
            uVar1 = 0x8000e07;
            if (iStack_30 != 0) {
                uVar1 = 0x8000d87;
            }
            pcVar4 = "power_debug_store";
            _printk(0x800076a,"[xiaomi_power]","power_debug_store",uVar1,iVar3);
            arg2 = iVar3;
        }
    }
    else {
        arg2 = -0x16;
    }
code_r0x08003b44:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.power_mode_show;
    iVar3 = scnprintf(pcVar4,0x1000,0x8000b58,obj.gpower_mode);
    return iVar3;
}


// ===== sym.power_mode_show @ 0x08003bbc (size 64) =====

int64_t sym.power_mode_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,0x8000b58,obj.gpower_mode);
    return iVar1;
}


// ===== sym.power_mode_store @ 0x08003bfc (size 136) =====

int64_t sym.power_mode_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong *arg1_00;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    arg1_00 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    iVar2 = kstrtoull(arg1,10);
    if (iVar2 == 0) {
        obj.gpower_mode = SUB81(uStack_30,0);
    }
    else {
        arg2 = -0x16;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.subsystem_sleep_state_show;
    iVar2 = sym.subsystem_sleep_stats_sysfs_print(arg1_00);
    return iVar2;
}


// ===== sym.subsystem_sleep_state_show @ 0x08003c84 (size 44) =====

int64_t sym.subsystem_sleep_state_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.subsystem_sleep_stats_sysfs_print(arg1);
    return iVar1;
}


// ===== sym.temp_aware_show @ 0x08003cb0 (size 64) =====

int64_t sym.temp_aware_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,0x8000b58,obj.temp_aware_mode);
    return iVar1;
}


// ===== sym.temp_aware_store @ 0x08003cf0 (size 148) =====

int64_t sym.temp_aware_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong extraout_x1;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar5;
    code *pcVar6;
    ulong unaff_x30;
    int64_t iStack_30;
    int64_t iStack_28;
    
    piVar3 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iStack_30 = 0;
    uVar4 = arg2;
    iVar1 = kstrtoull(arg1,10);
    if (iVar1 == 0) {
        if (iStack_30 - 1U < 9) {
            obj.temp_aware_mode = SUB81(iStack_30,0);
        }
    }
    else {
        arg2 = -0x16;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_28) {
        __stack_chk_fail();
        *extraout_x18 = sym.power_debug_suspend_property_trace_probe;
        iVar2 = _printk(0x8000e0a,"[xiaomi_power]","power_debug_suspend_property_trace_probe",uVar4 & 1,
                        piVar3 & 0xffffffff);
        if (((0 < piVar3) && ((uVar4 & 1) != 0)) && (iVar2 = strcmp("machine_suspend",extraout_x1), iVar2 == 0)) {
            _printk(0x8000aa3,"[xiaomi_power]","power_debug_suspend_property_trace_probe");
            _raw_spin_lock(obj.wakeup_devices);
            pcVar6 = _obj.system_dbg_info_list;
            if (_obj.system_dbg_info_list != obj.system_dbg_info_list) {
                do {
                    if (*(pcVar6 + 0x10) == 2) {
                        pcVar5 = *(pcVar6 + 0x18);
                        if (1 < (pcVar5 + -0x8002428 >> 3 | pcVar5 << 0x3d)) {
                            __cfi_slowpath_diag(0x9e842fe13a84e334,pcVar5,0x8000520);
                        }
                        (*pcVar5)(*(pcVar6 + 0x20));
                    }
                    pcVar6 = *pcVar6;
                } while (pcVar6 != obj.system_dbg_info_list);
            }
            iVar2 = _raw_spin_unlock(obj.wakeup_devices);
        }
        return iVar2;
    }
    return arg2;
}


// ===== sym.power_debug_suspend_property_trace_probe @ 0x08003d84 (size 316) =====

void sym.power_debug_suspend_property_trace_probe(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    code *pcVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000e0a,"[xiaomi_power]","power_debug_suspend_property_trace_probe",arg3 & 1,arg2 & 0xffffffff);
    if (((0 < arg2) && ((arg3 & 1U) != 0)) && (iVar1 = strcmp("machine_suspend",arg1), iVar1 == 0)) {
        _printk(0x8000aa3,"[xiaomi_power]","power_debug_suspend_property_trace_probe");
        _raw_spin_lock(obj.wakeup_devices);
        pcVar3 = _obj.system_dbg_info_list;
        if (_obj.system_dbg_info_list != obj.system_dbg_info_list) {
            do {
                if (*(pcVar3 + 0x10) == 2) {
                    pcVar2 = *(pcVar3 + 0x18);
                    if (1 < (pcVar2 + -0x8002428 >> 3 | pcVar2 << 0x3d)) {
                        __cfi_slowpath_diag(0x9e842fe13a84e334,pcVar2,0x8000520);
                    }
                    (*pcVar2)(*(pcVar3 + 0x20));
                }
                pcVar3 = *pcVar3;
            } while (pcVar3 != obj.system_dbg_info_list);
        }
        _raw_spin_unlock(obj.wakeup_devices);
    }
    return;
}


// ===== sym.pm_debug_resume @ 0x08003ec0 (size 164) =====

void sym.pm_debug_resume(void)

{
    ulong *in_x18;
    code *pcVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.wakeup_lock);
    pcVar2 = _obj.wakeup_devices;
    if (_obj.wakeup_devices != obj.wakeup_devices) {
        do {
            pcVar1 = *(pcVar2 + 0x28);
            if (pcVar1 != NULL) {
                __cfi_slowpath_diag(0x59e6215b9d01bc88,pcVar1,0x80005c0);
                (*pcVar1)(*(pcVar2 + 0x18));
            }
            pcVar2 = *pcVar2;
        } while (pcVar2 != obj.wakeup_devices);
    }
    _raw_spin_unlock(obj.wakeup_lock);
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
    //switch table (4 cases) at 0x80005e0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003fbc);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080040b8 (size 620) =====

int sym.init_module(void)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *puVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar6 = 0x30;
    }
    _segment.ehdr = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,0x18);
    if (_segment.ehdr == NULL) {
        iVar2 = -0xc;
        _segment.ehdr = NULL;
    }
    else {
        iVar6 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar6 = 0x30;
        }
        _segment.ehdr = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,0x20);
        if (_segment.ehdr == NULL) {
            iVar2 = -0xc;
code_r0x08004140:
            kfree(_segment.ehdr);
        }
        else {
            uVar3 = __class_create(obj.__this_module,"power_debug",obj.pm_debug_init.__key);
            iVar6 = 0;
            *_segment.ehdr = uVar3;
            while( true ) {
                if (*(obj.power_debug_attrs + iVar6) == 0) break;
                iVar2 = class_create_file_ns(*_segment.ehdr,obj.power_debug_attrs + iVar6,0);
                if (iVar2 != 0) {
                    _printk(0x80007cc,"[xiaomi_power]","pm_debug_init");
                    class_destroy(0);
                    goto code_r0x08004140;
                }
                iVar6 = iVar6 + 0x20;
                if (iVar6 == 0xc0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x80041cc);
                    (*pcVar1)();
                }
            }
            register_syscore_ops(obj.pm_debug_ops);
            sym.pm_register_system_dbg_info(0x8000120);
            tracepoint_probe_register
                      (__tracepoint_suspend_resume,
                       sym.power_debug_suspend_trace_probe.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt,0);
            iVar2 = __register_chrdev(0,0,0x100,"mi_power_module",obj.power_ops);
            puVar5 = _segment.ehdr;
            *(_segment.ehdr + 2) = iVar2;
            if (iVar2 < 0) {
                _printk(0x8000622,"[xiaomi_power]","pm_debug_init");
                iVar2 = *(_segment.ehdr + 2);
                puVar5 = _segment.ehdr;
            }
            uVar4 = device_create(*puVar5,0,iVar2 << 0x14 | 1,0,"mi_power_device");
            _segment.ehdr[1] = uVar4;
            if (0xfffffffffffff000 < uVar4) {
                _printk(0x80008e4,"[xiaomi_power]","pm_debug_init",0xffffffed);
                uVar4 = _segment.ehdr[1];
            }
            iVar2 = sysfs_create_group(uVar4,obj.qcom_sleep_stats_sysfs_group);
            if (iVar2 != 0) {
                _printk(0x8000718,"[xiaomi_power]","pm_debug_init");
            }
            _printk(0x8000b34,"[xiaomi_power]","pm_debug_init");
        }
    }
    return iVar2;
}


// ===== sym.cleanup_module @ 0x08004324 (size 56) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    tracepoint_probe_unregister
              (__tracepoint_suspend_resume,sym.power_debug_suspend_trace_probe.0afb5b243f9db7aa7e269f3d6649a8f8.cfi_jt
               ,0);
    return;
}

