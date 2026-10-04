// decompiled from policy_engine by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 400) =====

//WARNING: Switch with 1 destination removed at 0x080017a8

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
                pcVar2 = sym.pe_sensor_set_trips.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
            else {
                if (arg1 != -0x3987c0e26ee29729) goto code_r0x08001768;
                pcVar2 = sym.pe_handle_irq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x3557318fb8d07b71) {
                if ((pcVar1 + -0x80011c8 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08001768;
            }
            if (arg1 != -0xc1bd59c70f4d7ab) goto code_r0x08001768;
            pcVar2 = sym.pe_sensor_tz_change_mode.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 < 0x6505e4e93dbea6af) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x13365def634cc965) goto code_r0x08001768;
            pcVar2 = sym.pe_sensor_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 == 0x6505e4e93dbea6af) {
        pcVar2 = sym.pe_sensor_get_trend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001768;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001768:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80017bc);
    (*pcVar1)();
}


// ===== sym.pe_sensor_get_trend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001198 (size 8) =====

ulong sym.pe_sensor_get_trend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,int *param_3)

{
    int iVar1;
    int64_t iVar2;
    int iVar3;
    
    iVar2 = *(param_1 + 8);
    if (iVar2 != 0) {
        iVar1 = *(iVar2 + 0x418);
        if (iVar1 == 0) {
            iVar1 = 2;
        }
        else {
            iVar3 = *(iVar2 + 0x41c);
            if (iVar3 < iVar1) {
                iVar1 = 1;
            }
            else {
                iVar1 = (iVar1 < iVar3) << 1;
            }
        }
        *param_3 = iVar1;
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.pe_sensor_tz_change_mode.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011a0 (size 8) =====

ulong sym.pe_sensor_tz_change_mode.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 8);
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


// ===== sym.cleanup_module.cfi_jt @ 0x080011a8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.pe_sens_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011b0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.pe_sens_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.pe_sensor_set_trips.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011b8 (size 8) =====

ulong sym.pe_sensor_set_trips.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int param_2,int param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + 0x28);
    if ((*(param_1 + 0x10) != param_3) || (*(param_1 + 0x14) != param_2)) {
        *(param_1 + 0x10) = param_3;
        *(param_1 + 0x14) = param_2;
    }
    mutex_unlock(param_1 + 0x28);
    return 0;
}


// ===== sym.pe_handle_irq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011c0 (size 8) =====

ulong sym.pe_handle_irq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(0x11111,*(param_2 + 0x20) + 0x620);
    sym.writel_relaxed(0xffff,*(param_2 + 0x20) + 0x630);
    uVar2 = sym.readl_relaxed(*(param_2 + 0x20) + 0x590);
    iVar1 = param_2 + 0x28;
    mutex_lock(iVar1);
    if ((*(param_2 + 8) != 0) &&
       ((uVar2 = uVar2 >> 0x10 & 0x1f, *(param_2 + 0x10) <= uVar2 || (uVar2 <= *(param_2 + 0x14))))) {
        mutex_unlock(iVar1);
        thermal_zone_device_update(*(param_2 + 8),2);
        return 1;
    }
    mutex_unlock(iVar1);
    return 1;
}


// ===== sym.pe_sens_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011c8 (size 8) =====

uint64_t sym.pe_sens_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = param_1 + 0x10;
    piVar3 = devm_kmalloc(piVar1,0x58,0xdc0);
    if (piVar3 == NULL) {
        uVar5 = 0xfffffff4;
    }
    else {
        *piVar3 = piVar1;
        piVar3[2] = -0x7fffffff80000001;
        __mutex_init(piVar3 + 5,"&pe_sens->mutex",obj.pe_sens_device_probe.__key);
        *(param_1 + 0xa8) = piVar3;
        iVar4 = platform_get_resource(param_1,0x200,0);
        if (iVar4 == 0) {
            pcVar7 = "Couldn\'t get MEM resource\n";
        }
        else {
            iVar4 = devm_ioremap_resource(piVar1,iVar4);
            piVar3[4] = iVar4;
            if (iVar4 != 0) {
                iVar2 = platform_get_irq(param_1,0);
                *(piVar3 + 3) = iVar2;
                if (iVar2 < 0) {
                    _dev_err(piVar1,"Couldn\'t get irq number\n");
                    uVar5 = *(piVar3 + 3);
                }
                else {
                    uVar5 = devm_thermal_zone_of_sensor_register
                                      (piVar1,0,piVar3,reloc.pe_sensor_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                    piVar3[1] = uVar5;
                    if ((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) {
                        if (uVar5 != -0x13) {
                            _dev_err(piVar1,"sensor register failed. ret:%d\n",uVar5 & 0xffffffff);
                        }
                        piVar3[1] = 0;
                    }
                    else {
                        sym.writel_relaxed(0x11000,piVar3[4] + 0x530);
                        sym.writel_relaxed(0x11111,piVar3[4] + 0x620);
                        sym.writel_relaxed(0xffff,piVar3[4] + 0x630);
                        iVar4 = *(param_1 + 0x80);
                        if (iVar4 == 0) {
                            iVar4 = *piVar1;
                        }
                        uVar6 = devm_request_threaded_irq
                                          (piVar1,piVar3[3],0,
                                           sym.pe_handle_irq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0x2004,iVar4,
                                           piVar3);
                        uVar5 = uVar6 & 0xffffffff;
                        if (uVar6 == 0) {
                            irq_set_irq_wake(piVar3[3],1);
                        }
                        else {
                            _dev_err(piVar1,"Couldn\'t get irq registered\n");
                            thermal_zone_of_sensor_unregister(*piVar3,piVar3[1]);
                        }
                    }
                }
                goto code_r0x080013b0;
            }
            pcVar7 = "Couldn\'t get regmap\n";
        }
        _dev_err(piVar1,pcVar7);
        uVar5 = 0xffffffea;
    }
code_r0x080013b0:
    return uVar5 & 0xffffffff;
}


// ===== sym.pe_sens_device_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011d0 (size 8) =====

ulong sym.pe_sens_device_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    thermal_zone_of_sensor_unregister(**(param_1 + 0xa8),(*(param_1 + 0xa8))[1]);
    return 0;
}


// ===== sym.pe_sensor_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011d8 (size 8) =====

ulong sym.pe_sensor_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readl_relaxed(*(param_1 + 0x20) + 0x590);
    *param_2 = uVar1 >> 0x10 & 0x1f;
    return 0;
}


// ===== sym.pe_sens_device_probe @ 0x080011e0 (size 492) =====

uint64_t sym.pe_sens_device_probe(int64_t arg1)

{
    int64_t *piVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = arg1 + 0x10;
    piVar3 = devm_kmalloc(piVar1,0x58,0xdc0);
    if (piVar3 == NULL) {
        uVar5 = 0xfffffff4;
    }
    else {
        *piVar3 = piVar1;
        piVar3[2] = -0x7fffffff80000001;
        __mutex_init(piVar3 + 5,"&pe_sens->mutex",obj.pe_sens_device_probe.__key);
        *(arg1 + 0xa8) = piVar3;
        iVar4 = platform_get_resource(arg1,0x200,0);
        if (iVar4 == 0) {
            pcVar7 = "Couldn\'t get MEM resource\n";
        }
        else {
            iVar4 = devm_ioremap_resource(piVar1,iVar4);
            piVar3[4] = iVar4;
            if (iVar4 != 0) {
                iVar2 = platform_get_irq(arg1,0);
                *(piVar3 + 3) = iVar2;
                if (iVar2 < 0) {
                    _dev_err(piVar1,"Couldn\'t get irq number\n");
                    uVar5 = *(piVar3 + 3);
                }
                else {
                    uVar5 = devm_thermal_zone_of_sensor_register
                                      (piVar1,0,piVar3,reloc.pe_sensor_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                    piVar3[1] = uVar5;
                    if ((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) {
                        if (uVar5 != -0x13) {
                            _dev_err(piVar1,"sensor register failed. ret:%d\n",uVar5 & 0xffffffff);
                        }
                        piVar3[1] = 0;
                    }
                    else {
                        sym.writel_relaxed(0x11000,piVar3[4] + 0x530);
                        sym.writel_relaxed(0x11111,piVar3[4] + 0x620);
                        sym.writel_relaxed(0xffff,piVar3[4] + 0x630);
                        iVar4 = *(arg1 + 0x80);
                        if (iVar4 == 0) {
                            iVar4 = *piVar1;
                        }
                        uVar6 = devm_request_threaded_irq
                                          (piVar1,piVar3[3],0,
                                           sym.pe_handle_irq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0x2004,iVar4,
                                           piVar3);
                        uVar5 = uVar6 & 0xffffffff;
                        if (uVar6 == 0) {
                            irq_set_irq_wake(piVar3[3],1);
                        }
                        else {
                            _dev_err(piVar1,"Couldn\'t get irq registered\n");
                            thermal_zone_of_sensor_unregister(*piVar3,piVar3[1]);
                        }
                    }
                }
                goto code_r0x080013b0;
            }
            pcVar7 = "Couldn\'t get regmap\n";
        }
        _dev_err(piVar1,pcVar7);
        uVar5 = 0xffffffea;
    }
code_r0x080013b0:
    return uVar5 & 0xffffffff;
}


// ===== sym.pe_sens_device_remove @ 0x080013cc (size 48) =====

ulong sym.pe_sens_device_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    thermal_zone_of_sensor_unregister(**(arg1 + 0xa8),(*(arg1 + 0xa8))[1]);
    return 0;
}


// ===== sym.writel_relaxed @ 0x080013fc (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001418);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001440);
    return;
}


// ===== sym.pe_handle_irq @ 0x08001474 (size 188) =====

ulong sym.pe_handle_irq(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(0x11111,*(arg1 + 0x20) + 0x620);
    sym.writel_relaxed(0xffff,*(arg1 + 0x20) + 0x630);
    uVar2 = sym.readl_relaxed(*(arg1 + 0x20) + 0x590);
    iVar1 = arg1 + 0x28;
    mutex_lock(iVar1);
    if ((*(arg1 + 8) != 0) && ((uVar2 = uVar2 >> 0x10 & 0x1f, *(arg1 + 0x10) <= uVar2 || (uVar2 <= *(arg1 + 0x14))))) {
        mutex_unlock(iVar1);
        thermal_zone_device_update(*(arg1 + 8),2);
        return 1;
    }
    mutex_unlock(iVar1);
    return 1;
}


// ===== sym.pe_sensor_read @ 0x08001530 (size 72) =====

ulong sym.pe_sensor_read(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readl_relaxed(*(arg1 + 0x20) + 0x590);
    *arg2 = uVar1 >> 0x10 & 0x1f;
    return 0;
}


// ===== sym.pe_sensor_get_trend @ 0x08001578 (size 92) =====

ulong sym.pe_sensor_get_trend(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    int iVar3;
    
    iVar2 = *(arg1 + 8);
    if (iVar2 != 0) {
        iVar1 = *(iVar2 + 0x418);
        if (iVar1 == 0) {
            iVar1 = 2;
        }
        else {
            iVar3 = *(iVar2 + 0x41c);
            if (iVar3 < iVar1) {
                iVar1 = 1;
            }
            else {
                iVar1 = (iVar1 < iVar3) << 1;
            }
        }
        *arg2 = iVar1;
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.pe_sensor_set_trips @ 0x080015dc (size 112) =====

ulong sym.pe_sensor_set_trips(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x28);
    if ((*(arg1 + 0x10) != arg3) || (*(arg1 + 0x14) != arg2)) {
        *(arg1 + 0x10) = arg3;
        *(arg1 + 0x14) = arg2;
    }
    mutex_unlock(arg1 + 0x28);
    return 0;
}


// ===== sym.pe_sensor_tz_change_mode @ 0x0800164c (size 168) =====

ulong sym.pe_sensor_tz_change_mode(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 8);
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


// ===== sym.readl_relaxed @ 0x080016f4 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x80016f8);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x800172c);
    return uVar1;
}


// ===== sym.__cfi_check_fail @ 0x08001764 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080017a8

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
    //switch table (4 cases) at 0x80001a0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80017bc);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080017c4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.pe_sens_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080017f8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.pe_sens_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

