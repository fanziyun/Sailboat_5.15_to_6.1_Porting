// decompiled from stm_console by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 232) =====

//WARNING: Switch with 1 destination removed at 0x08001270

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x4e01872f0cad3dae) {
            uVar2 = 0x8001100;
        }
        else {
            if (arg1 != -0x364aac9e17225b48) goto code_r0x08001230;
            uVar2 = 0x8001110;
        }
    }
    else if (arg1 == 0x2b3a43e29242445) {
        uVar2 = 0x80010f8;
    }
    else if (arg1 == 0x3a522a0eaaf96cff) {
        uVar2 = 0x8001108;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001230;
        uVar2 = 0x80010f0;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x08001230:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001284);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010f0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    stm_source_unregister_device(obj.stm_console);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010f8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    stm_source_register_device(0,obj.stm_console);
    return;
}


// ===== sym.stm_console_link.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001100 (size 8) =====

ulong sym.stm_console_link.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x28) = str.stm_console._0_8_;
    *(param_1 + 0x30) = 0x656c6f;
    *(param_1 + 0x38) = sym.stm_console_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    *(param_1 + 0x70) = 5;
    register_console();
    return 0;
}


// ===== sym.stm_console_unlink.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001108 (size 8) =====

void sym.stm_console_unlink.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_console(param_1 + 0x28);
    return;
}


// ===== sym.stm_console_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001110 (size 8) =====

void sym.stm_console_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,uint param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    stm_source_write(param_1 + -0x28,0,param_2,param_3);
    return;
}


// ===== sym.init_module @ 0x08001118 (size 48) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    stm_source_register_device(0,obj.stm_console);
    return;
}


// ===== sym.cleanup_module @ 0x08001148 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    stm_source_unregister_device(obj.stm_console);
    return;
}


// ===== sym.stm_console_link @ 0x08001174 (size 88) =====

ulong sym.stm_console_link(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x28) = str.stm_console._0_8_;
    *(arg1 + 0x30) = 0x656c6f;
    *(arg1 + 0x38) = sym.stm_console_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    *(arg1 + 0x70) = 5;
    register_console();
    return 0;
}


// ===== sym.stm_console_unlink @ 0x080011cc (size 40) =====

void sym.stm_console_unlink(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_console(arg1 + 0x28);
    return;
}


// ===== sym.stm_console_write @ 0x080011f4 (size 56) =====

void sym.stm_console_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    stm_source_write(arg1 + -0x28,0,arg2,arg3 & 0xffffffff);
    return;
}


// ===== sym.__cfi_check_fail @ 0x0800122c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001270

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
    //switch table (4 cases) at 0x80000d0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001284);
    (*pcVar1)();
}

