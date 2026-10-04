// decompiled from tcsrcc-kalama by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 196) =====

//WARNING: Switch with 1 destination removed at 0x080011ec

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x5b83a3fd302a5421) {
        if (arg1 == -0x3557318fb8d07b71) {
            uVar2 = 0x80010e0;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x080011ac;
            uVar2 = 0x80010d8;
        }
    }
    else if (arg1 == 0x5b83a3fd302a5421) {
        uVar2 = 0x80010e8;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080011ac;
        uVar2 = 0x80010d0;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x080011ac:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001200);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010d0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.tcsr_cc_kalama_probe.c8d8432fe9ef661c0d17250cef354095.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010d8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.tcsr_cc_kalama_probe.c8d8432fe9ef661c0d17250cef354095.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.tcsr_cc_kalama_probe.c8d8432fe9ef661c0d17250cef354095.cfi_jt @ 0x080010e0 (size 8) =====

uint64_t sym.tcsr_cc_kalama_probe.c8d8432fe9ef661c0d17250cef354095.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = qcom_cc_map(param_1,obj.tcsr_cc_kalama_desc);
    if (uVar1 < 0xfffffffffffff001) {
        uVar2 = qcom_cc_really_probe(param_1,obj.tcsr_cc_kalama_desc,uVar1);
        uVar1 = uVar2 & 0xffffffff;
        if (uVar2 == 0) {
            _dev_info(param_1 + 0x10,"Registered TCSR CC clocks\n");
        }
        else {
            _dev_err(param_1 + 0x10,"Failed to register TCSR CC clocks\n");
        }
    }
    return uVar1 & 0xffffffff;
}


// ===== sym.tcsr_cc_kalama_sync_state.c8d8432fe9ef661c0d17250cef354095.cfi_jt @ 0x080010e8 (size 8) =====

void sym.tcsr_cc_kalama_sync_state.c8d8432fe9ef661c0d17250cef354095.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    qcom_cc_sync_state(param_1,obj.tcsr_cc_kalama_desc);
    return;
}


// ===== sym.tcsr_cc_kalama_probe @ 0x080010f0 (size 140) =====

uint64_t sym.tcsr_cc_kalama_probe(int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = qcom_cc_map(arg1,obj.tcsr_cc_kalama_desc);
    if (uVar1 < 0xfffffffffffff001) {
        uVar2 = qcom_cc_really_probe(arg1,obj.tcsr_cc_kalama_desc,uVar1);
        uVar1 = uVar2 & 0xffffffff;
        if (uVar2 == 0) {
            _dev_info(arg1 + 0x10,"Registered TCSR CC clocks\n");
        }
        else {
            _dev_err(arg1 + 0x10,"Failed to register TCSR CC clocks\n");
        }
    }
    return uVar1 & 0xffffffff;
}


// ===== sym.tcsr_cc_kalama_sync_state @ 0x0800117c (size 44) =====

void sym.tcsr_cc_kalama_sync_state(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    qcom_cc_sync_state(param_1,obj.tcsr_cc_kalama_desc);
    return;
}


// ===== sym.__cfi_check_fail @ 0x080011a8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080011ec

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
    //switch table (4 cases) at 0x80004f0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001200);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001204 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.tcsr_cc_kalama_probe.c8d8432fe9ef661c0d17250cef354095.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001238 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.tcsr_cc_kalama_probe.c8d8432fe9ef661c0d17250cef354095.cfi_jt);
    return;
}

