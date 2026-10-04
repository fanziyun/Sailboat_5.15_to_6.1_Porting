// decompiled from q6_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 224) =====

//WARNING: Switch with 1 destination removed at 0x08001294

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x4aa3977fc3532e27) {
        if (arg1 == -0x23ce488677edb497) {
            if ((pcVar1 + -0x80010f8 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001254;
        }
        if (arg1 != 0x2b3a43e29242445) goto code_r0x08001254;
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 == 0x4aa3977fc3532e27) {
            if ((pcVar1 + -0x8001108 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x08001254;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001254;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001254:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80012a8);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010e8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010f0 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    return 0;
}


// ===== sym.msm_aud_evt_notifier_call_chain.cfi_jt @ 0x080010f8 (size 8) =====

void sym.msm_aud_evt_notifier_call_chain.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    atomic_notifier_call_chain(obj.msm_aud_evt_notifier_list,param_1,param_2);
    return;
}


// ===== sym.msm_aud_evt_blocking_notifier_call_chain.cfi_jt @ 0x08001100 (size 8) =====

void sym.msm_aud_evt_blocking_notifier_call_chain.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    blocking_notifier_call_chain(obj.msm_aud_evt_notifier_list,param_1,param_2);
    return;
}


// ===== sym.msm_aud_evt_unregister_client.cfi_jt @ 0x08001108 (size 8) =====

void sym.msm_aud_evt_unregister_client.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    atomic_notifier_chain_unregister(obj.msm_aud_evt_notifier_list,param_1);
    return;
}


// ===== sym.msm_aud_evt_blocking_unregister_client.cfi_jt @ 0x08001110 (size 8) =====

void sym.msm_aud_evt_blocking_unregister_client.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    blocking_notifier_chain_unregister(obj.msm_aud_evt_notifier_list,param_1);
    return;
}


// ===== sym.msm_aud_evt_blocking_register_client.cfi_jt @ 0x08001118 (size 8) =====

void sym.msm_aud_evt_blocking_register_client.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    blocking_notifier_chain_register(obj.msm_aud_evt_notifier_list,param_1);
    return;
}


// ===== sym.msm_aud_evt_register_client.cfi_jt @ 0x08001120 (size 8) =====

void sym.msm_aud_evt_register_client.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    atomic_notifier_chain_register(obj.msm_aud_evt_notifier_list,param_1);
    return;
}


// ===== sym.msm_aud_evt_register_client @ 0x08001128 (size 48) =====

void sym.msm_aud_evt_register_client(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    atomic_notifier_chain_register(obj.msm_aud_evt_notifier_list,arg1);
    return;
}


// ===== sym.msm_aud_evt_unregister_client @ 0x08001158 (size 48) =====

void sym.msm_aud_evt_unregister_client(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    atomic_notifier_chain_unregister(obj.msm_aud_evt_notifier_list,arg1);
    return;
}


// ===== sym.msm_aud_evt_notifier_call_chain @ 0x08001188 (size 52) =====

void sym.msm_aud_evt_notifier_call_chain(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    atomic_notifier_call_chain(obj.msm_aud_evt_notifier_list,arg1,arg2);
    return;
}


// ===== sym.msm_aud_evt_blocking_register_client @ 0x080011bc (size 48) =====

void sym.msm_aud_evt_blocking_register_client(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    blocking_notifier_chain_register(obj.msm_aud_evt_notifier_list,arg1);
    return;
}


// ===== sym.msm_aud_evt_blocking_unregister_client @ 0x080011ec (size 48) =====

void sym.msm_aud_evt_blocking_unregister_client(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    blocking_notifier_chain_unregister(obj.msm_aud_evt_notifier_list,arg1);
    return;
}


// ===== sym.msm_aud_evt_blocking_notifier_call_chain @ 0x0800121c (size 52) =====

void sym.msm_aud_evt_blocking_notifier_call_chain(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    blocking_notifier_call_chain(obj.msm_aud_evt_notifier_list,arg1,arg2);
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001250 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001294

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
    //switch table (4 cases) at 0x80000e8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80012a8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001384 (size 16) =====

ulong sym.init_module(int64_t arg1)

{
    return 0;
}


// ===== sym.cleanup_module @ 0x08001394 (size 12) =====

void sym.cleanup_module(void)

{
    return;
}

