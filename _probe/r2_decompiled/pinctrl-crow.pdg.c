// decompiled from pinctrl-crow by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08009000 (size 148) =====

//WARNING: Switch with 1 destination removed at 0x08009150

void sym.__cfi_check(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint64_t uVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    uVar2 = arg1;
    if (uVar2 == 0xcaa8ce70472f848f) {
        if (1 < (pcVar1 + -0x80090b0 >> 3 | pcVar1 << 0x3d)) goto code_r0x08009110;
    }
    else {
        if (uVar2 == 0x2b3a43e29242445) {
            pcVar3 = sym.init_module.cfi_jt;
        }
        else {
            if (uVar2 != 0x7e04a0fb7ad8bcd5) goto code_r0x08009110;
            pcVar3 = sym.cleanup_module.cfi_jt;
        }
        if (pcVar1 != pcVar3) {
code_r0x08009110:
            *in_x18 = unaff_x30;
            if (arg3 != 0) {
                if (4 < *arg3) {
                    return;
                }
                __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5502,0x8009164);
            (*pcVar1)();
        }
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080090a0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.crow_pinctrl_probe.f9f902d052a07c117342f37eec87d325.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080090a8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.crow_pinctrl_probe.f9f902d052a07c117342f37eec87d325.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.crow_pinctrl_probe.f9f902d052a07c117342f37eec87d325.cfi_jt @ 0x080090b0 (size 8) =====

ulong sym.crow_pinctrl_probe.f9f902d052a07c117342f37eec87d325.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_device_get_match_data(param_1 + 0x10);
    if (iVar1 == 0) {
        uVar2 = 0xffffffea;
    }
    else {
        uVar2 = msm_pinctrl_probe(param_1,iVar1);
    }
    return uVar2;
}


// ===== sym.msm_pinctrl_remove.cfi_jt @ 0x080090b8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.msm_pinctrl_remove.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.crow_pinctrl_probe @ 0x080090c0 (size 76) =====

ulong sym.crow_pinctrl_probe(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_device_get_match_data(arg1 + 0x10);
    if (iVar1 == 0) {
        uVar2 = 0xffffffea;
    }
    else {
        uVar2 = msm_pinctrl_probe(arg1,iVar1);
    }
    return uVar2;
}


// ===== sym.__cfi_check_fail @ 0x0800910c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08009150

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
    pcVar1 = SoftwareBreakpoint(0x5502,0x8009164);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08009174 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.crow_pinctrl_probe.f9f902d052a07c117342f37eec87d325.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080091a8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.crow_pinctrl_probe.f9f902d052a07c117342f37eec87d325.cfi_jt);
    return;
}

