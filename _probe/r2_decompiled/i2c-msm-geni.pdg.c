// decompiled from i2c-msm-geni by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 696) =====

//WARNING: Switch with 1 destination removed at 0x080075e4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2eec8673b37c6729) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 == -0x57be845bca9148ef) {
                if ((pcVar1 + -0x8002348 >> 3 | pcVar1 << 0x3d) < 5) {
                    return;
                }
                goto code_r0x080075a4;
            }
            if (arg1 == -0x52bfc42827857e04) {
                pcVar2 = sym.geni_i2c_xfer.ff89956466640c790290520478333855.cfi_jt;
            }
            else {
                if (arg1 != -0x3987c0e26ee29729) goto code_r0x080075a4;
                pcVar2 = sym.geni_i2c_irq.ff89956466640c790290520478333855.cfi_jt;
            }
        }
        else if (arg1 < 0x2b3a43e29242445) {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.geni_i2c_probe.ff89956466640c790290520478333855.cfi_jt;
code_r0x08002228:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x080075a4;
            }
            if (arg1 != -0x218c0108fde83420) goto code_r0x080075a4;
            pcVar2 = sym.trace_event_raw_init.cfi_jt;
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x1c2b0952efa24c7a) goto code_r0x080075a4;
            pcVar2 = sym.trace_event_reg.cfi_jt;
        }
    }
    else if (arg1 < 0x4c550309df1cf4c1) {
        if (arg1 == 0x2eec8673b37c6729) {
            pcVar2 = sym.__traceiter_i2c_log_info.cfi_jt;
        }
        else {
            if (arg1 == 0x345b8f49125c3eda) {
                if ((pcVar1 + -0x8002318 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x080075a4;
            }
            if (arg1 != 0x3dd1a39e589289fe) goto code_r0x080075a4;
            pcVar2 = sym.trace_raw_output_i2c_log_info.ff89956466640c790290520478333855.cfi_jt;
        }
    }
    else if (arg1 < 0x6871e466cec98751) {
        if (arg1 == 0x4c550309df1cf4c1) {
            pcVar2 = sym.gi2c_gsi_rx_cb.ff89956466640c790290520478333855.cfi_jt;
            goto code_r0x08002228;
        }
        if (arg1 != 0x5d7e5e3785540c6e) goto code_r0x080075a4;
        pcVar2 = sym.gi2c_ev_cb.ff89956466640c790290520478333855.cfi_jt;
    }
    else if (arg1 == 0x6871e466cec98751) {
        pcVar2 = sym.geni_i2c_func.ff89956466640c790290520478333855.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080075a4;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080075a4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80075f8);
    (*pcVar1)();
}


// ===== sym.trace_event_raw_init.cfi_jt @ 0x080022c0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_raw_init.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080022c8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.geni_i2c_probe.ff89956466640c790290520478333855.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080022d0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.geni_i2c_probe.ff89956466640c790290520478333855.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.geni_i2c_probe.ff89956466640c790290520478333855.cfi_jt @ 0x080022d8 (size 8) =====

uint64_t sym.geni_i2c_probe.ff89956466640c790290520478333855.cfi_jt(int64_t param_1)

{
    uint *puVar1;
    code *pcVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t *piVar6;
    int64_t iVar7;
    uint64_t uVar8;
    char *pcVar9;
    uint uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auStack_60 [40];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar12 = param_1 + 0x10;
    iStack_38 = *(iVar7 + 0x5e0);
    piVar6 = devm_kmalloc(iVar12,0x7a8,0xdc0);
    if (piVar6 == NULL) {
        uVar11 = 0xfffffff4;
    }
    else {
        uVar11 = _segment.ehdr;
        if (_segment.ehdr < 0x14) {
            uVar5 = _segment.ehdr + 1;
            bVar3 = 0x13 < _segment.ehdr;
            _segment.ehdr = uVar5;
            if (bVar3) goto code_r0x080031a8;
            *(obj.gi2c_dev_dbg + uVar11 * 8) = piVar6;
        }
        *piVar6 = iVar12;
        iVar7 = platform_get_resource(param_1,0x200,0);
        if (iVar7 == 0) {
            uVar11 = 0xffffffea;
        }
        else {
            uVar11 = devm_ioremap_resource(*piVar6,iVar7);
            piVar6[1] = uVar11;
            if (uVar11 < 0xfffffffffffff001) {
                iVar7 = of_find_property(*(param_1 + 0x300),"qcom,le-vm",0);
                if (iVar7 != 0) {
                    *(piVar6 + 0x792) = 0;
                    *(piVar6 + 0xf2) = 1;
                    _dev_info(iVar12,"LE-VM usecase\n");
                }
                iVar7 = of_find_property(*(param_1 + 0x300),"qcom,leica-used-i2c",0);
                if (iVar7 != 0) {
                    *(piVar6 + 0x797) = 1;
                }
                iVar7 = *(param_1 + 0x70);
                piVar6[0xa2] = iVar12;
                iVar13 = *(iVar7 + 0x98);
                piVar6[0xb1] = iVar7;
                piVar6[0xa1] = piVar6[1];
                piVar6[0xa3] = iVar13;
                if (iVar13 == 0) {
                    _dev_err(iVar12,"SE Wrapper is NULL, deferring probe\n");
                    uVar11 = 0xfffffdfb;
                }
                else {
                    puVar1 = piVar6 + 0x714;
                    iVar4 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,clk-freq-out",puVar1,1,0);
                    if (iVar4 < 0) {
                        uVar10 = 400000;
                        *puVar1 = 400000;
                    }
                    else {
                        uVar10 = *puVar1;
                    }
                    _dev_info(iVar12,"Bus frequency is set to %dHz.\n",uVar10);
                    iVar4 = *(piVar6 + 0x714);
                    *(piVar6 + 0xf4) = 0;
                    if (iVar4 == 100000) {
                        uVar10 = 0;
                    }
                    else if (iVar4 == 1000000) {
                        uVar10 = 2;
                    }
                    else {
                        if (iVar4 != 400000) {
                            uVar11 = 0xffffffea;
                            _dev_err(*piVar6,"Invalid clk frequency %d KHz: %d\n",iVar4,0xffffffea);
                            goto code_r0x08002cc8;
                        }
                        uVar10 = 1;
                    }
                    *(piVar6 + 0xb3) = uVar10;
                    if (piVar6[0xf2] == '\0') {
                        uVar11 = devm_clk_get(iVar12,"se-clk");
                        piVar6[0xa4] = uVar11;
                        if (uVar11 < 0xfffffffffffff001) {
                            uVar11 = devm_clk_get(*(param_1 + 0x70),"m-ahb");
                            piVar6[0xad] = uVar11;
                            if (uVar11 < 0xfffffffffffff001) {
                                uVar11 = devm_clk_get(*(param_1 + 0x70),"s-ahb");
                                piVar6[0xae] = uVar11;
                                if (uVar11 < 0xfffffffffffff001) {
                                    iVar7 = of_find_property(*(param_1 + 0x300),"qcom,i2c-hub",0);
                                    *(piVar6 + 0x794) = iVar7 != 0;
                                    if (iVar7 == 0) {
                                        uVar5 = geni_icc_get(piVar6 + 0xa1,"qup-memory");
                                        if (uVar5 != 0) {
                                            pcVar9 = "%s: Error - resources_init ret:%d\n";
code_r0x0800318c:
                                            uVar11 = uVar5;
                                            _dev_err(iVar12,pcVar9,"geni_i2c_probe",uVar11);
                                            goto code_r0x08002cc8;
                                        }
                                        *(piVar6 + 0xa8) = 1;
                                        *(piVar6 + 0xaa) = 1;
                                        *(piVar6 + 0xac) = 0x12c00;
                                    }
                                    else {
                                        uVar11 = devm_clk_get(iVar12,"core-clk");
                                        piVar6[0xaf] = uVar11;
                                        if (0xfffffffffffff000 < uVar11) {
                                            pcVar9 = "Err getting core-clk %d\n";
                                            goto code_r0x08003088;
                                        }
                                        uVar5 = geni_icc_get(piVar6 + 0xa1,0);
                                        if (uVar5 != 0) {
                                            pcVar9 = "%s: Error - geni_icc_get ret:%d\n";
                                            goto code_r0x0800318c;
                                        }
                                        *(piVar6 + 0xa8) = 1;
                                        *(piVar6 + 0xaa) = 1;
                                        *(piVar6 + 0x796) = 1;
                                        _dev_info(*piVar6,"%s: RTL based SE\n","geni_i2c_probe");
                                    }
                                    uVar8 = platform_get_irq(param_1,0);
                                    uVar11 = uVar8 & 0xffffffff;
                                    *(piVar6 + 0x14) = uVar8;
                                    if (-1 < uVar8) {
                                        irq_modify_status(uVar11,0,0x1000);
                                        uVar5 = devm_request_threaded_irq
                                                          (*piVar6,*(piVar6 + 0x14),
                                                           sym.geni_i2c_irq.ff89956466640c790290520478333855.cfi_jt,0,
                                                           0,"i2c_geni",piVar6);
                                        if (uVar5 == 0) goto code_r0x08002f24;
                                        uVar11 = uVar5;
                                        _dev_err(*piVar6,"Request_irq failed:%d: err:%d\n",*(piVar6 + 0x14),uVar11);
                                    }
                                    goto code_r0x08002cc8;
                                }
                                pcVar9 = "Err getting S AHB clk %d\n";
                            }
                            else {
                                pcVar9 = "Err getting M AHB clk %d\n";
                            }
                        }
                        else {
                            pcVar9 = "Err getting SE Core clk %d\n";
                        }
code_r0x08003088:
                        _dev_err(iVar12,pcVar9,uVar11 & 0xffffffff);
                    }
                    else {
code_r0x08002f24:
                        iVar7 = of_find_property(*(param_1 + 0x300),"qcom,shared",0);
                        if (iVar7 != 0) {
                            *(piVar6 + 0x77d) = 1;
                            _dev_info(iVar12,"Multi-EE usecase\n");
                        }
                        iVar7 = of_find_property(*(param_1 + 0x300),"qcom,bus-recovery",0);
                        if (iVar7 != 0) {
                            *(piVar6 + 0xf3) = 1;
                        }
                        iVar4 = sym.dma_set_mask_and_coherent(iVar12,-1);
                        if ((iVar4 == 0) || (uVar5 = sym.dma_set_mask_and_coherent(iVar12,0xffffffff), uVar5 == 0)) {
                            piVar6[6] = reloc.geni_i2c_xfer.ff89956466640c790290520478333855.cfi_jt;
                            *(piVar6 + 0x9c) = 0;
                            __init_swait_queue_head(piVar6 + 0x9d,"&x->wait",obj.init_completion.__key);
                            iVar12 = *piVar6;
                            iVar7 = *(param_1 + 0x300);
                            *(param_1 + 0xa8) = piVar6;
                            piVar6[0x25] = piVar6;
                            piVar6[0x1e] = iVar12;
                            piVar6[0x70] = iVar7;
                            strscpy(piVar6 + 0x42c,"Geni-I2C",0x30);
                            __pm_runtime_set_status(*piVar6,2);
                            pm_runtime_set_autosuspend_delay(*piVar6,0xfa);
                            __pm_runtime_use_autosuspend(*piVar6,1);
                            pm_runtime_enable(*piVar6);
                            uVar8 = i2c_add_adapter(piVar6 + 4);
                            uVar11 = uVar8 & 0xffffffff;
                            if (uVar8 == 0) {
                                *(piVar6 + 0x79c) = 0;
                                snprintf(auStack_60,0x28,"M - DRIVER GENI_I2C_%d Ready",piVar6[0x85]);
                                _dev_info(*piVar6,"I2C probed\n");
                            }
                            else {
                                _dev_err(*piVar6,"Add adapter failed, ret=%d\n",uVar11);
                            }
                        }
                        else {
                            uVar11 = uVar5;
                            _dev_err(iVar12,"could not set DMA mask\n");
                        }
                    }
                }
            }
        }
    }
code_r0x08002cc8:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_38) {
        return uVar11 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x080031a8:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80031ac);
    (*pcVar2)();
}


// ===== sym.geni_i2c_remove.ff89956466640c790290520478333855.cfi_jt @ 0x080022e0 (size 8) =====

ulong sym.geni_i2c_remove.ff89956466640c790290520478333855.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    code *pcVar4;
    bool bVar5;
    int iVar6;
    ulong uVar7;
    int64_t iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar11 = *(param_1 + 0xa8);
    if (*(piVar11 + 0x79c) == 0) {
        if ((*(*piVar11 + 0x20c) != 2) && (iVar6 = sym.geni_i2c_runtime_suspend(*piVar11), iVar6 != 0)) {
            ipc_log_string(piVar11[0xb2],"%s: runtime suspend failed\n","geni_i2c_remove");
            if (*piVar11 == 0) {
                _printk(0x8001781,"geni_i2c_remove");
            }
            else {
                _dev_err(*piVar11,"%s: runtime suspend failed\n","geni_i2c_remove");
            }
            if (*piVar11 != 0) {
                sym.i2c_trace_log(*piVar11,0x800086f,0x80005c2,param_4);
            }
        }
        if (piVar11[0xef] == 2) {
            if (piVar11[0xb4] == 0) {
                iVar8 = piVar11[0xb5];
            }
            else {
                ipc_log_string(piVar11[0xb2],"%s: clearing tx dma resource\n","geni_i2c_remove");
                if (*piVar11 == 0) {
                    _printk(0x8001575,"geni_i2c_remove");
                }
                else {
                    _dev_err(*piVar11,"%s: clearing tx dma resource\n","geni_i2c_remove");
                }
                if (*piVar11 != 0) {
                    sym.i2c_trace_log(*piVar11,0x8000c12,0x80005c2,param_4);
                }
                dma_release_channel(piVar11[0xb4]);
                iVar8 = piVar11[0xb5];
            }
            if (iVar8 != 0) {
                ipc_log_string(piVar11[0xb2],"%s: clearing rx dma resource\n","geni_i2c_remove");
                if (*piVar11 == 0) {
                    _printk(0x8000c89,"geni_i2c_remove");
                }
                else {
                    _dev_err(*piVar11,"%s: clearing rx dma resource\n","geni_i2c_remove");
                }
                if (*piVar11 != 0) {
                    sym.i2c_trace_log(*piVar11,0x8001a43,0x80005c2,param_4);
                }
                dma_release_channel(piVar11[0xb5]);
            }
        }
        puVar1 = *piVar11 + 0x1f8;
        uVar10 = *puVar1;
        do {
            uVar9 = uVar10;
            if (uVar9 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar10 = uVar2;
                if (uVar2 != uVar9) goto code_r0x08003234;
                cVar3 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar9 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08003234:
        } while (uVar9 != uVar2);
        __pm_runtime_set_status(*piVar11,2);
        __pm_runtime_disable(*piVar11,1);
        i2c_del_adapter(piVar11 + 4);
        iVar6 = _segment.ehdr;
        if (((((((0 < _segment.ehdr) && (bVar5 = _segment.ehdr != 1, _segment.ehdr = 0, bVar5)) &&
               (_segment.ehdr = 0, iVar6 != 2)) &&
              (((_segment.ehdr = 0, iVar6 != 3 && (_segment.ehdr = 0, iVar6 != 4)) &&
               ((_segment.ehdr = 0, iVar6 != 5 &&
                ((_segment.ehdr = 0, iVar6 != 6 && (_segment.ehdr = 0, iVar6 != 7)))))))) &&
             ((_segment.ehdr = 0, iVar6 != 8 &&
              (((_segment.ehdr = 0, iVar6 != 9 && (_segment.ehdr = 0, iVar6 != 10)) &&
               (_segment.ehdr = 0, iVar6 != 0xb)))))) &&
            (((_segment.ehdr = 0, iVar6 != 0xc && (_segment.ehdr = 0, iVar6 != 0xd)) &&
             (((_segment.ehdr = 0, iVar6 != 0xe &&
               ((_segment.ehdr = 0, iVar6 != 0xf && (_segment.ehdr = 0, iVar6 != 0x10)))) &&
              (_segment.ehdr = 0, iVar6 != 0x11)))))) &&
           (((_segment.ehdr = 0, iVar6 != 0x12 && (_segment.ehdr = 0, iVar6 != 0x13)) &&
            (_segment.ehdr = 0, iVar6 != 0x14)))) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x80035c4);
            (*pcVar4)();
        }
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
        uVar7 = 0;
        if (piVar11[0xb2] != 0) {
            ipc_log_context_destroy();
            uVar7 = 0;
        }
    }
    else {
        ipc_log_string(piVar11[0xb2],"%s: Xfer is in progress\n","geni_i2c_remove");
        if (*piVar11 == 0) {
            _printk(0x80009fa,"geni_i2c_remove");
            iVar8 = *piVar11;
        }
        else {
            _dev_err(*piVar11,"%s: Xfer is in progress\n","geni_i2c_remove");
            iVar8 = *piVar11;
        }
        if (iVar8 == 0) {
            uVar7 = 0xfffffff0;
        }
        else {
            sym.i2c_trace_log(iVar8,0x8000ee0,0x80005c2,param_4);
            uVar7 = 0xfffffff0;
        }
    }
    return uVar7;
}


// ===== sym.gi2c_ev_cb.ff89956466640c790290520478333855.cfi_jt @ 0x080022e8 (size 8) =====

void sym.gi2c_ev_cb.ff89956466640c790290520478333855.cfi_jt(ulong param_1,int *param_2,int64_t *param_3)

{
    ulong *in_x18;
    uint32_t uVar1;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(param_2 + 2);
    uVar1 = uVar2;
    if (*param_2 == 0) {
        if ((uVar1 >> 10 & 1) != 0) {
            sym.geni_i2c_err(param_3,1);
        }
        if ((uVar1 >> 0xc & 1) != 0) {
            sym.geni_i2c_err(param_3,3);
        }
        if ((uVar1 >> 0xd & 1) != 0) {
            sym.geni_i2c_err(param_3,4);
        }
    }
    complete(param_3 + 0x9c);
    if (*param_2 != 0) {
        ipc_log_string(param_3[0xb2],"GSI QN err:0x%x, status:0x%x, err:%d\n",param_2[10],uVar2 & 0xffffffff);
        if (*param_3 == 0) {
            _printk(0x8001625,param_2[10],uVar2 & 0xffffffff,*param_2);
        }
        else {
            _dev_err(*param_3,"GSI QN err:0x%x, status:0x%x, err:%d\n",param_2[10],uVar2 & 0xffffffff,*param_2);
        }
        if (*param_3 != 0) {
            sym.i2c_trace_log(*param_3,0x800107b,param_2[10],uVar2 & 0xffffffff);
        }
    }
    return;
}


// ===== sym.geni_i2c_func.ff89956466640c790290520478333855.cfi_jt @ 0x080022f0 (size 8) =====

ulong sym.geni_i2c_func.ff89956466640c790290520478333855.cfi_jt(void)

{
    return 0xefe0009;
}


// ===== sym.trace_event_reg.cfi_jt @ 0x080022f8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_reg.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.trace_raw_output_i2c_log_info.ff89956466640c790290520478333855.cfi_jt @ 0x08002300 (size 8) =====

void sym.trace_raw_output_i2c_log_info.ff89956466640c790290520478333855.cfi_jt
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


// ===== sym.geni_i2c_xfer.ff89956466640c790290520478333855.cfi_jt @ 0x08002308 (size 8) =====

uint64_t sym.geni_i2c_xfer.ff89956466640c790290520478333855.cfi_jt
                   (int64_t param_1,uint16_t *param_2,char *param_3,uint64_t param_4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int iVar4;
    uint64_t *puVar5;
    char cVar6;
    uint16_t uVar7;
    bool bVar8;
    bool bVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int iVar12;
    uint uVar13;
    uint32_t uVar14;
    int iVar15;
    uint32_t uVar16;
    ulong uVar17;
    uint64_t uVar18;
    int64_t iVar19;
    uint64_t uVar20;
    char *arg2;
    char *pcVar21;
    char *pcVar22;
    int64_t *piVar23;
    int64_t *piVar24;
    int64_t *piVar25;
    uint16_t *puVar26;
    int64_t *piVar27;
    int64_t iVar28;
    ulong *in_x18;
    int64_t *arg1;
    int64_t iVar29;
    int64_t iVar30;
    int64_t *piVar31;
    int64_t *arg4;
    code *pcVar32;
    int64_t *piVar33;
    uint64_t arg3;
    uint16_t *puVar34;
    uint64_t uVar35;
    uint32_t uVar36;
    ulong unaff_x30;
    int64_t iStack_b0;
    int64_t iStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar29 = sp_el0;
    iStack_70 = *(iVar29 + 0x5e0);
    arg1 = *(param_1 + 0x108);
    *(arg1 + 3) = 0;
    *(arg1 + 0x79c) = 1;
    if ((*(*arg1 + 0x200) & 7) != 0) {
        ipc_log_string(arg1[0xb2],"%s: System suspended\n","geni_i2c_xfer");
        if (*arg1 != 0) {
            sym.i2c_trace_log(*arg1,0x8000dc5,0x8000ead,param_4);
        }
        uVar35 = 0xfffffff3;
        *(arg1 + 0x79c) = 0;
        goto code_r0x08005778;
    }
    arg3 = param_3 & 0xffffffff;
    pcVar22 = param_3;
    if (arg1[0xf2] == '\0') {
        uVar10 = __pm_runtime_resume(*arg1,4);
        uVar35 = uVar10;
        if (uVar10 < 0) {
            ipc_log_string(arg1[0xb2],"error turning SE resources:%d\n",uVar35);
            if (*arg1 == 0) {
                _printk(0x8000ddb,uVar35);
            }
            else {
                _dev_err(*arg1,"error turning SE resources:%d\n",uVar35);
            }
            uVar10 = 0;
            if (*arg1 != 0) {
                sym.i2c_trace_log(*arg1,0x8000e61,uVar35,param_4);
                uVar10 = *arg1;
            }
            sym.pm_runtime_put_noidle(uVar10);
            __pm_runtime_set_status(*arg1,2);
            *(arg1 + 0x79c) = 0;
            goto code_r0x08005778;
        }
    }
    else {
        uVar35 = 0;
    }
    if (*(arg1 + 0x795) != '\0') {
        if (*(arg1 + 0x796) != '\0') {
            uVar10 = sym.readl_relaxed(arg1[1] + 0x908);
            if ((~uVar10 & 3) == 0) {
code_r0x08003cc4:
                if (arg1[0xef] == 2) {
                    piVar31 = arg1[0xb4];
                    pcVar32 = *(*piVar31 + 0x178);
                    if (pcVar32 != NULL) {
                        __cfi_slowpath_diag(0x146502001565ea5c,pcVar32,0x80003c0);
                        (*pcVar32)(piVar31);
                    }
                    uVar35 = 0;
                    *(arg1 + 0xe2) = 0;
                }
                else {
                    *(arg1 + 0x9c) = 0;
                    sym.writel_relaxed(4,arg1[0xa1] + 0x604);
                    uVar18 = wait_for_completion_timeout(arg1 + 0x9c,0xfa);
                    uVar35 = uVar18 & 0xffffffff;
                    if (uVar18 == 0) {
                        ipc_log_string(arg1[0xb2],"%s:Pending Cancel failed\n","do_pending_cancel");
                        if (*arg1 != 0) {
                            sym.i2c_trace_log(*arg1,0x80011f6,0x8000680,param_4);
                        }
                        *(arg1 + 0x9c) = 0;
                        sym.writel_relaxed(2,arg1[0xa1] + 0x604);
                        uVar35 = wait_for_completion_timeout(arg1 + 0x9c,0xfa);
                        if (uVar35 == 0) {
                            ipc_log_string(arg1[0xb2],"%s:Abort failed\n","do_pending_cancel");
                            if (*arg1 != 0) {
                                sym.i2c_trace_log(*arg1,0x80009dc,0x8000680,param_4);
                            }
                            uVar35 = 0;
                        }
                    }
                }
                pcVar22 = "do_pending_cancel";
                *(arg1 + 0x795) = 0;
                ipc_log_string(arg1[0xb2],"%s: Pending Cancel done\n");
                if (*arg1 != 0) {
                    pcVar22 = "do_pending_cancel";
                    sym.i2c_trace_log(*arg1,0x80013fb,0x8000680,param_4);
                }
                if (uVar35 == 0) goto code_r0x08003e38;
            }
            else {
                ipc_log_string(arg1[0xb2],"%s: IOS:0x%x, bad state\n","do_pending_cancel",uVar10);
                if (*arg1 == 0) {
                    _printk(0x80010fe,"do_pending_cancel",uVar10);
                }
                else {
                    _dev_err(*arg1,"%s: IOS:0x%x, bad state\n","do_pending_cancel",uVar10);
                }
                sym.writel_relaxed(1,arg1[1] + 0x20);
                uVar10 = sym.readl_relaxed(arg1[1] + 0x908);
                param_4 = uVar10;
                if ((~uVar10 & 3) == 0) {
                    ipc_log_string(arg1[0xb2],"%s: IOS:0x%x restored properly\n","do_pending_cancel");
                    if (*arg1 == 0) {
                        _printk(0x8000692,"do_pending_cancel",uVar10);
                    }
                    else {
                        param_4 = uVar10;
                        _dev_err(*arg1,"%s: IOS:0x%x restored properly\n","do_pending_cancel");
                    }
                    goto code_r0x08003cc4;
                }
                ipc_log_string(arg1[0xb2],"%s: IOS:0x%x, Fix from Slave side\n","do_pending_cancel",uVar10);
                if (*arg1 == 0) {
                    _printk(0x8000c64,"do_pending_cancel",uVar10);
                }
                else {
                    _dev_err(*arg1,"%s: IOS:0x%x, Fix from Slave side\n","do_pending_cancel",uVar10);
                }
                uVar35 = 0xffffffea;
            }
            iVar29 = *arg1;
            uVar17 = ktime_get_mono_fast_ns();
            *(iVar29 + 0x218) = uVar17;
            __pm_runtime_suspend(*arg1,0xd);
            *(arg1 + 0x79c) = 0;
            goto code_r0x08005778;
        }
        uVar35 = 0;
    }
code_r0x08003e38:
    uVar10 = sym.readl_relaxed(arg1[1] + 0x908);
    if ((~uVar10 & 3) != 0) {
        ipc_log_string(arg1[0xb2],"IO lines in bad state, Power the slave\n");
        if (*arg1 == 0) {
            _printk(0x8000800);
        }
        else {
            _dev_err(*arg1,"IO lines in bad state, Power the slave\n");
        }
        if (*arg1 == 0) {
            iVar29 = 0;
        }
        else {
            sym.i2c_trace_log(*arg1,0x8000532,pcVar22,param_4);
            iVar29 = *arg1;
        }
        uVar17 = ktime_get_mono_fast_ns();
        *(iVar29 + 0x218) = uVar17;
        __pm_runtime_suspend(*arg1,0xd);
        uVar35 = 0xfffffffa;
        *(arg1 + 0x79c) = 0;
        goto code_r0x08005778;
    }
    if ((arg1[0xf2] != '\0') && (*(arg1 + 0x792) == '\0')) {
        *(arg1 + 0x792) = 1;
        uVar10 = sym.geni_i2c_prepare(arg1);
        if (uVar10 == 0) {
            uVar10 = sym.geni_i2c_lock_bus(arg1);
            uVar35 = uVar10;
            if (uVar10 == 0) {
                ipc_log_string(arg1[0xb2],"LE-VM first xfer\n");
                if (*arg1 != 0) {
                    sym.i2c_trace_log(*arg1,0x800176f,pcVar22,param_4);
                }
                uVar35 = 0;
                goto code_r0x08003eac;
            }
            ipc_log_string(arg1[0xb2],"%s lock failed: %d\n","geni_i2c_xfer",uVar10);
            if (*arg1 == 0) {
                _printk(0x8001891,"geni_i2c_xfer",uVar10);
            }
            else {
                _dev_err(*arg1,"%s lock failed: %d\n","geni_i2c_xfer",uVar10);
            }
            iVar29 = *arg1;
            if (iVar29 != 0) {
                pcVar22 = "%s lock failed: %d\n";
                goto code_r0x0800555c;
            }
        }
        else {
            uVar35 = uVar10;
            ipc_log_string(arg1[0xb2],"%s I2C prepare failed: %d\n","geni_i2c_xfer",uVar35);
            if (*arg1 == 0) {
                _printk(0x8000cec,"geni_i2c_xfer",uVar35);
            }
            else {
                _dev_err(*arg1,"%s I2C prepare failed: %d\n","geni_i2c_xfer",uVar35);
            }
            iVar29 = *arg1;
            if (iVar29 != 0) {
                pcVar22 = "%s I2C prepare failed: %d\n";
code_r0x0800555c:
                sym.i2c_trace_log(iVar29,pcVar22,0x8000ead,uVar35);
            }
        }
        *(arg1 + 0x79c) = 0;
        goto code_r0x08005778;
    }
code_r0x08003eac:
    piVar31 = *param_2;
    uVar18 = arg3;
    ipc_log_string(arg1[0xb2],"n:%d addr:0x%x\n");
    if (*arg1 != 0) {
        piVar31 = *param_2;
        uVar18 = arg3;
        sym.i2c_trace_log(*arg1,0x8001492,arg3,piVar31);
    }
    uVar10 = param_3;
    *(arg1 + 0xf0) = uVar10;
    kfree(arg1[0xf1]);
    if (uVar10 >> 0x3c == 0) {
        iVar29 = __kmalloc(-(arg3 >> 0x1f) & 0xfffffff000000000 | arg3 << 4,0xdc0);
        arg1[0xf1] = iVar29;
        if (iVar29 == 0) goto code_r0x08003f0c;
    }
    else {
        arg1[0xf1] = 0;
code_r0x08003f0c:
        ipc_log_string(arg1[0xb2],"Buf logging pointer not available\n");
        if (*arg1 != 0) {
            sym.i2c_trace_log(*arg1,0x8000af8,uVar18,piVar31);
        }
    }
    if (arg1[0xef] == 2) {
        piVar33 = *(param_1 + 0x108);
        if (*(piVar33 + 0x791) != '\0') {
code_r0x08003f4c:
            if (*(piVar33 + 0x77d) == '\0') {
                piVar23 = NULL;
                piVar25 = NULL;
            }
            else {
                piVar25 = piVar33 + 0xb6;
                piVar23 = piVar33 + 0xb8;
                piVar33[0xb6] = 0;
                *(piVar33 + 0xb7) = 0;
                piVar33[0xb8] = 0;
                *(piVar33 + 0x5bc) = 0x300001;
                piVar33[0xb9] = 0x31010000000000;
            }
            if (piVar33[0xe2] == 0) {
                uVar35 = *(piVar33 + 0xb3);
                if (3 < *(piVar33 + 0xb3)) {
code_r0x080059d8:
    //WARNING: Does not return
                    pcVar32 = SoftwareBreakpoint(0x5512,0x80059dc);
                    (*pcVar32)();
                }
                if (((0x18 < (uVar35 << 3 | 7)) || (uVar18 = uVar35 << 3, 0x18 < (uVar18 | 5))) ||
                   (0x18 < (uVar18 | 6))) {
code_r0x080059d4:
    //WARNING: Does not return
                    pcVar32 = SoftwareBreakpoint(1,0x80059d8);
                    (*pcVar32)();
                }
                iVar29 = uVar35 * 8;
                *(piVar33 + 0x5d4) = 0;
                *(piVar33 + 0xba) =
                     *(uVar35 * 8 + 0x8001d17) << 0x10 | *(iVar29 + 0x8001d15) << 8 | *(iVar29 + 0x8001d16) | 0x3000000;
                if (0x18 < (uVar18 | 4)) goto code_r0x080059d4;
                piVar27 = piVar33 + 0xba;
                *(piVar33 + 0xbb) = *(iVar29 + 0x8001d14);
                *(piVar33 + 0x5dc) = 0x220001;
            }
            else {
                piVar27 = NULL;
            }
            iVar12 = 1;
            if (uVar10 == 1) {
                iVar12 = 2;
            }
            if (uVar10 < 1) {
                uVar35 = *(piVar33 + 3);
                goto code_r0x08005714;
            }
            piVar1 = piVar33 + 0xca;
            uVar11 = 0;
            piVar2 = piVar33 + 0xc3;
            piVar3 = piVar33 + 0xc2;
            do {
                puVar26 = param_2 + uVar11 * 8;
                puVar34 = puVar26 + 1;
                uVar7 = *puVar34;
                *(piVar33 + 0x9c) = 0;
                piVar33[0xa0] = puVar26;
                piVar24 = piVar33[0xb1];
                uVar16 = 1;
                if ((uVar7 & 1) == 0) {
                    uVar16 = 2;
                }
                if (puVar26 == NULL) {
                    ipc_log_string(piVar33[0xb2],"%s: Invalid buffer\n","geni_i2c_gsi_xfer");
                    if (*piVar33 != 0) {
                        sym.i2c_trace_log(*piVar33,0x800152d,0x80019aa,piVar31);
                    }
code_r0x080051f0:
                    uVar35 = 0xfffffff4;
                    goto code_r0x08005720;
                }
                uVar18 = i2c_get_dma_safe_msg_buf(puVar26,1);
                if (uVar18 == 0) goto code_r0x080051f0;
                uVar14 = *(piVar33 + 0xb3);
                if (3 < uVar14) goto code_r0x080059d8;
                if (uVar14 == 3) goto code_r0x080059d4;
                iVar15 = 0;
                if (*(obj.geni_i2c_clk_map + uVar14 * 8) != 0) {
                    iVar15 = (*(piVar33[0xa0] + 4) * 9000000) / *(obj.geni_i2c_clk_map + uVar14 * 8);
                }
                iVar4 = uVar11 - uVar10;
                iVar29 = uVar11;
                uVar13 = __usecs_to_jiffies(iVar15 * 10 + 500000);
                *(piVar33 + 0x1c) = uVar13;
                if (piVar33[0xe2] == 0) {
                    uVar16 = uVar16 + 1;
                }
                if ((*(piVar33 + 0x77d) == '\0') || ((uVar11 != 0 && (iVar4 != -1)))) {
                    sg_init_table(piVar1,uVar16);
code_r0x08004954:
                    uVar14 = 0;
                }
                else {
                    uVar16 = uVar16 + iVar12;
                    sg_init_table(piVar1,uVar16);
                    if (uVar11 != 0) goto code_r0x08004954;
                    uVar14 = 1;
                    piVar33[0xca] =
                         piVar33[0xca] & 3U |
                         (((piVar25 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
                    *(piVar33 + 0xcb) = piVar25 & 0xfff;
                    *(piVar33 + 0x65c) = 0x10;
                }
                uVar36 = 1;
                if (piVar33[0xe2] == 0) {
                    uVar35 = uVar14;
                    uVar14 = uVar14 + 1;
                    puVar5 = piVar1 + uVar35 * 4;
                    *(piVar33 + 0xe2) = 1;
                    *(puVar5 + 1) = piVar27 & 0xfff;
                    *(puVar5 + 0xc) = 0x10;
                    *puVar5 = *puVar5 & 3 |
                              (((piVar27 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
                }
                iVar30 = iVar29 * 0x10;
                uVar7 = param_2[iVar29 * 8];
                if ((*puVar34 & 1) != 0) {
                    uVar36 = 2;
                }
                *(piVar33 + 0x5e4) = 0;
                *(piVar33 + 0xbc) = (uVar11 < uVar10 - 1) << 0x1a | uVar7 << 8 | uVar36;
                if ((*puVar34 & 1) == 0) {
                    *(piVar33 + 0xbd) = 0;
                    iVar15 = 0x200001;
                }
                else {
                    iVar15 = 0x7ff;
                    if (*(piVar33 + 0x77d) == '\0' || iVar4 != -1) {
                        iVar15 = 0x8ff;
                    }
                    iVar15 = iVar15 + 0x200001;
                    *(piVar33 + 0xbd) = param_2[iVar29 * 8 + 2];
                }
                *(piVar33 + 0x5ec) = iVar15;
                uVar35 = uVar14 + 1;
                puVar5 = piVar1 + uVar14 * 4;
                iVar19 = piVar33[0xb2];
                *(puVar5 + 1) = piVar33 + 0xbc & 0xfff;
                *(puVar5 + 0xc) = 0x10;
                iVar28 = piVar33[0xa0];
                *puVar5 = *puVar5 & 3 |
                          (((piVar33 + 0xbc) * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
                piVar31 = *(iVar28 + 4);
                if ((*puVar34 & 1) != 0) {
                    ipc_log_string(iVar19,"msg[%d].len:%d R\n",uVar11);
                    if (*piVar33 != 0) {
                        piVar31 = *(piVar33[0xa0] + 4);
                        sym.i2c_trace_log(*piVar33,0x8001835,uVar11,piVar31);
                    }
                    sg_init_table(piVar33 + 0xde,1);
                    if (piVar24 == NULL) {
                        uVar35 = 0xffffffea;
                    }
                    else {
                        arg4 = param_2[iVar29 * 8 + 2];
                        uVar20 = is_vmalloc_addr(uVar18);
                        if (((uVar20 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                            obj.dma_map_single_attrs.__already_done = 0x1;
                            uVar17 = dev_driver_string(piVar24);
                            iVar29 = piVar24[0xe];
                            if (iVar29 == 0) {
                                iVar29 = *piVar24;
                            }
                            __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar17,iVar29);
    //WARNING: Does not return
                            pcVar32 = SoftwareBreakpoint(0x800,0x8005138);
                            (*pcVar32)();
                        }
                        if ((uVar20 & 1) == 0) {
                            iVar19 = dma_map_page_attrs(piVar24,(((uVar18 << 8) >> 8) + 0x8000000000U >> 6 &
                                                                 0x3ffffffffffffc0) - 0x200000000,uVar18 & 0xfff,arg4
                                                        ,2,0);
                            *piVar2 = iVar19;
                            if (iVar19 != -1) {
                                if (piVar33[0xf1] != 0) {
                                    *(piVar33[0xf1] + iVar30) = uVar18;
                                    *(piVar33[0xf1] + iVar30 + 8) = piVar2;
                                    iVar19 = piVar33[0xc3];
                                }
                                piVar33[0xc0] = iVar19;
                                uVar7 = param_2[iVar29 * 8 + 2];
                                *(piVar33 + 0x60c) = 0x100200;
                                pcVar22 = NULL;
                                *(piVar33 + 0xc1) = uVar7;
                                piVar33[0xde] =
                                     piVar33[0xde] & 3U |
                                     (((piVar33 + 0xc0) * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) -
                                     0x200000000;
                                *(piVar33 + 0xdf) = piVar33 + 0xc0 & 0xfff;
                                *(piVar33 + 0x6fc) = 0x10;
                                iVar30 = sym.geni_i2c_prep_desc(piVar33,uVar16);
                                piVar33[0xe4] = iVar30;
                                if (iVar30 == 0) {
                                    uVar13 = 0xfffffff4;
                                }
                                else {
                                    pcVar32 = *(iVar30 + 0x18);
                                    __cfi_slowpath_diag(0xc97b94b4f4a7b659,pcVar32,0x8000420);
                                    uVar14 = (*pcVar32)(iVar30);
                                    if (-1 < uVar14) {
                                        piVar31 = piVar33[0xb5];
                                        pcVar32 = *(*piVar31 + 400);
                                        __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar32,0x8000440);
                                        (*pcVar32)(piVar31);
                                        cVar6 = *(piVar33 + 0x77d);
                                        goto joined_r0x08004d48;
                                    }
code_r0x08004ec4:
                                    pcVar22 = uVar14;
                                    _printk(0x8001414,"geni_i2c_gsi_xfer");
                                    uVar13 = 0xffffffea;
                                }
code_r0x08004edc:
                                *(piVar33 + 3) = uVar13;
code_r0x08004ee0:
                                piVar31 = piVar33[0xb4];
                                if (piVar33[0xf2] == '\0') {
                                    pcVar32 = *(*piVar31 + 0x178);
                                    if (pcVar32 != NULL) {
                                        __cfi_slowpath_diag(0x146502001565ea5c,pcVar32,0x80003c0);
                                        (*pcVar32)(piVar31);
                                    }
                                    *(piVar33 + 0xe2) = 0;
                                    cVar6 = *(piVar33 + 0x77d);
joined_r0x08004f90:
                                    if (cVar6 != '\0') {
                                        *(piVar33 + 0xe2) = 0;
                                    }
                                    if ((*puVar34 & 1) == 0) goto code_r0x08004f38;
code_r0x08005060:
                                    iVar30 = *piVar2;
                                    piVar31 = arg4;
                                    if (iVar30 != -1) {
                                        piVar31 = 0x2;
                                        goto code_r0x0800507c;
                                    }
                                    goto code_r0x08005088;
                                }
                                pcVar32 = *(*piVar31 + 0x168);
                                if (pcVar32 == NULL) {
                                    uVar35 = 0xffffffda;
                                    piVar31 = arg4;
                                }
                                else {
                                    pcVar22 = 0x8000460;
                                    __cfi_slowpath_diag(0x146502001565ea5c,pcVar32);
                                    uVar16 = (*pcVar32)(piVar31);
                                    if (uVar16 == 0) {
code_r0x08004f24:
                                        cVar6 = *(piVar33 + 0x77d);
                                        goto joined_r0x08004f90;
                                    }
                                    uVar35 = uVar16;
                                    piVar31 = arg4;
                                }
                                *(piVar33 + 3) = uVar35;
                                *(piVar33 + 0x793) = 1;
                                ipc_log_string(piVar33[0xb2],"Channel cancel failed\n");
                                if (*piVar33 == 0) {
                                    _printk(0x8000597);
                                }
                                else {
                                    _dev_err(*piVar33,"Channel cancel failed\n");
                                }
                                if (*piVar33 != 0) {
                                    sym.i2c_trace_log(*piVar33,0x800155e,pcVar22,piVar31);
                                }
                                goto code_r0x08005720;
                            }
                            uVar35 = 0xfffffffb;
                            piVar31 = arg4;
                        }
                        else {
                            uVar35 = 0xfffffffb;
                            *piVar2 = -1;
                        }
                    }
                    ipc_log_string(piVar33[0xb2],"geni_se_common_iommu_map_buf for rx failed :%d\n",uVar35);
                    if (*piVar33 == 0) {
                        _printk(0x8001299,uVar35);
                    }
                    else {
                        _dev_err(*piVar33,"geni_se_common_iommu_map_buf for rx failed :%d\n",uVar35);
                    }
                    iVar29 = *piVar33;
                    if (iVar29 != 0) {
                        pcVar22 = "geni_se_common_iommu_map_buf for rx failed :%d\n";
code_r0x080058f4:
                        sym.i2c_trace_log(iVar29,pcVar22,uVar35,piVar31);
                    }
code_r0x080058fc:
                    i2c_put_dma_safe_msg_buf(uVar18,puVar26,0);
                    goto code_r0x08005720;
                }
                ipc_log_string(iVar19,"msg[%d].len:%d W\n",uVar11);
                if (*piVar33 != 0) {
                    piVar31 = *(piVar33[0xa0] + 4);
                    sym.i2c_trace_log(*piVar33,0x80014c7,uVar11,piVar31);
                }
                if (piVar24 == NULL) {
                    uVar35 = 0xffffffea;
code_r0x08005844:
                    ipc_log_string(piVar33[0xb2],"geni_se_common_iommu_map_buf for tx failed :%d\n",uVar35);
                    if (*piVar33 == 0) {
                        _printk(0x80011aa,uVar35);
                    }
                    else {
                        _dev_err(*piVar33,"geni_se_common_iommu_map_buf for tx failed :%d\n",uVar35);
                    }
                    iVar29 = *piVar33;
                    if (iVar29 != 0) {
                        pcVar22 = "geni_se_common_iommu_map_buf for tx failed :%d\n";
                        goto code_r0x080058f4;
                    }
                    goto code_r0x080058fc;
                }
                arg4 = param_2[iVar29 * 8 + 2];
                uVar20 = is_vmalloc_addr(uVar18);
                if (((uVar20 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                    obj.dma_map_single_attrs.__already_done = 0x1;
                    uVar17 = dev_driver_string(piVar24);
                    iVar29 = piVar24[0xe];
                    if (iVar29 == 0) {
                        iVar29 = *piVar24;
                    }
                    __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar17,iVar29);
    //WARNING: Does not return
                    pcVar32 = SoftwareBreakpoint(0x800,0x80050f8);
                    (*pcVar32)();
                }
                if ((uVar20 & 1) != 0) {
                    uVar35 = 0xfffffffb;
                    *piVar3 = -1;
                    goto code_r0x08005844;
                }
                iVar19 = dma_map_page_attrs(piVar24,(((uVar18 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) -
                                                     0x200000000,uVar18 & 0xfff,arg4,1,0);
                *piVar3 = iVar19;
                if (iVar19 == -1) {
                    uVar35 = 0xfffffffb;
                    piVar31 = arg4;
                    goto code_r0x08005844;
                }
                if (piVar33[0xf1] != 0) {
                    *(piVar33[0xf1] + iVar30) = uVar18;
                    *(piVar33[0xf1] + iVar30 + 8) = piVar3;
                    iVar19 = piVar33[0xc2];
                }
                piVar33[0xbe] = iVar19;
                puVar5 = piVar1 + uVar35 * 4;
                uVar20 = *puVar5;
                uVar13 = 0x100200;
                if (*(piVar33 + 0x77d) != '\0' && iVar4 == -1) {
                    uVar13 = 0x100201;
                }
                *(piVar33 + 0xbf) = param_2[iVar29 * 8 + 2];
                *(piVar33 + 0x5fc) = uVar13;
                uVar35 = uVar14 + 2;
                *puVar5 = uVar20 & 3 |
                          (((piVar33 + 0xbe) * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
                *(puVar5 + 1) = piVar33 + 0xbe & 0xfff;
                *(puVar5 + 0xc) = 0x10;
                cVar6 = *(piVar33 + 0x77d);
joined_r0x08004d48:
                if ((cVar6 != '\0') && (iVar4 == -1)) {
                    puVar5 = piVar1 + uVar35 * 4;
                    *puVar5 = *puVar5 & 3 |
                              (((piVar23 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
                    *(puVar5 + 1) = piVar23 & 0xfff;
                    *(puVar5 + 0xc) = 0x10;
                }
                pcVar22 = 0x1;
                iVar30 = sym.geni_i2c_prep_desc(piVar33,uVar16);
                piVar33[0xe3] = iVar30;
                if (iVar30 == 0) {
                    uVar13 = 0xfffffff4;
                    goto code_r0x08004edc;
                }
                pcVar32 = *(iVar30 + 0x18);
                __cfi_slowpath_diag(0xc97b94b4f4a7b659,pcVar32,0x8000420);
                uVar14 = (*pcVar32)(iVar30);
                if (uVar14 < 0) goto code_r0x08004ec4;
                piVar31 = piVar33[0xb4];
                pcVar22 = 0x8000440;
                pcVar32 = *(*piVar31 + 400);
                __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar32);
                (*pcVar32)(piVar31);
                iVar15 = wait_for_completion_timeout(piVar33 + 0x9c,*(piVar33 + 0x1c));
                if (iVar15 != 0) {
code_r0x08004e10:
                    if (piVar33[3] != 0) goto code_r0x08004ee0;
                    goto code_r0x08004f24;
                }
                ipc_log_string(piVar33[0xb2],"I2C gsi xfer timeout:%u flags:%d addr:0x%x\n",*(piVar33 + 0x1c),
                               piVar33[0xa0][1],*piVar33[0xa0]);
                arg4 = piVar33[0xa0][1];
                piVar31 = *piVar33[0xa0];
                if (*piVar33 == 0) {
                    _printk(0x80014d9,*(piVar33 + 0x1c),arg4);
                    arg4 = piVar31;
                }
                else {
                    _dev_err(*piVar33,"I2C gsi xfer timeout:%u flags:%d addr:0x%x\n");
                }
                if (*piVar33 != 0) {
                    arg4 = *(piVar33[0xa0] + 2);
                    sym.i2c_trace_log(*piVar33,0x800164d,*(piVar33 + 0x1c),arg4);
                }
                pcVar22 = piVar33[0xb2];
                sym.geni_i2c_se_dump_dbg_regs(piVar33 + 0xa1,piVar33[1],pcVar22);
                *(piVar33 + 3) = 0xffffff92;
                uVar16 = sym.readl_relaxed(piVar33[1] + 0x908);
                if ((~uVar16 & 3) == 0) goto code_r0x08004e10;
                pcVar21 = "geni_i2c_gsi_xfer";
                pcVar22 = pcVar21;
                ipc_log_string(piVar33[0xb2],"%s: IO lines not in good state\n");
                if (*piVar33 == 0) {
                    _printk(0x800174d,"geni_i2c_gsi_xfer");
                }
                else {
                    pcVar22 = pcVar21;
                    _dev_err(*piVar33,"%s: IO lines not in good state\n");
                }
                if (*piVar33 != 0) {
                    sym.i2c_trace_log(*piVar33,0x8000999,0x80019aa,arg4);
                    pcVar22 = pcVar21;
                }
                if (*(piVar33 + 0x796) == '\0') goto code_r0x08004e10;
                *(piVar33 + 0x795) = 1;
                if ((*puVar34 & 1) != 0) goto code_r0x08005060;
code_r0x08004f38:
                iVar30 = *piVar3;
                piVar31 = arg4;
                if (iVar30 != -1) {
                    piVar31 = 0x1;
code_r0x0800507c:
                    dma_unmap_page_attrs(piVar24,iVar30,param_2[iVar29 * 8 + 2],piVar31,0);
                }
code_r0x08005088:
                i2c_put_dma_safe_msg_buf(uVar18,puVar26,piVar33[3] == 0);
                uVar35 = *(piVar33 + 3);
                if (*(piVar33 + 3) != 0) goto code_r0x08005720;
                uVar11 = uVar11 + 1;
            } while (uVar11 != uVar10);
            goto code_r0x08005718;
        }
        uVar18 = sym.geni_i2c_gsi_request_channel(piVar33);
        uVar35 = uVar18 & 0xffffffff;
        if (uVar18 == 0) goto code_r0x08003f4c;
    }
    else {
        *(arg1 + 0x77d) = 0;
        if (uVar10 < 1) {
code_r0x08005714:
            if (uVar35 != 0) goto code_r0x08005720;
        }
        else {
            piVar33 = arg1 + 0x9c;
            uVar18 = 0;
            iVar29 = 4;
            pcVar22 = "geni_i2c_xfer";
            piVar25 = arg1 + 0xa1;
            do {
                *(arg1 + 0x9c) = 0;
                iStack_80 = 0;
                iStack_78 = 0;
                bVar9 = uVar18 < uVar10 - 1;
                puVar26 = param_2 + iVar29 + -4;
                uVar7 = *puVar26;
                arg1[0xa0] = puVar26;
                if (puVar26 == NULL) {
                    ipc_log_string(arg1[0xb2],"%s: Invalid buffer\n","geni_i2c_xfer");
                    if (*arg1 == 0) {
                        uVar35 = 0xfffffff4;
                    }
                    else {
                        sym.i2c_trace_log(*arg1,0x800152d,0x8000ead,piVar31);
                        uVar35 = 0xfffffff4;
                    }
                    goto code_r0x08005714;
                }
                uVar11 = *(arg1 + 0xb3);
                if (3 < uVar11) goto code_r0x080059d8;
                if (uVar11 == 3) goto code_r0x080059d4;
                iVar12 = 0;
                if (*(obj.geni_i2c_clk_map + uVar11 * 8) != 0) {
                    iVar12 = (*(param_2 + iVar29) * 9000000) / *(obj.geni_i2c_clk_map + uVar11 * 8);
                }
                uVar13 = __usecs_to_jiffies(iVar12 * 10 + 500000);
                *(arg1 + 0x1c) = uVar13;
                if ((*(arg1 + 0x794) == '\0') && (0x20 < *(param_2 + iVar29))) {
                    geni_se_select_mode(piVar25,2);
                    bVar8 = true;
                    iStack_b0 = i2c_get_dma_safe_msg_buf(puVar26,1);
                    if (iStack_b0 == 0) {
                        uVar35 = 0xfffffff4;
                        goto code_r0x08005714;
                    }
                }
                else {
                    geni_se_select_mode(piVar25,1);
                    bVar8 = false;
                    iStack_b0 = 0;
                }
                uVar16 = bVar9;
                uVar11 = (uVar7 & 0x7f) << 9 | uVar16 << 2;
                ipc_log_string(arg1[0xb2],"%s: stretch:%d, m_param:0x%x\n","geni_i2c_xfer",uVar16,uVar11);
                if (*arg1 != 0) {
                    sym.i2c_trace_log(*arg1,0x8000b1b,0x8000ead,bVar9);
                }
                piVar31 = *(arg1[0xa0] + 4);
                if ((*(param_2 + iVar29 + -2) & 1) == 0) {
                    ipc_log_string(arg1[0xb2],"msgs[%d].len:%d W\n",uVar18 & 0xffffffff);
                    if (*arg1 != 0) {
                        piVar31 = *(arg1[0xa0] + 4);
                        sym.i2c_trace_log(*arg1,0x8000d09,uVar18 & 0xffffffff,piVar31);
                    }
                    sym.writel_relaxed(*(param_2 + iVar29),arg1[1] + 0x26c);
                    sym.writel(uVar11 | 0x8000000,arg1[0xa1] + 0x600);
                    if (bVar8) {
                        piVar31 = &iStack_78;
                        uVar11 = geni_se_tx_dma_prep(piVar25,iStack_b0,*(param_2 + iVar29));
                        if (uVar11 == 0) {
                            iVar30 = arg1[0xf1];
                            if (iVar30 != 0) {
                                iVar19 = -0x18;
                                goto code_r0x080042d8;
                            }
code_r0x080042ec:
                            uVar35 = 0;
                            bVar9 = true;
                            goto code_r0x080042f4;
                        }
                        uVar35 = uVar11;
                        i2c_put_dma_safe_msg_buf(iStack_b0,puVar26,0);
                        geni_se_select_mode(piVar25,1);
                    }
                    sym.writel_relaxed(1,arg1[1] + 0x80c);
                    bVar9 = false;
                }
                else {
                    ipc_log_string(arg1[0xb2],"msgs[%d].len:%d R\n",uVar18 & 0xffffffff);
                    if (*arg1 != 0) {
                        piVar31 = *(arg1[0xa0] + 4);
                        sym.i2c_trace_log(*arg1,0x80014a2,uVar18 & 0xffffffff,piVar31);
                    }
                    sym.writel_relaxed(*(param_2 + iVar29),arg1[1] + 0x270);
                    sym.writel(uVar11 | 0x10000000,arg1[0xa1] + 0x600);
                    bVar9 = false;
                    if (bVar8) {
                        piVar31 = &iStack_80;
                        uVar11 = geni_se_rx_dma_prep(piVar25,iStack_b0,*(param_2 + iVar29));
                        if (uVar11 == 0) {
                            iVar30 = arg1[0xf1];
                            if (iVar30 == 0) goto code_r0x080042ec;
                            iVar19 = -0x20;
code_r0x080042d8:
                            bVar9 = true;
                            uVar35 = 0;
                            *(iVar30 + iVar29 + -4) = iStack_b0;
                            *(arg1[0xf1] + iVar29 + 4) = &stack0xffffffffffffffa0 + iVar19;
                        }
                        else {
                            uVar35 = uVar11;
                            i2c_put_dma_safe_msg_buf(iStack_b0,puVar26,0);
                            geni_se_select_mode(piVar25,1);
                            bVar9 = false;
                        }
                    }
                }
code_r0x080042f4:
                DataSynchronizationBarrier(3,3,0);
                iVar12 = wait_for_completion_timeout(piVar33,*(arg1 + 0x1c));
                pcVar21 = pcVar22;
                if (iVar12 == 0) {
                    ipc_log_string(arg1[0xb2],"I2C xfer timeout: %d\n",*(arg1 + 0x1c));
                    pcVar21 = *(arg1 + 0x1c);
                    if (*arg1 == 0) {
                        _printk(0x8000d1c,pcVar21);
                    }
                    else {
                        _dev_err(*arg1,"I2C xfer timeout: %d\n");
                    }
                    if (*arg1 != 0) {
                        pcVar21 = *(arg1 + 0x1c);
                        sym.i2c_trace_log(*arg1,0x8000e2c,pcVar21,piVar31);
                    }
                    sym.geni_i2c_err(arg1,9);
                    uVar11 = sym.readl_relaxed(arg1[1] + 0x908);
                    if ((~uVar11 & 3) == 0) goto code_r0x08004370;
                    piVar23 = uVar11;
                    pcVar21 = pcVar22;
                    piVar31 = piVar23;
                    ipc_log_string(arg1[0xb2],"%s: IO lines not good: 0x%x\n");
                    if (*arg1 != 0) {
                        pcVar21 = pcVar22;
                        sym.i2c_trace_log(*arg1,0x8000663,0x8000ead,piVar23);
                        piVar31 = piVar23;
                    }
                    if (*(arg1 + 0x796) == '\0') goto code_r0x08004370;
code_r0x0800522c:
                    *(arg1 + 0x795) = 1;
                    goto code_r0x08005714;
                }
                piVar31 = *(param_2 + iVar29);
                if ((*(param_2 + iVar29 + -2) & 1) == 0) {
                    ipc_log_string(arg1[0xb2],"%s:Write operation completed for len:%d\n");
                    iVar30 = *arg1;
                    if (iVar30 != 0) {
                        uVar7 = *(param_2 + iVar29);
                        arg2 = "%s:Write operation completed for len:%d\n";
code_r0x08004368:
                        piVar31 = uVar7;
                        pcVar21 = pcVar22;
                        sym.i2c_trace_log(iVar30,arg2,0x8000ead,piVar31);
                    }
                }
                else {
                    ipc_log_string(arg1[0xb2],"%s: Read operation completed for len:%d\n");
                    iVar30 = *arg1;
                    if (iVar30 != 0) {
                        uVar7 = *(param_2 + iVar29);
                        arg2 = "%s: Read operation completed for len:%d\n";
                        goto code_r0x08004368;
                    }
                }
code_r0x08004370:
                if (arg1[3] == 0) {
code_r0x080044b4:
                    arg1[0xb0] = 0;
                }
                else {
                    if (*(arg1 + 0x796) != '\0') {
                        uVar11 = sym.readl_relaxed(arg1[1] + 0x908);
                        if ((~uVar11 & 3) != 0) {
                            ipc_log_string(arg1[0xb2],"%s: IO lines not in good state\n","geni_i2c_xfer");
                            if (*arg1 != 0) {
                                sym.i2c_trace_log(*arg1,0x8000999,0x8000ead,piVar31);
                            }
                            goto code_r0x0800522c;
                        }
                        if (arg1[3] == -0x10) {
                            ipc_log_string(arg1[0xb2],"%s:run reg68 war\n","geni_i2c_xfer");
                            if (*arg1 != 0) {
                                sym.i2c_trace_log(*arg1,0x80014b5,0x8000ead,piVar31);
                            }
                            uVar11 = sym.readl_relaxed(arg1[1] + 0x600);
                            piVar31 = uVar11;
                            pcVar21 = "do_reg68_war_for_rtl_se";
                            ipc_log_string(arg1[0xb2],"%s: SE_GENI_M_CMD0:0x%x\n");
                            if (((uVar11 >> 2 & 1) != 0) && (*(arg1 + 0x796) != '\0')) {
                                uVar16 = sym.readl_relaxed(arg1[1] + 0x210);
                                pcVar21 = "do_reg68_war_for_rtl_se";
                                ipc_log_string(arg1[0xb2],"%s: Before WAR REG68:0x%x\n","do_reg68_war_for_rtl_se",
                                               uVar16);
                                uVar11 = 0x100120;
                                if ((uVar16 & 0x20) != 0) {
                                    uVar11 = 0x100110;
                                }
                                sym.writel_relaxed(uVar11,arg1[1] + 0x210);
                                uVar35 = sym.readl_relaxed(arg1[1] + 0x210);
                                piVar31 = uVar35 & 0xffffffff;
                                ipc_log_string(arg1[0xb2],"%s: After WAR REG68:0x%x\n");
                            }
                        }
                    }
                    *piVar33 = 0;
                    sym.writel_relaxed(4,*piVar25 + 0x604);
                    iVar12 = wait_for_completion_timeout(piVar33,0xfa);
                    if (iVar12 != 0) goto code_r0x080044b4;
                    ipc_log_string(arg1[0xb2],"Abort\n");
                    if (*arg1 == 0) {
                        _printk(0x800055a);
                    }
                    else {
                        _dev_err(*arg1,"Abort\n");
                    }
                    if (*arg1 != 0) {
                        sym.i2c_trace_log(*arg1,0x80008b5,pcVar21,piVar31);
                    }
                    sym.writel_relaxed(2,*piVar25 + 0x604);
                    arg1[0xb0] = 0;
                }
                if (bVar9) {
                    if (arg1[3] != 0) {
                        *(arg1 + 0x9c) = 0;
                        iVar30 = 0xd58;
                        if (*(param_2 + iVar29 + -2) != 1) {
                            iVar30 = 0xc58;
                        }
                        sym.writel_relaxed(1,arg1[1] + iVar30);
                        wait_for_completion_timeout(piVar33,0xfa);
                    }
                    if (iStack_80 != 0) {
                        geni_se_rx_dma_unprep(piVar25,iStack_80,*(param_2 + iVar29));
                    }
                    if (iStack_78 != 0) {
                        geni_se_tx_dma_unprep(piVar25,iStack_78,*(param_2 + iVar29));
                    }
                    i2c_put_dma_safe_msg_buf(iStack_b0,puVar26,arg1[3] == 0);
                }
                uVar11 = *(arg1 + 3);
                uVar35 = uVar11;
                if (uVar11 != 0) {
                    ipc_log_string(arg1[0xb2],"i2c error :%d\n",uVar11);
                    if (*arg1 == 0) {
                        _printk(0x8000845,arg1[3]);
                    }
                    else {
                        _dev_err(*arg1,"i2c error :%d\n");
                    }
                    if (*arg1 != 0) {
                        sym.i2c_trace_log(*arg1,0x800106c,*(arg1 + 3),piVar31);
                    }
                    if (((arg1[0xf3] == '\0') || (uVar18 = sym.readl_relaxed(arg1[1] + 0x908), (uVar18 & 1) != 0)) ||
                       ((iVar12 = arg1[3], iVar12 != -0x6e && ((iVar12 != -0x10 && (iVar12 != -0x47)))))) {
                        ipc_log_string(arg1[0xb2],"Bus Recovery not required/enabled\n");
                    }
                    else {
                        ipc_log_string(arg1[0xb2],"SDA Line stuck\n");
                        ipc_log_string(arg1[0xb2],"%s: start recovery\n","geni_i2c_bus_recovery");
                        if (*arg1 != 0) {
                            sym.i2c_trace_log(*arg1,0x8001507,0x8000928,piVar31);
                        }
                        *piVar33 = 0;
                        sym.writel(0x30000000,*piVar25 + 0x600);
                        iVar12 = wait_for_completion_timeout(piVar33,0xfa);
                        if (iVar12 == 0) {
                            sym.geni_i2c_err(arg1,9);
                            arg1[0xa0] = 0;
                            iVar12 = sym.geni_i2c_stop_with_cancel(arg1);
                            if (iVar12 == 0) goto code_r0x08005654;
                            ipc_log_string(arg1[0xb2],"%s: Bus clear Failed\n","geni_i2c_bus_recovery");
                            iVar29 = *arg1;
                            if (iVar29 != 0) {
                                pcVar22 = "%s: Bus clear Failed\n";
code_r0x0800596c:
                                sym.i2c_trace_log(iVar29,pcVar22,0x8000928,piVar31);
                            }
code_r0x08005978:
                            ipc_log_string(arg1[0xb2],"%s:Bus Recovery failed\n","geni_i2c_xfer");
                            if (*arg1 == 0) {
                                _printk(0x80013e1,"geni_i2c_xfer");
                            }
                            else {
                                _dev_err(*arg1,"%s:Bus Recovery failed\n","geni_i2c_xfer");
                            }
                        }
                        else {
code_r0x08005654:
                            ipc_log_string(arg1[0xb2],"%s: BUS_CLEAR success\n","geni_i2c_bus_recovery");
                            if (*arg1 != 0) {
                                sym.i2c_trace_log(*arg1,0x8001847,0x8000928,piVar31);
                            }
                            *piVar33 = 0;
                            sym.writel(0x38000000,*piVar25 + 0x600);
                            iVar12 = wait_for_completion_timeout(piVar33,0xfa);
                            if (iVar12 == 0) {
                                sym.geni_i2c_err(arg1,9);
                                arg1[0xa0] = 0;
                                iVar12 = sym.geni_i2c_stop_with_cancel(arg1);
                                if (iVar12 != 0) {
                                    ipc_log_string(arg1[0xb2],"%s:Bus Stop Failed\n","geni_i2c_bus_recovery");
                                    iVar29 = *arg1;
                                    if (iVar29 != 0) {
                                        pcVar22 = "%s:Bus Stop Failed\n";
                                        goto code_r0x0800596c;
                                    }
                                    goto code_r0x08005978;
                                }
                            }
                            ipc_log_string(arg1[0xb2],"%s: success\n","geni_i2c_bus_recovery");
                            if (*arg1 != 0) {
                                sym.i2c_trace_log(*arg1,0x8000f9a,0x8000928,piVar31);
                            }
                        }
                    }
                    goto code_r0x08005714;
                }
                iVar29 = iVar29 + 0x10;
                uVar18 = uVar18 + 1;
            } while ((param_3 & 0xffffffff) != uVar18);
        }
code_r0x08005718:
        uVar35 = arg3;
    }
code_r0x08005720:
    if (arg1[0xf2] == '\0') {
        iVar29 = *arg1;
        uVar17 = ktime_get_mono_fast_ns();
        *(iVar29 + 0x218) = uVar17;
        __pm_runtime_suspend(*arg1,0xd);
    }
    *(arg1 + 0x79c) = 0;
    arg1[0xa0] = 0;
    *(arg1 + 3) = 0;
    ipc_log_string(arg1[0xb2],"i2c txn ret:%d\n",uVar35 & 0xffffffff);
    if (*arg1 != 0) {
        sym.i2c_trace_log(*arg1,0x80008bc,uVar35 & 0xffffffff,piVar31);
    }
code_r0x08005778:
    iVar29 = sp_el0;
    if (*(iVar29 + 0x5e0) == iStack_70) {
        return uVar35 & 0xffffffff;
    }
    __stack_chk_fail();
    return 0xefe0009;
}


// ===== sym.__traceiter_i2c_log_info.cfi_jt @ 0x08002310 (size 8) =====

ulong sym.__traceiter_i2c_log_info.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80076b8;
    piVar1 = *0x80076b8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__bpf_trace_i2c_log_info.ff89956466640c790290520478333855.cfi_jt @ 0x08002318 (size 8) =====

void sym.__bpf_trace_i2c_log_info.ff89956466640c790290520478333855.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2();
    return;
}


// ===== sym.trace_event_raw_event_i2c_log_info.ff89956466640c790290520478333855.cfi_jt @ 0x08002320 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08002620)

void sym.trace_event_raw_event_i2c_log_info.ff89956466640c790290520478333855.cfi_jt
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
        goto code_r0x080024f0;
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
            pcVar6 = SoftwareBreakpoint(0x800,0x8002528);
            (*pcVar6)();
        }
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x080024f0:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return;
    }
    auVar13 = __stack_chk_fail();
    iVar10 = auVar13._0_8_;
    *extraout_x18 = sym.perf_trace_i2c_log_info;
    pcStack_e8 = sym.perf_trace_i2c_log_info;
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
            *(iStack_100 + 0x100) = ~(-1L << uVar8) & 0x8002530;
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
                pcVar6 = SoftwareBreakpoint(0x800,0x80026d0);
                (*pcVar6)();
            }
            perf_trace_run_bpf_submit(iVar9,iVar4,uStack_104,iVar10,1,iStack_100,piVar1,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_f8) {
        __stack_chk_fail();
        uVar5 = tpidr_el2;
        *extraout_x18_00 = 0x80026d8;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_i2c_log_info.ff89956466640c790290520478333855.cfi_jt @ 0x08002328 (size 8) =====

void sym.perf_trace_i2c_log_info.ff89956466640c790290520478333855.cfi_jt(int64_t param_1,char *param_2,ulong *param_3)

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
                pcVar7 = SoftwareBreakpoint(0x800,0x80026d0);
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
    *extraout_x18 = 0x80026d8;
    bpf_trace_run2(in_tmp_ldXn);
    return;
}


// ===== sym.geni_i2c_irq.ff89956466640c790290520478333855.cfi_jt @ 0x08002330 (size 8) =====

//WARNING: Type propagation algorithm not settling

ulong sym.geni_i2c_irq.ff89956466640c790290520478333855.cfi_jt(ulong param_1,int64_t *param_2)

{
    uchar *puVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    unkuint3 Var4;
    bool bVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    int iVar10;
    int iVar11;
    uint uVar12;
    uint64_t arg1;
    char *pcVar13;
    int64_t iVar14;
    int64_t iVar15;
    ulong *in_x18;
    uint64_t uVar16;
    int64_t iVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = sym.readl_relaxed(param_2[1] + 0x610);
    uVar16 = uVar6;
    uVar7 = sym.readl_relaxed(param_2[1] + 0x804);
    uVar8 = sym.readl_relaxed(param_2[1] + 0xc40);
    uVar9 = sym.readl_relaxed(param_2[1] + 0xd40);
    iVar10 = sym.readl_relaxed(param_2[1] + 600);
    pcVar13 = "geni_i2c_irq";
    iVar17 = param_2[0xa0];
    uVar19 = uVar16;
    ipc_log_string(param_2[0xb2],"%s: m_irq_status:0x%x\n");
    if (*param_2 != 0) {
        pcVar13 = "geni_i2c_irq";
        sym.i2c_trace_log(*param_2,0x8000b6d,0x8000e88,uVar16);
        uVar19 = uVar16;
    }
    if (iVar17 == 0) {
        ipc_log_string(param_2[0xb2],"Spurious irq\n");
        if (*param_2 != 0) {
            sym.i2c_trace_log(*param_2,0x8000e1e,pcVar13,uVar19);
        }
        sym.geni_i2c_err(param_2,10);
    }
    else {
        if ((((((uVar6 >> 3 & 1) == 0) && ((uVar9 & 0x340) == 0)) && ((uVar6 >> 4 & 1) == 0)) &&
            (((uVar6 >> 5 & 1) == 0 && ((uVar6 >> 10 & 1) == 0)))) &&
           (((uVar6 >> 0xc & 1) == 0 && ((uVar6 >> 0xd & 1) == 0)))) {
            if (((uVar6 & 0xc000000) == 0) || ((*(iVar17 + 2) & 1) == 0)) {
                if (((uVar6 >> 0x1e & 1) != 0) && (((*(iVar17 + 2) & 1) == 0 && (param_2[2] != 0)))) {
                    uVar19 = *(param_2 + 0xb0);
                    uVar7 = 0;
                    uVar3 = *(iVar17 + 4);
                    do {
                        uVar16 = uVar3;
                        if (uVar19 < uVar3) {
                            iVar14 = uVar19;
                            iVar15 = *(iVar17 + 8);
                            uVar19 = iVar14 + 1;
                            arg1 = *(iVar15 + iVar14);
                            if (uVar19 < uVar16) {
                                puVar1 = iVar15 + uVar19;
                                uVar19 = iVar14 + 2;
                                uVar3 = CONCAT11(*puVar1,*(iVar15 + iVar14));
                                arg1 = uVar3;
                                if (uVar19 < uVar16) {
                                    puVar1 = iVar15 + uVar19;
                                    uVar19 = iVar14 + 3;
                                    Var4 = CONCAT12(*puVar1,uVar3);
                                    arg1 = Var4;
                                    if (uVar19 < uVar16) {
                                        puVar1 = iVar15 + uVar19;
                                        uVar19 = iVar14 + 4;
                                        arg1 = CONCAT13(*puVar1,Var4);
                                    }
                                }
                            }
                        }
                        else {
                            arg1 = 0;
                        }
                        sym.writel_relaxed(arg1,param_2[1] + 0x700);
                        *(param_2 + 0xb0) = uVar19;
                        uVar3 = *(iVar17 + 4);
                        if (uVar19 == uVar3) {
                            sym.writel_relaxed(0,param_2[1] + 0x80c);
                            break;
                        }
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < *(param_2 + 2));
                }
            }
            else if ((uVar7 & 0x1ffffff) != 0) {
                uVar18 = 1;
                do {
                    uVar12 = sym.readl_relaxed(param_2[1] + 0x780);
                    uVar2 = *(param_2 + 0x584);
                    uVar19 = uVar2;
                    if (uVar2 < *(iVar17 + 4)) {
                        iVar14 = uVar2;
                        *(*(iVar17 + 8) + iVar14) = uVar12;
                        uVar19 = iVar14 + 1;
                        if (uVar19 < *(iVar17 + 4)) {
                            *(*(iVar17 + 8) + uVar19) = uVar12 >> 8;
                            uVar19 = iVar14 + 2;
                            if (uVar19 < *(iVar17 + 4)) {
                                *(*(iVar17 + 8) + uVar19) = uVar12 >> 0x10;
                                uVar19 = iVar14 + 3;
                                if (uVar19 < *(iVar17 + 4)) {
                                    *(*(iVar17 + 8) + uVar19) = uVar12 >> 0x18;
                                    uVar19 = iVar14 + 4;
                                }
                            }
                        }
                    }
                    *(param_2 + 0x584) = uVar19;
                } while ((uVar19 != *(iVar17 + 4)) &&
                        (bVar5 = uVar18 < (uVar7 & 0x1ffffff), uVar18 = uVar18 + 1, bVar5));
            }
            goto code_r0x08003800;
        }
        if ((uVar6 >> 10 & 1) != 0) {
            iVar11 = sym.readl_relaxed(param_2[1] + 0x910);
            pcVar13 = "Address NACK: slv unresponsive, check its power/reset-ln";
            if (iVar11 != 0) {
                pcVar13 = "Data NACK: Device NACK before end of TX transfer";
            }
            ipc_log_string(param_2[0xb2],0x80019a6,pcVar13);
            *(param_2 + 3) = 0xffffff95;
        }
        if ((uVar6 >> 0xc & 1) != 0) {
            sym.geni_i2c_err(param_2,3);
        }
        if ((uVar6 >> 0xd & 1) != 0) {
            sym.geni_i2c_err(param_2,4);
        }
        if ((uVar6 >> 1 & 1) != 0) {
            sym.geni_i2c_err(param_2,6);
        }
        if ((uVar6 >> 2 & 1) != 0) {
            sym.geni_i2c_err(param_2,7);
        }
        if ((uVar6 >> 5 & 1) != 0) {
            ipc_log_string(param_2[0xb2],0x80019a6,"Abort after timeout successful");
            *(param_2 + 3) = 0xffffff92;
        }
    }
    *(param_2 + 0x77c) = 1;
code_r0x08003800:
    if (iVar10 == 0) {
        sym.writel_relaxed(0,param_2[1] + 0x80c);
    }
    if (uVar6 != 0) {
        sym.writel_relaxed(uVar6,param_2[1] + 0x618);
    }
    if (iVar10 != 0) {
        if (uVar8 != 0) {
            sym.writel_relaxed(uVar8,param_2[1] + 0xc44);
        }
        if (uVar9 != 0) {
            sym.writel_relaxed(uVar9,param_2[1] + 0xd44);
        }
        DataSynchronizationBarrier(3,2,0);
        uVar6 = uVar8 | uVar9;
    }
    if ((uVar6 & 1) != 0) {
        *(param_2 + 0x77c) = 1;
    }
    if (*(param_2 + 0x77c) != '\0') {
        *(param_2 + 0x77c) = 0;
        complete(param_2 + 0x9c);
    }
    return 1;
}


// ===== sym.gi2c_gsi_rx_cb.ff89956466640c790290520478333855.cfi_jt @ 0x08002338 (size 8) =====

void sym.gi2c_gsi_rx_cb.ff89956466640c790290520478333855.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (iVar1 = *(param_1 + 0x20), iVar1 == 0)) {
        _printk(0x80006e0,"gi2c_gsi_rx_cb");
    }
    else if ((*(*(iVar1 + 0x500) + 2) & 1) != 0) {
        sym.gi2c_gsi_cb_err(param_1,0x800174a);
        complete(iVar1 + 0x4e0);
    }
    return;
}


// ===== sym.gi2c_gsi_tx_cb.ff89956466640c790290520478333855.cfi_jt @ 0x08002340 (size 8) =====

void sym.gi2c_gsi_tx_cb.ff89956466640c790290520478333855.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (iVar1 = *(param_1 + 0x20), iVar1 == 0)) {
        _printk(0x80018a7,"gi2c_gsi_tx_cb");
    }
    else {
        sym.gi2c_gsi_cb_err(param_1,0x8000778);
        complete(iVar1 + 0x4e0);
    }
    return;
}


// ===== sym.geni_i2c_suspend_late.ff89956466640c790290520478333855.cfi_jt @ 0x08002348 (size 8) =====

ulong sym.geni_i2c_suspend_late.ff89956466640c790290520478333855.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t arg1;
    int64_t iVar2;
    char *arg2;
    ulong *in_x18;
    code *pcVar3;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(param_1 + 0x98);
    if (*(piVar4 + 0x79c) == 0) {
        iVar2 = 0x80004a0;
        pcVar3 = *(piVar4[8] + 8);
        __cfi_slowpath_diag(0x229d00c971c85694,pcVar3);
        iVar1 = (*pcVar3)(piVar4 + 4,2);
        if (iVar1 != 0) {
            if (*(param_1 + 0x20c) != 2) {
                ipc_log_string(piVar4[0xb2],"%s: Force suspend\n","geni_i2c_suspend_late");
                if (*piVar4 != 0) {
                    sym.i2c_trace_log(*piVar4,0x8001a6c,0x8000ca9,param_4);
                }
                sym.geni_i2c_runtime_suspend(param_1);
                __pm_runtime_disable(param_1,1);
                __pm_runtime_set_status(param_1,2);
                pm_runtime_enable(param_1);
            }
            pcVar3 = *(piVar4[8] + 0x10);
            __cfi_slowpath_diag(0xcc8ee6e53668c2f6,pcVar3,0x80004c0);
            (*pcVar3)(piVar4 + 4,2);
            ipc_log_string(piVar4[0xb2],"%s ret=%d\n","geni_i2c_suspend_late");
            if (*piVar4 == 0) {
                return 0;
            }
            sym.i2c_trace_log(*piVar4,0x8001a61,0x8000ca9,param_4);
            return 0;
        }
        ipc_log_string(piVar4[0xb2],"late I2C transaction request\n");
        if (*piVar4 == 0) {
            _printk(0x8001301);
            arg1 = *piVar4;
        }
        else {
            _dev_err(*piVar4,"late I2C transaction request\n");
            arg1 = *piVar4;
        }
        if (arg1 != 0) {
            sym.i2c_trace_log(arg1,0x800191c,iVar2,param_4);
            return 0xfffffff0;
        }
    }
    else if (*(*piVar4 + 0x20c) == 2) {
        ipc_log_string(piVar4[0xb2],"%s System suspend not allowed while xfer in progress\n","geni_i2c_suspend_late");
        if (*piVar4 == 0) {
            _printk(0x80005d2,"geni_i2c_suspend_late");
        }
        else {
            _dev_err(*piVar4,"%s System suspend not allowed while xfer in progress\n","geni_i2c_suspend_late");
        }
        iVar2 = *piVar4;
        if (iVar2 != 0) {
            arg2 = "%s System suspend not allowed while xfer in progress\n";
code_r0x08007098:
            sym.i2c_trace_log(iVar2,arg2,0x8000ca9,param_4);
            return 0xfffffff0;
        }
    }
    else {
        ipc_log_string(piVar4[0xb2],":%s: runtime PM is active\n","geni_i2c_suspend_late");
        if (*piVar4 == 0) {
            _printk(0x80010e1,"geni_i2c_suspend_late");
        }
        else {
            _dev_err(*piVar4,":%s: runtime PM is active\n","geni_i2c_suspend_late");
        }
        iVar2 = *piVar4;
        if (iVar2 != 0) {
            arg2 = ":%s: runtime PM is active\n";
            goto code_r0x08007098;
        }
    }
    return 0xfffffff0;
}


// ===== sym.geni_i2c_resume_early.ff89956466640c790290520478333855.cfi_jt @ 0x08002350 (size 8) =====

ulong sym.geni_i2c_resume_early.ff89956466640c790290520478333855.cfi_jt(int64_t param_1)

{
    int64_t arg1;
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(param_1 + 0x98);
    ipc_log_string(piVar1[0xb2],"%s ret=%d\n","geni_i2c_resume_early",1);
    arg1 = *piVar1;
    if (arg1 != 0) {
        sym.i2c_trace_log(arg1,0x8001a61,0x8000dfc,1);
    }
    return 0;
}


// ===== sym.geni_i2c_hib_resume_noirq.ff89956466640c790290520478333855.cfi_jt @ 0x08002358 (size 8) =====

ulong sym.geni_i2c_hib_resume_noirq.ff89956466640c790290520478333855.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(param_1 + 0x98);
    ipc_log_string(piVar1[0xb2],0x80019a6,"geni_i2c_hib_resume_noirq");
    if (*piVar1 != 0) {
        sym.i2c_trace_log(*piVar1,0x80019a6,0x80011dc,param_4);
    }
    *(piVar1 + 0xef) = 0;
    return 0;
}


// ===== sym.geni_i2c_runtime_suspend.ff89956466640c790290520478333855.cfi_jt @ 0x08002360 (size 8) =====

uint64_t sym.geni_i2c_runtime_suspend.ff89956466640c790290520478333855.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    uint32_t uVar2;
    uint uVar3;
    ulong *in_x18;
    int64_t *arg1;
    int64_t iVar4;
    int64_t *piVar5;
    uint64_t arg4;
    int64_t iVar6;
    code *pcVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    if (arg1[0xef] == 1) {
        disable_irq(*(arg1 + 0x14));
    }
    if (*(arg1 + 0x797) == '\0') {
        if (((arg1[0xef] == 2) && (arg1[0xf2] == '\0')) &&
           (uVar2 = sym.geni_i2c_gpi_suspend_resume(arg1,1), uVar2 != 0)) {
            arg4 = uVar2;
            goto code_r0x08006b78;
        }
        if (arg1[0xf2] == '\0') {
            if (*(arg1 + 0x77d) != '\0') goto code_r0x08006a54;
            geni_se_resources_off(arg1 + 0xa1);
        }
        else {
            if (*(arg1 + 0x792) != '\0') {
                if (*(arg1 + 0x793) == '\0') {
                    arg1[0xb8] = 0;
                    arg1[0xb9] = 0x31010000000000;
                    sg_init_table(arg1 + 0xca,1);
                    *(arg1 + 0xcb) = arg1 + 0xb8 & 0xfff;
                    *(arg1 + 0x65c) = 0x10;
                    arg1[0xca] = (((arg1 + 0xb8) * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 |
                                 arg1[0xca] & 3U) - 0x200000000;
                    iVar4 = sym.geni_i2c_prep_desc(arg1,1);
                    arg1[0xe3] = iVar4;
                    if (iVar4 == 0) {
                        uVar3 = 0xfffffff4;
code_r0x08006b00:
                        *(arg1 + 3) = uVar3;
                    }
                    else {
                        *(arg1 + 0x9c) = 0;
                        pcVar7 = *(iVar4 + 0x18);
                        __cfi_slowpath_diag(0xc97b94b4f4a7b659,pcVar7,0x8000420);
                        iVar1 = (*pcVar7)(iVar4);
                        if (iVar1 < 0) {
                            _printk(0x8001414,"geni_i2c_unlock_bus",iVar1);
                            uVar3 = 0xffffffea;
                            goto code_r0x08006b00;
                        }
                        piVar5 = arg1[0xb4];
                        pcVar7 = *(*piVar5 + 400);
                        __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar7,0x8000440);
                        (*pcVar7)(piVar5);
                        iVar1 = wait_for_completion_timeout(arg1 + 0x9c,0xfa);
                        if (iVar1 == 0) {
                            ipc_log_string(arg1[0xb2],"%s failed\n","geni_i2c_unlock_bus");
                            if (*arg1 == 0) {
                                _printk(0x8001595,"geni_i2c_unlock_bus");
                            }
                            else {
                                _dev_err(*arg1,"%s failed\n","geni_i2c_unlock_bus");
                            }
                            if (*arg1 != 0) {
                                sym.i2c_trace_log(*arg1,0x80007ab,0x80010cd,param_4);
                            }
                            sym.geni_i2c_se_dump_dbg_regs(arg1 + 0xa1,arg1[1],arg1[0xb2]);
                            uVar3 = 0xffffff92;
                            goto code_r0x08006b00;
                        }
                    }
                    if ((*(arg1 + 0x793) != '\0') || (arg1[3] != 0)) goto code_r0x08006b14;
                }
                else {
code_r0x08006b14:
                    piVar5 = arg1[0xb4];
                    pcVar7 = *(*piVar5 + 0x178);
                    if (pcVar7 != NULL) {
                        __cfi_slowpath_diag(0x146502001565ea5c,pcVar7,0x80003c0);
                        (*pcVar7)(piVar5);
                    }
                    *(arg1 + 0xe2) = 0;
                    *(arg1 + 3) = 0;
                    *(arg1 + 0x793) = 0;
                }
                if (arg1[0xef] == 2) {
                    uVar2 = sym.geni_i2c_gpi_suspend_resume(arg1,1);
                    arg4 = uVar2;
                    if (uVar2 != 0) {
code_r0x08006b78:
                        ipc_log_string(arg1[0xb2],"%s: failing at geni_i2c_gpi_suspend_resume ret: %d\n",
                                       "geni_i2c_runtime_suspend",arg4);
                        if (*arg1 == 0) {
                            return arg4;
                        }
                        sym.i2c_trace_log(*arg1,0x8000fa7,0x8001134,arg4);
                        return arg4;
                    }
                    goto code_r0x08006bbc;
                }
                goto code_r0x08006bb8;
            }
            if (*(arg1 + 0x77d) == '\0') goto code_r0x08006bb8;
code_r0x08006a54:
            iVar4 = arg1[0xa4];
            iVar6 = arg1[0xad];
            iVar8 = arg1[0xae];
            clk_disable(iVar4);
            clk_unprepare(iVar4);
            clk_disable(iVar6);
            clk_unprepare(iVar6);
            clk_disable(iVar8);
            clk_unprepare(iVar8);
        }
        uVar2 = geni_icc_disable(arg1 + 0xa1);
        arg4 = uVar2;
        if (uVar2 != 0) {
            ipc_log_string(arg1[0xb2],"%s failing at geni_icc_disable ret=%d\n","geni_i2c_runtime_suspend",arg4);
            if (*arg1 != 0) {
                sym.i2c_trace_log(*arg1,0x80016b5,0x8001134,arg4);
            }
        }
    }
    else {
        if (*(arg1 + 0x77d) == '\0') {
            if (arg1[0xf2] == '\0') {
                geni_se_resources_off(arg1 + 0xa1);
            }
        }
        else {
            iVar4 = arg1[0xa4];
            iVar6 = arg1[0xad];
            iVar8 = arg1[0xae];
            clk_disable(iVar4);
            clk_unprepare(iVar4);
            clk_disable(iVar6);
            clk_unprepare(iVar6);
            clk_disable(iVar8);
            clk_unprepare(iVar8);
        }
code_r0x08006bb8:
        arg4 = 0;
    }
code_r0x08006bbc:
    if (*(arg1 + 0x794) != '\0') {
        iVar4 = arg1[0xaf];
        clk_disable(iVar4);
        clk_unprepare(iVar4);
    }
    ipc_log_string(arg1[0xb2],"%s ret=%d\n","geni_i2c_runtime_suspend",arg4);
    if (*arg1 != 0) {
        sym.i2c_trace_log(*arg1,0x8001a61,0x8001134,arg4);
    }
    return 0;
}


// ===== sym.geni_i2c_runtime_resume.ff89956466640c790290520478333855.cfi_jt @ 0x08002368 (size 8) =====

uchar * sym.geni_i2c_runtime_resume.ff89956466640c790290520478333855.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    uint32_t uVar2;
    int64_t iVar3;
    char *pcVar4;
    int iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *arg1;
    uchar *puVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    arg1 = *(param_1 + 0x98);
    if (arg1[0xb2] == 0) {
        uStack_40 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        iVar3 = (*arg1)[0xe];
        if (iVar3 == 0) {
            iVar3 = **arg1;
        }
        snprintf(&uStack_50,0x14,0x8000a15,iVar3);
        iVar3 = ipc_log_context_create(2,&uStack_50,0);
        arg1[0xb2] = iVar3;
        if (arg1[0xf2] != '\0') goto code_r0x080071c8;
code_r0x08007274:
        if (*(arg1 + 0x797) == '\0') {
            uVar2 = geni_icc_enable(arg1 + 0xa1);
            if (uVar2 == 0) {
                uVar2 = geni_icc_set_bw(arg1 + 0xa1);
                puVar6 = uVar2;
                if (uVar2 == 0) {
                    ipc_log_string(arg1[0xb2],"%s: GENI_TO_CORE:%d CPU_TO_GENI:%d GENI_TO_DDR:%d\n",
                                   "geni_i2c_runtime_resume",arg1[0xa8],arg1[0xaa],arg1[0xac]);
                    if (*arg1 != 0) {
                        sym.i2c_trace_log(*arg1,0x8000ff6,0x8001321,*(arg1 + 0xa8));
                    }
                    goto code_r0x0800727c;
                }
                ipc_log_string(arg1[0xb2],"%s failing at icc set bw ret=%d\n","geni_i2c_runtime_resume",uVar2);
                if (*arg1 == 0) {
                    _printk(0x800193a,"geni_i2c_runtime_resume",uVar2);
                }
                else {
                    _dev_err(*arg1,"%s failing at icc set bw ret=%d\n","geni_i2c_runtime_resume",uVar2);
                }
                iVar3 = *arg1;
                if (iVar3 == 0) goto code_r0x0800747c;
                pcVar4 = "%s failing at icc set bw ret=%d\n";
            }
            else {
                puVar6 = uVar2;
                ipc_log_string(arg1[0xb2],"%s failing at geni icc enable ret=%d\n","geni_i2c_runtime_resume",puVar6);
                iVar3 = *arg1;
                if (iVar3 == 0) goto code_r0x0800747c;
                pcVar4 = "%s failing at geni icc enable ret=%d\n";
            }
        }
        else {
code_r0x0800727c:
            if (*(arg1 + 0x794) == '\0') {
code_r0x08007384:
                uVar2 = geni_se_resources_on(arg1 + 0xa1);
                puVar6 = uVar2;
                if (uVar2 != 0) goto code_r0x0800747c;
                uVar2 = sym.geni_i2c_prepare(arg1);
                if (uVar2 != 0) {
                    iVar3 = *arg1;
                    pcVar4 = "I2C prepare failed: %d\n";
                    goto code_r0x08007474;
                }
                iVar5 = arg1[0xef];
                if (iVar5 == 1) {
                    enable_irq(*(arg1 + 0x14));
                    iVar5 = arg1[0xef];
                }
                if ((iVar5 != 2) || (uVar2 = sym.geni_i2c_gpi_suspend_resume(arg1,0), uVar2 == 0))
                goto code_r0x080072ec;
                puVar6 = uVar2;
                ipc_log_string(arg1[0xb2],"%s: failing at geni_i2c_gpi_suspend_resume ret:%d\n",
                               "geni_i2c_runtime_resume",puVar6);
                iVar3 = *arg1;
                if (iVar3 == 0) goto code_r0x0800747c;
                pcVar4 = "%s: failing at geni_i2c_gpi_suspend_resume ret:%d\n";
            }
            else {
                iVar3 = arg1[0xaf];
                uVar2 = clk_prepare(iVar3);
                if (uVar2 == 0) {
                    uVar2 = clk_enable(iVar3);
                    if (uVar2 == 0) goto code_r0x08007384;
                    clk_unprepare(iVar3);
                }
                puVar6 = uVar2;
                ipc_log_string(arg1[0xb2],"%s failing at core clk prepare enable ret=%d\n","geni_i2c_runtime_resume",
                               puVar6);
                iVar3 = *arg1;
                if (iVar3 == 0) goto code_r0x0800747c;
                pcVar4 = "%s failing at core clk prepare enable ret=%d\n";
            }
        }
code_r0x08007370:
        sym.i2c_trace_log(iVar3,pcVar4,0x8001321,puVar6);
    }
    else {
        if (arg1[0xf2] == '\0') goto code_r0x08007274;
code_r0x080071c8:
        if (*(arg1 + 0x792) == '\0') {
code_r0x080072ec:
            ipc_log_string(arg1[0xb2],"%s ret=%d\n","geni_i2c_runtime_resume",0);
            if (*arg1 != 0) {
                sym.i2c_trace_log(*arg1,0x8001a61,0x8001321,0);
            }
            puVar6 = NULL;
            goto code_r0x0800747c;
        }
        uVar2 = sym.geni_i2c_prepare(arg1);
        if (uVar2 == 0) {
            if ((arg1[0xef] == 2) && (uVar2 = sym.geni_i2c_gpi_suspend_resume(arg1,0), uVar2 != 0)) {
                puVar6 = uVar2;
                ipc_log_string(arg1[0xb2],"%s: failing at geni_i2c_gpi_suspend_resume ret: %d\n",
                               "geni_i2c_runtime_resume",puVar6);
                iVar3 = *arg1;
                if (iVar3 == 0) goto code_r0x0800747c;
                pcVar4 = "%s: failing at geni_i2c_gpi_suspend_resume ret: %d\n";
            }
            else {
                uVar2 = sym.geni_i2c_lock_bus(arg1);
                if (uVar2 == 0) goto code_r0x080072ec;
                puVar6 = uVar2;
                ipc_log_string(arg1[0xb2],"%s failed: %d\n","geni_i2c_runtime_resume",puVar6);
                if (*arg1 == 0) {
                    _printk(0x8001339,"geni_i2c_runtime_resume",puVar6);
                }
                else {
                    _dev_err(*arg1,"%s failed: %d\n","geni_i2c_runtime_resume",puVar6);
                }
                iVar3 = *arg1;
                if (iVar3 == 0) goto code_r0x0800747c;
                pcVar4 = "%s failed: %d\n";
            }
            goto code_r0x08007370;
        }
        iVar3 = *arg1;
        pcVar4 = "I2C prepare failed:%d\n";
code_r0x08007474:
        puVar6 = uVar2;
        _dev_err(iVar3,pcVar4,puVar6);
    }
code_r0x0800747c:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_38) {
        auVar7 = __stack_chk_fail();
        puVar6 = auVar7._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar6 != NULL) {
            switch(*puVar6) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar6,auVar7._8_8_,0);
                break;
            default:
                return puVar6;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x80075f8);
        (*pcVar1)();
    }
    return puVar6;
}


// ===== sym.__traceiter_i2c_log_info @ 0x08002370 (size 104) =====

ulong sym.__traceiter_i2c_log_info(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80076b8;
    piVar1 = *0x80076b8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2,arg3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.trace_event_raw_event_i2c_log_info @ 0x080023e0 (size 336) =====

//WARNING: Removing unreachable block (ram,0x08002620)

void sym.trace_event_raw_event_i2c_log_info(int64_t arg1,int64_t arg2,int64_t arg3)

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
        goto code_r0x080024f0;
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
            pcVar6 = SoftwareBreakpoint(0x800,0x8002528);
            (*pcVar6)();
        }
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x080024f0:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return;
    }
    auVar13 = __stack_chk_fail();
    iVar10 = auVar13._0_8_;
    *extraout_x18 = sym.perf_trace_i2c_log_info;
    pcStack_e8 = sym.perf_trace_i2c_log_info;
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
            *(iStack_100 + 0x100) = ~(-1L << uVar8) & 0x8002530;
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
                pcVar6 = SoftwareBreakpoint(0x800,0x80026d0);
                (*pcVar6)();
            }
            perf_trace_run_bpf_submit(iVar9,iVar4,uStack_104,iVar10,1,iStack_100,piVar2,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_f8) {
        __stack_chk_fail();
        uVar5 = tpidr_el2;
        *extraout_x18_00 = 0x80026d8;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_i2c_log_info @ 0x08002530 (size 436) =====

void sym.perf_trace_i2c_log_info(int64_t arg1,uint32_t arg2,int64_t arg3)

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
    uVar2 = 0x80015e7;
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
                pcVar7 = SoftwareBreakpoint(0x800,0x80026d0);
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
    *extraout_x18 = 0x80026d8;
    bpf_trace_run2(in_tmp_ldXn);
    return;
}


// ===== sym.__bpf_trace_i2c_log_info @ 0x080026e4 (size 36) =====

void sym.__bpf_trace_i2c_log_info(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2();
    return;
}


// ===== sym.i2c_trace_log @ 0x08002708 (size 304) =====

void sym.i2c_trace_log(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
            piVar4 = *0x80076b8;
            piVar3 = *0x80076b8;
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


// ===== sym.geni_i2c_se_dump_dbg_regs @ 0x08002850 (size 728) =====

void sym.geni_i2c_se_dump_dbg_regs(int64_t arg1,int64_t arg2,int64_t arg3)

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
    uVar17 = sym.readl_relaxed(arg2 + 0xd48);
    ipc_log_string(arg3,"%s: m_cmd0:0x%x, m_irq_status:0x%x, geni_status:0x%x, geni_ios:0x%x\n",
                   "geni_i2c_se_dump_dbg_regs",uVar18 & 0xffffffff,uVar1,uVar3,uVar4);
    if (*(arg1 + 8) != 0) {
        sym.i2c_trace_log(*(arg1 + 8),0x80015a2,0x8001038,uVar18 & 0xffffffff);
    }
    ipc_log_string(arg3,"dma_rx_irq:0x%x, dma_tx_irq:0x%x, rx_fifo_sts:0x%x, tx_fifo_sts:0x%x\n",uVar6,uVar5,uVar7,
                   uVar8);
    if (*(arg1 + 8) != 0) {
        sym.i2c_trace_log(*(arg1 + 8),0x80007b6,uVar6,uVar5);
    }
    ipc_log_string(arg3,"se_dma_dbg:0x%x, m_cmd_ctrl:0x%x, dma_rxlen:0x%x, dma_rxlen_in:0x%x\n",uVar9,uVar10,uVar11
                   ,uVar12);
    if (*(arg1 + 8) != 0) {
        sym.i2c_trace_log(*(arg1 + 8),0x8000d5a,uVar9,uVar10);
    }
    ipc_log_string(arg3,"dma_txlen:0x%x, dma_txlen_in:0x%x s_irq_status:0x%x\n",uVar13,uVar14,uVar2);
    if (*(arg1 + 8) != 0) {
        sym.i2c_trace_log(*(arg1 + 8),0x8000ef9,uVar13,uVar14);
    }
    ipc_log_string(arg3,"dma_txirq_en:0x%x, dma_rxirq_en:0x%x geni_m_irq_en:0x%x geni_s_irq_en:0x%x\n",
                   uVar19 & 0xffffffff,uVar17,uVar15,uVar16);
    if (*(arg1 + 8) != 0) {
        sym.i2c_trace_log(*(arg1 + 8),0x80004e0,uVar19 & 0xffffffff,uVar17);
    }
    return;
}


// ===== sym.trace_raw_output_i2c_log_info @ 0x08002b28 (size 120) =====

void sym.trace_raw_output_i2c_log_info(int64_t arg1,uchar noname_1 [16],int64_t arg2)

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


// ===== sym.readl_relaxed @ 0x08002ba0 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8002ba4);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8002bd8);
    return uVar1;
}


// ===== sym.geni_i2c_probe @ 0x08002c10 (size 1436) =====

uint64_t sym.geni_i2c_probe(int64_t arg1)

{
    uint *puVar1;
    code *pcVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t *piVar6;
    int64_t iVar7;
    uint64_t uVar8;
    char *pcVar9;
    uint uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auStack_60 [40];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar12 = arg1 + 0x10;
    iStack_38 = *(iVar7 + 0x5e0);
    piVar6 = devm_kmalloc(iVar12,0x7a8,0xdc0);
    if (piVar6 == NULL) {
        uVar11 = 0xfffffff4;
    }
    else {
        uVar11 = _segment.ehdr;
        if (_segment.ehdr < 0x14) {
            uVar5 = _segment.ehdr + 1;
            bVar3 = 0x13 < _segment.ehdr;
            _segment.ehdr = uVar5;
            if (bVar3) goto code_r0x080031a8;
            *(obj.gi2c_dev_dbg + uVar11 * 8) = piVar6;
        }
        *piVar6 = iVar12;
        iVar7 = platform_get_resource(arg1,0x200,0);
        if (iVar7 == 0) {
            uVar11 = 0xffffffea;
        }
        else {
            uVar11 = devm_ioremap_resource(*piVar6,iVar7);
            piVar6[1] = uVar11;
            if (uVar11 < 0xfffffffffffff001) {
                iVar7 = of_find_property(*(arg1 + 0x300),"qcom,le-vm",0);
                if (iVar7 != 0) {
                    *(piVar6 + 0x792) = 0;
                    *(piVar6 + 0xf2) = 1;
                    _dev_info(iVar12,"LE-VM usecase\n");
                }
                iVar7 = of_find_property(*(arg1 + 0x300),"qcom,leica-used-i2c",0);
                if (iVar7 != 0) {
                    *(piVar6 + 0x797) = 1;
                }
                iVar7 = *(arg1 + 0x70);
                piVar6[0xa2] = iVar12;
                iVar13 = *(iVar7 + 0x98);
                piVar6[0xb1] = iVar7;
                piVar6[0xa1] = piVar6[1];
                piVar6[0xa3] = iVar13;
                if (iVar13 == 0) {
                    _dev_err(iVar12,"SE Wrapper is NULL, deferring probe\n");
                    uVar11 = 0xfffffdfb;
                }
                else {
                    puVar1 = piVar6 + 0x714;
                    iVar4 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,clk-freq-out",puVar1,1,0);
                    if (iVar4 < 0) {
                        uVar10 = 400000;
                        *puVar1 = 400000;
                    }
                    else {
                        uVar10 = *puVar1;
                    }
                    _dev_info(iVar12,"Bus frequency is set to %dHz.\n",uVar10);
                    iVar4 = *(piVar6 + 0x714);
                    *(piVar6 + 0xf4) = 0;
                    if (iVar4 == 100000) {
                        uVar10 = 0;
                    }
                    else if (iVar4 == 1000000) {
                        uVar10 = 2;
                    }
                    else {
                        if (iVar4 != 400000) {
                            uVar11 = 0xffffffea;
                            _dev_err(*piVar6,"Invalid clk frequency %d KHz: %d\n",iVar4,0xffffffea);
                            goto code_r0x08002cc8;
                        }
                        uVar10 = 1;
                    }
                    *(piVar6 + 0xb3) = uVar10;
                    if (piVar6[0xf2] == '\0') {
                        uVar11 = devm_clk_get(iVar12,"se-clk");
                        piVar6[0xa4] = uVar11;
                        if (uVar11 < 0xfffffffffffff001) {
                            uVar11 = devm_clk_get(*(arg1 + 0x70),"m-ahb");
                            piVar6[0xad] = uVar11;
                            if (uVar11 < 0xfffffffffffff001) {
                                uVar11 = devm_clk_get(*(arg1 + 0x70),"s-ahb");
                                piVar6[0xae] = uVar11;
                                if (uVar11 < 0xfffffffffffff001) {
                                    iVar7 = of_find_property(*(arg1 + 0x300),"qcom,i2c-hub",0);
                                    *(piVar6 + 0x794) = iVar7 != 0;
                                    if (iVar7 == 0) {
                                        uVar5 = geni_icc_get(piVar6 + 0xa1,"qup-memory");
                                        if (uVar5 != 0) {
                                            pcVar9 = "%s: Error - resources_init ret:%d\n";
code_r0x0800318c:
                                            uVar11 = uVar5;
                                            _dev_err(iVar12,pcVar9,"geni_i2c_probe",uVar11);
                                            goto code_r0x08002cc8;
                                        }
                                        *(piVar6 + 0xa8) = 1;
                                        *(piVar6 + 0xaa) = 1;
                                        *(piVar6 + 0xac) = 0x12c00;
                                    }
                                    else {
                                        uVar11 = devm_clk_get(iVar12,"core-clk");
                                        piVar6[0xaf] = uVar11;
                                        if (0xfffffffffffff000 < uVar11) {
                                            pcVar9 = "Err getting core-clk %d\n";
                                            goto code_r0x08003088;
                                        }
                                        uVar5 = geni_icc_get(piVar6 + 0xa1,0);
                                        if (uVar5 != 0) {
                                            pcVar9 = "%s: Error - geni_icc_get ret:%d\n";
                                            goto code_r0x0800318c;
                                        }
                                        *(piVar6 + 0xa8) = 1;
                                        *(piVar6 + 0xaa) = 1;
                                        *(piVar6 + 0x796) = 1;
                                        _dev_info(*piVar6,"%s: RTL based SE\n","geni_i2c_probe");
                                    }
                                    uVar8 = platform_get_irq(arg1,0);
                                    uVar11 = uVar8 & 0xffffffff;
                                    *(piVar6 + 0x14) = uVar8;
                                    if (-1 < uVar8) {
                                        irq_modify_status(uVar11,0,0x1000);
                                        uVar5 = devm_request_threaded_irq
                                                          (*piVar6,*(piVar6 + 0x14),
                                                           sym.geni_i2c_irq.ff89956466640c790290520478333855.cfi_jt,0,
                                                           0,"i2c_geni",piVar6);
                                        if (uVar5 == 0) goto code_r0x08002f24;
                                        uVar11 = uVar5;
                                        _dev_err(*piVar6,"Request_irq failed:%d: err:%d\n",*(piVar6 + 0x14),uVar11);
                                    }
                                    goto code_r0x08002cc8;
                                }
                                pcVar9 = "Err getting S AHB clk %d\n";
                            }
                            else {
                                pcVar9 = "Err getting M AHB clk %d\n";
                            }
                        }
                        else {
                            pcVar9 = "Err getting SE Core clk %d\n";
                        }
code_r0x08003088:
                        _dev_err(iVar12,pcVar9,uVar11 & 0xffffffff);
                    }
                    else {
code_r0x08002f24:
                        iVar7 = of_find_property(*(arg1 + 0x300),"qcom,shared",0);
                        if (iVar7 != 0) {
                            *(piVar6 + 0x77d) = 1;
                            _dev_info(iVar12,"Multi-EE usecase\n");
                        }
                        iVar7 = of_find_property(*(arg1 + 0x300),"qcom,bus-recovery",0);
                        if (iVar7 != 0) {
                            *(piVar6 + 0xf3) = 1;
                        }
                        iVar4 = sym.dma_set_mask_and_coherent(iVar12,-1);
                        if ((iVar4 == 0) || (uVar5 = sym.dma_set_mask_and_coherent(iVar12,0xffffffff), uVar5 == 0)) {
                            piVar6[6] = reloc.geni_i2c_xfer.ff89956466640c790290520478333855.cfi_jt;
                            *(piVar6 + 0x9c) = 0;
                            __init_swait_queue_head(piVar6 + 0x9d,"&x->wait",obj.init_completion.__key);
                            iVar12 = *piVar6;
                            iVar7 = *(arg1 + 0x300);
                            *(arg1 + 0xa8) = piVar6;
                            piVar6[0x25] = piVar6;
                            piVar6[0x1e] = iVar12;
                            piVar6[0x70] = iVar7;
                            strscpy(piVar6 + 0x42c,"Geni-I2C",0x30);
                            __pm_runtime_set_status(*piVar6,2);
                            pm_runtime_set_autosuspend_delay(*piVar6,0xfa);
                            __pm_runtime_use_autosuspend(*piVar6,1);
                            pm_runtime_enable(*piVar6);
                            uVar8 = i2c_add_adapter(piVar6 + 4);
                            uVar11 = uVar8 & 0xffffffff;
                            if (uVar8 == 0) {
                                *(piVar6 + 0x79c) = 0;
                                snprintf(auStack_60,0x28,"M - DRIVER GENI_I2C_%d Ready",piVar6[0x85]);
                                _dev_info(*piVar6,"I2C probed\n");
                            }
                            else {
                                _dev_err(*piVar6,"Add adapter failed, ret=%d\n",uVar11);
                            }
                        }
                        else {
                            uVar11 = uVar5;
                            _dev_err(iVar12,"could not set DMA mask\n");
                        }
                    }
                }
            }
        }
    }
code_r0x08002cc8:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_38) {
        return uVar11 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x080031a8:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80031ac);
    (*pcVar2)();
}


// ===== sym.geni_i2c_remove @ 0x080031ac (size 1088) =====

ulong sym.geni_i2c_remove(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    code *pcVar4;
    bool bVar5;
    int iVar6;
    ulong uVar7;
    int64_t in_x3;
    int64_t iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar11 = *(arg1 + 0xa8);
    if (*(piVar11 + 0x79c) == 0) {
        if ((*(*piVar11 + 0x20c) != 2) && (iVar6 = sym.geni_i2c_runtime_suspend(*piVar11), iVar6 != 0)) {
            ipc_log_string(piVar11[0xb2],"%s: runtime suspend failed\n","geni_i2c_remove");
            if (*piVar11 == 0) {
                _printk(0x8001781,"geni_i2c_remove");
            }
            else {
                _dev_err(*piVar11,"%s: runtime suspend failed\n","geni_i2c_remove");
            }
            if (*piVar11 != 0) {
                sym.i2c_trace_log(*piVar11,0x800086f,0x80005c2,in_x3);
            }
        }
        if (piVar11[0xef] == 2) {
            if (piVar11[0xb4] == 0) {
                iVar8 = piVar11[0xb5];
            }
            else {
                ipc_log_string(piVar11[0xb2],"%s: clearing tx dma resource\n","geni_i2c_remove");
                if (*piVar11 == 0) {
                    _printk(0x8001575,"geni_i2c_remove");
                }
                else {
                    _dev_err(*piVar11,"%s: clearing tx dma resource\n","geni_i2c_remove");
                }
                if (*piVar11 != 0) {
                    sym.i2c_trace_log(*piVar11,0x8000c12,0x80005c2,in_x3);
                }
                dma_release_channel(piVar11[0xb4]);
                iVar8 = piVar11[0xb5];
            }
            if (iVar8 != 0) {
                ipc_log_string(piVar11[0xb2],"%s: clearing rx dma resource\n","geni_i2c_remove");
                if (*piVar11 == 0) {
                    _printk(0x8000c89,"geni_i2c_remove");
                }
                else {
                    _dev_err(*piVar11,"%s: clearing rx dma resource\n","geni_i2c_remove");
                }
                if (*piVar11 != 0) {
                    sym.i2c_trace_log(*piVar11,0x8001a43,0x80005c2,in_x3);
                }
                dma_release_channel(piVar11[0xb5]);
            }
        }
        puVar1 = *piVar11 + 0x1f8;
        uVar10 = *puVar1;
        do {
            uVar9 = uVar10;
            if (uVar9 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar10 = uVar2;
                if (uVar2 != uVar9) goto code_r0x08003234;
                cVar3 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar9 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08003234:
        } while (uVar9 != uVar2);
        __pm_runtime_set_status(*piVar11,2);
        __pm_runtime_disable(*piVar11,1);
        i2c_del_adapter(piVar11 + 4);
        iVar6 = _segment.ehdr;
        if (((((((0 < _segment.ehdr) && (bVar5 = _segment.ehdr != 1, _segment.ehdr = 0, bVar5)) &&
               (_segment.ehdr = 0, iVar6 != 2)) &&
              (((_segment.ehdr = 0, iVar6 != 3 && (_segment.ehdr = 0, iVar6 != 4)) &&
               ((_segment.ehdr = 0, iVar6 != 5 &&
                ((_segment.ehdr = 0, iVar6 != 6 && (_segment.ehdr = 0, iVar6 != 7)))))))) &&
             ((_segment.ehdr = 0, iVar6 != 8 &&
              (((_segment.ehdr = 0, iVar6 != 9 && (_segment.ehdr = 0, iVar6 != 10)) &&
               (_segment.ehdr = 0, iVar6 != 0xb)))))) &&
            (((_segment.ehdr = 0, iVar6 != 0xc && (_segment.ehdr = 0, iVar6 != 0xd)) &&
             (((_segment.ehdr = 0, iVar6 != 0xe &&
               ((_segment.ehdr = 0, iVar6 != 0xf && (_segment.ehdr = 0, iVar6 != 0x10)))) &&
              (_segment.ehdr = 0, iVar6 != 0x11)))))) &&
           (((_segment.ehdr = 0, iVar6 != 0x12 && (_segment.ehdr = 0, iVar6 != 0x13)) &&
            (_segment.ehdr = 0, iVar6 != 0x14)))) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x80035c4);
            (*pcVar4)();
        }
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
        uVar7 = 0;
        if (piVar11[0xb2] != 0) {
            ipc_log_context_destroy();
            uVar7 = 0;
        }
    }
    else {
        ipc_log_string(piVar11[0xb2],"%s: Xfer is in progress\n","geni_i2c_remove");
        if (*piVar11 == 0) {
            _printk(0x80009fa,"geni_i2c_remove");
            iVar8 = *piVar11;
        }
        else {
            _dev_err(*piVar11,"%s: Xfer is in progress\n","geni_i2c_remove");
            iVar8 = *piVar11;
        }
        if (iVar8 == 0) {
            uVar7 = 0xfffffff0;
        }
        else {
            sym.i2c_trace_log(iVar8,0x8000ee0,0x80005c2,in_x3);
            uVar7 = 0xfffffff0;
        }
    }
    return uVar7;
}


// ===== sym.geni_i2c_irq @ 0x080035ec (size 1032) =====

//WARNING: Type propagation algorithm not settling

ulong sym.geni_i2c_irq(ulong noname_0,int64_t arg1)

{
    uchar *puVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    unkuint3 Var4;
    bool bVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    int iVar10;
    int iVar11;
    uint uVar12;
    uint64_t arg1_00;
    char *pcVar13;
    int64_t iVar14;
    int64_t iVar15;
    ulong *in_x18;
    uint64_t uVar16;
    int64_t iVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = sym.readl_relaxed(*(arg1 + 8) + 0x610);
    uVar16 = uVar6;
    uVar7 = sym.readl_relaxed(*(arg1 + 8) + 0x804);
    uVar8 = sym.readl_relaxed(*(arg1 + 8) + 0xc40);
    uVar9 = sym.readl_relaxed(*(arg1 + 8) + 0xd40);
    iVar10 = sym.readl_relaxed(*(arg1 + 8) + 600);
    pcVar13 = "geni_i2c_irq";
    iVar17 = *(arg1 + 0x500);
    uVar19 = uVar16;
    ipc_log_string(*(arg1 + 0x590),"%s: m_irq_status:0x%x\n");
    if (*arg1 != 0) {
        pcVar13 = "geni_i2c_irq";
        sym.i2c_trace_log(*arg1,0x8000b6d,0x8000e88,uVar16);
        uVar19 = uVar16;
    }
    if (iVar17 == 0) {
        ipc_log_string(*(arg1 + 0x590),"Spurious irq\n");
        if (*arg1 != 0) {
            sym.i2c_trace_log(*arg1,0x8000e1e,pcVar13,uVar19);
        }
        sym.geni_i2c_err(arg1,10);
    }
    else {
        if ((((((uVar6 >> 3 & 1) == 0) && ((uVar9 & 0x340) == 0)) && ((uVar6 >> 4 & 1) == 0)) &&
            (((uVar6 >> 5 & 1) == 0 && ((uVar6 >> 10 & 1) == 0)))) &&
           (((uVar6 >> 0xc & 1) == 0 && ((uVar6 >> 0xd & 1) == 0)))) {
            if (((uVar6 & 0xc000000) == 0) || ((*(iVar17 + 2) & 1) == 0)) {
                if (((uVar6 >> 0x1e & 1) != 0) && (((*(iVar17 + 2) & 1) == 0 && (*(arg1 + 0x10) != 0)))) {
                    uVar19 = *(arg1 + 0x580);
                    uVar7 = 0;
                    uVar3 = *(iVar17 + 4);
                    do {
                        uVar16 = uVar3;
                        if (uVar19 < uVar3) {
                            iVar14 = uVar19;
                            iVar15 = *(iVar17 + 8);
                            uVar19 = iVar14 + 1;
                            arg1_00 = *(iVar15 + iVar14);
                            if (uVar19 < uVar16) {
                                puVar1 = iVar15 + uVar19;
                                uVar19 = iVar14 + 2;
                                uVar3 = CONCAT11(*puVar1,*(iVar15 + iVar14));
                                arg1_00 = uVar3;
                                if (uVar19 < uVar16) {
                                    puVar1 = iVar15 + uVar19;
                                    uVar19 = iVar14 + 3;
                                    Var4 = CONCAT12(*puVar1,uVar3);
                                    arg1_00 = Var4;
                                    if (uVar19 < uVar16) {
                                        puVar1 = iVar15 + uVar19;
                                        uVar19 = iVar14 + 4;
                                        arg1_00 = CONCAT13(*puVar1,Var4);
                                    }
                                }
                            }
                        }
                        else {
                            arg1_00 = 0;
                        }
                        sym.writel_relaxed(arg1_00,*(arg1 + 8) + 0x700);
                        *(arg1 + 0x580) = uVar19;
                        uVar3 = *(iVar17 + 4);
                        if (uVar19 == uVar3) {
                            sym.writel_relaxed(0,*(arg1 + 8) + 0x80c);
                            break;
                        }
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < *(arg1 + 0x10));
                }
            }
            else if ((uVar7 & 0x1ffffff) != 0) {
                uVar18 = 1;
                do {
                    uVar12 = sym.readl_relaxed(*(arg1 + 8) + 0x780);
                    uVar2 = *(arg1 + 0x584);
                    uVar19 = uVar2;
                    if (uVar2 < *(iVar17 + 4)) {
                        iVar14 = uVar2;
                        *(*(iVar17 + 8) + iVar14) = uVar12;
                        uVar19 = iVar14 + 1;
                        if (uVar19 < *(iVar17 + 4)) {
                            *(*(iVar17 + 8) + uVar19) = uVar12 >> 8;
                            uVar19 = iVar14 + 2;
                            if (uVar19 < *(iVar17 + 4)) {
                                *(*(iVar17 + 8) + uVar19) = uVar12 >> 0x10;
                                uVar19 = iVar14 + 3;
                                if (uVar19 < *(iVar17 + 4)) {
                                    *(*(iVar17 + 8) + uVar19) = uVar12 >> 0x18;
                                    uVar19 = iVar14 + 4;
                                }
                            }
                        }
                    }
                    *(arg1 + 0x584) = uVar19;
                } while ((uVar19 != *(iVar17 + 4)) &&
                        (bVar5 = uVar18 < (uVar7 & 0x1ffffff), uVar18 = uVar18 + 1, bVar5));
            }
            goto code_r0x08003800;
        }
        if ((uVar6 >> 10 & 1) != 0) {
            iVar11 = sym.readl_relaxed(*(arg1 + 8) + 0x910);
            pcVar13 = "Address NACK: slv unresponsive, check its power/reset-ln";
            if (iVar11 != 0) {
                pcVar13 = "Data NACK: Device NACK before end of TX transfer";
            }
            ipc_log_string(*(arg1 + 0x590),0x80019a6,pcVar13);
            *(arg1 + 0x18) = 0xffffff95;
        }
        if ((uVar6 >> 0xc & 1) != 0) {
            sym.geni_i2c_err(arg1,3);
        }
        if ((uVar6 >> 0xd & 1) != 0) {
            sym.geni_i2c_err(arg1,4);
        }
        if ((uVar6 >> 1 & 1) != 0) {
            sym.geni_i2c_err(arg1,6);
        }
        if ((uVar6 >> 2 & 1) != 0) {
            sym.geni_i2c_err(arg1,7);
        }
        if ((uVar6 >> 5 & 1) != 0) {
            ipc_log_string(*(arg1 + 0x590),0x80019a6,"Abort after timeout successful");
            *(arg1 + 0x18) = 0xffffff92;
        }
    }
    *(arg1 + 0x77c) = 1;
code_r0x08003800:
    if (iVar10 == 0) {
        sym.writel_relaxed(0,*(arg1 + 8) + 0x80c);
    }
    if (uVar6 != 0) {
        sym.writel_relaxed(uVar6,*(arg1 + 8) + 0x618);
    }
    if (iVar10 != 0) {
        if (uVar8 != 0) {
            sym.writel_relaxed(uVar8,*(arg1 + 8) + 0xc44);
        }
        if (uVar9 != 0) {
            sym.writel_relaxed(uVar9,*(arg1 + 8) + 0xd44);
        }
        DataSynchronizationBarrier(3,2,0);
        uVar6 = uVar8 | uVar9;
    }
    if ((uVar6 & 1) != 0) {
        *(arg1 + 0x77c) = 1;
    }
    if (*(arg1 + 0x77c) != '\0') {
        *(arg1 + 0x77c) = 0;
        complete(arg1 + 0x4e0);
    }
    return 1;
}


// ===== sym.dma_set_mask_and_coherent @ 0x080039f4 (size 84) =====

int sym.dma_set_mask_and_coherent(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = dma_set_mask();
    if (iVar1 == 0) {
        dma_set_coherent_mask(arg1,arg2);
    }
    return iVar1;
}


// ===== sym.geni_i2c_err @ 0x08003a48 (size 284) =====

void sym.geni_i2c_err(int64_t arg1,uint32_t arg2)

{
    code *pcVar1;
    int64_t in_x3;
    ulong *in_x18;
    int64_t arg3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 < 0xd) && ((1 << (arg2 & 0x1f) & 0x1900U) != 0)) {
        if (0xd0 < (arg2 << 4 | 8)) {
code_r0x08003b60:
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(1,0x8003b64);
            (*pcVar1)();
        }
        ipc_log_string(*(arg1 + 0x590),0x80019a6,*(arg2 * 0x10 + 0x8001d30));
    }
    else {
        if (0xd0 < (arg2 << 4 | 8)) goto code_r0x08003b60;
        arg3 = *(arg2 * 0x10 + 0x8001d30);
        ipc_log_string(*(arg1 + 0x590),0x80019a6,arg3);
        if (*arg1 == 0) {
            _printk(0x800052c,arg3);
        }
        else {
            _dev_err(*arg1,0x80019a6,arg3);
        }
        if (*arg1 != 0) {
            sym.i2c_trace_log(*arg1,0x80019a6,arg3,in_x3);
        }
        sym.geni_i2c_se_dump_dbg_regs(arg1 + 0x508,*(arg1 + 8),*(arg1 + 0x590));
    }
    *(arg1 + 0x18) = *(obj.gi2c_log + arg2 * 0x10);
    return;
}


// ===== sym.writel_relaxed @ 0x08003b64 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8003b80);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8003ba8);
    return;
}


// ===== sym.geni_i2c_xfer @ 0x08003bdc (size 7684) =====

uint64_t sym.geni_i2c_xfer(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int iVar4;
    uint64_t *puVar5;
    char cVar6;
    uint16_t uVar7;
    bool bVar8;
    bool bVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int iVar12;
    uint uVar13;
    uint32_t uVar14;
    int iVar15;
    uint32_t uVar16;
    ulong uVar17;
    uint64_t uVar18;
    int64_t iVar19;
    uint64_t uVar20;
    char *arg2_00;
    char *pcVar21;
    char *pcVar22;
    uint64_t in_x3;
    int64_t *piVar23;
    int64_t *piVar24;
    int64_t *piVar25;
    int64_t *piVar26;
    int64_t iVar27;
    ulong *in_x18;
    int64_t *arg1_00;
    int64_t iVar28;
    int64_t iVar29;
    int64_t *piVar30;
    int64_t *arg4;
    code *pcVar31;
    int64_t *piVar32;
    uint64_t arg3_00;
    uint16_t *puVar33;
    uint64_t uVar34;
    uint32_t uVar35;
    uint16_t *puVar36;
    int64_t iVar37;
    ulong unaff_x30;
    int64_t iStack_b0;
    int64_t iStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar28 = sp_el0;
    iStack_70 = *(iVar28 + 0x5e0);
    arg1_00 = *(arg1 + 0x108);
    *(arg1_00 + 3) = 0;
    *(arg1_00 + 0x79c) = 1;
    if ((*(*arg1_00 + 0x200) & 7) != 0) {
        ipc_log_string(arg1_00[0xb2],"%s: System suspended\n","geni_i2c_xfer");
        if (*arg1_00 != 0) {
            sym.i2c_trace_log(*arg1_00,0x8000dc5,0x8000ead,in_x3);
        }
        uVar34 = 0xfffffff3;
        *(arg1_00 + 0x79c) = 0;
        goto code_r0x08005778;
    }
    arg3_00 = arg3 & 0xffffffff;
    pcVar22 = arg3;
    if (arg1_00[0xf2] == '\0') {
        uVar10 = __pm_runtime_resume(*arg1_00,4);
        uVar34 = uVar10;
        if (uVar10 < 0) {
            ipc_log_string(arg1_00[0xb2],"error turning SE resources:%d\n",uVar34);
            if (*arg1_00 == 0) {
                _printk(0x8000ddb,uVar34);
            }
            else {
                _dev_err(*arg1_00,"error turning SE resources:%d\n",uVar34);
            }
            uVar10 = 0;
            if (*arg1_00 != 0) {
                sym.i2c_trace_log(*arg1_00,0x8000e61,uVar34,in_x3);
                uVar10 = *arg1_00;
            }
            sym.pm_runtime_put_noidle(uVar10);
            __pm_runtime_set_status(*arg1_00,2);
            *(arg1_00 + 0x79c) = 0;
            goto code_r0x08005778;
        }
    }
    else {
        uVar34 = 0;
    }
    if (*(arg1_00 + 0x795) != '\0') {
        if (*(arg1_00 + 0x796) != '\0') {
            uVar10 = sym.readl_relaxed(arg1_00[1] + 0x908);
            if ((~uVar10 & 3) == 0) {
code_r0x08003cc4:
                if (arg1_00[0xef] == 2) {
                    piVar30 = arg1_00[0xb4];
                    pcVar31 = *(*piVar30 + 0x178);
                    if (pcVar31 != NULL) {
                        __cfi_slowpath_diag(0x146502001565ea5c,pcVar31,0x80003c0);
                        (*pcVar31)(piVar30);
                    }
                    uVar34 = 0;
                    *(arg1_00 + 0xe2) = 0;
                }
                else {
                    *(arg1_00 + 0x9c) = 0;
                    sym.writel_relaxed(4,arg1_00[0xa1] + 0x604);
                    uVar18 = wait_for_completion_timeout(arg1_00 + 0x9c,0xfa);
                    uVar34 = uVar18 & 0xffffffff;
                    if (uVar18 == 0) {
                        ipc_log_string(arg1_00[0xb2],"%s:Pending Cancel failed\n","do_pending_cancel");
                        if (*arg1_00 != 0) {
                            sym.i2c_trace_log(*arg1_00,0x80011f6,0x8000680,in_x3);
                        }
                        *(arg1_00 + 0x9c) = 0;
                        sym.writel_relaxed(2,arg1_00[0xa1] + 0x604);
                        uVar34 = wait_for_completion_timeout(arg1_00 + 0x9c,0xfa);
                        if (uVar34 == 0) {
                            ipc_log_string(arg1_00[0xb2],"%s:Abort failed\n","do_pending_cancel");
                            if (*arg1_00 != 0) {
                                sym.i2c_trace_log(*arg1_00,0x80009dc,0x8000680,in_x3);
                            }
                            uVar34 = 0;
                        }
                    }
                }
                pcVar22 = "do_pending_cancel";
                *(arg1_00 + 0x795) = 0;
                ipc_log_string(arg1_00[0xb2],"%s: Pending Cancel done\n");
                if (*arg1_00 != 0) {
                    pcVar22 = "do_pending_cancel";
                    sym.i2c_trace_log(*arg1_00,0x80013fb,0x8000680,in_x3);
                }
                if (uVar34 == 0) goto code_r0x08003e38;
            }
            else {
                ipc_log_string(arg1_00[0xb2],"%s: IOS:0x%x, bad state\n","do_pending_cancel",uVar10);
                if (*arg1_00 == 0) {
                    _printk(0x80010fe,"do_pending_cancel",uVar10);
                }
                else {
                    _dev_err(*arg1_00,"%s: IOS:0x%x, bad state\n","do_pending_cancel",uVar10);
                }
                sym.writel_relaxed(1,arg1_00[1] + 0x20);
                uVar10 = sym.readl_relaxed(arg1_00[1] + 0x908);
                in_x3 = uVar10;
                if ((~uVar10 & 3) == 0) {
                    ipc_log_string(arg1_00[0xb2],"%s: IOS:0x%x restored properly\n","do_pending_cancel");
                    if (*arg1_00 == 0) {
                        _printk(0x8000692,"do_pending_cancel",uVar10);
                    }
                    else {
                        in_x3 = uVar10;
                        _dev_err(*arg1_00,"%s: IOS:0x%x restored properly\n","do_pending_cancel");
                    }
                    goto code_r0x08003cc4;
                }
                ipc_log_string(arg1_00[0xb2],"%s: IOS:0x%x, Fix from Slave side\n","do_pending_cancel",uVar10);
                if (*arg1_00 == 0) {
                    _printk(0x8000c64,"do_pending_cancel",uVar10);
                }
                else {
                    _dev_err(*arg1_00,"%s: IOS:0x%x, Fix from Slave side\n","do_pending_cancel",uVar10);
                }
                uVar34 = 0xffffffea;
            }
            iVar28 = *arg1_00;
            uVar17 = ktime_get_mono_fast_ns();
            *(iVar28 + 0x218) = uVar17;
            __pm_runtime_suspend(*arg1_00,0xd);
            *(arg1_00 + 0x79c) = 0;
            goto code_r0x08005778;
        }
        uVar34 = 0;
    }
code_r0x08003e38:
    uVar10 = sym.readl_relaxed(arg1_00[1] + 0x908);
    if ((~uVar10 & 3) != 0) {
        ipc_log_string(arg1_00[0xb2],"IO lines in bad state, Power the slave\n");
        if (*arg1_00 == 0) {
            _printk(0x8000800);
        }
        else {
            _dev_err(*arg1_00,"IO lines in bad state, Power the slave\n");
        }
        if (*arg1_00 == 0) {
            iVar28 = 0;
        }
        else {
            sym.i2c_trace_log(*arg1_00,0x8000532,pcVar22,in_x3);
            iVar28 = *arg1_00;
        }
        uVar17 = ktime_get_mono_fast_ns();
        *(iVar28 + 0x218) = uVar17;
        __pm_runtime_suspend(*arg1_00,0xd);
        uVar34 = 0xfffffffa;
        *(arg1_00 + 0x79c) = 0;
        goto code_r0x08005778;
    }
    if ((arg1_00[0xf2] != '\0') && (*(arg1_00 + 0x792) == '\0')) {
        *(arg1_00 + 0x792) = 1;
        uVar10 = sym.geni_i2c_prepare(arg1_00);
        if (uVar10 == 0) {
            uVar10 = sym.geni_i2c_lock_bus(arg1_00);
            uVar34 = uVar10;
            if (uVar10 == 0) {
                ipc_log_string(arg1_00[0xb2],"LE-VM first xfer\n");
                if (*arg1_00 != 0) {
                    sym.i2c_trace_log(*arg1_00,0x800176f,pcVar22,in_x3);
                }
                uVar34 = 0;
                goto code_r0x08003eac;
            }
            ipc_log_string(arg1_00[0xb2],"%s lock failed: %d\n","geni_i2c_xfer",uVar10);
            if (*arg1_00 == 0) {
                _printk(0x8001891,"geni_i2c_xfer",uVar10);
            }
            else {
                _dev_err(*arg1_00,"%s lock failed: %d\n","geni_i2c_xfer",uVar10);
            }
            iVar28 = *arg1_00;
            if (iVar28 != 0) {
                pcVar22 = "%s lock failed: %d\n";
                goto code_r0x0800555c;
            }
        }
        else {
            uVar34 = uVar10;
            ipc_log_string(arg1_00[0xb2],"%s I2C prepare failed: %d\n","geni_i2c_xfer",uVar34);
            if (*arg1_00 == 0) {
                _printk(0x8000cec,"geni_i2c_xfer",uVar34);
            }
            else {
                _dev_err(*arg1_00,"%s I2C prepare failed: %d\n","geni_i2c_xfer",uVar34);
            }
            iVar28 = *arg1_00;
            if (iVar28 != 0) {
                pcVar22 = "%s I2C prepare failed: %d\n";
code_r0x0800555c:
                sym.i2c_trace_log(iVar28,pcVar22,0x8000ead,uVar34);
            }
        }
        *(arg1_00 + 0x79c) = 0;
        goto code_r0x08005778;
    }
code_r0x08003eac:
    piVar30 = *arg2;
    uVar18 = arg3_00;
    ipc_log_string(arg1_00[0xb2],"n:%d addr:0x%x\n");
    if (*arg1_00 != 0) {
        piVar30 = *arg2;
        uVar18 = arg3_00;
        sym.i2c_trace_log(*arg1_00,0x8001492,arg3_00,piVar30);
    }
    uVar10 = arg3;
    *(arg1_00 + 0xf0) = uVar10;
    kfree(arg1_00[0xf1]);
    if (uVar10 >> 0x3c == 0) {
        iVar28 = __kmalloc(-(arg3_00 >> 0x1f) & 0xfffffff000000000 | arg3_00 << 4,0xdc0);
        arg1_00[0xf1] = iVar28;
        if (iVar28 == 0) goto code_r0x08003f0c;
    }
    else {
        arg1_00[0xf1] = 0;
code_r0x08003f0c:
        ipc_log_string(arg1_00[0xb2],"Buf logging pointer not available\n");
        if (*arg1_00 != 0) {
            sym.i2c_trace_log(*arg1_00,0x8000af8,uVar18,piVar30);
        }
    }
    if (arg1_00[0xef] == 2) {
        piVar32 = *(arg1 + 0x108);
        if (*(piVar32 + 0x791) != '\0') {
code_r0x08003f4c:
            if (*(piVar32 + 0x77d) == '\0') {
                piVar23 = NULL;
                piVar25 = NULL;
            }
            else {
                piVar25 = piVar32 + 0xb6;
                piVar23 = piVar32 + 0xb8;
                piVar32[0xb6] = 0;
                *(piVar32 + 0xb7) = 0;
                piVar32[0xb8] = 0;
                *(piVar32 + 0x5bc) = 0x300001;
                piVar32[0xb9] = 0x31010000000000;
            }
            if (piVar32[0xe2] == 0) {
                uVar34 = *(piVar32 + 0xb3);
                if (3 < *(piVar32 + 0xb3)) {
code_r0x080059d8:
    //WARNING: Does not return
                    pcVar31 = SoftwareBreakpoint(0x5512,0x80059dc);
                    (*pcVar31)();
                }
                if (((0x18 < (uVar34 << 3 | 7)) || (uVar18 = uVar34 << 3, 0x18 < (uVar18 | 5))) ||
                   (0x18 < (uVar18 | 6))) {
code_r0x080059d4:
    //WARNING: Does not return
                    pcVar31 = SoftwareBreakpoint(1,0x80059d8);
                    (*pcVar31)();
                }
                iVar28 = uVar34 * 8;
                *(piVar32 + 0x5d4) = 0;
                *(piVar32 + 0xba) =
                     *(uVar34 * 8 + 0x8001d17) << 0x10 | *(iVar28 + 0x8001d15) << 8 | *(iVar28 + 0x8001d16) | 0x3000000;
                if (0x18 < (uVar18 | 4)) goto code_r0x080059d4;
                piVar26 = piVar32 + 0xba;
                *(piVar32 + 0xbb) = *(iVar28 + 0x8001d14);
                *(piVar32 + 0x5dc) = 0x220001;
            }
            else {
                piVar26 = NULL;
            }
            iVar12 = 1;
            if (uVar10 == 1) {
                iVar12 = 2;
            }
            if (uVar10 < 1) {
                uVar34 = *(piVar32 + 3);
                goto code_r0x08005714;
            }
            piVar1 = piVar32 + 0xca;
            uVar11 = 0;
            piVar2 = piVar32 + 0xc3;
            piVar3 = piVar32 + 0xc2;
            do {
                iVar28 = arg2 + uVar11 * 0x10;
                puVar33 = iVar28 + 2;
                uVar7 = *puVar33;
                *(piVar32 + 0x9c) = 0;
                piVar32[0xa0] = iVar28;
                piVar24 = piVar32[0xb1];
                uVar16 = 1;
                if ((uVar7 & 1) == 0) {
                    uVar16 = 2;
                }
                if (iVar28 == 0) {
                    ipc_log_string(piVar32[0xb2],"%s: Invalid buffer\n","geni_i2c_gsi_xfer");
                    if (*piVar32 != 0) {
                        sym.i2c_trace_log(*piVar32,0x800152d,0x80019aa,piVar30);
                    }
code_r0x080051f0:
                    uVar34 = 0xfffffff4;
                    goto code_r0x08005720;
                }
                uVar18 = i2c_get_dma_safe_msg_buf(iVar28,1);
                if (uVar18 == 0) goto code_r0x080051f0;
                uVar14 = *(piVar32 + 0xb3);
                if (3 < uVar14) goto code_r0x080059d8;
                if (uVar14 == 3) goto code_r0x080059d4;
                iVar15 = 0;
                if (*(obj.geni_i2c_clk_map + uVar14 * 8) != 0) {
                    iVar15 = (*(piVar32[0xa0] + 4) * 9000000) / *(obj.geni_i2c_clk_map + uVar14 * 8);
                }
                iVar4 = uVar11 - uVar10;
                iVar37 = uVar11;
                uVar13 = __usecs_to_jiffies(iVar15 * 10 + 500000);
                *(piVar32 + 0x1c) = uVar13;
                if (piVar32[0xe2] == 0) {
                    uVar16 = uVar16 + 1;
                }
                if ((*(piVar32 + 0x77d) == '\0') || ((uVar11 != 0 && (iVar4 != -1)))) {
                    sg_init_table(piVar1,uVar16);
code_r0x08004954:
                    uVar14 = 0;
                }
                else {
                    uVar16 = uVar16 + iVar12;
                    sg_init_table(piVar1,uVar16);
                    if (uVar11 != 0) goto code_r0x08004954;
                    uVar14 = 1;
                    piVar32[0xca] =
                         piVar32[0xca] & 3U |
                         (((piVar25 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
                    *(piVar32 + 0xcb) = piVar25 & 0xfff;
                    *(piVar32 + 0x65c) = 0x10;
                }
                uVar35 = 1;
                if (piVar32[0xe2] == 0) {
                    uVar34 = uVar14;
                    uVar14 = uVar14 + 1;
                    puVar5 = piVar1 + uVar34 * 4;
                    *(piVar32 + 0xe2) = 1;
                    *(puVar5 + 1) = piVar26 & 0xfff;
                    *(puVar5 + 0xc) = 0x10;
                    *puVar5 = *puVar5 & 3 |
                              (((piVar26 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
                }
                iVar29 = iVar37 * 0x10;
                uVar7 = *(arg2 + iVar29);
                if ((*puVar33 & 1) != 0) {
                    uVar35 = 2;
                }
                *(piVar32 + 0x5e4) = 0;
                *(piVar32 + 0xbc) = (uVar11 < uVar10 - 1) << 0x1a | uVar7 << 8 | uVar35;
                if ((*puVar33 & 1) == 0) {
                    *(piVar32 + 0xbd) = 0;
                    iVar15 = 0x200001;
                }
                else {
                    iVar15 = 0x7ff;
                    if (*(piVar32 + 0x77d) == '\0' || iVar4 != -1) {
                        iVar15 = 0x8ff;
                    }
                    iVar15 = iVar15 + 0x200001;
                    *(piVar32 + 0xbd) = *(arg2 + iVar37 * 0x10 + 4);
                }
                *(piVar32 + 0x5ec) = iVar15;
                uVar34 = uVar14 + 1;
                puVar5 = piVar1 + uVar14 * 4;
                iVar19 = piVar32[0xb2];
                *(puVar5 + 1) = piVar32 + 0xbc & 0xfff;
                *(puVar5 + 0xc) = 0x10;
                iVar27 = piVar32[0xa0];
                *puVar5 = *puVar5 & 3 |
                          (((piVar32 + 0xbc) * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
                piVar30 = *(iVar27 + 4);
                if ((*puVar33 & 1) != 0) {
                    ipc_log_string(iVar19,"msg[%d].len:%d R\n",uVar11);
                    if (*piVar32 != 0) {
                        piVar30 = *(piVar32[0xa0] + 4);
                        sym.i2c_trace_log(*piVar32,0x8001835,uVar11,piVar30);
                    }
                    sg_init_table(piVar32 + 0xde,1);
                    if (piVar24 == NULL) {
                        uVar34 = 0xffffffea;
                    }
                    else {
                        puVar36 = arg2 + iVar37 * 0x10 + 4;
                        arg4 = *puVar36;
                        uVar20 = is_vmalloc_addr(uVar18);
                        if (((uVar20 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                            obj.dma_map_single_attrs.__already_done = 0x1;
                            uVar17 = dev_driver_string(piVar24);
                            iVar28 = piVar24[0xe];
                            if (iVar28 == 0) {
                                iVar28 = *piVar24;
                            }
                            __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar17,iVar28);
    //WARNING: Does not return
                            pcVar31 = SoftwareBreakpoint(0x800,0x8005138);
                            (*pcVar31)();
                        }
                        if ((uVar20 & 1) == 0) {
                            iVar19 = dma_map_page_attrs(piVar24,(((uVar18 << 8) >> 8) + 0x8000000000U >> 6 &
                                                                 0x3ffffffffffffc0) - 0x200000000,uVar18 & 0xfff,arg4
                                                        ,2,0);
                            *piVar2 = iVar19;
                            if (iVar19 != -1) {
                                if (piVar32[0xf1] != 0) {
                                    *(piVar32[0xf1] + iVar29) = uVar18;
                                    *(piVar32[0xf1] + iVar29 + 8) = piVar2;
                                    iVar19 = piVar32[0xc3];
                                }
                                piVar32[0xc0] = iVar19;
                                uVar7 = *puVar36;
                                *(piVar32 + 0x60c) = 0x100200;
                                pcVar22 = NULL;
                                *(piVar32 + 0xc1) = uVar7;
                                piVar32[0xde] =
                                     piVar32[0xde] & 3U |
                                     (((piVar32 + 0xc0) * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) -
                                     0x200000000;
                                *(piVar32 + 0xdf) = piVar32 + 0xc0 & 0xfff;
                                *(piVar32 + 0x6fc) = 0x10;
                                iVar29 = sym.geni_i2c_prep_desc(piVar32,uVar16);
                                piVar32[0xe4] = iVar29;
                                if (iVar29 == 0) {
                                    uVar13 = 0xfffffff4;
                                }
                                else {
                                    pcVar31 = *(iVar29 + 0x18);
                                    __cfi_slowpath_diag(0xc97b94b4f4a7b659,pcVar31,0x8000420);
                                    uVar14 = (*pcVar31)(iVar29);
                                    if (-1 < uVar14) {
                                        piVar30 = piVar32[0xb5];
                                        pcVar31 = *(*piVar30 + 400);
                                        __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar31,0x8000440);
                                        (*pcVar31)(piVar30);
                                        cVar6 = *(piVar32 + 0x77d);
                                        goto joined_r0x08004d48;
                                    }
code_r0x08004ec4:
                                    pcVar22 = uVar14;
                                    _printk(0x8001414,"geni_i2c_gsi_xfer");
                                    uVar13 = 0xffffffea;
                                }
code_r0x08004edc:
                                *(piVar32 + 3) = uVar13;
code_r0x08004ee0:
                                piVar30 = piVar32[0xb4];
                                if (piVar32[0xf2] == '\0') {
                                    pcVar31 = *(*piVar30 + 0x178);
                                    if (pcVar31 != NULL) {
                                        __cfi_slowpath_diag(0x146502001565ea5c,pcVar31,0x80003c0);
                                        (*pcVar31)(piVar30);
                                    }
                                    *(piVar32 + 0xe2) = 0;
                                    cVar6 = *(piVar32 + 0x77d);
joined_r0x08004f90:
                                    if (cVar6 != '\0') {
                                        *(piVar32 + 0xe2) = 0;
                                    }
                                    if ((*puVar33 & 1) == 0) goto code_r0x08004f38;
code_r0x08005060:
                                    iVar29 = *piVar2;
                                    piVar30 = arg4;
                                    if (iVar29 != -1) {
                                        piVar30 = 0x2;
                                        goto code_r0x0800507c;
                                    }
                                    goto code_r0x08005088;
                                }
                                pcVar31 = *(*piVar30 + 0x168);
                                if (pcVar31 == NULL) {
                                    uVar34 = 0xffffffda;
                                    piVar30 = arg4;
                                }
                                else {
                                    pcVar22 = 0x8000460;
                                    __cfi_slowpath_diag(0x146502001565ea5c,pcVar31);
                                    uVar16 = (*pcVar31)(piVar30);
                                    if (uVar16 == 0) {
code_r0x08004f24:
                                        cVar6 = *(piVar32 + 0x77d);
                                        goto joined_r0x08004f90;
                                    }
                                    uVar34 = uVar16;
                                    piVar30 = arg4;
                                }
                                *(piVar32 + 3) = uVar34;
                                *(piVar32 + 0x793) = 1;
                                ipc_log_string(piVar32[0xb2],"Channel cancel failed\n");
                                if (*piVar32 == 0) {
                                    _printk(0x8000597);
                                }
                                else {
                                    _dev_err(*piVar32,"Channel cancel failed\n");
                                }
                                if (*piVar32 != 0) {
                                    sym.i2c_trace_log(*piVar32,0x800155e,pcVar22,piVar30);
                                }
                                goto code_r0x08005720;
                            }
                            uVar34 = 0xfffffffb;
                            piVar30 = arg4;
                        }
                        else {
                            uVar34 = 0xfffffffb;
                            *piVar2 = -1;
                        }
                    }
                    ipc_log_string(piVar32[0xb2],"geni_se_common_iommu_map_buf for rx failed :%d\n",uVar34);
                    if (*piVar32 == 0) {
                        _printk(0x8001299,uVar34);
                    }
                    else {
                        _dev_err(*piVar32,"geni_se_common_iommu_map_buf for rx failed :%d\n",uVar34);
                    }
                    iVar37 = *piVar32;
                    if (iVar37 != 0) {
                        pcVar22 = "geni_se_common_iommu_map_buf for rx failed :%d\n";
code_r0x080058f4:
                        sym.i2c_trace_log(iVar37,pcVar22,uVar34,piVar30);
                    }
code_r0x080058fc:
                    i2c_put_dma_safe_msg_buf(uVar18,iVar28,0);
                    goto code_r0x08005720;
                }
                ipc_log_string(iVar19,"msg[%d].len:%d W\n",uVar11);
                if (*piVar32 != 0) {
                    piVar30 = *(piVar32[0xa0] + 4);
                    sym.i2c_trace_log(*piVar32,0x80014c7,uVar11,piVar30);
                }
                if (piVar24 == NULL) {
                    uVar34 = 0xffffffea;
code_r0x08005844:
                    ipc_log_string(piVar32[0xb2],"geni_se_common_iommu_map_buf for tx failed :%d\n",uVar34);
                    if (*piVar32 == 0) {
                        _printk(0x80011aa,uVar34);
                    }
                    else {
                        _dev_err(*piVar32,"geni_se_common_iommu_map_buf for tx failed :%d\n",uVar34);
                    }
                    iVar37 = *piVar32;
                    if (iVar37 != 0) {
                        pcVar22 = "geni_se_common_iommu_map_buf for tx failed :%d\n";
                        goto code_r0x080058f4;
                    }
                    goto code_r0x080058fc;
                }
                puVar36 = arg2 + iVar37 * 0x10 + 4;
                arg4 = *puVar36;
                uVar20 = is_vmalloc_addr(uVar18);
                if (((uVar20 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                    obj.dma_map_single_attrs.__already_done = 0x1;
                    uVar17 = dev_driver_string(piVar24);
                    iVar28 = piVar24[0xe];
                    if (iVar28 == 0) {
                        iVar28 = *piVar24;
                    }
                    __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar17,iVar28);
    //WARNING: Does not return
                    pcVar31 = SoftwareBreakpoint(0x800,0x80050f8);
                    (*pcVar31)();
                }
                if ((uVar20 & 1) != 0) {
                    uVar34 = 0xfffffffb;
                    *piVar3 = -1;
                    goto code_r0x08005844;
                }
                iVar19 = dma_map_page_attrs(piVar24,(((uVar18 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) -
                                                     0x200000000,uVar18 & 0xfff,arg4,1,0);
                *piVar3 = iVar19;
                if (iVar19 == -1) {
                    uVar34 = 0xfffffffb;
                    piVar30 = arg4;
                    goto code_r0x08005844;
                }
                if (piVar32[0xf1] != 0) {
                    *(piVar32[0xf1] + iVar29) = uVar18;
                    *(piVar32[0xf1] + iVar29 + 8) = piVar3;
                    iVar19 = piVar32[0xc2];
                }
                piVar32[0xbe] = iVar19;
                puVar5 = piVar1 + uVar34 * 4;
                uVar20 = *puVar5;
                uVar13 = 0x100200;
                if (*(piVar32 + 0x77d) != '\0' && iVar4 == -1) {
                    uVar13 = 0x100201;
                }
                *(piVar32 + 0xbf) = *puVar36;
                *(piVar32 + 0x5fc) = uVar13;
                uVar34 = uVar14 + 2;
                *puVar5 = uVar20 & 3 |
                          (((piVar32 + 0xbe) * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
                *(puVar5 + 1) = piVar32 + 0xbe & 0xfff;
                *(puVar5 + 0xc) = 0x10;
                cVar6 = *(piVar32 + 0x77d);
joined_r0x08004d48:
                if ((cVar6 != '\0') && (iVar4 == -1)) {
                    puVar5 = piVar1 + uVar34 * 4;
                    *puVar5 = *puVar5 & 3 |
                              (((piVar23 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
                    *(puVar5 + 1) = piVar23 & 0xfff;
                    *(puVar5 + 0xc) = 0x10;
                }
                pcVar22 = 0x1;
                iVar29 = sym.geni_i2c_prep_desc(piVar32,uVar16);
                piVar32[0xe3] = iVar29;
                if (iVar29 == 0) {
                    uVar13 = 0xfffffff4;
                    goto code_r0x08004edc;
                }
                pcVar31 = *(iVar29 + 0x18);
                __cfi_slowpath_diag(0xc97b94b4f4a7b659,pcVar31,0x8000420);
                uVar14 = (*pcVar31)(iVar29);
                if (uVar14 < 0) goto code_r0x08004ec4;
                piVar30 = piVar32[0xb4];
                pcVar22 = 0x8000440;
                pcVar31 = *(*piVar30 + 400);
                __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar31);
                (*pcVar31)(piVar30);
                iVar15 = wait_for_completion_timeout(piVar32 + 0x9c,*(piVar32 + 0x1c));
                if (iVar15 != 0) {
code_r0x08004e10:
                    if (piVar32[3] != 0) goto code_r0x08004ee0;
                    goto code_r0x08004f24;
                }
                ipc_log_string(piVar32[0xb2],"I2C gsi xfer timeout:%u flags:%d addr:0x%x\n",*(piVar32 + 0x1c),
                               piVar32[0xa0][1],*piVar32[0xa0]);
                arg4 = piVar32[0xa0][1];
                piVar30 = *piVar32[0xa0];
                if (*piVar32 == 0) {
                    _printk(0x80014d9,*(piVar32 + 0x1c),arg4);
                    arg4 = piVar30;
                }
                else {
                    _dev_err(*piVar32,"I2C gsi xfer timeout:%u flags:%d addr:0x%x\n");
                }
                if (*piVar32 != 0) {
                    arg4 = *(piVar32[0xa0] + 2);
                    sym.i2c_trace_log(*piVar32,0x800164d,*(piVar32 + 0x1c),arg4);
                }
                pcVar22 = piVar32[0xb2];
                sym.geni_i2c_se_dump_dbg_regs(piVar32 + 0xa1,piVar32[1],pcVar22);
                *(piVar32 + 3) = 0xffffff92;
                uVar16 = sym.readl_relaxed(piVar32[1] + 0x908);
                if ((~uVar16 & 3) == 0) goto code_r0x08004e10;
                pcVar21 = "geni_i2c_gsi_xfer";
                pcVar22 = pcVar21;
                ipc_log_string(piVar32[0xb2],"%s: IO lines not in good state\n");
                if (*piVar32 == 0) {
                    _printk(0x800174d,"geni_i2c_gsi_xfer");
                }
                else {
                    pcVar22 = pcVar21;
                    _dev_err(*piVar32,"%s: IO lines not in good state\n");
                }
                if (*piVar32 != 0) {
                    sym.i2c_trace_log(*piVar32,0x8000999,0x80019aa,arg4);
                    pcVar22 = pcVar21;
                }
                if (*(piVar32 + 0x796) == '\0') goto code_r0x08004e10;
                *(piVar32 + 0x795) = 1;
                if ((*puVar33 & 1) != 0) goto code_r0x08005060;
code_r0x08004f38:
                iVar29 = *piVar3;
                piVar30 = arg4;
                if (iVar29 != -1) {
                    piVar30 = 0x1;
code_r0x0800507c:
                    dma_unmap_page_attrs(piVar24,iVar29,*(arg2 + iVar37 * 0x10 + 4),piVar30,0);
                }
code_r0x08005088:
                i2c_put_dma_safe_msg_buf(uVar18,iVar28,piVar32[3] == 0);
                uVar34 = *(piVar32 + 3);
                if (*(piVar32 + 3) != 0) goto code_r0x08005720;
                uVar11 = uVar11 + 1;
            } while (uVar11 != uVar10);
            goto code_r0x08005718;
        }
        uVar18 = sym.geni_i2c_gsi_request_channel(piVar32);
        uVar34 = uVar18 & 0xffffffff;
        if (uVar18 == 0) goto code_r0x08003f4c;
    }
    else {
        *(arg1_00 + 0x77d) = 0;
        if (uVar10 < 1) {
code_r0x08005714:
            if (uVar34 != 0) goto code_r0x08005720;
        }
        else {
            piVar32 = arg1_00 + 0x9c;
            uVar18 = 0;
            iVar28 = 4;
            pcVar22 = "geni_i2c_xfer";
            piVar25 = arg1_00 + 0xa1;
            do {
                *(arg1_00 + 0x9c) = 0;
                iStack_80 = 0;
                iStack_78 = 0;
                bVar9 = uVar18 < uVar10 - 1;
                puVar33 = arg2 + iVar28 + -4;
                uVar7 = *puVar33;
                arg1_00[0xa0] = puVar33;
                if (puVar33 == NULL) {
                    ipc_log_string(arg1_00[0xb2],"%s: Invalid buffer\n","geni_i2c_xfer");
                    if (*arg1_00 == 0) {
                        uVar34 = 0xfffffff4;
                    }
                    else {
                        sym.i2c_trace_log(*arg1_00,0x800152d,0x8000ead,piVar30);
                        uVar34 = 0xfffffff4;
                    }
                    goto code_r0x08005714;
                }
                uVar11 = *(arg1_00 + 0xb3);
                if (3 < uVar11) goto code_r0x080059d8;
                if (uVar11 == 3) goto code_r0x080059d4;
                iVar12 = 0;
                if (*(obj.geni_i2c_clk_map + uVar11 * 8) != 0) {
                    iVar12 = (*(arg2 + iVar28) * 9000000) / *(obj.geni_i2c_clk_map + uVar11 * 8);
                }
                uVar13 = __usecs_to_jiffies(iVar12 * 10 + 500000);
                *(arg1_00 + 0x1c) = uVar13;
                if ((*(arg1_00 + 0x794) == '\0') && (0x20 < *(arg2 + iVar28))) {
                    geni_se_select_mode(piVar25,2);
                    bVar8 = true;
                    iStack_b0 = i2c_get_dma_safe_msg_buf(puVar33,1);
                    if (iStack_b0 == 0) {
                        uVar34 = 0xfffffff4;
                        goto code_r0x08005714;
                    }
                }
                else {
                    geni_se_select_mode(piVar25,1);
                    bVar8 = false;
                    iStack_b0 = 0;
                }
                uVar16 = bVar9;
                uVar11 = (uVar7 & 0x7f) << 9 | uVar16 << 2;
                ipc_log_string(arg1_00[0xb2],"%s: stretch:%d, m_param:0x%x\n","geni_i2c_xfer",uVar16,uVar11);
                if (*arg1_00 != 0) {
                    sym.i2c_trace_log(*arg1_00,0x8000b1b,0x8000ead,bVar9);
                }
                iVar37 = arg2 + iVar28;
                piVar30 = *(arg1_00[0xa0] + 4);
                if ((*(iVar37 + -2) & 1) == 0) {
                    ipc_log_string(arg1_00[0xb2],"msgs[%d].len:%d W\n",uVar18 & 0xffffffff);
                    if (*arg1_00 != 0) {
                        piVar30 = *(arg1_00[0xa0] + 4);
                        sym.i2c_trace_log(*arg1_00,0x8000d09,uVar18 & 0xffffffff,piVar30);
                    }
                    sym.writel_relaxed(*(arg2 + iVar28),arg1_00[1] + 0x26c);
                    sym.writel(uVar11 | 0x8000000,arg1_00[0xa1] + 0x600);
                    if (bVar8) {
                        piVar30 = &iStack_78;
                        uVar11 = geni_se_tx_dma_prep(piVar25,iStack_b0,*(arg2 + iVar28));
                        if (uVar11 == 0) {
                            iVar29 = arg1_00[0xf1];
                            if (iVar29 != 0) {
                                iVar19 = -0x18;
                                goto code_r0x080042d8;
                            }
code_r0x080042ec:
                            uVar34 = 0;
                            bVar9 = true;
                            goto code_r0x080042f4;
                        }
                        uVar34 = uVar11;
                        i2c_put_dma_safe_msg_buf(iStack_b0,puVar33,0);
                        geni_se_select_mode(piVar25,1);
                    }
                    sym.writel_relaxed(1,arg1_00[1] + 0x80c);
                    bVar9 = false;
                }
                else {
                    ipc_log_string(arg1_00[0xb2],"msgs[%d].len:%d R\n",uVar18 & 0xffffffff);
                    if (*arg1_00 != 0) {
                        piVar30 = *(arg1_00[0xa0] + 4);
                        sym.i2c_trace_log(*arg1_00,0x80014a2,uVar18 & 0xffffffff,piVar30);
                    }
                    sym.writel_relaxed(*(arg2 + iVar28),arg1_00[1] + 0x270);
                    sym.writel(uVar11 | 0x10000000,arg1_00[0xa1] + 0x600);
                    bVar9 = false;
                    if (bVar8) {
                        piVar30 = &iStack_80;
                        uVar11 = geni_se_rx_dma_prep(piVar25,iStack_b0,*(arg2 + iVar28));
                        if (uVar11 == 0) {
                            iVar29 = arg1_00[0xf1];
                            if (iVar29 == 0) goto code_r0x080042ec;
                            iVar19 = -0x20;
code_r0x080042d8:
                            bVar9 = true;
                            uVar34 = 0;
                            *(iVar29 + iVar28 + -4) = iStack_b0;
                            *(arg1_00[0xf1] + iVar28 + 4) = &stack0xffffffffffffffa0 + iVar19;
                        }
                        else {
                            uVar34 = uVar11;
                            i2c_put_dma_safe_msg_buf(iStack_b0,puVar33,0);
                            geni_se_select_mode(piVar25,1);
                            bVar9 = false;
                        }
                    }
                }
code_r0x080042f4:
                DataSynchronizationBarrier(3,3,0);
                iVar12 = wait_for_completion_timeout(piVar32,*(arg1_00 + 0x1c));
                pcVar21 = pcVar22;
                if (iVar12 == 0) {
                    ipc_log_string(arg1_00[0xb2],"I2C xfer timeout: %d\n",*(arg1_00 + 0x1c));
                    pcVar21 = *(arg1_00 + 0x1c);
                    if (*arg1_00 == 0) {
                        _printk(0x8000d1c,pcVar21);
                    }
                    else {
                        _dev_err(*arg1_00,"I2C xfer timeout: %d\n");
                    }
                    if (*arg1_00 != 0) {
                        pcVar21 = *(arg1_00 + 0x1c);
                        sym.i2c_trace_log(*arg1_00,0x8000e2c,pcVar21,piVar30);
                    }
                    sym.geni_i2c_err(arg1_00,9);
                    uVar11 = sym.readl_relaxed(arg1_00[1] + 0x908);
                    if ((~uVar11 & 3) == 0) goto code_r0x08004370;
                    piVar23 = uVar11;
                    pcVar21 = pcVar22;
                    piVar30 = piVar23;
                    ipc_log_string(arg1_00[0xb2],"%s: IO lines not good: 0x%x\n");
                    if (*arg1_00 != 0) {
                        pcVar21 = pcVar22;
                        sym.i2c_trace_log(*arg1_00,0x8000663,0x8000ead,piVar23);
                        piVar30 = piVar23;
                    }
                    if (*(arg1_00 + 0x796) == '\0') goto code_r0x08004370;
code_r0x0800522c:
                    *(arg1_00 + 0x795) = 1;
                    goto code_r0x08005714;
                }
                piVar30 = *(arg2 + iVar28);
                if ((*(iVar37 + -2) & 1) == 0) {
                    ipc_log_string(arg1_00[0xb2],"%s:Write operation completed for len:%d\n");
                    iVar29 = *arg1_00;
                    if (iVar29 != 0) {
                        uVar7 = *(arg2 + iVar28);
                        arg2_00 = "%s:Write operation completed for len:%d\n";
code_r0x08004368:
                        piVar30 = uVar7;
                        pcVar21 = pcVar22;
                        sym.i2c_trace_log(iVar29,arg2_00,0x8000ead,piVar30);
                    }
                }
                else {
                    ipc_log_string(arg1_00[0xb2],"%s: Read operation completed for len:%d\n");
                    iVar29 = *arg1_00;
                    if (iVar29 != 0) {
                        uVar7 = *(arg2 + iVar28);
                        arg2_00 = "%s: Read operation completed for len:%d\n";
                        goto code_r0x08004368;
                    }
                }
code_r0x08004370:
                if (arg1_00[3] == 0) {
code_r0x080044b4:
                    arg1_00[0xb0] = 0;
                }
                else {
                    if (*(arg1_00 + 0x796) != '\0') {
                        uVar11 = sym.readl_relaxed(arg1_00[1] + 0x908);
                        if ((~uVar11 & 3) != 0) {
                            ipc_log_string(arg1_00[0xb2],"%s: IO lines not in good state\n","geni_i2c_xfer");
                            if (*arg1_00 != 0) {
                                sym.i2c_trace_log(*arg1_00,0x8000999,0x8000ead,piVar30);
                            }
                            goto code_r0x0800522c;
                        }
                        if (arg1_00[3] == -0x10) {
                            ipc_log_string(arg1_00[0xb2],"%s:run reg68 war\n","geni_i2c_xfer");
                            if (*arg1_00 != 0) {
                                sym.i2c_trace_log(*arg1_00,0x80014b5,0x8000ead,piVar30);
                            }
                            uVar11 = sym.readl_relaxed(arg1_00[1] + 0x600);
                            piVar30 = uVar11;
                            pcVar21 = "do_reg68_war_for_rtl_se";
                            ipc_log_string(arg1_00[0xb2],"%s: SE_GENI_M_CMD0:0x%x\n");
                            if (((uVar11 >> 2 & 1) != 0) && (*(arg1_00 + 0x796) != '\0')) {
                                uVar16 = sym.readl_relaxed(arg1_00[1] + 0x210);
                                pcVar21 = "do_reg68_war_for_rtl_se";
                                ipc_log_string(arg1_00[0xb2],"%s: Before WAR REG68:0x%x\n","do_reg68_war_for_rtl_se",
                                               uVar16);
                                uVar11 = 0x100120;
                                if ((uVar16 & 0x20) != 0) {
                                    uVar11 = 0x100110;
                                }
                                sym.writel_relaxed(uVar11,arg1_00[1] + 0x210);
                                uVar34 = sym.readl_relaxed(arg1_00[1] + 0x210);
                                piVar30 = uVar34 & 0xffffffff;
                                ipc_log_string(arg1_00[0xb2],"%s: After WAR REG68:0x%x\n");
                            }
                        }
                    }
                    *piVar32 = 0;
                    sym.writel_relaxed(4,*piVar25 + 0x604);
                    iVar12 = wait_for_completion_timeout(piVar32,0xfa);
                    if (iVar12 != 0) goto code_r0x080044b4;
                    ipc_log_string(arg1_00[0xb2],"Abort\n");
                    if (*arg1_00 == 0) {
                        _printk(0x800055a);
                    }
                    else {
                        _dev_err(*arg1_00,"Abort\n");
                    }
                    if (*arg1_00 != 0) {
                        sym.i2c_trace_log(*arg1_00,0x80008b5,pcVar21,piVar30);
                    }
                    sym.writel_relaxed(2,*piVar25 + 0x604);
                    arg1_00[0xb0] = 0;
                }
                if (bVar9) {
                    if (arg1_00[3] != 0) {
                        *(arg1_00 + 0x9c) = 0;
                        iVar29 = 0xd58;
                        if (*(iVar37 + -2) != 1) {
                            iVar29 = 0xc58;
                        }
                        sym.writel_relaxed(1,arg1_00[1] + iVar29);
                        wait_for_completion_timeout(piVar32,0xfa);
                    }
                    if (iStack_80 != 0) {
                        geni_se_rx_dma_unprep(piVar25,iStack_80,*(arg2 + iVar28));
                    }
                    if (iStack_78 != 0) {
                        geni_se_tx_dma_unprep(piVar25,iStack_78,*(arg2 + iVar28));
                    }
                    i2c_put_dma_safe_msg_buf(iStack_b0,puVar33,arg1_00[3] == 0);
                }
                uVar11 = *(arg1_00 + 3);
                uVar34 = uVar11;
                if (uVar11 != 0) {
                    ipc_log_string(arg1_00[0xb2],"i2c error :%d\n",uVar11);
                    if (*arg1_00 == 0) {
                        _printk(0x8000845,arg1_00[3]);
                    }
                    else {
                        _dev_err(*arg1_00,"i2c error :%d\n");
                    }
                    if (*arg1_00 != 0) {
                        sym.i2c_trace_log(*arg1_00,0x800106c,*(arg1_00 + 3),piVar30);
                    }
                    if (((arg1_00[0xf3] == '\0') || (uVar18 = sym.readl_relaxed(arg1_00[1] + 0x908), (uVar18 & 1) != 0)
                        ) || ((iVar12 = arg1_00[3], iVar12 != -0x6e && ((iVar12 != -0x10 && (iVar12 != -0x47)))))) {
                        ipc_log_string(arg1_00[0xb2],"Bus Recovery not required/enabled\n");
                    }
                    else {
                        ipc_log_string(arg1_00[0xb2],"SDA Line stuck\n");
                        ipc_log_string(arg1_00[0xb2],"%s: start recovery\n","geni_i2c_bus_recovery");
                        if (*arg1_00 != 0) {
                            sym.i2c_trace_log(*arg1_00,0x8001507,0x8000928,piVar30);
                        }
                        *piVar32 = 0;
                        sym.writel(0x30000000,*piVar25 + 0x600);
                        iVar12 = wait_for_completion_timeout(piVar32,0xfa);
                        if (iVar12 == 0) {
                            sym.geni_i2c_err(arg1_00,9);
                            arg1_00[0xa0] = 0;
                            iVar12 = sym.geni_i2c_stop_with_cancel(arg1_00);
                            if (iVar12 == 0) goto code_r0x08005654;
                            ipc_log_string(arg1_00[0xb2],"%s: Bus clear Failed\n","geni_i2c_bus_recovery");
                            iVar28 = *arg1_00;
                            if (iVar28 != 0) {
                                pcVar22 = "%s: Bus clear Failed\n";
code_r0x0800596c:
                                sym.i2c_trace_log(iVar28,pcVar22,0x8000928,piVar30);
                            }
code_r0x08005978:
                            ipc_log_string(arg1_00[0xb2],"%s:Bus Recovery failed\n","geni_i2c_xfer");
                            if (*arg1_00 == 0) {
                                _printk(0x80013e1,"geni_i2c_xfer");
                            }
                            else {
                                _dev_err(*arg1_00,"%s:Bus Recovery failed\n","geni_i2c_xfer");
                            }
                        }
                        else {
code_r0x08005654:
                            ipc_log_string(arg1_00[0xb2],"%s: BUS_CLEAR success\n","geni_i2c_bus_recovery");
                            if (*arg1_00 != 0) {
                                sym.i2c_trace_log(*arg1_00,0x8001847,0x8000928,piVar30);
                            }
                            *piVar32 = 0;
                            sym.writel(0x38000000,*piVar25 + 0x600);
                            iVar12 = wait_for_completion_timeout(piVar32,0xfa);
                            if (iVar12 == 0) {
                                sym.geni_i2c_err(arg1_00,9);
                                arg1_00[0xa0] = 0;
                                iVar12 = sym.geni_i2c_stop_with_cancel(arg1_00);
                                if (iVar12 != 0) {
                                    ipc_log_string(arg1_00[0xb2],"%s:Bus Stop Failed\n","geni_i2c_bus_recovery");
                                    iVar28 = *arg1_00;
                                    if (iVar28 != 0) {
                                        pcVar22 = "%s:Bus Stop Failed\n";
                                        goto code_r0x0800596c;
                                    }
                                    goto code_r0x08005978;
                                }
                            }
                            ipc_log_string(arg1_00[0xb2],"%s: success\n","geni_i2c_bus_recovery");
                            if (*arg1_00 != 0) {
                                sym.i2c_trace_log(*arg1_00,0x8000f9a,0x8000928,piVar30);
                            }
                        }
                    }
                    goto code_r0x08005714;
                }
                iVar28 = iVar28 + 0x10;
                uVar18 = uVar18 + 1;
            } while ((arg3 & 0xffffffffU) != uVar18);
        }
code_r0x08005718:
        uVar34 = arg3_00;
    }
code_r0x08005720:
    if (arg1_00[0xf2] == '\0') {
        iVar28 = *arg1_00;
        uVar17 = ktime_get_mono_fast_ns();
        *(iVar28 + 0x218) = uVar17;
        __pm_runtime_suspend(*arg1_00,0xd);
    }
    *(arg1_00 + 0x79c) = 0;
    arg1_00[0xa0] = 0;
    *(arg1_00 + 3) = 0;
    ipc_log_string(arg1_00[0xb2],"i2c txn ret:%d\n",uVar34 & 0xffffffff);
    if (*arg1_00 != 0) {
        sym.i2c_trace_log(*arg1_00,0x80008bc,uVar34 & 0xffffffff,piVar30);
    }
code_r0x08005778:
    iVar28 = sp_el0;
    if (*(iVar28 + 0x5e0) == iStack_70) {
        return uVar34 & 0xffffffff;
    }
    __stack_chk_fail();
    return 0xefe0009;
}


// ===== sym.geni_i2c_func @ 0x080059e0 (size 20) =====

ulong sym.geni_i2c_func(void)

{
    return 0xefe0009;
}


// ===== sym.pm_runtime_put_noidle @ 0x080059f4 (size 120) =====

void sym.pm_runtime_put_noidle(uint32_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    
    puVar1 = arg1 + 0x1f8;
    uVar6 = *puVar1;
    do {
        uVar5 = uVar6;
        if (uVar5 == 0) {
            return;
        }
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar2 = *puVar1;
            uVar6 = uVar2;
            if (uVar2 != uVar5) goto code_r0x08005a24;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar5 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08005a24:
        if (uVar5 == uVar2) {
            return;
        }
    } while( true );
}


// ===== sym.geni_i2c_prepare @ 0x08005a6c (size 684) =====

ulong sym.geni_i2c_prepare(int64_t arg1)

{
    int64_t *piVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t in_x3;
    int64_t iVar7;
    ulong *in_x18;
    ulong uVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x778) == 0) {
        piVar1 = arg1 + 0x508;
        uVar3 = sym.readl_relaxed(*(arg1 + 0x508) + 0x68);
        uVar3 = uVar3 >> 8 & 0xff;
        uVar6 = uVar3;
        if (uVar3 != 3) {
            _dev_err(*arg1,"Invalid proto %d\n");
            if (*(arg1 + 0x790) == '\0') {
                geni_se_resources_off(piVar1);
                geni_icc_disable(piVar1);
                if (*(arg1 + 0x794) != '\0') {
                    uVar8 = *(arg1 + 0x578);
                    clk_disable(uVar8);
                    clk_unprepare(uVar8);
                    return 0xfffffffa;
                }
            }
            return 0xfffffffa;
        }
        iVar4 = sym.readl_relaxed(*(arg1 + 8) + 100);
        if (iVar4 == 0) {
            if (*(arg1 + 0x794) == '\0') {
                uVar5 = geni_se_get_qup_hw_version(piVar1);
                uVar3 = 0xff0000;
                if (((uVar5 & 0xffe0000) < 0x90001 || uVar5 >> 0x1c != 3) && uVar5 >> 0x1e == 0) {
                    uVar3 = 0x3f0000;
                }
                uVar5 = sym.readl_relaxed(*piVar1 + 0xe24);
                uVar3 = (uVar3 & uVar5) >> 0x10;
            }
            else {
                uVar3 = 0x10;
            }
            *(arg1 + 0x778) = 1;
            *(arg1 + 0x10) = uVar3 - 1;
            geni_se_init(piVar1,uVar3 - 1,uVar3);
            uVar6 = *(arg1 + 0x598);
            if (3 < *(arg1 + 0x598)) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8005d18);
                (*pcVar2)();
            }
            if (*(arg1 + 0x794) == '\0') {
                sym.writel_relaxed(0,*(arg1 + 8) + 0x7c);
            }
            if (0x18 < (uVar6 << 3 | 4)) {
code_r0x08005d10:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(1,0x8005d14);
                (*pcVar2)();
            }
            uVar9 = uVar6 << 3;
            sym.writel_relaxed(*(uVar6 * 8 + 0x8001d14) << 4 | 1,*(arg1 + 8) + 0x48);
            if (((0x18 < (uVar9 | 5)) || (0x18 < (uVar9 | 6))) || (0x18 < (uVar9 | 7))) goto code_r0x08005d10;
            iVar7 = uVar6 * 8;
            sym.writel_relaxed(*(iVar7 + 0x8001d15) << 0x14 | *(iVar7 + 0x8001d16) << 10 | *(iVar7 + 0x8001d17),
                               *(arg1 + 8) + 0x278);
            DataSynchronizationBarrier(3,3,0);
            iVar7 = 1;
            geni_se_config_packing(piVar1,8,4,1,1,1);
            ipc_log_string(*(arg1 + 0x590),"i2c fifo/se-dma mode. fifo depth:%d\n",uVar3);
            if (*arg1 != 0) {
                sym.i2c_trace_log(*arg1,0x80019ff,uVar3,iVar7);
            }
        }
        else {
            *(arg1 + 0x778) = 2;
            geni_se_select_mode(piVar1,3);
            ipc_log_string(*(arg1 + 0x590),"i2c in GSI ONLY mode\n");
            if (*arg1 != 0) {
                sym.i2c_trace_log(*arg1,0x8000d34,uVar6,in_x3);
            }
        }
        if ((*(arg1 + 0x794) == '\0') && (uVar3 = sym.readl_relaxed(*(arg1 + 8) + 0xe2c), (uVar3 >> 0xf & 1) != 0)) {
            *(arg1 + 0x796) = 1;
            _dev_info(*arg1,"%s: RTL based SE\n","geni_i2c_prepare");
        }
    }
    return 0;
}


// ===== sym.geni_i2c_lock_bus @ 0x08005d18 (size 584) =====

uint64_t sym.geni_i2c_lock_bus(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t in_x3;
    uint uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x791) == '\0') && (uVar3 = sym.geni_i2c_gsi_request_channel(arg1), uVar3 != 0)) {
        return uVar3;
    }
    uVar4 = 0x300001;
    *(arg1 + 0x5b0) = 0;
    *(arg1 + 0x5b8) = 0;
    if (*(arg1 + 0x77d) == '\0') {
        if (*(arg1 + 0x790) == '\0') goto code_r0x08005d68;
        uVar4 = 0x300100;
    }
    *(arg1 + 0x5bc) = uVar4;
code_r0x08005d68:
    sg_init_table(arg1 + 0x650,1);
    *(arg1 + 0x658) = arg1 + 0x5b0 & 0xfff;
    *(arg1 + 0x65c) = 0x10;
    *(arg1 + 0x650) =
         (((arg1 + 0x5b0) * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | *(arg1 + 0x650) & 3) - 0x200000000;
    iVar2 = sym.geni_i2c_prep_desc(arg1,1);
    *(arg1 + 0x718) = iVar2;
    if (iVar2 == 0) {
        uVar3 = 0xfffffff4;
    }
    else {
        *(arg1 + 0x4e0) = 0;
        pcVar6 = *(iVar2 + 0x18);
        __cfi_slowpath_diag(0xc97b94b4f4a7b659,pcVar6,0x8000420);
        iVar1 = (*pcVar6)(iVar2);
        if (iVar1 < 0) {
            _printk(0x8001414,"geni_i2c_lock_bus",iVar1);
            uVar3 = 0xffffffea;
        }
        else {
            piVar5 = *(arg1 + 0x5a0);
            pcVar6 = *(*piVar5 + 400);
            __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar6,0x8000440);
            (*pcVar6)(piVar5);
            iVar1 = wait_for_completion_timeout(arg1 + 0x4e0,0xfa);
            if (iVar1 != 0) {
                return 0;
            }
            ipc_log_string(*(arg1 + 0x590),"%s timedout\n","geni_i2c_lock_bus");
            if (*arg1 == 0) {
                _printk(0x8000a4b,"geni_i2c_lock_bus");
            }
            else {
                _dev_err(*arg1,"%s timedout\n","geni_i2c_lock_bus");
            }
            if (*arg1 != 0) {
                sym.i2c_trace_log(*arg1,0x80009ed,0x8000f42,in_x3);
            }
            sym.geni_i2c_se_dump_dbg_regs(arg1 + 0x508,*(arg1 + 8),*(arg1 + 0x590));
            uVar3 = 0xffffff92;
        }
    }
    piVar5 = *(arg1 + 0x5a0);
    *(arg1 + 0x18) = uVar3;
    pcVar6 = *(*piVar5 + 0x178);
    if (pcVar6 != NULL) {
        __cfi_slowpath_diag(0x146502001565ea5c,pcVar6,0x80003c0);
        (*pcVar6)(piVar5);
        uVar3 = *(arg1 + 0x18);
    }
    *(arg1 + 0x710) = 0;
    return uVar3;
}


// ===== sym.geni_i2c_gsi_request_channel @ 0x08005f60 (size 780) =====

uint64_t sym.geni_i2c_gsi_request_channel(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t arg1_00;
    char *arg2;
    int64_t in_x3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = *(arg1 + 0x5a0);
    if (uVar4 == 0) {
        uVar3 = dma_request_chan(*arg1,0x8001119);
        uVar4 = 0;
        if (uVar3 < 0xfffffffffffff001) {
            uVar4 = uVar3;
        }
        *(arg1 + 0x5a0) = uVar4;
        if (uVar4 == 0) {
            ipc_log_string(*(arg1 + 0x590),"tx dma req slv chan ret :%d\n",0);
            if (*arg1 == 0) {
                _printk(0x8001a24,0);
            }
            else {
                _dev_err(*arg1,"tx dma req slv chan ret :%d\n",0);
            }
            if (*arg1 == 0) {
                return 0xfffffffb;
            }
            sym.i2c_trace_log(*arg1,0x8001541,0,in_x3);
            return 0xfffffffb;
        }
    }
    puVar1 = arg1 + 0x5a0;
    if (*(arg1 + 0x5a8) == 0) {
        uVar3 = dma_request_chan(*arg1,0x8000bf0);
        uVar4 = 0;
        if (uVar3 < 0xfffffffffffff001) {
            uVar4 = uVar3;
        }
        *(arg1 + 0x5a8) = uVar4;
        if (uVar4 == 0) {
            ipc_log_string(*(arg1 + 0x590),"rx dma req slv chan ret :%d\n",0);
            if (*arg1 == 0) {
                _printk(0x800127a,0);
            }
            else {
                _dev_err(*arg1,"rx dma req slv chan ret :%d\n",0);
            }
            if (*arg1 != 0) {
                sym.i2c_trace_log(*arg1,0x80006b4,0,in_x3);
            }
            dma_release_channel(*puVar1);
            return 0xfffffffb;
        }
        uVar4 = *puVar1;
    }
    *(arg1 + 0x630) = arg1;
    *(arg1 + 0x620) = 1;
    *(arg1 + 0x628) = sym.gi2c_ev_cb.ff89956466640c790290520478333855.cfi_jt;
    *(uVar4 + 0x68) = arg1 + 0x620;
    piVar5 = *(arg1 + 0x5a0);
    pcVar6 = *(*piVar5 + 0x160);
    if (pcVar6 == NULL) {
        uVar4 = 0xffffffda;
code_r0x080060b8:
        ipc_log_string(*(arg1 + 0x590),"tx dma slave config ret :%d\n",uVar4);
        if (*arg1 == 0) {
            _printk(0x8000bf3,uVar4);
            arg1_00 = *arg1;
        }
        else {
            _dev_err(*arg1,"tx dma slave config ret :%d\n",uVar4);
            arg1_00 = *arg1;
        }
        if (arg1_00 == 0) goto code_r0x08006170;
        arg2 = "tx dma slave config ret :%d\n";
    }
    else {
        __cfi_slowpath_diag(0xa5b1eb43ed4fa99d,pcVar6,0x80003e0);
        uVar2 = (*pcVar6)(piVar5,0);
        if (uVar2 != 0) {
            uVar4 = uVar2;
            goto code_r0x080060b8;
        }
        *(arg1 + 0x648) = arg1;
        *(arg1 + 0x640) = sym.gi2c_ev_cb.ff89956466640c790290520478333855.cfi_jt;
        *(arg1 + 0x638) = 1;
        *(*(arg1 + 0x5a8) + 0x68) = arg1 + 0x638;
        piVar5 = *(arg1 + 0x5a8);
        pcVar6 = *(*piVar5 + 0x160);
        if (pcVar6 == NULL) {
            uVar4 = 0xffffffda;
        }
        else {
            __cfi_slowpath_diag(0xa5b1eb43ed4fa99d,pcVar6,0x80003e0);
            uVar2 = (*pcVar6)(piVar5,0);
            uVar4 = uVar2;
            if (uVar2 == 0) {
                *(arg1 + 0x748) = arg1;
                *(arg1 + 0x770) = arg1;
                *(arg1 + 0x791) = 1;
                return 0;
            }
        }
        ipc_log_string(*(arg1 + 0x590),"rx dma slave config ret :%d\n",uVar4);
        if (*arg1 == 0) {
            _printk(0x800118b,uVar4);
        }
        else {
            _dev_err(*arg1,"rx dma slave config ret :%d\n",uVar4);
        }
        arg1_00 = *arg1;
        if (arg1_00 == 0) goto code_r0x08006170;
        arg2 = "rx dma slave config ret :%d\n";
    }
    sym.i2c_trace_log(arg1_00,arg2,uVar4,in_x3);
code_r0x08006170:
    dma_release_channel(*(arg1 + 0x5a0));
    dma_release_channel(*(arg1 + 0x5a8));
    *puVar1 = 0;
    *(arg1 + 0x5a8) = 0;
    return uVar4;
}


// ===== sym.geni_i2c_prep_desc @ 0x0800626c (size 464) =====

int64_t sym.geni_i2c_prep_desc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char *arg2_00;
    uint64_t in_x2;
    int64_t in_x3;
    ulong *in_x18;
    int64_t *piVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_x2 & 1) == 0) {
        piVar2 = *(arg1 + 0x5a8);
        if (((piVar2 != NULL) && (*piVar2 != 0)) && (pcVar3 = *(*piVar2 + 0x138), pcVar3 != NULL)) {
            __cfi_slowpath_diag(0x3675599da7c39b65,pcVar3,0x8000400);
            in_x2 = 1;
            in_x3 = 2;
            iVar1 = (*pcVar3)(piVar2,arg1 + 0x6f0,1,2,3,0);
            if (iVar1 != 0) {
                arg1 = arg1 + 0x750;
                pcVar3 = sym.gi2c_gsi_rx_cb.ff89956466640c790290520478333855.cfi_jt;
                goto code_r0x08006368;
            }
        }
        ipc_log_string(*(arg1 + 0x590),"prep_slave_sg for rx failed\n");
        if (*arg1 == 0) {
            _printk(0x8000909);
            iVar1 = *arg1;
        }
        else {
            _dev_err(*arg1,"prep_slave_sg for rx failed\n");
            iVar1 = *arg1;
        }
        if (iVar1 == 0) goto code_r0x08006414;
        arg2_00 = "prep_slave_sg for rx failed\n";
    }
    else {
        piVar2 = *(arg1 + 0x5a0);
        if (((piVar2 != NULL) && (*piVar2 != 0)) && (pcVar3 = *(*piVar2 + 0x138), pcVar3 != NULL)) {
            in_x2 = arg2 & 0xffffffff;
            __cfi_slowpath_diag(0x3675599da7c39b65,pcVar3,0x8000400);
            in_x3 = 1;
            iVar1 = (*pcVar3)(piVar2,arg1 + 0x650,in_x2,1,3,0);
            if (iVar1 != 0) {
                arg1 = arg1 + 0x728;
                pcVar3 = sym.gi2c_gsi_tx_cb.ff89956466640c790290520478333855.cfi_jt;
code_r0x08006368:
                *(iVar1 + 0x28) = pcVar3;
                *(iVar1 + 0x38) = arg1;
                return iVar1;
            }
        }
        ipc_log_string(*(arg1 + 0x590),"prep_slave_sg for tx failed\n");
        if (*arg1 == 0) {
            _printk(0x8000e42);
            iVar1 = *arg1;
        }
        else {
            _dev_err(*arg1,"prep_slave_sg for tx failed\n");
            iVar1 = *arg1;
        }
        if (iVar1 == 0) goto code_r0x08006414;
        arg2_00 = "prep_slave_sg for tx failed\n";
    }
    sym.i2c_trace_log(iVar1,arg2_00,in_x2,in_x3);
code_r0x08006414:
    *(arg1 + 0x18) = 0xfffffff4;
    return 0;
}


// ===== sym.gi2c_ev_cb @ 0x0800643c (size 264) =====

void sym.gi2c_ev_cb(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    uint32_t uVar1;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg1 + 8);
    uVar1 = uVar2;
    if (*arg1 == 0) {
        if ((uVar1 >> 10 & 1) != 0) {
            sym.geni_i2c_err(arg2,1);
        }
        if ((uVar1 >> 0xc & 1) != 0) {
            sym.geni_i2c_err(arg2,3);
        }
        if ((uVar1 >> 0xd & 1) != 0) {
            sym.geni_i2c_err(arg2,4);
        }
    }
    complete(arg2 + 0x4e0);
    if (*arg1 != 0) {
        ipc_log_string(*(arg2 + 0x590),"GSI QN err:0x%x, status:0x%x, err:%d\n",*(arg1 + 0x28),uVar2 & 0xffffffff);
        if (*arg2 == 0) {
            _printk(0x8001625,*(arg1 + 0x28),uVar2 & 0xffffffff,*arg1);
        }
        else {
            _dev_err(*arg2,"GSI QN err:0x%x, status:0x%x, err:%d\n",*(arg1 + 0x28),uVar2 & 0xffffffff,*arg1);
        }
        if (*arg2 != 0) {
            sym.i2c_trace_log(*arg2,0x800107b,*(arg1 + 0x28),uVar2 & 0xffffffff);
        }
    }
    return;
}


// ===== sym.gi2c_gsi_tx_cb @ 0x08006544 (size 96) =====

void sym.gi2c_gsi_tx_cb(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (iVar1 = *(arg1 + 0x20), iVar1 == 0)) {
        _printk(0x80018a7,"gi2c_gsi_tx_cb");
    }
    else {
        sym.gi2c_gsi_cb_err(arg1,0x8000778);
        complete(iVar1 + 0x4e0);
    }
    return;
}


// ===== sym.gi2c_gsi_rx_cb @ 0x080065a4 (size 108) =====

void sym.gi2c_gsi_rx_cb(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (iVar1 = *(arg1 + 0x20), iVar1 == 0)) {
        _printk(0x80006e0,"gi2c_gsi_rx_cb");
    }
    else if ((*(*(iVar1 + 0x500) + 2) & 1) != 0) {
        sym.gi2c_gsi_cb_err(arg1,0x800174a);
        complete(iVar1 + 0x4e0);
    }
    return;
}


// ===== sym.gi2c_gsi_cb_err @ 0x08006610 (size 196) =====

void sym.gi2c_gsi_cb_err(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t *arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 8) & 0x340) != 0) {
        arg1_00 = *(arg1 + 0x20);
        ipc_log_string(arg1_00[0xb2],"%s TCE Unexpected Err, stat:0x%x\n",arg2);
        if (*arg1_00 != 0) {
            sym.i2c_trace_log(*arg1_00,0x8000575,arg2,*(arg1 + 8));
        }
        uVar1 = *(arg1 + 8);
        if ((uVar1 >> 6 & 1) != 0) {
            sym.geni_i2c_err(arg1_00,1);
            uVar1 = *(arg1 + 8);
        }
        if ((uVar1 >> 8 & 1) != 0) {
            sym.geni_i2c_err(arg1_00,3);
            uVar1 = *(arg1 + 8);
        }
        if ((uVar1 >> 9 & 1) != 0) {
            sym.geni_i2c_err(arg1_00,4);
        }
    }
    return;
}


// ===== sym.writel @ 0x080066d4 (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80066f0);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800671c);
    return;
}


// ===== sym.geni_i2c_stop_with_cancel @ 0x08006750 (size 244) =====

ulong sym.geni_i2c_stop_with_cancel(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    int64_t in_x3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x4e0) = 0;
    sym.writel_relaxed(4,*(arg1 + 0x508) + 0x604);
    iVar1 = wait_for_completion_timeout(arg1 + 0x4e0,0xfa);
    uVar2 = 0;
    if (iVar1 == 0) {
        ipc_log_string(*(arg1 + 0x590),"%s:Cancel failed\n","geni_i2c_stop_with_cancel");
        if (*arg1 != 0) {
            sym.i2c_trace_log(*arg1,0x80005b0,0x8000b4d,in_x3);
        }
        *(arg1 + 0x4e0) = 0;
        sym.writel_relaxed(2,*(arg1 + 0x508) + 0x604);
        iVar1 = wait_for_completion_timeout(arg1 + 0x4e0,0xfa);
        uVar2 = 0;
        if (iVar1 == 0) {
            ipc_log_string(*(arg1 + 0x590),"%s:Abort failed\n","geni_i2c_stop_with_cancel");
            if (*arg1 != 0) {
                sym.i2c_trace_log(*arg1,0x80009dc,0x8000b4d,in_x3);
            }
            uVar2 = 1;
        }
    }
    return uVar2;
}


// ===== sym.geni_i2c_runtime_suspend @ 0x08006844 (size 1116) =====

uint64_t sym.geni_i2c_runtime_suspend(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    int64_t in_x3;
    uint uVar3;
    ulong *in_x18;
    int64_t *arg1_00;
    int64_t iVar4;
    int64_t *piVar5;
    uint64_t arg4;
    int64_t iVar6;
    code *pcVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    if (arg1_00[0xef] == 1) {
        disable_irq(*(arg1_00 + 0x14));
    }
    if (*(arg1_00 + 0x797) == '\0') {
        if (((arg1_00[0xef] == 2) && (arg1_00[0xf2] == '\0')) &&
           (uVar2 = sym.geni_i2c_gpi_suspend_resume(arg1_00,1), uVar2 != 0)) {
            arg4 = uVar2;
            goto code_r0x08006b78;
        }
        if (arg1_00[0xf2] == '\0') {
            if (*(arg1_00 + 0x77d) != '\0') goto code_r0x08006a54;
            geni_se_resources_off(arg1_00 + 0xa1);
        }
        else {
            if (*(arg1_00 + 0x792) != '\0') {
                if (*(arg1_00 + 0x793) == '\0') {
                    arg1_00[0xb8] = 0;
                    arg1_00[0xb9] = 0x31010000000000;
                    sg_init_table(arg1_00 + 0xca,1);
                    *(arg1_00 + 0xcb) = arg1_00 + 0xb8 & 0xfff;
                    *(arg1_00 + 0x65c) = 0x10;
                    arg1_00[0xca] =
                         (((arg1_00 + 0xb8) * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | arg1_00[0xca] & 3U)
                         - 0x200000000;
                    iVar4 = sym.geni_i2c_prep_desc(arg1_00,1);
                    arg1_00[0xe3] = iVar4;
                    if (iVar4 == 0) {
                        uVar3 = 0xfffffff4;
code_r0x08006b00:
                        *(arg1_00 + 3) = uVar3;
                    }
                    else {
                        *(arg1_00 + 0x9c) = 0;
                        pcVar7 = *(iVar4 + 0x18);
                        __cfi_slowpath_diag(0xc97b94b4f4a7b659,pcVar7,0x8000420);
                        iVar1 = (*pcVar7)(iVar4);
                        if (iVar1 < 0) {
                            _printk(0x8001414,"geni_i2c_unlock_bus",iVar1);
                            uVar3 = 0xffffffea;
                            goto code_r0x08006b00;
                        }
                        piVar5 = arg1_00[0xb4];
                        pcVar7 = *(*piVar5 + 400);
                        __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar7,0x8000440);
                        (*pcVar7)(piVar5);
                        iVar1 = wait_for_completion_timeout(arg1_00 + 0x9c,0xfa);
                        if (iVar1 == 0) {
                            ipc_log_string(arg1_00[0xb2],"%s failed\n","geni_i2c_unlock_bus");
                            if (*arg1_00 == 0) {
                                _printk(0x8001595,"geni_i2c_unlock_bus");
                            }
                            else {
                                _dev_err(*arg1_00,"%s failed\n","geni_i2c_unlock_bus");
                            }
                            if (*arg1_00 != 0) {
                                sym.i2c_trace_log(*arg1_00,0x80007ab,0x80010cd,in_x3);
                            }
                            sym.geni_i2c_se_dump_dbg_regs(arg1_00 + 0xa1,arg1_00[1],arg1_00[0xb2]);
                            uVar3 = 0xffffff92;
                            goto code_r0x08006b00;
                        }
                    }
                    if ((*(arg1_00 + 0x793) != '\0') || (arg1_00[3] != 0)) goto code_r0x08006b14;
                }
                else {
code_r0x08006b14:
                    piVar5 = arg1_00[0xb4];
                    pcVar7 = *(*piVar5 + 0x178);
                    if (pcVar7 != NULL) {
                        __cfi_slowpath_diag(0x146502001565ea5c,pcVar7,0x80003c0);
                        (*pcVar7)(piVar5);
                    }
                    *(arg1_00 + 0xe2) = 0;
                    *(arg1_00 + 3) = 0;
                    *(arg1_00 + 0x793) = 0;
                }
                if (arg1_00[0xef] == 2) {
                    uVar2 = sym.geni_i2c_gpi_suspend_resume(arg1_00,1);
                    arg4 = uVar2;
                    if (uVar2 != 0) {
code_r0x08006b78:
                        ipc_log_string(arg1_00[0xb2],"%s: failing at geni_i2c_gpi_suspend_resume ret: %d\n",
                                       "geni_i2c_runtime_suspend",arg4);
                        if (*arg1_00 == 0) {
                            return arg4;
                        }
                        sym.i2c_trace_log(*arg1_00,0x8000fa7,0x8001134,arg4);
                        return arg4;
                    }
                    goto code_r0x08006bbc;
                }
                goto code_r0x08006bb8;
            }
            if (*(arg1_00 + 0x77d) == '\0') goto code_r0x08006bb8;
code_r0x08006a54:
            iVar4 = arg1_00[0xa4];
            iVar6 = arg1_00[0xad];
            iVar8 = arg1_00[0xae];
            clk_disable(iVar4);
            clk_unprepare(iVar4);
            clk_disable(iVar6);
            clk_unprepare(iVar6);
            clk_disable(iVar8);
            clk_unprepare(iVar8);
        }
        uVar2 = geni_icc_disable(arg1_00 + 0xa1);
        arg4 = uVar2;
        if (uVar2 != 0) {
            ipc_log_string(arg1_00[0xb2],"%s failing at geni_icc_disable ret=%d\n","geni_i2c_runtime_suspend",arg4);
            if (*arg1_00 != 0) {
                sym.i2c_trace_log(*arg1_00,0x80016b5,0x8001134,arg4);
            }
        }
    }
    else {
        if (*(arg1_00 + 0x77d) == '\0') {
            if (arg1_00[0xf2] == '\0') {
                geni_se_resources_off(arg1_00 + 0xa1);
            }
        }
        else {
            iVar4 = arg1_00[0xa4];
            iVar6 = arg1_00[0xad];
            iVar8 = arg1_00[0xae];
            clk_disable(iVar4);
            clk_unprepare(iVar4);
            clk_disable(iVar6);
            clk_unprepare(iVar6);
            clk_disable(iVar8);
            clk_unprepare(iVar8);
        }
code_r0x08006bb8:
        arg4 = 0;
    }
code_r0x08006bbc:
    if (*(arg1_00 + 0x794) != '\0') {
        iVar4 = arg1_00[0xaf];
        clk_disable(iVar4);
        clk_unprepare(iVar4);
    }
    ipc_log_string(arg1_00[0xb2],"%s ret=%d\n","geni_i2c_runtime_suspend",arg4);
    if (*arg1_00 != 0) {
        sym.i2c_trace_log(*arg1_00,0x8001a61,0x8001134,arg4);
    }
    return 0;
}


// ===== sym.geni_i2c_gpi_suspend_resume @ 0x08006ca0 (size 388) =====

ulong sym.geni_i2c_gpi_suspend_resume(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char cVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar5 = *(arg1 + 0x5a0);
    if (piVar5 == NULL) {
code_r0x08006d64:
        uVar4 = 0;
    }
    else {
        if ((arg2 & 1U) == 0) {
            cVar2 = *(arg1 + 0x7a0);
            if (cVar2 != '\0') {
                *(arg1 + 0x620) = 5;
            }
            pcVar6 = *(*piVar5 + 0x170);
            if (pcVar6 == NULL) {
                uVar3 = 0xffffffda;
            }
            else {
                __cfi_slowpath_diag(0x146502001565ea5c,pcVar6,0x8000480);
                uVar3 = (*pcVar6)(piVar5);
                uVar3 = uVar3 & 0xffffffff;
                cVar2 = *(arg1 + 0x7a0);
            }
            if (cVar2 != '\0') {
                *(arg1 + 0x620) = 0;
                *(arg1 + 0x7a0) = 0;
            }
code_r0x08006d60:
            if (uVar3 == 0) goto code_r0x08006d64;
        }
        else {
            pcVar6 = *(*piVar5 + 0x168);
            if (pcVar6 != NULL) {
                __cfi_slowpath_diag(0x146502001565ea5c,pcVar6,0x8000460);
                uVar3 = (*pcVar6)(piVar5);
                uVar3 = uVar3 & 0xffffffff;
                goto code_r0x08006d60;
            }
            uVar3 = 0xffffffda;
        }
        uVar1 = arg2 & 1;
        ipc_log_string(*(arg1 + 0x590),"%s failed: tx:%d status:%d\n","geni_i2c_gpi_suspend_resume",uVar3,uVar1);
        if (*arg1 == 0) {
            _printk(0x80019bc,"geni_i2c_gpi_suspend_resume",uVar3,uVar1);
        }
        else {
            _dev_err(*arg1,"%s failed: tx:%d status:%d\n","geni_i2c_gpi_suspend_resume",uVar3,uVar1);
        }
        if (*arg1 != 0) {
            sym.i2c_trace_log(*arg1,0x80016dc,0x800179f,uVar3);
        }
        uVar4 = 0xffffffea;
    }
    return uVar4;
}


// ===== sym.geni_i2c_suspend_late @ 0x08006e24 (size 656) =====

ulong sym.geni_i2c_suspend_late(int64_t arg1)

{
    int iVar1;
    int64_t arg1_00;
    int64_t iVar2;
    char *arg2;
    int64_t in_x3;
    ulong *in_x18;
    code *pcVar3;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(arg1 + 0x98);
    if (*(piVar4 + 0x79c) == 0) {
        iVar2 = 0x80004a0;
        pcVar3 = *(piVar4[8] + 8);
        __cfi_slowpath_diag(0x229d00c971c85694,pcVar3);
        iVar1 = (*pcVar3)(piVar4 + 4,2);
        if (iVar1 != 0) {
            if (*(arg1 + 0x20c) != 2) {
                ipc_log_string(piVar4[0xb2],"%s: Force suspend\n","geni_i2c_suspend_late");
                if (*piVar4 != 0) {
                    sym.i2c_trace_log(*piVar4,0x8001a6c,0x8000ca9,in_x3);
                }
                sym.geni_i2c_runtime_suspend(arg1);
                __pm_runtime_disable(arg1,1);
                __pm_runtime_set_status(arg1,2);
                pm_runtime_enable(arg1);
            }
            pcVar3 = *(piVar4[8] + 0x10);
            __cfi_slowpath_diag(0xcc8ee6e53668c2f6,pcVar3,0x80004c0);
            (*pcVar3)(piVar4 + 4,2);
            ipc_log_string(piVar4[0xb2],"%s ret=%d\n","geni_i2c_suspend_late");
            if (*piVar4 == 0) {
                return 0;
            }
            sym.i2c_trace_log(*piVar4,0x8001a61,0x8000ca9,in_x3);
            return 0;
        }
        ipc_log_string(piVar4[0xb2],"late I2C transaction request\n");
        if (*piVar4 == 0) {
            _printk(0x8001301);
            arg1_00 = *piVar4;
        }
        else {
            _dev_err(*piVar4,"late I2C transaction request\n");
            arg1_00 = *piVar4;
        }
        if (arg1_00 != 0) {
            sym.i2c_trace_log(arg1_00,0x800191c,iVar2,in_x3);
            return 0xfffffff0;
        }
    }
    else if (*(*piVar4 + 0x20c) == 2) {
        ipc_log_string(piVar4[0xb2],"%s System suspend not allowed while xfer in progress\n","geni_i2c_suspend_late");
        if (*piVar4 == 0) {
            _printk(0x80005d2,"geni_i2c_suspend_late");
        }
        else {
            _dev_err(*piVar4,"%s System suspend not allowed while xfer in progress\n","geni_i2c_suspend_late");
        }
        iVar2 = *piVar4;
        if (iVar2 != 0) {
            arg2 = "%s System suspend not allowed while xfer in progress\n";
code_r0x08007098:
            sym.i2c_trace_log(iVar2,arg2,0x8000ca9,in_x3);
            return 0xfffffff0;
        }
    }
    else {
        ipc_log_string(piVar4[0xb2],":%s: runtime PM is active\n","geni_i2c_suspend_late");
        if (*piVar4 == 0) {
            _printk(0x80010e1,"geni_i2c_suspend_late");
        }
        else {
            _dev_err(*piVar4,":%s: runtime PM is active\n","geni_i2c_suspend_late");
        }
        iVar2 = *piVar4;
        if (iVar2 != 0) {
            arg2 = ":%s: runtime PM is active\n";
            goto code_r0x08007098;
        }
    }
    return 0xfffffff0;
}


// ===== sym.geni_i2c_hib_resume_noirq @ 0x080070b8 (size 104) =====

ulong sym.geni_i2c_hib_resume_noirq(int64_t arg1)

{
    int64_t in_x3;
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(arg1 + 0x98);
    ipc_log_string(piVar1[0xb2],0x80019a6,"geni_i2c_hib_resume_noirq");
    if (*piVar1 != 0) {
        sym.i2c_trace_log(*piVar1,0x80019a6,0x80011dc,in_x3);
    }
    *(piVar1 + 0xef) = 0;
    return 0;
}


// ===== sym.geni_i2c_resume_early @ 0x08007120 (size 108) =====

ulong sym.geni_i2c_resume_early(int64_t arg1)

{
    int64_t arg1_00;
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(arg1 + 0x98);
    ipc_log_string(piVar1[0xb2],"%s ret=%d\n","geni_i2c_resume_early",1);
    arg1_00 = *piVar1;
    if (arg1_00 != 0) {
        sym.i2c_trace_log(arg1_00,0x8001a61,0x8000dfc,1);
    }
    return 0;
}


// ===== sym.geni_i2c_runtime_resume @ 0x0800718c (size 1044) =====

uchar * sym.geni_i2c_runtime_resume(int64_t arg1)

{
    code *pcVar1;
    uint32_t uVar2;
    int64_t iVar3;
    char *pcVar4;
    int iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *arg1_00;
    uchar *puVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    arg1_00 = *(arg1 + 0x98);
    if (arg1_00[0xb2] == 0) {
        uStack_40 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        iVar3 = (*arg1_00)[0xe];
        if (iVar3 == 0) {
            iVar3 = **arg1_00;
        }
        snprintf(&uStack_50,0x14,0x8000a15,iVar3);
        iVar3 = ipc_log_context_create(2,&uStack_50,0);
        arg1_00[0xb2] = iVar3;
        if (arg1_00[0xf2] != '\0') goto code_r0x080071c8;
code_r0x08007274:
        if (*(arg1_00 + 0x797) == '\0') {
            uVar2 = geni_icc_enable(arg1_00 + 0xa1);
            if (uVar2 == 0) {
                uVar2 = geni_icc_set_bw(arg1_00 + 0xa1);
                puVar6 = uVar2;
                if (uVar2 == 0) {
                    ipc_log_string(arg1_00[0xb2],"%s: GENI_TO_CORE:%d CPU_TO_GENI:%d GENI_TO_DDR:%d\n",
                                   "geni_i2c_runtime_resume",arg1_00[0xa8],arg1_00[0xaa],arg1_00[0xac]);
                    if (*arg1_00 != 0) {
                        sym.i2c_trace_log(*arg1_00,0x8000ff6,0x8001321,*(arg1_00 + 0xa8));
                    }
                    goto code_r0x0800727c;
                }
                ipc_log_string(arg1_00[0xb2],"%s failing at icc set bw ret=%d\n","geni_i2c_runtime_resume",uVar2);
                if (*arg1_00 == 0) {
                    _printk(0x800193a,"geni_i2c_runtime_resume",uVar2);
                }
                else {
                    _dev_err(*arg1_00,"%s failing at icc set bw ret=%d\n","geni_i2c_runtime_resume",uVar2);
                }
                iVar3 = *arg1_00;
                if (iVar3 == 0) goto code_r0x0800747c;
                pcVar4 = "%s failing at icc set bw ret=%d\n";
            }
            else {
                puVar6 = uVar2;
                ipc_log_string(arg1_00[0xb2],"%s failing at geni icc enable ret=%d\n","geni_i2c_runtime_resume",
                               puVar6);
                iVar3 = *arg1_00;
                if (iVar3 == 0) goto code_r0x0800747c;
                pcVar4 = "%s failing at geni icc enable ret=%d\n";
            }
        }
        else {
code_r0x0800727c:
            if (*(arg1_00 + 0x794) == '\0') {
code_r0x08007384:
                uVar2 = geni_se_resources_on(arg1_00 + 0xa1);
                puVar6 = uVar2;
                if (uVar2 != 0) goto code_r0x0800747c;
                uVar2 = sym.geni_i2c_prepare(arg1_00);
                if (uVar2 != 0) {
                    iVar3 = *arg1_00;
                    pcVar4 = "I2C prepare failed: %d\n";
                    goto code_r0x08007474;
                }
                iVar5 = arg1_00[0xef];
                if (iVar5 == 1) {
                    enable_irq(*(arg1_00 + 0x14));
                    iVar5 = arg1_00[0xef];
                }
                if ((iVar5 != 2) || (uVar2 = sym.geni_i2c_gpi_suspend_resume(arg1_00,0), uVar2 == 0))
                goto code_r0x080072ec;
                puVar6 = uVar2;
                ipc_log_string(arg1_00[0xb2],"%s: failing at geni_i2c_gpi_suspend_resume ret:%d\n",
                               "geni_i2c_runtime_resume",puVar6);
                iVar3 = *arg1_00;
                if (iVar3 == 0) goto code_r0x0800747c;
                pcVar4 = "%s: failing at geni_i2c_gpi_suspend_resume ret:%d\n";
            }
            else {
                iVar3 = arg1_00[0xaf];
                uVar2 = clk_prepare(iVar3);
                if (uVar2 == 0) {
                    uVar2 = clk_enable(iVar3);
                    if (uVar2 == 0) goto code_r0x08007384;
                    clk_unprepare(iVar3);
                }
                puVar6 = uVar2;
                ipc_log_string(arg1_00[0xb2],"%s failing at core clk prepare enable ret=%d\n",
                               "geni_i2c_runtime_resume",puVar6);
                iVar3 = *arg1_00;
                if (iVar3 == 0) goto code_r0x0800747c;
                pcVar4 = "%s failing at core clk prepare enable ret=%d\n";
            }
        }
code_r0x08007370:
        sym.i2c_trace_log(iVar3,pcVar4,0x8001321,puVar6);
    }
    else {
        if (arg1_00[0xf2] == '\0') goto code_r0x08007274;
code_r0x080071c8:
        if (*(arg1_00 + 0x792) == '\0') {
code_r0x080072ec:
            ipc_log_string(arg1_00[0xb2],"%s ret=%d\n","geni_i2c_runtime_resume",0);
            if (*arg1_00 != 0) {
                sym.i2c_trace_log(*arg1_00,0x8001a61,0x8001321,0);
            }
            puVar6 = NULL;
            goto code_r0x0800747c;
        }
        uVar2 = sym.geni_i2c_prepare(arg1_00);
        if (uVar2 == 0) {
            if ((arg1_00[0xef] == 2) && (uVar2 = sym.geni_i2c_gpi_suspend_resume(arg1_00,0), uVar2 != 0)) {
                puVar6 = uVar2;
                ipc_log_string(arg1_00[0xb2],"%s: failing at geni_i2c_gpi_suspend_resume ret: %d\n",
                               "geni_i2c_runtime_resume",puVar6);
                iVar3 = *arg1_00;
                if (iVar3 == 0) goto code_r0x0800747c;
                pcVar4 = "%s: failing at geni_i2c_gpi_suspend_resume ret: %d\n";
            }
            else {
                uVar2 = sym.geni_i2c_lock_bus(arg1_00);
                if (uVar2 == 0) goto code_r0x080072ec;
                puVar6 = uVar2;
                ipc_log_string(arg1_00[0xb2],"%s failed: %d\n","geni_i2c_runtime_resume",puVar6);
                if (*arg1_00 == 0) {
                    _printk(0x8001339,"geni_i2c_runtime_resume",puVar6);
                }
                else {
                    _dev_err(*arg1_00,"%s failed: %d\n","geni_i2c_runtime_resume",puVar6);
                }
                iVar3 = *arg1_00;
                if (iVar3 == 0) goto code_r0x0800747c;
                pcVar4 = "%s failed: %d\n";
            }
            goto code_r0x08007370;
        }
        iVar3 = *arg1_00;
        pcVar4 = "I2C prepare failed:%d\n";
code_r0x08007474:
        puVar6 = uVar2;
        _dev_err(iVar3,pcVar4,puVar6);
    }
code_r0x0800747c:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_38) {
        auVar7 = __stack_chk_fail();
        puVar6 = auVar7._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar6 != NULL) {
            switch(*puVar6) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar6,auVar7._8_8_,0);
                break;
            default:
                return puVar6;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x80075f8);
        (*pcVar1)();
    }
    return puVar6;
}


// ===== sym.__cfi_check_fail @ 0x080075a0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080075e4

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
    //switch table (4 cases) at 0x8001a7f
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80075f8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08007608 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.geni_i2c_probe.ff89956466640c790290520478333855.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x0800763c (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.geni_i2c_probe.ff89956466640c790290520478333855.cfi_jt);
    return;
}

