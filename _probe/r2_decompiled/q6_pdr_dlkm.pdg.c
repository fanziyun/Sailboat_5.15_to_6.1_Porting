// decompiled from q6_pdr_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 196) =====

//WARNING: Switch with 1 destination removed at 0x080011f0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x47ce015a85343a42) {
        if (arg1 == -0xb1882a678df8afe) {
            uVar2 = 0x80010e0;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x080011b0;
            uVar2 = 0x80010d8;
        }
    }
    else if (arg1 == 0x47ce015a85343a42) {
        uVar2 = 0x80010e8;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080011b0;
        uVar2 = 0x80010d0;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x080011b0:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001204);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010d0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010d8 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    return 0;
}


// ===== sym.audio_pdr_service_register.cfi_jt @ 0x080010e0 (size 8) =====

ulong sym.audio_pdr_service_register.cfi_jt(int param_1,ulong param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _obj.audio_pdr_services = pdr_handle_alloc(param_2,0);
        uVar1 = pdr_add_lookup(_obj.audio_pdr_services,"avs/audio","msm/adsp/audio_pd");
    }
    else {
        _printk(0x800012d,"audio_pdr_service_register",param_1);
        uVar1 = 0xffffffffffffffea;
    }
    return uVar1;
}


// ===== sym.audio_pdr_service_deregister.cfi_jt @ 0x080010e8 (size 8) =====

ulong sym.audio_pdr_service_deregister.cfi_jt(int param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        pdr_handle_release(_segment.ehdr);
        uVar1 = 0;
    }
    else {
        _printk(0x800012d,"audio_pdr_service_deregister",param_1);
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.audio_pdr_service_register @ 0x080010f0 (size 104) =====

ulong sym.audio_pdr_service_register(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _obj.audio_pdr_services = pdr_handle_alloc(arg2,0);
        uVar1 = pdr_add_lookup(_obj.audio_pdr_services,"avs/audio","msm/adsp/audio_pd");
    }
    else {
        _printk(0x800012d,"audio_pdr_service_register",arg1 & 0xffffffff);
        uVar1 = 0xffffffffffffffea;
    }
    return uVar1;
}


// ===== sym.audio_pdr_service_deregister @ 0x08001158 (size 84) =====

ulong sym.audio_pdr_service_deregister(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        pdr_handle_release(_segment.ehdr);
        uVar1 = 0;
    }
    else {
        _printk(0x800012d,"audio_pdr_service_deregister",arg1 & 0xffffffff);
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.__cfi_check_fail @ 0x080011ac (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080011f0

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
    //switch table (4 cases) at 0x80000f0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001204);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x0800124c (size 16) =====

ulong sym.init_module(int64_t arg1)

{
    return 0;
}


// ===== sym.cleanup_module @ 0x0800125c (size 12) =====

void sym.cleanup_module(void)

{
    return;
}

