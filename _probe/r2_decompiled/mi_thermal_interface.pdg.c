// decompiled from mi_thermal_interface by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 432) =====

//WARNING: Switch with 1 destination removed at 0x080027dc

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x2ee0710dce68437c) {
            if (arg1 == -0x66d421a09845f9f8) {
                if ((pcVar1 + -0x80012b8 >> 3 | pcVar1 << 0x3d) < 0x1d) {
                    return;
                }
            }
            else if ((arg1 == -0x550b9e52359ac614) && ((pcVar1 + -0x80012a8 >> 3 | pcVar1 << 0x3d) < 2)) {
                return;
            }
            goto code_r0x0800279c;
        }
        if (arg1 == -0x2ee0710dce68437c) {
            pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
        }
        else {
            if (arg1 != 0x51c87a31c6197e) goto code_r0x0800279c;
            pcVar2 = sym.screen_state_for_thermal_callback.99fc359523b209be451fdf342158c360.cfi_jt;
        }
    }
    else if (arg1 < 0x7d57972cd3914fb1) {
        if (arg1 != 0x2b3a43e29242445) {
            if ((arg1 == 0x1e3d0ffe3d0499e9) && ((pcVar1 + -0x80011e0 >> 3 | pcVar1 << 0x3d) < 0x19)) {
                return;
            }
            goto code_r0x0800279c;
        }
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.usb_online_callback.99fc359523b209be451fdf342158c360.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800279c;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800279c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80027f0);
    (*pcVar1)();
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x080011b8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module.cfi_jt @ 0x080011c0 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    uint *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint *puVar4;
    uint32_t uVar5;
    code *pcVar6;
    uint32_t uVar7;
    int iVar8;
    int64_t iVar9;
    uint *puVar10;
    uint64_t uVar11;
    ulong uVar12;
    ulong *in_x7;
    ulong extraout_x8;
    int *piVar13;
    ulong extraout_x8_00;
    uint32_t *puVar14;
    ulong *in_x18;
    uint64_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    int64_t iVar18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = alloc_workqueue(0x80007a0,0xe000a,1,"screen_state_wq");
    if (_segment.ehdr != 0) {
        _obj.screen_state_dw = 0xfffffffe0;
        *0x8000160 = 0x8000160;
        *0x8000168 = 0x8000160;
        *0x8000170 = sym.screen_state_check.99fc359523b209be451fdf342158c360.cfi_jt;
        init_timer_key(obj.mi_thermal_dev_attr_group,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
        queue_delayed_work_on(0x20,_segment.ehdr,obj.screen_state_dw,0x4e2);
    }
    uVar7 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *in_x7 = extraout_x8;
    if (uVar7 < extraout_x8) {
code_r0x080028e0:
        uVar15 = uVar7;
        if (0x1f < uVar7) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x5512,0x8002e04);
            (*pcVar6)();
        }
        iVar18 = *(__per_cpu_offset + uVar15 * 8);
        iVar9 = cpufreq_cpu_get(uVar15);
        if (iVar9 == 0) {
            uVar12 = 0x8000abf;
            goto code_r0x08002af4;
        }
        _printk(0x80008cb,"cpu_thermal_init",uVar15);
        if (*(iVar9 + 400) != 0) {
            uVar7 = 0;
            piVar13 = *(iVar9 + 400) + 8;
            do {
                if (*piVar13 != -1) {
                    if (*piVar13 == -2) goto code_r0x08002954;
                    uVar7 = uVar7 + 1;
                }
                piVar13 = piVar13 + 3;
            } while( true );
        }
    }
code_r0x08002af8:
    iVar9 = of_find_node_by_name(0,0x8000767);
    if ((iVar9 == 0) || (iVar8 = of_property_read_string(iVar9,0x8000777,obj.cpufreq_dev_list), iVar8 != 0)) {
        _printk(0x8000a47,"mi_thermal_interface_init",0xffffffea);
    }
    else {
        _printk(0x8000a30,"of_parse_thermal_message",_segment.ehdr);
    }
    iVar9 = *(*(_of_parse_phandle + 0x30) + 8);
    if (iVar9 == 0) {
        uVar12 = 0x80009a0;
code_r0x08002c50:
        _printk(uVar12,"create_thermal_message_node");
    }
    else {
        iVar9 = kernfs_find_and_get_ns(iVar9,"class",0);
        if (iVar9 == 0) {
            uVar12 = 0x8000d23;
            goto code_r0x08002c50;
        }
        iVar9 = kernfs_find_and_get_ns(iVar9,"thermal",0);
        if (iVar9 == 0) {
            uVar12 = 0x80006c3;
            goto code_r0x08002c50;
        }
        if (*(iVar9 + 0x60) == 0) {
            uVar12 = 0x80006a3;
            goto code_r0x08002c50;
        }
        if ((_segment.ehdr == 0) && (iVar9 = *(*(iVar9 + 0x60) + 0x220), iVar9 != 0)) {
            *0x8000258 = iVar9;
            _obj.mi_thermal_dev = device_create(iVar9,0,0x48,0,"thermal_message");
            if (_obj.mi_thermal_dev == 0) {
                uVar12 = 0x8000bc1;
                goto code_r0x08002c50;
            }
            _reloc.thermal_temp_state_show.99fc359523b209be451fdf342158c360.cfi_jt = obj.mi_thermal_dev_attr_group;
            iVar8 = sysfs_create_group();
            if (iVar8 != 0) {
                _printk(0x8000c60,"create_thermal_message_node",iVar8);
            }
        }
    }
    iVar9 = of_find_node_by_name(0,"power_save");
    if (iVar9 == 0) {
        _printk(0x8000843,"mi_thermal_interface_init",0xffffffea);
    }
    iVar9 = *(*(_of_parse_phandle + 0x30) + 8);
    if (iVar9 == 0) {
        uVar12 = 0x80009a0;
    }
    else {
        iVar9 = kernfs_find_and_get_ns(iVar9,"class",0);
        if (iVar9 == 0) {
            uVar12 = 0x8000d23;
        }
        else {
            iVar9 = kernfs_find_and_get_ns(iVar9,"thermal",0);
            if (iVar9 == 0) {
                uVar12 = 0x80006c3;
            }
            else if (*(iVar9 + 0x60) == 0) {
                uVar12 = 0x80006a3;
            }
            else {
                if ((_segment.ehdr != 0) || (iVar9 = *(*(iVar9 + 0x60) + 0x220), iVar9 == 0)) goto code_r0x08002d88;
                _obj.dev_attr_ambient_sensor = iVar9;
                _reloc.thermal_modem_level_store.99fc359523b209be451fdf342158c360.cfi_jt =
                     device_create(iVar9,0,0x48,0,"power_save");
                if (_reloc.thermal_modem_level_store.99fc359523b209be451fdf342158c360.cfi_jt != 0) {
                    _obj.dev_attr_ambient_sensor_temp = obj.mi_powersave_dev_attr_group;
                    iVar8 = sysfs_create_group();
                    if (iVar8 != 0) {
                        _printk(0x8000c60,"create_mi_powersave_node",iVar8);
                    }
                    goto code_r0x08002d88;
                }
                uVar12 = 0x8000bc1;
            }
        }
    }
    _printk(uVar12,"create_mi_powersave_node");
code_r0x08002d88:
    *0x80001f8 = 0xfffffffe0;
    *0x8000200 = 0x8000200;
    *0x8000208 = 0x8000200;
    *0x8000210 = sym.usb_online_work.99fc359523b209be451fdf342158c360.cfi_jt;
    _obj.usb_state = sym.usb_online_callback.99fc359523b209be451fdf342158c360.cfi_jt;
    iVar8 = power_supply_reg_notifier();
    if (iVar8 < 0) {
        _printk(0x8000731,iVar8);
    }
    return 0;
code_r0x08002954:
    if (uVar7 != 0) {
        iVar2 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar2 = 0x30;
        }
        puVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x38);
        if (puVar10 != NULL) {
            *(puVar10 + 6) = iVar9;
            *(puVar10 + 0xc) = obj.qos_req + iVar18;
            puVar10[2] = uVar7 - 1;
            *puVar10 = *(iVar9 + 0x1c);
            iVar18 = __kmalloc(uVar7 << 2,0xcc0);
            *(puVar10 + 4) = iVar18;
            if (iVar18 != 0) {
                uVar7 = 0;
                uVar16 = 0xffffffff;
code_r0x080029c8:
                uVar17 = 0;
                puVar14 = *(iVar9 + 400) + 8;
                do {
                    uVar3 = *puVar14;
                    uVar5 = uVar17;
                    if (uVar3 != 0xffffffff) {
                        if (uVar3 == 0xfffffffe) goto code_r0x08002a00;
                        uVar5 = uVar3;
                        if (uVar16 <= uVar3 || uVar3 <= uVar17) {
                            uVar5 = uVar17;
                        }
                    }
                    uVar17 = uVar5;
                    puVar14 = puVar14 + 3;
                } while( true );
            }
            kfree(puVar10);
        }
    }
    goto code_r0x08002af8;
code_r0x08002a00:
    *(*(puVar10 + 4) + uVar7 * 4) = uVar17;
    if (uVar17 == 0) {
        _printk(0x80008d8,"cpu_thermal_init");
    }
    uVar7 = uVar7 + 1;
    uVar16 = uVar17;
    if (puVar10[2] < uVar7) goto code_r0x08002a30;
    goto code_r0x080029c8;
code_r0x08002a30:
    uVar7 = freq_qos_add_request(iVar9 + 0xa0,*(puVar10 + 0xc),2,**(puVar10 + 4));
    if (uVar7 < 0) {
        uVar15 = uVar7;
        kfree(*(puVar10 + 4));
        kfree(puVar10);
        uVar12 = 0x8000a06;
code_r0x08002af4:
        _printk(uVar12,"cpu_thermal_init",uVar15);
        goto code_r0x08002af8;
    }
    mutex_lock(obj.screen_state_dw);
    puVar4 = _obj.cpufreq_dev_list;
    puVar1 = puVar10 + 8;
    uVar11 = __list_add_valid(puVar1,obj.cpufreq_dev_list,_obj.cpufreq_dev_list);
    if ((uVar11 & 1) != 0) {
        *(puVar4 + 2) = puVar1;
        *(puVar10 + 8) = puVar4;
        *(puVar10 + 10) = obj.cpufreq_dev_list;
        _obj.cpufreq_dev_list = puVar1;
    }
    mutex_unlock(obj.screen_state_dw);
    uVar7 = cpumask_next(uVar15,__cpu_possible_mask);
    *in_x7 = extraout_x8_00;
    if (extraout_x8_00 <= uVar7) goto code_r0x08002af8;
    goto code_r0x080028e0;
}


// ===== sym.usb_online_callback.99fc359523b209be451fdf342158c360.cfi_jt @ 0x080011c8 (size 8) =====

ulong sym.usb_online_callback.99fc359523b209be451fdf342158c360.cfi_jt(ulong param_1,ulong param_2,ulong *param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = strcmp(**param_3,0x8000cda);
    if (iVar1 == 0) {
        queue_work_on(0x20,_delayed_work_timer_fn,0x80001f8);
    }
    return 1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011d0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        cancel_delayed_work_sync(obj.screen_state_dw);
        destroy_workqueue(_segment.ehdr);
    }
    if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
        _printk(0x8000d4b,"mi_thermal_interface_exit");
    }
    else {
        panel_event_notifier_unregister();
    }
    _printk(0x80009e4,"destroy_thermal_message_node");
    sysfs_remove_group(_obj.mi_thermal_dev,0x8000260);
    if (*0x8000258 != 0) {
        device_destroy(*0x8000258,0x48);
        _segment.ehdr = 0;
    }
    _printk(0x80006f8,"destroy_mi_powersave_node");
    sysfs_remove_group(_reloc.thermal_modem_level_store.99fc359523b209be451fdf342158c360.cfi_jt,0x8000550);
    if (_obj.dev_attr_ambient_sensor != 0) {
        device_destroy(_obj.dev_attr_ambient_sensor,0x48);
        _segment.ehdr = 0;
    }
    pcVar4 = _obj.cpufreq_dev_list;
    if (_obj.cpufreq_dev_list != obj.cpufreq_dev_list) {
        do {
            pcVar5 = *pcVar4;
            freq_qos_remove_request(*(pcVar4 + 0x10));
            uVar3 = __list_del_entry_valid(pcVar4);
            if ((uVar3 & 1) != 0) {
                iVar1 = *pcVar4;
                piVar2 = *(pcVar4 + 8);
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *pcVar4 = -0x2152ffffffffff00;
            *(pcVar4 + 8) = -0x2152fffffffffede;
            kfree(*(pcVar4 + -0x10));
            kfree(pcVar4 + -0x20);
            pcVar4 = pcVar5;
        } while (pcVar5 != obj.cpufreq_dev_list);
    }
    return;
}


// ===== sym.screen_state_for_thermal_callback.99fc359523b209be451fdf342158c360.cfi_jt @ 0x080011d8 (size 8) =====

void sym.screen_state_for_thermal_callback.99fc359523b209be451fdf342158c360.cfi_jt(int param_1,int *param_2)

{
    int iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == NULL) {
        _printk(0x8000985,"screen_state_for_thermal_callback");
    }
    else if (param_2[3] == '\0') {
        uVar2 = _segment.ehdr;
        if (param_1 == 1) {
            iVar1 = *param_2;
            if ((iVar1 == 1) || (iVar1 == 3)) {
                _segment.ehdr = _segment.ehdr & 2;
                uVar2 = _segment.ehdr;
            }
            else {
                if (iVar1 != 2) {
                    return;
                }
                _segment.ehdr = _segment.ehdr | 1;
                uVar2 = 1;
            }
        }
        obj.screen_state = uVar2 != 0;
        if (_segment.ehdr != obj.screen_state) {
            sysfs_notify(CONCAT44(*0x8000004,_segment.ehdr),0,"screen_state");
            _segment.ehdr = obj.screen_state;
        }
    }
    return;
}


// ===== sym.thermal_board_sensor_second_temp_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x080011e0 (size 8) =====

ulong sym.thermal_board_sensor_second_temp_store.99fc359523b209be451fdf342158c360.cfi_jt(void)

{
    ulong in_x3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snprintf(obj.board_sensor_second_temp,0x80);
    return in_x3;
}


// ===== sym.thermal_modem_level_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x080011e8 (size 8) =====

ulong sym.thermal_modem_level_store.99fc359523b209be451fdf342158c360.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(param_3,0,10);
    return param_4;
}


// ===== sym.thermal_charger_temp_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x080011f0 (size 8) =====

ulong sym.thermal_charger_temp_store.99fc359523b209be451fdf342158c360.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(param_3,0,10);
    return param_4;
}


// ===== sym.thermal_poor_modem_limit_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x080011f8 (size 8) =====

ulong sym.thermal_poor_modem_limit_store.99fc359523b209be451fdf342158c360.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(param_3,0,10);
    return param_4;
}


// ===== sym.thermal_temp_state_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001200 (size 8) =====

ulong sym.thermal_temp_state_store.99fc359523b209be451fdf342158c360.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(param_3,0,10);
    return param_4;
}


// ===== sym.thermal_market_download_limit_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001208 (size 8) =====

ulong sym.thermal_market_download_limit_store.99fc359523b209be451fdf342158c360.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(param_3,0,10);
    return param_4;
}


// ===== sym.voice_limit_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001210 (size 8) =====

ulong sym.voice_limit_store.99fc359523b209be451fdf342158c360.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(param_3,0,10);
    return param_4;
}


// ===== sym.thermal_balance_mode_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001218 (size 8) =====

ulong sym.thermal_balance_mode_store.99fc359523b209be451fdf342158c360.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(param_3,0,10);
    return param_4;
}


// ===== sym.thermal_flash_state_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001220 (size 8) =====

ulong sym.thermal_flash_state_store.99fc359523b209be451fdf342158c360.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(param_3,0,10);
    return param_4;
}


// ===== sym.thermal_powersave_mode_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001228 (size 8) =====

ulong sym.thermal_powersave_mode_store.99fc359523b209be451fdf342158c360.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(param_3,0,10);
    return param_4;
}


// ===== sym.thermal_board_sensor_other_temp_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001230 (size 8) =====

ulong sym.thermal_board_sensor_other_temp_store.99fc359523b209be451fdf342158c360.cfi_jt(void)

{
    ulong in_x3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snprintf(obj.board_sensor_other_temp,0x80);
    return in_x3;
}


// ===== sym.thermal_modem_rate_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001238 (size 8) =====

ulong sym.thermal_modem_rate_store.99fc359523b209be451fdf342158c360.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(param_3,0,10);
    return param_4;
}


// ===== sym.thermal_modem_limit_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001240 (size 8) =====

ulong sym.thermal_modem_limit_store.99fc359523b209be451fdf342158c360.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(param_3,0,10);
    return param_4;
}


// ===== sym.thermal_max_brightness_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001248 (size 8) =====

ulong sym.thermal_max_brightness_store.99fc359523b209be451fdf342158c360.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(param_3,0,10);
    return param_4;
}


// ===== sym.thermal_cpu_nolimit_temp_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001250 (size 8) =====

ulong sym.thermal_cpu_nolimit_temp_store.99fc359523b209be451fdf342158c360.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(param_3,0,10);
    return param_4;
}


// ===== sym.thermal_torch_real_level_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001258 (size 8) =====

ulong sym.thermal_torch_real_level_store.99fc359523b209be451fdf342158c360.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(param_3,0,10);
    return param_4;
}


// ===== sym.thermal_wifi_limit_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001260 (size 8) =====

ulong sym.thermal_wifi_limit_store.99fc359523b209be451fdf342158c360.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(param_3,0,10);
    return param_4;
}


// ===== sym.cpu_limits_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001268 (size 8) =====

int64_t sym.cpu_limits_store.99fc359523b209be451fdf342158c360.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    code *pcVar4;
    uint32_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iVar3 = &uStack_30 + 4;
    uStack_30 = 0;
    iVar2 = sscanf(param_3,"cpu%u %u",iVar3,&uStack_30);
    if (iVar2 == 2) {
        if (_obj.cpufreq_dev_list != obj.cpufreq_dev_list) {
            pcVar4 = _obj.cpufreq_dev_list;
            do {
                if (*(pcVar4 + -0x20) == uStack_30._4_4_) {
                    uVar5 = 0;
                    goto code_r0x080018f4;
                }
                pcVar4 = *pcVar4;
            } while (pcVar4 != obj.cpufreq_dev_list);
        }
    }
    else {
        _printk(0x800066a);
        param_4 = -0x16;
    }
    goto code_r0x0800194c;
    while (uVar5 = uVar5 + 1, uVar5 <= *(pcVar4 + -0x18)) {
code_r0x080018f4:
        if (*(*(pcVar4 + -0x10) + uVar5 * 4) <= uStack_30) {
            if (*(pcVar4 + -0x18) < uVar5) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x8001980);
                (*pcVar4)();
            }
            if (*(pcVar4 + -0x1c) != uVar5) {
                *(pcVar4 + -0x1c) = uVar5;
                freq_qos_update_request(*(pcVar4 + 0x10),*(*(pcVar4 + -0x10) + uVar5 * 4));
            }
            break;
        }
    }
code_r0x0800194c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        __stack_chk_fail();
        *extraout_x18 = sym.thermal_sconfig_show;
        iVar2 = snprintf(iVar3,0x1000,0x80009b8,_obj.switch_mode);
        return iVar2;
    }
    return param_4;
}


// ===== sym.thermal_sconfig_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001270 (size 8) =====

ulong sym.thermal_sconfig_store.99fc359523b209be451fdf342158c360.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(param_3,0,10);
    return param_4;
}


// ===== sym.thermal_boost_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001278 (size 8) =====

ulong sym.thermal_boost_store.99fc359523b209be451fdf342158c360.cfi_jt(void)

{
    ulong in_x3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snprintf(obj.boost_buf,0x80);
    return in_x3;
}


// ===== sym.thermal_board_sensor_temp_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001280 (size 8) =====

ulong sym.thermal_board_sensor_temp_store.99fc359523b209be451fdf342158c360.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snprintf(obj.board_sensor_temp,0x80);
    iVar1 = simple_strtol(param_3,0,10);
    iVar1 = charger_notifier_call_chain(0,iVar1 / 100);
    if (iVar1 != 0) {
        _printk(0x80007b7,"thermal_board_sensor_temp_store",iVar1);
    }
    return param_4;
}


// ===== sym.thermal_torch_level_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001288 (size 8) =====

ulong sym.thermal_torch_level_store.99fc359523b209be451fdf342158c360.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(param_3,0,10);
    return param_4;
}


// ===== sym.thermal_ambient_sensor_temp_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001290 (size 8) =====

ulong sym.thermal_ambient_sensor_temp_store.99fc359523b209be451fdf342158c360.cfi_jt(void)

{
    ulong in_x3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snprintf(reloc.thermal_board_sensor_temp_comp_store.99fc359523b209be451fdf342158c360.cfi_jt,0x80);
    return in_x3;
}


// ===== sym.thermal_board_sensor_temp_comp_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001298 (size 8) =====

ulong sym.thermal_board_sensor_temp_comp_store.99fc359523b209be451fdf342158c360.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(param_3,0,10);
    return param_4;
}


// ===== sym.thermal_power_level_store.99fc359523b209be451fdf342158c360.cfi_jt @ 0x080012a0 (size 8) =====

ulong sym.thermal_power_level_store.99fc359523b209be451fdf342158c360.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(param_3,0,10);
    return param_4;
}


// ===== sym.usb_online_work.99fc359523b209be451fdf342158c360.cfi_jt @ 0x080012a8 (size 8) =====

ulong sym.usb_online_work.99fc359523b209be451fdf342158c360.cfi_jt(ulong param_1,ulong param_2,char *param_3)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    pcVar4 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    if (_segment.ehdr == 0) {
        _segment.ehdr = power_supply_get_by_name(0x8000cda);
        uVar3 = 0;
        if (_segment.ehdr == 0) goto code_r0x08001648;
    }
    iVar2 = power_supply_get_property(_segment.ehdr,4);
    iVar1 = _segment.ehdr;
    if (iVar2 == 0) {
        _segment.ehdr = CONCAT44(*0x8000004,uStack_30);
        uVar3 = 0;
        param_3 = pcVar4;
        if (iVar1 != 0) {
            param_3 = "usb_online";
            uVar3 = sysfs_notify(iVar1,0);
        }
    }
    else {
        uVar3 = _printk(0x80007fb,iVar2);
        param_3 = pcVar4;
    }
code_r0x08001648:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.usb_online_callback;
    iVar2 = strcmp(**param_3,0x8000cda);
    if (iVar2 == 0) {
        queue_work_on(0x20,_delayed_work_timer_fn,0x80001f8);
    }
    return 1;
}


// ===== sym.screen_state_check.99fc359523b209be451fdf342158c360.cfi_jt @ 0x080012b0 (size 8) =====

void sym.screen_state_check.99fc359523b209be451fdf342158c360.cfi_jt(void)

{
    uint64_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    int iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = of_find_node_by_name(0,"thermal-screen");
    if (iVar3 == 0) {
        uVar4 = 0x8000b26;
code_r0x08001530:
        _printk(uVar4,"screen_state_check");
    }
    else {
        iVar2 = of_count_phandle_with_args(iVar3,"panel",0);
        if (iVar2 < 1) {
joined_r0x08001558:
            if (_segment.ehdr != 0) {
                if (_segment.ehdr != 0) {
                    return;
                }
                _segment.ehdr =
                     panel_event_notifier_register
                               (1,3,0,sym.screen_state_for_thermal_callback.99fc359523b209be451fdf342158c360.cfi_jt,
                                0);
                if (_segment.ehdr < 0xfffffffffffff001) {
                    return;
                }
                uVar4 = 0x8000c10;
                goto code_r0x08001530;
            }
        }
        else {
            iVar5 = 0;
            do {
                of_parse_phandle(iVar3,"panel",iVar5);
                _segment.ehdr = of_drm_find_panel();
                if (_segment.ehdr < 0xfffffffffffff001) {
                    if (_segment.ehdr == 0xfffffffffffffdfb) {
                        _printk(0x8000959,"thermal_check_panel");
                    }
                    goto joined_r0x08001558;
                }
                iVar5 = iVar5 + 1;
                _segment.ehdr = 0;
            } while (iVar2 != iVar5);
        }
        if (0 < _segment.ehdr) {
            _printk(0x800088e,"screen_state_check");
            uVar1 = _segment.ehdr;
            _segment.ehdr = CONCAT44(*0x8000004,_segment.ehdr + -1);
            queue_delayed_work_on(0x20,uVar1,obj.screen_state_dw,0x4e2);
        }
    }
    return;
}


// ===== sym.thermal_temp_state_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x080012b8 (size 8) =====

int64_t sym.thermal_temp_state_show.99fc359523b209be451fdf342158c360.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x80009b8,_obj.temp_state);
    return iVar1;
}


// ===== sym.thermal_wifi_limit_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x080012c0 (size 8) =====

int64_t sym.thermal_wifi_limit_show.99fc359523b209be451fdf342158c360.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x80009b8,_obj.wifi_limit);
    return iVar1;
}


// ===== sym.thermal_modem_level_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x080012c8 (size 8) =====

int64_t sym.thermal_modem_level_show.99fc359523b209be451fdf342158c360.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x80009b8,_obj.modem_level);
    return iVar1;
}


// ===== sym.thermal_board_sensor_other_temp_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x080012d0 (size 8) =====

int64_t sym.thermal_board_sensor_other_temp_show.99fc359523b209be451fdf342158c360.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,obj.board_sensor_other_temp);
    return iVar1;
}


// ===== sym.thermal_board_sensor_second_temp_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x080012d8 (size 8) =====

int64_t sym.thermal_board_sensor_second_temp_show.99fc359523b209be451fdf342158c360.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,obj.board_sensor_second_temp);
    return iVar1;
}


// ===== sym.thermal_power_level_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x080012e0 (size 8) =====

int64_t sym.thermal_power_level_show.99fc359523b209be451fdf342158c360.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x80009b8,_obj.power_level);
    return iVar1;
}


// ===== sym.thermal_board_sensor_temp_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x080012e8 (size 8) =====

int64_t sym.thermal_board_sensor_temp_show.99fc359523b209be451fdf342158c360.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,obj.board_sensor_temp);
    return iVar1;
}


// ===== sym.thermal_sconfig_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x080012f0 (size 8) =====

int64_t sym.thermal_sconfig_show.99fc359523b209be451fdf342158c360.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x80009b8,_obj.switch_mode);
    return iVar1;
}


// ===== sym.thermal_torch_real_level_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x080012f8 (size 8) =====

int64_t sym.thermal_torch_real_level_show.99fc359523b209be451fdf342158c360.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x80009b8,_obj.torch_real_level);
    return iVar1;
}


// ===== sym.voice_limit_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001300 (size 8) =====

int64_t sym.voice_limit_show.99fc359523b209be451fdf342158c360.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x80009b8,_obj.voice_limit);
    return iVar1;
}


// ===== sym.thermal_board_sensor_temp_comp_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001308 (size 8) =====

int64_t sym.thermal_board_sensor_temp_comp_show.99fc359523b209be451fdf342158c360.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x80009b8,_obj.board_sensor_temp_comp_default);
    return iVar1;
}


// ===== sym.thermal_cpu_nolimit_temp_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001310 (size 8) =====

int64_t sym.thermal_cpu_nolimit_temp_show.99fc359523b209be451fdf342158c360.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x80009b8,_obj.cpu_nolimit_temp_default);
    return iVar1;
}


// ===== sym.cpu_limits_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001318 (size 8) =====

ulong sym.cpu_limits_show.99fc359523b209be451fdf342158c360.cfi_jt(void)

{
    return 0;
}


// ===== sym.thermal_max_brightness_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001320 (size 8) =====

int64_t sym.thermal_max_brightness_show.99fc359523b209be451fdf342158c360.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x80009b8,
                     _reloc.thermal_market_download_limit_store.99fc359523b209be451fdf342158c360.cfi_jt);
    return iVar1;
}


// ===== sym.thermal_ambient_sensor_temp_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001328 (size 8) =====

int64_t sym.thermal_ambient_sensor_temp_show.99fc359523b209be451fdf342158c360.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,reloc.thermal_board_sensor_temp_comp_store.99fc359523b209be451fdf342158c360.cfi_jt
                    );
    return iVar1;
}


// ===== sym.thermal_boost_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001330 (size 8) =====

int64_t sym.thermal_boost_show.99fc359523b209be451fdf342158c360.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,obj.boost_buf);
    return iVar1;
}


// ===== sym.thermal_usb_online_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001338 (size 8) =====

int64_t sym.thermal_usb_online_show.99fc359523b209be451fdf342158c360.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x80009b8,_segment.ehdr);
    return iVar1;
}


// ===== sym.thermal_balance_mode_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001340 (size 8) =====

int64_t sym.thermal_balance_mode_show.99fc359523b209be451fdf342158c360.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x80009b8,_obj.balance_mode);
    return iVar1;
}


// ===== sym.thermal_modem_limit_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001348 (size 8) =====

int64_t sym.thermal_modem_limit_show.99fc359523b209be451fdf342158c360.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x80009b8,_obj.modem_limit);
    return iVar1;
}


// ===== sym.thermal_modem_rate_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001350 (size 8) =====

int64_t sym.thermal_modem_rate_show.99fc359523b209be451fdf342158c360.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x80009b8,
                     _reloc.thermal_board_sensor_temp_comp_show.99fc359523b209be451fdf342158c360.cfi_jt);
    return iVar1;
}


// ===== sym.thermal_market_download_limit_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001358 (size 8) =====

int64_t sym.thermal_market_download_limit_show.99fc359523b209be451fdf342158c360.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x80009b8,_obj.market_download_limit);
    return iVar1;
}


// ===== sym.thermal_charger_temp_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001360 (size 8) =====

int64_t sym.thermal_charger_temp_show.99fc359523b209be451fdf342158c360.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x80009b8,_obj.charger_mode);
    return iVar1;
}


// ===== sym.thermal_flash_state_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001368 (size 8) =====

int64_t sym.thermal_flash_state_show.99fc359523b209be451fdf342158c360.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x80009b8,
                     _reloc.thermal_market_download_limit_show.99fc359523b209be451fdf342158c360.cfi_jt);
    return iVar1;
}


// ===== sym.thermal_board_sensor_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001370 (size 8) =====

int64_t sym.thermal_board_sensor_show.99fc359523b209be451fdf342158c360.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == NULL) {
        _segment.ehdr = "invalid";
    }
    iVar1 = snprintf(param_3,0x1000,0x80007a0);
    return iVar1;
}


// ===== sym.thermal_screen_state_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001378 (size 8) =====

int64_t sym.thermal_screen_state_show.99fc359523b209be451fdf342158c360.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x80009b8,obj.screen_state);
    return iVar1;
}


// ===== sym.thermal_torch_level_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001380 (size 8) =====

int64_t sym.thermal_torch_level_show.99fc359523b209be451fdf342158c360.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x80009b8,_obj.torch_level);
    return iVar1;
}


// ===== sym.thermal_poor_modem_limit_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001388 (size 8) =====

int64_t sym.thermal_poor_modem_limit_show.99fc359523b209be451fdf342158c360.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x80009b8,_obj.poor_modem_limit);
    return iVar1;
}


// ===== sym.thermal_powersave_mode_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001390 (size 8) =====

int64_t sym.thermal_powersave_mode_show.99fc359523b209be451fdf342158c360.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x80009b8,_obj.powersave_mode);
    return iVar1;
}


// ===== sym.thermal_ambient_sensor_show.99fc359523b209be451fdf342158c360.cfi_jt @ 0x08001398 (size 8) =====

ulong sym.thermal_ambient_sensor_show.99fc359523b209be451fdf342158c360.cfi_jt
                (ulong param_1,ulong param_2,char *param_3)

{
    ulong uVar1;
    
    uVar1 = str.ABT_SENSOR._0_8_;
    param_3[7] = 'S';
    param_3[8] = 'O';
    param_3[9] = 'R';
    param_3[10] = '\0';
    *param_3 = uVar1;
    return 10;
}


// ===== sym.cpu_limits_set_level @ 0x080013a0 (size 164) =====

void sym.cpu_limits_set_level(uint32_t arg1,uint32_t arg2)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _obj.cpufreq_dev_list;
    if (_obj.cpufreq_dev_list == obj.cpufreq_dev_list) {
        return;
    }
    while (*(pcVar1 + -0x20) != arg1) {
        pcVar1 = *pcVar1;
        if (pcVar1 == obj.cpufreq_dev_list) {
            return;
        }
    }
    uVar2 = 0;
    while (arg2 < *(*(pcVar1 + -0x10) + uVar2 * 4)) {
        uVar2 = uVar2 + 1;
        if (*(pcVar1 + -0x18) < uVar2) {
            return;
        }
    }
    if (*(pcVar1 + -0x18) < uVar2) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8001444);
        (*pcVar1)();
    }
    if (*(pcVar1 + -0x1c) == uVar2) {
        return;
    }
    *(pcVar1 + -0x1c) = uVar2;
    freq_qos_update_request(*(pcVar1 + 0x10),*(*(pcVar1 + -0x10) + uVar2 * 4));
    return;
}


// ===== sym.screen_state_check @ 0x08001448 (size 384) =====

void sym.screen_state_check(void)

{
    uint64_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    int iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = of_find_node_by_name(0,"thermal-screen");
    if (iVar3 == 0) {
        uVar4 = 0x8000b26;
code_r0x08001530:
        _printk(uVar4,"screen_state_check");
    }
    else {
        iVar2 = of_count_phandle_with_args(iVar3,"panel",0);
        if (iVar2 < 1) {
joined_r0x08001558:
            if (_segment.ehdr != 0) {
                if (_segment.ehdr != 0) {
                    return;
                }
                _segment.ehdr =
                     panel_event_notifier_register
                               (1,3,0,sym.screen_state_for_thermal_callback.99fc359523b209be451fdf342158c360.cfi_jt,
                                0);
                if (_segment.ehdr < 0xfffffffffffff001) {
                    return;
                }
                uVar4 = 0x8000c10;
                goto code_r0x08001530;
            }
        }
        else {
            iVar5 = 0;
            do {
                of_parse_phandle(iVar3,"panel",iVar5);
                _segment.ehdr = of_drm_find_panel();
                if (_segment.ehdr < 0xfffffffffffff001) {
                    if (_segment.ehdr == 0xfffffffffffffdfb) {
                        _printk(0x8000959,"thermal_check_panel");
                    }
                    goto joined_r0x08001558;
                }
                iVar5 = iVar5 + 1;
                _segment.ehdr = 0;
            } while (iVar2 != iVar5);
        }
        if (0 < _segment.ehdr) {
            _printk(0x800088e,"screen_state_check");
            uVar1 = _segment.ehdr;
            _segment.ehdr = CONCAT44(*0x8000004,_segment.ehdr + -1);
            queue_delayed_work_on(0x20,uVar1,obj.screen_state_dw,0x4e2);
        }
    }
    return;
}


// ===== sym.usb_online_work @ 0x080015c8 (size 196) =====

ulong sym.usb_online_work(ulong param_1,ulong param_2,char *param_3)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    pcVar4 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    if (_segment.ehdr == 0) {
        _segment.ehdr = power_supply_get_by_name(0x8000cda);
        uVar3 = 0;
        if (_segment.ehdr == 0) goto code_r0x08001648;
    }
    iVar2 = power_supply_get_property(_segment.ehdr,4);
    iVar1 = _segment.ehdr;
    if (iVar2 == 0) {
        _segment.ehdr = CONCAT44(*0x8000004,uStack_30);
        uVar3 = 0;
        param_3 = pcVar4;
        if (iVar1 != 0) {
            param_3 = "usb_online";
            uVar3 = sysfs_notify(iVar1,0);
        }
    }
    else {
        uVar3 = _printk(0x80007fb,iVar2);
        param_3 = pcVar4;
    }
code_r0x08001648:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.usb_online_callback;
    iVar2 = strcmp(**param_3,0x8000cda);
    if (iVar2 == 0) {
        queue_work_on(0x20,_delayed_work_timer_fn,0x80001f8);
    }
    return 1;
}


// ===== sym.usb_online_callback @ 0x0800168c (size 84) =====

ulong sym.usb_online_callback(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = strcmp(**arg1,0x8000cda);
    if (iVar1 == 0) {
        queue_work_on(0x20,_delayed_work_timer_fn,0x80001f8);
    }
    return 1;
}


// ===== sym.screen_state_for_thermal_callback @ 0x080016e0 (size 228) =====

void sym.screen_state_for_thermal_callback(uint32_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        _printk(0x8000985,"screen_state_for_thermal_callback");
    }
    else if (*(arg2 + 0xc) == '\0') {
        uVar2 = _segment.ehdr;
        if (arg1 == 1) {
            iVar1 = *arg2;
            if ((iVar1 == 1) || (iVar1 == 3)) {
                _segment.ehdr = _segment.ehdr & 2;
                uVar2 = _segment.ehdr;
            }
            else {
                if (iVar1 != 2) {
                    return;
                }
                _segment.ehdr = _segment.ehdr | 1;
                uVar2 = 1;
            }
        }
        obj.screen_state = uVar2 != 0;
        if (_segment.ehdr != obj.screen_state) {
            sysfs_notify(CONCAT44(*0x8000004,_segment.ehdr),0,"screen_state");
            _segment.ehdr = obj.screen_state;
        }
    }
    return;
}


// ===== sym.thermal_temp_state_show @ 0x080017c4 (size 68) =====

int64_t sym.thermal_temp_state_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x80009b8,_obj.temp_state);
    return iVar1;
}


// ===== sym.thermal_temp_state_store @ 0x0800180c (size 76) =====

int64_t sym.thermal_temp_state_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(arg1,0,10);
    return arg2;
}


// ===== sym.cpu_limits_show @ 0x08001858 (size 16) =====

ulong sym.cpu_limits_show(void)

{
    return 0;
}


// ===== sym.cpu_limits_store @ 0x08001868 (size 288) =====

int64_t sym.cpu_limits_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    code *pcVar4;
    uint32_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iVar3 = &uStack_30 + 4;
    uStack_30 = 0;
    iVar2 = sscanf(arg1,"cpu%u %u",iVar3,&uStack_30);
    if (iVar2 == 2) {
        if (_obj.cpufreq_dev_list != obj.cpufreq_dev_list) {
            pcVar4 = _obj.cpufreq_dev_list;
            do {
                if (*(pcVar4 + -0x20) == uStack_30._4_4_) {
                    uVar5 = 0;
                    goto code_r0x080018f4;
                }
                pcVar4 = *pcVar4;
            } while (pcVar4 != obj.cpufreq_dev_list);
        }
    }
    else {
        _printk(0x800066a);
        arg2 = -0x16;
    }
    goto code_r0x0800194c;
    while (uVar5 = uVar5 + 1, uVar5 <= *(pcVar4 + -0x18)) {
code_r0x080018f4:
        if (*(*(pcVar4 + -0x10) + uVar5 * 4) <= uStack_30) {
            if (*(pcVar4 + -0x18) < uVar5) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x8001980);
                (*pcVar4)();
            }
            if (*(pcVar4 + -0x1c) != uVar5) {
                *(pcVar4 + -0x1c) = uVar5;
                freq_qos_update_request(*(pcVar4 + 0x10),*(*(pcVar4 + -0x10) + uVar5 * 4));
            }
            break;
        }
    }
code_r0x0800194c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        __stack_chk_fail();
        *extraout_x18 = sym.thermal_sconfig_show;
        iVar2 = snprintf(iVar3,0x1000,0x80009b8,_obj.switch_mode);
        return iVar2;
    }
    return arg2;
}


// ===== sym.thermal_sconfig_show @ 0x08001988 (size 68) =====

int64_t sym.thermal_sconfig_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x80009b8,_obj.switch_mode);
    return iVar1;
}


// ===== sym.thermal_sconfig_store @ 0x080019d0 (size 76) =====

int64_t sym.thermal_sconfig_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(arg1,0,10);
    return arg2;
}


// ===== sym.thermal_screen_state_show @ 0x08001a1c (size 64) =====

int64_t sym.thermal_screen_state_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x80009b8,obj.screen_state);
    return iVar1;
}


// ===== sym.thermal_boost_show @ 0x08001a5c (size 56) =====

int64_t sym.thermal_boost_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,obj.boost_buf);
    return iVar1;
}


// ===== sym.thermal_boost_store @ 0x08001a94 (size 64) =====

int64_t sym.thermal_boost_store(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snprintf(obj.boost_buf,0x80);
    return arg1;
}


// ===== sym.thermal_board_sensor_show @ 0x08001ad4 (size 80) =====

int64_t sym.thermal_board_sensor_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == NULL) {
        _segment.ehdr = "invalid";
    }
    iVar1 = snprintf(arg1,0x1000,0x80007a0);
    return iVar1;
}


// ===== sym.thermal_board_sensor_temp_show @ 0x08001b24 (size 56) =====

int64_t sym.thermal_board_sensor_temp_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,obj.board_sensor_temp);
    return iVar1;
}


// ===== sym.thermal_board_sensor_temp_store @ 0x08001b5c (size 148) =====

int64_t sym.thermal_board_sensor_temp_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snprintf(obj.board_sensor_temp,0x80);
    iVar1 = simple_strtol(arg1,0,10);
    iVar1 = charger_notifier_call_chain(0,iVar1 / 100);
    if (iVar1 != 0) {
        _printk(0x80007b7,"thermal_board_sensor_temp_store",iVar1);
    }
    return arg2;
}


// ===== sym.thermal_board_sensor_second_temp_show @ 0x08001bf0 (size 56) =====

int64_t sym.thermal_board_sensor_second_temp_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,obj.board_sensor_second_temp);
    return iVar1;
}


// ===== sym.thermal_board_sensor_second_temp_store @ 0x08001c28 (size 64) =====

int64_t sym.thermal_board_sensor_second_temp_store(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snprintf(obj.board_sensor_second_temp,0x80);
    return arg1;
}


// ===== sym.thermal_board_sensor_other_temp_show @ 0x08001c68 (size 56) =====

int64_t sym.thermal_board_sensor_other_temp_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,obj.board_sensor_other_temp);
    return iVar1;
}


// ===== sym.thermal_board_sensor_other_temp_store @ 0x08001ca0 (size 64) =====

int64_t sym.thermal_board_sensor_other_temp_store(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snprintf(obj.board_sensor_other_temp,0x80);
    return arg1;
}


// ===== sym.thermal_balance_mode_show @ 0x08001ce0 (size 68) =====

int64_t sym.thermal_balance_mode_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x80009b8,_obj.balance_mode);
    return iVar1;
}


// ===== sym.thermal_balance_mode_store @ 0x08001d28 (size 76) =====

int64_t sym.thermal_balance_mode_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(arg1,0,10);
    return arg2;
}


// ===== sym.thermal_modem_limit_show @ 0x08001d74 (size 68) =====

int64_t sym.thermal_modem_limit_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x80009b8,_obj.modem_limit);
    return iVar1;
}


// ===== sym.thermal_modem_limit_store @ 0x08001dbc (size 76) =====

int64_t sym.thermal_modem_limit_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(arg1,0,10);
    return arg2;
}


// ===== sym.thermal_wifi_limit_show @ 0x08001e08 (size 68) =====

int64_t sym.thermal_wifi_limit_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x80009b8,_obj.wifi_limit);
    return iVar1;
}


// ===== sym.thermal_wifi_limit_store @ 0x08001e50 (size 76) =====

int64_t sym.thermal_wifi_limit_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(arg1,0,10);
    return arg2;
}


// ===== sym.thermal_flash_state_show @ 0x08001e9c (size 68) =====

int64_t sym.thermal_flash_state_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x80009b8,
                     _reloc.thermal_market_download_limit_show.99fc359523b209be451fdf342158c360.cfi_jt);
    return iVar1;
}


// ===== sym.thermal_flash_state_store @ 0x08001ee4 (size 76) =====

int64_t sym.thermal_flash_state_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(arg1,0,10);
    return arg2;
}


// ===== sym.thermal_torch_level_show @ 0x08001f30 (size 68) =====

int64_t sym.thermal_torch_level_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x80009b8,_obj.torch_level);
    return iVar1;
}


// ===== sym.thermal_torch_level_store @ 0x08001f78 (size 76) =====

int64_t sym.thermal_torch_level_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(arg1,0,10);
    return arg2;
}


// ===== sym.thermal_torch_real_level_show @ 0x08001fc4 (size 68) =====

int64_t sym.thermal_torch_real_level_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x80009b8,_obj.torch_real_level);
    return iVar1;
}


// ===== sym.thermal_torch_real_level_store @ 0x0800200c (size 76) =====

int64_t sym.thermal_torch_real_level_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(arg1,0,10);
    return arg2;
}


// ===== sym.thermal_max_brightness_show @ 0x08002058 (size 68) =====

int64_t sym.thermal_max_brightness_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x80009b8,
                     _reloc.thermal_market_download_limit_store.99fc359523b209be451fdf342158c360.cfi_jt);
    return iVar1;
}


// ===== sym.thermal_max_brightness_store @ 0x080020a0 (size 76) =====

int64_t sym.thermal_max_brightness_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(arg1,0,10);
    return arg2;
}


// ===== sym.voice_limit_show @ 0x080020ec (size 68) =====

int64_t sym.voice_limit_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x80009b8,_obj.voice_limit);
    return iVar1;
}


// ===== sym.voice_limit_store @ 0x08002134 (size 76) =====

int64_t sym.voice_limit_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(arg1,0,10);
    return arg2;
}


// ===== sym.thermal_market_download_limit_show @ 0x08002180 (size 68) =====

int64_t sym.thermal_market_download_limit_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x80009b8,_obj.market_download_limit);
    return iVar1;
}


// ===== sym.thermal_market_download_limit_store @ 0x080021c8 (size 76) =====

int64_t sym.thermal_market_download_limit_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(arg1,0,10);
    return arg2;
}


// ===== sym.thermal_board_sensor_temp_comp_show @ 0x08002214 (size 68) =====

int64_t sym.thermal_board_sensor_temp_comp_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x80009b8,_obj.board_sensor_temp_comp_default);
    return iVar1;
}


// ===== sym.thermal_board_sensor_temp_comp_store @ 0x0800225c (size 76) =====

int64_t sym.thermal_board_sensor_temp_comp_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(arg1,0,10);
    return arg2;
}


// ===== sym.thermal_poor_modem_limit_show @ 0x080022a8 (size 68) =====

int64_t sym.thermal_poor_modem_limit_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x80009b8,_obj.poor_modem_limit);
    return iVar1;
}


// ===== sym.thermal_poor_modem_limit_store @ 0x080022f0 (size 76) =====

int64_t sym.thermal_poor_modem_limit_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(arg1,0,10);
    return arg2;
}


// ===== sym.thermal_cpu_nolimit_temp_show @ 0x0800233c (size 68) =====

int64_t sym.thermal_cpu_nolimit_temp_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x80009b8,_obj.cpu_nolimit_temp_default);
    return iVar1;
}


// ===== sym.thermal_cpu_nolimit_temp_store @ 0x08002384 (size 76) =====

int64_t sym.thermal_cpu_nolimit_temp_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(arg1,0,10);
    return arg2;
}


// ===== sym.thermal_modem_rate_show @ 0x080023d0 (size 68) =====

int64_t sym.thermal_modem_rate_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x80009b8,
                     _reloc.thermal_board_sensor_temp_comp_show.99fc359523b209be451fdf342158c360.cfi_jt);
    return iVar1;
}


// ===== sym.thermal_modem_rate_store @ 0x08002418 (size 76) =====

int64_t sym.thermal_modem_rate_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(arg1,0,10);
    return arg2;
}


// ===== sym.thermal_modem_level_show @ 0x08002464 (size 68) =====

int64_t sym.thermal_modem_level_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x80009b8,_obj.modem_level);
    return iVar1;
}


// ===== sym.thermal_modem_level_store @ 0x080024ac (size 76) =====

int64_t sym.thermal_modem_level_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(arg1,0,10);
    return arg2;
}


// ===== sym.thermal_ambient_sensor_show @ 0x080024f8 (size 44) =====

ulong sym.thermal_ambient_sensor_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong uVar1;
    
    uVar1 = str.ABT_SENSOR._0_8_;
    *(arg1 + 7) = 0x524f53;
    *arg1 = uVar1;
    return 10;
}


// ===== sym.thermal_ambient_sensor_temp_show @ 0x08002524 (size 56) =====

int64_t sym.thermal_ambient_sensor_temp_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,reloc.thermal_board_sensor_temp_comp_store.99fc359523b209be451fdf342158c360.cfi_jt);
    return iVar1;
}


// ===== sym.thermal_ambient_sensor_temp_store @ 0x0800255c (size 64) =====

int64_t sym.thermal_ambient_sensor_temp_store(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snprintf(reloc.thermal_board_sensor_temp_comp_store.99fc359523b209be451fdf342158c360.cfi_jt,0x80);
    return arg1;
}


// ===== sym.thermal_charger_temp_show @ 0x0800259c (size 68) =====

int64_t sym.thermal_charger_temp_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x80009b8,_obj.charger_mode);
    return iVar1;
}


// ===== sym.thermal_charger_temp_store @ 0x080025e4 (size 76) =====

int64_t sym.thermal_charger_temp_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(arg1,0,10);
    return arg2;
}


// ===== sym.thermal_usb_online_show @ 0x08002630 (size 64) =====

int64_t sym.thermal_usb_online_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x80009b8,_segment.ehdr);
    return iVar1;
}


// ===== sym.thermal_powersave_mode_show @ 0x08002670 (size 68) =====

int64_t sym.thermal_powersave_mode_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x80009b8,_obj.powersave_mode);
    return iVar1;
}


// ===== sym.thermal_powersave_mode_store @ 0x080026b8 (size 76) =====

int64_t sym.thermal_powersave_mode_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(arg1,0,10);
    return arg2;
}


// ===== sym.thermal_power_level_show @ 0x08002704 (size 68) =====

int64_t sym.thermal_power_level_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x80009b8,_obj.power_level);
    return iVar1;
}


// ===== sym.thermal_power_level_store @ 0x0800274c (size 76) =====

int64_t sym.thermal_power_level_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = simple_strtol(arg1,0,10);
    return arg2;
}


// ===== sym.__cfi_check_fail @ 0x08002798 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080027dc

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
    //switch table (4 cases) at 0x8000d95
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80027f0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080027f4 (size 1552) =====

ulong sym.init_module(void)

{
    uint *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint *puVar4;
    uint32_t uVar5;
    code *pcVar6;
    uint32_t uVar7;
    int iVar8;
    int64_t iVar9;
    uint *puVar10;
    uint64_t uVar11;
    ulong uVar12;
    ulong *in_x7;
    ulong extraout_x8;
    int *piVar13;
    ulong extraout_x8_00;
    uint32_t *puVar14;
    ulong *in_x18;
    uint64_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    int64_t iVar18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = alloc_workqueue(0x80007a0,0xe000a,1,"screen_state_wq");
    if (_segment.ehdr != 0) {
        _obj.screen_state_dw = 0xfffffffe0;
        *0x8000160 = 0x8000160;
        *0x8000168 = 0x8000160;
        *0x8000170 = sym.screen_state_check.99fc359523b209be451fdf342158c360.cfi_jt;
        init_timer_key(obj.mi_thermal_dev_attr_group,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
        queue_delayed_work_on(0x20,_segment.ehdr,obj.screen_state_dw,0x4e2);
    }
    uVar7 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *in_x7 = extraout_x8;
    if (uVar7 < extraout_x8) {
code_r0x080028e0:
        uVar15 = uVar7;
        if (0x1f < uVar7) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x5512,0x8002e04);
            (*pcVar6)();
        }
        iVar18 = *(__per_cpu_offset + uVar15 * 8);
        iVar9 = cpufreq_cpu_get(uVar15);
        if (iVar9 == 0) {
            uVar12 = 0x8000abf;
            goto code_r0x08002af4;
        }
        _printk(0x80008cb,"cpu_thermal_init",uVar15);
        if (*(iVar9 + 400) != 0) {
            uVar7 = 0;
            piVar13 = *(iVar9 + 400) + 8;
            do {
                if (*piVar13 != -1) {
                    if (*piVar13 == -2) goto code_r0x08002954;
                    uVar7 = uVar7 + 1;
                }
                piVar13 = piVar13 + 3;
            } while( true );
        }
    }
code_r0x08002af8:
    iVar9 = of_find_node_by_name(0,0x8000767);
    if ((iVar9 == 0) || (iVar8 = of_property_read_string(iVar9,0x8000777,obj.cpufreq_dev_list), iVar8 != 0)) {
        _printk(0x8000a47,"mi_thermal_interface_init",0xffffffea);
    }
    else {
        _printk(0x8000a30,"of_parse_thermal_message",_segment.ehdr);
    }
    iVar9 = *(*(_of_parse_phandle + 0x30) + 8);
    if (iVar9 == 0) {
        uVar12 = 0x80009a0;
code_r0x08002c50:
        _printk(uVar12,"create_thermal_message_node");
    }
    else {
        iVar9 = kernfs_find_and_get_ns(iVar9,"class",0);
        if (iVar9 == 0) {
            uVar12 = 0x8000d23;
            goto code_r0x08002c50;
        }
        iVar9 = kernfs_find_and_get_ns(iVar9,"thermal",0);
        if (iVar9 == 0) {
            uVar12 = 0x80006c3;
            goto code_r0x08002c50;
        }
        if (*(iVar9 + 0x60) == 0) {
            uVar12 = 0x80006a3;
            goto code_r0x08002c50;
        }
        if ((_segment.ehdr == 0) && (iVar9 = *(*(iVar9 + 0x60) + 0x220), iVar9 != 0)) {
            *0x8000258 = iVar9;
            _obj.mi_thermal_dev = device_create(iVar9,0,0x48,0,"thermal_message");
            if (_obj.mi_thermal_dev == 0) {
                uVar12 = 0x8000bc1;
                goto code_r0x08002c50;
            }
            _reloc.thermal_temp_state_show.99fc359523b209be451fdf342158c360.cfi_jt = obj.mi_thermal_dev_attr_group;
            iVar8 = sysfs_create_group();
            if (iVar8 != 0) {
                _printk(0x8000c60,"create_thermal_message_node",iVar8);
            }
        }
    }
    iVar9 = of_find_node_by_name(0,"power_save");
    if (iVar9 == 0) {
        _printk(0x8000843,"mi_thermal_interface_init",0xffffffea);
    }
    iVar9 = *(*(_of_parse_phandle + 0x30) + 8);
    if (iVar9 == 0) {
        uVar12 = 0x80009a0;
    }
    else {
        iVar9 = kernfs_find_and_get_ns(iVar9,"class",0);
        if (iVar9 == 0) {
            uVar12 = 0x8000d23;
        }
        else {
            iVar9 = kernfs_find_and_get_ns(iVar9,"thermal",0);
            if (iVar9 == 0) {
                uVar12 = 0x80006c3;
            }
            else if (*(iVar9 + 0x60) == 0) {
                uVar12 = 0x80006a3;
            }
            else {
                if ((_segment.ehdr != 0) || (iVar9 = *(*(iVar9 + 0x60) + 0x220), iVar9 == 0)) goto code_r0x08002d88;
                _obj.dev_attr_ambient_sensor = iVar9;
                _reloc.thermal_modem_level_store.99fc359523b209be451fdf342158c360.cfi_jt =
                     device_create(iVar9,0,0x48,0,"power_save");
                if (_reloc.thermal_modem_level_store.99fc359523b209be451fdf342158c360.cfi_jt != 0) {
                    _obj.dev_attr_ambient_sensor_temp = obj.mi_powersave_dev_attr_group;
                    iVar8 = sysfs_create_group();
                    if (iVar8 != 0) {
                        _printk(0x8000c60,"create_mi_powersave_node",iVar8);
                    }
                    goto code_r0x08002d88;
                }
                uVar12 = 0x8000bc1;
            }
        }
    }
    _printk(uVar12,"create_mi_powersave_node");
code_r0x08002d88:
    *0x80001f8 = 0xfffffffe0;
    *0x8000200 = 0x8000200;
    *0x8000208 = 0x8000200;
    *0x8000210 = sym.usb_online_work.99fc359523b209be451fdf342158c360.cfi_jt;
    _obj.usb_state = sym.usb_online_callback.99fc359523b209be451fdf342158c360.cfi_jt;
    iVar8 = power_supply_reg_notifier();
    if (iVar8 < 0) {
        _printk(0x8000731,iVar8);
    }
    return 0;
code_r0x08002954:
    if (uVar7 != 0) {
        iVar2 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar2 = 0x30;
        }
        puVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x38);
        if (puVar10 != NULL) {
            *(puVar10 + 6) = iVar9;
            *(puVar10 + 0xc) = obj.qos_req + iVar18;
            puVar10[2] = uVar7 - 1;
            *puVar10 = *(iVar9 + 0x1c);
            iVar18 = __kmalloc(uVar7 << 2,0xcc0);
            *(puVar10 + 4) = iVar18;
            if (iVar18 != 0) {
                uVar7 = 0;
                uVar16 = 0xffffffff;
code_r0x080029c8:
                uVar17 = 0;
                puVar14 = *(iVar9 + 400) + 8;
                do {
                    uVar3 = *puVar14;
                    uVar5 = uVar17;
                    if (uVar3 != 0xffffffff) {
                        if (uVar3 == 0xfffffffe) goto code_r0x08002a00;
                        uVar5 = uVar3;
                        if (uVar16 <= uVar3 || uVar3 <= uVar17) {
                            uVar5 = uVar17;
                        }
                    }
                    uVar17 = uVar5;
                    puVar14 = puVar14 + 3;
                } while( true );
            }
            kfree(puVar10);
        }
    }
    goto code_r0x08002af8;
code_r0x08002a00:
    *(*(puVar10 + 4) + uVar7 * 4) = uVar17;
    if (uVar17 == 0) {
        _printk(0x80008d8,"cpu_thermal_init");
    }
    uVar7 = uVar7 + 1;
    uVar16 = uVar17;
    if (puVar10[2] < uVar7) goto code_r0x08002a30;
    goto code_r0x080029c8;
code_r0x08002a30:
    uVar7 = freq_qos_add_request(iVar9 + 0xa0,*(puVar10 + 0xc),2,**(puVar10 + 4));
    if (uVar7 < 0) {
        uVar15 = uVar7;
        kfree(*(puVar10 + 4));
        kfree(puVar10);
        uVar12 = 0x8000a06;
code_r0x08002af4:
        _printk(uVar12,"cpu_thermal_init",uVar15);
        goto code_r0x08002af8;
    }
    mutex_lock(obj.screen_state_dw);
    puVar4 = _obj.cpufreq_dev_list;
    puVar1 = puVar10 + 8;
    uVar11 = __list_add_valid(puVar1,obj.cpufreq_dev_list,_obj.cpufreq_dev_list);
    if ((uVar11 & 1) != 0) {
        *(puVar4 + 2) = puVar1;
        *(puVar10 + 8) = puVar4;
        *(puVar10 + 10) = obj.cpufreq_dev_list;
        _obj.cpufreq_dev_list = puVar1;
    }
    mutex_unlock(obj.screen_state_dw);
    uVar7 = cpumask_next(uVar15,__cpu_possible_mask);
    *in_x7 = extraout_x8_00;
    if (extraout_x8_00 <= uVar7) goto code_r0x08002af8;
    goto code_r0x080028e0;
}


// ===== sym.cleanup_module @ 0x08002e04 (size 376) =====

void sym.cleanup_module(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        cancel_delayed_work_sync(obj.screen_state_dw);
        destroy_workqueue(_segment.ehdr);
    }
    if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
        _printk(0x8000d4b,"mi_thermal_interface_exit");
    }
    else {
        panel_event_notifier_unregister();
    }
    _printk(0x80009e4,"destroy_thermal_message_node");
    sysfs_remove_group(_obj.mi_thermal_dev,0x8000260);
    if (*0x8000258 != 0) {
        device_destroy(*0x8000258,0x48);
        _segment.ehdr = 0;
    }
    _printk(0x80006f8,"destroy_mi_powersave_node");
    sysfs_remove_group(_reloc.thermal_modem_level_store.99fc359523b209be451fdf342158c360.cfi_jt,0x8000550);
    if (_obj.dev_attr_ambient_sensor != 0) {
        device_destroy(_obj.dev_attr_ambient_sensor,0x48);
        _segment.ehdr = 0;
    }
    pcVar4 = _obj.cpufreq_dev_list;
    if (_obj.cpufreq_dev_list != obj.cpufreq_dev_list) {
        do {
            pcVar5 = *pcVar4;
            freq_qos_remove_request(*(pcVar4 + 0x10));
            uVar3 = __list_del_entry_valid(pcVar4);
            if ((uVar3 & 1) != 0) {
                iVar1 = *pcVar4;
                piVar2 = *(pcVar4 + 8);
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *pcVar4 = -0x2152ffffffffff00;
            *(pcVar4 + 8) = -0x2152fffffffffede;
            kfree(*(pcVar4 + -0x10));
            kfree(pcVar4 + -0x20);
            pcVar4 = pcVar5;
        } while (pcVar5 != obj.cpufreq_dev_list);
    }
    return;
}

