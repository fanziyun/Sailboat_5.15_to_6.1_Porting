// decompiled from qnoc-kalama by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x0803b000 (size 148) =====

//WARNING: Switch with 1 destination removed at 0x0803b164

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
        if (1 < (pcVar1 + -0x803b0a8 >> 3 | pcVar1 << 0x3d)) goto code_r0x0803b124;
    }
    else {
        if (uVar2 == 0x2b3a43e29242445) {
            pcVar3 = sym.init_module.cfi_jt;
        }
        else {
            if (uVar2 != 0x5b83a3fd302a5421) goto code_r0x0803b124;
            pcVar3 = sym.qcom_icc_rpmh_sync_state.cfi_jt;
        }
        if (pcVar1 != pcVar3) {
code_r0x0803b124:
            *in_x18 = unaff_x30;
            if (arg3 != 0) {
                if (4 < *arg3) {
                    return;
                }
                __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5502,0x803b178);
            (*pcVar1)();
        }
    }
    return;
}


// ===== sym.init_module.cfi_jt @ 0x0803b0a0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qnoc_probe.00af97c55fb5e911f6db82230cada4c4.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qcom_icc_rpmh_remove.cfi_jt @ 0x0803b0a8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.qcom_icc_rpmh_remove.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qnoc_probe.00af97c55fb5e911f6db82230cada4c4.cfi_jt @ 0x0803b0b0 (size 8) =====

int sym.qnoc_probe.00af97c55fb5e911f6db82230cada4c4.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = qcom_icc_rpmh_probe();
    if (iVar1 == 0) {
        _dev_info(param_1 + 0x10,"Registered ICC provider\n");
    }
    else {
        _dev_err(param_1 + 0x10,"failed to register ICC provider\n");
    }
    return iVar1;
}


// ===== sym.qcom_icc_rpmh_sync_state.cfi_jt @ 0x0803b0b8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.qcom_icc_rpmh_sync_state.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qnoc_probe @ 0x0803b0c0 (size 96) =====

int sym.qnoc_probe(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = qcom_icc_rpmh_probe();
    if (iVar1 == 0) {
        _dev_info(arg1 + 0x10,"Registered ICC provider\n");
    }
    else {
        _dev_err(arg1 + 0x10,"failed to register ICC provider\n");
    }
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x0803b120 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0803b164

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
    //switch table (4 cases) at 0x8038928
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x803b178);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x0803b184 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qnoc_probe.00af97c55fb5e911f6db82230cada4c4.cfi_jt,obj.__this_module);
    return;
}

