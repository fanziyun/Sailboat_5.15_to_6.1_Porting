// decompiled from debugcc-kalama by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08004000 (size 100) =====

//WARNING: Switch with 1 destination removed at 0x08004570

void sym.__cfi_check(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 == 0xcaa8ce70472f848f) {
        uVar2 = 0x8004078;
    }
    else {
        if (arg1 != 0x2b3a43e29242445) goto code_r0x08004530;
        uVar2 = 0x8004070;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x08004530:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004584);
    (*pcVar1)();
}


// ===== sym.init_module.cfi_jt @ 0x08004070 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.clk_debug_kalama_probe.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.clk_debug_kalama_probe.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08004078 (size 8) =====

uint64_t sym.clk_debug_kalama_probe.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    bool bVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong uVar5;
    uint64_t uVar6;
    char *pcVar7;
    ulong *in_x18;
    code *pcVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x10;
    uVar4 = devm_clk_get(iVar1,"xo_clk_src");
    if (uVar4 < 0xfffffffffffff001) {
        if (((((((((_segment.ehdr == 0) || (bVar2 = 0xfffffffffffff000 < _segment.ehdr, _segment.ehdr = uVar4, bVar2))
                 && (_segment.ehdr = uVar4, uVar3 = map_debug_bases(param_1,"qcom,mccc",obj.mc_cc_debug_mux),
                    uVar3 != 0)) && (uVar4 = uVar3, uVar3 != 0xffffffcb)) ||
               (((_segment.ehdr == 0 || (0xfffffffffffff000 < _segment.ehdr)) &&
                ((uVar3 = map_debug_bases(param_1,"qcom,videocc",obj.video_cc_debug_mux), uVar3 != 0 &&
                 (uVar4 = uVar3, uVar3 != 0xffffffcb)))))) ||
              (((_segment.ehdr == 0 || (0xfffffffffffff000 < _segment.ehdr)) &&
               ((uVar3 = map_debug_bases(param_1,"qcom,gpucc",obj.gpu_cc_debug_mux), uVar3 != 0 &&
                (uVar4 = uVar3, uVar3 != 0xffffffcb)))))) ||
             (((((_segment.ehdr == 0 || (0xfffffffffffff000 < _segment.ehdr)) &&
                (uVar3 = map_debug_bases(param_1,"qcom,dispcc",obj.disp_cc_debug_mux), uVar3 != 0)) &&
               (uVar4 = uVar3, uVar3 != 0xffffffcb)) ||
              (((_segment.ehdr == 0 || (0xfffffffffffff000 < _segment.ehdr)) &&
               ((uVar3 = map_debug_bases(param_1,"qcom,camcc",obj.cam_cc_debug_mux), uVar3 != 0 &&
                (uVar4 = uVar3, uVar3 != 0xffffffcb)))))))) ||
            (((_segment.ehdr == 0 || (0xfffffffffffff000 < _segment.ehdr)) &&
             ((uVar3 = map_debug_bases(param_1,"qcom,apsscc",obj.apss_cc_debug_mux), uVar3 != 0 &&
              (uVar4 = uVar3, uVar3 != 0xffffffcb)))))) ||
           ((((_segment.ehdr == 0 || (0xfffffffffffff000 < _segment.ehdr)) &&
             (uVar3 = map_debug_bases(param_1,"qcom,gcc",obj.gcc_debug_mux), uVar3 != 0)) &&
            (uVar4 = uVar3, uVar3 != 0xffffffcb)))) goto code_r0x08004284;
        pcVar8 = obj.measure_only_apcs_gold_post_acd_clk;
        uVar4 = devm_clk_register(iVar1,obj.measure_only_apcs_gold_post_acd_clk);
        if (uVar4 < 0xfffffffffffff001) {
            pcVar8 = obj.measure_only_apcs_goldplus_post_acd_clk;
            uVar4 = devm_clk_register(iVar1,obj.measure_only_apcs_goldplus_post_acd_clk);
            if (uVar4 < 0xfffffffffffff001) {
                pcVar8 = obj.measure_only_apcs_l3_post_acd_clk;
                uVar4 = devm_clk_register(iVar1,obj.measure_only_apcs_l3_post_acd_clk);
                if (uVar4 < 0xfffffffffffff001) {
                    pcVar8 = obj.measure_only_apcs_silver_post_acd_clk;
                    uVar4 = devm_clk_register(iVar1,obj.measure_only_apcs_silver_post_acd_clk);
                    if (uVar4 < 0xfffffffffffff001) {
                        pcVar8 = obj.measure_only_cnoc_clk;
                        uVar4 = devm_clk_register(iVar1,obj.measure_only_cnoc_clk);
                        if (uVar4 < 0xfffffffffffff001) {
                            pcVar8 = obj.measure_only_gpu_cc_cx_gfx3d_clk;
                            uVar4 = devm_clk_register(iVar1,obj.measure_only_gpu_cc_cx_gfx3d_clk);
                            if (uVar4 < 0xfffffffffffff001) {
                                pcVar8 = obj.measure_only_gpu_cc_cx_gfx3d_slv_clk;
                                uVar4 = devm_clk_register(iVar1,obj.measure_only_gpu_cc_cx_gfx3d_slv_clk);
                                if (uVar4 < 0xfffffffffffff001) {
                                    pcVar8 = obj.measure_only_gpu_cc_gx_gfx3d_clk;
                                    uVar4 = devm_clk_register(iVar1,obj.measure_only_gpu_cc_gx_gfx3d_clk);
                                    if (uVar4 < 0xfffffffffffff001) {
                                        pcVar8 = obj.measure_only_mccc_clk;
                                        uVar4 = devm_clk_register(iVar1,obj.measure_only_mccc_clk);
                                        if (uVar4 < 0xfffffffffffff001) {
                                            pcVar8 = obj.measure_only_ipa_2x_clk;
                                            uVar4 = devm_clk_register(iVar1,obj.measure_only_ipa_2x_clk);
                                            if (uVar4 < 0xfffffffffffff001) {
                                                pcVar8 = obj.measure_only_memnoc_clk;
                                                uVar4 = devm_clk_register(iVar1,obj.measure_only_memnoc_clk);
                                                if (uVar4 < 0xfffffffffffff001) {
                                                    pcVar8 = obj.measure_only_snoc_clk;
                                                    uVar4 = devm_clk_register(iVar1,obj.measure_only_snoc_clk);
                                                    if (uVar4 < 0xfffffffffffff001) {
                                                        pcVar8 = obj.mc_cc_debug_mux;
                                                        uVar4 = devm_clk_register_debug_mux(iVar1,obj.mc_cc_debug_mux);
                                                        if (uVar4 == 0) {
                                                            pcVar8 = obj.video_cc_debug_mux;
                                                            uVar4 = devm_clk_register_debug_mux
                                                                              (iVar1,obj.video_cc_debug_mux);
                                                            if (uVar4 == 0) {
                                                                pcVar8 = obj.gpu_cc_debug_mux;
                                                                uVar4 = devm_clk_register_debug_mux
                                                                                  (iVar1,obj.gpu_cc_debug_mux);
                                                                if (uVar4 == 0) {
                                                                    pcVar8 = obj.disp_cc_debug_mux;
                                                                    uVar4 = devm_clk_register_debug_mux
                                                                                      (iVar1,obj.disp_cc_debug_mux);
                                                                    if (uVar4 == 0) {
                                                                        pcVar8 = obj.cam_cc_debug_mux;
                                                                        uVar4 = devm_clk_register_debug_mux
                                                                                          (iVar1,obj.cam_cc_debug_mux);
                                                                        if (uVar4 == 0) {
                                                                            pcVar8 = obj.apss_cc_debug_mux;
                                                                            uVar4 = devm_clk_register_debug_mux
                                                                                              (iVar1,
                                                            obj.apss_cc_debug_mux);
                                                            if (uVar4 == 0) {
                                                                pcVar8 = obj.gcc_debug_mux;
                                                                uVar4 = devm_clk_register_debug_mux
                                                                                  (iVar1,obj.gcc_debug_mux);
                                                                if (uVar4 == 0) {
                                                                    uVar6 = clk_debug_measure_register(0x80001a0);
                                                                    uVar4 = uVar6 & 0xffffffff;
                                                                    if (uVar6 == 0) {
                                                                        _dev_info(iVar1,
                                                            "Registered debug measure clocks\n");
                                                            goto code_r0x08004284;
                                                            }
                                                            pcVar7 = "Could not register Measure clocks\n";
                                                            goto code_r0x080040cc;
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                        }
                                                        uVar4 = uVar4 & 0xffffffff;
                                                        if (*(pcVar8 + 0x68) == NULL) {
                                                            uVar5 = clk_hw_get_name(pcVar8 + 0x58);
                                                        }
                                                        else {
                                                            uVar5 = **(pcVar8 + 0x68);
                                                        }
                                                        _dev_err(iVar1,"Unable to register mux clk %s, err:(%d)\n",
                                                                 uVar5,uVar4);
                                                        goto code_r0x08004284;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        uVar5 = clk_hw_get_name(pcVar8);
        _dev_err(iVar1,"Unable to register %s, err:(%d)\n",uVar5,uVar4);
    }
    else {
        if (uVar4 == 0xfffffffffffffdfb) goto code_r0x08004284;
        pcVar7 = "Unable to get xo clock\n";
code_r0x080040cc:
        _dev_err(iVar1,pcVar7);
    }
code_r0x08004284:
    return uVar4 & 0xffffffff;
}


// ===== sym.clk_debug_kalama_probe @ 0x08004080 (size 1196) =====

uint64_t sym.clk_debug_kalama_probe(int64_t arg1)

{
    int64_t iVar1;
    bool bVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong uVar5;
    uint64_t uVar6;
    char *pcVar7;
    ulong *in_x18;
    code *pcVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x10;
    uVar4 = devm_clk_get(iVar1,"xo_clk_src");
    if (uVar4 < 0xfffffffffffff001) {
        if (((((((((_segment.ehdr == 0) || (bVar2 = 0xfffffffffffff000 < _segment.ehdr, _segment.ehdr = uVar4, bVar2))
                 && (_segment.ehdr = uVar4, uVar3 = map_debug_bases(arg1,"qcom,mccc",obj.mc_cc_debug_mux),
                    uVar3 != 0)) && (uVar4 = uVar3, uVar3 != 0xffffffcb)) ||
               (((_segment.ehdr == 0 || (0xfffffffffffff000 < _segment.ehdr)) &&
                ((uVar3 = map_debug_bases(arg1,"qcom,videocc",obj.video_cc_debug_mux), uVar3 != 0 &&
                 (uVar4 = uVar3, uVar3 != 0xffffffcb)))))) ||
              (((_segment.ehdr == 0 || (0xfffffffffffff000 < _segment.ehdr)) &&
               ((uVar3 = map_debug_bases(arg1,"qcom,gpucc",obj.gpu_cc_debug_mux), uVar3 != 0 &&
                (uVar4 = uVar3, uVar3 != 0xffffffcb)))))) ||
             (((((_segment.ehdr == 0 || (0xfffffffffffff000 < _segment.ehdr)) &&
                (uVar3 = map_debug_bases(arg1,"qcom,dispcc",obj.disp_cc_debug_mux), uVar3 != 0)) &&
               (uVar4 = uVar3, uVar3 != 0xffffffcb)) ||
              (((_segment.ehdr == 0 || (0xfffffffffffff000 < _segment.ehdr)) &&
               ((uVar3 = map_debug_bases(arg1,"qcom,camcc",obj.cam_cc_debug_mux), uVar3 != 0 &&
                (uVar4 = uVar3, uVar3 != 0xffffffcb)))))))) ||
            (((_segment.ehdr == 0 || (0xfffffffffffff000 < _segment.ehdr)) &&
             ((uVar3 = map_debug_bases(arg1,"qcom,apsscc",obj.apss_cc_debug_mux), uVar3 != 0 &&
              (uVar4 = uVar3, uVar3 != 0xffffffcb)))))) ||
           ((((_segment.ehdr == 0 || (0xfffffffffffff000 < _segment.ehdr)) &&
             (uVar3 = map_debug_bases(arg1,"qcom,gcc",obj.gcc_debug_mux), uVar3 != 0)) &&
            (uVar4 = uVar3, uVar3 != 0xffffffcb)))) goto code_r0x08004284;
        pcVar8 = obj.measure_only_apcs_gold_post_acd_clk;
        uVar4 = devm_clk_register(iVar1,obj.measure_only_apcs_gold_post_acd_clk);
        if (uVar4 < 0xfffffffffffff001) {
            pcVar8 = obj.measure_only_apcs_goldplus_post_acd_clk;
            uVar4 = devm_clk_register(iVar1,obj.measure_only_apcs_goldplus_post_acd_clk);
            if (uVar4 < 0xfffffffffffff001) {
                pcVar8 = obj.measure_only_apcs_l3_post_acd_clk;
                uVar4 = devm_clk_register(iVar1,obj.measure_only_apcs_l3_post_acd_clk);
                if (uVar4 < 0xfffffffffffff001) {
                    pcVar8 = obj.measure_only_apcs_silver_post_acd_clk;
                    uVar4 = devm_clk_register(iVar1,obj.measure_only_apcs_silver_post_acd_clk);
                    if (uVar4 < 0xfffffffffffff001) {
                        pcVar8 = obj.measure_only_cnoc_clk;
                        uVar4 = devm_clk_register(iVar1,obj.measure_only_cnoc_clk);
                        if (uVar4 < 0xfffffffffffff001) {
                            pcVar8 = obj.measure_only_gpu_cc_cx_gfx3d_clk;
                            uVar4 = devm_clk_register(iVar1,obj.measure_only_gpu_cc_cx_gfx3d_clk);
                            if (uVar4 < 0xfffffffffffff001) {
                                pcVar8 = obj.measure_only_gpu_cc_cx_gfx3d_slv_clk;
                                uVar4 = devm_clk_register(iVar1,obj.measure_only_gpu_cc_cx_gfx3d_slv_clk);
                                if (uVar4 < 0xfffffffffffff001) {
                                    pcVar8 = obj.measure_only_gpu_cc_gx_gfx3d_clk;
                                    uVar4 = devm_clk_register(iVar1,obj.measure_only_gpu_cc_gx_gfx3d_clk);
                                    if (uVar4 < 0xfffffffffffff001) {
                                        pcVar8 = obj.measure_only_mccc_clk;
                                        uVar4 = devm_clk_register(iVar1,obj.measure_only_mccc_clk);
                                        if (uVar4 < 0xfffffffffffff001) {
                                            pcVar8 = obj.measure_only_ipa_2x_clk;
                                            uVar4 = devm_clk_register(iVar1,obj.measure_only_ipa_2x_clk);
                                            if (uVar4 < 0xfffffffffffff001) {
                                                pcVar8 = obj.measure_only_memnoc_clk;
                                                uVar4 = devm_clk_register(iVar1,obj.measure_only_memnoc_clk);
                                                if (uVar4 < 0xfffffffffffff001) {
                                                    pcVar8 = obj.measure_only_snoc_clk;
                                                    uVar4 = devm_clk_register(iVar1,obj.measure_only_snoc_clk);
                                                    if (uVar4 < 0xfffffffffffff001) {
                                                        pcVar8 = obj.mc_cc_debug_mux;
                                                        uVar4 = devm_clk_register_debug_mux(iVar1,obj.mc_cc_debug_mux);
                                                        if (uVar4 == 0) {
                                                            pcVar8 = obj.video_cc_debug_mux;
                                                            uVar4 = devm_clk_register_debug_mux
                                                                              (iVar1,obj.video_cc_debug_mux);
                                                            if (uVar4 == 0) {
                                                                pcVar8 = obj.gpu_cc_debug_mux;
                                                                uVar4 = devm_clk_register_debug_mux
                                                                                  (iVar1,obj.gpu_cc_debug_mux);
                                                                if (uVar4 == 0) {
                                                                    pcVar8 = obj.disp_cc_debug_mux;
                                                                    uVar4 = devm_clk_register_debug_mux
                                                                                      (iVar1,obj.disp_cc_debug_mux);
                                                                    if (uVar4 == 0) {
                                                                        pcVar8 = obj.cam_cc_debug_mux;
                                                                        uVar4 = devm_clk_register_debug_mux
                                                                                          (iVar1,obj.cam_cc_debug_mux);
                                                                        if (uVar4 == 0) {
                                                                            pcVar8 = obj.apss_cc_debug_mux;
                                                                            uVar4 = devm_clk_register_debug_mux
                                                                                              (iVar1,
                                                            obj.apss_cc_debug_mux);
                                                            if (uVar4 == 0) {
                                                                pcVar8 = obj.gcc_debug_mux;
                                                                uVar4 = devm_clk_register_debug_mux
                                                                                  (iVar1,obj.gcc_debug_mux);
                                                                if (uVar4 == 0) {
                                                                    uVar6 = clk_debug_measure_register(0x80001a0);
                                                                    uVar4 = uVar6 & 0xffffffff;
                                                                    if (uVar6 == 0) {
                                                                        _dev_info(iVar1,
                                                            "Registered debug measure clocks\n");
                                                            goto code_r0x08004284;
                                                            }
                                                            pcVar7 = "Could not register Measure clocks\n";
                                                            goto code_r0x080040cc;
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                        }
                                                        uVar4 = uVar4 & 0xffffffff;
                                                        if (*(pcVar8 + 0x68) == NULL) {
                                                            uVar5 = clk_hw_get_name(pcVar8 + 0x58);
                                                        }
                                                        else {
                                                            uVar5 = **(pcVar8 + 0x68);
                                                        }
                                                        _dev_err(iVar1,"Unable to register mux clk %s, err:(%d)\n",
                                                                 uVar5,uVar4);
                                                        goto code_r0x08004284;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        uVar5 = clk_hw_get_name(pcVar8);
        _dev_err(iVar1,"Unable to register %s, err:(%d)\n",uVar5,uVar4);
    }
    else {
        if (uVar4 == 0xfffffffffffffdfb) goto code_r0x08004284;
        pcVar7 = "Unable to get xo clock\n";
code_r0x080040cc:
        _dev_err(iVar1,pcVar7);
    }
code_r0x08004284:
    return uVar4 & 0xffffffff;
}


// ===== sym.__cfi_check_fail @ 0x0800452c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08004570

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
    //switch table (4 cases) at 0x8000f08
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004584);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08004594 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.clk_debug_kalama_probe.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,obj.__this_module);
    return;
}

