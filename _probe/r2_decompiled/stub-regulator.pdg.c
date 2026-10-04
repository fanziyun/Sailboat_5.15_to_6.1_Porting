// decompiled from stub-regulator by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 416) =====

//WARNING: Switch with 1 destination removed at 0x0800169c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x46e2d629c3d924cf) {
            if (arg1 == -0x78ef6e655139cb7b) {
                pcVar2 = sym.regulator_stub_get_mode.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt;
            }
            else {
                if (arg1 != -0x607809f436f9dcb0) goto code_r0x0800165c;
                pcVar2 = sym.regulator_stub_set_voltage.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x46e2d629c3d924cf) {
                if ((pcVar1 + -0x80011d0 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x0800165c;
            }
            if (arg1 != -0x3557318fb8d07b71) goto code_r0x0800165c;
            pcVar2 = sym.regulator_stub_probe.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt;
        }
    }
    else if (arg1 < 0x48600b92c4521f93) {
        if (arg1 != 0x2b3a43e29242445) {
            if ((arg1 == 0x1bf4c7c0f319a435) && ((pcVar1 + -0x80011e0 >> 3 | pcVar1 << 0x3d) < 4)) {
                return;
            }
            goto code_r0x0800165c;
        }
        pcVar2 = sym.regulator_stub_init.cfi_jt;
    }
    else if (arg1 == 0x48600b92c4521f93) {
        pcVar2 = sym.regulator_stub_get_optimum_mode.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800165c;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800165c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80016b0);
    (*pcVar1)();
}


// ===== sym.regulator_stub_get_optimum_mode.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt @ 0x080011a8 (size 8) =====

uint sym.regulator_stub_get_optimum_mode.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt(void)

{
    int64_t iVar1;
    int in_w3;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    uVar2 = 4;
    if (*(iVar1 + 0x144) <= *(iVar1 + 0x148) + in_w3) {
        uVar2 = 2;
    }
    return uVar2;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011b0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.regulator_stub_probe.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt);
    return;
}


// ===== sym.regulator_stub_set_voltage.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt @ 0x080011b8 (size 8) =====

ulong sym.regulator_stub_set_voltage.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt(ulong param_1,uint param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    *(iVar1 + 0x138) = param_2;
    return 0;
}


// ===== sym.regulator_stub_probe.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt @ 0x080011c0 (size 8) =====

uint64_t sym.regulator_stub_probe.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar8 [12];
    int64_t iStack_68;
    int64_t iStack_60;
    int64_t *piStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar7 = param_1 + 0x10;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    if (*(param_1 + 0x300) == 0) {
        _dev_err(iVar7,"%s: device node missing\n","regulator_stub_probe");
        uVar5 = 0xffffffed;
        goto code_r0x08001384;
    }
    piVar2 = devm_kmalloc(iVar7,0x150,0xdc0);
    if ((piVar2 != NULL) && (iVar3 = of_get_regulator_init_data(iVar7,*(param_1 + 0x300),piVar2), iVar3 != 0)) {
        if (*(iVar3 + 8) == 0) {
            _dev_err(iVar7,"%s: regulator name not specified\n","regulator_stub_probe");
            uVar5 = 0xffffffea;
            goto code_r0x08001384;
        }
        of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,system-load",piVar2 + 0x29,1,0);
        of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,hpm-min-load",piVar2 + 0x144,1,0);
        uVar6 = 4;
        if (*(piVar2 + 0x144) <= piVar2[0x29]) {
            uVar6 = 2;
        }
        *(piVar2 + 0x27) = *(iVar3 + 0x10);
        *(piVar2 + 0x28) = uVar6;
        *(iVar3 + 0x40) = *(iVar3 + 0x40) | 0x14;
        *(iVar3 + 0x44) = *(iVar3 + 0x14);
        *(iVar3 + 0x3c) = 6;
        *(piVar2 + 7) = (*(iVar3 + 0x10) != 0 || *(iVar3 + 0x14) != 0) << 1;
        iVar4 = devm_kstrdup(iVar7,*(iVar3 + 8),0xcc0);
        *piVar2 = iVar4;
        if (iVar4 != 0) {
            *(piVar2 + 0x4c) = 0;
            piVar2[1] = "parent";
            piVar2[8] = reloc.regulator_stub_list_voltage.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt;
            piVar2[10] = obj.__this_module;
            uStack_50 = *(param_1 + 0x300);
            iStack_68 = iVar7;
            iStack_60 = iVar3;
            piStack_58 = piVar2;
            uVar5 = devm_regulator_register(iVar7,piVar2,&iStack_68);
            if (uVar5 < 0xfffffffffffff001) {
                iVar1 = devm_regulator_debug_register(iVar7,uVar5);
                if (iVar1 != 0) {
                    _dev_err(iVar7,"failed to register debug regulator, rc=%d\n",iVar1);
                }
                uVar5 = 0;
            }
            else if (uVar5 == -0x205) {
                uVar5 = 0xfffffdfb;
            }
            else {
                _dev_err(iVar7,"%s: regulator_register failed\n","regulator_stub_probe");
            }
            goto code_r0x08001384;
        }
    }
    uVar5 = 0xfffffff4;
code_r0x08001384:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return uVar5 & 0xffffffff;
    }
    auVar8 = __stack_chk_fail();
    if (1 < auVar8._8_4_) {
        return 0xffffffea;
    }
    iVar7 = *(auVar8._0_8_ + 0x478);
    if (auVar8._8_4_ != 0) {
        return *(iVar7 + 0xc);
    }
    return *(iVar7 + 8);
}


// ===== sym.regulator_stub_get_mode.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt @ 0x080011c8 (size 8) =====

uint sym.regulator_stub_get_mode.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    return *(iVar1 + 0x140);
}


// ===== sym.regulator_stub_set_mode.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt @ 0x080011d0 (size 8) =====

uint sym.regulator_stub_set_mode.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt(int64_t param_1,int param_2)

{
    int64_t iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    if ((param_2 == 2) || (param_2 == 4)) {
        uVar2 = 0;
        *(iVar1 + 0x140) = param_2;
    }
    else {
        _dev_err(param_1 + 0xe8,"%s: invalid mode requested %u\n","regulator_stub_set_mode",param_2);
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.regulator_stub_list_voltage.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt @ 0x080011d8 (size 8) =====

uint sym.regulator_stub_list_voltage.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt(int64_t param_1,uint32_t param_2)

{
    if (1 < param_2) {
        return 0xffffffea;
    }
    if (param_2 != 0) {
        return *(*(param_1 + 0x478) + 0xc);
    }
    return *(*(param_1 + 0x478) + 8);
}


// ===== sym.regulator_stub_is_enabled.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt @ 0x080011e0 (size 8) =====

uchar sym.regulator_stub_is_enabled.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    return *(iVar1 + 0x13c);
}


// ===== sym.regulator_stub_get_voltage.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt @ 0x080011e8 (size 8) =====

uint sym.regulator_stub_get_voltage.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    return *(iVar1 + 0x138);
}


// ===== sym.regulator_stub_enable.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt @ 0x080011f0 (size 8) =====

ulong sym.regulator_stub_enable.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    *(iVar1 + 0x13c) = 1;
    return 0;
}


// ===== sym.regulator_stub_disable.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt @ 0x080011f8 (size 8) =====

ulong sym.regulator_stub_disable.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    *(iVar1 + 0x13c) = 0;
    return 0;
}


// ===== sym.regulator_stub_init.cfi_jt @ 0x08001200 (size 8) =====

void sym.regulator_stub_init.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.regulator_stub_probe.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.regulator_stub_probe @ 0x08001208 (size 576) =====

uint64_t sym.regulator_stub_probe(int64_t arg1)

{
    int iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar8 [12];
    int64_t iStack_68;
    int64_t iStack_60;
    int64_t *piStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar7 = arg1 + 0x10;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    if (*(arg1 + 0x300) == 0) {
        _dev_err(iVar7,"%s: device node missing\n","regulator_stub_probe");
        uVar5 = 0xffffffed;
        goto code_r0x08001384;
    }
    piVar2 = devm_kmalloc(iVar7,0x150,0xdc0);
    if ((piVar2 != NULL) && (iVar3 = of_get_regulator_init_data(iVar7,*(arg1 + 0x300),piVar2), iVar3 != 0)) {
        if (*(iVar3 + 8) == 0) {
            _dev_err(iVar7,"%s: regulator name not specified\n","regulator_stub_probe");
            uVar5 = 0xffffffea;
            goto code_r0x08001384;
        }
        of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,system-load",piVar2 + 0x29,1,0);
        of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,hpm-min-load",piVar2 + 0x144,1,0);
        uVar6 = 4;
        if (*(piVar2 + 0x144) <= piVar2[0x29]) {
            uVar6 = 2;
        }
        *(piVar2 + 0x27) = *(iVar3 + 0x10);
        *(piVar2 + 0x28) = uVar6;
        *(iVar3 + 0x40) = *(iVar3 + 0x40) | 0x14;
        *(iVar3 + 0x44) = *(iVar3 + 0x14);
        *(iVar3 + 0x3c) = 6;
        *(piVar2 + 7) = (*(iVar3 + 0x10) != 0 || *(iVar3 + 0x14) != 0) << 1;
        iVar4 = devm_kstrdup(iVar7,*(iVar3 + 8),0xcc0);
        *piVar2 = iVar4;
        if (iVar4 != 0) {
            *(piVar2 + 0x4c) = 0;
            piVar2[1] = "parent";
            piVar2[8] = reloc.regulator_stub_list_voltage.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt;
            piVar2[10] = obj.__this_module;
            uStack_50 = *(arg1 + 0x300);
            iStack_68 = iVar7;
            iStack_60 = iVar3;
            piStack_58 = piVar2;
            uVar5 = devm_regulator_register(iVar7,piVar2,&iStack_68);
            if (uVar5 < 0xfffffffffffff001) {
                iVar1 = devm_regulator_debug_register(iVar7,uVar5);
                if (iVar1 != 0) {
                    _dev_err(iVar7,"failed to register debug regulator, rc=%d\n",iVar1);
                }
                uVar5 = 0;
            }
            else if (uVar5 == -0x205) {
                uVar5 = 0xfffffdfb;
            }
            else {
                _dev_err(iVar7,"%s: regulator_register failed\n","regulator_stub_probe");
            }
            goto code_r0x08001384;
        }
    }
    uVar5 = 0xfffffff4;
code_r0x08001384:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return uVar5 & 0xffffffff;
    }
    auVar8 = __stack_chk_fail();
    if (1 < auVar8._8_4_) {
        return 0xffffffea;
    }
    iVar7 = *(auVar8._0_8_ + 0x478);
    if (auVar8._8_4_ != 0) {
        return *(iVar7 + 0xc);
    }
    return *(iVar7 + 8);
}


// ===== sym.regulator_stub_list_voltage @ 0x08001448 (size 56) =====

uint sym.regulator_stub_list_voltage(int64_t arg1,uint32_t arg2)

{
    if (1 < arg2) {
        return 0xffffffea;
    }
    if (arg2 != 0) {
        return *(*(arg1 + 0x478) + 0xc);
    }
    return *(*(arg1 + 0x478) + 8);
}


// ===== sym.regulator_stub_set_voltage @ 0x08001480 (size 60) =====

ulong sym.regulator_stub_set_voltage(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    *(iVar1 + 0x138) = arg1;
    return 0;
}


// ===== sym.regulator_stub_get_voltage @ 0x080014bc (size 40) =====

uint sym.regulator_stub_get_voltage(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    return *(iVar1 + 0x138);
}


// ===== sym.regulator_stub_enable @ 0x080014e4 (size 52) =====

ulong sym.regulator_stub_enable(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    *(iVar1 + 0x13c) = 1;
    return 0;
}


// ===== sym.regulator_stub_disable @ 0x08001518 (size 48) =====

ulong sym.regulator_stub_disable(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    *(iVar1 + 0x13c) = 0;
    return 0;
}


// ===== sym.regulator_stub_is_enabled @ 0x08001548 (size 40) =====

uchar sym.regulator_stub_is_enabled(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    return *(iVar1 + 0x13c);
}


// ===== sym.regulator_stub_set_mode @ 0x08001570 (size 116) =====

uint sym.regulator_stub_set_mode(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg2;
    iVar2 = rdev_get_drvdata();
    if ((iVar1 == 2) || (iVar1 == 4)) {
        uVar3 = 0;
        *(iVar2 + 0x140) = iVar1;
    }
    else {
        _dev_err(arg1 + 0xe8,"%s: invalid mode requested %u\n","regulator_stub_set_mode",arg2 & 0xffffffff);
        uVar3 = 0xffffffea;
    }
    return uVar3;
}


// ===== sym.regulator_stub_get_mode @ 0x080015e4 (size 40) =====

uint sym.regulator_stub_get_mode(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    return *(iVar1 + 0x140);
}


// ===== sym.regulator_stub_get_optimum_mode @ 0x0800160c (size 76) =====

uint sym.regulator_stub_get_optimum_mode(int64_t arg1)

{
    int64_t iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    uVar2 = 4;
    if (*(iVar1 + 0x144) <= *(iVar1 + 0x148) + arg1) {
        uVar2 = 2;
    }
    return uVar2;
}


// ===== sym.__cfi_check_fail @ 0x08001658 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800169c

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
    //switch table (4 cases) at 0x8000130
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80016b0);
    (*pcVar1)();
}


// ===== sym.regulator_stub_init @ 0x080016b4 (size 52) =====

void sym.regulator_stub_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.regulator_stub_probe.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080016e8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.regulator_stub_probe.ab655c579b4a30af2c2d9f15ea0a08a2.cfi_jt);
    return;
}

