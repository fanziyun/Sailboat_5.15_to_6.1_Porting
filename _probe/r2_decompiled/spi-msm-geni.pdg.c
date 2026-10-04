// decompiled from spi-msm-geni by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 852) =====

//WARNING: Switch with 1 destination removed at 0x08007f40

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x1c2b0952efa24c7a) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 < -0x57be845bca9148ef) {
                if (arg1 == -0x7d1e1c0bc119c0c5) {
                    pcVar2 = sym.spi_geni_prepare_transfer_hardware.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
                    goto code_r0x080022c4;
                }
                if (arg1 != -0x66d421a09845f9f8) goto code_r0x08007f00;
                pcVar2 = sym.spi_slave_state_show.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
            }
            else {
                if (arg1 == -0x57be845bca9148ef) {
                    if ((pcVar1 + -0x8002410 >> 3 | pcVar1 << 0x3d) < 4) {
                        return;
                    }
                    goto code_r0x08007f00;
                }
                if (arg1 != -0x3987c0e26ee29729) goto code_r0x08007f00;
                pcVar2 = sym.geni_spi_irq.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
            }
        }
        else if (arg1 < -0x1cbbfd76e417bec8) {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.spi_geni_remove.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
                goto code_r0x080022f8;
            }
            if (arg1 != -0x218c0108fde83420) goto code_r0x08007f00;
            pcVar2 = sym.trace_event_raw_init.cfi_jt;
        }
        else if (arg1 == -0x1cbbfd76e417bec8) {
            pcVar2 = sym.spi_geni_transfer_one.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08007f00;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x3b234db729abc920) {
        if (arg1 < 0x2eec8673b37c6729) {
            if (arg1 == 0x1c2b0952efa24c7a) {
                pcVar2 = sym.trace_event_reg.cfi_jt;
            }
            else {
                if (arg1 != 0x1e3d0ffe3d0499e9) goto code_r0x08007f00;
                pcVar2 = sym.spi_slave_state_store.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
            }
        }
        else {
            if (arg1 != 0x2eec8673b37c6729) {
                if (arg1 != 0x345b8f49125c3eda) goto code_r0x08007f00;
                pcVar2 = sym.trace_event_raw_event_spi_log_info.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
code_r0x080022c4:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x08007f00;
            }
            pcVar2 = sym.__traceiter_spi_log_info.cfi_jt;
        }
    }
    else if (arg1 < 0x4c550309df1cf4c1) {
        if (arg1 == 0x3b234db729abc920) {
            pcVar2 = sym.spi_geni_prepare_message.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
            goto code_r0x080022f8;
        }
        if (arg1 != 0x3dd1a39e589289fe) goto code_r0x08007f00;
        pcVar2 = sym.trace_raw_output_spi_log_info.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
    }
    else {
        if (arg1 == 0x4c550309df1cf4c1) {
            pcVar2 = sym.spi_gsi_rx_callback.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
code_r0x080022f8:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08007f00;
        }
        if (arg1 == 0x5d7e5e3785540c6e) {
            pcVar2 = sym.spi_gsi_ch_cb.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08007f00;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08007f00:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8007f54);
    (*pcVar1)();
}


// ===== sym.spi_geni_transfer_one.42938a07f9c58b1377b5ae1566af1187.cfi_jt @ 0x08002360 (size 8) =====

uint64_t sym.spi_geni_transfer_one.42938a07f9c58b1377b5ae1566af1187.cfi_jt
                   (uchar param_1 [16],uchar param_2 [16],int64_t param_3,int64_t param_4,int64_t *param_5,
                   int64_t *param_6)

{
    bool bVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    char cVar5;
    uint16_t uVar6;
    bool bVar7;
    uint32_t uVar8;
    int iVar9;
    uint uVar10;
    uint32_t uVar11;
    int64_t iVar12;
    ulong uVar13;
    ulong uVar14;
    char *pcVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    uint32_t *puVar18;
    int64_t iVar19;
    uint32_t uVar20;
    uint64_t uVar21;
    int64_t iVar22;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar23;
    int64_t *piVar24;
    int64_t *piVar25;
    code *pcVar26;
    uint64_t *puVar27;
    ulong unaff_x30;
    uint32_t uStack_74;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    piVar23 = *(param_3 + 0x98);
    if ((*param_5 == 0) && (param_5[1] == 0)) {
        iVar12 = piVar23[0x15];
        pcVar15 = "Invalid xfer both tx rx are NULL\n";
    }
    else {
        iVar12 = piVar23[0x15];
        if (param_5[2] != 0) {
            if (*(iVar12 + 0x20c) == 2) {
                ipc_log_string(piVar23[0x37],"%s: device is PM suspended\n","spi_geni_transfer_one");
                if (piVar23[0x15] == 0) {
                    _printk(0x800136d,"spi_geni_transfer_one");
                    iVar12 = piVar23[0x15];
                }
                else {
                    _dev_err(piVar23[0x15],"%s: device is PM suspended\n","spi_geni_transfer_one");
                    iVar12 = piVar23[0x15];
                }
                if (iVar12 == 0) {
                    piVar25 = 0xfffffff3;
                }
                else {
                    sym.spi_trace_log(iVar12,0x800192f,0x8000c8d,param_6);
                    piVar25 = 0xfffffff3;
                }
                goto code_r0x08005b84;
            }
            uVar11 = 0;
            if (*(param_5 + 0xb) != 0) {
                uVar11 = (param_5[2] * 8000) / *(param_5 + 0xb);
            }
            uVar21 = *(piVar23 + 0x1d4);
            if ((*(piVar23 + 0x1d4) == 0) && (uVar21 = 0xfa, *(param_3 + 0x3bf) != '\0')) {
                uVar21 = 0x32;
            }
            uVar21 = uVar21 + uVar11;
            ipc_log_string(piVar23[0x37],"current xfer_timeout:%lu ms.\n",uVar21);
            if (piVar23[0x15] != 0) {
                sym.spi_trace_log(piVar23[0x15],0x8000f4a,uVar21,param_6);
            }
            uVar13 = __msecs_to_jiffies(uVar21 & 0xffffffff);
            if (*(piVar23 + 0x1a4) != 3) {
                *(piVar23 + 0x1c) = 0;
                uVar6 = *(param_4 + 0x3a8);
                uVar11 = sym.readl_relaxed(piVar23[0x13] + 0x25c);
                uVar21 = *(param_5 + 0x49);
                if (*(piVar23 + 0x19) != *(param_5 + 0x49)) {
                    sym.spi_setup_word_len(piVar23,uVar6,uVar21);
                    uVar21 = *(param_5 + 0x49);
                    *(piVar23 + 0x19) = *(param_5 + 0x49);
                }
                if (*(param_5 + 0xb) == *(piVar23 + 0xc4)) {
code_r0x080049c0:
                    *(piVar23 + 0xcc) = 0;
                    uVar8 = 3;
                    if (param_5[1] == 0) {
                        uVar8 = 1;
                    }
                    uVar16 = (param_5[1] != 0) << 1;
                    if (*param_5 != 0) {
                        uVar16 = uVar8;
                    }
                    uVar8 = uVar11 & 0xfffffffe;
                    if (*(param_3 + 0x3bf) != '\0') {
                        uVar8 = uVar11;
                    }
                    uVar11 = uVar21;
                    if ((uVar21 & 3) == 0) {
                        uVar17 = 0;
                        if (uVar11 != 0) {
                            uVar17 = (param_5[2] << 3) / uVar11;
                        }
                    }
                    else {
                        uVar17 = uVar11 + 7;
                        if (-1 < uVar11) {
                            uVar17 = uVar11;
                        }
                        uVar11 = (uVar17 >> 3) + 1;
                        uVar17 = 0;
                        if (uVar11 != 0) {
                            uVar17 = *(param_5 + 2) / uVar11;
                        }
                    }
                    uVar17 = uVar17 & 0xffffff;
                    if ((*(param_5 + 9) >> 1 & 1) == 0) {
                        uVar11 = (param_5[0xf] != *(param_3 + 0x4f0)) << 2;
                    }
                    else {
                        uVar11 = 0;
                    }
                    piVar23[0x1b] = param_5;
                    if ((uVar16 & 1) == 0) {
                        if (uVar16 >> 1 != 0) goto code_r0x08004b6c;
code_r0x08004b18:
                        cVar5 = *(param_3 + 0x3bf);
                    }
                    else {
                        *(piVar23 + 0xcc) = param_5[2];
                        sym.writel_relaxed(uVar17,piVar23[0x13] + 0x26c);
                        if (uVar16 >> 1 == 0) goto code_r0x08004b18;
code_r0x08004b6c:
                        sym.writel_relaxed(uVar17,piVar23[0x13] + 0x270);
                        *(piVar23 + 0x1a) = param_5[2];
                        cVar5 = *(param_3 + 0x3bf);
                    }
                    if (cVar5 != '\0') {
                        *(piVar23 + 0x1a4) = 2;
                    }
                    if (*(piVar23 + 0x1cd) == '\0') {
                        uVar20 = 0;
                        if (piVar23[0x19] != 0) {
                            uVar20 = (piVar23[0x17] * *(piVar23 + 0xb4)) / piVar23[0x19];
                        }
                        if (uVar17 <= uVar20) goto code_r0x08004b90;
                        uVar10 = *(piVar23 + 0x1a4);
                    }
                    else {
code_r0x08004b90:
                        uVar10 = 1;
                        *(piVar23 + 0x1a4) = 1;
                    }
                    geni_se_select_mode(piVar23,uVar10);
                    if (*(param_3 + 0x3bf) == '\0') {
                        sym.writel_relaxed(uVar8,piVar23[0x13] + 0x25c);
                    }
                    sym.writel(uVar11 | uVar16 << 0x1b,*piVar23 + 0x600);
                    param_6 = uVar17;
                    ipc_log_string(piVar23[0x37],"%s: trans_len %d xferlen%d tx_cfg 0x%x cmd 0x%x cs%d mode%d\n",
                                   "setup_fifo_xfer",param_6,param_5[2],uVar8,uVar16,*(param_5 + 9) >> 1 & 1,
                                   *(piVar23 + 0x1a4));
                    if (piVar23[0x15] != 0) {
                        param_6 = uVar17;
                        sym.spi_trace_log(piVar23[0x15],0x80019e4,0x8000772,param_6);
                    }
                    if ((uVar16 >> 1 == 0) || (*(piVar23 + 0x1a4) != 2)) {
code_r0x08004c78:
                        if ((uVar16 & 1) != 0) {
                            if (*(piVar23 + 0x1a4) == 2) {
                                piVar24 = param_5 + 3;
                                param_6 = piVar24;
                                piVar25 = geni_se_tx_dma_prep(piVar23,*param_5,param_5[2]);
                                iVar9 = piVar25;
                                if ((iVar9 != 0) || (*param_5 == 0)) {
                                    ipc_log_string(piVar23[0x37],"Failed to setup tx dma %d\n",piVar25 & 0xffffffff);
                                    if (piVar23[0x15] == 0) {
                                        _printk(0x80011ca,piVar25 & 0xffffffff);
                                    }
                                    else {
                                        _dev_err(piVar23[0x15],"Failed to setup tx dma %d\n",piVar25 & 0xffffffff);
                                    }
                                    iVar12 = piVar23[0x15];
                                    if (iVar12 != 0) {
                                        pcVar15 = "Failed to setup tx dma %d\n";
                                        goto code_r0x08005a40;
                                    }
                                    *piVar24 = 0;
                                    goto joined_r0x08005d28;
                                }
                            }
                            else if (*(piVar23 + 0x1a4) == 1) {
                                sym.writel_relaxed(*(piVar23 + 0xbc),piVar23[0x13] + 0x80c);
                            }
                        }
                        DataSynchronizationBarrier(3,3,0);
                    }
                    else {
                        piVar24 = param_5 + 4;
                        param_6 = piVar24;
                        piVar25 = geni_se_rx_dma_prep(piVar23,param_5[1],param_5[2]);
                        iVar9 = piVar25;
                        if ((iVar9 == 0) && (param_5[1] != 0)) goto code_r0x08004c78;
                        ipc_log_string(piVar23[0x37],"Failed to setup Rx dma %d\n",piVar25 & 0xffffffff);
                        if (piVar23[0x15] == 0) {
                            _printk(0x80008ba,piVar25 & 0xffffffff);
                        }
                        else {
                            _dev_err(piVar23[0x15],"Failed to setup Rx dma %d\n",piVar25 & 0xffffffff);
                        }
                        iVar12 = piVar23[0x15];
                        if (iVar12 == 0) {
                            *piVar24 = 0;
                        }
                        else {
                            pcVar15 = "Failed to setup Rx dma %d\n";
code_r0x08005a40:
                            sym.spi_trace_log(iVar12,pcVar15,piVar25 & 0xffffffff,param_6);
                            *piVar24 = 0;
                            iVar9 = piVar25;
                        }
joined_r0x08005d28:
                        if (iVar9 != 0) goto code_r0x08005664;
                    }
                    if (*(param_3 + 0x3bf) != '\0') {
                        *(piVar23 + 0x1cf) = 1;
                    }
                    iVar12 = wait_for_completion_timeout(piVar23 + 0x1c,uVar13);
                    if (*(param_3 + 0x3bf) != '\0') {
                        *(piVar23 + 0x1cf) = 0;
                    }
                    if (iVar12 != 0) {
                        if (*(piVar23 + 0x1a4) == 2) {
                            if (*param_5 != 0) {
                                geni_se_tx_dma_unprep(piVar23,param_5[3],param_5[2]);
                            }
                            if (param_5[1] != 0) {
                                geni_se_rx_dma_unprep(piVar23,param_5[4],param_5[2]);
                            }
                        }
code_r0x08005b80:
                        piVar25 = NULL;
                        goto code_r0x08005b84;
                    }
                    ipc_log_string(piVar23[0x37],"Xfer[len %d tx %pK rx %pK n %d] timed out.\n",param_5[2],*param_5,
                                   param_5[1],*(param_5 + 0x49));
                    param_6 = *param_5;
                    piVar25 = param_5[1];
                    if (piVar23[0x15] == 0) {
                        _printk(0x80009ce,param_5[2],param_6,piVar25,*(param_5 + 0x49));
                        param_6 = piVar25;
                    }
                    else {
                        _dev_err(piVar23[0x15],"Xfer[len %d tx %pK rx %pK n %d] timed out.\n");
                    }
                    if (piVar23[0x15] != 0) {
                        param_6 = *param_5;
                        sym.spi_trace_log(piVar23[0x15],0x8001865,*(param_5 + 2),param_6);
                    }
                    piVar25 = 0xffffff92;
                }
                else {
                    uStack_70 = 0;
                    uVar8 = sym.get_spi_clk_cfg(*(param_5 + 0xb),piVar23,param_2,&uStack_70);
                    if (uVar8 == 0) {
                        uVar8 = uStack_70 << 4;
                        *(piVar23 + 0xc4) = param_5[0xb];
                        sym.writel_relaxed(uStack_70._4_4_ & 7,piVar23[0x13] + 0x7c);
                        sym.writel_relaxed(uVar8 | 1,piVar23[0x13] + 0x48);
                        uVar21 = *(piVar23 + 0x19);
                        goto code_r0x080049c0;
                    }
                    piVar25 = uVar8;
                    param_6 = piVar25;
                    _dev_err(piVar23[0x15],"%s:Err setting clks:%d\n","setup_fifo_xfer");
code_r0x08005664:
                    ipc_log_string(piVar23[0x37],"setup_fifo_xfer failed: %d\n",piVar25 & 0xffffffff);
                    if (piVar23[0x15] == 0) {
                        _printk(0x8001733,piVar25 & 0xffffffff);
                    }
                    else {
                        _dev_err(piVar23[0x15],"setup_fifo_xfer failed: %d\n",piVar25 & 0xffffffff);
                    }
                    if (piVar23[0x15] != 0) {
                        sym.spi_trace_log(piVar23[0x15],0x8000756,piVar25 & 0xffffffff,param_6);
                    }
                }
                piVar23[0x1b] = 0;
                piVar23 = *(param_3 + 0x98);
                sym.geni_spi_se_dump_dbg_regs(piVar23,piVar23[0x13],piVar23[0x37]);
                if (*(piVar23 + 0x1a4) == 1) {
                    sym.writel_relaxed(0,piVar23[0x13] + 0x80c);
                }
                if (*(param_3 + 0x3bf) == '\0') {
                    piVar24 = piVar23 + 0x1c;
                    *piVar24 = 0;
                    if (param_5[1] != 0) {
                        uVar11 = sym.readl_relaxed(piVar23[0x13] + 0x804);
                        for (uVar11 = uVar11 & 0x1ffffff; uVar11 != 0; uVar11 = uVar11 - 1) {
                            sym.readl_relaxed(piVar23[0x13] + 0x780);
                        }
                    }
                    sym.writel_relaxed(4,*piVar23 + 0x604);
                    DataSynchronizationBarrier(3,3,0);
                    iVar12 = wait_for_completion_timeout(piVar24,0xfa);
                    if (iVar12 == 0) {
                        *(piVar23 + 0x1c) = 0;
                        sym.writel_relaxed(2,*piVar23 + 0x604);
                        DataSynchronizationBarrier(3,3,0);
                        iVar12 = wait_for_completion_timeout(piVar24,0xfa);
                        if (iVar12 == 0) {
                            _dev_err(piVar23[0x15],"Failed to cancel/abort m_cmd\n");
                        }
                    }
                }
                if (*(piVar23 + 0x1a4) == 2) {
                    if ((*param_5 != 0) && (param_5[3] != 0)) {
                        *(piVar23 + 0x1c) = 0;
                        sym.writel_relaxed(1,piVar23[0x13] + 0xc58);
                        iVar12 = wait_for_completion_timeout(piVar23 + 0x1c,0xfa);
                        if (iVar12 == 0) {
                            _dev_err(piVar23[0x15],"DMA TX RESET failed\n");
                        }
                        geni_se_tx_dma_unprep(piVar23,param_5[3],param_5[2]);
                    }
                    if ((param_5[1] != 0) && (param_5[4] != 0)) {
                        *(piVar23 + 0x1c) = 0;
                        sym.writel_relaxed(1,piVar23[0x13] + 0xd58);
                        iVar12 = wait_for_completion_timeout(piVar23 + 0x1c,0xfa);
                        if (iVar12 == 0) {
                            _dev_err(piVar23[0x15],"DMA RX RESET failed\n");
                        }
                        geni_se_rx_dma_unprep(piVar23,param_5[4],param_5[2]);
                    }
                }
                if ((*(param_3 + 0x3bf) != '\0') && (*(piVar23 + 0x1c5) == '\0')) {
                    __pm_runtime_suspend(piVar23[0x15],4);
                }
                goto code_r0x08005b84;
            }
            piVar23[0x35] = 0;
            iVar12 = piVar23[0x22];
            *(piVar23 + 0x36) = 0;
            *(piVar23 + 0x34) = 0;
            *(piVar23 + 0x2c) = 0;
            *(piVar23 + 0x30) = 0;
            puVar18 = *(param_4 + 0x3b8);
            if (puVar18 == NULL) {
                uVar11 = 0;
                uVar8 = 0;
            }
            else {
                uVar11 = *puVar18;
                uVar8 = puVar18[1];
            }
            uVar4 = *(param_5 + 0x49);
            uVar16 = uVar4;
            if ((*(piVar23 + 0x19) == uVar4) && (param_5[0xb] == *(piVar23 + 0xc4))) {
                piVar25 = NULL;
                uVar11 = 0;
                if ((uVar4 & 3) == 0) {
code_r0x08004a5c:
                    uVar17 = param_5[2] << 3;
                }
                else {
code_r0x08004e5c:
                    uVar8 = uVar16 + 7;
                    if (-1 < uVar16) {
                        uVar8 = uVar16;
                    }
                    uVar17 = *(param_5 + 2);
                    uVar16 = (uVar8 >> 3) + 1;
                }
                uVar8 = 0;
                if (uVar16 != 0) {
                    uVar8 = uVar17 / uVar16;
                }
                bVar7 = param_5[1] == 0;
                uVar16 = uVar8;
                if (*param_5 == 0) {
                    if (param_5[1] == 0) {
                        bVar1 = false;
                        uVar17 = 0;
                        uStack_74 = 0;
                        bVar7 = true;
                    }
                    else {
                        uVar11 = uVar11 + 1;
                        uVar17 = 1;
                        bVar7 = false;
                        uStack_74 = 2;
                        bVar1 = true;
                    }
                }
                else {
                    bVar1 = !bVar7;
                    uVar17 = 0;
                    uVar11 = uVar11 | 2;
                    uVar16 = 0;
                    if (!bVar7) {
                        uVar16 = uVar8;
                    }
                    uStack_74 = 3;
                    if (bVar7) {
                        uStack_74 = 1;
                    }
                }
                puVar27 = iVar12 + 0x60;
                if ((*(param_5 + 9) >> 1 & 1) == 0) {
                    iVar9 = (param_5[0xf] != *(param_3 + 0x4f0)) << 2;
                }
                else {
                    iVar9 = 0;
                }
                puVar18 = piVar23[0x22] + piVar23[0x36] * 0x158 + 0x30;
                if ((puVar18 != NULL) && (puVar18 < 0xfffffffffffff001)) {
                    uVar4 = *(param_4 + 0x3a4);
                    iVar19 = piVar23[0x22] + piVar23[0x36] * 0x158;
                    uVar8 = 0x200000;
                    if ((uStack_74 & 2) != 0) {
                        uVar8 = 0x200800;
                    }
                    uVar20 = 0x100;
                    if (uVar17 == 0) {
                        uVar20 = 0;
                    }
                    *(iVar19 + 0x34) = 0;
                    *(iVar19 + 0x38) = uVar16;
                    *puVar18 = uStack_74 | uVar4 << 8 | iVar9 << 0x18;
                    *(iVar19 + 0x3c) = uVar20 | uVar17 ^ 1 | uVar8;
                    param_6 = uVar16;
                    ipc_log_string(piVar23[0x37],"%s: rx len %d flags 0x%x cs %d cmd %d eot %d eob %d chain %d\n",
                                   "setup_go_tre",param_6,iVar9,uVar4,uStack_74,0,uVar17,uVar17 ^ 1);
                    if (piVar23[0x15] != 0) {
                        param_6 = uVar16;
                        sym.spi_trace_log(piVar23[0x15],0x8000e65,0x8000b82,param_6);
                    }
                }
                sg_init_table(puVar27,uVar11);
                if (!bVar7) {
                    sg_init_table(iVar12 + 0xc0,1);
                }
                if (piVar25 != NULL) {
                    puVar27 = iVar12 + 0x80;
                    *(iVar12 + 0x60) =
                         (((piVar25 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | *(iVar12 + 0x60) & 3) -
                         0x200000000;
                    *(iVar12 + 0x68) = piVar25 & 0xfff;
                    *(iVar12 + 0x6c) = 0x10;
                }
                *(puVar27 + 1) = puVar18 & 0xfff;
                *(puVar27 + 0xc) = 0x10;
                *puVar27 = ((puVar18 * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | *puVar27 & 3) -
                           0x200000000;
                *(piVar23[0x22] + piVar23[0x36] * 0x158 + 0x148) = param_3;
                *(piVar23[0x22] + piVar23[0x36] * 0x158 + 0x150) = param_5;
                if (uStack_74 >> 1 == 0) {
code_r0x08005240:
                    if ((uStack_74 & 1) != 0) {
                        piVar25 = piVar23[0x22] + piVar23[0x36] * 0x158 + 0x40;
                        if ((piVar25 == NULL) || (0xfffffffffffff000 < piVar25)) {
                            _dev_err(piVar23[0x15],"Err setting up tx tre\n");
                            goto code_r0x08005a9c;
                        }
                        iVar19 = param_5[3];
                        uVar8 = *(param_5 + 2);
                        iVar12 = piVar23[0x22] + piVar23[0x36] * 0x158;
                        *piVar25 = iVar19;
                        *(iVar12 + 0x44) = iVar19 >> 0x20;
                        *(iVar12 + 0x48) = uVar8 & 0xffffff;
                        *(iVar12 + 0x4c) = 0x100200;
                        puVar27[4] = ((piVar25 * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | puVar27[4] & 3)
                                     - 0x200000000;
                        *(puVar27 + 5) = piVar25 & 0xfff;
                        *(puVar27 + 0x2c) = 0x10;
                        *(piVar23 + 0x35) = piVar23[0x35] + 1;
                    }
                    piVar25 = piVar23[0x24];
                    iVar12 = piVar23[0x22];
                    iVar19 = piVar23[0x36];
                    if (((piVar25 == NULL) || (*piVar25 == 0)) || (pcVar26 = *(*piVar25 + 0x138), pcVar26 == NULL)) {
                        uVar14 = 0;
                    }
                    else {
                        __cfi_slowpath_diag(0x3675599da7c39b65,pcVar26,0x8000450);
                        param_6 = 0x1;
                        uVar14 = (*pcVar26)(piVar25,iVar12 + iVar19 * 0x158 + 0x60,uVar11,1,3,0);
                        iVar12 = piVar23[0x22];
                        iVar19 = piVar23[0x36];
                    }
                    *(iVar12 + iVar19 * 0x158 + 0x138) = uVar14;
                    uVar21 = *(piVar23[0x22] + piVar23[0x36] * 0x158 + 0x138);
                    if ((uVar21 != 0) && (uVar21 < 0xfffffffffffff001)) {
                        *(uVar21 + 0x28) = sym.spi_gsi_tx_callback.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
                        iVar12 = piVar23[0x22] + piVar23[0x36] * 0x158;
                        *(*(iVar12 + 0x138) + 0x38) = iVar12 + 0xe8;
                        iVar12 = piVar23[0x22] + piVar23[0x36] * 0x158;
                        *(iVar12 + 0x108) = iVar12 + 0x148;
                        iVar12 = *(piVar23[0x22] + piVar23[0x36] * 0x158 + 0x138);
                        pcVar26 = *(iVar12 + 0x18);
                        __cfi_slowpath_diag(0xc97b94b4f4a7b659,pcVar26,0x8000470);
                        uVar10 = (*pcVar26)(iVar12);
                        *(piVar23[0x22] + piVar23[0x36] * 0x158 + 0xe0) = uVar10;
                        uVar11 = *(piVar23[0x22] + piVar23[0x36] * 0x158 + 0xe0);
                        param_6 = uVar11;
                        if (-1 < uVar11) {
                            if (uStack_74 >> 1 == 0) {
                                piVar25 = piVar23[0x24];
                            }
                            else {
                                iVar12 = *(piVar23[0x22] + piVar23[0x36] * 0x158 + 0x140);
                                pcVar26 = *(iVar12 + 0x18);
                                __cfi_slowpath_diag(0xc97b94b4f4a7b659,pcVar26,0x8000470);
                                uVar10 = (*pcVar26)(iVar12);
                                *(piVar23[0x22] + piVar23[0x36] * 0x158 + 0xe4) = uVar10;
                                uVar11 = *(piVar23[0x22] + piVar23[0x36] * 0x158 + 0xe4);
                                param_6 = uVar11;
                                if (uVar11 < 0) {
                                    _dev_err(piVar23[0x15],"%s: dmaengine_submit failed (%d)\n","setup_gsi_xfer");
                                    piVar25 = piVar23[0x25];
                                    goto code_r0x08005758;
                                }
                                piVar25 = piVar23[0x24];
                                pcVar26 = *(*piVar25 + 400);
                                __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar26,0x8000490);
                                (*pcVar26)(piVar25);
                                piVar25 = piVar23[0x25];
                            }
                            pcVar26 = *(*piVar25 + 400);
                            __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar26,0x8000490);
                            (*pcVar26)(piVar25);
                            iVar9 = piVar23[0x36] + 1;
                            *(piVar23 + 0x36) = iVar9;
                            goto joined_r0x08005aa8;
                        }
                        _dev_err(piVar23[0x15],"%s: dmaengine_submit failed (%d)\n","setup_gsi_xfer");
                        piVar25 = piVar23[0x24];
code_r0x08005758:
                        pcVar26 = *(*piVar25 + 0x178);
                        if (pcVar26 != NULL) {
                            __cfi_slowpath_diag(0x146502001565ea5c,pcVar26,0x80004b0);
                            (*pcVar26)(piVar25);
                        }
                        piVar25 = 0xffffffea;
                        goto code_r0x08005790;
                    }
                    iVar12 = piVar23[0x15];
                    pcVar15 = "Err setting up tx desc\n";
                }
                else {
                    piVar25 = piVar23[0x22] + piVar23[0x36] * 0x158 + 0x50;
                    if ((piVar25 == NULL) || (0xfffffffffffff000 < piVar25)) {
                        _dev_err(piVar23[0x15],"Err setting up rx tre\n");
                        goto code_r0x08005a9c;
                    }
                    iVar22 = param_5[4];
                    uVar8 = *(param_5 + 2);
                    iVar19 = piVar23[0x22] + piVar23[0x36] * 0x158;
                    *piVar25 = iVar22;
                    *(iVar19 + 0x54) = iVar22 >> 0x20;
                    *(iVar19 + 0x58) = uVar8 & 0xffffff;
                    *(iVar19 + 0x5c) = 0x100000;
                    *(iVar12 + 200) = piVar25 & 0xfff;
                    *(iVar12 + 0xcc) = 0x10;
                    *(iVar12 + 0xc0) =
                         ((piVar25 * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | *(iVar12 + 0xc0) & 3) -
                         0x200000000;
                    piVar25 = piVar23[0x25];
                    iVar12 = piVar23[0x22];
                    iVar19 = piVar23[0x36];
                    if (((piVar25 == NULL) || (*piVar25 == 0)) || (pcVar26 = *(*piVar25 + 0x138), pcVar26 == NULL)) {
                        uVar14 = 0;
                    }
                    else {
                        __cfi_slowpath_diag(0x3675599da7c39b65,pcVar26,0x8000450);
                        param_6 = 0x2;
                        uVar14 = (*pcVar26)(piVar25,iVar12 + iVar19 * 0x158 + 0xc0,bVar1,2,3,0);
                        iVar12 = piVar23[0x22];
                        iVar19 = piVar23[0x36];
                    }
                    *(iVar12 + iVar19 * 0x158 + 0x140) = uVar14;
                    uVar21 = *(piVar23[0x22] + piVar23[0x36] * 0x158 + 0x140);
                    if ((uVar21 != 0) && (uVar21 < 0xfffffffffffff001)) {
                        *(uVar21 + 0x28) = sym.spi_gsi_rx_callback.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
                        iVar12 = piVar23[0x22] + piVar23[0x36] * 0x158;
                        *(*(iVar12 + 0x140) + 0x38) = iVar12 + 0x110;
                        iVar12 = piVar23[0x22] + piVar23[0x36] * 0x158;
                        *(iVar12 + 0x130) = iVar12 + 0x148;
                        *(piVar23 + 0x1ac) = *(piVar23 + 0x1ac) + 1;
                        goto code_r0x08005240;
                    }
                    iVar12 = piVar23[0x15];
                    pcVar15 = "Err setting up rx desc\n";
                }
                _dev_err(iVar12,pcVar15);
                piVar25 = 0xfffffffb;
code_r0x08005790:
                ipc_log_string(piVar23[0x37],"setup_gsi_xfer failed: %d\n",piVar25 & 0xffffffff);
                if (piVar23[0x15] == 0) {
                    _printk(0x8000c20,piVar25 & 0xffffffff);
                }
                else {
                    _dev_err(piVar23[0x15],"setup_gsi_xfer failed: %d\n",piVar25 & 0xffffffff);
                }
                if (piVar23[0x15] != 0) {
                    sym.spi_trace_log(piVar23[0x15],0x8000664,piVar25 & 0xffffffff,param_6);
                }
                piVar23[0x1b] = 0;
            }
            else {
                *(piVar23 + 0x19) = uVar4;
                piVar25 = iVar12 + 0x20;
                uVar16 = *(param_5 + 0xb);
                uStack_70 = 0;
                *(piVar23 + 0xc4) = uVar16;
                uVar17 = *(param_4 + 0x3a8);
                if ((piVar25 != NULL) && (piVar25 < 0xfffffffffffff001)) {
                    uVar4 = *(param_5 + 0x49);
                    if (*(piVar23 + 0x1c3) == '\0') {
                        uVar16 = sym.get_spi_clk_cfg(uVar16,piVar23,param_2,&uStack_70 + 4);
                        if (uVar16 != 0) {
                            param_6 = uVar16;
                            _dev_err(piVar23[0x15],"%s:Err setting clks:%d\n","setup_config0_tre");
                            piVar25 = uVar16;
                            goto joined_r0x08004acc;
                        }
                        uVar16 = uStack_70._4_4_;
                    }
                    else {
                        uVar10 = sym.readl_relaxed(piVar23[0x13] + 0x7c);
                        uStack_70 = CONCAT44(uStack_70._4_4_,uVar10);
                        uVar16 = sym.readl_relaxed(piVar23[0x13] + 0x48);
                        uStack_70 = CONCAT44(uVar16 >> 4,uStack_70) & 0xfffffffffff;
                        uVar16 = uVar16 >> 4 & 0xfff;
                    }
                    uVar20 = (uVar17 & 2) << 4;
                    uVar2 = uVar4 - 4 & 0xff;
                    uVar17 = uVar17 >> 5 & 1 | (uVar17 & 1) << 4;
                    uVar3 = uVar20 | uVar17;
                    piVar24 = uVar11;
                    *(iVar12 + 0x20) = uVar2 | (uVar20 | uVar17) << 8 | 0x3000000;
                    *(iVar12 + 0x24) = uVar8 | uVar11 << 8;
                    *(iVar12 + 0x28) = uVar16 | uStack_70 << 0x10;
                    *(iVar12 + 0x2c) = 0x220001;
                    ipc_log_string(piVar23[0x37],"%s: flags 0x%x word %d pack %d idx %d div %d\n","setup_config0_tre"
                                   ,uVar3,uVar2,3,uStack_70 & 0xffffffff,uVar16);
                    if (piVar23[0x15] != 0) {
                        sym.spi_trace_log(piVar23[0x15],0x800194b,0x80018a6,uVar3);
                    }
                    param_6 = piVar24;
                    ipc_log_string(piVar23[0x37],"%s: cs_clk_delay %d inter_words_delay %d\n","setup_config0_tre",
                                   piVar24,uVar8);
                    if (piVar23[0x15] != 0) {
                        sym.spi_trace_log(piVar23[0x15],0x8001979,0x80018a6,piVar24);
                        param_6 = piVar24;
                    }
                }
joined_r0x08004acc:
                if ((piVar25 != NULL) && (piVar25 < 0xfffffffffffff001)) {
                    uVar16 = *(piVar23 + 0x19);
                    uVar11 = 1;
                    if ((uVar16 & 3) != 0) goto code_r0x08004e5c;
                    goto code_r0x08004a5c;
                }
                param_6 = NULL;
                _dev_err(piVar23[0x15],"%s:Err setting c0tre:%d\n","setup_gsi_xfer");
code_r0x08005a9c:
                if (piVar25 != 0) goto code_r0x08005790;
                iVar9 = piVar23[0x36];
joined_r0x08005aa8:
                if ((iVar9 < 8) && (param_5[0xf] != *(param_3 + 0x4f0))) goto code_r0x08005b80;
                if (0 < piVar23[0x35]) {
                    uVar21 = 0;
                    do {
                        iVar12 = wait_for_completion_timeout(piVar23 + 0x2c,uVar13);
                        if (iVar12 == 0) {
                            param_6 = NULL;
                            ipc_log_string(piVar23[0x37],"Tx[%d] timeout%lu\n",uVar21);
                            if (piVar23[0x15] == 0) {
                                _printk(0x8001751,uVar21,0);
                            }
                            else {
                                param_6 = NULL;
                                _dev_err(piVar23[0x15],"Tx[%d] timeout%lu\n",uVar21);
                            }
                            iVar12 = piVar23[0x15];
                            if (iVar12 == 0) goto code_r0x08005d18;
                            pcVar15 = "Tx[%d] timeout%lu\n";
                            goto code_r0x08005d0c;
                        }
                        uVar11 = uVar21 + 1;
                        uVar21 = uVar11;
                    } while (uVar11 < piVar23[0x35]);
                }
                if (0 < *(piVar23 + 0x1ac)) {
                    uVar21 = 0;
code_r0x08005af4:
                    iVar12 = wait_for_completion_timeout(piVar23 + 0x30,uVar13);
                    if (iVar12 != 0) goto code_r0x08005b04;
                    param_6 = NULL;
                    ipc_log_string(piVar23[0x37],"Rx[%d] timeout%lu\n",uVar21);
                    if (piVar23[0x15] == 0) {
                        _printk(0x8001891,uVar21,0);
                    }
                    else {
                        param_6 = NULL;
                        _dev_err(piVar23[0x15],"Rx[%d] timeout%lu\n",uVar21);
                    }
                    iVar12 = piVar23[0x15];
                    if (iVar12 != 0) {
                        pcVar15 = "Rx[%d] timeout%lu\n";
code_r0x08005d0c:
                        param_6 = NULL;
                        sym.spi_trace_log(iVar12,pcVar15,uVar21,0);
                    }
code_r0x08005d18:
                    piVar25 = 0xffffff92;
                    goto code_r0x08005b24;
                }
code_r0x08005b14:
                if (piVar23[0x34] == '\0') goto code_r0x08005b80;
                piVar25 = 0xfffffffb;
                *(piVar23 + 0x34) = 0;
            }
code_r0x08005b24:
            iVar12 = piVar23[0x37];
            sym.geni_spi_se_dump_dbg_regs(piVar23,piVar23[0x13],iVar12);
            piVar24 = piVar23[0x24];
            if (*(piVar23 + 0x1c3) == '\0') {
                pcVar26 = *(*piVar24 + 0x178);
                if (pcVar26 != NULL) {
                    __cfi_slowpath_diag(0x146502001565ea5c,pcVar26,0x80004b0);
                    (*pcVar26)(piVar24);
                }
            }
            else {
                pcVar26 = *(*piVar24 + 0x168);
                if (pcVar26 == NULL) {
                    piVar25 = 0xffffffda;
                }
                else {
                    iVar12 = 0x80004d0;
                    __cfi_slowpath_diag(0x146502001565ea5c,pcVar26);
                    uVar21 = (*pcVar26)(piVar24);
                    piVar25 = uVar21 & 0xffffffff;
                    if (uVar21 == 0) goto code_r0x08005b84;
                }
                *(piVar23 + 0x1cc) = 1;
                ipc_log_string(piVar23[0x37],"Channel cancel failed\n");
                if (piVar23[0x15] == 0) {
                    _printk(0x80005a0);
                }
                else {
                    _dev_err(piVar23[0x15],"Channel cancel failed\n");
                }
                if (piVar23[0x15] != 0) {
                    sym.spi_trace_log(piVar23[0x15],0x800138b,iVar12,param_6);
                }
            }
            goto code_r0x08005b84;
        }
        pcVar15 = "Zero length transfer\n";
    }
    _dev_err(iVar12,pcVar15);
    piVar25 = 0xffffffea;
code_r0x08005b84:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) != iStack_68) {
        iVar12 = __stack_chk_fail();
        *extraout_x18 = sym.spi_geni_unprepare_transfer_hardware;
        iVar12 = *(iVar12 + 0x98);
        if ((*(iVar12 + 0x1c1) == '\0') && (*(iVar12 + 0x1c3) == '\0')) {
            if ((*(iVar12 + 0x1c0) != '\0') &&
               ((*(iVar12 + 0x1c4) == '\0' &&
                (uVar11 = pinctrl_select_state(*(iVar12 + 0x70),*(iVar12 + 0x80)), uVar11 != 0)))) {
                piVar23 = uVar11;
                param_6 = piVar23;
                ipc_log_string(*(iVar12 + 0x1b8),"%s: Error %d pinctrl_select_state\n",
                               "spi_geni_unprepare_transfer_hardware");
                if (*(iVar12 + 0xa8) != 0) {
                    sym.spi_trace_log(*(iVar12 + 0xa8),0x8001024,0x80007e1,piVar23);
                    param_6 = piVar23;
                }
            }
            iVar19 = *(iVar12 + 0xa8);
            if (*(iVar12 + 0x1c5) == '\0') {
                if ((*(iVar19 + 0x20c) != 2) && ((*(iVar19 + 0x200) & 7) == 0)) {
                    uVar13 = ktime_get_mono_fast_ns();
                    *(iVar19 + 0x218) = uVar13;
                    __pm_runtime_suspend(*(iVar12 + 0xa8),0xd);
                }
            }
            else {
                __pm_runtime_idle(iVar19,4);
                uVar21 = *(*(iVar12 + 0xa8) + 0x1f8);
                if (uVar21 < 0) {
                    ipc_log_string(*(iVar12 + 0x1b8),"suspend usage count mismatch:%d",uVar21 & 0xffffffff);
                    if (*(iVar12 + 0xa8) != 0) {
                        sym.spi_trace_log(*(iVar12 + 0xa8),0x8000e45,uVar21 & 0xffffffff,param_6);
                    }
                }
            }
        }
        *(iVar12 + 0x1b4) = 0;
        return 0;
    }
    return piVar25 & 0xffffffff;
code_r0x08005b04:
    uVar11 = uVar21 + 1;
    uVar21 = uVar11;
    if (*(piVar23 + 0x1ac) <= uVar11) goto code_r0x08005b14;
    goto code_r0x08005af4;
}


// ===== sym.trace_event_raw_init.cfi_jt @ 0x08002368 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_raw_init.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002370 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.spi_geni_probe.42938a07f9c58b1377b5ae1566af1187.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002378 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.spi_geni_probe.42938a07f9c58b1377b5ae1566af1187.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.spi_slave_state_show.42938a07f9c58b1377b5ae1566af1187.cfi_jt @ 0x08002380 (size 8) =====

int64_t sym.spi_slave_state_show.42938a07f9c58b1377b5ae1566af1187.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x98) + 0x98);
    if (iVar2 == 0) {
        iVar2 = 0;
    }
    else {
        iVar1 = scnprintf(param_3,4,0x8000fc0,*(iVar2 + 0x1cf));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.trace_raw_output_spi_log_info.42938a07f9c58b1377b5ae1566af1187.cfi_jt @ 0x08002388 (size 8) =====

void sym.trace_raw_output_spi_log_info.42938a07f9c58b1377b5ae1566af1187.cfi_jt
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


// ===== sym.spi_geni_prepare_transfer_hardware.42938a07f9c58b1377b5ae1566af1187.cfi_jt @ 0x08002390 (size 8) =====

uint32_t sym.spi_geni_prepare_transfer_hardware.42938a07f9c58b1377b5ae1566af1187.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x98);
    if (*(iVar5 + 0x1c3) == '\0') {
        *(iVar5 + 0x1b4) = 1;
        if ((*(*(iVar5 + 0xa8) + 0x200) & 7) != 0) {
            ipc_log_string(*(iVar5 + 0x1b8),"%s: System suspended\n","spi_geni_prepare_transfer_hardware");
            if (*(iVar5 + 0xa8) != 0) {
                sym.spi_trace_log(*(iVar5 + 0xa8),0x8000b0a,0x80016d6,param_4);
            }
            uVar3 = 0xfffffff3;
code_r0x08003cf4:
            *(iVar5 + 0x1b4) = 0;
            return uVar3;
        }
        if ((((*(iVar5 + 0x1c0) != '\0') && (*(iVar5 + 0x1c1) == '\0')) && (*(iVar5 + 0x1c4) == '\0')) &&
           (uVar3 = pinctrl_select_state(*(iVar5 + 0x70),*(iVar5 + 0x78)), uVar3 != 0)) {
            uVar4 = uVar3;
            param_4 = uVar4;
            ipc_log_string(*(iVar5 + 0x1b8),"%s: Error %d pinctrl_select_state\n","spi_geni_prepare_transfer_hardware"
                          );
            if (*(iVar5 + 0xa8) != 0) {
                sym.spi_trace_log(*(iVar5 + 0xa8),0x8001024,0x80016d6,uVar4);
                param_4 = uVar4;
            }
        }
        if ((*(iVar5 + 0xc0) == '\0') || (*(iVar5 + 0x1c1) == '\0')) {
            iVar2 = __pm_runtime_resume(*(iVar5 + 0xa8),4);
            if (iVar2 < 0) {
                _dev_err(*(iVar5 + 0xa8),"%s:pm_runtime_get_sync failed %d\n","spi_geni_prepare_transfer_hardware",
                         iVar2);
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x800,0x8003e24);
                (*pcVar1)();
            }
            if ((*(iVar5 + 0xc0) == '\0') && (uVar3 = sym.spi_geni_mas_setup(param_1), uVar3 != 0)) {
                ipc_log_string(*(iVar5 + 0x1b8),"%s mas_setup failed: %d\n","spi_geni_prepare_transfer_hardware",
                               uVar3);
                if (*(iVar5 + 0xa8) == 0) {
                    _printk(0x80017e8,"spi_geni_prepare_transfer_hardware",uVar3);
                }
                else {
                    _dev_err(*(iVar5 + 0xa8),"%s mas_setup failed: %d\n","spi_geni_prepare_transfer_hardware",uVar3);
                }
                if (*(iVar5 + 0xa8) != 0) {
                    sym.spi_trace_log(*(iVar5 + 0xa8),0x8001655,0x80016d6,uVar3);
                }
                goto code_r0x08003cf4;
            }
            if ((*(iVar5 + 0x1c5) != '\0') && (uVar4 = *(*(iVar5 + 0xa8) + 0x1f8), uVar4 < 1)) {
                ipc_log_string(*(iVar5 + 0x1b8),"resume usage count mismatch:%d",uVar4 & 0xffffffff);
                if (*(iVar5 + 0xa8) != 0) {
                    sym.spi_trace_log(*(iVar5 + 0xa8),0x80016f9,uVar4 & 0xffffffff,param_4);
                }
            }
        }
    }
    return 0;
}


// ===== sym.spi_geni_unprepare_transfer_hardware.42938a07f9c58b1377b5ae1566af1187.cfi_jt @ 0x08002398 (size 8) =====

ulong sym.spi_geni_unprepare_transfer_hardware.42938a07f9c58b1377b5ae1566af1187.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x98);
    if ((*(iVar5 + 0x1c1) == '\0') && (*(iVar5 + 0x1c3) == '\0')) {
        if ((*(iVar5 + 0x1c0) != '\0') &&
           ((*(iVar5 + 0x1c4) == '\0' && (uVar1 = pinctrl_select_state(*(iVar5 + 0x70),*(iVar5 + 0x80)), uVar1 != 0)))
           ) {
            uVar4 = uVar1;
            param_4 = uVar4;
            ipc_log_string(*(iVar5 + 0x1b8),"%s: Error %d pinctrl_select_state\n",
                           "spi_geni_unprepare_transfer_hardware");
            if (*(iVar5 + 0xa8) != 0) {
                sym.spi_trace_log(*(iVar5 + 0xa8),0x8001024,0x80007e1,uVar4);
                param_4 = uVar4;
            }
        }
        iVar3 = *(iVar5 + 0xa8);
        if (*(iVar5 + 0x1c5) == '\0') {
            if ((*(iVar3 + 0x20c) != 2) && ((*(iVar3 + 0x200) & 7) == 0)) {
                uVar2 = ktime_get_mono_fast_ns();
                *(iVar3 + 0x218) = uVar2;
                __pm_runtime_suspend(*(iVar5 + 0xa8),0xd);
            }
        }
        else {
            __pm_runtime_idle(iVar3,4);
            uVar4 = *(*(iVar5 + 0xa8) + 0x1f8);
            if (uVar4 < 0) {
                ipc_log_string(*(iVar5 + 0x1b8),"suspend usage count mismatch:%d",uVar4 & 0xffffffff);
                if (*(iVar5 + 0xa8) != 0) {
                    sym.spi_trace_log(*(iVar5 + 0xa8),0x8000e45,uVar4 & 0xffffffff,param_4);
                }
            }
        }
    }
    *(iVar5 + 0x1b4) = 0;
    return 0;
}


// ===== sym.spi_slv_abort.42938a07f9c58b1377b5ae1566af1187.cfi_jt @ 0x080023a0 (size 8) =====

ulong sym.spi_slv_abort.42938a07f9c58b1377b5ae1566af1187.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    complete_all(iVar1 + 0x160);
    complete_all(iVar1 + 0x180);
    return 0;
}


// ===== sym.trace_event_raw_event_spi_log_info.42938a07f9c58b1377b5ae1566af1187.cfi_jt @ 0x080023a8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080026e8)

void sym.trace_event_raw_event_spi_log_info.42938a07f9c58b1377b5ae1566af1187.cfi_jt
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
        goto code_r0x080025b8;
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
            pcVar6 = SoftwareBreakpoint(0x800,0x80025f0);
            (*pcVar6)();
        }
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x080025b8:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return;
    }
    auVar13 = __stack_chk_fail();
    iVar10 = auVar13._0_8_;
    *extraout_x18 = sym.perf_trace_spi_log_info;
    pcStack_e8 = sym.perf_trace_spi_log_info;
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
            *(iStack_100 + 0x100) = ~(-1L << uVar8) & 0x80025f8;
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
                pcVar6 = SoftwareBreakpoint(0x800,0x8002798);
                (*pcVar6)();
            }
            perf_trace_run_bpf_submit(iVar9,iVar4,uStack_104,iVar10,1,iStack_100,piVar1,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_f8) {
        __stack_chk_fail();
        uVar5 = tpidr_el2;
        *extraout_x18_00 = 0x80027a0;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_spi_log_info.42938a07f9c58b1377b5ae1566af1187.cfi_jt @ 0x080023b0 (size 8) =====

void sym.__bpf_trace_spi_log_info.42938a07f9c58b1377b5ae1566af1187.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2();
    return;
}


// ===== sym.perf_trace_spi_log_info.42938a07f9c58b1377b5ae1566af1187.cfi_jt @ 0x080023b8 (size 8) =====

void sym.perf_trace_spi_log_info.42938a07f9c58b1377b5ae1566af1187.cfi_jt(int64_t param_1,char *param_2,ulong *param_3)

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
                pcVar7 = SoftwareBreakpoint(0x800,0x8002798);
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
    *extraout_x18 = 0x80027a0;
    bpf_trace_run2(in_tmp_ldXn);
    return;
}


// ===== sym.spi_gsi_rx_callback.42938a07f9c58b1377b5ae1566af1187.cfi_jt @ 0x080023c0 (size 8) =====

void sym.spi_gsi_rx_callback.42938a07f9c58b1377b5ae1566af1187.cfi_jt
               (uint32_t *param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint64_t arg4;
    ulong *in_x18;
    int64_t iVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = (*(param_1 + 8))[1];
    if (*(iVar2 + 8) != 0) {
        iVar1 = *(**(param_1 + 8) + 0x98);
        if (param_1[2] == 0x10) {
            ipc_log_string(*(iVar1 + 0x1b8),"%s: Unexpected GSI CB error\n","spi_gsi_rx_callback");
            if (*(iVar1 + 0xa8) == 0) {
                _printk(0x80010df,"spi_gsi_rx_callback");
            }
            else {
                _dev_err(*(iVar1 + 0xa8),"%s: Unexpected GSI CB error\n","spi_gsi_rx_callback");
            }
            if (*(iVar1 + 0xa8) != 0) {
                sym.spi_trace_log(*(iVar1 + 0xa8),0x8001690,0x80016ad,param_4);
            }
        }
        else {
            arg4 = *(iVar2 + 0x10);
            if (*param_1 == *(iVar2 + 0x10)) {
                ipc_log_string(*(iVar1 + 0x1b8),0x80019e0,"spi_gsi_rx_callback");
                if (*(iVar1 + 0xa8) != 0) {
                    sym.spi_trace_log(*(iVar1 + 0xa8),0x80019e0,0x80016ad,arg4);
                }
                complete(iVar1 + 0x180);
            }
            else {
                ipc_log_string(*(iVar1 + 0x1b8),"%s: Length mismatch. Expected %d Callback %d\n","spi_gsi_rx_callback"
                              );
                if (*(iVar1 + 0xa8) == 0) {
                    _printk(0x8000b52,"spi_gsi_rx_callback",*(iVar2 + 0x10),*param_1);
                }
                else {
                    _dev_err(*(iVar1 + 0xa8),"%s: Length mismatch. Expected %d Callback %d\n","spi_gsi_rx_callback",
                             *(iVar2 + 0x10),*param_1);
                }
                if (*(iVar1 + 0xa8) != 0) {
                    sym.spi_trace_log(*(iVar1 + 0xa8),0x800093d,0x80016ad,*(iVar2 + 0x10));
                }
            }
        }
    }
    return;
}


// ===== sym.spi_gsi_tx_callback.42938a07f9c58b1377b5ae1566af1187.cfi_jt @ 0x080023c8 (size 8) =====

void sym.spi_gsi_tx_callback.42938a07f9c58b1377b5ae1566af1187.cfi_jt
               (uint32_t *param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    int64_t *piVar1;
    int64_t arg1;
    char *arg2;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = (*(param_1 + 8))[1];
    iVar2 = *(**(param_1 + 8) + 0x98);
    if (piVar1 == NULL) {
        ipc_log_string(*(iVar2 + 0x1b8),"Lock/unlock IEOB received %s\n","spi_gsi_tx_callback");
        arg1 = *(iVar2 + 0xa8);
        if (arg1 == 0) goto code_r0x08006c58;
        arg2 = "Lock/unlock IEOB received %s\n";
    }
    else {
        if (*piVar1 == 0) {
            return;
        }
        if (param_1[2] == 0x10) {
            ipc_log_string(*(iVar2 + 0x1b8),"%s: Unexpected GSI CB error\n","spi_gsi_tx_callback");
            if (*(iVar2 + 0xa8) == 0) {
                _printk(0x80010df,"spi_gsi_tx_callback");
            }
            else {
                _dev_err(*(iVar2 + 0xa8),"%s: Unexpected GSI CB error\n","spi_gsi_tx_callback");
            }
            if (*(iVar2 + 0xa8) == 0) {
                return;
            }
            sym.spi_trace_log(*(iVar2 + 0xa8),0x8001690,0x800099e,param_4);
            return;
        }
        param_4 = *(piVar1 + 2);
        if (*param_1 != *(piVar1 + 2)) {
            ipc_log_string(*(iVar2 + 0x1b8),"%s: Length mismatch. Expected %d Callback %d\n","spi_gsi_tx_callback");
            if (*(iVar2 + 0xa8) == 0) {
                _printk(0x8000b52,"spi_gsi_tx_callback",piVar1[2],*param_1);
            }
            else {
                _dev_err(*(iVar2 + 0xa8),"%s: Length mismatch. Expected %d Callback %d\n","spi_gsi_tx_callback",
                         piVar1[2],*param_1);
            }
            if (*(iVar2 + 0xa8) == 0) {
                return;
            }
            sym.spi_trace_log(*(iVar2 + 0xa8),0x800093d,0x800099e,*(piVar1 + 2));
            return;
        }
        ipc_log_string(*(iVar2 + 0x1b8),0x80019e0,"spi_gsi_tx_callback");
        arg1 = *(iVar2 + 0xa8);
        if (arg1 == 0) goto code_r0x08006c58;
        arg2 = 0x80019e0;
    }
    sym.spi_trace_log(arg1,arg2,0x800099e,param_4);
code_r0x08006c58:
    complete(iVar2 + 0x160);
    return;
}


// ===== sym.trace_event_reg.cfi_jt @ 0x080023d0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_reg.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.__traceiter_spi_log_info.cfi_jt @ 0x080023d8 (size 8) =====

ulong sym.__traceiter_spi_log_info.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8008018;
    piVar1 = *0x8008018;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.spi_geni_prepare_message.42938a07f9c58b1377b5ae1566af1187.cfi_jt @ 0x080023e0 (size 8) =====

uint64_t sym.spi_geni_prepare_message.42938a07f9c58b1377b5ae1566af1187.cfi_jt
                   (uchar param_1 [16],uchar param_2 [16],int64_t param_3,int64_t *param_4,ulong param_5,
                   uint64_t param_6)

{
    uint32_t uVar1;
    uint8_t uVar2;
    code *pcVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int64_t iVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong uVar15;
    char *arg2;
    char *arg3;
    uint uVar16;
    uint32_t *puVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar18;
    uint64_t uVar19;
    uint64_t arg1;
    ulong *puVar20;
    uint32_t uVar21;
    int64_t *piVar22;
    int64_t *piVar23;
    ulong unaff_x30;
    uchar auVar24 [16];
    int iStack_70;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar18 = sp_el0;
    iStack_68 = *(iVar18 + 0x5e0);
    iVar18 = *(param_3 + 0x98);
    if (*(iVar18 + 0x1c1) != '\0') {
        if (*(iVar18 + 0xc0) == '\0') {
            *(iVar18 + 0xc0) = 1;
code_r0x08003f80:
            if ((*(iVar18 + 0x1c2) != '\0') && (uVar8 = sym.spi_geni_lock_bus(param_3), uVar8 != 0)) {
                uVar19 = uVar8;
                param_6 = uVar19;
                ipc_log_string(*(iVar18 + 0x1b8),"%s failed: %d\n","spi_geni_prepare_message");
                if (*(iVar18 + 0xa8) == 0) {
                    _printk(0x80010ce,"spi_geni_prepare_message",uVar19);
                }
                else {
                    param_6 = uVar19;
                    _dev_err(*(iVar18 + 0xa8),"%s failed: %d\n","spi_geni_prepare_message");
                }
                iVar18 = *(iVar18 + 0xa8);
                if (iVar18 != 0) {
                    arg2 = "%s failed: %d\n";
                    arg3 = "spi_geni_prepare_message";
code_r0x080046a8:
                    param_6 = uVar19;
                    sym.spi_trace_log(iVar18,arg2,arg3,uVar19);
                }
                goto code_r0x0800442c;
            }
            goto code_r0x08003f94;
        }
        if ((*(*(iVar18 + 0xa8) + 0x200) & 7) == 0) {
            iVar7 = __pm_runtime_resume(*(iVar18 + 0xa8),4);
            if (iVar7 < 0) {
                _dev_err(*(iVar18 + 0xa8),"%s:pm_runtime_get_sync failed %d\n","spi_geni_prepare_message",iVar7);
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x800,0x8004558);
                (*pcVar3)();
            }
            if ((*(iVar18 + 0x1c5) != '\0') && (uVar19 = *(*(iVar18 + 0xa8) + 0x1f8), uVar19 < 1)) {
                ipc_log_string(*(iVar18 + 0x1b8),"resume usage count mismatch:%d",uVar19 & 0xffffffff);
                if (*(iVar18 + 0xa8) != 0) {
                    sym.spi_trace_log(*(iVar18 + 0xa8),0x80016f9,uVar19 & 0xffffffff,param_6);
                }
            }
            goto code_r0x08003f80;
        }
code_r0x080043f4:
        ipc_log_string(*(iVar18 + 0x1b8),"%s: System suspended\n","spi_geni_prepare_message");
        if (*(iVar18 + 0xa8) != 0) {
            sym.spi_trace_log(*(iVar18 + 0xa8),0x8000b0a,0x8001492,param_6);
        }
        uVar19 = 0xfffffff3;
        goto code_r0x0800442c;
    }
code_r0x08003f94:
    iVar12 = *(iVar18 + 0xa8);
    if ((*(iVar12 + 0x20c) == 2) && (*(iVar18 + 0x1c3) == '\0')) {
        if ((*(iVar12 + 0x200) & 7) != 0) goto code_r0x080043f4;
        iVar7 = __pm_runtime_resume(iVar12,4);
        if (iVar7 < 0) {
            _dev_err(*(iVar18 + 0xa8),"%s:pm_runtime_get_sync failed %d\n","spi_geni_prepare_message",iVar7);
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x80044a4);
            (*pcVar3)();
        }
    }
    iVar12 = *(param_3 + 0x98);
    uVar19 = sym.readl_relaxed(*(iVar12 + 0x98) + 100);
    if ((*(iVar12 + 0x120) == 0) || (0xfffffffffffff000 < *(iVar12 + 0x120))) {
        if ((uVar19 & 1) != 0) {
            *(iVar18 + 0x1a4) = 0xffffffea;
code_r0x080044cc:
            param_6 = 0xffffffea;
            uVar19 = 0xffffffea;
            _dev_err(*(iVar18 + 0xa8),"%s: Couldn\'t select mode %d\n","spi_geni_prepare_message");
            goto code_r0x0800442c;
        }
        *(iVar18 + 0x1a4) = 2;
    }
    else {
        bVar5 = *(iVar12 + 0x128) != 0;
        bVar4 = *(iVar12 + 0x128) < 0xfffffffffffff001;
        bVar6 = (uVar19 & 1) != 0;
        if (((uVar19 & 1) == 0) || (bVar6 && (!bVar5 || !bVar4))) {
            uVar16 = 2;
            if (bVar6 && (!bVar5 || !bVar4)) {
                uVar16 = 0xffffffea;
            }
            *(iVar18 + 0x1a4) = uVar16;
            if (bVar6 && (!bVar5 || !bVar4)) goto code_r0x080044cc;
        }
        else {
            uVar16 = 2;
            if (bVar5 && bVar4) {
                uVar16 = 3;
            }
            *(iVar18 + 0x1a4) = uVar16;
            if (bVar5 && bVar4) {
                memset(*(iVar18 + 0x110),0,0xac0);
                geni_se_select_mode(iVar18,3);
                for (piVar23 = *param_4; param_4 != piVar23; piVar23 = *piVar23) {
                    uVar19 = piVar23[-0xe];
                    if (uVar19 != 0) {
                        piVar22 = *(iVar18 + 0x100);
                        if (piVar22 == NULL) {
                            uVar19 = 0xffffffea;
                        }
                        else {
                            param_6 = *(piVar23 + -0xd);
                            uVar13 = is_vmalloc_addr(uVar19);
                            if (((uVar13 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                                obj.dma_map_single_attrs.__already_done = 0x1;
                                uVar15 = dev_driver_string(piVar22);
                                iVar18 = piVar22[0xe];
                                if (iVar18 == 0) {
                                    iVar18 = *piVar22;
                                }
                                __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar15,iVar18);
    //WARNING: Does not return
                                pcVar3 = SoftwareBreakpoint(0x800,0x8004154);
                                (*pcVar3)();
                            }
                            if ((uVar13 & 1) == 0) {
                                iVar12 = dma_map_page_attrs(piVar22,(((uVar19 << 8) >> 8) + 0x8000000000U >> 6 &
                                                                     0x3ffffffffffffc0) - 0x200000000,uVar19 & 0xfff,
                                                            param_6,2,0);
                                piVar23[-0xb] = iVar12;
                                if (iVar12 != -1) goto code_r0x080040b8;
                                uVar19 = 0xfffffffb;
                            }
                            else {
                                uVar19 = 0xfffffffb;
                                piVar23[-0xb] = 0xffffffffffffffff;
                            }
                        }
                        param_6 = uVar19;
                        ipc_log_string(*(iVar18 + 0x1b8),"%s: Mapping Rx buffer %d\n","spi_geni_map_buf");
                        if (*(iVar18 + 0xa8) == 0) {
                            _printk(0x80014e7,"spi_geni_map_buf",uVar19);
                        }
                        else {
                            param_6 = uVar19;
                            _dev_err(*(iVar18 + 0xa8),"%s: Mapping Rx buffer %d\n","spi_geni_map_buf");
                        }
                        iVar18 = *(iVar18 + 0xa8);
                        if (iVar18 == 0) goto code_r0x0800442c;
                        arg2 = "%s: Mapping Rx buffer %d\n";
code_r0x080046a0:
                        arg3 = "spi_geni_map_buf";
                        goto code_r0x080046a8;
                    }
code_r0x080040b8:
                    uVar19 = piVar23[-0xf];
                    if (uVar19 != 0) {
                        piVar22 = *(iVar18 + 0x100);
                        if (piVar22 == NULL) {
                            uVar19 = 0xffffffea;
                        }
                        else {
                            param_6 = *(piVar23 + -0xd);
                            uVar13 = is_vmalloc_addr(uVar19);
                            if (((uVar13 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                                obj.dma_map_single_attrs.__already_done = 0x1;
                                uVar15 = dev_driver_string(piVar22);
                                iVar18 = piVar22[0xe];
                                if (iVar18 == 0) {
                                    iVar18 = *piVar22;
                                }
                                __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar15,iVar18);
    //WARNING: Does not return
                                pcVar3 = SoftwareBreakpoint(0x800,0x800418c);
                                (*pcVar3)();
                            }
                            if ((uVar13 & 1) == 0) {
                                iVar12 = dma_map_page_attrs(piVar22,(((uVar19 << 8) >> 8) + 0x8000000000U >> 6 &
                                                                     0x3ffffffffffffc0) - 0x200000000,uVar19 & 0xfff,
                                                            param_6,1,0);
                                piVar23[-0xc] = iVar12;
                                if (iVar12 != -1) goto code_r0x08004044;
                                uVar19 = 0xfffffffb;
                            }
                            else {
                                uVar19 = 0xfffffffb;
                                piVar23[-0xc] = 0xffffffffffffffff;
                            }
                        }
                        param_6 = uVar19;
                        ipc_log_string(*(iVar18 + 0x1b8),"%s: Mapping Tx buffer %d\n","spi_geni_map_buf");
                        if (*(iVar18 + 0xa8) == 0) {
                            _printk(0x800088b,"spi_geni_map_buf",uVar19);
                        }
                        else {
                            param_6 = uVar19;
                            _dev_err(*(iVar18 + 0xa8),"%s: Mapping Tx buffer %d\n","spi_geni_map_buf");
                        }
                        iVar18 = *(iVar18 + 0xa8);
                        if (iVar18 != 0) {
                            arg2 = "%s: Mapping Tx buffer %d\n";
                            goto code_r0x080046a0;
                        }
                        goto code_r0x0800442c;
                    }
code_r0x08004044:
                }
                uVar19 = 0;
                goto code_r0x0800442c;
            }
        }
    }
    geni_se_select_mode(iVar18,2);
    iVar18 = *(param_3 + 0x98);
    iVar12 = param_4[2];
    uVar8 = *(iVar12 + 0x3a8);
    uVar9 = sym.readl_relaxed(*(iVar18 + 0x98) + 0x22c);
    uVar10 = sym.readl_relaxed(*(iVar18 + 0x98) + 0x230);
    uVar11 = sym.readl_relaxed(*(iVar18 + 0x98) + 0x224);
    uVar13 = 0;
    uStack_6c = 0;
    iStack_70 = 0;
    if ((*(iVar12 + 0x3a8) >> 2 & 1) != 0) {
        uVar13 = 1L << (*(iVar12 + 0x3a4) & 0x3f);
    }
    puVar17 = *(iVar12 + 0x3b8);
    if (puVar17 == NULL) {
        uVar21 = 0;
    }
    else {
        uVar21 = puVar17[1] & 0x3ff | (*puVar17 & 0x3ff) << 10;
    }
    uVar1 = *(iVar12 + 0x3a0);
    uVar2 = *(iVar12 + 0x3a4);
    *(iVar18 + 0xc4) = uVar1;
    *(iVar18 + 200) = *(iVar12 + 0x3a5);
    uVar14 = sym.get_spi_clk_cfg(uVar1,iVar18,param_2,&iStack_70);
    uVar19 = uVar14 & 0xffffffff;
    if (uVar14 == 0) {
        arg1 = uVar11 & 0xfffffffe | uVar8 & 1;
        uVar11 = uVar9 & 0xfffffffc | uVar8 >> 5 & 1;
        uVar19 = uVar10 & 0xfffffff8 | uVar10 & 3 | (uVar8 >> 1 & 1) << 2;
        uVar8 = uStack_6c & 7;
        uVar9 = iStack_70 << 4 | 1;
        sym.spi_setup_word_len(iVar18,*(iVar12 + 0x3a8),*(iVar12 + 0x3a5));
        sym.writel_relaxed(uVar11,*(iVar18 + 0x98) + 0x22c);
        sym.writel_relaxed(uVar2,*(iVar18 + 0x98) + 0x250);
        sym.writel_relaxed(arg1,*(iVar18 + 0x98) + 0x224);
        sym.writel_relaxed(uVar19,*(iVar18 + 0x98) + 0x230);
        sym.writel_relaxed(uVar13 & 0xffffffff,*(iVar18 + 0x98) + 0x24c);
        sym.writel_relaxed(uVar8,*(iVar18 + 0x98) + 0x7c);
        sym.writel_relaxed(uVar9,*(iVar18 + 0x98) + 0x48);
        sym.writel_relaxed(uVar21,*(iVar18 + 0x98) + 0x278);
        ipc_log_string(*(iVar18 + 0x1b8),"%s:Loopback%d demux_sel0x%x demux_op_inv 0x%x clk_cfg 0x%x\n",
                       "setup_fifo_params",uVar11,uVar2,uVar13 & 0xffffffff,uVar9);
        if (*(iVar18 + 0xa8) != 0) {
            sym.spi_trace_log(*(iVar18 + 0xa8),0x8000cfe,0x80012a1,uVar11);
        }
        param_6 = uVar8;
        ipc_log_string(*(iVar18 + 0x1b8),"%s:clk_sel 0x%x cpol %d cpha %d delay 0x%x\n","setup_fifo_params",param_6,
                       uVar19,arg1,uVar21);
        if (*(iVar18 + 0xa8) != 0) {
            param_6 = uVar8;
            sym.spi_trace_log(*(iVar18 + 0xa8),0x8001216,0x80012a1,param_6);
        }
        DataSynchronizationBarrier(3,3,0);
        uVar19 = uVar14 & 0xffffffff;
    }
    else {
        param_6 = *(iVar18 + 0xc4);
        _dev_err(*(iVar18 + 0xa8),"Err setting clks ret(%d) for %d\n",uVar19);
    }
code_r0x0800442c:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_68) {
        return uVar19;
    }
    auVar24 = __stack_chk_fail();
    *extraout_x18 = 0x80046b8;
    iVar18 = *(auVar24._0_8_ + 0x98);
    *(iVar18 + 0xc4) = 0;
    if (*(iVar18 + 0x1a4) == 3) {
        for (puVar20 = *auVar24._8_8_; auVar24._8_8_ != puVar20; puVar20 = *puVar20) {
            if ((puVar20[-0xe] != 0) && (puVar20[-0xb] != -1)) {
                param_6 = 2;
                dma_unmap_page_attrs(*(iVar18 + 0x100),puVar20[-0xb],*(puVar20 + -0xd),2,0);
            }
            if ((puVar20[-0xf] != 0) && (puVar20[-0xc] != -1)) {
                param_6 = 1;
                dma_unmap_page_attrs(*(iVar18 + 0x100),puVar20[-0xc],*(puVar20 + -0xd),1,0);
            }
        }
    }
    if (*(iVar18 + 0x1c1) != '\0') {
        if (*(iVar18 + 0x1c2) != '\0') {
            sym.spi_geni_unlock_bus(auVar24._0_8_);
        }
        iVar12 = *(iVar18 + 0xa8);
        if (*(iVar18 + 0x1c5) == '\0') {
            if ((*(iVar12 + 0x20c) != 2) && ((*(iVar12 + 0x200) & 7) == 0)) {
                uVar15 = ktime_get_mono_fast_ns();
                *(iVar12 + 0x218) = uVar15;
                __pm_runtime_suspend(*(iVar18 + 0xa8),0xd);
            }
        }
        else {
            __pm_runtime_idle(iVar12,4);
            uVar19 = *(*(iVar18 + 0xa8) + 0x1f8);
            if (uVar19 < 0) {
                ipc_log_string(*(iVar18 + 0x1b8),"suspend usage count mismatch:%d",uVar19 & 0xffffffff);
                if (*(iVar18 + 0xa8) != 0) {
                    sym.spi_trace_log(*(iVar18 + 0xa8),0x8000e45,uVar19 & 0xffffffff,param_6);
                }
            }
        }
    }
    return 0;
}


// ===== sym.spi_geni_unprepare_message.42938a07f9c58b1377b5ae1566af1187.cfi_jt @ 0x080023e8 (size 8) =====

ulong sym.spi_geni_unprepare_message.42938a07f9c58b1377b5ae1566af1187.cfi_jt
                (int64_t param_1,ulong *param_2,ulong param_3,int64_t param_4)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x98);
    *(iVar4 + 0xc4) = 0;
    if (*(iVar4 + 0x1a4) == 3) {
        for (puVar5 = *param_2; param_2 != puVar5; puVar5 = *puVar5) {
            if ((puVar5[-0xe] != 0) && (puVar5[-0xb] != -1)) {
                param_4 = 2;
                dma_unmap_page_attrs(*(iVar4 + 0x100),puVar5[-0xb],*(puVar5 + -0xd),2,0);
            }
            if ((puVar5[-0xf] != 0) && (puVar5[-0xc] != -1)) {
                param_4 = 1;
                dma_unmap_page_attrs(*(iVar4 + 0x100),puVar5[-0xc],*(puVar5 + -0xd),1,0);
            }
        }
    }
    if (*(iVar4 + 0x1c1) != '\0') {
        if (*(iVar4 + 0x1c2) != '\0') {
            sym.spi_geni_unlock_bus(param_1);
        }
        iVar2 = *(iVar4 + 0xa8);
        if (*(iVar4 + 0x1c5) == '\0') {
            if ((*(iVar2 + 0x20c) != 2) && ((*(iVar2 + 0x200) & 7) == 0)) {
                uVar1 = ktime_get_mono_fast_ns();
                *(iVar2 + 0x218) = uVar1;
                __pm_runtime_suspend(*(iVar4 + 0xa8),0xd);
            }
        }
        else {
            __pm_runtime_idle(iVar2,4);
            uVar3 = *(*(iVar4 + 0xa8) + 0x1f8);
            if (uVar3 < 0) {
                ipc_log_string(*(iVar4 + 0x1b8),"suspend usage count mismatch:%d",uVar3 & 0xffffffff);
                if (*(iVar4 + 0xa8) != 0) {
                    sym.spi_trace_log(*(iVar4 + 0xa8),0x8000e45,uVar3 & 0xffffffff,param_4);
                }
            }
        }
    }
    return 0;
}


// ===== sym.spi_gsi_ch_cb.42938a07f9c58b1377b5ae1566af1187.cfi_jt @ 0x080023f0 (size 8) =====

void sym.spi_gsi_ch_cb.42938a07f9c58b1377b5ae1566af1187.cfi_jt(ulong param_1,uint32_t *param_2,int64_t param_3)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *param_2;
    iVar3 = *(param_3 + 0x98);
    if ((uVar1 == 0) || (uVar1 == 7)) {
        ipc_log_string(*(iVar3 + 0x1b8),"%s:cb_ev%d status%llu ts%llu count%llu\n","spi_gsi_ch_cb",uVar1,
                       *(param_2 + 2),*(param_2 + 4),*(param_2 + 6));
        if (*(iVar3 + 0xa8) != 0) {
            sym.spi_trace_log(*(iVar3 + 0xa8),0x8001aa0,0x8000715,*param_2);
        }
    }
    else if (uVar1 - 1 < 6) {
        ipc_log_string(*(iVar3 + 0x1b8),"%s: cb_ev %d status %llu ts %llu count %llu\n","spi_gsi_ch_cb",uVar1,
                       *(param_2 + 2),*(param_2 + 4),*(param_2 + 6));
        if (*(iVar3 + 0xa8) == 0) {
            _printk(0x8000bf1,"spi_gsi_ch_cb",*param_2,*(param_2 + 2),*(param_2 + 4),*(param_2 + 6));
            iVar2 = *(iVar3 + 0xa8);
        }
        else {
            _dev_err(*(iVar3 + 0xa8),"%s: cb_ev %d status %llu ts %llu count %llu\n","spi_gsi_ch_cb",*param_2);
            iVar2 = *(iVar3 + 0xa8);
        }
        if (iVar2 != 0) {
            sym.spi_trace_log(iVar2,0x8001274,0x8000715,*param_2);
        }
        ipc_log_string(*(iVar3 + 0x1b8),"err.routine %u, err.type %u, err.code %u\n",param_2[8],param_2[9],
                       param_2[10]);
        if (*(iVar3 + 0xa8) == 0) {
            _printk(0x8000911,param_2[8],param_2[9],param_2[10]);
            iVar2 = *(iVar3 + 0xa8);
        }
        else {
            _dev_err(*(iVar3 + 0xa8),"err.routine %u, err.type %u, err.code %u\n",param_2[8],param_2[9],param_2[10])
            ;
            iVar2 = *(iVar3 + 0xa8);
        }
        if (iVar2 != 0) {
            sym.spi_trace_log(iVar2,0x800118e,param_2[8],param_2[9]);
        }
        *(iVar3 + 0x1a0) = 1;
        complete_all(iVar3 + 0x160);
        complete_all(iVar3 + 0x180);
    }
    return;
}


// ===== sym.geni_spi_irq.42938a07f9c58b1377b5ae1566af1187.cfi_jt @ 0x080023f8 (size 8) =====

ulong sym.geni_spi_irq.42938a07f9c58b1377b5ae1566af1187.cfi_jt
                (ulong param_1,int64_t param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int iVar2;
    uint64_t uVar3;
    code *pcVar4;
    bool bVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int iVar11;
    int iVar12;
    int64_t iVar13;
    int iVar14;
    uint32_t uVar15;
    int64_t *piVar16;
    int iVar17;
    uint32_t uVar18;
    int iVar19;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(param_2 + 0xa8) + 0x20c) == 2) {
        ipc_log_string(*(param_2 + 0x1b8),"%s: device is suspended\n","geni_spi_irq");
        if (*(param_2 + 0xa8) == 0) {
            uVar6 = 0;
        }
        else {
            sym.spi_trace_log(*(param_2 + 0xa8),0x8000fe7,0x8000cf1,param_4);
            uVar6 = 0;
        }
        goto code_r0x08003c2c;
    }
    uVar6 = sym.readl_relaxed(*(param_2 + 0x98) + 0x610);
    if (*(param_2 + 0x1a4) != 2) {
        if (*(param_2 + 0x1a4) != 1) goto code_r0x08003c2c;
        if ((uVar6 & 0xc000000) != 0) {
            iVar12 = *(param_2 + 0xb8);
            uVar7 = sym.readl_relaxed(*(param_2 + 0x98) + 0x804);
            iVar9 = *(param_2 + 0xd8);
            if (iVar9 != 0) {
                iVar12 = iVar12 >> 3;
                uVar15 = uVar7 & 0x1ffffff;
                if (uVar7 < 0) {
                    uVar7 = uVar7 >> 0x1c & 7;
                    bVar5 = uVar7 - 1 < 3;
                    if (!bVar5) {
                        uVar7 = 0;
                    }
                    uVar15 = uVar15 - bVar5;
                }
                else {
                    uVar7 = 0;
                }
                iVar11 = *(param_2 + 0xb8);
                iVar14 = *(param_2 + 200);
                iVar17 = 0;
                if (iVar14 != 0) {
                    iVar17 = iVar11 / iVar14;
                }
                iVar1 = iVar12;
                if (iVar11 != iVar17 * iVar14) {
                    iVar17 = iVar14 + 7;
                    if (-1 < iVar14) {
                        iVar17 = iVar14;
                    }
                    iVar1 = (iVar17 >> 3) + 1;
                }
                iVar19 = *(param_2 + 0xd0);
                iVar1 = uVar7 + iVar1 * uVar15;
                iVar17 = iVar19;
                if (iVar1 <= iVar19) {
                    iVar17 = iVar1;
                }
                if (0 < iVar17) {
                    uVar7 = 0;
                    iVar9 = *(iVar9 + 8) + (*(iVar9 + 0x10) - iVar19);
                    do {
                        iVar1 = 0;
                        if (iVar14 != 0) {
                            iVar1 = iVar11 / iVar14;
                        }
                        iVar19 = iVar12;
                        if (iVar11 != iVar1 * iVar14) {
                            iVar11 = iVar14 + 7;
                            if (-1 < iVar14) {
                                iVar11 = iVar14;
                            }
                            iVar19 = (iVar11 >> 3) + 1;
                        }
                        iVar11 = iVar17 - uVar7;
                        if (iVar19 <= iVar17 - uVar7) {
                            iVar11 = iVar19;
                        }
                        uVar8 = sym.readl_relaxed(*(param_2 + 0x98) + 0x780);
                        if (iVar11 < 1) {
                            uVar10 = uVar7;
code_r0x080039c8:
                            uVar15 = uVar10;
                        }
                        else {
                            uVar3 = uVar7 + 1;
                            *(iVar9 + uVar7) = uVar8;
                            uVar10 = uVar3;
                            if (iVar11 == 1) goto code_r0x080039c8;
                            uVar10 = uVar7 + 2;
                            *(iVar9 + uVar3) = uVar8 >> 8;
                            if (iVar11 == 2) goto code_r0x080039c8;
                            *(iVar9 + (uVar7 + 2)) = uVar8 >> 0x10;
                            uVar15 = uVar7 + 3;
                            if (iVar11 != 3) {
                                *(iVar9 + (uVar7 + 3)) = uVar8 >> 0x18;
                                if (iVar11 != 4) goto code_r0x08003c74;
                                uVar15 = uVar7 + 4;
                            }
                        }
                        uVar7 = uVar15;
                        if (iVar17 <= uVar7) goto code_r0x080039fc;
                        iVar11 = *(param_2 + 0xb8);
                        iVar14 = *(param_2 + 200);
                    } while( true );
                }
                goto code_r0x08003a00;
            }
        }
        goto code_r0x08003a08;
    }
    uVar7 = sym.readl_relaxed(*(param_2 + 0x98) + 0xc40);
    uVar15 = sym.readl_relaxed(*(param_2 + 0x98) + 0xd40);
    if (uVar7 != 0) {
        sym.writel_relaxed(uVar7,*(param_2 + 0x98) + 0xc44);
    }
    if (uVar15 != 0) {
        sym.writel_relaxed(uVar15,*(param_2 + 0x98) + 0xd44);
    }
    if ((uVar7 & 1) == 0) {
        if ((uVar15 & 1) == 0) goto code_r0x0800387c;
code_r0x08003890:
        *(param_2 + 0xd0) = 0;
        iVar12 = *(param_2 + 0xcc);
    }
    else {
        *(param_2 + 0xcc) = 0;
        if ((uVar15 & 1) != 0) goto code_r0x08003890;
code_r0x0800387c:
        iVar12 = *(param_2 + 0xcc);
    }
    if ((iVar12 == 0) && (*(param_2 + 0xd0) == 0)) {
        *(param_2 + 0x1c6) = 1;
    }
    if ((uVar6 & 0x30) != 0) {
        *(param_2 + 0x1c6) = 1;
    }
    goto code_r0x08003c2c;
code_r0x080039fc:
    iVar19 = *(param_2 + 0xd0);
code_r0x08003a00:
    *(param_2 + 0xd0) = iVar19 - iVar17;
code_r0x08003a08:
    if (((uVar6 >> 0x1e & 1) != 0) && (piVar16 = *(param_2 + 0xd8), piVar16 != NULL)) {
        iVar12 = *(param_2 + 0xb8);
        iVar11 = *(param_2 + 200);
        iVar14 = 0;
        if (iVar11 != 0) {
            iVar14 = iVar12 / iVar11;
        }
        iVar1 = iVar12 >> 3;
        iVar17 = iVar1;
        if (iVar12 != iVar14 * iVar11) {
            iVar14 = iVar11 + 7;
            if (-1 < iVar11) {
                iVar14 = iVar11;
            }
            iVar17 = (iVar14 >> 3) + 1;
        }
        iVar19 = *(param_2 + 0xcc);
        iVar17 = iVar17 * (*(param_2 + 0xb4) - *(param_2 + 0xbc));
        iVar14 = iVar19;
        if (iVar17 <= iVar19) {
            iVar14 = iVar17;
        }
        if (0 < iVar14) {
            iVar17 = 0;
            iVar9 = *piVar16 + (piVar16[2] - iVar19);
            do {
                iVar19 = 0;
                if (iVar11 != 0) {
                    iVar19 = iVar12 / iVar11;
                }
                iVar2 = iVar1;
                if (iVar12 != iVar19 * iVar11) {
                    iVar12 = iVar11 + 7;
                    if (-1 < iVar11) {
                        iVar12 = iVar11;
                    }
                    iVar2 = (iVar12 >> 3) + 1;
                }
                iVar12 = iVar14 - iVar17;
                if (iVar2 <= iVar14 - iVar17) {
                    iVar12 = iVar2;
                }
                if (iVar12 < 1) {
                    uVar10 = 0;
                }
                else {
                    iVar13 = iVar17;
                    uVar10 = iVar13 + 1;
                    if (iVar12 == 1) {
                        uVar7 = 0;
                        uVar15 = 0;
                        uVar18 = 0;
                    }
                    else {
                        uVar7 = *(iVar9 + uVar10);
                        uVar10 = iVar17 + 2U;
                        if (iVar12 == 2) {
                            uVar15 = 0;
                            uVar18 = 0;
                        }
                        else {
                            uVar15 = *(iVar9 + (iVar17 + 2U));
                            uVar10 = iVar17 + 3U;
                            if (iVar12 == 3) {
                                uVar18 = 0;
                            }
                            else {
                                if (iVar12 != 4) {
code_r0x08003c74:
    //WARNING: Does not return
                                    pcVar4 = SoftwareBreakpoint(1,0x8003c78);
                                    (*pcVar4)();
                                }
                                uVar18 = *(iVar9 + (iVar17 + 3U));
                                uVar10 = iVar17 + 4;
                            }
                        }
                    }
                    iVar17 = uVar10;
                    uVar10 = uVar15 << 0x10 | uVar18 << 0x18 | uVar7 << 8 | *(iVar9 + iVar13);
                }
                sym.writel_relaxed(uVar10,*(param_2 + 0x98) + 0x700);
                DataSynchronizationBarrier(3,3,0);
                if (iVar14 <= iVar17) goto code_r0x08003b58;
                iVar12 = *(param_2 + 0xb8);
                iVar11 = *(param_2 + 200);
            } while( true );
        }
        goto code_r0x08003b5c;
    }
    goto code_r0x08003b7c;
code_r0x08003b58:
    iVar19 = *(param_2 + 0xcc);
code_r0x08003b5c:
    *(param_2 + 0xcc) = iVar19 - iVar14;
    if (iVar19 - iVar14 == 0) {
        sym.writel_relaxed(0,*(param_2 + 0x98) + 0x80c);
        DataSynchronizationBarrier(3,3,0);
    }
code_r0x08003b7c:
    if ((uVar6 & 0x31) != 0) {
        *(param_2 + 0x1c6) = 1;
        if (*(param_2 + 0xcc) != 0) {
            sym.writel_relaxed(0,*(param_2 + 0x98) + 0x80c);
            ipc_log_string(*(param_2 + 0x1b8),"%s:Premature Done.tx_rem%d bpw%d\n","geni_spi_irq",*(param_2 + 0xcc),
                           *(param_2 + 200));
            if (*(param_2 + 0xa8) != 0) {
                sym.spi_trace_log(*(param_2 + 0xa8),0x800055c,0x8000cf1,*(param_2 + 0xcc));
            }
        }
        if (*(param_2 + 0xd0) != 0) {
            ipc_log_string(*(param_2 + 0x1b8),"%s:Premature Done.rx_rem%d bpw%d\n","geni_spi_irq",*(param_2 + 0xd0),
                           *(param_2 + 200));
            if (*(param_2 + 0xa8) != 0) {
                sym.spi_trace_log(*(param_2 + 0xa8),0x800143d,0x8000cf1,*(param_2 + 0xd0));
            }
        }
    }
code_r0x08003c2c:
    sym.writel_relaxed(uVar6,*(param_2 + 0x98) + 0x618);
    if (*(param_2 + 0x1c6) != '\0') {
        *(param_2 + 0x1c6) = 0;
        complete(param_2 + 0xe0);
    }
    return 1;
}


// ===== sym.spi_geni_remove.42938a07f9c58b1377b5ae1566af1187.cfi_jt @ 0x08002400 (size 8) =====

uint64_t sym.spi_geni_remove.42938a07f9c58b1377b5ae1566af1187.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    ulong uVar2;
    ulong uVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong uVar9;
    uint64_t arg4;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *(param_1 + 0xa8);
    iVar11 = *(iVar10 + 0x98);
    sysfs_remove_file_ns(param_1 + 0x10,obj.dev_attr_spi_slave_state,0);
    uVar9 = *(iVar11 + 0x18);
    uVar2 = *(iVar11 + 0x60);
    uVar3 = *(iVar11 + 0x68);
    clk_disable(uVar9);
    clk_unprepare(uVar9);
    clk_disable(uVar2);
    clk_unprepare(uVar2);
    clk_disable(uVar3);
    clk_unprepare(uVar3);
    uVar7 = geni_icc_disable(iVar11);
    arg4 = uVar7;
    if (uVar7 != 0) {
        ipc_log_string(*(iVar11 + 0x1b8),"%s failing at geni_icc_disable ret=%d\n","spi_geni_remove",arg4);
        if (*(iVar11 + 0xa8) != 0) {
            sym.spi_trace_log(*(iVar11 + 0xa8),0x8001562,0x8001a21,arg4);
        }
    }
    spi_unregister_controller(iVar10);
    puVar1 = param_1 + 0x208;
    uVar8 = *puVar1;
    do {
        uVar7 = uVar8;
        if (uVar7 == 0) break;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar4 = *puVar1;
            uVar8 = uVar4;
            if (uVar4 != uVar7) goto code_r0x080036a8;
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
                *puVar1 = uVar7 - 1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
code_r0x080036a8:
    } while (uVar7 != uVar4);
    __pm_runtime_disable(param_1 + 0x10,1);
    return arg4;
}


// ===== sym.spi_geni_probe.42938a07f9c58b1377b5ae1566af1187.cfi_jt @ 0x08002408 (size 8) =====

uint64_t sym.spi_geni_probe.42938a07f9c58b1377b5ae1566af1187.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    ulong uVar2;
    uint32_t uVar3;
    char cVar4;
    ulong uVar5;
    ulong uVar6;
    ulong uVar7;
    bool bVar8;
    int iVar9;
    uint32_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t *piVar13;
    ulong uVar14;
    int64_t iVar15;
    char *pcVar16;
    uint64_t uVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar18;
    int64_t *piVar19;
    int64_t *piVar20;
    uint64_t uVar21;
    ulong unaff_x30;
    char acStack_80 [8];
    char acStack_78 [8];
    char acStack_70 [8];
    uchar uStack_68;
    unkbyte7 Stack_67;
    uchar uStack_60;
    unkbyte7 Stack_5f;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_58 = *(iVar15 + 0x5e0);
    iVar15 = param_1 + 0x10;
    Stack_5f = 0;
    Stack_67 = 0;
    uStack_60 = 0;
    iVar11 = of_find_property(*(param_1 + 0x300),"qcom,slv-ctrl",0);
    iVar12 = __spi_alloc_controller(iVar15,0x1d8,iVar11 != 0);
    if (iVar12 == 0) {
        _dev_err(iVar15,"Failed to alloc spi struct\n");
        uVar21 = 0xfffffff4;
        _dev_info(iVar15,"%s: ret:%d\n","spi_geni_probe",0xfffffff4);
        goto code_r0x080031b8;
    }
    if (iVar11 != 0) {
        *(iVar12 + 0x558) = sym.spi_slv_abort.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
    }
    *(param_1 + 0xa8) = iVar12;
    piVar19 = *(iVar12 + 0x98);
    uStack_68 = 0;
    piVar19[0x15] = iVar15;
    piVar19[1] = iVar15;
    uVar6 = str.M___DRIVER_GENI_SPI_Init._16_8_;
    uVar18 = str.M___DRIVER_GENI_SPI_Init._8_8_;
    uVar14 = str.M___DRIVER_GENI_SPI_Init._0_8_;
    piVar19[2] = *(*(param_1 + 0x70) + 0x98);
    uVar7 = str.M___DRIVER_GENI_SPI_Init._16_8_;
    uVar5 = str.M___DRIVER_GENI_SPI_Init._8_8_;
    uVar2 = str.M___DRIVER_GENI_SPI_Init._0_8_;
    str.M___DRIVER_GENI_SPI_Init[0] = uVar14;
    str.M___DRIVER_GENI_SPI_Init[1] = SUB81(uVar14,1);
    str.M___DRIVER_GENI_SPI_Init[2] = SUB81(uVar14,2);
    str.M___DRIVER_GENI_SPI_Init[3] = SUB81(uVar14,3);
    str.M___DRIVER_GENI_SPI_Init[4] = SUB81(uVar14,4);
    str.M___DRIVER_GENI_SPI_Init[5] = SUB81(uVar14,5);
    str.M___DRIVER_GENI_SPI_Init[6] = SUB81(uVar14,6);
    str.M___DRIVER_GENI_SPI_Init[7] = SUB81(uVar14,7);
    acStack_80[0] = str.M___DRIVER_GENI_SPI_Init[0];
    acStack_80[1] = str.M___DRIVER_GENI_SPI_Init[1];
    acStack_80[2] = str.M___DRIVER_GENI_SPI_Init[2];
    acStack_80[3] = str.M___DRIVER_GENI_SPI_Init[3];
    acStack_80[4] = str.M___DRIVER_GENI_SPI_Init[4];
    acStack_80[5] = str.M___DRIVER_GENI_SPI_Init[5];
    acStack_80[6] = str.M___DRIVER_GENI_SPI_Init[6];
    acStack_80[7] = str.M___DRIVER_GENI_SPI_Init[7];
    str.M___DRIVER_GENI_SPI_Init[8] = uVar18;
    str.M___DRIVER_GENI_SPI_Init[9] = SUB81(uVar18,1);
    str.M___DRIVER_GENI_SPI_Init[10] = SUB81(uVar18,2);
    str.M___DRIVER_GENI_SPI_Init[0xb] = SUB81(uVar18,3);
    str.M___DRIVER_GENI_SPI_Init[0xc] = SUB81(uVar18,4);
    str.M___DRIVER_GENI_SPI_Init[0xd] = SUB81(uVar18,5);
    str.M___DRIVER_GENI_SPI_Init[0xe] = SUB81(uVar18,6);
    str.M___DRIVER_GENI_SPI_Init[0xf] = SUB81(uVar18,7);
    acStack_78[0] = str.M___DRIVER_GENI_SPI_Init[8];
    acStack_78[1] = str.M___DRIVER_GENI_SPI_Init[9];
    acStack_78[2] = str.M___DRIVER_GENI_SPI_Init[10];
    acStack_78[3] = str.M___DRIVER_GENI_SPI_Init[0xb];
    acStack_78[4] = str.M___DRIVER_GENI_SPI_Init[0xc];
    acStack_78[5] = str.M___DRIVER_GENI_SPI_Init[0xd];
    acStack_78[6] = str.M___DRIVER_GENI_SPI_Init[0xe];
    acStack_78[7] = str.M___DRIVER_GENI_SPI_Init[0xf];
    str.M___DRIVER_GENI_SPI_Init[0x10] = uVar6;
    str.M___DRIVER_GENI_SPI_Init[0x11] = SUB81(uVar6,1);
    str.M___DRIVER_GENI_SPI_Init[0x12] = SUB81(uVar6,2);
    str.M___DRIVER_GENI_SPI_Init[0x13] = SUB81(uVar6,3);
    str.M___DRIVER_GENI_SPI_Init[0x14] = SUB81(uVar6,4);
    str.M___DRIVER_GENI_SPI_Init[0x15] = SUB81(uVar6,5);
    str.M___DRIVER_GENI_SPI_Init[0x16] = SUB81(uVar6,6);
    str.M___DRIVER_GENI_SPI_Init[0x17] = SUB81(uVar6,7);
    acStack_70[0] = str.M___DRIVER_GENI_SPI_Init[0x10];
    acStack_70[1] = str.M___DRIVER_GENI_SPI_Init[0x11];
    acStack_70[2] = str.M___DRIVER_GENI_SPI_Init[0x12];
    acStack_70[3] = str.M___DRIVER_GENI_SPI_Init[0x13];
    acStack_70[4] = str.M___DRIVER_GENI_SPI_Init[0x14];
    acStack_70[5] = str.M___DRIVER_GENI_SPI_Init[0x15];
    acStack_70[6] = str.M___DRIVER_GENI_SPI_Init[0x16];
    acStack_70[7] = str.M___DRIVER_GENI_SPI_Init[0x17];
    str.M___DRIVER_GENI_SPI_Init._0_8_ = uVar2;
    str.M___DRIVER_GENI_SPI_Init._8_8_ = uVar5;
    str.M___DRIVER_GENI_SPI_Init._16_8_ = uVar7;
    *(iVar12 + 0x2f0) = *(param_1 + 0x300);
    if (piVar19[2] == 0) {
        _dev_err(iVar15,"SE Wrapper is NULL, deferring probe\n");
        uVar21 = 0xfffffdfb;
        goto code_r0x080031b8;
    }
    iVar11 = of_find_property(*(param_1 + 0x300),"qcom,le-vm",0);
    if (iVar11 != 0) {
        *(piVar19 + 0x1c3) = 1;
        _dev_info(iVar15,"LE-VM usecase\n");
    }
    iVar11 = of_find_property(*(param_1 + 0x300),"qcom,la-vm",0);
    if (iVar11 != 0) {
        *(piVar19 + 0x1c4) = 1;
        _dev_info(iVar15,"LA-VM usecase\n");
    }
    piVar19[0x20] = *(param_1 + 0x70);
    if (*(piVar19 + 0x1c3) == '\0') {
        uVar10 = geni_icc_get(piVar19,"qup-memory");
        if (uVar10 == 0) {
            *(piVar19 + 7) = 51000;
            *(piVar19 + 9) = 590000;
            *(piVar19 + 0xb) = 0x12c00;
            uVar10 = geni_icc_set_bw(piVar19);
            if (uVar10 == 0) {
                uVar21 = geni_icc_enable(piVar19);
                if ((uVar21 == 0) && (uVar21 = geni_icc_enable(piVar19), uVar21 == 0)) {
                    uVar21 = devm_pinctrl_get(iVar15);
                    piVar19[0xe] = uVar21;
                    if ((uVar21 == 0) || (0xfffffffffffff000 < uVar21)) {
                        _dev_err(iVar15,"No pinctrl config specified!\n");
                        uVar21 = *(piVar19 + 0xe);
                    }
                    else {
                        uVar21 = pinctrl_lookup_state(uVar21,"default");
                        piVar19[0xf] = uVar21;
                        if ((uVar21 == 0) || (0xfffffffffffff000 < uVar21)) {
                            _dev_err(iVar15,"No default config specified!\n");
                            uVar21 = *(piVar19 + 0xf);
                        }
                        else {
                            uVar21 = pinctrl_lookup_state(piVar19[0xe],"sleep");
                            piVar19[0x10] = uVar21;
                            if ((uVar21 == 0) || (0xfffffffffffff000 < uVar21)) {
                                _dev_err(iVar15,"No sleep config specified!\n");
                                uVar21 = *(piVar19 + 0x10);
                            }
                            else {
                                uVar10 = pinctrl_select_state(piVar19[0xe],uVar21);
                                if (uVar10 != 0) {
                                    uVar21 = uVar10;
                                    pcVar16 = "Failed to set sleep configuration\n";
                                    goto code_r0x08003004;
                                }
                                uVar21 = devm_clk_get(iVar15,"se-clk");
                                piVar19[3] = uVar21;
                                if (uVar21 < 0xfffffffffffff001) {
                                    uVar21 = devm_clk_get(*(param_1 + 0x70),"m-ahb");
                                    piVar19[0xc] = uVar21;
                                    if (uVar21 < 0xfffffffffffff001) {
                                        uVar21 = devm_clk_get(*(param_1 + 0x70),"s-ahb");
                                        piVar19[0xd] = uVar21;
                                        if (uVar21 < 0xfffffffffffff001) {
                                            uVar14 = platform_get_irq(param_1,0);
                                            *(piVar19 + 0x14) = uVar14;
                                            if (uVar14 < 0) {
                                                _dev_err(iVar15,"Err getting IRQ\n");
                                                uVar21 = *(piVar19 + 0x14);
                                            }
                                            else {
                                                irq_modify_status(uVar14,0,0x1000);
                                                uVar10 = devm_request_threaded_irq
                                                                   (iVar15,piVar19[0x14],
                                                                    
                                                            sym.geni_spi_irq.42938a07f9c58b1377b5ae1566af1187.cfi_jt,0
                                                            ,4,"spi_geni",piVar19);
                                                piVar20 = piVar19;
                                                if (uVar10 == 0) goto code_r0x08002f58;
                                                uVar21 = uVar10;
                                                _dev_err(iVar15,"Request_irq failed:%d: err:%d\n",piVar19[0x14],
                                                         uVar21);
                                            }
                                            goto code_r0x0800300c;
                                        }
                                        pcVar16 = "Err getting S AHB clk %d\n";
                                    }
                                    else {
                                        pcVar16 = "Err getting M AHB clk %d\n";
                                    }
                                    _dev_err(iVar15,pcVar16,uVar21 & 0xffffffff);
                                }
                                else {
                                    _dev_err(iVar15,"Err getting SE Core clk %d\n",uVar21 & 0xffffffff);
                                }
                            }
                        }
                    }
                    goto code_r0x0800300c;
                }
                uVar21 = uVar21 & 0xffffffff;
                pcVar16 = "%s: icc enable failed ret:%d\n";
            }
            else {
                uVar21 = uVar10;
                pcVar16 = "%s: icc set bw failed ret:%d\n";
            }
code_r0x080031a4:
            _dev_err(iVar15,pcVar16,"spi_geni_probe",uVar21);
            goto code_r0x080031b8;
        }
        uVar21 = uVar10;
        pcVar16 = "Error geni_se_resources_init\n";
code_r0x08003004:
        _dev_err(iVar15,pcVar16);
    }
    else {
        piVar20 = NULL;
code_r0x08002f58:
        uVar14 = 0xffffffffffffffff;
        iVar9 = dma_set_mask(iVar15,0xffffffffffffffff);
        if (iVar9 != 0) {
            uVar14 = 0xffffffff;
            uVar10 = dma_set_mask(iVar15,0xffffffff);
            if (uVar10 != 0) {
                uVar21 = uVar10;
                pcVar16 = "could not set DMA mask\n";
                goto code_r0x08003004;
            }
        }
        dma_set_coherent_mask(iVar15,uVar14);
        iVar9 = of_property_read_variable_u32_array(*(param_1 + 0x300),"spi-max-frequency",iVar12 + 0x3b8,1,0);
        if (iVar9 < 0) {
            pcVar16 = "Max frequency not specified.\n";
        }
        else {
            piVar13 = platform_get_resource_byname(param_1,0x200,"se_phys");
            if (piVar13 != NULL) {
                iVar11 = of_find_property(*(param_1 + 0x300),"qcom,set-miso-sampling",0);
                *(piVar19 + 0x1c7) = iVar11 != 0;
                if (iVar11 != 0) {
                    iVar9 = of_property_read_variable_u32_array
                                      (*(param_1 + 0x300),"qcom,miso-sampling-ctrl-val",piVar19 + 0x39,1,0);
                    if (-1 < iVar9) {
                        _dev_info(iVar15,"MISO_SAMPLING_SET: %d\n",piVar19[0x39]);
                    }
                }
                iVar11 = of_find_property(*(param_1 + 0x300),"qcom,disable-dma",0);
                *(piVar19 + 0x1cd) = iVar11 != 0;
                iVar11 = of_find_property(*(param_1 + 0x300),"qcom,master-cross-connect",0);
                if (iVar11 != 0) {
                    *(piVar19 + 0x1d1) = 1;
                }
                of_property_read_variable_u32_array
                          (*(param_1 + 0x300),"qcom,xfer-timeout-offset",piVar19 + 0x1d4,1,0);
                if (*(piVar19 + 0x1d4) != 0) {
                    _dev_info(iVar15,"%s: DT based xfer timeout offset: %d\n","spi_get_dt_property");
                }
                iVar11 = of_find_property(*(param_1 + 0x300),"qcom,rt",0);
                *(iVar12 + 0x4fb) = iVar11 != 0;
                iVar11 = of_find_property(*(param_1 + 0x300),"qcom,disable-autosuspend",0);
                *(piVar19 + 0x1c5) = iVar11 != 0;
                iVar11 = of_find_property(*(param_1 + 0x300),"qcom,shared_se",0);
                if (iVar11 == 0) {
                    iVar11 = of_find_property(*(param_1 + 0x300),"qcom,shared_ee",0);
                    bVar8 = iVar11 != 0;
                }
                else {
                    bVar8 = true;
                    *(piVar19 + 0x1c2) = 1;
                }
                *(piVar19 + 0x1c1) = bVar8;
                iVar11 = of_find_property(*(param_1 + 0x300),"slv-cross-connected",0);
                *(piVar19 + 0x3a) = iVar11 != 0;
                piVar19[0x11] = *piVar13;
                piVar19[0x12] = (piVar13[1] - *piVar13) + 1;
                iVar11 = devm_ioremap(iVar15,*piVar13,(piVar13[1] - *piVar13) + 1);
                piVar19[0x13] = iVar11;
                if (iVar11 == 0) {
                    _dev_err(iVar15,"Err IO mapping iomem\n");
                    uVar21 = 0xfffffff4;
                    goto code_r0x0800300c;
                }
                *piVar19 = iVar11;
                *(iVar12 + 0x3a8) = 0x27;
                *(iVar12 + 0x530) = sym.spi_geni_prepare_transfer_hardware.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
                *(iVar12 + 0x3b0) = 0xfffffff8;
                *(iVar12 + 0x3a2) = 4;
                *(iVar12 + 0x4fc) = 0;
                *(iVar12 + 0x548) = sym.spi_geni_prepare_message.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
                *(iVar12 + 0x550) = sym.spi_geni_unprepare_message.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
                *(iVar12 + 0x568) = sym.spi_geni_transfer_one.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
                *(iVar12 + 0x540) = sym.spi_geni_unprepare_transfer_hardware.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
                *(piVar19 + 0x1c) = 0;
                __init_swait_queue_head(piVar19 + 0x1d,"&x->wait",reloc.__traceiter_spi_log_info.cfi_jt);
                *(piVar19 + 0x2c) = 0;
                __init_swait_queue_head(piVar19 + 0x2d,"&x->wait",reloc.__traceiter_spi_log_info.cfi_jt);
                *(piVar19 + 0x30) = 0;
                __init_swait_queue_head(piVar19 + 0x31,"&x->wait",reloc.__traceiter_spi_log_info.cfi_jt);
                __pm_runtime_set_status(iVar15,2);
                if (*(piVar19 + 0x1c5) == '\0') {
                    pm_runtime_set_autosuspend_delay(iVar15,0xfa);
                    __pm_runtime_use_autosuspend(iVar15,1);
                }
                pm_runtime_enable(iVar15);
                iVar11 = piVar19[0x15][0xe];
                if (iVar11 == 0) {
                    iVar11 = *piVar19[0x15];
                }
                iVar11 = ipc_log_context_create(4,iVar11,0);
                piVar19[0x37] = iVar11;
                if (iVar11 == 0) {
                    _dev_err(iVar15,"Error creating IPC logs\n");
                }
                if (*(piVar19 + 0x1c3) == '\0') {
                    ipc_log_string(piVar19[0x37],"%s: GENI_TO_CORE:%d CPU_TO_GENI:%d GENI_TO_DDR:%d\n",
                                   "spi_geni_probe",piVar20[7],piVar20[9],piVar20[0xb]);
                    if (piVar19[0x15] != 0) {
                        sym.spi_trace_log(piVar19[0x15],0x8000dbb,0x8000c5d,*(piVar20 + 7));
                    }
                    if ((*(piVar19 + 0x1c3) == '\0') && (uVar10 = geni_icc_disable(piVar20), uVar10 != 0)) {
                        uVar21 = uVar10;
                        pcVar16 = "%s: icc disable failed ret:%d\n";
                        goto code_r0x080031a4;
                    }
                }
                uVar10 = spi_register_controller(iVar12);
                if (uVar10 == 0) {
                    uVar21 = sysfs_create_file_ns(piVar19[0x15],obj.dev_attr_spi_slave_state,0);
                    uVar21 = uVar21 & 0xffffffff;
                    *(piVar19 + 0x1b4) = 0;
                    _dev_info(iVar15,"%s: completed %d\n","spi_geni_probe",uVar21);
                    snprintf(acStack_80,0x28,"M - DRIVER GENI_SPI_%d Ready",*(iVar12 + 0x3a0));
                    goto code_r0x080031b8;
                }
                uVar21 = uVar10;
                pcVar16 = "Failed to register SPI master\n";
                goto code_r0x08003004;
            }
            pcVar16 = "Err getting IO region\n";
        }
        _dev_err(iVar15,pcVar16);
        uVar21 = 0xfffffffa;
    }
code_r0x0800300c:
    _dev_info(iVar15,"%s: ret:%d\n","spi_geni_probe",uVar21 & 0xffffffff);
    put_device(iVar12);
code_r0x080031b8:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_58) {
        return uVar21 & 0xffffffff;
    }
    iVar15 = __stack_chk_fail();
    *extraout_x18 = sym.spi_geni_remove;
    iVar11 = *(iVar15 + 0xa8);
    iVar12 = *(iVar11 + 0x98);
    sysfs_remove_file_ns(iVar15 + 0x10,obj.dev_attr_spi_slave_state,0);
    uVar18 = *(iVar12 + 0x18);
    uVar14 = *(iVar12 + 0x60);
    uVar2 = *(iVar12 + 0x68);
    clk_disable(uVar18);
    clk_unprepare(uVar18);
    clk_disable(uVar14);
    clk_unprepare(uVar14);
    clk_disable(uVar2);
    clk_unprepare(uVar2);
    uVar10 = geni_icc_disable(iVar12);
    uVar21 = uVar10;
    if (uVar10 != 0) {
        ipc_log_string(*(iVar12 + 0x1b8),"%s failing at geni_icc_disable ret=%d\n","spi_geni_remove",uVar21);
        if (*(iVar12 + 0xa8) != 0) {
            sym.spi_trace_log(*(iVar12 + 0xa8),0x8001562,0x8001a21,uVar21);
        }
    }
    spi_unregister_controller(iVar11);
    puVar1 = iVar15 + 0x208;
    uVar17 = *puVar1;
    do {
        uVar10 = uVar17;
        if (uVar10 == 0) break;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar3 = *puVar1;
            uVar17 = uVar3;
            if (uVar3 != uVar10) goto code_r0x080036a8;
            cVar4 = '\x01';
            bVar8 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar8) {
                *puVar1 = uVar10 - 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
code_r0x080036a8:
    } while (uVar10 != uVar3);
    __pm_runtime_disable(iVar15 + 0x10,1);
    return uVar21;
}


// ===== sym.spi_geni_resume.42938a07f9c58b1377b5ae1566af1187.cfi_jt @ 0x08002410 (size 8) =====

ulong sym.spi_geni_resume.42938a07f9c58b1377b5ae1566af1187.cfi_jt(void)

{
    return 0;
}


// ===== sym.spi_geni_runtime_suspend.42938a07f9c58b1377b5ae1566af1187.cfi_jt @ 0x08002418 (size 8) =====

uint32_t sym.spi_geni_runtime_suspend.42938a07f9c58b1377b5ae1566af1187.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong uVar2;
    uint32_t uVar3;
    uint64_t arg4;
    ulong *in_x18;
    int64_t iVar4;
    int64_t arg1;
    int64_t *piVar5;
    ulong uVar6;
    uint64_t arg4_00;
    code *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    arg4 = 0;
    iVar4 = *(arg1 + 0x98);
    ipc_log_string(*(iVar4 + 0x1b8),"%s: %d\n","spi_geni_runtime_suspend");
    if (*(iVar4 + 0xa8) != 0) {
        arg4 = 0;
        sym.spi_trace_log(*(iVar4 + 0xa8),0x80011e7,0x8001ae0,0);
    }
    disable_irq(*(iVar4 + 0xa0));
    if (*(iVar4 + 0x1c3) != '\0') {
        sym.spi_geni_unlock_bus(arg1);
        return 0;
    }
    if ((*(iVar4 + 0x1c2) == '\0') || (piVar5 = *(iVar4 + 0x120), piVar5 == NULL)) goto code_r0x08007858;
    pcVar7 = *(*piVar5 + 0x168);
    if (pcVar7 == NULL) {
        arg4_00 = 0xffffffda;
code_r0x08007918:
        arg4 = arg4_00;
        ipc_log_string(*(iVar4 + 0x1b8),"%s dmaengine_pause failed: %d\n","spi_geni_runtime_suspend");
        if (*(iVar4 + 0xa8) == 0) {
            _printk(0x80012c6,"spi_geni_runtime_suspend",arg4_00);
        }
        else {
            arg4 = arg4_00;
            _dev_err(*(iVar4 + 0xa8),"%s dmaengine_pause failed: %d\n","spi_geni_runtime_suspend");
        }
        if (*(iVar4 + 0xa8) != 0) {
            sym.spi_trace_log(*(iVar4 + 0xa8),0x80005b9,0x8001ae0,arg4_00);
            arg4 = arg4_00;
        }
    }
    else {
        __cfi_slowpath_diag(0x146502001565ea5c,pcVar7,0x80004d0);
        uVar3 = (*pcVar7)(piVar5);
        if (uVar3 != 0) {
            arg4_00 = uVar3;
            goto code_r0x08007918;
        }
    }
    ipc_log_string(*(iVar4 + 0x1b8),"%s: Shared_SE dma_pause\n","spi_geni_runtime_suspend");
    if (*(iVar4 + 0xa8) != 0) {
        sym.spi_trace_log(*(iVar4 + 0xa8),0x8000806,0x8001ae0,arg4);
    }
code_r0x08007858:
    if ((*(iVar4 + 0x1c4) == '\0') &&
       (((*(iVar4 + 0x1c1) == '\0' || (*(iVar4 + 0x1c2) != '\0')) && (*(iVar4 + 0x1c0) != '\0')))) {
        uVar6 = *(iVar4 + 0x18);
        uVar1 = *(iVar4 + 0x60);
        uVar2 = *(iVar4 + 0x68);
        clk_disable(uVar6);
        clk_unprepare(uVar6);
        clk_disable(uVar1);
        clk_unprepare(uVar1);
        clk_disable(uVar2);
        clk_unprepare(uVar2);
    }
    else {
        geni_se_resources_off(iVar4);
    }
    uVar3 = geni_icc_disable(iVar4);
    if (uVar3 != 0) {
        ipc_log_string(*(iVar4 + 0x1b8),"%s failing at geni_icc_disable ret=%d\n","spi_geni_runtime_suspend",uVar3);
        if (*(iVar4 + 0xa8) != 0) {
            sym.spi_trace_log(*(iVar4 + 0xa8),0x8001562,0x8001ae0,uVar3);
        }
    }
    return uVar3;
}


// ===== sym.spi_geni_runtime_resume.42938a07f9c58b1377b5ae1566af1187.cfi_jt @ 0x08002420 (size 8) =====

uint64_t sym.spi_geni_runtime_resume.42938a07f9c58b1377b5ae1566af1187.cfi_jt(int64_t param_1)

{
    char cVar1;
    uint32_t uVar2;
    char *arg2;
    char *arg3;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t *piVar5;
    uint64_t arg4;
    int64_t arg1;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    uVar3 = 0;
    iVar4 = *(arg1 + 0x98);
    ipc_log_string(*(iVar4 + 0x1b8),"%s: %d\n","spi_geni_runtime_resume");
    if (*(iVar4 + 0xa8) != 0) {
        uVar3 = 0;
        sym.spi_trace_log(*(iVar4 + 0xa8),0x80011e7,0x80013b4,0);
    }
    if (*(iVar4 + 0x1c3) != '\0') {
        if ((*(iVar4 + 0x1c0) != '\0') && (piVar5 = *(iVar4 + 0x120), piVar5 != NULL)) {
            cVar1 = *(iVar4 + 0x1d2);
            if (cVar1 != '\0') {
                *(iVar4 + 0x130) = 5;
            }
            pcVar6 = *(*piVar5 + 0x170);
            if (pcVar6 == NULL) {
                uVar2 = 0xffffffda;
            }
            else {
                __cfi_slowpath_diag(0x146502001565ea5c,pcVar6,0x80004f0);
                uVar2 = (*pcVar6)(piVar5);
                cVar1 = *(iVar4 + 0x1d2);
            }
            if (cVar1 != '\0') {
                *(iVar4 + 0x130) = 0;
                *(iVar4 + 0x1d2) = 0;
            }
            if (uVar2 != 0) {
                ipc_log_string(*(iVar4 + 0x1b8),"%s failed: tx:%d status:%d\n","spi_geni_gpi_suspend_resume",uVar2,0
                              );
                if (*(iVar4 + 0xa8) == 0) {
                    uVar3 = 0;
                    _printk(0x8001a31,"spi_geni_gpi_suspend_resume",uVar2);
                }
                else {
                    uVar3 = uVar2;
                    _dev_err(*(iVar4 + 0xa8),"%s failed: tx:%d status:%d\n","spi_geni_gpi_suspend_resume",uVar3,0);
                }
                if (*(iVar4 + 0xa8) != 0) {
                    uVar3 = uVar2;
                    sym.spi_trace_log(*(iVar4 + 0xa8),0x80015f9,0x800081f,uVar3);
                }
                ipc_log_string(*(iVar4 + 0x1b8),"%s:\n","spi_geni_levm_resume_proc");
                if (*(iVar4 + 0xa8) != 0) {
                    sym.spi_trace_log(*(iVar4 + 0xa8),0x8000fc4,0x8000d55,uVar3);
                    return 0xffffffea;
                }
                return 0xffffffea;
            }
        }
        if ((*(iVar4 + 0xc0) == '\0') && (uVar2 = sym.spi_geni_mas_setup(arg1), uVar2 != 0)) {
            uVar3 = uVar2;
            ipc_log_string(*(iVar4 + 0x1b8),"%s mas_setup failed: %d\n","spi_geni_levm_resume_proc",uVar3);
            if (*(iVar4 + 0xa8) == 0) {
                _printk(0x80017e8,"spi_geni_levm_resume_proc",uVar3);
            }
            else {
                _dev_err(*(iVar4 + 0xa8),"%s mas_setup failed: %d\n","spi_geni_levm_resume_proc",uVar3);
            }
            iVar4 = *(iVar4 + 0xa8);
            if (iVar4 == 0) {
                return uVar3;
            }
            arg2 = "%s mas_setup failed: %d\n";
        }
        else {
            uVar2 = sym.spi_geni_lock_bus(arg1);
            uVar3 = uVar2;
            if (uVar2 == 0) {
                return 0;
            }
            ipc_log_string(*(iVar4 + 0x1b8),"%s lock_bus failed: %d\n","spi_geni_levm_resume_proc",uVar3);
            if (*(iVar4 + 0xa8) == 0) {
                _printk(0x800073c,"spi_geni_levm_resume_proc",uVar3);
            }
            else {
                _dev_err(*(iVar4 + 0xa8),"%s lock_bus failed: %d\n","spi_geni_levm_resume_proc",uVar3);
            }
            iVar4 = *(iVar4 + 0xa8);
            if (iVar4 == 0) {
                return uVar3;
            }
            arg2 = "%s lock_bus failed: %d\n";
        }
        arg3 = "spi_geni_levm_resume_proc";
        goto code_r0x08007b98;
    }
    if ((*(iVar4 + 0x1c2) != '\0') && (piVar5 = *(iVar4 + 0x120), piVar5 != NULL)) {
        pcVar6 = *(*piVar5 + 0x170);
        if (pcVar6 == NULL) {
            arg4 = 0xffffffda;
code_r0x08007d00:
            uVar3 = arg4;
            ipc_log_string(*(iVar4 + 0x1b8),"%s dmaengine_resume failed: %d\n","spi_geni_runtime_resume");
            if (*(iVar4 + 0xa8) == 0) {
                _printk(0x8000ecf,"spi_geni_runtime_resume",arg4);
            }
            else {
                uVar3 = arg4;
                _dev_err(*(iVar4 + 0xa8),"%s dmaengine_resume failed: %d\n","spi_geni_runtime_resume");
            }
            if (*(iVar4 + 0xa8) != 0) {
                sym.spi_trace_log(*(iVar4 + 0xa8),0x80012e7,0x80013b4,arg4);
                uVar3 = arg4;
            }
        }
        else {
            __cfi_slowpath_diag(0x146502001565ea5c,pcVar6,0x80004f0);
            uVar2 = (*pcVar6)(piVar5);
            if (uVar2 != 0) {
                arg4 = uVar2;
                goto code_r0x08007d00;
            }
        }
        ipc_log_string(*(iVar4 + 0x1b8),"%s: Shared_SE dma_resume call\n","spi_geni_runtime_resume");
        if (*(iVar4 + 0xa8) != 0) {
            sym.spi_trace_log(*(iVar4 + 0xa8),0x80015da,0x80013b4,uVar3);
        }
    }
    if (((*(iVar4 + 0x1c1) == '\0') && (*(iVar4 + 0x1c4) == '\0')) && (*(iVar4 + 0x1c0) != '\0')) {
        uVar2 = geni_icc_enable(iVar4);
        if (uVar2 != 0) goto code_r0x08007b60;
        uVar2 = sym.geni_se_common_clks_on(*(iVar4 + 0x18),*(iVar4 + 0x60),*(iVar4 + 0x68));
        uVar3 = uVar2;
        if (uVar2 == 0) {
            return 0;
        }
        ipc_log_string(*(iVar4 + 0x1b8),"%s: Error %d turning on clocks\n","spi_geni_runtime_resume",uVar3);
        iVar4 = *(iVar4 + 0xa8);
        if (iVar4 == 0) {
            return uVar3;
        }
        arg2 = "%s: Error %d turning on clocks\n";
    }
    else {
        uVar2 = geni_icc_enable(iVar4);
        if (uVar2 == 0) {
            uVar3 = geni_se_resources_on(iVar4);
            enable_irq(*(iVar4 + 0xa0));
            return uVar3 & 0xffffffff;
        }
code_r0x08007b60:
        uVar3 = uVar2;
        ipc_log_string(*(iVar4 + 0x1b8),"%s failing at geni icc enable ret=%d\n","spi_geni_runtime_resume",uVar3);
        iVar4 = *(iVar4 + 0xa8);
        if (iVar4 == 0) {
            return uVar3;
        }
        arg2 = "%s failing at geni icc enable ret=%d\n";
    }
    arg3 = "spi_geni_runtime_resume";
code_r0x08007b98:
    sym.spi_trace_log(iVar4,arg2,arg3,uVar3);
    return uVar3;
}


// ===== sym.spi_geni_suspend.42938a07f9c58b1377b5ae1566af1187.cfi_jt @ 0x08002428 (size 8) =====

uint32_t sym.spi_geni_suspend.42938a07f9c58b1377b5ae1566af1187.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    iVar3 = *(iVar2 + 0x98);
    if (*(iVar3 + 0x1b4) == '\0') {
        if (*(param_1 + 0x20c) != 2) {
            if (iVar2 + 0x4e0 != *(iVar2 + 0x4e0)) {
                return 0xfffffff0;
            }
            if (*(iVar2 + 0x4f0) != 0) {
                return 0xfffffff0;
            }
            ipc_log_string(*(iVar3 + 0x1b8),"%s: Force suspend","spi_geni_suspend");
            if (*(iVar3 + 0xa8) == 0) {
                _printk(0x8001242,"spi_geni_suspend");
            }
            else {
                _dev_err(*(iVar3 + 0xa8),"%s: Force suspend","spi_geni_suspend");
            }
            if (*(iVar3 + 0xa8) != 0) {
                sym.spi_trace_log(*(iVar3 + 0xa8),0x80013a2,0x8000ebe,param_4);
            }
            uVar1 = sym.spi_geni_runtime_suspend(param_1);
            if (uVar1 != 0) {
                ipc_log_string(*(iVar3 + 0x1b8),"Force suspend Failed:%d",uVar1);
                if (*(iVar3 + 0xa8) == 0) {
                    _printk(0x8000cc1,uVar1);
                }
                else {
                    _dev_err(*(iVar3 + 0xa8),"Force suspend Failed:%d",uVar1);
                }
                if (*(iVar3 + 0xa8) != 0) {
                    sym.spi_trace_log(*(iVar3 + 0xa8),0x80015c2,uVar1,param_4);
                    return uVar1;
                }
                return uVar1;
            }
            __pm_runtime_disable(param_1,1);
            __pm_runtime_set_status(param_1,2);
            pm_runtime_enable(param_1);
            return 0;
        }
    }
    else {
        if (*(param_1 + 0x20c) != 2) {
            ipc_log_string(*(iVar3 + 0x1b8),":%s: runtime PM is active\n","spi_geni_suspend");
            if (*(iVar3 + 0xa8) == 0) {
                _printk(0x8000f68,"spi_geni_suspend");
            }
            else {
                _dev_err(*(iVar3 + 0xa8),":%s: runtime PM is active\n","spi_geni_suspend");
            }
            if (*(iVar3 + 0xa8) != 0) {
                sym.spi_trace_log(*(iVar3 + 0xa8),0x8000ea3,0x8000ebe,param_4);
            }
            return 0xfffffff0;
        }
        ipc_log_string(*(iVar3 + 0x1b8),"%s System suspend not allowed while xfer in progress=%d\n","spi_geni_suspend"
                       ,0);
        if (*(iVar3 + 0xa8) != 0) {
            sym.spi_trace_log(*(iVar3 + 0xa8),0x8001589,0x8000ebe,0);
            return 0;
        }
    }
    return 0;
}


// ===== sym.spi_slave_state_store.42938a07f9c58b1377b5ae1566af1187.cfi_jt @ 0x08002430 (size 8) =====

ulong sym.spi_slave_state_store.42938a07f9c58b1377b5ae1566af1187.cfi_jt(void)

{
    return 1;
}


// ===== sym.__traceiter_spi_log_info @ 0x08002438 (size 104) =====

ulong sym.__traceiter_spi_log_info(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8008018;
    piVar1 = *0x8008018;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2,arg3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.trace_event_raw_event_spi_log_info @ 0x080024a8 (size 336) =====

//WARNING: Removing unreachable block (ram,0x080026e8)

void sym.trace_event_raw_event_spi_log_info(int64_t arg1,int64_t arg2,int64_t arg3)

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
        goto code_r0x080025b8;
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
            pcVar6 = SoftwareBreakpoint(0x800,0x80025f0);
            (*pcVar6)();
        }
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x080025b8:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return;
    }
    auVar13 = __stack_chk_fail();
    iVar10 = auVar13._0_8_;
    *extraout_x18 = sym.perf_trace_spi_log_info;
    pcStack_e8 = sym.perf_trace_spi_log_info;
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
            *(iStack_100 + 0x100) = ~(-1L << uVar8) & 0x80025f8;
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
                pcVar6 = SoftwareBreakpoint(0x800,0x8002798);
                (*pcVar6)();
            }
            perf_trace_run_bpf_submit(iVar9,iVar4,uStack_104,iVar10,1,iStack_100,piVar2,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_f8) {
        __stack_chk_fail();
        uVar5 = tpidr_el2;
        *extraout_x18_00 = 0x80027a0;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_spi_log_info @ 0x080025f8 (size 436) =====

void sym.perf_trace_spi_log_info(int64_t arg1,uint32_t arg2,int64_t arg3)

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
    uVar2 = 0x8001411;
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
                pcVar7 = SoftwareBreakpoint(0x800,0x8002798);
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
    *extraout_x18 = 0x80027a0;
    bpf_trace_run2(in_tmp_ldXn);
    return;
}


// ===== sym.__bpf_trace_spi_log_info @ 0x080027ac (size 36) =====

void sym.__bpf_trace_spi_log_info(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2();
    return;
}


// ===== sym.spi_trace_log @ 0x080027d0 (size 304) =====

void sym.spi_trace_log(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
            piVar4 = *0x8008018;
            piVar3 = *0x8008018;
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


// ===== sym.geni_spi_se_dump_dbg_regs @ 0x08002918 (size 728) =====

void sym.geni_spi_se_dump_dbg_regs(int64_t arg1,int64_t arg2,int64_t arg3)

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
                   "geni_spi_se_dump_dbg_regs",uVar18 & 0xffffffff,uVar1,uVar3,uVar4);
    if (*(arg1 + 8) != 0) {
        sym.spi_trace_log(*(arg1 + 8),0x80013cc,0x800068e,uVar18 & 0xffffffff);
    }
    ipc_log_string(arg3,"dma_rx_irq:0x%x, dma_tx_irq:0x%x, rx_fifo_sts:0x%x, tx_fifo_sts:0x%x\n",uVar6,uVar5,uVar7,
                   uVar8);
    if (*(arg1 + 8) != 0) {
        sym.spi_trace_log(*(arg1 + 8),0x80006a8,uVar6,uVar5);
    }
    ipc_log_string(arg3,"se_dma_dbg:0x%x, m_cmd_ctrl:0x%x, dma_rxlen:0x%x, dma_rxlen_in:0x%x\n",uVar9,uVar10,uVar11
                   ,uVar12);
    if (*(arg1 + 8) != 0) {
        sym.spi_trace_log(*(arg1 + 8),0x8000ac0,uVar9,uVar10);
    }
    ipc_log_string(arg3,"dma_txlen:0x%x, dma_txlen_in:0x%x s_irq_status:0x%x\n",uVar13,uVar14,uVar2);
    if (*(arg1 + 8) != 0) {
        sym.spi_trace_log(*(arg1 + 8),0x8000d6f,uVar13,uVar14);
    }
    ipc_log_string(arg3,"dma_txirq_en:0x%x, dma_rxirq_en:0x%x geni_m_irq_en:0x%x geni_s_irq_en:0x%x\n",
                   uVar19 & 0xffffffff,uVar17,uVar15,uVar16);
    if (*(arg1 + 8) != 0) {
        sym.spi_trace_log(*(arg1 + 8),0x8000510,uVar19 & 0xffffffff,uVar17);
    }
    return;
}


// ===== sym.trace_raw_output_spi_log_info @ 0x08002bf0 (size 120) =====

void sym.trace_raw_output_spi_log_info(int64_t arg1,uchar noname_1 [16],int64_t arg2)

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


// ===== sym.readl_relaxed @ 0x08002c68 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8002c6c);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8002ca0);
    return uVar1;
}


// ===== sym.spi_geni_probe @ 0x08002cd8 (size 2260) =====

uint64_t sym.spi_geni_probe(int64_t arg1)

{
    uint64_t *puVar1;
    ulong uVar2;
    uint32_t uVar3;
    char cVar4;
    ulong uVar5;
    ulong uVar6;
    ulong uVar7;
    bool bVar8;
    int iVar9;
    uint32_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t *piVar13;
    ulong uVar14;
    int64_t iVar15;
    char *pcVar16;
    uint64_t uVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar18;
    int64_t *piVar19;
    int64_t *piVar20;
    uint64_t uVar21;
    ulong unaff_x30;
    char acStack_80 [8];
    char acStack_78 [8];
    char acStack_70 [8];
    uchar uStack_68;
    unkbyte7 Stack_67;
    uchar uStack_60;
    unkbyte7 Stack_5f;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_58 = *(iVar15 + 0x5e0);
    iVar15 = arg1 + 0x10;
    Stack_5f = 0;
    Stack_67 = 0;
    uStack_60 = 0;
    iVar11 = of_find_property(*(arg1 + 0x300),"qcom,slv-ctrl",0);
    iVar12 = __spi_alloc_controller(iVar15,0x1d8,iVar11 != 0);
    if (iVar12 == 0) {
        _dev_err(iVar15,"Failed to alloc spi struct\n");
        uVar21 = 0xfffffff4;
        _dev_info(iVar15,"%s: ret:%d\n","spi_geni_probe",0xfffffff4);
        goto code_r0x080031b8;
    }
    if (iVar11 != 0) {
        *(iVar12 + 0x558) = sym.spi_slv_abort.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
    }
    *(arg1 + 0xa8) = iVar12;
    piVar19 = *(iVar12 + 0x98);
    uStack_68 = 0;
    piVar19[0x15] = iVar15;
    piVar19[1] = iVar15;
    uVar6 = str.M___DRIVER_GENI_SPI_Init._16_8_;
    uVar18 = str.M___DRIVER_GENI_SPI_Init._8_8_;
    uVar14 = str.M___DRIVER_GENI_SPI_Init._0_8_;
    piVar19[2] = *(*(arg1 + 0x70) + 0x98);
    uVar7 = str.M___DRIVER_GENI_SPI_Init._16_8_;
    uVar5 = str.M___DRIVER_GENI_SPI_Init._8_8_;
    uVar2 = str.M___DRIVER_GENI_SPI_Init._0_8_;
    str.M___DRIVER_GENI_SPI_Init[0] = uVar14;
    str.M___DRIVER_GENI_SPI_Init[1] = SUB81(uVar14,1);
    str.M___DRIVER_GENI_SPI_Init[2] = SUB81(uVar14,2);
    str.M___DRIVER_GENI_SPI_Init[3] = SUB81(uVar14,3);
    str.M___DRIVER_GENI_SPI_Init[4] = SUB81(uVar14,4);
    str.M___DRIVER_GENI_SPI_Init[5] = SUB81(uVar14,5);
    str.M___DRIVER_GENI_SPI_Init[6] = SUB81(uVar14,6);
    str.M___DRIVER_GENI_SPI_Init[7] = SUB81(uVar14,7);
    acStack_80[0] = str.M___DRIVER_GENI_SPI_Init[0];
    acStack_80[1] = str.M___DRIVER_GENI_SPI_Init[1];
    acStack_80[2] = str.M___DRIVER_GENI_SPI_Init[2];
    acStack_80[3] = str.M___DRIVER_GENI_SPI_Init[3];
    acStack_80[4] = str.M___DRIVER_GENI_SPI_Init[4];
    acStack_80[5] = str.M___DRIVER_GENI_SPI_Init[5];
    acStack_80[6] = str.M___DRIVER_GENI_SPI_Init[6];
    acStack_80[7] = str.M___DRIVER_GENI_SPI_Init[7];
    str.M___DRIVER_GENI_SPI_Init[8] = uVar18;
    str.M___DRIVER_GENI_SPI_Init[9] = SUB81(uVar18,1);
    str.M___DRIVER_GENI_SPI_Init[10] = SUB81(uVar18,2);
    str.M___DRIVER_GENI_SPI_Init[0xb] = SUB81(uVar18,3);
    str.M___DRIVER_GENI_SPI_Init[0xc] = SUB81(uVar18,4);
    str.M___DRIVER_GENI_SPI_Init[0xd] = SUB81(uVar18,5);
    str.M___DRIVER_GENI_SPI_Init[0xe] = SUB81(uVar18,6);
    str.M___DRIVER_GENI_SPI_Init[0xf] = SUB81(uVar18,7);
    acStack_78[0] = str.M___DRIVER_GENI_SPI_Init[8];
    acStack_78[1] = str.M___DRIVER_GENI_SPI_Init[9];
    acStack_78[2] = str.M___DRIVER_GENI_SPI_Init[10];
    acStack_78[3] = str.M___DRIVER_GENI_SPI_Init[0xb];
    acStack_78[4] = str.M___DRIVER_GENI_SPI_Init[0xc];
    acStack_78[5] = str.M___DRIVER_GENI_SPI_Init[0xd];
    acStack_78[6] = str.M___DRIVER_GENI_SPI_Init[0xe];
    acStack_78[7] = str.M___DRIVER_GENI_SPI_Init[0xf];
    str.M___DRIVER_GENI_SPI_Init[0x10] = uVar6;
    str.M___DRIVER_GENI_SPI_Init[0x11] = SUB81(uVar6,1);
    str.M___DRIVER_GENI_SPI_Init[0x12] = SUB81(uVar6,2);
    str.M___DRIVER_GENI_SPI_Init[0x13] = SUB81(uVar6,3);
    str.M___DRIVER_GENI_SPI_Init[0x14] = SUB81(uVar6,4);
    str.M___DRIVER_GENI_SPI_Init[0x15] = SUB81(uVar6,5);
    str.M___DRIVER_GENI_SPI_Init[0x16] = SUB81(uVar6,6);
    str.M___DRIVER_GENI_SPI_Init[0x17] = SUB81(uVar6,7);
    acStack_70[0] = str.M___DRIVER_GENI_SPI_Init[0x10];
    acStack_70[1] = str.M___DRIVER_GENI_SPI_Init[0x11];
    acStack_70[2] = str.M___DRIVER_GENI_SPI_Init[0x12];
    acStack_70[3] = str.M___DRIVER_GENI_SPI_Init[0x13];
    acStack_70[4] = str.M___DRIVER_GENI_SPI_Init[0x14];
    acStack_70[5] = str.M___DRIVER_GENI_SPI_Init[0x15];
    acStack_70[6] = str.M___DRIVER_GENI_SPI_Init[0x16];
    acStack_70[7] = str.M___DRIVER_GENI_SPI_Init[0x17];
    str.M___DRIVER_GENI_SPI_Init._0_8_ = uVar2;
    str.M___DRIVER_GENI_SPI_Init._8_8_ = uVar5;
    str.M___DRIVER_GENI_SPI_Init._16_8_ = uVar7;
    *(iVar12 + 0x2f0) = *(arg1 + 0x300);
    if (piVar19[2] == 0) {
        _dev_err(iVar15,"SE Wrapper is NULL, deferring probe\n");
        uVar21 = 0xfffffdfb;
        goto code_r0x080031b8;
    }
    iVar11 = of_find_property(*(arg1 + 0x300),"qcom,le-vm",0);
    if (iVar11 != 0) {
        *(piVar19 + 0x1c3) = 1;
        _dev_info(iVar15,"LE-VM usecase\n");
    }
    iVar11 = of_find_property(*(arg1 + 0x300),"qcom,la-vm",0);
    if (iVar11 != 0) {
        *(piVar19 + 0x1c4) = 1;
        _dev_info(iVar15,"LA-VM usecase\n");
    }
    piVar19[0x20] = *(arg1 + 0x70);
    if (*(piVar19 + 0x1c3) == '\0') {
        uVar10 = geni_icc_get(piVar19,"qup-memory");
        if (uVar10 == 0) {
            *(piVar19 + 7) = 51000;
            *(piVar19 + 9) = 590000;
            *(piVar19 + 0xb) = 0x12c00;
            uVar10 = geni_icc_set_bw(piVar19);
            if (uVar10 == 0) {
                uVar21 = geni_icc_enable(piVar19);
                if ((uVar21 == 0) && (uVar21 = geni_icc_enable(piVar19), uVar21 == 0)) {
                    uVar21 = devm_pinctrl_get(iVar15);
                    piVar19[0xe] = uVar21;
                    if ((uVar21 == 0) || (0xfffffffffffff000 < uVar21)) {
                        _dev_err(iVar15,"No pinctrl config specified!\n");
                        uVar21 = *(piVar19 + 0xe);
                    }
                    else {
                        uVar21 = pinctrl_lookup_state(uVar21,"default");
                        piVar19[0xf] = uVar21;
                        if ((uVar21 == 0) || (0xfffffffffffff000 < uVar21)) {
                            _dev_err(iVar15,"No default config specified!\n");
                            uVar21 = *(piVar19 + 0xf);
                        }
                        else {
                            uVar21 = pinctrl_lookup_state(piVar19[0xe],"sleep");
                            piVar19[0x10] = uVar21;
                            if ((uVar21 == 0) || (0xfffffffffffff000 < uVar21)) {
                                _dev_err(iVar15,"No sleep config specified!\n");
                                uVar21 = *(piVar19 + 0x10);
                            }
                            else {
                                uVar10 = pinctrl_select_state(piVar19[0xe],uVar21);
                                if (uVar10 != 0) {
                                    uVar21 = uVar10;
                                    pcVar16 = "Failed to set sleep configuration\n";
                                    goto code_r0x08003004;
                                }
                                uVar21 = devm_clk_get(iVar15,"se-clk");
                                piVar19[3] = uVar21;
                                if (uVar21 < 0xfffffffffffff001) {
                                    uVar21 = devm_clk_get(*(arg1 + 0x70),"m-ahb");
                                    piVar19[0xc] = uVar21;
                                    if (uVar21 < 0xfffffffffffff001) {
                                        uVar21 = devm_clk_get(*(arg1 + 0x70),"s-ahb");
                                        piVar19[0xd] = uVar21;
                                        if (uVar21 < 0xfffffffffffff001) {
                                            uVar14 = platform_get_irq(arg1,0);
                                            *(piVar19 + 0x14) = uVar14;
                                            if (uVar14 < 0) {
                                                _dev_err(iVar15,"Err getting IRQ\n");
                                                uVar21 = *(piVar19 + 0x14);
                                            }
                                            else {
                                                irq_modify_status(uVar14,0,0x1000);
                                                uVar10 = devm_request_threaded_irq
                                                                   (iVar15,piVar19[0x14],
                                                                    
                                                            sym.geni_spi_irq.42938a07f9c58b1377b5ae1566af1187.cfi_jt,0
                                                            ,4,"spi_geni",piVar19);
                                                piVar20 = piVar19;
                                                if (uVar10 == 0) goto code_r0x08002f58;
                                                uVar21 = uVar10;
                                                _dev_err(iVar15,"Request_irq failed:%d: err:%d\n",piVar19[0x14],
                                                         uVar21);
                                            }
                                            goto code_r0x0800300c;
                                        }
                                        pcVar16 = "Err getting S AHB clk %d\n";
                                    }
                                    else {
                                        pcVar16 = "Err getting M AHB clk %d\n";
                                    }
                                    _dev_err(iVar15,pcVar16,uVar21 & 0xffffffff);
                                }
                                else {
                                    _dev_err(iVar15,"Err getting SE Core clk %d\n",uVar21 & 0xffffffff);
                                }
                            }
                        }
                    }
                    goto code_r0x0800300c;
                }
                uVar21 = uVar21 & 0xffffffff;
                pcVar16 = "%s: icc enable failed ret:%d\n";
            }
            else {
                uVar21 = uVar10;
                pcVar16 = "%s: icc set bw failed ret:%d\n";
            }
code_r0x080031a4:
            _dev_err(iVar15,pcVar16,"spi_geni_probe",uVar21);
            goto code_r0x080031b8;
        }
        uVar21 = uVar10;
        pcVar16 = "Error geni_se_resources_init\n";
code_r0x08003004:
        _dev_err(iVar15,pcVar16);
    }
    else {
        piVar20 = NULL;
code_r0x08002f58:
        uVar14 = 0xffffffffffffffff;
        iVar9 = dma_set_mask(iVar15,0xffffffffffffffff);
        if (iVar9 != 0) {
            uVar14 = 0xffffffff;
            uVar10 = dma_set_mask(iVar15,0xffffffff);
            if (uVar10 != 0) {
                uVar21 = uVar10;
                pcVar16 = "could not set DMA mask\n";
                goto code_r0x08003004;
            }
        }
        dma_set_coherent_mask(iVar15,uVar14);
        iVar9 = of_property_read_variable_u32_array(*(arg1 + 0x300),"spi-max-frequency",iVar12 + 0x3b8,1,0);
        if (iVar9 < 0) {
            pcVar16 = "Max frequency not specified.\n";
        }
        else {
            piVar13 = platform_get_resource_byname(arg1,0x200,"se_phys");
            if (piVar13 != NULL) {
                iVar11 = of_find_property(*(arg1 + 0x300),"qcom,set-miso-sampling",0);
                *(piVar19 + 0x1c7) = iVar11 != 0;
                if (iVar11 != 0) {
                    iVar9 = of_property_read_variable_u32_array
                                      (*(arg1 + 0x300),"qcom,miso-sampling-ctrl-val",piVar19 + 0x39,1,0);
                    if (-1 < iVar9) {
                        _dev_info(iVar15,"MISO_SAMPLING_SET: %d\n",piVar19[0x39]);
                    }
                }
                iVar11 = of_find_property(*(arg1 + 0x300),"qcom,disable-dma",0);
                *(piVar19 + 0x1cd) = iVar11 != 0;
                iVar11 = of_find_property(*(arg1 + 0x300),"qcom,master-cross-connect",0);
                if (iVar11 != 0) {
                    *(piVar19 + 0x1d1) = 1;
                }
                of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,xfer-timeout-offset",piVar19 + 0x1d4,1,0);
                if (*(piVar19 + 0x1d4) != 0) {
                    _dev_info(iVar15,"%s: DT based xfer timeout offset: %d\n","spi_get_dt_property");
                }
                iVar11 = of_find_property(*(arg1 + 0x300),"qcom,rt",0);
                *(iVar12 + 0x4fb) = iVar11 != 0;
                iVar11 = of_find_property(*(arg1 + 0x300),"qcom,disable-autosuspend",0);
                *(piVar19 + 0x1c5) = iVar11 != 0;
                iVar11 = of_find_property(*(arg1 + 0x300),"qcom,shared_se",0);
                if (iVar11 == 0) {
                    iVar11 = of_find_property(*(arg1 + 0x300),"qcom,shared_ee",0);
                    bVar8 = iVar11 != 0;
                }
                else {
                    bVar8 = true;
                    *(piVar19 + 0x1c2) = 1;
                }
                *(piVar19 + 0x1c1) = bVar8;
                iVar11 = of_find_property(*(arg1 + 0x300),"slv-cross-connected",0);
                *(piVar19 + 0x3a) = iVar11 != 0;
                piVar19[0x11] = *piVar13;
                piVar19[0x12] = (piVar13[1] - *piVar13) + 1;
                iVar11 = devm_ioremap(iVar15,*piVar13,(piVar13[1] - *piVar13) + 1);
                piVar19[0x13] = iVar11;
                if (iVar11 == 0) {
                    _dev_err(iVar15,"Err IO mapping iomem\n");
                    uVar21 = 0xfffffff4;
                    goto code_r0x0800300c;
                }
                *piVar19 = iVar11;
                *(iVar12 + 0x3a8) = 0x27;
                *(iVar12 + 0x530) = sym.spi_geni_prepare_transfer_hardware.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
                *(iVar12 + 0x3b0) = 0xfffffff8;
                *(iVar12 + 0x3a2) = 4;
                *(iVar12 + 0x4fc) = 0;
                *(iVar12 + 0x548) = sym.spi_geni_prepare_message.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
                *(iVar12 + 0x550) = sym.spi_geni_unprepare_message.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
                *(iVar12 + 0x568) = sym.spi_geni_transfer_one.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
                *(iVar12 + 0x540) = sym.spi_geni_unprepare_transfer_hardware.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
                *(piVar19 + 0x1c) = 0;
                __init_swait_queue_head(piVar19 + 0x1d,"&x->wait",reloc.__traceiter_spi_log_info.cfi_jt);
                *(piVar19 + 0x2c) = 0;
                __init_swait_queue_head(piVar19 + 0x2d,"&x->wait",reloc.__traceiter_spi_log_info.cfi_jt);
                *(piVar19 + 0x30) = 0;
                __init_swait_queue_head(piVar19 + 0x31,"&x->wait",reloc.__traceiter_spi_log_info.cfi_jt);
                __pm_runtime_set_status(iVar15,2);
                if (*(piVar19 + 0x1c5) == '\0') {
                    pm_runtime_set_autosuspend_delay(iVar15,0xfa);
                    __pm_runtime_use_autosuspend(iVar15,1);
                }
                pm_runtime_enable(iVar15);
                iVar11 = piVar19[0x15][0xe];
                if (iVar11 == 0) {
                    iVar11 = *piVar19[0x15];
                }
                iVar11 = ipc_log_context_create(4,iVar11,0);
                piVar19[0x37] = iVar11;
                if (iVar11 == 0) {
                    _dev_err(iVar15,"Error creating IPC logs\n");
                }
                if (*(piVar19 + 0x1c3) == '\0') {
                    ipc_log_string(piVar19[0x37],"%s: GENI_TO_CORE:%d CPU_TO_GENI:%d GENI_TO_DDR:%d\n",
                                   "spi_geni_probe",piVar20[7],piVar20[9],piVar20[0xb]);
                    if (piVar19[0x15] != 0) {
                        sym.spi_trace_log(piVar19[0x15],0x8000dbb,0x8000c5d,*(piVar20 + 7));
                    }
                    if ((*(piVar19 + 0x1c3) == '\0') && (uVar10 = geni_icc_disable(piVar20), uVar10 != 0)) {
                        uVar21 = uVar10;
                        pcVar16 = "%s: icc disable failed ret:%d\n";
                        goto code_r0x080031a4;
                    }
                }
                uVar10 = spi_register_controller(iVar12);
                if (uVar10 == 0) {
                    uVar21 = sysfs_create_file_ns(piVar19[0x15],obj.dev_attr_spi_slave_state,0);
                    uVar21 = uVar21 & 0xffffffff;
                    *(piVar19 + 0x1b4) = 0;
                    _dev_info(iVar15,"%s: completed %d\n","spi_geni_probe",uVar21);
                    snprintf(acStack_80,0x28,"M - DRIVER GENI_SPI_%d Ready",*(iVar12 + 0x3a0));
                    goto code_r0x080031b8;
                }
                uVar21 = uVar10;
                pcVar16 = "Failed to register SPI master\n";
                goto code_r0x08003004;
            }
            pcVar16 = "Err getting IO region\n";
        }
        _dev_err(iVar15,pcVar16);
        uVar21 = 0xfffffffa;
    }
code_r0x0800300c:
    _dev_info(iVar15,"%s: ret:%d\n","spi_geni_probe",uVar21 & 0xffffffff);
    put_device(iVar12);
code_r0x080031b8:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_58) {
        return uVar21 & 0xffffffff;
    }
    iVar15 = __stack_chk_fail();
    *extraout_x18 = sym.spi_geni_remove;
    iVar11 = *(iVar15 + 0xa8);
    iVar12 = *(iVar11 + 0x98);
    sysfs_remove_file_ns(iVar15 + 0x10,obj.dev_attr_spi_slave_state,0);
    uVar18 = *(iVar12 + 0x18);
    uVar14 = *(iVar12 + 0x60);
    uVar2 = *(iVar12 + 0x68);
    clk_disable(uVar18);
    clk_unprepare(uVar18);
    clk_disable(uVar14);
    clk_unprepare(uVar14);
    clk_disable(uVar2);
    clk_unprepare(uVar2);
    uVar10 = geni_icc_disable(iVar12);
    uVar21 = uVar10;
    if (uVar10 != 0) {
        ipc_log_string(*(iVar12 + 0x1b8),"%s failing at geni_icc_disable ret=%d\n","spi_geni_remove",uVar21);
        if (*(iVar12 + 0xa8) != 0) {
            sym.spi_trace_log(*(iVar12 + 0xa8),0x8001562,0x8001a21,uVar21);
        }
    }
    spi_unregister_controller(iVar11);
    puVar1 = iVar15 + 0x208;
    uVar17 = *puVar1;
    do {
        uVar10 = uVar17;
        if (uVar10 == 0) break;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar3 = *puVar1;
            uVar17 = uVar3;
            if (uVar3 != uVar10) goto code_r0x080036a8;
            cVar4 = '\x01';
            bVar8 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar8) {
                *puVar1 = uVar10 - 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
code_r0x080036a8:
    } while (uVar10 != uVar3);
    __pm_runtime_disable(iVar15 + 0x10,1);
    return uVar21;
}


// ===== sym.spi_geni_remove @ 0x080035ac (size 364) =====

uint64_t sym.spi_geni_remove(int64_t arg1)

{
    uint64_t *puVar1;
    ulong uVar2;
    ulong uVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong uVar9;
    uint64_t arg4;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *(arg1 + 0xa8);
    iVar11 = *(iVar10 + 0x98);
    sysfs_remove_file_ns(arg1 + 0x10,obj.dev_attr_spi_slave_state,0);
    uVar9 = *(iVar11 + 0x18);
    uVar2 = *(iVar11 + 0x60);
    uVar3 = *(iVar11 + 0x68);
    clk_disable(uVar9);
    clk_unprepare(uVar9);
    clk_disable(uVar2);
    clk_unprepare(uVar2);
    clk_disable(uVar3);
    clk_unprepare(uVar3);
    uVar7 = geni_icc_disable(iVar11);
    arg4 = uVar7;
    if (uVar7 != 0) {
        ipc_log_string(*(iVar11 + 0x1b8),"%s failing at geni_icc_disable ret=%d\n","spi_geni_remove",arg4);
        if (*(iVar11 + 0xa8) != 0) {
            sym.spi_trace_log(*(iVar11 + 0xa8),0x8001562,0x8001a21,arg4);
        }
    }
    spi_unregister_controller(iVar10);
    puVar1 = arg1 + 0x208;
    uVar8 = *puVar1;
    do {
        uVar7 = uVar8;
        if (uVar7 == 0) break;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar4 = *puVar1;
            uVar8 = uVar4;
            if (uVar4 != uVar7) goto code_r0x080036a8;
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
                *puVar1 = uVar7 - 1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
code_r0x080036a8:
    } while (uVar7 != uVar4);
    __pm_runtime_disable(arg1 + 0x10,1);
    return arg4;
}


// ===== sym.spi_slv_abort @ 0x08003718 (size 64) =====

ulong sym.spi_slv_abort(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    complete_all(iVar1 + 0x160);
    complete_all(iVar1 + 0x180);
    return 0;
}


// ===== sym.geni_spi_irq @ 0x08003758 (size 1312) =====

ulong sym.geni_spi_irq(ulong noname_0,int64_t arg1)

{
    int iVar1;
    int iVar2;
    uint64_t uVar3;
    code *pcVar4;
    bool bVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint uVar8;
    int64_t in_x3;
    int64_t iVar9;
    uint64_t uVar10;
    int iVar11;
    int iVar12;
    int64_t iVar13;
    int iVar14;
    uint32_t uVar15;
    int64_t *piVar16;
    int iVar17;
    uint32_t uVar18;
    int iVar19;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0xa8) + 0x20c) == 2) {
        ipc_log_string(*(arg1 + 0x1b8),"%s: device is suspended\n","geni_spi_irq");
        if (*(arg1 + 0xa8) == 0) {
            uVar6 = 0;
        }
        else {
            sym.spi_trace_log(*(arg1 + 0xa8),0x8000fe7,0x8000cf1,in_x3);
            uVar6 = 0;
        }
        goto code_r0x08003c2c;
    }
    uVar6 = sym.readl_relaxed(*(arg1 + 0x98) + 0x610);
    if (*(arg1 + 0x1a4) != 2) {
        if (*(arg1 + 0x1a4) != 1) goto code_r0x08003c2c;
        if ((uVar6 & 0xc000000) != 0) {
            iVar12 = *(arg1 + 0xb8);
            uVar7 = sym.readl_relaxed(*(arg1 + 0x98) + 0x804);
            iVar9 = *(arg1 + 0xd8);
            if (iVar9 != 0) {
                iVar12 = iVar12 >> 3;
                uVar15 = uVar7 & 0x1ffffff;
                if (uVar7 < 0) {
                    uVar7 = uVar7 >> 0x1c & 7;
                    bVar5 = uVar7 - 1 < 3;
                    if (!bVar5) {
                        uVar7 = 0;
                    }
                    uVar15 = uVar15 - bVar5;
                }
                else {
                    uVar7 = 0;
                }
                iVar11 = *(arg1 + 0xb8);
                iVar14 = *(arg1 + 200);
                iVar17 = 0;
                if (iVar14 != 0) {
                    iVar17 = iVar11 / iVar14;
                }
                iVar1 = iVar12;
                if (iVar11 != iVar17 * iVar14) {
                    iVar17 = iVar14 + 7;
                    if (-1 < iVar14) {
                        iVar17 = iVar14;
                    }
                    iVar1 = (iVar17 >> 3) + 1;
                }
                iVar19 = *(arg1 + 0xd0);
                iVar1 = uVar7 + iVar1 * uVar15;
                iVar17 = iVar19;
                if (iVar1 <= iVar19) {
                    iVar17 = iVar1;
                }
                if (0 < iVar17) {
                    uVar7 = 0;
                    iVar9 = *(iVar9 + 8) + (*(iVar9 + 0x10) - iVar19);
                    do {
                        iVar1 = 0;
                        if (iVar14 != 0) {
                            iVar1 = iVar11 / iVar14;
                        }
                        iVar19 = iVar12;
                        if (iVar11 != iVar1 * iVar14) {
                            iVar11 = iVar14 + 7;
                            if (-1 < iVar14) {
                                iVar11 = iVar14;
                            }
                            iVar19 = (iVar11 >> 3) + 1;
                        }
                        iVar11 = iVar17 - uVar7;
                        if (iVar19 <= iVar17 - uVar7) {
                            iVar11 = iVar19;
                        }
                        uVar8 = sym.readl_relaxed(*(arg1 + 0x98) + 0x780);
                        if (iVar11 < 1) {
                            uVar10 = uVar7;
code_r0x080039c8:
                            uVar15 = uVar10;
                        }
                        else {
                            uVar3 = uVar7 + 1;
                            *(iVar9 + uVar7) = uVar8;
                            uVar10 = uVar3;
                            if (iVar11 == 1) goto code_r0x080039c8;
                            uVar10 = uVar7 + 2;
                            *(iVar9 + uVar3) = uVar8 >> 8;
                            if (iVar11 == 2) goto code_r0x080039c8;
                            *(iVar9 + (uVar7 + 2)) = uVar8 >> 0x10;
                            uVar15 = uVar7 + 3;
                            if (iVar11 != 3) {
                                *(iVar9 + (uVar7 + 3)) = uVar8 >> 0x18;
                                if (iVar11 != 4) goto code_r0x08003c74;
                                uVar15 = uVar7 + 4;
                            }
                        }
                        uVar7 = uVar15;
                        if (iVar17 <= uVar7) goto code_r0x080039fc;
                        iVar11 = *(arg1 + 0xb8);
                        iVar14 = *(arg1 + 200);
                    } while( true );
                }
                goto code_r0x08003a00;
            }
        }
        goto code_r0x08003a08;
    }
    uVar7 = sym.readl_relaxed(*(arg1 + 0x98) + 0xc40);
    uVar15 = sym.readl_relaxed(*(arg1 + 0x98) + 0xd40);
    if (uVar7 != 0) {
        sym.writel_relaxed(uVar7,*(arg1 + 0x98) + 0xc44);
    }
    if (uVar15 != 0) {
        sym.writel_relaxed(uVar15,*(arg1 + 0x98) + 0xd44);
    }
    if ((uVar7 & 1) == 0) {
        if ((uVar15 & 1) == 0) goto code_r0x0800387c;
code_r0x08003890:
        *(arg1 + 0xd0) = 0;
        iVar12 = *(arg1 + 0xcc);
    }
    else {
        *(arg1 + 0xcc) = 0;
        if ((uVar15 & 1) != 0) goto code_r0x08003890;
code_r0x0800387c:
        iVar12 = *(arg1 + 0xcc);
    }
    if ((iVar12 == 0) && (*(arg1 + 0xd0) == 0)) {
        *(arg1 + 0x1c6) = 1;
    }
    if ((uVar6 & 0x30) != 0) {
        *(arg1 + 0x1c6) = 1;
    }
    goto code_r0x08003c2c;
code_r0x080039fc:
    iVar19 = *(arg1 + 0xd0);
code_r0x08003a00:
    *(arg1 + 0xd0) = iVar19 - iVar17;
code_r0x08003a08:
    if (((uVar6 >> 0x1e & 1) != 0) && (piVar16 = *(arg1 + 0xd8), piVar16 != NULL)) {
        iVar12 = *(arg1 + 0xb8);
        iVar11 = *(arg1 + 200);
        iVar14 = 0;
        if (iVar11 != 0) {
            iVar14 = iVar12 / iVar11;
        }
        iVar1 = iVar12 >> 3;
        iVar17 = iVar1;
        if (iVar12 != iVar14 * iVar11) {
            iVar14 = iVar11 + 7;
            if (-1 < iVar11) {
                iVar14 = iVar11;
            }
            iVar17 = (iVar14 >> 3) + 1;
        }
        iVar19 = *(arg1 + 0xcc);
        iVar17 = iVar17 * (*(arg1 + 0xb4) - *(arg1 + 0xbc));
        iVar14 = iVar19;
        if (iVar17 <= iVar19) {
            iVar14 = iVar17;
        }
        if (0 < iVar14) {
            iVar17 = 0;
            iVar9 = *piVar16 + (piVar16[2] - iVar19);
            do {
                iVar19 = 0;
                if (iVar11 != 0) {
                    iVar19 = iVar12 / iVar11;
                }
                iVar2 = iVar1;
                if (iVar12 != iVar19 * iVar11) {
                    iVar12 = iVar11 + 7;
                    if (-1 < iVar11) {
                        iVar12 = iVar11;
                    }
                    iVar2 = (iVar12 >> 3) + 1;
                }
                iVar12 = iVar14 - iVar17;
                if (iVar2 <= iVar14 - iVar17) {
                    iVar12 = iVar2;
                }
                if (iVar12 < 1) {
                    uVar10 = 0;
                }
                else {
                    iVar13 = iVar17;
                    uVar10 = iVar13 + 1;
                    if (iVar12 == 1) {
                        uVar7 = 0;
                        uVar15 = 0;
                        uVar18 = 0;
                    }
                    else {
                        uVar7 = *(iVar9 + uVar10);
                        uVar10 = iVar17 + 2U;
                        if (iVar12 == 2) {
                            uVar15 = 0;
                            uVar18 = 0;
                        }
                        else {
                            uVar15 = *(iVar9 + (iVar17 + 2U));
                            uVar10 = iVar17 + 3U;
                            if (iVar12 == 3) {
                                uVar18 = 0;
                            }
                            else {
                                if (iVar12 != 4) {
code_r0x08003c74:
    //WARNING: Does not return
                                    pcVar4 = SoftwareBreakpoint(1,0x8003c78);
                                    (*pcVar4)();
                                }
                                uVar18 = *(iVar9 + (iVar17 + 3U));
                                uVar10 = iVar17 + 4;
                            }
                        }
                    }
                    iVar17 = uVar10;
                    uVar10 = uVar15 << 0x10 | uVar18 << 0x18 | uVar7 << 8 | *(iVar9 + iVar13);
                }
                sym.writel_relaxed(uVar10,*(arg1 + 0x98) + 0x700);
                DataSynchronizationBarrier(3,3,0);
                if (iVar14 <= iVar17) goto code_r0x08003b58;
                iVar12 = *(arg1 + 0xb8);
                iVar11 = *(arg1 + 200);
            } while( true );
        }
        goto code_r0x08003b5c;
    }
    goto code_r0x08003b7c;
code_r0x08003b58:
    iVar19 = *(arg1 + 0xcc);
code_r0x08003b5c:
    *(arg1 + 0xcc) = iVar19 - iVar14;
    if (iVar19 - iVar14 == 0) {
        sym.writel_relaxed(0,*(arg1 + 0x98) + 0x80c);
        DataSynchronizationBarrier(3,3,0);
    }
code_r0x08003b7c:
    if ((uVar6 & 0x31) != 0) {
        *(arg1 + 0x1c6) = 1;
        if (*(arg1 + 0xcc) != 0) {
            sym.writel_relaxed(0,*(arg1 + 0x98) + 0x80c);
            ipc_log_string(*(arg1 + 0x1b8),"%s:Premature Done.tx_rem%d bpw%d\n","geni_spi_irq",*(arg1 + 0xcc),
                           *(arg1 + 200));
            if (*(arg1 + 0xa8) != 0) {
                sym.spi_trace_log(*(arg1 + 0xa8),0x800055c,0x8000cf1,*(arg1 + 0xcc));
            }
        }
        if (*(arg1 + 0xd0) != 0) {
            ipc_log_string(*(arg1 + 0x1b8),"%s:Premature Done.rx_rem%d bpw%d\n","geni_spi_irq",*(arg1 + 0xd0),
                           *(arg1 + 200));
            if (*(arg1 + 0xa8) != 0) {
                sym.spi_trace_log(*(arg1 + 0xa8),0x800143d,0x8000cf1,*(arg1 + 0xd0));
            }
        }
    }
code_r0x08003c2c:
    sym.writel_relaxed(uVar6,*(arg1 + 0x98) + 0x618);
    if (*(arg1 + 0x1c6) != '\0') {
        *(arg1 + 0x1c6) = 0;
        complete(arg1 + 0xe0);
    }
    return 1;
}


// ===== sym.spi_geni_prepare_transfer_hardware @ 0x08003c78 (size 580) =====

uint32_t sym.spi_geni_prepare_transfer_hardware(int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t in_x3;
    ulong *in_x18;
    uint64_t uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x98);
    if (*(iVar5 + 0x1c3) == '\0') {
        *(iVar5 + 0x1b4) = 1;
        if ((*(*(iVar5 + 0xa8) + 0x200) & 7) != 0) {
            ipc_log_string(*(iVar5 + 0x1b8),"%s: System suspended\n","spi_geni_prepare_transfer_hardware");
            if (*(iVar5 + 0xa8) != 0) {
                sym.spi_trace_log(*(iVar5 + 0xa8),0x8000b0a,0x80016d6,in_x3);
            }
            uVar3 = 0xfffffff3;
code_r0x08003cf4:
            *(iVar5 + 0x1b4) = 0;
            return uVar3;
        }
        if ((((*(iVar5 + 0x1c0) != '\0') && (*(iVar5 + 0x1c1) == '\0')) && (*(iVar5 + 0x1c4) == '\0')) &&
           (uVar3 = pinctrl_select_state(*(iVar5 + 0x70),*(iVar5 + 0x78)), uVar3 != 0)) {
            uVar4 = uVar3;
            in_x3 = uVar4;
            ipc_log_string(*(iVar5 + 0x1b8),"%s: Error %d pinctrl_select_state\n","spi_geni_prepare_transfer_hardware"
                          );
            if (*(iVar5 + 0xa8) != 0) {
                sym.spi_trace_log(*(iVar5 + 0xa8),0x8001024,0x80016d6,uVar4);
                in_x3 = uVar4;
            }
        }
        if ((*(iVar5 + 0xc0) == '\0') || (*(iVar5 + 0x1c1) == '\0')) {
            iVar2 = __pm_runtime_resume(*(iVar5 + 0xa8),4);
            if (iVar2 < 0) {
                _dev_err(*(iVar5 + 0xa8),"%s:pm_runtime_get_sync failed %d\n","spi_geni_prepare_transfer_hardware",
                         iVar2);
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x800,0x8003e24);
                (*pcVar1)();
            }
            if ((*(iVar5 + 0xc0) == '\0') && (uVar3 = sym.spi_geni_mas_setup(arg1), uVar3 != 0)) {
                ipc_log_string(*(iVar5 + 0x1b8),"%s mas_setup failed: %d\n","spi_geni_prepare_transfer_hardware",
                               uVar3);
                if (*(iVar5 + 0xa8) == 0) {
                    _printk(0x80017e8,"spi_geni_prepare_transfer_hardware",uVar3);
                }
                else {
                    _dev_err(*(iVar5 + 0xa8),"%s mas_setup failed: %d\n","spi_geni_prepare_transfer_hardware",uVar3);
                }
                if (*(iVar5 + 0xa8) != 0) {
                    sym.spi_trace_log(*(iVar5 + 0xa8),0x8001655,0x80016d6,uVar3);
                }
                goto code_r0x08003cf4;
            }
            if ((*(iVar5 + 0x1c5) != '\0') && (uVar4 = *(*(iVar5 + 0xa8) + 0x1f8), uVar4 < 1)) {
                ipc_log_string(*(iVar5 + 0x1b8),"resume usage count mismatch:%d",uVar4 & 0xffffffff);
                if (*(iVar5 + 0xa8) != 0) {
                    sym.spi_trace_log(*(iVar5 + 0xa8),0x80016f9,uVar4 & 0xffffffff,in_x3);
                }
            }
        }
    }
    return 0;
}


// ===== sym.spi_geni_prepare_message @ 0x08003ec0 (size 2044) =====

uint64_t sym.spi_geni_prepare_message(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint8_t uVar2;
    code *pcVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int64_t iVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong uVar15;
    char *arg2_00;
    char *arg3;
    uint64_t in_x3;
    uint uVar16;
    uint32_t *puVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar18;
    uint64_t uVar19;
    uint64_t arg1_00;
    ulong *puVar20;
    uint32_t uVar21;
    int64_t *piVar22;
    int64_t *piVar23;
    ulong unaff_x30;
    uchar in_q1 [16];
    uchar auVar24 [16];
    int iStack_70;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar18 = sp_el0;
    iStack_68 = *(iVar18 + 0x5e0);
    iVar18 = *(arg1 + 0x98);
    if (*(iVar18 + 0x1c1) != '\0') {
        if (*(iVar18 + 0xc0) == '\0') {
            *(iVar18 + 0xc0) = 1;
code_r0x08003f80:
            if ((*(iVar18 + 0x1c2) != '\0') && (uVar8 = sym.spi_geni_lock_bus(arg1), uVar8 != 0)) {
                uVar19 = uVar8;
                in_x3 = uVar19;
                ipc_log_string(*(iVar18 + 0x1b8),"%s failed: %d\n","spi_geni_prepare_message");
                if (*(iVar18 + 0xa8) == 0) {
                    _printk(0x80010ce,"spi_geni_prepare_message",uVar19);
                }
                else {
                    in_x3 = uVar19;
                    _dev_err(*(iVar18 + 0xa8),"%s failed: %d\n","spi_geni_prepare_message");
                }
                iVar18 = *(iVar18 + 0xa8);
                if (iVar18 != 0) {
                    arg2_00 = "%s failed: %d\n";
                    arg3 = "spi_geni_prepare_message";
code_r0x080046a8:
                    in_x3 = uVar19;
                    sym.spi_trace_log(iVar18,arg2_00,arg3,uVar19);
                }
                goto code_r0x0800442c;
            }
            goto code_r0x08003f94;
        }
        if ((*(*(iVar18 + 0xa8) + 0x200) & 7) == 0) {
            iVar7 = __pm_runtime_resume(*(iVar18 + 0xa8),4);
            if (iVar7 < 0) {
                _dev_err(*(iVar18 + 0xa8),"%s:pm_runtime_get_sync failed %d\n","spi_geni_prepare_message",iVar7);
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x800,0x8004558);
                (*pcVar3)();
            }
            if ((*(iVar18 + 0x1c5) != '\0') && (uVar19 = *(*(iVar18 + 0xa8) + 0x1f8), uVar19 < 1)) {
                ipc_log_string(*(iVar18 + 0x1b8),"resume usage count mismatch:%d",uVar19 & 0xffffffff);
                if (*(iVar18 + 0xa8) != 0) {
                    sym.spi_trace_log(*(iVar18 + 0xa8),0x80016f9,uVar19 & 0xffffffff,in_x3);
                }
            }
            goto code_r0x08003f80;
        }
code_r0x080043f4:
        ipc_log_string(*(iVar18 + 0x1b8),"%s: System suspended\n","spi_geni_prepare_message");
        if (*(iVar18 + 0xa8) != 0) {
            sym.spi_trace_log(*(iVar18 + 0xa8),0x8000b0a,0x8001492,in_x3);
        }
        uVar19 = 0xfffffff3;
        goto code_r0x0800442c;
    }
code_r0x08003f94:
    iVar12 = *(iVar18 + 0xa8);
    if ((*(iVar12 + 0x20c) == 2) && (*(iVar18 + 0x1c3) == '\0')) {
        if ((*(iVar12 + 0x200) & 7) != 0) goto code_r0x080043f4;
        iVar7 = __pm_runtime_resume(iVar12,4);
        if (iVar7 < 0) {
            _dev_err(*(iVar18 + 0xa8),"%s:pm_runtime_get_sync failed %d\n","spi_geni_prepare_message",iVar7);
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x80044a4);
            (*pcVar3)();
        }
    }
    iVar12 = *(arg1 + 0x98);
    uVar19 = sym.readl_relaxed(*(iVar12 + 0x98) + 100);
    if ((*(iVar12 + 0x120) == 0) || (0xfffffffffffff000 < *(iVar12 + 0x120))) {
        if ((uVar19 & 1) != 0) {
            *(iVar18 + 0x1a4) = 0xffffffea;
code_r0x080044cc:
            in_x3 = 0xffffffea;
            uVar19 = 0xffffffea;
            _dev_err(*(iVar18 + 0xa8),"%s: Couldn\'t select mode %d\n","spi_geni_prepare_message");
            goto code_r0x0800442c;
        }
        *(iVar18 + 0x1a4) = 2;
    }
    else {
        bVar5 = *(iVar12 + 0x128) != 0;
        bVar4 = *(iVar12 + 0x128) < 0xfffffffffffff001;
        bVar6 = (uVar19 & 1) != 0;
        if (((uVar19 & 1) == 0) || (bVar6 && (!bVar5 || !bVar4))) {
            uVar16 = 2;
            if (bVar6 && (!bVar5 || !bVar4)) {
                uVar16 = 0xffffffea;
            }
            *(iVar18 + 0x1a4) = uVar16;
            if (bVar6 && (!bVar5 || !bVar4)) goto code_r0x080044cc;
        }
        else {
            uVar16 = 2;
            if (bVar5 && bVar4) {
                uVar16 = 3;
            }
            *(iVar18 + 0x1a4) = uVar16;
            if (bVar5 && bVar4) {
                memset(*(iVar18 + 0x110),0,0xac0);
                geni_se_select_mode(iVar18,3);
                for (piVar23 = *arg2; arg2 != piVar23; piVar23 = *piVar23) {
                    uVar19 = piVar23[-0xe];
                    if (uVar19 != 0) {
                        piVar22 = *(iVar18 + 0x100);
                        if (piVar22 == NULL) {
                            uVar19 = 0xffffffea;
                        }
                        else {
                            in_x3 = *(piVar23 + -0xd);
                            uVar13 = is_vmalloc_addr(uVar19);
                            if (((uVar13 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                                obj.dma_map_single_attrs.__already_done = 0x1;
                                uVar15 = dev_driver_string(piVar22);
                                iVar18 = piVar22[0xe];
                                if (iVar18 == 0) {
                                    iVar18 = *piVar22;
                                }
                                __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar15,iVar18);
    //WARNING: Does not return
                                pcVar3 = SoftwareBreakpoint(0x800,0x8004154);
                                (*pcVar3)();
                            }
                            if ((uVar13 & 1) == 0) {
                                iVar12 = dma_map_page_attrs(piVar22,(((uVar19 << 8) >> 8) + 0x8000000000U >> 6 &
                                                                     0x3ffffffffffffc0) - 0x200000000,uVar19 & 0xfff,
                                                            in_x3,2,0);
                                piVar23[-0xb] = iVar12;
                                if (iVar12 != -1) goto code_r0x080040b8;
                                uVar19 = 0xfffffffb;
                            }
                            else {
                                uVar19 = 0xfffffffb;
                                piVar23[-0xb] = 0xffffffffffffffff;
                            }
                        }
                        in_x3 = uVar19;
                        ipc_log_string(*(iVar18 + 0x1b8),"%s: Mapping Rx buffer %d\n","spi_geni_map_buf");
                        if (*(iVar18 + 0xa8) == 0) {
                            _printk(0x80014e7,"spi_geni_map_buf",uVar19);
                        }
                        else {
                            in_x3 = uVar19;
                            _dev_err(*(iVar18 + 0xa8),"%s: Mapping Rx buffer %d\n","spi_geni_map_buf");
                        }
                        iVar18 = *(iVar18 + 0xa8);
                        if (iVar18 == 0) goto code_r0x0800442c;
                        arg2_00 = "%s: Mapping Rx buffer %d\n";
code_r0x080046a0:
                        arg3 = "spi_geni_map_buf";
                        goto code_r0x080046a8;
                    }
code_r0x080040b8:
                    uVar19 = piVar23[-0xf];
                    if (uVar19 != 0) {
                        piVar22 = *(iVar18 + 0x100);
                        if (piVar22 == NULL) {
                            uVar19 = 0xffffffea;
                        }
                        else {
                            in_x3 = *(piVar23 + -0xd);
                            uVar13 = is_vmalloc_addr(uVar19);
                            if (((uVar13 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                                obj.dma_map_single_attrs.__already_done = 0x1;
                                uVar15 = dev_driver_string(piVar22);
                                iVar18 = piVar22[0xe];
                                if (iVar18 == 0) {
                                    iVar18 = *piVar22;
                                }
                                __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar15,iVar18);
    //WARNING: Does not return
                                pcVar3 = SoftwareBreakpoint(0x800,0x800418c);
                                (*pcVar3)();
                            }
                            if ((uVar13 & 1) == 0) {
                                iVar12 = dma_map_page_attrs(piVar22,(((uVar19 << 8) >> 8) + 0x8000000000U >> 6 &
                                                                     0x3ffffffffffffc0) - 0x200000000,uVar19 & 0xfff,
                                                            in_x3,1,0);
                                piVar23[-0xc] = iVar12;
                                if (iVar12 != -1) goto code_r0x08004044;
                                uVar19 = 0xfffffffb;
                            }
                            else {
                                uVar19 = 0xfffffffb;
                                piVar23[-0xc] = 0xffffffffffffffff;
                            }
                        }
                        in_x3 = uVar19;
                        ipc_log_string(*(iVar18 + 0x1b8),"%s: Mapping Tx buffer %d\n","spi_geni_map_buf");
                        if (*(iVar18 + 0xa8) == 0) {
                            _printk(0x800088b,"spi_geni_map_buf",uVar19);
                        }
                        else {
                            in_x3 = uVar19;
                            _dev_err(*(iVar18 + 0xa8),"%s: Mapping Tx buffer %d\n","spi_geni_map_buf");
                        }
                        iVar18 = *(iVar18 + 0xa8);
                        if (iVar18 != 0) {
                            arg2_00 = "%s: Mapping Tx buffer %d\n";
                            goto code_r0x080046a0;
                        }
                        goto code_r0x0800442c;
                    }
code_r0x08004044:
                }
                uVar19 = 0;
                goto code_r0x0800442c;
            }
        }
    }
    geni_se_select_mode(iVar18,2);
    iVar18 = *(arg1 + 0x98);
    iVar12 = *(arg2 + 0x10);
    uVar8 = *(iVar12 + 0x3a8);
    uVar9 = sym.readl_relaxed(*(iVar18 + 0x98) + 0x22c);
    uVar10 = sym.readl_relaxed(*(iVar18 + 0x98) + 0x230);
    uVar11 = sym.readl_relaxed(*(iVar18 + 0x98) + 0x224);
    uVar13 = 0;
    uStack_6c = 0;
    iStack_70 = 0;
    if ((*(iVar12 + 0x3a8) >> 2 & 1) != 0) {
        uVar13 = 1L << (*(iVar12 + 0x3a4) & 0x3f);
    }
    puVar17 = *(iVar12 + 0x3b8);
    if (puVar17 == NULL) {
        uVar21 = 0;
    }
    else {
        uVar21 = puVar17[1] & 0x3ff | (*puVar17 & 0x3ff) << 10;
    }
    uVar1 = *(iVar12 + 0x3a0);
    uVar2 = *(iVar12 + 0x3a4);
    *(iVar18 + 0xc4) = uVar1;
    *(iVar18 + 200) = *(iVar12 + 0x3a5);
    uVar14 = sym.get_spi_clk_cfg(uVar1,iVar18,in_q1,&stack0xffffffffffffff90);
    uVar19 = uVar14 & 0xffffffff;
    if (uVar14 == 0) {
        arg1_00 = uVar11 & 0xfffffffe | uVar8 & 1;
        uVar11 = uVar9 & 0xfffffffc | uVar8 >> 5 & 1;
        uVar19 = uVar10 & 0xfffffff8 | uVar10 & 3 | (uVar8 >> 1 & 1) << 2;
        uVar8 = uStack_6c & 7;
        uVar9 = iStack_70 << 4 | 1;
        sym.spi_setup_word_len(iVar18,*(iVar12 + 0x3a8),*(iVar12 + 0x3a5));
        sym.writel_relaxed(uVar11,*(iVar18 + 0x98) + 0x22c);
        sym.writel_relaxed(uVar2,*(iVar18 + 0x98) + 0x250);
        sym.writel_relaxed(arg1_00,*(iVar18 + 0x98) + 0x224);
        sym.writel_relaxed(uVar19,*(iVar18 + 0x98) + 0x230);
        sym.writel_relaxed(uVar13 & 0xffffffff,*(iVar18 + 0x98) + 0x24c);
        sym.writel_relaxed(uVar8,*(iVar18 + 0x98) + 0x7c);
        sym.writel_relaxed(uVar9,*(iVar18 + 0x98) + 0x48);
        sym.writel_relaxed(uVar21,*(iVar18 + 0x98) + 0x278);
        ipc_log_string(*(iVar18 + 0x1b8),"%s:Loopback%d demux_sel0x%x demux_op_inv 0x%x clk_cfg 0x%x\n",
                       "setup_fifo_params",uVar11,uVar2,uVar13 & 0xffffffff,uVar9);
        if (*(iVar18 + 0xa8) != 0) {
            sym.spi_trace_log(*(iVar18 + 0xa8),0x8000cfe,0x80012a1,uVar11);
        }
        in_x3 = uVar8;
        ipc_log_string(*(iVar18 + 0x1b8),"%s:clk_sel 0x%x cpol %d cpha %d delay 0x%x\n","setup_fifo_params",in_x3,
                       uVar19,arg1_00,uVar21);
        if (*(iVar18 + 0xa8) != 0) {
            in_x3 = uVar8;
            sym.spi_trace_log(*(iVar18 + 0xa8),0x8001216,0x80012a1,in_x3);
        }
        DataSynchronizationBarrier(3,3,0);
        uVar19 = uVar14 & 0xffffffff;
    }
    else {
        in_x3 = *(iVar18 + 0xc4);
        _dev_err(*(iVar18 + 0xa8),"Err setting clks ret(%d) for %d\n",uVar19);
    }
code_r0x0800442c:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_68) {
        return uVar19;
    }
    auVar24 = __stack_chk_fail();
    *extraout_x18 = 0x80046b8;
    iVar18 = *(auVar24._0_8_ + 0x98);
    *(iVar18 + 0xc4) = 0;
    if (*(iVar18 + 0x1a4) == 3) {
        for (puVar20 = *auVar24._8_8_; auVar24._8_8_ != puVar20; puVar20 = *puVar20) {
            if ((puVar20[-0xe] != 0) && (puVar20[-0xb] != -1)) {
                in_x3 = 2;
                dma_unmap_page_attrs(*(iVar18 + 0x100),puVar20[-0xb],*(puVar20 + -0xd),2,0);
            }
            if ((puVar20[-0xf] != 0) && (puVar20[-0xc] != -1)) {
                in_x3 = 1;
                dma_unmap_page_attrs(*(iVar18 + 0x100),puVar20[-0xc],*(puVar20 + -0xd),1,0);
            }
        }
    }
    if (*(iVar18 + 0x1c1) != '\0') {
        if (*(iVar18 + 0x1c2) != '\0') {
            sym.spi_geni_unlock_bus(auVar24._0_8_);
        }
        iVar12 = *(iVar18 + 0xa8);
        if (*(iVar18 + 0x1c5) == '\0') {
            if ((*(iVar12 + 0x20c) != 2) && ((*(iVar12 + 0x200) & 7) == 0)) {
                uVar15 = ktime_get_mono_fast_ns();
                *(iVar12 + 0x218) = uVar15;
                __pm_runtime_suspend(*(iVar18 + 0xa8),0xd);
            }
        }
        else {
            __pm_runtime_idle(iVar12,4);
            uVar19 = *(*(iVar18 + 0xa8) + 0x1f8);
            if (uVar19 < 0) {
                ipc_log_string(*(iVar18 + 0x1b8),"suspend usage count mismatch:%d",uVar19 & 0xffffffff);
                if (*(iVar18 + 0xa8) != 0) {
                    sym.spi_trace_log(*(iVar18 + 0xa8),0x8000e45,uVar19 & 0xffffffff,in_x3);
                }
            }
        }
    }
    return 0;
}


// ===== sym.spi_geni_unprepare_message @ 0x080046bc (size 340) =====

ulong sym.spi_geni_unprepare_message(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t in_x3;
    ulong *in_x18;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x98);
    *(iVar4 + 0xc4) = 0;
    if (*(iVar4 + 0x1a4) == 3) {
        for (puVar5 = *arg2; arg2 != puVar5; puVar5 = *puVar5) {
            if ((puVar5[-0xe] != 0) && (puVar5[-0xb] != -1)) {
                in_x3 = 2;
                dma_unmap_page_attrs(*(iVar4 + 0x100),puVar5[-0xb],*(puVar5 + -0xd),2,0);
            }
            if ((puVar5[-0xf] != 0) && (puVar5[-0xc] != -1)) {
                in_x3 = 1;
                dma_unmap_page_attrs(*(iVar4 + 0x100),puVar5[-0xc],*(puVar5 + -0xd),1,0);
            }
        }
    }
    if (*(iVar4 + 0x1c1) != '\0') {
        if (*(iVar4 + 0x1c2) != '\0') {
            sym.spi_geni_unlock_bus(arg1);
        }
        iVar2 = *(iVar4 + 0xa8);
        if (*(iVar4 + 0x1c5) == '\0') {
            if ((*(iVar2 + 0x20c) != 2) && ((*(iVar2 + 0x200) & 7) == 0)) {
                uVar1 = ktime_get_mono_fast_ns();
                *(iVar2 + 0x218) = uVar1;
                __pm_runtime_suspend(*(iVar4 + 0xa8),0xd);
            }
        }
        else {
            __pm_runtime_idle(iVar2,4);
            uVar3 = *(*(iVar4 + 0xa8) + 0x1f8);
            if (uVar3 < 0) {
                ipc_log_string(*(iVar4 + 0x1b8),"suspend usage count mismatch:%d",uVar3 & 0xffffffff);
                if (*(iVar4 + 0xa8) != 0) {
                    sym.spi_trace_log(*(iVar4 + 0xa8),0x8000e45,uVar3 & 0xffffffff,in_x3);
                }
            }
        }
    }
    return 0;
}


// ===== sym.spi_geni_transfer_one @ 0x08004814 (size 5468) =====

uint64_t sym.spi_geni_transfer_one(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    char cVar5;
    uint16_t uVar6;
    bool bVar7;
    uint32_t uVar8;
    int iVar9;
    uint uVar10;
    uint32_t uVar11;
    int64_t iVar12;
    ulong uVar13;
    char *pcVar14;
    ulong *in_x3;
    uint32_t uVar15;
    uint32_t uVar16;
    uint32_t *puVar17;
    int64_t iVar18;
    uint32_t uVar19;
    uint64_t uVar20;
    ulong uVar21;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar22;
    ulong *puVar23;
    int64_t *piVar24;
    ulong *puVar25;
    code *pcVar26;
    uint64_t *puVar27;
    ulong unaff_x30;
    uchar in_q1 [16];
    uint32_t uStack_74;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    piVar22 = *(arg1 + 0x98);
    if ((*arg3 == 0) && (*(arg3 + 8) == 0)) {
        iVar12 = piVar22[0x15];
        pcVar14 = "Invalid xfer both tx rx are NULL\n";
    }
    else {
        iVar12 = piVar22[0x15];
        if (*(arg3 + 0x10) != 0) {
            if (*(iVar12 + 0x20c) == 2) {
                ipc_log_string(piVar22[0x37],"%s: device is PM suspended\n","spi_geni_transfer_one");
                if (piVar22[0x15] == 0) {
                    _printk(0x800136d,"spi_geni_transfer_one");
                    iVar12 = piVar22[0x15];
                }
                else {
                    _dev_err(piVar22[0x15],"%s: device is PM suspended\n","spi_geni_transfer_one");
                    iVar12 = piVar22[0x15];
                }
                if (iVar12 == 0) {
                    puVar23 = 0xfffffff3;
                }
                else {
                    sym.spi_trace_log(iVar12,0x800192f,0x8000c8d,in_x3);
                    puVar23 = 0xfffffff3;
                }
                goto code_r0x08005b84;
            }
            uVar11 = 0;
            if (*(arg3 + 0x58) != 0) {
                uVar11 = (*(arg3 + 0x10) * 8000) / *(arg3 + 0x58);
            }
            uVar20 = *(piVar22 + 0x1d4);
            if ((*(piVar22 + 0x1d4) == 0) && (uVar20 = 0xfa, *(arg1 + 0x3bf) != '\0')) {
                uVar20 = 0x32;
            }
            uVar20 = uVar20 + uVar11;
            ipc_log_string(piVar22[0x37],"current xfer_timeout:%lu ms.\n",uVar20);
            if (piVar22[0x15] != 0) {
                sym.spi_trace_log(piVar22[0x15],0x8000f4a,uVar20,in_x3);
            }
            uVar13 = __msecs_to_jiffies(uVar20 & 0xffffffff);
            if (*(piVar22 + 0x1a4) != 3) {
                *(piVar22 + 0x1c) = 0;
                uVar6 = *(arg2 + 0x3a8);
                uVar11 = sym.readl_relaxed(piVar22[0x13] + 0x25c);
                uVar20 = *(arg3 + 0x49);
                if (*(piVar22 + 0x19) != *(arg3 + 0x49)) {
                    sym.spi_setup_word_len(piVar22,uVar6,uVar20);
                    uVar20 = *(arg3 + 0x49);
                    *(piVar22 + 0x19) = *(arg3 + 0x49);
                }
                if (*(arg3 + 0x58) == *(piVar22 + 0xc4)) {
code_r0x080049c0:
                    *(piVar22 + 0xcc) = 0;
                    bVar7 = *(arg3 + 8) != 0;
                    uVar8 = 3;
                    if (!bVar7) {
                        uVar8 = 1;
                    }
                    uVar15 = bVar7 << 1;
                    if (*arg3 != 0) {
                        uVar15 = uVar8;
                    }
                    uVar8 = uVar11 & 0xfffffffe;
                    if (*(arg1 + 0x3bf) != '\0') {
                        uVar8 = uVar11;
                    }
                    uVar11 = uVar20;
                    if ((uVar20 & 3) == 0) {
                        uVar16 = 0;
                        if (uVar11 != 0) {
                            uVar16 = (*(arg3 + 0x10) << 3) / uVar11;
                        }
                    }
                    else {
                        uVar16 = uVar11 + 7;
                        if (-1 < uVar11) {
                            uVar16 = uVar11;
                        }
                        uVar11 = (uVar16 >> 3) + 1;
                        uVar16 = 0;
                        if (uVar11 != 0) {
                            uVar16 = *(arg3 + 0x10) / uVar11;
                        }
                    }
                    uVar16 = uVar16 & 0xffffff;
                    if ((*(arg3 + 0x48) >> 1 & 1) == 0) {
                        uVar11 = (*(arg3 + 0x78) != *(arg1 + 0x4f0)) << 2;
                    }
                    else {
                        uVar11 = 0;
                    }
                    piVar22[0x1b] = arg3;
                    if ((uVar15 & 1) == 0) {
                        if (uVar15 >> 1 != 0) goto code_r0x08004b6c;
code_r0x08004b18:
                        cVar5 = *(arg1 + 0x3bf);
                    }
                    else {
                        *(piVar22 + 0xcc) = *(arg3 + 0x10);
                        sym.writel_relaxed(uVar16,piVar22[0x13] + 0x26c);
                        if (uVar15 >> 1 == 0) goto code_r0x08004b18;
code_r0x08004b6c:
                        sym.writel_relaxed(uVar16,piVar22[0x13] + 0x270);
                        *(piVar22 + 0x1a) = *(arg3 + 0x10);
                        cVar5 = *(arg1 + 0x3bf);
                    }
                    if (cVar5 != '\0') {
                        *(piVar22 + 0x1a4) = 2;
                    }
                    if (*(piVar22 + 0x1cd) == '\0') {
                        uVar19 = 0;
                        if (piVar22[0x19] != 0) {
                            uVar19 = (piVar22[0x17] * *(piVar22 + 0xb4)) / piVar22[0x19];
                        }
                        if (uVar16 <= uVar19) goto code_r0x08004b90;
                        uVar10 = *(piVar22 + 0x1a4);
                    }
                    else {
code_r0x08004b90:
                        uVar10 = 1;
                        *(piVar22 + 0x1a4) = 1;
                    }
                    geni_se_select_mode(piVar22,uVar10);
                    if (*(arg1 + 0x3bf) == '\0') {
                        sym.writel_relaxed(uVar8,piVar22[0x13] + 0x25c);
                    }
                    sym.writel(uVar11 | uVar15 << 0x1b,*piVar22 + 0x600);
                    in_x3 = uVar16;
                    ipc_log_string(piVar22[0x37],"%s: trans_len %d xferlen%d tx_cfg 0x%x cmd 0x%x cs%d mode%d\n",
                                   "setup_fifo_xfer",in_x3,*(arg3 + 0x10),uVar8,uVar15,*(arg3 + 0x48) >> 1 & 1,
                                   *(piVar22 + 0x1a4));
                    if (piVar22[0x15] != 0) {
                        in_x3 = uVar16;
                        sym.spi_trace_log(piVar22[0x15],0x80019e4,0x8000772,in_x3);
                    }
                    if ((uVar15 >> 1 == 0) || (*(piVar22 + 0x1a4) != 2)) {
code_r0x08004c78:
                        if ((uVar15 & 1) != 0) {
                            if (*(piVar22 + 0x1a4) == 2) {
                                puVar25 = arg3 + 0x18;
                                in_x3 = puVar25;
                                puVar23 = geni_se_tx_dma_prep(piVar22,*arg3,*(arg3 + 0x10));
                                iVar9 = puVar23;
                                if ((iVar9 != 0) || (*arg3 == 0)) {
                                    ipc_log_string(piVar22[0x37],"Failed to setup tx dma %d\n",puVar23 & 0xffffffff);
                                    if (piVar22[0x15] == 0) {
                                        _printk(0x80011ca,puVar23 & 0xffffffff);
                                    }
                                    else {
                                        _dev_err(piVar22[0x15],"Failed to setup tx dma %d\n",puVar23 & 0xffffffff);
                                    }
                                    iVar12 = piVar22[0x15];
                                    if (iVar12 != 0) {
                                        pcVar14 = "Failed to setup tx dma %d\n";
                                        goto code_r0x08005a40;
                                    }
                                    *puVar25 = 0;
                                    goto joined_r0x08005d28;
                                }
                            }
                            else if (*(piVar22 + 0x1a4) == 1) {
                                sym.writel_relaxed(*(piVar22 + 0xbc),piVar22[0x13] + 0x80c);
                            }
                        }
                        DataSynchronizationBarrier(3,3,0);
                    }
                    else {
                        puVar25 = arg3 + 0x20;
                        in_x3 = puVar25;
                        puVar23 = geni_se_rx_dma_prep(piVar22,*(arg3 + 8),*(arg3 + 0x10));
                        iVar9 = puVar23;
                        if ((iVar9 == 0) && (*(arg3 + 8) != 0)) goto code_r0x08004c78;
                        ipc_log_string(piVar22[0x37],"Failed to setup Rx dma %d\n",puVar23 & 0xffffffff);
                        if (piVar22[0x15] == 0) {
                            _printk(0x80008ba,puVar23 & 0xffffffff);
                        }
                        else {
                            _dev_err(piVar22[0x15],"Failed to setup Rx dma %d\n",puVar23 & 0xffffffff);
                        }
                        iVar12 = piVar22[0x15];
                        if (iVar12 == 0) {
                            *puVar25 = 0;
                        }
                        else {
                            pcVar14 = "Failed to setup Rx dma %d\n";
code_r0x08005a40:
                            sym.spi_trace_log(iVar12,pcVar14,puVar23 & 0xffffffff,in_x3);
                            *puVar25 = 0;
                            iVar9 = puVar23;
                        }
joined_r0x08005d28:
                        if (iVar9 != 0) goto code_r0x08005664;
                    }
                    if (*(arg1 + 0x3bf) != '\0') {
                        *(piVar22 + 0x1cf) = 1;
                    }
                    iVar12 = wait_for_completion_timeout(piVar22 + 0x1c,uVar13);
                    if (*(arg1 + 0x3bf) != '\0') {
                        *(piVar22 + 0x1cf) = 0;
                    }
                    if (iVar12 != 0) {
                        if (*(piVar22 + 0x1a4) == 2) {
                            if (*arg3 != 0) {
                                geni_se_tx_dma_unprep(piVar22,*(arg3 + 0x18),*(arg3 + 0x10));
                            }
                            if (*(arg3 + 8) != 0) {
                                geni_se_rx_dma_unprep(piVar22,*(arg3 + 0x20),*(arg3 + 0x10));
                            }
                        }
code_r0x08005b80:
                        puVar23 = NULL;
                        goto code_r0x08005b84;
                    }
                    ipc_log_string(piVar22[0x37],"Xfer[len %d tx %pK rx %pK n %d] timed out.\n",*(arg3 + 0x10),*arg3
                                   ,*(arg3 + 8),*(arg3 + 0x49));
                    in_x3 = *arg3;
                    puVar23 = *(arg3 + 8);
                    if (piVar22[0x15] == 0) {
                        _printk(0x80009ce,*(arg3 + 0x10),in_x3,puVar23,*(arg3 + 0x49));
                        in_x3 = puVar23;
                    }
                    else {
                        _dev_err(piVar22[0x15],"Xfer[len %d tx %pK rx %pK n %d] timed out.\n");
                    }
                    if (piVar22[0x15] != 0) {
                        in_x3 = *arg3;
                        sym.spi_trace_log(piVar22[0x15],0x8001865,*(arg3 + 0x10),in_x3);
                    }
                    puVar23 = 0xffffff92;
                }
                else {
                    uStack_70 = 0;
                    uVar8 = sym.get_spi_clk_cfg(*(arg3 + 0x58),piVar22,in_q1,&uStack_70);
                    if (uVar8 == 0) {
                        uVar8 = uStack_70 << 4;
                        *(piVar22 + 0xc4) = *(arg3 + 0x58);
                        sym.writel_relaxed(uStack_70._4_4_ & 7,piVar22[0x13] + 0x7c);
                        sym.writel_relaxed(uVar8 | 1,piVar22[0x13] + 0x48);
                        uVar20 = *(piVar22 + 0x19);
                        goto code_r0x080049c0;
                    }
                    puVar23 = uVar8;
                    in_x3 = puVar23;
                    _dev_err(piVar22[0x15],"%s:Err setting clks:%d\n","setup_fifo_xfer");
code_r0x08005664:
                    ipc_log_string(piVar22[0x37],"setup_fifo_xfer failed: %d\n",puVar23 & 0xffffffff);
                    if (piVar22[0x15] == 0) {
                        _printk(0x8001733,puVar23 & 0xffffffff);
                    }
                    else {
                        _dev_err(piVar22[0x15],"setup_fifo_xfer failed: %d\n",puVar23 & 0xffffffff);
                    }
                    if (piVar22[0x15] != 0) {
                        sym.spi_trace_log(piVar22[0x15],0x8000756,puVar23 & 0xffffffff,in_x3);
                    }
                }
                piVar22[0x1b] = 0;
                piVar22 = *(arg1 + 0x98);
                sym.geni_spi_se_dump_dbg_regs(piVar22,piVar22[0x13],piVar22[0x37]);
                if (*(piVar22 + 0x1a4) == 1) {
                    sym.writel_relaxed(0,piVar22[0x13] + 0x80c);
                }
                if (*(arg1 + 0x3bf) == '\0') {
                    piVar24 = piVar22 + 0x1c;
                    *piVar24 = 0;
                    if (*(arg3 + 8) != 0) {
                        uVar11 = sym.readl_relaxed(piVar22[0x13] + 0x804);
                        for (uVar11 = uVar11 & 0x1ffffff; uVar11 != 0; uVar11 = uVar11 - 1) {
                            sym.readl_relaxed(piVar22[0x13] + 0x780);
                        }
                    }
                    sym.writel_relaxed(4,*piVar22 + 0x604);
                    DataSynchronizationBarrier(3,3,0);
                    iVar12 = wait_for_completion_timeout(piVar24,0xfa);
                    if (iVar12 == 0) {
                        *(piVar22 + 0x1c) = 0;
                        sym.writel_relaxed(2,*piVar22 + 0x604);
                        DataSynchronizationBarrier(3,3,0);
                        iVar12 = wait_for_completion_timeout(piVar24,0xfa);
                        if (iVar12 == 0) {
                            _dev_err(piVar22[0x15],"Failed to cancel/abort m_cmd\n");
                        }
                    }
                }
                if (*(piVar22 + 0x1a4) == 2) {
                    if ((*arg3 != 0) && (*(arg3 + 0x18) != 0)) {
                        *(piVar22 + 0x1c) = 0;
                        sym.writel_relaxed(1,piVar22[0x13] + 0xc58);
                        iVar12 = wait_for_completion_timeout(piVar22 + 0x1c,0xfa);
                        if (iVar12 == 0) {
                            _dev_err(piVar22[0x15],"DMA TX RESET failed\n");
                        }
                        geni_se_tx_dma_unprep(piVar22,*(arg3 + 0x18),*(arg3 + 0x10));
                    }
                    if ((*(arg3 + 8) != 0) && (*(arg3 + 0x20) != 0)) {
                        *(piVar22 + 0x1c) = 0;
                        sym.writel_relaxed(1,piVar22[0x13] + 0xd58);
                        iVar12 = wait_for_completion_timeout(piVar22 + 0x1c,0xfa);
                        if (iVar12 == 0) {
                            _dev_err(piVar22[0x15],"DMA RX RESET failed\n");
                        }
                        geni_se_rx_dma_unprep(piVar22,*(arg3 + 0x20),*(arg3 + 0x10));
                    }
                }
                if ((*(arg1 + 0x3bf) != '\0') && (*(piVar22 + 0x1c5) == '\0')) {
                    __pm_runtime_suspend(piVar22[0x15],4);
                }
                goto code_r0x08005b84;
            }
            piVar22[0x35] = 0;
            iVar12 = piVar22[0x22];
            *(piVar22 + 0x36) = 0;
            *(piVar22 + 0x34) = 0;
            *(piVar22 + 0x2c) = 0;
            *(piVar22 + 0x30) = 0;
            puVar17 = *(arg2 + 0x3b8);
            if (puVar17 == NULL) {
                uVar11 = 0;
                uVar8 = 0;
            }
            else {
                uVar11 = *puVar17;
                uVar8 = puVar17[1];
            }
            uVar4 = *(arg3 + 0x49);
            uVar15 = uVar4;
            if ((*(piVar22 + 0x19) == uVar4) && (*(arg3 + 0x58) == *(piVar22 + 0xc4))) {
                puVar23 = NULL;
                uVar11 = 0;
                if ((uVar4 & 3) == 0) {
code_r0x08004a5c:
                    uVar16 = *(arg3 + 0x10) << 3;
                }
                else {
code_r0x08004e5c:
                    uVar8 = uVar15 + 7;
                    if (-1 < uVar15) {
                        uVar8 = uVar15;
                    }
                    uVar16 = *(arg3 + 0x10);
                    uVar15 = (uVar8 >> 3) + 1;
                }
                uVar8 = 0;
                if (uVar15 != 0) {
                    uVar8 = uVar16 / uVar15;
                }
                bVar7 = *(arg3 + 8) == 0;
                uVar15 = uVar8;
                if (*arg3 == 0) {
                    if (*(arg3 + 8) == 0) {
                        bVar1 = false;
                        uVar16 = 0;
                        uStack_74 = 0;
                        bVar7 = true;
                    }
                    else {
                        uVar11 = uVar11 + 1;
                        uVar16 = 1;
                        bVar7 = false;
                        uStack_74 = 2;
                        bVar1 = true;
                    }
                }
                else {
                    bVar1 = !bVar7;
                    uVar16 = 0;
                    uVar11 = uVar11 | 2;
                    uVar15 = 0;
                    if (!bVar7) {
                        uVar15 = uVar8;
                    }
                    uStack_74 = 3;
                    if (bVar7) {
                        uStack_74 = 1;
                    }
                }
                puVar27 = iVar12 + 0x60;
                if ((*(arg3 + 0x48) >> 1 & 1) == 0) {
                    iVar9 = (*(arg3 + 0x78) != *(arg1 + 0x4f0)) << 2;
                }
                else {
                    iVar9 = 0;
                }
                puVar17 = piVar22[0x22] + piVar22[0x36] * 0x158 + 0x30;
                if ((puVar17 != NULL) && (puVar17 < 0xfffffffffffff001)) {
                    uVar4 = *(arg2 + 0x3a4);
                    iVar18 = piVar22[0x22] + piVar22[0x36] * 0x158;
                    uVar8 = 0x200000;
                    if ((uStack_74 & 2) != 0) {
                        uVar8 = 0x200800;
                    }
                    uVar19 = 0x100;
                    if (uVar16 == 0) {
                        uVar19 = 0;
                    }
                    *(iVar18 + 0x34) = 0;
                    *(iVar18 + 0x38) = uVar15;
                    *puVar17 = uStack_74 | uVar4 << 8 | iVar9 << 0x18;
                    *(iVar18 + 0x3c) = uVar19 | uVar16 ^ 1 | uVar8;
                    in_x3 = uVar15;
                    ipc_log_string(piVar22[0x37],"%s: rx len %d flags 0x%x cs %d cmd %d eot %d eob %d chain %d\n",
                                   "setup_go_tre",in_x3,iVar9,uVar4,uStack_74,0,uVar16,uVar16 ^ 1);
                    if (piVar22[0x15] != 0) {
                        in_x3 = uVar15;
                        sym.spi_trace_log(piVar22[0x15],0x8000e65,0x8000b82,in_x3);
                    }
                }
                sg_init_table(puVar27,uVar11);
                if (!bVar7) {
                    sg_init_table(iVar12 + 0xc0,1);
                }
                if (puVar23 != NULL) {
                    puVar27 = iVar12 + 0x80;
                    *(iVar12 + 0x60) =
                         (((puVar23 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | *(iVar12 + 0x60) & 3) -
                         0x200000000;
                    *(iVar12 + 0x68) = puVar23 & 0xfff;
                    *(iVar12 + 0x6c) = 0x10;
                }
                *(puVar27 + 1) = puVar17 & 0xfff;
                *(puVar27 + 0xc) = 0x10;
                *puVar27 = ((puVar17 * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | *puVar27 & 3) -
                           0x200000000;
                *(piVar22[0x22] + piVar22[0x36] * 0x158 + 0x148) = arg1;
                *(piVar22[0x22] + piVar22[0x36] * 0x158 + 0x150) = arg3;
                if (uStack_74 >> 1 == 0) {
code_r0x08005240:
                    if ((uStack_74 & 1) != 0) {
                        puVar23 = piVar22[0x22] + piVar22[0x36] * 0x158 + 0x40;
                        if ((puVar23 == NULL) || (0xfffffffffffff000 < puVar23)) {
                            _dev_err(piVar22[0x15],"Err setting up tx tre\n");
                            goto code_r0x08005a9c;
                        }
                        uVar21 = *(arg3 + 0x18);
                        uVar8 = *(arg3 + 0x10);
                        iVar12 = piVar22[0x22] + piVar22[0x36] * 0x158;
                        *puVar23 = uVar21;
                        *(iVar12 + 0x44) = uVar21 >> 0x20;
                        *(iVar12 + 0x48) = uVar8 & 0xffffff;
                        *(iVar12 + 0x4c) = 0x100200;
                        puVar27[4] = ((puVar23 * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | puVar27[4] & 3)
                                     - 0x200000000;
                        *(puVar27 + 5) = puVar23 & 0xfff;
                        *(puVar27 + 0x2c) = 0x10;
                        *(piVar22 + 0x35) = piVar22[0x35] + 1;
                    }
                    piVar24 = piVar22[0x24];
                    iVar12 = piVar22[0x22];
                    iVar18 = piVar22[0x36];
                    if (((piVar24 == NULL) || (*piVar24 == 0)) || (pcVar26 = *(*piVar24 + 0x138), pcVar26 == NULL)) {
                        uVar21 = 0;
                    }
                    else {
                        __cfi_slowpath_diag(0x3675599da7c39b65,pcVar26,0x8000450);
                        in_x3 = 0x1;
                        uVar21 = (*pcVar26)(piVar24,iVar12 + iVar18 * 0x158 + 0x60,uVar11,1,3,0);
                        iVar12 = piVar22[0x22];
                        iVar18 = piVar22[0x36];
                    }
                    *(iVar12 + iVar18 * 0x158 + 0x138) = uVar21;
                    uVar20 = *(piVar22[0x22] + piVar22[0x36] * 0x158 + 0x138);
                    if ((uVar20 != 0) && (uVar20 < 0xfffffffffffff001)) {
                        *(uVar20 + 0x28) = sym.spi_gsi_tx_callback.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
                        iVar12 = piVar22[0x22] + piVar22[0x36] * 0x158;
                        *(*(iVar12 + 0x138) + 0x38) = iVar12 + 0xe8;
                        iVar12 = piVar22[0x22] + piVar22[0x36] * 0x158;
                        *(iVar12 + 0x108) = iVar12 + 0x148;
                        iVar12 = *(piVar22[0x22] + piVar22[0x36] * 0x158 + 0x138);
                        pcVar26 = *(iVar12 + 0x18);
                        __cfi_slowpath_diag(0xc97b94b4f4a7b659,pcVar26,0x8000470);
                        uVar10 = (*pcVar26)(iVar12);
                        *(piVar22[0x22] + piVar22[0x36] * 0x158 + 0xe0) = uVar10;
                        uVar11 = *(piVar22[0x22] + piVar22[0x36] * 0x158 + 0xe0);
                        in_x3 = uVar11;
                        if (-1 < uVar11) {
                            if (uStack_74 >> 1 == 0) {
                                piVar24 = piVar22[0x24];
                            }
                            else {
                                iVar12 = *(piVar22[0x22] + piVar22[0x36] * 0x158 + 0x140);
                                pcVar26 = *(iVar12 + 0x18);
                                __cfi_slowpath_diag(0xc97b94b4f4a7b659,pcVar26,0x8000470);
                                uVar10 = (*pcVar26)(iVar12);
                                *(piVar22[0x22] + piVar22[0x36] * 0x158 + 0xe4) = uVar10;
                                uVar11 = *(piVar22[0x22] + piVar22[0x36] * 0x158 + 0xe4);
                                in_x3 = uVar11;
                                if (uVar11 < 0) {
                                    _dev_err(piVar22[0x15],"%s: dmaengine_submit failed (%d)\n","setup_gsi_xfer");
                                    piVar24 = piVar22[0x25];
                                    goto code_r0x08005758;
                                }
                                piVar24 = piVar22[0x24];
                                pcVar26 = *(*piVar24 + 400);
                                __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar26,0x8000490);
                                (*pcVar26)(piVar24);
                                piVar24 = piVar22[0x25];
                            }
                            pcVar26 = *(*piVar24 + 400);
                            __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar26,0x8000490);
                            (*pcVar26)(piVar24);
                            iVar9 = piVar22[0x36] + 1;
                            *(piVar22 + 0x36) = iVar9;
                            goto joined_r0x08005aa8;
                        }
                        _dev_err(piVar22[0x15],"%s: dmaengine_submit failed (%d)\n","setup_gsi_xfer");
                        piVar24 = piVar22[0x24];
code_r0x08005758:
                        pcVar26 = *(*piVar24 + 0x178);
                        if (pcVar26 != NULL) {
                            __cfi_slowpath_diag(0x146502001565ea5c,pcVar26,0x80004b0);
                            (*pcVar26)(piVar24);
                        }
                        puVar23 = 0xffffffea;
                        goto code_r0x08005790;
                    }
                    iVar12 = piVar22[0x15];
                    pcVar14 = "Err setting up tx desc\n";
                }
                else {
                    puVar23 = piVar22[0x22] + piVar22[0x36] * 0x158 + 0x50;
                    if ((puVar23 == NULL) || (0xfffffffffffff000 < puVar23)) {
                        _dev_err(piVar22[0x15],"Err setting up rx tre\n");
                        goto code_r0x08005a9c;
                    }
                    uVar21 = *(arg3 + 0x20);
                    uVar8 = *(arg3 + 0x10);
                    iVar18 = piVar22[0x22] + piVar22[0x36] * 0x158;
                    *puVar23 = uVar21;
                    *(iVar18 + 0x54) = uVar21 >> 0x20;
                    *(iVar18 + 0x58) = uVar8 & 0xffffff;
                    *(iVar18 + 0x5c) = 0x100000;
                    *(iVar12 + 200) = puVar23 & 0xfff;
                    *(iVar12 + 0xcc) = 0x10;
                    *(iVar12 + 0xc0) =
                         ((puVar23 * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | *(iVar12 + 0xc0) & 3) -
                         0x200000000;
                    piVar24 = piVar22[0x25];
                    iVar12 = piVar22[0x22];
                    iVar18 = piVar22[0x36];
                    if (((piVar24 == NULL) || (*piVar24 == 0)) || (pcVar26 = *(*piVar24 + 0x138), pcVar26 == NULL)) {
                        uVar21 = 0;
                    }
                    else {
                        __cfi_slowpath_diag(0x3675599da7c39b65,pcVar26,0x8000450);
                        in_x3 = 0x2;
                        uVar21 = (*pcVar26)(piVar24,iVar12 + iVar18 * 0x158 + 0xc0,bVar1,2,3,0);
                        iVar12 = piVar22[0x22];
                        iVar18 = piVar22[0x36];
                    }
                    *(iVar12 + iVar18 * 0x158 + 0x140) = uVar21;
                    uVar20 = *(piVar22[0x22] + piVar22[0x36] * 0x158 + 0x140);
                    if ((uVar20 != 0) && (uVar20 < 0xfffffffffffff001)) {
                        *(uVar20 + 0x28) = sym.spi_gsi_rx_callback.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
                        iVar12 = piVar22[0x22] + piVar22[0x36] * 0x158;
                        *(*(iVar12 + 0x140) + 0x38) = iVar12 + 0x110;
                        iVar12 = piVar22[0x22] + piVar22[0x36] * 0x158;
                        *(iVar12 + 0x130) = iVar12 + 0x148;
                        *(piVar22 + 0x1ac) = *(piVar22 + 0x1ac) + 1;
                        goto code_r0x08005240;
                    }
                    iVar12 = piVar22[0x15];
                    pcVar14 = "Err setting up rx desc\n";
                }
                _dev_err(iVar12,pcVar14);
                puVar23 = 0xfffffffb;
code_r0x08005790:
                ipc_log_string(piVar22[0x37],"setup_gsi_xfer failed: %d\n",puVar23 & 0xffffffff);
                if (piVar22[0x15] == 0) {
                    _printk(0x8000c20,puVar23 & 0xffffffff);
                }
                else {
                    _dev_err(piVar22[0x15],"setup_gsi_xfer failed: %d\n",puVar23 & 0xffffffff);
                }
                if (piVar22[0x15] != 0) {
                    sym.spi_trace_log(piVar22[0x15],0x8000664,puVar23 & 0xffffffff,in_x3);
                }
                piVar22[0x1b] = 0;
            }
            else {
                *(piVar22 + 0x19) = uVar4;
                puVar23 = iVar12 + 0x20;
                uVar15 = *(arg3 + 0x58);
                uStack_70 = 0;
                *(piVar22 + 0xc4) = uVar15;
                uVar16 = *(arg2 + 0x3a8);
                if ((puVar23 != NULL) && (puVar23 < 0xfffffffffffff001)) {
                    uVar4 = *(arg3 + 0x49);
                    if (*(piVar22 + 0x1c3) == '\0') {
                        uVar15 = sym.get_spi_clk_cfg(uVar15,piVar22,in_q1,&uStack_70 + 4);
                        if (uVar15 != 0) {
                            in_x3 = uVar15;
                            _dev_err(piVar22[0x15],"%s:Err setting clks:%d\n","setup_config0_tre");
                            puVar23 = uVar15;
                            goto joined_r0x08004acc;
                        }
                        uVar15 = uStack_70._4_4_;
                    }
                    else {
                        uVar10 = sym.readl_relaxed(piVar22[0x13] + 0x7c);
                        uStack_70 = CONCAT44(uStack_70._4_4_,uVar10);
                        uVar15 = sym.readl_relaxed(piVar22[0x13] + 0x48);
                        uStack_70 = CONCAT44(uVar15 >> 4,uStack_70) & 0xfffffffffff;
                        uVar15 = uVar15 >> 4 & 0xfff;
                    }
                    uVar19 = (uVar16 & 2) << 4;
                    uVar2 = uVar4 - 4 & 0xff;
                    uVar16 = uVar16 >> 5 & 1 | (uVar16 & 1) << 4;
                    uVar3 = uVar19 | uVar16;
                    puVar25 = uVar11;
                    *(iVar12 + 0x20) = uVar2 | (uVar19 | uVar16) << 8 | 0x3000000;
                    *(iVar12 + 0x24) = uVar8 | uVar11 << 8;
                    *(iVar12 + 0x28) = uVar15 | uStack_70 << 0x10;
                    *(iVar12 + 0x2c) = 0x220001;
                    ipc_log_string(piVar22[0x37],"%s: flags 0x%x word %d pack %d idx %d div %d\n","setup_config0_tre"
                                   ,uVar3,uVar2,3,uStack_70 & 0xffffffff,uVar15);
                    if (piVar22[0x15] != 0) {
                        sym.spi_trace_log(piVar22[0x15],0x800194b,0x80018a6,uVar3);
                    }
                    in_x3 = puVar25;
                    ipc_log_string(piVar22[0x37],"%s: cs_clk_delay %d inter_words_delay %d\n","setup_config0_tre",
                                   puVar25,uVar8);
                    if (piVar22[0x15] != 0) {
                        sym.spi_trace_log(piVar22[0x15],0x8001979,0x80018a6,puVar25);
                        in_x3 = puVar25;
                    }
                }
joined_r0x08004acc:
                if ((puVar23 != NULL) && (puVar23 < 0xfffffffffffff001)) {
                    uVar15 = *(piVar22 + 0x19);
                    uVar11 = 1;
                    if ((uVar15 & 3) != 0) goto code_r0x08004e5c;
                    goto code_r0x08004a5c;
                }
                in_x3 = NULL;
                _dev_err(piVar22[0x15],"%s:Err setting c0tre:%d\n","setup_gsi_xfer");
code_r0x08005a9c:
                if (puVar23 != 0) goto code_r0x08005790;
                iVar9 = piVar22[0x36];
joined_r0x08005aa8:
                if ((iVar9 < 8) && (*(arg3 + 0x78) != *(arg1 + 0x4f0))) goto code_r0x08005b80;
                if (0 < piVar22[0x35]) {
                    uVar20 = 0;
                    do {
                        iVar12 = wait_for_completion_timeout(piVar22 + 0x2c,uVar13);
                        if (iVar12 == 0) {
                            in_x3 = NULL;
                            ipc_log_string(piVar22[0x37],"Tx[%d] timeout%lu\n",uVar20);
                            if (piVar22[0x15] == 0) {
                                _printk(0x8001751,uVar20,0);
                            }
                            else {
                                in_x3 = NULL;
                                _dev_err(piVar22[0x15],"Tx[%d] timeout%lu\n",uVar20);
                            }
                            iVar12 = piVar22[0x15];
                            if (iVar12 == 0) goto code_r0x08005d18;
                            pcVar14 = "Tx[%d] timeout%lu\n";
                            goto code_r0x08005d0c;
                        }
                        uVar11 = uVar20 + 1;
                        uVar20 = uVar11;
                    } while (uVar11 < piVar22[0x35]);
                }
                if (0 < *(piVar22 + 0x1ac)) {
                    uVar20 = 0;
code_r0x08005af4:
                    iVar12 = wait_for_completion_timeout(piVar22 + 0x30,uVar13);
                    if (iVar12 != 0) goto code_r0x08005b04;
                    in_x3 = NULL;
                    ipc_log_string(piVar22[0x37],"Rx[%d] timeout%lu\n",uVar20);
                    if (piVar22[0x15] == 0) {
                        _printk(0x8001891,uVar20,0);
                    }
                    else {
                        in_x3 = NULL;
                        _dev_err(piVar22[0x15],"Rx[%d] timeout%lu\n",uVar20);
                    }
                    iVar12 = piVar22[0x15];
                    if (iVar12 != 0) {
                        pcVar14 = "Rx[%d] timeout%lu\n";
code_r0x08005d0c:
                        in_x3 = NULL;
                        sym.spi_trace_log(iVar12,pcVar14,uVar20,0);
                    }
code_r0x08005d18:
                    puVar23 = 0xffffff92;
                    goto code_r0x08005b24;
                }
code_r0x08005b14:
                if (piVar22[0x34] == '\0') goto code_r0x08005b80;
                puVar23 = 0xfffffffb;
                *(piVar22 + 0x34) = 0;
            }
code_r0x08005b24:
            iVar12 = piVar22[0x37];
            sym.geni_spi_se_dump_dbg_regs(piVar22,piVar22[0x13],iVar12);
            piVar24 = piVar22[0x24];
            if (*(piVar22 + 0x1c3) == '\0') {
                pcVar26 = *(*piVar24 + 0x178);
                if (pcVar26 != NULL) {
                    __cfi_slowpath_diag(0x146502001565ea5c,pcVar26,0x80004b0);
                    (*pcVar26)(piVar24);
                }
            }
            else {
                pcVar26 = *(*piVar24 + 0x168);
                if (pcVar26 == NULL) {
                    puVar23 = 0xffffffda;
                }
                else {
                    iVar12 = 0x80004d0;
                    __cfi_slowpath_diag(0x146502001565ea5c,pcVar26);
                    uVar20 = (*pcVar26)(piVar24);
                    puVar23 = uVar20 & 0xffffffff;
                    if (uVar20 == 0) goto code_r0x08005b84;
                }
                *(piVar22 + 0x1cc) = 1;
                ipc_log_string(piVar22[0x37],"Channel cancel failed\n");
                if (piVar22[0x15] == 0) {
                    _printk(0x80005a0);
                }
                else {
                    _dev_err(piVar22[0x15],"Channel cancel failed\n");
                }
                if (piVar22[0x15] != 0) {
                    sym.spi_trace_log(piVar22[0x15],0x800138b,iVar12,in_x3);
                }
            }
            goto code_r0x08005b84;
        }
        pcVar14 = "Zero length transfer\n";
    }
    _dev_err(iVar12,pcVar14);
    puVar23 = 0xffffffea;
code_r0x08005b84:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) != iStack_68) {
        iVar12 = __stack_chk_fail();
        *extraout_x18 = sym.spi_geni_unprepare_transfer_hardware;
        iVar12 = *(iVar12 + 0x98);
        if ((*(iVar12 + 0x1c1) == '\0') && (*(iVar12 + 0x1c3) == '\0')) {
            if ((*(iVar12 + 0x1c0) != '\0') &&
               ((*(iVar12 + 0x1c4) == '\0' &&
                (uVar11 = pinctrl_select_state(*(iVar12 + 0x70),*(iVar12 + 0x80)), uVar11 != 0)))) {
                puVar23 = uVar11;
                in_x3 = puVar23;
                ipc_log_string(*(iVar12 + 0x1b8),"%s: Error %d pinctrl_select_state\n",
                               "spi_geni_unprepare_transfer_hardware");
                if (*(iVar12 + 0xa8) != 0) {
                    sym.spi_trace_log(*(iVar12 + 0xa8),0x8001024,0x80007e1,puVar23);
                    in_x3 = puVar23;
                }
            }
            iVar18 = *(iVar12 + 0xa8);
            if (*(iVar12 + 0x1c5) == '\0') {
                if ((*(iVar18 + 0x20c) != 2) && ((*(iVar18 + 0x200) & 7) == 0)) {
                    uVar13 = ktime_get_mono_fast_ns();
                    *(iVar18 + 0x218) = uVar13;
                    __pm_runtime_suspend(*(iVar12 + 0xa8),0xd);
                }
            }
            else {
                __pm_runtime_idle(iVar18,4);
                uVar20 = *(*(iVar12 + 0xa8) + 0x1f8);
                if (uVar20 < 0) {
                    ipc_log_string(*(iVar12 + 0x1b8),"suspend usage count mismatch:%d",uVar20 & 0xffffffff);
                    if (*(iVar12 + 0xa8) != 0) {
                        sym.spi_trace_log(*(iVar12 + 0xa8),0x8000e45,uVar20 & 0xffffffff,in_x3);
                    }
                }
            }
        }
        *(iVar12 + 0x1b4) = 0;
        return 0;
    }
    return puVar23 & 0xffffffff;
code_r0x08005b04:
    uVar11 = uVar20 + 1;
    uVar20 = uVar11;
    if (*(piVar22 + 0x1ac) <= uVar11) goto code_r0x08005b14;
    goto code_r0x08005af4;
}


// ===== sym.spi_geni_unprepare_transfer_hardware @ 0x08005d70 (size 304) =====

ulong sym.spi_geni_unprepare_transfer_hardware(int64_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    uint64_t in_x3;
    ulong *in_x18;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x98);
    if ((*(iVar5 + 0x1c1) == '\0') && (*(iVar5 + 0x1c3) == '\0')) {
        if ((*(iVar5 + 0x1c0) != '\0') &&
           ((*(iVar5 + 0x1c4) == '\0' && (uVar1 = pinctrl_select_state(*(iVar5 + 0x70),*(iVar5 + 0x80)), uVar1 != 0)))
           ) {
            uVar4 = uVar1;
            in_x3 = uVar4;
            ipc_log_string(*(iVar5 + 0x1b8),"%s: Error %d pinctrl_select_state\n",
                           "spi_geni_unprepare_transfer_hardware");
            if (*(iVar5 + 0xa8) != 0) {
                sym.spi_trace_log(*(iVar5 + 0xa8),0x8001024,0x80007e1,uVar4);
                in_x3 = uVar4;
            }
        }
        iVar3 = *(iVar5 + 0xa8);
        if (*(iVar5 + 0x1c5) == '\0') {
            if ((*(iVar3 + 0x20c) != 2) && ((*(iVar3 + 0x200) & 7) == 0)) {
                uVar2 = ktime_get_mono_fast_ns();
                *(iVar3 + 0x218) = uVar2;
                __pm_runtime_suspend(*(iVar5 + 0xa8),0xd);
            }
        }
        else {
            __pm_runtime_idle(iVar3,4);
            uVar4 = *(*(iVar5 + 0xa8) + 0x1f8);
            if (uVar4 < 0) {
                ipc_log_string(*(iVar5 + 0x1b8),"suspend usage count mismatch:%d",uVar4 & 0xffffffff);
                if (*(iVar5 + 0xa8) != 0) {
                    sym.spi_trace_log(*(iVar5 + 0xa8),0x8000e45,uVar4 & 0xffffffff,in_x3);
                }
            }
        }
    }
    *(iVar5 + 0x1b4) = 0;
    return 0;
}


// ===== sym.writel_relaxed @ 0x08005ea4 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8005ec0);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8005ee8);
    return;
}


// ===== sym.pm_runtime_put_noidle @ 0x08005f1c (size 120) =====

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
            if (uVar2 != uVar5) goto code_r0x08005f4c;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar5 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08005f4c:
        if (uVar5 == uVar2) {
            return;
        }
    } while( true );
}


// ===== sym.spi_geni_mas_setup @ 0x08005f94 (size 1524) =====

int sym.spi_geni_mas_setup(int64_t arg1)

{
    char cVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    uint32_t uVar7;
    uint uVar8;
    uint uVar9;
    int iVar10;
    int64_t iVar11;
    uint64_t uVar12;
    char *pcVar13;
    int64_t in_x3;
    uint64_t uVar14;
    ulong *in_x18;
    int64_t *arg1_00;
    code *pcVar15;
    int64_t *piVar16;
    uint32_t uVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    uVar3 = sym.readl_relaxed(*arg1_00 + 0x68);
    uVar3 = uVar3 >> 8 & 0xff;
    if (*(arg1 + 0x3bf) != '\0') {
        if (*(arg1_00 + 0x1ce) == '\0') {
            if (uVar3 != 5) goto code_r0x08006554;
            if (arg1_00[0x18] == '\0') {
                sym.spi_slv_setup(arg1_00);
                goto code_r0x08006574;
            }
            goto code_r0x08006008;
        }
code_r0x08006144:
        iVar10 = 0;
        goto code_r0x08006148;
    }
    if (arg1_00[0x18] == '\0') {
        if (uVar3 != 1) {
code_r0x08006554:
            _dev_err(arg1_00[0x15],"Invalid proto %d\n");
            return -6;
        }
code_r0x08006574:
        if (*(arg1_00 + 0x1d1) != '\0') {
            sym.spi_master_setup(arg1_00);
        }
    }
code_r0x08006008:
    *(arg1_00 + 0x21) = 1;
    uVar2 = sym.readl_relaxed(arg1_00[0x13] + 100);
    *(arg1_00 + 0x38) = uVar2 & 1;
    if ((uVar2 & 1) == 0) {
        uVar4 = geni_se_get_qup_hw_version(arg1_00);
        uVar17 = 0xff0000;
        uVar3 = uVar17;
        if (((uVar4 & 0xffe0000) < 0x90001 || uVar4 >> 0x1c != 3) && uVar4 >> 0x1e == 0) {
            uVar3 = 0x3f0000;
        }
        uVar4 = sym.readl_relaxed(*arg1_00 + 0xe24);
        *(arg1_00 + 0xb4) = (uVar3 & uVar4) >> 0x10;
        uVar3 = geni_se_get_qup_hw_version(arg1_00);
        if (((uVar3 & 0xffe0000) < 0x90001 || uVar3 >> 0x1c != 3) && uVar3 >> 0x1e == 0) {
            uVar17 = 0x3f0000;
        }
        uVar3 = sym.readl_relaxed(*arg1_00 + 0xe28);
        *(arg1_00 + 0x16) = (uVar17 & uVar3) >> 0x10;
        uVar3 = sym.readl_relaxed(*arg1_00 + 0xe24);
        *(arg1_00 + 0x17) = uVar3 >> 0x18 & 0x3f;
        geni_se_init(arg1_00,0,*(arg1_00 + 0xb4) + -2);
        iVar10 = 0;
        *(arg1_00 + 0xbc) = 1;
        goto code_r0x08006148;
    }
    ipc_log_string(arg1_00[0x37],"%s:GSI mode\n","spi_geni_mas_setup");
    iVar11 = 0;
    if (arg1_00[0x15] != 0) {
        sym.spi_trace_log(arg1_00[0x15],0x8000c6c,0x80005fe,in_x3);
        iVar11 = arg1_00[0x15];
    }
    uVar12 = dma_request_chan(iVar11,0x8000f85);
    uVar14 = 0;
    if (uVar12 < 0xfffffffffffff001) {
        uVar14 = uVar12;
    }
    arg1_00[0x24] = uVar14;
    if (uVar14 == 0) {
        _dev_info(arg1_00[0x15],"Failed to get tx DMA ch %ld\n",0);
        goto code_r0x08006144;
    }
    uVar12 = dma_request_chan(arg1_00[0x15],0x800090e);
    uVar14 = 0;
    if (uVar12 < 0xfffffffffffff001) {
        uVar14 = uVar12;
    }
    arg1_00[0x25] = uVar14;
    if (uVar14 == 0) {
        _dev_info(arg1_00[0x15],"Failed to get rx DMA ch %ld\n",0);
        dma_release_channel(arg1_00[0x24]);
        iVar10 = 0;
        goto code_r0x08006148;
    }
    uVar14 = devm_kmalloc(arg1_00[0x15],0xac0,0xdc0);
    arg1_00[0x22] = uVar14;
    if ((uVar14 == 0) || (0xfffffffffffff000 < uVar14)) {
        iVar11 = arg1_00[0x15];
        pcVar13 = "Failed to get GSI mem\n";
code_r0x080064b8:
        _dev_err(iVar11,pcVar13);
        dma_release_channel(arg1_00[0x24]);
        dma_release_channel(arg1_00[0x25]);
        iVar10 = 0;
    }
    else {
        if ((*(arg1_00 + 0x1c2) != '\0') || (*(arg1_00 + 0x1c3) != '\0')) {
            uVar14 = devm_kmalloc(arg1_00[0x15],0x158,0xdc0);
            arg1_00[0x23] = uVar14;
            if ((uVar14 == 0) || (0xfffffffffffff000 < uVar14)) {
                iVar11 = arg1_00[0x15];
                pcVar13 = "Failed to get GSI lock mem\n";
                goto code_r0x080064b8;
            }
        }
        arg1_00[0x27] = sym.spi_gsi_ch_cb.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
        arg1_00[0x28] = arg1;
        *(arg1_00 + 0x26) = 1;
        *(arg1_00[0x24] + 0x68) = arg1_00 + 0x26;
        arg1_00[0x2a] = sym.spi_gsi_ch_cb.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
        arg1_00[0x2b] = arg1;
        *(arg1_00 + 0x29) = 1;
        *(arg1_00[0x25] + 0x68) = arg1_00 + 0x29;
        piVar16 = arg1_00[0x24];
        pcVar15 = *(*piVar16 + 0x160);
        if (pcVar15 == NULL) {
            iVar10 = -0x26;
code_r0x08006528:
            iVar11 = arg1_00[0x15];
            pcVar13 = "Failed to Config Tx, ret:%d\n";
        }
        else {
            __cfi_slowpath_diag(0xa5b1eb43ed4fa99d,pcVar15,0x8000430);
            iVar10 = (*pcVar15)(piVar16,0);
            if (iVar10 != 0) goto code_r0x08006528;
            iVar10 = sym.dmaengine_slave_config(arg1_00[0x25]);
            if (iVar10 == 0) goto code_r0x08006148;
            iVar11 = arg1_00[0x15];
            pcVar13 = "Failed to Config Rx, ret:%d\n";
        }
        _dev_err(iVar11,pcVar13,iVar10);
        dma_release_channel(arg1_00[0x24]);
        dma_release_channel(arg1_00[0x25]);
    }
    arg1_00[0x24] = 0;
    arg1_00[0x25] = 0;
code_r0x08006148:
    uVar14 = *(arg1_00 + 0x16);
    pcVar13 = *(arg1_00 + 0xb4);
    _dev_info(arg1_00[0x15],"tx_fifo %d rx_fifo %d tx_width %d\n",pcVar13,uVar14,arg1_00[0x17]);
    if (*(arg1_00 + 0x1c1) == '\0') {
        *(arg1_00 + 0x18) = 1;
        cVar1 = *(arg1_00 + 0x1c3);
    }
    else {
        cVar1 = *(arg1_00 + 0x1c3);
    }
    if (cVar1 == '\0') {
        uVar12 = geni_se_get_qup_hw_version(arg1_00);
        uVar17 = uVar12 >> 0x1c & 0xf;
        uVar3 = uVar12 >> 0x10 & 0xfff;
        if ((uVar17 == 1) && (uVar3 == 0)) {
            pcVar13 = "spi_geni_mas_setup";
            uVar14 = 1;
            *(arg1_00 + 0x21) = 2;
            ipc_log_string(arg1_00[0x37],"%s:Major:%d Minor:%d os%d\n","spi_geni_mas_setup",1,0,2);
            if (arg1_00[0x15] != 0) {
                pcVar13 = "spi_geni_mas_setup";
                uVar14 = 1;
                sym.spi_trace_log(arg1_00[0x15],0x8001914,0x80005fe,1);
            }
        }
        if (*(arg1_00 + 0x1c7) != '\0') {
            iVar5 = sym.readl_relaxed(arg1_00[0x13] + 0x230);
            iVar6 = sym.readl_relaxed(arg1_00[0x13] + 0x224);
            uVar4 = sym.readl_relaxed(arg1_00[0x13] + 0x2b0);
            uVar7 = sym.readl_relaxed(arg1_00[0x13] + 0x2b4);
            if (uVar17 != 1 || uVar3 != 0) {
                if (((uVar12 & 0xffffffff) >> 0x1d == 0) || ((uVar17 == 2 && (uVar3 < 5)))) {
                    uVar14 = uVar4 & 0xfffff8fd;
                }
                else {
                    uVar14 = uVar4 & 0xfffff8fd | arg1_00[0x39] << 8;
                }
            }
            else {
                uVar14 = uVar4 & 0xffff8fed | 0x1000;
            }
            sym.writel_relaxed(uVar14,arg1_00[0x13] + 0x2b0);
            uVar4 = 0;
            if (iVar6 != 0 || iVar5 != 1) {
                uVar4 = uVar7;
            }
            if (iVar5 == 0 && iVar6 == 0) {
                uVar4 = 1;
            }
            sym.writel_relaxed(uVar4,arg1_00[0x13] + 0x2b4);
            if (uVar17 != 1 || uVar3 != 0) {
                sym.writel_relaxed(1,arg1_00[0x13] + 0x84);
            }
            uVar12 = sym.readl_relaxed(arg1_00[0x13] + 0x2b0);
            uVar12 = uVar12 & 0xffffffff;
            uVar8 = sym.readl_relaxed(arg1_00[0x13] + 0x2b4);
            uVar9 = sym.readl_relaxed(arg1_00[0x13] + 0x84);
            pcVar13 = "spi_geni_set_sampling_rate";
            uVar14 = uVar12;
            ipc_log_string(arg1_00[0x37],"%s cfg108: 0x%x cfg109: 0x%x cfg_seq_start: 0x%x\n",
                           "spi_geni_set_sampling_rate",uVar12,uVar8,uVar9);
            if (arg1_00[0x15] != 0) {
                pcVar13 = "spi_geni_set_sampling_rate";
                sym.spi_trace_log(arg1_00[0x15],0x8000b20,0x8001718,uVar12);
                uVar14 = uVar12;
            }
        }
        if (*(arg1_00 + 0x1c5) != '\0') {
            ipc_log_string(arg1_00[0x37],"Auto Suspend is disabled\n");
            if (arg1_00[0x15] != 0) {
                sym.spi_trace_log(arg1_00[0x15],0x8001346,pcVar13,uVar14);
            }
        }
    }
    return iVar10;
}


// ===== sym.spi_slv_setup @ 0x08006588 (size 144) =====

void sym.spi_slv_setup(int64_t arg1)

{
    int64_t arg1_00;
    int64_t arg2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(1,*(arg1 + 0x98) + 700);
    arg2 = *(arg1 + 0x98) + 0x24;
    if (*(arg1 + 0x1d0) == '\0') {
        arg1_00 = 1;
    }
    else {
        sym.writel_relaxed(2,arg2);
        arg1_00 = 0x8c04;
        arg2 = *(arg1 + 0x98) + 0x240;
    }
    sym.writel_relaxed(arg1_00,arg2);
    sym.writel_relaxed(1,*(arg1 + 0x98) + 0x84);
    DataSynchronizationBarrier(3,2,0);
    _dev_info(*(arg1 + 0xa8),"spi slave setup done\n");
    return;
}


// ===== sym.spi_master_setup @ 0x08006618 (size 80) =====

void sym.spi_master_setup(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(0x19e1,*(arg1 + 0x98) + 0x240);
    sym.writel_relaxed(1,*(arg1 + 0x98) + 0x84);
    DataSynchronizationBarrier(3,2,0);
    return;
}


// ===== sym.spi_gsi_ch_cb @ 0x08006668 (size 452) =====

void sym.spi_gsi_ch_cb(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *arg1;
    iVar3 = *(arg2 + 0x98);
    if ((iVar1 == 0) || (iVar1 == 7)) {
        ipc_log_string(*(iVar3 + 0x1b8),"%s:cb_ev%d status%llu ts%llu count%llu\n","spi_gsi_ch_cb",iVar1,*(arg1 + 8)
                       ,*(arg1 + 0x10),*(arg1 + 0x18));
        if (*(iVar3 + 0xa8) != 0) {
            sym.spi_trace_log(*(iVar3 + 0xa8),0x8001aa0,0x8000715,*arg1);
        }
    }
    else if (iVar1 - 1U < 6) {
        ipc_log_string(*(iVar3 + 0x1b8),"%s: cb_ev %d status %llu ts %llu count %llu\n","spi_gsi_ch_cb",iVar1,
                       *(arg1 + 8),*(arg1 + 0x10),*(arg1 + 0x18));
        if (*(iVar3 + 0xa8) == 0) {
            _printk(0x8000bf1,"spi_gsi_ch_cb",*arg1,*(arg1 + 8),*(arg1 + 0x10),*(arg1 + 0x18));
            iVar2 = *(iVar3 + 0xa8);
        }
        else {
            _dev_err(*(iVar3 + 0xa8),"%s: cb_ev %d status %llu ts %llu count %llu\n","spi_gsi_ch_cb",*arg1);
            iVar2 = *(iVar3 + 0xa8);
        }
        if (iVar2 != 0) {
            sym.spi_trace_log(iVar2,0x8001274,0x8000715,*arg1);
        }
        ipc_log_string(*(iVar3 + 0x1b8),"err.routine %u, err.type %u, err.code %u\n",*(arg1 + 0x20),*(arg1 + 0x24),
                       *(arg1 + 0x28));
        if (*(iVar3 + 0xa8) == 0) {
            _printk(0x8000911,*(arg1 + 0x20),*(arg1 + 0x24),*(arg1 + 0x28));
            iVar2 = *(iVar3 + 0xa8);
        }
        else {
            _dev_err(*(iVar3 + 0xa8),"err.routine %u, err.type %u, err.code %u\n",*(arg1 + 0x20),*(arg1 + 0x24),
                     *(arg1 + 0x28));
            iVar2 = *(iVar3 + 0xa8);
        }
        if (iVar2 != 0) {
            sym.spi_trace_log(iVar2,0x800118e,*(arg1 + 0x20),*(arg1 + 0x24));
        }
        *(iVar3 + 0x1a0) = 1;
        complete_all(iVar3 + 0x160);
        complete_all(iVar3 + 0x180);
    }
    return;
}


// ===== sym.dmaengine_slave_config @ 0x0800682c (size 108) =====

ulong sym.dmaengine_slave_config(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(*arg1 + 0x160);
    if (pcVar2 == NULL) {
        uVar1 = 0xffffffda;
    }
    else {
        __cfi_slowpath_diag(0xa5b1eb43ed4fa99d,pcVar2,0x8000430);
        uVar1 = (*pcVar2)(arg1,0);
    }
    return uVar1;
}


// ===== sym.spi_geni_lock_bus @ 0x08006898 (size 784) =====

uint sym.spi_geni_lock_bus(int64_t arg1)

{
    uint32_t uVar1;
    uint uVar2;
    int iVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t *piVar6;
    code *pcVar7;
    int64_t iVar8;
    ulong *puVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    iVar8 = *(arg1_00 + 0x118);
    *(arg1_00 + 0x160) = 0;
    ipc_log_string(*(arg1_00 + 0x1b8),"%s %d\n","spi_geni_lock_bus",0);
    if (*(arg1_00 + 0xa8) != 0) {
        sym.spi_trace_log(*(arg1_00 + 0xa8),0x80014c8,0x80011b8,0);
    }
    puVar9 = *(arg1_00 + 0x118);
    *puVar9 = 0;
    puVar9[1] = 0x30010000000000;
    sg_init_table(iVar8 + 0x60,1);
    *(iVar8 + 0x60) =
         (((puVar9 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | *(iVar8 + 0x60) & 3) - 0x200000000;
    *(iVar8 + 0x68) = puVar9 & 0xfff;
    *(iVar8 + 0x6c) = 0x10;
    *(*(arg1_00 + 0x118) + 0x148) = arg1;
    iVar8 = *(arg1_00 + 0x118);
    piVar6 = *(arg1_00 + 0x120);
    if (((piVar6 == NULL) || (*piVar6 == 0)) || (pcVar7 = *(*piVar6 + 0x138), pcVar7 == NULL)) {
        uVar4 = 0;
    }
    else {
        __cfi_slowpath_diag(0x3675599da7c39b65,pcVar7,0x8000450);
        uVar4 = (*pcVar7)(piVar6,iVar8 + 0x60,1,1,3,0);
        iVar8 = *(arg1_00 + 0x118);
    }
    *(iVar8 + 0x138) = uVar4;
    uVar5 = *(*(arg1_00 + 0x118) + 0x138);
    if ((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) {
        _dev_err(*(arg1_00 + 0xa8),"Err setting up tx desc\n");
        uVar2 = 0xfffffffb;
    }
    else {
        *(uVar5 + 0x28) = sym.spi_gsi_tx_callback.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
        *(*(*(arg1_00 + 0x118) + 0x138) + 0x38) = *(arg1_00 + 0x118) + 0xe8;
        *(*(arg1_00 + 0x118) + 0x108) = *(arg1_00 + 0x118) + 0x148;
        iVar8 = *(*(arg1_00 + 0x118) + 0x138);
        pcVar7 = *(iVar8 + 0x18);
        __cfi_slowpath_diag(0xc97b94b4f4a7b659,pcVar7,0x8000470);
        uVar2 = (*pcVar7)(iVar8);
        *(*(arg1_00 + 0x118) + 0xe0) = uVar2;
        uVar1 = *(*(arg1_00 + 0x118) + 0xe0);
        uVar5 = uVar1;
        if (uVar1 < 0) {
            _dev_err(*(arg1_00 + 0xa8),"%s: dmaengine_submit failed (%d)\n","spi_geni_lock_bus");
            uVar2 = 0xffffffea;
        }
        else {
            piVar6 = *(arg1_00 + 0x120);
            pcVar7 = *(*piVar6 + 400);
            __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar7,0x8000490);
            (*pcVar7)(piVar6);
            iVar3 = wait_for_completion_timeout(arg1_00 + 0x160,0x177);
            if (0 < iVar3) {
                return 0;
            }
            ipc_log_string(*(arg1_00 + 0x1b8),"%s failed\n","spi_geni_lock_bus");
            if (*(arg1_00 + 0xa8) == 0) {
                _printk(0x8001360,"spi_geni_lock_bus");
            }
            else {
                _dev_err(*(arg1_00 + 0xa8),"%s failed\n","spi_geni_lock_bus");
            }
            if (*(arg1_00 + 0xa8) != 0) {
                sym.spi_trace_log(*(arg1_00 + 0xa8),0x8000659,0x80011b8,uVar5);
            }
            sym.geni_spi_se_dump_dbg_regs(arg1_00,*(arg1_00 + 0x98),*(arg1_00 + 0x1b8));
            uVar2 = 0xffffff92;
        }
    }
    piVar6 = *(arg1_00 + 0x120);
    pcVar7 = *(*piVar6 + 0x178);
    if (pcVar7 != NULL) {
        __cfi_slowpath_diag(0x146502001565ea5c,pcVar7,0x80004b0);
        (*pcVar7)(piVar6);
    }
    return uVar2;
}


// ===== sym.spi_gsi_tx_callback @ 0x08006ba8 (size 444) =====

void sym.spi_gsi_tx_callback(int64_t arg1)

{
    int64_t *piVar1;
    int64_t arg1_00;
    char *arg2;
    uint64_t in_x3;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = (*(arg1 + 0x20))[1];
    iVar2 = *(**(arg1 + 0x20) + 0x98);
    if (piVar1 == NULL) {
        ipc_log_string(*(iVar2 + 0x1b8),"Lock/unlock IEOB received %s\n","spi_gsi_tx_callback");
        arg1_00 = *(iVar2 + 0xa8);
        if (arg1_00 == 0) goto code_r0x08006c58;
        arg2 = "Lock/unlock IEOB received %s\n";
    }
    else {
        if (*piVar1 == 0) {
            return;
        }
        if (*(arg1 + 8) == 0x10) {
            ipc_log_string(*(iVar2 + 0x1b8),"%s: Unexpected GSI CB error\n","spi_gsi_tx_callback");
            if (*(iVar2 + 0xa8) == 0) {
                _printk(0x80010df,"spi_gsi_tx_callback");
            }
            else {
                _dev_err(*(iVar2 + 0xa8),"%s: Unexpected GSI CB error\n","spi_gsi_tx_callback");
            }
            if (*(iVar2 + 0xa8) == 0) {
                return;
            }
            sym.spi_trace_log(*(iVar2 + 0xa8),0x8001690,0x800099e,in_x3);
            return;
        }
        in_x3 = *(piVar1 + 2);
        if (*arg1 != *(piVar1 + 2)) {
            ipc_log_string(*(iVar2 + 0x1b8),"%s: Length mismatch. Expected %d Callback %d\n","spi_gsi_tx_callback");
            if (*(iVar2 + 0xa8) == 0) {
                _printk(0x8000b52,"spi_gsi_tx_callback",piVar1[2],*arg1);
            }
            else {
                _dev_err(*(iVar2 + 0xa8),"%s: Length mismatch. Expected %d Callback %d\n","spi_gsi_tx_callback",
                         piVar1[2],*arg1);
            }
            if (*(iVar2 + 0xa8) == 0) {
                return;
            }
            sym.spi_trace_log(*(iVar2 + 0xa8),0x800093d,0x800099e,*(piVar1 + 2));
            return;
        }
        ipc_log_string(*(iVar2 + 0x1b8),0x80019e0,"spi_gsi_tx_callback");
        arg1_00 = *(iVar2 + 0xa8);
        if (arg1_00 == 0) goto code_r0x08006c58;
        arg2 = 0x80019e0;
    }
    sym.spi_trace_log(arg1_00,arg2,0x800099e,in_x3);
code_r0x08006c58:
    complete(iVar2 + 0x160);
    return;
}


// ===== sym.get_spi_clk_cfg @ 0x08006d64 (size 304) =====

uint64_t sym.get_spi_clk_cfg(int64_t arg1,int64_t arg2,uchar noname_2 [16],int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    char *in_x2;
    ulong in_x6;
    ulong in_x7;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uchar *puVar9;
    code *pcVar10;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    puVar9 = &stack0xffffffffffffffd0;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uVar6 = arg1 & 0xffffffff;
    iStack_40 = 0;
    uVar2 = geni_se_clk_freq_match(arg2,*(arg2 + 0x108) * arg1,in_x2,&iStack_40,0);
    if (uVar2 == 0) {
        uVar4 = *(arg2 + 0x108) * arg1;
        iVar1 = 0;
        if (uVar4 != 0) {
            iVar1 = ((iStack_40 + uVar4) - 1) / uVar4;
        }
        *arg3 = iVar1;
        if (iVar1 == 0) {
            in_x2 = "get_spi_clk_cfg";
            _dev_err(*(arg2 + 0xa8),"%s:Err:sclk:%lu oversampling:%d speed:%u\n","get_spi_clk_cfg",iStack_40,
                     *(arg2 + 0x108),uVar6);
            uVar4 = 0xffffffea;
        }
        else {
            uVar2 = clk_set_rate(*(arg2 + 0x18),iStack_40);
            uVar4 = uVar2;
            if (uVar2 != 0) {
                in_x2 = "get_spi_clk_cfg";
                _dev_err(*(arg2 + 0xa8),"%s: clk_set_rate failed %d\n","get_spi_clk_cfg",uVar4);
            }
        }
    }
    else {
        uVar4 = uVar2;
        in_x2 = "get_spi_clk_cfg";
        _dev_err(*(arg2 + 0xa8),"%s: Failed(%d) to find src clk for 0x%x\n","get_spi_clk_cfg",uVar4,uVar6);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    auVar8 = __stack_chk_fail();
    iVar3 = auVar8._0_8_;
    *extraout_x18 = sym.spi_setup_word_len;
    pcVar10 = sym.spi_setup_word_len;
    iVar7 = *(*(iVar3 + 0xa8) + 0x98);
    uVar2 = sym.readl_relaxed(*(iVar3 + 0x98) + 0x268);
    iVar1 = 0;
    iVar5 = in_x2;
    if (iVar5 != 0) {
        iVar1 = *(iVar3 + 0xb8) / iVar5;
    }
    if (*(iVar3 + 0xb8) != iVar1 * iVar5) {
        iVar1 = 1;
    }
    if (*(iVar7 + 0x3bf) == '\0') {
        sym.writel_relaxed(uVar2 & 0xfffffc00 | iVar5 + 0x3fcU & 0x3ff,*(iVar3 + 0x98) + 0x268);
    }
    geni_se_config_packing
              (iVar3,in_x2 & 0xffffffff,iVar1,(auVar8._8_8_ & 8) == 0,1,1,in_x6,in_x7,puVar9,pcVar10,arg3,
               uVar4,arg2,uVar6);
    ipc_log_string(*(iVar3 + 0x1b8),"%s: %lu bpw %d pack_words %d\n","spi_setup_word_len",in_x2 & 0xffffffff,iVar1);
    uVar6 = 0;
    if (*(iVar3 + 0xa8) != 0) {
        uVar6 = sym.spi_trace_log(*(iVar3 + 0xa8),0x8001847,0x80008a7,in_x2 & 0xffffffff);
    }
    return uVar6;
}


// ===== sym.spi_setup_word_len @ 0x08006e94 (size 228) =====

void sym.spi_setup_word_len(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    int iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(arg1 + 0xa8) + 0x98);
    uVar2 = sym.readl_relaxed(*(arg1 + 0x98) + 0x268);
    iVar1 = 0;
    iVar3 = arg3;
    if (iVar3 != 0) {
        iVar1 = *(arg1 + 0xb8) / iVar3;
    }
    if (*(arg1 + 0xb8) != iVar1 * iVar3) {
        iVar1 = 1;
    }
    if (*(iVar4 + 0x3bf) == '\0') {
        sym.writel_relaxed(uVar2 & 0xfffffc00 | iVar3 + 0x3fcU & 0x3ff,*(arg1 + 0x98) + 0x268);
    }
    geni_se_config_packing(arg1,arg3 & 0xffffffff,iVar1,(arg2 & 8U) == 0,1,1);
    ipc_log_string(*(arg1 + 0x1b8),"%s: %lu bpw %d pack_words %d\n","spi_setup_word_len",arg3 & 0xffffffff,iVar1);
    if (*(arg1 + 0xa8) != 0) {
        sym.spi_trace_log(*(arg1 + 0xa8),0x8001847,0x80008a7,arg3 & 0xffffffff);
    }
    return;
}


// ===== sym.spi_geni_unlock_bus @ 0x08006f78 (size 812) =====

void sym.spi_geni_unlock_bus(int64_t arg1)

{
    uint32_t uVar1;
    uint uVar2;
    int iVar3;
    ulong uVar4;
    char *arg3;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t *piVar7;
    int64_t iVar8;
    code *pcVar9;
    ulong *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    arg3 = "spi_geni_unlock_bus";
    iVar5 = 0;
    iVar8 = *(arg1_00 + 0x118);
    *(arg1_00 + 0x160) = 0;
    ipc_log_string(*(arg1_00 + 0x1b8),"%s %d\n");
    if (*(arg1_00 + 0xa8) != 0) {
        arg3 = "spi_geni_unlock_bus";
        iVar5 = 0;
        sym.spi_trace_log(*(arg1_00 + 0xa8),0x80014c8,0x80007cd,0);
    }
    if (*(arg1_00 + 0x1cc) == '\0') {
        iVar5 = *(arg1_00 + 0x118);
        puVar10 = iVar5 + 0x10;
        *puVar10 = 0;
        *(iVar5 + 0x18) = 0x31010000000000;
        sg_init_table(iVar8 + 0x60,1);
        *(iVar8 + 0x60) =
             ((puVar10 * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | *(iVar8 + 0x60) & 3) - 0x200000000;
        *(iVar8 + 0x68) = puVar10 & 0xfff;
        *(iVar8 + 0x6c) = 0x10;
        *(*(arg1_00 + 0x118) + 0x148) = arg1;
        iVar5 = *(arg1_00 + 0x118);
        piVar7 = *(arg1_00 + 0x120);
        if (((piVar7 == NULL) || (*piVar7 == 0)) || (pcVar9 = *(*piVar7 + 0x138), pcVar9 == NULL)) {
            uVar4 = 0;
        }
        else {
            __cfi_slowpath_diag(0x3675599da7c39b65,pcVar9,0x8000450);
            uVar4 = (*pcVar9)(piVar7,iVar5 + 0x60,1,1,3,0);
            iVar5 = *(arg1_00 + 0x118);
        }
        *(iVar5 + 0x138) = uVar4;
        uVar6 = *(*(arg1_00 + 0x118) + 0x138);
        if ((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) {
            _dev_err(*(arg1_00 + 0xa8),"Err setting up tx desc\n");
            goto code_r0x080071a4;
        }
        *(uVar6 + 0x28) = sym.spi_gsi_tx_callback.42938a07f9c58b1377b5ae1566af1187.cfi_jt;
        *(*(*(arg1_00 + 0x118) + 0x138) + 0x38) = *(arg1_00 + 0x118) + 0xe8;
        *(*(arg1_00 + 0x118) + 0x108) = *(arg1_00 + 0x118) + 0x148;
        iVar5 = *(*(arg1_00 + 0x118) + 0x138);
        pcVar9 = *(iVar5 + 0x18);
        __cfi_slowpath_diag(0xc97b94b4f4a7b659,pcVar9,0x8000470);
        uVar2 = (*pcVar9)(iVar5);
        *(*(arg1_00 + 0x118) + 0xe0) = uVar2;
        uVar1 = *(*(arg1_00 + 0x118) + 0xe0);
        uVar6 = uVar1;
        if (uVar1 < 0) {
            _dev_err(*(arg1_00 + 0xa8),"%s: dmaengine_submit failed (%d)\n","spi_geni_unlock_bus");
            goto code_r0x080071a4;
        }
        piVar7 = *(arg1_00 + 0x120);
        pcVar9 = *(*piVar7 + 400);
        __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar9,0x8000490);
        (*pcVar9)(piVar7);
        iVar3 = wait_for_completion_timeout(arg1_00 + 0x160,0x177);
        if (iVar3 < 1) {
            ipc_log_string(*(arg1_00 + 0x1b8),"%s failed\n","spi_geni_unlock_bus");
            if (*(arg1_00 + 0xa8) == 0) {
                _printk(0x8001360,"spi_geni_unlock_bus");
            }
            else {
                _dev_err(*(arg1_00 + 0xa8),"%s failed\n","spi_geni_unlock_bus");
            }
            if (*(arg1_00 + 0xa8) != 0) {
                sym.spi_trace_log(*(arg1_00 + 0xa8),0x8000659,0x80007cd,uVar6);
            }
            sym.geni_spi_se_dump_dbg_regs(arg1_00,*(arg1_00 + 0x98),*(arg1_00 + 0x1b8));
            goto code_r0x080071a4;
        }
    }
    else {
        ipc_log_string(*(arg1_00 + 0x1b8),"GPI Reset required\n");
        if (*(arg1_00 + 0xa8) != 0) {
            sym.spi_trace_log(*(arg1_00 + 0xa8),0x8000c79,arg3,iVar5);
        }
    }
    if (*(arg1_00 + 0x1cc) == '\0') {
        return;
    }
code_r0x080071a4:
    piVar7 = *(arg1_00 + 0x120);
    pcVar9 = *(*piVar7 + 0x178);
    if (pcVar9 != NULL) {
        __cfi_slowpath_diag(0x146502001565ea5c,pcVar9,0x80004b0);
        (*pcVar9)(piVar7);
    }
    *(arg1_00 + 0x1cc) = 0;
    return;
}


// ===== sym.writel @ 0x080072a4 (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80072c0);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80072ec);
    return;
}


// ===== sym.spi_gsi_rx_callback @ 0x08007320 (size 400) =====

void sym.spi_gsi_rx_callback(int64_t arg1)

{
    int64_t in_x3;
    uint64_t arg4;
    ulong *in_x18;
    int64_t iVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = (*(arg1 + 0x20))[1];
    if (*(iVar2 + 8) != 0) {
        iVar1 = *(**(arg1 + 0x20) + 0x98);
        if (*(arg1 + 8) == 0x10) {
            ipc_log_string(*(iVar1 + 0x1b8),"%s: Unexpected GSI CB error\n","spi_gsi_rx_callback");
            if (*(iVar1 + 0xa8) == 0) {
                _printk(0x80010df,"spi_gsi_rx_callback");
            }
            else {
                _dev_err(*(iVar1 + 0xa8),"%s: Unexpected GSI CB error\n","spi_gsi_rx_callback");
            }
            if (*(iVar1 + 0xa8) != 0) {
                sym.spi_trace_log(*(iVar1 + 0xa8),0x8001690,0x80016ad,in_x3);
            }
        }
        else {
            arg4 = *(iVar2 + 0x10);
            if (*arg1 == *(iVar2 + 0x10)) {
                ipc_log_string(*(iVar1 + 0x1b8),0x80019e0,"spi_gsi_rx_callback");
                if (*(iVar1 + 0xa8) != 0) {
                    sym.spi_trace_log(*(iVar1 + 0xa8),0x80019e0,0x80016ad,arg4);
                }
                complete(iVar1 + 0x180);
            }
            else {
                ipc_log_string(*(iVar1 + 0x1b8),"%s: Length mismatch. Expected %d Callback %d\n","spi_gsi_rx_callback"
                              );
                if (*(iVar1 + 0xa8) == 0) {
                    _printk(0x8000b52,"spi_gsi_rx_callback",*(iVar2 + 0x10),*arg1);
                }
                else {
                    _dev_err(*(iVar1 + 0xa8),"%s: Length mismatch. Expected %d Callback %d\n","spi_gsi_rx_callback",
                             *(iVar2 + 0x10),*arg1);
                }
                if (*(iVar1 + 0xa8) != 0) {
                    sym.spi_trace_log(*(iVar1 + 0xa8),0x800093d,0x80016ad,*(iVar2 + 0x10));
                }
            }
        }
    }
    return;
}


// ===== sym.spi_slave_state_show @ 0x080074b0 (size 84) =====

int64_t sym.spi_slave_state_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x98) + 0x98);
    if (iVar2 == 0) {
        iVar2 = 0;
    }
    else {
        iVar1 = scnprintf(arg2,4,0x8000fc0,*(iVar2 + 0x1cf));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.spi_slave_state_store @ 0x08007504 (size 16) =====

ulong sym.spi_slave_state_store(void)

{
    return 1;
}


// ===== sym.spi_geni_suspend @ 0x08007514 (size 544) =====

uint32_t sym.spi_geni_suspend(int64_t arg1)

{
    uint32_t uVar1;
    int64_t in_x3;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    iVar3 = *(iVar2 + 0x98);
    if (*(iVar3 + 0x1b4) == '\0') {
        if (*(arg1 + 0x20c) != 2) {
            if (iVar2 + 0x4e0 != *(iVar2 + 0x4e0)) {
                return 0xfffffff0;
            }
            if (*(iVar2 + 0x4f0) != 0) {
                return 0xfffffff0;
            }
            ipc_log_string(*(iVar3 + 0x1b8),"%s: Force suspend","spi_geni_suspend");
            if (*(iVar3 + 0xa8) == 0) {
                _printk(0x8001242,"spi_geni_suspend");
            }
            else {
                _dev_err(*(iVar3 + 0xa8),"%s: Force suspend","spi_geni_suspend");
            }
            if (*(iVar3 + 0xa8) != 0) {
                sym.spi_trace_log(*(iVar3 + 0xa8),0x80013a2,0x8000ebe,in_x3);
            }
            uVar1 = sym.spi_geni_runtime_suspend(arg1);
            if (uVar1 != 0) {
                ipc_log_string(*(iVar3 + 0x1b8),"Force suspend Failed:%d",uVar1);
                if (*(iVar3 + 0xa8) == 0) {
                    _printk(0x8000cc1,uVar1);
                }
                else {
                    _dev_err(*(iVar3 + 0xa8),"Force suspend Failed:%d",uVar1);
                }
                if (*(iVar3 + 0xa8) != 0) {
                    sym.spi_trace_log(*(iVar3 + 0xa8),0x80015c2,uVar1,in_x3);
                    return uVar1;
                }
                return uVar1;
            }
            __pm_runtime_disable(arg1,1);
            __pm_runtime_set_status(arg1,2);
            pm_runtime_enable(arg1);
            return 0;
        }
    }
    else {
        if (*(arg1 + 0x20c) != 2) {
            ipc_log_string(*(iVar3 + 0x1b8),":%s: runtime PM is active\n","spi_geni_suspend");
            if (*(iVar3 + 0xa8) == 0) {
                _printk(0x8000f68,"spi_geni_suspend");
            }
            else {
                _dev_err(*(iVar3 + 0xa8),":%s: runtime PM is active\n","spi_geni_suspend");
            }
            if (*(iVar3 + 0xa8) != 0) {
                sym.spi_trace_log(*(iVar3 + 0xa8),0x8000ea3,0x8000ebe,in_x3);
            }
            return 0xfffffff0;
        }
        ipc_log_string(*(iVar3 + 0x1b8),"%s System suspend not allowed while xfer in progress=%d\n","spi_geni_suspend"
                       ,0);
        if (*(iVar3 + 0xa8) != 0) {
            sym.spi_trace_log(*(iVar3 + 0xa8),0x8001589,0x8000ebe,0);
            return 0;
        }
    }
    return 0;
}


// ===== sym.spi_geni_resume @ 0x08007738 (size 16) =====

ulong sym.spi_geni_resume(int64_t arg1)

{
    return 0;
}


// ===== sym.spi_geni_runtime_suspend @ 0x08007748 (size 588) =====

uint32_t sym.spi_geni_runtime_suspend(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    uint32_t uVar3;
    uint64_t arg4;
    ulong *in_x18;
    int64_t iVar4;
    int64_t arg1_00;
    int64_t *piVar5;
    ulong uVar6;
    uint64_t arg4_00;
    code *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    arg4 = 0;
    iVar4 = *(arg1_00 + 0x98);
    ipc_log_string(*(iVar4 + 0x1b8),"%s: %d\n","spi_geni_runtime_suspend");
    if (*(iVar4 + 0xa8) != 0) {
        arg4 = 0;
        sym.spi_trace_log(*(iVar4 + 0xa8),0x80011e7,0x8001ae0,0);
    }
    disable_irq(*(iVar4 + 0xa0));
    if (*(iVar4 + 0x1c3) != '\0') {
        sym.spi_geni_unlock_bus(arg1_00);
        return 0;
    }
    if ((*(iVar4 + 0x1c2) == '\0') || (piVar5 = *(iVar4 + 0x120), piVar5 == NULL)) goto code_r0x08007858;
    pcVar7 = *(*piVar5 + 0x168);
    if (pcVar7 == NULL) {
        arg4_00 = 0xffffffda;
code_r0x08007918:
        arg4 = arg4_00;
        ipc_log_string(*(iVar4 + 0x1b8),"%s dmaengine_pause failed: %d\n","spi_geni_runtime_suspend");
        if (*(iVar4 + 0xa8) == 0) {
            _printk(0x80012c6,"spi_geni_runtime_suspend",arg4_00);
        }
        else {
            arg4 = arg4_00;
            _dev_err(*(iVar4 + 0xa8),"%s dmaengine_pause failed: %d\n","spi_geni_runtime_suspend");
        }
        if (*(iVar4 + 0xa8) != 0) {
            sym.spi_trace_log(*(iVar4 + 0xa8),0x80005b9,0x8001ae0,arg4_00);
            arg4 = arg4_00;
        }
    }
    else {
        __cfi_slowpath_diag(0x146502001565ea5c,pcVar7,0x80004d0);
        uVar3 = (*pcVar7)(piVar5);
        if (uVar3 != 0) {
            arg4_00 = uVar3;
            goto code_r0x08007918;
        }
    }
    ipc_log_string(*(iVar4 + 0x1b8),"%s: Shared_SE dma_pause\n","spi_geni_runtime_suspend");
    if (*(iVar4 + 0xa8) != 0) {
        sym.spi_trace_log(*(iVar4 + 0xa8),0x8000806,0x8001ae0,arg4);
    }
code_r0x08007858:
    if ((*(iVar4 + 0x1c4) == '\0') &&
       (((*(iVar4 + 0x1c1) == '\0' || (*(iVar4 + 0x1c2) != '\0')) && (*(iVar4 + 0x1c0) != '\0')))) {
        uVar6 = *(iVar4 + 0x18);
        uVar1 = *(iVar4 + 0x60);
        uVar2 = *(iVar4 + 0x68);
        clk_disable(uVar6);
        clk_unprepare(uVar6);
        clk_disable(uVar1);
        clk_unprepare(uVar1);
        clk_disable(uVar2);
        clk_unprepare(uVar2);
    }
    else {
        geni_se_resources_off(iVar4);
    }
    uVar3 = geni_icc_disable(iVar4);
    if (uVar3 != 0) {
        ipc_log_string(*(iVar4 + 0x1b8),"%s failing at geni_icc_disable ret=%d\n","spi_geni_runtime_suspend",uVar3);
        if (*(iVar4 + 0xa8) != 0) {
            sym.spi_trace_log(*(iVar4 + 0xa8),0x8001562,0x8001ae0,uVar3);
        }
    }
    return uVar3;
}


// ===== sym.spi_geni_runtime_resume @ 0x08007994 (size 1184) =====

uint64_t sym.spi_geni_runtime_resume(int64_t arg1)

{
    char cVar1;
    uint32_t uVar2;
    char *arg2;
    char *arg3;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t *piVar5;
    uint64_t arg4;
    int64_t arg1_00;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    uVar3 = 0;
    iVar4 = *(arg1_00 + 0x98);
    ipc_log_string(*(iVar4 + 0x1b8),"%s: %d\n","spi_geni_runtime_resume");
    if (*(iVar4 + 0xa8) != 0) {
        uVar3 = 0;
        sym.spi_trace_log(*(iVar4 + 0xa8),0x80011e7,0x80013b4,0);
    }
    if (*(iVar4 + 0x1c3) != '\0') {
        if ((*(iVar4 + 0x1c0) != '\0') && (piVar5 = *(iVar4 + 0x120), piVar5 != NULL)) {
            cVar1 = *(iVar4 + 0x1d2);
            if (cVar1 != '\0') {
                *(iVar4 + 0x130) = 5;
            }
            pcVar6 = *(*piVar5 + 0x170);
            if (pcVar6 == NULL) {
                uVar2 = 0xffffffda;
            }
            else {
                __cfi_slowpath_diag(0x146502001565ea5c,pcVar6,0x80004f0);
                uVar2 = (*pcVar6)(piVar5);
                cVar1 = *(iVar4 + 0x1d2);
            }
            if (cVar1 != '\0') {
                *(iVar4 + 0x130) = 0;
                *(iVar4 + 0x1d2) = 0;
            }
            if (uVar2 != 0) {
                ipc_log_string(*(iVar4 + 0x1b8),"%s failed: tx:%d status:%d\n","spi_geni_gpi_suspend_resume",uVar2,0
                              );
                if (*(iVar4 + 0xa8) == 0) {
                    uVar3 = 0;
                    _printk(0x8001a31,"spi_geni_gpi_suspend_resume",uVar2);
                }
                else {
                    uVar3 = uVar2;
                    _dev_err(*(iVar4 + 0xa8),"%s failed: tx:%d status:%d\n","spi_geni_gpi_suspend_resume",uVar3,0);
                }
                if (*(iVar4 + 0xa8) != 0) {
                    uVar3 = uVar2;
                    sym.spi_trace_log(*(iVar4 + 0xa8),0x80015f9,0x800081f,uVar3);
                }
                ipc_log_string(*(iVar4 + 0x1b8),"%s:\n","spi_geni_levm_resume_proc");
                if (*(iVar4 + 0xa8) != 0) {
                    sym.spi_trace_log(*(iVar4 + 0xa8),0x8000fc4,0x8000d55,uVar3);
                    return 0xffffffea;
                }
                return 0xffffffea;
            }
        }
        if ((*(iVar4 + 0xc0) == '\0') && (uVar2 = sym.spi_geni_mas_setup(arg1_00), uVar2 != 0)) {
            uVar3 = uVar2;
            ipc_log_string(*(iVar4 + 0x1b8),"%s mas_setup failed: %d\n","spi_geni_levm_resume_proc",uVar3);
            if (*(iVar4 + 0xa8) == 0) {
                _printk(0x80017e8,"spi_geni_levm_resume_proc",uVar3);
            }
            else {
                _dev_err(*(iVar4 + 0xa8),"%s mas_setup failed: %d\n","spi_geni_levm_resume_proc",uVar3);
            }
            iVar4 = *(iVar4 + 0xa8);
            if (iVar4 == 0) {
                return uVar3;
            }
            arg2 = "%s mas_setup failed: %d\n";
        }
        else {
            uVar2 = sym.spi_geni_lock_bus(arg1_00);
            uVar3 = uVar2;
            if (uVar2 == 0) {
                return 0;
            }
            ipc_log_string(*(iVar4 + 0x1b8),"%s lock_bus failed: %d\n","spi_geni_levm_resume_proc",uVar3);
            if (*(iVar4 + 0xa8) == 0) {
                _printk(0x800073c,"spi_geni_levm_resume_proc",uVar3);
            }
            else {
                _dev_err(*(iVar4 + 0xa8),"%s lock_bus failed: %d\n","spi_geni_levm_resume_proc",uVar3);
            }
            iVar4 = *(iVar4 + 0xa8);
            if (iVar4 == 0) {
                return uVar3;
            }
            arg2 = "%s lock_bus failed: %d\n";
        }
        arg3 = "spi_geni_levm_resume_proc";
        goto code_r0x08007b98;
    }
    if ((*(iVar4 + 0x1c2) != '\0') && (piVar5 = *(iVar4 + 0x120), piVar5 != NULL)) {
        pcVar6 = *(*piVar5 + 0x170);
        if (pcVar6 == NULL) {
            arg4 = 0xffffffda;
code_r0x08007d00:
            uVar3 = arg4;
            ipc_log_string(*(iVar4 + 0x1b8),"%s dmaengine_resume failed: %d\n","spi_geni_runtime_resume");
            if (*(iVar4 + 0xa8) == 0) {
                _printk(0x8000ecf,"spi_geni_runtime_resume",arg4);
            }
            else {
                uVar3 = arg4;
                _dev_err(*(iVar4 + 0xa8),"%s dmaengine_resume failed: %d\n","spi_geni_runtime_resume");
            }
            if (*(iVar4 + 0xa8) != 0) {
                sym.spi_trace_log(*(iVar4 + 0xa8),0x80012e7,0x80013b4,arg4);
                uVar3 = arg4;
            }
        }
        else {
            __cfi_slowpath_diag(0x146502001565ea5c,pcVar6,0x80004f0);
            uVar2 = (*pcVar6)(piVar5);
            if (uVar2 != 0) {
                arg4 = uVar2;
                goto code_r0x08007d00;
            }
        }
        ipc_log_string(*(iVar4 + 0x1b8),"%s: Shared_SE dma_resume call\n","spi_geni_runtime_resume");
        if (*(iVar4 + 0xa8) != 0) {
            sym.spi_trace_log(*(iVar4 + 0xa8),0x80015da,0x80013b4,uVar3);
        }
    }
    if (((*(iVar4 + 0x1c1) == '\0') && (*(iVar4 + 0x1c4) == '\0')) && (*(iVar4 + 0x1c0) != '\0')) {
        uVar2 = geni_icc_enable(iVar4);
        if (uVar2 != 0) goto code_r0x08007b60;
        uVar2 = sym.geni_se_common_clks_on(*(iVar4 + 0x18),*(iVar4 + 0x60),*(iVar4 + 0x68));
        uVar3 = uVar2;
        if (uVar2 == 0) {
            return 0;
        }
        ipc_log_string(*(iVar4 + 0x1b8),"%s: Error %d turning on clocks\n","spi_geni_runtime_resume",uVar3);
        iVar4 = *(iVar4 + 0xa8);
        if (iVar4 == 0) {
            return uVar3;
        }
        arg2 = "%s: Error %d turning on clocks\n";
    }
    else {
        uVar2 = geni_icc_enable(iVar4);
        if (uVar2 == 0) {
            uVar3 = geni_se_resources_on(iVar4);
            enable_irq(*(iVar4 + 0xa0));
            return uVar3 & 0xffffffff;
        }
code_r0x08007b60:
        uVar3 = uVar2;
        ipc_log_string(*(iVar4 + 0x1b8),"%s failing at geni icc enable ret=%d\n","spi_geni_runtime_resume",uVar3);
        iVar4 = *(iVar4 + 0xa8);
        if (iVar4 == 0) {
            return uVar3;
        }
        arg2 = "%s failing at geni icc enable ret=%d\n";
    }
    arg3 = "spi_geni_runtime_resume";
code_r0x08007b98:
    sym.spi_trace_log(iVar4,arg2,arg3,uVar3);
    return uVar3;
}


// ===== sym.geni_se_common_clks_on @ 0x08007e34 (size 200) =====

int sym.geni_se_common_clks_on(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = clk_prepare(arg2);
    if (iVar1 == 0) {
        iVar1 = clk_enable(arg2);
        if (iVar1 == 0) {
            iVar1 = clk_prepare(arg3);
            if (iVar1 == 0) {
                iVar1 = clk_enable(arg3);
                if (iVar1 == 0) {
                    iVar1 = clk_prepare(arg1);
                    if (iVar1 == 0) {
                        iVar1 = clk_enable(arg1);
                        if (iVar1 == 0) {
                            return 0;
                        }
                        clk_unprepare(arg1);
                    }
                    clk_disable(arg3);
                }
                clk_unprepare(arg3);
            }
            clk_disable(arg2);
        }
        clk_unprepare(arg2);
    }
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x08007efc (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08007f40

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
    //switch table (4 cases) at 0x8001af9
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8007f54);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08007f68 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.spi_geni_probe.42938a07f9c58b1377b5ae1566af1187.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08007f9c (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.spi_geni_probe.42938a07f9c58b1377b5ae1566af1187.cfi_jt);
    return;
}

