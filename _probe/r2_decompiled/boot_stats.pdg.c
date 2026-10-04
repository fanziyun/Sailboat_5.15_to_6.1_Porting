// decompiled from boot_stats by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 100) =====

//WARNING: Switch with 1 destination removed at 0x08001134

void sym.__cfi_check(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 == 0x2b3a43e29242445) {
        uVar2 = 0x8001078;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080010f4;
        uVar2 = 0x8001070;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x080010f4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001148);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001070 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001078 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = of_find_compatible_node(0,0,"qcom,msm-imem-boot_stats");
    if (iVar4 == 0) {
        uVar6 = 0x80001a7;
    }
    else {
        _segment.ehdr = of_iomap(iVar4,0);
        if (_segment.ehdr == 0) {
            uVar6 = 0x80000f1;
        }
        else {
            iVar4 = of_find_compatible_node(0,0,"qcom,mpm2-sleep-counter");
            if (iVar4 == 0) {
                uVar6 = 0x800007b;
            }
            else {
                iVar1 = of_property_read_variable_u32_array(iVar4,"clock-frequency",obj.mpm_counter_freq,1,0);
                if (iVar1 < 0) {
                    return 0xffffffed;
                }
                iVar5 = __of_get_address(iVar4,0,0xffffffff,0,0);
                if (iVar5 == 0) {
                    return 0xffffffed;
                }
                _segment.ehdr = of_iomap(iVar4,0);
                if (_segment.ehdr != 0) {
                    uVar2 = sym.readl_relaxed(_segment.ehdr);
                    _printk(0x8000183,uVar2);
                    uVar2 = sym.readl_relaxed(_segment.ehdr + 4);
                    _printk(0x800010f,uVar2);
                    iVar1 = sym.readl_relaxed(_segment.ehdr + 0xc);
                    iVar3 = sym.readl_relaxed(_segment.ehdr + 8);
                    _printk(0x8000159,iVar1 - iVar3);
                    uVar2 = sym.readl_relaxed(_segment.ehdr);
                    _printk(0x800009e,uVar2);
                    _printk(0x8000131,_segment.ehdr & 0xffffffff);
                    iounmap(_segment.ehdr);
                    iounmap(_segment.ehdr);
                    return 0;
                }
                uVar6 = 0x8000055;
                _segment.ehdr = 0;
            }
        }
    }
    _printk(uVar6);
    return 0xffffffed;
}


// ===== sym.readl_relaxed @ 0x08001080 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001084);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x80010b8);
    return uVar1;
}


// ===== sym.__cfi_check_fail @ 0x080010f0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001134

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
    //switch table (4 cases) at 0x8000050
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001148);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001154 (size 420) =====

ulong sym.init_module(void)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = of_find_compatible_node(0,0,"qcom,msm-imem-boot_stats");
    if (iVar4 == 0) {
        uVar6 = 0x80001a7;
    }
    else {
        _segment.ehdr = of_iomap(iVar4,0);
        if (_segment.ehdr == 0) {
            uVar6 = 0x80000f1;
        }
        else {
            iVar4 = of_find_compatible_node(0,0,"qcom,mpm2-sleep-counter");
            if (iVar4 == 0) {
                uVar6 = 0x800007b;
            }
            else {
                iVar1 = of_property_read_variable_u32_array(iVar4,"clock-frequency",obj.mpm_counter_freq,1,0);
                if (iVar1 < 0) {
                    return 0xffffffed;
                }
                iVar5 = __of_get_address(iVar4,0,0xffffffff,0,0);
                if (iVar5 == 0) {
                    return 0xffffffed;
                }
                _segment.ehdr = of_iomap(iVar4,0);
                if (_segment.ehdr != 0) {
                    uVar2 = sym.readl_relaxed(_segment.ehdr);
                    _printk(0x8000183,uVar2);
                    uVar2 = sym.readl_relaxed(_segment.ehdr + 4);
                    _printk(0x800010f,uVar2);
                    iVar1 = sym.readl_relaxed(_segment.ehdr + 0xc);
                    iVar3 = sym.readl_relaxed(_segment.ehdr + 8);
                    _printk(0x8000159,iVar1 - iVar3);
                    uVar2 = sym.readl_relaxed(_segment.ehdr);
                    _printk(0x800009e,uVar2);
                    _printk(0x8000131,_segment.ehdr & 0xffffffff);
                    iounmap(_segment.ehdr);
                    uVar6 = iounmap(_segment.ehdr);
                    return uVar6;
                }
                uVar6 = 0x8000055;
                _segment.ehdr = 0;
            }
        }
    }
    _printk(uVar6);
    return 0xffffffed;
}


// ===== sym.cleanup_module @ 0x080012f8 (size 12) =====

void sym.cleanup_module(void)

{
    return;
}

