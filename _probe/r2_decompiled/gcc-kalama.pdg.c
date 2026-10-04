// decompiled from gcc-kalama by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x0800a000 (size 196) =====

//WARNING: Switch with 1 destination removed at 0x0800a2dc

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x5b83a3fd302a5421) {
        if (arg1 == -0x3557318fb8d07b71) {
            uVar2 = 0x800a0e0;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x0800a29c;
            uVar2 = 0x800a0d8;
        }
    }
    else if (arg1 == 0x5b83a3fd302a5421) {
        uVar2 = 0x800a0e8;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800a29c;
        uVar2 = 0x800a0d0;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x0800a29c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800a2f0);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x0800a0d0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.gcc_kalama_probe.12d304ad17d42e805896ee53c045c83f.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x0800a0d8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.gcc_kalama_probe.12d304ad17d42e805896ee53c045c83f.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.gcc_kalama_probe.12d304ad17d42e805896ee53c045c83f.cfi_jt @ 0x0800a0e0 (size 8) =====

uint64_t sym.gcc_kalama_probe.12d304ad17d42e805896ee53c045c83f.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uVar3 = qcom_cc_map(param_1,obj.gcc_kalama_desc);
    if (uVar3 < 0xfffffffffffff001) {
        iStack_3c = 0;
        iVar4 = of_get_property(*(param_1 + 0x300),"compatible",&iStack_3c);
        if ((iVar4 == 0) || (iStack_3c < 1)) {
            uVar6 = 0xffffffea;
        }
        else {
            iVar1 = strcmp(iVar4,"qcom,kalama-gcc-v2");
            if (iVar1 == 0) {
                *0x8005a50 = obj.ftbl_gcc_sdcc2_apps_clk_src_kalama_v2;
                *(*0x8005ab0 + 0x30) = 202000000;
            }
            uVar2 = qcom_cc_register_rcg_dfs(uVar3,obj.gcc_dfs_clocks,0x10);
            uVar6 = uVar2;
            if (uVar2 == 0) {
                regmap_update_bits_base(uVar3,_segment.ehdr,0x4000,0x4000,0,0,0);
                regmap_write(uVar3,0x52024,0);
                uVar2 = qcom_cc_really_probe(param_1,obj.gcc_kalama_desc,uVar3);
                uVar6 = uVar2;
                if (uVar2 == 0) {
                    _dev_info(param_1 + 0x10,"Registered GCC clocks\n");
                }
                else {
                    _dev_err(param_1 + 0x10,"Failed to register GCC clocks\n");
                }
            }
        }
    }
    else {
        uVar6 = uVar3 & 0xffffffff;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return uVar6;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18 = sym.gcc_kalama_sync_state;
    uVar3 = qcom_cc_sync_state(uVar5,obj.gcc_kalama_desc);
    return uVar3;
}


// ===== sym.gcc_kalama_sync_state.12d304ad17d42e805896ee53c045c83f.cfi_jt @ 0x0800a0e8 (size 8) =====

void sym.gcc_kalama_sync_state.12d304ad17d42e805896ee53c045c83f.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    qcom_cc_sync_state(param_1,obj.gcc_kalama_desc);
    return;
}


// ===== sym.gcc_kalama_probe @ 0x0800a0f0 (size 380) =====

uint64_t sym.gcc_kalama_probe(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uVar3 = qcom_cc_map(arg1,obj.gcc_kalama_desc);
    if (uVar3 < 0xfffffffffffff001) {
        iStack_3c = 0;
        iVar4 = of_get_property(*(arg1 + 0x300),"compatible",&iStack_3c);
        if ((iVar4 == 0) || (iStack_3c < 1)) {
            uVar6 = 0xffffffea;
        }
        else {
            iVar1 = strcmp(iVar4,"qcom,kalama-gcc-v2");
            if (iVar1 == 0) {
                *0x8005a50 = obj.ftbl_gcc_sdcc2_apps_clk_src_kalama_v2;
                *(*0x8005ab0 + 0x30) = 202000000;
            }
            uVar2 = qcom_cc_register_rcg_dfs(uVar3,obj.gcc_dfs_clocks,0x10);
            uVar6 = uVar2;
            if (uVar2 == 0) {
                regmap_update_bits_base(uVar3,_segment.ehdr,0x4000,0x4000,0,0,0);
                regmap_write(uVar3,0x52024,0);
                uVar2 = qcom_cc_really_probe(arg1,obj.gcc_kalama_desc,uVar3);
                uVar6 = uVar2;
                if (uVar2 == 0) {
                    _dev_info(arg1 + 0x10,"Registered GCC clocks\n");
                }
                else {
                    _dev_err(arg1 + 0x10,"Failed to register GCC clocks\n");
                }
            }
        }
    }
    else {
        uVar6 = uVar3 & 0xffffffff;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return uVar6;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18 = sym.gcc_kalama_sync_state;
    uVar3 = qcom_cc_sync_state(uVar5,obj.gcc_kalama_desc);
    return uVar3;
}


// ===== sym.gcc_kalama_sync_state @ 0x0800a26c (size 44) =====

void sym.gcc_kalama_sync_state(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    qcom_cc_sync_state(param_1,obj.gcc_kalama_desc);
    return;
}


// ===== sym.__cfi_check_fail @ 0x0800a298 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800a2dc

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
    //switch table (4 cases) at 0x8007578
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800a2f0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x0800a2f4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.gcc_kalama_probe.12d304ad17d42e805896ee53c045c83f.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x0800a328 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.gcc_kalama_probe.12d304ad17d42e805896ee53c045c83f.cfi_jt);
    return;
}

