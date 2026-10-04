// decompiled from qcom-spmi-pmic by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 196) =====

//WARNING: Switch with 1 destination removed at 0x080022c8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x7486b414565a504d) {
            uVar2 = 0x80020e0;
        }
        else {
            if (arg1 != -0x31551a7efd82f64) goto code_r0x08002288;
            uVar2 = 0x80020e8;
        }
    }
    else if (arg1 == 0x2b3a43e29242445) {
        uVar2 = 0x80020d8;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002288;
        uVar2 = 0x80020d0;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x08002288:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80022dc);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080020d0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    driver_unregister(obj.pmic_spmi_driver);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080020d8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __spmi_driver_register(obj.pmic_spmi_driver,obj.__this_module);
    return;
}


// ===== sym.pmic_spmi_remove.75f7082af96c08e3f3e650daf73cabd1.cfi_jt @ 0x080020e0 (size 8) =====

void sym.pmic_spmi_remove.75f7082af96c08e3f3e650daf73cabd1.cfi_jt(void)

{
    return;
}


// ===== sym.pmic_spmi_probe.75f7082af96c08e3f3e650daf73cabd1.cfi_jt @ 0x080020e8 (size 8) =====

uint64_t sym.pmic_spmi_probe.75f7082af96c08e3f3e650daf73cabd1.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    int iStack_3c;
    ulong uStack_38;
    uint uStack_30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iVar3 = of_find_property(*(param_1 + 0x2f0),"qcom,can-sleep",0);
    pcVar1 = obj.spmi_regmap_config;
    if (iVar3 != 0) {
        pcVar1 = obj.spmi_regmap_can_sleep_config;
    }
    uVar4 = __devm_regmap_init_spmi_ext(param_1,pcVar1,0,0);
    if (uVar4 < 0xfffffffffffff001) {
        devm_regmap_qti_debugfs_register(param_1,uVar4);
        if ((*(param_1 + 0x398) & 1) == 0) {
            uStack_2c = 0;
            uStack_30 = 0;
            uStack_38 = 0;
            iStack_3c = 0;
            iVar2 = regmap_read(uVar4,0x104,&uStack_38);
            if (((((-1 < iVar2) && (uStack_38 == 0x51)) && (iVar2 = regmap_read(uVar4,0x105,&iStack_3c), -1 < iVar2))
                && ((iVar2 = regmap_read(uVar4,0x101,&uStack_2c), -1 < iVar2 &&
                    (iVar2 = regmap_read(uVar4,0x102,&uStack_30), -1 < iVar2)))) &&
               (iVar2 = regmap_read(uVar4,0x103,&uStack_38 + 4), -1 < iVar2)) {
                if ((iStack_3c == 1 || iStack_3c == 4) && (uStack_38._4_4_ < 2)) {
                    uStack_38 = CONCAT44(uStack_38._4_4_ + 1,uStack_38);
                }
                else if (iStack_3c == 5) {
                    uStack_30 = uStack_2c;
                }
            }
        }
        uVar4 = devm_of_platform_populate(param_1);
        uVar4 = uVar4 & 0xffffffff;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return uVar4 & 0xffffffff;
    }
    uVar4 = __stack_chk_fail();
    return uVar4;
}


// ===== sym.pmic_spmi_probe @ 0x080020f0 (size 392) =====

uint64_t sym.pmic_spmi_probe(int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    int iStack_3c;
    ulong uStack_38;
    uint uStack_30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iVar3 = of_find_property(*(arg1 + 0x2f0),"qcom,can-sleep",0);
    pcVar1 = obj.spmi_regmap_config;
    if (iVar3 != 0) {
        pcVar1 = obj.spmi_regmap_can_sleep_config;
    }
    uVar4 = __devm_regmap_init_spmi_ext(arg1,pcVar1,0,0);
    if (uVar4 < 0xfffffffffffff001) {
        devm_regmap_qti_debugfs_register(arg1,uVar4);
        if ((*(arg1 + 0x398) & 1) == 0) {
            uStack_2c = 0;
            uStack_30 = 0;
            uStack_38 = 0;
            iStack_3c = 0;
            iVar2 = regmap_read(uVar4,0x104,&uStack_38);
            if (((((-1 < iVar2) && (uStack_38 == 0x51)) && (iVar2 = regmap_read(uVar4,0x105,&iStack_3c), -1 < iVar2))
                && ((iVar2 = regmap_read(uVar4,0x101,&uStack_2c), -1 < iVar2 &&
                    (iVar2 = regmap_read(uVar4,0x102,&uStack_30), -1 < iVar2)))) &&
               (iVar2 = regmap_read(uVar4,0x103,&uStack_38 + 4), -1 < iVar2)) {
                if ((iStack_3c == 1 || iStack_3c == 4) && (uStack_38._4_4_ < 2)) {
                    uStack_38 = CONCAT44(uStack_38._4_4_ + 1,uStack_38);
                }
                else if (iStack_3c == 5) {
                    uStack_30 = uStack_2c;
                }
            }
        }
        uVar4 = devm_of_platform_populate(arg1);
        uVar4 = uVar4 & 0xffffffff;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return uVar4 & 0xffffffff;
    }
    uVar4 = __stack_chk_fail();
    return uVar4;
}


// ===== sym.pmic_spmi_remove @ 0x08002278 (size 12) =====

void sym.pmic_spmi_remove(void)

{
    return;
}


// ===== sym.__cfi_check_fail @ 0x08002284 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080022c8

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
    //switch table (4 cases) at 0x8000110
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80022dc);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080022e4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __spmi_driver_register(obj.pmic_spmi_driver,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08002318 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    driver_unregister(obj.pmic_spmi_driver);
    return;
}

