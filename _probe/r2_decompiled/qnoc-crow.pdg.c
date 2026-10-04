// decompiled from qnoc-crow by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08022000 (size 224) =====

//WARNING: Switch with 1 destination removed at 0x080221b4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar2 = arg2;
    if (arg1 < 0x5b83a3fd302a5421) {
        if (arg1 == -0x3557318fb8d07b71) {
            if ((pcVar2 + -0x80220f8 >> 3 | pcVar2 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08022174;
        }
        if (arg1 != 0x2b3a43e29242445) goto code_r0x08022174;
        pcVar1 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 != 0x5b83a3fd302a5421) {
            if ((arg1 == 0x7e04a0fb7ad8bcd5) && (pcVar2 == sym.cleanup_module.cfi_jt)) {
                return;
            }
            goto code_r0x08022174;
        }
        pcVar1 = sym.qcom_icc_rpmh_sync_state.cfi_jt;
    }
    if (pcVar2 == pcVar1) {
        return;
    }
code_r0x08022174:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar2,0);
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5502,0x80221c8);
    (*pcVar2)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080220e8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qnoc_probe.80dc4cc64f75c8d979ca14f08025be92.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080220f0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qnoc_probe.80dc4cc64f75c8d979ca14f08025be92.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qcom_icc_rpmh_remove.cfi_jt @ 0x080220f8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.qcom_icc_rpmh_remove.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qnoc_probe.80dc4cc64f75c8d979ca14f08025be92.cfi_jt @ 0x08022100 (size 8) =====

int sym.qnoc_probe.80dc4cc64f75c8d979ca14f08025be92.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = qcom_icc_rpmh_probe();
    if (iVar1 == 0) {
        _dev_info(param_1 + 0x10,"Registered CROW ICC\n");
    }
    else {
        _dev_err(param_1 + 0x10,"failed to register ICC provider\n");
    }
    return iVar1;
}


// ===== sym.qcom_icc_rpmh_sync_state.cfi_jt @ 0x08022108 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.qcom_icc_rpmh_sync_state.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qnoc_probe @ 0x08022110 (size 96) =====

int sym.qnoc_probe(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = qcom_icc_rpmh_probe();
    if (iVar1 == 0) {
        _dev_info(arg1 + 0x10,"Registered CROW ICC\n");
    }
    else {
        _dev_err(arg1 + 0x10,"failed to register ICC provider\n");
    }
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x08022170 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080221b4

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
    //switch table (4 cases) at 0x80207a8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80221c8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080221d4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qnoc_probe.80dc4cc64f75c8d979ca14f08025be92.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08022208 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qnoc_probe.80dc4cc64f75c8d979ca14f08025be92.cfi_jt);
    return;
}

