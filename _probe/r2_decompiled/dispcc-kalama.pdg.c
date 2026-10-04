// decompiled from dispcc-kalama by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08005000 (size 244) =====

//WARNING: Switch with 1 destination removed at 0x080052f8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x57be845bca9148ef) {
            if ((pcVar1 + -0x8005110 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x080052b8;
        }
        if (arg1 != -0x3557318fb8d07b71) goto code_r0x080052b8;
        pcVar2 = sym.disp_cc_kalama_probe.956e7c7a9b781c346b2c390593c4efef.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x5b83a3fd302a5421) {
        pcVar2 = sym.disp_cc_kalama_sync_state.956e7c7a9b781c346b2c390593c4efef.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080052b8;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080052b8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800530c);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08005100 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.disp_cc_kalama_probe.956e7c7a9b781c346b2c390593c4efef.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08005108 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.disp_cc_kalama_probe.956e7c7a9b781c346b2c390593c4efef.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qcom_cc_runtime_suspend.cfi_jt @ 0x08005110 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.qcom_cc_runtime_suspend.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.pm_runtime_force_resume.cfi_jt @ 0x08005118 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.pm_runtime_force_resume.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.pm_runtime_force_suspend.cfi_jt @ 0x08005120 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.pm_runtime_force_suspend.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcom_cc_runtime_resume.cfi_jt @ 0x08005128 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.qcom_cc_runtime_resume.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.disp_cc_kalama_sync_state.956e7c7a9b781c346b2c390593c4efef.cfi_jt @ 0x08005130 (size 8) =====

void sym.disp_cc_kalama_sync_state.956e7c7a9b781c346b2c390593c4efef.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    qcom_cc_sync_state(param_1,obj.disp_cc_kalama_desc);
    return;
}


// ===== sym.disp_cc_kalama_probe.956e7c7a9b781c346b2c390593c4efef.cfi_jt @ 0x08005138 (size 8) =====

uint64_t sym.disp_cc_kalama_probe.956e7c7a9b781c346b2c390593c4efef.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = qcom_cc_map(param_1,obj.disp_cc_kalama_desc);
    if (uVar2 < 0xfffffffffffff001) {
        uVar3 = qcom_cc_runtime_init(param_1,obj.disp_cc_kalama_desc);
        uVar4 = uVar3 & 0xffffffff;
        if (uVar3 == 0) {
            iVar1 = param_1 + 0x10;
            uVar3 = __pm_runtime_resume(iVar1,4);
            uVar4 = uVar3 & 0xffffffff;
            if (uVar3 == 0) {
                clk_lucid_evo_pll_configure(obj.disp_cc_pll0,uVar2,L"\r");
                clk_lucid_evo_pll_configure(obj.disp_cc_pll1,uVar2,obj.disp_cc_pll1_config);
                regmap_update_bits_base(uVar2,0xf000,0x10,0x10,0,0,0);
                regmap_update_bits_base(uVar2,0xe054,1,1,0,0,0);
                uVar2 = qcom_cc_really_probe(param_1,obj.disp_cc_kalama_desc,uVar2);
                uVar4 = uVar2 & 0xffffffff;
                if (uVar2 == 0) {
                    __pm_runtime_idle(iVar1,4);
                    _dev_info(iVar1,"Registered DISP CC clocks\n");
                }
                else {
                    _dev_err(iVar1,"Failed to register DISP CC clocks\n");
                }
            }
        }
    }
    else {
        uVar4 = uVar2 & 0xffffffff;
    }
    return uVar4;
}


// ===== sym.disp_cc_kalama_probe @ 0x08005140 (size 328) =====

uint64_t sym.disp_cc_kalama_probe(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = qcom_cc_map(arg1,obj.disp_cc_kalama_desc);
    if (uVar2 < 0xfffffffffffff001) {
        uVar3 = qcom_cc_runtime_init(arg1,obj.disp_cc_kalama_desc);
        uVar4 = uVar3 & 0xffffffff;
        if (uVar3 == 0) {
            iVar1 = arg1 + 0x10;
            uVar3 = __pm_runtime_resume(iVar1,4);
            uVar4 = uVar3 & 0xffffffff;
            if (uVar3 == 0) {
                clk_lucid_evo_pll_configure(obj.disp_cc_pll0,uVar2,L"\r");
                clk_lucid_evo_pll_configure(obj.disp_cc_pll1,uVar2,obj.disp_cc_pll1_config);
                regmap_update_bits_base(uVar2,0xf000,0x10,0x10,0,0,0);
                regmap_update_bits_base(uVar2,0xe054,1,1,0,0,0);
                uVar2 = qcom_cc_really_probe(arg1,obj.disp_cc_kalama_desc,uVar2);
                uVar4 = uVar2 & 0xffffffff;
                if (uVar2 == 0) {
                    __pm_runtime_idle(iVar1,4);
                    _dev_info(iVar1,"Registered DISP CC clocks\n");
                }
                else {
                    _dev_err(iVar1,"Failed to register DISP CC clocks\n");
                }
            }
        }
    }
    else {
        uVar4 = uVar2 & 0xffffffff;
    }
    return uVar4;
}


// ===== sym.disp_cc_kalama_sync_state @ 0x08005288 (size 44) =====

void sym.disp_cc_kalama_sync_state(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    qcom_cc_sync_state(param_1,obj.disp_cc_kalama_desc);
    return;
}


// ===== sym.__cfi_check_fail @ 0x080052b4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080052f8

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
    //switch table (4 cases) at 0x80037e0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800530c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08005314 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.disp_cc_kalama_probe.956e7c7a9b781c346b2c390593c4efef.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08005348 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.disp_cc_kalama_probe.956e7c7a9b781c346b2c390593c4efef.cfi_jt);
    return;
}

