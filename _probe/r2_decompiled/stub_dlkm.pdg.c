// decompiled from stub_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 148) =====

//WARNING: Switch with 1 destination removed at 0x0800116c

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
        if (1 < (pcVar1 + -0x80010a0 >> 3 | pcVar1 << 0x3d)) goto code_r0x0800112c;
    }
    else {
        if (uVar2 == 0x2b3a43e29242445) {
            pcVar3 = sym.init_module.cfi_jt;
        }
        else {
            if (uVar2 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800112c;
            pcVar3 = sym.cleanup_module.cfi_jt;
        }
        if (pcVar1 != pcVar3) {
code_r0x0800112c:
            *in_x18 = unaff_x30;
            if (arg3 != 0) {
                if (4 < *arg3) {
                    return;
                }
                __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5502,0x8001180);
            (*pcVar1)();
        }
    }
    return;
}


// ===== sym.msm_stub_dev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080010a0 (size 8) =====

void sym.msm_stub_dev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snd_soc_register_component(param_1 + 0x10,obj.soc_msm_stub,obj.msm_stub_dais,2);
    return;
}


// ===== sym.msm_stub_dev_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080010a8 (size 8) =====

ulong sym.msm_stub_dev_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snd_soc_unregister_component(param_1 + 0x10);
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010b0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_stub_dev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010b8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.msm_stub_dev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.msm_stub_dev_probe @ 0x080010c0 (size 60) =====

void sym.msm_stub_dev_probe(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snd_soc_register_component(arg1 + 0x10,obj.soc_msm_stub,obj.msm_stub_dais,2);
    return;
}


// ===== sym.msm_stub_dev_remove @ 0x080010fc (size 44) =====

ulong sym.msm_stub_dev_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snd_soc_unregister_component(arg1 + 0x10);
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08001128 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800116c

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
    //switch table (4 cases) at 0x8000310
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001180);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001184 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.msm_stub_dev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080011b8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_stub_dev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

