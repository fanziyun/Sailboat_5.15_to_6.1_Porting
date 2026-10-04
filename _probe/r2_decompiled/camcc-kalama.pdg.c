// decompiled from camcc-kalama by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x0800a000 (size 244) =====

//WARNING: Switch with 1 destination removed at 0x0800a4bc

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x57be845bca9148ef) {
            if ((pcVar1 + -0x800a110 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x0800a47c;
        }
        if (arg1 != -0x3557318fb8d07b71) goto code_r0x0800a47c;
        pcVar2 = sym.cam_cc_kalama_probe.cfd28a5e789bc07845667cffb7f40548.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x5b83a3fd302a5421) {
        pcVar2 = sym.cam_cc_kalama_sync_state.cfd28a5e789bc07845667cffb7f40548.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800a47c;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800a47c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800a4d0);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x0800a100 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.cam_cc_kalama_probe.cfd28a5e789bc07845667cffb7f40548.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x0800a108 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.cam_cc_kalama_probe.cfd28a5e789bc07845667cffb7f40548.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qcom_cc_runtime_suspend.cfi_jt @ 0x0800a110 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.qcom_cc_runtime_suspend.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.pm_runtime_force_resume.cfi_jt @ 0x0800a118 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.pm_runtime_force_resume.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.pm_runtime_force_suspend.cfi_jt @ 0x0800a120 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.pm_runtime_force_suspend.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcom_cc_runtime_resume.cfi_jt @ 0x0800a128 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.qcom_cc_runtime_resume.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cam_cc_kalama_sync_state.cfd28a5e789bc07845667cffb7f40548.cfi_jt @ 0x0800a130 (size 8) =====

void sym.cam_cc_kalama_sync_state.cfd28a5e789bc07845667cffb7f40548.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    qcom_cc_sync_state(param_1,obj.cam_cc_kalama_desc);
    return;
}


// ===== sym.cam_cc_kalama_probe.cfd28a5e789bc07845667cffb7f40548.cfi_jt @ 0x0800a138 (size 8) =====

uint64_t sym.cam_cc_kalama_probe.cfd28a5e789bc07845667cffb7f40548.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uVar4 = qcom_cc_map(param_1,obj.cam_cc_kalama_desc);
    if (uVar4 < 0xfffffffffffff001) {
        uVar2 = qcom_cc_runtime_init(param_1,obj.cam_cc_kalama_desc);
        uVar7 = uVar2;
        if (uVar2 == 0) {
            iVar1 = param_1 + 0x10;
            uVar2 = __pm_runtime_resume(iVar1,4);
            uVar7 = uVar2;
            if (uVar2 == 0) {
                clk_lucid_evo_pll_configure(obj.cam_cc_pll0,uVar4,obj.cam_cc_pll0_config);
                clk_lucid_evo_pll_configure(obj.cam_cc_pll1,uVar4,obj.cam_cc_pll1_config);
                clk_lucid_evo_pll_configure(obj.cam_cc_pll10,uVar4,obj.cam_cc_pll10_config);
                clk_lucid_evo_pll_configure(obj.cam_cc_pll11,uVar4,obj.cam_cc_pll11_config);
                clk_lucid_evo_pll_configure(obj.cam_cc_pll12,uVar4,L",");
                clk_rivian_evo_pll_configure(obj.cam_cc_pll2,uVar4,obj.cam_cc_pll2_config);
                clk_lucid_evo_pll_configure(obj.cam_cc_pll3,uVar4,obj.cam_cc_pll3_config);
                clk_lucid_evo_pll_configure(obj.cam_cc_pll4,uVar4,obj.cam_cc_pll4_config);
                clk_lucid_evo_pll_configure(obj.cam_cc_pll5,uVar4,obj.cam_cc_pll5_config);
                clk_lucid_evo_pll_configure(obj.cam_cc_pll6,uVar4,obj.cam_cc_pll6_config);
                clk_lucid_evo_pll_configure(obj.cam_cc_pll7,uVar4,obj.cam_cc_pll7_config);
                clk_lucid_evo_pll_configure(obj.cam_cc_pll8,uVar4,obj.cam_cc_pll8_config);
                clk_lucid_evo_pll_configure(obj.cam_cc_pll9,uVar4,obj.cam_cc_pll9_config);
                iStack_3c = 0;
                iVar5 = of_get_property(*(param_1 + 0x300),"compatible",&iStack_3c);
                if ((iVar5 == 0) || (iStack_3c < 1)) {
                    uVar7 = 0xffffffea;
                }
                else {
                    iVar3 = strcmp(iVar5,"qcom,kalama-camcc-v2");
                    if (iVar3 == 0) {
                        clk_lucid_evo_pll_configure(obj.cam_cc_pll11,uVar4,obj.cam_cc_pll11_config_kalama_v2);
                        clk_lucid_evo_pll_configure(obj.cam_cc_pll12,uVar4,L"0");
                        *0x8003cd8 = obj.ftbl_cam_cc_ife_1_dsp_clk_src_kalama_v2;
                        *(*0x8003d38 + 0x18) = 466000000;
                        *0x8004010 = obj.ftbl_cam_cc_ife_2_dsp_clk_src_kalama_v2;
                        *(*0x8004070 + 0x18) = 466000000;
                    }
                    regmap_update_bits_base(uVar4,0x1419c,1,1,0,0,0);
                    uVar2 = qcom_cc_really_probe(param_1,obj.cam_cc_kalama_desc,uVar4);
                    uVar7 = uVar2;
                    if (uVar2 == 0) {
                        __pm_runtime_idle(iVar1,4);
                        _dev_info(iVar1,"Registered CAM CC clocks\n");
                    }
                    else {
                        _dev_err(iVar1,"Failed to register CAM CC clocks\n");
                    }
                }
            }
        }
    }
    else {
        uVar7 = uVar4 & 0xffffffff;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    uVar6 = __stack_chk_fail();
    *extraout_x18 = sym.cam_cc_kalama_sync_state;
    uVar4 = qcom_cc_sync_state(uVar6,obj.cam_cc_kalama_desc);
    return uVar4;
}


// ===== sym.cam_cc_kalama_probe @ 0x0800a140 (size 780) =====

uint64_t sym.cam_cc_kalama_probe(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uVar4 = qcom_cc_map(arg1,obj.cam_cc_kalama_desc);
    if (uVar4 < 0xfffffffffffff001) {
        uVar2 = qcom_cc_runtime_init(arg1,obj.cam_cc_kalama_desc);
        uVar7 = uVar2;
        if (uVar2 == 0) {
            iVar1 = arg1 + 0x10;
            uVar2 = __pm_runtime_resume(iVar1,4);
            uVar7 = uVar2;
            if (uVar2 == 0) {
                clk_lucid_evo_pll_configure(obj.cam_cc_pll0,uVar4,obj.cam_cc_pll0_config);
                clk_lucid_evo_pll_configure(obj.cam_cc_pll1,uVar4,obj.cam_cc_pll1_config);
                clk_lucid_evo_pll_configure(obj.cam_cc_pll10,uVar4,obj.cam_cc_pll10_config);
                clk_lucid_evo_pll_configure(obj.cam_cc_pll11,uVar4,obj.cam_cc_pll11_config);
                clk_lucid_evo_pll_configure(obj.cam_cc_pll12,uVar4,L",");
                clk_rivian_evo_pll_configure(obj.cam_cc_pll2,uVar4,obj.cam_cc_pll2_config);
                clk_lucid_evo_pll_configure(obj.cam_cc_pll3,uVar4,obj.cam_cc_pll3_config);
                clk_lucid_evo_pll_configure(obj.cam_cc_pll4,uVar4,obj.cam_cc_pll4_config);
                clk_lucid_evo_pll_configure(obj.cam_cc_pll5,uVar4,obj.cam_cc_pll5_config);
                clk_lucid_evo_pll_configure(obj.cam_cc_pll6,uVar4,obj.cam_cc_pll6_config);
                clk_lucid_evo_pll_configure(obj.cam_cc_pll7,uVar4,obj.cam_cc_pll7_config);
                clk_lucid_evo_pll_configure(obj.cam_cc_pll8,uVar4,obj.cam_cc_pll8_config);
                clk_lucid_evo_pll_configure(obj.cam_cc_pll9,uVar4,obj.cam_cc_pll9_config);
                iStack_3c = 0;
                iVar5 = of_get_property(*(arg1 + 0x300),"compatible",&iStack_3c);
                if ((iVar5 == 0) || (iStack_3c < 1)) {
                    uVar7 = 0xffffffea;
                }
                else {
                    iVar3 = strcmp(iVar5,"qcom,kalama-camcc-v2");
                    if (iVar3 == 0) {
                        clk_lucid_evo_pll_configure(obj.cam_cc_pll11,uVar4,obj.cam_cc_pll11_config_kalama_v2);
                        clk_lucid_evo_pll_configure(obj.cam_cc_pll12,uVar4,L"0");
                        *0x8003cd8 = obj.ftbl_cam_cc_ife_1_dsp_clk_src_kalama_v2;
                        *(*0x8003d38 + 0x18) = 466000000;
                        *0x8004010 = obj.ftbl_cam_cc_ife_2_dsp_clk_src_kalama_v2;
                        *(*0x8004070 + 0x18) = 466000000;
                    }
                    regmap_update_bits_base(uVar4,0x1419c,1,1,0,0,0);
                    uVar2 = qcom_cc_really_probe(arg1,obj.cam_cc_kalama_desc,uVar4);
                    uVar7 = uVar2;
                    if (uVar2 == 0) {
                        __pm_runtime_idle(iVar1,4);
                        _dev_info(iVar1,"Registered CAM CC clocks\n");
                    }
                    else {
                        _dev_err(iVar1,"Failed to register CAM CC clocks\n");
                    }
                }
            }
        }
    }
    else {
        uVar7 = uVar4 & 0xffffffff;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    uVar6 = __stack_chk_fail();
    *extraout_x18 = sym.cam_cc_kalama_sync_state;
    uVar4 = qcom_cc_sync_state(uVar6,obj.cam_cc_kalama_desc);
    return uVar4;
}


// ===== sym.cam_cc_kalama_sync_state @ 0x0800a44c (size 44) =====

void sym.cam_cc_kalama_sync_state(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    qcom_cc_sync_state(param_1,obj.cam_cc_kalama_desc);
    return;
}


// ===== sym.__cfi_check_fail @ 0x0800a478 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800a4bc

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
    //switch table (4 cases) at 0x8006880
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800a4d0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x0800a4d4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.cam_cc_kalama_probe.cfd28a5e789bc07845667cffb7f40548.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x0800a508 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.cam_cc_kalama_probe.cfd28a5e789bc07845667cffb7f40548.cfi_jt);
    return;
}

