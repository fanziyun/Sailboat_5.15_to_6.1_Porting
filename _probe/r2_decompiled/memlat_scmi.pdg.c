// decompiled from memlat_scmi by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 136) =====

//WARNING: Switch with 1 destination removed at 0x08001120

void sym.__cfi_check(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar2 = arg1;
    if (uVar2 == 0x2b3a43e29242445) {
        uVar3 = 0x8001098;
    }
    else if (uVar2 == 0x4a7363fd219dda0c) {
        uVar3 = 0x80010a0;
    }
    else {
        if (uVar2 != 0x7e04a0fb7ad8bcd5) goto code_r0x080010e0;
        uVar3 = 0x8001090;
    }
    if (arg2 == uVar3) {
        return;
    }
code_r0x080010e0:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001134);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001090 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_driver_unregister(obj.scmi_memlat_drv);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001098 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_driver_register(obj.scmi_memlat_drv,obj.__this_module,"memlat_scmi");
    return;
}


// ===== sym.scmi_memlat_probe.c07e1feac21f6eade446186a18fa0ddb.cfi_jt @ 0x080010a0 (size 8) =====

ulong sym.scmi_memlat_probe.c07e1feac21f6eade446186a18fa0ddb.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 != 0) {
        *in_x18 = unaff_x30;
        uVar1 = cpucp_memlat_init();
        return uVar1;
    }
    return 0xffffffed;
}


// ===== sym.scmi_memlat_probe @ 0x080010a8 (size 52) =====

ulong sym.scmi_memlat_probe(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 != 0) {
        *in_x18 = unaff_x30;
        uVar1 = cpucp_memlat_init();
        return uVar1;
    }
    return 0xffffffed;
}


// ===== sym.__cfi_check_fail @ 0x080010dc (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001120

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
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001134);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001144 (size 60) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_driver_register(obj.scmi_memlat_drv,obj.__this_module,"memlat_scmi");
    return;
}


// ===== sym.cleanup_module @ 0x08001180 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_driver_unregister(obj.scmi_memlat_drv);
    return;
}

