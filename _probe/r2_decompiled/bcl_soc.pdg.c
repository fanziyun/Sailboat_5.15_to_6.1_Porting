// decompiled from bcl_soc by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 436) =====

//WARNING: Switch with 1 destination removed at 0x08001934

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 == -0x79e1ae77be533008) {
                pcVar2 = sym.bcl_set_soc.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
            else {
                if (arg1 != -0x550b9e52359ac614) goto code_r0x080018f4;
                pcVar2 = sym.bcl_evaluate_soc.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x3557318fb8d07b71) {
                if ((pcVar1 + -0x80011e0 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x080018f4;
            }
            if (arg1 != -0xc1bd59c70f4d7ab) goto code_r0x080018f4;
            pcVar2 = sym.bcl_soc_tz_change_mode.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 < 0x6505e4e93dbea6af) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x13365def634cc965) goto code_r0x080018f4;
            pcVar2 = sym.bcl_read_soc.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 == 0x6505e4e93dbea6af) {
        pcVar2 = sym.bcl_soc_get_trend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.battery_supply_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080018f4;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080018f4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001948);
    (*pcVar1)();
}


// ===== sym.bcl_set_soc.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011c0 (size 8) =====

ulong sym.bcl_set_soc.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong param_2,int param_3)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(_segment.ehdr + 0x50) != param_3) {
        mutex_lock(_segment.ehdr + 0x60);
        iVar2 = _segment.ehdr;
        *(_segment.ehdr + 0x50) = param_3;
        uVar1 = _devm_kmalloc;
        if (param_3 == 0x7fffffff) {
            *(iVar2 + 0x90) = 0;
        }
        else {
            *(iVar2 + 0x90) = 1;
            queue_work_on(0x20,uVar1,iVar2 + 0x20);
            iVar2 = _segment.ehdr;
        }
        mutex_unlock(iVar2 + 0x60);
    }
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011c8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.bcl_soc_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011d0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.bcl_soc_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.bcl_soc_tz_change_mode.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011d8 (size 8) =====

ulong sym.bcl_soc_tz_change_mode.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    if (iVar1 != 0) {
        piVar2 = *(iVar1 + 0x458);
        *(iVar1 + 0x424) = 0x8000000100000000;
        *(iVar1 + 0x418) = 0xfffbd1b0;
        *(iVar1 + 0x42c) = 0x7fffffff;
        for (; iVar1 + 0x458 != piVar2; piVar2 = *piVar2) {
            *(piVar2 + -0x8c) = 0;
            if (param_2 == 0) {
                piVar2[-0xf] = 0xffffffffffffffff;
                *(piVar2[-0x13] + 0x3c0) = 0;
                thermal_cdev_update(piVar2[-0x13]);
            }
        }
    }
    return 0;
}


// ===== sym.bcl_soc_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011e0 (size 8) =====

uint sym.bcl_soc_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    ulong *in_x18;
    uint uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x10;
    _segment.ehdr = devm_kmalloc(iVar1,0xe8,0xdc0);
    if (_segment.ehdr == NULL) {
        uVar5 = 0xfffffff4;
    }
    else {
        __mutex_init(_segment.ehdr + 0xc,"&bcl_perph->state_trans_lock",
                     reloc.bcl_soc_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
        piVar4 = _segment.ehdr;
        _segment.ehdr[0x14] = sym.bcl_read_soc.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        piVar4[0x15] = sym.bcl_soc_get_trend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        piVar4[0x16] = sym.bcl_set_soc.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        *piVar4 = iVar1;
        piVar4[4] = 0xfffffffe0;
        piVar4[0x19] = sym.bcl_soc_tz_change_mode.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        piVar4[5] = piVar4 + 5;
        piVar4[6] = piVar4 + 5;
        piVar4[7] = sym.bcl_evaluate_soc.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        piVar4[1] = sym.battery_supply_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        iVar2 = power_supply_reg_notifier();
        if (iVar2 < 0) {
            _printk(0x8000185,"bcl_soc","bcl_soc_probe",iVar2);
            uVar5 = 0xfffffdfb;
            piVar4 = _segment.ehdr;
        }
        else {
            uVar3 = thermal_zone_of_sensor_register(iVar1,0,_segment.ehdr,_segment.ehdr + 0x14);
            _segment.ehdr[0x13] = uVar3;
            if (uVar3 < 0xfffffffffffff001) {
                thermal_zone_device_update(uVar3,5);
                queue_work_on(0x20,_devm_kmalloc,_segment.ehdr + 4);
                *(param_1 + 0xa8) = _segment.ehdr;
                return 0;
            }
            _printk(0x800028e,"bcl_soc","bcl_soc_probe");
            piVar4 = _segment.ehdr;
            uVar5 = _segment.ehdr[0x13];
            _segment.ehdr[0x13] = 0;
        }
        power_supply_unreg_notifier(piVar4 + 1);
        flush_work(_segment.ehdr + 4);
        if (_segment.ehdr[0x13] != 0) {
            thermal_zone_of_sensor_unregister(iVar1);
        }
    }
    return uVar5;
}


// ===== sym.bcl_soc_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011e8 (size 8) =====

ulong sym.bcl_soc_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    power_supply_unreg_notifier(_segment.ehdr + 8);
    flush_work(_segment.ehdr + 0x20);
    if (*(_segment.ehdr + 0x98) != 0) {
        thermal_zone_of_sensor_unregister(param_1 + 0x10);
    }
    return 0;
}


// ===== sym.bcl_read_soc.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011f0 (size 8) =====

int sym.bcl_read_soc.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int *param_2,int param_3)

{
    ulong uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    *param_2 = 0;
    uStack_30 = 0;
    if (_segment.ehdr == 0) {
        _segment.ehdr = power_supply_get_by_name("battery");
        if (_segment.ehdr == 0) {
            iVar2 = 0;
            goto code_r0x0800149c;
        }
    }
    param_3 = &uStack_30;
    iVar2 = power_supply_get_property(_segment.ehdr,0x2e);
    if (iVar2 == 0) {
        *param_2 = 100 - uStack_30;
    }
    else {
        param_3 = 0x80002c5;
        _printk(0x80001d0,"bcl_soc","bcl_read_soc",iVar2);
    }
code_r0x0800149c:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return iVar2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.bcl_set_soc;
    if (*(_segment.ehdr + 0x50) != param_3) {
        mutex_lock(_segment.ehdr + 0x60);
        iVar3 = _segment.ehdr;
        *(_segment.ehdr + 0x50) = param_3;
        uVar1 = _devm_kmalloc;
        if (param_3 == 0x7fffffff) {
            *(iVar3 + 0x90) = 0;
        }
        else {
            *(iVar3 + 0x90) = 1;
            queue_work_on(0x20,uVar1,iVar3 + 0x20);
            iVar3 = _segment.ehdr;
        }
        mutex_unlock(iVar3 + 0x60);
    }
    return 0;
}


// ===== sym.bcl_evaluate_soc.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011f8 (size 8) =====

ulong sym.bcl_evaluate_soc.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong param_2,char *param_3)

{
    int64_t iVar1;
    int iVar2;
    int *piVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int aiStack_30 [2];
    int64_t iStack_28;
    
    piVar3 = aiStack_30;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    if (*(_segment.ehdr + 0x98) == 0) goto code_r0x0800183c;
    aiStack_30[0] = 0;
    aiStack_30[1] = 0;
    if (_segment.ehdr == 0) {
        _segment.ehdr = power_supply_get_by_name("battery");
        if (_segment.ehdr != 0) goto code_r0x080017d4;
        iVar2 = 0;
    }
    else {
code_r0x080017d4:
        iVar2 = power_supply_get_property(_segment.ehdr,0x2e);
        if (iVar2 != 0) {
            param_3 = "bcl_read_soc";
            param_1 = _printk(0x80001d0,"bcl_soc","bcl_read_soc",iVar2);
            goto code_r0x0800183c;
        }
        iVar2 = 100 - aiStack_30[0];
        param_3 = piVar3;
    }
    mutex_lock(_segment.ehdr + 0x60);
    if ((*(_segment.ehdr + 0x90) == '\0') || (iVar2 < *(_segment.ehdr + 0x50))) {
        param_1 = mutex_unlock(_segment.ehdr + 0x60);
    }
    else {
        iVar1 = _segment.ehdr + 0x60;
        *(_segment.ehdr + 0x58) = iVar2;
        mutex_unlock(iVar1);
        param_1 = thermal_zone_device_update(*(_segment.ehdr + 0x98),2);
    }
code_r0x0800183c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return param_1;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.battery_supply_callback;
    iVar2 = strcmp(**param_3,"battery");
    if (iVar2 == 0) {
        queue_work_on(0x20,_devm_kmalloc,_segment.ehdr + 0x20);
    }
    return 1;
}


// ===== sym.battery_supply_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001200 (size 8) =====

ulong sym.battery_supply_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong param_2,ulong *param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = strcmp(**param_3,"battery");
    if (iVar1 == 0) {
        queue_work_on(0x20,_devm_kmalloc,_segment.ehdr + 0x20);
    }
    return 1;
}


// ===== sym.bcl_soc_get_trend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001208 (size 8) =====

ulong sym.bcl_soc_get_trend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint param_2,int *param_3)

{
    ulong uVar1;
    int iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t *piVar4;
    code *pcVar5;
    ulong unaff_x30;
    uchar auVar6 [12];
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar3 = *(param_1 + 0x98);
    uStack_40 = 0;
    if (iVar3 == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        pcVar5 = *(*(iVar3 + 0x438) + 0x30);
        __cfi_slowpath_diag(0xcd9fe8d7ef1061b1,pcVar5,0x8000140);
        uVar1 = (*pcVar5)(iVar3,param_2,&uStack_40 + 4);
        if (uVar1 == 0) {
            pcVar5 = *(*(iVar3 + 0x438) + 0x40);
            if (pcVar5 != NULL) {
                __cfi_slowpath_diag(0xcd9fe8d7ef1061b1,pcVar5,0x8000160);
                uVar1 = (*pcVar5)(iVar3,param_2,&uStack_40);
                if (uVar1 != 0) goto code_r0x0800169c;
            }
            iVar2 = *(iVar3 + 0x418);
            if (iVar2 < uStack_40._4_4_) {
                if (uStack_40 == 0) {
                    iVar2 = 2;
                }
                else {
                    iVar2 = (iVar2 <= uStack_40._4_4_ - uStack_40) << 1;
                }
            }
            else {
                iVar2 = 1;
            }
            uVar1 = 0;
            *param_3 = iVar2;
        }
    }
code_r0x0800169c:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar1;
    }
    auVar6 = __stack_chk_fail(uVar1);
    *extraout_x18 = 0x80016d0;
    iVar3 = *(auVar6._0_8_ + 0x98);
    if (iVar3 != 0) {
        piVar4 = *(iVar3 + 0x458);
        *(iVar3 + 0x424) = 0x8000000100000000;
        *(iVar3 + 0x418) = 0xfffbd1b0;
        *(iVar3 + 0x42c) = 0x7fffffff;
        for (; iVar3 + 0x458 != piVar4; piVar4 = *piVar4) {
            *(piVar4 + -0x8c) = 0;
            if (auVar6._8_4_ == 0) {
                piVar4[-0xf] = 0xffffffffffffffff;
                *(piVar4[-0x13] + 0x3c0) = 0;
                thermal_cdev_update(piVar4[-0x13]);
            }
        }
    }
    return 0;
}


// ===== sym.bcl_soc_probe @ 0x08001210 (size 440) =====

uint sym.bcl_soc_probe(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    ulong *in_x18;
    uint uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x10;
    _segment.ehdr = devm_kmalloc(iVar1,0xe8,0xdc0);
    if (_segment.ehdr == NULL) {
        uVar5 = 0xfffffff4;
    }
    else {
        __mutex_init(_segment.ehdr + 0xc,"&bcl_perph->state_trans_lock",
                     reloc.bcl_soc_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
        piVar4 = _segment.ehdr;
        _segment.ehdr[0x14] = sym.bcl_read_soc.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        piVar4[0x15] = sym.bcl_soc_get_trend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        piVar4[0x16] = sym.bcl_set_soc.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        *piVar4 = iVar1;
        piVar4[4] = 0xfffffffe0;
        piVar4[0x19] = sym.bcl_soc_tz_change_mode.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        piVar4[5] = piVar4 + 5;
        piVar4[6] = piVar4 + 5;
        piVar4[7] = sym.bcl_evaluate_soc.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        piVar4[1] = sym.battery_supply_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        iVar2 = power_supply_reg_notifier();
        if (iVar2 < 0) {
            _printk(0x8000185,"bcl_soc","bcl_soc_probe",iVar2);
            uVar5 = 0xfffffdfb;
            piVar4 = _segment.ehdr;
        }
        else {
            uVar3 = thermal_zone_of_sensor_register(iVar1,0,_segment.ehdr,_segment.ehdr + 0x14);
            _segment.ehdr[0x13] = uVar3;
            if (uVar3 < 0xfffffffffffff001) {
                thermal_zone_device_update(uVar3,5);
                queue_work_on(0x20,_devm_kmalloc,_segment.ehdr + 4);
                *(arg1 + 0xa8) = _segment.ehdr;
                return 0;
            }
            _printk(0x800028e,"bcl_soc","bcl_soc_probe");
            piVar4 = _segment.ehdr;
            uVar5 = _segment.ehdr[0x13];
            _segment.ehdr[0x13] = 0;
        }
        power_supply_unreg_notifier(piVar4 + 1);
        flush_work(_segment.ehdr + 4);
        if (_segment.ehdr[0x13] != 0) {
            thermal_zone_of_sensor_unregister(iVar1);
        }
    }
    return uVar5;
}


// ===== sym.bcl_soc_remove @ 0x080013c8 (size 96) =====

ulong sym.bcl_soc_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    power_supply_unreg_notifier(_segment.ehdr + 8);
    flush_work(_segment.ehdr + 0x20);
    if (*(_segment.ehdr + 0x98) != 0) {
        thermal_zone_of_sensor_unregister(arg1 + 0x10);
    }
    return 0;
}


// ===== sym.bcl_read_soc @ 0x08001428 (size 212) =====

int sym.bcl_read_soc(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int iVar2;
    int in_w2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    *arg2 = 0;
    uStack_30 = 0;
    if (_segment.ehdr == 0) {
        _segment.ehdr = power_supply_get_by_name("battery");
        if (_segment.ehdr == 0) {
            iVar2 = 0;
            goto code_r0x0800149c;
        }
    }
    in_w2 = &uStack_30;
    iVar2 = power_supply_get_property(_segment.ehdr,0x2e);
    if (iVar2 == 0) {
        *arg2 = 100 - uStack_30;
    }
    else {
        in_w2 = 0x80002c5;
        _printk(0x80001d0,"bcl_soc","bcl_read_soc",iVar2);
    }
code_r0x0800149c:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return iVar2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.bcl_set_soc;
    if (*(_segment.ehdr + 0x50) != in_w2) {
        mutex_lock(_segment.ehdr + 0x60);
        iVar3 = _segment.ehdr;
        *(_segment.ehdr + 0x50) = in_w2;
        uVar1 = _devm_kmalloc;
        if (in_w2 == 0x7fffffff) {
            *(iVar3 + 0x90) = 0;
        }
        else {
            *(iVar3 + 0x90) = 1;
            queue_work_on(0x20,uVar1,iVar3 + 0x20);
            iVar3 = _segment.ehdr;
        }
        mutex_unlock(iVar3 + 0x60);
    }
    return 0;
}


// ===== sym.bcl_set_soc @ 0x080014fc (size 156) =====

ulong sym.bcl_set_soc(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg2;
    if (*(_segment.ehdr + 0x50) != iVar1) {
        mutex_lock(_segment.ehdr + 0x60);
        iVar3 = _segment.ehdr;
        *(_segment.ehdr + 0x50) = iVar1;
        uVar2 = _devm_kmalloc;
        if (iVar1 == 0x7fffffff) {
            *(iVar3 + 0x90) = 0;
        }
        else {
            *(iVar3 + 0x90) = 1;
            queue_work_on(0x20,uVar2,iVar3 + 0x20);
            iVar3 = _segment.ehdr;
        }
        mutex_unlock(iVar3 + 0x60);
    }
    return 0;
}


// ===== sym.bcl_soc_get_trend @ 0x08001598 (size 316) =====

ulong sym.bcl_soc_get_trend(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    int iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t *piVar4;
    code *pcVar5;
    ulong unaff_x30;
    uchar auVar6 [12];
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar3 = *(arg1 + 0x98);
    uStack_40 = 0;
    if (iVar3 == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        pcVar5 = *(*(iVar3 + 0x438) + 0x30);
        __cfi_slowpath_diag(0xcd9fe8d7ef1061b1,pcVar5,0x8000140);
        uVar1 = (*pcVar5)(iVar3,arg2 & 0xffffffffU,&stack0xffffffffffffffc4);
        if (uVar1 == 0) {
            pcVar5 = *(*(iVar3 + 0x438) + 0x40);
            if (pcVar5 != NULL) {
                __cfi_slowpath_diag(0xcd9fe8d7ef1061b1,pcVar5,0x8000160);
                uVar1 = (*pcVar5)(iVar3,arg2 & 0xffffffffU,&stack0xffffffffffffffc0);
                if (uVar1 != 0) goto code_r0x0800169c;
            }
            iVar2 = *(iVar3 + 0x418);
            if (iVar2 < uStack_40._4_4_) {
                if (uStack_40 == 0) {
                    iVar2 = 2;
                }
                else {
                    iVar2 = (iVar2 <= uStack_40._4_4_ - uStack_40) << 1;
                }
            }
            else {
                iVar2 = 1;
            }
            uVar1 = 0;
            *arg3 = iVar2;
        }
    }
code_r0x0800169c:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar1;
    }
    auVar6 = __stack_chk_fail(uVar1);
    *extraout_x18 = 0x80016d0;
    iVar3 = *(auVar6._0_8_ + 0x98);
    if (iVar3 != 0) {
        piVar4 = *(iVar3 + 0x458);
        *(iVar3 + 0x424) = 0x8000000100000000;
        *(iVar3 + 0x418) = 0xfffbd1b0;
        *(iVar3 + 0x42c) = 0x7fffffff;
        for (; iVar3 + 0x458 != piVar4; piVar4 = *piVar4) {
            *(piVar4 + -0x8c) = 0;
            if (auVar6._8_4_ == 0) {
                piVar4[-0xf] = 0xffffffffffffffff;
                *(piVar4[-0x13] + 0x3c0) = 0;
                thermal_cdev_update(piVar4[-0x13]);
            }
        }
    }
    return 0;
}


// ===== sym.bcl_soc_tz_change_mode @ 0x080016d4 (size 168) =====

ulong sym.bcl_soc_tz_change_mode(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    if (iVar1 != 0) {
        piVar2 = *(iVar1 + 0x458);
        *(iVar1 + 0x424) = 0x8000000100000000;
        *(iVar1 + 0x418) = 0xfffbd1b0;
        *(iVar1 + 0x42c) = 0x7fffffff;
        if (iVar1 + 0x458 != piVar2) {
            do {
                *(piVar2 + -0x8c) = 0;
                if (arg2 == 0) {
                    piVar2[-0xf] = -1;
                    *(piVar2[-0x13] + 0x3c0) = 0;
                    thermal_cdev_update(piVar2[-0x13]);
                }
                piVar2 = *piVar2;
            } while (iVar1 + 0x458 != piVar2);
        }
    }
    return 0;
}


// ===== sym.bcl_evaluate_soc @ 0x0800177c (size 284) =====

ulong sym.bcl_evaluate_soc(ulong param_1,ulong param_2,char *param_3)

{
    int64_t iVar1;
    int iVar2;
    int *piVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int aiStack_30 [2];
    int64_t iStack_28;
    
    piVar3 = aiStack_30;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    if (*(_segment.ehdr + 0x98) == 0) goto code_r0x0800183c;
    aiStack_30[0] = 0;
    aiStack_30[1] = 0;
    if (_segment.ehdr == 0) {
        _segment.ehdr = power_supply_get_by_name("battery");
        if (_segment.ehdr != 0) goto code_r0x080017d4;
        iVar2 = 0;
    }
    else {
code_r0x080017d4:
        iVar2 = power_supply_get_property(_segment.ehdr,0x2e);
        if (iVar2 != 0) {
            param_3 = "bcl_read_soc";
            param_1 = _printk(0x80001d0,"bcl_soc","bcl_read_soc",iVar2);
            goto code_r0x0800183c;
        }
        iVar2 = 100 - aiStack_30[0];
        param_3 = piVar3;
    }
    mutex_lock(_segment.ehdr + 0x60);
    if ((*(_segment.ehdr + 0x90) == '\0') || (iVar2 < *(_segment.ehdr + 0x50))) {
        param_1 = mutex_unlock(_segment.ehdr + 0x60);
    }
    else {
        iVar1 = _segment.ehdr + 0x60;
        *(_segment.ehdr + 0x58) = iVar2;
        mutex_unlock(iVar1);
        param_1 = thermal_zone_device_update(*(_segment.ehdr + 0x98),2);
    }
code_r0x0800183c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return param_1;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.battery_supply_callback;
    iVar2 = strcmp(**param_3,"battery");
    if (iVar2 == 0) {
        queue_work_on(0x20,_devm_kmalloc,_segment.ehdr + 0x20);
    }
    return 1;
}


// ===== sym.battery_supply_callback @ 0x08001898 (size 88) =====

ulong sym.battery_supply_callback(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = strcmp(**arg1,"battery");
    if (iVar1 == 0) {
        queue_work_on(0x20,_devm_kmalloc,_segment.ehdr + 0x20);
    }
    return 1;
}


// ===== sym.__cfi_check_fail @ 0x080018f0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001934

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
    //switch table (4 cases) at 0x8000180
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001948);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001954 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.bcl_soc_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001988 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.bcl_soc_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

