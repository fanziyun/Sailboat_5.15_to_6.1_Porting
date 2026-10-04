// decompiled from max31760_fan by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 488) =====

//WARNING: Switch with 1 destination removed at 0x08001fec

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x369ba1b7d1376e4f) {
        if (arg1 < 0x2b3a43e29242445) {
            if (arg1 == -0x66d421a09845f9f8) {
                if ((pcVar1 + -0x8001220 >> 3 | pcVar1 << 0x3d) < 4) {
                    return;
                }
                goto code_r0x08001fac;
            }
            if (arg1 != -0x57be845bca9148ef) goto code_r0x08001fac;
            pcVar2 = sym.max31760_resume.659d526eaddf04a1844922186a263a53.cfi_jt;
code_r0x0800118c:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001fac;
        }
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 == 0x18aafba39062885f) {
            pcVar2 = sym.max31760_probe.659d526eaddf04a1844922186a263a53.cfi_jt;
        }
        else {
            if (arg1 != 0x1e3d0ffe3d0499e9) goto code_r0x08001fac;
            pcVar2 = sym.speed_control_store.659d526eaddf04a1844922186a263a53.cfi_jt;
        }
    }
    else if (arg1 < 0x6b571d3f779580cd) {
        if (arg1 == 0x369ba1b7d1376e4f) {
            pcVar2 = sym.max31760_shutdown.659d526eaddf04a1844922186a263a53.cfi_jt;
        }
        else {
            if (arg1 != 0x519d946a5cb8d608) goto code_r0x08001fac;
            pcVar2 = sym.max31760_set_cur_state.659d526eaddf04a1844922186a263a53.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x6b571d3f779580cd) {
            pcVar2 = sym.max31760_get_max_state.659d526eaddf04a1844922186a263a53.cfi_jt;
            goto code_r0x0800118c;
        }
        if (arg1 == 0x7e04a0fb7ad8bcd5) {
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
        else {
            if (arg1 != 0x7ea68a074636b5b8) goto code_r0x08001fac;
            pcVar2 = sym.max31760_remove.659d526eaddf04a1844922186a263a53.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001fac:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002000);
    (*pcVar1)();
}


// ===== sym.max31760_remove.659d526eaddf04a1844922186a263a53.cfi_jt @ 0x080011f0 (size 8) =====

ulong sym.max31760_remove.659d526eaddf04a1844922186a263a53.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0xb8);
    if (iVar2 != 0) {
        thermal_cooling_device_unregister(*(iVar2 + 0x10));
        regulator_disable(*(iVar2 + 0x48));
        regulator_disable(*(iVar2 + 0x50));
        uVar1 = gpio_to_desc(*(iVar2 + 0x5c));
        gpiod_direction_output_raw(uVar1,0);
        usleep_range_state(20000,0x4e84,2);
        gpio_free(*(iVar2 + 0x5c));
    }
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011f8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_del_driver(obj.max31760_i2c_driver);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001200 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_register_driver(obj.__this_module,obj.max31760_i2c_driver);
    return;
}


// ===== sym.max31760_probe.659d526eaddf04a1844922186a263a53.cfi_jt @ 0x08001208 (size 8) =====

uint64_t sym.max31760_probe.659d526eaddf04a1844922186a263a53.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    uint32_t *puVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    ulong uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    char *pcVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    code *pcVar12;
    uint uVar13;
    uint64_t *puVar14;
    ulong unaff_x30;
    char acStack_70 [5];
    char acStack_6b [3];
    char acStack_68 [5];
    uint uStack_63;
    unkbyte3 Stack_5f;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    if ((param_1 == 0) || (*(param_1 + 0x310) == 0)) {
        _printk(0x8000462);
        uVar5 = 0xffffffea;
        goto code_r0x08001760;
    }
    iVar11 = *(param_1 + 0x18);
    iVar9 = param_1 + 0x20;
    pcVar12 = *(*(iVar11 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x6871e466cec98751,pcVar12,0x8000290);
    uVar5 = (*pcVar12)(iVar11);
    if ((uVar5 & 1) == 0) {
        _dev_err(iVar9,"device doesn\'t support I2C\n");
        uVar5 = 0xffffffed;
        goto code_r0x08001760;
    }
    piVar6 = devm_kmalloc(iVar9,0x68,0xdc0);
    if (piVar6 == NULL) {
        uVar5 = 0xfffffff4;
        goto code_r0x08001760;
    }
    piVar1 = piVar6 + 3;
    *piVar6 = iVar9;
    piVar6[1] = param_1;
    *(param_1 + 0xb8) = piVar6;
    __mutex_init(piVar1,"&pdata->update_lock",obj.max31760_probe.__key);
    iVar11 = *(*piVar6 + 0x2f0);
    if (iVar11 == 0) {
        _printk(0x800056f);
        uVar5 = 0xffffffea;
code_r0x080015fc:
        _dev_err(*piVar6,"failed to parse device tree, ret:%d\n",uVar5);
    }
    else {
        puVar2 = piVar6 + 0xb;
        uVar4 = 1;
        iVar3 = of_property_read_variable_u32_array(iVar11,"maxim,fan-num",puVar2,1,0);
        if (iVar3 < 0) {
code_r0x08001364:
            *puVar2 = uVar4;
        }
        else if (2 < *puVar2) {
            uVar4 = 2;
            goto code_r0x08001364;
        }
        uVar7 = of_get_named_gpio_flags(iVar11,"maxim,pwr-en-gpio",0,0);
        *(piVar6 + 0x5c) = uVar7;
        if (0x1ff < uVar7) {
            _dev_err(*piVar6,"enable gpio not specified\n");
            uVar5 = 0xffffffea;
            goto code_r0x080015fc;
        }
        uVar4 = gpio_request(uVar7,"pwr_en_gpio");
        if (uVar4 != 0) {
            uVar5 = uVar4;
            _printk(0x800060b,uVar5);
            gpio_free(*(piVar6 + 0x5c));
            goto code_r0x080015fc;
        }
        uVar7 = gpio_to_desc(*(piVar6 + 0x5c));
        gpiod_direction_output_raw(uVar7,1);
        usleep_range_state(20000,0x4e84,2);
        uVar8 = devm_regulator_get(*piVar6,"maxim,vdd");
        puVar14 = piVar6 + 9;
        *puVar14 = uVar8;
        if (uVar8 < 0xfffffffffffff001) {
            uVar13 = 3300000;
            regulator_set_voltage(uVar8,3300000,3300000);
            regulator_set_load(piVar6[9],300000);
            iVar3 = regulator_enable(piVar6[9]);
            iVar11 = *piVar6;
            if (-1 < iVar3) {
                uVar8 = devm_regulator_get(iVar11,"maxim,vcca");
                puVar14 = piVar6 + 10;
                *puVar14 = uVar8;
                if (0xfffffffffffff000 < uVar8) {
                    iVar11 = *piVar6;
                    pcVar10 = "couldn\'t get vcca_reg regulator, ret:%d\n";
                    goto code_r0x080016d4;
                }
                uVar13 = 1800000;
                regulator_set_voltage(uVar8,1800000,1800000);
                regulator_set_load(*puVar14,600000);
                iVar3 = regulator_enable(*puVar14);
                if (iVar3 < 0) {
                    iVar11 = *piVar6;
                    pcVar10 = "vcca_reg regulator failed, ret:%d\n";
                    goto code_r0x080016fc;
                }
                goto code_r0x08001480;
            }
            pcVar10 = "vdd_reg regulator failed, ret:%d\n";
code_r0x080016fc:
            _dev_err(iVar11,pcVar10,iVar3);
            regulator_set_voltage(*puVar14,0,uVar13);
            regulator_set_load(*puVar14,0);
            uVar5 = 0xffffffea;
        }
        else {
            iVar11 = *piVar6;
            pcVar10 = "couldn\'t get vdd_reg regulator, ret:%d\n";
code_r0x080016d4:
            _dev_err(iVar11,pcVar10,uVar8 & 0xffffffff);
            uVar5 = uVar8 & 0xffffffff;
            *puVar14 = 0;
            if (uVar8 == 0) {
code_r0x08001480:
                iVar3 = i2c_smbus_write_byte_data(piVar6[1],0,0x19);
                if (iVar3 < 0) {
                    _dev_err(*piVar6,"failed write reg %#x failure, ret:%d\n",0,iVar3);
                }
                iVar3 = i2c_smbus_write_byte_data(piVar6[1],1,0x11);
                if (iVar3 < 0) {
                    _dev_err(*piVar6,"failed write reg %#x failure, ret:%d\n",1,iVar3);
                }
                if (*puVar2 == 2) {
                    iVar11 = piVar6[1];
                    uVar7 = 0x33;
code_r0x080014e0:
                    iVar3 = i2c_smbus_write_byte_data(iVar11,2,uVar7);
                    if (iVar3 < 0) {
                        _dev_err(*piVar6,"failed write reg %#x failure, ret:%d\n",2,iVar3);
                    }
                }
                else if (*puVar2 == 1) {
                    iVar11 = piVar6[1];
                    uVar7 = 0x31;
                    goto code_r0x080014e0;
                }
                mutex_lock(piVar1);
                iVar3 = i2c_smbus_write_byte_data(piVar6[1],0x50,0);
                if (iVar3 < 0) {
                    _dev_err(*piVar6,"failed write reg %#x failure, ret:%d\n",0x50,iVar3);
                }
                *(piVar6 + 0xc) = 0;
                mutex_unlock(piVar1);
                *(piVar6 + 100) = 0;
                Stack_5f = 0;
                uStack_63 = 0;
                acStack_70[0] = str.fan_max31760[0];
                acStack_70[1] = str.fan_max31760[1];
                acStack_70[2] = str.fan_max31760[2];
                acStack_70[3] = str.fan_max31760[3];
                acStack_70[4] = str.fan_max31760[4];
                acStack_6b[0] = str.fan_max31760[5];
                acStack_6b[1] = str.fan_max31760[6];
                acStack_6b[2] = str.fan_max31760[7];
                acStack_68[0] = str.fan_max31760[8];
                acStack_68[1] = str.fan_max31760[9];
                acStack_68[2] = str.fan_max31760[10];
                acStack_68[3] = str.fan_max31760[0xb];
                acStack_68[4] = str.fan_max31760[0xc];
                uVar5 = thermal_of_cooling_device_register
                                  (*(*piVar6 + 0x2f0),acStack_70,piVar6,
                                   reloc.max31760_get_max_state.659d526eaddf04a1844922186a263a53.cfi_jt);
                piVar6[2] = uVar5;
                if (0xfffffffffffff000 < uVar5) {
                    _dev_err(*piVar6,"Cooling register failed for %s, ret:%d\n",acStack_70,uVar5 & 0xffffffff);
                    piVar6[2] = 0;
                    if (uVar5 != 0) {
                        _dev_err(*piVar6,"failed to register cooling device, ret:%d\n",uVar5 & 0xffffffff);
                        sym.max31760_remove(param_1);
                        goto code_r0x08001760;
                    }
                }
                uVar8 = devm_device_add_group(iVar9,obj.max31760_attribute_group);
                uVar5 = uVar8 & 0xffffffff;
                if (uVar8 < 0) {
                    _dev_err(*piVar6,"couldn\'t register sysfs group\n");
                }
                goto code_r0x08001760;
            }
        }
        _dev_err(*piVar6,"failed to enable regulators, ret:%d\n",uVar5);
        uVar7 = gpio_to_desc(*(piVar6 + 0x5c));
        gpiod_direction_output_raw(uVar7,0);
        usleep_range_state(20000,0x4e84,2);
        gpio_free(*(piVar6 + 0x5c));
    }
    *(param_1 + 0xb8) = 0;
code_r0x08001760:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_58) {
        iVar9 = __stack_chk_fail();
        *extraout_x18 = sym.max31760_remove;
        iVar9 = *(iVar9 + 0xb8);
        if (iVar9 != 0) {
            thermal_cooling_device_unregister(*(iVar9 + 0x10));
            regulator_disable(*(iVar9 + 0x48));
            regulator_disable(*(iVar9 + 0x50));
            uVar7 = gpio_to_desc(*(iVar9 + 0x5c));
            gpiod_direction_output_raw(uVar7,0);
            usleep_range_state(20000,0x4e84,2);
            gpio_free(*(iVar9 + 0x5c));
        }
        return 0;
    }
    return uVar5 & 0xffffffff;
}


// ===== sym.max31760_get_max_state.659d526eaddf04a1844922186a263a53.cfi_jt @ 0x08001210 (size 8) =====

ulong sym.max31760_get_max_state.659d526eaddf04a1844922186a263a53.cfi_jt(ulong param_1,ulong *param_2)

{
    *param_2 = 100;
    return 0;
}


// ===== sym.max31760_get_cur_state.659d526eaddf04a1844922186a263a53.cfi_jt @ 0x08001218 (size 8) =====

ulong sym.max31760_get_cur_state.659d526eaddf04a1844922186a263a53.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x3a8);
    iVar1 = iVar2 + 0x18;
    mutex_lock(iVar1);
    *param_2 = *(iVar2 + 0x60);
    mutex_unlock(iVar1);
    return 0;
}


// ===== sym.speed_tc1_show.659d526eaddf04a1844922186a263a53.cfi_jt @ 0x08001220 (size 8) =====

int64_t sym.speed_tc1_show.659d526eaddf04a1844922186a263a53.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar7 = *(param_1 + 0x98);
    if (puVar7 == NULL) {
        _printk(0x800054b);
        iVar5 = -0x13;
    }
    else {
        uVar1 = i2c_smbus_read_byte_data(puVar7[1],0x52);
        if (uVar1 < 0) {
            uVar4 = *puVar7;
            uVar6 = 0x52;
        }
        else {
            uVar2 = i2c_smbus_read_byte_data(puVar7[1],0x53);
            if (-1 < uVar2) {
                uVar1 = uVar2 & 0xff | (uVar1 & 0xff) << 8;
                uVar2 = 0;
                if (uVar1 != 0) {
                    uVar2 = 6000000 / uVar1;
                }
                iVar3 = scnprintf(param_3,0x1000,0x80004bb,uVar2 >> 1);
                return iVar3;
            }
            uVar4 = *puVar7;
            uVar6 = 0x53;
            uVar1 = uVar2;
        }
        _dev_err(uVar4,"%s failed read reg 0x%02x failure, ret:%d\n",uVar6,uVar1);
        _dev_err(*puVar7,"can not read fan speed\n");
        iVar5 = -0x16;
    }
    return iVar5;
}


// ===== sym.pwm_duty_show.659d526eaddf04a1844922186a263a53.cfi_jt @ 0x08001228 (size 8) =====

int64_t sym.pwm_duty_show.659d526eaddf04a1844922186a263a53.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar4 = *(param_1 + 0x98);
    if (puVar4 == NULL) {
        _printk(0x800054b);
        iVar3 = -0x13;
    }
    else {
        uVar1 = i2c_smbus_read_byte_data(puVar4[1],0x50);
        if (uVar1 < 0) {
            _dev_err(*puVar4,"%s failed read reg 0x%02x failure, ret:%d\n",0x50,uVar1);
            iVar3 = uVar1;
        }
        else {
            iVar2 = scnprintf(param_3,0x1000,0x80004bb,(uVar1 & 0xff) * 0x27);
            iVar3 = iVar2;
        }
    }
    return iVar3;
}


// ===== sym.speed_tc2_show.659d526eaddf04a1844922186a263a53.cfi_jt @ 0x08001230 (size 8) =====

int64_t sym.speed_tc2_show.659d526eaddf04a1844922186a263a53.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar7 = *(param_1 + 0x98);
    if (puVar7 == NULL) {
        _printk(0x800054b);
        iVar5 = -0x13;
    }
    else {
        uVar1 = i2c_smbus_read_byte_data(puVar7[1],0x54);
        if (uVar1 < 0) {
            uVar4 = *puVar7;
            uVar6 = 0x54;
        }
        else {
            uVar2 = i2c_smbus_read_byte_data(puVar7[1],0x55);
            if (-1 < uVar2) {
                uVar1 = uVar2 & 0xff | (uVar1 & 0xff) << 8;
                uVar2 = 0;
                if (uVar1 != 0) {
                    uVar2 = 6000000 / uVar1;
                }
                iVar3 = scnprintf(param_3,0x1000,0x80004bb,uVar2 >> 1);
                return iVar3;
            }
            uVar4 = *puVar7;
            uVar6 = 0x55;
            uVar1 = uVar2;
        }
        _dev_err(uVar4,"%s failed read reg 0x%02x failure, ret:%d\n",uVar6,uVar1);
        _dev_err(*puVar7,"can not read fan speed\n");
        iVar5 = -0x16;
    }
    return iVar5;
}


// ===== sym.speed_control_show.659d526eaddf04a1844922186a263a53.cfi_jt @ 0x08001238 (size 8) =====

int64_t sym.speed_control_show.659d526eaddf04a1844922186a263a53.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x98) == 0) {
        _printk(0x800054b);
        iVar2 = -0x13;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x80004bb,*(*(param_1 + 0x98) + 0x60));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.max31760_shutdown.659d526eaddf04a1844922186a263a53.cfi_jt @ 0x08001240 (size 8) =====

void sym.max31760_shutdown.659d526eaddf04a1844922186a263a53.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.max31760_remove(param_1);
    return;
}


// ===== sym.max31760_set_cur_state.659d526eaddf04a1844922186a263a53.cfi_jt @ 0x08001248 (size 8) =====

ulong sym.max31760_set_cur_state.659d526eaddf04a1844922186a263a53.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = *(param_1 + 0x3a8);
    if (param_2 < 0x65) {
        mutex_lock(puVar3 + 3);
        if ((*(puVar3 + 100) == 0) &&
           (iVar1 = i2c_smbus_write_byte_data(puVar3[1],0x50,(param_2 * 0xff >> 2 & 0x3fff) / 0x19), iVar1 < 0)) {
            _dev_err(*puVar3,"failed write reg %#x failure, ret:%d\n",0x50,iVar1);
        }
        *(puVar3 + 0xc) = param_2;
        mutex_unlock(puVar3 + 3);
        uVar2 = 0;
    }
    else {
        _dev_err(*puVar3,"fail to set current state\n");
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.max31760_resume.659d526eaddf04a1844922186a263a53.cfi_jt @ 0x08001250 (size 8) =====

ulong sym.max31760_resume.659d526eaddf04a1844922186a263a53.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar4 = *(param_1 + 0x98);
    if (puVar4 != NULL) {
        *(puVar4 + 100) = 0;
        mutex_lock(puVar4 + 3);
        uVar3 = gpio_to_desc(*(puVar4 + 0x5c));
        gpiod_direction_output_raw(uVar3,1);
        usleep_range_state(20000,0x4e84,2);
        iVar2 = regulator_enable(puVar4[9]);
        if (iVar2 < 0) {
            _dev_err(*puVar4,"vdd_reg regulator failed, ret:%d\n",iVar2);
        }
        iVar2 = i2c_smbus_write_byte_data(puVar4[1],0,0x19);
        if (iVar2 < 0) {
            _dev_err(*puVar4,"failed write reg %#x failure, ret:%d\n",0,iVar2);
        }
        iVar2 = i2c_smbus_write_byte_data(puVar4[1],1,0x11);
        if (iVar2 < 0) {
            _dev_err(*puVar4,"failed write reg %#x failure, ret:%d\n",1,iVar2);
        }
        iVar2 = i2c_smbus_write_byte_data(puVar4[1],2,0x31);
        if (iVar2 < 0) {
            _dev_err(*puVar4,"failed write reg %#x failure, ret:%d\n",2,iVar2);
        }
        uVar1 = *(puVar4 + 0xc);
        if ((*(puVar4 + 100) == 0) &&
           (iVar2 = i2c_smbus_write_byte_data(puVar4[1],0x50,(uVar1 * 0xff) / 100), iVar2 < 0)) {
            _dev_err(*puVar4,"failed write reg %#x failure, ret:%d\n",0x50,iVar2);
        }
        *(puVar4 + 0xc) = uVar1;
        mutex_unlock(puVar4 + 3);
    }
    return 0;
}


// ===== sym.max31760_suspend.659d526eaddf04a1844922186a263a53.cfi_jt @ 0x08001258 (size 8) =====

ulong sym.max31760_suspend.659d526eaddf04a1844922186a263a53.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = *(param_1 + 0x98);
    if (puVar3 != NULL) {
        *(puVar3 + 100) = 1;
        mutex_lock(puVar3 + 3);
        iVar1 = i2c_smbus_write_byte_data(puVar3[1],0x50,0);
        if (iVar1 < 0) {
            _dev_err(*puVar3,"failed write reg %#x failure, ret:%d\n",0x50,iVar1);
        }
        uVar2 = gpio_to_desc(*(puVar3 + 0x5c));
        gpiod_direction_output_raw(uVar2,0);
        usleep_range_state(20000,0x4e84,2);
        regulator_disable(puVar3[9]);
        mutex_unlock(puVar3 + 3);
    }
    return 0;
}


// ===== sym.speed_control_store.659d526eaddf04a1844922186a263a53.cfi_jt @ 0x08001260 (size 8) =====

int64_t sym.speed_control_store.659d526eaddf04a1844922186a263a53.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t *piVar7;
    ulong uVar8;
    uint *extraout_x8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar9;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar7 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    puVar9 = *(param_1 + 0x98);
    iStack_40 = 0;
    iVar2 = kstrtoull(param_3,0,&iStack_40);
    if (iVar2 == 0) {
        mutex_lock(puVar9 + 3);
        iVar5 = iStack_40;
        if (*(puVar9 + 100) == 0) {
            piVar7 = (iStack_40 * 0xff) / 100;
            iVar2 = i2c_smbus_write_byte_data(puVar9[1],0x50,piVar7);
            if (iVar2 < 0) {
                piVar7 = 0x50;
                _dev_err(*puVar9,"failed write reg %#x failure, ret:%d\n",0x50,iVar2);
            }
        }
        *(puVar9 + 0xc) = iVar5;
        mutex_unlock(puVar9 + 3);
    }
    else {
        param_4 = -0x16;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_38) {
        iVar5 = __stack_chk_fail();
        uVar1 = *extraout_x8;
        *extraout_x18 = 0x8001aec;
        puVar9 = *(iVar5 + 0x98);
        if (puVar9 == NULL) {
            _printk(uVar1,0x800054b);
            iVar5 = -0x13;
        }
        else {
            uVar3 = i2c_smbus_read_byte_data(puVar9[1],0x52);
            if (uVar3 < 0) {
                uVar6 = *puVar9;
                uVar8 = 0x52;
            }
            else {
                uVar4 = i2c_smbus_read_byte_data(puVar9[1],0x53);
                if (-1 < uVar4) {
                    uVar3 = uVar4 & 0xff | (uVar3 & 0xff) << 8;
                    uVar4 = 0;
                    if (uVar3 != 0) {
                        uVar4 = 6000000 / uVar3;
                    }
                    iVar2 = scnprintf(piVar7,0x1000,0x80004bb,uVar4 >> 1);
                    return iVar2;
                }
                uVar6 = *puVar9;
                uVar8 = 0x53;
                uVar3 = uVar4;
            }
            _dev_err(uVar6,"%s failed read reg 0x%02x failure, ret:%d\n",uVar8,uVar3);
            _dev_err(*puVar9,"can not read fan speed\n");
            iVar5 = -0x16;
        }
        return iVar5;
    }
    return param_4;
}


// ===== sym.max31760_probe @ 0x08001268 (size 1364) =====

uint64_t sym.max31760_probe(int64_t arg1)

{
    int64_t *piVar1;
    uint32_t *puVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    ulong uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    char *pcVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    code *pcVar12;
    uint uVar13;
    uint64_t *puVar14;
    ulong unaff_x30;
    char acStack_70 [5];
    char acStack_6b [3];
    char acStack_68 [5];
    uint uStack_63;
    unkbyte3 Stack_5f;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    if ((arg1 == 0) || (*(arg1 + 0x310) == 0)) {
        _printk(0x8000462);
        uVar5 = 0xffffffea;
        goto code_r0x08001760;
    }
    iVar11 = *(arg1 + 0x18);
    iVar9 = arg1 + 0x20;
    pcVar12 = *(*(iVar11 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x6871e466cec98751,pcVar12,0x8000290);
    uVar5 = (*pcVar12)(iVar11);
    if ((uVar5 & 1) == 0) {
        _dev_err(iVar9,"device doesn\'t support I2C\n");
        uVar5 = 0xffffffed;
        goto code_r0x08001760;
    }
    piVar6 = devm_kmalloc(iVar9,0x68,0xdc0);
    if (piVar6 == NULL) {
        uVar5 = 0xfffffff4;
        goto code_r0x08001760;
    }
    piVar1 = piVar6 + 3;
    *piVar6 = iVar9;
    piVar6[1] = arg1;
    *(arg1 + 0xb8) = piVar6;
    __mutex_init(piVar1,"&pdata->update_lock",obj.max31760_probe.__key);
    iVar11 = *(*piVar6 + 0x2f0);
    if (iVar11 == 0) {
        _printk(0x800056f);
        uVar5 = 0xffffffea;
code_r0x080015fc:
        _dev_err(*piVar6,"failed to parse device tree, ret:%d\n",uVar5);
    }
    else {
        puVar2 = piVar6 + 0xb;
        uVar4 = 1;
        iVar3 = of_property_read_variable_u32_array(iVar11,"maxim,fan-num",puVar2,1,0);
        if (iVar3 < 0) {
code_r0x08001364:
            *puVar2 = uVar4;
        }
        else if (2 < *puVar2) {
            uVar4 = 2;
            goto code_r0x08001364;
        }
        uVar7 = of_get_named_gpio_flags(iVar11,"maxim,pwr-en-gpio",0,0);
        *(piVar6 + 0x5c) = uVar7;
        if (0x1ff < uVar7) {
            _dev_err(*piVar6,"enable gpio not specified\n");
            uVar5 = 0xffffffea;
            goto code_r0x080015fc;
        }
        uVar4 = gpio_request(uVar7,"pwr_en_gpio");
        if (uVar4 != 0) {
            uVar5 = uVar4;
            _printk(0x800060b,uVar5);
            gpio_free(*(piVar6 + 0x5c));
            goto code_r0x080015fc;
        }
        uVar7 = gpio_to_desc(*(piVar6 + 0x5c));
        gpiod_direction_output_raw(uVar7,1);
        usleep_range_state(20000,0x4e84,2);
        uVar8 = devm_regulator_get(*piVar6,"maxim,vdd");
        puVar14 = piVar6 + 9;
        *puVar14 = uVar8;
        if (uVar8 < 0xfffffffffffff001) {
            uVar13 = 3300000;
            regulator_set_voltage(uVar8,3300000,3300000);
            regulator_set_load(piVar6[9],300000);
            iVar3 = regulator_enable(piVar6[9]);
            iVar11 = *piVar6;
            if (-1 < iVar3) {
                uVar8 = devm_regulator_get(iVar11,"maxim,vcca");
                puVar14 = piVar6 + 10;
                *puVar14 = uVar8;
                if (0xfffffffffffff000 < uVar8) {
                    iVar11 = *piVar6;
                    pcVar10 = "couldn\'t get vcca_reg regulator, ret:%d\n";
                    goto code_r0x080016d4;
                }
                uVar13 = 1800000;
                regulator_set_voltage(uVar8,1800000,1800000);
                regulator_set_load(*puVar14,600000);
                iVar3 = regulator_enable(*puVar14);
                if (iVar3 < 0) {
                    iVar11 = *piVar6;
                    pcVar10 = "vcca_reg regulator failed, ret:%d\n";
                    goto code_r0x080016fc;
                }
                goto code_r0x08001480;
            }
            pcVar10 = "vdd_reg regulator failed, ret:%d\n";
code_r0x080016fc:
            _dev_err(iVar11,pcVar10,iVar3);
            regulator_set_voltage(*puVar14,0,uVar13);
            regulator_set_load(*puVar14,0);
            uVar5 = 0xffffffea;
        }
        else {
            iVar11 = *piVar6;
            pcVar10 = "couldn\'t get vdd_reg regulator, ret:%d\n";
code_r0x080016d4:
            _dev_err(iVar11,pcVar10,uVar8 & 0xffffffff);
            uVar5 = uVar8 & 0xffffffff;
            *puVar14 = 0;
            if (uVar8 == 0) {
code_r0x08001480:
                iVar3 = i2c_smbus_write_byte_data(piVar6[1],0,0x19);
                if (iVar3 < 0) {
                    _dev_err(*piVar6,"failed write reg %#x failure, ret:%d\n",0,iVar3);
                }
                iVar3 = i2c_smbus_write_byte_data(piVar6[1],1,0x11);
                if (iVar3 < 0) {
                    _dev_err(*piVar6,"failed write reg %#x failure, ret:%d\n",1,iVar3);
                }
                if (*puVar2 == 2) {
                    iVar11 = piVar6[1];
                    uVar7 = 0x33;
code_r0x080014e0:
                    iVar3 = i2c_smbus_write_byte_data(iVar11,2,uVar7);
                    if (iVar3 < 0) {
                        _dev_err(*piVar6,"failed write reg %#x failure, ret:%d\n",2,iVar3);
                    }
                }
                else if (*puVar2 == 1) {
                    iVar11 = piVar6[1];
                    uVar7 = 0x31;
                    goto code_r0x080014e0;
                }
                mutex_lock(piVar1);
                iVar3 = i2c_smbus_write_byte_data(piVar6[1],0x50,0);
                if (iVar3 < 0) {
                    _dev_err(*piVar6,"failed write reg %#x failure, ret:%d\n",0x50,iVar3);
                }
                *(piVar6 + 0xc) = 0;
                mutex_unlock(piVar1);
                *(piVar6 + 100) = 0;
                Stack_5f = 0;
                uStack_63 = 0;
                acStack_70[0] = str.fan_max31760[0];
                acStack_70[1] = str.fan_max31760[1];
                acStack_70[2] = str.fan_max31760[2];
                acStack_70[3] = str.fan_max31760[3];
                acStack_70[4] = str.fan_max31760[4];
                acStack_6b[0] = str.fan_max31760[5];
                acStack_6b[1] = str.fan_max31760[6];
                acStack_6b[2] = str.fan_max31760[7];
                acStack_68[0] = str.fan_max31760[8];
                acStack_68[1] = str.fan_max31760[9];
                acStack_68[2] = str.fan_max31760[10];
                acStack_68[3] = str.fan_max31760[0xb];
                acStack_68[4] = str.fan_max31760[0xc];
                uVar5 = thermal_of_cooling_device_register
                                  (*(*piVar6 + 0x2f0),acStack_70,piVar6,
                                   reloc.max31760_get_max_state.659d526eaddf04a1844922186a263a53.cfi_jt);
                piVar6[2] = uVar5;
                if (0xfffffffffffff000 < uVar5) {
                    _dev_err(*piVar6,"Cooling register failed for %s, ret:%d\n",acStack_70,uVar5 & 0xffffffff);
                    piVar6[2] = 0;
                    if (uVar5 != 0) {
                        _dev_err(*piVar6,"failed to register cooling device, ret:%d\n",uVar5 & 0xffffffff);
                        sym.max31760_remove(arg1);
                        goto code_r0x08001760;
                    }
                }
                uVar8 = devm_device_add_group(iVar9,obj.max31760_attribute_group);
                uVar5 = uVar8 & 0xffffffff;
                if (uVar8 < 0) {
                    _dev_err(*piVar6,"couldn\'t register sysfs group\n");
                }
                goto code_r0x08001760;
            }
        }
        _dev_err(*piVar6,"failed to enable regulators, ret:%d\n",uVar5);
        uVar7 = gpio_to_desc(*(piVar6 + 0x5c));
        gpiod_direction_output_raw(uVar7,0);
        usleep_range_state(20000,0x4e84,2);
        gpio_free(*(piVar6 + 0x5c));
    }
    *(arg1 + 0xb8) = 0;
code_r0x08001760:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_58) {
        iVar9 = __stack_chk_fail();
        *extraout_x18 = sym.max31760_remove;
        iVar9 = *(iVar9 + 0xb8);
        if (iVar9 != 0) {
            thermal_cooling_device_unregister(*(iVar9 + 0x10));
            regulator_disable(*(iVar9 + 0x48));
            regulator_disable(*(iVar9 + 0x50));
            uVar7 = gpio_to_desc(*(iVar9 + 0x5c));
            gpiod_direction_output_raw(uVar7,0);
            usleep_range_state(20000,0x4e84,2);
            gpio_free(*(iVar9 + 0x5c));
        }
        return 0;
    }
    return uVar5 & 0xffffffff;
}


// ===== sym.max31760_remove @ 0x080017bc (size 116) =====

ulong sym.max31760_remove(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xb8);
    if (iVar2 != 0) {
        thermal_cooling_device_unregister(*(iVar2 + 0x10));
        regulator_disable(*(iVar2 + 0x48));
        regulator_disable(*(iVar2 + 0x50));
        uVar1 = gpio_to_desc(*(iVar2 + 0x5c));
        gpiod_direction_output_raw(uVar1,0);
        usleep_range_state(20000,0x4e84,2);
        gpio_free(*(iVar2 + 0x5c));
    }
    return 0;
}


// ===== sym.max31760_shutdown @ 0x08001830 (size 36) =====

void sym.max31760_shutdown(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.max31760_remove(arg1);
    return;
}


// ===== sym.max31760_get_max_state @ 0x08001854 (size 24) =====

ulong sym.max31760_get_max_state(int64_t arg1,int64_t arg2)

{
    *arg2 = 100;
    return 0;
}


// ===== sym.max31760_get_cur_state @ 0x0800186c (size 88) =====

ulong sym.max31760_get_cur_state(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x3a8);
    iVar1 = iVar2 + 0x18;
    mutex_lock(iVar1);
    *arg2 = *(iVar2 + 0x60);
    mutex_unlock(iVar1);
    return 0;
}


// ===== sym.max31760_set_cur_state @ 0x080018c4 (size 196) =====

ulong sym.max31760_set_cur_state(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = *(arg1 + 0x3a8);
    if (arg2 < 0x65) {
        mutex_lock(puVar3 + 3);
        if ((*(puVar3 + 100) == 0) &&
           (iVar1 = i2c_smbus_write_byte_data(puVar3[1],0x50,(arg2 * 0xff >> 2 & 0x3fff) / 0x19), iVar1 < 0)) {
            _dev_err(*puVar3,"failed write reg %#x failure, ret:%d\n",0x50,iVar1);
        }
        *(puVar3 + 0xc) = arg2;
        mutex_unlock(puVar3 + 3);
        uVar2 = 0;
    }
    else {
        _dev_err(*puVar3,"fail to set current state\n");
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.speed_control_show @ 0x0800198c (size 92) =====

int64_t sym.speed_control_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x98) == 0) {
        _printk(0x800054b);
        iVar2 = -0x13;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x80004bb,*(*(arg1 + 0x98) + 0x60));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.speed_control_store @ 0x080019e8 (size 264) =====

int64_t sym.speed_control_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    uchar *puVar7;
    ulong uVar8;
    uint *extraout_x8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar9;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    puVar7 = &stack0xffffffffffffffc0;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    puVar9 = *(arg1 + 0x98);
    iStack_40 = 0;
    iVar2 = kstrtoull(arg2,0,&stack0xffffffffffffffc0);
    if (iVar2 == 0) {
        mutex_lock(puVar9 + 3);
        iVar5 = iStack_40;
        if (*(puVar9 + 100) == 0) {
            puVar7 = (iStack_40 * 0xff) / 100;
            iVar2 = i2c_smbus_write_byte_data(puVar9[1],0x50,puVar7);
            if (iVar2 < 0) {
                puVar7 = 0x50;
                _dev_err(*puVar9,"failed write reg %#x failure, ret:%d\n",0x50,iVar2);
            }
        }
        *(puVar9 + 0xc) = iVar5;
        mutex_unlock(puVar9 + 3);
    }
    else {
        arg3 = -0x16;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_38) {
        iVar5 = __stack_chk_fail();
        uVar1 = *extraout_x8;
        *extraout_x18 = 0x8001aec;
        puVar9 = *(iVar5 + 0x98);
        if (puVar9 == NULL) {
            _printk(uVar1,0x800054b);
            iVar5 = -0x13;
        }
        else {
            uVar3 = i2c_smbus_read_byte_data(puVar9[1],0x52);
            if (uVar3 < 0) {
                uVar6 = *puVar9;
                uVar8 = 0x52;
            }
            else {
                uVar4 = i2c_smbus_read_byte_data(puVar9[1],0x53);
                if (-1 < uVar4) {
                    uVar3 = uVar4 & 0xff | (uVar3 & 0xff) << 8;
                    uVar4 = 0;
                    if (uVar3 != 0) {
                        uVar4 = 6000000 / uVar3;
                    }
                    iVar2 = scnprintf(puVar7,0x1000,0x80004bb,uVar4 >> 1);
                    return iVar2;
                }
                uVar6 = *puVar9;
                uVar8 = 0x53;
                uVar3 = uVar4;
            }
            _dev_err(uVar6,"%s failed read reg 0x%02x failure, ret:%d\n",uVar8,uVar3);
            _dev_err(*puVar9,"can not read fan speed\n");
            iVar5 = -0x16;
        }
        return iVar5;
    }
    return arg3;
}


// ===== sym.speed_tc1_show @ 0x08001af0 (size 236) =====

int64_t sym.speed_tc1_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar7 = *(arg1 + 0x98);
    if (puVar7 == NULL) {
        _printk(0x800054b);
        iVar5 = -0x13;
    }
    else {
        uVar1 = i2c_smbus_read_byte_data(puVar7[1],0x52);
        if (uVar1 < 0) {
            uVar4 = *puVar7;
            uVar6 = 0x52;
        }
        else {
            uVar2 = i2c_smbus_read_byte_data(puVar7[1],0x53);
            if (-1 < uVar2) {
                uVar1 = uVar2 & 0xff | (uVar1 & 0xff) << 8;
                uVar2 = 0;
                if (uVar1 != 0) {
                    uVar2 = 6000000 / uVar1;
                }
                iVar3 = scnprintf(arg2,0x1000,0x80004bb,uVar2 >> 1);
                return iVar3;
            }
            uVar4 = *puVar7;
            uVar6 = 0x53;
            uVar1 = uVar2;
        }
        _dev_err(uVar4,"%s failed read reg 0x%02x failure, ret:%d\n",uVar6,uVar1);
        _dev_err(*puVar7,"can not read fan speed\n");
        iVar5 = -0x16;
    }
    return iVar5;
}


// ===== sym.speed_tc2_show @ 0x08001bdc (size 236) =====

int64_t sym.speed_tc2_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar7 = *(arg1 + 0x98);
    if (puVar7 == NULL) {
        _printk(0x800054b);
        iVar5 = -0x13;
    }
    else {
        uVar1 = i2c_smbus_read_byte_data(puVar7[1],0x54);
        if (uVar1 < 0) {
            uVar4 = *puVar7;
            uVar6 = 0x54;
        }
        else {
            uVar2 = i2c_smbus_read_byte_data(puVar7[1],0x55);
            if (-1 < uVar2) {
                uVar1 = uVar2 & 0xff | (uVar1 & 0xff) << 8;
                uVar2 = 0;
                if (uVar1 != 0) {
                    uVar2 = 6000000 / uVar1;
                }
                iVar3 = scnprintf(arg2,0x1000,0x80004bb,uVar2 >> 1);
                return iVar3;
            }
            uVar4 = *puVar7;
            uVar6 = 0x55;
            uVar1 = uVar2;
        }
        _dev_err(uVar4,"%s failed read reg 0x%02x failure, ret:%d\n",uVar6,uVar1);
        _dev_err(*puVar7,"can not read fan speed\n");
        iVar5 = -0x16;
    }
    return iVar5;
}


// ===== sym.pwm_duty_show @ 0x08001cc8 (size 168) =====

int64_t sym.pwm_duty_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar4 = *(arg1 + 0x98);
    if (puVar4 == NULL) {
        _printk(0x800054b);
        iVar3 = -0x13;
    }
    else {
        uVar1 = i2c_smbus_read_byte_data(puVar4[1],0x50);
        if (uVar1 < 0) {
            _dev_err(*puVar4,"%s failed read reg 0x%02x failure, ret:%d\n",0x50,uVar1);
            iVar3 = uVar1;
        }
        else {
            iVar2 = scnprintf(arg2,0x1000,0x80004bb,(uVar1 & 0xff) * 0x27);
            iVar3 = iVar2;
        }
    }
    return iVar3;
}


// ===== sym.max31760_suspend @ 0x08001d70 (size 168) =====

ulong sym.max31760_suspend(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = *(arg1 + 0x98);
    if (puVar3 != NULL) {
        *(puVar3 + 100) = 1;
        mutex_lock(puVar3 + 3);
        iVar1 = i2c_smbus_write_byte_data(puVar3[1],0x50,0);
        if (iVar1 < 0) {
            _dev_err(*puVar3,"failed write reg %#x failure, ret:%d\n",0x50,iVar1);
        }
        uVar2 = gpio_to_desc(*(puVar3 + 0x5c));
        gpiod_direction_output_raw(uVar2,0);
        usleep_range_state(20000,0x4e84,2);
        regulator_disable(puVar3[9]);
        mutex_unlock(puVar3 + 3);
    }
    return 0;
}


// ===== sym.max31760_resume @ 0x08001e18 (size 396) =====

ulong sym.max31760_resume(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar4 = *(arg1 + 0x98);
    if (puVar4 != NULL) {
        *(puVar4 + 100) = 0;
        mutex_lock(puVar4 + 3);
        uVar3 = gpio_to_desc(*(puVar4 + 0x5c));
        gpiod_direction_output_raw(uVar3,1);
        usleep_range_state(20000,0x4e84,2);
        iVar2 = regulator_enable(puVar4[9]);
        if (iVar2 < 0) {
            _dev_err(*puVar4,"vdd_reg regulator failed, ret:%d\n",iVar2);
        }
        iVar2 = i2c_smbus_write_byte_data(puVar4[1],0,0x19);
        if (iVar2 < 0) {
            _dev_err(*puVar4,"failed write reg %#x failure, ret:%d\n",0,iVar2);
        }
        iVar2 = i2c_smbus_write_byte_data(puVar4[1],1,0x11);
        if (iVar2 < 0) {
            _dev_err(*puVar4,"failed write reg %#x failure, ret:%d\n",1,iVar2);
        }
        iVar2 = i2c_smbus_write_byte_data(puVar4[1],2,0x31);
        if (iVar2 < 0) {
            _dev_err(*puVar4,"failed write reg %#x failure, ret:%d\n",2,iVar2);
        }
        uVar1 = *(puVar4 + 0xc);
        if ((*(puVar4 + 100) == 0) &&
           (iVar2 = i2c_smbus_write_byte_data(puVar4[1],0x50,(uVar1 * 0xff) / 100), iVar2 < 0)) {
            _dev_err(*puVar4,"failed write reg %#x failure, ret:%d\n",0x50,iVar2);
        }
        *(puVar4 + 0xc) = uVar1;
        mutex_unlock(puVar4 + 3);
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08001fa8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001fec

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
    //switch table (4 cases) at 0x80002b0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002000);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002004 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_register_driver(obj.__this_module,obj.max31760_i2c_driver);
    return;
}


// ===== sym.cleanup_module @ 0x08002038 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_del_driver(obj.max31760_i2c_driver);
    return;
}

