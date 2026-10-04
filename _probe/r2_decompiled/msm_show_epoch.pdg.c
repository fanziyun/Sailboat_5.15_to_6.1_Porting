// decompiled from msm_show_epoch by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 136) =====

//WARNING: Switch with 1 destination removed at 0x08001144

void sym.__cfi_check(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar2 = arg1;
    if (uVar2 == 0x14d57c675fc6291) {
        uVar3 = 0x80010a0;
    }
    else if (uVar2 == 0x2b3a43e29242445) {
        uVar3 = 0x8001098;
    }
    else {
        if (uVar2 != 0x43edafbdd92b67ea) goto code_r0x08001104;
        uVar3 = 0x8001090;
    }
    if (arg2 == uVar3) {
        return;
    }
code_r0x08001104:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001158);
    (*pcVar1)();
}


// ===== sym.msm_show_resume_epoch_val.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08001090 (size 8) =====

void sym.msm_show_resume_epoch_val.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000075);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001098 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    tracepoint_probe_register
              (__tracepoint_android_vh_show_suspend_epoch_val,
               sym.msm_show_suspend_epoch_val.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_show_resume_epoch_val,
               sym.msm_show_resume_epoch_val.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,0);
    return 0;
}


// ===== sym.msm_show_suspend_epoch_val.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080010a0 (size 8) =====

void sym.msm_show_suspend_epoch_val.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000045);
    return;
}


// ===== sym.msm_show_suspend_epoch_val @ 0x080010a8 (size 44) =====

void sym.msm_show_suspend_epoch_val(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000045);
    return;
}


// ===== sym.msm_show_resume_epoch_val @ 0x080010d4 (size 44) =====

void sym.msm_show_resume_epoch_val(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000075);
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001100 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001144

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
    //switch table (4 cases) at 0x8000040
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001158);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001164 (size 84) =====

ulong sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    tracepoint_probe_register
              (__tracepoint_android_vh_show_suspend_epoch_val,
               sym.msm_show_suspend_epoch_val.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_show_resume_epoch_val,
               sym.msm_show_resume_epoch_val.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,0);
    return 0;
}

