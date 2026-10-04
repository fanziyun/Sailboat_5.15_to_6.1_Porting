// decompiled from phy-generic by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 544) =====

//WARNING: Switch with 1 destination removed at 0x08001ab4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x5e5b96c73454931) {
        if (arg1 < -0x3987c0e26ee29729) {
            if (arg1 == -0x614cf58593a4b8d6) {
                pcVar2 = sym.nop_set_suspend.e95c74cd5998e8727442708b34cb0e73.cfi_jt;
            }
            else if (arg1 == -0x4260ebb633ab377a) {
                pcVar2 = sym.usb_phy_generic_unregister.cfi_jt;
            }
            else {
                if (arg1 != -0x3cd7627f55068fc3) goto code_r0x08001a74;
                pcVar2 = sym.usb_gen_phy_shutdown.cfi_jt;
            }
        }
        else if (arg1 == -0x3987c0e26ee29729) {
            pcVar2 = sym.nop_gpio_vbus_thread.e95c74cd5998e8727442708b34cb0e73.cfi_jt;
        }
        else {
            if (arg1 == -0x3557318fb8d07b71) {
                if ((pcVar1 + -0x8001260 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08001a74;
            }
            if (arg1 != -0x2144ede3229a7890) goto code_r0x08001a74;
            pcVar2 = sym.usb_phy_generic_register.cfi_jt;
        }
    }
    else if (arg1 < 0x1446dbc445ad8844) {
        if (arg1 == -0x5e5b96c73454931) {
            pcVar2 = sym.usb_gen_phy_init.cfi_jt;
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0xd35a0d580702b18) goto code_r0x08001a74;
            pcVar2 = sym.nop_set_peripheral.e95c74cd5998e8727442708b34cb0e73.cfi_jt;
        }
    }
    else if (arg1 == 0x1446dbc445ad8844) {
        pcVar2 = sym.nop_set_host.e95c74cd5998e8727442708b34cb0e73.cfi_jt;
    }
    else if (arg1 == 0x2fb9e9020f35d766) {
        pcVar2 = sym.usb_phy_gen_create_phy.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001a74;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001a74:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001ac8);
    (*pcVar1)();
}


// ===== sym.usb_gen_phy_init.cfi_jt @ 0x08001228 (size 8) =====

int sym.usb_gen_phy_init.cfi_jt(int64_t *param_1)

{
    int iVar1;
    ulong *in_x18;
    uint64_t uVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*param_1 + 0x98);
    if ((*(iVar3 + 0x180) < 0xfffffffffffff001) && (iVar1 = regulator_enable(), iVar1 != 0)) {
        _dev_err(*param_1,"Failed to enable power\n");
    }
    uVar2 = *(iVar3 + 0x178);
    if (uVar2 < 0xfffffffffffff001) {
        iVar1 = clk_prepare(uVar2);
        if (iVar1 != 0) {
            return iVar1;
        }
        iVar1 = clk_enable(uVar2);
        if (iVar1 != 0) {
            clk_unprepare(uVar2);
            return iVar1;
        }
    }
    if (*(iVar3 + 0x188) != 0) {
        gpiod_set_value_cansleep(*(iVar3 + 0x188),1);
        usleep_range_state(10000,20000,2);
        gpiod_set_value_cansleep(*(iVar3 + 0x188),0);
    }
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001230 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.usb_phy_generic_probe.e95c74cd5998e8727442708b34cb0e73.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001238 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.usb_phy_generic_probe.e95c74cd5998e8727442708b34cb0e73.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.usb_gen_phy_shutdown.cfi_jt @ 0x08001240 (size 8) =====

void sym.usb_gen_phy_shutdown.cfi_jt(int64_t *param_1)

{
    int iVar1;
    ulong *in_x18;
    uint64_t uVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*param_1 + 0x98);
    gpiod_set_value_cansleep(*(iVar3 + 0x188),1);
    uVar2 = *(iVar3 + 0x178);
    if (uVar2 < 0xfffffffffffff001) {
        clk_disable(uVar2);
        clk_unprepare(uVar2);
    }
    if ((*(iVar3 + 0x180) < 0xfffffffffffff001) && (iVar1 = regulator_disable(), iVar1 != 0)) {
        _dev_err(*param_1,"Failed to disable power\n");
    }
    return;
}


// ===== sym.usb_phy_generic_unregister.cfi_jt @ 0x08001248 (size 8) =====

void sym.usb_phy_generic_unregister.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_device_unregister();
    return;
}


// ===== sym.nop_set_suspend.e95c74cd5998e8727442708b34cb0e73.cfi_jt @ 0x08001250 (size 8) =====

ulong sym.nop_set_suspend.e95c74cd5998e8727442708b34cb0e73.cfi_jt(int64_t *param_1,int param_2)

{
    int iVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(*(*param_1 + 0x98) + 0x178);
    if (uVar2 < 0xfffffffffffff001) {
        if (param_2 == 0) {
            iVar1 = clk_prepare(uVar2);
            if (iVar1 != 0) {
                return 0;
            }
            iVar1 = clk_enable(uVar2);
            if (iVar1 == 0) {
                return 0;
            }
        }
        else {
            clk_disable();
        }
        clk_unprepare(uVar2);
    }
    return 0;
}


// ===== sym.usb_phy_generic_register.cfi_jt @ 0x08001258 (size 8) =====

void sym.usb_phy_generic_register.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    char *pcStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    uStack_50 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    pcStack_60 = "usb_phy_generic";
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_58 = 0xfffffffe;
    platform_device_register_full(&uStack_78);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.usb_phy_generic_unregister;
    platform_device_unregister();
    return;
}


// ===== sym.usb_phy_generic_probe.e95c74cd5998e8727442708b34cb0e73.cfi_jt @ 0x08001260 (size 8) =====

int sym.usb_phy_generic_probe.e95c74cd5998e8727442708b34cb0e73.cfi_jt(int64_t param_1)

{
    int64_t arg1;
    int iVar1;
    uint uVar2;
    int64_t arg2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = param_1 + 0x10;
    arg2 = devm_kmalloc(arg1,0x1b8,0xdc0);
    if (arg2 == 0) {
        iVar1 = -0xc;
    }
    else {
        iVar1 = sym.usb_phy_gen_create_phy(arg1,arg2);
        if (iVar1 == 0) {
            if (*(arg2 + 400) != 0) {
                uVar2 = gpiod_to_irq();
                iVar1 = devm_request_threaded_irq
                                  (arg1,uVar2,0,sym.nop_gpio_vbus_thread.e95c74cd5998e8727442708b34cb0e73.cfi_jt,
                                   0x2083,0x8000189,arg2);
                if (iVar1 != 0) {
                    uVar2 = gpiod_to_irq(*(arg2 + 400));
                    _dev_err(arg1,"can\'t request irq %i, err: %d\n",uVar2,iVar1);
                    return iVar1;
                }
                iVar1 = gpiod_get_value();
                uVar2 = 3;
                if (iVar1 == 0) {
                    uVar2 = 1;
                }
                *(*(arg2 + 0x20) + 0x28) = uVar2;
            }
            *(arg2 + 0x118) = sym.usb_gen_phy_init.cfi_jt;
            *(arg2 + 0x120) = sym.usb_gen_phy_shutdown.cfi_jt;
            iVar1 = usb_add_phy_dev(arg2);
            if (iVar1 == 0) {
                *(param_1 + 0xa8) = arg2;
            }
            else {
                _dev_err(arg1,"can\'t register transceiver, err: %d\n",iVar1);
            }
        }
    }
    return iVar1;
}


// ===== sym.usb_phy_generic_remove.e95c74cd5998e8727442708b34cb0e73.cfi_jt @ 0x08001268 (size 8) =====

ulong sym.usb_phy_generic_remove.e95c74cd5998e8727442708b34cb0e73.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_remove_phy(*(param_1 + 0xa8));
    return 0;
}


// ===== sym.nop_set_peripheral.e95c74cd5998e8727442708b34cb0e73.cfi_jt @ 0x08001270 (size 8) =====

uint sym.nop_set_peripheral.e95c74cd5998e8727442708b34cb0e73.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar1 = 0xffffffed;
    }
    else if (param_2 == 0) {
        uVar1 = 0xffffffed;
        *(param_1 + 0x20) = 0;
    }
    else {
        *(param_1 + 0x20) = param_2;
        if (*(param_1 + 0x28) == 3) {
            atomic_notifier_call_chain(*(param_1 + 0x10) + 0xf0,1);
            uVar1 = 0;
        }
        else {
            uVar1 = 0;
            *(param_1 + 0x28) = 1;
        }
    }
    return uVar1;
}


// ===== sym.nop_set_host.e95c74cd5998e8727442708b34cb0e73.cfi_jt @ 0x08001278 (size 8) =====

uint sym.nop_set_host.e95c74cd5998e8727442708b34cb0e73.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    
    uVar1 = 0xffffffed;
    if (param_1 != 0) {
        *(param_1 + 0x18) = param_2;
        uVar1 = 0xffffffed;
        if (param_2 != 0) {
            uVar1 = 0;
        }
    }
    return uVar1;
}


// ===== sym.usb_phy_gen_create_phy.cfi_jt @ 0x08001280 (size 8) =====

uint64_t sym.usb_phy_gen_create_phy.cfi_jt(int64_t param_1,int64_t *param_2)

{
    bool bVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    uchar auVar10 [12];
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    iVar8 = *(param_1 + 0x2f0);
    iStack_4c = 0;
    if (iVar8 == 0) {
        bVar1 = true;
        bVar2 = true;
    }
    else {
        iVar3 = of_property_read_variable_u32_array(iVar8,"clock-frequency",&iStack_4c,1,0);
        if (iVar3 < 0) {
            iStack_4c = 0;
        }
        iVar5 = of_find_property(iVar8,"vcc-supply",0);
        bVar1 = iVar5 == 0;
        iVar8 = of_find_property(iVar8,"clocks",0);
        bVar2 = iVar8 == 0;
    }
    uVar6 = devm_gpiod_get_optional(param_1,"reset",0);
    param_2[0x31] = uVar6;
    if ((uVar6 < 0xfffffffffffff001) || (uVar9 = uVar6 & 0xffffffff, uVar6 == 0)) {
        uVar9 = devm_gpiod_get_optional(param_1,"vbus-detect",0);
        param_2[0x32] = uVar9;
        if (0xfffffffffffff000 < uVar9) goto code_r0x08001580;
code_r0x0800158c:
        if (param_2[0x31] != 0) {
            gpiod_direction_output(param_2[0x31],1);
        }
        iVar8 = devm_kmalloc(param_1,0x60,0xdc0);
        param_2[4] = iVar8;
        if (iVar8 == 0) {
            uVar9 = 0xfffffff4;
            goto code_r0x080016d8;
        }
        uVar9 = devm_clk_get(param_1,"main_clk");
        param_2[0x2f] = uVar9;
        if (0xfffffffffffff000 < uVar9 && !bVar2) {
            uVar9 = uVar9 & 0xffffffff;
            goto code_r0x080016d8;
        }
        if (((0xfffffffffffff000 < uVar9) || (iStack_4c == 0)) || (uVar4 = clk_set_rate(), uVar4 == 0)) {
            uVar6 = devm_regulator_get(param_1,0x8000185);
            param_2[0x30] = uVar6;
            if (uVar6 < 0xfffffffffffff001 | bVar1) {
                uVar9 = devm_regulator_get_exclusive(param_1,"vbus");
                uVar6 = 0;
                if (uVar9 != 0xffffffffffffffed) {
                    uVar6 = uVar9;
                }
                param_2[0x33] = uVar6;
                if (uVar6 < 0xfffffffffffff001) {
                    param_2[0x2e] = param_1;
                    uVar9 = 0;
                    *param_2 = param_1;
                    param_2[1] = "nop-xceiv";
                    param_2[0x27] = sym.nop_set_suspend.e95c74cd5998e8727442708b34cb0e73.cfi_jt;
                    *(param_2 + 0x14) = 1;
                    *(param_2[4] + 0x28) = 0;
                    *(param_2[4] + 0x10) = param_2;
                    *(param_2[4] + 0x30) = sym.nop_set_host.e95c74cd5998e8727442708b34cb0e73.cfi_jt;
                    *(param_2[4] + 0x38) = sym.nop_set_peripheral.e95c74cd5998e8727442708b34cb0e73.cfi_jt;
                }
                else {
                    uVar9 = dev_err_probe(param_1,uVar6,"could not get vbus regulator\n");
                    uVar9 = uVar9 & 0xffffffff;
                }
            }
            else {
                uVar9 = 0xfffffdfb;
            }
            goto code_r0x080016d8;
        }
        uVar9 = uVar4;
        pcVar7 = "Error setting clock rate\n";
    }
    else {
code_r0x08001580:
        if (uVar9 == -0x205) goto code_r0x080016d8;
        if (uVar9 == 0) goto code_r0x0800158c;
        pcVar7 = "Error requesting RESET or VBUS GPIO\n";
    }
    _dev_err(param_1,pcVar7);
code_r0x080016d8:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return uVar9 & 0xffffffff;
    }
    auVar10 = __stack_chk_fail();
    *extraout_x18 = sym.nop_set_suspend;
    uVar6 = *(*(*auVar10._0_8_ + 0x98) + 0x178);
    if (uVar6 < 0xfffffffffffff001) {
        if (auVar10._8_4_ == 0) {
            iVar3 = clk_prepare(uVar6);
            if (iVar3 != 0) {
                return 0;
            }
            iVar3 = clk_enable(uVar6);
            if (iVar3 == 0) {
                return 0;
            }
        }
        else {
            clk_disable();
        }
        clk_unprepare(uVar6);
    }
    return 0;
}


// ===== sym.nop_gpio_vbus_thread.e95c74cd5998e8727442708b34cb0e73.cfi_jt @ 0x08001288 (size 8) =====

ulong sym.nop_gpio_vbus_thread.e95c74cd5998e8727442708b34cb0e73.cfi_jt(ulong param_1,int64_t param_2)

{
    char cVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_2 + 0x20);
    iVar2 = gpiod_get_value(*(param_2 + 400));
    if (iVar2 == *(param_2 + 0x1b0)) {
        return 1;
    }
    *(param_2 + 0x1b0) = iVar2;
    if (iVar2 != 0) {
        uVar3 = 1;
        *(iVar5 + 0x28) = 3;
        iVar4 = *(param_2 + 0x198);
        *(param_2 + 0x18) = 1;
        if (iVar4 != 0) {
            cVar1 = *(param_2 + 0x1a0);
            regulator_set_current_limit(iVar4,0,100000);
            if (cVar1 == '\0') {
                iVar2 = regulator_enable(iVar4);
                uVar3 = 1;
                if (iVar2 < 0) goto code_r0x08001a48;
                *(param_2 + 0x1a0) = 1;
            }
            uVar3 = 1;
            *(param_2 + 0x1a8) = 100;
        }
        goto code_r0x08001a48;
    }
    if (*(param_2 + 0x198) != 0) {
        if (*(param_2 + 0x1a0) != '\0') {
            iVar2 = regulator_disable();
            if (iVar2 < 0) goto code_r0x08001a38;
            *(param_2 + 0x1a0) = 0;
        }
        *(param_2 + 0x1a8) = 0;
    }
code_r0x08001a38:
    uVar3 = 0;
    *(iVar5 + 0x28) = 1;
    *(param_2 + 0x18) = 0;
code_r0x08001a48:
    atomic_notifier_call_chain(param_2 + 0xf0,uVar3,*(iVar5 + 0x20));
    return 1;
}


// ===== sym.usb_phy_generic_register @ 0x08001290 (size 124) =====

void sym.usb_phy_generic_register(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    char *pcStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    uStack_50 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    pcStack_60 = "usb_phy_generic";
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_58 = 0xfffffffe;
    platform_device_register_full(&uStack_78);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.usb_phy_generic_unregister;
    platform_device_unregister();
    return;
}


// ===== sym.usb_phy_generic_unregister @ 0x0800130c (size 36) =====

void sym.usb_phy_generic_unregister(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_device_unregister();
    return;
}


// ===== sym.usb_gen_phy_init @ 0x08001330 (size 208) =====

int sym.usb_gen_phy_init(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    uint64_t uVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*arg1 + 0x98);
    if ((*(iVar3 + 0x180) < 0xfffffffffffff001) && (iVar1 = regulator_enable(), iVar1 != 0)) {
        _dev_err(*arg1,"Failed to enable power\n");
    }
    uVar2 = *(iVar3 + 0x178);
    if (uVar2 < 0xfffffffffffff001) {
        iVar1 = clk_prepare(uVar2);
        if (iVar1 != 0) {
            return iVar1;
        }
        iVar1 = clk_enable(uVar2);
        if (iVar1 != 0) {
            clk_unprepare(uVar2);
            return iVar1;
        }
    }
    if (*(iVar3 + 0x188) != 0) {
        gpiod_set_value_cansleep(*(iVar3 + 0x188),1);
        usleep_range_state(10000,20000,2);
        gpiod_set_value_cansleep(*(iVar3 + 0x188),0);
    }
    return 0;
}


// ===== sym.usb_gen_phy_shutdown @ 0x08001400 (size 140) =====

void sym.usb_gen_phy_shutdown(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    uint64_t uVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*arg1 + 0x98);
    gpiod_set_value_cansleep(*(iVar3 + 0x188),1);
    uVar2 = *(iVar3 + 0x178);
    if (uVar2 < 0xfffffffffffff001) {
        clk_disable(uVar2);
        clk_unprepare(uVar2);
    }
    if ((*(iVar3 + 0x180) < 0xfffffffffffff001) && (iVar1 = regulator_disable(), iVar1 != 0)) {
        _dev_err(*arg1,"Failed to disable power\n");
    }
    return;
}


// ===== sym.usb_phy_gen_create_phy @ 0x0800148c (size 664) =====

uint64_t sym.usb_phy_gen_create_phy(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    uchar auVar10 [12];
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    iVar8 = *(arg1 + 0x2f0);
    iStack_4c = 0;
    if (iVar8 == 0) {
        bVar1 = true;
        bVar2 = true;
    }
    else {
        iVar3 = of_property_read_variable_u32_array(iVar8,"clock-frequency",&iStack_4c,1,0);
        if (iVar3 < 0) {
            iStack_4c = 0;
        }
        iVar5 = of_find_property(iVar8,"vcc-supply",0);
        bVar1 = iVar5 == 0;
        iVar8 = of_find_property(iVar8,"clocks",0);
        bVar2 = iVar8 == 0;
    }
    uVar6 = devm_gpiod_get_optional(arg1,"reset",0);
    *(arg2 + 0x188) = uVar6;
    if ((uVar6 < 0xfffffffffffff001) || (uVar9 = uVar6 & 0xffffffff, uVar6 == 0)) {
        uVar9 = devm_gpiod_get_optional(arg1,"vbus-detect",0);
        *(arg2 + 400) = uVar9;
        if (0xfffffffffffff000 < uVar9) goto code_r0x08001580;
code_r0x0800158c:
        if (*(arg2 + 0x188) != 0) {
            gpiod_direction_output(*(arg2 + 0x188),1);
        }
        iVar8 = devm_kmalloc(arg1,0x60,0xdc0);
        *(arg2 + 0x20) = iVar8;
        if (iVar8 == 0) {
            uVar9 = 0xfffffff4;
            goto code_r0x080016d8;
        }
        uVar9 = devm_clk_get(arg1,"main_clk");
        *(arg2 + 0x178) = uVar9;
        if (0xfffffffffffff000 < uVar9 && !bVar2) {
            uVar9 = uVar9 & 0xffffffff;
            goto code_r0x080016d8;
        }
        if (((0xfffffffffffff000 < uVar9) || (iStack_4c == 0)) || (uVar4 = clk_set_rate(), uVar4 == 0)) {
            uVar6 = devm_regulator_get(arg1,0x8000185);
            *(arg2 + 0x180) = uVar6;
            if (uVar6 < 0xfffffffffffff001 | bVar1) {
                uVar9 = devm_regulator_get_exclusive(arg1,"vbus");
                uVar6 = 0;
                if (uVar9 != 0xffffffffffffffed) {
                    uVar6 = uVar9;
                }
                *(arg2 + 0x198) = uVar6;
                if (uVar6 < 0xfffffffffffff001) {
                    *(arg2 + 0x170) = arg1;
                    uVar9 = 0;
                    *arg2 = arg1;
                    *(arg2 + 8) = "nop-xceiv";
                    *(arg2 + 0x138) = sym.nop_set_suspend.e95c74cd5998e8727442708b34cb0e73.cfi_jt;
                    *(arg2 + 0x14) = 1;
                    *(*(arg2 + 0x20) + 0x28) = 0;
                    *(*(arg2 + 0x20) + 0x10) = arg2;
                    *(*(arg2 + 0x20) + 0x30) = sym.nop_set_host.e95c74cd5998e8727442708b34cb0e73.cfi_jt;
                    *(*(arg2 + 0x20) + 0x38) = sym.nop_set_peripheral.e95c74cd5998e8727442708b34cb0e73.cfi_jt;
                }
                else {
                    uVar9 = dev_err_probe(arg1,uVar6,"could not get vbus regulator\n");
                    uVar9 = uVar9 & 0xffffffff;
                }
            }
            else {
                uVar9 = 0xfffffdfb;
            }
            goto code_r0x080016d8;
        }
        uVar9 = uVar4;
        pcVar7 = "Error setting clock rate\n";
    }
    else {
code_r0x08001580:
        if (uVar9 == -0x205) goto code_r0x080016d8;
        if (uVar9 == 0) goto code_r0x0800158c;
        pcVar7 = "Error requesting RESET or VBUS GPIO\n";
    }
    _dev_err(arg1,pcVar7);
code_r0x080016d8:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return uVar9 & 0xffffffff;
    }
    auVar10 = __stack_chk_fail();
    *extraout_x18 = sym.nop_set_suspend;
    uVar6 = *(*(*auVar10._0_8_ + 0x98) + 0x178);
    if (uVar6 < 0xfffffffffffff001) {
        if (auVar10._8_4_ == 0) {
            iVar3 = clk_prepare(uVar6);
            if (iVar3 != 0) {
                return 0;
            }
            iVar3 = clk_enable(uVar6);
            if (iVar3 == 0) {
                return 0;
            }
        }
        else {
            clk_disable();
        }
        clk_unprepare(uVar6);
    }
    return 0;
}


// ===== sym.nop_set_suspend @ 0x08001724 (size 108) =====

ulong sym.nop_set_suspend(int64_t arg1)

{
    int iVar1;
    int in_w1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(*(*arg1 + 0x98) + 0x178);
    if (uVar2 < 0xfffffffffffff001) {
        if (in_w1 == 0) {
            iVar1 = clk_prepare(uVar2);
            if (iVar1 != 0) {
                return 0;
            }
            iVar1 = clk_enable(uVar2);
            if (iVar1 == 0) {
                return 0;
            }
        }
        else {
            clk_disable();
        }
        clk_unprepare(uVar2);
    }
    return 0;
}


// ===== sym.nop_set_host @ 0x08001790 (size 40) =====

uint sym.nop_set_host(int64_t arg1,uint32_t arg2)

{
    uint uVar1;
    
    uVar1 = 0xffffffed;
    if (arg1 != 0) {
        *(arg1 + 0x18) = arg2;
        uVar1 = 0xffffffed;
        if (arg2 != 0) {
            uVar1 = 0;
        }
    }
    return uVar1;
}


// ===== sym.nop_set_peripheral @ 0x080017b8 (size 120) =====

uint sym.nop_set_peripheral(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar1 = 0xffffffed;
    }
    else if (arg2 == 0) {
        uVar1 = 0xffffffed;
        *(arg1 + 0x20) = 0;
    }
    else {
        *(arg1 + 0x20) = arg2;
        if (*(arg1 + 0x28) == 3) {
            atomic_notifier_call_chain(*(arg1 + 0x10) + 0xf0,1);
            uVar1 = 0;
        }
        else {
            uVar1 = 0;
            *(arg1 + 0x28) = 1;
        }
    }
    return uVar1;
}


// ===== sym.usb_phy_generic_probe @ 0x08001830 (size 296) =====

int sym.usb_phy_generic_probe(int64_t arg1)

{
    int64_t arg1_00;
    int iVar1;
    uint uVar2;
    int64_t arg2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = arg1 + 0x10;
    arg2 = devm_kmalloc(arg1_00,0x1b8,0xdc0);
    if (arg2 == 0) {
        iVar1 = -0xc;
    }
    else {
        iVar1 = sym.usb_phy_gen_create_phy(arg1_00,arg2);
        if (iVar1 == 0) {
            if (*(arg2 + 400) != 0) {
                uVar2 = gpiod_to_irq();
                iVar1 = devm_request_threaded_irq
                                  (arg1_00,uVar2,0,sym.nop_gpio_vbus_thread.e95c74cd5998e8727442708b34cb0e73.cfi_jt,
                                   0x2083,0x8000189,arg2);
                if (iVar1 != 0) {
                    uVar2 = gpiod_to_irq(*(arg2 + 400));
                    _dev_err(arg1_00,"can\'t request irq %i, err: %d\n",uVar2,iVar1);
                    return iVar1;
                }
                iVar1 = gpiod_get_value();
                uVar2 = 3;
                if (iVar1 == 0) {
                    uVar2 = 1;
                }
                *(*(arg2 + 0x20) + 0x28) = uVar2;
            }
            *(arg2 + 0x118) = sym.usb_gen_phy_init.cfi_jt;
            *(arg2 + 0x120) = sym.usb_gen_phy_shutdown.cfi_jt;
            iVar1 = usb_add_phy_dev(arg2);
            if (iVar1 == 0) {
                *(arg1 + 0xa8) = arg2;
            }
            else {
                _dev_err(arg1_00,"can\'t register transceiver, err: %d\n",iVar1);
            }
        }
    }
    return iVar1;
}


// ===== sym.usb_phy_generic_remove @ 0x08001958 (size 44) =====

ulong sym.usb_phy_generic_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_remove_phy(*(arg1 + 0xa8));
    return 0;
}


// ===== sym.nop_gpio_vbus_thread @ 0x08001984 (size 236) =====

ulong sym.nop_gpio_vbus_thread(ulong noname_0,int64_t arg1)

{
    char cVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x20);
    iVar2 = gpiod_get_value(*(arg1 + 400));
    if (iVar2 == *(arg1 + 0x1b0)) {
        return 1;
    }
    *(arg1 + 0x1b0) = iVar2;
    if (iVar2 != 0) {
        uVar3 = 1;
        *(iVar5 + 0x28) = 3;
        iVar4 = *(arg1 + 0x198);
        *(arg1 + 0x18) = 1;
        if (iVar4 != 0) {
            cVar1 = *(arg1 + 0x1a0);
            regulator_set_current_limit(iVar4,0,100000);
            if (cVar1 == '\0') {
                iVar2 = regulator_enable(iVar4);
                uVar3 = 1;
                if (iVar2 < 0) goto code_r0x08001a48;
                *(arg1 + 0x1a0) = 1;
            }
            uVar3 = 1;
            *(arg1 + 0x1a8) = 100;
        }
        goto code_r0x08001a48;
    }
    if (*(arg1 + 0x198) != 0) {
        if (*(arg1 + 0x1a0) != '\0') {
            iVar2 = regulator_disable();
            if (iVar2 < 0) goto code_r0x08001a38;
            *(arg1 + 0x1a0) = 0;
        }
        *(arg1 + 0x1a8) = 0;
    }
code_r0x08001a38:
    uVar3 = 0;
    *(iVar5 + 0x28) = 1;
    *(arg1 + 0x18) = 0;
code_r0x08001a48:
    atomic_notifier_call_chain(arg1 + 0xf0,uVar3,*(iVar5 + 0x20));
    return 1;
}


// ===== sym.__cfi_check_fail @ 0x08001a70 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001ab4

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
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001ac8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001b48 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.usb_phy_generic_probe.e95c74cd5998e8727442708b34cb0e73.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001b7c (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.usb_phy_generic_probe.e95c74cd5998e8727442708b34cb0e73.cfi_jt);
    return;
}

