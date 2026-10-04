// decompiled from qcom-spmi-temp-alarm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 416) =====

//WARNING: Switch with 1 destination removed at 0x08002360

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x3557318fb8d07b71) {
        if (arg1 < -0x4260ebb633ab377a) {
            if (arg1 == -0x79e1ae77be533008) {
                if ((pcVar1 + -0x80011d0 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
            }
            else if ((arg1 == -0x57be845bca9148ef) && ((pcVar1 + -0x80011f0 >> 3 | pcVar1 << 0x3d) < 4)) {
                return;
            }
            goto code_r0x08002320;
        }
        if (arg1 == -0x4260ebb633ab377a) {
            pcVar2 = sym.qpnp_tm_shutdown.e10c61da259d613935d147ec18e74131.cfi_jt;
        }
        else {
            if (arg1 != -0x3987c0e26ee29729) goto code_r0x08002320;
            pcVar2 = sym.qpnp_tm_isr.e10c61da259d613935d147ec18e74131.cfi_jt;
        }
    }
    else if (arg1 < 0x13365def634cc965) {
        if (arg1 == -0x3557318fb8d07b71) {
            pcVar2 = sym.qpnp_tm_probe.e10c61da259d613935d147ec18e74131.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08002320;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 == 0x13365def634cc965) {
        pcVar2 = sym.qpnp_tm_get_temp.e10c61da259d613935d147ec18e74131.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002320;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002320:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002374);
    (*pcVar1)();
}


// ===== sym.qpnp_tm_shutdown.e10c61da259d613935d147ec18e74131.cfi_jt @ 0x080011a8 (size 8) =====

void sym.qpnp_tm_shutdown.e10c61da259d613935d147ec18e74131.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < *(*(param_1 + 0xa8) + 0x38)) {
        devm_free_irq(*(*(param_1 + 0xa8) + 8));
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011b0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qpnp_tm_probe.e10c61da259d613935d147ec18e74131.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011b8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qpnp_tm_probe.e10c61da259d613935d147ec18e74131.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qpnp_tm_probe.e10c61da259d613935d147ec18e74131.cfi_jt @ 0x080011c0 (size 8) =====

uint64_t sym.qpnp_tm_probe.e10c61da259d613935d147ec18e74131.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t *arg1;
    int64_t iVar5;
    uint64_t uVar6;
    char *pcVar7;
    code *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    ulong unaff_x30;
    int iStack_60;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar1 = param_1 + 0x10;
    iStack_58 = *(iVar5 + 0x5e0);
    puVar9 = *(param_1 + 0x300);
    iStack_60 = 0;
    arg1 = devm_kmalloc(iVar1,0xa8,0xdc0);
    if (arg1 == NULL) {
        uVar4 = 0xfffffff4;
        goto code_r0x08001598;
    }
    *(param_1 + 0xa8) = arg1;
    arg1[1] = iVar1;
    __mutex_init(arg1 + 8,"&chip->lock",reloc.qpnp_tm_probe.e10c61da259d613935d147ec18e74131.cfi_jt);
    iVar5 = dev_get_regmap(*(param_1 + 0x70),0);
    *arg1 = iVar5;
    if (iVar5 == 0) {
        uVar4 = 0xfffffffa;
        goto code_r0x08001598;
    }
    uVar4 = of_property_read_variable_u32_array(puVar9,0x800037a,&iStack_60,1,0);
    if (uVar4 < 0) goto code_r0x08001598;
    uVar4 = platform_get_irq(param_1,0);
    *(arg1 + 7) = uVar4;
    if (uVar4 < 0) goto code_r0x08001598;
    uVar6 = devm_iio_channel_get(iVar1,"thermal");
    arg1[0xf] = uVar6;
    if ((0xfffffffffffff000 < uVar6) && (arg1[0xf] = 0, uVar6 == -0x205)) {
        uVar4 = 0xfffffdfb;
        goto code_r0x08001598;
    }
    uStack_5c = 0;
    *(arg1 + 0x34) = iStack_60;
    uVar4 = regmap_read(*arg1,iStack_60 + 4,&uStack_5c);
    uVar3 = uStack_5c;
    if (uVar4 < 0) {
        pcVar7 = "could not read type\n";
    }
    else {
        uStack_5c = 0;
        uVar4 = regmap_read(*arg1,*(arg1 + 0x34) + 5,&uStack_5c);
        uVar11 = uStack_5c;
        if (uVar4 < 0) {
            pcVar7 = "could not read subtype\n";
        }
        else {
            uVar10 = uStack_5c & 0xff;
            uStack_5c = 0;
            uVar4 = regmap_read(*arg1,*(arg1 + 0x34) + 1,&uStack_5c);
            uVar2 = uStack_5c;
            if (uVar4 < 0) {
                pcVar7 = "could not read dig_major\n";
            }
            else {
                uStack_5c = 0;
                uVar4 = regmap_read(*arg1,*(arg1 + 0x34),&uStack_5c);
                if (uVar4 < 0) {
                    pcVar7 = "could not read dig_minor\n";
                }
                else {
                    *(arg1 + 0x1c) = uStack_5c & 0xff | (uVar2 & 0xff) << 8;
                    if (((uVar3 & 0xff) != 9) || ((uVar4 = uVar11 & 0xff, 1 < uVar4 - 8 && (uVar4 != 0xc0)))) {
                        _dev_err(iVar1,"invalid type 0x%02x or subtype 0x%02x\n",uVar3 & 0xff,uVar10);
                        uVar4 = 0xffffffed;
                        goto code_r0x08001598;
                    }
                    uVar2 = uVar2 & 0xff;
                    uVar11 = uVar11 & 0xff;
                    *(arg1 + 3) = uVar11;
                    if ((uVar11 == 9) && (1 < uVar2)) {
                        *(arg1 + 0x11) = 1;
                    }
                    else {
                        if ((uVar11 == 9) && (uVar2 != 0)) {
                            pcVar8 = obj.temp_map_gen2_v1;
                        }
                        else {
                            if (uVar11 != 8) goto code_r0x08001404;
                            pcVar8 = obj.temp_map_gen1;
                        }
                        arg1[0x10] = pcVar8;
                    }
code_r0x08001404:
                    if (arg1[0x11] == '\0') {
                        pcVar8 = obj.qpnp_tm_sensor_ops;
                    }
                    else {
                        uStack_5c = 0;
                        uVar4 = regmap_read(*arg1,*(arg1 + 0x34) + 0x47,&uStack_5c);
                        if (uVar4 < 0) goto code_r0x08001598;
                        uVar6 = uStack_5c;
                        uStack_5c = 0;
                        arg1[0x12] = uVar6 * 0x271 + 80000;
                        uVar4 = regmap_read(*arg1,*(arg1 + 0x34) + 0x48,&uStack_5c);
                        if (uVar4 < 0) goto code_r0x08001598;
                        uVar6 = uStack_5c;
                        uStack_5c = 0;
                        arg1[0x13] = uVar6 * 0x271 + 80000;
                        uVar4 = regmap_read(*arg1,*(arg1 + 0x34) + 0x49,&uStack_5c);
                        if (uVar4 < 0) goto code_r0x08001598;
                        pcVar8 = obj.qpnp_tm_sensor_temp_dac_ops;
                        uVar10 = *(arg1 + 3);
                        arg1[0x14] = uStack_5c * 0x271 + 80000;
                    }
                    if (uVar10 == 0xc0) {
                        uStack_5c = 0;
                        uVar4 = regmap_read(*arg1,*(arg1 + 0x34) + 0x50,&uStack_5c,pcVar8);
                        if (uVar4 < 0) goto code_r0x08001598;
                        uVar4 = uStack_5c >> 2;
                        uStack_5c = 0;
                        arg1[0x12] = *(obj.temp_map_lite_warning + (uVar4 & 3) * 8);
                        uVar4 = regmap_read(*arg1,*(arg1 + 0x34) + 0x51,&uStack_5c);
                        if (uVar4 < 0) goto code_r0x08001598;
                        pcVar8 = reloc.qpnp_tm_get_temp.e10c61da259d613935d147ec18e74131.cfi_jt;
                        arg1[0x14] = *(obj.temp_map_lite_shutdown + (uStack_5c >> 2 & 3) * 8);
                    }
                    uVar6 = devm_thermal_zone_of_sensor_register(iVar1,0,arg1,pcVar8);
                    arg1[2] = uVar6;
                    if (0xfffffffffffff000 < uVar6) {
                        _dev_err(iVar1,"failed to register sensor\n");
                        uVar4 = *(arg1 + 2);
                        goto code_r0x08001598;
                    }
                    uVar4 = sym.qpnp_tm_init(arg1);
                    if (-1 < uVar4) {
                        uVar4 = devm_request_threaded_irq
                                          (iVar1,arg1[7],0,sym.qpnp_tm_isr.e10c61da259d613935d147ec18e74131.cfi_jt,
                                           0x2000,*puVar9,arg1);
                        if (-1 < uVar4) {
                            thermal_zone_device_update(arg1[2],0);
                            uVar4 = 0;
                        }
                        goto code_r0x08001598;
                    }
                    pcVar7 = "init failed\n";
                }
            }
        }
    }
    _dev_err(iVar1,pcVar7);
code_r0x08001598:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_58) {
        uVar6 = __stack_chk_fail();
        *extraout_x18 = sym.qpnp_tm_shutdown;
        if (0 < *(*(uVar6 + 0xa8) + 0x38)) {
            uVar6 = devm_free_irq(*(*(uVar6 + 0xa8) + 8));
        }
        return uVar6;
    }
    return uVar4;
}


// ===== sym.qpnp_tm_isr.e10c61da259d613935d147ec18e74131.cfi_jt @ 0x080011c8 (size 8) =====

ulong sym.qpnp_tm_isr.e10c61da259d613935d147ec18e74131.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    thermal_zone_device_update(*(param_2 + 0x10),0);
    return 1;
}


// ===== sym.qpnp_tm_set_trip_temp.e10c61da259d613935d147ec18e74131.cfi_jt @ 0x080011d0 (size 8) =====

uint sym.qpnp_tm_set_trip_temp.e10c61da259d613935d147ec18e74131.cfi_jt(int64_t param_1,int param_2,uint32_t param_3)

{
    uint uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = of_thermal_get_trip_points(*(param_1 + 0x10));
    if (iVar2 == 0) {
        uVar1 = 0xffffffea;
    }
    else if (*(iVar2 + param_2 * 0x18 + 0x10) == 3) {
        mutex_lock(param_1 + 0x40);
        uVar1 = sym.qpnp_tm_update_critical_trip_temp(param_1,param_3);
        mutex_unlock(param_1 + 0x40);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.qpnp_tm_set_temp_dac_trip_temp.e10c61da259d613935d147ec18e74131.cfi_jt @ 0x080011d8 (size 8) =====

uint sym.qpnp_tm_set_temp_dac_trip_temp.e10c61da259d613935d147ec18e74131.cfi_jt
               (int64_t param_1,uint32_t param_2,uint64_t param_3)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + 0x40);
    uVar1 = sym.qpnp_tm_set_temp_dac_thresh(param_1,param_2,param_3 & 0xffffffff);
    mutex_unlock(param_1 + 0x40);
    return uVar1;
}


// ===== sym.qpnp_tm_set_temp_lite_trip_temp.e10c61da259d613935d147ec18e74131.cfi_jt @ 0x080011e0 (size 8) =====

uint sym.qpnp_tm_set_temp_lite_trip_temp.e10c61da259d613935d147ec18e74131.cfi_jt
               (int64_t param_1,uint32_t param_2,uint64_t param_3)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + 0x40);
    uVar1 = sym.qpnp_tm_set_temp_lite_thresh(param_1,param_2,param_3 & 0xffffffff);
    mutex_unlock(param_1 + 0x40);
    return uVar1;
}


// ===== sym.qpnp_tm_get_temp.e10c61da259d613935d147ec18e74131.cfi_jt @ 0x080011e8 (size 8) =====

int sym.qpnp_tm_get_temp.e10c61da259d613935d147ec18e74131.cfi_jt(ulong *param_1,int *param_2)

{
    ulong *puVar1;
    code *pcVar2;
    int iVar3;
    uint64_t uVar4;
    int iVar5;
    uint32_t uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    int iStack_40;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    iStack_40 = 0;
    if (param_2 == NULL) {
        iVar3 = -0x16;
    }
    else if (*(param_1 + 0xe) == '\0') {
        iVar3 = 0;
        *param_2 = 37000;
    }
    else {
        if (param_1[0xf] == 0) {
            puVar1 = param_1 + 8;
            mutex_lock(puVar1);
            uVar4 = mutex_is_locked(puVar1);
            if ((uVar4 & 1) == 0) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x8001ca4);
                (*pcVar2)();
            }
            uStack_3c = 0;
            iVar3 = 0x10;
            if (*(param_1 + 3) != 0xc0) {
                iVar3 = 8;
            }
            iVar3 = regmap_read(*param_1,*(param_1 + 0x34) + iVar3,&uStack_3c);
            if (iVar3 < 0) {
                mutex_unlock(puVar1);
                goto code_r0x08001c6c;
            }
            iVar3 = *(param_1 + 3);
            if (iVar3 == 8) {
                uVar6 = 3;
code_r0x08001b48:
                uVar6 = uVar6 & uStack_3c;
                uVar4 = uVar6;
                pcVar2 = param_1 + 0x2c;
            }
            else {
                if (iVar3 == 0xc0) {
                    uVar6 = 1;
                    goto code_r0x08001b48;
                }
                if (7 < *(param_1 + 0x2c)) goto code_r0x08001cac;
                uVar4 = uStack_3c >> 4 & 7;
                pcVar2 = obj.alarm_state_map + *(param_1 + 0x2c) * 4;
                uVar6 = *(obj.alarm_state_map + uVar4 * 4);
            }
            if (*pcVar2 < uVar6) {
                if ((*(param_1 + 0x11) == '\0') && (iVar3 != 0xc0)) {
                    if ((param_1[0x10] != 0) && ((*(param_1 + 5) | uVar6) < 4)) {
                        piVar7 = param_1[0x10] + *(param_1 + 5) * 0x18 + (uVar6 - 1) * 8;
                        iVar8 = 2000;
code_r0x08001c48:
                        iVar8 = *piVar7 + iVar8;
                        goto code_r0x08001c50;
                    }
                }
                else if (0xfffffffc < uVar6 - 4) {
                    iVar8 = 2000;
                    piVar7 = param_1 + (uVar6 - 1) + 0x12;
                    goto code_r0x08001c48;
                }
                iVar8 = 2000;
code_r0x08001c50:
                param_1[4] = iVar8;
            }
            else if (uVar6 < *pcVar2) {
                if ((*(param_1 + 0x11) != '\0') || (iVar3 == 0xc0)) {
                    if (2 < uVar6) goto code_r0x08001c20;
                    piVar7 = param_1 + uVar6 + 0x12;
code_r0x08001c44:
                    iVar8 = -2000;
                    goto code_r0x08001c48;
                }
                if ((param_1[0x10] != 0) && ((*(param_1 + 5) | uVar6 + 1) < 4)) {
                    piVar7 = param_1[0x10] + *(param_1 + 5) * 0x18 + uVar6 * 8;
                    goto code_r0x08001c44;
                }
code_r0x08001c20:
                iVar8 = -2000;
                goto code_r0x08001c50;
            }
            *(param_1 + 0x2c) = uVar4;
            mutex_unlock(puVar1);
            iVar5 = param_1[4];
        }
        else {
            iVar3 = iio_read_channel_processed(param_1[0xf],&iStack_40);
            if (iVar3 < 0) goto code_r0x08001c6c;
            param_1[4] = iStack_40;
            iVar5 = iStack_40;
        }
        iVar3 = 0;
        *param_2 = iVar5;
    }
code_r0x08001c6c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    __stack_chk_fail();
code_r0x08001cac:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8001cb0);
    (*pcVar2)();
}


// ===== sym.qpnp_tm_resume.e10c61da259d613935d147ec18e74131.cfi_jt @ 0x080011f0 (size 8) =====

ulong sym.qpnp_tm_resume.e10c61da259d613935d147ec18e74131.cfi_jt(void)

{
    return 0;
}


// ===== sym.qpnp_tm_restore.e10c61da259d613935d147ec18e74131.cfi_jt @ 0x080011f8 (size 8) =====

int sym.qpnp_tm_restore.e10c61da259d613935d147ec18e74131.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int iVar2;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    if (0 < *(arg1 + 0x38)) {
        uVar1 = 0x2003;
        if (*(arg1 + 0x18) != 9) {
            uVar1 = 0x2001;
        }
        iVar2 = devm_request_threaded_irq
                          (param_1,*(arg1 + 0x38),0,sym.qpnp_tm_isr.e10c61da259d613935d147ec18e74131.cfi_jt,uVar1,
                           **(param_1 + 0x2f0),arg1);
        if (iVar2 < 0) {
            return iVar2;
        }
    }
    iVar2 = sym.qpnp_tm_init(arg1);
    if (iVar2 < 0) {
        _dev_err(param_1,"init failed\n");
    }
    return iVar2;
}


// ===== sym.qpnp_tm_freeze.e10c61da259d613935d147ec18e74131.cfi_jt @ 0x08001200 (size 8) =====

ulong sym.qpnp_tm_freeze.e10c61da259d613935d147ec18e74131.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < *(*(param_1 + 0x98) + 0x38)) {
        devm_free_irq();
    }
    return 0;
}


// ===== sym.qpnp_tm_suspend.e10c61da259d613935d147ec18e74131.cfi_jt @ 0x08001208 (size 8) =====

ulong sym.qpnp_tm_suspend.e10c61da259d613935d147ec18e74131.cfi_jt(void)

{
    return 0;
}


// ===== sym.qpnp_tm_probe @ 0x08001210 (size 1112) =====

uint64_t sym.qpnp_tm_probe(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t *arg1_00;
    int64_t iVar5;
    uint64_t uVar6;
    char *pcVar7;
    code *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    ulong unaff_x30;
    int iStack_60;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar1 = arg1 + 0x10;
    iStack_58 = *(iVar5 + 0x5e0);
    puVar9 = *(arg1 + 0x300);
    iStack_60 = 0;
    arg1_00 = devm_kmalloc(iVar1,0xa8,0xdc0);
    if (arg1_00 == NULL) {
        uVar4 = 0xfffffff4;
        goto code_r0x08001598;
    }
    *(arg1 + 0xa8) = arg1_00;
    arg1_00[1] = iVar1;
    __mutex_init(arg1_00 + 8,"&chip->lock",reloc.qpnp_tm_probe.e10c61da259d613935d147ec18e74131.cfi_jt);
    iVar5 = dev_get_regmap(*(arg1 + 0x70),0);
    *arg1_00 = iVar5;
    if (iVar5 == 0) {
        uVar4 = 0xfffffffa;
        goto code_r0x08001598;
    }
    uVar4 = of_property_read_variable_u32_array(puVar9,0x800037a,&iStack_60,1,0);
    if (uVar4 < 0) goto code_r0x08001598;
    uVar4 = platform_get_irq(arg1,0);
    *(arg1_00 + 7) = uVar4;
    if (uVar4 < 0) goto code_r0x08001598;
    uVar6 = devm_iio_channel_get(iVar1,"thermal");
    arg1_00[0xf] = uVar6;
    if ((0xfffffffffffff000 < uVar6) && (arg1_00[0xf] = 0, uVar6 == -0x205)) {
        uVar4 = 0xfffffdfb;
        goto code_r0x08001598;
    }
    uStack_5c = 0;
    *(arg1_00 + 0x34) = iStack_60;
    uVar4 = regmap_read(*arg1_00,iStack_60 + 4,&uStack_5c);
    uVar3 = uStack_5c;
    if (uVar4 < 0) {
        pcVar7 = "could not read type\n";
    }
    else {
        uStack_5c = 0;
        uVar4 = regmap_read(*arg1_00,*(arg1_00 + 0x34) + 5,&uStack_5c);
        uVar11 = uStack_5c;
        if (uVar4 < 0) {
            pcVar7 = "could not read subtype\n";
        }
        else {
            uVar10 = uStack_5c & 0xff;
            uStack_5c = 0;
            uVar4 = regmap_read(*arg1_00,*(arg1_00 + 0x34) + 1,&uStack_5c);
            uVar2 = uStack_5c;
            if (uVar4 < 0) {
                pcVar7 = "could not read dig_major\n";
            }
            else {
                uStack_5c = 0;
                uVar4 = regmap_read(*arg1_00,*(arg1_00 + 0x34),&uStack_5c);
                if (uVar4 < 0) {
                    pcVar7 = "could not read dig_minor\n";
                }
                else {
                    *(arg1_00 + 0x1c) = uStack_5c & 0xff | (uVar2 & 0xff) << 8;
                    if (((uVar3 & 0xff) != 9) || ((uVar4 = uVar11 & 0xff, 1 < uVar4 - 8 && (uVar4 != 0xc0)))) {
                        _dev_err(iVar1,"invalid type 0x%02x or subtype 0x%02x\n",uVar3 & 0xff,uVar10);
                        uVar4 = 0xffffffed;
                        goto code_r0x08001598;
                    }
                    uVar2 = uVar2 & 0xff;
                    uVar11 = uVar11 & 0xff;
                    *(arg1_00 + 3) = uVar11;
                    if ((uVar11 == 9) && (1 < uVar2)) {
                        *(arg1_00 + 0x11) = 1;
                    }
                    else {
                        if ((uVar11 == 9) && (uVar2 != 0)) {
                            pcVar8 = obj.temp_map_gen2_v1;
                        }
                        else {
                            if (uVar11 != 8) goto code_r0x08001404;
                            pcVar8 = obj.temp_map_gen1;
                        }
                        arg1_00[0x10] = pcVar8;
                    }
code_r0x08001404:
                    if (arg1_00[0x11] == '\0') {
                        pcVar8 = obj.qpnp_tm_sensor_ops;
                    }
                    else {
                        uStack_5c = 0;
                        uVar4 = regmap_read(*arg1_00,*(arg1_00 + 0x34) + 0x47,&uStack_5c);
                        if (uVar4 < 0) goto code_r0x08001598;
                        uVar6 = uStack_5c;
                        uStack_5c = 0;
                        arg1_00[0x12] = uVar6 * 0x271 + 80000;
                        uVar4 = regmap_read(*arg1_00,*(arg1_00 + 0x34) + 0x48,&uStack_5c);
                        if (uVar4 < 0) goto code_r0x08001598;
                        uVar6 = uStack_5c;
                        uStack_5c = 0;
                        arg1_00[0x13] = uVar6 * 0x271 + 80000;
                        uVar4 = regmap_read(*arg1_00,*(arg1_00 + 0x34) + 0x49,&uStack_5c);
                        if (uVar4 < 0) goto code_r0x08001598;
                        pcVar8 = obj.qpnp_tm_sensor_temp_dac_ops;
                        uVar10 = *(arg1_00 + 3);
                        arg1_00[0x14] = uStack_5c * 0x271 + 80000;
                    }
                    if (uVar10 == 0xc0) {
                        uStack_5c = 0;
                        uVar4 = regmap_read(*arg1_00,*(arg1_00 + 0x34) + 0x50,&uStack_5c,pcVar8);
                        if (uVar4 < 0) goto code_r0x08001598;
                        uVar4 = uStack_5c >> 2;
                        uStack_5c = 0;
                        arg1_00[0x12] = *(obj.temp_map_lite_warning + (uVar4 & 3) * 8);
                        uVar4 = regmap_read(*arg1_00,*(arg1_00 + 0x34) + 0x51,&uStack_5c);
                        if (uVar4 < 0) goto code_r0x08001598;
                        pcVar8 = reloc.qpnp_tm_get_temp.e10c61da259d613935d147ec18e74131.cfi_jt;
                        arg1_00[0x14] = *(obj.temp_map_lite_shutdown + (uStack_5c >> 2 & 3) * 8);
                    }
                    uVar6 = devm_thermal_zone_of_sensor_register(iVar1,0,arg1_00,pcVar8);
                    arg1_00[2] = uVar6;
                    if (0xfffffffffffff000 < uVar6) {
                        _dev_err(iVar1,"failed to register sensor\n");
                        uVar4 = *(arg1_00 + 2);
                        goto code_r0x08001598;
                    }
                    uVar4 = sym.qpnp_tm_init(arg1_00);
                    if (-1 < uVar4) {
                        uVar4 = devm_request_threaded_irq
                                          (iVar1,arg1_00[7],0,sym.qpnp_tm_isr.e10c61da259d613935d147ec18e74131.cfi_jt
                                           ,0x2000,*puVar9,arg1_00);
                        if (-1 < uVar4) {
                            thermal_zone_device_update(arg1_00[2],0);
                            uVar4 = 0;
                        }
                        goto code_r0x08001598;
                    }
                    pcVar7 = "init failed\n";
                }
            }
        }
    }
    _dev_err(iVar1,pcVar7);
code_r0x08001598:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_58) {
        uVar6 = __stack_chk_fail();
        *extraout_x18 = sym.qpnp_tm_shutdown;
        if (0 < *(*(uVar6 + 0xa8) + 0x38)) {
            uVar6 = devm_free_irq(*(*(uVar6 + 0xa8) + 8));
        }
        return uVar6;
    }
    return uVar4;
}


// ===== sym.qpnp_tm_shutdown @ 0x08001668 (size 56) =====

void sym.qpnp_tm_shutdown(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < *(*(arg1 + 0xa8) + 0x38)) {
        devm_free_irq(*(*(arg1 + 0xa8) + 8));
    }
    return;
}


// ===== sym.qpnp_tm_init @ 0x080016a0 (size 892) =====

int sym.qpnp_tm_init(int64_t arg1)

{
    int64_t iVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t extraout_x1;
    int64_t iVar7;
    ulong uVar8;
    ulong uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar11;
    uint64_t uVar12;
    uint32_t *puVar13;
    int *piVar14;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    ulong *puVar10;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    mutex_lock(arg1 + 0x40);
    uStack_4c = 0;
    iVar3 = regmap_read(*arg1,*(arg1 + 0x34) + 0x40,&uStack_4c);
    if (iVar3 < 0) goto code_r0x080019a4;
    iVar3 = 0x10;
    if (*(arg1 + 0x18) != 0xc0) {
        iVar3 = 8;
    }
    *(arg1 + 0x20) = 37000;
    *(arg1 + 0x28) = uStack_4c & 3;
    uStack_4c = 0;
    iVar3 = regmap_read(*arg1,*(arg1 + 0x34) + iVar3,&uStack_4c);
    if (iVar3 < 0) goto code_r0x080019a4;
    iVar3 = *(arg1 + 0x18);
    if (iVar3 == 8) {
        uVar4 = 3;
code_r0x08001760:
        uVar4 = uVar4 & uStack_4c;
        *(arg1 + 0x2c) = uVar4;
        if (uVar4 != 0) goto code_r0x0800176c;
code_r0x080017c0:
        if (iVar3 == 0xc0) goto code_r0x080017c8;
code_r0x08001860:
        cVar2 = *(arg1 + 0x88);
        uVar4 = of_thermal_get_ntrips(*(arg1 + 0x10));
        if (cVar2 == '\0') {
            uVar11 = 0xfffbd1b0;
            if ((0 < uVar4) && (iVar5 = of_thermal_get_trip_points(*(arg1 + 0x10)), iVar5 != 0)) {
                uVar12 = 0;
                piVar14 = iVar5 + 0x10;
                do {
                    uVar6 = of_thermal_is_trip_valid(*(arg1 + 0x10),uVar12 & 0xffffffff);
                    if (((uVar6 & 1) != 0) && (*piVar14 == 3)) {
                        uVar11 = piVar14[-2];
                        break;
                    }
                    uVar12 = uVar12 + 1;
                    piVar14 = piVar14 + 6;
                    uVar11 = 0xfffbd1b0;
                } while (uVar4 != uVar12);
            }
            iVar3 = sym.qpnp_tm_update_critical_trip_temp(arg1,uVar11);
            if (iVar3 < 0) goto code_r0x080019a4;
        }
        else if (0 < uVar4) {
            iVar5 = of_thermal_get_trip_points(*(arg1 + 0x10));
            if (iVar5 == 0) goto code_r0x08001964;
            uVar12 = 0;
            puVar13 = iVar5 + 8;
            do {
                uVar6 = of_thermal_is_trip_valid(*(arg1 + 0x10),uVar12 & 0xffffffff);
                if (((uVar6 & 1) != 0) && (iVar3 = sym.qpnp_tm_set_temp_dac_thresh(arg1,uVar12,*puVar13), iVar3 < 0))
                goto code_r0x080019a4;
                uVar12 = uVar12 + 1;
                puVar13 = puVar13 + 6;
            } while (uVar4 != uVar12);
            iVar5 = *(arg1 + 0x90);
            iVar1 = *(arg1 + 0x98);
            if (iVar5 < iVar1) {
                if (iVar1 < *(arg1 + 0xa0)) goto code_r0x08001984;
                uVar8 = 1;
                uVar9 = 2;
                iVar7 = *(arg1 + 0xa0);
                iVar5 = iVar1;
            }
            else {
                uVar8 = 0;
                uVar9 = 1;
                iVar7 = iVar1;
            }
            _dev_err(*(arg1 + 8),"Threshold %d=%ld <= threshold %d=%ld\n",uVar9,iVar7,uVar8,iVar5);
            iVar3 = -0x16;
            goto code_r0x080019a4;
        }
    }
    else {
        if (iVar3 == 0xc0) {
            uVar4 = 1;
            goto code_r0x08001760;
        }
        uVar12 = uStack_4c >> 4 & 7;
        uVar4 = *(obj.alarm_state_map + uVar12 * 4);
        *(arg1 + 0x2c) = uVar12;
        if (uVar4 == 0) goto code_r0x080017c0;
code_r0x0800176c:
        if ((*(arg1 + 0x88) == '\0') && (iVar3 != 0xc0)) {
            if ((*(arg1 + 0x80) != 0) && ((*(arg1 + 0x28) | uVar4) < 4)) {
                puVar10 = *(arg1 + 0x80) + *(arg1 + 0x28) * 0x18 + (uVar4 - 1) * 8;
                goto code_r0x08001850;
            }
code_r0x0800183c:
            uVar9 = 0;
        }
        else {
            if (uVar4 - 4 < 0xfffffffd) goto code_r0x0800183c;
            puVar10 = arg1 + (uVar4 - 1) * 8 + 0x90;
code_r0x08001850:
            uVar9 = *puVar10;
        }
        *(arg1 + 0x20) = uVar9;
        if (iVar3 != 0xc0) goto code_r0x08001860;
code_r0x080017c8:
        uVar4 = of_thermal_get_ntrips(*(arg1 + 0x10));
        if (0 < uVar4) {
            iVar5 = of_thermal_get_trip_points(*(arg1 + 0x10));
            if (iVar5 != 0) {
                uVar12 = 0;
                puVar13 = iVar5 + 8;
                do {
                    uVar6 = of_thermal_is_trip_valid(*(arg1 + 0x10),uVar12 & 0xffffffff);
                    if (((uVar6 & 1) != 0) &&
                       (iVar3 = sym.qpnp_tm_set_temp_lite_thresh(arg1,uVar12,*puVar13), iVar3 < 0))
                    goto code_r0x080019a4;
                    uVar12 = uVar12 + 1;
                    puVar13 = puVar13 + 6;
                } while (uVar4 != uVar12);
                if (*(arg1 + 0x90) < *(arg1 + 0xa0)) goto code_r0x08001984;
                _dev_err(*(arg1 + 8),"Threshold 2=%ld <= threshold 0=%ld\n");
            }
code_r0x08001964:
            iVar3 = -0x16;
            goto code_r0x080019a4;
        }
    }
code_r0x08001984:
    iVar3 = regmap_write(*arg1,*(arg1 + 0x34) + 0x46,0x80);
    *(arg1 + 0x70) = 1;
code_r0x080019a4:
    mutex_unlock(arg1 + 0x40);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return iVar3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qpnp_tm_isr;
    thermal_zone_device_update(*(extraout_x1 + 0x10),0);
    return 1;
}


// ===== sym.qpnp_tm_isr @ 0x08001a1c (size 48) =====

ulong sym.qpnp_tm_isr(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    thermal_zone_device_update(*(arg1 + 0x10),0);
    return 1;
}


// ===== sym.qpnp_tm_get_temp @ 0x08001a4c (size 612) =====

int sym.qpnp_tm_get_temp(int arg1,int64_t arg2)

{
    ulong *puVar1;
    code *pcVar2;
    int iVar3;
    ulong *puVar4;
    uint64_t uVar5;
    int iVar6;
    uint32_t uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong unaff_x30;
    int iStack_40;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    puVar4 = arg1;
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    iStack_40 = 0;
    if (arg2 == 0) {
        iVar3 = -0x16;
    }
    else if (*(puVar4 + 0xe) == '\0') {
        iVar3 = 0;
        *arg2 = 37000;
    }
    else {
        if (puVar4[0xf] == 0) {
            puVar1 = puVar4 + 8;
            mutex_lock(puVar1);
            uVar5 = mutex_is_locked(puVar1);
            if ((uVar5 & 1) == 0) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x8001ca4);
                (*pcVar2)();
            }
            uStack_3c = 0;
            iVar3 = 0x10;
            if (*(puVar4 + 3) != 0xc0) {
                iVar3 = 8;
            }
            iVar3 = regmap_read(*puVar4,*(puVar4 + 0x34) + iVar3,&uStack_3c);
            if (iVar3 < 0) {
                mutex_unlock(puVar1);
                goto code_r0x08001c6c;
            }
            iVar3 = *(puVar4 + 3);
            if (iVar3 == 8) {
                uVar7 = 3;
code_r0x08001b48:
                uVar7 = uVar7 & uStack_3c;
                uVar5 = uVar7;
                pcVar2 = puVar4 + 0x2c;
            }
            else {
                if (iVar3 == 0xc0) {
                    uVar7 = 1;
                    goto code_r0x08001b48;
                }
                if (7 < *(puVar4 + 0x2c)) goto code_r0x08001cac;
                uVar5 = uStack_3c >> 4 & 7;
                pcVar2 = obj.alarm_state_map + *(puVar4 + 0x2c) * 4;
                uVar7 = *(obj.alarm_state_map + uVar5 * 4);
            }
            if (*pcVar2 < uVar7) {
                if ((*(puVar4 + 0x11) == '\0') && (iVar3 != 0xc0)) {
                    if ((puVar4[0x10] != 0) && ((*(puVar4 + 5) | uVar7) < 4)) {
                        piVar8 = puVar4[0x10] + *(puVar4 + 5) * 0x18 + (uVar7 - 1) * 8;
                        iVar9 = 2000;
code_r0x08001c48:
                        iVar9 = *piVar8 + iVar9;
                        goto code_r0x08001c50;
                    }
                }
                else if (0xfffffffc < uVar7 - 4) {
                    iVar9 = 2000;
                    piVar8 = puVar4 + (uVar7 - 1) + 0x12;
                    goto code_r0x08001c48;
                }
                iVar9 = 2000;
code_r0x08001c50:
                puVar4[4] = iVar9;
            }
            else if (uVar7 < *pcVar2) {
                if ((*(puVar4 + 0x11) != '\0') || (iVar3 == 0xc0)) {
                    if (2 < uVar7) goto code_r0x08001c20;
                    piVar8 = puVar4 + uVar7 + 0x12;
code_r0x08001c44:
                    iVar9 = -2000;
                    goto code_r0x08001c48;
                }
                if ((puVar4[0x10] != 0) && ((*(puVar4 + 5) | uVar7 + 1) < 4)) {
                    piVar8 = puVar4[0x10] + *(puVar4 + 5) * 0x18 + uVar7 * 8;
                    goto code_r0x08001c44;
                }
code_r0x08001c20:
                iVar9 = -2000;
                goto code_r0x08001c50;
            }
            *(puVar4 + 0x2c) = uVar5;
            mutex_unlock(puVar1);
            iVar6 = puVar4[4];
        }
        else {
            iVar3 = iio_read_channel_processed(puVar4[0xf],&iStack_40);
            if (iVar3 < 0) goto code_r0x08001c6c;
            puVar4[4] = iStack_40;
            iVar6 = iStack_40;
        }
        iVar3 = 0;
        *arg2 = iVar6;
    }
code_r0x08001c6c:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    __stack_chk_fail();
code_r0x08001cac:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8001cb0);
    (*pcVar2)();
}


// ===== sym.qpnp_tm_set_trip_temp @ 0x08001cb0 (size 148) =====

uint sym.qpnp_tm_set_trip_temp(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = of_thermal_get_trip_points(*(arg1 + 0x10));
    if (iVar2 == 0) {
        uVar1 = 0xffffffea;
    }
    else if (*(iVar2 + arg2 * 0x18 + 0x10) == 3) {
        mutex_lock(arg1 + 0x40);
        uVar1 = sym.qpnp_tm_update_critical_trip_temp(arg1,arg3 & 0xffffffff);
        mutex_unlock(arg1 + 0x40);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.qpnp_tm_update_critical_trip_temp @ 0x08001d44 (size 320) =====

void sym.qpnp_tm_update_critical_trip_temp(int64_t arg1,int64_t arg2)

{
    uchar auVar1 [16];
    bool bVar2;
    code *pcVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint8_t uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(*(arg1 + 0x80) + 8);
    iVar7 = *(*(arg1 + 0x80) + 0x50);
    uVar4 = mutex_is_locked(arg1 + 0x40);
    if ((uVar4 & 1) != 0) {
        if ((arg2 == -0x42e50) || (iVar5 = arg2, iVar5 < iVar8)) {
            uVar6 = 8;
            *(arg1 + 0x28) = 0;
        }
        else {
            if (iVar7 < iVar5) {
                *(arg1 + 0x28) = 3;
                if (*(arg1 + 0x78) == 0) {
                    _dev_warn(*(arg1 + 8),
                              "No ADC is configured and critical temperature is above the maximum stage 2 threshold of 140 C! Configuring stage 2 shutdown at 140 C.\n"
                             );
                    bVar2 = false;
                }
                else {
                    bVar2 = true;
                }
            }
            else {
                auVar1 = SEXT816(iVar7 - iVar5) * SEXT816(-0x346dc5d63886594b);
                bVar2 = true;
                *(arg1 + 0x28) = ((auVar1._8_8_ >> 10) - (auVar1._12_4_ >> 0x1f)) + 3;
            }
            if ((*(arg1 + 0x18) == 9) && ((*(arg1 + 0x1c) - 0x100U < 2 || (*(arg1 + 0x1c) - 1U < 2)))) {
                uVar6 = *(arg1 + 0x28) | 8;
            }
            else if (bVar2) {
                uVar6 = *(arg1 + 0x28) | 0x48;
            }
            else {
                uVar6 = *(arg1 + 0x28) | 8;
            }
        }
        regmap_write(*arg1,*(arg1 + 0x34) + 0x40,uVar6);
        return;
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x800,0x8001e84);
    (*pcVar3)();
}


// ===== sym.qpnp_tm_set_temp_dac_trip_temp @ 0x08001e88 (size 104) =====

uint sym.qpnp_tm_set_temp_dac_trip_temp(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x40);
    uVar1 = sym.qpnp_tm_set_temp_dac_thresh(arg1,arg2,arg3 & 0xffffffff);
    mutex_unlock(arg1 + 0x40);
    return uVar1;
}


// ===== sym.qpnp_tm_set_temp_dac_thresh @ 0x08001ef0 (size 276) =====

uint64_t sym.qpnp_tm_set_temp_dac_thresh(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    uint64_t uVar5;
    uint32_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = arg2;
    if (arg2 < 3) {
        if ((79999 < arg3) && ((arg3 & 0xffffffffU) <= *(obj.temp_dac_max + uVar5 * 8))) {
            iVar2 = arg3 * 8 + -640000;
            uVar1 = (iVar2 * 0x68db8bad >> 0x2b) - (iVar2 >> 0x1f) & 0xff;
            iVar2 = regmap_write(*arg1,arg2 + *(arg1 + 0x34) + 0x47,uVar1);
            if (iVar2 < 0) {
                uVar5 = _dev_err(*(arg1 + 8),"TEMP_DAC_STG write failed, ret=%d\n",iVar2);
                return uVar5;
            }
            uVar6 = 0;
            *(arg1 + uVar5 * 8 + 0x90) = uVar1 * 0x271 + 80000;
            goto code_r0x08001f9c;
        }
        uVar3 = *(arg1 + 8);
        pcVar4 = "invalid TEMP_DAC temp = %d\n";
        uVar5 = arg3;
    }
    else {
        uVar3 = *(arg1 + 8);
        pcVar4 = "invalid TEMP_DAC trip = %d\n";
    }
    _dev_err(uVar3,pcVar4,uVar5);
    uVar6 = 0xffffffea;
code_r0x08001f9c:
    return uVar6;
}


// ===== sym.qpnp_tm_set_temp_lite_trip_temp @ 0x08002004 (size 104) =====

uint sym.qpnp_tm_set_temp_lite_trip_temp(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x40);
    uVar1 = sym.qpnp_tm_set_temp_lite_thresh(arg1,arg2,arg3 & 0xffffffff);
    mutex_unlock(arg1 + 0x40);
    return uVar1;
}


// ===== sym.qpnp_tm_set_temp_lite_thresh @ 0x0800206c (size 432) =====

int sym.qpnp_tm_set_temp_lite_thresh(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    uint64_t uVar3;
    char *pcVar4;
    int64_t iVar5;
    int64_t iVar6;
    code *pcVar7;
    int64_t iVar8;
    ulong *in_x18;
    int iVar9;
    uint32_t uVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    uVar3 = arg2;
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    if (arg2 < 3) {
        if (arg2 == 0) {
            iVar9 = 0x50;
            pcVar7 = obj.temp_map_lite_warning;
code_r0x080020d0:
            iVar8 = arg3;
            if ((iVar8 < *pcVar7) || (iVar5 = *(pcVar7 + 0x18), iVar5 < iVar8)) {
                uVar2 = *(arg1 + 8);
                pcVar4 = "invalid TEMP_LITE temp = %d\n";
                uVar3 = arg3;
                goto code_r0x080021a8;
            }
            if (iVar8 < iVar5) {
                iVar5 = *(pcVar7 + 0x10);
                if (iVar8 < iVar5) {
                    iVar6 = *(pcVar7 + 8);
                    iVar5 = *pcVar7;
                    if (iVar6 <= iVar8) {
                        iVar5 = iVar6;
                    }
                    uVar10 = (iVar6 <= iVar8) << 2;
                }
                else {
                    uVar10 = 8;
                }
            }
            else {
                uVar10 = 0xc;
            }
            piVar11 = arg1 + uVar3 * 8 + 0x90;
            if (iVar5 != *piVar11) {
                uStack_4c = 0;
                iVar1 = regmap_read(*arg1,*(arg1 + 0x34) + iVar9,&uStack_4c);
                if (iVar1 < 0) {
                    uVar2 = *(arg1 + 8);
                    pcVar4 = "LITE_TEMP_CFG read failed, ret=%d\n";
                }
                else {
                    iVar1 = regmap_write(*arg1,*(arg1 + 0x34) + iVar9,uStack_4c & 0xf3 | uVar10);
                    if (-1 < iVar1) {
                        iVar1 = 0;
                        *piVar11 = iVar5;
                        goto code_r0x080021b0;
                    }
                    uVar2 = *(arg1 + 8);
                    pcVar4 = "LITE_TEMP_CFG write failed, ret=%d\n";
                }
                _dev_err(uVar2,pcVar4,iVar1);
                goto code_r0x080021b0;
            }
        }
        else if (arg2 == 2) {
            iVar9 = 0x51;
            pcVar7 = obj.temp_map_lite_shutdown;
            goto code_r0x080020d0;
        }
        iVar1 = 0;
    }
    else {
        uVar2 = *(arg1 + 8);
        pcVar4 = "invalid TEMP_LITE trip = %d\n";
code_r0x080021a8:
        _dev_err(uVar2,pcVar4,uVar3);
        iVar1 = -0x16;
    }
code_r0x080021b0:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return iVar1;
    }
    __stack_chk_fail();
    return 0;
}


// ===== sym.qpnp_tm_suspend @ 0x0800221c (size 16) =====

ulong sym.qpnp_tm_suspend(int64_t arg1)

{
    return 0;
}


// ===== sym.qpnp_tm_resume @ 0x0800222c (size 16) =====

ulong sym.qpnp_tm_resume(int64_t arg1)

{
    return 0;
}


// ===== sym.qpnp_tm_freeze @ 0x0800223c (size 56) =====

ulong sym.qpnp_tm_freeze(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < *(*(arg1 + 0x98) + 0x38)) {
        devm_free_irq();
    }
    return 0;
}


// ===== sym.qpnp_tm_restore @ 0x08002274 (size 168) =====

int sym.qpnp_tm_restore(int64_t arg1)

{
    ulong uVar1;
    int iVar2;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    if (0 < *(arg1_00 + 0x38)) {
        uVar1 = 0x2003;
        if (*(arg1_00 + 0x18) != 9) {
            uVar1 = 0x2001;
        }
        iVar2 = devm_request_threaded_irq
                          (arg1,*(arg1_00 + 0x38),0,sym.qpnp_tm_isr.e10c61da259d613935d147ec18e74131.cfi_jt,uVar1,
                           **(arg1 + 0x2f0),arg1_00);
        if (iVar2 < 0) {
            return iVar2;
        }
    }
    iVar2 = sym.qpnp_tm_init(arg1_00);
    if (iVar2 < 0) {
        _dev_err(arg1,"init failed\n");
    }
    return iVar2;
}


// ===== sym.__cfi_check_fail @ 0x0800231c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002360

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
    //switch table (4 cases) at 0x80003f9
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002374);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002384 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qpnp_tm_probe.e10c61da259d613935d147ec18e74131.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080023b8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qpnp_tm_probe.e10c61da259d613935d147ec18e74131.cfi_jt);
    return;
}

