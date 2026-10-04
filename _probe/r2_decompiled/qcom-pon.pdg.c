// decompiled from qcom-pon by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 196) =====

//WARNING: Switch with 1 destination removed at 0x080012b8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x45354cb0006fddad) {
            uVar2 = 0x80010e8;
        }
        else {
            if (arg1 != -0x3557318fb8d07b71) goto code_r0x08001278;
            uVar2 = 0x80010d0;
        }
    }
    else if (arg1 == 0x2b3a43e29242445) {
        uVar2 = 0x80010e0;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001278;
        uVar2 = 0x80010d8;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x08001278:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80012cc);
    (*pcVar1)();
}


// ===== sym.pm8916_pon_probe.ef96dfdd399c0020edcc8a1c625e2d9a.cfi_jt @ 0x080010d0 (size 8) =====

int sym.pm8916_pon_probe.ef96dfdd399c0020edcc8a1c625e2d9a.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    int64_t *piVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x10;
    piVar3 = devm_kmalloc(iVar1,0x58,0xdc0);
    if (piVar3 == NULL) {
        iVar2 = -0xc;
    }
    else {
        uVar4 = *(param_1 + 0x70);
        *piVar3 = iVar1;
        iVar5 = dev_get_regmap(uVar4,0);
        piVar3[1] = iVar5;
        if (iVar5 == 0) {
            _dev_err(iVar1,"failed to locate regmap\n");
            iVar2 = -0x13;
        }
        else {
            iVar2 = of_property_read_variable_u32_array(*(param_1 + 0x300),0x80004b8,piVar3 + 2,1,0);
            if (-1 < iVar2) {
                piVar3[3] = iVar1;
                iVar5 = of_device_get_match_data(iVar1);
                piVar3[10] = iVar5;
                piVar3[6] = sym.pm8916_reboot_mode_write.ef96dfdd399c0020edcc8a1c625e2d9a.cfi_jt;
                iVar2 = devm_reboot_mode_register(iVar1,piVar3 + 3);
                if (iVar2 != 0) {
                    _dev_err(iVar1,"can\'t register reboot mode\n");
                    return iVar2;
                }
                *(param_1 + 0xa8) = piVar3;
                iVar2 = devm_of_platform_populate(iVar1);
            }
        }
    }
    return iVar2;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010d8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.pm8916_pon_probe.ef96dfdd399c0020edcc8a1c625e2d9a.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010e0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.pm8916_pon_probe.ef96dfdd399c0020edcc8a1c625e2d9a.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.pm8916_reboot_mode_write.ef96dfdd399c0020edcc8a1c625e2d9a.cfi_jt @ 0x080010e8 (size 8) =====

int sym.pm8916_reboot_mode_write.ef96dfdd399c0020edcc8a1c625e2d9a.cfi_jt(int64_t param_1,int param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = regmap_update_bits_base
                      (*(param_1 + -0x10),*(param_1 + -8) + 0x8f,-1L << (*(param_1 + 0x38) & 0x3f) & 0xff,
                       param_2 << (*(param_1 + 0x38) & 0x1f),0,0,0);
    if (iVar1 < 0) {
        _dev_err(*(param_1 + -0x18),"update reboot mode bits failed\n");
    }
    return iVar1;
}


// ===== sym.pm8916_pon_probe @ 0x080010f0 (size 260) =====

int sym.pm8916_pon_probe(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int64_t *piVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x10;
    piVar3 = devm_kmalloc(iVar1,0x58,0xdc0);
    if (piVar3 == NULL) {
        iVar2 = -0xc;
    }
    else {
        uVar4 = *(arg1 + 0x70);
        *piVar3 = iVar1;
        iVar5 = dev_get_regmap(uVar4,0);
        piVar3[1] = iVar5;
        if (iVar5 == 0) {
            _dev_err(iVar1,"failed to locate regmap\n");
            iVar2 = -0x13;
        }
        else {
            iVar2 = of_property_read_variable_u32_array(*(arg1 + 0x300),0x80004b8,piVar3 + 2,1,0);
            if (-1 < iVar2) {
                piVar3[3] = iVar1;
                iVar5 = of_device_get_match_data(iVar1);
                piVar3[10] = iVar5;
                piVar3[6] = sym.pm8916_reboot_mode_write.ef96dfdd399c0020edcc8a1c625e2d9a.cfi_jt;
                iVar2 = devm_reboot_mode_register(iVar1,piVar3 + 3);
                if (iVar2 != 0) {
                    _dev_err(iVar1,"can\'t register reboot mode\n");
                    return iVar2;
                }
                *(arg1 + 0xa8) = piVar3;
                iVar2 = devm_of_platform_populate(iVar1);
            }
        }
    }
    return iVar2;
}


// ===== sym.pm8916_reboot_mode_write @ 0x080011f4 (size 128) =====

int sym.pm8916_reboot_mode_write(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = regmap_update_bits_base
                      (*(arg1 + -0x10),*(arg1 + -8) + 0x8f,-1L << (*(arg1 + 0x38) & 0x3f) & 0xff,
                       arg2 << (*(arg1 + 0x38) & 0x1f),0,0,0);
    if (iVar1 < 0) {
        _dev_err(*(arg1 + -0x18),"update reboot mode bits failed\n");
    }
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x08001274 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080012b8

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
    pcVar1 = SoftwareBreakpoint(0x5502,0x80012cc);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080012d4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.pm8916_pon_probe.ef96dfdd399c0020edcc8a1c625e2d9a.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001308 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.pm8916_pon_probe.ef96dfdd399c0020edcc8a1c625e2d9a.cfi_jt);
    return;
}

