// decompiled from stm_ftrace by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 232) =====

//WARNING: Switch with 1 destination removed at 0x0800120c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x4e01872f0cad3dae) {
            uVar2 = 0x8001108;
        }
        else {
            if (arg1 != -0x394492ab40ed64ab) goto code_r0x080011cc;
            uVar2 = 0x8001100;
        }
    }
    else if (arg1 == 0x2b3a43e29242445) {
        uVar2 = 0x80010f8;
    }
    else if (arg1 == 0x3a522a0eaaf96cff) {
        uVar2 = 0x8001110;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080011cc;
        uVar2 = 0x80010f0;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x080011cc:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001220);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010f0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    stm_source_unregister_device(obj.stm_ftrace);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010f8 (size 8) =====

int sym.init_module.cfi_jt(ulong param_1)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *param_1 = param_1;
    uVar3 = __sw_hweight64(register_ftrace_export);
    iVar1 = (uVar3 & 0xffffffff) - 1;
    *0x8000064 = 1L << (-LZCOUNT(iVar1) & 0x3fU);
    if (iVar1 == 0) {
        *0x8000064 = 1;
    }
    iVar2 = stm_source_register_device(0);
    if (iVar2 != 0) {
        _printk(0x8000095);
    }
    return iVar2;
}


// ===== sym.stm_ftrace_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001100 (size 8) =====

void sym.stm_ftrace_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,uint param_3)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = tpidr_el1;
    stm_source_write(param_1 + -0x28,*(cpu_number + iVar1),param_2,param_3);
    return;
}


// ===== sym.stm_ftrace_link.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001108 (size 8) =====

void sym.stm_ftrace_link.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x38) = 7;
    *(param_1 + 0x30) = sym.stm_ftrace_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    register_ftrace_export(param_1 + 0x28);
    return;
}


// ===== sym.stm_ftrace_unlink.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001110 (size 8) =====

void sym.stm_ftrace_unlink.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_ftrace_export(param_1 + 0x28);
    return;
}


// ===== sym.stm_ftrace_link @ 0x08001118 (size 64) =====

void sym.stm_ftrace_link(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x38) = 7;
    *(arg1 + 0x30) = sym.stm_ftrace_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    register_ftrace_export(arg1 + 0x28);
    return;
}


// ===== sym.stm_ftrace_unlink @ 0x08001158 (size 40) =====

void sym.stm_ftrace_unlink(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_ftrace_export(arg1 + 0x28);
    return;
}


// ===== sym.stm_ftrace_write @ 0x08001180 (size 68) =====

void sym.stm_ftrace_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = tpidr_el1;
    stm_source_write(arg1 + -0x28,*(cpu_number + iVar1),arg2,arg3 & 0xffffffff);
    return;
}


// ===== sym.__cfi_check_fail @ 0x080011c8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800120c

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
    //switch table (4 cases) at 0x8000090
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001220);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001224 (size 128) =====

int sym.init_module(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *arg1 = arg1;
    uVar3 = __sw_hweight64(register_ftrace_export);
    iVar1 = (uVar3 & 0xffffffff) - 1;
    *0x8000064 = 1L << (-LZCOUNT(iVar1) & 0x3fU);
    if (iVar1 == 0) {
        *0x8000064 = 1;
    }
    iVar2 = stm_source_register_device(0);
    if (iVar2 != 0) {
        _printk(0x8000095);
    }
    return iVar2;
}


// ===== sym.cleanup_module @ 0x080012a4 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    stm_source_unregister_device(obj.stm_ftrace);
    return;
}

