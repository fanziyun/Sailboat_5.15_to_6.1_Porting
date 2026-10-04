// decompiled from i3c-master-msm-geni by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 1104) =====

//WARNING: Switch with 1 destination removed at 0x08008c28

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x166fd76fe9671d3) {
        if (arg1 < -0x3987c0e26ee29729) {
            if (arg1 < -0x57be845bca9148ef) {
                if (arg1 == -0x7179b1336a620f79) {
                    pcVar2 = sym.geni_i3c_master_disable_ibi.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt;
code_r0x080033b8:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                        return;
                    }
                    goto code_r0x08008be8;
                }
                if (arg1 == -0x5e0955edc9984360) {
                    pcVar2 = sym.geni_i3c_master_reattach_i3c_dev.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt;
                }
                else {
                    if (arg1 != -0x5d3d5d1ec8210b2c) goto code_r0x08008be8;
                    pcVar2 = sym.geni_i3c_master_bus_cleanup.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt;
                }
            }
            else {
                if (arg1 == -0x57be845bca9148ef) {
                    if ((pcVar1 + -0x80034d0 >> 3 | pcVar1 << 0x3d) < 4) {
                        return;
                    }
                    goto code_r0x08008be8;
                }
                if (arg1 == -0x550b9e52359ac614) {
                    pcVar2 = sym.geni_i3c_hotjoin.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt;
                }
                else {
                    if (arg1 != -0x47061a6c9301bf04) goto code_r0x08008be8;
                    pcVar2 = sym.geni_i3c_master_priv_xfers.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt;
                }
            }
        }
        else {
            if (arg1 < -0x2f8b4349d1cc9aa4) {
                if (arg1 == -0x3987c0e26ee29729) {
                    pcVar2 = sym.geni_i3c_irq.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt;
                }
                else if (arg1 == -0x3926240084bb8358) {
                    pcVar2 = sym.geni_i3c_master_do_daa.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt;
                }
                else {
                    if (arg1 != -0x3557318fb8d07b71) goto code_r0x08008be8;
                    pcVar2 = sym.geni_i3c_probe.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt;
                }
code_r0x08003390:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08008be8;
            }
            if (arg1 == -0x2f8b4349d1cc9aa4) {
                pcVar2 = sym.geni_i3c_master_request_ibi.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt;
            }
            else if (arg1 == -0x218c0108fde83420) {
                pcVar2 = sym.trace_event_raw_init.cfi_jt;
            }
            else {
                if (arg1 != -0x158ab8d80d6a8075) goto code_r0x08008be8;
                pcVar2 = sym.geni_i3c_master_detach_i2c_dev.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x2eec8673b37c6729) {
        if (arg1 < 0x1c2b0952efa24c7a) {
            if (arg1 == 0x166fd76fe9671d3) {
                pcVar2 = sym.geni_i3c_master_detach_i3c_dev.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt;
                goto code_r0x08003390;
            }
            if (arg1 == 0x2179330eb0fbac6) {
                pcVar2 = sym.geni_i3c_master_attach_i2c_dev.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt;
            }
            else {
                if (arg1 != 0x2b3a43e29242445) goto code_r0x08008be8;
                pcVar2 = sym.init_module.cfi_jt;
            }
        }
        else if (arg1 == 0x1c2b0952efa24c7a) {
            pcVar2 = sym.trace_event_reg.cfi_jt;
        }
        else if (arg1 == 0x2453c2579e380768) {
            pcVar2 = sym.geni_i3c_master_supports_ccc_cmd.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt;
        }
        else {
            if (arg1 != 0x27aee7cf87f23cb8) goto code_r0x08008be8;
            pcVar2 = sym.geni_i3c_master_i2c_xfers.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt;
        }
    }
    else if (arg1 < 0x4410bc7945788788) {
        if (arg1 == 0x2eec8673b37c6729) {
            pcVar2 = sym.__traceiter_i3c_log_info.cfi_jt;
        }
        else {
            if (arg1 == 0x345b8f49125c3eda) {
                pcVar2 = sym.__bpf_trace_i3c_log_info.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt;
                goto code_r0x080033b8;
            }
            if (arg1 != 0x3dd1a39e589289fe) goto code_r0x08008be8;
            pcVar2 = sym.trace_raw_output_i3c_log_info.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt;
        }
    }
    else if (arg1 == 0x4410bc7945788788) {
        pcVar2 = sym.geni_i3c_master_recycle_ibi_slot.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt;
    }
    else if (arg1 == 0x63dcb7ce4a55b688) {
        pcVar2 = sym.geni_i3c_master_send_ccc_cmd.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08008be8;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08008be8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8008c3c);
    (*pcVar1)();
}


// ===== sym.geni_i3c_master_bus_cleanup.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x08003458 (size 8) =====

void sym.geni_i3c_master_bus_cleanup.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt(void)

{
    return;
}


// ===== sym.geni_i3c_hotjoin.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x08003460 (size 8) =====

void sym.geni_i3c_hotjoin.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    ulong *in_x18;
    uint64_t arg3;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = param_1 + -0xad8;
    pm_stay_awake(*piVar2);
    uVar1 = i3c_master_do_daa(param_1 + -0xa70);
    if (uVar1 != 0) {
        arg3 = uVar1;
        ipc_log_string(*(param_1 + -0x138),"hotjoin:daa failed %d\n",arg3);
        if (*piVar2 == 0) {
            _printk(0x8001202,arg3);
        }
        else {
            _dev_err(*piVar2,"hotjoin:daa failed %d\n",arg3);
        }
        if (*piVar2 != 0) {
            sym.i3c_trace_log(*piVar2,0x8001c11,arg3,param_4);
        }
    }
    pm_relax(*piVar2);
    return;
}


// ===== sym.trace_event_raw_init.cfi_jt @ 0x08003468 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_raw_init.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module.cfi_jt @ 0x08003470 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.geni_i3c_probe.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08003478 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.geni_i3c_probe.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt);
    return;
}


// ===== sym.geni_i3c_probe.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x08003480 (size 8) =====

uint64_t sym.geni_i3c_probe.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,char *param_4)

{
    int64_t *piVar1;
    uint uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t *arg1;
    char *pcVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    char *pcVar9;
    char *pcVar10;
    int64_t arg3;
    uint *arg3_00;
    int64_t *piVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar13;
    int64_t *piVar14;
    ulong unaff_x30;
    char acStack_80 [8];
    char acStack_78 [8];
    char acStack_70 [8];
    uchar uStack_68;
    ulong uStack_67;
    ulong uStack_5f;
    ulong uStack_57;
    uchar uStack_4f;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    piVar7 = param_1 + 0x10;
    pcVar10 = 0xdc0;
    uStack_4f = 0;
    uStack_57 = 0;
    uStack_5f = 0;
    uStack_67 = 0;
    acStack_80[0] = str.M___I3C_GENI_Probe_start[0];
    acStack_80[1] = str.M___I3C_GENI_Probe_start[1];
    acStack_80[2] = str.M___I3C_GENI_Probe_start[2];
    acStack_80[3] = str.M___I3C_GENI_Probe_start[3];
    acStack_80[4] = str.M___I3C_GENI_Probe_start[4];
    acStack_80[5] = str.M___I3C_GENI_Probe_start[5];
    acStack_80[6] = str.M___I3C_GENI_Probe_start[6];
    acStack_80[7] = str.M___I3C_GENI_Probe_start[7];
    acStack_78[0] = str.M___I3C_GENI_Probe_start[8];
    acStack_78[1] = str.M___I3C_GENI_Probe_start[9];
    acStack_78[2] = str.M___I3C_GENI_Probe_start[10];
    acStack_78[3] = str.M___I3C_GENI_Probe_start[0xb];
    acStack_78[4] = str.M___I3C_GENI_Probe_start[0xc];
    acStack_78[5] = str.M___I3C_GENI_Probe_start[0xd];
    acStack_78[6] = str.M___I3C_GENI_Probe_start[0xe];
    acStack_78[7] = str.M___I3C_GENI_Probe_start[0xf];
    uStack_68 = 0;
    acStack_70[0] = str.M___I3C_GENI_Probe_start[0x10];
    acStack_70[1] = str.M___I3C_GENI_Probe_start[0x11];
    acStack_70[2] = str.M___I3C_GENI_Probe_start[0x12];
    acStack_70[3] = str.M___I3C_GENI_Probe_start[0x13];
    acStack_70[4] = str.M___I3C_GENI_Probe_start[0x14];
    acStack_70[5] = str.M___I3C_GENI_Probe_start[0x15];
    acStack_70[6] = str.M___I3C_GENI_Probe_start[0x16];
    acStack_70[7] = str.M___I3C_GENI_Probe_start[0x17];
    arg1 = devm_kmalloc(piVar7,0xb88);
    if (arg1 == NULL) {
        pcVar5 = 0xfffffff4;
        goto code_r0x080044bc;
    }
    iVar8 = *(param_1 + 0x80);
    piVar14 = arg1 + 1;
    *piVar14 = piVar7;
    if (iVar8 == 0) {
        iVar8 = *piVar7;
    }
    iVar8 = ipc_log_context_create(4,iVar8,0);
    arg1[0x135] = iVar8;
    if (iVar8 == 0) {
        _dev_info(piVar7,"Error creating IPC Log\n");
    }
    iVar8 = _segment.ehdr;
    if (_segment.ehdr < 2) {
        _segment.ehdr = _segment.ehdr + 1;
        *(obj.i3c_geni_dev + iVar8 * 8) = arg1;
    }
    arg3 = 0;
    piVar1 = arg1 + 0x135;
    iVar8 = platform_get_resource(param_1,0x200);
    if (iVar8 == 0) {
        ipc_log_string(*piVar1,"Err getting IO region\n");
        if (*piVar14 == 0) {
            pcVar5 = 0xffffffea;
        }
        else {
            sym.i3c_trace_log(*piVar14,0x8000e57,arg3,param_4);
            pcVar5 = 0xffffffea;
        }
code_r0x0800446c:
        pcVar10 = pcVar5 & 0xffffffff;
        ipc_log_string(*piVar1,"Error:%d i3c_geni_rsrcs_init\n");
        iVar8 = *piVar14;
        if (iVar8 != 0) {
            pcVar9 = "Error:%d i3c_geni_rsrcs_init\n";
code_r0x08004490:
            pcVar10 = pcVar5 & 0xffffffff;
            sym.i3c_trace_log(iVar8,pcVar9,pcVar10,param_4);
        }
    }
    else {
        pcVar5 = devm_ioremap_resource(piVar7,iVar8);
        *arg1 = pcVar5;
        if (pcVar5 < 0xfffffffffffff001) {
            iVar8 = *(param_1 + 0x70);
            arg1[1] = piVar7;
            iVar12 = *(iVar8 + 0x98);
            arg1[0x16f] = iVar8;
            arg1[2] = iVar12;
            if (iVar12 == 0) {
                ipc_log_string(*piVar1,"SE Wrapper is NULL, deferring probe\n");
                if (*piVar14 == 0) {
                    pcVar5 = 0xfffffdfb;
                }
                else {
                    sym.i3c_trace_log(*piVar14,0x8001a8a,arg3,param_4);
                    pcVar5 = 0xfffffdfb;
                }
            }
            else {
                iVar8 = 1;
                arg3_00 = arg1 + 0xa04;
                iVar4 = device_property_read_u32_array(piVar7,"se-clock-frequency");
                if (iVar4 != 0) {
                    ipc_log_string(*piVar1,"SE clk freq not specified, default to 100 MHz.\n");
                    if (*piVar14 != 0) {
                        sym.i3c_trace_log(*piVar14,0x8001942,arg3_00,iVar8);
                    }
                    *(arg1 + 0xa04) = 100000000;
                }
                param_4 = 0x1;
                piVar11 = arg1 + 0x170;
                iVar4 = device_property_read_u32_array(piVar7,"max_i3c_devs");
                if (iVar4 != 0) {
                    ipc_log_string(*piVar1,"max_i3c_devs is undefined, default to two\n");
                    if (*piVar14 != 0) {
                        sym.i3c_trace_log(*piVar14,0x80019a7,piVar11,param_4);
                    }
                    *(arg1 + 0x170) = 1;
                }
                uVar3 = geni_icc_get(arg1,"qup-memory");
                if (uVar3 == 0) {
                    *(arg1 + 7) = 1;
                    *(arg1 + 9) = 1;
                    *(arg1 + 0xb) = 0x12c00;
                    ipc_log_string(arg1[0x135],"%s: GENI_TO_CORE:%d CPU_TO_GENI:%d GENI_TO_DDR:%d\n",
                                   "i3c_geni_rsrcs_init",1,1,0x12c00);
                    if (arg1[1] != 0) {
                        sym.i3c_trace_log(arg1[1],0x8000e6e,0x8001610,*(arg1 + 7));
                    }
                    uVar3 = geni_icc_set_bw(arg1);
                    if (uVar3 == 0) {
                        param_4 = 0x1;
                        piVar11 = arg1 + 0x141;
                        iVar4 = device_property_read_u32_array(piVar7,"dfs-index");
                        if (iVar4 != 0) {
                            *(arg1 + 0x141) = 0xf;
                        }
                        uVar6 = devm_pinctrl_get(piVar7);
                        arg1[0x16b] = uVar6;
                        if (uVar6 < 0xfffffffffffff001) {
                            uVar6 = pinctrl_lookup_state(uVar6,"default");
                            arg1[0x16c] = uVar6;
                            if (uVar6 < 0xfffffffffffff001) {
                                uVar6 = pinctrl_lookup_state(arg1[0x16b],"sleep");
                                arg1[0x16d] = uVar6;
                                if (uVar6 < 0xfffffffffffff001) {
                                    uVar6 = pinctrl_lookup_state(arg1[0x16b],"disable");
                                    arg1[0x163] = uVar6;
                                    if (uVar6 < 0xfffffffffffff001) goto code_r0x08003f64;
                                    piVar13 = arg1 + 0x163;
                                    ipc_log_string(*piVar1,"Error no pinctrl disable config specified\n");
                                    iVar8 = *piVar14;
                                    if (iVar8 != 0) {
                                        pcVar10 = "Error no pinctrl disable config specified\n";
                                        goto code_r0x08004460;
                                    }
                                }
                                else {
                                    piVar13 = arg1 + 0x16d;
                                    ipc_log_string(*piVar1,"Error no pinctrl sleep config specified\n");
                                    iVar8 = *piVar14;
                                    if (iVar8 != 0) {
                                        pcVar10 = "Error no pinctrl sleep config specified\n";
                                        goto code_r0x08004460;
                                    }
                                }
                            }
                            else {
                                piVar13 = arg1 + 0x16c;
                                ipc_log_string(*piVar1,"Error no pinctr default config specified\n");
                                iVar8 = *piVar14;
                                if (iVar8 != 0) {
                                    pcVar10 = "Error no pinctr default config specified\n";
                                    goto code_r0x08004460;
                                }
                            }
                        }
                        else {
                            piVar13 = arg1 + 0x16b;
                            ipc_log_string(*piVar1,"Error no pinctrl config specified\n");
                            iVar8 = *piVar14;
                            if (iVar8 != 0) {
                                pcVar10 = "Error no pinctrl config specified\n";
code_r0x08004460:
                                sym.i3c_trace_log(iVar8,pcVar10,piVar11,param_4);
                            }
                        }
                        pcVar5 = *piVar13;
                        if (pcVar5 == 0) goto code_r0x08003f64;
                    }
                    else {
                        pcVar5 = uVar3;
                        param_4 = pcVar5;
                        _dev_err(piVar7,"%s: icc set bw failed ret:%d\n","i3c_geni_rsrcs_init");
                    }
                }
                else {
                    pcVar5 = uVar3;
                    ipc_log_string(*piVar1,"geni_se_common_resources_init Failed:%d\n",pcVar5);
                    if (*piVar14 != 0) {
                        sym.i3c_trace_log(*piVar14,0x8000b17,pcVar5,param_4);
                    }
                }
            }
            goto code_r0x0800446c;
        }
        if (pcVar5 != 0) goto code_r0x0800446c;
code_r0x08003f64:
        iVar8 = arg1[1];
        uVar6 = devm_clk_get(iVar8,"se-clk");
        arg1[3] = uVar6;
        if (uVar6 < 0xfffffffffffff001) {
            uVar6 = devm_clk_get(*(iVar8 + 0x60),"m-ahb");
            arg1[0x169] = uVar6;
            if (0xfffffffffffff000 < uVar6) {
                pcVar5 = uVar6 & 0xffffffff;
                ipc_log_string(*piVar1,"Error getting M AHB clk %d\n",pcVar5);
                if (*piVar14 == 0) {
                    _printk(0x80019d2,pcVar5);
                }
                else {
                    _dev_err(*piVar14,"Error getting M AHB clk %d\n",pcVar5);
                }
                iVar8 = *piVar14;
                if (iVar8 != 0) {
                    pcVar10 = "Error getting M AHB clk %d\n";
                    goto code_r0x08004688;
                }
                goto code_r0x08004690;
            }
            uVar6 = devm_clk_get(*(iVar8 + 0x60),"s-ahb");
            arg1[0x16a] = uVar6;
            if (0xfffffffffffff000 < uVar6) {
                pcVar5 = uVar6 & 0xffffffff;
                ipc_log_string(*piVar1,"Error getting S AHB clk %d\n",pcVar5);
                if (*piVar14 == 0) {
                    _printk(0x8000b5e,pcVar5);
                }
                else {
                    _dev_err(*piVar14,"Error getting S AHB clk %d\n",pcVar5);
                }
                iVar8 = *piVar14;
                if (iVar8 != 0) {
                    pcVar10 = "Error getting S AHB clk %d\n";
                    goto code_r0x08004688;
                }
                goto code_r0x08004690;
            }
code_r0x08003fbc:
            uVar3 = platform_get_irq(param_1,0);
            *(arg1 + 100) = uVar3;
            if (-1 < uVar3) {
                *(arg1 + 0x136) = 0;
                __init_swait_queue_head(arg1 + 0x137,"&x->wait",obj.init_completion.__key);
                __mutex_init(arg1 + 0x13a,"&gi3c->lock",obj.init_completion.__key);
                uVar2 = *(arg1 + 100);
                *(arg1 + 0x140) = 0;
                *(param_1 + 0xa8) = arg1;
                irq_modify_status(uVar2,0,0x1000);
                iVar8 = *(param_1 + 0x80);
                if (iVar8 == 0) {
                    iVar8 = *piVar7;
                }
                param_4 = NULL;
                uVar3 = devm_request_threaded_irq
                                  (piVar7,*(arg1 + 100),sym.geni_i3c_irq.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt,0,4
                                   ,iVar8,arg1);
                if (uVar3 == 0) {
                    uVar3 = geni_icc_enable(arg1);
                    if (uVar3 == 0) {
                        uVar3 = geni_se_resources_on(arg1);
                        if (uVar3 == 0) {
                            uVar3 = sym.readl_relaxed(*arg1 + 0x68);
                            uVar3 = uVar3 >> 8 & 0xff;
                            if (uVar3 == 4) {
                                sym.geni_i3c_get_ver_info(arg1);
                                *(arg1 + 0x16e) = 4;
                                uVar3 = sym.readl_relaxed(*arg1 + 100);
                                if (uVar3 == 0) {
                                    uVar3 = sym.geni_se_get_tx_fifo_depth(arg1);
                                    uVar6 = uVar3;
                                    *(arg1 + 0xc) = uVar3 - 1;
                                    geni_se_init(arg1,uVar3 - 1,uVar6);
                                    param_4 = 0x1;
                                    geni_se_config_packing(arg1,8,4,1,1,1);
                                    ipc_log_string(arg1[0x135],"%s: i3c_ibi_rsrcs_init()\n","geni_i3c_probe");
                                    if (arg1[1] != 0) {
                                        sym.i3c_trace_log(arg1[1],0x80016a9,0x8001723,param_4);
                                    }
                                    uVar3 = sym.i3c_ibi_rsrcs_init(arg1,param_1);
                                    if (uVar3 == 0) {
                                        uVar3 = geni_se_resources_off(arg1);
                                        if (uVar3 != 0) {
                                            pcVar10 = uVar3;
                                            param_4 = pcVar10;
                                            ipc_log_string(*piVar1,"%s: geni_se_resources_off failed%d\n",
                                                           "geni_i3c_probe");
                                            if (*piVar14 == 0) {
                                                _printk(0x8000f64,"geni_i3c_probe",pcVar10);
                                            }
                                            else {
                                                param_4 = pcVar10;
                                                _dev_err(*piVar14,"%s: geni_se_resources_off failed%d\n",
                                                         "geni_i3c_probe");
                                            }
                                            if (*piVar14 != 0) {
                                                sym.i3c_trace_log(*piVar14,0x800145b,0x8001723,pcVar10);
                                                param_4 = pcVar10;
                                            }
                                        }
                                        uVar3 = geni_icc_disable(arg1);
                                        if (uVar3 != 0) {
                                            pcVar10 = uVar3;
                                            param_4 = pcVar10;
                                            ipc_log_string(*piVar1,"%s: geni_icc_disable failed%d\n","geni_i3c_probe")
                                            ;
                                            if (*piVar14 == 0) {
                                                _printk(0x8001921,"geni_i3c_probe",pcVar10);
                                            }
                                            else {
                                                param_4 = pcVar10;
                                                _dev_err(*piVar14,"%s: geni_icc_disable failed%d\n","geni_i3c_probe");
                                            }
                                            if (*piVar14 != 0) {
                                                sym.i3c_trace_log(*piVar14,0x8000821,0x8001723,pcVar10);
                                                param_4 = pcVar10;
                                            }
                                        }
                                        ipc_log_string(*piVar1,"i3c fifo/se-dma mode. fifo depth:%d\n",uVar6);
                                        iVar8 = 0;
                                        if (*piVar14 != 0) {
                                            sym.i3c_trace_log(*piVar14,0x8001732,uVar6,param_4);
                                            iVar8 = *piVar14;
                                        }
                                        __pm_runtime_set_status(iVar8,2);
                                        pm_runtime_set_autosuspend_delay(arg1[1],0xfa);
                                        __pm_runtime_use_autosuspend(arg1[1],1);
                                        pm_runtime_enable(arg1[1]);
                                        uVar3 = sym.readl_relaxed(*arg1 + 0x908);
                                        if ((~uVar3 & 3) != 0) {
                                            ipc_log_string(*piVar1,"%s: IO lines:0x%x, Ensure bus power up\n",
                                                           "geni_i3c_probe",uVar3);
                                            if (*piVar14 != 0) {
                                                sym.i3c_trace_log(*piVar14,0x8001107,0x8001723,uVar3);
                                            }
                                        }
                                        param_4 = NULL;
                                        uVar3 = i3c_master_register(arg1 + 0xe,piVar7,
                                                                    
                                                            reloc.geni_i3c_master_bus_init.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt
                                                            );
                                        if (uVar3 != 0) {
                                            pcVar5 = uVar3;
                                            if (uVar3 != 0xffffff95) {
                                                pcVar10 = pcVar5;
                                                ipc_log_string(*piVar1,"I3C master registration failed=%d\n");
                                                if (*piVar14 == 0) {
                                                    _printk(0x8001258,pcVar5);
                                                }
                                                else {
                                                    pcVar10 = pcVar5;
                                                    _dev_err(*piVar14,"I3C master registration failed=%d\n");
                                                }
                                                if (*piVar14 != 0) {
                                                    sym.i3c_trace_log(*piVar14,0x8000f8a,pcVar5,param_4);
                                                    pcVar10 = pcVar5;
                                                }
                                                goto code_r0x08004924;
                                            }
                                            ipc_log_string(*piVar1,"Pass I3C master register failure=%d\n",0xffffff95)
                                            ;
                                            if (*piVar14 == 0) {
                                                _printk(0x80015e9,0xffffff95);
                                            }
                                            else {
                                                _dev_err(*piVar14,"Pass I3C master register failure=%d\n",0xffffff95);
                                            }
                                            if (*piVar14 != 0) {
                                                sym.i3c_trace_log(*piVar14,0x8000840,0xffffff95,param_4);
                                            }
                                        }
                                        pcVar10 = arg1[0x126];
                                        param_4 = arg1[0x127];
                                        ipc_log_string(arg1[0x135],"I3C bus freq:%ld, I2C bus fres:%ld\n");
                                        piVar7 = NULL;
                                        if (arg1[1] != 0) {
                                            pcVar10 = arg1[0x126];
                                            param_4 = arg1[0x127];
                                            sym.i3c_trace_log(arg1[1],0x8000694,pcVar10,param_4);
                                            piVar7 = arg1[1];
                                        }
                                        iVar8 = piVar7[0xe];
                                        if (iVar8 == 0) {
                                            iVar8 = *piVar7;
                                        }
                                        iVar8 = wakeup_source_register(piVar7,iVar8);
                                        arg1[0x162] = iVar8;
                                        if (iVar8 == 0) {
                                            ipc_log_string(*piVar1,"wakeup source registration failed\n");
                                            if (*piVar14 != 0) {
                                                sym.i3c_trace_log(*piVar14,0x8000996,pcVar10,param_4);
                                            }
                                            geni_se_resources_off(arg1);
                                            pcVar5 = 0xfffffff4;
                                        }
                                        else {
                                            arg1[0x15c] = 0xfffffffe0;
                                            arg1[0x15d] = arg1 + 0x15d;
                                            arg1[0x15e] = arg1 + 0x15d;
                                            arg1[0x15f] = sym.geni_i3c_hotjoin.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt;
                                            iVar8 = arg1[1][0xe];
                                            if (iVar8 == 0) {
                                                iVar8 = *arg1[1];
                                            }
                                            iVar8 = alloc_workqueue(0x80007c2,0,0,iVar8);
                                            arg1[0x15b] = iVar8;
                                            sym.geni_i3c_enable_hotjoin_irq(arg1,1);
                                            param_4 = *arg1;
                                            snprintf(acStack_80,0x32,"M - I3C GENI driver_0x%x Complete");
                                            pcVar10 = NULL;
                                            ipc_log_string(arg1[0x135],"I3C probed:%d\n");
                                            if (arg1[1] == 0) {
                                                _printk(0x80008dd,0);
                                            }
                                            else {
                                                pcVar10 = NULL;
                                                _dev_err(arg1[1],"I3C probed:%d\n");
                                            }
                                            if (*piVar14 == 0) {
                                                pcVar5 = NULL;
                                            }
                                            else {
                                                pcVar10 = NULL;
                                                sym.i3c_trace_log(*piVar14,0x800137d,0,param_4);
                                                pcVar5 = NULL;
                                            }
                                        }
                                        goto code_r0x080044bc;
                                    }
                                    pcVar5 = uVar3;
                                    pcVar10 = pcVar5;
                                    ipc_log_string(*piVar1,"Error: %d, i3c_ibi_rsrcs_init\n");
                                    if (*piVar14 != 0) {
                                        sym.i3c_trace_log(*piVar14,0x80012d4,pcVar5,param_4);
                                        pcVar10 = pcVar5;
                                    }
                                }
                                else {
                                    pcVar5 = uVar3;
                                    pcVar10 = pcVar5;
                                    ipc_log_string(*piVar1,"Non supported mode %d\n");
                                    if (*piVar14 != 0) {
                                        sym.i3c_trace_log(*piVar14,0x8000a60,pcVar5,param_4);
                                        pcVar10 = pcVar5;
                                    }
                                }
                            }
                            else {
                                ipc_log_string(*piVar1,"Invalid proto %d\n",uVar3);
                                iVar8 = 0;
                                if (*piVar14 != 0) {
                                    sym.i3c_trace_log(*piVar14,0x800042c,uVar3,param_4);
                                    iVar8 = *piVar14;
                                }
                                pcVar10 = uVar3;
                                _dev_err(iVar8,"Invalid proto %d\n");
                            }
                            uVar3 = geni_se_resources_off(arg1);
                            if (uVar3 != 0) {
                                pcVar5 = uVar3;
                                param_4 = pcVar5;
                                ipc_log_string(*piVar1,"%s: geni_se_resources_off failed%d\n","geni_i3c_probe");
                                if (*piVar14 == 0) {
                                    pcVar10 = pcVar5;
                                    _printk(0x8000f64,"geni_i3c_probe");
                                }
                                else {
                                    pcVar10 = "geni_i3c_probe";
                                    param_4 = pcVar5;
                                    _dev_err(*piVar14,"%s: geni_se_resources_off failed%d\n");
                                }
                                if (*piVar14 != 0) {
                                    pcVar10 = "geni_i3c_probe";
                                    sym.i3c_trace_log(*piVar14,0x800145b,0x8001723,pcVar5);
                                    param_4 = pcVar5;
                                }
                            }
                        }
                        else {
                            pcVar5 = uVar3;
                            pcVar10 = pcVar5;
                            ipc_log_string(*piVar1,"Error turning on resources %d\n");
                            if (*piVar14 != 0) {
                                sym.i3c_trace_log(*piVar14,0x80004b0,pcVar5,param_4);
                                pcVar10 = pcVar5;
                            }
                        }
code_r0x08004924:
                        uVar3 = geni_icc_disable(arg1);
                        pcVar5 = uVar3;
                        if (uVar3 != 0) {
                            param_4 = pcVar5;
                            ipc_log_string(*piVar1,"%s: geni_icc_disable failed%d\n","geni_i3c_probe");
                            if (*piVar14 == 0) {
                                pcVar10 = pcVar5;
                                _printk(0x8001921,"geni_i3c_probe");
                            }
                            else {
                                pcVar10 = "geni_i3c_probe";
                                param_4 = pcVar5;
                                _dev_err(*piVar14,"%s: geni_icc_disable failed%d\n");
                            }
                            iVar8 = *piVar14;
                            if (iVar8 != 0) {
                                pcVar9 = "%s: geni_icc_disable failed%d\n";
                                goto code_r0x08004388;
                            }
                        }
                    }
                    else {
                        pcVar5 = uVar3;
                        pcVar10 = "geni_i3c_probe";
                        param_4 = pcVar5;
                        ipc_log_string(*piVar1,"%s geni_icc_enable failed %d\n");
                        iVar8 = *piVar14;
                        if (iVar8 != 0) {
                            pcVar9 = "%s geni_icc_enable failed %d\n";
code_r0x08004388:
                            pcVar10 = "geni_i3c_probe";
                            param_4 = pcVar5;
                            sym.i3c_trace_log(iVar8,pcVar9,0x8001723,pcVar5);
                        }
                    }
                }
                else {
                    pcVar5 = uVar3;
                    pcVar10 = *(arg1 + 100);
                    param_4 = pcVar5;
                    ipc_log_string(arg1[0x135],"i3c irq failed:%d: err:%d\n");
                    if (arg1[1] != 0) {
                        pcVar10 = *(arg1 + 100);
                        param_4 = pcVar5;
                        sym.i3c_trace_log(arg1[1],0x8000cf4,pcVar10,pcVar5);
                    }
                }
                goto code_r0x08004498;
            }
            pcVar5 = uVar3;
            pcVar10 = pcVar5;
            ipc_log_string(*piVar1,"IRQ error=%d for i3c-master-geni\n");
            iVar8 = *piVar14;
            if (iVar8 == 0) goto code_r0x08004498;
            pcVar9 = "IRQ error=%d for i3c-master-geni\n";
            goto code_r0x08004490;
        }
        pcVar5 = uVar6 & 0xffffffff;
        ipc_log_string(*piVar1,"Error getting SE Core clk %d\n",pcVar5);
        if (*piVar14 == 0) {
            _printk(0x800147f,pcVar5);
        }
        else {
            _dev_err(*piVar14,"Error getting SE Core clk %d\n",pcVar5);
        }
        iVar8 = *piVar14;
        if (iVar8 != 0) {
            pcVar10 = "Error getting SE Core clk %d\n";
code_r0x08004688:
            sym.i3c_trace_log(iVar8,pcVar10,pcVar5,param_4);
        }
code_r0x08004690:
        if (pcVar5 == 0) goto code_r0x08003fbc;
        pcVar10 = pcVar5;
        ipc_log_string(*piVar1,"Error:%d i3c_geni_rsrcs_clk_init\n");
        iVar8 = *piVar14;
        if (iVar8 != 0) {
            pcVar9 = "Error:%d i3c_geni_rsrcs_clk_init\n";
            goto code_r0x08004490;
        }
    }
code_r0x08004498:
    ipc_log_string(*piVar1,"I3C probe failed\n");
    if (*piVar14 != 0) {
        sym.i3c_trace_log(*piVar14,0x800127d,pcVar10,param_4);
    }
code_r0x080044bc:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return pcVar5 & 0xffffffff;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.geni_i3c_remove;
    iVar8 = *(iVar8 + 0xa8);
    sym.geni_i3c_enable_hotjoin_irq(iVar8,0);
    destroy_workqueue(*(iVar8 + 0xad8));
    wakeup_source_unregister(*(iVar8 + 0xb10));
    if (*(iVar8 + 0xa49) != '\0') {
        sym.qcom_geni_i3c_ibi_unconf(iVar8);
    }
    pm_runtime_force_suspend(*(iVar8 + 8));
    iVar4 = pinctrl_select_state(*(iVar8 + 0xb58),*(iVar8 + 0xb18));
    if (iVar4 != 0) {
        ipc_log_string(*(iVar8 + 0x9a8)," i3c: pinctrl_select_state failed\n");
        if (*(iVar8 + 8) != 0) {
            sym.i3c_trace_log(*(iVar8 + 8),0x8001438,pcVar10,param_4);
        }
    }
    uVar6 = i3c_master_unregister(iVar8 + 0x70);
    if (*(iVar8 + 0x9a8) != 0) {
        ipc_log_context_destroy(*(iVar8 + 0x9a8));
    }
    if (0 < _segment.ehdr) {
        memset(obj.i3c_geni_dev,0,_segment.ehdr << 3);
    }
    _segment.ehdr = 0;
    return uVar6 & 0xffffffff;
}


// ===== sym.geni_i3c_remove.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x08003488 (size 8) =====

uint sym.geni_i3c_remove.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt
               (int64_t param_1,ulong param_2,int64_t param_3,int64_t param_4)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xa8);
    sym.geni_i3c_enable_hotjoin_irq(arg1,0);
    destroy_workqueue(*(arg1 + 0xad8));
    wakeup_source_unregister(*(arg1 + 0xb10));
    if (*(arg1 + 0xa49) != '\0') {
        sym.qcom_geni_i3c_ibi_unconf(arg1);
    }
    pm_runtime_force_suspend(*(arg1 + 8));
    iVar1 = pinctrl_select_state(*(arg1 + 0xb58),*(arg1 + 0xb18));
    if (iVar1 != 0) {
        ipc_log_string(*(arg1 + 0x9a8)," i3c: pinctrl_select_state failed\n");
        if (*(arg1 + 8) != 0) {
            sym.i3c_trace_log(*(arg1 + 8),0x8001438,param_3,param_4);
        }
    }
    uVar2 = i3c_master_unregister(arg1 + 0x70);
    if (*(arg1 + 0x9a8) != 0) {
        ipc_log_context_destroy(*(arg1 + 0x9a8));
    }
    if (0 < _segment.ehdr) {
        memset(obj.i3c_geni_dev,0,_segment.ehdr << 3);
    }
    _segment.ehdr = 0;
    return uVar2;
}


// ===== sym.geni_i3c_master_reattach_i3c_dev.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x08003490 (size 8) =====

ulong sym.geni_i3c_master_reattach_i3c_dev.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    
    if (*(param_1 + 0x78) == 0) {
        piVar2 = *(*(param_1 + 0x10) + 0x868);
        piVar1 = *(param_1 + 0x10) + 0x868;
        if (piVar2 != piVar1) {
            do {
                if (*(param_1 + 0x20) == piVar2[3]) {
                    *(param_1 + 0x78) = piVar2;
                }
                piVar2 = *piVar2;
            } while (piVar2 != piVar1);
        }
    }
    return 0;
}


// ===== sym.geni_i3c_master_detach_i2c_dev.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x08003498 (size 8) =====

void sym.geni_i3c_master_detach_i2c_dev.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt(int64_t param_1)

{
    *(param_1 + 0x18) = 0;
    return;
}


// ===== sym.geni_i3c_master_request_ibi.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x080034a0 (size 8) =====

uint sym.geni_i3c_master_request_ibi.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt
               (int64_t param_1,uint32_t *param_2,int64_t param_3,int64_t param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint uVar4;
    int64_t arg1;
    uint64_t uVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong *in_x18;
    uint64_t arg3;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(param_1 + 0x10);
    if (*(iVar7 + 0x9d8) == '\0') {
        uVar4 = 0xffffffff;
    }
    else {
        iVar8 = *(param_1 + 0x18);
        uVar1 = *param_2;
        if (*(iVar7 + 0x9d9) == '\0') {
            *(iVar7 + 0xa50) = 0;
            *(iVar7 + 0xa00) = 0;
            sym.writel_relaxed(0x5fd74322,*(iVar7 + 0x9e0) + 8);
            sym.geni_i3c_enable_ibi_ctrl(iVar7 + -0x70);
            arg1 = sym.readl_relaxed(*(iVar7 + 0x9e0) + 0x14);
            sym.writel_relaxed(arg1,*(iVar7 + 0x9e0) + 0x14);
            sym.writel_relaxed(1,*(iVar7 + 0x9e0) + 0xc);
            sym.writel_relaxed(0xffffffff,*(iVar7 + 0x9e0) + 0x1008);
            *(iVar7 + 0x9d9) = 1;
        }
        uVar5 = i3c_generic_ibi_alloc_pool(param_1,param_2);
        *(iVar8 + 8) = uVar5;
        if (uVar5 < 0xfffffffffffff001) {
            uVar6 = _raw_spin_lock_irqsave(iVar7 + 0x9f8);
            uVar2 = *(iVar7 + 0x9e8);
            uVar5 = 0;
            arg3 = uVar5;
            if (uVar2 != 0) {
                do {
                    if (*(*(iVar7 + 0x9f0) + uVar5 * 8) == 0) {
                        *(iVar8 + 2) = uVar5;
                        *(*(iVar7 + 0x9f0) + uVar5 * 8) = param_1;
                        arg3 = uVar5;
                        break;
                    }
                    uVar5 = uVar5 + 1;
                    arg3 = uVar2;
                } while (uVar2 != uVar5);
            }
            _raw_spin_unlock_irqrestore(iVar7 + 0x9f8,uVar6);
            if (arg3 < *(iVar7 + 0x9e8)) {
                *(iVar7 + 0xa50) = 0;
                *(iVar7 + 0xa00) = 0;
                sym.writel_relaxed((uVar1 & 0x3f) << 0xd | *(param_1 + 0x2b) << 5 | 0x201000,*(iVar7 + 0x9e0) + 0x1000)
                ;
                iVar3 = wait_for_completion_timeout(iVar7 + 0xa00,0xfa);
                if (iVar3 == 0) {
                    *(iVar7 + 0xa50) = 0xffffff92;
                    ipc_log_string(*(iVar7 + 0x938),"timeout while adding slave IBI\n");
                    if (*(iVar7 + -0x68) == 0) {
                        _printk(0x80010cf);
                    }
                    else {
                        _dev_err(*(iVar7 + -0x68),"timeout while adding slave IBI\n");
                    }
                    if (*(iVar7 + -0x68) != 0) {
                        sym.i3c_trace_log(*(iVar7 + -0x68),0x80011e2,param_3,param_4);
                    }
                }
                if (*(iVar7 + 0xa50) == 0) {
                    return 0;
                }
                ipc_log_string(*(iVar7 + 0x938),"error while adding slave IBI 0x%x\n");
                if (*(iVar7 + -0x68) == 0) {
                    _printk(0x8000787,*(iVar7 + 0xa50));
                }
                else {
                    _dev_err(*(iVar7 + -0x68),"error while adding slave IBI 0x%x\n");
                }
                if (*(iVar7 + -0x68) != 0) {
                    sym.i3c_trace_log(*(iVar7 + -0x68),0x8000c93,*(iVar7 + 0xa50),param_4);
                }
            }
            ipc_log_string(*(iVar7 + 0x938),"ibi.num_slots ran out %d: %d\n",arg3,*(iVar7 + 0x9e8));
            if (*(iVar7 + -0x68) == 0) {
                _printk(0x8000cb6,arg3,*(iVar7 + 0x9e8));
            }
            else {
                _dev_err(*(iVar7 + -0x68),"ibi.num_slots ran out %d: %d\n",arg3,*(iVar7 + 0x9e8));
            }
            if (*(iVar7 + -0x68) != 0) {
                sym.i3c_trace_log(*(iVar7 + -0x68),0x8000803,arg3,*(iVar7 + 0x9e8));
            }
            i3c_generic_ibi_free_pool(*(iVar8 + 8));
            uVar4 = 0xffffffe4;
            *(iVar8 + 8) = 0;
        }
        else {
            ipc_log_string(*(iVar7 + 0x938),"Error creating a generic IBI pool %d\n",uVar5);
            if (*(iVar7 + -0x68) == 0) {
                _printk(0x8000aef,*(iVar8 + 8));
            }
            else {
                _dev_err(*(iVar7 + -0x68),"Error creating a generic IBI pool %d\n");
            }
            if (*(iVar7 + -0x68) != 0) {
                sym.i3c_trace_log(*(iVar7 + -0x68),0x8001a44,*(iVar8 + 8),param_4);
            }
            uVar4 = *(iVar8 + 8);
        }
    }
    return uVar4;
}


// ===== sym.geni_i3c_master_do_daa.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x080034a8 (size 8) =====

uint64_t sym.geni_i3c_master_do_daa.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int64_t arg1;
    uint64_t uVar6;
    ulong *in_x18;
    uint64_t arg4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = param_1 + 0x9b8;
    if (*(param_1 + 0xb10) != 0) {
        uVar5 = 0;
        uVar4 = 0;
        do {
            uVar4 = i3c_master_get_free_addr(param_1,uVar4 + 1);
            if (uVar4 < 0) {
                return 0xffffffe4;
            }
            ipc_log_string(*(param_1 + 0x938),"%s: Got free_addr:%d\n","geni_i3c_master_do_daa",uVar4);
            if (*(param_1 + -0x68) == 0) {
                _printk(0x80008c5,"geni_i3c_master_do_daa",uVar4);
                arg1 = *(param_1 + -0x68);
            }
            else {
                _dev_err(*(param_1 + -0x68),"%s: Got free_addr:%d\n","geni_i3c_master_do_daa",uVar4);
                arg1 = *(param_1 + -0x68);
            }
            if (arg1 != 0) {
                sym.i3c_trace_log(arg1,0x8000bbd,0x8001808,uVar4);
            }
            if ((uVar4 >> 7 & 1) == 0) {
                uVar2 = uVar4 >> 6 & 3;
                puVar1[uVar2] = puVar1[uVar2] | 1 << (uVar4 & 0x1f);
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(param_1 + 0xb10));
    }
    uVar6 = i3c_master_entdaa_locked(param_1);
    if ((uVar6 == 3) || (uVar6 == 0)) {
        if (*(param_1 + 0xb10) != 0) {
            if (((*puVar1 & 1) != 0) && (uVar5 = i3c_master_add_i3c_dev_locked(param_1), uVar5 < 0)) {
                ipc_log_string(*(param_1 + 0x938),"%s: error:%d adding device addr:%d\n","geni_i3c_master_do_daa",
                               uVar5,0);
                if (*(param_1 + -0x68) != 0) {
                    sym.i3c_trace_log(*(param_1 + -0x68),0x80016dc,0x8001808,uVar5);
                }
            }
            if (1 < *(param_1 + 0xb10)) {
                if (((*puVar1 >> 1 & 1) != 0) &&
                   (uVar5 = i3c_master_add_i3c_dev_locked(param_1,*(param_1 + 0x9c0)), uVar5 < 0)) {
                    ipc_log_string(*(param_1 + 0x938),"%s: error:%d adding device addr:%d\n","geni_i3c_master_do_daa"
                                   ,uVar5,1);
                    if (*(param_1 + -0x68) != 0) {
                        sym.i3c_trace_log(*(param_1 + -0x68),0x80016dc,0x8001808,uVar5);
                    }
                }
                if (2 < *(param_1 + 0xb10)) {
                    uVar6 = 2;
                    do {
                        if (((uVar6 >> 7 & 1) == 0) && ((puVar1[uVar6 >> 6 & 3] & 1 << (uVar6 & 0x1f)) != 0)) {
    //WARNING: Does not return
                            pcVar3 = SoftwareBreakpoint(0x5512,0x8006ac4);
                            (*pcVar3)();
                        }
                        uVar6 = uVar6 + 1;
                    } while (*(param_1 + 0xb10) != uVar6);
                }
            }
        }
        uVar6 = i3c_master_enec_locked(param_1,0x7e,10);
        if (uVar6 != 0) {
            arg4 = uVar6 & 0xffffffff;
            ipc_log_string(*(param_1 + 0x938),"%s: error:%d with i3c_master_enec_locked\n","geni_i3c_master_do_daa",
                           arg4);
            uVar6 = 0;
            if (*(param_1 + -0x68) != 0) {
                sym.i3c_trace_log(*(param_1 + -0x68),0x8000df8,0x8001808,arg4);
                uVar6 = 0;
            }
        }
    }
    return uVar6;
}


// ===== sym.geni_i3c_master_bus_init.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x080034b0 (size 8) =====

char * sym.geni_i3c_master_bus_init.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt
                 (int64_t param_1,ulong param_2,char *param_3,int64_t param_4)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t extraout_x1;
    int64_t iVar7;
    uint64_t *puVar8;
    uint64_t *extraout_x8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t iVar11;
    char *pcVar12;
    ulong unaff_x30;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    iVar11 = param_1 + -0x70;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    uVar4 = __pm_runtime_resume(*(param_1 + -0x68),4);
    if (-1 < uVar4) {
        iVar9 = *(param_1 + 0x8c0);
        iVar7 = *(param_1 + 0x8c8);
        if ((iVar9 == 100000) && (*(param_1 + 0x994) == 19200000)) {
            *(param_1 + 0x9c8) = obj.geni_i3c_clk_map;
        }
        if (iVar7 == 100000) {
            *(param_1 + 0x9d0) = obj.geni_i3c_clk_map;
        }
        if ((iVar9 == 400000) && (*(param_1 + 0x994) == 19200000)) {
            *(param_1 + 0x9c8) = 0x8002064;
        }
        if (iVar7 == 400000) {
            *(param_1 + 0x9d0) = 0x8002064;
        }
        if ((iVar9 == 1000000) && (*(param_1 + 0x994) == 19200000)) {
            *(param_1 + 0x9c8) = 0x8002078;
        }
        if (iVar7 == 1000000) {
            *(param_1 + 0x9d0) = 0x8002078;
        }
        if ((iVar9 == 0x1d4c00) && (*(param_1 + 0x994) == 19200000)) {
            *(param_1 + 0x9c8) = 0x800208c;
        }
        if (iVar7 == 0x1d4c00) {
            *(param_1 + 0x9d0) = 0x800208c;
        }
        if ((iVar9 == 3500000) && (*(param_1 + 0x994) == 19200000)) {
            *(param_1 + 0x9c8) = 0x80020a0;
        }
        if (iVar7 == 3500000) {
            *(param_1 + 0x9d0) = 0x80020a0;
        }
        if ((iVar9 == 370000) && (*(param_1 + 0x994) == 100000000)) {
            *(param_1 + 0x9c8) = 0x80020b4;
        }
        if (iVar7 == 370000) {
            *(param_1 + 0x9d0) = 0x80020b4;
        }
        if ((iVar9 == 12500000) && (*(param_1 + 0x994) == 100000000)) {
            *(param_1 + 0x9c8) = 0x80020c8;
        }
        if (iVar7 == 12500000) {
            *(param_1 + 0x9d0) = 0x80020c8;
        }
        if ((*(param_1 + 0x9c8) == 0) || (*(param_1 + 0x9d0) == 0)) {
            ipc_log_string(*(param_1 + 0x938),"%s : clk mapping failed","geni_i3c_clk_map_idx");
            if (*(param_1 + -0x68) == 0) {
                _printk(0x8000564,"geni_i3c_clk_map_idx");
                iVar7 = *(param_1 + -0x68);
            }
            else {
                _dev_err(*(param_1 + -0x68),"%s : clk mapping failed","geni_i3c_clk_map_idx");
                iVar7 = *(param_1 + -0x68);
            }
            if (iVar7 != 0) {
                sym.i3c_trace_log(iVar7,0x800198f,0x80008b0,param_4);
            }
            ipc_log_string(*(param_1 + 0x938),"Invalid clk frequency %d Hz src or %ld Hz bus: %d\n",*(param_1 + 0x994)
                           ,*(param_1 + 0x8c0),0xffffffea);
            pcVar12 = *(param_1 + 0x994);
            param_3 = *(param_1 + 0x8c0);
            if (*(param_1 + -0x68) == 0) {
                _printk(0x8001057,pcVar12,param_3,0xffffffea);
                iVar7 = *(param_1 + -0x68);
            }
            else {
                _dev_err(*(param_1 + -0x68),"Invalid clk frequency %d Hz src or %ld Hz bus: %d\n",pcVar12,param_3,
                         0xffffffea);
                iVar7 = *(param_1 + -0x68);
                param_3 = pcVar12;
            }
            if (iVar7 != 0) {
                param_3 = *(param_1 + 0x994);
                sym.i3c_trace_log(iVar7,0x8001893,param_3,*(param_1 + 0x8c0));
            }
        }
        else {
            sym.qcom_geni_i3c_conf(iVar11);
            uVar5 = i3c_master_get_free_addr(param_1,0);
            if (uVar5 < 0) {
                ipc_log_string(*(param_1 + 0x938),"%s: error No free addr:%d\n","geni_i3c_master_bus_init",
                               uVar5 & 0xffffffff);
                if (*(param_1 + -0x68) == 0) {
                    param_3 = uVar5 & 0xffffffff;
                    _printk(0x8000ef2,"geni_i3c_master_bus_init");
                }
                else {
                    param_3 = "geni_i3c_master_bus_init";
                    _dev_err(*(param_1 + -0x68),"%s: error No free addr:%d\n","geni_i3c_master_bus_init",
                             uVar5 & 0xffffffff);
                }
                if (*(param_1 + -0x68) != 0) {
                    param_3 = "geni_i3c_master_bus_init";
                    sym.i3c_trace_log(*(param_1 + -0x68),0x8000ed7,0x80016c3,uVar5 & 0xffffffff);
                }
            }
            else {
                uStack_48._0_4_ = CONCAT13(uVar5,uStack_48);
                uStack_50 = 0;
                uStack_48 = CONCAT62(uStack_48._2_6_,0x60);
                i3c_master_set_info(param_1,&uStack_50);
            }
        }
        disable_irq(*(param_1 + -0xc));
        uVar4 = geni_se_resources_off(iVar11);
        if (uVar4 != 0) {
            pcVar12 = uVar4;
            ipc_log_string(*(param_1 + 0x938),"%s: geni_se_resources_off failed%d\n","geni_i3c_master_bus_init",
                           pcVar12);
            if (*(param_1 + -0x68) == 0) {
                param_3 = pcVar12;
                _printk(0x8000f64,"geni_i3c_master_bus_init");
            }
            else {
                param_3 = "geni_i3c_master_bus_init";
                _dev_err(*(param_1 + -0x68),"%s: geni_se_resources_off failed%d\n","geni_i3c_master_bus_init",pcVar12
                        );
            }
            if (*(param_1 + -0x68) != 0) {
                param_3 = "geni_i3c_master_bus_init";
                sym.i3c_trace_log(*(param_1 + -0x68),0x800145b,0x80016c3,pcVar12);
            }
        }
        uVar4 = geni_icc_disable(iVar11);
        pcVar12 = uVar4;
        if (uVar4 != 0) {
            ipc_log_string(*(param_1 + 0x938),"%s: geni_icc_disable failed%d\n","geni_i3c_master_bus_init",pcVar12);
            if (*(param_1 + -0x68) == 0) {
                param_3 = pcVar12;
                _printk(0x8001921,"geni_i3c_master_bus_init");
            }
            else {
                param_3 = "geni_i3c_master_bus_init";
                _dev_err(*(param_1 + -0x68),"%s: geni_icc_disable failed%d\n","geni_i3c_master_bus_init",pcVar12);
            }
            if (*(param_1 + -0x68) != 0) {
                param_3 = "geni_i3c_master_bus_init";
                sym.i3c_trace_log(*(param_1 + -0x68),0x8000821,0x80016c3,pcVar12);
            }
        }
        __pm_runtime_disable(*(param_1 + -0x68),1);
        puVar8 = *(param_1 + -0x68) + 0x1f8;
        uVar5 = *puVar8;
code_r0x0800633c:
        if (uVar5 == 0) goto code_r0x0800637c;
        param_3 = uVar5 - 1;
        uVar6 = uVar5 & 0xffffffff;
        uVar10 = uVar5;
        do {
            Hint_Prefetch(puVar8,2,0,1);
            do {
                uVar4 = *puVar8;
                uVar5 = uVar4;
                if (uVar4 != uVar6) goto code_r0x08006360;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar8,0x10);
                if (bVar3) {
                    *puVar8 = param_3;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08006360:
            if (uVar10 != uVar4) goto code_r0x0800633c;
code_r0x0800637c:
            __pm_runtime_set_status(*(param_1 + -0x68),2);
            pm_runtime_enable(*(param_1 + -0x68));
code_r0x08006390:
            iVar11 = sp_el0;
            if (*(iVar11 + 0x5e0) == iStack_38) {
                return pcVar12;
            }
            __stack_chk_fail();
            uVar10 = *extraout_x8;
            uVar6 = extraout_x1;
            puVar8 = extraout_x8;
        } while( true );
    }
    pcVar12 = uVar4;
    ipc_log_string(*(param_1 + 0x938),"%s: error turning SE resources:%d\n","geni_i3c_master_bus_init",pcVar12);
    if (*(param_1 + -0x68) == 0) {
        param_3 = pcVar12;
        _printk(0x8001032,"geni_i3c_master_bus_init");
        iVar11 = *(param_1 + -0x68);
    }
    else {
        param_3 = "geni_i3c_master_bus_init";
        _dev_err(*(param_1 + -0x68),"%s: error turning SE resources:%d\n","geni_i3c_master_bus_init",pcVar12);
        iVar11 = *(param_1 + -0x68);
    }
    if (iVar11 == 0) {
        iVar11 = 0;
    }
    else {
        param_3 = "geni_i3c_master_bus_init";
        sym.i3c_trace_log(iVar11,0x8001870,0x80016c3,pcVar12);
        iVar11 = *(param_1 + -0x68);
    }
    puVar8 = iVar11 + 0x1f8;
    uVar5 = *puVar8;
    do {
        uVar4 = uVar5;
        if (uVar4 == 0) break;
        param_3 = uVar4 - 1;
        Hint_Prefetch(puVar8,2,0,1);
        do {
            uVar1 = *puVar8;
            uVar5 = uVar1;
            if (uVar1 != uVar4) goto code_r0x08006634;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar8,0x10);
            if (bVar3) {
                *puVar8 = uVar4 - 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08006634:
    } while (uVar4 != uVar1);
    __pm_runtime_set_status(*(param_1 + -0x68),2);
    goto code_r0x08006390;
}


// ===== sym.__traceiter_i3c_log_info.cfi_jt @ 0x080034b8 (size 8) =====

ulong sym.__traceiter_i3c_log_info.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8008cf8;
    piVar1 = *0x8008cf8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.trace_event_reg.cfi_jt @ 0x080034c0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_reg.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.geni_i3c_master_i2c_xfers.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x080034c8 (size 8) =====

char * sym.geni_i3c_master_i2c_xfers.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt
                 (int64_t param_1,int64_t param_2,char *param_3,uint64_t param_4)

{
    uint32_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    int iVar6;
    ulong uVar7;
    int64_t arg1;
    char *pcVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    char *arg3;
    uint64_t uVar11;
    uint16_t *puVar12;
    int64_t iVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uint uStack_68;
    uint uStack_64;
    uint32_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    iVar9 = *(param_1 + 0x10);
    iVar10 = iVar9 + -0x70;
    if (param_2 == 0) {
        pcVar8 = "geni_i3c_master_i2c_xfers";
        ipc_log_string(*(iVar9 + 0x938),"%s: client msg is NULL\n");
        if (*(iVar9 + -0x68) != 0) {
            pcVar8 = "geni_i3c_master_i2c_xfers";
            sym.i3c_trace_log(*(iVar9 + -0x68),0x800075e,0x80005b2,param_4);
        }
        arg3 = NULL;
    }
    else {
        uVar11 = param_3 & 0xffffffff;
        pcVar8 = param_3;
        uVar5 = sym.i3c_geni_runtime_get_mutex_lock(iVar10);
        arg3 = uVar5;
        if (uVar5 == 0) {
            sym.qcom_geni_i3c_conf(iVar10);
            param_4 = *(param_2 + 4);
            ipc_log_string(*(iVar9 + 0x938),"i2c xfer:num:%d, msgs:len:%d,flg:%d\n",uVar11,param_4,*(param_2 + 2));
            if (*(iVar9 + -0x68) != 0) {
                param_4 = *(param_2 + 4);
                sym.i3c_trace_log(*(iVar9 + -0x68),0x8000f0f,uVar11,param_4);
            }
            if (0 < param_3) {
                uVar14 = 0;
                puVar12 = param_2 + 4;
                do {
                    uVar3 = puVar12[-1];
                    uVar4 = puVar12[-2];
                    uVar2 = *puVar12;
                    uStack_64 = 1;
                    if ((uVar3 & 1) != 0) {
                        uStack_64 = 2;
                    }
                    *(iVar9 + 0x9a0) = *(puVar12 + 2);
                    uStack_68 = 1;
                    if (0x20 < uVar2) {
                        uStack_68 = 2;
                    }
                    *(iVar9 + 0x9a8) = uVar3 & 1;
                    uStack_60 = (uVar4 & 0x7f) << 9 | (uVar14 < param_3 - 1) << 2;
                    *(iVar9 + 0x9ac) = uVar2;
                    uVar5 = sym._i3c_geni_execute_command(iVar10,&uStack_68);
                    if (uVar5 != 0) {
                        arg3 = uVar5;
                        goto code_r0x080077c4;
                    }
                    uVar14 = uVar14 + 1;
                    puVar12 = puVar12 + 8;
                } while (uVar11 != uVar14);
            }
            arg3 = NULL;
code_r0x080077c4:
            pcVar8 = arg3;
            ipc_log_string(*(iVar9 + 0x938),"i2c: txn ret:%d\n");
            if (*(iVar9 + -0x68) == 0) {
                iVar10 = 0;
            }
            else {
                pcVar8 = arg3;
                sym.i3c_trace_log(*(iVar9 + -0x68),0x8000776,arg3,param_4);
                iVar10 = *(iVar9 + -0x68);
            }
            uVar7 = ktime_get_mono_fast_ns();
            *(iVar10 + 0x218) = uVar7;
            __pm_runtime_suspend(*(iVar9 + -0x68),0xd);
            mutex_unlock(iVar9 + 0x960);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return arg3;
    }
    auVar15 = __stack_chk_fail();
    iVar9 = auVar15._0_8_;
    *extraout_x18 = sym.geni_i3c_master_request_ibi;
    iVar10 = *(iVar9 + 0x10);
    if (*(iVar10 + 0x9d8) == '\0') {
        pcVar8 = 0xffffffff;
    }
    else {
        iVar13 = *(iVar9 + 0x18);
        uVar5 = *auVar15._8_8_;
        if (*(iVar10 + 0x9d9) == '\0') {
            *(iVar10 + 0xa50) = 0;
            *(iVar10 + 0xa00) = 0;
            sym.writel_relaxed(0x5fd74322,*(iVar10 + 0x9e0) + 8);
            sym.geni_i3c_enable_ibi_ctrl(iVar10 + -0x70);
            arg1 = sym.readl_relaxed(*(iVar10 + 0x9e0) + 0x14);
            sym.writel_relaxed(arg1,*(iVar10 + 0x9e0) + 0x14);
            sym.writel_relaxed(1,*(iVar10 + 0x9e0) + 0xc);
            sym.writel_relaxed(0xffffffff,*(iVar10 + 0x9e0) + 0x1008);
            *(iVar10 + 0x9d9) = 1;
        }
        uVar11 = i3c_generic_ibi_alloc_pool(iVar9,auVar15._8_8_);
        *(iVar13 + 8) = uVar11;
        if (uVar11 < 0xfffffffffffff001) {
            uVar7 = _raw_spin_lock_irqsave(iVar10 + 0x9f8);
            uVar1 = *(iVar10 + 0x9e8);
            uVar11 = 0;
            uVar14 = uVar11;
            if (uVar1 != 0) {
                do {
                    if (*(*(iVar10 + 0x9f0) + uVar11 * 8) == 0) {
                        *(iVar13 + 2) = uVar11;
                        *(*(iVar10 + 0x9f0) + uVar11 * 8) = iVar9;
                        uVar14 = uVar11;
                        break;
                    }
                    uVar11 = uVar11 + 1;
                    uVar14 = uVar1;
                } while (uVar1 != uVar11);
            }
            _raw_spin_unlock_irqrestore(iVar10 + 0x9f8,uVar7);
            if (uVar14 < *(iVar10 + 0x9e8)) {
                *(iVar10 + 0xa50) = 0;
                *(iVar10 + 0xa00) = 0;
                sym.writel_relaxed((uVar5 & 0x3f) << 0xd | *(iVar9 + 0x2b) << 5 | 0x201000,*(iVar10 + 0x9e0) + 0x1000);
                iVar6 = wait_for_completion_timeout(iVar10 + 0xa00,0xfa);
                if (iVar6 == 0) {
                    *(iVar10 + 0xa50) = 0xffffff92;
                    ipc_log_string(*(iVar10 + 0x938),"timeout while adding slave IBI\n");
                    if (*(iVar10 + -0x68) == 0) {
                        _printk(0x80010cf);
                    }
                    else {
                        _dev_err(*(iVar10 + -0x68),"timeout while adding slave IBI\n");
                    }
                    if (*(iVar10 + -0x68) != 0) {
                        sym.i3c_trace_log(*(iVar10 + -0x68),0x80011e2,pcVar8,param_4);
                    }
                }
                if (*(iVar10 + 0xa50) == 0) {
                    return NULL;
                }
                ipc_log_string(*(iVar10 + 0x938),"error while adding slave IBI 0x%x\n");
                if (*(iVar10 + -0x68) == 0) {
                    _printk(0x8000787,*(iVar10 + 0xa50));
                }
                else {
                    _dev_err(*(iVar10 + -0x68),"error while adding slave IBI 0x%x\n");
                }
                if (*(iVar10 + -0x68) != 0) {
                    sym.i3c_trace_log(*(iVar10 + -0x68),0x8000c93,*(iVar10 + 0xa50),param_4);
                }
            }
            ipc_log_string(*(iVar10 + 0x938),"ibi.num_slots ran out %d: %d\n",uVar14,*(iVar10 + 0x9e8));
            if (*(iVar10 + -0x68) == 0) {
                _printk(0x8000cb6,uVar14,*(iVar10 + 0x9e8));
            }
            else {
                _dev_err(*(iVar10 + -0x68),"ibi.num_slots ran out %d: %d\n",uVar14,*(iVar10 + 0x9e8));
            }
            if (*(iVar10 + -0x68) != 0) {
                sym.i3c_trace_log(*(iVar10 + -0x68),0x8000803,uVar14,*(iVar10 + 0x9e8));
            }
            i3c_generic_ibi_free_pool(*(iVar13 + 8));
            pcVar8 = 0xffffffe4;
            *(iVar13 + 8) = 0;
        }
        else {
            ipc_log_string(*(iVar10 + 0x938),"Error creating a generic IBI pool %d\n",uVar11);
            if (*(iVar10 + -0x68) == 0) {
                _printk(0x8000aef,*(iVar13 + 8));
            }
            else {
                _dev_err(*(iVar10 + -0x68),"Error creating a generic IBI pool %d\n");
            }
            if (*(iVar10 + -0x68) != 0) {
                sym.i3c_trace_log(*(iVar10 + -0x68),0x8001a44,*(iVar13 + 8),param_4);
            }
            pcVar8 = *(iVar13 + 8);
        }
    }
    return pcVar8;
}


// ===== sym.geni_i3c_runtime_resume.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x080034d0 (size 8) =====

uint64_t sym.geni_i3c_runtime_resume.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    char *arg2;
    ulong *in_x18;
    uint64_t arg4;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    uVar1 = geni_icc_enable(iVar2);
    if (uVar1 == 0) {
        uVar1 = geni_se_resources_on(iVar2);
        if (uVar1 == 0) {
            enable_irq(*(iVar2 + 100));
            ipc_log_string(*(iVar2 + 0x9a8),"%s(): ret:%d\n","geni_i3c_runtime_resume",0);
            if (*(iVar2 + 8) != 0) {
                sym.i3c_trace_log(*(iVar2 + 8),0x8000dad,0x8000d72,0);
            }
            return 0;
        }
        arg4 = uVar1;
        ipc_log_string(*(iVar2 + 0x9a8),"%s geni_se_resources_on failed %d\n","geni_i3c_runtime_resume",arg4);
        iVar2 = *(iVar2 + 8);
        if (iVar2 == 0) {
            return arg4;
        }
        arg2 = "%s geni_se_resources_on failed %d\n";
    }
    else {
        arg4 = uVar1;
        ipc_log_string(*(iVar2 + 0x9a8),"%s geni_icc_enable failed %d\n","geni_i3c_runtime_resume",arg4);
        iVar2 = *(iVar2 + 8);
        if (iVar2 == 0) {
            return arg4;
        }
        arg2 = "%s geni_icc_enable failed %d\n";
    }
    sym.i3c_trace_log(iVar2,arg2,0x8000d72,arg4);
    return arg4;
}


// ===== sym.geni_i3c_runtime_suspend.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x080034d8 (size 8) =====

ulong sym.geni_i3c_runtime_suspend.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint64_t arg4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    disable_irq(*(iVar2 + 100));
    uVar1 = geni_se_resources_off(iVar2);
    if (uVar1 != 0) {
        ipc_log_string(*(iVar2 + 0x9a8),"%s geni_se_resources_off failed %d\n","geni_i3c_runtime_suspend",uVar1);
        if (*(iVar2 + 8) != 0) {
            sym.i3c_trace_log(*(iVar2 + 8),0x8001b06,0x8001a71,uVar1);
        }
    }
    uVar1 = geni_icc_disable(iVar2);
    arg4 = uVar1;
    if (uVar1 != 0) {
        ipc_log_string(*(iVar2 + 0x9a8),"%s geni_icc_disable failed %d\n","geni_i3c_runtime_suspend",arg4);
        if (*(iVar2 + 8) != 0) {
            sym.i3c_trace_log(*(iVar2 + 8),0x800181f,0x8001a71,arg4);
        }
    }
    ipc_log_string(*(iVar2 + 0x9a8),"%s():ret:%d\n","geni_i3c_runtime_suspend",arg4);
    if (*(iVar2 + 8) != 0) {
        sym.i3c_trace_log(*(iVar2 + 8),0x80010fa,0x8001a71,arg4);
    }
    return 0;
}


// ===== sym.geni_i3c_resume_early.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x080034e0 (size 8) =====

ulong sym.geni_i3c_resume_early.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt(void)

{
    return 0;
}


// ===== sym.geni_i3c_suspend_late.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x080034e8 (size 8) =====

ulong sym.geni_i3c_suspend_late.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x20c) != 2) {
        iVar7 = *(param_1 + 0x98);
        ipc_log_string(*(iVar7 + 0x9a8),"%s: Forced suspend\n","geni_i3c_suspend_late");
        iVar7 = *(iVar7 + 8);
        if (iVar7 != 0) {
            sym.i3c_trace_log(iVar7,0x8001af2,0x80007ac,param_4);
        }
        sym.geni_i3c_runtime_suspend(param_1);
        __pm_runtime_disable(param_1,1);
        puVar1 = param_1 + 0x1f8;
        uVar6 = *puVar1;
        do {
            uVar5 = uVar6;
            if (uVar5 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar6 = uVar2;
                if (uVar2 != uVar5) goto code_r0x08008954;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar5 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08008954:
        } while (uVar5 != uVar2);
        __pm_runtime_set_status(param_1,2);
        pm_runtime_enable(param_1);
    }
    return 0;
}


// ===== sym.geni_i3c_master_disable_ibi.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x080034f0 (size 8) =====

int sym.geni_i3c_master_disable_ibi.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt
              (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x10);
    if ((*(iVar2 + 0x9d8) == '\0') && (*(iVar2 + 0x9d9) == '\0')) {
        iVar1 = -1;
    }
    else {
        iVar1 = i3c_master_disec_locked(iVar2,*(param_1 + 0x2b),1);
        if (iVar1 != 0) {
            ipc_log_string(*(iVar2 + 0x938),"%s: error while i3c_master_disec_locked\n","geni_i3c_master_disable_ibi")
            ;
            if (*(iVar2 + -0x68) == 0) {
                _printk(0x8001567,"geni_i3c_master_disable_ibi");
            }
            else {
                _dev_err(*(iVar2 + -0x68),"%s: error while i3c_master_disec_locked\n","geni_i3c_master_disable_ibi");
            }
            if (*(iVar2 + -0x68) != 0) {
                sym.i3c_trace_log(*(iVar2 + -0x68),0x8001be8,0x8000bd3,param_4);
            }
        }
    }
    return iVar1;
}


// ===== sym.geni_i3c_master_enable_ibi.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x080034f8 (size 8) =====

int sym.geni_i3c_master_enable_ibi.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt
              (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x10);
    if ((*(iVar2 + 0x9d8) == '\0') && (*(iVar2 + 0x9d9) == '\0')) {
        iVar1 = -1;
    }
    else {
        iVar1 = i3c_master_enec_locked(iVar2,*(param_1 + 0x2b),1);
        if (iVar1 != 0) {
            ipc_log_string(*(iVar2 + 0x938),"%s: error while i3c_master_enec_locked\n","geni_i3c_master_enable_ibi");
            if (*(iVar2 + -0x68) == 0) {
                _printk(0x8000a07,"geni_i3c_master_enable_ibi");
            }
            else {
                _dev_err(*(iVar2 + -0x68),"%s: error while i3c_master_enec_locked\n","geni_i3c_master_enable_ibi");
            }
            if (*(iVar2 + -0x68) != 0) {
                sym.i3c_trace_log(*(iVar2 + -0x68),0x800066c,0x8001bcd,param_4);
            }
        }
    }
    return iVar1;
}


// ===== sym.geni_i3c_master_attach_i3c_dev.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x08003500 (size 8) =====

ulong sym.geni_i3c_master_attach_i3c_dev.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x10);
    iVar1 = devm_kmalloc(*(iVar5 + -0x68),0x10,0xdc0);
    if (iVar1 == 0) {
        uVar2 = 0xfffffff4;
    }
    else {
        iVar4 = *(param_1 + 0x78);
        *(param_1 + 0x18) = iVar1;
        *(iVar1 + 2) = 0xffff;
        if (iVar4 == 0) {
            piVar3 = *(iVar5 + 0x868);
            if (piVar3 != iVar5 + 0x868) {
                do {
                    if (*(param_1 + 0x20) == piVar3[3]) {
                        *(param_1 + 0x78) = piVar3;
                    }
                    piVar3 = *piVar3;
                } while (piVar3 != iVar5 + 0x868);
            }
        }
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.geni_i3c_irq.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x08003508 (size 8) =====

//WARNING: Type propagation algorithm not settling

ulong sym.geni_i3c_irq.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt
                (ulong param_1,int64_t *param_2,ulong param_3,uint64_t param_4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    unkuint3 Var5;
    bool bVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    int iVar11;
    uint uVar12;
    ulong uVar13;
    uint64_t arg1;
    int iVar14;
    int iVar15;
    int64_t iVar16;
    int64_t iVar17;
    int64_t iVar18;
    ulong *in_x18;
    uint64_t arg4;
    uint32_t uVar19;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar13 = _raw_spin_lock_irqsave(param_2 + 0x140);
    uVar7 = sym.readl_relaxed(*param_2 + 0x610);
    sym.readl_relaxed(*param_2 + 0x614);
    uVar8 = sym.readl_relaxed(*param_2 + 0x804);
    uVar9 = sym.readl_relaxed(*param_2 + 0xc40);
    uVar10 = sym.readl_relaxed(*param_2 + 0xd40);
    arg4 = uVar10;
    iVar11 = sym.readl_relaxed(*param_2 + 600);
    if (((uVar7 & 0x3e2e) == 0) && ((uVar10 & 0x340) == 0)) {
        if (iVar11 == 0) {
            if ((((uVar7 & 0xc000000) == 0) || (param_2[0x143] != 1)) || (param_2[0x142] == 0)) {
                if ((((uVar7 >> 0x1e & 1) != 0) && (param_2[0x143] == 0)) &&
                   ((param_2[0x142] != 0 && (param_2[0xc] != 0)))) {
                    iVar14 = *(param_2 + 0xa1c);
                    uVar8 = 0;
                    iVar15 = param_2[0x144];
                    do {
                        if (iVar15 < iVar14) {
                            iVar18 = iVar15;
                            iVar17 = param_2[0x142];
                            iVar1 = iVar18 + 1;
                            iVar16 = iVar14;
                            *(param_2 + 0x144) = iVar1;
                            uVar3 = *(iVar17 + iVar18);
                            arg1 = uVar3;
                            if (iVar1 < iVar16) {
                                iVar2 = iVar18 + 2;
                                *(param_2 + 0x144) = iVar2;
                                uVar4 = CONCAT11(*(iVar17 + iVar1),uVar3);
                                arg1 = uVar4;
                                if (iVar2 < iVar16) {
                                    iVar18 = iVar18 + 3;
                                    *(param_2 + 0x144) = iVar18;
                                    Var5 = CONCAT12(*(iVar17 + iVar2),uVar4);
                                    arg1 = Var5;
                                    if (iVar18 < iVar16) {
                                        *(param_2 + 0x144) = iVar15 + 4;
                                        arg1 = CONCAT13(*(iVar17 + iVar18),Var5);
                                    }
                                }
                            }
                        }
                        else {
                            arg1 = 0;
                        }
                        sym.writel_relaxed(arg1,*param_2 + 0x700);
                        iVar15 = param_2[0x144];
                        iVar14 = *(param_2 + 0xa1c);
                        if (iVar15 == iVar14) goto code_r0x08004f2c;
                        uVar8 = uVar8 + 1;
                    } while (uVar8 < *(param_2 + 0xc));
                }
            }
            else if ((uVar8 & 0x1ffffff) != 0) {
                uVar19 = 1;
                do {
                    uVar12 = sym.readl_relaxed(*param_2 + 0x780);
                    iVar14 = param_2[0x144];
                    iVar15 = *(param_2 + 0xa1c);
                    if (iVar14 < iVar15) {
                        *(param_2 + 0x144) = iVar14 + 1;
                        *(param_2[0x142] + iVar14) = uVar12;
                        iVar14 = param_2[0x144];
                        iVar15 = *(param_2 + 0xa1c);
                        if (iVar15 <= iVar14) goto code_r0x08005024;
                        *(param_2 + 0x144) = iVar14 + 1;
                        *(param_2[0x142] + iVar14) = uVar12 >> 8;
                        iVar14 = param_2[0x144];
                        if (iVar14 < *(param_2 + 0xa1c)) {
                            *(param_2 + 0x144) = iVar14 + 1;
                            *(param_2[0x142] + iVar14) = uVar12 >> 0x10;
                            iVar14 = param_2[0x144];
                            iVar15 = *(param_2 + 0xa1c);
                            if (iVar15 <= iVar14) goto code_r0x08005024;
                            *(param_2 + 0x144) = iVar14 + 1;
                            *(param_2[0x142] + iVar14) = uVar12 >> 0x18;
                            if (param_2[0x144] == *(param_2 + 0xa1c)) break;
                        }
                        else if (iVar14 == *(param_2 + 0xa1c)) break;
                    }
                    else {
code_r0x08005024:
                        if (iVar14 == iVar15) break;
                    }
                    bVar6 = uVar19 < (uVar8 & 0x1ffffff);
                    uVar19 = uVar19 + 1;
                } while (bVar6);
            }
        }
        else {
            param_4 = uVar10;
            ipc_log_string(param_2[0x135],"i3c dma tx:0x%x, dma rx:0x%x\n",uVar9);
            if (param_2[1] != 0) {
                param_4 = arg4;
                sym.i3c_trace_log(param_2[1],0x8000865,uVar9,arg4);
            }
        }
    }
    else {
        if ((uVar7 >> 9 & 1) != 0) {
            sym.geni_i3c_err(param_2,0);
        }
        if ((uVar7 >> 10 & 1) != 0) {
            sym.geni_i3c_err(param_2,1);
        }
        if ((uVar7 >> 0xb & 1) != 0) {
            sym.geni_i3c_err(param_2,2);
        }
        if ((uVar7 >> 0xc & 1) != 0) {
            sym.geni_i3c_err(param_2,3);
        }
        if ((uVar7 >> 0xd & 1) != 0) {
            sym.geni_i3c_err(param_2,4);
        }
        if ((uVar7 >> 1 & 1) != 0) {
            sym.geni_i3c_err(param_2,6);
        }
        if ((uVar7 >> 2 & 1) != 0) {
            sym.geni_i3c_err(param_2,7);
        }
        if ((uVar7 >> 5 & 1) != 0) {
            sym.geni_i3c_err(param_2,8);
        }
        if (iVar11 == 0) {
code_r0x08004f2c:
            sym.writel_relaxed(0,*param_2 + 0x80c);
        }
    }
    if (uVar7 != 0) {
        sym.writel_relaxed(uVar7,*param_2 + 0x618);
    }
    if (iVar11 != 0) {
        if (uVar9 != 0) {
            sym.writel_relaxed(uVar9,*param_2 + 0xc44);
        }
        if (uVar10 != 0) {
            sym.writel_relaxed(arg4,*param_2 + 0xd44);
        }
    }
    if ((uVar7 & 0x21) == 0) {
        if ((((uVar9 & 1) == 0) && ((uVar10 & 9) == 0)) && ((uVar9 >> 3 & 1) == 0)) goto code_r0x0800510c;
        ipc_log_string(param_2[0x135],"%s: DMA mode xfer completed\n","geni_i3c_irq");
        if (param_2[1] != 0) {
            sym.i3c_trace_log(param_2[1],0x8001b3a,0x800149f,param_4);
        }
    }
    else {
        sym.writel_relaxed(0,*param_2 + 0x80c);
    }
    complete(param_2 + 0x136);
code_r0x0800510c:
    _raw_spin_unlock_irqrestore(param_2 + 0x140,uVar13);
    return 1;
}


// ===== sym.geni_i3c_ibi_irq.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x08003510 (size 8) =====

ulong sym.geni_i3c_ibi_irq.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt
                (int param_1,int64_t param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    bool bVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint uVar6;
    ulong uVar7;
    int64_t iVar8;
    char *arg2;
    ulong *in_x18;
    uint32_t uVar9;
    uint64_t uVar10;
    uint64_t arg3;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = _raw_spin_lock_irqsave(param_2 + 0xa68);
    if (*(param_2 + 0xa6c) == param_1) {
        uVar4 = sym.readl_relaxed(*(param_2 + 0xa50) + 0x14);
        uVar5 = sym.readl_relaxed(*(param_2 + 0xa50) + 0x10);
        uVar5 = uVar5 & uVar4;
        uVar10 = uVar5;
        ipc_log_string(*(param_2 + 0x9a8),"IBI MGR IRQ IBI_GEN_IRQ_STATUS:0x%x\n",uVar10);
        if (*(param_2 + 8) != 0) {
            sym.i3c_trace_log(*(param_2 + 8),0x8000616,uVar10,param_4);
        }
        if ((uVar5 & 0x12) != 0) {
            *(param_2 + 0xac0) = uVar5;
        }
        uVar4 = uVar5 & 9;
        bVar3 = (uVar5 & 9) != 0;
        if ((uVar5 >> 2 & 1) != 0) {
            queue_work_on(0x20,*(param_2 + 0xad8),param_2 + 0xae0);
        }
        if (uVar5 != 0) {
            sym.writel_relaxed(uVar10,*(param_2 + 0xa50) + 0x18);
            goto joined_r0x08005d04;
        }
code_r0x08005d10:
        if (!bVar3) goto code_r0x08005d1c;
    }
    else {
        if (*(param_2 + 0xa90) != param_1) goto code_r0x08005d1c;
        uVar4 = sym.readl_relaxed(*(param_2 + 0xa50) + 0x1004);
        arg3 = uVar4;
        uVar10 = arg3;
        ipc_log_string(*(param_2 + 0x9a8),"IBI GPII IRQ, IBI_IRQ_STATUS:0x%x\n");
        if (*(param_2 + 8) != 0) {
            uVar10 = arg3;
            sym.i3c_trace_log(*(param_2 + 8),0x80007cb,arg3,param_4);
        }
        if ((uVar4 & 0x3f001e) != 0) {
            *(param_2 + 0xac0) = uVar4;
        }
        if ((uVar4 >> 8 & 1) != 0) {
            iVar11 = **(param_2 + 0xa60);
            uVar5 = sym.readl_relaxed(*(param_2 + 0xa50) + 0x1010);
            if ((iVar11 == 0) || (*(iVar11 + 0x68) == 0)) {
                ipc_log_string(*(param_2 + 0x9a8),"Invalid IBI device\n");
                if (*(param_2 + 8) == 0) {
                    _printk(0x8000ba7);
                }
                else {
                    _dev_err(*(param_2 + 8),"Invalid IBI device\n");
                }
                iVar11 = *(param_2 + 8);
                if (iVar11 != 0) {
                    arg2 = "Invalid IBI device\n";
code_r0x08005de0:
                    sym.i3c_trace_log(iVar11,arg2,uVar10,param_4);
                }
            }
            else {
                iVar8 = i3c_generic_ibi_get_free_slot(*(*(iVar11 + 0x18) + 8));
                if (iVar8 == 0) {
                    ipc_log_string(*(param_2 + 0x9a8),"no free slot\n");
                    if (*(param_2 + 8) == 0) {
                        _printk(0x800177e);
                    }
                    else {
                        _dev_err(*(param_2 + 8),"no free slot\n");
                    }
                    iVar11 = *(param_2 + 8);
                    if (iVar11 != 0) {
                        arg2 = "no free slot\n";
                        goto code_r0x08005de0;
                    }
                }
                else {
                    if (*(param_2 + 0xa58) != 0) {
                        uVar10 = 0;
                        uVar9 = 0x1828;
                        do {
                            if ((uVar5 >> (uVar10 & 0x1f) & 1) != 0) {
                                uVar6 = sym.readl_relaxed(*(param_2 + 0xa50) + (uVar9 - 0x24));
                                *(param_2 + 0xac8) = uVar6;
                                uVar6 = sym.readl_relaxed(*(param_2 + 0xa50) + uVar9);
                                *(param_2 + 0xacc) = uVar6;
                                uVar6 = sym.readl_relaxed(*(param_2 + 0xa50) + (uVar9 - 0x20));
                                *(param_2 + 0xad0) = uVar6;
                                if (*(iVar8 + 0x40) != 0) {
                                    memcpy(*(iVar8 + 0x40),param_2 + 0xad0,*(*(iVar11 + 0x68) + 0x24));
                                }
                                uVar1 = *(*(iVar11 + 0x68) + 0x24);
                                uVar2 = *(param_2 + 0xac8) >> 8 & 7;
                                if (uVar1 <= uVar2) {
                                    uVar2 = uVar1;
                                }
                                *(iVar8 + 0x38) = uVar2;
                                ipc_log_string(*(param_2 + 0x9a8),"IBI: info: 0x%x, ts: 0x%x, Data: 0x%x\n",
                                               *(param_2 + 0xac8),*(param_2 + 0xacc),*(param_2 + 0xad0));
                                if (*(param_2 + 8) != 0) {
                                    sym.i3c_trace_log(*(param_2 + 8),0x80014e7,*(param_2 + 0xac8),*(param_2 + 0xacc))
                                    ;
                                }
                            }
                            uVar10 = uVar10 + 1;
                            uVar9 = uVar9 + 0x80;
                        } while (uVar10 < *(param_2 + 0xa58));
                    }
                    i3c_master_queue_ibi(iVar11,iVar8);
                }
            }
            sym.writel_relaxed(uVar5,*(param_2 + 0xa50) + 0x1014);
        }
        if (uVar4 == 0) {
            bVar3 = false;
            goto code_r0x08005d10;
        }
        sym.writel_relaxed(arg3,*(param_2 + 0xa50) + 0x100c);
        uVar4 = uVar4 & 1;
joined_r0x08005d04:
        if (uVar4 == 0) goto code_r0x08005d1c;
    }
    complete(param_2 + 0xa70);
code_r0x08005d1c:
    _raw_spin_unlock_irqrestore(param_2 + 0xa68,uVar7);
    return 1;
}


// ===== sym.trace_raw_output_i3c_log_info.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x08003518 (size 8) =====

void sym.trace_raw_output_i3c_log_info.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"%s: %s\n",iVar2 + *(iVar2 + 8),iVar2 + *(iVar2 + 0xc));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.__bpf_trace_i3c_log_info.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x08003520 (size 8) =====

void sym.__bpf_trace_i3c_log_info.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2();
    return;
}


// ===== sym.trace_event_raw_event_i3c_log_info.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x08003528 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08003820)

void sym.trace_event_raw_event_i3c_log_info.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt
               (int64_t param_1,char *param_2,int64_t *param_3)

{
    int64_t *piVar1;
    char *pcVar2;
    ulong *puVar3;
    int iVar4;
    ulong uVar5;
    code *pcVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t *piVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uchar auStack_130 [8];
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    uint uStack_104;
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar12 = *(param_1 + 0x48);
    if ((uVar12 >> 8 & 1) == 0) {
        piVar11 = param_3;
        if ((uVar12 >> 7 & 1) != 0) {
            piVar11 = NULL;
            event_triggers_call(param_1,0,0,0);
        }
        if (((uVar12 >> 6 & 1) != 0) ||
           (((uVar12 >> 9 & 1) != 0 && (uVar8 = trace_event_ignore_this_pid(param_1), (uVar8 & 1) != 0))))
        goto code_r0x080036f0;
    }
    pcVar2 = "(null)";
    if (param_2 != NULL) {
        pcVar2 = param_2;
    }
    iVar7 = strlen(pcVar2);
    piVar11 = iVar7 + 0x101 + 0x10;
    iVar9 = trace_event_buffer_reserve(&uStack_78,param_1);
    if (iVar9 != 0) {
        *(iVar9 + 8) = iVar7 * 0x10000 + 0x10010;
        *(iVar9 + 0xc) = iVar7 + 0x11U | 0x1000000;
        strcpy(iVar9 + 0x10,pcVar2);
        piVar11 = *param_3;
        puVar3 = param_3[1];
        uStack_88 = puVar3[2];
        uStack_80 = puVar3[3];
        uStack_98 = *puVar3;
        uStack_90 = puVar3[1];
        iVar7 = vsnprintf(iVar9 + (iVar7 + 0x11U & 0xffff),0x100,piVar11,&uStack_98);
        if (0xff < iVar7) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8003728);
            (*pcVar6)();
        }
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x080036f0:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return;
    }
    auVar13 = __stack_chk_fail();
    iVar10 = auVar13._0_8_;
    *extraout_x18 = sym.perf_trace_i3c_log_info;
    pcStack_e8 = sym.perf_trace_i3c_log_info;
    iVar9 = sp_el0;
    pcVar2 = "(null)";
    if (auVar13._8_8_ != NULL) {
        pcVar2 = auVar13._8_8_;
    }
    iStack_f8 = *(iVar9 + 0x5e0);
    iStack_100 = 0;
    uStack_104 = 0;
    puStack_f0 = &stack0xffffffffffffffc0;
    iVar7 = strlen(pcVar2);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(iVar10 + 0x78);
    if ((*(iVar10 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar4 = (iVar7 + 0x11cU & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar4,&iStack_100,&uStack_104);
        if (iVar9 != 0) {
            uVar8 = _trace_event_raw_init & 0x3f;
            *(iStack_100 + 0xe8) = &puStack_f0;
            *(iStack_100 + 0xf8) = auStack_130;
            *(iStack_100 + 0x100) = ~(-1L << uVar8) & 0x8003730;
            *(iStack_100 + 0x108) = 5;
            *(iVar9 + 8) = iVar7 * 0x10000 + 0x10010;
            *(iVar9 + 0xc) = iVar7 + 0x11U | 0x1000000;
            strcpy(iVar9 + 0x10,pcVar2);
            puVar3 = piVar11[1];
            uStack_118 = puVar3[2];
            uStack_110 = puVar3[3];
            uStack_128 = *puVar3;
            uStack_120 = puVar3[1];
            iVar7 = vsnprintf(iVar9 + (iVar7 + 0x11U & 0xffff),0x100,*piVar11,&uStack_128);
            if (0xff < iVar7) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x80038d0);
                (*pcVar6)();
            }
            perf_trace_run_bpf_submit(iVar9,iVar4,uStack_104,iVar10,1,iStack_100,piVar1,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_f8) {
        __stack_chk_fail();
        uVar5 = tpidr_el2;
        *extraout_x18_00 = 0x80038d8;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_i3c_log_info.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x08003530 (size 8) =====

void sym.perf_trace_i3c_log_info.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt(int64_t param_1,char *param_2,ulong *param_3)

{
    int64_t *piVar1;
    char *pcVar2;
    uint64_t uVar3;
    ulong *puVar4;
    int iVar5;
    ulong uVar6;
    code *pcVar7;
    ulong in_tmp_ldXn;
    int iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auStack_90 [8];
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    uint uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    pcVar2 = "(null)";
    if (param_2 != NULL) {
        pcVar2 = param_2;
    }
    iStack_58 = *(iVar9 + 0x5e0);
    iStack_60 = 0;
    uStack_64 = 0;
    iVar8 = strlen(pcVar2);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar5 = (iVar8 + 0x11cU & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar5,&iStack_60,&uStack_64);
        if (iVar9 != 0) {
            uVar10 = -1L << (_trace_event_raw_init & 0x3f);
            uVar3 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar10 | unaff_x30;
            }
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            *(iStack_60 + 0xf8) = auStack_90;
            *(iStack_60 + 0x100) = uVar3;
            *(iStack_60 + 0x108) = 5;
            *(iVar9 + 8) = iVar8 * 0x10000 + 0x10010;
            *(iVar9 + 0xc) = iVar8 + 0x11U | 0x1000000;
            strcpy(iVar9 + 0x10,pcVar2);
            puVar4 = param_3[1];
            uStack_78 = puVar4[2];
            uStack_70 = puVar4[3];
            uStack_88 = *puVar4;
            uStack_80 = puVar4[1];
            iVar8 = vsnprintf(iVar9 + (iVar8 + 0x11U & 0xffff),0x100,*param_3,&uStack_88);
            if (0xff < iVar8) {
    //WARNING: Does not return
                pcVar7 = SoftwareBreakpoint(0x800,0x80038d0);
                (*pcVar7)();
            }
            perf_trace_run_bpf_submit(iVar9,iVar5,uStack_64,param_1,1,iStack_60,piVar1,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail();
    uVar6 = tpidr_el2;
    *extraout_x18 = 0x80038d8;
    bpf_trace_run2(in_tmp_ldXn);
    return;
}


// ===== sym.geni_i3c_master_recycle_ibi_slot.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x08003538 (size 8) =====

void sym.geni_i3c_master_recycle_ibi_slot.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i3c_generic_ibi_recycle_slot(*(*(param_1 + 0x18) + 8));
    return;
}


// ===== sym.geni_i3c_master_detach_i3c_dev.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x08003540 (size 8) =====

void sym.geni_i3c_master_detach_i3c_dev.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt(int64_t param_1)

{
    *(param_1 + 0x18) = 0;
    return;
}


// ===== sym.geni_i3c_master_free_ibi.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x08003548 (size 8) =====

void sym.geni_i3c_master_free_ibi.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x10);
    iVar2 = *(param_1 + 0x18);
    if ((*(iVar1 + 0x9d8) != '\0') || (*(iVar1 + 0x9d9) != '\0')) {
        sym.qcom_geni_i3c_ibi_unconf(iVar1 + -0x70);
        uVar3 = _raw_spin_lock_irqsave(iVar1 + 0x9f8);
        *(*(iVar1 + 0x9f0) + *(iVar2 + 2) * 8) = 0;
        *(iVar2 + 2) = 0xffff;
        _raw_spin_unlock_irqrestore(iVar1 + 0x9f8,uVar3);
        i3c_generic_ibi_free_pool(*(iVar2 + 8));
    }
    return;
}


// ===== sym.geni_i3c_master_supports_ccc_cmd.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x08003550 (size 8) =====

ulong sym.geni_i3c_master_supports_ccc_cmd.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt
                (int64_t param_1,int64_t param_2,ulong param_3,int64_t param_4)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 1;
    switch(*(param_2 + 1)) {
    case 0:
    case 1:
    case 2:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0x20:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x86:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
    case 0x8c:
    case 0x8d:
    case 0x8e:
    case 0x8f:
    case 0x90:
    case 0x91:
    case 0x94:
    case 0x95:
        break;
    default:
        ipc_log_string(*(param_1 + 0x938),"%s: Unsupported cmnd\n","geni_i3c_master_supports_ccc_cmd");
        uVar1 = 0;
        if (*(param_1 + -0x68) != 0) {
            sym.i3c_trace_log(*(param_1 + -0x68),0x8000c4c,0x800128f,param_4);
            uVar1 = 0;
        }
    }
    return uVar1;
}


// ===== sym.geni_i3c_master_send_ccc_cmd.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x08003558 (size 8) =====

char * sym.geni_i3c_master_send_ccc_cmd.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt
                 (int64_t param_1,char *param_2,char *param_3,char *param_4)

{
    char cVar1;
    uint16_t uVar2;
    uchar uVar3;
    bool bVar4;
    bool bVar5;
    uint32_t uVar6;
    int iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    char *pcVar10;
    uint64_t arg4;
    uint8_t uVar11;
    int64_t iVar12;
    int64_t *piVar13;
    uint32_t uVar14;
    int64_t iVar15;
    ulong uVar16;
    uint uVar17;
    uint64_t uVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    int64_t *piVar19;
    char *unaff_x21;
    int64_t iVar20;
    char *unaff_x22;
    char *pcVar21;
    int64_t *unaff_x24;
    char *unaff_x25;
    char *unaff_x26;
    char *unaff_x27;
    uint64_t arg4_00;
    uint64_t unaff_x28;
    ulong unaff_x30;
    uchar auVar22 [16];
    uint uStack_138;
    uint uStack_134;
    uint32_t uStack_130;
    int64_t iStack_128;
    uchar *puStack_120;
    code *pcStack_118;
    uint64_t uStack_110;
    char *pcStack_108;
    char *pcStack_100;
    char *pcStack_f8;
    int64_t *piStack_f0;
    char *pcStack_e8;
    char *pcStack_e0;
    char *pcStack_d8;
    char *pcStack_d0;
    int64_t iStack_c8;
    char *pcStack_b8;
    int64_t *piStack_b0;
    uint64_t uStack_a8;
    int64_t iStack_a0;
    ulong uStack_98;
    uint32_t uStack_90;
    uint uStack_88;
    ulong uStack_84;
    uint64_t uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    if ((param_2[1] < '\0') || (*(param_2 + 4) == 1)) {
        unaff_x19 = param_1 + -0x70;
        uVar6 = sym.i3c_geni_runtime_get_mutex_lock(unaff_x19);
        pcVar21 = uVar6;
        if (uVar6 == 0) {
            sym.qcom_geni_i3c_conf(unaff_x19);
            uVar6 = *(param_2 + 4);
            if (uVar6 != 0) {
                uVar18 = 0;
                unaff_x24 = param_1 + 0x868;
                piStack_b0 = param_1 + 0x8d0;
                unaff_x22 = "assigning addr:0x%x for pid:x:%x\n";
                pcStack_b8 = param_2;
                iStack_a0 = param_1;
                do {
                    unaff_x26 = "PID 0x:%x matched with boardinfo\n";
                    unaff_x21 = "i3c entdaa read\n";
                    uVar8 = uVar18;
                    if (uVar8 < uVar6 - 1) {
                        uVar11 = param_2[1];
code_r0x08006d08:
                        uVar6 = 4;
                    }
                    else {
                        uVar11 = param_2[1];
                        if (uVar11 == 7) goto code_r0x08006d08;
                        uVar6 = 0;
                    }
                    iVar15 = uVar8;
                    uStack_90 = uVar6 | uVar11 << 0x10 | 0x1000000;
                    iVar12 = *(param_2 + 8);
                    if (uVar11 < '\0') {
                        uStack_90 = uStack_90 | (*(iVar12 + iVar15 * 0x18) & 0x7f) << 9;
                        if (*param_2 == '\0') {
                            if (uVar8 == 0) {
                                uVar17 = 0xd;
                                if (*(iVar12 + 8) != 0) {
                                    uVar17 = 0x11;
                                }
                                goto code_r0x08006dac;
                            }
                            uStack_98 = 0x900000001;
                        }
                        else {
                            if (uVar8 == 0) {
                                uVar17 = 0x12;
code_r0x08006dac:
                                uStack_98 = CONCAT44(uVar17,1);
                                goto code_r0x08006db0;
                            }
                            uStack_98 = 0xa00000001;
                        }
                    }
                    else {
                        uVar17 = 0xe;
                        if (*(iVar12 + iVar15 * 0x18 + 8) != 0) {
                            uVar17 = 0x10;
                        }
                        uStack_98 = CONCAT44(uVar17,1);
                        if (uVar8 != 0) goto code_r0x08006db8;
code_r0x08006db0:
                        uStack_90 = uStack_90 | 0x2000000;
                    }
code_r0x08006db8:
                    iVar12 = iVar12 + iVar15 * 0x18;
                    uVar16 = *(iVar12 + 0x10);
                    uVar2 = *(iVar12 + 8);
                    *(param_1 + 0x9a8) = *param_2 != '\0';
                    *(param_1 + 0x9a0) = uVar16;
                    *(param_1 + 0x9ac) = uVar2;
                    uStack_a8 = uVar18;
                    uVar6 = sym._i3c_geni_execute_command(unaff_x19,&uStack_98);
                    if (uVar6 != 0) {
                        pcVar21 = uVar6;
                        goto code_r0x08007288;
                    }
                    if (param_2[1] == '\a') {
                        do {
                            uStack_78 = 0;
                            uStack_70 = 0;
                            uStack_88 = 1;
                            ipc_log_string(*(param_1 + 0x938),"i3c entdaa read\n");
                            if (*(param_1 + -0x68) != 0) {
                                sym.i3c_trace_log(*(param_1 + -0x68),0x8000d61,param_3,param_4);
                            }
                            uStack_84 = 0x300010400000002;
                            *(param_1 + 0x9a8) = 0x800000001;
                            *(param_1 + 0x9a0) = &uStack_70;
                            iVar7 = sym._i3c_geni_execute_command(unaff_x19,&uStack_88);
                            param_2 = pcStack_b8;
                            if (iVar7 != 0) goto code_r0x08006cc0;
                            uVar3 = uStack_70;
                            uVar11 = uStack_70._1_1_;
                            unaff_x28 = uStack_70._1_1_;
                            unaff_x27 = (uStack_70 & 0xff) << 0x28 | unaff_x28 << 0x20 |
                                        (uStack_70 >> 0x10 & 0xff) << 0x18 | (uStack_70 >> 0x18 & 0xff) << 0x10 |
                                        (uStack_70 >> 0x20 & 0xff) << 8 | uStack_70 >> 0x28 & 0xff;
                            for (piVar19 = *unaff_x24; piVar19 != unaff_x24; piVar19 = *piVar19) {
                                if (unaff_x27 == piVar19[3]) {
                                    param_3 = unaff_x27;
                                    ipc_log_string(*(param_1 + 0x938),"PID 0x:%x matched with boardinfo\n");
                                    if (*(param_1 + -0x68) != 0) {
                                        param_3 = unaff_x27;
                                        sym.i3c_trace_log(*(param_1 + -0x68),0x8001416,unaff_x27,param_4);
                                    }
                                    break;
                                }
                            }
                            if (piVar19 == NULL) {
                                ipc_log_string(*(param_1 + 0x938),"Invalid i3cboardinfo\n");
                                param_2 = pcStack_b8;
                                if (*(param_1 + -0x68) != 0) {
                                    sym.i3c_trace_log(*(param_1 + -0x68),0x800063b,param_3,param_4);
                                    param_2 = pcStack_b8;
                                }
                                goto code_r0x08006cc0;
                            }
                            uVar6 = *(piVar19 + 2);
                            if (0x7d < uVar6 - 1) {
                                uVar6 = 0;
                            }
                            pcVar21 = uVar6;
                            uVar6 = i3c_master_get_free_addr(iStack_a0,pcVar21);
                            unaff_x25 = uVar6;
                            if (uVar6 < 0) {
                                param_3 = "geni_i3c_perform_daa";
                                param_4 = pcVar21;
                                ipc_log_string(*(param_1 + 0x938),"%s: Asked addr:%d not free, ret:%d\n",
                                               "geni_i3c_perform_daa",pcVar21,unaff_x25);
                                iVar12 = *(param_1 + -0x68);
                                param_2 = pcStack_b8;
                                if (iVar12 == 0) goto code_r0x08006cc0;
                                pcVar10 = "%s: Asked addr:%d not free, ret:%d\n";
                                goto code_r0x08006cb8;
                            }
                            unaff_x28 = CONCAT11(uVar3,uVar11);
                            *(piVar19 + 2) = uVar6;
                            param_4 = unaff_x27;
                            if ((uVar6 >> 7 & 1) == 0) {
                                if ((*(unaff_x19 + (uVar6 >> 6 & 3) * 8 + 0xa28) & 1 << (uVar6 & 0x1f)) == 0) {
                                    pcVar21 = unaff_x25;
                                    uVar8 = uVar6;
                                    if (uVar6 != (uVar6 & 0xff)) goto code_r0x0800703c;
                                }
                                else {
                                    uVar6 = uVar6 & 0xff;
                                    ipc_log_string(*(param_1 + 0x938),"%s:slot addr:%d not free, try new addr:%d\n",
                                                   "geni_i3c_perform_daa",uVar6,uVar6 + 1);
                                    if (*(param_1 + -0x68) != 0) {
                                        sym.i3c_trace_log(*(param_1 + -0x68),0x800153c,0x8001527,uVar6);
                                    }
                                    uVar8 = i3c_master_get_free_addr(iStack_a0,uVar6 + 1);
                                    unaff_x25 = uVar8;
                                    if (uVar8 < 0) {
                                        param_3 = unaff_x25;
                                        ipc_log_string(*(param_1 + 0x938),
                                                       "error:%d during get_free_addr, pid:0x:%x, mid:0x%x\n",unaff_x25
                                                       ,unaff_x27,unaff_x28);
                                        param_2 = pcStack_b8;
                                        if (*(param_1 + -0x68) != 0) {
                                            param_3 = uVar8;
                                            param_4 = unaff_x27;
                                            sym.i3c_trace_log(*(param_1 + -0x68),0x80011ae,param_3,unaff_x27);
                                            param_2 = pcStack_b8;
                                        }
                                        goto code_r0x08006cc0;
                                    }
                                    *(piVar19 + 2) = uVar8;
                                    pcVar21 = unaff_x25;
                                    if (uVar8 != (uVar8 & 0xff)) goto code_r0x0800703c;
                                }
code_r0x08006ff0:
                                param_3 = unaff_x25;
                                ipc_log_string(*(param_1 + 0x938),
                                               "assign requested addr:0x%x for pid:0x:%x, mid:0x%x\n",unaff_x25,
                                               unaff_x27,unaff_x28);
                                if (*(param_1 + -0x68) != 0) {
                                    param_3 = unaff_x25;
                                    param_4 = unaff_x27;
                                    sym.i3c_trace_log(*(param_1 + -0x68),0x800057e,unaff_x25,unaff_x27);
                                }
                            }
                            else {
                                uVar8 = uVar6;
                                pcVar21 = uVar8;
                                if (uVar6 == (uVar6 & 0xff)) goto code_r0x08006ff0;
code_r0x0800703c:
                                uVar8 = pcVar21;
                                param_3 = unaff_x25;
                                if ((pcVar21 & 0xff) == 0) {
                                    ipc_log_string(*(param_1 + 0x938),"assigning addr:0x%x for pid:x:%x\n");
                                    if (*(param_1 + -0x68) != 0) {
                                        param_3 = unaff_x25;
                                        param_4 = unaff_x27;
                                        sym.i3c_trace_log(*(param_1 + -0x68),0x800131f,unaff_x25,unaff_x27);
                                    }
                                    uVar8 = 0;
                                }
                                else {
                                    for (piVar13 = *piStack_b0; piVar13 != piStack_b0; piVar13 = *piVar13) {
                                        if (piVar13[4] == unaff_x27) {
                                            uVar11 = *(piVar13 + 0x2b);
                                            param_3 = uVar11;
                                            uVar8 = uVar11;
                                            ipc_log_string(*(param_1 + 0x938),
                                                           "assigning requested addr:0x%x for pid:0x:%x\n");
                                            if (*(param_1 + -0x68) != 0) {
                                                param_3 = uVar8;
                                                param_4 = unaff_x27;
                                                sym.i3c_trace_log(*(param_1 + -0x68),0x80015aa,param_3,unaff_x27);
                                            }
                                            bVar4 = true;
                                            uVar6 = uVar11;
                                            if (*(piVar19 + 2) != '\0') goto code_r0x080070f4;
                                            goto code_r0x080070f0;
                                        }
                                    }
                                    ipc_log_string(*(param_1 + 0x938),"new dev: assigning addr:0x%x for pid:x:%x\n");
                                    if (*(param_1 + -0x68) != 0) {
                                        param_3 = unaff_x25;
                                        param_4 = unaff_x27;
                                        sym.i3c_trace_log(*(param_1 + -0x68),0x80017ad,unaff_x25,unaff_x27);
                                    }
                                }
                            }
                            bVar4 = false;
                            uVar6 = uVar8;
                            if (*(piVar19 + 2) == '\0') {
code_r0x080070f0:
                                uVar8 = uVar6;
                                *(piVar19 + 2) = uVar8;
                            }
code_r0x080070f4:
                            uVar6 = uVar8 & 0xff;
                            if (!bVar4 && -1 < uVar8) {
                                iVar12 = unaff_x19 + (uVar6 >> 6) * 8;
                                *(iVar12 + 0xa28) = *(iVar12 + 0xa28) | 1 << (uVar8 & 0x1f);
                            }
                            uStack_78._0_1_ = uVar8 << 1;
                            __sw_hweight8(uVar8 & 0x7f);
                            uVar8 = uVar8 & 1;
                            uVar11 = uVar8;
                            uVar14 = uVar6;
                            if (uVar6 != 0) {
                                do {
                                    uVar8 = uVar14 >> 1 & 1 ^ uVar8;
                                    uVar11 = uVar8;
                                    bVar4 = 1 < uVar14;
                                    uVar14 = uVar14 >> 1;
                                } while (bVar4);
                            }
                            uStack_78 = CONCAT71(uStack_78._1_7_,uVar11 | uVar6 << 1) ^ 1;
                            uStack_84 = 0x500000400000001;
                            *(param_1 + 0x9a0) = &uStack_78;
                            *(param_1 + 0x9a8) = 0x100000000;
                            uVar6 = sym._i3c_geni_execute_command(unaff_x19,&uStack_88);
                        } while (uVar6 == 0);
                        pcVar21 = uVar6;
                        param_3 = "geni_i3c_perform_daa";
                        param_4 = pcVar21;
                        ipc_log_string(*(param_1 + 0x938),"%s: Failed:%d to assign DA:%d\n","geni_i3c_perform_daa",
                                       pcVar21,uStack_78 & 0xff);
                        iVar12 = *(param_1 + -0x68);
                        param_2 = pcStack_b8;
                        if (iVar12 != 0) {
                            pcVar10 = "%s: Failed:%d to assign DA:%d\n";
code_r0x08006cb8:
                            param_3 = "geni_i3c_perform_daa";
                            sym.i3c_trace_log(iVar12,pcVar10,0x8001527,pcVar21);
                            param_4 = pcVar21;
                            param_2 = pcStack_b8;
                        }
                    }
code_r0x08006cc0:
                    unaff_x26 = "PID 0x:%x matched with boardinfo\n";
                    unaff_x21 = "i3c entdaa read\n";
                    uVar6 = *(param_2 + 4);
                    uVar8 = uStack_a8 + 1;
                    uVar18 = uVar8;
                } while (uVar8 < uVar6);
            }
            pcVar21 = NULL;
code_r0x08007288:
            param_3 = pcVar21;
            ipc_log_string(*(param_1 + 0x938),"i3c ccc: txn ret:%d\n");
            if (*(param_1 + -0x68) == 0) {
                param_2 = NULL;
            }
            else {
                param_3 = pcVar21;
                sym.i3c_trace_log(*(param_1 + -0x68),0x80007ee,pcVar21,param_4);
                param_2 = *(param_1 + -0x68);
            }
            uVar16 = ktime_get_mono_fast_ns();
            *(param_2 + 0x218) = uVar16;
            __pm_runtime_suspend(*(param_1 + -0x68),0xd);
            mutex_unlock(param_1 + 0x960);
        }
    }
    else {
        pcVar21 = 0xffffffea;
    }
    uVar6 = param_3;
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return pcVar21;
    }
    auVar22 = __stack_chk_fail();
    pcVar10 = auVar22._8_8_;
    *extraout_x18 = sym.geni_i3c_master_priv_xfers;
    pcStack_118 = sym.geni_i3c_master_priv_xfers;
    iVar12 = sp_el0;
    iStack_128 = *(iVar12 + 0x5e0);
    uVar18 = uVar6 - 1;
    puStack_120 = &stack0xffffffffffffffa0;
    uStack_110 = unaff_x28;
    pcStack_108 = unaff_x27;
    pcStack_100 = unaff_x26;
    pcStack_f8 = unaff_x25;
    piStack_f0 = unaff_x24;
    pcStack_e8 = pcVar21;
    pcStack_e0 = unaff_x22;
    pcStack_d8 = unaff_x21;
    pcStack_d0 = param_2;
    iStack_c8 = unaff_x19;
    if (uVar6 < 1) {
        pcVar21 = NULL;
    }
    else {
        iVar12 = *(auVar22._0_8_ + 0x10);
        piVar19 = iVar12 + -0x70;
        uVar9 = sym.i3c_geni_runtime_get_mutex_lock(piVar19);
        pcVar21 = uVar9 & 0xffffffff;
        if (uVar9 == 0) {
            uVar8 = sym.readl_relaxed(*piVar19 + 0x908);
            if ((~uVar8 & 3) != 0) {
                ipc_log_string(*(iVar12 + 0x938),"%s:IO lines:0x%x not in good state\n","geni_i3c_master_priv_xfers",
                               uVar8);
                if (*(iVar12 + -0x68) != 0) {
                    sym.i3c_trace_log(*(iVar12 + -0x68),0x800108c,0x8000651,uVar8);
                }
            }
            sym.qcom_geni_i3c_conf(piVar19);
            bVar4 = true;
            uVar9 = 0;
            do {
                arg4_00 = uVar9 < uVar18;
                uVar8 = uVar9 < uVar18;
                uStack_138 = 1;
                if (0x40 < *(pcVar10 + 2)) {
                    uStack_138 = 2;
                }
                uStack_130 = 0x2000000;
                if (bVar4 == false) {
                    uStack_130 = 0;
                }
                arg4 = uVar8;
                uStack_130 = uVar8 << 2 | (*(auVar22._0_8_ + 0x2b) & 0x7f) << 9 | uStack_130;
                ipc_log_string(*(iVar12 + 0x938),"%s: stall:%d,use_7e:%d, nxfers:%d,i:%d,m_param:0x%x,rnw:%d\n",
                               "geni_i3c_master_priv_xfers",arg4,bVar4,uVar6,uVar9 & 0xffffffff,uStack_130,
                               *pcVar10);
                if (*(iVar12 + -0x68) != 0) {
                    sym.i3c_trace_log(*(iVar12 + -0x68),0x8001341,0x8000651,arg4_00);
                    arg4 = arg4_00;
                }
                cVar1 = *pcVar10;
                bVar4 = uVar18 <= uVar9;
                uVar2 = *(pcVar10 + 2);
                uStack_134 = 9;
                if (cVar1 != '\0') {
                    uStack_134 = 10;
                }
                *(iVar12 + 0x9a0) = *(pcVar10 + 8);
                *(iVar12 + 0x9ac) = uVar2;
                *(iVar12 + 0x9a8) = cVar1 != '\0';
                uVar8 = sym._i3c_geni_execute_command(piVar19,&uStack_138);
                pcVar21 = uVar8;
                if (uVar8 != 0) break;
                pcVar10 = pcVar10 + 0x18;
                bVar5 = uVar6 - 1 != uVar9;
                uVar9 = uVar9 + 1;
            } while (bVar5);
            ipc_log_string(*(iVar12 + 0x938),"i3c priv: txn ret:%d\n",pcVar21);
            if (*(iVar12 + -0x68) == 0) {
                iVar15 = 0;
            }
            else {
                sym.i3c_trace_log(*(iVar12 + -0x68),0x8000c7d,pcVar21,arg4);
                iVar15 = *(iVar12 + -0x68);
            }
            uVar16 = ktime_get_mono_fast_ns();
            *(iVar15 + 0x218) = uVar16;
            __pm_runtime_suspend(*(iVar12 + -0x68),0xd);
            mutex_unlock(iVar12 + 0x960);
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) != iStack_128) {
        iVar12 = __stack_chk_fail();
        *extraout_x18_00 = sym.geni_i3c_master_attach_i2c_dev;
        iVar20 = *(iVar12 + 0x10);
        iVar15 = devm_kmalloc(*(iVar20 + -0x68),0x10,0xdc0);
        if (iVar15 == 0) {
            pcVar21 = 0xfffffff4;
        }
        else {
            ipc_log_string(*(iVar20 + 0x938),"%s %d\n","geni_i3c_master_attach_i2c_dev",1);
            if (*(iVar20 + -0x68) != 0) {
                sym.i3c_trace_log(*(iVar20 + -0x68),0x8001700,0x80010b0,1);
            }
            pcVar21 = NULL;
            *(iVar12 + 0x18) = iVar15;
        }
        return pcVar21;
    }
    return pcVar21;
}


// ===== sym.geni_i3c_master_priv_xfers.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x08003560 (size 8) =====

uint64_t sym.geni_i3c_master_priv_xfers.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt
                   (int64_t param_1,char *param_2,uint32_t param_3)

{
    char cVar1;
    uint16_t uVar2;
    bool bVar3;
    bool bVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    ulong uVar7;
    uint64_t arg4;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *arg1;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    uint uStack_78;
    uint uStack_74;
    uint32_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    uVar11 = param_3 - 1;
    if (param_3 < 1) {
        uVar12 = 0;
    }
    else {
        iVar8 = *(param_1 + 0x10);
        arg1 = iVar8 + -0x70;
        uVar6 = sym.i3c_geni_runtime_get_mutex_lock(arg1);
        uVar12 = uVar6 & 0xffffffff;
        if (uVar6 == 0) {
            uVar5 = sym.readl_relaxed(*arg1 + 0x908);
            if ((~uVar5 & 3) != 0) {
                ipc_log_string(*(iVar8 + 0x938),"%s:IO lines:0x%x not in good state\n","geni_i3c_master_priv_xfers",
                               uVar5);
                if (*(iVar8 + -0x68) != 0) {
                    sym.i3c_trace_log(*(iVar8 + -0x68),0x800108c,0x8000651,uVar5);
                }
            }
            sym.qcom_geni_i3c_conf(arg1);
            bVar3 = true;
            uVar6 = 0;
            do {
                uVar12 = uVar6 < uVar11;
                uVar5 = uVar6 < uVar11;
                uStack_78 = 1;
                if (0x40 < *(param_2 + 2)) {
                    uStack_78 = 2;
                }
                uStack_70 = 0x2000000;
                if (bVar3 == false) {
                    uStack_70 = 0;
                }
                arg4 = uVar5;
                uStack_70 = uVar5 << 2 | (*(param_1 + 0x2b) & 0x7f) << 9 | uStack_70;
                ipc_log_string(*(iVar8 + 0x938),"%s: stall:%d,use_7e:%d, nxfers:%d,i:%d,m_param:0x%x,rnw:%d\n",
                               "geni_i3c_master_priv_xfers",arg4,bVar3,param_3,uVar6 & 0xffffffff,uStack_70,
                               *param_2);
                if (*(iVar8 + -0x68) != 0) {
                    sym.i3c_trace_log(*(iVar8 + -0x68),0x8001341,0x8000651,uVar12);
                    arg4 = uVar12;
                }
                cVar1 = *param_2;
                bVar3 = uVar11 <= uVar6;
                uVar2 = *(param_2 + 2);
                uStack_74 = 9;
                if (cVar1 != '\0') {
                    uStack_74 = 10;
                }
                *(iVar8 + 0x9a0) = *(param_2 + 8);
                *(iVar8 + 0x9ac) = uVar2;
                *(iVar8 + 0x9a8) = cVar1 != '\0';
                uVar5 = sym._i3c_geni_execute_command(arg1,&uStack_78);
                uVar12 = uVar5;
                if (uVar5 != 0) break;
                param_2 = param_2 + 0x18;
                bVar4 = param_3 - 1 != uVar6;
                uVar6 = uVar6 + 1;
            } while (bVar4);
            ipc_log_string(*(iVar8 + 0x938),"i3c priv: txn ret:%d\n",uVar12);
            if (*(iVar8 + -0x68) == 0) {
                iVar9 = 0;
            }
            else {
                sym.i3c_trace_log(*(iVar8 + -0x68),0x8000c7d,uVar12,arg4);
                iVar9 = *(iVar8 + -0x68);
            }
            uVar7 = ktime_get_mono_fast_ns();
            *(iVar9 + 0x218) = uVar7;
            __pm_runtime_suspend(*(iVar8 + -0x68),0xd);
            mutex_unlock(iVar8 + 0x960);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return uVar12;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.geni_i3c_master_attach_i2c_dev;
    iVar10 = *(iVar8 + 0x10);
    iVar9 = devm_kmalloc(*(iVar10 + -0x68),0x10,0xdc0);
    if (iVar9 == 0) {
        uVar11 = 0xfffffff4;
    }
    else {
        ipc_log_string(*(iVar10 + 0x938),"%s %d\n","geni_i3c_master_attach_i2c_dev",1);
        if (*(iVar10 + -0x68) != 0) {
            sym.i3c_trace_log(*(iVar10 + -0x68),0x8001700,0x80010b0,1);
        }
        uVar11 = 0;
        *(iVar8 + 0x18) = iVar9;
    }
    return uVar11;
}


// ===== sym.geni_i3c_master_attach_i2c_dev.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt @ 0x08003568 (size 8) =====

ulong sym.geni_i3c_master_attach_i2c_dev.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x10);
    iVar1 = devm_kmalloc(*(iVar3 + -0x68),0x10,0xdc0);
    if (iVar1 == 0) {
        uVar2 = 0xfffffff4;
    }
    else {
        ipc_log_string(*(iVar3 + 0x938),"%s %d\n","geni_i3c_master_attach_i2c_dev",1);
        if (*(iVar3 + -0x68) != 0) {
            sym.i3c_trace_log(*(iVar3 + -0x68),0x8001700,0x80010b0,1);
        }
        uVar2 = 0;
        *(param_1 + 0x18) = iVar1;
    }
    return uVar2;
}


// ===== sym.__traceiter_i3c_log_info @ 0x08003570 (size 104) =====

ulong sym.__traceiter_i3c_log_info(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8008cf8;
    piVar1 = *0x8008cf8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2,arg3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.trace_event_raw_event_i3c_log_info @ 0x080035e0 (size 336) =====

//WARNING: Removing unreachable block (ram,0x08003820)

void sym.trace_event_raw_event_i3c_log_info(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    int64_t *piVar2;
    ulong *puVar3;
    int iVar4;
    ulong uVar5;
    code *pcVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong *puVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uchar auStack_130 [8];
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    uint uStack_104;
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar12 = *(arg1 + 0x48);
    if ((uVar12 >> 8 & 1) == 0) {
        puVar11 = arg3;
        if ((uVar12 >> 7 & 1) != 0) {
            puVar11 = NULL;
            event_triggers_call(arg1,0,0,0);
        }
        if (((uVar12 >> 6 & 1) != 0) ||
           (((uVar12 >> 9 & 1) != 0 && (uVar8 = trace_event_ignore_this_pid(arg1), (uVar8 & 1) != 0))))
        goto code_r0x080036f0;
    }
    pcVar1 = "(null)";
    if (arg2 != 0) {
        pcVar1 = arg2;
    }
    iVar7 = strlen(pcVar1);
    puVar11 = iVar7 + 0x101 + 0x10;
    iVar9 = trace_event_buffer_reserve(&uStack_78,arg1);
    if (iVar9 != 0) {
        *(iVar9 + 8) = iVar7 * 0x10000 + 0x10010;
        *(iVar9 + 0xc) = iVar7 + 0x11U | 0x1000000;
        strcpy(iVar9 + 0x10,pcVar1);
        puVar11 = *arg3;
        puVar3 = *(arg3 + 8);
        uStack_88 = puVar3[2];
        uStack_80 = puVar3[3];
        uStack_98 = *puVar3;
        uStack_90 = puVar3[1];
        iVar7 = vsnprintf(iVar9 + (iVar7 + 0x11U & 0xffff),0x100,puVar11,&uStack_98);
        if (0xff < iVar7) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8003728);
            (*pcVar6)();
        }
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x080036f0:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return;
    }
    auVar13 = __stack_chk_fail();
    iVar10 = auVar13._0_8_;
    *extraout_x18 = sym.perf_trace_i3c_log_info;
    pcStack_e8 = sym.perf_trace_i3c_log_info;
    iVar9 = sp_el0;
    pcVar1 = "(null)";
    if (auVar13._8_8_ != NULL) {
        pcVar1 = auVar13._8_8_;
    }
    iStack_f8 = *(iVar9 + 0x5e0);
    iStack_100 = 0;
    uStack_104 = 0;
    puStack_f0 = &stack0xffffffffffffffc0;
    iVar7 = strlen(pcVar1);
    iVar9 = tpidr_el1;
    piVar2 = iVar9 + *(iVar10 + 0x78);
    if ((*(iVar10 + 0x80) != 0) || (*piVar2 != 0)) {
        iVar4 = (iVar7 + 0x11cU & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar4,&iStack_100,&uStack_104);
        if (iVar9 != 0) {
            uVar8 = _trace_event_raw_init & 0x3f;
            *(iStack_100 + 0xe8) = &puStack_f0;
            *(iStack_100 + 0xf8) = auStack_130;
            *(iStack_100 + 0x100) = ~(-1L << uVar8) & 0x8003730;
            *(iStack_100 + 0x108) = 5;
            *(iVar9 + 8) = iVar7 * 0x10000 + 0x10010;
            *(iVar9 + 0xc) = iVar7 + 0x11U | 0x1000000;
            strcpy(iVar9 + 0x10,pcVar1);
            puVar3 = puVar11[1];
            uStack_118 = puVar3[2];
            uStack_110 = puVar3[3];
            uStack_128 = *puVar3;
            uStack_120 = puVar3[1];
            iVar7 = vsnprintf(iVar9 + (iVar7 + 0x11U & 0xffff),0x100,*puVar11,&uStack_128);
            if (0xff < iVar7) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x80038d0);
                (*pcVar6)();
            }
            perf_trace_run_bpf_submit(iVar9,iVar4,uStack_104,iVar10,1,iStack_100,piVar2,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_f8) {
        __stack_chk_fail();
        uVar5 = tpidr_el2;
        *extraout_x18_00 = 0x80038d8;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_i3c_log_info @ 0x08003730 (size 436) =====

void sym.perf_trace_i3c_log_info(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong *puVar4;
    int iVar5;
    ulong uVar6;
    code *pcVar7;
    ulong in_tmp_ldXn;
    int iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auStack_90 [8];
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    uint uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    uVar2 = 0x8001680;
    if (arg2 != 0) {
        uVar2 = arg2;
    }
    iStack_58 = *(iVar9 + 0x5e0);
    iStack_60 = 0;
    uStack_64 = 0;
    iVar8 = strlen(uVar2);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar5 = (iVar8 + 0x11cU & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar5,&stack0xffffffffffffffa0,&stack0xffffffffffffff9c);
        if (iVar9 != 0) {
            uVar10 = -1L << (_trace_event_raw_init & 0x3f);
            uVar3 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar10 | unaff_x30;
            }
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            *(iStack_60 + 0xf8) = &stack0xffffffffffffff70;
            *(iStack_60 + 0x100) = uVar3;
            *(iStack_60 + 0x108) = 5;
            *(iVar9 + 8) = iVar8 * 0x10000 + 0x10010;
            *(iVar9 + 0xc) = iVar8 + 0x11U | 0x1000000;
            strcpy(iVar9 + 0x10,uVar2);
            puVar4 = *(arg3 + 8);
            uStack_78 = puVar4[2];
            uStack_70 = puVar4[3];
            uStack_88 = *puVar4;
            uStack_80 = puVar4[1];
            iVar8 = vsnprintf(iVar9 + (iVar8 + 0x11U & 0xffff),0x100,*arg3,&stack0xffffffffffffff78);
            if (0xff < iVar8) {
    //WARNING: Does not return
                pcVar7 = SoftwareBreakpoint(0x800,0x80038d0);
                (*pcVar7)();
            }
            perf_trace_run_bpf_submit(iVar9,iVar5,uStack_64,arg1,1,iStack_60,piVar1,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail();
    uVar6 = tpidr_el2;
    *extraout_x18 = 0x80038d8;
    bpf_trace_run2(in_tmp_ldXn);
    return;
}


// ===== sym.__bpf_trace_i3c_log_info @ 0x080038e4 (size 36) =====

void sym.__bpf_trace_i3c_log_info(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2();
    return;
}


// ===== sym.i3c_trace_log @ 0x08003908 (size 304) =====

void sym.i3c_trace_log(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong extraout_x8;
    int64_t *piVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    int64_t iStack_48;
    uchar *puStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    puStack_40 = &stack0xffffffffffffff98;
    iStack_48 = arg2;
    while (iVar2 = sp_el0, *(iVar2 + 0x5e0) != iStack_38) {
        __stack_chk_fail();
        iVar2 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1) !=
            0) {
            iVar2 = sp_el0;
            *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
            piVar4 = *0x8008cf8;
            piVar3 = *0x8008cf8;
            while (piVar3 != NULL) {
                (**piVar4)(piVar4[1],extraout_x8,&iStack_48);
                piVar4 = piVar4 + 3;
                piVar3 = *piVar4;
            }
            iVar1 = *(iVar2 + 0x10) + -1;
            *(iVar2 + 0x10) = iVar1;
            if ((iVar1 == 0) || (*(iVar2 + 0x10) == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return;
}


// ===== sym.geni_i3c_se_dump_dbg_regs @ 0x08003a50 (size 816) =====

void sym.geni_i3c_se_dump_dbg_regs(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint uVar7;
    uint uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint uVar11;
    uint uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint uVar15;
    uint uVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar18 = sym.readl_relaxed(arg2 + 0x600);
    uVar1 = sym.readl_relaxed(arg2 + 0x610);
    sym.readl_relaxed(arg2 + 0x630);
    uVar2 = sym.readl_relaxed(arg2 + 0x640);
    uVar3 = sym.readl_relaxed(arg2 + 0x40);
    uVar4 = sym.readl_relaxed(arg2 + 0x908);
    uVar5 = sym.readl_relaxed(arg2 + 0xc40);
    uVar6 = sym.readl_relaxed(arg2 + 0xd40);
    uVar7 = sym.readl_relaxed(arg2 + 0x804);
    uVar8 = sym.readl_relaxed(arg2 + 0x800);
    uVar9 = sym.readl_relaxed(arg2 + 0xe40);
    uVar10 = sym.readl_relaxed(arg2 + 0x604);
    uVar11 = sym.readl_relaxed(arg2 + 0xd3c);
    uVar12 = sym.readl_relaxed(arg2 + 0xd54);
    uVar13 = sym.readl_relaxed(arg2 + 0xc3c);
    uVar14 = sym.readl_relaxed(arg2 + 0xc54);
    uVar15 = sym.readl_relaxed(arg2 + 0x614);
    uVar16 = sym.readl_relaxed(arg2 + 0x644);
    uVar19 = sym.readl_relaxed(arg2 + 0xc48);
    uVar20 = sym.readl_relaxed(arg2 + 0xd48);
    uVar17 = sym.readl_relaxed(arg2 + 0xc30);
    uVar21 = sym.readl_relaxed(arg2 + 0xc34);
    ipc_log_string(arg3,"%s: m_cmd0:0x%x, m_irq_status:0x%x, geni_status:0x%x, geni_ios:0x%x\n",
                   "geni_i3c_se_dump_dbg_regs",uVar18 & 0xffffffff,uVar1,uVar3,uVar4);
    if (*(arg1 + 8) != 0) {
        sym.i3c_trace_log(*(arg1 + 8),0x800163b,0x800123e,uVar18 & 0xffffffff);
    }
    ipc_log_string(arg3,"dma_rx_irq:0x%x, dma_tx_irq:0x%x, rx_fifo_sts:0x%x, tx_fifo_sts:0x%x\n",uVar6,uVar5,uVar7,
                   uVar8);
    if (*(arg1 + 8) != 0) {
        sym.i3c_trace_log(*(arg1 + 8),0x80005cc,uVar6,uVar5);
    }
    ipc_log_string(arg3,"se_dma_dbg:0x%x, m_cmd_ctrl:0x%x, dma_rxlen:0x%x, dma_rxlen_in:0x%x\n",uVar9,uVar10,uVar11
                   ,uVar12);
    if (*(arg1 + 8) != 0) {
        sym.i3c_trace_log(*(arg1 + 8),0x8000bef,uVar9,uVar10);
    }
    ipc_log_string(arg3,"dma_txlen:0x%x, dma_txlen_in:0x%x s_irq_status:0x%x\n",uVar13,uVar14,uVar2);
    if (*(arg1 + 8) != 0) {
        sym.i3c_trace_log(*(arg1 + 8),0x8000e22,uVar13,uVar14);
    }
    ipc_log_string(arg3,"dma_txirq_en:0x%x, dma_rxirq_en:0x%x geni_m_irq_en:0x%x geni_s_irq_en:0x%x\n",
                   uVar19 & 0xffffffff,uVar20 & 0xffffffff,uVar15,uVar16);
    if (*(arg1 + 8) != 0) {
        sym.i3c_trace_log(*(arg1 + 8),0x80003e0,uVar19 & 0xffffffff,uVar20 & 0xffffffff);
    }
    ipc_log_string(arg3,"geni_dma_tx_ptr_l:0x%x, geni_dma_tx_ptr_h:0x%x\n",uVar17,uVar21 & 0xffffffff);
    if (*(arg1 + 8) != 0) {
        sym.i3c_trace_log(*(arg1 + 8),0x8000f34,uVar17,uVar21 & 0xffffffff);
    }
    return;
}


// ===== sym.trace_raw_output_i3c_log_info @ 0x08003d80 (size 120) =====

void sym.trace_raw_output_i3c_log_info(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"%s: %s\n",iVar2 + *(iVar2 + 8),iVar2 + *(iVar2 + 0xc));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.readl_relaxed @ 0x08003df8 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8003dfc);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8003e30);
    return uVar1;
}


// ===== sym.geni_i3c_probe @ 0x08003e68 (size 3668) =====

uint64_t sym.geni_i3c_probe(int64_t arg1)

{
    int64_t *piVar1;
    uint uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t *arg1_00;
    char *pcVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    char *pcVar9;
    char *pcVar10;
    int64_t arg3;
    uint *arg3_00;
    int64_t *piVar11;
    char *in_x3;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar13;
    int64_t *piVar14;
    ulong unaff_x30;
    char acStack_80 [8];
    char acStack_78 [8];
    char acStack_70 [8];
    uchar uStack_68;
    ulong uStack_67;
    ulong uStack_5f;
    ulong uStack_57;
    uchar uStack_4f;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    piVar7 = arg1 + 0x10;
    pcVar10 = 0xdc0;
    uStack_4f = 0;
    uStack_57 = 0;
    uStack_5f = 0;
    uStack_67 = 0;
    acStack_80[0] = str.M___I3C_GENI_Probe_start[0];
    acStack_80[1] = str.M___I3C_GENI_Probe_start[1];
    acStack_80[2] = str.M___I3C_GENI_Probe_start[2];
    acStack_80[3] = str.M___I3C_GENI_Probe_start[3];
    acStack_80[4] = str.M___I3C_GENI_Probe_start[4];
    acStack_80[5] = str.M___I3C_GENI_Probe_start[5];
    acStack_80[6] = str.M___I3C_GENI_Probe_start[6];
    acStack_80[7] = str.M___I3C_GENI_Probe_start[7];
    acStack_78[0] = str.M___I3C_GENI_Probe_start[8];
    acStack_78[1] = str.M___I3C_GENI_Probe_start[9];
    acStack_78[2] = str.M___I3C_GENI_Probe_start[10];
    acStack_78[3] = str.M___I3C_GENI_Probe_start[0xb];
    acStack_78[4] = str.M___I3C_GENI_Probe_start[0xc];
    acStack_78[5] = str.M___I3C_GENI_Probe_start[0xd];
    acStack_78[6] = str.M___I3C_GENI_Probe_start[0xe];
    acStack_78[7] = str.M___I3C_GENI_Probe_start[0xf];
    uStack_68 = 0;
    acStack_70[0] = str.M___I3C_GENI_Probe_start[0x10];
    acStack_70[1] = str.M___I3C_GENI_Probe_start[0x11];
    acStack_70[2] = str.M___I3C_GENI_Probe_start[0x12];
    acStack_70[3] = str.M___I3C_GENI_Probe_start[0x13];
    acStack_70[4] = str.M___I3C_GENI_Probe_start[0x14];
    acStack_70[5] = str.M___I3C_GENI_Probe_start[0x15];
    acStack_70[6] = str.M___I3C_GENI_Probe_start[0x16];
    acStack_70[7] = str.M___I3C_GENI_Probe_start[0x17];
    arg1_00 = devm_kmalloc(piVar7,0xb88);
    if (arg1_00 == NULL) {
        pcVar5 = 0xfffffff4;
        goto code_r0x080044bc;
    }
    iVar8 = *(arg1 + 0x80);
    piVar14 = arg1_00 + 1;
    *piVar14 = piVar7;
    if (iVar8 == 0) {
        iVar8 = *piVar7;
    }
    iVar8 = ipc_log_context_create(4,iVar8,0);
    arg1_00[0x135] = iVar8;
    if (iVar8 == 0) {
        _dev_info(piVar7,"Error creating IPC Log\n");
    }
    iVar8 = _segment.ehdr;
    if (_segment.ehdr < 2) {
        _segment.ehdr = _segment.ehdr + 1;
        *(obj.i3c_geni_dev + iVar8 * 8) = arg1_00;
    }
    arg3 = 0;
    piVar1 = arg1_00 + 0x135;
    iVar8 = platform_get_resource(arg1,0x200);
    if (iVar8 == 0) {
        ipc_log_string(*piVar1,"Err getting IO region\n");
        if (*piVar14 == 0) {
            pcVar5 = 0xffffffea;
        }
        else {
            sym.i3c_trace_log(*piVar14,0x8000e57,arg3,in_x3);
            pcVar5 = 0xffffffea;
        }
code_r0x0800446c:
        pcVar10 = pcVar5 & 0xffffffff;
        ipc_log_string(*piVar1,"Error:%d i3c_geni_rsrcs_init\n");
        iVar8 = *piVar14;
        if (iVar8 != 0) {
            pcVar9 = "Error:%d i3c_geni_rsrcs_init\n";
code_r0x08004490:
            pcVar10 = pcVar5 & 0xffffffff;
            sym.i3c_trace_log(iVar8,pcVar9,pcVar10,in_x3);
        }
    }
    else {
        pcVar5 = devm_ioremap_resource(piVar7,iVar8);
        *arg1_00 = pcVar5;
        if (pcVar5 < 0xfffffffffffff001) {
            iVar8 = *(arg1 + 0x70);
            arg1_00[1] = piVar7;
            iVar12 = *(iVar8 + 0x98);
            arg1_00[0x16f] = iVar8;
            arg1_00[2] = iVar12;
            if (iVar12 == 0) {
                ipc_log_string(*piVar1,"SE Wrapper is NULL, deferring probe\n");
                if (*piVar14 == 0) {
                    pcVar5 = 0xfffffdfb;
                }
                else {
                    sym.i3c_trace_log(*piVar14,0x8001a8a,arg3,in_x3);
                    pcVar5 = 0xfffffdfb;
                }
            }
            else {
                iVar8 = 1;
                arg3_00 = arg1_00 + 0xa04;
                iVar4 = device_property_read_u32_array(piVar7,"se-clock-frequency");
                if (iVar4 != 0) {
                    ipc_log_string(*piVar1,"SE clk freq not specified, default to 100 MHz.\n");
                    if (*piVar14 != 0) {
                        sym.i3c_trace_log(*piVar14,0x8001942,arg3_00,iVar8);
                    }
                    *(arg1_00 + 0xa04) = 100000000;
                }
                in_x3 = 0x1;
                piVar11 = arg1_00 + 0x170;
                iVar4 = device_property_read_u32_array(piVar7,"max_i3c_devs");
                if (iVar4 != 0) {
                    ipc_log_string(*piVar1,"max_i3c_devs is undefined, default to two\n");
                    if (*piVar14 != 0) {
                        sym.i3c_trace_log(*piVar14,0x80019a7,piVar11,in_x3);
                    }
                    *(arg1_00 + 0x170) = 1;
                }
                uVar3 = geni_icc_get(arg1_00,"qup-memory");
                if (uVar3 == 0) {
                    *(arg1_00 + 7) = 1;
                    *(arg1_00 + 9) = 1;
                    *(arg1_00 + 0xb) = 0x12c00;
                    ipc_log_string(arg1_00[0x135],"%s: GENI_TO_CORE:%d CPU_TO_GENI:%d GENI_TO_DDR:%d\n",
                                   "i3c_geni_rsrcs_init",1,1,0x12c00);
                    if (arg1_00[1] != 0) {
                        sym.i3c_trace_log(arg1_00[1],0x8000e6e,0x8001610,*(arg1_00 + 7));
                    }
                    uVar3 = geni_icc_set_bw(arg1_00);
                    if (uVar3 == 0) {
                        in_x3 = 0x1;
                        piVar11 = arg1_00 + 0x141;
                        iVar4 = device_property_read_u32_array(piVar7,"dfs-index");
                        if (iVar4 != 0) {
                            *(arg1_00 + 0x141) = 0xf;
                        }
                        uVar6 = devm_pinctrl_get(piVar7);
                        arg1_00[0x16b] = uVar6;
                        if (uVar6 < 0xfffffffffffff001) {
                            uVar6 = pinctrl_lookup_state(uVar6,"default");
                            arg1_00[0x16c] = uVar6;
                            if (uVar6 < 0xfffffffffffff001) {
                                uVar6 = pinctrl_lookup_state(arg1_00[0x16b],"sleep");
                                arg1_00[0x16d] = uVar6;
                                if (uVar6 < 0xfffffffffffff001) {
                                    uVar6 = pinctrl_lookup_state(arg1_00[0x16b],"disable");
                                    arg1_00[0x163] = uVar6;
                                    if (uVar6 < 0xfffffffffffff001) goto code_r0x08003f64;
                                    piVar13 = arg1_00 + 0x163;
                                    ipc_log_string(*piVar1,"Error no pinctrl disable config specified\n");
                                    iVar8 = *piVar14;
                                    if (iVar8 != 0) {
                                        pcVar10 = "Error no pinctrl disable config specified\n";
                                        goto code_r0x08004460;
                                    }
                                }
                                else {
                                    piVar13 = arg1_00 + 0x16d;
                                    ipc_log_string(*piVar1,"Error no pinctrl sleep config specified\n");
                                    iVar8 = *piVar14;
                                    if (iVar8 != 0) {
                                        pcVar10 = "Error no pinctrl sleep config specified\n";
                                        goto code_r0x08004460;
                                    }
                                }
                            }
                            else {
                                piVar13 = arg1_00 + 0x16c;
                                ipc_log_string(*piVar1,"Error no pinctr default config specified\n");
                                iVar8 = *piVar14;
                                if (iVar8 != 0) {
                                    pcVar10 = "Error no pinctr default config specified\n";
                                    goto code_r0x08004460;
                                }
                            }
                        }
                        else {
                            piVar13 = arg1_00 + 0x16b;
                            ipc_log_string(*piVar1,"Error no pinctrl config specified\n");
                            iVar8 = *piVar14;
                            if (iVar8 != 0) {
                                pcVar10 = "Error no pinctrl config specified\n";
code_r0x08004460:
                                sym.i3c_trace_log(iVar8,pcVar10,piVar11,in_x3);
                            }
                        }
                        pcVar5 = *piVar13;
                        if (pcVar5 == 0) goto code_r0x08003f64;
                    }
                    else {
                        pcVar5 = uVar3;
                        in_x3 = pcVar5;
                        _dev_err(piVar7,"%s: icc set bw failed ret:%d\n","i3c_geni_rsrcs_init");
                    }
                }
                else {
                    pcVar5 = uVar3;
                    ipc_log_string(*piVar1,"geni_se_common_resources_init Failed:%d\n",pcVar5);
                    if (*piVar14 != 0) {
                        sym.i3c_trace_log(*piVar14,0x8000b17,pcVar5,in_x3);
                    }
                }
            }
            goto code_r0x0800446c;
        }
        if (pcVar5 != 0) goto code_r0x0800446c;
code_r0x08003f64:
        iVar8 = arg1_00[1];
        uVar6 = devm_clk_get(iVar8,"se-clk");
        arg1_00[3] = uVar6;
        if (uVar6 < 0xfffffffffffff001) {
            uVar6 = devm_clk_get(*(iVar8 + 0x60),"m-ahb");
            arg1_00[0x169] = uVar6;
            if (0xfffffffffffff000 < uVar6) {
                pcVar5 = uVar6 & 0xffffffff;
                ipc_log_string(*piVar1,"Error getting M AHB clk %d\n",pcVar5);
                if (*piVar14 == 0) {
                    _printk(0x80019d2,pcVar5);
                }
                else {
                    _dev_err(*piVar14,"Error getting M AHB clk %d\n",pcVar5);
                }
                iVar8 = *piVar14;
                if (iVar8 != 0) {
                    pcVar10 = "Error getting M AHB clk %d\n";
                    goto code_r0x08004688;
                }
                goto code_r0x08004690;
            }
            uVar6 = devm_clk_get(*(iVar8 + 0x60),"s-ahb");
            arg1_00[0x16a] = uVar6;
            if (0xfffffffffffff000 < uVar6) {
                pcVar5 = uVar6 & 0xffffffff;
                ipc_log_string(*piVar1,"Error getting S AHB clk %d\n",pcVar5);
                if (*piVar14 == 0) {
                    _printk(0x8000b5e,pcVar5);
                }
                else {
                    _dev_err(*piVar14,"Error getting S AHB clk %d\n",pcVar5);
                }
                iVar8 = *piVar14;
                if (iVar8 != 0) {
                    pcVar10 = "Error getting S AHB clk %d\n";
                    goto code_r0x08004688;
                }
                goto code_r0x08004690;
            }
code_r0x08003fbc:
            uVar3 = platform_get_irq(arg1,0);
            *(arg1_00 + 100) = uVar3;
            if (-1 < uVar3) {
                *(arg1_00 + 0x136) = 0;
                __init_swait_queue_head(arg1_00 + 0x137,"&x->wait",obj.init_completion.__key);
                __mutex_init(arg1_00 + 0x13a,"&gi3c->lock",obj.init_completion.__key);
                uVar2 = *(arg1_00 + 100);
                *(arg1_00 + 0x140) = 0;
                *(arg1 + 0xa8) = arg1_00;
                irq_modify_status(uVar2,0,0x1000);
                iVar8 = *(arg1 + 0x80);
                if (iVar8 == 0) {
                    iVar8 = *piVar7;
                }
                in_x3 = NULL;
                uVar3 = devm_request_threaded_irq
                                  (piVar7,*(arg1_00 + 100),sym.geni_i3c_irq.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt,0
                                   ,4,iVar8,arg1_00);
                if (uVar3 == 0) {
                    uVar3 = geni_icc_enable(arg1_00);
                    if (uVar3 == 0) {
                        uVar3 = geni_se_resources_on(arg1_00);
                        if (uVar3 == 0) {
                            uVar3 = sym.readl_relaxed(*arg1_00 + 0x68);
                            uVar3 = uVar3 >> 8 & 0xff;
                            if (uVar3 == 4) {
                                sym.geni_i3c_get_ver_info(arg1_00);
                                *(arg1_00 + 0x16e) = 4;
                                uVar3 = sym.readl_relaxed(*arg1_00 + 100);
                                if (uVar3 == 0) {
                                    uVar3 = sym.geni_se_get_tx_fifo_depth(arg1_00);
                                    uVar6 = uVar3;
                                    *(arg1_00 + 0xc) = uVar3 - 1;
                                    geni_se_init(arg1_00,uVar3 - 1,uVar6);
                                    in_x3 = 0x1;
                                    geni_se_config_packing(arg1_00,8,4,1,1,1);
                                    ipc_log_string(arg1_00[0x135],"%s: i3c_ibi_rsrcs_init()\n","geni_i3c_probe");
                                    if (arg1_00[1] != 0) {
                                        sym.i3c_trace_log(arg1_00[1],0x80016a9,0x8001723,in_x3);
                                    }
                                    uVar3 = sym.i3c_ibi_rsrcs_init(arg1_00,arg1);
                                    if (uVar3 == 0) {
                                        uVar3 = geni_se_resources_off(arg1_00);
                                        if (uVar3 != 0) {
                                            pcVar10 = uVar3;
                                            in_x3 = pcVar10;
                                            ipc_log_string(*piVar1,"%s: geni_se_resources_off failed%d\n",
                                                           "geni_i3c_probe");
                                            if (*piVar14 == 0) {
                                                _printk(0x8000f64,"geni_i3c_probe",pcVar10);
                                            }
                                            else {
                                                in_x3 = pcVar10;
                                                _dev_err(*piVar14,"%s: geni_se_resources_off failed%d\n",
                                                         "geni_i3c_probe");
                                            }
                                            if (*piVar14 != 0) {
                                                sym.i3c_trace_log(*piVar14,0x800145b,0x8001723,pcVar10);
                                                in_x3 = pcVar10;
                                            }
                                        }
                                        uVar3 = geni_icc_disable(arg1_00);
                                        if (uVar3 != 0) {
                                            pcVar10 = uVar3;
                                            in_x3 = pcVar10;
                                            ipc_log_string(*piVar1,"%s: geni_icc_disable failed%d\n","geni_i3c_probe")
                                            ;
                                            if (*piVar14 == 0) {
                                                _printk(0x8001921,"geni_i3c_probe",pcVar10);
                                            }
                                            else {
                                                in_x3 = pcVar10;
                                                _dev_err(*piVar14,"%s: geni_icc_disable failed%d\n","geni_i3c_probe");
                                            }
                                            if (*piVar14 != 0) {
                                                sym.i3c_trace_log(*piVar14,0x8000821,0x8001723,pcVar10);
                                                in_x3 = pcVar10;
                                            }
                                        }
                                        ipc_log_string(*piVar1,"i3c fifo/se-dma mode. fifo depth:%d\n",uVar6);
                                        iVar8 = 0;
                                        if (*piVar14 != 0) {
                                            sym.i3c_trace_log(*piVar14,0x8001732,uVar6,in_x3);
                                            iVar8 = *piVar14;
                                        }
                                        __pm_runtime_set_status(iVar8,2);
                                        pm_runtime_set_autosuspend_delay(arg1_00[1],0xfa);
                                        __pm_runtime_use_autosuspend(arg1_00[1],1);
                                        pm_runtime_enable(arg1_00[1]);
                                        uVar3 = sym.readl_relaxed(*arg1_00 + 0x908);
                                        if ((~uVar3 & 3) != 0) {
                                            ipc_log_string(*piVar1,"%s: IO lines:0x%x, Ensure bus power up\n",
                                                           "geni_i3c_probe",uVar3);
                                            if (*piVar14 != 0) {
                                                sym.i3c_trace_log(*piVar14,0x8001107,0x8001723,uVar3);
                                            }
                                        }
                                        in_x3 = NULL;
                                        uVar3 = i3c_master_register(arg1_00 + 0xe,piVar7,
                                                                    
                                                            reloc.geni_i3c_master_bus_init.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt
                                                            );
                                        if (uVar3 != 0) {
                                            pcVar5 = uVar3;
                                            if (uVar3 != 0xffffff95) {
                                                pcVar10 = pcVar5;
                                                ipc_log_string(*piVar1,"I3C master registration failed=%d\n");
                                                if (*piVar14 == 0) {
                                                    _printk(0x8001258,pcVar5);
                                                }
                                                else {
                                                    pcVar10 = pcVar5;
                                                    _dev_err(*piVar14,"I3C master registration failed=%d\n");
                                                }
                                                if (*piVar14 != 0) {
                                                    sym.i3c_trace_log(*piVar14,0x8000f8a,pcVar5,in_x3);
                                                    pcVar10 = pcVar5;
                                                }
                                                goto code_r0x08004924;
                                            }
                                            ipc_log_string(*piVar1,"Pass I3C master register failure=%d\n",0xffffff95)
                                            ;
                                            if (*piVar14 == 0) {
                                                _printk(0x80015e9,0xffffff95);
                                            }
                                            else {
                                                _dev_err(*piVar14,"Pass I3C master register failure=%d\n",0xffffff95);
                                            }
                                            if (*piVar14 != 0) {
                                                sym.i3c_trace_log(*piVar14,0x8000840,0xffffff95,in_x3);
                                            }
                                        }
                                        pcVar10 = arg1_00[0x126];
                                        in_x3 = arg1_00[0x127];
                                        ipc_log_string(arg1_00[0x135],"I3C bus freq:%ld, I2C bus fres:%ld\n");
                                        piVar7 = NULL;
                                        if (arg1_00[1] != 0) {
                                            pcVar10 = arg1_00[0x126];
                                            in_x3 = arg1_00[0x127];
                                            sym.i3c_trace_log(arg1_00[1],0x8000694,pcVar10,in_x3);
                                            piVar7 = arg1_00[1];
                                        }
                                        iVar8 = piVar7[0xe];
                                        if (iVar8 == 0) {
                                            iVar8 = *piVar7;
                                        }
                                        iVar8 = wakeup_source_register(piVar7,iVar8);
                                        arg1_00[0x162] = iVar8;
                                        if (iVar8 == 0) {
                                            ipc_log_string(*piVar1,"wakeup source registration failed\n");
                                            if (*piVar14 != 0) {
                                                sym.i3c_trace_log(*piVar14,0x8000996,pcVar10,in_x3);
                                            }
                                            geni_se_resources_off(arg1_00);
                                            pcVar5 = 0xfffffff4;
                                        }
                                        else {
                                            arg1_00[0x15c] = 0xfffffffe0;
                                            arg1_00[0x15d] = arg1_00 + 0x15d;
                                            arg1_00[0x15e] = arg1_00 + 0x15d;
                                            arg1_00[0x15f] =
                                                 sym.geni_i3c_hotjoin.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt;
                                            iVar8 = arg1_00[1][0xe];
                                            if (iVar8 == 0) {
                                                iVar8 = *arg1_00[1];
                                            }
                                            iVar8 = alloc_workqueue(0x80007c2,0,0,iVar8);
                                            arg1_00[0x15b] = iVar8;
                                            sym.geni_i3c_enable_hotjoin_irq(arg1_00,1);
                                            in_x3 = *arg1_00;
                                            snprintf(acStack_80,0x32,"M - I3C GENI driver_0x%x Complete");
                                            pcVar10 = NULL;
                                            ipc_log_string(arg1_00[0x135],"I3C probed:%d\n");
                                            if (arg1_00[1] == 0) {
                                                _printk(0x80008dd,0);
                                            }
                                            else {
                                                pcVar10 = NULL;
                                                _dev_err(arg1_00[1],"I3C probed:%d\n");
                                            }
                                            if (*piVar14 == 0) {
                                                pcVar5 = NULL;
                                            }
                                            else {
                                                pcVar10 = NULL;
                                                sym.i3c_trace_log(*piVar14,0x800137d,0,in_x3);
                                                pcVar5 = NULL;
                                            }
                                        }
                                        goto code_r0x080044bc;
                                    }
                                    pcVar5 = uVar3;
                                    pcVar10 = pcVar5;
                                    ipc_log_string(*piVar1,"Error: %d, i3c_ibi_rsrcs_init\n");
                                    if (*piVar14 != 0) {
                                        sym.i3c_trace_log(*piVar14,0x80012d4,pcVar5,in_x3);
                                        pcVar10 = pcVar5;
                                    }
                                }
                                else {
                                    pcVar5 = uVar3;
                                    pcVar10 = pcVar5;
                                    ipc_log_string(*piVar1,"Non supported mode %d\n");
                                    if (*piVar14 != 0) {
                                        sym.i3c_trace_log(*piVar14,0x8000a60,pcVar5,in_x3);
                                        pcVar10 = pcVar5;
                                    }
                                }
                            }
                            else {
                                ipc_log_string(*piVar1,"Invalid proto %d\n",uVar3);
                                iVar8 = 0;
                                if (*piVar14 != 0) {
                                    sym.i3c_trace_log(*piVar14,0x800042c,uVar3,in_x3);
                                    iVar8 = *piVar14;
                                }
                                pcVar10 = uVar3;
                                _dev_err(iVar8,"Invalid proto %d\n");
                            }
                            uVar3 = geni_se_resources_off(arg1_00);
                            if (uVar3 != 0) {
                                pcVar5 = uVar3;
                                in_x3 = pcVar5;
                                ipc_log_string(*piVar1,"%s: geni_se_resources_off failed%d\n","geni_i3c_probe");
                                if (*piVar14 == 0) {
                                    pcVar10 = pcVar5;
                                    _printk(0x8000f64,"geni_i3c_probe");
                                }
                                else {
                                    pcVar10 = "geni_i3c_probe";
                                    in_x3 = pcVar5;
                                    _dev_err(*piVar14,"%s: geni_se_resources_off failed%d\n");
                                }
                                if (*piVar14 != 0) {
                                    pcVar10 = "geni_i3c_probe";
                                    sym.i3c_trace_log(*piVar14,0x800145b,0x8001723,pcVar5);
                                    in_x3 = pcVar5;
                                }
                            }
                        }
                        else {
                            pcVar5 = uVar3;
                            pcVar10 = pcVar5;
                            ipc_log_string(*piVar1,"Error turning on resources %d\n");
                            if (*piVar14 != 0) {
                                sym.i3c_trace_log(*piVar14,0x80004b0,pcVar5,in_x3);
                                pcVar10 = pcVar5;
                            }
                        }
code_r0x08004924:
                        uVar3 = geni_icc_disable(arg1_00);
                        pcVar5 = uVar3;
                        if (uVar3 != 0) {
                            in_x3 = pcVar5;
                            ipc_log_string(*piVar1,"%s: geni_icc_disable failed%d\n","geni_i3c_probe");
                            if (*piVar14 == 0) {
                                pcVar10 = pcVar5;
                                _printk(0x8001921,"geni_i3c_probe");
                            }
                            else {
                                pcVar10 = "geni_i3c_probe";
                                in_x3 = pcVar5;
                                _dev_err(*piVar14,"%s: geni_icc_disable failed%d\n");
                            }
                            iVar8 = *piVar14;
                            if (iVar8 != 0) {
                                pcVar9 = "%s: geni_icc_disable failed%d\n";
                                goto code_r0x08004388;
                            }
                        }
                    }
                    else {
                        pcVar5 = uVar3;
                        pcVar10 = "geni_i3c_probe";
                        in_x3 = pcVar5;
                        ipc_log_string(*piVar1,"%s geni_icc_enable failed %d\n");
                        iVar8 = *piVar14;
                        if (iVar8 != 0) {
                            pcVar9 = "%s geni_icc_enable failed %d\n";
code_r0x08004388:
                            pcVar10 = "geni_i3c_probe";
                            in_x3 = pcVar5;
                            sym.i3c_trace_log(iVar8,pcVar9,0x8001723,pcVar5);
                        }
                    }
                }
                else {
                    pcVar5 = uVar3;
                    pcVar10 = *(arg1_00 + 100);
                    in_x3 = pcVar5;
                    ipc_log_string(arg1_00[0x135],"i3c irq failed:%d: err:%d\n");
                    if (arg1_00[1] != 0) {
                        pcVar10 = *(arg1_00 + 100);
                        in_x3 = pcVar5;
                        sym.i3c_trace_log(arg1_00[1],0x8000cf4,pcVar10,pcVar5);
                    }
                }
                goto code_r0x08004498;
            }
            pcVar5 = uVar3;
            pcVar10 = pcVar5;
            ipc_log_string(*piVar1,"IRQ error=%d for i3c-master-geni\n");
            iVar8 = *piVar14;
            if (iVar8 == 0) goto code_r0x08004498;
            pcVar9 = "IRQ error=%d for i3c-master-geni\n";
            goto code_r0x08004490;
        }
        pcVar5 = uVar6 & 0xffffffff;
        ipc_log_string(*piVar1,"Error getting SE Core clk %d\n",pcVar5);
        if (*piVar14 == 0) {
            _printk(0x800147f,pcVar5);
        }
        else {
            _dev_err(*piVar14,"Error getting SE Core clk %d\n",pcVar5);
        }
        iVar8 = *piVar14;
        if (iVar8 != 0) {
            pcVar10 = "Error getting SE Core clk %d\n";
code_r0x08004688:
            sym.i3c_trace_log(iVar8,pcVar10,pcVar5,in_x3);
        }
code_r0x08004690:
        if (pcVar5 == 0) goto code_r0x08003fbc;
        pcVar10 = pcVar5;
        ipc_log_string(*piVar1,"Error:%d i3c_geni_rsrcs_clk_init\n");
        iVar8 = *piVar14;
        if (iVar8 != 0) {
            pcVar9 = "Error:%d i3c_geni_rsrcs_clk_init\n";
            goto code_r0x08004490;
        }
    }
code_r0x08004498:
    ipc_log_string(*piVar1,"I3C probe failed\n");
    if (*piVar14 != 0) {
        sym.i3c_trace_log(*piVar14,0x800127d,pcVar10,in_x3);
    }
code_r0x080044bc:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return pcVar5 & 0xffffffff;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.geni_i3c_remove;
    iVar8 = *(iVar8 + 0xa8);
    sym.geni_i3c_enable_hotjoin_irq(iVar8,0);
    destroy_workqueue(*(iVar8 + 0xad8));
    wakeup_source_unregister(*(iVar8 + 0xb10));
    if (*(iVar8 + 0xa49) != '\0') {
        sym.qcom_geni_i3c_ibi_unconf(iVar8);
    }
    pm_runtime_force_suspend(*(iVar8 + 8));
    iVar4 = pinctrl_select_state(*(iVar8 + 0xb58),*(iVar8 + 0xb18));
    if (iVar4 != 0) {
        ipc_log_string(*(iVar8 + 0x9a8)," i3c: pinctrl_select_state failed\n");
        if (*(iVar8 + 8) != 0) {
            sym.i3c_trace_log(*(iVar8 + 8),0x8001438,pcVar10,in_x3);
        }
    }
    uVar6 = i3c_master_unregister(iVar8 + 0x70);
    if (*(iVar8 + 0x9a8) != 0) {
        ipc_log_context_destroy(*(iVar8 + 0x9a8));
    }
    if (0 < _segment.ehdr) {
        memset(obj.i3c_geni_dev,0,_segment.ehdr << 3);
    }
    _segment.ehdr = 0;
    return uVar6 & 0xffffffff;
}


// ===== sym.geni_i3c_remove @ 0x08004cbc (size 220) =====

uint sym.geni_i3c_remove(int64_t arg1)

{
    int iVar1;
    uint uVar2;
    int64_t in_x2;
    int64_t in_x3;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xa8);
    sym.geni_i3c_enable_hotjoin_irq(arg1_00,0);
    destroy_workqueue(*(arg1_00 + 0xad8));
    wakeup_source_unregister(*(arg1_00 + 0xb10));
    if (*(arg1_00 + 0xa49) != '\0') {
        sym.qcom_geni_i3c_ibi_unconf(arg1_00);
    }
    pm_runtime_force_suspend(*(arg1_00 + 8));
    iVar1 = pinctrl_select_state(*(arg1_00 + 0xb58),*(arg1_00 + 0xb18));
    if (iVar1 != 0) {
        ipc_log_string(*(arg1_00 + 0x9a8)," i3c: pinctrl_select_state failed\n");
        if (*(arg1_00 + 8) != 0) {
            sym.i3c_trace_log(*(arg1_00 + 8),0x8001438,in_x2,in_x3);
        }
    }
    uVar2 = i3c_master_unregister(arg1_00 + 0x70);
    if (*(arg1_00 + 0x9a8) != 0) {
        ipc_log_context_destroy(*(arg1_00 + 0x9a8));
    }
    if (0 < _segment.ehdr) {
        memset(obj.i3c_geni_dev,0,_segment.ehdr << 3);
    }
    _segment.ehdr = 0;
    return uVar2;
}


// ===== sym.geni_i3c_irq @ 0x08004d98 (size 1124) =====

//WARNING: Type propagation algorithm not settling

ulong sym.geni_i3c_irq(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    unkuint3 Var5;
    bool bVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    int iVar11;
    uint uVar12;
    ulong uVar13;
    uint64_t arg1_00;
    uint64_t in_x3;
    int iVar14;
    int iVar15;
    int64_t iVar16;
    int64_t iVar17;
    int64_t iVar18;
    ulong *in_x18;
    uint64_t arg4;
    uint32_t uVar19;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar13 = _raw_spin_lock_irqsave(arg1 + 0xa00);
    uVar7 = sym.readl_relaxed(*arg1 + 0x610);
    sym.readl_relaxed(*arg1 + 0x614);
    uVar8 = sym.readl_relaxed(*arg1 + 0x804);
    uVar9 = sym.readl_relaxed(*arg1 + 0xc40);
    uVar10 = sym.readl_relaxed(*arg1 + 0xd40);
    arg4 = uVar10;
    iVar11 = sym.readl_relaxed(*arg1 + 600);
    if (((uVar7 & 0x3e2e) == 0) && ((uVar10 & 0x340) == 0)) {
        if (iVar11 == 0) {
            if ((((uVar7 & 0xc000000) == 0) || (*(arg1 + 0xa18) != 1)) || (*(arg1 + 0xa10) == 0)) {
                if ((((uVar7 >> 0x1e & 1) != 0) && (*(arg1 + 0xa18) == 0)) &&
                   ((*(arg1 + 0xa10) != 0 && (*(arg1 + 0x60) != 0)))) {
                    iVar14 = *(arg1 + 0xa1c);
                    uVar8 = 0;
                    iVar15 = *(arg1 + 0xa20);
                    do {
                        if (iVar15 < iVar14) {
                            iVar18 = iVar15;
                            iVar17 = *(arg1 + 0xa10);
                            iVar1 = iVar18 + 1;
                            iVar16 = iVar14;
                            *(arg1 + 0xa20) = iVar1;
                            uVar3 = *(iVar17 + iVar18);
                            arg1_00 = uVar3;
                            if (iVar1 < iVar16) {
                                iVar2 = iVar18 + 2;
                                *(arg1 + 0xa20) = iVar2;
                                uVar4 = CONCAT11(*(iVar17 + iVar1),uVar3);
                                arg1_00 = uVar4;
                                if (iVar2 < iVar16) {
                                    iVar18 = iVar18 + 3;
                                    *(arg1 + 0xa20) = iVar18;
                                    Var5 = CONCAT12(*(iVar17 + iVar2),uVar4);
                                    arg1_00 = Var5;
                                    if (iVar18 < iVar16) {
                                        *(arg1 + 0xa20) = iVar15 + 4;
                                        arg1_00 = CONCAT13(*(iVar17 + iVar18),Var5);
                                    }
                                }
                            }
                        }
                        else {
                            arg1_00 = 0;
                        }
                        sym.writel_relaxed(arg1_00,*arg1 + 0x700);
                        iVar15 = *(arg1 + 0xa20);
                        iVar14 = *(arg1 + 0xa1c);
                        if (iVar15 == iVar14) goto code_r0x08004f2c;
                        uVar8 = uVar8 + 1;
                    } while (uVar8 < *(arg1 + 0x60));
                }
            }
            else if ((uVar8 & 0x1ffffff) != 0) {
                uVar19 = 1;
                do {
                    uVar12 = sym.readl_relaxed(*arg1 + 0x780);
                    iVar14 = *(arg1 + 0xa20);
                    iVar15 = *(arg1 + 0xa1c);
                    if (iVar14 < iVar15) {
                        *(arg1 + 0xa20) = iVar14 + 1;
                        *(*(arg1 + 0xa10) + iVar14) = uVar12;
                        iVar14 = *(arg1 + 0xa20);
                        iVar15 = *(arg1 + 0xa1c);
                        if (iVar15 <= iVar14) goto code_r0x08005024;
                        *(arg1 + 0xa20) = iVar14 + 1;
                        *(*(arg1 + 0xa10) + iVar14) = uVar12 >> 8;
                        iVar14 = *(arg1 + 0xa20);
                        if (iVar14 < *(arg1 + 0xa1c)) {
                            *(arg1 + 0xa20) = iVar14 + 1;
                            *(*(arg1 + 0xa10) + iVar14) = uVar12 >> 0x10;
                            iVar14 = *(arg1 + 0xa20);
                            iVar15 = *(arg1 + 0xa1c);
                            if (iVar15 <= iVar14) goto code_r0x08005024;
                            *(arg1 + 0xa20) = iVar14 + 1;
                            *(*(arg1 + 0xa10) + iVar14) = uVar12 >> 0x18;
                            if (*(arg1 + 0xa20) == *(arg1 + 0xa1c)) break;
                        }
                        else if (iVar14 == *(arg1 + 0xa1c)) break;
                    }
                    else {
code_r0x08005024:
                        if (iVar14 == iVar15) break;
                    }
                    bVar6 = uVar19 < (uVar8 & 0x1ffffff);
                    uVar19 = uVar19 + 1;
                } while (bVar6);
            }
        }
        else {
            in_x3 = uVar10;
            ipc_log_string(*(arg1 + 0x9a8),"i3c dma tx:0x%x, dma rx:0x%x\n",uVar9);
            if (*(arg1 + 8) != 0) {
                in_x3 = arg4;
                sym.i3c_trace_log(*(arg1 + 8),0x8000865,uVar9,arg4);
            }
        }
    }
    else {
        if ((uVar7 >> 9 & 1) != 0) {
            sym.geni_i3c_err(arg1,0);
        }
        if ((uVar7 >> 10 & 1) != 0) {
            sym.geni_i3c_err(arg1,1);
        }
        if ((uVar7 >> 0xb & 1) != 0) {
            sym.geni_i3c_err(arg1,2);
        }
        if ((uVar7 >> 0xc & 1) != 0) {
            sym.geni_i3c_err(arg1,3);
        }
        if ((uVar7 >> 0xd & 1) != 0) {
            sym.geni_i3c_err(arg1,4);
        }
        if ((uVar7 >> 1 & 1) != 0) {
            sym.geni_i3c_err(arg1,6);
        }
        if ((uVar7 >> 2 & 1) != 0) {
            sym.geni_i3c_err(arg1,7);
        }
        if ((uVar7 >> 5 & 1) != 0) {
            sym.geni_i3c_err(arg1,8);
        }
        if (iVar11 == 0) {
code_r0x08004f2c:
            sym.writel_relaxed(0,*arg1 + 0x80c);
        }
    }
    if (uVar7 != 0) {
        sym.writel_relaxed(uVar7,*arg1 + 0x618);
    }
    if (iVar11 != 0) {
        if (uVar9 != 0) {
            sym.writel_relaxed(uVar9,*arg1 + 0xc44);
        }
        if (uVar10 != 0) {
            sym.writel_relaxed(arg4,*arg1 + 0xd44);
        }
    }
    if ((uVar7 & 0x21) == 0) {
        if ((((uVar9 & 1) == 0) && ((uVar10 & 9) == 0)) && ((uVar9 >> 3 & 1) == 0)) goto code_r0x0800510c;
        ipc_log_string(*(arg1 + 0x9a8),"%s: DMA mode xfer completed\n","geni_i3c_irq");
        if (*(arg1 + 8) != 0) {
            sym.i3c_trace_log(*(arg1 + 8),0x8001b3a,0x800149f,in_x3);
        }
    }
    else {
        sym.writel_relaxed(0,*arg1 + 0x80c);
    }
    complete(arg1 + 0x9b0);
code_r0x0800510c:
    _raw_spin_unlock_irqrestore(arg1 + 0xa00,uVar13);
    return 1;
}


// ===== sym.geni_i3c_get_ver_info @ 0x080051fc (size 272) =====

void sym.geni_i3c_get_ver_info(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = geni_se_get_qup_hw_version();
    ipc_log_string(*(arg1 + 0x9a8),"%s hw_ver: 0x%x Major:%d Minor:%d step:%d\n","geni_i3c_get_ver_info",uVar1,
                   uVar1 >> 0x1c,uVar1 >> 0x10 & 0xfff,uVar1 & 0xffff);
    if (*(arg1 + 8) != 0) {
        sym.i3c_trace_log(*(arg1 + 8),0x800093e,0x8000d0f,uVar1);
    }
    uVar1 = sym.readl_relaxed(*arg1 + 0x68);
    *(arg1 + 0xb2c) = uVar1 & 0xff;
    uVar1 = sym.readl_relaxed(*arg1 + 0x6c);
    *(arg1 + 0xb30) = uVar1 & 0xff;
    ipc_log_string(*(arg1 + 0x9a8),"%s:FW Ver:0x%x%x\n","geni_i3c_get_ver_info",*(arg1 + 0xb2c));
    if (*(arg1 + 8) != 0) {
        sym.i3c_trace_log(*(arg1 + 8),0x8001001,0x8000d0f,*(arg1 + 0xb2c));
    }
    return;
}


// ===== sym.geni_se_get_tx_fifo_depth @ 0x0800530c (size 104) =====

uint32_t sym.geni_se_get_tx_fifo_depth(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = geni_se_get_qup_hw_version();
    uVar2 = 0xff0000;
    if (((uVar1 & 0xffe0000) < 0x90001 || uVar1 >> 0x1c != 3) && uVar1 >> 0x1e == 0) {
        uVar2 = 0x3f0000;
    }
    uVar1 = sym.readl_relaxed(*arg1 + 0xe24);
    return (uVar2 & uVar1) >> 0x10;
}


// ===== sym.i3c_ibi_rsrcs_init @ 0x08005374 (size 932) =====

uint64_t sym.i3c_ibi_rsrcs_init(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    int64_t *piVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t arg4;
    char *arg2_00;
    uint *arg3;
    int64_t iVar6;
    code *arg3_00;
    uint64_t arg3_01;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = arg1 + 0xac4;
    iVar7 = 1;
    arg3 = puVar1;
    iVar3 = of_property_read_variable_u32_array(*(arg2 + 0x300),"qcom,ibi-ctrl-id",puVar1,1,0);
    if (iVar3 < 0) {
        ipc_log_string(*(arg1 + 0x9a8),"IBI controller instance id is not defined\n");
        if (*(arg1 + 8) == 0) {
            _printk(0x8000969);
            iVar5 = *(arg1 + 8);
        }
        else {
            _dev_err(*(arg1 + 8),"IBI controller instance id is not defined\n");
            iVar5 = *(arg1 + 8);
        }
        if (iVar5 == 0) {
            arg4 = 0xfffffffa;
        }
        else {
            sym.i3c_trace_log(iVar5,0x8000eac,arg3,iVar7);
            arg4 = 0xfffffffa;
        }
    }
    else {
        msm_qup_write(*puVar1,0x24);
        iVar6 = 1;
        iVar5 = platform_get_resource(arg2,0x200);
        if (iVar5 == 0) {
            arg4 = 0xffffffea;
        }
        else {
            piVar2 = arg2 + 0x10;
            arg4 = devm_ioremap_resource(piVar2,iVar5);
            *(arg1 + 0xa50) = arg4;
            if (arg4 < 0xfffffffffffff001) {
                uVar4 = sym.readl_relaxed(*arg1 + 0xe24);
                *(arg1 + 0xa48) = uVar4 >> 7 & 1;
                if ((uVar4 >> 7 & 1) == 0) {
                    ipc_log_string(*(arg1 + 0x9a8),"IBI controller support not present\n");
                    if (*(arg1 + 8) == 0) {
                        _printk(0x80013cd);
                    }
                    else {
                        _dev_err(*(arg1 + 8),"IBI controller support not present\n");
                    }
                    if (*(arg1 + 8) != 0) {
                        sym.i3c_trace_log(*(arg1 + 8),0x8001b57,iVar6,iVar7);
                    }
                    arg4 = 0xffffffed;
                }
                else {
                    *(arg1 + 0xa70) = 0;
                    __init_swait_queue_head(arg1 + 0xa78,"&x->wait",obj.init_completion.__key);
                    *(arg1 + 0xa68) = 0;
                    uVar4 = sym.readl_relaxed(*(arg1 + 0xa50) + 0x1c);
                    iVar6 = 0xdc0;
                    *(arg1 + 0xa58) = uVar4 & 0x1f;
                    iVar5 = devm_kmalloc(piVar2,(uVar4 & 0x1f) << 3);
                    *(arg1 + 0xa60) = iVar5;
                    if (iVar5 == 0) {
                        arg4 = 0xfffffff4;
                    }
                    else {
                        iVar3 = platform_get_irq(arg2,1);
                        *(arg1 + 0xa6c) = iVar3;
                        if (iVar3 < 0) {
                            ipc_log_string(*(arg1 + 0x9a8),"IRQ error for ibi_c manager\n");
                            if (*(arg1 + 8) != 0) {
                                sym.i3c_trace_log(*(arg1 + 8),0x8001b7b,iVar6,iVar7);
                            }
                            arg4 = *(arg1 + 0xa6c);
                        }
                        else {
                            iVar7 = *(arg2 + 0x80);
                            if (iVar7 == 0) {
                                iVar7 = *piVar2;
                            }
                            arg3_00 = sym.geni_i3c_ibi_irq.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt;
                            iVar5 = 0;
                            uVar4 = devm_request_threaded_irq
                                              (piVar2,iVar3,
                                               sym.geni_i3c_ibi_irq.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt,0,4,iVar7
                                               ,arg1);
                            if (uVar4 == 0) {
                                uVar4 = irq_set_irq_wake(*(arg1 + 0xa6c),1);
                                if (uVar4 == 0) {
                                    iVar3 = platform_get_irq(arg2,2);
                                    *(arg1 + 0xa90) = iVar3;
                                    if (iVar3 < 0) {
                                        ipc_log_string(*(arg1 + 0x9a8),"IRQ error for ibi_c gpii\n");
                                        if (*(arg1 + 8) != 0) {
                                            sym.i3c_trace_log(*(arg1 + 8),0x8001194,arg3_00,iVar5);
                                        }
                                        arg4 = *(arg1 + 0xa90);
                                        goto code_r0x080056ac;
                                    }
                                    iVar7 = *(arg2 + 0x80);
                                    if (iVar7 == 0) {
                                        iVar7 = *piVar2;
                                    }
                                    uVar4 = devm_request_threaded_irq
                                                      (piVar2,iVar3,
                                                       sym.geni_i3c_ibi_irq.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt,0,
                                                       4,iVar7,arg1);
                                    if (uVar4 == 0) {
                                        uVar4 = irq_set_irq_wake(*(arg1 + 0xa90),1);
                                        arg4 = uVar4;
                                        if (uVar4 == 0) {
                                            sym.qcom_geni_i3c_ibi_conf(arg1);
                                            goto code_r0x080056ac;
                                        }
                                        ipc_log_string(*(arg1 + 0x9a8),"Failed to set gpii IRQ(%d) wake: err:%d\n",
                                                       *(arg1 + 0xa90),arg4);
                                        iVar7 = *(arg1 + 8);
                                        if (iVar7 == 0) goto code_r0x080056ac;
                                        arg3_01 = *(arg1 + 0xa90);
                                        arg2_00 = "Failed to set gpii IRQ(%d) wake: err:%d\n";
                                    }
                                    else {
                                        arg4 = uVar4;
                                        ipc_log_string(*(arg1 + 0x9a8),"Request_irq failed:%d: err:%d\n",
                                                       *(arg1 + 0xa90),arg4);
                                        iVar7 = *(arg1 + 8);
                                        if (iVar7 == 0) goto code_r0x080056ac;
                                        arg3_01 = *(arg1 + 0xa90);
                                        arg2_00 = "Request_irq failed:%d: err:%d\n";
                                    }
                                }
                                else {
                                    arg4 = uVar4;
                                    ipc_log_string(*(arg1 + 0x9a8),"Failed to set mngr IRQ(%d) wake: err:%d\n",
                                                   *(arg1 + 0xa6c),arg4);
                                    iVar7 = *(arg1 + 8);
                                    if (iVar7 == 0) goto code_r0x080056ac;
                                    arg3_01 = *(arg1 + 0xa6c);
                                    arg2_00 = "Failed to set mngr IRQ(%d) wake: err:%d\n";
                                }
                            }
                            else {
                                arg4 = uVar4;
                                ipc_log_string(*(arg1 + 0x9a8),"Request_irq:%d: err:%d\n",*(arg1 + 0xa6c),arg4);
                                iVar7 = *(arg1 + 8);
                                if (iVar7 == 0) goto code_r0x080056ac;
                                arg3_01 = *(arg1 + 0xa6c);
                                arg2_00 = "Request_irq:%d: err:%d\n";
                            }
                            sym.i3c_trace_log(iVar7,arg2_00,arg3_01,arg4);
                        }
                    }
                }
            }
        }
    }
code_r0x080056ac:
    return arg4 & 0xffffffff;
}


// ===== sym.geni_i3c_hotjoin @ 0x08005718 (size 184) =====

void sym.geni_i3c_hotjoin(int64_t arg1)

{
    uint32_t uVar1;
    int64_t in_x3;
    ulong *in_x18;
    uint64_t arg3;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = arg1 + -0xad8;
    pm_stay_awake(*piVar2);
    uVar1 = i3c_master_do_daa(arg1 + -0xa70);
    if (uVar1 != 0) {
        arg3 = uVar1;
        ipc_log_string(*(arg1 + -0x138),"hotjoin:daa failed %d\n",arg3);
        if (*piVar2 == 0) {
            _printk(0x8001202,arg3);
        }
        else {
            _dev_err(*piVar2,"hotjoin:daa failed %d\n",arg3);
        }
        if (*piVar2 != 0) {
            sym.i3c_trace_log(*piVar2,0x8001c11,arg3,in_x3);
        }
    }
    pm_relax(*piVar2);
    return;
}


// ===== sym.geni_i3c_enable_hotjoin_irq @ 0x080057d0 (size 240) =====

void sym.geni_i3c_enable_hotjoin_irq(int64_t arg1,int64_t arg2)

{
    char *arg4;
    bool bVar1;
    uint32_t uVar2;
    int64_t arg1_00;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = sym.readl_relaxed(*(arg1 + 0xa50) + 0x14);
    bVar1 = (arg2 & 1U) == 0;
    arg4 = "Enabled";
    if (bVar1) {
        arg4 = "Disabled";
    }
    uVar3 = 4;
    if (bVar1) {
        uVar3 = 0;
    }
    sym.writel_relaxed(uVar2 & 0xfffffffb | uVar3,*(arg1 + 0xa50) + 0x14);
    ipc_log_string(*(arg1 + 0x9a8),"%s:%s\n","geni_i3c_enable_hotjoin_irq",arg4);
    if (*(arg1 + 8) == 0) {
        _printk(0x8000a39,"geni_i3c_enable_hotjoin_irq",arg4);
        arg1_00 = *(arg1 + 8);
    }
    else {
        _dev_err(*(arg1 + 8),"%s:%s\n","geni_i3c_enable_hotjoin_irq",arg4);
        arg1_00 = *(arg1 + 8);
    }
    if (arg1_00 != 0) {
        sym.i3c_trace_log(arg1_00,0x8001a6a,0x8001707,arg4);
    }
    return;
}


// ===== sym.writel_relaxed @ 0x080058c0 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80058dc);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8005904);
    return;
}


// ===== sym.geni_i3c_err @ 0x08005938 (size 280) =====

void sym.geni_i3c_err(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    int64_t iVar3;
    char *arg2_00;
    uint64_t arg4;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = arg2 & 0xffffffff;
    arg4 = *(arg1 + 0xa1c);
    if (*(arg1 + 0xa18) == 0) {
        ipc_log_string(*(arg1 + 0x9a8),"%s:Error: Write, len:%d\n","geni_i3c_err");
        iVar3 = *(arg1 + 8);
        if (iVar3 == 0) goto code_r0x080059c8;
        uVar1 = *(arg1 + 0xa1c);
        arg2_00 = "%s:Error: Write, len:%d\n";
    }
    else {
        ipc_log_string(*(arg1 + 0x9a8),"%s:Error: Read, len:%d\n","geni_i3c_err");
        iVar3 = *(arg1 + 8);
        if (iVar3 == 0) goto code_r0x080059c8;
        uVar1 = *(arg1 + 0xa1c);
        arg2_00 = "%s:Error: Read, len:%d\n";
    }
    arg4 = uVar1;
    sym.i3c_trace_log(iVar3,arg2_00,0x80012f3,arg4);
code_r0x080059c8:
    if ((uVar4 << 4 | 8) < 0xa1) {
        iVar3 = *(uVar4 * 0x10 + 0x8001fb8);
        ipc_log_string(*(arg1 + 0x9a8),0x8001ad9,iVar3);
        if (*(arg1 + 8) != 0) {
            sym.i3c_trace_log(*(arg1 + 8),0x8001ad9,iVar3,arg4);
        }
        *(arg1 + 0x68) = *(obj.gi3c_log + uVar4 * 0x10);
        sym.geni_i3c_se_dump_dbg_regs(arg1,*arg1,*(arg1 + 0x9a8));
        return;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(1,0x8005a50);
    (*pcVar2)();
}


// ===== sym.geni_i3c_ibi_irq @ 0x08005a50 (size 920) =====

ulong sym.geni_i3c_ibi_irq(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    bool bVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint uVar6;
    ulong uVar7;
    int64_t iVar8;
    char *arg2_00;
    int64_t in_x3;
    ulong *in_x18;
    uint32_t uVar9;
    uint64_t uVar10;
    uint64_t arg3;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = _raw_spin_lock_irqsave(arg2 + 0xa68);
    if (*(arg2 + 0xa6c) == arg1) {
        uVar4 = sym.readl_relaxed(*(arg2 + 0xa50) + 0x14);
        uVar5 = sym.readl_relaxed(*(arg2 + 0xa50) + 0x10);
        uVar5 = uVar5 & uVar4;
        uVar10 = uVar5;
        ipc_log_string(*(arg2 + 0x9a8),"IBI MGR IRQ IBI_GEN_IRQ_STATUS:0x%x\n",uVar10);
        if (*(arg2 + 8) != 0) {
            sym.i3c_trace_log(*(arg2 + 8),0x8000616,uVar10,in_x3);
        }
        if ((uVar5 & 0x12) != 0) {
            *(arg2 + 0xac0) = uVar5;
        }
        uVar4 = uVar5 & 9;
        bVar3 = (uVar5 & 9) != 0;
        if ((uVar5 >> 2 & 1) != 0) {
            queue_work_on(0x20,*(arg2 + 0xad8),arg2 + 0xae0);
        }
        if (uVar5 != 0) {
            sym.writel_relaxed(uVar10,*(arg2 + 0xa50) + 0x18);
            goto joined_r0x08005d04;
        }
code_r0x08005d10:
        if (!bVar3) goto code_r0x08005d1c;
    }
    else {
        if (*(arg2 + 0xa90) != arg1) goto code_r0x08005d1c;
        uVar4 = sym.readl_relaxed(*(arg2 + 0xa50) + 0x1004);
        arg3 = uVar4;
        uVar10 = arg3;
        ipc_log_string(*(arg2 + 0x9a8),"IBI GPII IRQ, IBI_IRQ_STATUS:0x%x\n");
        if (*(arg2 + 8) != 0) {
            uVar10 = arg3;
            sym.i3c_trace_log(*(arg2 + 8),0x80007cb,arg3,in_x3);
        }
        if ((uVar4 & 0x3f001e) != 0) {
            *(arg2 + 0xac0) = uVar4;
        }
        if ((uVar4 >> 8 & 1) != 0) {
            iVar11 = **(arg2 + 0xa60);
            uVar5 = sym.readl_relaxed(*(arg2 + 0xa50) + 0x1010);
            if ((iVar11 == 0) || (*(iVar11 + 0x68) == 0)) {
                ipc_log_string(*(arg2 + 0x9a8),"Invalid IBI device\n");
                if (*(arg2 + 8) == 0) {
                    _printk(0x8000ba7);
                }
                else {
                    _dev_err(*(arg2 + 8),"Invalid IBI device\n");
                }
                iVar11 = *(arg2 + 8);
                if (iVar11 != 0) {
                    arg2_00 = "Invalid IBI device\n";
code_r0x08005de0:
                    sym.i3c_trace_log(iVar11,arg2_00,uVar10,in_x3);
                }
            }
            else {
                iVar8 = i3c_generic_ibi_get_free_slot(*(*(iVar11 + 0x18) + 8));
                if (iVar8 == 0) {
                    ipc_log_string(*(arg2 + 0x9a8),"no free slot\n");
                    if (*(arg2 + 8) == 0) {
                        _printk(0x800177e);
                    }
                    else {
                        _dev_err(*(arg2 + 8),"no free slot\n");
                    }
                    iVar11 = *(arg2 + 8);
                    if (iVar11 != 0) {
                        arg2_00 = "no free slot\n";
                        goto code_r0x08005de0;
                    }
                }
                else {
                    if (*(arg2 + 0xa58) != 0) {
                        uVar10 = 0;
                        uVar9 = 0x1828;
                        do {
                            if ((uVar5 >> (uVar10 & 0x1f) & 1) != 0) {
                                uVar6 = sym.readl_relaxed(*(arg2 + 0xa50) + (uVar9 - 0x24));
                                *(arg2 + 0xac8) = uVar6;
                                uVar6 = sym.readl_relaxed(*(arg2 + 0xa50) + uVar9);
                                *(arg2 + 0xacc) = uVar6;
                                uVar6 = sym.readl_relaxed(*(arg2 + 0xa50) + (uVar9 - 0x20));
                                *(arg2 + 0xad0) = uVar6;
                                if (*(iVar8 + 0x40) != 0) {
                                    memcpy(*(iVar8 + 0x40),arg2 + 0xad0,*(*(iVar11 + 0x68) + 0x24));
                                }
                                uVar1 = *(*(iVar11 + 0x68) + 0x24);
                                uVar2 = *(arg2 + 0xac8) >> 8 & 7;
                                if (uVar1 <= uVar2) {
                                    uVar2 = uVar1;
                                }
                                *(iVar8 + 0x38) = uVar2;
                                ipc_log_string(*(arg2 + 0x9a8),"IBI: info: 0x%x, ts: 0x%x, Data: 0x%x\n",
                                               *(arg2 + 0xac8),*(arg2 + 0xacc),*(arg2 + 0xad0));
                                if (*(arg2 + 8) != 0) {
                                    sym.i3c_trace_log(*(arg2 + 8),0x80014e7,*(arg2 + 0xac8),*(arg2 + 0xacc));
                                }
                            }
                            uVar10 = uVar10 + 1;
                            uVar9 = uVar9 + 0x80;
                        } while (uVar10 < *(arg2 + 0xa58));
                    }
                    i3c_master_queue_ibi(iVar11,iVar8);
                }
            }
            sym.writel_relaxed(uVar5,*(arg2 + 0xa50) + 0x1014);
        }
        if (uVar4 == 0) {
            bVar3 = false;
            goto code_r0x08005d10;
        }
        sym.writel_relaxed(arg3,*(arg2 + 0xa50) + 0x100c);
        uVar4 = uVar4 & 1;
joined_r0x08005d04:
        if (uVar4 == 0) goto code_r0x08005d1c;
    }
    complete(arg2 + 0xa70);
code_r0x08005d1c:
    _raw_spin_unlock_irqrestore(arg2 + 0xa68,uVar7);
    return 1;
}


// ===== sym.qcom_geni_i3c_ibi_conf @ 0x08005de8 (size 152) =====

void sym.qcom_geni_i3c_ibi_conf(int64_t arg1)

{
    int64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0xac0) = 0;
    *(arg1 + 0xa70) = 0;
    sym.writel_relaxed(0x5fd74322,*(arg1 + 0xa50) + 8);
    sym.geni_i3c_enable_ibi_ctrl(arg1);
    arg1_00 = sym.readl_relaxed(*(arg1 + 0xa50) + 0x14);
    sym.writel_relaxed(arg1_00,*(arg1 + 0xa50) + 0x14);
    sym.writel_relaxed(1,*(arg1 + 0xa50) + 0xc);
    sym.writel_relaxed(0xffffffff,*(arg1 + 0xa50) + 0x1008);
    *(arg1 + 0xa49) = 1;
    return;
}


// ===== sym.geni_i3c_enable_ibi_ctrl @ 0x08005e80 (size 560) =====

void sym.geni_i3c_enable_ibi_ctrl(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t arg1_00;
    uint64_t in_x1;
    char *arg2;
    int64_t in_x2;
    int64_t in_x3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_x1 & 1) == 0) {
        iVar2 = sym.readl_relaxed(*(arg1 + 0xa50) + 0xc);
        if (iVar2 != 0) {
            return;
        }
        *(arg1 + 0xac0) = 0;
        *(arg1 + 0xa70) = 0;
        uVar1 = sym.readl_relaxed(*(arg1 + 0xa50));
        sym.writel_relaxed(uVar1 & 0xfffffffe,*(arg1 + 0xa50));
        iVar2 = wait_for_completion_timeout(arg1 + 0xa70,0xfa);
        if (iVar2 == 0) {
            ipc_log_string(*(arg1 + 0x9a8),"timeout disabling IBI: 0x%x\n",*(arg1 + 0xac0));
            if (*(arg1 + 8) == 0) {
                _printk(0x8001013,*(arg1 + 0xac0));
            }
            else {
                _dev_err(*(arg1 + 8),"timeout disabling IBI: 0x%x\n");
            }
            if (*(arg1 + 8) == 0) {
                return;
            }
            sym.i3c_trace_log(*(arg1 + 8),0x8001972,*(arg1 + 0xac0),in_x3);
            return;
        }
        ipc_log_string(*(arg1 + 0x9a8),"%s: IBI ctrl disabled\n","geni_i3c_enable_ibi_ctrl");
        if (*(arg1 + 8) == 0) {
            _printk(0x800150e,"geni_i3c_enable_ibi_ctrl");
        }
        else {
            _dev_err(*(arg1 + 8),"%s: IBI ctrl disabled\n","geni_i3c_enable_ibi_ctrl");
        }
        arg1_00 = *(arg1 + 8);
        if (arg1_00 == 0) {
            return;
        }
        arg2 = "%s: IBI ctrl disabled\n";
    }
    else {
        *(arg1 + 0xa70) = 0;
        uVar1 = sym.readl_relaxed(*(arg1 + 0xa50) + 0x14);
        sym.writel_relaxed(uVar1 | 1,*(arg1 + 0xa50) + 0x14);
        uVar1 = sym.readl_relaxed(*(arg1 + 0xa50));
        if ((uVar1 & 1) != 0) {
            return;
        }
        sym.writel_relaxed(uVar1 | 1,*(arg1 + 0xa50));
        iVar2 = wait_for_completion_timeout(arg1 + 0xa70,0xfa);
        if (iVar2 == 0) {
            ipc_log_string(*(arg1 + 0x9a8),"timeout while ENABLE_CHANGE bit\n");
            if (*(arg1 + 8) == 0) {
                _printk(0x8000d25);
            }
            else {
                _dev_err(*(arg1 + 8),"timeout while ENABLE_CHANGE bit\n");
            }
            if (*(arg1 + 8) == 0) {
                return;
            }
            sym.i3c_trace_log(*(arg1 + 8),0x8000a77,in_x2,in_x3);
            return;
        }
        ipc_log_string(*(arg1 + 0x9a8),"%s: IBI ctrl enabled\n","geni_i3c_enable_ibi_ctrl");
        if (*(arg1 + 8) == 0) {
            _printk(0x8001592,"geni_i3c_enable_ibi_ctrl");
        }
        else {
            _dev_err(*(arg1 + 8),"%s: IBI ctrl enabled\n","geni_i3c_enable_ibi_ctrl");
        }
        arg1_00 = *(arg1 + 8);
        if (arg1_00 == 0) {
            return;
        }
        arg2 = "%s: IBI ctrl enabled\n";
    }
    sym.i3c_trace_log(arg1_00,arg2,0x8000d48,in_x3);
    return;
}


// ===== sym.geni_i3c_master_bus_init @ 0x080060b0 (size 1712) =====

char * sym.geni_i3c_master_bus_init(int64_t arg1)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t extraout_x1;
    char *in_x2;
    int64_t in_x3;
    int64_t iVar7;
    uint64_t *puVar8;
    uint64_t *extraout_x8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t iVar11;
    char *pcVar12;
    ulong unaff_x30;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    iVar11 = arg1 + -0x70;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    uVar4 = __pm_runtime_resume(*(arg1 + -0x68),4);
    if (-1 < uVar4) {
        iVar9 = *(arg1 + 0x8c0);
        iVar7 = *(arg1 + 0x8c8);
        if ((iVar9 == 100000) && (*(arg1 + 0x994) == 19200000)) {
            *(arg1 + 0x9c8) = obj.geni_i3c_clk_map;
        }
        if (iVar7 == 100000) {
            *(arg1 + 0x9d0) = obj.geni_i3c_clk_map;
        }
        if ((iVar9 == 400000) && (*(arg1 + 0x994) == 19200000)) {
            *(arg1 + 0x9c8) = 0x8002064;
        }
        if (iVar7 == 400000) {
            *(arg1 + 0x9d0) = 0x8002064;
        }
        if ((iVar9 == 1000000) && (*(arg1 + 0x994) == 19200000)) {
            *(arg1 + 0x9c8) = 0x8002078;
        }
        if (iVar7 == 1000000) {
            *(arg1 + 0x9d0) = 0x8002078;
        }
        if ((iVar9 == 0x1d4c00) && (*(arg1 + 0x994) == 19200000)) {
            *(arg1 + 0x9c8) = 0x800208c;
        }
        if (iVar7 == 0x1d4c00) {
            *(arg1 + 0x9d0) = 0x800208c;
        }
        if ((iVar9 == 3500000) && (*(arg1 + 0x994) == 19200000)) {
            *(arg1 + 0x9c8) = 0x80020a0;
        }
        if (iVar7 == 3500000) {
            *(arg1 + 0x9d0) = 0x80020a0;
        }
        if ((iVar9 == 370000) && (*(arg1 + 0x994) == 100000000)) {
            *(arg1 + 0x9c8) = 0x80020b4;
        }
        if (iVar7 == 370000) {
            *(arg1 + 0x9d0) = 0x80020b4;
        }
        if ((iVar9 == 12500000) && (*(arg1 + 0x994) == 100000000)) {
            *(arg1 + 0x9c8) = 0x80020c8;
        }
        if (iVar7 == 12500000) {
            *(arg1 + 0x9d0) = 0x80020c8;
        }
        if ((*(arg1 + 0x9c8) == 0) || (*(arg1 + 0x9d0) == 0)) {
            ipc_log_string(*(arg1 + 0x938),"%s : clk mapping failed","geni_i3c_clk_map_idx");
            if (*(arg1 + -0x68) == 0) {
                _printk(0x8000564,"geni_i3c_clk_map_idx");
                iVar7 = *(arg1 + -0x68);
            }
            else {
                _dev_err(*(arg1 + -0x68),"%s : clk mapping failed","geni_i3c_clk_map_idx");
                iVar7 = *(arg1 + -0x68);
            }
            if (iVar7 != 0) {
                sym.i3c_trace_log(iVar7,0x800198f,0x80008b0,in_x3);
            }
            ipc_log_string(*(arg1 + 0x938),"Invalid clk frequency %d Hz src or %ld Hz bus: %d\n",*(arg1 + 0x994),
                           *(arg1 + 0x8c0),0xffffffea);
            pcVar12 = *(arg1 + 0x994);
            in_x2 = *(arg1 + 0x8c0);
            if (*(arg1 + -0x68) == 0) {
                _printk(0x8001057,pcVar12,in_x2,0xffffffea);
                iVar7 = *(arg1 + -0x68);
            }
            else {
                _dev_err(*(arg1 + -0x68),"Invalid clk frequency %d Hz src or %ld Hz bus: %d\n",pcVar12,in_x2,
                         0xffffffea);
                iVar7 = *(arg1 + -0x68);
                in_x2 = pcVar12;
            }
            if (iVar7 != 0) {
                in_x2 = *(arg1 + 0x994);
                sym.i3c_trace_log(iVar7,0x8001893,in_x2,*(arg1 + 0x8c0));
            }
        }
        else {
            sym.qcom_geni_i3c_conf(iVar11);
            uVar5 = i3c_master_get_free_addr(arg1,0);
            if (uVar5 < 0) {
                ipc_log_string(*(arg1 + 0x938),"%s: error No free addr:%d\n","geni_i3c_master_bus_init",
                               uVar5 & 0xffffffff);
                if (*(arg1 + -0x68) == 0) {
                    in_x2 = uVar5 & 0xffffffff;
                    _printk(0x8000ef2,"geni_i3c_master_bus_init");
                }
                else {
                    in_x2 = "geni_i3c_master_bus_init";
                    _dev_err(*(arg1 + -0x68),"%s: error No free addr:%d\n","geni_i3c_master_bus_init",
                             uVar5 & 0xffffffff);
                }
                if (*(arg1 + -0x68) != 0) {
                    in_x2 = "geni_i3c_master_bus_init";
                    sym.i3c_trace_log(*(arg1 + -0x68),0x8000ed7,0x80016c3,uVar5 & 0xffffffff);
                }
            }
            else {
                uStack_48._0_4_ = CONCAT13(uVar5,uStack_48);
                uStack_50 = 0;
                uStack_48 = CONCAT62(uStack_48._2_6_,0x60);
                i3c_master_set_info(arg1,&uStack_50);
            }
        }
        disable_irq(*(arg1 + -0xc));
        uVar4 = geni_se_resources_off(iVar11);
        if (uVar4 != 0) {
            pcVar12 = uVar4;
            ipc_log_string(*(arg1 + 0x938),"%s: geni_se_resources_off failed%d\n","geni_i3c_master_bus_init",pcVar12)
            ;
            if (*(arg1 + -0x68) == 0) {
                in_x2 = pcVar12;
                _printk(0x8000f64,"geni_i3c_master_bus_init");
            }
            else {
                in_x2 = "geni_i3c_master_bus_init";
                _dev_err(*(arg1 + -0x68),"%s: geni_se_resources_off failed%d\n","geni_i3c_master_bus_init",pcVar12);
            }
            if (*(arg1 + -0x68) != 0) {
                in_x2 = "geni_i3c_master_bus_init";
                sym.i3c_trace_log(*(arg1 + -0x68),0x800145b,0x80016c3,pcVar12);
            }
        }
        uVar4 = geni_icc_disable(iVar11);
        pcVar12 = uVar4;
        if (uVar4 != 0) {
            ipc_log_string(*(arg1 + 0x938),"%s: geni_icc_disable failed%d\n","geni_i3c_master_bus_init",pcVar12);
            if (*(arg1 + -0x68) == 0) {
                in_x2 = pcVar12;
                _printk(0x8001921,"geni_i3c_master_bus_init");
            }
            else {
                in_x2 = "geni_i3c_master_bus_init";
                _dev_err(*(arg1 + -0x68),"%s: geni_icc_disable failed%d\n","geni_i3c_master_bus_init",pcVar12);
            }
            if (*(arg1 + -0x68) != 0) {
                in_x2 = "geni_i3c_master_bus_init";
                sym.i3c_trace_log(*(arg1 + -0x68),0x8000821,0x80016c3,pcVar12);
            }
        }
        __pm_runtime_disable(*(arg1 + -0x68),1);
        puVar8 = *(arg1 + -0x68) + 0x1f8;
        uVar5 = *puVar8;
code_r0x0800633c:
        if (uVar5 == 0) goto code_r0x0800637c;
        in_x2 = uVar5 - 1;
        uVar6 = uVar5 & 0xffffffff;
        uVar10 = uVar5;
        do {
            Hint_Prefetch(puVar8,2,0,1);
            do {
                uVar4 = *puVar8;
                uVar5 = uVar4;
                if (uVar4 != uVar6) goto code_r0x08006360;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar8,0x10);
                if (bVar3) {
                    *puVar8 = in_x2;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08006360:
            if (uVar10 != uVar4) goto code_r0x0800633c;
code_r0x0800637c:
            __pm_runtime_set_status(*(arg1 + -0x68),2);
            pm_runtime_enable(*(arg1 + -0x68));
code_r0x08006390:
            iVar11 = sp_el0;
            if (*(iVar11 + 0x5e0) == iStack_38) {
                return pcVar12;
            }
            __stack_chk_fail();
            uVar10 = *extraout_x8;
            uVar6 = extraout_x1;
            puVar8 = extraout_x8;
        } while( true );
    }
    pcVar12 = uVar4;
    ipc_log_string(*(arg1 + 0x938),"%s: error turning SE resources:%d\n","geni_i3c_master_bus_init",pcVar12);
    if (*(arg1 + -0x68) == 0) {
        in_x2 = pcVar12;
        _printk(0x8001032,"geni_i3c_master_bus_init");
        iVar11 = *(arg1 + -0x68);
    }
    else {
        in_x2 = "geni_i3c_master_bus_init";
        _dev_err(*(arg1 + -0x68),"%s: error turning SE resources:%d\n","geni_i3c_master_bus_init",pcVar12);
        iVar11 = *(arg1 + -0x68);
    }
    if (iVar11 == 0) {
        iVar11 = 0;
    }
    else {
        in_x2 = "geni_i3c_master_bus_init";
        sym.i3c_trace_log(iVar11,0x8001870,0x80016c3,pcVar12);
        iVar11 = *(arg1 + -0x68);
    }
    puVar8 = iVar11 + 0x1f8;
    uVar5 = *puVar8;
    do {
        uVar4 = uVar5;
        if (uVar4 == 0) break;
        in_x2 = uVar4 - 1;
        Hint_Prefetch(puVar8,2,0,1);
        do {
            uVar1 = *puVar8;
            uVar5 = uVar1;
            if (uVar1 != uVar4) goto code_r0x08006634;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar8,0x10);
            if (bVar3) {
                *puVar8 = uVar4 - 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08006634:
    } while (uVar4 != uVar1);
    __pm_runtime_set_status(*(arg1 + -0x68),2);
    goto code_r0x08006390;
}


// ===== sym.geni_i3c_master_bus_cleanup @ 0x08006760 (size 12) =====

void sym.geni_i3c_master_bus_cleanup(void)

{
    return;
}


// ===== sym.geni_i3c_master_attach_i3c_dev @ 0x0800676c (size 156) =====

ulong sym.geni_i3c_master_attach_i3c_dev(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x10);
    iVar1 = devm_kmalloc(*(iVar5 + -0x68),0x10,0xdc0);
    if (iVar1 == 0) {
        uVar2 = 0xfffffff4;
    }
    else {
        iVar4 = *(arg1 + 0x78);
        *(arg1 + 0x18) = iVar1;
        *(iVar1 + 2) = 0xffff;
        if (iVar4 == 0) {
            piVar3 = *(iVar5 + 0x868);
            if (piVar3 != iVar5 + 0x868) {
                do {
                    if (*(arg1 + 0x20) == piVar3[3]) {
                        *(arg1 + 0x78) = piVar3;
                    }
                    piVar3 = *piVar3;
                } while (piVar3 != iVar5 + 0x868);
            }
        }
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.geni_i3c_master_reattach_i3c_dev @ 0x08006808 (size 84) =====

ulong sym.geni_i3c_master_reattach_i3c_dev(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    
    if (*(arg1 + 0x78) == 0) {
        piVar2 = *(*(arg1 + 0x10) + 0x868);
        piVar1 = *(arg1 + 0x10) + 0x868;
        if (piVar2 != piVar1) {
            do {
                if (*(arg1 + 0x20) == piVar2[3]) {
                    *(arg1 + 0x78) = piVar2;
                }
                piVar2 = *piVar2;
            } while (piVar2 != piVar1);
        }
    }
    return 0;
}


// ===== sym.geni_i3c_master_detach_i3c_dev @ 0x0800685c (size 16) =====

void sym.geni_i3c_master_detach_i3c_dev(int64_t arg1)

{
    *(arg1 + 0x18) = 0;
    return;
}


// ===== sym.geni_i3c_master_do_daa @ 0x0800686c (size 692) =====

uint64_t sym.geni_i3c_master_do_daa(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int64_t arg1_00;
    uint64_t uVar6;
    ulong *in_x18;
    uint64_t arg4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = arg1 + 0x9b8;
    if (*(arg1 + 0xb10) != 0) {
        uVar5 = 0;
        uVar4 = 0;
        do {
            uVar4 = i3c_master_get_free_addr(arg1,uVar4 + 1);
            if (uVar4 < 0) {
                return 0xffffffe4;
            }
            ipc_log_string(*(arg1 + 0x938),"%s: Got free_addr:%d\n","geni_i3c_master_do_daa",uVar4);
            if (*(arg1 + -0x68) == 0) {
                _printk(0x80008c5,"geni_i3c_master_do_daa",uVar4);
                arg1_00 = *(arg1 + -0x68);
            }
            else {
                _dev_err(*(arg1 + -0x68),"%s: Got free_addr:%d\n","geni_i3c_master_do_daa",uVar4);
                arg1_00 = *(arg1 + -0x68);
            }
            if (arg1_00 != 0) {
                sym.i3c_trace_log(arg1_00,0x8000bbd,0x8001808,uVar4);
            }
            if ((uVar4 >> 7 & 1) == 0) {
                uVar2 = uVar4 >> 6 & 3;
                puVar1[uVar2] = puVar1[uVar2] | 1 << (uVar4 & 0x1f);
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(arg1 + 0xb10));
    }
    uVar6 = i3c_master_entdaa_locked(arg1);
    if ((uVar6 == 3) || (uVar6 == 0)) {
        if (*(arg1 + 0xb10) != 0) {
            if (((*puVar1 & 1) != 0) && (uVar5 = i3c_master_add_i3c_dev_locked(arg1), uVar5 < 0)) {
                ipc_log_string(*(arg1 + 0x938),"%s: error:%d adding device addr:%d\n","geni_i3c_master_do_daa",uVar5
                               ,0);
                if (*(arg1 + -0x68) != 0) {
                    sym.i3c_trace_log(*(arg1 + -0x68),0x80016dc,0x8001808,uVar5);
                }
            }
            if (1 < *(arg1 + 0xb10)) {
                if (((*puVar1 >> 1 & 1) != 0) &&
                   (uVar5 = i3c_master_add_i3c_dev_locked(arg1,*(arg1 + 0x9c0)), uVar5 < 0)) {
                    ipc_log_string(*(arg1 + 0x938),"%s: error:%d adding device addr:%d\n","geni_i3c_master_do_daa",
                                   uVar5,1);
                    if (*(arg1 + -0x68) != 0) {
                        sym.i3c_trace_log(*(arg1 + -0x68),0x80016dc,0x8001808,uVar5);
                    }
                }
                if (2 < *(arg1 + 0xb10)) {
                    uVar6 = 2;
                    do {
                        if (((uVar6 >> 7 & 1) == 0) && ((puVar1[uVar6 >> 6 & 3] & 1 << (uVar6 & 0x1f)) != 0)) {
    //WARNING: Does not return
                            pcVar3 = SoftwareBreakpoint(0x5512,0x8006ac4);
                            (*pcVar3)();
                        }
                        uVar6 = uVar6 + 1;
                    } while (*(arg1 + 0xb10) != uVar6);
                }
            }
        }
        uVar6 = i3c_master_enec_locked(arg1,0x7e,10);
        if (uVar6 != 0) {
            arg4 = uVar6 & 0xffffffff;
            ipc_log_string(*(arg1 + 0x938),"%s: error:%d with i3c_master_enec_locked\n","geni_i3c_master_do_daa",arg4
                          );
            uVar6 = 0;
            if (*(arg1 + -0x68) != 0) {
                sym.i3c_trace_log(*(arg1 + -0x68),0x8000df8,0x8001808,arg4);
                uVar6 = 0;
            }
        }
    }
    return uVar6;
}


// ===== sym.geni_i3c_master_supports_ccc_cmd @ 0x08006b20 (size 152) =====

ulong sym.geni_i3c_master_supports_ccc_cmd(int64_t arg1,int64_t arg2)

{
    int64_t in_x3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg2 + 1) < 0x96) {
    //switch table (150 cases) at 0x8001c28
        switch(*(*(arg2 + 1) + 0x8001c28) * 4 + 0x8006b60) {
        case 0x8006b64:
            return 1;
        }
    }
    ipc_log_string(*(arg1 + 0x938),"%s: Unsupported cmnd\n","geni_i3c_master_supports_ccc_cmd");
    if (*(arg1 + -0x68) == 0) {
        return 0;
    }
    sym.i3c_trace_log(*(arg1 + -0x68),0x8000c4c,0x800128f,in_x3);
    return 0;
}


// ===== sym.geni_i3c_master_send_ccc_cmd @ 0x08006bb8 (size 1896) =====

char * sym.geni_i3c_master_send_ccc_cmd(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint16_t uVar2;
    uchar uVar3;
    bool bVar4;
    bool bVar5;
    uint32_t uVar6;
    int iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    char *pcVar10;
    char *in_x2;
    char *in_x3;
    uint64_t arg4;
    uint8_t uVar11;
    int64_t iVar12;
    int64_t *piVar13;
    uint32_t uVar14;
    int64_t iVar15;
    ulong uVar16;
    uint uVar17;
    uint64_t uVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    int64_t *piVar19;
    char *unaff_x21;
    int64_t iVar20;
    char *unaff_x22;
    char *pcVar21;
    int64_t *unaff_x24;
    char *unaff_x25;
    char *unaff_x26;
    char *unaff_x27;
    uint64_t arg4_00;
    uint64_t unaff_x28;
    ulong unaff_x30;
    uchar auVar22 [16];
    uint uStack_138;
    uint uStack_134;
    uint32_t uStack_130;
    int64_t iStack_128;
    uchar *puStack_120;
    code *pcStack_118;
    uint64_t uStack_110;
    char *pcStack_108;
    char *pcStack_100;
    char *pcStack_f8;
    int64_t *piStack_f0;
    char *pcStack_e8;
    char *pcStack_e0;
    char *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c8;
    char *pcStack_b8;
    int64_t *piStack_b0;
    uint64_t uStack_a8;
    int64_t iStack_a0;
    ulong uStack_98;
    uint32_t uStack_90;
    uint uStack_88;
    ulong uStack_84;
    uint64_t uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    if ((*(arg2 + 1) < '\0') || (*(arg2 + 4) == 1)) {
        unaff_x19 = arg1 + -0x70;
        uVar6 = sym.i3c_geni_runtime_get_mutex_lock(unaff_x19);
        pcVar21 = uVar6;
        if (uVar6 == 0) {
            sym.qcom_geni_i3c_conf(unaff_x19);
            uVar6 = *(arg2 + 4);
            if (uVar6 != 0) {
                uVar18 = 0;
                unaff_x24 = arg1 + 0x868;
                piStack_b0 = arg1 + 0x8d0;
                unaff_x22 = "assigning addr:0x%x for pid:x:%x\n";
                pcStack_b8 = arg2;
                iStack_a0 = arg1;
                do {
                    unaff_x26 = "PID 0x:%x matched with boardinfo\n";
                    unaff_x21 = "i3c entdaa read\n";
                    uVar8 = uVar18;
                    if (uVar8 < uVar6 - 1) {
                        uVar11 = *(arg2 + 1);
code_r0x08006d08:
                        uVar6 = 4;
                    }
                    else {
                        uVar11 = *(arg2 + 1);
                        if (uVar11 == 7) goto code_r0x08006d08;
                        uVar6 = 0;
                    }
                    iVar15 = uVar8;
                    uStack_90 = uVar6 | uVar11 << 0x10 | 0x1000000;
                    iVar12 = *(arg2 + 8);
                    if (uVar11 < '\0') {
                        uStack_90 = uStack_90 | (*(iVar12 + iVar15 * 0x18) & 0x7f) << 9;
                        if (*arg2 == '\0') {
                            if (uVar8 == 0) {
                                uVar17 = 0xd;
                                if (*(iVar12 + 8) != 0) {
                                    uVar17 = 0x11;
                                }
                                goto code_r0x08006dac;
                            }
                            uStack_98 = 0x900000001;
                        }
                        else {
                            if (uVar8 == 0) {
                                uVar17 = 0x12;
code_r0x08006dac:
                                uStack_98 = CONCAT44(uVar17,1);
                                goto code_r0x08006db0;
                            }
                            uStack_98 = 0xa00000001;
                        }
                    }
                    else {
                        uVar17 = 0xe;
                        if (*(iVar12 + iVar15 * 0x18 + 8) != 0) {
                            uVar17 = 0x10;
                        }
                        uStack_98 = CONCAT44(uVar17,1);
                        if (uVar8 != 0) goto code_r0x08006db8;
code_r0x08006db0:
                        uStack_90 = uStack_90 | 0x2000000;
                    }
code_r0x08006db8:
                    iVar12 = iVar12 + iVar15 * 0x18;
                    uVar16 = *(iVar12 + 0x10);
                    uVar2 = *(iVar12 + 8);
                    *(arg1 + 0x9a8) = *arg2 != '\0';
                    *(arg1 + 0x9a0) = uVar16;
                    *(arg1 + 0x9ac) = uVar2;
                    uStack_a8 = uVar18;
                    uVar6 = sym._i3c_geni_execute_command(unaff_x19,&uStack_98);
                    if (uVar6 != 0) {
                        pcVar21 = uVar6;
                        goto code_r0x08007288;
                    }
                    if (*(arg2 + 1) == '\a') {
                        do {
                            uStack_78 = 0;
                            uStack_70 = 0;
                            uStack_88 = 1;
                            ipc_log_string(*(arg1 + 0x938),"i3c entdaa read\n");
                            if (*(arg1 + -0x68) != 0) {
                                sym.i3c_trace_log(*(arg1 + -0x68),0x8000d61,in_x2,in_x3);
                            }
                            uStack_84 = 0x300010400000002;
                            *(arg1 + 0x9a8) = 0x800000001;
                            *(arg1 + 0x9a0) = &uStack_70;
                            iVar7 = sym._i3c_geni_execute_command(unaff_x19,&uStack_88);
                            arg2 = pcStack_b8;
                            if (iVar7 != 0) goto code_r0x08006cc0;
                            uVar3 = uStack_70;
                            uVar11 = uStack_70._1_1_;
                            unaff_x28 = uStack_70._1_1_;
                            unaff_x27 = (uStack_70 & 0xff) << 0x28 | unaff_x28 << 0x20 |
                                        (uStack_70 >> 0x10 & 0xff) << 0x18 | (uStack_70 >> 0x18 & 0xff) << 0x10 |
                                        (uStack_70 >> 0x20 & 0xff) << 8 | uStack_70 >> 0x28 & 0xff;
                            for (piVar19 = *unaff_x24; piVar19 != unaff_x24; piVar19 = *piVar19) {
                                if (unaff_x27 == piVar19[3]) {
                                    in_x2 = unaff_x27;
                                    ipc_log_string(*(arg1 + 0x938),"PID 0x:%x matched with boardinfo\n");
                                    if (*(arg1 + -0x68) != 0) {
                                        in_x2 = unaff_x27;
                                        sym.i3c_trace_log(*(arg1 + -0x68),0x8001416,unaff_x27,in_x3);
                                    }
                                    break;
                                }
                            }
                            if (piVar19 == NULL) {
                                ipc_log_string(*(arg1 + 0x938),"Invalid i3cboardinfo\n");
                                arg2 = pcStack_b8;
                                if (*(arg1 + -0x68) != 0) {
                                    sym.i3c_trace_log(*(arg1 + -0x68),0x800063b,in_x2,in_x3);
                                    arg2 = pcStack_b8;
                                }
                                goto code_r0x08006cc0;
                            }
                            uVar6 = *(piVar19 + 2);
                            if (0x7d < uVar6 - 1) {
                                uVar6 = 0;
                            }
                            pcVar21 = uVar6;
                            uVar6 = i3c_master_get_free_addr(iStack_a0,pcVar21);
                            unaff_x25 = uVar6;
                            if (uVar6 < 0) {
                                in_x2 = "geni_i3c_perform_daa";
                                in_x3 = pcVar21;
                                ipc_log_string(*(arg1 + 0x938),"%s: Asked addr:%d not free, ret:%d\n",
                                               "geni_i3c_perform_daa",pcVar21,unaff_x25);
                                iVar12 = *(arg1 + -0x68);
                                arg2 = pcStack_b8;
                                if (iVar12 == 0) goto code_r0x08006cc0;
                                pcVar10 = "%s: Asked addr:%d not free, ret:%d\n";
                                goto code_r0x08006cb8;
                            }
                            unaff_x28 = CONCAT11(uVar3,uVar11);
                            *(piVar19 + 2) = uVar6;
                            in_x3 = unaff_x27;
                            if ((uVar6 >> 7 & 1) == 0) {
                                if ((*(unaff_x19 + (uVar6 >> 6 & 3) * 8 + 0xa28) & 1 << (uVar6 & 0x1f)) == 0) {
                                    pcVar21 = unaff_x25;
                                    uVar8 = uVar6;
                                    if (uVar6 != (uVar6 & 0xff)) goto code_r0x0800703c;
                                }
                                else {
                                    uVar6 = uVar6 & 0xff;
                                    ipc_log_string(*(arg1 + 0x938),"%s:slot addr:%d not free, try new addr:%d\n",
                                                   "geni_i3c_perform_daa",uVar6,uVar6 + 1);
                                    if (*(arg1 + -0x68) != 0) {
                                        sym.i3c_trace_log(*(arg1 + -0x68),0x800153c,0x8001527,uVar6);
                                    }
                                    uVar8 = i3c_master_get_free_addr(iStack_a0,uVar6 + 1);
                                    unaff_x25 = uVar8;
                                    if (uVar8 < 0) {
                                        in_x2 = unaff_x25;
                                        ipc_log_string(*(arg1 + 0x938),
                                                       "error:%d during get_free_addr, pid:0x:%x, mid:0x%x\n",unaff_x25
                                                       ,unaff_x27,unaff_x28);
                                        arg2 = pcStack_b8;
                                        if (*(arg1 + -0x68) != 0) {
                                            in_x2 = uVar8;
                                            in_x3 = unaff_x27;
                                            sym.i3c_trace_log(*(arg1 + -0x68),0x80011ae,in_x2,unaff_x27);
                                            arg2 = pcStack_b8;
                                        }
                                        goto code_r0x08006cc0;
                                    }
                                    *(piVar19 + 2) = uVar8;
                                    pcVar21 = unaff_x25;
                                    if (uVar8 != (uVar8 & 0xff)) goto code_r0x0800703c;
                                }
code_r0x08006ff0:
                                in_x2 = unaff_x25;
                                ipc_log_string(*(arg1 + 0x938),"assign requested addr:0x%x for pid:0x:%x, mid:0x%x\n",
                                               unaff_x25,unaff_x27,unaff_x28);
                                if (*(arg1 + -0x68) != 0) {
                                    in_x2 = unaff_x25;
                                    in_x3 = unaff_x27;
                                    sym.i3c_trace_log(*(arg1 + -0x68),0x800057e,unaff_x25,unaff_x27);
                                }
                            }
                            else {
                                uVar8 = uVar6;
                                pcVar21 = uVar8;
                                if (uVar6 == (uVar6 & 0xff)) goto code_r0x08006ff0;
code_r0x0800703c:
                                uVar8 = pcVar21;
                                in_x2 = unaff_x25;
                                if ((pcVar21 & 0xff) == 0) {
                                    ipc_log_string(*(arg1 + 0x938),"assigning addr:0x%x for pid:x:%x\n");
                                    if (*(arg1 + -0x68) != 0) {
                                        in_x2 = unaff_x25;
                                        in_x3 = unaff_x27;
                                        sym.i3c_trace_log(*(arg1 + -0x68),0x800131f,unaff_x25,unaff_x27);
                                    }
                                    uVar8 = 0;
                                }
                                else {
                                    for (piVar13 = *piStack_b0; piVar13 != piStack_b0; piVar13 = *piVar13) {
                                        if (piVar13[4] == unaff_x27) {
                                            uVar11 = *(piVar13 + 0x2b);
                                            in_x2 = uVar11;
                                            uVar8 = uVar11;
                                            ipc_log_string(*(arg1 + 0x938),
                                                           "assigning requested addr:0x%x for pid:0x:%x\n");
                                            if (*(arg1 + -0x68) != 0) {
                                                in_x2 = uVar8;
                                                in_x3 = unaff_x27;
                                                sym.i3c_trace_log(*(arg1 + -0x68),0x80015aa,in_x2,unaff_x27);
                                            }
                                            bVar4 = true;
                                            uVar6 = uVar11;
                                            if (*(piVar19 + 2) != '\0') goto code_r0x080070f4;
                                            goto code_r0x080070f0;
                                        }
                                    }
                                    ipc_log_string(*(arg1 + 0x938),"new dev: assigning addr:0x%x for pid:x:%x\n");
                                    if (*(arg1 + -0x68) != 0) {
                                        in_x2 = unaff_x25;
                                        in_x3 = unaff_x27;
                                        sym.i3c_trace_log(*(arg1 + -0x68),0x80017ad,unaff_x25,unaff_x27);
                                    }
                                }
                            }
                            bVar4 = false;
                            uVar6 = uVar8;
                            if (*(piVar19 + 2) == '\0') {
code_r0x080070f0:
                                uVar8 = uVar6;
                                *(piVar19 + 2) = uVar8;
                            }
code_r0x080070f4:
                            uVar6 = uVar8 & 0xff;
                            if (!bVar4 && -1 < uVar8) {
                                iVar12 = unaff_x19 + (uVar6 >> 6) * 8;
                                *(iVar12 + 0xa28) = *(iVar12 + 0xa28) | 1 << (uVar8 & 0x1f);
                            }
                            uStack_78._0_1_ = uVar8 << 1;
                            __sw_hweight8(uVar8 & 0x7f);
                            uVar8 = uVar8 & 1;
                            uVar11 = uVar8;
                            uVar14 = uVar6;
                            if (uVar6 != 0) {
                                do {
                                    uVar8 = uVar14 >> 1 & 1 ^ uVar8;
                                    uVar11 = uVar8;
                                    bVar4 = 1 < uVar14;
                                    uVar14 = uVar14 >> 1;
                                } while (bVar4);
                            }
                            uStack_78 = CONCAT71(uStack_78._1_7_,uVar11 | uVar6 << 1) ^ 1;
                            uStack_84 = 0x500000400000001;
                            *(arg1 + 0x9a0) = &uStack_78;
                            *(arg1 + 0x9a8) = 0x100000000;
                            uVar6 = sym._i3c_geni_execute_command(unaff_x19,&uStack_88);
                        } while (uVar6 == 0);
                        pcVar21 = uVar6;
                        in_x2 = "geni_i3c_perform_daa";
                        in_x3 = pcVar21;
                        ipc_log_string(*(arg1 + 0x938),"%s: Failed:%d to assign DA:%d\n","geni_i3c_perform_daa",
                                       pcVar21,uStack_78 & 0xff);
                        iVar12 = *(arg1 + -0x68);
                        arg2 = pcStack_b8;
                        if (iVar12 != 0) {
                            pcVar10 = "%s: Failed:%d to assign DA:%d\n";
code_r0x08006cb8:
                            in_x2 = "geni_i3c_perform_daa";
                            sym.i3c_trace_log(iVar12,pcVar10,0x8001527,pcVar21);
                            in_x3 = pcVar21;
                            arg2 = pcStack_b8;
                        }
                    }
code_r0x08006cc0:
                    unaff_x26 = "PID 0x:%x matched with boardinfo\n";
                    unaff_x21 = "i3c entdaa read\n";
                    uVar6 = *(arg2 + 4);
                    uVar8 = uStack_a8 + 1;
                    uVar18 = uVar8;
                } while (uVar8 < uVar6);
            }
            pcVar21 = NULL;
code_r0x08007288:
            in_x2 = pcVar21;
            ipc_log_string(*(arg1 + 0x938),"i3c ccc: txn ret:%d\n");
            if (*(arg1 + -0x68) == 0) {
                arg2 = 0;
            }
            else {
                in_x2 = pcVar21;
                sym.i3c_trace_log(*(arg1 + -0x68),0x80007ee,pcVar21,in_x3);
                arg2 = *(arg1 + -0x68);
            }
            uVar16 = ktime_get_mono_fast_ns();
            *(arg2 + 0x218) = uVar16;
            __pm_runtime_suspend(*(arg1 + -0x68),0xd);
            mutex_unlock(arg1 + 0x960);
        }
    }
    else {
        pcVar21 = 0xffffffea;
    }
    uVar6 = in_x2;
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return pcVar21;
    }
    auVar22 = __stack_chk_fail();
    pcVar10 = auVar22._8_8_;
    *extraout_x18 = sym.geni_i3c_master_priv_xfers;
    pcStack_118 = sym.geni_i3c_master_priv_xfers;
    iVar12 = sp_el0;
    iStack_128 = *(iVar12 + 0x5e0);
    uVar18 = uVar6 - 1;
    puStack_120 = &stack0xffffffffffffffa0;
    uStack_110 = unaff_x28;
    pcStack_108 = unaff_x27;
    pcStack_100 = unaff_x26;
    pcStack_f8 = unaff_x25;
    piStack_f0 = unaff_x24;
    pcStack_e8 = pcVar21;
    pcStack_e0 = unaff_x22;
    pcStack_d8 = unaff_x21;
    iStack_d0 = arg2;
    iStack_c8 = unaff_x19;
    if (uVar6 < 1) {
        pcVar21 = NULL;
    }
    else {
        iVar12 = *(auVar22._0_8_ + 0x10);
        piVar19 = iVar12 + -0x70;
        uVar9 = sym.i3c_geni_runtime_get_mutex_lock(piVar19);
        pcVar21 = uVar9 & 0xffffffff;
        if (uVar9 == 0) {
            uVar8 = sym.readl_relaxed(*piVar19 + 0x908);
            if ((~uVar8 & 3) != 0) {
                ipc_log_string(*(iVar12 + 0x938),"%s:IO lines:0x%x not in good state\n","geni_i3c_master_priv_xfers",
                               uVar8);
                if (*(iVar12 + -0x68) != 0) {
                    sym.i3c_trace_log(*(iVar12 + -0x68),0x800108c,0x8000651,uVar8);
                }
            }
            sym.qcom_geni_i3c_conf(piVar19);
            bVar4 = true;
            uVar9 = 0;
            do {
                arg4_00 = uVar9 < uVar18;
                uVar8 = uVar9 < uVar18;
                uStack_138 = 1;
                if (0x40 < *(pcVar10 + 2)) {
                    uStack_138 = 2;
                }
                uStack_130 = 0x2000000;
                if (bVar4 == false) {
                    uStack_130 = 0;
                }
                arg4 = uVar8;
                uStack_130 = uVar8 << 2 | (*(auVar22._0_8_ + 0x2b) & 0x7f) << 9 | uStack_130;
                ipc_log_string(*(iVar12 + 0x938),"%s: stall:%d,use_7e:%d, nxfers:%d,i:%d,m_param:0x%x,rnw:%d\n",
                               "geni_i3c_master_priv_xfers",arg4,bVar4,uVar6,uVar9 & 0xffffffff,uStack_130,
                               *pcVar10);
                if (*(iVar12 + -0x68) != 0) {
                    sym.i3c_trace_log(*(iVar12 + -0x68),0x8001341,0x8000651,arg4_00);
                    arg4 = arg4_00;
                }
                cVar1 = *pcVar10;
                bVar4 = uVar18 <= uVar9;
                uVar2 = *(pcVar10 + 2);
                uStack_134 = 9;
                if (cVar1 != '\0') {
                    uStack_134 = 10;
                }
                *(iVar12 + 0x9a0) = *(pcVar10 + 8);
                *(iVar12 + 0x9ac) = uVar2;
                *(iVar12 + 0x9a8) = cVar1 != '\0';
                uVar8 = sym._i3c_geni_execute_command(piVar19,&uStack_138);
                pcVar21 = uVar8;
                if (uVar8 != 0) break;
                pcVar10 = pcVar10 + 0x18;
                bVar5 = uVar6 - 1 != uVar9;
                uVar9 = uVar9 + 1;
            } while (bVar5);
            ipc_log_string(*(iVar12 + 0x938),"i3c priv: txn ret:%d\n",pcVar21);
            if (*(iVar12 + -0x68) == 0) {
                iVar15 = 0;
            }
            else {
                sym.i3c_trace_log(*(iVar12 + -0x68),0x8000c7d,pcVar21,arg4);
                iVar15 = *(iVar12 + -0x68);
            }
            uVar16 = ktime_get_mono_fast_ns();
            *(iVar15 + 0x218) = uVar16;
            __pm_runtime_suspend(*(iVar12 + -0x68),0xd);
            mutex_unlock(iVar12 + 0x960);
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) != iStack_128) {
        iVar12 = __stack_chk_fail();
        *extraout_x18_00 = sym.geni_i3c_master_attach_i2c_dev;
        iVar20 = *(iVar12 + 0x10);
        iVar15 = devm_kmalloc(*(iVar20 + -0x68),0x10,0xdc0);
        if (iVar15 == 0) {
            pcVar21 = 0xfffffff4;
        }
        else {
            ipc_log_string(*(iVar20 + 0x938),"%s %d\n","geni_i3c_master_attach_i2c_dev",1);
            if (*(iVar20 + -0x68) != 0) {
                sym.i3c_trace_log(*(iVar20 + -0x68),0x8001700,0x80010b0,1);
            }
            pcVar21 = NULL;
            *(iVar12 + 0x18) = iVar15;
        }
        return pcVar21;
    }
    return pcVar21;
}


// ===== sym.geni_i3c_master_priv_xfers @ 0x08007320 (size 664) =====

uint64_t sym.geni_i3c_master_priv_xfers(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint16_t uVar2;
    bool bVar3;
    bool bVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    ulong uVar7;
    uint64_t arg4;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *arg1_00;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    uint uStack_78;
    uint uStack_74;
    uint32_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    uVar11 = arg3 - 1;
    if (arg3 < 1) {
        uVar12 = 0;
    }
    else {
        iVar8 = *(arg1 + 0x10);
        arg1_00 = iVar8 + -0x70;
        uVar6 = sym.i3c_geni_runtime_get_mutex_lock(arg1_00);
        uVar12 = uVar6 & 0xffffffff;
        if (uVar6 == 0) {
            uVar5 = sym.readl_relaxed(*arg1_00 + 0x908);
            if ((~uVar5 & 3) != 0) {
                ipc_log_string(*(iVar8 + 0x938),"%s:IO lines:0x%x not in good state\n","geni_i3c_master_priv_xfers",
                               uVar5);
                if (*(iVar8 + -0x68) != 0) {
                    sym.i3c_trace_log(*(iVar8 + -0x68),0x800108c,0x8000651,uVar5);
                }
            }
            sym.qcom_geni_i3c_conf(arg1_00);
            bVar3 = true;
            uVar6 = 0;
            do {
                uVar12 = uVar6 < uVar11;
                uVar5 = uVar6 < uVar11;
                uStack_78 = 1;
                if (0x40 < *(arg2 + 2)) {
                    uStack_78 = 2;
                }
                uStack_70 = 0x2000000;
                if (bVar3 == false) {
                    uStack_70 = 0;
                }
                arg4 = uVar5;
                uStack_70 = uVar5 << 2 | (*(arg1 + 0x2b) & 0x7f) << 9 | uStack_70;
                ipc_log_string(*(iVar8 + 0x938),"%s: stall:%d,use_7e:%d, nxfers:%d,i:%d,m_param:0x%x,rnw:%d\n",
                               "geni_i3c_master_priv_xfers",arg4,bVar3,arg3 & 0xffffffffU,uVar6 & 0xffffffff,
                               uStack_70,*arg2);
                if (*(iVar8 + -0x68) != 0) {
                    sym.i3c_trace_log(*(iVar8 + -0x68),0x8001341,0x8000651,uVar12);
                    arg4 = uVar12;
                }
                cVar1 = *arg2;
                bVar3 = uVar11 <= uVar6;
                uVar2 = *(arg2 + 2);
                uStack_74 = 9;
                if (cVar1 != '\0') {
                    uStack_74 = 10;
                }
                *(iVar8 + 0x9a0) = *(arg2 + 8);
                *(iVar8 + 0x9ac) = uVar2;
                *(iVar8 + 0x9a8) = cVar1 != '\0';
                uVar5 = sym._i3c_geni_execute_command(arg1_00,&uStack_78);
                uVar12 = uVar5;
                if (uVar5 != 0) break;
                arg2 = arg2 + 0x18;
                bVar4 = (arg3 & 0xffffffffU) - 1 != uVar6;
                uVar6 = uVar6 + 1;
            } while (bVar4);
            ipc_log_string(*(iVar8 + 0x938),"i3c priv: txn ret:%d\n",uVar12);
            if (*(iVar8 + -0x68) == 0) {
                iVar9 = 0;
            }
            else {
                sym.i3c_trace_log(*(iVar8 + -0x68),0x8000c7d,uVar12,arg4);
                iVar9 = *(iVar8 + -0x68);
            }
            uVar7 = ktime_get_mono_fast_ns();
            *(iVar9 + 0x218) = uVar7;
            __pm_runtime_suspend(*(iVar8 + -0x68),0xd);
            mutex_unlock(iVar8 + 0x960);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return uVar12;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.geni_i3c_master_attach_i2c_dev;
    iVar10 = *(iVar8 + 0x10);
    iVar9 = devm_kmalloc(*(iVar10 + -0x68),0x10,0xdc0);
    if (iVar9 == 0) {
        uVar11 = 0xfffffff4;
    }
    else {
        ipc_log_string(*(iVar10 + 0x938),"%s %d\n","geni_i3c_master_attach_i2c_dev",1);
        if (*(iVar10 + -0x68) != 0) {
            sym.i3c_trace_log(*(iVar10 + -0x68),0x8001700,0x80010b0,1);
        }
        uVar11 = 0;
        *(iVar8 + 0x18) = iVar9;
    }
    return uVar11;
}


// ===== sym.geni_i3c_master_attach_i2c_dev @ 0x080075b8 (size 156) =====

ulong sym.geni_i3c_master_attach_i2c_dev(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x10);
    iVar1 = devm_kmalloc(*(iVar3 + -0x68),0x10,0xdc0);
    if (iVar1 == 0) {
        uVar2 = 0xfffffff4;
    }
    else {
        ipc_log_string(*(iVar3 + 0x938),"%s %d\n","geni_i3c_master_attach_i2c_dev",1);
        if (*(iVar3 + -0x68) != 0) {
            sym.i3c_trace_log(*(iVar3 + -0x68),0x8001700,0x80010b0,1);
        }
        uVar2 = 0;
        *(arg1 + 0x18) = iVar1;
    }
    return uVar2;
}


// ===== sym.geni_i3c_master_detach_i2c_dev @ 0x08007654 (size 16) =====

void sym.geni_i3c_master_detach_i2c_dev(int64_t arg1)

{
    *(arg1 + 0x18) = 0;
    return;
}


// ===== sym.geni_i3c_master_i2c_xfers @ 0x08007664 (size 500) =====

char * sym.geni_i3c_master_i2c_xfers(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    int iVar6;
    ulong uVar7;
    int64_t arg1_00;
    char *pcVar8;
    uint64_t in_x3;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    char *arg3_00;
    uint64_t uVar11;
    uint16_t *puVar12;
    int64_t iVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uint uStack_68;
    uint uStack_64;
    uint32_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    iVar9 = *(arg1 + 0x10);
    iVar10 = iVar9 + -0x70;
    if (arg2 == 0) {
        pcVar8 = "geni_i3c_master_i2c_xfers";
        ipc_log_string(*(iVar9 + 0x938),"%s: client msg is NULL\n");
        if (*(iVar9 + -0x68) != 0) {
            pcVar8 = "geni_i3c_master_i2c_xfers";
            sym.i3c_trace_log(*(iVar9 + -0x68),0x800075e,0x80005b2,in_x3);
        }
        arg3_00 = NULL;
    }
    else {
        uVar11 = arg3 & 0xffffffff;
        pcVar8 = arg3;
        uVar5 = sym.i3c_geni_runtime_get_mutex_lock(iVar10);
        arg3_00 = uVar5;
        if (uVar5 == 0) {
            sym.qcom_geni_i3c_conf(iVar10);
            in_x3 = *(arg2 + 4);
            ipc_log_string(*(iVar9 + 0x938),"i2c xfer:num:%d, msgs:len:%d,flg:%d\n",uVar11,in_x3,*(arg2 + 2));
            if (*(iVar9 + -0x68) != 0) {
                in_x3 = *(arg2 + 4);
                sym.i3c_trace_log(*(iVar9 + -0x68),0x8000f0f,uVar11,in_x3);
            }
            if (0 < arg3) {
                uVar14 = 0;
                puVar12 = arg2 + 4;
                do {
                    uVar3 = puVar12[-1];
                    uVar4 = puVar12[-2];
                    uVar2 = *puVar12;
                    uStack_64 = 1;
                    if ((uVar3 & 1) != 0) {
                        uStack_64 = 2;
                    }
                    *(iVar9 + 0x9a0) = *(puVar12 + 2);
                    uStack_68 = 1;
                    if (0x20 < uVar2) {
                        uStack_68 = 2;
                    }
                    *(iVar9 + 0x9a8) = uVar3 & 1;
                    uStack_60 = (uVar4 & 0x7f) << 9 | (uVar14 < arg3 - 1) << 2;
                    *(iVar9 + 0x9ac) = uVar2;
                    uVar5 = sym._i3c_geni_execute_command(iVar10,&uStack_68);
                    if (uVar5 != 0) {
                        arg3_00 = uVar5;
                        goto code_r0x080077c4;
                    }
                    uVar14 = uVar14 + 1;
                    puVar12 = puVar12 + 8;
                } while (uVar11 != uVar14);
            }
            arg3_00 = NULL;
code_r0x080077c4:
            pcVar8 = arg3_00;
            ipc_log_string(*(iVar9 + 0x938),"i2c: txn ret:%d\n");
            if (*(iVar9 + -0x68) == 0) {
                iVar10 = 0;
            }
            else {
                pcVar8 = arg3_00;
                sym.i3c_trace_log(*(iVar9 + -0x68),0x8000776,arg3_00,in_x3);
                iVar10 = *(iVar9 + -0x68);
            }
            uVar7 = ktime_get_mono_fast_ns();
            *(iVar10 + 0x218) = uVar7;
            __pm_runtime_suspend(*(iVar9 + -0x68),0xd);
            mutex_unlock(iVar9 + 0x960);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return arg3_00;
    }
    auVar15 = __stack_chk_fail();
    iVar9 = auVar15._0_8_;
    *extraout_x18 = sym.geni_i3c_master_request_ibi;
    iVar10 = *(iVar9 + 0x10);
    if (*(iVar10 + 0x9d8) == '\0') {
        pcVar8 = 0xffffffff;
    }
    else {
        iVar13 = *(iVar9 + 0x18);
        uVar5 = *auVar15._8_8_;
        if (*(iVar10 + 0x9d9) == '\0') {
            *(iVar10 + 0xa50) = 0;
            *(iVar10 + 0xa00) = 0;
            sym.writel_relaxed(0x5fd74322,*(iVar10 + 0x9e0) + 8);
            sym.geni_i3c_enable_ibi_ctrl(iVar10 + -0x70);
            arg1_00 = sym.readl_relaxed(*(iVar10 + 0x9e0) + 0x14);
            sym.writel_relaxed(arg1_00,*(iVar10 + 0x9e0) + 0x14);
            sym.writel_relaxed(1,*(iVar10 + 0x9e0) + 0xc);
            sym.writel_relaxed(0xffffffff,*(iVar10 + 0x9e0) + 0x1008);
            *(iVar10 + 0x9d9) = 1;
        }
        uVar11 = i3c_generic_ibi_alloc_pool(iVar9,auVar15._8_8_);
        *(iVar13 + 8) = uVar11;
        if (uVar11 < 0xfffffffffffff001) {
            uVar7 = _raw_spin_lock_irqsave(iVar10 + 0x9f8);
            uVar1 = *(iVar10 + 0x9e8);
            uVar11 = 0;
            uVar14 = uVar11;
            if (uVar1 != 0) {
                do {
                    if (*(*(iVar10 + 0x9f0) + uVar11 * 8) == 0) {
                        *(iVar13 + 2) = uVar11;
                        *(*(iVar10 + 0x9f0) + uVar11 * 8) = iVar9;
                        uVar14 = uVar11;
                        break;
                    }
                    uVar11 = uVar11 + 1;
                    uVar14 = uVar1;
                } while (uVar1 != uVar11);
            }
            _raw_spin_unlock_irqrestore(iVar10 + 0x9f8,uVar7);
            if (uVar14 < *(iVar10 + 0x9e8)) {
                *(iVar10 + 0xa50) = 0;
                *(iVar10 + 0xa00) = 0;
                sym.writel_relaxed((uVar5 & 0x3f) << 0xd | *(iVar9 + 0x2b) << 5 | 0x201000,*(iVar10 + 0x9e0) + 0x1000);
                iVar6 = wait_for_completion_timeout(iVar10 + 0xa00,0xfa);
                if (iVar6 == 0) {
                    *(iVar10 + 0xa50) = 0xffffff92;
                    ipc_log_string(*(iVar10 + 0x938),"timeout while adding slave IBI\n");
                    if (*(iVar10 + -0x68) == 0) {
                        _printk(0x80010cf);
                    }
                    else {
                        _dev_err(*(iVar10 + -0x68),"timeout while adding slave IBI\n");
                    }
                    if (*(iVar10 + -0x68) != 0) {
                        sym.i3c_trace_log(*(iVar10 + -0x68),0x80011e2,pcVar8,in_x3);
                    }
                }
                if (*(iVar10 + 0xa50) == 0) {
                    return NULL;
                }
                ipc_log_string(*(iVar10 + 0x938),"error while adding slave IBI 0x%x\n");
                if (*(iVar10 + -0x68) == 0) {
                    _printk(0x8000787,*(iVar10 + 0xa50));
                }
                else {
                    _dev_err(*(iVar10 + -0x68),"error while adding slave IBI 0x%x\n");
                }
                if (*(iVar10 + -0x68) != 0) {
                    sym.i3c_trace_log(*(iVar10 + -0x68),0x8000c93,*(iVar10 + 0xa50),in_x3);
                }
            }
            ipc_log_string(*(iVar10 + 0x938),"ibi.num_slots ran out %d: %d\n",uVar14,*(iVar10 + 0x9e8));
            if (*(iVar10 + -0x68) == 0) {
                _printk(0x8000cb6,uVar14,*(iVar10 + 0x9e8));
            }
            else {
                _dev_err(*(iVar10 + -0x68),"ibi.num_slots ran out %d: %d\n",uVar14,*(iVar10 + 0x9e8));
            }
            if (*(iVar10 + -0x68) != 0) {
                sym.i3c_trace_log(*(iVar10 + -0x68),0x8000803,uVar14,*(iVar10 + 0x9e8));
            }
            i3c_generic_ibi_free_pool(*(iVar13 + 8));
            pcVar8 = 0xffffffe4;
            *(iVar13 + 8) = 0;
        }
        else {
            ipc_log_string(*(iVar10 + 0x938),"Error creating a generic IBI pool %d\n",uVar11);
            if (*(iVar10 + -0x68) == 0) {
                _printk(0x8000aef,*(iVar13 + 8));
            }
            else {
                _dev_err(*(iVar10 + -0x68),"Error creating a generic IBI pool %d\n");
            }
            if (*(iVar10 + -0x68) != 0) {
                sym.i3c_trace_log(*(iVar10 + -0x68),0x8001a44,*(iVar13 + 8),in_x3);
            }
            pcVar8 = *(iVar13 + 8);
        }
    }
    return pcVar8;
}


// ===== sym.geni_i3c_master_request_ibi @ 0x08007858 (size 792) =====

uint sym.geni_i3c_master_request_ibi(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint uVar4;
    int64_t arg1_00;
    uint64_t uVar5;
    ulong uVar6;
    int64_t in_x2;
    int64_t in_x3;
    int64_t iVar7;
    ulong *in_x18;
    uint64_t arg3;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(arg1 + 0x10);
    if (*(iVar7 + 0x9d8) == '\0') {
        uVar4 = 0xffffffff;
    }
    else {
        iVar8 = *(arg1 + 0x18);
        uVar1 = *arg2;
        if (*(iVar7 + 0x9d9) == '\0') {
            *(iVar7 + 0xa50) = 0;
            *(iVar7 + 0xa00) = 0;
            sym.writel_relaxed(0x5fd74322,*(iVar7 + 0x9e0) + 8);
            sym.geni_i3c_enable_ibi_ctrl(iVar7 + -0x70);
            arg1_00 = sym.readl_relaxed(*(iVar7 + 0x9e0) + 0x14);
            sym.writel_relaxed(arg1_00,*(iVar7 + 0x9e0) + 0x14);
            sym.writel_relaxed(1,*(iVar7 + 0x9e0) + 0xc);
            sym.writel_relaxed(0xffffffff,*(iVar7 + 0x9e0) + 0x1008);
            *(iVar7 + 0x9d9) = 1;
        }
        uVar5 = i3c_generic_ibi_alloc_pool(arg1,arg2);
        *(iVar8 + 8) = uVar5;
        if (uVar5 < 0xfffffffffffff001) {
            uVar6 = _raw_spin_lock_irqsave(iVar7 + 0x9f8);
            uVar2 = *(iVar7 + 0x9e8);
            uVar5 = 0;
            arg3 = uVar5;
            if (uVar2 != 0) {
                do {
                    if (*(*(iVar7 + 0x9f0) + uVar5 * 8) == 0) {
                        *(iVar8 + 2) = uVar5;
                        *(*(iVar7 + 0x9f0) + uVar5 * 8) = arg1;
                        arg3 = uVar5;
                        break;
                    }
                    uVar5 = uVar5 + 1;
                    arg3 = uVar2;
                } while (uVar2 != uVar5);
            }
            _raw_spin_unlock_irqrestore(iVar7 + 0x9f8,uVar6);
            if (arg3 < *(iVar7 + 0x9e8)) {
                *(iVar7 + 0xa50) = 0;
                *(iVar7 + 0xa00) = 0;
                sym.writel_relaxed((uVar1 & 0x3f) << 0xd | *(arg1 + 0x2b) << 5 | 0x201000,*(iVar7 + 0x9e0) + 0x1000);
                iVar3 = wait_for_completion_timeout(iVar7 + 0xa00,0xfa);
                if (iVar3 == 0) {
                    *(iVar7 + 0xa50) = 0xffffff92;
                    ipc_log_string(*(iVar7 + 0x938),"timeout while adding slave IBI\n");
                    if (*(iVar7 + -0x68) == 0) {
                        _printk(0x80010cf);
                    }
                    else {
                        _dev_err(*(iVar7 + -0x68),"timeout while adding slave IBI\n");
                    }
                    if (*(iVar7 + -0x68) != 0) {
                        sym.i3c_trace_log(*(iVar7 + -0x68),0x80011e2,in_x2,in_x3);
                    }
                }
                if (*(iVar7 + 0xa50) == 0) {
                    return 0;
                }
                ipc_log_string(*(iVar7 + 0x938),"error while adding slave IBI 0x%x\n");
                if (*(iVar7 + -0x68) == 0) {
                    _printk(0x8000787,*(iVar7 + 0xa50));
                }
                else {
                    _dev_err(*(iVar7 + -0x68),"error while adding slave IBI 0x%x\n");
                }
                if (*(iVar7 + -0x68) != 0) {
                    sym.i3c_trace_log(*(iVar7 + -0x68),0x8000c93,*(iVar7 + 0xa50),in_x3);
                }
            }
            ipc_log_string(*(iVar7 + 0x938),"ibi.num_slots ran out %d: %d\n",arg3,*(iVar7 + 0x9e8));
            if (*(iVar7 + -0x68) == 0) {
                _printk(0x8000cb6,arg3,*(iVar7 + 0x9e8));
            }
            else {
                _dev_err(*(iVar7 + -0x68),"ibi.num_slots ran out %d: %d\n",arg3,*(iVar7 + 0x9e8));
            }
            if (*(iVar7 + -0x68) != 0) {
                sym.i3c_trace_log(*(iVar7 + -0x68),0x8000803,arg3,*(iVar7 + 0x9e8));
            }
            i3c_generic_ibi_free_pool(*(iVar8 + 8));
            uVar4 = 0xffffffe4;
            *(iVar8 + 8) = 0;
        }
        else {
            ipc_log_string(*(iVar7 + 0x938),"Error creating a generic IBI pool %d\n",uVar5);
            if (*(iVar7 + -0x68) == 0) {
                _printk(0x8000aef,*(iVar8 + 8));
            }
            else {
                _dev_err(*(iVar7 + -0x68),"Error creating a generic IBI pool %d\n");
            }
            if (*(iVar7 + -0x68) != 0) {
                sym.i3c_trace_log(*(iVar7 + -0x68),0x8001a44,*(iVar8 + 8),in_x3);
            }
            uVar4 = *(iVar8 + 8);
        }
    }
    return uVar4;
}


// ===== sym.geni_i3c_master_free_ibi @ 0x08007b70 (size 132) =====

void sym.geni_i3c_master_free_ibi(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x10);
    iVar2 = *(arg1 + 0x18);
    if ((*(iVar1 + 0x9d8) != '\0') || (*(iVar1 + 0x9d9) != '\0')) {
        sym.qcom_geni_i3c_ibi_unconf(iVar1 + -0x70);
        uVar3 = _raw_spin_lock_irqsave(iVar1 + 0x9f8);
        *(*(iVar1 + 0x9f0) + *(iVar2 + 2) * 8) = 0;
        *(iVar2 + 2) = 0xffff;
        _raw_spin_unlock_irqrestore(iVar1 + 0x9f8,uVar3);
        i3c_generic_ibi_free_pool(*(iVar2 + 8));
    }
    return;
}


// ===== sym.geni_i3c_master_enable_ibi @ 0x08007bf4 (size 204) =====

int sym.geni_i3c_master_enable_ibi(int64_t arg1)

{
    int iVar1;
    int64_t in_x3;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x10);
    if ((*(iVar2 + 0x9d8) == '\0') && (*(iVar2 + 0x9d9) == '\0')) {
        iVar1 = -1;
    }
    else {
        iVar1 = i3c_master_enec_locked(iVar2,*(arg1 + 0x2b),1);
        if (iVar1 != 0) {
            ipc_log_string(*(iVar2 + 0x938),"%s: error while i3c_master_enec_locked\n","geni_i3c_master_enable_ibi");
            if (*(iVar2 + -0x68) == 0) {
                _printk(0x8000a07,"geni_i3c_master_enable_ibi");
            }
            else {
                _dev_err(*(iVar2 + -0x68),"%s: error while i3c_master_enec_locked\n","geni_i3c_master_enable_ibi");
            }
            if (*(iVar2 + -0x68) != 0) {
                sym.i3c_trace_log(*(iVar2 + -0x68),0x800066c,0x8001bcd,in_x3);
            }
        }
    }
    return iVar1;
}


// ===== sym.geni_i3c_master_disable_ibi @ 0x08007cc0 (size 204) =====

int sym.geni_i3c_master_disable_ibi(int64_t arg1)

{
    int iVar1;
    int64_t in_x3;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x10);
    if ((*(iVar2 + 0x9d8) == '\0') && (*(iVar2 + 0x9d9) == '\0')) {
        iVar1 = -1;
    }
    else {
        iVar1 = i3c_master_disec_locked(iVar2,*(arg1 + 0x2b),1);
        if (iVar1 != 0) {
            ipc_log_string(*(iVar2 + 0x938),"%s: error while i3c_master_disec_locked\n","geni_i3c_master_disable_ibi")
            ;
            if (*(iVar2 + -0x68) == 0) {
                _printk(0x8001567,"geni_i3c_master_disable_ibi");
            }
            else {
                _dev_err(*(iVar2 + -0x68),"%s: error while i3c_master_disec_locked\n","geni_i3c_master_disable_ibi");
            }
            if (*(iVar2 + -0x68) != 0) {
                sym.i3c_trace_log(*(iVar2 + -0x68),0x8001be8,0x8000bd3,in_x3);
            }
        }
    }
    return iVar1;
}


// ===== sym.geni_i3c_master_recycle_ibi_slot @ 0x08007d8c (size 44) =====

void sym.geni_i3c_master_recycle_ibi_slot(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i3c_generic_ibi_recycle_slot(*(*(arg1 + 0x18) + 8));
    return;
}


// ===== sym.qcom_geni_i3c_conf @ 0x08007db8 (size 348) =====

uint64_t sym.qcom_geni_i3c_conf(int64_t arg1)

{
    uint32_t *puVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int in_w1;
    char *arg3;
    uint64_t uVar10;
    uint32_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_38 = *(iVar12 + 0x5e0);
    iVar12 = *(arg1 + 0xa38);
    uStack_40 = 0;
    if (in_w1 == 0) {
        iVar12 = *(arg1 + 0xa40);
    }
    puVar1 = arg1 + 0xa08;
    arg3 = puVar1;
    iVar6 = geni_se_clk_freq_match(arg1,*(iVar12 + 4) * 1000,puVar1,&uStack_40,0);
    if (iVar6 == 0) {
        uVar10 = *puVar1;
    }
    else {
        uVar10 = 0;
        *puVar1 = 0;
    }
    if (uVar10 != *(arg1 + 0xa0c)) {
        arg3 = "qcom_geni_i3c_conf";
        ipc_log_string(*(arg1 + 0x9a8),"dfs index:%d, prev_dfs_idx:%d\n");
        if (*(arg1 + 8) != 0) {
            uVar10 = *(arg1 + 0xa08);
            arg3 = "qcom_geni_i3c_conf";
            sym.i3c_trace_log(*(arg1 + 8),0x800178e,0x80006f9,uVar10);
        }
    }
    *(arg1 + 0xa0c) = *(arg1 + 0xa08);
    sym.writel_relaxed(*(arg1 + 0xa08),*arg1 + 0x7c);
    sym.writel_relaxed(*(iVar12 + 8) << 4 | 1,*arg1 + 0x48);
    sym.writel_relaxed(*(iVar12 + 0x10) | *(iVar12 + 9) << 0x14 | *(iVar12 + 10) << 10,*arg1 + 0x278);
    sym.writel_relaxed(*(iVar12 + 0xc),*arg1 + 0x27c);
    uVar8 = sym.writel_relaxed(*(iVar12 + 0xb),*arg1 + 0x268);
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_38) {
        return uVar8;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.i3c_geni_runtime_get_mutex_lock;
    mutex_lock(iVar9 + 0x9d0);
    iVar12 = *(iVar9 + 8);
    *(iVar9 + 0x9b0) = 0;
    if ((*(iVar12 + 0x200) & 7) != 0) {
        ipc_log_string(*(iVar9 + 0x9a8),"PM runtime disabled\n");
        if (*(iVar9 + 8) == 0) {
            _printk(0x8001624);
        }
        else {
            _dev_err(*(iVar9 + 8),"PM runtime disabled\n");
        }
        iVar12 = 0;
        if (*(iVar9 + 8) != 0) {
            sym.i3c_trace_log(*(iVar9 + 8),0x8001add,arg3,uVar10);
            iVar12 = *(iVar9 + 8);
        }
    }
    uVar7 = __pm_runtime_resume(iVar12,4);
    if (-1 < uVar7) {
        uVar7 = 0;
        goto code_r0x08007f60;
    }
    ipc_log_string(*(iVar9 + 0x9a8),"error turning on SE resources:%d\n",uVar7);
    if (*(iVar9 + 8) == 0) {
        _printk(0x80012b0,uVar7);
        iVar12 = *(iVar9 + 8);
        if (iVar12 == 0) goto code_r0x08008034;
code_r0x08007fdc:
        sym.i3c_trace_log(iVar12,0x8000a98,uVar7,uVar10);
        iVar12 = *(iVar9 + 8);
    }
    else {
        _dev_err(*(iVar9 + 8),"error turning on SE resources:%d\n",uVar7);
        iVar12 = *(iVar9 + 8);
        if (iVar12 != 0) goto code_r0x08007fdc;
code_r0x08008034:
        iVar12 = 0;
    }
    puVar2 = iVar12 + 0x1f8;
    uVar10 = *puVar2;
    do {
        uVar11 = uVar10;
        if (uVar11 == 0) break;
        Hint_Prefetch(puVar2,2,0,1);
        do {
            uVar3 = *puVar2;
            uVar10 = uVar3;
            if (uVar3 != uVar11) goto code_r0x08008064;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08008064:
    } while (uVar11 != uVar3);
    __pm_runtime_set_status(*(iVar9 + 8),2);
    mutex_unlock(iVar9 + 0x9d0);
code_r0x08007f60:
    return uVar7;
}


// ===== sym.i3c_geni_runtime_get_mutex_lock @ 0x08007f14 (size 424) =====

uint64_t sym.i3c_geni_runtime_get_mutex_lock(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t in_x2;
    int64_t in_x3;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x9d0);
    iVar6 = *(arg1 + 8);
    *(arg1 + 0x9b0) = 0;
    if ((*(iVar6 + 0x200) & 7) != 0) {
        ipc_log_string(*(arg1 + 0x9a8),"PM runtime disabled\n");
        if (*(arg1 + 8) != 0) {
            uVar8 = _dev_err(*(arg1 + 8),"PM runtime disabled\n");
            return uVar8;
        }
        _printk(0x8001624);
        iVar6 = 0;
        if (*(arg1 + 8) != 0) {
            sym.i3c_trace_log(*(arg1 + 8),0x8001add,in_x2,in_x3);
            iVar6 = *(arg1 + 8);
        }
    }
    uVar5 = __pm_runtime_resume(iVar6,4);
    if (-1 < uVar5) {
        uVar5 = 0;
        goto code_r0x08007f60;
    }
    ipc_log_string(*(arg1 + 0x9a8),"error turning on SE resources:%d\n",uVar5);
    if (*(arg1 + 8) == 0) {
        _printk(0x80012b0,uVar5);
        iVar6 = *(arg1 + 8);
        if (iVar6 == 0) goto code_r0x08008034;
code_r0x08007fdc:
        sym.i3c_trace_log(iVar6,0x8000a98,uVar5,in_x3);
        iVar6 = *(arg1 + 8);
    }
    else {
        _dev_err(*(arg1 + 8),"error turning on SE resources:%d\n",uVar5);
        iVar6 = *(arg1 + 8);
        if (iVar6 != 0) goto code_r0x08007fdc;
code_r0x08008034:
        iVar6 = 0;
    }
    puVar1 = iVar6 + 0x1f8;
    uVar8 = *puVar1;
    do {
        uVar7 = uVar8;
        if (uVar7 == 0) break;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar2 = *puVar1;
            uVar8 = uVar2;
            if (uVar2 != uVar7) goto code_r0x08008064;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar7 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08008064:
    } while (uVar7 != uVar2);
    __pm_runtime_set_status(*(arg1 + 8),2);
    mutex_unlock(arg1 + 0x9d0);
code_r0x08007f60:
    return uVar5;
}


// ===== sym._i3c_geni_execute_command @ 0x080080bc (size 1604) =====

uint64_t sym._i3c_geni_execute_command(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint *puVar7;
    uint64_t arg3;
    ulong *arg4;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar9;
    ulong uVar10;
    int64_t iVar11;
    uint64_t arg3_00;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    iVar8 = arg1 + 0x9b0;
    *(arg1 + 0x9b0) = 0;
    uVar2 = *(arg1 + 0xa18);
    uStack_68 = 0;
    uStack_60 = 0;
    uVar4 = *(arg1 + 0xa1c);
    uVar9 = uVar4;
    geni_se_select_mode(arg1,*arg2);
    *(arg1 + 0x68) = 0;
    *(arg1 + 0xa20) = 0;
    if (uVar2 == 1) {
        sym.writel_relaxed(uVar9,*arg1 + 0x270);
        sym.writel(*(arg2 + 8) & 0x7ffffff | *(arg2 + 4) << 0x1b,*arg1 + 0x600);
        uVar4 = *(arg2 + 4);
        uVar5 = *(arg2 + 8);
        uVar10 = *(arg1 + 0x9a8);
        uVar3 = sym.readl_relaxed(*arg1 + 0x600);
        arg3 = uVar4;
        arg4 = uVar5;
        ipc_log_string(uVar10,"I3C cmd:0x%x param:0x%x READ len:%d, m_cmd: 0x%x\n",arg3,arg4,uVar9,uVar3);
        iVar11 = *(arg1 + 8);
        if (iVar11 != 0) {
            uVar4 = *(arg2 + 4);
            uVar5 = *(arg2 + 8);
            sym.readl_relaxed(*arg1 + 0x600);
            arg3 = uVar4;
            arg4 = uVar5;
            sym.i3c_trace_log(iVar11,0x800045a,arg3,arg4);
        }
        if (*arg2 == 2) {
            arg4 = &uStack_68;
            arg3 = uVar9;
            uVar4 = geni_se_rx_dma_prep(arg1,*(arg1 + 0xa10));
            arg3_00 = uVar4;
            if (uVar4 != 0) {
                arg3 = arg3_00;
                ipc_log_string(*(arg1 + 0x9a8),"DMA Err:%d, FIFO mode enabled\n");
                if (*(arg1 + 8) == 0) {
                    _printk(0x80018c6,arg3_00);
                }
                else {
                    arg3 = arg3_00;
                    _dev_err(*(arg1 + 8),"DMA Err:%d, FIFO mode enabled\n");
                }
                if (*(arg1 + 8) != 0) {
                    arg3 = arg3_00;
                    sym.i3c_trace_log(*(arg1 + 8),0x8001300,arg3_00,arg4);
                }
                *arg2 = 1;
                geni_se_select_mode(arg1,1);
            }
        }
        else {
            arg3_00 = 0;
        }
    }
    else {
        sym.writel_relaxed(uVar9,*arg1 + 0x26c);
        sym.writel(*(arg2 + 8) & 0x7ffffff | *(arg2 + 4) << 0x1b,*arg1 + 0x600);
        uVar5 = *(arg2 + 4);
        uVar1 = *(arg2 + 8);
        uVar10 = *(arg1 + 0x9a8);
        uVar3 = sym.readl_relaxed(*arg1 + 0x600);
        arg3 = uVar5;
        arg4 = uVar1;
        ipc_log_string(uVar10,"I3C cmd:0x%x param:0x%x WRITE len:%d, m_cmd: 0x%x\n",arg3,arg4,uVar9,uVar3);
        iVar11 = *(arg1 + 8);
        if (iVar11 != 0) {
            uVar5 = *(arg2 + 4);
            uVar1 = *(arg2 + 8);
            sym.readl_relaxed(*arg1 + 0x600);
            arg3 = uVar5;
            arg4 = uVar1;
            sym.i3c_trace_log(iVar11,0x800070c,arg3,arg4);
        }
        if (*arg2 == 2) {
            arg4 = &uStack_60;
            arg3 = uVar9;
            uVar5 = geni_se_tx_dma_prep(arg1,*(arg1 + 0xa10));
            arg3_00 = uVar5;
            if (uVar5 != 0) {
                arg3 = arg3_00;
                ipc_log_string(*(arg1 + 0x9a8),"DMA Err:%d, FIFO mode enabled\n");
                if (*(arg1 + 8) == 0) {
                    _printk(0x80018c6,arg3_00);
                }
                else {
                    arg3 = arg3_00;
                    _dev_err(*(arg1 + 8),"DMA Err:%d, FIFO mode enabled\n");
                }
                if (*(arg1 + 8) != 0) {
                    arg3 = arg3_00;
                    sym.i3c_trace_log(*(arg1 + 8),0x8001300,arg3_00,arg4);
                }
                *arg2 = 1;
                geni_se_select_mode(arg1,1);
            }
        }
        else {
            arg3_00 = 0;
        }
        if ((*arg2 == 1) && (uVar4 != 0)) {
            sym.writel_relaxed(1,*arg1 + 0x80c);
        }
    }
    iVar6 = wait_for_completion_timeout(iVar8,0xfa);
    if (iVar6 == 0) {
        ipc_log_string(*(arg1 + 0x9a8),"got wait_for_completion timeout\n");
        if (*(arg1 + 8) == 0) {
            _printk(0x8000d8a);
        }
        else {
            _dev_err(*(arg1 + 8),"got wait_for_completion timeout\n");
        }
        if (*(arg1 + 8) != 0) {
            sym.i3c_trace_log(*(arg1 + 8),0x80009d5,arg3,arg4);
        }
        sym.geni_i3c_err(arg1,9);
        sym.geni_i3c_se_dump_dbg_regs(arg1,*arg1,*(arg1 + 0x9a8));
        iVar11 = arg1 + 0xa00;
        *(arg1 + 0x9b0) = 0;
        *(arg1 + 0xa10) = 0;
        *(arg1 + 0xa18) = 0;
        *(arg1 + 0xa20) = 0;
        uVar10 = _raw_spin_lock_irqsave(iVar11);
        sym.writel_relaxed(4,*arg1 + 0x604);
        _raw_spin_unlock_irqrestore(iVar11,uVar10);
        iVar6 = wait_for_completion_timeout(iVar8,0xfa);
        if (iVar6 == 0) {
            ipc_log_string(*(arg1 + 0x9a8),"%s:Cancel cmd failed : Aborting\n","_i3c_geni_execute_command");
            if (*(arg1 + 8) == 0) {
                _printk(0x80013f3,"_i3c_geni_execute_command");
            }
            else {
                _dev_err(*(arg1 + 8),"%s:Cancel cmd failed : Aborting\n","_i3c_geni_execute_command");
            }
            if (*(arg1 + 8) != 0) {
                sym.i3c_trace_log(*(arg1 + 8),0x8001bac,0x8000aba,arg4);
            }
            sym.geni_i3c_se_dump_dbg_regs(arg1,*arg1,*(arg1 + 0x9a8));
            *(arg1 + 0x9b0) = 0;
            uVar10 = _raw_spin_lock_irqsave(iVar11);
            sym.writel_relaxed(2,*arg1 + 0x604);
            _raw_spin_unlock_irqrestore(iVar11,uVar10);
            iVar6 = wait_for_completion_timeout(iVar8,0xfa);
            if (iVar6 == 0) {
                ipc_log_string(*(arg1 + 0x9a8),"%s:Abort Failed\n","_i3c_geni_execute_command");
                if (*(arg1 + 8) == 0) {
                    _printk(0x8001a31,"_i3c_geni_execute_command");
                }
                else {
                    _dev_err(*(arg1 + 8),"%s:Abort Failed\n","_i3c_geni_execute_command");
                }
                if (*(arg1 + 8) != 0) {
                    sym.i3c_trace_log(*(arg1 + 8),0x80009f6,0x8000aba,arg4);
                }
                sym.geni_i3c_se_dump_dbg_regs(arg1,*arg1,*(arg1 + 0x9a8));
            }
        }
    }
    if (*arg2 == 2) {
        if (*(arg1 + 0x68) != 0) {
            iVar11 = 0xd58;
            if (uVar2 != 1) {
                iVar11 = 0xc58;
            }
            *(arg1 + 0x9b0) = 0;
            sym.writel_relaxed(1,*arg1 + iVar11);
            iVar6 = wait_for_completion_timeout(iVar8,0xfa);
            if (iVar6 == 0) {
                ipc_log_string(*(arg1 + 0x9a8),"Timeout:FSM Reset, rnw:%d\n",uVar2);
                if (*(arg1 + 8) == 0) {
                    _printk(0x80004f0,uVar2);
                }
                else {
                    _dev_err(*(arg1 + 8),"Timeout:FSM Reset, rnw:%d\n",uVar2);
                }
                if (*(arg1 + 8) != 0) {
                    sym.i3c_trace_log(*(arg1 + 8),0x8000ad4,uVar2,arg4);
                }
                sym.geni_i3c_se_dump_dbg_regs(arg1,*arg1,*(arg1 + 0x9a8));
            }
        }
        if (uVar2 == 1) {
            geni_se_rx_dma_unprep(arg1,uStack_68,uVar9);
        }
        else {
            geni_se_tx_dma_unprep(arg1,uStack_60,uVar9);
        }
    }
    uVar2 = *(arg1 + 0x68);
    uVar9 = uVar2;
    if (uVar2 == 0xfffffff0) {
        uVar9 = 3;
    }
    else if (uVar2 == 0) goto code_r0x08008538;
    ipc_log_string(*(arg1 + 0x9a8),"I3C transaction error :%d\n");
    arg3_00 = uVar9;
    if (*(arg1 + 8) != 0) {
        sym.i3c_trace_log(*(arg1 + 8),0x8000c62,*(arg1 + 0x68),arg4);
    }
code_r0x08008538:
    *(arg1 + 0x68) = 0;
    *(arg1 + 0xa10) = 0;
    *(arg1 + 0xa18) = 0;
    iVar8 = sp_el0;
    iVar8 = *(iVar8 + 0x5e0);
    *(arg1 + 0xa20) = 0;
    if (iVar8 == iStack_58) {
        return arg3_00;
    }
    auVar12 = __stack_chk_fail();
    puVar7 = auVar12._8_8_;
    *extraout_x18 = sym.writel;
    uVar9 = auVar12._0_8_ & 0xffffffff;
    log_write_mmio(uVar9,0x20,puVar7,0x800871c);
    DataMemoryBarrier(0,2);
    *puVar7 = auVar12._0_4_;
    uVar9 = log_post_write_mmio(uVar9,0x20,puVar7,0x8008748);
    return uVar9;
}


// ===== sym.writel @ 0x08008700 (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800871c);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8008748);
    return;
}


// ===== sym.qcom_geni_i3c_ibi_unconf @ 0x0800877c (size 316) =====

void sym.qcom_geni_i3c_ibi_unconf(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t in_x2;
    int64_t in_x3;
    ulong *in_x18;
    uint32_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.readl_relaxed(*(arg1 + 0xa50) + 0x1018);
    if ((iVar1 != 0) && (*(arg1 + 0xa58) != 0)) {
        uVar4 = 0;
        iVar1 = 0x1800;
        do {
            *(arg1 + 0xac0) = 0;
            *(arg1 + 0xa70) = 0;
            uVar2 = sym.readl_relaxed(*(arg1 + 0xa50) + iVar1);
            if ((uVar2 & 1) != 0) {
                sym.writel_relaxed(uVar2 & 0xfffffffe,*(arg1 + 0xa50) + 0x1000);
                iVar3 = wait_for_completion_timeout(arg1 + 0xa70,0xfa);
                if (iVar3 == 0) {
                    ipc_log_string(*(arg1 + 0x9a8),"timeout while adding slave IBI\n");
                    if (*(arg1 + 8) == 0) {
                        _printk(0x80010cf);
                    }
                    else {
                        _dev_err(*(arg1 + 8),"timeout while adding slave IBI\n");
                    }
                    if (*(arg1 + 8) == 0) {
                        return;
                    }
                    sym.i3c_trace_log(*(arg1 + 8),0x80011e2,in_x2,in_x3);
                    return;
                }
            }
            uVar4 = uVar4 + 1;
            iVar1 = iVar1 + 0x80;
        } while (uVar4 < *(arg1 + 0xa58));
    }
    sym.geni_i3c_enable_ibi_ctrl(arg1);
    sym.writel_relaxed(0,*(arg1 + 0xa50) + 0xc);
    sym.writel_relaxed(0,*(arg1 + 0xa50) + 0x1008);
    sym.writel_relaxed(0,*(arg1 + 0xa50) + 0x14);
    *(arg1 + 0xa49) = 0;
    return;
}


// ===== sym.geni_i3c_suspend_late @ 0x080088b8 (size 264) =====

ulong sym.geni_i3c_suspend_late(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t in_x3;
    uint32_t uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x20c) != 2) {
        iVar7 = *(arg1 + 0x98);
        ipc_log_string(*(iVar7 + 0x9a8),"%s: Forced suspend\n","geni_i3c_suspend_late");
        iVar7 = *(iVar7 + 8);
        if (iVar7 != 0) {
            sym.i3c_trace_log(iVar7,0x8001af2,0x80007ac,in_x3);
        }
        sym.geni_i3c_runtime_suspend(arg1);
        __pm_runtime_disable(arg1,1);
        puVar1 = arg1 + 0x1f8;
        uVar6 = *puVar1;
        do {
            uVar5 = uVar6;
            if (uVar5 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar6 = uVar2;
                if (uVar2 != uVar5) goto code_r0x08008954;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar5 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08008954:
        } while (uVar5 != uVar2);
        __pm_runtime_set_status(arg1,2);
        pm_runtime_enable(arg1);
    }
    return 0;
}


// ===== sym.geni_i3c_resume_early @ 0x080089c0 (size 16) =====

ulong sym.geni_i3c_resume_early(int64_t arg1)

{
    return 0;
}


// ===== sym.geni_i3c_runtime_suspend @ 0x080089d0 (size 268) =====

ulong sym.geni_i3c_runtime_suspend(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint64_t arg4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    disable_irq(*(iVar2 + 100));
    uVar1 = geni_se_resources_off(iVar2);
    if (uVar1 != 0) {
        ipc_log_string(*(iVar2 + 0x9a8),"%s geni_se_resources_off failed %d\n","geni_i3c_runtime_suspend",uVar1);
        if (*(iVar2 + 8) != 0) {
            sym.i3c_trace_log(*(iVar2 + 8),0x8001b06,0x8001a71,uVar1);
        }
    }
    uVar1 = geni_icc_disable(iVar2);
    arg4 = uVar1;
    if (uVar1 != 0) {
        ipc_log_string(*(iVar2 + 0x9a8),"%s geni_icc_disable failed %d\n","geni_i3c_runtime_suspend",arg4);
        if (*(iVar2 + 8) != 0) {
            sym.i3c_trace_log(*(iVar2 + 8),0x800181f,0x8001a71,arg4);
        }
    }
    ipc_log_string(*(iVar2 + 0x9a8),"%s():ret:%d\n","geni_i3c_runtime_suspend",arg4);
    if (*(iVar2 + 8) != 0) {
        sym.i3c_trace_log(*(iVar2 + 8),0x80010fa,0x8001a71,arg4);
    }
    return 0;
}


// ===== sym.geni_i3c_runtime_resume @ 0x08008adc (size 264) =====

uint64_t sym.geni_i3c_runtime_resume(int64_t arg1)

{
    uint32_t uVar1;
    char *arg2;
    ulong *in_x18;
    uint64_t arg4;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    uVar1 = geni_icc_enable(iVar2);
    if (uVar1 == 0) {
        uVar1 = geni_se_resources_on(iVar2);
        if (uVar1 == 0) {
            enable_irq(*(iVar2 + 100));
            ipc_log_string(*(iVar2 + 0x9a8),"%s(): ret:%d\n","geni_i3c_runtime_resume",0);
            if (*(iVar2 + 8) != 0) {
                sym.i3c_trace_log(*(iVar2 + 8),0x8000dad,0x8000d72,0);
            }
            return 0;
        }
        arg4 = uVar1;
        ipc_log_string(*(iVar2 + 0x9a8),"%s geni_se_resources_on failed %d\n","geni_i3c_runtime_resume",arg4);
        iVar2 = *(iVar2 + 8);
        if (iVar2 == 0) {
            return arg4;
        }
        arg2 = "%s geni_se_resources_on failed %d\n";
    }
    else {
        arg4 = uVar1;
        ipc_log_string(*(iVar2 + 0x9a8),"%s geni_icc_enable failed %d\n","geni_i3c_runtime_resume",arg4);
        iVar2 = *(iVar2 + 8);
        if (iVar2 == 0) {
            return arg4;
        }
        arg2 = "%s geni_icc_enable failed %d\n";
    }
    sym.i3c_trace_log(iVar2,arg2,0x8000d72,arg4);
    return arg4;
}


// ===== sym.__cfi_check_fail @ 0x08008be4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08008c28

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
    //switch table (4 cases) at 0x8001cbe
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8008c3c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08008c48 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.geni_i3c_probe.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08008c7c (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.geni_i3c_probe.0d97c86a6b484e797acf4cb6d2840eec.cfi_jt);
    return;
}

