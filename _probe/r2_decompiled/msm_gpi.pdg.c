// decompiled from msm_gpi by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 636) =====

//WARNING: Switch with 1 destination removed at 0x08009ef4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x2bde3f224c24837b) {
        if (arg1 < -0x3987c0e26ee29729) {
            if (arg1 == -0x5dce27ec3a32eb83) {
                pcVar2 = sym.gpi_of_dma_xlate.59fdd2041444ad0be5a5134da8e511aa.cfi_jt;
            }
            else if (arg1 == -0x5d3743f59af00cdc) {
                pcVar2 = sym.gpi_desc_free.cfi_jt;
            }
            else {
                if (arg1 != -0x5a4e14bc12b05663) goto code_r0x08009eb4;
                pcVar2 = sym.gpi_config.59fdd2041444ad0be5a5134da8e511aa.cfi_jt;
            }
        }
        else {
            if (arg1 != -0x3987c0e26ee29729) {
                if (arg1 == -0x36846b4b0b5849a7) {
                    pcVar2 = sym.vchan_tx_submit.cfi_jt;
                }
                else {
                    if (arg1 != -0x3557318fb8d07b71) goto code_r0x08009eb4;
                    pcVar2 = sym.gpi_probe.59fdd2041444ad0be5a5134da8e511aa.cfi_jt;
                }
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08009eb4;
            }
            pcVar2 = sym.gpi_handle_irq.59fdd2041444ad0be5a5134da8e511aa.cfi_jt;
        }
    }
    else if (arg1 < 0x3675599da7c39b65) {
        if (arg1 == -0x2bde3f224c24837b) {
            pcVar2 = sym.gpi_ev_tasklet.59fdd2041444ad0be5a5134da8e511aa.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) {
                if ((arg1 == 0x146502001565ea5c) && ((pcVar1 + -0x8003308 >> 3 | pcVar1 << 0x3d) < 4)) {
                    return;
                }
                goto code_r0x08009eb4;
            }
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x6d896a35912b7bb6) {
        if (arg1 == 0x3675599da7c39b65) {
            pcVar2 = sym.gpi_prep_slave_sg.cfi_jt;
        }
        else {
            if (arg1 != 0x3c61e5e5db80f04c) goto code_r0x08009eb4;
            pcVar2 = sym.dma_cookie_status.59fdd2041444ad0be5a5134da8e511aa.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x6d896a35912b7bb6) {
            if ((pcVar1 + -0x80032f0 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08009eb4;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08009eb4;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08009eb4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8009f08);
    (*pcVar1)();
}


// ===== sym.dma_cookie_status.59fdd2041444ad0be5a5134da8e511aa.cfi_jt @ 0x08003288 (size 8) =====

ulong sym.dma_cookie_status.59fdd2041444ad0be5a5134da8e511aa.cfi_jt(int64_t param_1,int param_2,int *param_3)

{
    int iVar1;
    int iVar2;
    
    iVar1 = *(param_1 + 0x10);
    iVar2 = *(param_1 + 0x14);
    if (param_3 != NULL) {
        *param_3 = iVar2;
        param_3[1] = iVar1;
        param_3[2] = 0;
        param_3[3] = 0;
    }
    if (iVar1 < iVar2) {
        if (param_2 <= iVar1) {
            return 1;
        }
    }
    else if (iVar1 < param_2) {
        return 0;
    }
    if (param_2 <= iVar2) {
        return 0;
    }
    return 1;
}


// ===== sym.gpi_ev_tasklet.59fdd2041444ad0be5a5134da8e511aa.cfi_jt @ 0x08003290 (size 8) =====

void sym.gpi_ev_tasklet.59fdd2041444ad0be5a5134da8e511aa.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x414;
    _raw_read_lock_bh(iVar1);
    if (*(param_1 + 0x410) < 2) {
        _raw_read_unlock_bh(iVar1);
        if (*(param_1 + 0x4c4) < 2) {
            iVar1 = *(param_1 + 0x4b8);
        }
        else {
            if (*(param_1 + 0x410) < 6) {
                pcVar2 = *(obj.gpi_pm_state_str + *(param_1 + 0x410) * 8);
            }
            else {
                pcVar2 = "INVALID";
            }
            _printk(0x80007f3,param_1 + 0x4cc,99,"gpi_ev_tasklet",pcVar2);
            iVar1 = *(param_1 + 0x4b8);
        }
        if ((iVar1 != 0) && (1 < *(param_1 + 0x4c0))) {
            if (*(param_1 + 0x410) < 6) {
                pcVar2 = *(obj.gpi_pm_state_str + *(param_1 + 0x410) * 8);
            }
            else {
                pcVar2 = "INVALID";
            }
            ipc_log_string(iVar1,"ch:%u %s: not processing any events, pm_state:%s\n",99,"gpi_ev_tasklet",pcVar2);
        }
    }
    else {
        sym.gpi_process_events(param_1);
        sym.gpi_config_interrupts(param_1,1,1);
        _raw_read_unlock_bh(iVar1);
    }
    return;
}


// ===== sym.gpi_of_dma_xlate.59fdd2041444ad0be5a5134da8e511aa.cfi_jt @ 0x08003298 (size 8) =====

ulong sym.gpi_of_dma_xlate.59fdd2041444ad0be5a5134da8e511aa.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    char *pcVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *(param_2 + 0x30);
    if (*(param_1 + 8) < 5) {
        if (*(iVar10 + 0x20c) < 2) {
            iVar4 = *(iVar10 + 0x200);
            if (iVar4 == 0) {
                return 0;
            }
        }
        else {
            _dev_err(*(iVar10 + 0x1b0),"%s: gpii require minimum 6 args, client passed:%d args\n","gpi_of_dma_xlate");
            iVar4 = *(iVar10 + 0x200);
            if (iVar4 == 0) {
                return 0;
            }
        }
        if (*(iVar10 + 0x208) < 2) {
            return 0;
        }
        uVar7 = *(param_1 + 8);
        pcVar6 = "%s: gpii require minimum 6 args, client passed:%d args\n";
    }
    else {
        uVar1 = *(param_1 + 0xc);
        uVar7 = uVar1;
        if (uVar1 < 2) {
            uVar8 = *(param_1 + 0x1c) >> 1 & 0xf;
            iVar2 = *(param_1 + 0x10);
            if (uVar8 == 0) {
                uVar3 = *(iVar10 + 0x1d0);
                if (uVar3 != 0) {
                    uVar8 = 0;
                    do {
                        if ((*(iVar10 + 0x1d4) >> (uVar8 & 0x1f) & 1) != 0) {
                            iVar11 = *(iVar10 + 0x1f8);
                            iVar4 = uVar8;
                            if (((*(iVar11 + uVar8 * 0x660 + 0x210) != 0) &&
                                (*(iVar11 + iVar4 * 0x660 + 0x2c4) == iVar2)) ||
                               ((*(iVar11 + iVar4 * 0x660 + 0x58) != 0 && (*(iVar11 + iVar4 * 0x660 + 0x10c) == iVar2)))
                               ) goto code_r0x08007c84;
                        }
                        uVar8 = uVar8 + 1;
                    } while (uVar3 != uVar8);
                    uVar8 = 0;
                    do {
                        if ((((*(iVar10 + 0x1d4) >> (uVar8 & 0x1f) & 1) != 0) &&
                            (iVar11 = *(iVar10 + 0x1f8), *(iVar11 + uVar8 * 0x660 + 0x58) == 0)) &&
                           (*(iVar11 + uVar8 * 0x660 + 0x210) == 0)) goto code_r0x08007c84;
                        uVar8 = uVar8 + 1;
                    } while (uVar3 != uVar8);
                }
            }
            else {
                uVar8 = uVar8 - 1;
                if ((*(iVar10 + 0x1d8) >> (uVar8 & 0x1f) & 1) != 0) {
                    iVar11 = *(iVar10 + 0x1f8);
                    goto code_r0x08007ba8;
                }
            }
            goto code_r0x08007c88;
        }
        if (*(iVar10 + 0x20c) < 2) {
            iVar4 = *(iVar10 + 0x200);
            if (iVar4 == 0) {
                return 0;
            }
        }
        else {
            _dev_err(*(iVar10 + 0x1b0),"%s: gpii channel:%d not valid\n","gpi_of_dma_xlate",uVar7);
            iVar4 = *(iVar10 + 0x200);
            if (iVar4 == 0) {
                return 0;
            }
        }
        if (*(iVar10 + 0x208) < 2) {
            return 0;
        }
        pcVar6 = "%s: gpii channel:%d not valid\n";
    }
    ipc_log_string(iVar4,pcVar6,"gpi_of_dma_xlate",uVar7);
    return 0;
code_r0x08007c84:
    if (-1 < uVar8) {
code_r0x08007ba8:
        uVar9 = uVar8;
        iVar4 = iVar11 + uVar8 * 0x660 + uVar7 * 0x1b8;
        if (*(iVar4 + 0x58) == 0) {
            iVar11 = iVar11 + uVar9 * 0x660 + uVar7 * 0x1b8;
            *(iVar11 + 0x10c) = iVar2;
            *(iVar11 + 0x110) = *(param_1 + 0x14);
            *(iVar11 + 0x158) = *(param_1 + 0x18);
            *(iVar11 + 0x114) = *(param_1 + 0x1c) & 1;
            if ((*(iVar10 + 0x200) != 0) && (*(iVar10 + 0x208) != 0)) {
                ipc_log_string(*(iVar10 + 0x200),"%s: client req gpii:%u chid:%u #_tre:%u prio:%u proto:%u SE:%d\n",
                               "gpi_of_dma_xlate",uVar9,uVar1);
            }
            uVar5 = dma_get_slave_channel(iVar4 + 8);
            return uVar5;
        }
        if (*(iVar10 + 0x20c) < 2) {
            iVar4 = *(iVar10 + 0x200);
            if (iVar4 == 0) {
                return 0;
            }
        }
        else {
            _dev_err(*(iVar10 + 0x1b0),"%s: gpii:%d chid:%d seid:%d already configured\n","gpi_of_dma_xlate",uVar9,
                     uVar7,*(iVar11 + uVar9 * 0x660 + uVar7 * 0x1b8 + 0x10c));
            iVar4 = *(iVar10 + 0x200);
            if (iVar4 == 0) {
                return 0;
            }
        }
        if (*(iVar10 + 0x208) < 2) {
            return 0;
        }
        ipc_log_string(iVar4,"%s: gpii:%d chid:%d seid:%d already configured\n","gpi_of_dma_xlate",uVar9,uVar7,
                       *(iVar11 + uVar9 * 0x660 + uVar7 * 0x1b8 + 0x10c));
        return 0;
    }
code_r0x08007c88:
    if (*(iVar10 + 0x20c) < 2) {
        iVar4 = *(iVar10 + 0x200);
        if (iVar4 == 0) {
            return 0;
        }
    }
    else {
        _dev_err(*(iVar10 + 0x1b0),"%s: no available gpii instances\n","gpi_of_dma_xlate");
        iVar4 = *(iVar10 + 0x200);
        if (iVar4 == 0) {
            return 0;
        }
    }
    if (1 < *(iVar10 + 0x208)) {
        ipc_log_string(iVar4,"%s: no available gpii instances\n","gpi_of_dma_xlate");
    }
    return 0;
}


// ===== sym.gpi_handle_irq.59fdd2041444ad0be5a5134da8e511aa.cfi_jt @ 0x080032a0 (size 8) =====

//WARNING: Type propagation algorithm not settling

ulong sym.gpi_handle_irq.59fdd2041444ad0be5a5134da8e511aa.cfi_jt(ulong param_1,int *param_2)

{
    int *piVar1;
    int *arg1;
    int *arg1_00;
    int *piVar2;
    uint64_t *puVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    char cVar7;
    bool bVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    ulong uVar12;
    int64_t iVar13;
    uint64_t uVar14;
    char *pcVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    uint64_t uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_68 = *(iVar13 + 0x5e0);
    iVar6 = *param_2;
    *(param_2 + 0x659) = 1;
    uVar12 = _raw_read_lock_irqsave();
    if (param_2[0x104] < 2) {
        if (param_2[0x131] == 0) {
            iVar13 = *(param_2 + 0x12e);
        }
        else {
            _printk(0x8001716,param_2 + 0x133,99,"gpi_handle_irq",*(obj.gpi_pm_state_str + param_2[0x104] * 8));
            iVar13 = *(param_2 + 0x12e);
        }
        if ((iVar13 != 0) && (param_2[0x130] != 0)) {
            if (param_2[0x104] < 6) {
                pcVar15 = *(obj.gpi_pm_state_str + param_2[0x104] * 8);
            }
            else {
                pcVar15 = "INVALID";
            }
            ipc_log_string(iVar13,"ch:%u %s: receive interrupt while in %s state\n",99,"gpi_handle_irq",pcVar15);
        }
    }
    else {
        uVar10 = sym.readl_relaxed(*(param_2 + 0xe4) + *param_2 * 0x4000 + 0x23080);
        piVar1 = param_2 + 0x133;
        arg1 = param_2 + 2;
        arg1_00 = param_2 + 0x70;
        piVar2 = param_2 + 0x124;
        uVar4 = iVar6 * 0x4000 + 0x23080;
        do {
            uVar5 = uVar10;
            if ((uVar10 >> 2 & 1) != 0) {
                if (param_2[0x131] < 2) {
                    iVar13 = *(param_2 + 0x12e);
                }
                else {
                    _printk(0x8000922,piVar1,99,"gpi_handle_irq");
                    iVar13 = *(param_2 + 0x12e);
                }
                if ((iVar13 != 0) && (1 < param_2[0x130])) {
                    ipc_log_string(iVar13,"ch:%u %s: processing global error irq\n",99,"gpi_handle_irq");
                }
                iVar6 = *param_2 * 0x4000;
                uVar14 = sym.readl_relaxed(*(param_2 + 0xe4) + iVar6 + 0x23100);
                uVar5 = uVar14;
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                sym.writel_relaxed(uVar14,*(param_2 + 0xe4) + iVar6 + 0x23110);
                if (uVar5 < 2) {
                    uVar11 = sym.readl_relaxed(*(param_2 + 0xe4) + iVar6 + 0x23200);
                    sym.writel_relaxed(0,*(param_2 + 0xe4) + iVar6 + 0x23200);
                    uVar5 = uVar11 >> 0x13 & 0x1f;
                    uVar17 = uVar5;
                    if (1 < uVar5) {
                        if (1 < param_2[0x131]) {
                            _printk(0x8000b5f,piVar1,99,"gpi_process_glob_err_irq",uVar5);
                        }
                        iVar13 = *(param_2 + 0x12e);
                        if ((iVar13 != 0) && (1 < param_2[0x130])) {
                            pcVar15 = "ch:%u %s: invalid chid reported:%u\n";
                            goto code_r0x0800917c;
                        }
                        goto code_r0x08009180;
                    }
                    uVar5 = uVar11 >> 4 & 0xf;
                    uVar9 = uVar11 >> 0xc & 0xf;
                    uStack_78 = CONCAT44(uVar11 >> 4,uVar11) & 0xf0000000f;
                    uStack_98 = CONCAT44(uStack_98._4_4_,1);
                    uStack_70 = CONCAT44(uStack_70._4_4_,uVar11 >> 0xc) & 0xffffffff0000000f;
                    if (param_2[0x131] < 3) {
                        iVar13 = *(param_2 + 0x12e);
                    }
                    else {
                        _printk(0x8001be3,piVar1,param_2[uVar17 * 0x6e + 0x42],"gpi_process_glob_err_irq",
                                "GLOBAL ERROR");
                        iVar13 = *(param_2 + 0x12e);
                    }
                    if ((iVar13 != 0) && (2 < param_2[0x130])) {
                        ipc_log_string(iVar13,"ch:%u %s: sending CB event:%s\n",param_2[uVar17 * 0x6e + 0x42],
                                       "gpi_process_glob_err_irq","GLOBAL ERROR");
                    }
                    if (param_2[0x131] < 2) {
                        iVar13 = *(param_2 + 0x12e);
                    }
                    else {
                        _printk(0x8001962,piVar1,param_2[uVar17 * 0x6e + 0x42],"gpi_process_glob_err_irq",
                                uVar11 >> 0x1a & 1,uVar11 >> 0x19 & 1,uVar11 & 0xf,uVar5,uVar9);
                        iVar13 = *(param_2 + 0x12e);
                    }
                    if ((iVar13 != 0) && (1 < param_2[0x130])) {
                        ipc_log_string(iVar13,"ch:%u %s: ee:%u chtype:%u routine:%u type:%u error_code:%u\n",
                                       param_2[uVar17 * 0x6e + 0x42],"gpi_process_glob_err_irq",uVar11 >> 0x1a & 1,
                                       uVar11 >> 0x19 & 1,uVar11 & 0xf,uVar5,uVar9);
                    }
                    pcVar16 = *(param_2 + uVar17 * 0x6e + 0x6a);
                    __cfi_slowpath_diag(0x5d7e5e3785540c6e,pcVar16,0x8000300);
                    (*pcVar16)(param_2 + uVar17 * 0x6e + 2,&uStack_98,*(param_2 + uVar17 * 0x6e + 0x6c));
                }
                else {
                    if (param_2[0x131] < 2) {
                        iVar13 = *(param_2 + 0x12e);
                    }
                    else {
                        _printk(0x8001747,piVar1,99,"gpi_process_glob_err_irq",uVar14 & 0xffffffff);
                        iVar13 = *(param_2 + 0x12e);
                    }
                    if ((iVar13 != 0) && (1 < param_2[0x130])) {
                        pcVar15 = "ch:%u %s: invalid error status:0x%x\n";
code_r0x0800917c:
                        ipc_log_string(iVar13,pcVar15,99,"gpi_process_glob_err_irq",uVar5);
                    }
code_r0x08009180:
                    sym.gpi_generate_cb_event(arg1,3,uVar14 & 0xffffffff);
                    sym.gpi_generate_cb_event(arg1_00,3,uVar14 & 0xffffffff);
                }
                uVar5 = uVar10 & 0xfffffffb;
            }
            if ((uVar10 >> 3 & 1) != 0) {
                sym.gpi_process_ieob(param_2);
                uVar5 = uVar5 & 0xfffffff7;
            }
            uVar10 = uVar5;
            if ((uVar5 >> 1 & 1) != 0) {
                if (param_2[0x131] < 3) {
                    iVar13 = *(param_2 + 0x12e);
                }
                else {
                    _printk(0x8000e23,piVar1,99,"gpi_handle_irq");
                    iVar13 = *(param_2 + 0x12e);
                }
                if ((iVar13 != 0) && (2 < param_2[0x130])) {
                    ipc_log_string(iVar13,"ch:%u %s: processing EV CTRL interrupt\n",99,"gpi_handle_irq");
                }
                iVar13 = sym.readl_relaxed(*(param_2 + 0xe4) + (uVar4 | 0x14));
                sym.writel_relaxed(iVar13,*(param_2 + 0xe4) + (uVar4 | 0x24));
                uVar11 = sym.readl_relaxed(*(param_2 + 0xe6));
                uVar10 = 0;
                if (param_2[300] != 10) {
                    uVar10 = uVar11 >> 0x14 & 0xf;
                }
                param_2[0x102] = uVar10;
                if (param_2[0x131] < 3) {
                    iVar13 = *(param_2 + 0x12e);
                }
                else {
                    pcVar15 = "INVALID";
                    if (uVar10 < 2) {
                        pcVar15 = *(obj.gpi_ev_state_str + uVar10 * 8);
                    }
                    _printk(0x8000b3b,piVar1,99,"gpi_handle_irq",pcVar15);
                    iVar13 = *(param_2 + 0x12e);
                }
                if ((iVar13 != 0) && (2 < param_2[0x130])) {
                    pcVar15 = "INVALID";
                    if (param_2[0x102] < 2) {
                        pcVar15 = *(obj.gpi_ev_state_str + param_2[0x102] * 8);
                    }
                    ipc_log_string(iVar13,"ch:%u %s: setting EV state to %s\n",99,"gpi_handle_irq",pcVar15);
                }
                complete_all(piVar2);
                uVar10 = uVar5 & 0xfffffffd;
            }
            if ((uVar5 & 1) != 0) {
                if (param_2[0x131] < 3) {
                    iVar13 = *(param_2 + 0x12e);
                }
                else {
                    _printk(0x8001ae0,piVar1,99,"gpi_handle_irq");
                    iVar13 = *(param_2 + 0x12e);
                }
                if ((iVar13 != 0) && (2 < param_2[0x130])) {
                    ipc_log_string(iVar13,"ch:%u %s: process CH CTRL interrupts\n",99,"gpi_handle_irq");
                }
                iVar6 = *param_2;
                uVar14 = sym.readl_relaxed(*(param_2 + 0xe4) + iVar6 * 0x4000 + 0x23090);
                sym.writel_relaxed(uVar14,*(param_2 + 0xe4) + iVar6 * 0x4000 + 0x230a0);
                if ((uVar14 & 1) != 0) {
                    uVar11 = sym.readl_relaxed(*(param_2 + 0x4a));
                    uVar5 = 0;
                    if (param_2[300] != 4) {
                        uVar5 = uVar11 >> 0x14 & 0xf;
                    }
                    param_2[0x48] = uVar5;
                    complete_all(piVar2);
                    if (param_2[0x48] == 0xf) {
                        sym.gpi_generate_cb_event(arg1,2,0x4df);
                    }
                }
                if ((uVar14 >> 1 & 1) != 0) {
                    uVar11 = sym.readl_relaxed(*(param_2 + 0xb8));
                    uVar5 = 0;
                    if (param_2[300] != 4) {
                        uVar5 = uVar11 >> 0x14 & 0xf;
                    }
                    param_2[0xb6] = uVar5;
                    complete_all(piVar2);
                    if (param_2[0xb6] == 0xf) {
                        sym.gpi_generate_cb_event(arg1_00,2,0x4df);
                    }
                }
                uVar10 = uVar10 & 0xfffffffe;
            }
            if (uVar10 != 0) {
                if (param_2[0x131] == 0) {
                    iVar13 = *(param_2 + 0x12e);
                }
                else {
                    _printk(0x800033c,piVar1,99,"gpi_handle_irq",uVar10);
                    iVar13 = *(param_2 + 0x12e);
                }
                if ((iVar13 != 0) && (param_2[0x130] != 0)) {
                    ipc_log_string(iVar13,"ch:%u %s: Unhandled interrupt status:0x%x\n",99,"gpi_handle_irq",uVar10);
                }
                iVar6 = *param_2;
                uVar14 = sym.readl_relaxed(*(param_2 + 0xe4) + iVar6 * 0x4000 + 0x23118);
                uVar14 = uVar14 & 0xffffffff;
                if (param_2[0x131] < 2) {
                    iVar13 = *(param_2 + 0x12e);
                }
                else {
                    _printk(0x8001eee,piVar1,99,"gpi_process_gen_err_irq",uVar14);
                    iVar13 = *(param_2 + 0x12e);
                }
                if ((iVar13 != 0) && (1 < param_2[0x130])) {
                    ipc_log_string(iVar13,"ch:%u %s: irq_stts:0x%x\n",99,"gpi_process_gen_err_irq",uVar14);
                }
                if (*(param_2 + 0x6a) != 0) {
                    sym.gpi_generate_cb_event(arg1,3,uVar14);
                }
                if (*(param_2 + 0xd8) != 0) {
                    sym.gpi_generate_cb_event(arg1_00,3,uVar14);
                }
                sym.writel_relaxed(uVar14,*(param_2 + 0xe4) + iVar6 * 0x4000 + 0x23128);
                param_2[0x195] = param_2[0x195] + 1;
                if (param_2[0x194] == '\0') {
                    sym.gpi_dump_debug_reg(param_2);
                    *(param_2 + 0x194) = 1;
                }
                break;
            }
            uVar10 = sym.readl_relaxed(*(param_2 + 0xe4) + *param_2 * 0x4000 + 0x23080);
        } while (uVar10 != 0);
    }
    _raw_read_unlock_irqrestore(param_2 + 0x105,uVar12);
    *(param_2 + 0x659) = 0;
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_68) {
        return 1;
    }
    iVar13 = __stack_chk_fail();
    *extraout_x18 = sym.gpi_process_ieob;
    sym.writel_relaxed(1,*(iVar13 + 0x3d0));
    if (*(iVar13 + 0x380) == 0) {
        uVar12 = sym.gpi_process_events(iVar13);
    }
    else {
        uVar12 = sym.gpi_config_interrupts(iVar13,1,0);
        puVar3 = iVar13 + 0x470;
        Hint_Prefetch(puVar3,2,0,1);
        do {
            uVar14 = *puVar3;
            cVar7 = '\x01';
            bVar8 = ExclusiveMonitorPass(puVar3,0x10);
            if (bVar8) {
                *puVar3 = uVar14 | 1;
                cVar7 = ExclusiveMonitorsStatus();
            }
        } while (cVar7 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar14 & 1) == 0) {
            uVar12 = __tasklet_schedule(iVar13 + 0x468);
        }
    }
    return uVar12;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080032a8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.gpi_probe.59fdd2041444ad0be5a5134da8e511aa.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080032b0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = debugfs_create_dir("gpi_dma",0);
    __platform_driver_register(reloc.gpi_probe.59fdd2041444ad0be5a5134da8e511aa.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.gpi_prep_slave_sg.cfi_jt @ 0x080032b8 (size 8) =====

int64_t sym.gpi_prep_slave_sg.cfi_jt(int64_t param_1,uint64_t *param_2,int param_3,int param_4,uint param_5)

{
    uint64_t uVar1;
    ulong *puVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int iVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    int64_t *piVar14;
    ulong *puVar15;
    ulong *puVar16;
    ulong *puVar17;
    int64_t iVar18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar18 = *(param_1 + 0x110);
    *(param_1 + 0x1b4) = param_3;
    if (param_4 - 1U < 2) {
        uVar9 = *(param_1 + 0x180);
        uVar1 = *(param_1 + 0x188);
        if (uVar9 < uVar1) {
            uVar13 = *(param_1 + 0x194);
            iVar11 = 0;
            if (uVar13 != 0) {
                iVar11 = (uVar1 - uVar9) / uVar13;
            }
        }
        else {
            uVar13 = *(param_1 + 0x194);
            uVar10 = uVar13;
            iVar11 = 0;
            if (uVar10 != 0) {
                iVar11 = (uVar1 - *(param_1 + 0x178)) / uVar10;
            }
            iVar3 = 0;
            if (uVar10 != 0) {
                iVar3 = ((*(param_1 + 0x178) + *(param_1 + 400)) - uVar9) / uVar10;
            }
            iVar11 = iVar11 + iVar3;
        }
        if (param_3 != 0) {
            uVar12 = iVar11 - 1;
            uVar5 = 0;
            if (uVar13 != 0) {
                uVar5 = *(param_2 + 0xc) / uVar13;
            }
            iVar6 = sg_next(param_2);
            for (iVar11 = param_3 + -1; iVar11 != 0; iVar11 = iVar11 + -1) {
                uVar13 = 0;
                if (*(param_1 + 0x194) != 0) {
                    uVar13 = *(iVar6 + 0xc) / *(param_1 + 0x194);
                }
                uVar5 = uVar13 + uVar5;
                iVar6 = sg_next();
            }
            if (uVar12 < uVar5) {
                if (*(iVar18 + 0x4c4) < 2) {
                    iVar6 = *(iVar18 + 0x4b8);
                }
                else {
                    _printk(0x8000d3c,iVar18 + 0x4cc,*(param_1 + 0x100),"gpi_prep_slave_sg",uVar12,uVar5);
                    iVar6 = *(iVar18 + 0x4b8);
                }
                if (iVar6 == 0) {
                    return 0;
                }
                if (*(iVar18 + 0x4c0) < 2) {
                    return 0;
                }
                ipc_log_string(iVar6,"ch:%u %s: not enough space in ring, avail:%u required:%u\n",*(param_1 + 0x100),
                               "gpi_prep_slave_sg",uVar12,uVar5);
                return 0;
            }
        }
        iVar6 = kmem_cache_alloc_trace(_vchan_tx_submit,0xb20,0xc0);
        if (iVar6 != 0) {
            if (param_3 == 0) {
                puVar15 = NULL;
            }
            else {
                iVar11 = 0;
                puVar15 = NULL;
                do {
                    puVar17 = ((*param_2 & 0x3ffffffffffc0) << 6 | 0xff00000000000000) + param_2[1];
                    if (param_3 == 1) {
                        *(param_1 + 0x1b0) = *(puVar17 + 0xe) == '0';
                    }
                    if (iVar11 == param_3 + -1) {
                        *(iVar18 + 0x658) = *(puVar17 + 0xe) == '1';
                    }
                    if (*(param_2 + 0xc) != 0) {
                        uVar13 = 0;
                        puVar16 = puVar15;
                        do {
                            puVar15 = *(param_1 + 0x180);
                            puVar2 = *(param_1 + 0x188);
                            if (puVar15 < puVar2) {
                                uVar9 = *(param_1 + 0x194);
                                iVar3 = 0;
                                if (uVar9 != 0) {
                                    iVar3 = (puVar2 - puVar15) / uVar9;
                                }
                                if (0 < iVar3 + -1) goto code_r0x08004938;
code_r0x080049a0:
                                if (*(iVar18 + 0x4c4) == 0) {
                                    iVar7 = *(iVar18 + 0x4b8);
                                }
                                else {
                                    _printk(0x8000406,iVar18 + 0x4cc,*(param_1 + 0x100),"gpi_queue_xfer");
                                    iVar7 = *(iVar18 + 0x4b8);
                                }
                                puVar15 = puVar16;
                                if ((iVar7 != 0) && (*(iVar18 + 0x4c0) != 0)) {
                                    ipc_log_string(iVar7,"ch:%u %s: Error adding ring element to xfer ring\n",
                                                   *(param_1 + 0x100),"gpi_queue_xfer");
                                }
                            }
                            else {
                                uVar9 = *(param_1 + 0x194);
                                iVar3 = 0;
                                if (uVar9 != 0) {
                                    iVar3 = (puVar2 - *(param_1 + 0x178)) / uVar9;
                                }
                                iVar4 = 0;
                                if (uVar9 != 0) {
                                    iVar4 = ((*(param_1 + 0x178) + *(param_1 + 400)) - puVar15) / uVar9;
                                }
                                if (iVar3 + iVar4 + -1 < 1) goto code_r0x080049a0;
code_r0x08004938:
                                uVar1 = puVar15 + uVar9;
                                if (*(param_1 + 0x178) + *(param_1 + 400) <= puVar15 + uVar9) {
                                    uVar1 = *(param_1 + 0x178);
                                }
                                *(param_1 + 0x180) = uVar1;
                                DataMemoryBarrier(2,2);
                                uVar8 = puVar17[1];
                                *puVar15 = *puVar17;
                                puVar15[1] = uVar8;
                            }
                            uVar13 = *(param_1 + 0x194) + uVar13;
                            puVar17 = puVar17 + *(param_1 + 0x194);
                            puVar16 = puVar15;
                        } while (uVar13 < *(param_2 + 0xc));
                    }
                    iVar11 = iVar11 + 1;
                    param_2 = sg_next(param_2);
                } while (iVar11 != param_3);
            }
            uVar8 = *(param_1 + 0x180);
            *(iVar6 + 0xb8) = param_1;
            *(iVar6 + 0xa8) = puVar15;
            *(iVar6 + 0xb0) = uVar8;
            dma_async_tx_descriptor_init(iVar6,param_1);
            *(iVar6 + 0x90) = 0;
            *(iVar6 + 4) = param_5;
            *(iVar6 + 0x18) = sym.vchan_tx_submit.cfi_jt;
            *(iVar6 + 0x20) = sym.vchan_tx_desc_free.cfi_jt;
            uVar8 = _raw_spin_lock_irqsave(param_1 + 0xa0);
            piVar14 = *(param_1 + 0xb0);
            iVar18 = iVar6 + 0x98;
            uVar9 = __list_add_valid(iVar18,piVar14,param_1 + 0xa8);
            if ((uVar9 & 1) != 0) {
                *(param_1 + 0xb0) = iVar18;
                *(iVar6 + 0x98) = param_1 + 0xa8;
                *(iVar6 + 0xa0) = piVar14;
                *piVar14 = iVar18;
            }
            _raw_spin_unlock_irqrestore(param_1 + 0xa0,uVar8);
            return iVar6;
        }
        if (*(iVar18 + 0x4c4) < 2) {
            iVar6 = *(iVar18 + 0x4b8);
        }
        else {
            _printk(0x80020f7,iVar18 + 0x4cc,*(param_1 + 0x100),"gpi_prep_slave_sg");
            iVar6 = *(iVar18 + 0x4b8);
        }
        if ((iVar6 != 0) && (1 < *(iVar18 + 0x4c0))) {
            ipc_log_string(iVar6,"ch:%u %s: out of memory for descriptor\n",*(param_1 + 0x100),"gpi_prep_slave_sg");
        }
    }
    else {
        if (*(iVar18 + 0x4c4) < 2) {
            iVar6 = *(iVar18 + 0x4b8);
        }
        else {
            _printk(0x800191d,iVar18 + 0x4cc,*(param_1 + 0x100),"gpi_prep_slave_sg",param_4);
            iVar6 = *(iVar18 + 0x4b8);
        }
        if ((iVar6 != 0) && (1 < *(iVar18 + 0x4c0))) {
            ipc_log_string(iVar6,"ch:%u %s: invalid dma direction: %d\n",*(param_1 + 0x100),"gpi_prep_slave_sg",
                           param_4);
        }
    }
    return 0;
}


// ===== sym.vchan_tx_submit.cfi_jt @ 0x080032c0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.vchan_tx_submit.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.vchan_tx_desc_free.cfi_jt @ 0x080032c8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.vchan_tx_desc_free.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.gpi_probe.59fdd2041444ad0be5a5134da8e511aa.cfi_jt @ 0x080032d0 (size 8) =====

int sym.gpi_probe.59fdd2041444ad0be5a5134da8e511aa.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    char cVar3;
    code *pcVar4;
    bool bVar5;
    int iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t iVar9;
    char *pcVar10;
    uint64_t uVar11;
    ulong uVar12;
    uint64_t *puVar13;
    int64_t iVar14;
    int64_t iVar15;
    ulong *in_x18;
    uint32_t uVar16;
    int iVar17;
    uint32_t *puVar18;
    ulong unaff_x30;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_6c = 0;
    iVar7 = devm_kmalloc(param_1 + 0x10,0x218,0xdc0);
    if (iVar7 == 0) {
code_r0x08005228:
        iVar6 = -0xc;
    }
    else {
        uVar11 = _segment.ehdr;
        uVar16 = _segment.ehdr + 1;
        bVar5 = 4 < _segment.ehdr;
        _segment.ehdr = uVar16;
        if (bVar5) goto code_r0x08005564;
        *(iVar7 + 0x1b0) = param_1 + 0x10;
        *(reloc.gpi_probe.59fdd2041444ad0be5a5134da8e511aa.cfi_jt + uVar11 * 8) = iVar7;
        *(iVar7 + 0x20c) = 1;
        piVar8 = platform_get_resource_byname(param_1,0x200,"gpi-top");
        *(iVar7 + 0x1b8) = piVar8;
        if (piVar8 == NULL) {
            if (*(iVar7 + 0x20c) < 2) {
                iVar9 = *(iVar7 + 0x200);
            }
            else {
                _dev_err(*(iVar7 + 0x1b0),"%s: missing \'reg\' DT node\n","gpi_probe");
                iVar9 = *(iVar7 + 0x200);
            }
            if ((iVar9 == 0) || (*(iVar7 + 0x208) < 2)) {
                iVar6 = -0x16;
            }
            else {
                ipc_log_string(iVar9,"%s: missing \'reg\' DT node\n","gpi_probe");
                iVar6 = -0x16;
            }
        }
        else {
            iVar9 = devm_ioremap(*(iVar7 + 0x1b0),*piVar8,(piVar8[1] - *piVar8) + 1);
            *(iVar7 + 0x1c0) = iVar9;
            if (iVar9 == 0) {
                if (*(iVar7 + 0x20c) < 2) {
                    iVar9 = *(iVar7 + 0x200);
                }
                else {
                    _dev_err(*(iVar7 + 0x1b0),"%s: IO remap failed\n","gpi_probe");
                    iVar9 = *(iVar7 + 0x200);
                }
                if ((iVar9 == 0) || (*(iVar7 + 0x208) < 2)) {
                    iVar6 = -0xe;
                }
                else {
                    ipc_log_string(iVar9,"%s: IO remap failed\n","gpi_probe");
                    iVar6 = -0xe;
                }
            }
            else {
                *(iVar7 + 0x1c8) = iVar9;
                iVar6 = of_property_read_variable_u32_array
                                  (*(*(iVar7 + 0x1b0) + 0x2f0),"qcom,max-num-gpii",iVar7 + 0x1d0,1,0);
                if (iVar6 < 0) {
                    if (*(iVar7 + 0x20c) < 2) {
                        iVar9 = *(iVar7 + 0x200);
                    }
                    else {
                        _dev_err(*(iVar7 + 0x1b0),"%s: missing \'max-no-gpii\' DT node\n","gpi_probe");
                        iVar9 = *(iVar7 + 0x200);
                    }
                    if ((iVar9 != 0) && (1 < *(iVar7 + 0x208))) {
                        pcVar10 = "%s: missing \'max-no-gpii\' DT node\n";
code_r0x08004f88:
                        ipc_log_string(iVar9,pcVar10,"gpi_probe");
                    }
                }
                else {
                    iVar6 = of_property_read_variable_u32_array
                                      (*(*(iVar7 + 0x1b0) + 0x2f0),"qcom,gpii-mask",iVar7 + 0x1d4,1,0);
                    if (iVar6 < 0) {
                        if (*(iVar7 + 0x20c) < 2) {
                            iVar9 = *(iVar7 + 0x200);
                        }
                        else {
                            _dev_err(*(iVar7 + 0x1b0),"%s: missing \'gpii-mask\' DT node\n","gpi_probe");
                            iVar9 = *(iVar7 + 0x200);
                        }
                        if ((iVar9 != 0) && (1 < *(iVar7 + 0x208))) {
                            pcVar10 = "%s: missing \'gpii-mask\' DT node\n";
                            goto code_r0x08004f88;
                        }
                    }
                    else {
                        iVar6 = of_property_read_variable_u32_array
                                          (*(*(iVar7 + 0x1b0) + 0x2f0),"qcom,static-gpii-mask",iVar7 + 0x1d8,1,0);
                        if (((-1 < iVar6) && (*(iVar7 + 0x200) != 0)) && (*(iVar7 + 0x208) != 0)) {
                            ipc_log_string(*(iVar7 + 0x200),"%s: static GPII usecase\n","gpi_probe");
                        }
                        iVar6 = of_property_read_variable_u32_array
                                          (*(*(iVar7 + 0x1b0) + 0x2f0),"qcom,gpi-ee-offset",&uStack_6c,1,0);
                        if (iVar6 < 0) {
                            if ((*(iVar7 + 0x200) != 0) && (*(iVar7 + 0x208) != 0)) {
                                ipc_log_string(*(iVar7 + 0x200),"%s: No variable ee offset present\n","gpi_probe");
                            }
                        }
                        else {
                            *(iVar7 + 0x1c8) = *(iVar7 + 0x1c8) - uStack_6c;
                        }
                        iVar6 = of_property_read_variable_u32_array
                                          (*(*(iVar7 + 0x1b0) + 0x2f0),"qcom,ev-factor",iVar7 + 0x1dc,1,0);
                        if (iVar6 < 0) {
                            if (*(iVar7 + 0x20c) < 2) {
                                iVar9 = *(iVar7 + 0x200);
                            }
                            else {
                                _dev_err(*(iVar7 + 0x1b0),"%s: missing \'qcom,ev-factor\' DT node\n","gpi_probe");
                                iVar9 = *(iVar7 + 0x200);
                            }
                            if ((iVar9 != 0) && (1 < *(iVar7 + 0x208))) {
                                pcVar10 = "%s: missing \'qcom,ev-factor\' DT node\n";
                                goto code_r0x08004f88;
                            }
                        }
                        else {
                            iVar6 = dma_set_mask(*(iVar7 + 0x1b0),0xffffffffffffffff);
                            if (iVar6 == 0) {
                                iVar9 = devm_kmalloc(*(iVar7 + 0x1b0),*(iVar7 + 0x1d0) * 0x660,0xdc0);
                                *(iVar7 + 0x1f8) = iVar9;
                                if (iVar9 == 0) goto code_r0x08005228;
                                *(iVar7 + 0x10) = iVar7 + 0x10;
                                *(iVar7 + 0x18) = iVar7 + 0x10;
                                if (*(iVar7 + 0x1d0) != 0) {
                                    iVar17 = 0;
                                    uVar16 = 0;
                                    while( true ) {
                                        puVar18 = iVar9 + uVar16 * 0x660;
                                        *(puVar18 + 0x65a) = 1;
                                        uVar2 = 1 << (uVar16 & 0x1f);
                                        if (((*(iVar7 + 0x1d4) & uVar2) != 0) || ((*(iVar7 + 0x1d8) & uVar2) != 0)) {
                                            iVar15 = iVar9 + uVar16 * 0x660;
                                            iVar1 = *(iVar7 + 0x1c8) + iVar17 + 0x21000;
                                            *(iVar15 + 0x398) = iVar1;
                                            iVar14 = *(iVar7 + 0x1c8);
                                            *(iVar15 + 0x3a8) = iVar1 + 8;
                                            *(iVar15 + 0x3b0) = iVar1 + 0x10;
                                            *(iVar15 + 0x3b8) = iVar1 + 0x18;
                                            *(iVar15 + 0x3a0) = iVar14 + (iVar17 + 0x22100);
                                            *(iVar15 + 0x3c0) = *(iVar7 + 0x1c8) + iVar17 + 0x23010;
                                            *(iVar15 + 0x3c8) = *(iVar7 + 0x1c8) + iVar17 + 0x230b0;
                                            *(iVar15 + 0x3d0) = *(iVar7 + 0x1c8) + iVar17 + 0x230c0;
                                            iVar6 = platform_get_irq(param_1,uVar16);
                                            if (iVar6 < 0) {
                                                if (*(iVar7 + 0x20c) < 2) {
                                                    iVar9 = *(iVar7 + 0x200);
                                                }
                                                else {
                                                    _dev_err(*(iVar7 + 0x1b0),
                                                             "%s: could not req. irq for gpii%d ret:%d","gpi_probe",
                                                             uVar16,iVar6);
                                                    iVar9 = *(iVar7 + 0x200);
                                                }
                                                if ((iVar9 != 0) && (1 < *(iVar7 + 0x208))) {
                                                    ipc_log_string(iVar9,"%s: could not req. irq for gpii%d ret:%d",
                                                                   "gpi_probe",uVar16,iVar6);
                                                }
                                                goto code_r0x08005350;
                                            }
                                            iVar9 = iVar9 + uVar16 * 0x660;
                                            *(iVar9 + 0x388) = iVar6;
                                            iVar1 = *(iVar7 + 0x1c8) + iVar17 + 0x20000;
                                            *(iVar9 + 0x128) = iVar1;
                                            *(iVar9 + 0x130) = *(iVar7 + 0x1c8) + iVar17 + 0x22000;
                                            *(iVar9 + 0x138) = iVar1 + 8;
                                            *(iVar9 + 0x140) = iVar1 + 0x10;
                                            *(iVar9 + 0x148) = iVar1 + 0x18;
                                            *(iVar9 + 0x150) = *(iVar7 + 0x1c8) + iVar17 + 0x23008;
                                            vchan_init(iVar9 + 8,iVar7);
                                            *(iVar9 + 0x108) = 0;
                                            *(iVar9 + 0x118) = puVar18;
                                            *(iVar9 + 0x15c) = 1;
                                            *(iVar9 + 0xa0) = sym.gpi_desc_free.cfi_jt;
                                            iVar1 = *(iVar7 + 0x1c8) + (iVar17 + 0x20000 | 0x80U);
                                            *(iVar9 + 0x2e0) = iVar1;
                                            iVar14 = *(iVar7 + 0x1c8);
                                            *(iVar9 + 0x2f0) = iVar1 + 8;
                                            *(iVar9 + 0x2f8) = iVar1 + 0x10;
                                            *(iVar9 + 0x300) = iVar1 + 0x18;
                                            *(iVar9 + 0x2e8) = iVar14 + (iVar17 + 0x22000 | 8U);
                                            *(iVar9 + 0x308) = *(iVar7 + 0x1c8) + iVar17 + 0x23008;
                                            vchan_init(iVar9 + 0x1c0,iVar7);
                                            *(iVar9 + 0x2c0) = 1;
                                            *(iVar9 + 600) = sym.gpi_desc_free.cfi_jt;
                                            *(iVar9 + 0x2d0) = puVar18;
                                            *(iVar9 + 0x314) = 0;
                                            __mutex_init(iVar9 + 0x3d8,"&gpii->ctrl_lock",obj.gpi_probe.__key);
                                            *(iVar9 + 0x414) = 0;
                                            tasklet_init(iVar9 + 0x468,
                                                         sym.gpi_ev_tasklet.59fdd2041444ad0be5a5134da8e511aa.cfi_jt,
                                                         puVar18);
                                            *(iVar9 + 0x490) = 0;
                                            __init_swait_queue_head(iVar9 + 0x498,"&x->wait",obj.gpi_probe.__key);
                                            *puVar18 = uVar16;
                                            uVar12 = *(iVar7 + 0x1c8);
                                            *(iVar9 + 0x378) = iVar7;
                                            *(iVar9 + 0x390) = uVar12;
                                            *(iVar9 + 0x4c8) = 0;
                                        }
                                        uVar16 = uVar16 + 1;
                                        if (*(iVar7 + 0x1d0) <= uVar16) break;
                                        iVar9 = *(iVar7 + 0x1f8);
                                        iVar17 = iVar17 + 0x4000;
                                    }
                                }
                                *(param_1 + 0xa8) = iVar7;
                                puVar13 = iVar7 + 0x48;
                                *puVar13 = 0;
                                Hint_Prefetch(puVar13,2,0,1);
                                do {
                                    cVar3 = '\x01';
                                    bVar5 = ExclusiveMonitorPass(puVar13,0x10);
                                    if (bVar5) {
                                        *puVar13 = *puVar13 | 0x400;
                                        cVar3 = ExclusiveMonitorsStatus();
                                    }
                                } while (cVar3 != '\0');
                                *(iVar7 + 0xdc) = 0;
                                *(iVar7 + 200) = 6;
                                *(iVar7 + 0xc0) = 0x800000008;
                                *(iVar7 + 0xe0) = sym.gpi_alloc_chan_resources.59fdd2041444ad0be5a5134da8e511aa.cfi_jt;
                                *(iVar7 + 0xf0) = sym.gpi_free_chan_resources.59fdd2041444ad0be5a5134da8e511aa.cfi_jt;
                                *(iVar7 + 0x188) = sym.dma_cookie_status.59fdd2041444ad0be5a5134da8e511aa.cfi_jt;
                                *(iVar7 + 400) = sym.gpi_issue_pending.59fdd2041444ad0be5a5134da8e511aa.cfi_jt;
                                *(iVar7 + 0x138) = sym.gpi_prep_slave_sg.cfi_jt;
                                *(iVar7 + 0x70) = *(iVar7 + 0x1b0);
                                *(iVar7 + 0x160) = sym.gpi_config.59fdd2041444ad0be5a5134da8e511aa.cfi_jt;
                                *(iVar7 + 0x168) = sym.gpi_pause.59fdd2041444ad0be5a5134da8e511aa.cfi_jt;
                                *(iVar7 + 0x170) = sym.gpi_resume.59fdd2041444ad0be5a5134da8e511aa.cfi_jt;
                                *(iVar7 + 0x178) = sym.gpi_terminate_all.cfi_jt;
                                iVar6 = dma_async_device_register(iVar7);
                                if (iVar6 == 0) {
                                    iVar6 = of_dma_controller_register
                                                      (*(*(iVar7 + 0x1b0) + 0x2f0),
                                                       sym.gpi_of_dma_xlate.59fdd2041444ad0be5a5134da8e511aa.cfi_jt,
                                                       iVar7);
                                    if (iVar6 == 0) {
                                        sym.gpi_setup_debug(iVar7);
                                        if ((*(iVar7 + 0x200) != 0) && (*(iVar7 + 0x208) != 0)) {
                                            ipc_log_string(*(iVar7 + 0x200),"%s: probe success\n","gpi_probe");
                                        }
                                        iVar6 = 0;
                                    }
                                    else {
                                        if (*(iVar7 + 0x20c) < 2) {
                                            iVar9 = *(iVar7 + 0x200);
                                        }
                                        else {
                                            _dev_err(*(iVar7 + 0x1b0),"%s: of_dma_controller_reg failed ret:%d",
                                                     "gpi_probe",iVar6);
                                            iVar9 = *(iVar7 + 0x200);
                                        }
                                        if ((iVar9 != 0) && (1 < *(iVar7 + 0x208))) {
                                            pcVar10 = "%s: of_dma_controller_reg failed ret:%d";
                                            goto code_r0x08004e48;
                                        }
                                    }
                                }
                                else {
                                    if (*(iVar7 + 0x20c) < 2) {
                                        iVar9 = *(iVar7 + 0x200);
                                    }
                                    else {
                                        _dev_err(*(iVar7 + 0x1b0),"%s: async_device_register failed ret:%d",
                                                 "gpi_probe",iVar6);
                                        iVar9 = *(iVar7 + 0x200);
                                    }
                                    if ((iVar9 != 0) && (1 < *(iVar7 + 0x208))) {
                                        pcVar10 = "%s: async_device_register failed ret:%d";
code_r0x08004e48:
                                        ipc_log_string(iVar9,pcVar10,"gpi_probe",iVar6);
                                    }
                                }
                            }
                            else {
                                if (*(iVar7 + 0x20c) < 2) {
                                    iVar9 = *(iVar7 + 0x200);
                                }
                                else {
                                    _dev_err(*(iVar7 + 0x1b0),"%s: Error setting dma_mask to 64, ret:%d\n","gpi_probe"
                                             ,iVar6);
                                    iVar9 = *(iVar7 + 0x200);
                                }
                                if ((iVar9 != 0) && (1 < *(iVar7 + 0x208))) {
                                    pcVar10 = "%s: Error setting dma_mask to 64, ret:%d\n";
                                    goto code_r0x08004e48;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
code_r0x08005350:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return iVar6;
    }
    __stack_chk_fail();
code_r0x08005564:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8005568);
    (*pcVar4)();
}


// ===== sym.gpi_remove.59fdd2041444ad0be5a5134da8e511aa.cfi_jt @ 0x080032d8 (size 8) =====

ulong sym.gpi_remove.59fdd2041444ad0be5a5134da8e511aa.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    bool bVar4;
    uint32_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_1 + 0xa8);
    of_dma_controller_free(*(*(iVar6 + 0x1b0) + 0x2f0));
    dma_async_device_unregister(iVar6);
    if (*(iVar6 + 0x1d0) != 0) {
        uVar5 = 0;
        do {
            uVar1 = 1 << (uVar5 & 0x1f);
            if (((*(iVar6 + 0x1d4) & uVar1) != 0) || ((*(iVar6 + 0x1d8) & uVar1) != 0)) {
                iVar7 = *(iVar6 + 0x1f8) + uVar5 * 0x660;
                sym.gpi_free_chan_resources(iVar7 + 8);
                sym.gpi_free_chan_resources(iVar7 + 0x1c0);
                if (*(iVar7 + 0x4b8) != 0) {
                    ipc_log_context_destroy();
                }
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(iVar6 + 0x1d0));
    }
    iVar2 = _segment.ehdr;
    if ((((0 < _segment.ehdr) && (bVar4 = _segment.ehdr != 1, _segment.ehdr = 0, bVar4)) &&
        (_segment.ehdr = 0, iVar2 != 2)) &&
       (((_segment.ehdr = 0, iVar2 != 3 && (_segment.ehdr = 0, iVar2 != 4)) && (_segment.ehdr = 0, iVar2 != 5)))) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x80056d0);
        (*pcVar3)();
    }
    _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
    if (*(iVar6 + 0x200) != 0) {
        ipc_log_context_destroy();
    }
    debugfs_remove(_segment.ehdr);
    return 0;
}


// ===== sym.gpi_desc_free.cfi_jt @ 0x080032e0 (size 8) =====

void sym.gpi_desc_free.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.gpi_config.59fdd2041444ad0be5a5134da8e511aa.cfi_jt @ 0x080032e8 (size 8) =====

int sym.gpi_config.59fdd2041444ad0be5a5134da8e511aa.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t uVar7;
    ulong uVar8;
    ulong *in_x18;
    int64_t arg1;
    uint *puVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x110);
    puVar9 = *(param_1 + 0x68);
    uVar7 = *(*(arg1 + 0x378) + 0x1dc);
    if (*(arg1 + 0x4c4) < 3) {
        iVar5 = *(arg1 + 0x4b8);
    }
    else {
        _printk(0x80018e2,arg1 + 0x4cc,*(param_1 + 0x100),"gpi_config");
        iVar5 = *(arg1 + 0x4b8);
    }
    if ((iVar5 != 0) && (2 < *(arg1 + 0x4c0))) {
        ipc_log_string(iVar5,"ch:%u %s: enter\n",*(param_1 + 0x100),"gpi_config");
    }
    if (puVar9 == NULL) {
        if (*(arg1 + 0x4c4) < 2) {
            iVar5 = *(arg1 + 0x4b8);
        }
        else {
            _printk(0x8000e97,arg1 + 0x4cc,*(param_1 + 0x100),"gpi_config");
            iVar5 = *(arg1 + 0x4b8);
        }
        if ((iVar5 != 0) && (1 < *(arg1 + 0x4c0))) {
            ipc_log_string(iVar5,"ch:%u %s: no config ctrl data provided",*(param_1 + 0x100),"gpi_config");
            return -0x16;
        }
        return -0x16;
    }
    mutex_lock(arg1 + 0x3d8);
    switch(*puVar9) {
    case 1:
        if (*(arg1 + 0x4c4) < 3) {
            iVar5 = *(arg1 + 0x4b8);
        }
        else {
            _printk(0x8000369,arg1 + 0x4cc,*(param_1 + 0x100),"gpi_config");
            iVar5 = *(arg1 + 0x4b8);
        }
        if ((iVar5 != 0) && (2 < *(arg1 + 0x4c0))) {
            ipc_log_string(iVar5,"ch:%u %s: cmd: msm_gpi_init\n",*(param_1 + 0x100),"gpi_config");
        }
        *(param_1 + 0x1a0) = *(puVar9 + 2);
        uVar8 = *(puVar9 + 4);
        *(param_1 + 0x11c) = 1;
        *(param_1 + 0x1a8) = uVar8;
        if ((*(arg1 + 0x124) != 1) || (*(arg1 + 0x2dc) != 1)) {
            iVar3 = 0;
            goto code_r0x08006284;
        }
        uVar1 = *(arg1 + 0x114);
        if (*(arg1 + 0x2cc) <= *(arg1 + 0x114)) {
            uVar1 = *(arg1 + 0x2cc);
        }
        *(arg1 + 0x380) = uVar1;
        if (*(arg1 + 0x110) != *(arg1 + 0x2c8)) {
            if (*(arg1 + 0x4c4) < 2) {
                iVar5 = *(arg1 + 0x4b8);
            }
            else {
                _printk(0x8000cde,arg1 + 0x4cc,*(param_1 + 0x100),"gpi_config");
                iVar5 = *(arg1 + 0x4b8);
            }
            if ((iVar5 != 0) && (1 < *(arg1 + 0x4c0))) {
                ipc_log_string(iVar5,"ch:%u %s: protocol did not match protocol %u != %u\n",*(param_1 + 0x100),
                               "gpi_config",*(arg1 + 0x110),*(arg1 + 0x2c8));
            }
            goto code_r0x0800618c;
        }
        uVar1 = *(arg1 + 0x158);
        if (*(arg1 + 0x158) <= *(arg1 + 0x310)) {
            uVar1 = *(arg1 + 0x310);
        }
        *(arg1 + 900) = *(param_1 + 0x108);
        iVar3 = sym.gpi_alloc_ring(arg1 + 0x420,uVar1 << (uVar7 & 0x1f),arg1);
        if (iVar3 != 0) {
            if (*(arg1 + 0x4c4) < 2) {
                iVar5 = *(arg1 + 0x4b8);
            }
            else {
                _printk(0x80012d6,arg1 + 0x4cc,*(param_1 + 0x100),"gpi_config");
                iVar5 = *(arg1 + 0x4b8);
            }
            if ((iVar5 != 0) && (1 < *(arg1 + 0x4c0))) {
                ipc_log_string(iVar5,"ch:%u %s: error allocating mem for ev ring\n",*(param_1 + 0x100),"gpi_config");
            }
            goto code_r0x08006284;
        }
        _raw_write_lock_irq(arg1 + 0x414);
        *(arg1 + 0x410) = 2;
        _raw_write_unlock_irq(arg1 + 0x414);
        iVar3 = sym.gpi_config_interrupts(arg1,0,0);
        if (iVar3 == 0) {
            iVar3 = sym.gpi_alloc_ev_chan(arg1);
            if (iVar3 == 0) {
                iVar4 = sym.gpi_alloc_chan(arg1 + 8,1);
                if (iVar4 == 0) {
                    iVar5 = 1;
                    iVar3 = sym.gpi_alloc_chan(arg1 + 0x1c0,1);
                    if (iVar3 != 0) goto code_r0x08006568;
                    iVar4 = sym.gpi_start_chan(arg1 + 8);
                    if (iVar4 == 0) {
                        iVar3 = sym.gpi_start_chan(arg1 + 0x1c0);
                        if (iVar3 == 0) goto code_r0x08006284;
                        uVar7 = 1;
                    }
                    else {
                        uVar7 = 0;
                        iVar3 = iVar4;
                    }
                    if (*(arg1 + 0x4c4) < 2) {
                        iVar5 = *(arg1 + 0x4b8);
                    }
                    else {
                        _printk(0x8001b08,arg1 + 0x4cc,*(arg1 + uVar7 * 0x1b8 + 0x108),"gpi_config",iVar3);
                        iVar5 = *(arg1 + 0x4b8);
                    }
                    if ((iVar5 != 0) && (1 < *(arg1 + 0x4c0))) {
                        ipc_log_string(iVar5,"ch:%u %s: Error start chan:%d\n",*(arg1 + uVar7 * 0x1b8 + 0x108),
                                       "gpi_config",iVar3);
                    }
                    if (iVar4 == 0) {
                        iVar4 = uVar7 - 1;
                        do {
                            sym.gpi_send_cmd(arg1,param_1,2);
                            sym.gpi_send_cmd(arg1,param_1,3);
                            iVar4 = iVar4 + 1;
                        } while (-1 < iVar4);
                    }
                    bVar2 = true;
                }
                else {
                    iVar5 = 0;
                    iVar3 = iVar4;
code_r0x08006568:
                    if (*(arg1 + 0x4c4) < 2) {
                        iVar6 = *(arg1 + 0x4b8);
                    }
                    else {
                        _printk(0x8000c35,arg1 + 0x4cc,*(arg1 + iVar5 * 0x1b8 + 0x108),"gpi_config",iVar3);
                        iVar6 = *(arg1 + 0x4b8);
                    }
                    if ((iVar6 != 0) && (1 < *(arg1 + 0x4c0))) {
                        ipc_log_string(iVar6,"ch:%u %s: Error allocating chan:%d\n",*(arg1 + iVar5 * 0x1b8 + 0x108),
                                       "gpi_config",iVar3);
                    }
                    if (iVar4 != 0) goto code_r0x080066d4;
                    bVar2 = false;
                }
                sym.gpi_reset_chan(param_1,4);
                if (bVar2) {
                    sym.gpi_reset_chan(param_1,4);
                }
            }
            else {
                if (*(arg1 + 0x4c4) < 2) {
                    iVar5 = *(arg1 + 0x4b8);
                }
                else {
                    _printk(0x8000b85,arg1 + 0x4cc,*(param_1 + 0x100),"gpi_config",iVar3);
                    iVar5 = *(arg1 + 0x4b8);
                }
                if ((iVar5 != 0) && (1 < *(arg1 + 0x4c0))) {
                    ipc_log_string(iVar5,"ch:%u %s: error alloc_ev_chan:%d\n",*(param_1 + 0x100),"gpi_config",iVar3)
                    ;
                }
            }
code_r0x080066d4:
            sym.gpi_disable_interrupts(arg1);
        }
        else {
            if (*(arg1 + 0x4c4) < 2) {
                iVar5 = *(arg1 + 0x4b8);
            }
            else {
                _printk(0x80016b8,arg1 + 0x4cc,*(param_1 + 0x100),"gpi_config",iVar3);
                iVar5 = *(arg1 + 0x4b8);
            }
            if ((iVar5 != 0) && (1 < *(arg1 + 0x4c0))) {
                ipc_log_string(iVar5,"ch:%u %s: error config. interrupts, ret:%d\n",*(param_1 + 0x100),"gpi_config",
                               iVar3);
            }
        }
        sym.gpi_free_ring(arg1 + 0x420,arg1);
        goto code_r0x08006284;
    case 2:
        if (*(arg1 + 0x4c4) < 3) {
            iVar5 = *(arg1 + 0x4b8);
        }
        else {
            _printk(0x8001dbf,arg1 + 0x4cc,*(param_1 + 0x100),"gpi_config");
            iVar5 = *(arg1 + 0x4b8);
        }
        if ((iVar5 != 0) && (2 < *(arg1 + 0x4c0))) {
            ipc_log_string(iVar5,"ch:%u %s: sending UART SW STALE cmd\n",*(param_1 + 0x100),"gpi_config");
        }
        uVar7 = 5;
        break;
    case 3:
        if (*(arg1 + 0x4c4) < 3) {
            iVar5 = *(arg1 + 0x4b8);
        }
        else {
            _printk(0x800217d,arg1 + 0x4cc,*(param_1 + 0x100),"gpi_config");
            iVar5 = *(arg1 + 0x4b8);
        }
        if ((iVar5 != 0) && (2 < *(arg1 + 0x4c0))) {
            ipc_log_string(iVar5,"ch:%u %s: sending UART RFR READY cmd\n",*(param_1 + 0x100),"gpi_config");
        }
        uVar7 = 6;
        break;
    case 4:
        if (*(arg1 + 0x4c4) < 3) {
            iVar5 = *(arg1 + 0x4b8);
        }
        else {
            _printk(0x8001125,arg1 + 0x4cc,*(param_1 + 0x100),"gpi_config");
            iVar5 = *(arg1 + 0x4b8);
        }
        if ((iVar5 != 0) && (2 < *(arg1 + 0x4c0))) {
            ipc_log_string(iVar5,"ch:%u %s: sending UART RFR READY NOT READY cmd\n",*(param_1 + 0x100),"gpi_config");
        }
        uVar7 = 7;
        break;
    default:
        if (*(arg1 + 0x4c4) < 2) {
            iVar5 = *(arg1 + 0x4b8);
        }
        else {
            _printk(0x8000c5b,arg1 + 0x4cc,*(param_1 + 0x100),"gpi_config");
            iVar5 = *(arg1 + 0x4b8);
        }
        if ((iVar5 != 0) && (1 < *(arg1 + 0x4c0))) {
            ipc_log_string(iVar5,"ch:%u %s: unsupported ctrl cmd:%d\n",*(param_1 + 0x100),"gpi_config",*puVar9);
        }
code_r0x0800618c:
        iVar3 = -0x16;
        goto code_r0x08006284;
    }
    iVar3 = sym.gpi_send_cmd(arg1,param_1,uVar7);
code_r0x08006284:
    mutex_unlock(arg1 + 0x3d8);
    return iVar3;
}


// ===== sym.gpi_free_chan_resources.59fdd2041444ad0be5a5134da8e511aa.cfi_jt @ 0x080032f0 (size 8) =====

//WARNING: Type propagation algorithm not settling

ulong sym.gpi_free_chan_resources.59fdd2041444ad0be5a5134da8e511aa.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int iVar2;
    int64_t ******ppppppiVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    int iVar8;
    int *piVar9;
    int64_t *******pppppppiVar10;
    ulong *in_x18;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [12];
    int64_t *******pppppppiStack_58;
    int64_t *******pppppppiStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_48 = *(iVar11 + 0x5e0);
    iVar11 = *(param_1 + 0x110);
    if (*(iVar11 + 0x4c4) < 3) {
        iVar5 = *(iVar11 + 0x4b8);
    }
    else {
        _printk(0x80018e2,iVar11 + 0x4cc,*(param_1 + 0x100),"gpi_free_chan_resources");
        iVar5 = *(iVar11 + 0x4b8);
    }
    if ((iVar5 != 0) && (2 < *(iVar11 + 0x4c0))) {
        ipc_log_string(iVar5,"ch:%u %s: enter\n",*(param_1 + 0x100),"gpi_free_chan_resources");
    }
    mutex_lock(iVar11 + 0x3d8);
    iVar5 = iVar11 + 0x414;
    iVar4 = *(param_1 + 0x11c);
    _raw_write_lock_irq(iVar5);
    *(param_1 + 0x11c) = 4;
    _raw_write_unlock_irq(iVar5);
    if (iVar4 == 3) {
        iVar4 = sym.gpi_send_cmd(iVar11,param_1,2);
        if (iVar4 != 0) {
            if (*(iVar11 + 0x4c4) < 2) {
                iVar6 = *(iVar11 + 0x4b8);
            }
            else {
                _printk(0x80019af,iVar11 + 0x4cc,*(param_1 + 0x100),"gpi_free_chan_resources",iVar4);
                iVar6 = *(iVar11 + 0x4b8);
            }
            if ((iVar6 != 0) && (1 < *(iVar11 + 0x4c0))) {
                ipc_log_string(iVar6,"ch:%u %s: error stopping channel:%d\n",*(param_1 + 0x100),
                               "gpi_free_chan_resources",iVar4);
            }
        }
        iVar4 = sym.gpi_send_cmd(iVar11,param_1,3);
        if (iVar4 != 0) {
            if (*(iVar11 + 0x4c4) < 2) {
                iVar6 = *(iVar11 + 0x4b8);
            }
            else {
                _printk(0x800183a,iVar11 + 0x4cc,*(param_1 + 0x100),"gpi_free_chan_resources",iVar4);
                iVar6 = *(iVar11 + 0x4b8);
            }
            if ((iVar6 != 0) && (1 < *(iVar11 + 0x4c0))) {
                ipc_log_string(iVar6,"ch:%u %s: error resetting channel:%d\n",*(param_1 + 0x100),
                               "gpi_free_chan_resources",iVar4);
            }
        }
        sym.gpi_reset_chan(param_1,4);
    }
    piVar9 = *(param_1 + 0x158);
    dma_free_attrs(*(*(iVar11 + 0x378) + 0x1b0),*(param_1 + 0x160),piVar9,*(param_1 + 0x170),0);
    *(param_1 + 400) = 0;
    *(param_1 + 0x198) = 0;
    *(param_1 + 0x180) = 0;
    *(param_1 + 0x188) = 0;
    *(param_1 + 0x170) = 0;
    *(param_1 + 0x178) = 0;
    *(param_1 + 0x160) = 0;
    *(param_1 + 0x168) = 0;
    *(param_1 + 0x158) = 0;
    pppppppiStack_58 = &pppppppiStack_58;
    pppppppiStack_50 = &pppppppiStack_58;
    uVar7 = _raw_spin_lock_irqsave(param_1 + 0xa0);
    piVar1 = param_1 + 0xa8;
    if (piVar1 != *piVar1) {
        ppppppiVar3 = *(param_1 + 0xa8);
        pppppppiVar10 = *(param_1 + 0xb0);
        ppppppiVar3[1] = pppppppiStack_50;
        *pppppppiStack_50 = ppppppiVar3;
        *pppppppiVar10 = &pppppppiStack_58;
        *(param_1 + 0xa8) = piVar1;
        *(param_1 + 0xb0) = piVar1;
        pppppppiStack_50 = pppppppiVar10;
    }
    piVar1 = param_1 + 0xb8;
    if (piVar1 != *piVar1) {
        ppppppiVar3 = *(param_1 + 0xb8);
        pppppppiVar10 = *(param_1 + 0xc0);
        ppppppiVar3[1] = pppppppiStack_50;
        *pppppppiStack_50 = ppppppiVar3;
        *pppppppiVar10 = &pppppppiStack_58;
        *(param_1 + 0xb8) = piVar1;
        *(param_1 + 0xc0) = piVar1;
        pppppppiStack_50 = pppppppiVar10;
    }
    piVar1 = param_1 + 200;
    if (piVar1 != *piVar1) {
        ppppppiVar3 = *(param_1 + 200);
        pppppppiVar10 = *(param_1 + 0xd0);
        ppppppiVar3[1] = pppppppiStack_50;
        *pppppppiStack_50 = ppppppiVar3;
        *pppppppiVar10 = &pppppppiStack_58;
        *(param_1 + 200) = piVar1;
        *(param_1 + 0xd0) = piVar1;
        pppppppiStack_50 = pppppppiVar10;
    }
    piVar1 = param_1 + 0xd8;
    if (piVar1 != *piVar1) {
        ppppppiVar3 = *(param_1 + 0xd8);
        pppppppiVar10 = *(param_1 + 0xe0);
        ppppppiVar3[1] = pppppppiStack_50;
        *pppppppiStack_50 = ppppppiVar3;
        *pppppppiVar10 = &pppppppiStack_58;
        *(param_1 + 0xd8) = piVar1;
        *(param_1 + 0xe0) = piVar1;
        pppppppiStack_50 = pppppppiVar10;
    }
    piVar1 = param_1 + 0xe8;
    if (piVar1 != *piVar1) {
        ppppppiVar3 = *(param_1 + 0xe8);
        pppppppiVar10 = *(param_1 + 0xf0);
        ppppppiVar3[1] = pppppppiStack_50;
        *pppppppiStack_50 = ppppppiVar3;
        *pppppppiVar10 = &pppppppiStack_58;
        *(param_1 + 0xe8) = piVar1;
        *(param_1 + 0xf0) = piVar1;
        pppppppiStack_50 = pppppppiVar10;
    }
    for (pppppppiVar10 = pppppppiStack_58; &pppppppiStack_58 != pppppppiVar10; pppppppiVar10 = *pppppppiVar10) {
        *(pppppppiVar10 + -0x94) = *(pppppppiVar10 + -0x94) & 0xffffffbf;
    }
    _raw_spin_unlock_irqrestore(param_1 + 0xa0,uVar7);
    vchan_dma_desc_free_list(param_1,&pppppppiStack_58);
    _raw_write_lock_irq(iVar5);
    *(param_1 + 0x11c) = 0;
    _raw_write_unlock_irq(iVar5);
    if ((*(iVar11 + 0x1a4) == '\0') && (*(iVar11 + 0x35c) == '\0')) {
        if (*(iVar11 + 0x4c4) < 3) {
            iVar6 = *(iVar11 + 0x4b8);
        }
        else {
            _printk(0x8001c04,iVar11 + 0x4cc,*(param_1 + 0x100),"gpi_free_chan_resources");
            iVar6 = *(iVar11 + 0x4b8);
        }
        if ((iVar6 != 0) && (2 < *(iVar11 + 0x4c0))) {
            ipc_log_string(iVar6,"ch:%u %s: disabling gpii\n",*(param_1 + 0x100),"gpi_free_chan_resources");
        }
        iVar4 = *(iVar11 + 0x410);
        _raw_write_lock_irq(iVar5);
        *(iVar11 + 0x410) = 4;
        _raw_write_unlock_irq(iVar5);
        tasklet_kill(iVar11 + 0x468);
        if (iVar4 == 3) {
            sym.gpi_send_cmd(iVar11,0,10);
            piVar9 = *(iVar11 + 0x420);
            dma_free_attrs(*(*(iVar11 + 0x378) + 0x1b0),*(iVar11 + 0x428),piVar9,*(iVar11 + 0x438),0);
            *(iVar11 + 0x460) = 0;
            *(iVar11 + 0x458) = 0;
            *(iVar11 + 0x450) = 0;
            *(iVar11 + 0x448) = 0;
            *(iVar11 + 0x440) = 0;
            *(iVar11 + 0x438) = 0;
            *(iVar11 + 0x430) = 0;
            *(iVar11 + 0x428) = 0;
            *(iVar11 + 0x420) = 0;
            sym.gpi_disable_interrupts(iVar11);
        }
        else {
            piVar9 = *(iVar11 + 0x420);
            dma_free_attrs(*(*(iVar11 + 0x378) + 0x1b0),*(iVar11 + 0x428),piVar9,*(iVar11 + 0x438),0);
            *(iVar11 + 0x460) = 0;
            *(iVar11 + 0x458) = 0;
            *(iVar11 + 0x450) = 0;
            *(iVar11 + 0x448) = 0;
            *(iVar11 + 0x440) = 0;
            *(iVar11 + 0x438) = 0;
            *(iVar11 + 0x430) = 0;
            *(iVar11 + 0x428) = 0;
            *(iVar11 + 0x420) = 0;
        }
        _raw_write_lock_irq(iVar5);
        *(iVar11 + 0x410) = 0;
        _raw_write_unlock_irq(iVar5);
    }
    uVar7 = mutex_unlock(iVar11 + 0x3d8);
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_48) {
        return uVar7;
    }
    auVar12 = __stack_chk_fail();
    iVar8 = auVar12._8_4_;
    iVar4 = *(auVar12._0_8_ + 0x10);
    iVar2 = *(auVar12._0_8_ + 0x14);
    if (piVar9 != NULL) {
        *piVar9 = iVar2;
        piVar9[1] = iVar4;
        piVar9[2] = 0;
        piVar9[3] = 0;
    }
    if (iVar4 < iVar2) {
        if (iVar8 <= iVar4) {
            return 1;
        }
    }
    else if (iVar4 < iVar8) {
        return 0;
    }
    if (iVar8 <= iVar2) {
        return 0;
    }
    return 1;
}


// ===== sym.gpi_dump_for_geni.cfi_jt @ 0x080032f8 (size 8) =====

void sym.gpi_dump_for_geni.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.gpi_dump_debug_reg(*(param_1 + 0x110));
    return;
}


// ===== sym.gpi_issue_pending.59fdd2041444ad0be5a5134da8e511aa.cfi_jt @ 0x08003300 (size 8) =====

void sym.gpi_issue_pending.59fdd2041444ad0be5a5134da8e511aa.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong uVar6;
    ulong uVar7;
    int64_t *piVar8;
    ulong *in_x18;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x110) + 0x414;
    uVar6 = _raw_read_lock_irqsave(iVar1);
    iVar2 = param_1 + 0xa0;
    uVar7 = _raw_spin_lock_irqsave(iVar2);
    piVar3 = param_1 + 0xb8;
    piVar4 = param_1 + 200;
    if (piVar3 != *piVar3) {
        iVar9 = *(param_1 + 0xb8);
        piVar5 = *(param_1 + 0xc0);
        piVar8 = *(param_1 + 0xd0);
        *(iVar9 + 8) = piVar8;
        *piVar8 = iVar9;
        *piVar5 = piVar4;
        *(param_1 + 0xd0) = piVar5;
        *(param_1 + 0xb8) = piVar3;
        *(param_1 + 0xc0) = piVar3;
    }
    if (piVar4 == *piVar4) {
        _raw_spin_unlock_irqrestore(iVar2,uVar7);
    }
    else {
        iVar9 = *(param_1 + 0xd0);
        _raw_spin_unlock_irqrestore(iVar2,uVar7);
        if (iVar9 != 0x98) {
            sym.writel_relaxed((*(param_1 + 0x168) + *(iVar9 + 0x18)) - *(param_1 + 0x178),*(param_1 + 0x128));
        }
    }
    _raw_read_unlock_irqrestore(iVar1,uVar6);
    return;
}


// ===== sym.gpi_terminate_all.cfi_jt @ 0x08003308 (size 8) =====

int sym.gpi_terminate_all.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    char *pcVar6;
    uint32_t uVar7;
    int iVar8;
    uint32_t uVar9;
    ulong *in_x18;
    uint *puVar10;
    uint64_t uVar11;
    int64_t arg1;
    uint64_t uVar12;
    int64_t iVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x110);
    if (*(arg1 + 0x4c4) < 3) {
        iVar4 = *(arg1 + 0x4b8);
    }
    else {
        _printk(0x80010a9,arg1 + 0x4cc,*(param_1 + 0x100),"gpi_terminate_all");
        iVar4 = *(arg1 + 0x4b8);
    }
    if ((iVar4 != 0) && (2 < *(arg1 + 0x4c0))) {
        ipc_log_string(iVar4,"ch:%u %s: Enter\n",*(param_1 + 0x100),"gpi_terminate_all");
    }
    mutex_lock(arg1 + 0x3d8);
    if (*(arg1 + 900) == 2) {
        uVar7 = *(param_1 + 0x100);
    }
    else {
        uVar7 = 0;
    }
    iVar8 = 2;
    if (*(arg1 + 900) == 2) {
        iVar8 = uVar7 + 1;
    }
    if (uVar7 < iVar8) {
        iVar4 = arg1 + 0x4cc;
        uVar14 = uVar7;
        uVar9 = uVar7;
        if (uVar7 < 4) {
            uVar9 = 3;
        }
        uVar12 = uVar9;
        iVar3 = iVar8 - uVar7;
        puVar10 = arg1 + uVar7 * 0x1b8 + 0x108;
        iVar13 = uVar12 - uVar14;
        do {
            if (iVar13 == 0) goto code_r0x08003da0;
            _raw_write_lock_irq(arg1 + 0x414);
            puVar10[7] = 4;
            _raw_write_unlock_irq(arg1 + 0x414);
            iVar2 = sym.gpi_send_cmd(arg1,puVar10 + -0x40,2);
            if (iVar2 != 0) {
                if (*(arg1 + 0x4c4) < 2) {
                    iVar5 = *(arg1 + 0x4b8);
                }
                else {
                    _printk(0x80013c3,iVar4,*puVar10,"gpi_terminate_all",iVar2);
                    iVar5 = *(arg1 + 0x4b8);
                }
                if ((iVar5 != 0) && (1 < *(arg1 + 0x4c0))) {
                    ipc_log_string(iVar5,"ch:%u %s: Error Stopping Chan:%d resetting\n",*puVar10,"gpi_terminate_all"
                                   ,iVar2);
                }
            }
            iVar3 = iVar3 + -1;
            puVar10 = puVar10 + 0x6e;
            iVar13 = iVar13 + -1;
        } while (iVar3 != 0);
        iVar13 = arg1 + uVar14 * 0x1b8 + 8;
        uVar11 = uVar14;
        do {
            if (uVar12 == uVar11) goto code_r0x08003da0;
            iVar3 = sym.gpi_reset_chan(iVar13,3);
            if (iVar3 != 0) {
                if (*(arg1 + 0x4c4) < 2) {
                    iVar4 = *(arg1 + 0x4b8);
                }
                else {
                    _printk(0x8001f6e,iVar4,*(arg1 + (uVar11 & 0xffffffff) * 0x1b8 + 0x108),"gpi_terminate_all",
                            iVar3);
                    iVar4 = *(arg1 + 0x4b8);
                }
                if ((iVar4 != 0) && (1 < *(arg1 + 0x4c0))) {
                    ipc_log_string(iVar4,"ch:%u %s: Error resetting channel ret:%d\n",
                                   *(arg1 + (uVar11 & 0xffffffff) * 0x1b8 + 0x108),"gpi_terminate_all",iVar3);
                }
                if (*(arg1 + 0x650) == '\0') {
                    sym.gpi_dump_debug_reg(arg1);
                    *(arg1 + 0x650) = 1;
                }
                goto code_r0x08003ca8;
            }
            iVar3 = sym.gpi_alloc_chan(iVar13,0);
            if (iVar3 != 0) {
                uVar14 = uVar11 & 0xffffffff;
                if (*(arg1 + 0x4c4) < 2) {
                    iVar4 = *(arg1 + 0x4b8);
                }
                else {
                    _printk(0x8000d14,iVar4,*(arg1 + uVar14 * 0x1b8 + 0x108),"gpi_terminate_all",iVar3);
                    iVar4 = *(arg1 + 0x4b8);
                }
                if ((iVar4 == 0) || (*(arg1 + 0x4c0) < 2)) goto code_r0x08003ca8;
                pcVar6 = "ch:%u %s: Error alloc_channel ret:%d\n";
                goto code_r0x08003c8c;
            }
            uVar11 = uVar11 + 1;
            iVar13 = iVar13 + 0x1b8;
        } while (iVar8 != uVar11);
        iVar13 = arg1 + uVar14 * 0x1b8 + 8;
        do {
            if (uVar12 == uVar14) {
code_r0x08003da0:
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8003da4);
                (*pcVar1)();
            }
            iVar3 = sym.gpi_start_chan(iVar13);
            if (iVar3 != 0) {
                uVar14 = uVar14 & 0xffffffff;
                if (*(arg1 + 0x4c4) < 2) {
                    iVar4 = *(arg1 + 0x4b8);
                }
                else {
                    _printk(0x80005f7,iVar4,*(arg1 + uVar14 * 0x1b8 + 0x108),"gpi_terminate_all",iVar3);
                    iVar4 = *(arg1 + 0x4b8);
                }
                if ((iVar4 != 0) && (1 < *(arg1 + 0x4c0))) {
                    pcVar6 = "ch:%u %s: Error Starting Channel ret:%d\n";
code_r0x08003c8c:
                    ipc_log_string(iVar4,pcVar6,*(arg1 + uVar14 * 0x1b8 + 0x108),"gpi_terminate_all",iVar3);
                }
                goto code_r0x08003ca8;
            }
            uVar14 = uVar14 + 1;
            iVar13 = iVar13 + 0x1b8;
        } while (iVar8 != uVar14);
        iVar3 = 0;
    }
    else {
        iVar3 = 0;
    }
code_r0x08003ca8:
    mutex_unlock(arg1 + 0x3d8);
    return iVar3;
}


// ===== sym.gpi_pause.59fdd2041444ad0be5a5134da8e511aa.cfi_jt @ 0x08003310 (size 8) =====

int sym.gpi_pause.59fdd2041444ad0be5a5134da8e511aa.cfi_jt(int64_t param_1)

{
    int *piVar1;
    int *piVar2;
    int *arg2;
    int *arg2_00;
    uchar uVar3;
    uchar uVar4;
    bool bVar5;
    bool bVar6;
    uint uVar7;
    uint uVar8;
    uint32_t uVar9;
    int iVar10;
    int iVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    int64_t iVar15;
    char *pcVar16;
    uint *puVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar18;
    uint *puVar19;
    int *piVar20;
    uint64_t uVar21;
    int64_t iVar22;
    int *piVar23;
    int64_t iVar24;
    ulong unaff_x30;
    int64_t iStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    piVar20 = *(param_1 + 0x110);
    iStack_78 = 0;
    uStack_70 = 0;
    piVar23 = *(param_1 + 0x68);
    if (piVar20[0x131] < 3) {
        iVar12 = *(piVar20 + 0x12e);
    }
    else {
        _printk(0x80010a9,piVar20 + 0x133,*(param_1 + 0x100),"gpi_pause");
        iVar12 = *(piVar20 + 0x12e);
    }
    if ((iVar12 != 0) && (2 < piVar20[0x130])) {
        ipc_log_string(iVar12,"ch:%u %s: Enter\n",*(param_1 + 0x100),"gpi_pause");
    }
    mutex_lock(piVar20 + 0xf6);
    if (*(piVar20 + 0x65a) == '\0') {
        if (piVar20[0x131] < 3) {
            iVar12 = *(piVar20 + 0x12e);
        }
        else {
            _printk(0x800094b,piVar20 + 0x133,*(param_1 + 0x100),"gpi_pause");
            iVar12 = *(piVar20 + 0x12e);
        }
        if ((iVar12 == 0) || (piVar20[0x130] < 3)) {
            iVar10 = 0;
        }
        else {
            ipc_log_string(iVar12,"ch:%u %s: Already in suspend/pause state\n",*(param_1 + 0x100),"gpi_pause");
            iVar10 = 0;
        }
    }
    else {
        uVar9 = *piVar20 * 0x4000 + 0x23080;
        uVar21 = uVar9;
        piVar1 = piVar20 + 0x133;
        uVar18 = uVar9 | 0x38;
        uVar7 = sym.readl_relaxed(*(piVar20 + 0xe4) + uVar21);
        uVar8 = sym.readl_relaxed(*(piVar20 + 0xe4) + uVar18);
        if (piVar20[0x131] < 2) {
            iVar12 = *(piVar20 + 0x12e);
        }
        else {
            _printk(0x800137d,piVar1,99,"gpi_pause",uVar7,uVar8);
            iVar12 = *(piVar20 + 0x12e);
        }
        if ((iVar12 != 0) && (1 < piVar20[0x130])) {
            ipc_log_string(iVar12,"ch:%u %s: CNTXT_TYPE_IRQ:0x%08x IEOB_MASK_OFF:0x%08x\n",99,"gpi_pause",uVar7,
                           uVar8);
        }
        uVar7 = sym.readl_relaxed(*(piVar20 + 0xe4) + uVar21);
        uVar8 = sym.readl_relaxed(*(piVar20 + 0xe4) + uVar18);
        if (piVar20[0x131] < 2) {
            iVar12 = *(piVar20 + 0x12e);
        }
        else {
            _printk(0x800137d,piVar1,99,"gpi_pause",uVar7,uVar8);
            iVar12 = *(piVar20 + 0x12e);
        }
        if ((iVar12 != 0) && (1 < piVar20[0x130])) {
            ipc_log_string(iVar12,"ch:%u %s: CNTXT_TYPE_IRQ:0x%08x IEOB_MASK_OFF:0x%08x\n",99,"gpi_pause",uVar7,
                           uVar8);
        }
        uVar7 = sym.readl_relaxed(*(piVar20 + 0xe4) + uVar21);
        uVar8 = sym.readl_relaxed(*(piVar20 + 0xe4) + uVar18);
        if (piVar20[0x131] < 2) {
            iVar12 = *(piVar20 + 0x12e);
        }
        else {
            _printk(0x800137d,piVar1,99,"gpi_pause",uVar7,uVar8);
            iVar12 = *(piVar20 + 0x12e);
        }
        if ((iVar12 != 0) && (1 < piVar20[0x130])) {
            ipc_log_string(iVar12,"ch:%u %s: CNTXT_TYPE_IRQ:0x%08x IEOB_MASK_OFF:0x%08x\n",99,"gpi_pause",uVar7,
                           uVar8);
        }
        uVar9 = sym.readl_relaxed(*(piVar20 + 0xec));
        uStack_70 = uVar9;
        if (uVar9 == 0) {
            if (piVar20[0x131] < 2) {
                iVar12 = *(piVar20 + 0x12e);
            }
            else {
                _printk(0x80011f0,piVar1,99,"gpi_pause");
                iVar12 = *(piVar20 + 0x12e);
            }
            if ((iVar12 != 0) && (1 < piVar20[0x130])) {
                pcVar16 = "ch:%u %s: invalid cntxt_rp";
code_r0x08006b28:
                ipc_log_string(iVar12,pcVar16,99,"gpi_pause");
            }
        }
        else {
            iVar12 = *(piVar20 + 0x110);
            puVar19 = *(piVar20 + 0x114);
            iStack_78 = (*(piVar20 + 0x10c) - iVar12) + puVar19;
            if (iStack_78 != 0) {
                iVar22 = uStack_70 - *(piVar20 + 0x10c);
                if (1 < piVar20[0x131]) {
                    _printk(0x800118e,piVar1,99,"gpi_pause",&uStack_70,&iStack_78);
                }
                if ((*(piVar20 + 0x12e) != 0) && (1 < piVar20[0x130])) {
                    ipc_log_string(*(piVar20 + 0x12e),"ch:%u %s: cntxt_rp:%pa local_rp:%pa\n",99,"gpi_pause",
                                   &uStack_70,&iStack_78);
                }
                for (; iVar12 + iVar22 != puVar19; puVar19 = puVar19 + piVar20[0x117]) {
                    uVar3 = *(puVar19 + 0xf);
                    uVar4 = *(puVar19 + 0xe);
                    if (piVar20[0x131] < 2) {
                        iVar13 = *(piVar20 + 0x12e);
                    }
                    else {
                        _printk(0x8000388,piVar1,99,"gpi_pause",uVar3,uVar4,*puVar19,puVar19[1],puVar19[2],
                                puVar19[3]);
                        iVar13 = *(piVar20 + 0x12e);
                    }
                    if ((iVar13 != 0) && (1 < piVar20[0x130])) {
                        ipc_log_string(iVar13,"ch:%u %s: chid:%u type:0x%x %08x %08x %08x %08x\n",99,"gpi_pause",
                                       uVar3,uVar4,*puVar19,puVar19[1],puVar19[2],puVar19[3]);
                    }
                }
                piVar2 = piVar20 + 0x105;
                arg2 = piVar20 + 2;
                _raw_write_lock_irq(piVar2);
                piVar20[0x49] = 4;
                _raw_write_unlock_irq(piVar2);
                iVar10 = sym.gpi_send_cmd(piVar20,arg2,2);
                if (iVar10 == 0) {
                    arg2_00 = piVar20 + 0x70;
                    _raw_write_lock_irq(piVar2);
                    piVar20[0xb7] = 4;
                    _raw_write_unlock_irq(piVar2);
                    iVar10 = sym.gpi_send_cmd(piVar20,arg2_00,2);
                    if (iVar10 != 0) {
                        iVar12 = 1;
                        goto code_r0x08006b74;
                    }
                    if (*piVar23 != 5) {
                        iVar12 = 0;
                        bVar5 = false;
                        do {
                            iVar22 = *(piVar20 + iVar12 * 0x6e + 0x46);
                            if (*(iVar22 + 0x4c4) < 3) {
                                iVar13 = *(iVar22 + 0x4b8);
                            }
                            else {
                                _printk(0x80010a9,iVar22 + 0x4cc,piVar20[iVar12 * 0x6e + 0x42],"gpi_noop_tre");
                                iVar13 = *(iVar22 + 0x4b8);
                            }
                            if ((iVar13 != 0) && (2 < *(iVar22 + 0x4c0))) {
                                ipc_log_string(iVar13,"ch:%u %s: Enter\n",piVar20[iVar12 * 0x6e + 0x42],
                                               "gpi_noop_tre");
                            }
                            puVar19 = *(piVar20 + iVar12 * 0x6e + 100);
                            iVar14 = puVar19 + (*(piVar20 + iVar12 * 0x6e + 0x5c) - *(piVar20 + iVar12 * 0x6e + 0x60));
                            iVar13 = (*(piVar20 + iVar12 * 0x6e + 0x5c) - *(piVar20 + iVar12 * 0x6e + 0x60)) +
                                     *(piVar20 + iVar12 * 0x6e + 0x62);
                            if (*(iVar22 + 0x4c4) < 3) {
                                iVar24 = *(iVar22 + 0x4b8);
                            }
                            else {
                                _printk(0x80015aa,iVar22 + 0x4cc,piVar20[iVar12 * 0x6e + 0x42],"gpi_noop_tre",iVar14
                                        ,iVar13);
                                iVar24 = *(iVar22 + 0x4b8);
                            }
                            if ((iVar24 != 0) && (2 < *(iVar22 + 0x4c0))) {
                                ipc_log_string(iVar24,"ch:%u %s: local_rp:0x%0llx local_wp:0x%0llx\n",
                                               piVar20[iVar12 * 0x6e + 0x42],"gpi_noop_tre",iVar14,iVar13);
                            }
                            iVar24 = iVar22 + 0x4cc;
                            piVar23 = piVar20 + iVar12 * 0x6e + 0x42;
                            if (iVar14 != iVar13) {
                                do {
                                    if (*(iVar22 + 0x4c4) < 2) {
                                        iVar15 = *(iVar22 + 0x4b8);
                                    }
                                    else {
                                        _printk(0x80005b5,iVar24,*piVar23,"gpi_noop_tre",iVar14,*puVar19,
                                                puVar19[1],puVar19[2],puVar19[3]);
                                        iVar15 = *(iVar22 + 0x4b8);
                                    }
                                    if ((iVar15 != 0) && (1 < *(iVar22 + 0x4c0))) {
                                        ipc_log_string(iVar15,"ch:%u %s: local_rp:0x%011x TRE: %08x %08x %08x %08x\n",
                                                       *piVar23,"gpi_noop_tre",iVar14,*puVar19,puVar19[1],
                                                       puVar19[2],puVar19[3]);
                                    }
                                    puVar19[3] = puVar19[3] & 0x801 | 0x10000;
                                    puVar17 = *(piVar20 + iVar12 * 0x6e + 0x60);
                                    puVar19 = puVar19 + piVar20[iVar12 * 0x6e + 0x67];
                                    if (puVar19 < puVar17 + piVar20[iVar12 * 0x6e + 0x66]) {
                                        iVar14 = iVar14 + piVar20[iVar12 * 0x6e + 0x67];
                                        puVar17 = puVar19;
                                    }
                                    else {
                                        iVar14 = *(piVar20 + iVar12 * 0x6e + 0x5c);
                                    }
                                    if (*(iVar22 + 0x4c4) < 3) {
                                        iVar15 = *(iVar22 + 0x4b8);
                                    }
                                    else {
                                        _printk(0x8001f33,iVar24,*piVar23,"gpi_noop_tre",iVar14);
                                        iVar15 = *(iVar22 + 0x4b8);
                                    }
                                    if ((iVar15 != 0) && (2 < *(iVar22 + 0x4c0))) {
                                        ipc_log_string(iVar15,"ch:%u %s: local_rp:0x%0llx\n",*piVar23,"gpi_noop_tre"
                                                       ,iVar14);
                                    }
                                    puVar19 = puVar17;
                                } while (iVar14 != iVar13);
                            }
                            if (2 < *(iVar22 + 0x4c4)) {
                                _printk(0x8002267,iVar24,*piVar23,"gpi_noop_tre");
                            }
                            if ((*(iVar22 + 0x4b8) != 0) && (2 < *(iVar22 + 0x4c0))) {
                                ipc_log_string(*(iVar22 + 0x4b8),"ch:%u %s: exit\n",*piVar23,"gpi_noop_tre");
                            }
                            iVar12 = 1;
                            bVar6 = !bVar5;
                            bVar5 = true;
                        } while (bVar6);
                        iVar10 = sym.gpi_start_chan(arg2);
                        if (iVar10 == 0) {
                            iVar10 = sym.gpi_start_chan(arg2_00);
                            if (iVar10 == 0) {
code_r0x08007304:
                                if (*(piVar20 + 0x659) == '\0') {
                                    iVar10 = 0;
                                }
                                else {
                                    iVar10 = 1;
                                    do {
                                        __const_udelay(0xa7c6);
                                        if (iVar10 == 1000) break;
                                        iVar10 = iVar10 + 1;
                                    } while (*(piVar20 + 0x659) != '\0');
                                }
                                if (piVar20[0x131] < 3) {
                                    iVar12 = *(piVar20 + 0x12e);
                                }
                                else {
                                    _printk(0x80011b5,piVar1,piVar20[0xb0],"gpi_pause",iVar10);
                                    iVar12 = *(piVar20 + 0x12e);
                                }
                                if ((iVar12 != 0) && (2 < piVar20[0x130])) {
                                    ipc_log_string(iVar12,"ch:%u %s: iter:%d\n",piVar20[0xb0],"gpi_pause",iVar10);
                                }
                                disable_irq(piVar20[0xe2]);
                                iVar10 = 0;
                                *(piVar20 + 0x65a) = 0;
                                goto code_r0x0800725c;
                            }
                            iVar12 = 1;
                        }
                        else {
                            iVar12 = 0;
                        }
                        if (piVar20[0x131] < 2) {
                            iVar22 = *(piVar20 + 0x12e);
                        }
                        else {
                            _printk(0x80005f7,piVar1,piVar20[iVar12 * 0x6e + 0x42],"gpi_pause",iVar10);
                            iVar22 = *(piVar20 + 0x12e);
                        }
                        if ((iVar22 == 0) || (piVar20[0x130] < 2)) goto code_r0x08007258;
                        pcVar16 = "ch:%u %s: Error Starting Channel ret:%d\n";
code_r0x08007150:
                        iVar11 = piVar20[iVar12 * 0x6e + 0x42];
                        goto code_r0x08006bb0;
                    }
                    if (piVar20[0x131] < 3) {
                        iVar12 = *(piVar20 + 0x12e);
                    }
                    else {
                        _printk(0x800158b,piVar1,piVar20[0xb0],"gpi_pause");
                        iVar12 = *(piVar20 + 0x12e);
                    }
                    if ((iVar12 != 0) && (2 < piVar20[0x130])) {
                        ipc_log_string(iVar12,"ch:%u %s: deep sleep config\n",piVar20[0xb0],"gpi_pause");
                    }
                    iVar10 = sym.gpi_send_cmd(piVar20,arg2,3);
                    if (iVar10 == 0) {
                        iVar10 = sym.gpi_send_cmd(piVar20,arg2_00,3);
                        if (iVar10 == 0) {
                            iVar10 = sym.gpi_reset_chan(arg2,4);
                            if (iVar10 == 0) {
                                iVar10 = sym.gpi_reset_chan(arg2_00,4);
                                if (iVar10 == 0) {
                                    iVar10 = sym.gpi_send_cmd(piVar20,0,10);
                                    if (iVar10 != 0) {
                                        if (piVar20[0x131] < 2) {
                                            iVar12 = *(piVar20 + 0x12e);
                                        }
                                        else {
                                            _printk(0x8000ec0,piVar1,99,"gpi_pause","EV DEALLOC",iVar10);
                                            iVar12 = *(piVar20 + 0x12e);
                                        }
                                        if ((iVar12 != 0) && (1 < piVar20[0x130])) {
                                            ipc_log_string(iVar12,"ch:%u %s: error with cmd:%s ret:%d\n",99,
                                                           "gpi_pause","EV DEALLOC",iVar10);
                                        }
                                        goto code_r0x0800725c;
                                    }
                                    goto code_r0x08007304;
                                }
                                iVar12 = 1;
                            }
                            else {
                                iVar12 = 0;
                            }
                            if (piVar20[0x131] < 2) {
                                iVar22 = *(piVar20 + 0x12e);
                            }
                            else {
                                _printk(0x8000a7f,piVar1,piVar20[iVar12 * 0x6e + 0x42],"gpi_pause",iVar10);
                                iVar22 = *(piVar20 + 0x12e);
                            }
                            if ((iVar22 != 0) && (1 < piVar20[0x130])) {
                                pcVar16 = "ch:%u %s: Error chan deallocating, ret:%d\n";
                                goto code_r0x08007150;
                            }
                            goto code_r0x08007258;
                        }
                        iVar12 = 1;
                    }
                    else {
                        iVar12 = 0;
                    }
                    if (1 < piVar20[0x131]) {
                        _printk(0x8001053,piVar1,piVar20[iVar12 * 0x6e + 0x42],"gpi_pause",iVar10);
                        iVar22 = *(piVar20 + 0x12e);
                        if (iVar22 == 0) goto code_r0x08007258;
code_r0x080070f4:
                        if (piVar20[0x130] < 2) goto code_r0x08007258;
                        pcVar16 = "ch:%u %s: Error resetting chan, ret:%d\n";
                        goto code_r0x08006ba0;
                    }
                    iVar22 = *(piVar20 + 0x12e);
                    if (iVar22 != 0) goto code_r0x080070f4;
                }
                else {
                    iVar12 = 0;
code_r0x08006b74:
                    if (piVar20[0x131] < 2) {
                        iVar22 = *(piVar20 + 0x12e);
                    }
                    else {
                        _printk(0x8000ee6,piVar1,piVar20[iVar12 * 0x6e + 0x42],"gpi_pause",iVar10);
                        iVar22 = *(piVar20 + 0x12e);
                    }
                    if ((iVar22 != 0) && (1 < piVar20[0x130])) {
                        pcVar16 = "ch:%u %s: Error stopping chan, ret:%d\n";
code_r0x08006ba0:
                        iVar11 = piVar20[iVar12 * 0x6e + 0x42];
code_r0x08006bb0:
                        ipc_log_string(iVar22,pcVar16,iVar11,"gpi_pause",iVar10);
                        iVar10 = -0x68;
                        goto code_r0x0800725c;
                    }
                }
code_r0x08007258:
                iVar10 = -0x68;
                goto code_r0x0800725c;
            }
            if (piVar20[0x131] < 2) {
                iVar12 = *(piVar20 + 0x12e);
            }
            else {
                _printk(0x8001036,piVar1,99,"gpi_pause");
                iVar12 = *(piVar20 + 0x12e);
            }
            if ((iVar12 != 0) && (1 < piVar20[0x130])) {
                pcVar16 = "ch:%u %s: invalid local_rp";
                goto code_r0x08006b28;
            }
        }
        iVar10 = -0x16;
    }
code_r0x0800725c:
    mutex_unlock(piVar20 + 0xf6);
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return iVar10;
    }
    iVar12 = __stack_chk_fail();
    *extraout_x18 = sym.gpi_resume;
    iVar22 = *(iVar12 + 0x110);
    piVar20 = *(iVar12 + 0x68);
    if (*(iVar22 + 0x4c4) < 3) {
        iVar13 = *(iVar22 + 0x4b8);
    }
    else {
        _printk(0x80018e2,iVar22 + 0x4cc,*(iVar12 + 0x100),"gpi_resume");
        iVar13 = *(iVar22 + 0x4b8);
    }
    if ((iVar13 != 0) && (2 < *(iVar22 + 0x4c0))) {
        ipc_log_string(iVar13,"ch:%u %s: enter\n",*(iVar12 + 0x100),"gpi_resume");
    }
    mutex_lock(iVar22 + 0x3d8);
    if (*(iVar22 + 0x65a) != '\0') {
        if (*(iVar22 + 0x4c4) < 3) {
            iVar13 = *(iVar22 + 0x4b8);
        }
        else {
            _printk(0x8001f51,iVar22 + 0x4cc,*(iVar12 + 0x100),"gpi_resume");
            iVar13 = *(iVar22 + 0x4b8);
        }
        if ((iVar13 != 0) && (2 < *(iVar22 + 0x4c0))) {
            uVar7 = *(iVar12 + 0x100);
            pcVar16 = "ch:%u %s: Already resumed\n";
code_r0x080074c4:
            ipc_log_string(iVar13,pcVar16,uVar7,"gpi_resume");
        }
code_r0x080074d0:
        iVar10 = 0;
        goto code_r0x080074d4;
    }
    enable_irq(*(iVar22 + 0x388));
    *(iVar22 + 0x65a) = 1;
    if (*piVar20 == 5) {
        if (*(iVar22 + 0x4c4) < 3) {
            iVar13 = *(iVar22 + 0x4b8);
        }
        else {
            _printk(0x800158b,iVar22 + 0x4cc,*(iVar12 + 0x100),"gpi_resume");
            iVar13 = *(iVar22 + 0x4b8);
        }
        if ((iVar13 != 0) && (2 < *(iVar22 + 0x4c0))) {
            ipc_log_string(iVar13,"ch:%u %s: deep sleep config\n",*(iVar12 + 0x100),"gpi_resume");
        }
        iVar13 = *(iVar12 + 0x110);
        if (*(iVar13 + 0x4c4) < 3) {
            iVar14 = *(iVar13 + 0x4b8);
        }
        else {
            _printk(0x80018e2,iVar13 + 0x4cc,*(iVar12 + 0x100),"gpi_deep_sleep_exit_config");
            iVar14 = *(iVar13 + 0x4b8);
        }
        if ((iVar14 != 0) && (2 < *(iVar13 + 0x4c0))) {
            ipc_log_string(iVar14,"ch:%u %s: enter\n",*(iVar12 + 0x100),"gpi_deep_sleep_exit_config");
        }
        *(iVar13 + 0x188) = *(iVar13 + 0x180);
        *(iVar13 + 400) = *(iVar13 + 0x180);
        *(iVar13 + 0x340) = *(iVar13 + 0x338);
        *(iVar13 + 0x348) = *(iVar13 + 0x338);
        *(iVar13 + 0x448) = *(iVar13 + 0x440);
        *(iVar13 + 0x450) = *(iVar13 + 0x440);
        iVar10 = sym.gpi_config_interrupts(iVar13,0,0);
        if (iVar10 == 0) {
            iVar10 = sym.gpi_alloc_ev_chan(iVar13);
            if (iVar10 == 0) {
                iVar14 = iVar13 + 0x1c0;
                iVar11 = sym.gpi_alloc_chan(iVar13 + 8,1);
                if (iVar11 == 0) {
                    iVar24 = 1;
                    iVar10 = sym.gpi_alloc_chan(iVar14,1);
                    if (iVar10 != 0) goto code_r0x0800773c;
                    iVar11 = sym.gpi_start_chan(iVar13 + 8);
                    if (iVar11 == 0) {
                        iVar10 = sym.gpi_start_chan(iVar14);
                        if (iVar10 == 0) goto code_r0x080078e0;
                        uVar9 = 1;
                    }
                    else {
                        uVar9 = 0;
                        iVar10 = iVar11;
                    }
                    if (*(iVar13 + 0x4c4) < 2) {
                        iVar24 = *(iVar13 + 0x4b8);
                    }
                    else {
                        _printk(0x8001b08,iVar13 + 0x4cc,*(iVar13 + uVar9 * 0x1b8 + 0x108),
                                "gpi_deep_sleep_exit_config",iVar10);
                        iVar24 = *(iVar13 + 0x4b8);
                    }
                    if ((iVar24 != 0) && (1 < *(iVar13 + 0x4c0))) {
                        ipc_log_string(iVar24,"ch:%u %s: Error start chan:%d\n",*(iVar13 + uVar9 * 0x1b8 + 0x108),
                                       "gpi_deep_sleep_exit_config",iVar10);
                    }
                    if (iVar11 == 0) {
                        iVar11 = uVar9 - 1;
                        do {
                            sym.gpi_send_cmd(iVar13,iVar14,2);
                            sym.gpi_send_cmd(iVar13,iVar14,3);
                            iVar11 = iVar11 + 1;
                        } while (-1 < iVar11);
                    }
                    bVar5 = true;
                }
                else {
                    iVar24 = 0;
                    iVar10 = iVar11;
code_r0x0800773c:
                    if (*(iVar13 + 0x4c4) < 2) {
                        iVar15 = *(iVar13 + 0x4b8);
                    }
                    else {
                        _printk(0x8000c35,iVar13 + 0x4cc,*(iVar13 + iVar24 * 0x1b8 + 0x108),
                                "gpi_deep_sleep_exit_config",iVar10);
                        iVar15 = *(iVar13 + 0x4b8);
                    }
                    if ((iVar15 != 0) && (1 < *(iVar13 + 0x4c0))) {
                        ipc_log_string(iVar15,"ch:%u %s: Error allocating chan:%d\n",
                                       *(iVar13 + iVar24 * 0x1b8 + 0x108),"gpi_deep_sleep_exit_config",iVar10);
                    }
                    if (iVar11 != 0) goto code_r0x080078a8;
                    bVar5 = false;
                }
                sym.gpi_reset_chan(iVar14,4);
                if (bVar5) {
                    sym.gpi_reset_chan(iVar14,4);
                }
            }
            else {
                if (*(iVar13 + 0x4c4) < 2) {
                    iVar14 = *(iVar13 + 0x4b8);
                }
                else {
                    _printk(0x8000b85,iVar13 + 0x4cc,*(iVar13 + 0x2c0),"gpi_deep_sleep_exit_config",iVar10);
                    iVar14 = *(iVar13 + 0x4b8);
                }
                if ((iVar14 != 0) && (1 < *(iVar13 + 0x4c0))) {
                    ipc_log_string(iVar14,"ch:%u %s: error alloc_ev_chan:%d\n",*(iVar13 + 0x2c0),
                                   "gpi_deep_sleep_exit_config",iVar10);
                }
            }
code_r0x080078a8:
            sym.gpi_disable_interrupts(iVar13);
        }
        else {
            if (*(iVar13 + 0x4c4) < 2) {
                iVar14 = *(iVar13 + 0x4b8);
            }
            else {
                _printk(0x80016b8,iVar13 + 0x4cc,*(iVar13 + 0x2c0),"gpi_deep_sleep_exit_config",iVar10);
                iVar14 = *(iVar13 + 0x4b8);
            }
            if ((iVar14 != 0) && (1 < *(iVar13 + 0x4c0))) {
                ipc_log_string(iVar14,"ch:%u %s: error config. interrupts, ret:%d\n",*(iVar13 + 0x2c0),
                               "gpi_deep_sleep_exit_config",iVar10);
            }
        }
        if (*(iVar22 + 0x4c4) < 2) {
            iVar13 = *(iVar22 + 0x4b8);
        }
        else {
            _printk(0x8000497,iVar22 + 0x4cc,*(iVar12 + 0x100),"gpi_resume",iVar10);
            iVar13 = *(iVar22 + 0x4b8);
        }
        if ((iVar13 == 0) || (*(iVar22 + 0x4c0) < 2)) goto code_r0x080074d4;
        uVar7 = *(iVar12 + 0x100);
        pcVar16 = "ch:%u %s: Err deep sleep config, ret:%d\n";
    }
    else {
code_r0x080078e0:
        if (*(iVar22 + 0x410) == 3) {
            if (*(iVar22 + 0x4c4) < 3) {
                iVar13 = *(iVar22 + 0x4b8);
            }
            else {
                _printk(0x8001a23,iVar22 + 0x4cc,*(iVar12 + 0x100),"gpi_resume");
                iVar13 = *(iVar22 + 0x4b8);
            }
            if ((iVar13 != 0) && (2 < *(iVar22 + 0x4c0))) {
                uVar7 = *(iVar12 + 0x100);
                pcVar16 = "ch:%u %s: channel is already active\n";
                goto code_r0x080074c4;
            }
            goto code_r0x080074d0;
        }
        iVar10 = sym.gpi_send_cmd(iVar22,iVar22 + 8,1);
        if (iVar10 == 0) {
            iVar12 = 1;
            iVar10 = sym.gpi_send_cmd(iVar22,iVar22 + 0x1c0,1);
            if (iVar10 == 0) {
                _raw_write_lock_irq(iVar22 + 0x414);
                *(iVar22 + 0x410) = 3;
                _raw_write_unlock_irq(iVar22 + 0x414);
                goto code_r0x080074d4;
            }
        }
        else {
            iVar12 = 0;
        }
        if (*(iVar22 + 0x4c4) < 2) {
            iVar13 = *(iVar22 + 0x4b8);
        }
        else {
            _printk(0x80008a5,iVar22 + 0x4cc,*(iVar22 + iVar12 * 0x1b8 + 0x108),"gpi_resume",iVar10);
            iVar13 = *(iVar22 + 0x4b8);
        }
        if ((iVar13 == 0) || (*(iVar22 + 0x4c0) < 2)) goto code_r0x080074d4;
        pcVar16 = "ch:%u %s: Erro starting chan, ret:%d\n";
        uVar7 = *(iVar22 + iVar12 * 0x1b8 + 0x108);
    }
    ipc_log_string(iVar13,pcVar16,uVar7,"gpi_resume",iVar10);
code_r0x080074d4:
    mutex_unlock(iVar22 + 0x3d8);
    return iVar10;
}


// ===== sym.gpi_alloc_chan_resources.59fdd2041444ad0be5a5134da8e511aa.cfi_jt @ 0x08003318 (size 8) =====

int sym.gpi_alloc_chan_resources.59fdd2041444ad0be5a5134da8e511aa.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t arg3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3 = *(param_1 + 0x110);
    if (*(arg3 + 0x4c4) < 3) {
        iVar2 = *(arg3 + 0x4b8);
    }
    else {
        _printk(0x80018e2,arg3 + 0x4cc,*(param_1 + 0x100),"gpi_alloc_chan_resources");
        iVar2 = *(arg3 + 0x4b8);
    }
    if ((iVar2 != 0) && (2 < *(arg3 + 0x4c0))) {
        ipc_log_string(iVar2,"ch:%u %s: enter\n",*(param_1 + 0x100),"gpi_alloc_chan_resources");
    }
    mutex_lock(arg3 + 0x3d8);
    iVar1 = sym.gpi_alloc_ring(param_1 + 0x158,*(param_1 + 0x150),arg3);
    if (iVar1 != 0) {
        if (*(arg3 + 0x4c4) < 2) {
            iVar2 = *(arg3 + 0x4b8);
        }
        else {
            _printk(0x8001792,arg3 + 0x4cc,*(param_1 + 0x100),"gpi_alloc_chan_resources",iVar1);
            iVar2 = *(arg3 + 0x4b8);
        }
        if ((iVar2 != 0) && (1 < *(arg3 + 0x4c0))) {
            ipc_log_string(iVar2,"ch:%u %s: error allocating xfer ring, ret:%d\n",*(param_1 + 0x100),
                           "gpi_alloc_chan_resources",iVar1);
        }
    }
    mutex_unlock(arg3 + 0x3d8);
    return iVar1;
}


// ===== sym.gpi_resume.59fdd2041444ad0be5a5134da8e511aa.cfi_jt @ 0x08003320 (size 8) =====

int sym.gpi_resume.59fdd2041444ad0be5a5134da8e511aa.cfi_jt(int64_t param_1)

{
    uint uVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    char *pcVar8;
    uint32_t uVar9;
    ulong *in_x18;
    int64_t arg1;
    int *piVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x110);
    piVar10 = *(param_1 + 0x68);
    if (*(arg1 + 0x4c4) < 3) {
        iVar5 = *(arg1 + 0x4b8);
    }
    else {
        _printk(0x80018e2,arg1 + 0x4cc,*(param_1 + 0x100),"gpi_resume");
        iVar5 = *(arg1 + 0x4b8);
    }
    if ((iVar5 != 0) && (2 < *(arg1 + 0x4c0))) {
        ipc_log_string(iVar5,"ch:%u %s: enter\n",*(param_1 + 0x100),"gpi_resume");
    }
    mutex_lock(arg1 + 0x3d8);
    if (*(arg1 + 0x65a) != '\0') {
        if (*(arg1 + 0x4c4) < 3) {
            iVar5 = *(arg1 + 0x4b8);
        }
        else {
            _printk(0x8001f51,arg1 + 0x4cc,*(param_1 + 0x100),"gpi_resume");
            iVar5 = *(arg1 + 0x4b8);
        }
        if ((iVar5 != 0) && (2 < *(arg1 + 0x4c0))) {
            uVar1 = *(param_1 + 0x100);
            pcVar8 = "ch:%u %s: Already resumed\n";
code_r0x080074c4:
            ipc_log_string(iVar5,pcVar8,uVar1,"gpi_resume");
        }
code_r0x080074d0:
        iVar3 = 0;
        goto code_r0x080074d4;
    }
    enable_irq(*(arg1 + 0x388));
    *(arg1 + 0x65a) = 1;
    if (*piVar10 == 5) {
        if (*(arg1 + 0x4c4) < 3) {
            iVar5 = *(arg1 + 0x4b8);
        }
        else {
            _printk(0x800158b,arg1 + 0x4cc,*(param_1 + 0x100),"gpi_resume");
            iVar5 = *(arg1 + 0x4b8);
        }
        if ((iVar5 != 0) && (2 < *(arg1 + 0x4c0))) {
            ipc_log_string(iVar5,"ch:%u %s: deep sleep config\n",*(param_1 + 0x100),"gpi_resume");
        }
        iVar5 = *(param_1 + 0x110);
        if (*(iVar5 + 0x4c4) < 3) {
            iVar6 = *(iVar5 + 0x4b8);
        }
        else {
            _printk(0x80018e2,iVar5 + 0x4cc,*(param_1 + 0x100),"gpi_deep_sleep_exit_config");
            iVar6 = *(iVar5 + 0x4b8);
        }
        if ((iVar6 != 0) && (2 < *(iVar5 + 0x4c0))) {
            ipc_log_string(iVar6,"ch:%u %s: enter\n",*(param_1 + 0x100),"gpi_deep_sleep_exit_config");
        }
        *(iVar5 + 0x188) = *(iVar5 + 0x180);
        *(iVar5 + 400) = *(iVar5 + 0x180);
        *(iVar5 + 0x340) = *(iVar5 + 0x338);
        *(iVar5 + 0x348) = *(iVar5 + 0x338);
        *(iVar5 + 0x448) = *(iVar5 + 0x440);
        *(iVar5 + 0x450) = *(iVar5 + 0x440);
        iVar3 = sym.gpi_config_interrupts(iVar5,0,0);
        if (iVar3 == 0) {
            iVar3 = sym.gpi_alloc_ev_chan(iVar5);
            if (iVar3 == 0) {
                iVar6 = iVar5 + 0x1c0;
                iVar4 = sym.gpi_alloc_chan(iVar5 + 8,1);
                if (iVar4 == 0) {
                    iVar11 = 1;
                    iVar3 = sym.gpi_alloc_chan(iVar6,1);
                    if (iVar3 != 0) goto code_r0x0800773c;
                    iVar4 = sym.gpi_start_chan(iVar5 + 8);
                    if (iVar4 == 0) {
                        iVar3 = sym.gpi_start_chan(iVar6);
                        if (iVar3 == 0) goto code_r0x080078e0;
                        uVar9 = 1;
                    }
                    else {
                        uVar9 = 0;
                        iVar3 = iVar4;
                    }
                    if (*(iVar5 + 0x4c4) < 2) {
                        iVar11 = *(iVar5 + 0x4b8);
                    }
                    else {
                        _printk(0x8001b08,iVar5 + 0x4cc,*(iVar5 + uVar9 * 0x1b8 + 0x108),"gpi_deep_sleep_exit_config"
                                ,iVar3);
                        iVar11 = *(iVar5 + 0x4b8);
                    }
                    if ((iVar11 != 0) && (1 < *(iVar5 + 0x4c0))) {
                        ipc_log_string(iVar11,"ch:%u %s: Error start chan:%d\n",*(iVar5 + uVar9 * 0x1b8 + 0x108),
                                       "gpi_deep_sleep_exit_config",iVar3);
                    }
                    if (iVar4 == 0) {
                        iVar4 = uVar9 - 1;
                        do {
                            sym.gpi_send_cmd(iVar5,iVar6,2);
                            sym.gpi_send_cmd(iVar5,iVar6,3);
                            iVar4 = iVar4 + 1;
                        } while (-1 < iVar4);
                    }
                    bVar2 = true;
                }
                else {
                    iVar11 = 0;
                    iVar3 = iVar4;
code_r0x0800773c:
                    if (*(iVar5 + 0x4c4) < 2) {
                        iVar7 = *(iVar5 + 0x4b8);
                    }
                    else {
                        _printk(0x8000c35,iVar5 + 0x4cc,*(iVar5 + iVar11 * 0x1b8 + 0x108),
                                "gpi_deep_sleep_exit_config",iVar3);
                        iVar7 = *(iVar5 + 0x4b8);
                    }
                    if ((iVar7 != 0) && (1 < *(iVar5 + 0x4c0))) {
                        ipc_log_string(iVar7,"ch:%u %s: Error allocating chan:%d\n",*(iVar5 + iVar11 * 0x1b8 + 0x108)
                                       ,"gpi_deep_sleep_exit_config",iVar3);
                    }
                    if (iVar4 != 0) goto code_r0x080078a8;
                    bVar2 = false;
                }
                sym.gpi_reset_chan(iVar6,4);
                if (bVar2) {
                    sym.gpi_reset_chan(iVar6,4);
                }
            }
            else {
                if (*(iVar5 + 0x4c4) < 2) {
                    iVar6 = *(iVar5 + 0x4b8);
                }
                else {
                    _printk(0x8000b85,iVar5 + 0x4cc,*(iVar5 + 0x2c0),"gpi_deep_sleep_exit_config",iVar3);
                    iVar6 = *(iVar5 + 0x4b8);
                }
                if ((iVar6 != 0) && (1 < *(iVar5 + 0x4c0))) {
                    ipc_log_string(iVar6,"ch:%u %s: error alloc_ev_chan:%d\n",*(iVar5 + 0x2c0),
                                   "gpi_deep_sleep_exit_config",iVar3);
                }
            }
code_r0x080078a8:
            sym.gpi_disable_interrupts(iVar5);
        }
        else {
            if (*(iVar5 + 0x4c4) < 2) {
                iVar6 = *(iVar5 + 0x4b8);
            }
            else {
                _printk(0x80016b8,iVar5 + 0x4cc,*(iVar5 + 0x2c0),"gpi_deep_sleep_exit_config",iVar3);
                iVar6 = *(iVar5 + 0x4b8);
            }
            if ((iVar6 != 0) && (1 < *(iVar5 + 0x4c0))) {
                ipc_log_string(iVar6,"ch:%u %s: error config. interrupts, ret:%d\n",*(iVar5 + 0x2c0),
                               "gpi_deep_sleep_exit_config",iVar3);
            }
        }
        if (*(arg1 + 0x4c4) < 2) {
            iVar6 = *(arg1 + 0x4b8);
        }
        else {
            _printk(0x8000497,arg1 + 0x4cc,*(param_1 + 0x100),"gpi_resume",iVar3);
            iVar6 = *(arg1 + 0x4b8);
        }
        if ((iVar6 == 0) || (*(arg1 + 0x4c0) < 2)) goto code_r0x080074d4;
        uVar1 = *(param_1 + 0x100);
        pcVar8 = "ch:%u %s: Err deep sleep config, ret:%d\n";
    }
    else {
code_r0x080078e0:
        if (*(arg1 + 0x410) == 3) {
            if (*(arg1 + 0x4c4) < 3) {
                iVar5 = *(arg1 + 0x4b8);
            }
            else {
                _printk(0x8001a23,arg1 + 0x4cc,*(param_1 + 0x100),"gpi_resume");
                iVar5 = *(arg1 + 0x4b8);
            }
            if ((iVar5 != 0) && (2 < *(arg1 + 0x4c0))) {
                uVar1 = *(param_1 + 0x100);
                pcVar8 = "ch:%u %s: channel is already active\n";
                goto code_r0x080074c4;
            }
            goto code_r0x080074d0;
        }
        iVar3 = sym.gpi_send_cmd(arg1,arg1 + 8,1);
        if (iVar3 == 0) {
            iVar5 = 1;
            iVar3 = sym.gpi_send_cmd(arg1,arg1 + 0x1c0,1);
            if (iVar3 == 0) {
                _raw_write_lock_irq(arg1 + 0x414);
                *(arg1 + 0x410) = 3;
                _raw_write_unlock_irq(arg1 + 0x414);
                goto code_r0x080074d4;
            }
        }
        else {
            iVar5 = 0;
        }
        if (*(arg1 + 0x4c4) < 2) {
            iVar6 = *(arg1 + 0x4b8);
        }
        else {
            _printk(0x80008a5,arg1 + 0x4cc,*(arg1 + iVar5 * 0x1b8 + 0x108),"gpi_resume",iVar3);
            iVar6 = *(arg1 + 0x4b8);
        }
        if ((iVar6 == 0) || (*(arg1 + 0x4c0) < 2)) goto code_r0x080074d4;
        pcVar8 = "ch:%u %s: Erro starting chan, ret:%d\n";
        uVar1 = *(arg1 + iVar5 * 0x1b8 + 0x108);
    }
    ipc_log_string(iVar6,pcVar8,uVar1,"gpi_resume",iVar3);
code_r0x080074d4:
    mutex_unlock(arg1 + 0x3d8);
    return iVar3;
}


// ===== sym.gpi_dump_for_geni @ 0x08003328 (size 40) =====

void sym.gpi_dump_for_geni(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.gpi_dump_debug_reg(*(arg1 + 0x110));
    return;
}


// ===== sym.gpi_dump_debug_reg @ 0x08003350 (size 1344) =====

void sym.gpi_dump_debug_reg(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint uVar7;
    ulong uVar8;
    int64_t *piVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *arg1;
    uVar8 = sched_clock();
    piVar9 = *(arg1 + 0x600);
    *(arg1 + 0x5d8) = uVar8;
    if (piVar9 == NULL) {
        piVar9 = kmem_cache_alloc_trace(_vchan_tx_submit,0xb20,0xa0);
        *(arg1 + 0x600) = piVar9;
        if (piVar9 == NULL) {
            return;
        }
        uVar1 = iVar2 * 0x4000 + 0x23080;
        *(piVar9 + 0x9c) = 0;
        *(piVar9 + 0x94) = 0;
        *piVar9 = "TYPE_IRQ";
        piVar9[2] = "TYPE_IRQ_MSK";
        *(piVar9 + 1) = uVar1;
        *(piVar9 + 0xc) = 0;
        *(piVar9 + 3) = uVar1 | 8;
        *(piVar9 + 0x1c) = 0;
        *(piVar9 + 0x8c) = 0;
        piVar9[4] = "CH_IRQ";
        *(piVar9 + 5) = uVar1 | 0x10;
        *(piVar9 + 0x2c) = 0;
        *(piVar9 + 7) = uVar1 | 0x14;
        *(piVar9 + 0x3c) = 0;
        piVar9[6] = "EV_IRQ";
        *(piVar9 + 9) = uVar1 | 0x18;
        *(piVar9 + 0x4c) = 0;
        piVar9[8] = "CH_IRQ_MSK";
        *(piVar9 + 0xb) = uVar1 | 0x1c;
        *(piVar9 + 0x5c) = 0;
        piVar9[10] = "EV_IRQ_MSK";
        *(piVar9 + 0xd) = uVar1 | 0x30;
        *(piVar9 + 0x6c) = 0;
        piVar9[0xc] = "IEOB_IRQ";
        *(piVar9 + 0xf) = uVar1 | 0x38;
        *(piVar9 + 0x7c) = 0;
        *(piVar9 + 0x11) = iVar2 * 0x4000 + 0x23100;
        piVar9[0xe] = "IEOB_IRQ_MSK";
        piVar9[0x10] = "GLOB_IRQ";
        iVar10 = *piVar9;
    }
    else {
        iVar10 = *piVar9;
    }
    while (iVar10 != 0) {
        uVar7 = sym.readl_relaxed(*(arg1 + 0x390) + *(piVar9 + 1));
        iVar10 = piVar9[2];
        *(piVar9 + 0xc) = uVar7;
        piVar9 = piVar9 + 2;
    }
    piVar9 = *(arg1 + 0x5e0);
    if (piVar9 == NULL) {
        piVar9 = kmem_cache_alloc_trace(_vchan_tx_submit,0xb20,0xf0);
        *(arg1 + 0x5e0) = piVar9;
        if (piVar9 == NULL) {
            return;
        }
        memcpy(piVar9,obj.gpi_debug_ev_cntxt,0xf0);
        iVar10 = *piVar9;
    }
    else {
        iVar10 = *piVar9;
    }
    while (iVar10 != 0) {
        uVar7 = sym.readl_relaxed(*(arg1 + 0x398) + *(piVar9 + 1));
        iVar10 = piVar9[2];
        *(piVar9 + 0xc) = uVar7;
        piVar9 = piVar9 + 2;
    }
    piVar9 = *(arg1 + 0x5e8);
    if (piVar9 == NULL) {
        piVar9 = kmem_cache_alloc_trace(_vchan_tx_submit,0xb20,0x90);
        *(arg1 + 0x5e8) = piVar9;
        if (piVar9 == NULL) {
            return;
        }
        memcpy(piVar9,obj.gpi_debug_ch_cntxt,0x90);
        iVar10 = *piVar9;
    }
    else {
        iVar10 = *piVar9;
    }
    while (iVar10 != 0) {
        uVar7 = sym.readl_relaxed(*(arg1 + 0x128) + *(piVar9 + 1));
        iVar10 = piVar9[2];
        *(piVar9 + 0xc) = uVar7;
        piVar9 = piVar9 + 2;
    }
    piVar9 = *(arg1 + 0x5f0);
    if (piVar9 == NULL) {
        piVar9 = kmem_cache_alloc_trace(_vchan_tx_submit,0xb20,0x90);
        *(arg1 + 0x5f0) = piVar9;
        if (piVar9 == NULL) {
            return;
        }
        memcpy(piVar9,obj.gpi_debug_ch_cntxt,0x90);
        iVar10 = *piVar9;
    }
    else {
        iVar10 = *piVar9;
    }
    while (iVar10 != 0) {
        uVar7 = sym.readl_relaxed(*(arg1 + 0x2e0) + *(piVar9 + 1));
        iVar10 = piVar9[2];
        *(piVar9 + 0xc) = uVar7;
        piVar9 = piVar9 + 2;
    }
    piVar9 = *(arg1 + 0x5f8);
    if (piVar9 == NULL) {
        piVar9 = kmem_cache_alloc_trace(_vchan_tx_submit,0xb20,0x60);
        *(arg1 + 0x5f8) = piVar9;
        iVar4 = *0x80025e8;
        iVar3 = *0x80025e0;
        iVar10 = *0x80025d8;
        if (piVar9 == NULL) {
            return;
        }
        piVar9[8] = *0x80025d0;
        piVar9[9] = iVar10;
        iVar5 = *0x80025b8;
        iVar10 = *0x80025b0;
        piVar9[10] = iVar3;
        piVar9[0xb] = iVar4;
        iVar6 = *0x80025c8;
        iVar4 = *0x80025c0;
        piVar9[4] = iVar10;
        piVar9[5] = iVar5;
        iVar3 = *0x8002598;
        iVar10 = _obj.gpi_debug_regs;
        piVar9[6] = iVar4;
        piVar9[7] = iVar6;
        iVar5 = *0x80025a8;
        iVar4 = *0x80025a0;
        *piVar9 = iVar10;
        piVar9[1] = iVar3;
        piVar9[2] = iVar4;
        piVar9[3] = iVar5;
        iVar10 = *piVar9;
    }
    else {
        iVar10 = *piVar9;
    }
    while (iVar10 != 0) {
        uVar7 = sym.readl_relaxed(*(*(arg1 + 0x378) + 0x1c0) + *(piVar9 + 1));
        iVar10 = piVar9[2];
        *(piVar9 + 0xc) = uVar7;
        piVar9 = piVar9 + 2;
    }
    piVar9 = *(arg1 + 0x608);
    if (piVar9 == NULL) {
        piVar9 = kmem_cache_alloc_trace(_vchan_tx_submit,0xb20,0xb0);
        *(arg1 + 0x608) = piVar9;
        if (piVar9 == NULL) {
            return;
        }
        memcpy(piVar9,obj.gpi_debug_qsb_regs,0xb0);
        iVar10 = *piVar9;
    }
    else {
        iVar10 = *piVar9;
    }
    while (iVar10 != 0) {
        uVar7 = sym.readl_relaxed(*(*(arg1 + 0x378) + 0x1c0) + *(piVar9 + 1));
        iVar10 = piVar9[2];
        *(piVar9 + 0xc) = uVar7;
        piVar9 = piVar9 + 2;
    }
    uVar7 = sym.readl_relaxed(*(arg1 + 0x390) + *arg1 * 0x4000 + 0x23400);
    *(arg1 + 0x610) = uVar7;
    uVar7 = sym.readl_relaxed(*(arg1 + 0x390) + *arg1 * 0x4000 + *(arg1 + 0x108) * 0x80 + 0x20060);
    *(arg1 + 0x614) = uVar7;
    uVar7 = sym.readl_relaxed(*(arg1 + 0x390) + *arg1 * 0x4000 + *(arg1 + 0x2c0) * 0x80 + 0x20060);
    iVar10 = *(arg1 + 0x620);
    *(arg1 + 0x618) = uVar7;
    if (iVar10 == 0) {
        *(arg1 + 0x628) = *(arg1 + 0x458);
        iVar10 = __kmalloc(*(arg1 + 0x458),0xb20);
        *(arg1 + 0x620) = iVar10;
        if (iVar10 == 0) {
            return;
        }
    }
    memcpy(iVar10,*(arg1 + 0x440),*(arg1 + 0x628));
    iVar10 = *(arg1 + 0x630);
    if (iVar10 == 0) {
        *(arg1 + 0x640) = *(arg1 + 0x198);
        iVar10 = __kmalloc(*(arg1 + 0x198),0xb20);
        *(arg1 + 0x630) = iVar10;
        if (iVar10 == 0) {
            return;
        }
    }
    memcpy(iVar10,*(arg1 + 0x180),*(arg1 + 0x640));
    iVar10 = *(arg1 + 0x638);
    if (iVar10 == 0) {
        *(arg1 + 0x644) = *(arg1 + 0x350);
        iVar10 = __kmalloc(*(arg1 + 0x350),0xb20);
        *(arg1 + 0x638) = iVar10;
        if (iVar10 == 0) {
            return;
        }
    }
    memcpy(iVar10,*(arg1 + 0x338),*(arg1 + 0x644));
    uVar7 = sym.readl_relaxed(*(arg1 + 0x390) + *arg1 * 0x4000 + 0x23200);
    *(arg1 + 0x648) = uVar7;
    if (*(arg1 + 0x4c4) < 2) {
        iVar10 = *(arg1 + 0x4b8);
    }
    else {
        _printk(0x80013f1,arg1 + 0x4cc,99,"gpi_dump_debug_reg");
        iVar10 = *(arg1 + 0x4b8);
    }
    if ((iVar10 != 0) && (1 < *(arg1 + 0x4c0))) {
        ipc_log_string(iVar10,"ch:%u %s: Global IRQ handling Exit\n",99,"gpi_dump_debug_reg");
    }
    return;
}


// ===== sym.gpi_mark_stale_events @ 0x08003890 (size 280) =====

void sym.gpi_mark_stale_events(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x110);
    if (*(iVar4 + 0x4c4) < 3) {
        iVar2 = *(iVar4 + 0x4b8);
    }
    else {
        _printk(0x80010a9,iVar4 + 0x4cc,*(arg1 + 0x100),"gpi_mark_stale_events");
        iVar2 = *(iVar4 + 0x4b8);
    }
    if ((iVar2 != 0) && (2 < *(iVar4 + 0x4c0))) {
        ipc_log_string(iVar2,"ch:%u %s: Enter\n",*(arg1 + 0x100),"gpi_mark_stale_events");
    }
    iVar1 = sym.readl_relaxed(*(iVar4 + 0x3b0));
    uVar5 = *(iVar4 + 0x450);
    uVar3 = *(iVar4 + 0x440);
    if (iVar1 != (*(iVar4 + 0x430) + uVar5) - uVar3) {
        do {
            if (*(arg1 + 0x100) == *(uVar5 + 0xf)) {
                *(uVar5 + 0xe) = 0xff;
                uVar3 = *(iVar4 + 0x440);
            }
            uVar5 = uVar5 + *(iVar4 + 0x45c);
            if (uVar3 + *(iVar4 + 0x458) <= uVar5) {
                uVar5 = uVar3;
            }
            iVar1 = sym.readl_relaxed(*(iVar4 + 0x3b0));
            uVar3 = *(iVar4 + 0x440);
        } while (iVar1 != (*(iVar4 + 0x430) + uVar5) - uVar3);
    }
    return;
}


// ===== sym.gpi_terminate_all @ 0x080039a8 (size 1020) =====

int sym.gpi_terminate_all(int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    char *pcVar6;
    uint32_t uVar7;
    int iVar8;
    uint32_t uVar9;
    ulong *in_x18;
    uint *puVar10;
    uint64_t uVar11;
    int64_t arg1_00;
    uint64_t uVar12;
    int64_t iVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x110);
    if (*(arg1_00 + 0x4c4) < 3) {
        iVar4 = *(arg1_00 + 0x4b8);
    }
    else {
        _printk(0x80010a9,arg1_00 + 0x4cc,*(arg1 + 0x100),"gpi_terminate_all");
        iVar4 = *(arg1_00 + 0x4b8);
    }
    if ((iVar4 != 0) && (2 < *(arg1_00 + 0x4c0))) {
        ipc_log_string(iVar4,"ch:%u %s: Enter\n",*(arg1 + 0x100),"gpi_terminate_all");
    }
    mutex_lock(arg1_00 + 0x3d8);
    if (*(arg1_00 + 900) == 2) {
        uVar7 = *(arg1 + 0x100);
    }
    else {
        uVar7 = 0;
    }
    iVar8 = 2;
    if (*(arg1_00 + 900) == 2) {
        iVar8 = uVar7 + 1;
    }
    if (uVar7 < iVar8) {
        iVar4 = arg1_00 + 0x4cc;
        uVar14 = uVar7;
        uVar9 = uVar7;
        if (uVar7 < 4) {
            uVar9 = 3;
        }
        uVar12 = uVar9;
        iVar3 = iVar8 - uVar7;
        puVar10 = arg1_00 + uVar7 * 0x1b8 + 0x108;
        iVar13 = uVar12 - uVar14;
        do {
            if (iVar13 == 0) goto code_r0x08003da0;
            _raw_write_lock_irq(arg1_00 + 0x414);
            puVar10[7] = 4;
            _raw_write_unlock_irq(arg1_00 + 0x414);
            iVar2 = sym.gpi_send_cmd(arg1_00,puVar10 + -0x40,2);
            if (iVar2 != 0) {
                if (*(arg1_00 + 0x4c4) < 2) {
                    iVar5 = *(arg1_00 + 0x4b8);
                }
                else {
                    _printk(0x80013c3,iVar4,*puVar10,"gpi_terminate_all",iVar2);
                    iVar5 = *(arg1_00 + 0x4b8);
                }
                if ((iVar5 != 0) && (1 < *(arg1_00 + 0x4c0))) {
                    ipc_log_string(iVar5,"ch:%u %s: Error Stopping Chan:%d resetting\n",*puVar10,"gpi_terminate_all"
                                   ,iVar2);
                }
            }
            iVar3 = iVar3 + -1;
            puVar10 = puVar10 + 0x6e;
            iVar13 = iVar13 + -1;
        } while (iVar3 != 0);
        iVar13 = arg1_00 + uVar14 * 0x1b8 + 8;
        uVar11 = uVar14;
        do {
            if (uVar12 == uVar11) goto code_r0x08003da0;
            iVar3 = sym.gpi_reset_chan(iVar13,3);
            if (iVar3 != 0) {
                if (*(arg1_00 + 0x4c4) < 2) {
                    iVar4 = *(arg1_00 + 0x4b8);
                }
                else {
                    _printk(0x8001f6e,iVar4,*(arg1_00 + (uVar11 & 0xffffffff) * 0x1b8 + 0x108),"gpi_terminate_all",
                            iVar3);
                    iVar4 = *(arg1_00 + 0x4b8);
                }
                if ((iVar4 != 0) && (1 < *(arg1_00 + 0x4c0))) {
                    ipc_log_string(iVar4,"ch:%u %s: Error resetting channel ret:%d\n",
                                   *(arg1_00 + (uVar11 & 0xffffffff) * 0x1b8 + 0x108),"gpi_terminate_all",iVar3);
                }
                if (*(arg1_00 + 0x650) == '\0') {
                    sym.gpi_dump_debug_reg(arg1_00);
                    *(arg1_00 + 0x650) = 1;
                }
                goto code_r0x08003ca8;
            }
            iVar3 = sym.gpi_alloc_chan(iVar13,0);
            if (iVar3 != 0) {
                uVar14 = uVar11 & 0xffffffff;
                if (*(arg1_00 + 0x4c4) < 2) {
                    iVar4 = *(arg1_00 + 0x4b8);
                }
                else {
                    _printk(0x8000d14,iVar4,*(arg1_00 + uVar14 * 0x1b8 + 0x108),"gpi_terminate_all",iVar3);
                    iVar4 = *(arg1_00 + 0x4b8);
                }
                if ((iVar4 == 0) || (*(arg1_00 + 0x4c0) < 2)) goto code_r0x08003ca8;
                pcVar6 = "ch:%u %s: Error alloc_channel ret:%d\n";
                goto code_r0x08003c8c;
            }
            uVar11 = uVar11 + 1;
            iVar13 = iVar13 + 0x1b8;
        } while (iVar8 != uVar11);
        iVar13 = arg1_00 + uVar14 * 0x1b8 + 8;
        do {
            if (uVar12 == uVar14) {
code_r0x08003da0:
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8003da4);
                (*pcVar1)();
            }
            iVar3 = sym.gpi_start_chan(iVar13);
            if (iVar3 != 0) {
                uVar14 = uVar14 & 0xffffffff;
                if (*(arg1_00 + 0x4c4) < 2) {
                    iVar4 = *(arg1_00 + 0x4b8);
                }
                else {
                    _printk(0x80005f7,iVar4,*(arg1_00 + uVar14 * 0x1b8 + 0x108),"gpi_terminate_all",iVar3);
                    iVar4 = *(arg1_00 + 0x4b8);
                }
                if ((iVar4 != 0) && (1 < *(arg1_00 + 0x4c0))) {
                    pcVar6 = "ch:%u %s: Error Starting Channel ret:%d\n";
code_r0x08003c8c:
                    ipc_log_string(iVar4,pcVar6,*(arg1_00 + uVar14 * 0x1b8 + 0x108),"gpi_terminate_all",iVar3);
                }
                goto code_r0x08003ca8;
            }
            uVar14 = uVar14 + 1;
            iVar13 = iVar13 + 0x1b8;
        } while (iVar8 != uVar14);
        iVar3 = 0;
    }
    else {
        iVar3 = 0;
    }
code_r0x08003ca8:
    mutex_unlock(arg1_00 + 0x3d8);
    return iVar3;
}


// ===== sym.gpi_send_cmd @ 0x08003da4 (size 612) =====

ulong sym.gpi_send_cmd(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int iVar3;
    uint32_t uVar4;
    code *pcVar5;
    uint uVar6;
    int64_t iVar7;
    ulong uVar8;
    ulong *in_x18;
    uint32_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar10 = arg3;
    if (arg3 < 8) {
        uVar9 = *(arg2 + 0x100);
    }
    else {
        uVar9 = 2;
    }
    if (*(arg1 + 0x4c4) < 3) {
        iVar7 = *(arg1 + 0x4b8);
    }
    else {
        _printk(0x80008de,arg1 + 0x4cc,uVar9,"gpi_send_cmd",*(obj.gpi_cmd_str + uVar10 * 8));
        iVar7 = *(arg1 + 0x4b8);
    }
    if ((iVar7 != 0) && (2 < *(arg1 + 0x4c0))) {
        ipc_log_string(iVar7,"ch:%u %s: sending cmd: %s\n",uVar9,"gpi_send_cmd",*(obj.gpi_cmd_str + uVar10 * 8));
    }
    piVar2 = arg2 + 0x148;
    if (7 < arg3) {
        piVar2 = arg1 + 0x3c0;
    }
    *(arg1 + 0x490) = 0;
    uVar11 = uVar10 * 0x10;
    *(arg1 + 0x4b0) = arg3;
    uVar1 = uVar10 << 4 | 4;
    if (arg3 < 8) {
        if (0xb0 < uVar1) goto code_r0x08004004;
        uVar4 = uVar9 | *(uVar11 + 0x80026fc) << 0x18;
    }
    else {
        if (0xb0 < uVar1) goto code_r0x08004004;
        uVar4 = *(uVar11 + 0x80026fc) << 0x18;
    }
    sym.writel_relaxed(uVar4,*piVar2);
    if (0xb0 < (uVar11 | 0xc)) {
code_r0x08004004:
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(1,0x8004008);
        (*pcVar5)();
    }
    uVar8 = __msecs_to_jiffies(*(uVar10 * 0x10 + 0x8002704));
    iVar7 = wait_for_completion_timeout(arg1 + 0x490,uVar8);
    if (iVar7 == 0) {
        uVar6 = sym.readl_relaxed(*(arg1 + 0x390) + *arg1 * 0x4000 + 0x23080);
        if (*(arg1 + 0x4c4) < 2) {
            iVar7 = *(arg1 + 0x4b8);
        }
        else {
            _printk(0x80003ce,arg1 + 0x4cc,uVar9,"gpi_send_cmd",*(obj.gpi_cmd_str + uVar10 * 8),uVar6);
            iVar7 = *(arg1 + 0x4b8);
        }
        if ((iVar7 != 0) && (1 < *(arg1 + 0x4c0))) {
            ipc_log_string(iVar7,"ch:%u %s: cmd: %s completion timeout irq_status=0x%x\n",uVar9,"gpi_send_cmd",
                           *(obj.gpi_cmd_str + uVar10 * 8),uVar6);
        }
code_r0x08003fe0:
        uVar8 = 0xfffffffb;
    }
    else {
        if (0xb0 < (uVar11 | 8)) goto code_r0x08004004;
        if (2 < uVar10 - 5) {
            if (arg3 < 8) {
                iVar3 = *(arg2 + 0x118);
            }
            else {
                iVar3 = *(arg1 + 0x408);
            }
            if (iVar3 != *(uVar10 * 0x10 + 0x8002700)) goto code_r0x08003fe0;
        }
        uVar8 = 0;
    }
    return uVar8;
}


// ===== sym.gpi_reset_chan @ 0x08004008 (size 724) =====

int sym.gpi_reset_chan(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    int iVar9;
    uint32_t uVar10;
    int iVar11;
    int iVar12;
    int64_t iVar13;
    ulong uVar14;
    int64_t arg2_00;
    int64_t iVar15;
    int64_t iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar17;
    int *arg1_00;
    ulong unaff_x30;
    uchar auVar18 [16];
    int64_t *piStack_48;
    int64_t *piStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_38 = *(iVar17 + 0x5e0);
    piStack_48 = &stack0xffffffffffffffb8;
    iVar17 = *(arg1 + 0x110);
    piStack_40 = piStack_48;
    if (*(iVar17 + 0x4c4) < 3) {
        iVar13 = *(iVar17 + 0x4b8);
    }
    else {
        _printk(0x80010a9,iVar17 + 0x4cc,*(arg1 + 0x100),"gpi_reset_chan");
        iVar13 = *(iVar17 + 0x4b8);
    }
    if ((iVar13 != 0) && (2 < *(iVar17 + 0x4c0))) {
        ipc_log_string(iVar13,"ch:%u %s: Enter\n",*(arg1 + 0x100),"gpi_reset_chan");
    }
    iVar11 = sym.gpi_send_cmd(iVar17,arg1,arg2);
    if (iVar11 == 0) {
        *(arg1 + 0x180) = *(arg1 + 0x178);
        *(arg1 + 0x188) = *(arg1 + 0x178);
        DataMemoryBarrier(2,2);
        _raw_write_lock_irq(iVar17 + 0x414);
        sym.gpi_mark_stale_events(arg1);
        uVar14 = _raw_spin_lock_irqsave(arg1 + 0xa0);
        piVar1 = arg1 + 0xa8;
        if (piVar1 != *piVar1) {
            iVar13 = *(arg1 + 0xa8);
            piVar2 = *(arg1 + 0xb0);
            *(iVar13 + 8) = piStack_40;
            *piStack_40 = iVar13;
            *piVar2 = &stack0xffffffffffffffb8;
            *(arg1 + 0xa8) = piVar1;
            *(arg1 + 0xb0) = piVar1;
            piStack_40 = piVar2;
        }
        piVar1 = arg1 + 0xb8;
        if (piVar1 != *piVar1) {
            iVar13 = *(arg1 + 0xb8);
            piVar2 = *(arg1 + 0xc0);
            *(iVar13 + 8) = piStack_40;
            *piStack_40 = iVar13;
            *piVar2 = &stack0xffffffffffffffb8;
            *(arg1 + 0xb8) = piVar1;
            *(arg1 + 0xc0) = piVar1;
            piStack_40 = piVar2;
        }
        piVar1 = arg1 + 200;
        if (piVar1 != *piVar1) {
            iVar13 = *(arg1 + 200);
            piVar2 = *(arg1 + 0xd0);
            *(iVar13 + 8) = piStack_40;
            *piStack_40 = iVar13;
            *piVar2 = &stack0xffffffffffffffb8;
            *(arg1 + 200) = piVar1;
            *(arg1 + 0xd0) = piVar1;
            piStack_40 = piVar2;
        }
        piVar1 = arg1 + 0xd8;
        if (piVar1 != *piVar1) {
            iVar13 = *(arg1 + 0xd8);
            piVar2 = *(arg1 + 0xe0);
            *(iVar13 + 8) = piStack_40;
            *piStack_40 = iVar13;
            *piVar2 = &stack0xffffffffffffffb8;
            *(arg1 + 0xd8) = piVar1;
            *(arg1 + 0xe0) = piVar1;
            piStack_40 = piVar2;
        }
        piVar1 = arg1 + 0xe8;
        if (piVar1 != *piVar1) {
            iVar13 = *(arg1 + 0xe8);
            piVar2 = *(arg1 + 0xf0);
            *(iVar13 + 8) = piStack_40;
            *piStack_40 = iVar13;
            *piVar2 = &stack0xffffffffffffffb8;
            *(arg1 + 0xe8) = piVar1;
            *(arg1 + 0xf0) = piVar1;
            piStack_40 = piVar2;
        }
        _raw_spin_unlock_irqrestore(arg1 + 0xa0,uVar14);
        _raw_write_unlock_irq(iVar17 + 0x414);
        vchan_dma_desc_free_list(arg1,&stack0xffffffffffffffb8);
    }
    else {
        if (*(iVar17 + 0x4c4) < 2) {
            iVar13 = *(iVar17 + 0x4b8);
        }
        else {
            _printk(0x8001b8b,iVar17 + 0x4cc,*(arg1 + 0x100),"gpi_reset_chan",
                    *(obj.gpi_cmd_str + (arg2 & 0xffffffffU) * 8),iVar11);
            iVar13 = *(iVar17 + 0x4b8);
        }
        if ((iVar13 != 0) && (1 < *(iVar17 + 0x4c0))) {
            ipc_log_string(iVar13,"ch:%u %s: Error with cmd:%s ret:%d\n",*(arg1 + 0x100),"gpi_reset_chan",
                           *(obj.gpi_cmd_str + (arg2 & 0xffffffffU) * 8),iVar11);
        }
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) != iStack_38) {
        auVar18 = __stack_chk_fail();
        arg2_00 = auVar18._0_8_;
        *extraout_x18 = 0x80042c8;
        arg1_00 = *(arg2_00 + 0x110);
        uVar3 = *(arg2_00 + 0x168);
        iVar11 = *(arg2_00 + 0x100);
        iVar4 = *(arg2_00 + 0x108);
        iVar16 = *(arg1_00 + 0xe4);
        iVar5 = *(arg2_00 + 0x194);
        iVar6 = *(arg2_00 + 0x154);
        iVar17 = *(arg2_00 + 0x120);
        iVar13 = *(arg2_00 + 0x128);
        uVar7 = *(arg2_00 + 400);
        uVar8 = *(arg2_00 + 0x16c);
        iVar9 = *arg1_00;
        uVar10 = *(arg2_00 + 0x104);
        if (arg1_00[0x131] < 3) {
            iVar15 = *(arg1_00 + 0x12e);
        }
        else {
            _printk(0x80010a9,arg1_00 + 0x133,iVar11,"gpi_alloc_chan");
            iVar15 = *(arg1_00 + 0x12e);
        }
        if ((iVar15 != 0) && (2 < arg1_00[0x130])) {
            ipc_log_string(iVar15,"ch:%u %s: Enter\n",*(arg2_00 + 0x100),"gpi_alloc_chan");
        }
        if (((auVar18._8_8_ & 1) == 0) || (iVar12 = sym.gpi_send_cmd(arg1_00,arg2_00,0), iVar12 == 0)) {
            if (iVar17 != 0) {
                sym.writel_relaxed(iVar5 << 0x18 | iVar6 << 3 | 2,iVar17);
                sym.writel_relaxed(uVar7,iVar17 + 4);
                sym.writel_relaxed(uVar3,iVar17 + 8);
                sym.writel_relaxed(uVar8,iVar17 + 0xc);
                if ((iVar13 != 0) && (sym.writel_relaxed(uVar8,iVar13 + 4), iVar16 != 0)) {
                    iVar5 = iVar11 * 0x80 + iVar9 * 0x4000;
                    sym.writel_relaxed(iVar4 << 4 | (iVar11 == 0) << 0x10 | uVar10,iVar16 + (iVar5 + 0x20060));
                    sym.writel_relaxed(0,iVar16 + (iVar5 + 0x20064));
                    sym.writel_relaxed(0,iVar16 + (iVar5 + 0x20068));
                    sym.writel_relaxed(0,iVar16 + (iVar5 + 0x2006c));
                    sym.writel_relaxed(1,iVar16 + (iVar5 + 0x2005c));
                }
            }
            DataSynchronizationBarrier(3,2,0);
            iVar12 = 0;
        }
        else {
            if (arg1_00[0x131] < 2) {
                iVar17 = *(arg1_00 + 0x12e);
            }
            else {
                _printk(0x8001b8b,arg1_00 + 0x133,*(arg2_00 + 0x100),"gpi_alloc_chan","CH ALLOCATE",iVar12);
                iVar17 = *(arg1_00 + 0x12e);
            }
            if ((iVar17 != 0) && (1 < arg1_00[0x130])) {
                ipc_log_string(iVar17,"ch:%u %s: Error with cmd:%s ret:%d\n",*(arg2_00 + 0x100),"gpi_alloc_chan",
                               "CH ALLOCATE",iVar12);
            }
        }
        return iVar12;
    }
    return iVar11;
}


// ===== sym.gpi_alloc_chan @ 0x080042dc (size 620) =====

int sym.gpi_alloc_chan(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    int iVar9;
    uint32_t uVar10;
    int iVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong *in_x18;
    int *arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x110);
    uVar2 = *(arg1 + 0x168);
    iVar3 = *(arg1 + 0x100);
    iVar4 = *(arg1 + 0x108);
    iVar14 = *(arg1_00 + 0xe4);
    iVar5 = *(arg1 + 0x194);
    iVar6 = *(arg1 + 0x154);
    iVar13 = *(arg1 + 0x120);
    iVar1 = *(arg1 + 0x128);
    uVar7 = *(arg1 + 400);
    uVar8 = *(arg1 + 0x16c);
    iVar9 = *arg1_00;
    uVar10 = *(arg1 + 0x104);
    if (arg1_00[0x131] < 3) {
        iVar12 = *(arg1_00 + 0x12e);
    }
    else {
        _printk(0x80010a9,arg1_00 + 0x133,iVar3,"gpi_alloc_chan");
        iVar12 = *(arg1_00 + 0x12e);
    }
    if ((iVar12 != 0) && (2 < arg1_00[0x130])) {
        ipc_log_string(iVar12,"ch:%u %s: Enter\n",*(arg1 + 0x100),"gpi_alloc_chan");
    }
    if (((arg2 & 1U) == 0) || (iVar11 = sym.gpi_send_cmd(arg1_00,arg1,0), iVar11 == 0)) {
        if (iVar13 != 0) {
            sym.writel_relaxed(iVar5 << 0x18 | iVar6 << 3 | 2,iVar13);
            sym.writel_relaxed(uVar7,iVar13 + 4);
            sym.writel_relaxed(uVar2,iVar13 + 8);
            sym.writel_relaxed(uVar8,iVar13 + 0xc);
            if ((iVar1 != 0) && (sym.writel_relaxed(uVar8,iVar1 + 4), iVar14 != 0)) {
                iVar5 = iVar3 * 0x80 + iVar9 * 0x4000;
                sym.writel_relaxed(iVar4 << 4 | (iVar3 == 0) << 0x10 | uVar10,iVar14 + (iVar5 + 0x20060));
                sym.writel_relaxed(0,iVar14 + (iVar5 + 0x20064));
                sym.writel_relaxed(0,iVar14 + (iVar5 + 0x20068));
                sym.writel_relaxed(0,iVar14 + (iVar5 + 0x2006c));
                sym.writel_relaxed(1,iVar14 + (iVar5 + 0x2005c));
            }
        }
        DataSynchronizationBarrier(3,2,0);
        iVar11 = 0;
    }
    else {
        if (arg1_00[0x131] < 2) {
            iVar13 = *(arg1_00 + 0x12e);
        }
        else {
            _printk(0x8001b8b,arg1_00 + 0x133,*(arg1 + 0x100),"gpi_alloc_chan","CH ALLOCATE",iVar11);
            iVar13 = *(arg1_00 + 0x12e);
        }
        if ((iVar13 != 0) && (1 < arg1_00[0x130])) {
            ipc_log_string(iVar13,"ch:%u %s: Error with cmd:%s ret:%d\n",*(arg1 + 0x100),"gpi_alloc_chan",
                           "CH ALLOCATE",iVar11);
        }
    }
    return iVar11;
}


// ===== sym.gpi_start_chan @ 0x08004548 (size 332) =====

int sym.gpi_start_chan(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x110);
    if (*(arg1_00 + 0x4c4) < 3) {
        iVar2 = *(arg1_00 + 0x4b8);
    }
    else {
        _printk(0x80010a9,arg1_00 + 0x4cc,*(arg1 + 0x100),"gpi_start_chan");
        iVar2 = *(arg1_00 + 0x4b8);
    }
    if ((iVar2 != 0) && (2 < *(arg1_00 + 0x4c0))) {
        ipc_log_string(iVar2,"ch:%u %s: Enter\n",*(arg1 + 0x100),"gpi_start_chan");
    }
    iVar1 = sym.gpi_send_cmd(arg1_00,arg1,1);
    if (iVar1 == 0) {
        _raw_write_lock_irq(arg1_00 + 0x414);
        *(arg1 + 0x11c) = 3;
        _raw_write_unlock_irq(arg1_00 + 0x414);
    }
    else {
        if (*(arg1_00 + 0x4c4) < 2) {
            iVar2 = *(arg1_00 + 0x4b8);
        }
        else {
            _printk(0x8001b8b,arg1_00 + 0x4cc,*(arg1 + 0x100),"gpi_start_chan","CH START",iVar1);
            iVar2 = *(arg1_00 + 0x4b8);
        }
        if ((iVar2 != 0) && (1 < *(arg1_00 + 0x4c0))) {
            ipc_log_string(iVar2,"ch:%u %s: Error with cmd:%s ret:%d\n",*(arg1 + 0x100),"gpi_start_chan","CH START"
                           ,iVar1);
        }
    }
    return iVar1;
}


// ===== sym.gpi_desc_free @ 0x08004694 (size 36) =====

void sym.gpi_desc_free(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.gpi_prep_slave_sg @ 0x080046b8 (size 1204) =====

int64_t sym.gpi_prep_slave_sg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    ulong *puVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int iVar8;
    uint in_w4;
    ulong uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    int iVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    int64_t *piVar15;
    ulong *puVar16;
    ulong *puVar17;
    ulong *puVar18;
    int64_t iVar19;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar19 = *(arg1 + 0x110);
    iVar8 = arg3;
    *(arg1 + 0x1b4) = iVar8;
    if (arg4 - 1U < 2) {
        uVar10 = *(arg1 + 0x180);
        uVar1 = *(arg1 + 0x188);
        if (uVar10 < uVar1) {
            uVar14 = *(arg1 + 0x194);
            iVar12 = 0;
            if (uVar14 != 0) {
                iVar12 = (uVar1 - uVar10) / uVar14;
            }
        }
        else {
            uVar14 = *(arg1 + 0x194);
            uVar11 = uVar14;
            iVar12 = 0;
            if (uVar11 != 0) {
                iVar12 = (uVar1 - *(arg1 + 0x178)) / uVar11;
            }
            iVar3 = 0;
            if (uVar11 != 0) {
                iVar3 = ((*(arg1 + 0x178) + *(arg1 + 400)) - uVar10) / uVar11;
            }
            iVar12 = iVar12 + iVar3;
        }
        if (iVar8 != 0) {
            uVar13 = iVar12 - 1;
            uVar5 = 0;
            if (uVar14 != 0) {
                uVar5 = *(arg2 + 0xc) / uVar14;
            }
            iVar6 = sg_next(arg2);
            iVar12 = iVar8;
            while (iVar12 = iVar12 + -1, iVar12 != 0) {
                uVar14 = 0;
                if (*(arg1 + 0x194) != 0) {
                    uVar14 = *(iVar6 + 0xc) / *(arg1 + 0x194);
                }
                uVar5 = uVar14 + uVar5;
                iVar6 = sg_next();
            }
            if (uVar13 < uVar5) {
                if (*(iVar19 + 0x4c4) < 2) {
                    iVar6 = *(iVar19 + 0x4b8);
                }
                else {
                    _printk(0x8000d3c,iVar19 + 0x4cc,*(arg1 + 0x100),"gpi_prep_slave_sg",uVar13,uVar5);
                    iVar6 = *(iVar19 + 0x4b8);
                }
                if (iVar6 == 0) {
                    return 0;
                }
                if (*(iVar19 + 0x4c0) < 2) {
                    return 0;
                }
                ipc_log_string(iVar6,"ch:%u %s: not enough space in ring, avail:%u required:%u\n",*(arg1 + 0x100),
                               "gpi_prep_slave_sg",uVar13,uVar5);
                return 0;
            }
        }
        iVar6 = kmem_cache_alloc_trace(_vchan_tx_submit,0xb20,0xc0);
        if (iVar6 != 0) {
            if (iVar8 == 0) {
                puVar16 = NULL;
            }
            else {
                iVar12 = 0;
                puVar16 = NULL;
                do {
                    puVar18 = ((*arg2 & 0x3ffffffffffc0) << 6 | 0xff00000000000000) + *(arg2 + 8);
                    if (iVar8 == 1) {
                        *(arg1 + 0x1b0) = *(puVar18 + 0xe) == '0';
                    }
                    if (iVar12 == iVar8 + -1) {
                        *(iVar19 + 0x658) = *(puVar18 + 0xe) == '1';
                    }
                    if (*(arg2 + 0xc) != 0) {
                        uVar14 = 0;
                        puVar17 = puVar16;
                        do {
                            puVar16 = *(arg1 + 0x180);
                            puVar2 = *(arg1 + 0x188);
                            if (puVar16 < puVar2) {
                                uVar10 = *(arg1 + 0x194);
                                iVar3 = 0;
                                if (uVar10 != 0) {
                                    iVar3 = (puVar2 - puVar16) / uVar10;
                                }
                                if (0 < iVar3 + -1) goto code_r0x08004938;
code_r0x080049a0:
                                if (*(iVar19 + 0x4c4) == 0) {
                                    iVar7 = *(iVar19 + 0x4b8);
                                }
                                else {
                                    _printk(0x8000406,iVar19 + 0x4cc,*(arg1 + 0x100),"gpi_queue_xfer");
                                    iVar7 = *(iVar19 + 0x4b8);
                                }
                                puVar16 = puVar17;
                                if ((iVar7 != 0) && (*(iVar19 + 0x4c0) != 0)) {
                                    ipc_log_string(iVar7,"ch:%u %s: Error adding ring element to xfer ring\n",
                                                   *(arg1 + 0x100),"gpi_queue_xfer");
                                }
                            }
                            else {
                                uVar10 = *(arg1 + 0x194);
                                iVar3 = 0;
                                if (uVar10 != 0) {
                                    iVar3 = (puVar2 - *(arg1 + 0x178)) / uVar10;
                                }
                                iVar4 = 0;
                                if (uVar10 != 0) {
                                    iVar4 = ((*(arg1 + 0x178) + *(arg1 + 400)) - puVar16) / uVar10;
                                }
                                if (iVar3 + iVar4 + -1 < 1) goto code_r0x080049a0;
code_r0x08004938:
                                uVar1 = puVar16 + uVar10;
                                if (*(arg1 + 0x178) + *(arg1 + 400) <= puVar16 + uVar10) {
                                    uVar1 = *(arg1 + 0x178);
                                }
                                *(arg1 + 0x180) = uVar1;
                                DataMemoryBarrier(2,2);
                                uVar9 = puVar18[1];
                                *puVar16 = *puVar18;
                                puVar16[1] = uVar9;
                            }
                            uVar14 = *(arg1 + 0x194) + uVar14;
                            puVar18 = puVar18 + *(arg1 + 0x194);
                            puVar17 = puVar16;
                        } while (uVar14 < *(arg2 + 0xc));
                    }
                    iVar12 = iVar12 + 1;
                    arg2 = sg_next(arg2);
                } while (iVar12 != iVar8);
            }
            uVar9 = *(arg1 + 0x180);
            *(iVar6 + 0xb8) = arg1;
            *(iVar6 + 0xa8) = puVar16;
            *(iVar6 + 0xb0) = uVar9;
            dma_async_tx_descriptor_init(iVar6,arg1);
            *(iVar6 + 0x90) = 0;
            *(iVar6 + 4) = in_w4;
            *(iVar6 + 0x18) = sym.vchan_tx_submit.cfi_jt;
            *(iVar6 + 0x20) = sym.vchan_tx_desc_free.cfi_jt;
            uVar9 = _raw_spin_lock_irqsave(arg1 + 0xa0);
            piVar15 = *(arg1 + 0xb0);
            iVar19 = iVar6 + 0x98;
            uVar10 = __list_add_valid(iVar19,piVar15,arg1 + 0xa8);
            if ((uVar10 & 1) != 0) {
                *(arg1 + 0xb0) = iVar19;
                *(iVar6 + 0x98) = arg1 + 0xa8;
                *(iVar6 + 0xa0) = piVar15;
                *piVar15 = iVar19;
            }
            _raw_spin_unlock_irqrestore(arg1 + 0xa0,uVar9);
            return iVar6;
        }
        if (*(iVar19 + 0x4c4) < 2) {
            iVar6 = *(iVar19 + 0x4b8);
        }
        else {
            _printk(0x80020f7,iVar19 + 0x4cc,*(arg1 + 0x100),"gpi_prep_slave_sg");
            iVar6 = *(iVar19 + 0x4b8);
        }
        if ((iVar6 != 0) && (1 < *(iVar19 + 0x4c0))) {
            ipc_log_string(iVar6,"ch:%u %s: out of memory for descriptor\n",*(arg1 + 0x100),"gpi_prep_slave_sg");
        }
    }
    else {
        if (*(iVar19 + 0x4c4) < 2) {
            iVar6 = *(iVar19 + 0x4b8);
        }
        else {
            _printk(0x800191d,iVar19 + 0x4cc,*(arg1 + 0x100),"gpi_prep_slave_sg",arg4 & 0xffffffffU);
            iVar6 = *(iVar19 + 0x4b8);
        }
        if ((iVar6 != 0) && (1 < *(iVar19 + 0x4c0))) {
            ipc_log_string(iVar6,"ch:%u %s: invalid dma direction: %d\n",*(arg1 + 0x100),"gpi_prep_slave_sg",
                           arg4 & 0xffffffffU);
        }
    }
    return 0;
}


// ===== sym.readl_relaxed @ 0x08004b6c (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8004b70);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8004ba4);
    return uVar1;
}


// ===== sym.writel_relaxed @ 0x08004bdc (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8004bf8);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8004c20);
    return;
}


// ===== sym.gpi_probe @ 0x08004c54 (size 2360) =====

int sym.gpi_probe(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    char cVar3;
    code *pcVar4;
    bool bVar5;
    int iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t iVar9;
    char *pcVar10;
    uint64_t uVar11;
    ulong uVar12;
    uint64_t *puVar13;
    int64_t iVar14;
    int64_t iVar15;
    ulong *in_x18;
    uint32_t uVar16;
    int iVar17;
    uint32_t *puVar18;
    ulong unaff_x30;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_6c = 0;
    iVar7 = devm_kmalloc(arg1 + 0x10,0x218,0xdc0);
    if (iVar7 == 0) {
code_r0x08005228:
        iVar6 = -0xc;
    }
    else {
        uVar11 = _segment.ehdr;
        uVar16 = _segment.ehdr + 1;
        bVar5 = 4 < _segment.ehdr;
        _segment.ehdr = uVar16;
        if (bVar5) goto code_r0x08005564;
        *(iVar7 + 0x1b0) = arg1 + 0x10;
        *(reloc.gpi_probe.59fdd2041444ad0be5a5134da8e511aa.cfi_jt + uVar11 * 8) = iVar7;
        *(iVar7 + 0x20c) = 1;
        piVar8 = platform_get_resource_byname(arg1,0x200,"gpi-top");
        *(iVar7 + 0x1b8) = piVar8;
        if (piVar8 == NULL) {
            if (*(iVar7 + 0x20c) < 2) {
                iVar9 = *(iVar7 + 0x200);
            }
            else {
                _dev_err(*(iVar7 + 0x1b0),"%s: missing \'reg\' DT node\n","gpi_probe");
                iVar9 = *(iVar7 + 0x200);
            }
            if ((iVar9 == 0) || (*(iVar7 + 0x208) < 2)) {
                iVar6 = -0x16;
            }
            else {
                ipc_log_string(iVar9,"%s: missing \'reg\' DT node\n","gpi_probe");
                iVar6 = -0x16;
            }
        }
        else {
            iVar9 = devm_ioremap(*(iVar7 + 0x1b0),*piVar8,(piVar8[1] - *piVar8) + 1);
            *(iVar7 + 0x1c0) = iVar9;
            if (iVar9 == 0) {
                if (*(iVar7 + 0x20c) < 2) {
                    iVar9 = *(iVar7 + 0x200);
                }
                else {
                    _dev_err(*(iVar7 + 0x1b0),"%s: IO remap failed\n","gpi_probe");
                    iVar9 = *(iVar7 + 0x200);
                }
                if ((iVar9 == 0) || (*(iVar7 + 0x208) < 2)) {
                    iVar6 = -0xe;
                }
                else {
                    ipc_log_string(iVar9,"%s: IO remap failed\n","gpi_probe");
                    iVar6 = -0xe;
                }
            }
            else {
                *(iVar7 + 0x1c8) = iVar9;
                iVar6 = of_property_read_variable_u32_array
                                  (*(*(iVar7 + 0x1b0) + 0x2f0),"qcom,max-num-gpii",iVar7 + 0x1d0,1,0);
                if (iVar6 < 0) {
                    if (*(iVar7 + 0x20c) < 2) {
                        iVar9 = *(iVar7 + 0x200);
                    }
                    else {
                        _dev_err(*(iVar7 + 0x1b0),"%s: missing \'max-no-gpii\' DT node\n","gpi_probe");
                        iVar9 = *(iVar7 + 0x200);
                    }
                    if ((iVar9 != 0) && (1 < *(iVar7 + 0x208))) {
                        pcVar10 = "%s: missing \'max-no-gpii\' DT node\n";
code_r0x08004f88:
                        ipc_log_string(iVar9,pcVar10,"gpi_probe");
                    }
                }
                else {
                    iVar6 = of_property_read_variable_u32_array
                                      (*(*(iVar7 + 0x1b0) + 0x2f0),"qcom,gpii-mask",iVar7 + 0x1d4,1,0);
                    if (iVar6 < 0) {
                        if (*(iVar7 + 0x20c) < 2) {
                            iVar9 = *(iVar7 + 0x200);
                        }
                        else {
                            _dev_err(*(iVar7 + 0x1b0),"%s: missing \'gpii-mask\' DT node\n","gpi_probe");
                            iVar9 = *(iVar7 + 0x200);
                        }
                        if ((iVar9 != 0) && (1 < *(iVar7 + 0x208))) {
                            pcVar10 = "%s: missing \'gpii-mask\' DT node\n";
                            goto code_r0x08004f88;
                        }
                    }
                    else {
                        iVar6 = of_property_read_variable_u32_array
                                          (*(*(iVar7 + 0x1b0) + 0x2f0),"qcom,static-gpii-mask",iVar7 + 0x1d8,1,0);
                        if (((-1 < iVar6) && (*(iVar7 + 0x200) != 0)) && (*(iVar7 + 0x208) != 0)) {
                            ipc_log_string(*(iVar7 + 0x200),"%s: static GPII usecase\n","gpi_probe");
                        }
                        iVar6 = of_property_read_variable_u32_array
                                          (*(*(iVar7 + 0x1b0) + 0x2f0),"qcom,gpi-ee-offset",&uStack_6c,1,0);
                        if (iVar6 < 0) {
                            if ((*(iVar7 + 0x200) != 0) && (*(iVar7 + 0x208) != 0)) {
                                ipc_log_string(*(iVar7 + 0x200),"%s: No variable ee offset present\n","gpi_probe");
                            }
                        }
                        else {
                            *(iVar7 + 0x1c8) = *(iVar7 + 0x1c8) - uStack_6c;
                        }
                        iVar6 = of_property_read_variable_u32_array
                                          (*(*(iVar7 + 0x1b0) + 0x2f0),"qcom,ev-factor",iVar7 + 0x1dc,1,0);
                        if (iVar6 < 0) {
                            if (*(iVar7 + 0x20c) < 2) {
                                iVar9 = *(iVar7 + 0x200);
                            }
                            else {
                                _dev_err(*(iVar7 + 0x1b0),"%s: missing \'qcom,ev-factor\' DT node\n","gpi_probe");
                                iVar9 = *(iVar7 + 0x200);
                            }
                            if ((iVar9 != 0) && (1 < *(iVar7 + 0x208))) {
                                pcVar10 = "%s: missing \'qcom,ev-factor\' DT node\n";
                                goto code_r0x08004f88;
                            }
                        }
                        else {
                            iVar6 = dma_set_mask(*(iVar7 + 0x1b0),0xffffffffffffffff);
                            if (iVar6 == 0) {
                                iVar9 = devm_kmalloc(*(iVar7 + 0x1b0),*(iVar7 + 0x1d0) * 0x660,0xdc0);
                                *(iVar7 + 0x1f8) = iVar9;
                                if (iVar9 == 0) goto code_r0x08005228;
                                *(iVar7 + 0x10) = iVar7 + 0x10;
                                *(iVar7 + 0x18) = iVar7 + 0x10;
                                if (*(iVar7 + 0x1d0) != 0) {
                                    iVar17 = 0;
                                    uVar16 = 0;
                                    while( true ) {
                                        puVar18 = iVar9 + uVar16 * 0x660;
                                        *(puVar18 + 0x65a) = 1;
                                        uVar2 = 1 << (uVar16 & 0x1f);
                                        if (((*(iVar7 + 0x1d4) & uVar2) != 0) || ((*(iVar7 + 0x1d8) & uVar2) != 0)) {
                                            iVar15 = iVar9 + uVar16 * 0x660;
                                            iVar1 = *(iVar7 + 0x1c8) + iVar17 + 0x21000;
                                            *(iVar15 + 0x398) = iVar1;
                                            iVar14 = *(iVar7 + 0x1c8);
                                            *(iVar15 + 0x3a8) = iVar1 + 8;
                                            *(iVar15 + 0x3b0) = iVar1 + 0x10;
                                            *(iVar15 + 0x3b8) = iVar1 + 0x18;
                                            *(iVar15 + 0x3a0) = iVar14 + (iVar17 + 0x22100);
                                            *(iVar15 + 0x3c0) = *(iVar7 + 0x1c8) + iVar17 + 0x23010;
                                            *(iVar15 + 0x3c8) = *(iVar7 + 0x1c8) + iVar17 + 0x230b0;
                                            *(iVar15 + 0x3d0) = *(iVar7 + 0x1c8) + iVar17 + 0x230c0;
                                            iVar6 = platform_get_irq(arg1,uVar16);
                                            if (iVar6 < 0) {
                                                if (*(iVar7 + 0x20c) < 2) {
                                                    iVar9 = *(iVar7 + 0x200);
                                                }
                                                else {
                                                    _dev_err(*(iVar7 + 0x1b0),
                                                             "%s: could not req. irq for gpii%d ret:%d","gpi_probe",
                                                             uVar16,iVar6);
                                                    iVar9 = *(iVar7 + 0x200);
                                                }
                                                if ((iVar9 != 0) && (1 < *(iVar7 + 0x208))) {
                                                    ipc_log_string(iVar9,"%s: could not req. irq for gpii%d ret:%d",
                                                                   "gpi_probe",uVar16,iVar6);
                                                }
                                                goto code_r0x08005350;
                                            }
                                            iVar9 = iVar9 + uVar16 * 0x660;
                                            *(iVar9 + 0x388) = iVar6;
                                            iVar1 = *(iVar7 + 0x1c8) + iVar17 + 0x20000;
                                            *(iVar9 + 0x128) = iVar1;
                                            *(iVar9 + 0x130) = *(iVar7 + 0x1c8) + iVar17 + 0x22000;
                                            *(iVar9 + 0x138) = iVar1 + 8;
                                            *(iVar9 + 0x140) = iVar1 + 0x10;
                                            *(iVar9 + 0x148) = iVar1 + 0x18;
                                            *(iVar9 + 0x150) = *(iVar7 + 0x1c8) + iVar17 + 0x23008;
                                            vchan_init(iVar9 + 8,iVar7);
                                            *(iVar9 + 0x108) = 0;
                                            *(iVar9 + 0x118) = puVar18;
                                            *(iVar9 + 0x15c) = 1;
                                            *(iVar9 + 0xa0) = sym.gpi_desc_free.cfi_jt;
                                            iVar1 = *(iVar7 + 0x1c8) + (iVar17 + 0x20000 | 0x80U);
                                            *(iVar9 + 0x2e0) = iVar1;
                                            iVar14 = *(iVar7 + 0x1c8);
                                            *(iVar9 + 0x2f0) = iVar1 + 8;
                                            *(iVar9 + 0x2f8) = iVar1 + 0x10;
                                            *(iVar9 + 0x300) = iVar1 + 0x18;
                                            *(iVar9 + 0x2e8) = iVar14 + (iVar17 + 0x22000 | 8U);
                                            *(iVar9 + 0x308) = *(iVar7 + 0x1c8) + iVar17 + 0x23008;
                                            vchan_init(iVar9 + 0x1c0,iVar7);
                                            *(iVar9 + 0x2c0) = 1;
                                            *(iVar9 + 600) = sym.gpi_desc_free.cfi_jt;
                                            *(iVar9 + 0x2d0) = puVar18;
                                            *(iVar9 + 0x314) = 0;
                                            __mutex_init(iVar9 + 0x3d8,"&gpii->ctrl_lock",obj.gpi_probe.__key);
                                            *(iVar9 + 0x414) = 0;
                                            tasklet_init(iVar9 + 0x468,
                                                         sym.gpi_ev_tasklet.59fdd2041444ad0be5a5134da8e511aa.cfi_jt,
                                                         puVar18);
                                            *(iVar9 + 0x490) = 0;
                                            __init_swait_queue_head(iVar9 + 0x498,"&x->wait",obj.gpi_probe.__key);
                                            *puVar18 = uVar16;
                                            uVar12 = *(iVar7 + 0x1c8);
                                            *(iVar9 + 0x378) = iVar7;
                                            *(iVar9 + 0x390) = uVar12;
                                            *(iVar9 + 0x4c8) = 0;
                                        }
                                        uVar16 = uVar16 + 1;
                                        if (*(iVar7 + 0x1d0) <= uVar16) break;
                                        iVar9 = *(iVar7 + 0x1f8);
                                        iVar17 = iVar17 + 0x4000;
                                    }
                                }
                                *(arg1 + 0xa8) = iVar7;
                                puVar13 = iVar7 + 0x48;
                                *puVar13 = 0;
                                Hint_Prefetch(puVar13,2,0,1);
                                do {
                                    cVar3 = '\x01';
                                    bVar5 = ExclusiveMonitorPass(puVar13,0x10);
                                    if (bVar5) {
                                        *puVar13 = *puVar13 | 0x400;
                                        cVar3 = ExclusiveMonitorsStatus();
                                    }
                                } while (cVar3 != '\0');
                                *(iVar7 + 0xdc) = 0;
                                *(iVar7 + 200) = 6;
                                *(iVar7 + 0xc0) = 0x800000008;
                                *(iVar7 + 0xe0) = sym.gpi_alloc_chan_resources.59fdd2041444ad0be5a5134da8e511aa.cfi_jt;
                                *(iVar7 + 0xf0) = sym.gpi_free_chan_resources.59fdd2041444ad0be5a5134da8e511aa.cfi_jt;
                                *(iVar7 + 0x188) = sym.dma_cookie_status.59fdd2041444ad0be5a5134da8e511aa.cfi_jt;
                                *(iVar7 + 400) = sym.gpi_issue_pending.59fdd2041444ad0be5a5134da8e511aa.cfi_jt;
                                *(iVar7 + 0x138) = sym.gpi_prep_slave_sg.cfi_jt;
                                *(iVar7 + 0x70) = *(iVar7 + 0x1b0);
                                *(iVar7 + 0x160) = sym.gpi_config.59fdd2041444ad0be5a5134da8e511aa.cfi_jt;
                                *(iVar7 + 0x168) = sym.gpi_pause.59fdd2041444ad0be5a5134da8e511aa.cfi_jt;
                                *(iVar7 + 0x170) = sym.gpi_resume.59fdd2041444ad0be5a5134da8e511aa.cfi_jt;
                                *(iVar7 + 0x178) = sym.gpi_terminate_all.cfi_jt;
                                iVar6 = dma_async_device_register(iVar7);
                                if (iVar6 == 0) {
                                    iVar6 = of_dma_controller_register
                                                      (*(*(iVar7 + 0x1b0) + 0x2f0),
                                                       sym.gpi_of_dma_xlate.59fdd2041444ad0be5a5134da8e511aa.cfi_jt,
                                                       iVar7);
                                    if (iVar6 == 0) {
                                        sym.gpi_setup_debug(iVar7);
                                        if ((*(iVar7 + 0x200) != 0) && (*(iVar7 + 0x208) != 0)) {
                                            ipc_log_string(*(iVar7 + 0x200),"%s: probe success\n","gpi_probe");
                                        }
                                        iVar6 = 0;
                                    }
                                    else {
                                        if (*(iVar7 + 0x20c) < 2) {
                                            iVar9 = *(iVar7 + 0x200);
                                        }
                                        else {
                                            _dev_err(*(iVar7 + 0x1b0),"%s: of_dma_controller_reg failed ret:%d",
                                                     "gpi_probe",iVar6);
                                            iVar9 = *(iVar7 + 0x200);
                                        }
                                        if ((iVar9 != 0) && (1 < *(iVar7 + 0x208))) {
                                            pcVar10 = "%s: of_dma_controller_reg failed ret:%d";
                                            goto code_r0x08004e48;
                                        }
                                    }
                                }
                                else {
                                    if (*(iVar7 + 0x20c) < 2) {
                                        iVar9 = *(iVar7 + 0x200);
                                    }
                                    else {
                                        _dev_err(*(iVar7 + 0x1b0),"%s: async_device_register failed ret:%d",
                                                 "gpi_probe",iVar6);
                                        iVar9 = *(iVar7 + 0x200);
                                    }
                                    if ((iVar9 != 0) && (1 < *(iVar7 + 0x208))) {
                                        pcVar10 = "%s: async_device_register failed ret:%d";
code_r0x08004e48:
                                        ipc_log_string(iVar9,pcVar10,"gpi_probe",iVar6);
                                    }
                                }
                            }
                            else {
                                if (*(iVar7 + 0x20c) < 2) {
                                    iVar9 = *(iVar7 + 0x200);
                                }
                                else {
                                    _dev_err(*(iVar7 + 0x1b0),"%s: Error setting dma_mask to 64, ret:%d\n","gpi_probe"
                                             ,iVar6);
                                    iVar9 = *(iVar7 + 0x200);
                                }
                                if ((iVar9 != 0) && (1 < *(iVar7 + 0x208))) {
                                    pcVar10 = "%s: Error setting dma_mask to 64, ret:%d\n";
                                    goto code_r0x08004e48;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
code_r0x08005350:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return iVar6;
    }
    __stack_chk_fail();
code_r0x08005564:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8005568);
    (*pcVar4)();
}


// ===== sym.gpi_remove @ 0x0800558c (size 324) =====

ulong sym.gpi_remove(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    bool bVar4;
    uint32_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0xa8);
    of_dma_controller_free(*(*(iVar6 + 0x1b0) + 0x2f0));
    dma_async_device_unregister(iVar6);
    if (*(iVar6 + 0x1d0) != 0) {
        uVar5 = 0;
        do {
            uVar1 = 1 << (uVar5 & 0x1f);
            if (((*(iVar6 + 0x1d4) & uVar1) != 0) || ((*(iVar6 + 0x1d8) & uVar1) != 0)) {
                iVar7 = *(iVar6 + 0x1f8) + uVar5 * 0x660;
                sym.gpi_free_chan_resources(iVar7 + 8);
                sym.gpi_free_chan_resources(iVar7 + 0x1c0);
                if (*(iVar7 + 0x4b8) != 0) {
                    ipc_log_context_destroy();
                }
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(iVar6 + 0x1d0));
    }
    iVar2 = _segment.ehdr;
    if ((((0 < _segment.ehdr) && (bVar4 = _segment.ehdr != 1, _segment.ehdr = 0, bVar4)) &&
        (_segment.ehdr = 0, iVar2 != 2)) &&
       (((_segment.ehdr = 0, iVar2 != 3 && (_segment.ehdr = 0, iVar2 != 4)) && (_segment.ehdr = 0, iVar2 != 5)))) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x80056d0);
        (*pcVar3)();
    }
    _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
    if (*(iVar6 + 0x200) != 0) {
        ipc_log_context_destroy();
    }
    debugfs_remove(_segment.ehdr);
    return 0;
}


// ===== sym.gpi_ev_tasklet @ 0x080056d0 (size 280) =====

void sym.gpi_ev_tasklet(int64_t arg1)

{
    int64_t iVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x414;
    _raw_read_lock_bh(iVar1);
    if (*(arg1 + 0x410) < 2) {
        _raw_read_unlock_bh(iVar1);
        if (*(arg1 + 0x4c4) < 2) {
            iVar1 = *(arg1 + 0x4b8);
        }
        else {
            if (*(arg1 + 0x410) < 6) {
                pcVar2 = *(obj.gpi_pm_state_str + *(arg1 + 0x410) * 8);
            }
            else {
                pcVar2 = "INVALID";
            }
            _printk(0x80007f3,arg1 + 0x4cc,99,"gpi_ev_tasklet",pcVar2);
            iVar1 = *(arg1 + 0x4b8);
        }
        if ((iVar1 != 0) && (1 < *(arg1 + 0x4c0))) {
            if (*(arg1 + 0x410) < 6) {
                pcVar2 = *(obj.gpi_pm_state_str + *(arg1 + 0x410) * 8);
            }
            else {
                pcVar2 = "INVALID";
            }
            ipc_log_string(iVar1,"ch:%u %s: not processing any events, pm_state:%s\n",99,"gpi_ev_tasklet",pcVar2);
        }
    }
    else {
        sym.gpi_process_events(arg1);
        sym.gpi_config_interrupts(arg1,1,1);
        _raw_read_unlock_bh(iVar1);
    }
    return;
}


// ===== sym.gpi_alloc_chan_resources @ 0x080057e8 (size 304) =====

int sym.gpi_alloc_chan_resources(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t arg3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3 = *(arg1 + 0x110);
    if (*(arg3 + 0x4c4) < 3) {
        iVar2 = *(arg3 + 0x4b8);
    }
    else {
        _printk(0x80018e2,arg3 + 0x4cc,*(arg1 + 0x100),"gpi_alloc_chan_resources");
        iVar2 = *(arg3 + 0x4b8);
    }
    if ((iVar2 != 0) && (2 < *(arg3 + 0x4c0))) {
        ipc_log_string(iVar2,"ch:%u %s: enter\n",*(arg1 + 0x100),"gpi_alloc_chan_resources");
    }
    mutex_lock(arg3 + 0x3d8);
    iVar1 = sym.gpi_alloc_ring(arg1 + 0x158,*(arg1 + 0x150),arg3);
    if (iVar1 != 0) {
        if (*(arg3 + 0x4c4) < 2) {
            iVar2 = *(arg3 + 0x4b8);
        }
        else {
            _printk(0x8001792,arg3 + 0x4cc,*(arg1 + 0x100),"gpi_alloc_chan_resources",iVar1);
            iVar2 = *(arg3 + 0x4b8);
        }
        if ((iVar2 != 0) && (1 < *(arg3 + 0x4c0))) {
            ipc_log_string(iVar2,"ch:%u %s: error allocating xfer ring, ret:%d\n",*(arg1 + 0x100),
                           "gpi_alloc_chan_resources",iVar1);
        }
    }
    mutex_unlock(arg3 + 0x3d8);
    return iVar1;
}


// ===== sym.gpi_free_chan_resources @ 0x08005918 (size 1288) =====

//WARNING: Type propagation algorithm not settling

ulong sym.gpi_free_chan_resources(int64_t arg1)

{
    int64_t *piVar1;
    int iVar2;
    int64_t ******ppppppiVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    int iVar8;
    int *piVar9;
    int64_t *******pppppppiVar10;
    ulong *in_x18;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [12];
    int64_t *******pppppppiStack_58;
    int64_t *******pppppppiStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_48 = *(iVar11 + 0x5e0);
    iVar11 = *(arg1 + 0x110);
    if (*(iVar11 + 0x4c4) < 3) {
        iVar5 = *(iVar11 + 0x4b8);
    }
    else {
        _printk(0x80018e2,iVar11 + 0x4cc,*(arg1 + 0x100),"gpi_free_chan_resources");
        iVar5 = *(iVar11 + 0x4b8);
    }
    if ((iVar5 != 0) && (2 < *(iVar11 + 0x4c0))) {
        ipc_log_string(iVar5,"ch:%u %s: enter\n",*(arg1 + 0x100),"gpi_free_chan_resources");
    }
    mutex_lock(iVar11 + 0x3d8);
    iVar5 = iVar11 + 0x414;
    iVar4 = *(arg1 + 0x11c);
    _raw_write_lock_irq(iVar5);
    *(arg1 + 0x11c) = 4;
    _raw_write_unlock_irq(iVar5);
    if (iVar4 == 3) {
        iVar4 = sym.gpi_send_cmd(iVar11,arg1,2);
        if (iVar4 != 0) {
            if (*(iVar11 + 0x4c4) < 2) {
                iVar6 = *(iVar11 + 0x4b8);
            }
            else {
                _printk(0x80019af,iVar11 + 0x4cc,*(arg1 + 0x100),"gpi_free_chan_resources",iVar4);
                iVar6 = *(iVar11 + 0x4b8);
            }
            if ((iVar6 != 0) && (1 < *(iVar11 + 0x4c0))) {
                ipc_log_string(iVar6,"ch:%u %s: error stopping channel:%d\n",*(arg1 + 0x100),
                               "gpi_free_chan_resources",iVar4);
            }
        }
        iVar4 = sym.gpi_send_cmd(iVar11,arg1,3);
        if (iVar4 != 0) {
            if (*(iVar11 + 0x4c4) < 2) {
                iVar6 = *(iVar11 + 0x4b8);
            }
            else {
                _printk(0x800183a,iVar11 + 0x4cc,*(arg1 + 0x100),"gpi_free_chan_resources",iVar4);
                iVar6 = *(iVar11 + 0x4b8);
            }
            if ((iVar6 != 0) && (1 < *(iVar11 + 0x4c0))) {
                ipc_log_string(iVar6,"ch:%u %s: error resetting channel:%d\n",*(arg1 + 0x100),
                               "gpi_free_chan_resources",iVar4);
            }
        }
        sym.gpi_reset_chan(arg1,4);
    }
    piVar9 = *(arg1 + 0x158);
    dma_free_attrs(*(*(iVar11 + 0x378) + 0x1b0),*(arg1 + 0x160),piVar9,*(arg1 + 0x170),0);
    *(arg1 + 400) = 0;
    *(arg1 + 0x198) = 0;
    *(arg1 + 0x180) = 0;
    *(arg1 + 0x188) = 0;
    *(arg1 + 0x170) = 0;
    *(arg1 + 0x178) = 0;
    *(arg1 + 0x160) = 0;
    *(arg1 + 0x168) = 0;
    *(arg1 + 0x158) = 0;
    pppppppiStack_58 = &pppppppiStack_58;
    pppppppiStack_50 = &pppppppiStack_58;
    uVar7 = _raw_spin_lock_irqsave(arg1 + 0xa0);
    piVar1 = arg1 + 0xa8;
    if (piVar1 != *piVar1) {
        ppppppiVar3 = *(arg1 + 0xa8);
        pppppppiVar10 = *(arg1 + 0xb0);
        ppppppiVar3[1] = pppppppiStack_50;
        *pppppppiStack_50 = ppppppiVar3;
        *pppppppiVar10 = &pppppppiStack_58;
        *(arg1 + 0xa8) = piVar1;
        *(arg1 + 0xb0) = piVar1;
        pppppppiStack_50 = pppppppiVar10;
    }
    piVar1 = arg1 + 0xb8;
    if (piVar1 != *piVar1) {
        ppppppiVar3 = *(arg1 + 0xb8);
        pppppppiVar10 = *(arg1 + 0xc0);
        ppppppiVar3[1] = pppppppiStack_50;
        *pppppppiStack_50 = ppppppiVar3;
        *pppppppiVar10 = &pppppppiStack_58;
        *(arg1 + 0xb8) = piVar1;
        *(arg1 + 0xc0) = piVar1;
        pppppppiStack_50 = pppppppiVar10;
    }
    piVar1 = arg1 + 200;
    if (piVar1 != *piVar1) {
        ppppppiVar3 = *(arg1 + 200);
        pppppppiVar10 = *(arg1 + 0xd0);
        ppppppiVar3[1] = pppppppiStack_50;
        *pppppppiStack_50 = ppppppiVar3;
        *pppppppiVar10 = &pppppppiStack_58;
        *(arg1 + 200) = piVar1;
        *(arg1 + 0xd0) = piVar1;
        pppppppiStack_50 = pppppppiVar10;
    }
    piVar1 = arg1 + 0xd8;
    if (piVar1 != *piVar1) {
        ppppppiVar3 = *(arg1 + 0xd8);
        pppppppiVar10 = *(arg1 + 0xe0);
        ppppppiVar3[1] = pppppppiStack_50;
        *pppppppiStack_50 = ppppppiVar3;
        *pppppppiVar10 = &pppppppiStack_58;
        *(arg1 + 0xd8) = piVar1;
        *(arg1 + 0xe0) = piVar1;
        pppppppiStack_50 = pppppppiVar10;
    }
    piVar1 = arg1 + 0xe8;
    if (piVar1 != *piVar1) {
        ppppppiVar3 = *(arg1 + 0xe8);
        pppppppiVar10 = *(arg1 + 0xf0);
        ppppppiVar3[1] = pppppppiStack_50;
        *pppppppiStack_50 = ppppppiVar3;
        *pppppppiVar10 = &pppppppiStack_58;
        *(arg1 + 0xe8) = piVar1;
        *(arg1 + 0xf0) = piVar1;
        pppppppiStack_50 = pppppppiVar10;
    }
    for (pppppppiVar10 = pppppppiStack_58; &pppppppiStack_58 != pppppppiVar10; pppppppiVar10 = *pppppppiVar10) {
        *(pppppppiVar10 + -0x94) = *(pppppppiVar10 + -0x94) & 0xffffffbf;
    }
    _raw_spin_unlock_irqrestore(arg1 + 0xa0,uVar7);
    vchan_dma_desc_free_list(arg1,&pppppppiStack_58);
    _raw_write_lock_irq(iVar5);
    *(arg1 + 0x11c) = 0;
    _raw_write_unlock_irq(iVar5);
    if ((*(iVar11 + 0x1a4) == '\0') && (*(iVar11 + 0x35c) == '\0')) {
        if (*(iVar11 + 0x4c4) < 3) {
            iVar6 = *(iVar11 + 0x4b8);
        }
        else {
            _printk(0x8001c04,iVar11 + 0x4cc,*(arg1 + 0x100),"gpi_free_chan_resources");
            iVar6 = *(iVar11 + 0x4b8);
        }
        if ((iVar6 != 0) && (2 < *(iVar11 + 0x4c0))) {
            ipc_log_string(iVar6,"ch:%u %s: disabling gpii\n",*(arg1 + 0x100),"gpi_free_chan_resources");
        }
        iVar4 = *(iVar11 + 0x410);
        _raw_write_lock_irq(iVar5);
        *(iVar11 + 0x410) = 4;
        _raw_write_unlock_irq(iVar5);
        tasklet_kill(iVar11 + 0x468);
        if (iVar4 == 3) {
            sym.gpi_send_cmd(iVar11,0,10);
            piVar9 = *(iVar11 + 0x420);
            dma_free_attrs(*(*(iVar11 + 0x378) + 0x1b0),*(iVar11 + 0x428),piVar9,*(iVar11 + 0x438),0);
            *(iVar11 + 0x460) = 0;
            *(iVar11 + 0x458) = 0;
            *(iVar11 + 0x450) = 0;
            *(iVar11 + 0x448) = 0;
            *(iVar11 + 0x440) = 0;
            *(iVar11 + 0x438) = 0;
            *(iVar11 + 0x430) = 0;
            *(iVar11 + 0x428) = 0;
            *(iVar11 + 0x420) = 0;
            sym.gpi_disable_interrupts(iVar11);
        }
        else {
            piVar9 = *(iVar11 + 0x420);
            dma_free_attrs(*(*(iVar11 + 0x378) + 0x1b0),*(iVar11 + 0x428),piVar9,*(iVar11 + 0x438),0);
            *(iVar11 + 0x460) = 0;
            *(iVar11 + 0x458) = 0;
            *(iVar11 + 0x450) = 0;
            *(iVar11 + 0x448) = 0;
            *(iVar11 + 0x440) = 0;
            *(iVar11 + 0x438) = 0;
            *(iVar11 + 0x430) = 0;
            *(iVar11 + 0x428) = 0;
            *(iVar11 + 0x420) = 0;
        }
        _raw_write_lock_irq(iVar5);
        *(iVar11 + 0x410) = 0;
        _raw_write_unlock_irq(iVar5);
    }
    uVar7 = mutex_unlock(iVar11 + 0x3d8);
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_48) {
        return uVar7;
    }
    auVar12 = __stack_chk_fail();
    iVar8 = auVar12._8_4_;
    iVar4 = *(auVar12._0_8_ + 0x10);
    iVar2 = *(auVar12._0_8_ + 0x14);
    if (piVar9 != NULL) {
        *piVar9 = iVar2;
        piVar9[1] = iVar4;
        piVar9[2] = 0;
        piVar9[3] = 0;
    }
    if (iVar4 < iVar2) {
        if (iVar8 <= iVar4) {
            return 1;
        }
    }
    else if (iVar4 < iVar8) {
        return 0;
    }
    if (iVar8 <= iVar2) {
        return 0;
    }
    return 1;
}


// ===== sym.dma_cookie_status @ 0x08005e20 (size 88) =====

ulong sym.dma_cookie_status(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    
    iVar3 = arg2;
    iVar1 = *(arg1 + 0x10);
    iVar2 = *(arg1 + 0x14);
    if (arg3 != 0) {
        *arg3 = iVar2;
        *(arg3 + 4) = iVar1;
        *(arg3 + 8) = 0;
    }
    if (iVar1 < iVar2) {
        if (iVar3 <= iVar1) {
            return 1;
        }
    }
    else if (iVar1 < iVar3) {
        return 0;
    }
    if (iVar3 <= iVar2) {
        return 0;
    }
    return 1;
}


// ===== sym.gpi_issue_pending @ 0x08005e78 (size 232) =====

void sym.gpi_issue_pending(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong uVar6;
    ulong uVar7;
    int64_t *piVar8;
    ulong *in_x18;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x110) + 0x414;
    uVar6 = _raw_read_lock_irqsave(iVar1);
    iVar2 = arg1 + 0xa0;
    uVar7 = _raw_spin_lock_irqsave(iVar2);
    piVar3 = arg1 + 0xb8;
    piVar4 = arg1 + 200;
    if (piVar3 != *piVar3) {
        iVar9 = *(arg1 + 0xb8);
        piVar5 = *(arg1 + 0xc0);
        piVar8 = *(arg1 + 0xd0);
        *(iVar9 + 8) = piVar8;
        *piVar8 = iVar9;
        *piVar5 = piVar4;
        *(arg1 + 0xd0) = piVar5;
        *(arg1 + 0xb8) = piVar3;
        *(arg1 + 0xc0) = piVar3;
    }
    if (piVar4 == *piVar4) {
        _raw_spin_unlock_irqrestore(iVar2,uVar7);
    }
    else {
        iVar9 = *(arg1 + 0xd0);
        _raw_spin_unlock_irqrestore(iVar2,uVar7);
        if (iVar9 != 0x98) {
            sym.writel_relaxed((*(arg1 + 0x168) + *(iVar9 + 0x18)) - *(arg1 + 0x178),*(arg1 + 0x128));
        }
    }
    _raw_read_unlock_irqrestore(iVar1,uVar6);
    return;
}


// ===== sym.gpi_config @ 0x08005f68 (size 2344) =====

int sym.gpi_config(int64_t arg1)

{
    uint32_t uVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t uVar7;
    ulong uVar8;
    ulong *in_x18;
    int64_t arg1_00;
    int *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x110);
    piVar9 = *(arg1 + 0x68);
    uVar7 = *(*(arg1_00 + 0x378) + 0x1dc);
    if (*(arg1_00 + 0x4c4) < 3) {
        iVar5 = *(arg1_00 + 0x4b8);
    }
    else {
        _printk(0x80018e2,arg1_00 + 0x4cc,*(arg1 + 0x100),"gpi_config");
        iVar5 = *(arg1_00 + 0x4b8);
    }
    if ((iVar5 != 0) && (2 < *(arg1_00 + 0x4c0))) {
        ipc_log_string(iVar5,"ch:%u %s: enter\n",*(arg1 + 0x100),"gpi_config");
    }
    if (piVar9 == NULL) {
        if (*(arg1_00 + 0x4c4) < 2) {
            iVar5 = *(arg1_00 + 0x4b8);
        }
        else {
            _printk(0x8000e97,arg1_00 + 0x4cc,*(arg1 + 0x100),"gpi_config");
            iVar5 = *(arg1_00 + 0x4b8);
        }
        if ((iVar5 != 0) && (1 < *(arg1_00 + 0x4c0))) {
            ipc_log_string(iVar5,"ch:%u %s: no config ctrl data provided",*(arg1 + 0x100),"gpi_config");
            return -0x16;
        }
        return -0x16;
    }
    mutex_lock(arg1_00 + 0x3d8);
    if (3 < *piVar9 - 1U) {
        if (*(arg1_00 + 0x4c4) < 2) {
            iVar5 = *(arg1_00 + 0x4b8);
        }
        else {
            _printk(0x8000c5b,arg1_00 + 0x4cc,*(arg1 + 0x100),"gpi_config");
            iVar5 = *(arg1_00 + 0x4b8);
        }
        if ((iVar5 != 0) && (1 < *(arg1_00 + 0x4c0))) {
            ipc_log_string(iVar5,"ch:%u %s: unsupported ctrl cmd:%d\n",*(arg1 + 0x100),"gpi_config",*piVar9);
        }
code_r0x0800618c:
        iVar3 = -0x16;
        goto code_r0x08006284;
    }
    //switch table (4 cases) at 0x8000320
    switch(*((*piVar9 - 1U) + 0x8000320) * 4 + 0x8006010) {
    case 0x8006014:
        if (*(arg1_00 + 0x4c4) < 3) {
            iVar5 = *(arg1_00 + 0x4b8);
        }
        else {
            _printk(0x8000369,arg1_00 + 0x4cc,*(arg1 + 0x100),"gpi_config");
            iVar5 = *(arg1_00 + 0x4b8);
        }
        if ((iVar5 != 0) && (2 < *(arg1_00 + 0x4c0))) {
            ipc_log_string(iVar5,"ch:%u %s: cmd: msm_gpi_init\n",*(arg1 + 0x100),"gpi_config");
        }
        *(arg1 + 0x1a0) = *(piVar9 + 2);
        uVar8 = *(piVar9 + 4);
        *(arg1 + 0x11c) = 1;
        *(arg1 + 0x1a8) = uVar8;
        if ((*(arg1_00 + 0x124) != 1) || (*(arg1_00 + 0x2dc) != 1)) {
            iVar3 = 0;
            goto code_r0x08006284;
        }
        uVar1 = *(arg1_00 + 0x114);
        if (*(arg1_00 + 0x2cc) <= *(arg1_00 + 0x114)) {
            uVar1 = *(arg1_00 + 0x2cc);
        }
        *(arg1_00 + 0x380) = uVar1;
        if (*(arg1_00 + 0x110) != *(arg1_00 + 0x2c8)) {
            if (*(arg1_00 + 0x4c4) < 2) {
                iVar5 = *(arg1_00 + 0x4b8);
            }
            else {
                _printk(0x8000cde,arg1_00 + 0x4cc,*(arg1 + 0x100),"gpi_config");
                iVar5 = *(arg1_00 + 0x4b8);
            }
            if ((iVar5 != 0) && (1 < *(arg1_00 + 0x4c0))) {
                ipc_log_string(iVar5,"ch:%u %s: protocol did not match protocol %u != %u\n",*(arg1 + 0x100),
                               "gpi_config",*(arg1_00 + 0x110),*(arg1_00 + 0x2c8));
            }
            goto code_r0x0800618c;
        }
        uVar1 = *(arg1_00 + 0x158);
        if (*(arg1_00 + 0x158) <= *(arg1_00 + 0x310)) {
            uVar1 = *(arg1_00 + 0x310);
        }
        *(arg1_00 + 900) = *(arg1 + 0x108);
        iVar3 = sym.gpi_alloc_ring(arg1_00 + 0x420,uVar1 << (uVar7 & 0x1f),arg1_00);
        if (iVar3 != 0) {
            if (*(arg1_00 + 0x4c4) < 2) {
                iVar5 = *(arg1_00 + 0x4b8);
            }
            else {
                _printk(0x80012d6,arg1_00 + 0x4cc,*(arg1 + 0x100),"gpi_config");
                iVar5 = *(arg1_00 + 0x4b8);
            }
            if ((iVar5 != 0) && (1 < *(arg1_00 + 0x4c0))) {
                ipc_log_string(iVar5,"ch:%u %s: error allocating mem for ev ring\n",*(arg1 + 0x100),"gpi_config");
            }
            goto code_r0x08006284;
        }
        _raw_write_lock_irq(arg1_00 + 0x414);
        *(arg1_00 + 0x410) = 2;
        _raw_write_unlock_irq(arg1_00 + 0x414);
        iVar3 = sym.gpi_config_interrupts(arg1_00,0,0);
        if (iVar3 == 0) {
            iVar3 = sym.gpi_alloc_ev_chan(arg1_00);
            if (iVar3 == 0) {
                iVar4 = sym.gpi_alloc_chan(arg1_00 + 8,1);
                if (iVar4 == 0) {
                    iVar5 = 1;
                    iVar3 = sym.gpi_alloc_chan(arg1_00 + 0x1c0,1);
                    if (iVar3 != 0) goto code_r0x08006568;
                    iVar4 = sym.gpi_start_chan(arg1_00 + 8);
                    if (iVar4 == 0) {
                        iVar3 = sym.gpi_start_chan(arg1_00 + 0x1c0);
                        if (iVar3 == 0) goto code_r0x08006284;
                        uVar7 = 1;
                    }
                    else {
                        uVar7 = 0;
                        iVar3 = iVar4;
                    }
                    if (*(arg1_00 + 0x4c4) < 2) {
                        iVar5 = *(arg1_00 + 0x4b8);
                    }
                    else {
                        _printk(0x8001b08,arg1_00 + 0x4cc,*(arg1_00 + uVar7 * 0x1b8 + 0x108),"gpi_config",iVar3);
                        iVar5 = *(arg1_00 + 0x4b8);
                    }
                    if ((iVar5 != 0) && (1 < *(arg1_00 + 0x4c0))) {
                        ipc_log_string(iVar5,"ch:%u %s: Error start chan:%d\n",*(arg1_00 + uVar7 * 0x1b8 + 0x108),
                                       "gpi_config",iVar3);
                    }
                    if (iVar4 == 0) {
                        iVar4 = uVar7 - 1;
                        do {
                            sym.gpi_send_cmd(arg1_00,arg1,2);
                            sym.gpi_send_cmd(arg1_00,arg1,3);
                            iVar4 = iVar4 + 1;
                        } while (-1 < iVar4);
                    }
                    bVar2 = true;
                }
                else {
                    iVar5 = 0;
                    iVar3 = iVar4;
code_r0x08006568:
                    if (*(arg1_00 + 0x4c4) < 2) {
                        iVar6 = *(arg1_00 + 0x4b8);
                    }
                    else {
                        _printk(0x8000c35,arg1_00 + 0x4cc,*(arg1_00 + iVar5 * 0x1b8 + 0x108),"gpi_config",iVar3);
                        iVar6 = *(arg1_00 + 0x4b8);
                    }
                    if ((iVar6 != 0) && (1 < *(arg1_00 + 0x4c0))) {
                        ipc_log_string(iVar6,"ch:%u %s: Error allocating chan:%d\n",*(arg1_00 + iVar5 * 0x1b8 + 0x108)
                                       ,"gpi_config",iVar3);
                    }
                    if (iVar4 != 0) goto code_r0x080066d4;
                    bVar2 = false;
                }
                sym.gpi_reset_chan(arg1,4);
                if (bVar2) {
                    sym.gpi_reset_chan(arg1,4);
                }
            }
            else {
                if (*(arg1_00 + 0x4c4) < 2) {
                    iVar5 = *(arg1_00 + 0x4b8);
                }
                else {
                    _printk(0x8000b85,arg1_00 + 0x4cc,*(arg1 + 0x100),"gpi_config",iVar3);
                    iVar5 = *(arg1_00 + 0x4b8);
                }
                if ((iVar5 != 0) && (1 < *(arg1_00 + 0x4c0))) {
                    ipc_log_string(iVar5,"ch:%u %s: error alloc_ev_chan:%d\n",*(arg1 + 0x100),"gpi_config",iVar3);
                }
            }
code_r0x080066d4:
            sym.gpi_disable_interrupts(arg1_00);
        }
        else {
            if (*(arg1_00 + 0x4c4) < 2) {
                iVar5 = *(arg1_00 + 0x4b8);
            }
            else {
                _printk(0x80016b8,arg1_00 + 0x4cc,*(arg1 + 0x100),"gpi_config",iVar3);
                iVar5 = *(arg1_00 + 0x4b8);
            }
            if ((iVar5 != 0) && (1 < *(arg1_00 + 0x4c0))) {
                ipc_log_string(iVar5,"ch:%u %s: error config. interrupts, ret:%d\n",*(arg1 + 0x100),"gpi_config",
                               iVar3);
            }
        }
        sym.gpi_free_ring(arg1_00 + 0x420,arg1_00);
        goto code_r0x08006284;
    case 0x8006198:
        if (*(arg1_00 + 0x4c4) < 3) {
            iVar5 = *(arg1_00 + 0x4b8);
        }
        else {
            _printk(0x8001dbf,arg1_00 + 0x4cc,*(arg1 + 0x100),"gpi_config");
            iVar5 = *(arg1_00 + 0x4b8);
        }
        if ((iVar5 != 0) && (2 < *(arg1_00 + 0x4c0))) {
            ipc_log_string(iVar5,"ch:%u %s: sending UART SW STALE cmd\n",*(arg1 + 0x100),"gpi_config");
        }
        uVar7 = 5;
        break;
    case 0x80061e4:
        if (*(arg1_00 + 0x4c4) < 3) {
            iVar5 = *(arg1_00 + 0x4b8);
        }
        else {
            _printk(0x800217d,arg1_00 + 0x4cc,*(arg1 + 0x100),"gpi_config");
            iVar5 = *(arg1_00 + 0x4b8);
        }
        if ((iVar5 != 0) && (2 < *(arg1_00 + 0x4c0))) {
            ipc_log_string(iVar5,"ch:%u %s: sending UART RFR READY cmd\n",*(arg1 + 0x100),"gpi_config");
        }
        uVar7 = 6;
        break;
    case 0x8006230:
        if (*(arg1_00 + 0x4c4) < 3) {
            iVar5 = *(arg1_00 + 0x4b8);
        }
        else {
            _printk(0x8001125,arg1_00 + 0x4cc,*(arg1 + 0x100),"gpi_config");
            iVar5 = *(arg1_00 + 0x4b8);
        }
        if ((iVar5 != 0) && (2 < *(arg1_00 + 0x4c0))) {
            ipc_log_string(iVar5,"ch:%u %s: sending UART RFR READY NOT READY cmd\n",*(arg1 + 0x100),"gpi_config");
        }
        uVar7 = 7;
    }
    iVar3 = sym.gpi_send_cmd(arg1_00,arg1,uVar7);
code_r0x08006284:
    mutex_unlock(arg1_00 + 0x3d8);
    return iVar3;
}


// ===== sym.gpi_pause @ 0x08006754 (size 3272) =====

int sym.gpi_pause(int64_t arg1)

{
    int *piVar1;
    int *piVar2;
    int *arg2;
    int *arg2_00;
    uchar uVar3;
    uchar uVar4;
    bool bVar5;
    bool bVar6;
    uint uVar7;
    uint uVar8;
    uint32_t uVar9;
    int iVar10;
    int iVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    int64_t iVar15;
    char *pcVar16;
    uint *puVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar18;
    uint *puVar19;
    int *piVar20;
    uint64_t uVar21;
    int64_t iVar22;
    int *piVar23;
    int64_t iVar24;
    ulong unaff_x30;
    int64_t iStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    piVar20 = *(arg1 + 0x110);
    iStack_78 = 0;
    uStack_70 = 0;
    piVar23 = *(arg1 + 0x68);
    if (piVar20[0x131] < 3) {
        iVar12 = *(piVar20 + 0x12e);
    }
    else {
        _printk(0x80010a9,piVar20 + 0x133,*(arg1 + 0x100),"gpi_pause");
        iVar12 = *(piVar20 + 0x12e);
    }
    if ((iVar12 != 0) && (2 < piVar20[0x130])) {
        ipc_log_string(iVar12,"ch:%u %s: Enter\n",*(arg1 + 0x100),"gpi_pause");
    }
    mutex_lock(piVar20 + 0xf6);
    if (*(piVar20 + 0x65a) == '\0') {
        if (piVar20[0x131] < 3) {
            iVar12 = *(piVar20 + 0x12e);
        }
        else {
            _printk(0x800094b,piVar20 + 0x133,*(arg1 + 0x100),"gpi_pause");
            iVar12 = *(piVar20 + 0x12e);
        }
        if ((iVar12 == 0) || (piVar20[0x130] < 3)) {
            iVar10 = 0;
        }
        else {
            ipc_log_string(iVar12,"ch:%u %s: Already in suspend/pause state\n",*(arg1 + 0x100),"gpi_pause");
            iVar10 = 0;
        }
    }
    else {
        uVar9 = *piVar20 * 0x4000 + 0x23080;
        uVar21 = uVar9;
        piVar1 = piVar20 + 0x133;
        uVar18 = uVar9 | 0x38;
        uVar7 = sym.readl_relaxed(*(piVar20 + 0xe4) + uVar21);
        uVar8 = sym.readl_relaxed(*(piVar20 + 0xe4) + uVar18);
        if (piVar20[0x131] < 2) {
            iVar12 = *(piVar20 + 0x12e);
        }
        else {
            _printk(0x800137d,piVar1,99,"gpi_pause",uVar7,uVar8);
            iVar12 = *(piVar20 + 0x12e);
        }
        if ((iVar12 != 0) && (1 < piVar20[0x130])) {
            ipc_log_string(iVar12,"ch:%u %s: CNTXT_TYPE_IRQ:0x%08x IEOB_MASK_OFF:0x%08x\n",99,"gpi_pause",uVar7,
                           uVar8);
        }
        uVar7 = sym.readl_relaxed(*(piVar20 + 0xe4) + uVar21);
        uVar8 = sym.readl_relaxed(*(piVar20 + 0xe4) + uVar18);
        if (piVar20[0x131] < 2) {
            iVar12 = *(piVar20 + 0x12e);
        }
        else {
            _printk(0x800137d,piVar1,99,"gpi_pause",uVar7,uVar8);
            iVar12 = *(piVar20 + 0x12e);
        }
        if ((iVar12 != 0) && (1 < piVar20[0x130])) {
            ipc_log_string(iVar12,"ch:%u %s: CNTXT_TYPE_IRQ:0x%08x IEOB_MASK_OFF:0x%08x\n",99,"gpi_pause",uVar7,
                           uVar8);
        }
        uVar7 = sym.readl_relaxed(*(piVar20 + 0xe4) + uVar21);
        uVar8 = sym.readl_relaxed(*(piVar20 + 0xe4) + uVar18);
        if (piVar20[0x131] < 2) {
            iVar12 = *(piVar20 + 0x12e);
        }
        else {
            _printk(0x800137d,piVar1,99,"gpi_pause",uVar7,uVar8);
            iVar12 = *(piVar20 + 0x12e);
        }
        if ((iVar12 != 0) && (1 < piVar20[0x130])) {
            ipc_log_string(iVar12,"ch:%u %s: CNTXT_TYPE_IRQ:0x%08x IEOB_MASK_OFF:0x%08x\n",99,"gpi_pause",uVar7,
                           uVar8);
        }
        uVar9 = sym.readl_relaxed(*(piVar20 + 0xec));
        uStack_70 = uVar9;
        if (uVar9 == 0) {
            if (piVar20[0x131] < 2) {
                iVar12 = *(piVar20 + 0x12e);
            }
            else {
                _printk(0x80011f0,piVar1,99,"gpi_pause");
                iVar12 = *(piVar20 + 0x12e);
            }
            if ((iVar12 != 0) && (1 < piVar20[0x130])) {
                pcVar16 = "ch:%u %s: invalid cntxt_rp";
code_r0x08006b28:
                ipc_log_string(iVar12,pcVar16,99,"gpi_pause");
            }
        }
        else {
            iVar12 = *(piVar20 + 0x110);
            puVar19 = *(piVar20 + 0x114);
            iStack_78 = (*(piVar20 + 0x10c) - iVar12) + puVar19;
            if (iStack_78 != 0) {
                iVar22 = uStack_70 - *(piVar20 + 0x10c);
                if (1 < piVar20[0x131]) {
                    _printk(0x800118e,piVar1,99,"gpi_pause",&uStack_70,&iStack_78);
                }
                if ((*(piVar20 + 0x12e) != 0) && (1 < piVar20[0x130])) {
                    ipc_log_string(*(piVar20 + 0x12e),"ch:%u %s: cntxt_rp:%pa local_rp:%pa\n",99,"gpi_pause",
                                   &uStack_70,&iStack_78);
                }
                for (; iVar12 + iVar22 != puVar19; puVar19 = puVar19 + piVar20[0x117]) {
                    uVar3 = *(puVar19 + 0xf);
                    uVar4 = *(puVar19 + 0xe);
                    if (piVar20[0x131] < 2) {
                        iVar13 = *(piVar20 + 0x12e);
                    }
                    else {
                        _printk(0x8000388,piVar1,99,"gpi_pause",uVar3,uVar4,*puVar19,puVar19[1],puVar19[2],
                                puVar19[3]);
                        iVar13 = *(piVar20 + 0x12e);
                    }
                    if ((iVar13 != 0) && (1 < piVar20[0x130])) {
                        ipc_log_string(iVar13,"ch:%u %s: chid:%u type:0x%x %08x %08x %08x %08x\n",99,"gpi_pause",
                                       uVar3,uVar4,*puVar19,puVar19[1],puVar19[2],puVar19[3]);
                    }
                }
                piVar2 = piVar20 + 0x105;
                arg2 = piVar20 + 2;
                _raw_write_lock_irq(piVar2);
                piVar20[0x49] = 4;
                _raw_write_unlock_irq(piVar2);
                iVar10 = sym.gpi_send_cmd(piVar20,arg2,2);
                if (iVar10 == 0) {
                    arg2_00 = piVar20 + 0x70;
                    _raw_write_lock_irq(piVar2);
                    piVar20[0xb7] = 4;
                    _raw_write_unlock_irq(piVar2);
                    iVar10 = sym.gpi_send_cmd(piVar20,arg2_00,2);
                    if (iVar10 != 0) {
                        iVar12 = 1;
                        goto code_r0x08006b74;
                    }
                    if (*piVar23 != 5) {
                        iVar12 = 0;
                        bVar5 = false;
                        do {
                            iVar22 = *(piVar20 + iVar12 * 0x6e + 0x46);
                            if (*(iVar22 + 0x4c4) < 3) {
                                iVar13 = *(iVar22 + 0x4b8);
                            }
                            else {
                                _printk(0x80010a9,iVar22 + 0x4cc,piVar20[iVar12 * 0x6e + 0x42],"gpi_noop_tre");
                                iVar13 = *(iVar22 + 0x4b8);
                            }
                            if ((iVar13 != 0) && (2 < *(iVar22 + 0x4c0))) {
                                ipc_log_string(iVar13,"ch:%u %s: Enter\n",piVar20[iVar12 * 0x6e + 0x42],
                                               "gpi_noop_tre");
                            }
                            puVar19 = *(piVar20 + iVar12 * 0x6e + 100);
                            iVar14 = puVar19 + (*(piVar20 + iVar12 * 0x6e + 0x5c) - *(piVar20 + iVar12 * 0x6e + 0x60));
                            iVar13 = (*(piVar20 + iVar12 * 0x6e + 0x5c) - *(piVar20 + iVar12 * 0x6e + 0x60)) +
                                     *(piVar20 + iVar12 * 0x6e + 0x62);
                            if (*(iVar22 + 0x4c4) < 3) {
                                iVar24 = *(iVar22 + 0x4b8);
                            }
                            else {
                                _printk(0x80015aa,iVar22 + 0x4cc,piVar20[iVar12 * 0x6e + 0x42],"gpi_noop_tre",iVar14
                                        ,iVar13);
                                iVar24 = *(iVar22 + 0x4b8);
                            }
                            if ((iVar24 != 0) && (2 < *(iVar22 + 0x4c0))) {
                                ipc_log_string(iVar24,"ch:%u %s: local_rp:0x%0llx local_wp:0x%0llx\n",
                                               piVar20[iVar12 * 0x6e + 0x42],"gpi_noop_tre",iVar14,iVar13);
                            }
                            iVar24 = iVar22 + 0x4cc;
                            piVar23 = piVar20 + iVar12 * 0x6e + 0x42;
                            if (iVar14 != iVar13) {
                                do {
                                    if (*(iVar22 + 0x4c4) < 2) {
                                        iVar15 = *(iVar22 + 0x4b8);
                                    }
                                    else {
                                        _printk(0x80005b5,iVar24,*piVar23,"gpi_noop_tre",iVar14,*puVar19,
                                                puVar19[1],puVar19[2],puVar19[3]);
                                        iVar15 = *(iVar22 + 0x4b8);
                                    }
                                    if ((iVar15 != 0) && (1 < *(iVar22 + 0x4c0))) {
                                        ipc_log_string(iVar15,"ch:%u %s: local_rp:0x%011x TRE: %08x %08x %08x %08x\n",
                                                       *piVar23,"gpi_noop_tre",iVar14,*puVar19,puVar19[1],
                                                       puVar19[2],puVar19[3]);
                                    }
                                    puVar19[3] = puVar19[3] & 0x801 | 0x10000;
                                    puVar17 = *(piVar20 + iVar12 * 0x6e + 0x60);
                                    puVar19 = puVar19 + piVar20[iVar12 * 0x6e + 0x67];
                                    if (puVar19 < puVar17 + piVar20[iVar12 * 0x6e + 0x66]) {
                                        iVar14 = iVar14 + piVar20[iVar12 * 0x6e + 0x67];
                                        puVar17 = puVar19;
                                    }
                                    else {
                                        iVar14 = *(piVar20 + iVar12 * 0x6e + 0x5c);
                                    }
                                    if (*(iVar22 + 0x4c4) < 3) {
                                        iVar15 = *(iVar22 + 0x4b8);
                                    }
                                    else {
                                        _printk(0x8001f33,iVar24,*piVar23,"gpi_noop_tre",iVar14);
                                        iVar15 = *(iVar22 + 0x4b8);
                                    }
                                    if ((iVar15 != 0) && (2 < *(iVar22 + 0x4c0))) {
                                        ipc_log_string(iVar15,"ch:%u %s: local_rp:0x%0llx\n",*piVar23,"gpi_noop_tre"
                                                       ,iVar14);
                                    }
                                    puVar19 = puVar17;
                                } while (iVar14 != iVar13);
                            }
                            if (2 < *(iVar22 + 0x4c4)) {
                                _printk(0x8002267,iVar24,*piVar23,"gpi_noop_tre");
                            }
                            if ((*(iVar22 + 0x4b8) != 0) && (2 < *(iVar22 + 0x4c0))) {
                                ipc_log_string(*(iVar22 + 0x4b8),"ch:%u %s: exit\n",*piVar23,"gpi_noop_tre");
                            }
                            iVar12 = 1;
                            bVar6 = !bVar5;
                            bVar5 = true;
                        } while (bVar6);
                        iVar10 = sym.gpi_start_chan(arg2);
                        if (iVar10 == 0) {
                            iVar10 = sym.gpi_start_chan(arg2_00);
                            if (iVar10 == 0) {
code_r0x08007304:
                                if (*(piVar20 + 0x659) == '\0') {
                                    iVar10 = 0;
                                }
                                else {
                                    iVar10 = 1;
                                    do {
                                        __const_udelay(0xa7c6);
                                        if (iVar10 == 1000) break;
                                        iVar10 = iVar10 + 1;
                                    } while (*(piVar20 + 0x659) != '\0');
                                }
                                if (piVar20[0x131] < 3) {
                                    iVar12 = *(piVar20 + 0x12e);
                                }
                                else {
                                    _printk(0x80011b5,piVar1,piVar20[0xb0],"gpi_pause",iVar10);
                                    iVar12 = *(piVar20 + 0x12e);
                                }
                                if ((iVar12 != 0) && (2 < piVar20[0x130])) {
                                    ipc_log_string(iVar12,"ch:%u %s: iter:%d\n",piVar20[0xb0],"gpi_pause",iVar10);
                                }
                                disable_irq(piVar20[0xe2]);
                                iVar10 = 0;
                                *(piVar20 + 0x65a) = 0;
                                goto code_r0x0800725c;
                            }
                            iVar12 = 1;
                        }
                        else {
                            iVar12 = 0;
                        }
                        if (piVar20[0x131] < 2) {
                            iVar22 = *(piVar20 + 0x12e);
                        }
                        else {
                            _printk(0x80005f7,piVar1,piVar20[iVar12 * 0x6e + 0x42],"gpi_pause",iVar10);
                            iVar22 = *(piVar20 + 0x12e);
                        }
                        if ((iVar22 == 0) || (piVar20[0x130] < 2)) goto code_r0x08007258;
                        pcVar16 = "ch:%u %s: Error Starting Channel ret:%d\n";
code_r0x08007150:
                        iVar11 = piVar20[iVar12 * 0x6e + 0x42];
                        goto code_r0x08006bb0;
                    }
                    if (piVar20[0x131] < 3) {
                        iVar12 = *(piVar20 + 0x12e);
                    }
                    else {
                        _printk(0x800158b,piVar1,piVar20[0xb0],"gpi_pause");
                        iVar12 = *(piVar20 + 0x12e);
                    }
                    if ((iVar12 != 0) && (2 < piVar20[0x130])) {
                        ipc_log_string(iVar12,"ch:%u %s: deep sleep config\n",piVar20[0xb0],"gpi_pause");
                    }
                    iVar10 = sym.gpi_send_cmd(piVar20,arg2,3);
                    if (iVar10 == 0) {
                        iVar10 = sym.gpi_send_cmd(piVar20,arg2_00,3);
                        if (iVar10 == 0) {
                            iVar10 = sym.gpi_reset_chan(arg2,4);
                            if (iVar10 == 0) {
                                iVar10 = sym.gpi_reset_chan(arg2_00,4);
                                if (iVar10 == 0) {
                                    iVar10 = sym.gpi_send_cmd(piVar20,0,10);
                                    if (iVar10 != 0) {
                                        if (piVar20[0x131] < 2) {
                                            iVar12 = *(piVar20 + 0x12e);
                                        }
                                        else {
                                            _printk(0x8000ec0,piVar1,99,"gpi_pause","EV DEALLOC",iVar10);
                                            iVar12 = *(piVar20 + 0x12e);
                                        }
                                        if ((iVar12 != 0) && (1 < piVar20[0x130])) {
                                            ipc_log_string(iVar12,"ch:%u %s: error with cmd:%s ret:%d\n",99,
                                                           "gpi_pause","EV DEALLOC",iVar10);
                                        }
                                        goto code_r0x0800725c;
                                    }
                                    goto code_r0x08007304;
                                }
                                iVar12 = 1;
                            }
                            else {
                                iVar12 = 0;
                            }
                            if (piVar20[0x131] < 2) {
                                iVar22 = *(piVar20 + 0x12e);
                            }
                            else {
                                _printk(0x8000a7f,piVar1,piVar20[iVar12 * 0x6e + 0x42],"gpi_pause",iVar10);
                                iVar22 = *(piVar20 + 0x12e);
                            }
                            if ((iVar22 != 0) && (1 < piVar20[0x130])) {
                                pcVar16 = "ch:%u %s: Error chan deallocating, ret:%d\n";
                                goto code_r0x08007150;
                            }
                            goto code_r0x08007258;
                        }
                        iVar12 = 1;
                    }
                    else {
                        iVar12 = 0;
                    }
                    if (1 < piVar20[0x131]) {
                        _printk(0x8001053,piVar1,piVar20[iVar12 * 0x6e + 0x42],"gpi_pause",iVar10);
                        iVar22 = *(piVar20 + 0x12e);
                        if (iVar22 == 0) goto code_r0x08007258;
code_r0x080070f4:
                        if (piVar20[0x130] < 2) goto code_r0x08007258;
                        pcVar16 = "ch:%u %s: Error resetting chan, ret:%d\n";
                        goto code_r0x08006ba0;
                    }
                    iVar22 = *(piVar20 + 0x12e);
                    if (iVar22 != 0) goto code_r0x080070f4;
                }
                else {
                    iVar12 = 0;
code_r0x08006b74:
                    if (piVar20[0x131] < 2) {
                        iVar22 = *(piVar20 + 0x12e);
                    }
                    else {
                        _printk(0x8000ee6,piVar1,piVar20[iVar12 * 0x6e + 0x42],"gpi_pause",iVar10);
                        iVar22 = *(piVar20 + 0x12e);
                    }
                    if ((iVar22 != 0) && (1 < piVar20[0x130])) {
                        pcVar16 = "ch:%u %s: Error stopping chan, ret:%d\n";
code_r0x08006ba0:
                        iVar11 = piVar20[iVar12 * 0x6e + 0x42];
code_r0x08006bb0:
                        ipc_log_string(iVar22,pcVar16,iVar11,"gpi_pause",iVar10);
                        iVar10 = -0x68;
                        goto code_r0x0800725c;
                    }
                }
code_r0x08007258:
                iVar10 = -0x68;
                goto code_r0x0800725c;
            }
            if (piVar20[0x131] < 2) {
                iVar12 = *(piVar20 + 0x12e);
            }
            else {
                _printk(0x8001036,piVar1,99,"gpi_pause");
                iVar12 = *(piVar20 + 0x12e);
            }
            if ((iVar12 != 0) && (1 < piVar20[0x130])) {
                pcVar16 = "ch:%u %s: invalid local_rp";
                goto code_r0x08006b28;
            }
        }
        iVar10 = -0x16;
    }
code_r0x0800725c:
    mutex_unlock(piVar20 + 0xf6);
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return iVar10;
    }
    iVar12 = __stack_chk_fail();
    *extraout_x18 = sym.gpi_resume;
    iVar22 = *(iVar12 + 0x110);
    piVar20 = *(iVar12 + 0x68);
    if (*(iVar22 + 0x4c4) < 3) {
        iVar13 = *(iVar22 + 0x4b8);
    }
    else {
        _printk(0x80018e2,iVar22 + 0x4cc,*(iVar12 + 0x100),"gpi_resume");
        iVar13 = *(iVar22 + 0x4b8);
    }
    if ((iVar13 != 0) && (2 < *(iVar22 + 0x4c0))) {
        ipc_log_string(iVar13,"ch:%u %s: enter\n",*(iVar12 + 0x100),"gpi_resume");
    }
    mutex_lock(iVar22 + 0x3d8);
    if (*(iVar22 + 0x65a) != '\0') {
        if (*(iVar22 + 0x4c4) < 3) {
            iVar13 = *(iVar22 + 0x4b8);
        }
        else {
            _printk(0x8001f51,iVar22 + 0x4cc,*(iVar12 + 0x100),"gpi_resume");
            iVar13 = *(iVar22 + 0x4b8);
        }
        if ((iVar13 != 0) && (2 < *(iVar22 + 0x4c0))) {
            uVar7 = *(iVar12 + 0x100);
            pcVar16 = "ch:%u %s: Already resumed\n";
code_r0x080074c4:
            ipc_log_string(iVar13,pcVar16,uVar7,"gpi_resume");
        }
code_r0x080074d0:
        iVar10 = 0;
        goto code_r0x080074d4;
    }
    enable_irq(*(iVar22 + 0x388));
    *(iVar22 + 0x65a) = 1;
    if (*piVar20 == 5) {
        if (*(iVar22 + 0x4c4) < 3) {
            iVar13 = *(iVar22 + 0x4b8);
        }
        else {
            _printk(0x800158b,iVar22 + 0x4cc,*(iVar12 + 0x100),"gpi_resume");
            iVar13 = *(iVar22 + 0x4b8);
        }
        if ((iVar13 != 0) && (2 < *(iVar22 + 0x4c0))) {
            ipc_log_string(iVar13,"ch:%u %s: deep sleep config\n",*(iVar12 + 0x100),"gpi_resume");
        }
        iVar13 = *(iVar12 + 0x110);
        if (*(iVar13 + 0x4c4) < 3) {
            iVar14 = *(iVar13 + 0x4b8);
        }
        else {
            _printk(0x80018e2,iVar13 + 0x4cc,*(iVar12 + 0x100),"gpi_deep_sleep_exit_config");
            iVar14 = *(iVar13 + 0x4b8);
        }
        if ((iVar14 != 0) && (2 < *(iVar13 + 0x4c0))) {
            ipc_log_string(iVar14,"ch:%u %s: enter\n",*(iVar12 + 0x100),"gpi_deep_sleep_exit_config");
        }
        *(iVar13 + 0x188) = *(iVar13 + 0x180);
        *(iVar13 + 400) = *(iVar13 + 0x180);
        *(iVar13 + 0x340) = *(iVar13 + 0x338);
        *(iVar13 + 0x348) = *(iVar13 + 0x338);
        *(iVar13 + 0x448) = *(iVar13 + 0x440);
        *(iVar13 + 0x450) = *(iVar13 + 0x440);
        iVar10 = sym.gpi_config_interrupts(iVar13,0,0);
        if (iVar10 == 0) {
            iVar10 = sym.gpi_alloc_ev_chan(iVar13);
            if (iVar10 == 0) {
                iVar14 = iVar13 + 0x1c0;
                iVar11 = sym.gpi_alloc_chan(iVar13 + 8,1);
                if (iVar11 == 0) {
                    iVar24 = 1;
                    iVar10 = sym.gpi_alloc_chan(iVar14,1);
                    if (iVar10 != 0) goto code_r0x0800773c;
                    iVar11 = sym.gpi_start_chan(iVar13 + 8);
                    if (iVar11 == 0) {
                        iVar10 = sym.gpi_start_chan(iVar14);
                        if (iVar10 == 0) goto code_r0x080078e0;
                        uVar9 = 1;
                    }
                    else {
                        uVar9 = 0;
                        iVar10 = iVar11;
                    }
                    if (*(iVar13 + 0x4c4) < 2) {
                        iVar24 = *(iVar13 + 0x4b8);
                    }
                    else {
                        _printk(0x8001b08,iVar13 + 0x4cc,*(iVar13 + uVar9 * 0x1b8 + 0x108),
                                "gpi_deep_sleep_exit_config",iVar10);
                        iVar24 = *(iVar13 + 0x4b8);
                    }
                    if ((iVar24 != 0) && (1 < *(iVar13 + 0x4c0))) {
                        ipc_log_string(iVar24,"ch:%u %s: Error start chan:%d\n",*(iVar13 + uVar9 * 0x1b8 + 0x108),
                                       "gpi_deep_sleep_exit_config",iVar10);
                    }
                    if (iVar11 == 0) {
                        iVar11 = uVar9 - 1;
                        do {
                            sym.gpi_send_cmd(iVar13,iVar14,2);
                            sym.gpi_send_cmd(iVar13,iVar14,3);
                            iVar11 = iVar11 + 1;
                        } while (-1 < iVar11);
                    }
                    bVar5 = true;
                }
                else {
                    iVar24 = 0;
                    iVar10 = iVar11;
code_r0x0800773c:
                    if (*(iVar13 + 0x4c4) < 2) {
                        iVar15 = *(iVar13 + 0x4b8);
                    }
                    else {
                        _printk(0x8000c35,iVar13 + 0x4cc,*(iVar13 + iVar24 * 0x1b8 + 0x108),
                                "gpi_deep_sleep_exit_config",iVar10);
                        iVar15 = *(iVar13 + 0x4b8);
                    }
                    if ((iVar15 != 0) && (1 < *(iVar13 + 0x4c0))) {
                        ipc_log_string(iVar15,"ch:%u %s: Error allocating chan:%d\n",
                                       *(iVar13 + iVar24 * 0x1b8 + 0x108),"gpi_deep_sleep_exit_config",iVar10);
                    }
                    if (iVar11 != 0) goto code_r0x080078a8;
                    bVar5 = false;
                }
                sym.gpi_reset_chan(iVar14,4);
                if (bVar5) {
                    sym.gpi_reset_chan(iVar14,4);
                }
            }
            else {
                if (*(iVar13 + 0x4c4) < 2) {
                    iVar14 = *(iVar13 + 0x4b8);
                }
                else {
                    _printk(0x8000b85,iVar13 + 0x4cc,*(iVar13 + 0x2c0),"gpi_deep_sleep_exit_config",iVar10);
                    iVar14 = *(iVar13 + 0x4b8);
                }
                if ((iVar14 != 0) && (1 < *(iVar13 + 0x4c0))) {
                    ipc_log_string(iVar14,"ch:%u %s: error alloc_ev_chan:%d\n",*(iVar13 + 0x2c0),
                                   "gpi_deep_sleep_exit_config",iVar10);
                }
            }
code_r0x080078a8:
            sym.gpi_disable_interrupts(iVar13);
        }
        else {
            if (*(iVar13 + 0x4c4) < 2) {
                iVar14 = *(iVar13 + 0x4b8);
            }
            else {
                _printk(0x80016b8,iVar13 + 0x4cc,*(iVar13 + 0x2c0),"gpi_deep_sleep_exit_config",iVar10);
                iVar14 = *(iVar13 + 0x4b8);
            }
            if ((iVar14 != 0) && (1 < *(iVar13 + 0x4c0))) {
                ipc_log_string(iVar14,"ch:%u %s: error config. interrupts, ret:%d\n",*(iVar13 + 0x2c0),
                               "gpi_deep_sleep_exit_config",iVar10);
            }
        }
        if (*(iVar22 + 0x4c4) < 2) {
            iVar13 = *(iVar22 + 0x4b8);
        }
        else {
            _printk(0x8000497,iVar22 + 0x4cc,*(iVar12 + 0x100),"gpi_resume",iVar10);
            iVar13 = *(iVar22 + 0x4b8);
        }
        if ((iVar13 == 0) || (*(iVar22 + 0x4c0) < 2)) goto code_r0x080074d4;
        uVar7 = *(iVar12 + 0x100);
        pcVar16 = "ch:%u %s: Err deep sleep config, ret:%d\n";
    }
    else {
code_r0x080078e0:
        if (*(iVar22 + 0x410) == 3) {
            if (*(iVar22 + 0x4c4) < 3) {
                iVar13 = *(iVar22 + 0x4b8);
            }
            else {
                _printk(0x8001a23,iVar22 + 0x4cc,*(iVar12 + 0x100),"gpi_resume");
                iVar13 = *(iVar22 + 0x4b8);
            }
            if ((iVar13 != 0) && (2 < *(iVar22 + 0x4c0))) {
                uVar7 = *(iVar12 + 0x100);
                pcVar16 = "ch:%u %s: channel is already active\n";
                goto code_r0x080074c4;
            }
            goto code_r0x080074d0;
        }
        iVar10 = sym.gpi_send_cmd(iVar22,iVar22 + 8,1);
        if (iVar10 == 0) {
            iVar12 = 1;
            iVar10 = sym.gpi_send_cmd(iVar22,iVar22 + 0x1c0,1);
            if (iVar10 == 0) {
                _raw_write_lock_irq(iVar22 + 0x414);
                *(iVar22 + 0x410) = 3;
                _raw_write_unlock_irq(iVar22 + 0x414);
                goto code_r0x080074d4;
            }
        }
        else {
            iVar12 = 0;
        }
        if (*(iVar22 + 0x4c4) < 2) {
            iVar13 = *(iVar22 + 0x4b8);
        }
        else {
            _printk(0x80008a5,iVar22 + 0x4cc,*(iVar22 + iVar12 * 0x1b8 + 0x108),"gpi_resume",iVar10);
            iVar13 = *(iVar22 + 0x4b8);
        }
        if ((iVar13 == 0) || (*(iVar22 + 0x4c0) < 2)) goto code_r0x080074d4;
        pcVar16 = "ch:%u %s: Erro starting chan, ret:%d\n";
        uVar7 = *(iVar22 + iVar12 * 0x1b8 + 0x108);
    }
    ipc_log_string(iVar13,pcVar16,uVar7,"gpi_resume",iVar10);
code_r0x080074d4:
    mutex_unlock(iVar22 + 0x3d8);
    return iVar10;
}


// ===== sym.gpi_resume @ 0x0800741c (size 1684) =====

int sym.gpi_resume(int64_t arg1)

{
    uint uVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    char *pcVar8;
    uint32_t uVar9;
    ulong *in_x18;
    int64_t arg1_00;
    int *piVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x110);
    piVar10 = *(arg1 + 0x68);
    if (*(arg1_00 + 0x4c4) < 3) {
        iVar5 = *(arg1_00 + 0x4b8);
    }
    else {
        _printk(0x80018e2,arg1_00 + 0x4cc,*(arg1 + 0x100),"gpi_resume");
        iVar5 = *(arg1_00 + 0x4b8);
    }
    if ((iVar5 != 0) && (2 < *(arg1_00 + 0x4c0))) {
        ipc_log_string(iVar5,"ch:%u %s: enter\n",*(arg1 + 0x100),"gpi_resume");
    }
    mutex_lock(arg1_00 + 0x3d8);
    if (*(arg1_00 + 0x65a) != '\0') {
        if (*(arg1_00 + 0x4c4) < 3) {
            iVar5 = *(arg1_00 + 0x4b8);
        }
        else {
            _printk(0x8001f51,arg1_00 + 0x4cc,*(arg1 + 0x100),"gpi_resume");
            iVar5 = *(arg1_00 + 0x4b8);
        }
        if ((iVar5 != 0) && (2 < *(arg1_00 + 0x4c0))) {
            uVar1 = *(arg1 + 0x100);
            pcVar8 = "ch:%u %s: Already resumed\n";
code_r0x080074c4:
            ipc_log_string(iVar5,pcVar8,uVar1,"gpi_resume");
        }
code_r0x080074d0:
        iVar3 = 0;
        goto code_r0x080074d4;
    }
    enable_irq(*(arg1_00 + 0x388));
    *(arg1_00 + 0x65a) = 1;
    if (*piVar10 == 5) {
        if (*(arg1_00 + 0x4c4) < 3) {
            iVar5 = *(arg1_00 + 0x4b8);
        }
        else {
            _printk(0x800158b,arg1_00 + 0x4cc,*(arg1 + 0x100),"gpi_resume");
            iVar5 = *(arg1_00 + 0x4b8);
        }
        if ((iVar5 != 0) && (2 < *(arg1_00 + 0x4c0))) {
            ipc_log_string(iVar5,"ch:%u %s: deep sleep config\n",*(arg1 + 0x100),"gpi_resume");
        }
        iVar5 = *(arg1 + 0x110);
        if (*(iVar5 + 0x4c4) < 3) {
            iVar6 = *(iVar5 + 0x4b8);
        }
        else {
            _printk(0x80018e2,iVar5 + 0x4cc,*(arg1 + 0x100),"gpi_deep_sleep_exit_config");
            iVar6 = *(iVar5 + 0x4b8);
        }
        if ((iVar6 != 0) && (2 < *(iVar5 + 0x4c0))) {
            ipc_log_string(iVar6,"ch:%u %s: enter\n",*(arg1 + 0x100),"gpi_deep_sleep_exit_config");
        }
        *(iVar5 + 0x188) = *(iVar5 + 0x180);
        *(iVar5 + 400) = *(iVar5 + 0x180);
        *(iVar5 + 0x340) = *(iVar5 + 0x338);
        *(iVar5 + 0x348) = *(iVar5 + 0x338);
        *(iVar5 + 0x448) = *(iVar5 + 0x440);
        *(iVar5 + 0x450) = *(iVar5 + 0x440);
        iVar3 = sym.gpi_config_interrupts(iVar5,0,0);
        if (iVar3 == 0) {
            iVar3 = sym.gpi_alloc_ev_chan(iVar5);
            if (iVar3 == 0) {
                iVar6 = iVar5 + 0x1c0;
                iVar4 = sym.gpi_alloc_chan(iVar5 + 8,1);
                if (iVar4 == 0) {
                    iVar11 = 1;
                    iVar3 = sym.gpi_alloc_chan(iVar6,1);
                    if (iVar3 != 0) goto code_r0x0800773c;
                    iVar4 = sym.gpi_start_chan(iVar5 + 8);
                    if (iVar4 == 0) {
                        iVar3 = sym.gpi_start_chan(iVar6);
                        if (iVar3 == 0) goto code_r0x080078e0;
                        uVar9 = 1;
                    }
                    else {
                        uVar9 = 0;
                        iVar3 = iVar4;
                    }
                    if (*(iVar5 + 0x4c4) < 2) {
                        iVar11 = *(iVar5 + 0x4b8);
                    }
                    else {
                        _printk(0x8001b08,iVar5 + 0x4cc,*(iVar5 + uVar9 * 0x1b8 + 0x108),"gpi_deep_sleep_exit_config"
                                ,iVar3);
                        iVar11 = *(iVar5 + 0x4b8);
                    }
                    if ((iVar11 != 0) && (1 < *(iVar5 + 0x4c0))) {
                        ipc_log_string(iVar11,"ch:%u %s: Error start chan:%d\n",*(iVar5 + uVar9 * 0x1b8 + 0x108),
                                       "gpi_deep_sleep_exit_config",iVar3);
                    }
                    if (iVar4 == 0) {
                        iVar4 = uVar9 - 1;
                        do {
                            sym.gpi_send_cmd(iVar5,iVar6,2);
                            sym.gpi_send_cmd(iVar5,iVar6,3);
                            iVar4 = iVar4 + 1;
                        } while (-1 < iVar4);
                    }
                    bVar2 = true;
                }
                else {
                    iVar11 = 0;
                    iVar3 = iVar4;
code_r0x0800773c:
                    if (*(iVar5 + 0x4c4) < 2) {
                        iVar7 = *(iVar5 + 0x4b8);
                    }
                    else {
                        _printk(0x8000c35,iVar5 + 0x4cc,*(iVar5 + iVar11 * 0x1b8 + 0x108),
                                "gpi_deep_sleep_exit_config",iVar3);
                        iVar7 = *(iVar5 + 0x4b8);
                    }
                    if ((iVar7 != 0) && (1 < *(iVar5 + 0x4c0))) {
                        ipc_log_string(iVar7,"ch:%u %s: Error allocating chan:%d\n",*(iVar5 + iVar11 * 0x1b8 + 0x108)
                                       ,"gpi_deep_sleep_exit_config",iVar3);
                    }
                    if (iVar4 != 0) goto code_r0x080078a8;
                    bVar2 = false;
                }
                sym.gpi_reset_chan(iVar6,4);
                if (bVar2) {
                    sym.gpi_reset_chan(iVar6,4);
                }
            }
            else {
                if (*(iVar5 + 0x4c4) < 2) {
                    iVar6 = *(iVar5 + 0x4b8);
                }
                else {
                    _printk(0x8000b85,iVar5 + 0x4cc,*(iVar5 + 0x2c0),"gpi_deep_sleep_exit_config",iVar3);
                    iVar6 = *(iVar5 + 0x4b8);
                }
                if ((iVar6 != 0) && (1 < *(iVar5 + 0x4c0))) {
                    ipc_log_string(iVar6,"ch:%u %s: error alloc_ev_chan:%d\n",*(iVar5 + 0x2c0),
                                   "gpi_deep_sleep_exit_config",iVar3);
                }
            }
code_r0x080078a8:
            sym.gpi_disable_interrupts(iVar5);
        }
        else {
            if (*(iVar5 + 0x4c4) < 2) {
                iVar6 = *(iVar5 + 0x4b8);
            }
            else {
                _printk(0x80016b8,iVar5 + 0x4cc,*(iVar5 + 0x2c0),"gpi_deep_sleep_exit_config",iVar3);
                iVar6 = *(iVar5 + 0x4b8);
            }
            if ((iVar6 != 0) && (1 < *(iVar5 + 0x4c0))) {
                ipc_log_string(iVar6,"ch:%u %s: error config. interrupts, ret:%d\n",*(iVar5 + 0x2c0),
                               "gpi_deep_sleep_exit_config",iVar3);
            }
        }
        if (*(arg1_00 + 0x4c4) < 2) {
            iVar6 = *(arg1_00 + 0x4b8);
        }
        else {
            _printk(0x8000497,arg1_00 + 0x4cc,*(arg1 + 0x100),"gpi_resume",iVar3);
            iVar6 = *(arg1_00 + 0x4b8);
        }
        if ((iVar6 == 0) || (*(arg1_00 + 0x4c0) < 2)) goto code_r0x080074d4;
        uVar1 = *(arg1 + 0x100);
        pcVar8 = "ch:%u %s: Err deep sleep config, ret:%d\n";
    }
    else {
code_r0x080078e0:
        if (*(arg1_00 + 0x410) == 3) {
            if (*(arg1_00 + 0x4c4) < 3) {
                iVar5 = *(arg1_00 + 0x4b8);
            }
            else {
                _printk(0x8001a23,arg1_00 + 0x4cc,*(arg1 + 0x100),"gpi_resume");
                iVar5 = *(arg1_00 + 0x4b8);
            }
            if ((iVar5 != 0) && (2 < *(arg1_00 + 0x4c0))) {
                uVar1 = *(arg1 + 0x100);
                pcVar8 = "ch:%u %s: channel is already active\n";
                goto code_r0x080074c4;
            }
            goto code_r0x080074d0;
        }
        iVar3 = sym.gpi_send_cmd(arg1_00,arg1_00 + 8,1);
        if (iVar3 == 0) {
            iVar5 = 1;
            iVar3 = sym.gpi_send_cmd(arg1_00,arg1_00 + 0x1c0,1);
            if (iVar3 == 0) {
                _raw_write_lock_irq(arg1_00 + 0x414);
                *(arg1_00 + 0x410) = 3;
                _raw_write_unlock_irq(arg1_00 + 0x414);
                goto code_r0x080074d4;
            }
        }
        else {
            iVar5 = 0;
        }
        if (*(arg1_00 + 0x4c4) < 2) {
            iVar6 = *(arg1_00 + 0x4b8);
        }
        else {
            _printk(0x80008a5,arg1_00 + 0x4cc,*(arg1_00 + iVar5 * 0x1b8 + 0x108),"gpi_resume",iVar3);
            iVar6 = *(arg1_00 + 0x4b8);
        }
        if ((iVar6 == 0) || (*(arg1_00 + 0x4c0) < 2)) goto code_r0x080074d4;
        pcVar8 = "ch:%u %s: Erro starting chan, ret:%d\n";
        uVar1 = *(arg1_00 + iVar5 * 0x1b8 + 0x108);
    }
    ipc_log_string(iVar6,pcVar8,uVar1,"gpi_resume",iVar3);
code_r0x080074d4:
    mutex_unlock(arg1_00 + 0x3d8);
    return iVar3;
}


// ===== sym.gpi_of_dma_xlate @ 0x08007ab0 (size 884) =====

ulong sym.gpi_of_dma_xlate(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    char *pcVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *(arg2 + 0x30);
    if (*(arg1 + 8) < 5) {
        if (*(iVar10 + 0x20c) < 2) {
            iVar4 = *(iVar10 + 0x200);
            if (iVar4 == 0) {
                return 0;
            }
        }
        else {
            _dev_err(*(iVar10 + 0x1b0),"%s: gpii require minimum 6 args, client passed:%d args\n","gpi_of_dma_xlate");
            iVar4 = *(iVar10 + 0x200);
            if (iVar4 == 0) {
                return 0;
            }
        }
        if (*(iVar10 + 0x208) < 2) {
            return 0;
        }
        uVar7 = *(arg1 + 8);
        pcVar6 = "%s: gpii require minimum 6 args, client passed:%d args\n";
    }
    else {
        uVar1 = *(arg1 + 0xc);
        uVar7 = uVar1;
        if (uVar1 < 2) {
            uVar8 = *(arg1 + 0x1c) >> 1 & 0xf;
            iVar2 = *(arg1 + 0x10);
            if (uVar8 == 0) {
                uVar3 = *(iVar10 + 0x1d0);
                if (uVar3 != 0) {
                    uVar8 = 0;
                    do {
                        if ((*(iVar10 + 0x1d4) >> (uVar8 & 0x1f) & 1) != 0) {
                            iVar11 = *(iVar10 + 0x1f8);
                            iVar4 = uVar8;
                            if (((*(iVar11 + uVar8 * 0x660 + 0x210) != 0) &&
                                (*(iVar11 + iVar4 * 0x660 + 0x2c4) == iVar2)) ||
                               ((*(iVar11 + iVar4 * 0x660 + 0x58) != 0 && (*(iVar11 + iVar4 * 0x660 + 0x10c) == iVar2)))
                               ) goto code_r0x08007c84;
                        }
                        uVar8 = uVar8 + 1;
                    } while (uVar3 != uVar8);
                    uVar8 = 0;
                    do {
                        if ((((*(iVar10 + 0x1d4) >> (uVar8 & 0x1f) & 1) != 0) &&
                            (iVar11 = *(iVar10 + 0x1f8), *(iVar11 + uVar8 * 0x660 + 0x58) == 0)) &&
                           (*(iVar11 + uVar8 * 0x660 + 0x210) == 0)) goto code_r0x08007c84;
                        uVar8 = uVar8 + 1;
                    } while (uVar3 != uVar8);
                }
            }
            else {
                uVar8 = uVar8 - 1;
                if ((*(iVar10 + 0x1d8) >> (uVar8 & 0x1f) & 1) != 0) {
                    iVar11 = *(iVar10 + 0x1f8);
                    goto code_r0x08007ba8;
                }
            }
            goto code_r0x08007c88;
        }
        if (*(iVar10 + 0x20c) < 2) {
            iVar4 = *(iVar10 + 0x200);
            if (iVar4 == 0) {
                return 0;
            }
        }
        else {
            _dev_err(*(iVar10 + 0x1b0),"%s: gpii channel:%d not valid\n","gpi_of_dma_xlate",uVar7);
            iVar4 = *(iVar10 + 0x200);
            if (iVar4 == 0) {
                return 0;
            }
        }
        if (*(iVar10 + 0x208) < 2) {
            return 0;
        }
        pcVar6 = "%s: gpii channel:%d not valid\n";
    }
    ipc_log_string(iVar4,pcVar6,"gpi_of_dma_xlate",uVar7);
    return 0;
code_r0x08007c84:
    if (-1 < uVar8) {
code_r0x08007ba8:
        uVar9 = uVar8;
        iVar4 = iVar11 + uVar8 * 0x660 + uVar7 * 0x1b8;
        if (*(iVar4 + 0x58) == 0) {
            iVar11 = iVar11 + uVar9 * 0x660 + uVar7 * 0x1b8;
            *(iVar11 + 0x10c) = iVar2;
            *(iVar11 + 0x110) = *(arg1 + 0x14);
            *(iVar11 + 0x158) = *(arg1 + 0x18);
            *(iVar11 + 0x114) = *(arg1 + 0x1c) & 1;
            if ((*(iVar10 + 0x200) != 0) && (*(iVar10 + 0x208) != 0)) {
                ipc_log_string(*(iVar10 + 0x200),"%s: client req gpii:%u chid:%u #_tre:%u prio:%u proto:%u SE:%d\n",
                               "gpi_of_dma_xlate",uVar9,uVar1);
            }
            uVar5 = dma_get_slave_channel(iVar4 + 8);
            return uVar5;
        }
        if (*(iVar10 + 0x20c) < 2) {
            iVar4 = *(iVar10 + 0x200);
            if (iVar4 == 0) {
                return 0;
            }
        }
        else {
            _dev_err(*(iVar10 + 0x1b0),"%s: gpii:%d chid:%d seid:%d already configured\n","gpi_of_dma_xlate",uVar9,
                     uVar7,*(iVar11 + uVar9 * 0x660 + uVar7 * 0x1b8 + 0x10c));
            iVar4 = *(iVar10 + 0x200);
            if (iVar4 == 0) {
                return 0;
            }
        }
        if (*(iVar10 + 0x208) < 2) {
            return 0;
        }
        ipc_log_string(iVar4,"%s: gpii:%d chid:%d seid:%d already configured\n","gpi_of_dma_xlate",uVar9,uVar7,
                       *(iVar11 + uVar9 * 0x660 + uVar7 * 0x1b8 + 0x10c));
        return 0;
    }
code_r0x08007c88:
    if (*(iVar10 + 0x20c) < 2) {
        iVar4 = *(iVar10 + 0x200);
        if (iVar4 == 0) {
            return 0;
        }
    }
    else {
        _dev_err(*(iVar10 + 0x1b0),"%s: no available gpii instances\n","gpi_of_dma_xlate");
        iVar4 = *(iVar10 + 0x200);
        if (iVar4 == 0) {
            return 0;
        }
    }
    if (1 < *(iVar10 + 0x208)) {
        ipc_log_string(iVar4,"%s: no available gpii instances\n","gpi_of_dma_xlate");
    }
    return 0;
}


// ===== sym.gpi_setup_debug @ 0x08007e24 (size 668) =====

//WARNING: Type propagation algorithm not settling

code * sym.gpi_setup_debug(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    uint8_t uVar3;
    bool bVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    code *pcVar11;
    int64_t iVar12;
    uint64_t uVar13;
    ulong uVar14;
    int *arg1_00;
    char *pcVar15;
    int iVar16;
    int64_t iVar17;
    int iVar18;
    int64_t iVar19;
    int64_t *piVar20;
    int *piVar21;
    uint64_t uVar22;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    int *piVar23;
    uint64_t uVar24;
    char *pcVar25;
    char *unaff_x22;
    uint32_t *puVar26;
    code *pcVar27;
    int *unaff_x23;
    int64_t iVar28;
    int *unaff_x24;
    uint32_t *puVar29;
    uint64_t uVar30;
    int *unaff_x25;
    int64_t iVar31;
    int *unaff_x26;
    int *piVar32;
    int *unaff_x27;
    int *piVar33;
    uint *unaff_x28;
    ulong unaff_x30;
    uchar auVar34 [16];
    ulong uStack_468;
    ulong uStack_460;
    ulong uStack_458;
    ulong uStack_450;
    uint64_t uStack_448;
    ulong uStack_440;
    int64_t iStack_438;
    uchar ****ppppuStack_430;
    code *pcStack_428;
    uint *puStack_420;
    int *piStack_418;
    uint32_t *puStack_408;
    uint64_t uStack_400;
    int *piStack_3f8;
    int64_t iStack_3f0;
    uint64_t uStack_3e8;
    code *pcStack_3e0;
    int64_t iStack_3d8;
    ulong uStack_3c8;
    code *pcStack_3c0;
    ulong uStack_3b8;
    ulong uStack_3b0;
    ulong uStack_3a8;
    ulong uStack_3a0;
    int64_t iStack_398;
    uchar ***pppuStack_390;
    code *pcStack_388;
    code *pcStack_380;
    uint64_t uStack_378;
    uint64_t uStack_370;
    int *piStack_368;
    uint32_t uStack_358;
    ulong uStack_354;
    uint32_t auStack_34c [2];
    ulong uStack_344;
    uint uStack_33c;
    uint32_t uStack_338;
    ulong uStack_334;
    uint uStack_32c;
    uint32_t uStack_328;
    ulong uStack_324;
    uint uStack_31c;
    int iStack_318;
    ulong uStack_314;
    uint uStack_30c;
    int iStack_308;
    ulong uStack_304;
    uint uStack_2fc;
    uint32_t uStack_2f8;
    ulong uStack_2f4;
    uint uStack_2ec;
    uint32_t uStack_2e8;
    ulong uStack_2e4;
    uint uStack_2dc;
    int iStack_2d8;
    ulong uStack_2d4;
    uint uStack_2cc;
    int iStack_2c8;
    ulong uStack_2c4;
    uint uStack_2bc;
    int iStack_2b8;
    ulong uStack_2b4;
    uint uStack_2ac;
    int iStack_2a8;
    uint uStack_2a4;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    int64_t iStack_288;
    uchar **ppuStack_280;
    ulong uStack_278;
    uint *puStack_270;
    uint32_t *puStack_268;
    int *piStack_260;
    int *piStack_258;
    uint32_t *puStack_250;
    ulong uStack_248;
    int *piStack_240;
    int64_t iStack_238;
    int *piStack_228;
    int *piStack_220;
    int *piStack_218;
    uint32_t *puStack_210;
    ulong uStack_208;
    uint64_t uStack_200;
    uint64_t uStack_1f8;
    uint64_t uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    int64_t iStack_1d8;
    uchar *puStack_1d0;
    code *pcStack_1c8;
    uint *puStack_1c0;
    int *piStack_1b8;
    int *piStack_1b0;
    int *piStack_1a8;
    int *piStack_1a0;
    int *piStack_198;
    char *pcStack_190;
    char *pcStack_188;
    int *piStack_180;
    int64_t iStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_70 = *(iVar17 + 0x5e0);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    snprintf(&uStack_170,0x100,"%s%llx","gpi_dma",**(arg1 + 0x1b8));
    pcVar15 = NULL;
    pcVar25 = 0x2;
    pcVar11 = ipc_log_context_create(2,&uStack_170);
    piVar23 = 0x8000000;
    *(arg1 + 0x200) = pcVar11;
    *(arg1 + 0x208) = 2;
    if ((_segment.ehdr != 0) && (_segment.ehdr < 0xfffffffffffff001)) {
        pcVar15 = "%llx";
        snprintf(&uStack_170,0x100,"%llx",**(arg1 + 0x1b8));
        pcVar11 = debugfs_create_dir(&uStack_170,_segment.ehdr);
        *(arg1 + 0x210) = pcVar11;
        if ((pcVar11 != NULL) && (pcVar15 = pcVar11, pcVar11 < 0xfffffffffffff001)) {
            debugfs_create_u32("ipc_log_lvl",0x180,pcVar11,arg1 + 0x208);
            pcVar15 = *(arg1 + 0x210);
            pcVar11 = debugfs_create_u32("klog_lvl",0x180,pcVar15,arg1 + 0x20c);
        }
    }
    if (*(arg1 + 0x1d0) != 0) {
        piVar23 = NULL;
        unaff_x27 = 0x1;
        pcVar25 = "%s%llx_gpii%d";
        unaff_x22 = "gpi_dma";
        unaff_x28 = 0x660;
        unaff_x24 = 0x100000002;
        do {
            uVar9 = piVar23;
            uVar7 = 1 << (uVar9 & 0x1f);
            if (((*(arg1 + 0x1d4) & uVar7) != 0) || ((*(arg1 + 0x1d8) & uVar7) != 0)) {
                unaff_x23 = *(arg1 + 0x1f8);
                unaff_x25 = unaff_x23 + uVar9 * 0x198;
                unaff_x26 = unaff_x25 + 0x133;
                snprintf(unaff_x26,0x100,"%s%llx_gpii%d","gpi_dma",**(arg1 + 0x1b8),piVar23);
                pcVar15 = NULL;
                pcVar11 = ipc_log_context_create(2,unaff_x26);
                unaff_x25[0x130] = 2;
                unaff_x25[0x131] = 1;
                *(unaff_x25 + 0x12e) = pcVar11;
                if ((*(arg1 + 0x210) != 0) && (*(arg1 + 0x210) < 0xfffffffffffff001)) {
                    pcVar15 = "gpii%d";
                    piVar32 = uVar9;
                    snprintf(&uStack_170,0x100,"gpii%d",piVar23);
                    pcVar11 = debugfs_create_dir(&uStack_170,*(arg1 + 0x210));
                    *(unaff_x23 + (piVar32 * 0xcc + 0xba) * 2) = pcVar11;
                    unaff_x26 = piVar32;
                    if ((pcVar11 != NULL) && (pcVar15 = pcVar11, pcVar11 < 0xfffffffffffff001)) {
                        unaff_x26 = unaff_x25 + 0x131;
                        unaff_x23 = unaff_x23 + (piVar32 * 0xcc + 0xba) * 2;
                        debugfs_create_u32("ipc_log_lvl",0x180,pcVar11,unaff_x25 + 0x130);
                        pcVar15 = *unaff_x23;
                        pcVar11 = debugfs_create_u32("klog_lvl",0x180,pcVar15,unaff_x26);
                    }
                }
            }
            piVar23 = uVar9 + 1;
        } while (uVar9 + 1 < *(arg1 + 0x1d0));
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_70) {
        return pcVar11;
    }
    iVar12 = __stack_chk_fail();
    *extraout_x18 = sym.gpi_process_events;
    pcStack_1c8 = sym.gpi_process_events;
    iVar17 = sp_el0;
    iStack_1d8 = *(iVar17 + 0x5e0);
    puStack_1d0 = &stack0xffffffffffffffa0;
    puStack_1c0 = unaff_x28;
    piStack_1b8 = unaff_x27;
    piStack_1b0 = unaff_x26;
    piStack_1a8 = unaff_x25;
    piStack_1a0 = unaff_x24;
    piStack_198 = unaff_x23;
    pcStack_190 = unaff_x22;
    pcStack_188 = pcVar25;
    piStack_180 = piVar23;
    iStack_178 = arg1;
    uVar13 = sym.readl_relaxed(*(iVar12 + 0x3b0));
    iVar17 = *(iVar12 + 0x430);
    iVar19 = *(iVar12 + 0x440);
    puVar26 = *(iVar12 + 0x450);
    puVar29 = iVar19 + ((uVar13 & 0xffffffff) - iVar17);
    do {
        iVar18 = iVar19;
        iVar16 = iVar17;
        puVar6 = puVar29;
        if (puVar29 != puVar26) {
            do {
                puStack_210 = puVar6;
                cVar2 = *(puVar26 + 0xe);
                uVar3 = *(puVar26 + 0xf);
                unaff_x24 = uVar3;
                if (cVar2 == '1') {
                    if (2 < uVar3) {
code_r0x08008ab0:
    //WARNING: Does not return
                        pcVar11 = SoftwareBreakpoint(0x5512,0x8008ab4);
                        (*pcVar11)();
                    }
                    uStack_1e8 = 0;
                    uStack_1e0 = 0;
                    piVar23 = iVar12 + unaff_x24 * 0x1b8;
                    uStack_208 = 0;
                    uStack_200 = *puVar26;
                    pcVar11 = *(piVar23 + 0x6a);
                    unaff_x24 = piVar23 + 2;
                    uStack_1f8 = puVar26[1];
                    uStack_1f0 = puVar26[2];
                    __cfi_slowpath_diag(0x5d7e5e3785540c6e,pcVar11,0x80002e0);
                    pcVar15 = *(piVar23 + 0x6c);
                    (*pcVar11)(unaff_x24,&uStack_208);
                    puVar29 = puStack_210;
                }
                else if (cVar2 == '0') {
                    if (2 < uVar3) goto code_r0x08008ab0;
                    iVar17 = iVar12 + unaff_x24 * 0x1b8;
                    uVar7 = *(iVar17 + 0x124);
                    piVar23 = *(iVar17 + 0x118);
                    if (uVar7 == 3) {
                        iVar19 = iVar12 + unaff_x24 * 0x1b8;
                        unaff_x27 = iVar19 + 0xa8;
                        unaff_x28 = *(iVar17 + 0x180) + *(iVar17 + 0x19c) * *(puVar26 + 9);
                        uVar14 = _raw_spin_lock_irqsave(unaff_x27);
                        unaff_x23 = iVar19 + 0xd0;
                        piVar32 = *unaff_x23;
                        _raw_spin_unlock_irqrestore(unaff_x27,uVar14);
                        if ((unaff_x23 == piVar32) || (piVar32 == 0x98)) {
                            if (piVar23[0x131] < 2) {
                                iVar19 = *(piVar23 + 0x12e);
                            }
                            else {
                                _printk(0x8001d6c,piVar23 + 0x133,*(iVar12 + unaff_x24 * 0x1b8 + 0x108),
                                        "gpi_process_imed_data_event");
                                iVar19 = *(piVar23 + 0x12e);
                            }
                            if ((iVar19 != 0) && (1 < piVar23[0x130])) {
                                ipc_log_string(iVar19,"ch:%u %s: event without a pending descriptor!\n",
                                               *(iVar12 + unaff_x24 * 0x1b8 + 0x108),"gpi_process_imed_data_event");
                            }
                            if (piVar23[0x131] < 2) {
                                iVar19 = *(piVar23 + 0x12e);
                            }
                            else {
                                _printk(0x80021e3,piVar23 + 0x133,*(iVar12 + unaff_x24 * 0x1b8 + 0x108),
                                        "gpi_process_imed_data_event",*puVar26,puVar26[1],puVar26[2],puVar26[3]);
                                iVar19 = *(piVar23 + 0x12e);
                            }
                            if ((iVar19 != 0) && (1 < piVar23[0x130])) {
                                ipc_log_string(iVar19,"ch:%u %s: Event: %08x %08x %08x %08x\n",
                                               *(iVar12 + unaff_x24 * 0x1b8 + 0x108),"gpi_process_imed_data_event",
                                               *puVar26,puVar26[1],puVar26[2],puVar26[3]);
                            }
                            if (piVar23[0x131] < 2) {
                                iVar19 = *(piVar23 + 0x12e);
                            }
                            else {
                                _printk(0x8002132,piVar23 + 0x133,*(iVar12 + unaff_x24 * 0x1b8 + 0x108),
                                        "gpi_process_imed_data_event",*unaff_x28,unaff_x28[1],unaff_x28[2],
                                        unaff_x28[3]);
                                iVar19 = *(piVar23 + 0x12e);
                            }
                            if ((iVar19 != 0) && (1 < piVar23[0x130])) {
                                ipc_log_string(iVar19,"ch:%u %s: Pending TRE: %08x %08x %08x %08x\n",
                                               *(iVar12 + unaff_x24 * 0x1b8 + 0x108),"gpi_process_imed_data_event",
                                               *unaff_x28,unaff_x28[1],unaff_x28[2],unaff_x28[3]);
                            }
                            pcVar15 = 0x600;
                            sym.gpi_generate_cb_event(iVar17 + 8,5,0x600);
                            puVar29 = puStack_210;
                        }
                        else {
                            iVar19 = iVar12 + unaff_x24 * 0x1b8;
                            uVar13 = unaff_x28 + *(iVar17 + 0x19c);
                            if (*(iVar17 + 0x180) + *(iVar19 + 0x198) <= uVar13) {
                                uVar13 = *(iVar17 + 0x180);
                            }
                            *(iVar19 + 400) = uVar13;
                            DataMemoryBarrier(2,2);
                            if (piVar23[0x196] == '\0') {
                                if (*(puVar26 + 0xb) != '\x04') {
code_r0x080087bc:
                                    if ((*(piVar32 + -0x1c) != 0) && (puVar29 = *(piVar32 + -0x18), puVar29 != NULL)) {
                                        uVar14 = *(puVar26 + 2);
                                        pcVar15 = 0x80002c0;
                                        *(puVar29 + 3) = *puVar26;
                                        *(puVar29 + 5) = uVar14;
                                        *puVar29 = puVar26[2] & 0xf;
                                        puVar29[1] = *(puVar26 + 0xb);
                                        puVar29[2] = puVar26[3];
                                        pcVar11 = *(piVar32 + -0x1c);
                                        __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar11);
                                        (*pcVar11)(puVar29);
                                    }
                                }
code_r0x08008820:
                                unaff_x24 = _raw_spin_lock_irqsave(unaff_x27);
                                piVar32 = NULL;
                                if (unaff_x23 != *unaff_x23) {
                                    piVar32 = *unaff_x23 + -0x26;
                                }
                                uVar13 = __list_del_entry_valid(piVar32 + 0x26);
                                piVar33 = unaff_x27;
                                if ((uVar13 & 1) != 0) {
                                    iVar17 = *(piVar32 + 0x26);
                                    piVar20 = *(piVar32 + 0x28);
                                    *(iVar17 + 8) = piVar20;
                                    *piVar20 = iVar17;
                                }
code_r0x0800885c:
                                piVar32[0x26] = 0x100;
                                piVar32[0x27] = -0x21530000;
                                piVar32[0x28] = 0x122;
                                piVar32[0x29] = -0x21530000;
                                _raw_spin_unlock_irqrestore(unaff_x27,unaff_x24);
                                kfree(piVar32);
                                puVar29 = puStack_210;
                                unaff_x27 = piVar33;
                            }
                            else {
                                cVar2 = *(puVar26 + 0xb);
                                puVar29 = puStack_210;
                                if (*(puVar26 + 0xf) == '\x01') {
                                    if (cVar2 == '\x02') goto code_r0x08008820;
                                    if (cVar2 == '\x10') {
                                        unaff_x28 = _raw_spin_lock_irqsave(piVar23 + 0x2a);
                                        piVar21 = *(piVar23 + 0x34);
                                        piVar33 = NULL;
                                        if (piVar23 + 0x34 != piVar21) {
                                            piVar33 = piVar21 + -0x26;
                                        }
                                        uVar13 = __list_del_entry_valid(piVar33 + 0x26);
                                        if ((uVar13 & 1) != 0) {
                                            iVar17 = *(piVar33 + 0x26);
                                            piVar20 = *(piVar33 + 0x28);
                                            *(iVar17 + 8) = piVar20;
                                            *piVar20 = iVar17;
                                        }
                                        piVar33[0x26] = 0x100;
                                        piVar33[0x27] = -0x21530000;
                                        piVar33[0x28] = 0x122;
                                        piVar33[0x29] = -0x21530000;
                                        _raw_spin_unlock_irqrestore(piVar23 + 0x2a,unaff_x28);
                                        kfree(piVar33);
                                        goto code_r0x080087bc;
                                    }
                                }
                                else if (cVar2 != '\x02') goto code_r0x080087bc;
                            }
                        }
                    }
                    else {
                        if (piVar23[0x131] < 2) {
                            iVar19 = *(piVar23 + 0x12e);
                        }
                        else {
                            pcVar25 = "INVALID";
                            if (uVar7 < 6) {
                                pcVar25 = *(obj.gpi_pm_state_str + uVar7 * 8);
                            }
                            _printk(0x8000dd8,piVar23 + 0x133,*(iVar12 + unaff_x24 * 0x1b8 + 0x108),
                                    "gpi_process_imed_data_event",pcVar25);
                            iVar19 = *(piVar23 + 0x12e);
                        }
                        if ((iVar19 != 0) && (1 < piVar23[0x130])) {
                            pcVar25 = "INVALID";
                            if (*(iVar17 + 0x124) < 6) {
                                pcVar25 = *(obj.gpi_pm_state_str + *(iVar17 + 0x124) * 8);
                            }
                            ipc_log_string(iVar19,"ch:%u %s: skipping processing event because ch @ %s state\n",
                                           *(iVar12 + unaff_x24 * 0x1b8 + 0x108),"gpi_process_imed_data_event",pcVar25
                                          );
                        }
                        pcVar15 = 0x5e9;
                        sym.gpi_generate_cb_event(iVar17 + 8,4,0x5e9);
                        puVar29 = puStack_210;
                    }
                }
                else if (cVar2 == '\"') {
                    if (2 < uVar3) goto code_r0x08008ab0;
                    iVar17 = iVar12 + unaff_x24 * 0x1b8;
                    unaff_x23 = iVar17 + 8;
                    uVar7 = *(iVar17 + 0x124);
                    iVar19 = *(iVar17 + 0x118);
                    if (uVar7 == 3) {
                        iVar28 = iVar12 + unaff_x24 * 0x1b8;
                        unaff_x28 = *puVar26;
                        piVar32 = iVar28 + 0xa8;
                        iVar31 = *(iVar17 + 0x180);
                        piVar33 = *(iVar17 + 0x170);
                        piStack_218 = unaff_x23;
                        uVar14 = _raw_spin_lock_irqsave(piVar32);
                        unaff_x23 = iVar28 + 0xd0;
                        piVar23 = *unaff_x23;
                        piStack_220 = piVar32;
                        _raw_spin_unlock_irqrestore(piVar32,uVar14);
                        unaff_x27 = piVar33;
                        piStack_228 = unaff_x23;
                        if ((unaff_x23 == piVar23) || (piVar23 == 0x98)) {
                            if (1 < *(iVar19 + 0x4c4)) {
                                _printk(0x800124b,iVar19 + 0x4cc,*(iVar12 + unaff_x24 * 0x1b8 + 0x108),
                                        "gpi_process_xfer_compl_event");
                            }
                            puVar29 = puStack_210;
                            unaff_x23 = piStack_218;
                            if ((*(iVar19 + 0x4b8) != 0) && (1 < *(iVar19 + 0x4c0))) {
                                ipc_log_string(*(iVar19 + 0x4b8),"ch:%u %s: Event without a pending descriptor!\n",
                                               *(iVar12 + unaff_x24 * 0x1b8 + 0x108),"gpi_process_xfer_compl_event");
                            }
                            if (*(iVar19 + 0x4c4) < 2) {
                                iVar17 = *(iVar19 + 0x4b8);
                            }
                            else {
                                _printk(0x80021e3,iVar19 + 0x4cc,*(iVar12 + unaff_x24 * 0x1b8 + 0x108),
                                        "gpi_process_xfer_compl_event",*puVar26,puVar26[1],puVar26[2],puVar26[3]);
                                iVar17 = *(iVar19 + 0x4b8);
                            }
                            if ((iVar17 != 0) && (1 < *(iVar19 + 0x4c0))) {
                                ipc_log_string(iVar17,"ch:%u %s: Event: %08x %08x %08x %08x\n",
                                               *(iVar12 + unaff_x24 * 0x1b8 + 0x108),"gpi_process_xfer_compl_event",
                                               *puVar26,puVar26[1],puVar26[2],puVar26[3]);
                            }
                            pcVar15 = 0x669;
                            sym.gpi_generate_cb_event(unaff_x23,5,0x669);
                        }
                        else {
                            iVar28 = iVar12 + unaff_x24 * 0x1b8;
                            uVar13 = unaff_x28 + *(iVar28 + 0x19c) + (iVar31 - piVar33);
                            if (*(iVar17 + 0x180) + *(iVar28 + 0x198) <= uVar13) {
                                uVar13 = *(iVar17 + 0x180);
                            }
                            *(iVar28 + 400) = uVar13;
                            DataMemoryBarrier(2,2);
                            if (*(iVar19 + 0x658) == '\0') {
                                if ((*(puVar26 + 0xb) != '\x04') ||
                                   (((*(iVar12 + unaff_x24 * 0x1b8 + 0x1bc) == 1 &&
                                     (*(iVar12 + unaff_x24 * 0x1b8 + 0x1b8) != 0)) || (*(iVar19 + 900) == 2)))) {
code_r0x08008700:
                                    if ((*(piVar23 + -0x1c) != 0) && (puVar29 = *(piVar23 + -0x18), puVar29 != NULL)) {
                                        pcVar15 = 0x8000280;
                                        *puVar29 = puVar26[2];
                                        puVar29[1] = *(puVar26 + 0xb);
                                        puVar29[2] = puVar26[3];
                                        pcVar11 = *(piVar23 + -0x1c);
                                        __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar11);
                                        (*pcVar11)(puVar29);
                                    }
                                }
code_r0x0800875c:
                                unaff_x27 = piStack_220;
                                unaff_x24 = _raw_spin_lock_irqsave(piStack_220);
                                piVar32 = NULL;
                                if (piStack_228 != *piStack_228) {
                                    piVar32 = *piStack_228 + -0x26;
                                }
                                uVar13 = __list_del_entry_valid(piVar32 + 0x26);
                                piVar23 = unaff_x27;
                                if ((uVar13 & 1) != 0) {
                                    iVar17 = *(piVar32 + 0x26);
                                    piVar20 = *(piVar32 + 0x28);
                                    *(iVar17 + 8) = piVar20;
                                    *piVar20 = iVar17;
                                }
                                goto code_r0x0800885c;
                            }
                            cVar2 = *(puVar26 + 0xb);
                            puVar29 = puStack_210;
                            if (*(puVar26 + 0xf) == '\x01') {
                                if (cVar2 == '\x02') goto code_r0x0800875c;
                                if (cVar2 == '\x10') {
                                    unaff_x23 = _raw_spin_lock_irqsave(iVar19 + 0xa8);
                                    piVar20 = *(iVar19 + 0xd0);
                                    iVar17 = 0;
                                    if (iVar19 + 0xd0 != piVar20) {
                                        iVar17 = piVar20 + -0x13;
                                    }
                                    uVar13 = __list_del_entry_valid(iVar17 + 0x98);
                                    if ((uVar13 & 1) != 0) {
                                        iVar28 = *(iVar17 + 0x98);
                                        piVar20 = *(iVar17 + 0xa0);
                                        *(iVar28 + 8) = piVar20;
                                        *piVar20 = iVar28;
                                    }
                                    *(iVar17 + 0x98) = 0xdead000000000100;
                                    *(iVar17 + 0xa0) = 0xdead000000000122;
                                    _raw_spin_unlock_irqrestore(iVar19 + 0xa8,unaff_x23);
                                    kfree(iVar17);
                                    goto code_r0x08008700;
                                }
                            }
                            else if (cVar2 != '\x02') goto code_r0x08008700;
                        }
                    }
                    else {
                        if (*(iVar19 + 0x4c4) < 2) {
                            iVar28 = *(iVar19 + 0x4b8);
                        }
                        else {
                            pcVar25 = "INVALID";
                            if (uVar7 < 6) {
                                pcVar25 = *(obj.gpi_pm_state_str + uVar7 * 8);
                            }
                            _printk(0x8000dd8,iVar19 + 0x4cc,*(iVar12 + unaff_x24 * 0x1b8 + 0x108),
                                    "gpi_process_xfer_compl_event",pcVar25);
                            iVar28 = *(iVar19 + 0x4b8);
                        }
                        if ((iVar28 != 0) && (1 < *(iVar19 + 0x4c0))) {
                            pcVar25 = "INVALID";
                            if (*(iVar17 + 0x124) < 6) {
                                pcVar25 = *(obj.gpi_pm_state_str + *(iVar17 + 0x124) * 8);
                            }
                            ipc_log_string(iVar28,"ch:%u %s: skipping processing event because ch @ %s state\n",
                                           *(iVar12 + unaff_x24 * 0x1b8 + 0x108),"gpi_process_xfer_compl_event",
                                           pcVar25);
                        }
                        pcVar15 = 0x658;
                        sym.gpi_generate_cb_event(unaff_x23,4,0x658);
                    }
                }
                uVar22 = *(iVar12 + 0x440);
                uVar13 = *(iVar12 + 0x448) + *(iVar12 + 0x45c);
                uVar24 = uVar22 + *(iVar12 + 0x458);
                uVar30 = *(iVar12 + 0x450) + *(iVar12 + 0x45c);
                if (uVar24 <= uVar13) {
                    uVar13 = uVar22;
                }
                if (uVar24 <= uVar30) {
                    uVar30 = uVar22;
                }
                *(iVar12 + 0x448) = uVar13;
                *(iVar12 + 0x450) = uVar30;
                DataMemoryBarrier(2,2);
                puVar26 = *(iVar12 + 0x450);
                puVar6 = puStack_210;
            } while (puVar29 != puVar26);
            iVar16 = *(iVar12 + 0x430);
            iVar18 = *(iVar12 + 0x440);
        }
        sym.writel_relaxed((iVar16 - iVar18) + *(iVar12 + 0x448),*(iVar12 + 0x3a0));
        sym.writel_relaxed(1,*(iVar12 + 0x3d0));
        pcVar11 = sym.readl_relaxed(*(iVar12 + 0x3b0));
        iVar17 = *(iVar12 + 0x430);
        iVar19 = *(iVar12 + 0x440);
        puVar26 = *(iVar12 + 0x450);
        puVar29 = iVar19 + ((pcVar11 & 0xffffffff) - iVar17);
    } while (puVar29 != puVar26);
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_1d8) {
        return pcVar11;
    }
    auVar34 = __stack_chk_fail();
    piVar33 = auVar34._0_8_;
    *extraout_x18_00 = 0x8008ab8;
    ppuStack_280 = &puStack_1d0;
    uStack_278 = 0x8008ab8;
    uStack_248 = 0x1b8;
    iVar17 = sp_el0;
    uVar30 = 0x23088;
    uVar24 = pcVar15 & 0xffffffff;
    uVar13 = auVar34._8_8_ & 0xffffffff;
    iStack_288 = *(iVar17 + 0x5e0);
    uStack_334 = 3;
    uStack_344 = 1;
    uStack_354 = 0x7f;
    iVar16 = *piVar33 * 0x4000;
    uStack_358 = iVar16 + 0x23088;
    uStack_324 = 1;
    auStack_34c[0] = 0x4f;
    auStack_34c[1] = uStack_358 | 0x30;
    uStack_33c = 1;
    uStack_338 = uStack_358 | 0x10;
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_32c = 3;
    uStack_328 = uStack_358 | 0x14;
    uStack_2f4 = 0xffffffff;
    uStack_2e4 = 0xffffffff;
    uStack_31c = 1;
    iStack_318 = iVar16 + 0x23108;
    uStack_314 = 0xf;
    uStack_304 = 0xf;
    uStack_30c = 1;
    iStack_308 = iVar16 + 0x23120;
    uStack_2a4 = 0xffffffff;
    uStack_2a0 = 0;
    uStack_2fc = 0xf;
    uStack_2f8 = uStack_358 | 0x100;
    uStack_2ec = 0;
    uStack_2e8 = uStack_358 | 0x104;
    uStack_2d4 = 0xffffffff;
    uStack_2c4 = 0xffffffff;
    uStack_2dc = 0;
    iStack_2d8 = iVar16 + 0x23400;
    uStack_2b4 = 1;
    uStack_2cc = 0;
    iStack_2c8 = iVar16 + 0x23404;
    uStack_2bc = 0;
    iStack_2b8 = iVar16 + 0x23180;
    uStack_2ac = 1;
    iStack_2a8 = iVar16 + 0x23200;
    pcVar11 = pcVar15;
    piVar32 = unaff_x23;
    puStack_270 = unaff_x28;
    puStack_268 = puVar29;
    piStack_260 = unaff_x24;
    piStack_258 = unaff_x23;
    puStack_250 = puVar26;
    piStack_240 = piVar23;
    iStack_238 = iVar12;
    if (piVar33[0x103] == '\0') {
        piVar32 = piVar33 + 0x133;
        pcVar11 = sym.gpi_handle_irq.59fdd2041444ad0be5a5134da8e511aa.cfi_jt;
        uVar7 = devm_request_threaded_irq
                          (*(*(piVar33 + 0xde) + 0x1b0),piVar33[0xe2],
                           sym.gpi_handle_irq.59fdd2041444ad0be5a5134da8e511aa.cfi_jt,0,4,piVar32,piVar33);
        if (uVar7 < 0) {
            pcVar27 = uVar7;
            if (piVar33[0x131] == 0) {
                iVar17 = *(piVar33 + 0x12e);
            }
            else {
                pcVar11 = 0x63;
                _printk(0x8001fbf,piVar32,99,"gpi_config_interrupts",piVar33[0xe2],pcVar27);
                iVar17 = *(piVar33 + 0x12e);
            }
            if ((iVar17 != 0) && (piVar33[0x130] != 0)) {
                pcVar11 = 0x63;
                ipc_log_string(iVar17,"ch:%u %s: error request irq:%d ret:%d\n",99,"gpi_config_interrupts",
                               piVar33[0xe2],pcVar27);
            }
            goto code_r0x08008cc0;
        }
    }
    if (auVar34._8_4_ == 1) {
        uVar9 = piVar33[0x12d];
        uVar7 = 8;
        if ((pcVar15 & 1) == 0) {
            uVar7 = 0;
        }
        uVar8 = uVar9 & 0xfffffff7 | uVar7;
        uVar13 = uVar8;
        uVar24 = *(piVar33 + 0xe4) + *piVar33 * 0x4000 + 0x23088;
        piVar33[0x12d] = uVar8;
        uVar8 = sym.readl_relaxed(uVar24);
        sym.writel_relaxed(uVar8 & 0xffffff80 | uVar9 & 0x77 | uVar7,uVar24);
    }
    else {
        uVar13 = 0;
        while (*(&uStack_358 + uVar13) != 0) {
            uVar24 = *(piVar33 + 0xe4) + *(&uStack_358 + uVar13);
            uVar8 = *(auStack_34c + uVar13);
            puVar29 = uVar8;
            uVar7 = *(auStack_34c + (uVar13 - 8));
            piVar32 = uVar7;
            uVar9 = *(auStack_34c + (uVar13 - 4));
            uVar30 = uVar9;
            uVar10 = sym.readl_relaxed(uVar24);
            sym.writel_relaxed(uVar10 & (uVar7 ^ 0xffffffff) | uVar8 << (uVar9 & 0x1f) & uVar7,uVar24);
            uVar13 = uVar13 + 0x10;
            if (uVar13 == 0xd0) {
    //WARNING: Does not return
                pcVar11 = SoftwareBreakpoint(0x5512,0x8008cac);
                (*pcVar11)();
            }
        }
        piVar33[0x12d] = 0x4f;
    }
    pcVar27 = NULL;
    *(piVar33 + 0x103) = 1;
code_r0x08008cc0:
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_288) {
        return pcVar27;
    }
    auVar34 = __stack_chk_fail();
    iVar12 = auVar34._0_8_;
    *extraout_x18_01 = sym.gpi_generate_cb_event;
    pcStack_388 = sym.gpi_generate_cb_event;
    iVar17 = sp_el0;
    iStack_398 = *(iVar17 + 0x5e0);
    uVar22 = auVar34._8_8_ & 0xffffffff;
    iVar17 = *(iVar12 + 0x110);
    uStack_3a8 = 0;
    uStack_3a0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3c8 = 0;
    pcStack_3c0 = NULL;
    pppuStack_390 = &ppuStack_280;
    pcStack_380 = pcVar27;
    uStack_378 = uVar13;
    uStack_370 = uVar24;
    piStack_368 = piVar33;
    if (*(iVar17 + 0x4c4) < 2) {
        iVar19 = *(iVar17 + 0x4b8);
    }
    else {
        _printk(0x8001e8e,iVar17 + 0x4cc,*(iVar12 + 0x100),"gpi_generate_cb_event",
                *(obj.gpi_cb_event_str + uVar22 * 8),pcVar11);
        iVar19 = *(iVar17 + 0x4b8);
    }
    if ((iVar19 != 0) && (1 < *(iVar17 + 0x4c0))) {
        ipc_log_string(iVar19,"ch:%u %s: notifying event:%s with status:%llu\n",*(iVar12 + 0x100),
                       "gpi_generate_cb_event",*(obj.gpi_cb_event_str + uVar22 * 8),pcVar11);
    }
    uStack_3c8 = CONCAT44(uStack_3c8._4_4_,auVar34._8_4_);
    pcStack_3c0 = pcVar11;
    uStack_3b8 = sched_clock();
    pcVar27 = *(iVar12 + 0x1a0);
    __cfi_slowpath_diag(0x5d7e5e3785540c6e,pcVar27,0x80002a0);
    pcVar11 = (*pcVar27)(iVar12,&uStack_3c8,*(iVar12 + 0x1a8));
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_398) {
        return pcVar11;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.gpi_handle_irq;
    pcStack_428 = sym.gpi_handle_irq;
    iVar19 = sp_el0;
    iStack_438 = *(iVar19 + 0x5e0);
    iVar16 = *arg1_00;
    *(arg1_00 + 0x659) = 1;
    ppppuStack_430 = &pppuStack_390;
    puStack_420 = unaff_x28;
    piStack_418 = unaff_x27;
    puStack_408 = puVar29;
    uStack_400 = uVar30;
    piStack_3f8 = piVar32;
    iStack_3f0 = iVar17;
    uStack_3e8 = uVar22;
    pcStack_3e0 = pcVar27;
    iStack_3d8 = iVar12;
    uVar14 = _raw_read_lock_irqsave();
    if (arg1_00[0x104] < 2) {
        if (arg1_00[0x131] == 0) {
            iVar17 = *(arg1_00 + 0x12e);
        }
        else {
            _printk(0x8001716,arg1_00 + 0x133,99,"gpi_handle_irq",*(obj.gpi_pm_state_str + arg1_00[0x104] * 8));
            iVar17 = *(arg1_00 + 0x12e);
        }
        if ((iVar17 != 0) && (arg1_00[0x130] != 0)) {
            if (arg1_00[0x104] < 6) {
                pcVar25 = *(obj.gpi_pm_state_str + arg1_00[0x104] * 8);
            }
            else {
                pcVar25 = "INVALID";
            }
            ipc_log_string(iVar17,"ch:%u %s: receive interrupt while in %s state\n",99,"gpi_handle_irq",pcVar25);
        }
    }
    else {
        uVar9 = sym.readl_relaxed(*(arg1_00 + 0xe4) + *arg1_00 * 0x4000 + 0x23080);
        piVar23 = arg1_00 + 0x133;
        piVar32 = arg1_00 + 2;
        piVar33 = arg1_00 + 0x70;
        piVar21 = arg1_00 + 0x124;
        uVar7 = iVar16 * 0x4000 + 0x23080;
        do {
            uVar8 = uVar9;
            if ((uVar9 >> 2 & 1) != 0) {
                if (arg1_00[0x131] < 2) {
                    iVar17 = *(arg1_00 + 0x12e);
                }
                else {
                    _printk(0x8000922,piVar23,99,"gpi_handle_irq");
                    iVar17 = *(arg1_00 + 0x12e);
                }
                if ((iVar17 != 0) && (1 < arg1_00[0x130])) {
                    ipc_log_string(iVar17,"ch:%u %s: processing global error irq\n",99,"gpi_handle_irq");
                }
                iVar16 = *arg1_00 * 0x4000;
                uVar13 = sym.readl_relaxed(*(arg1_00 + 0xe4) + iVar16 + 0x23100);
                uVar8 = uVar13;
                uStack_448 = 0;
                uStack_440 = 0;
                uStack_458 = 0;
                uStack_450 = 0;
                uStack_468 = 0;
                uStack_460 = 0;
                sym.writel_relaxed(uVar13,*(arg1_00 + 0xe4) + iVar16 + 0x23110);
                if (uVar8 < 2) {
                    uVar10 = sym.readl_relaxed(*(arg1_00 + 0xe4) + iVar16 + 0x23200);
                    sym.writel_relaxed(0,*(arg1_00 + 0xe4) + iVar16 + 0x23200);
                    uVar8 = uVar10 >> 0x13 & 0x1f;
                    uVar24 = uVar8;
                    if (1 < uVar8) {
                        if (1 < arg1_00[0x131]) {
                            _printk(0x8000b5f,piVar23,99,"gpi_process_glob_err_irq",uVar8);
                        }
                        iVar17 = *(arg1_00 + 0x12e);
                        if ((iVar17 != 0) && (1 < arg1_00[0x130])) {
                            pcVar25 = "ch:%u %s: invalid chid reported:%u\n";
                            goto code_r0x0800917c;
                        }
                        goto code_r0x08009180;
                    }
                    uVar8 = uVar10 >> 4 & 0xf;
                    uVar5 = uVar10 >> 0xc & 0xf;
                    uStack_448 = CONCAT44(uVar10 >> 4,uVar10) & 0xf0000000f;
                    uStack_468 = CONCAT44(uStack_468._4_4_,1);
                    uStack_440 = CONCAT44(uStack_440._4_4_,uVar10 >> 0xc) & 0xffffffff0000000f;
                    if (arg1_00[0x131] < 3) {
                        iVar17 = *(arg1_00 + 0x12e);
                    }
                    else {
                        _printk(0x8001be3,piVar23,arg1_00[uVar24 * 0x6e + 0x42],"gpi_process_glob_err_irq",
                                "GLOBAL ERROR");
                        iVar17 = *(arg1_00 + 0x12e);
                    }
                    if ((iVar17 != 0) && (2 < arg1_00[0x130])) {
                        ipc_log_string(iVar17,"ch:%u %s: sending CB event:%s\n",arg1_00[uVar24 * 0x6e + 0x42],
                                       "gpi_process_glob_err_irq","GLOBAL ERROR");
                    }
                    if (arg1_00[0x131] < 2) {
                        iVar17 = *(arg1_00 + 0x12e);
                    }
                    else {
                        _printk(0x8001962,piVar23,arg1_00[uVar24 * 0x6e + 0x42],"gpi_process_glob_err_irq",
                                uVar10 >> 0x1a & 1,uVar10 >> 0x19 & 1,uVar10 & 0xf,uVar8,uVar5);
                        iVar17 = *(arg1_00 + 0x12e);
                    }
                    if ((iVar17 != 0) && (1 < arg1_00[0x130])) {
                        ipc_log_string(iVar17,"ch:%u %s: ee:%u chtype:%u routine:%u type:%u error_code:%u\n",
                                       arg1_00[uVar24 * 0x6e + 0x42],"gpi_process_glob_err_irq",uVar10 >> 0x1a & 1,
                                       uVar10 >> 0x19 & 1,uVar10 & 0xf,uVar8,uVar5);
                    }
                    pcVar11 = *(arg1_00 + uVar24 * 0x6e + 0x6a);
                    __cfi_slowpath_diag(0x5d7e5e3785540c6e,pcVar11,0x8000300);
                    (*pcVar11)(arg1_00 + uVar24 * 0x6e + 2,&uStack_468,*(arg1_00 + uVar24 * 0x6e + 0x6c));
                }
                else {
                    if (arg1_00[0x131] < 2) {
                        iVar17 = *(arg1_00 + 0x12e);
                    }
                    else {
                        _printk(0x8001747,piVar23,99,"gpi_process_glob_err_irq",uVar13 & 0xffffffff);
                        iVar17 = *(arg1_00 + 0x12e);
                    }
                    if ((iVar17 != 0) && (1 < arg1_00[0x130])) {
                        pcVar25 = "ch:%u %s: invalid error status:0x%x\n";
code_r0x0800917c:
                        ipc_log_string(iVar17,pcVar25,99,"gpi_process_glob_err_irq",uVar8);
                    }
code_r0x08009180:
                    sym.gpi_generate_cb_event(piVar32,3,uVar13 & 0xffffffff);
                    sym.gpi_generate_cb_event(piVar33,3,uVar13 & 0xffffffff);
                }
                uVar8 = uVar9 & 0xfffffffb;
            }
            if ((uVar9 >> 3 & 1) != 0) {
                sym.gpi_process_ieob(arg1_00);
                uVar8 = uVar8 & 0xfffffff7;
            }
            uVar9 = uVar8;
            if ((uVar8 >> 1 & 1) != 0) {
                if (arg1_00[0x131] < 3) {
                    iVar17 = *(arg1_00 + 0x12e);
                }
                else {
                    _printk(0x8000e23,piVar23,99,"gpi_handle_irq");
                    iVar17 = *(arg1_00 + 0x12e);
                }
                if ((iVar17 != 0) && (2 < arg1_00[0x130])) {
                    ipc_log_string(iVar17,"ch:%u %s: processing EV CTRL interrupt\n",99,"gpi_handle_irq");
                }
                iVar17 = sym.readl_relaxed(*(arg1_00 + 0xe4) + (uVar7 | 0x14));
                sym.writel_relaxed(iVar17,*(arg1_00 + 0xe4) + (uVar7 | 0x24));
                uVar10 = sym.readl_relaxed(*(arg1_00 + 0xe6));
                uVar9 = 0;
                if (arg1_00[300] != 10) {
                    uVar9 = uVar10 >> 0x14 & 0xf;
                }
                arg1_00[0x102] = uVar9;
                if (arg1_00[0x131] < 3) {
                    iVar17 = *(arg1_00 + 0x12e);
                }
                else {
                    pcVar25 = "INVALID";
                    if (uVar9 < 2) {
                        pcVar25 = *(obj.gpi_ev_state_str + uVar9 * 8);
                    }
                    _printk(0x8000b3b,piVar23,99,"gpi_handle_irq",pcVar25);
                    iVar17 = *(arg1_00 + 0x12e);
                }
                if ((iVar17 != 0) && (2 < arg1_00[0x130])) {
                    pcVar25 = "INVALID";
                    if (arg1_00[0x102] < 2) {
                        pcVar25 = *(obj.gpi_ev_state_str + arg1_00[0x102] * 8);
                    }
                    ipc_log_string(iVar17,"ch:%u %s: setting EV state to %s\n",99,"gpi_handle_irq",pcVar25);
                }
                complete_all(piVar21);
                uVar9 = uVar8 & 0xfffffffd;
            }
            if ((uVar8 & 1) != 0) {
                if (arg1_00[0x131] < 3) {
                    iVar17 = *(arg1_00 + 0x12e);
                }
                else {
                    _printk(0x8001ae0,piVar23,99,"gpi_handle_irq");
                    iVar17 = *(arg1_00 + 0x12e);
                }
                if ((iVar17 != 0) && (2 < arg1_00[0x130])) {
                    ipc_log_string(iVar17,"ch:%u %s: process CH CTRL interrupts\n",99,"gpi_handle_irq");
                }
                iVar16 = *arg1_00;
                uVar13 = sym.readl_relaxed(*(arg1_00 + 0xe4) + iVar16 * 0x4000 + 0x23090);
                sym.writel_relaxed(uVar13,*(arg1_00 + 0xe4) + iVar16 * 0x4000 + 0x230a0);
                if ((uVar13 & 1) != 0) {
                    uVar10 = sym.readl_relaxed(*(arg1_00 + 0x4a));
                    uVar8 = 0;
                    if (arg1_00[300] != 4) {
                        uVar8 = uVar10 >> 0x14 & 0xf;
                    }
                    arg1_00[0x48] = uVar8;
                    complete_all(piVar21);
                    if (arg1_00[0x48] == 0xf) {
                        sym.gpi_generate_cb_event(piVar32,2,0x4df);
                    }
                }
                if ((uVar13 >> 1 & 1) != 0) {
                    uVar10 = sym.readl_relaxed(*(arg1_00 + 0xb8));
                    uVar8 = 0;
                    if (arg1_00[300] != 4) {
                        uVar8 = uVar10 >> 0x14 & 0xf;
                    }
                    arg1_00[0xb6] = uVar8;
                    complete_all(piVar21);
                    if (arg1_00[0xb6] == 0xf) {
                        sym.gpi_generate_cb_event(piVar33,2,0x4df);
                    }
                }
                uVar9 = uVar9 & 0xfffffffe;
            }
            if (uVar9 != 0) {
                if (arg1_00[0x131] == 0) {
                    iVar17 = *(arg1_00 + 0x12e);
                }
                else {
                    _printk(0x800033c,piVar23,99,"gpi_handle_irq",uVar9);
                    iVar17 = *(arg1_00 + 0x12e);
                }
                if ((iVar17 != 0) && (arg1_00[0x130] != 0)) {
                    ipc_log_string(iVar17,"ch:%u %s: Unhandled interrupt status:0x%x\n",99,"gpi_handle_irq",uVar9);
                }
                iVar16 = *arg1_00;
                uVar13 = sym.readl_relaxed(*(arg1_00 + 0xe4) + iVar16 * 0x4000 + 0x23118);
                uVar13 = uVar13 & 0xffffffff;
                if (arg1_00[0x131] < 2) {
                    iVar17 = *(arg1_00 + 0x12e);
                }
                else {
                    _printk(0x8001eee,piVar23,99,"gpi_process_gen_err_irq",uVar13);
                    iVar17 = *(arg1_00 + 0x12e);
                }
                if ((iVar17 != 0) && (1 < arg1_00[0x130])) {
                    ipc_log_string(iVar17,"ch:%u %s: irq_stts:0x%x\n",99,"gpi_process_gen_err_irq",uVar13);
                }
                if (*(arg1_00 + 0x6a) != 0) {
                    sym.gpi_generate_cb_event(piVar32,3,uVar13);
                }
                if (*(arg1_00 + 0xd8) != 0) {
                    sym.gpi_generate_cb_event(piVar33,3,uVar13);
                }
                sym.writel_relaxed(uVar13,*(arg1_00 + 0xe4) + iVar16 * 0x4000 + 0x23128);
                arg1_00[0x195] = arg1_00[0x195] + 1;
                if (arg1_00[0x194] == '\0') {
                    sym.gpi_dump_debug_reg(arg1_00);
                    *(arg1_00 + 0x194) = 1;
                }
                break;
            }
            uVar9 = sym.readl_relaxed(*(arg1_00 + 0xe4) + *arg1_00 * 0x4000 + 0x23080);
        } while (uVar9 != 0);
    }
    _raw_read_unlock_irqrestore(arg1_00 + 0x105,uVar14);
    *(arg1_00 + 0x659) = 0;
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_438) {
        return 0x1;
    }
    iVar17 = __stack_chk_fail();
    *extraout_x18_03 = sym.gpi_process_ieob;
    sym.writel_relaxed(1,*(iVar17 + 0x3d0));
    if (*(iVar17 + 0x380) == 0) {
        pcVar11 = sym.gpi_process_events(iVar17);
    }
    else {
        pcVar11 = sym.gpi_config_interrupts(iVar17,1,0);
        puVar1 = iVar17 + 0x470;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar13 = *puVar1;
            cVar2 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar13 | 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar13 & 1) == 0) {
            pcVar11 = __tasklet_schedule(iVar17 + 0x468);
        }
    }
    return pcVar11;
}


// ===== sym.gpi_process_events @ 0x080080c0 (size 2576) =====

//WARNING: Type propagation algorithm not settling

uint64_t sym.gpi_process_events(int64_t arg1)

{
    int *arg1_00;
    int *arg1_01;
    int *piVar1;
    uint64_t *puVar2;
    char cVar3;
    uint8_t uVar4;
    bool bVar5;
    uint32_t uVar6;
    uint32_t *puVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    ulong uVar13;
    uint64_t uVar14;
    int *piVar15;
    int *arg1_02;
    code *in_x2;
    char *pcVar16;
    int iVar17;
    int64_t iVar18;
    int iVar19;
    int64_t iVar20;
    int64_t *piVar21;
    uint64_t uVar22;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t unaff_x20;
    uint64_t uVar23;
    uint32_t *puVar24;
    uint64_t *unaff_x23;
    int64_t iVar25;
    uint64_t unaff_x24;
    uint32_t *puVar26;
    uint64_t uVar27;
    int64_t iVar28;
    code *pcVar29;
    uint64_t *puVar30;
    uint64_t unaff_x27;
    uint *unaff_x28;
    ulong unaff_x30;
    uchar auVar31 [16];
    ulong uStack_2f8;
    ulong uStack_2f0;
    ulong uStack_2e8;
    ulong uStack_2e0;
    uint64_t uStack_2d8;
    ulong uStack_2d0;
    int64_t iStack_2c8;
    uchar *puStack_2c0;
    code *pcStack_2b8;
    uint *puStack_2b0;
    uint64_t uStack_2a8;
    uint32_t *puStack_298;
    uint64_t uStack_290;
    uint64_t *puStack_288;
    int64_t iStack_280;
    uint64_t uStack_278;
    code *pcStack_270;
    int64_t iStack_268;
    ulong uStack_258;
    code *pcStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    int64_t iStack_228;
    uchar *puStack_220;
    code *pcStack_218;
    uint64_t uStack_210;
    uint64_t uStack_208;
    uint64_t uStack_200;
    int *piStack_1f8;
    uint32_t uStack_1e8;
    ulong uStack_1e4;
    uint32_t auStack_1dc [2];
    ulong uStack_1d4;
    uint uStack_1cc;
    uint32_t uStack_1c8;
    ulong uStack_1c4;
    uint uStack_1bc;
    uint32_t uStack_1b8;
    ulong uStack_1b4;
    uint uStack_1ac;
    int iStack_1a8;
    ulong uStack_1a4;
    uint uStack_19c;
    int iStack_198;
    ulong uStack_194;
    uint uStack_18c;
    uint32_t uStack_188;
    ulong uStack_184;
    uint uStack_17c;
    uint32_t uStack_178;
    ulong uStack_174;
    uint uStack_16c;
    int iStack_168;
    ulong uStack_164;
    uint uStack_15c;
    int iStack_158;
    ulong uStack_154;
    uint uStack_14c;
    int iStack_148;
    ulong uStack_144;
    uint uStack_13c;
    int iStack_138;
    uint uStack_134;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    uchar *puStack_110;
    ulong uStack_108;
    uint *puStack_100;
    uint32_t *puStack_f8;
    uint64_t uStack_f0;
    uint64_t *puStack_e8;
    uint32_t *puStack_e0;
    ulong uStack_d8;
    uint64_t uStack_d0;
    int64_t iStack_c8;
    uint64_t *puStack_b8;
    uint64_t uStack_b0;
    uint64_t *puStack_a8;
    uint32_t *puStack_a0;
    ulong uStack_98;
    uint64_t uStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar18 = sp_el0;
    iStack_68 = *(iVar18 + 0x5e0);
    uVar12 = sym.readl_relaxed(*(arg1 + 0x3b0));
    iVar18 = *(arg1 + 0x430);
    iVar20 = *(arg1 + 0x440);
    puVar24 = *(arg1 + 0x450);
    puVar26 = iVar20 + ((uVar12 & 0xffffffff) - iVar18);
    do {
        iVar19 = iVar20;
        iVar17 = iVar18;
        puVar7 = puVar26;
        if (puVar26 != puVar24) {
            do {
                puStack_a0 = puVar7;
                cVar3 = *(puVar24 + 0xe);
                uVar4 = *(puVar24 + 0xf);
                unaff_x24 = uVar4;
                if (cVar3 == '1') {
                    if (2 < uVar4) {
code_r0x08008ab0:
    //WARNING: Does not return
                        pcVar29 = SoftwareBreakpoint(0x5512,0x8008ab4);
                        (*pcVar29)();
                    }
                    uStack_78 = 0;
                    uStack_70 = 0;
                    unaff_x20 = arg1 + unaff_x24 * 0x1b8;
                    uStack_98 = 0;
                    uStack_90 = *puVar24;
                    pcVar29 = *(unaff_x20 + 0x1a8);
                    unaff_x24 = unaff_x20 + 8;
                    uStack_88 = puVar24[1];
                    uStack_80 = puVar24[2];
                    __cfi_slowpath_diag(0x5d7e5e3785540c6e,pcVar29,0x80002e0);
                    in_x2 = *(unaff_x20 + 0x1b0);
                    (*pcVar29)(unaff_x24,&stack0xffffffffffffff68);
                    puVar26 = puStack_a0;
                }
                else if (cVar3 == '0') {
                    if (2 < uVar4) goto code_r0x08008ab0;
                    iVar18 = arg1 + unaff_x24 * 0x1b8;
                    uVar8 = *(iVar18 + 0x124);
                    unaff_x20 = *(iVar18 + 0x118);
                    if (uVar8 == 3) {
                        iVar20 = arg1 + unaff_x24 * 0x1b8;
                        unaff_x27 = iVar20 + 0xa8;
                        unaff_x28 = *(iVar18 + 0x180) + *(iVar18 + 0x19c) * *(puVar24 + 9);
                        uVar13 = _raw_spin_lock_irqsave(unaff_x27);
                        unaff_x23 = iVar20 + 0xd0;
                        puVar30 = *unaff_x23;
                        _raw_spin_unlock_irqrestore(unaff_x27,uVar13);
                        if ((unaff_x23 == puVar30) || (puVar30 == 0x98)) {
                            if (*(unaff_x20 + 0x4c4) < 2) {
                                iVar20 = *(unaff_x20 + 0x4b8);
                            }
                            else {
                                _printk(0x8001d6c,unaff_x20 + 0x4cc,*(arg1 + unaff_x24 * 0x1b8 + 0x108),
                                        "gpi_process_imed_data_event");
                                iVar20 = *(unaff_x20 + 0x4b8);
                            }
                            if ((iVar20 != 0) && (1 < *(unaff_x20 + 0x4c0))) {
                                ipc_log_string(iVar20,"ch:%u %s: event without a pending descriptor!\n",
                                               *(arg1 + unaff_x24 * 0x1b8 + 0x108),"gpi_process_imed_data_event");
                            }
                            if (*(unaff_x20 + 0x4c4) < 2) {
                                iVar20 = *(unaff_x20 + 0x4b8);
                            }
                            else {
                                _printk(0x80021e3,unaff_x20 + 0x4cc,*(arg1 + unaff_x24 * 0x1b8 + 0x108),
                                        "gpi_process_imed_data_event",*puVar24,puVar24[1],puVar24[2],puVar24[3]);
                                iVar20 = *(unaff_x20 + 0x4b8);
                            }
                            if ((iVar20 != 0) && (1 < *(unaff_x20 + 0x4c0))) {
                                ipc_log_string(iVar20,"ch:%u %s: Event: %08x %08x %08x %08x\n",
                                               *(arg1 + unaff_x24 * 0x1b8 + 0x108),"gpi_process_imed_data_event",
                                               *puVar24,puVar24[1],puVar24[2],puVar24[3]);
                            }
                            if (*(unaff_x20 + 0x4c4) < 2) {
                                iVar20 = *(unaff_x20 + 0x4b8);
                            }
                            else {
                                _printk(0x8002132,unaff_x20 + 0x4cc,*(arg1 + unaff_x24 * 0x1b8 + 0x108),
                                        "gpi_process_imed_data_event",*unaff_x28,unaff_x28[1],unaff_x28[2],
                                        unaff_x28[3]);
                                iVar20 = *(unaff_x20 + 0x4b8);
                            }
                            if ((iVar20 != 0) && (1 < *(unaff_x20 + 0x4c0))) {
                                ipc_log_string(iVar20,"ch:%u %s: Pending TRE: %08x %08x %08x %08x\n",
                                               *(arg1 + unaff_x24 * 0x1b8 + 0x108),"gpi_process_imed_data_event",
                                               *unaff_x28,unaff_x28[1],unaff_x28[2],unaff_x28[3]);
                            }
                            in_x2 = 0x600;
                            sym.gpi_generate_cb_event(iVar18 + 8,5,0x600);
                            puVar26 = puStack_a0;
                        }
                        else {
                            iVar20 = arg1 + unaff_x24 * 0x1b8;
                            uVar12 = unaff_x28 + *(iVar18 + 0x19c);
                            if (*(iVar18 + 0x180) + *(iVar20 + 0x198) <= uVar12) {
                                uVar12 = *(iVar18 + 0x180);
                            }
                            *(iVar20 + 400) = uVar12;
                            DataMemoryBarrier(2,2);
                            if (*(unaff_x20 + 0x658) == '\0') {
                                if (*(puVar24 + 0xb) != '\x04') {
code_r0x080087bc:
                                    if ((puVar30[-0xe] != 0) && (puVar26 = puVar30[-0xc], puVar26 != NULL)) {
                                        uVar13 = *(puVar24 + 2);
                                        in_x2 = 0x80002c0;
                                        *(puVar26 + 3) = *puVar24;
                                        *(puVar26 + 5) = uVar13;
                                        *puVar26 = puVar24[2] & 0xf;
                                        puVar26[1] = *(puVar24 + 0xb);
                                        puVar26[2] = puVar24[3];
                                        pcVar29 = puVar30[-0xe];
                                        __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar29);
                                        (*pcVar29)(puVar26);
                                    }
                                }
code_r0x08008820:
                                unaff_x24 = _raw_spin_lock_irqsave(unaff_x27);
                                puVar30 = NULL;
                                if (unaff_x23 != *unaff_x23) {
                                    puVar30 = *unaff_x23 + -0x13;
                                }
                                uVar14 = __list_del_entry_valid(puVar30 + 0x13);
                                uVar12 = unaff_x27;
                                if ((uVar14 & 1) != 0) {
                                    uVar14 = puVar30[0x13];
                                    puVar2 = puVar30[0x14];
                                    *(uVar14 + 8) = puVar2;
                                    *puVar2 = uVar14;
                                }
code_r0x0800885c:
                                puVar30[0x13] = 0xdead000000000100;
                                puVar30[0x14] = 0xdead000000000122;
                                _raw_spin_unlock_irqrestore(unaff_x27,unaff_x24);
                                kfree(puVar30);
                                puVar26 = puStack_a0;
                                unaff_x27 = uVar12;
                            }
                            else {
                                cVar3 = *(puVar24 + 0xb);
                                puVar26 = puStack_a0;
                                if (*(puVar24 + 0xf) == '\x01') {
                                    if (cVar3 == '\x02') goto code_r0x08008820;
                                    if (cVar3 == '\x10') {
                                        unaff_x28 = _raw_spin_lock_irqsave(unaff_x20 + 0xa8);
                                        piVar21 = *(unaff_x20 + 0xd0);
                                        iVar18 = 0;
                                        if (unaff_x20 + 0xd0 != piVar21) {
                                            iVar18 = piVar21 + -0x13;
                                        }
                                        uVar12 = __list_del_entry_valid(iVar18 + 0x98);
                                        if ((uVar12 & 1) != 0) {
                                            iVar20 = *(iVar18 + 0x98);
                                            piVar21 = *(iVar18 + 0xa0);
                                            *(iVar20 + 8) = piVar21;
                                            *piVar21 = iVar20;
                                        }
                                        *(iVar18 + 0x98) = 0xdead000000000100;
                                        *(iVar18 + 0xa0) = 0xdead000000000122;
                                        _raw_spin_unlock_irqrestore(unaff_x20 + 0xa8,unaff_x28);
                                        kfree(iVar18);
                                        goto code_r0x080087bc;
                                    }
                                }
                                else if (cVar3 != '\x02') goto code_r0x080087bc;
                            }
                        }
                    }
                    else {
                        if (*(unaff_x20 + 0x4c4) < 2) {
                            iVar20 = *(unaff_x20 + 0x4b8);
                        }
                        else {
                            pcVar16 = "INVALID";
                            if (uVar8 < 6) {
                                pcVar16 = *(obj.gpi_pm_state_str + uVar8 * 8);
                            }
                            _printk(0x8000dd8,unaff_x20 + 0x4cc,*(arg1 + unaff_x24 * 0x1b8 + 0x108),
                                    "gpi_process_imed_data_event",pcVar16);
                            iVar20 = *(unaff_x20 + 0x4b8);
                        }
                        if ((iVar20 != 0) && (1 < *(unaff_x20 + 0x4c0))) {
                            pcVar16 = "INVALID";
                            if (*(iVar18 + 0x124) < 6) {
                                pcVar16 = *(obj.gpi_pm_state_str + *(iVar18 + 0x124) * 8);
                            }
                            ipc_log_string(iVar20,"ch:%u %s: skipping processing event because ch @ %s state\n",
                                           *(arg1 + unaff_x24 * 0x1b8 + 0x108),"gpi_process_imed_data_event",pcVar16);
                        }
                        in_x2 = 0x5e9;
                        sym.gpi_generate_cb_event(iVar18 + 8,4,0x5e9);
                        puVar26 = puStack_a0;
                    }
                }
                else if (cVar3 == '\"') {
                    if (2 < uVar4) goto code_r0x08008ab0;
                    iVar18 = arg1 + unaff_x24 * 0x1b8;
                    unaff_x23 = iVar18 + 8;
                    uVar8 = *(iVar18 + 0x124);
                    iVar20 = *(iVar18 + 0x118);
                    if (uVar8 == 3) {
                        iVar25 = arg1 + unaff_x24 * 0x1b8;
                        unaff_x28 = *puVar24;
                        uVar14 = iVar25 + 0xa8;
                        iVar28 = *(iVar18 + 0x180);
                        uVar12 = *(iVar18 + 0x170);
                        puStack_a8 = unaff_x23;
                        uVar13 = _raw_spin_lock_irqsave(uVar14);
                        unaff_x23 = iVar25 + 0xd0;
                        unaff_x20 = *unaff_x23;
                        uStack_b0 = uVar14;
                        _raw_spin_unlock_irqrestore(uVar14,uVar13);
                        unaff_x27 = uVar12;
                        puStack_b8 = unaff_x23;
                        if ((unaff_x23 == unaff_x20) || (unaff_x20 == 0x98)) {
                            if (1 < *(iVar20 + 0x4c4)) {
                                _printk(0x800124b,iVar20 + 0x4cc,*(arg1 + unaff_x24 * 0x1b8 + 0x108),
                                        "gpi_process_xfer_compl_event");
                            }
                            puVar26 = puStack_a0;
                            unaff_x23 = puStack_a8;
                            if ((*(iVar20 + 0x4b8) != 0) && (1 < *(iVar20 + 0x4c0))) {
                                ipc_log_string(*(iVar20 + 0x4b8),"ch:%u %s: Event without a pending descriptor!\n",
                                               *(arg1 + unaff_x24 * 0x1b8 + 0x108),"gpi_process_xfer_compl_event");
                            }
                            if (*(iVar20 + 0x4c4) < 2) {
                                iVar18 = *(iVar20 + 0x4b8);
                            }
                            else {
                                _printk(0x80021e3,iVar20 + 0x4cc,*(arg1 + unaff_x24 * 0x1b8 + 0x108),
                                        "gpi_process_xfer_compl_event",*puVar24,puVar24[1],puVar24[2],puVar24[3]);
                                iVar18 = *(iVar20 + 0x4b8);
                            }
                            if ((iVar18 != 0) && (1 < *(iVar20 + 0x4c0))) {
                                ipc_log_string(iVar18,"ch:%u %s: Event: %08x %08x %08x %08x\n",
                                               *(arg1 + unaff_x24 * 0x1b8 + 0x108),"gpi_process_xfer_compl_event",
                                               *puVar24,puVar24[1],puVar24[2],puVar24[3]);
                            }
                            in_x2 = 0x669;
                            sym.gpi_generate_cb_event(unaff_x23,5,0x669);
                        }
                        else {
                            iVar25 = arg1 + unaff_x24 * 0x1b8;
                            uVar14 = unaff_x28 + *(iVar25 + 0x19c) + (iVar28 - uVar12);
                            if (*(iVar18 + 0x180) + *(iVar25 + 0x198) <= uVar14) {
                                uVar14 = *(iVar18 + 0x180);
                            }
                            *(iVar25 + 400) = uVar14;
                            DataMemoryBarrier(2,2);
                            if (*(iVar20 + 0x658) == '\0') {
                                if ((*(puVar24 + 0xb) != '\x04') ||
                                   (((*(arg1 + unaff_x24 * 0x1b8 + 0x1bc) == 1 &&
                                     (*(arg1 + unaff_x24 * 0x1b8 + 0x1b8) != 0)) || (*(iVar20 + 900) == 2)))) {
code_r0x08008700:
                                    if ((*(unaff_x20 - 0x70) != 0) && (puVar26 = *(unaff_x20 - 0x60), puVar26 != NULL))
                                    {
                                        in_x2 = 0x8000280;
                                        *puVar26 = puVar24[2];
                                        puVar26[1] = *(puVar24 + 0xb);
                                        puVar26[2] = puVar24[3];
                                        pcVar29 = *(unaff_x20 - 0x70);
                                        __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar29);
                                        (*pcVar29)(puVar26);
                                    }
                                }
code_r0x0800875c:
                                unaff_x27 = uStack_b0;
                                unaff_x24 = _raw_spin_lock_irqsave(uStack_b0);
                                puVar30 = NULL;
                                if (puStack_b8 != *puStack_b8) {
                                    puVar30 = *puStack_b8 + -0x13;
                                }
                                uVar14 = __list_del_entry_valid(puVar30 + 0x13);
                                unaff_x20 = unaff_x27;
                                if ((uVar14 & 1) != 0) {
                                    uVar14 = puVar30[0x13];
                                    puVar2 = puVar30[0x14];
                                    *(uVar14 + 8) = puVar2;
                                    *puVar2 = uVar14;
                                }
                                goto code_r0x0800885c;
                            }
                            cVar3 = *(puVar24 + 0xb);
                            puVar26 = puStack_a0;
                            if (*(puVar24 + 0xf) == '\x01') {
                                if (cVar3 == '\x02') goto code_r0x0800875c;
                                if (cVar3 == '\x10') {
                                    unaff_x23 = _raw_spin_lock_irqsave(iVar20 + 0xa8);
                                    piVar21 = *(iVar20 + 0xd0);
                                    iVar18 = 0;
                                    if (iVar20 + 0xd0 != piVar21) {
                                        iVar18 = piVar21 + -0x13;
                                    }
                                    uVar14 = __list_del_entry_valid(iVar18 + 0x98);
                                    if ((uVar14 & 1) != 0) {
                                        iVar25 = *(iVar18 + 0x98);
                                        piVar21 = *(iVar18 + 0xa0);
                                        *(iVar25 + 8) = piVar21;
                                        *piVar21 = iVar25;
                                    }
                                    *(iVar18 + 0x98) = 0xdead000000000100;
                                    *(iVar18 + 0xa0) = 0xdead000000000122;
                                    _raw_spin_unlock_irqrestore(iVar20 + 0xa8,unaff_x23);
                                    kfree(iVar18);
                                    goto code_r0x08008700;
                                }
                            }
                            else if (cVar3 != '\x02') goto code_r0x08008700;
                        }
                    }
                    else {
                        if (*(iVar20 + 0x4c4) < 2) {
                            iVar25 = *(iVar20 + 0x4b8);
                        }
                        else {
                            pcVar16 = "INVALID";
                            if (uVar8 < 6) {
                                pcVar16 = *(obj.gpi_pm_state_str + uVar8 * 8);
                            }
                            _printk(0x8000dd8,iVar20 + 0x4cc,*(arg1 + unaff_x24 * 0x1b8 + 0x108),
                                    "gpi_process_xfer_compl_event",pcVar16);
                            iVar25 = *(iVar20 + 0x4b8);
                        }
                        if ((iVar25 != 0) && (1 < *(iVar20 + 0x4c0))) {
                            pcVar16 = "INVALID";
                            if (*(iVar18 + 0x124) < 6) {
                                pcVar16 = *(obj.gpi_pm_state_str + *(iVar18 + 0x124) * 8);
                            }
                            ipc_log_string(iVar25,"ch:%u %s: skipping processing event because ch @ %s state\n",
                                           *(arg1 + unaff_x24 * 0x1b8 + 0x108),"gpi_process_xfer_compl_event",pcVar16)
                            ;
                        }
                        in_x2 = 0x658;
                        sym.gpi_generate_cb_event(unaff_x23,4,0x658);
                    }
                }
                uVar22 = *(arg1 + 0x440);
                uVar12 = *(arg1 + 0x448) + *(arg1 + 0x45c);
                uVar14 = uVar22 + *(arg1 + 0x458);
                uVar27 = *(arg1 + 0x450) + *(arg1 + 0x45c);
                if (uVar14 <= uVar12) {
                    uVar12 = uVar22;
                }
                if (uVar14 <= uVar27) {
                    uVar27 = uVar22;
                }
                *(arg1 + 0x448) = uVar12;
                *(arg1 + 0x450) = uVar27;
                DataMemoryBarrier(2,2);
                puVar24 = *(arg1 + 0x450);
                puVar7 = puStack_a0;
            } while (puVar26 != puVar24);
            iVar17 = *(arg1 + 0x430);
            iVar19 = *(arg1 + 0x440);
        }
        sym.writel_relaxed((iVar17 - iVar19) + *(arg1 + 0x448),*(arg1 + 0x3a0));
        sym.writel_relaxed(1,*(arg1 + 0x3d0));
        uVar12 = sym.readl_relaxed(*(arg1 + 0x3b0));
        iVar18 = *(arg1 + 0x430);
        iVar20 = *(arg1 + 0x440);
        puVar24 = *(arg1 + 0x450);
        puVar26 = iVar20 + ((uVar12 & 0xffffffff) - iVar18);
    } while (puVar26 != puVar24);
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_68) {
        return uVar12;
    }
    auVar31 = __stack_chk_fail();
    piVar15 = auVar31._0_8_;
    *extraout_x18 = 0x8008ab8;
    puStack_110 = &stack0xffffffffffffffa0;
    uStack_108 = 0x8008ab8;
    uStack_d8 = 0x1b8;
    iVar18 = sp_el0;
    uVar27 = 0x23088;
    uVar14 = in_x2 & 0xffffffff;
    uVar12 = auVar31._8_8_ & 0xffffffff;
    iStack_118 = *(iVar18 + 0x5e0);
    uStack_1c4 = 3;
    uStack_1d4 = 1;
    uStack_1e4 = 0x7f;
    iVar17 = *piVar15 * 0x4000;
    uStack_1e8 = iVar17 + 0x23088;
    uStack_1b4 = 1;
    auStack_1dc[0] = 0x4f;
    auStack_1dc[1] = uStack_1e8 | 0x30;
    uStack_1cc = 1;
    uStack_1c8 = uStack_1e8 | 0x10;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_1bc = 3;
    uStack_1b8 = uStack_1e8 | 0x14;
    uStack_184 = 0xffffffff;
    uStack_174 = 0xffffffff;
    uStack_1ac = 1;
    iStack_1a8 = iVar17 + 0x23108;
    uStack_1a4 = 0xf;
    uStack_194 = 0xf;
    uStack_19c = 1;
    iStack_198 = iVar17 + 0x23120;
    uStack_134 = 0xffffffff;
    uStack_130 = 0;
    uStack_18c = 0xf;
    uStack_188 = uStack_1e8 | 0x100;
    uStack_17c = 0;
    uStack_178 = uStack_1e8 | 0x104;
    uStack_164 = 0xffffffff;
    uStack_154 = 0xffffffff;
    uStack_16c = 0;
    iStack_168 = iVar17 + 0x23400;
    uStack_144 = 1;
    uStack_15c = 0;
    iStack_158 = iVar17 + 0x23404;
    uStack_14c = 0;
    iStack_148 = iVar17 + 0x23180;
    uStack_13c = 1;
    iStack_138 = iVar17 + 0x23200;
    pcVar29 = in_x2;
    puVar30 = unaff_x23;
    puStack_100 = unaff_x28;
    puStack_f8 = puVar26;
    uStack_f0 = unaff_x24;
    puStack_e8 = unaff_x23;
    puStack_e0 = puVar24;
    uStack_d0 = unaff_x20;
    iStack_c8 = arg1;
    if (piVar15[0x103] == '\0') {
        puVar30 = piVar15 + 0x133;
        pcVar29 = sym.gpi_handle_irq.59fdd2041444ad0be5a5134da8e511aa.cfi_jt;
        uVar8 = devm_request_threaded_irq
                          (*(*(piVar15 + 0xde) + 0x1b0),piVar15[0xe2],
                           sym.gpi_handle_irq.59fdd2041444ad0be5a5134da8e511aa.cfi_jt,0,4,puVar30,piVar15);
        if (uVar8 < 0) {
            uVar22 = uVar8;
            if (piVar15[0x131] == 0) {
                iVar18 = *(piVar15 + 0x12e);
            }
            else {
                pcVar29 = 0x63;
                _printk(0x8001fbf,puVar30,99,"gpi_config_interrupts",piVar15[0xe2],uVar22);
                iVar18 = *(piVar15 + 0x12e);
            }
            if ((iVar18 != 0) && (piVar15[0x130] != 0)) {
                pcVar29 = 0x63;
                ipc_log_string(iVar18,"ch:%u %s: error request irq:%d ret:%d\n",99,"gpi_config_interrupts",
                               piVar15[0xe2],uVar22);
            }
            goto code_r0x08008cc0;
        }
    }
    if (auVar31._8_4_ == 1) {
        uVar10 = piVar15[0x12d];
        uVar8 = 8;
        if ((in_x2 & 1) == 0) {
            uVar8 = 0;
        }
        uVar9 = uVar10 & 0xfffffff7 | uVar8;
        uVar12 = uVar9;
        uVar14 = *(piVar15 + 0xe4) + *piVar15 * 0x4000 + 0x23088;
        piVar15[0x12d] = uVar9;
        uVar9 = sym.readl_relaxed(uVar14);
        sym.writel_relaxed(uVar9 & 0xffffff80 | uVar10 & 0x77 | uVar8,uVar14);
    }
    else {
        uVar12 = 0;
        while (*(&stack0xfffffffffffffe18 + uVar12) != 0) {
            uVar14 = *(piVar15 + 0xe4) + *(&stack0xfffffffffffffe18 + uVar12);
            uVar9 = *(&stack0xfffffffffffffe24 + uVar12);
            puVar26 = uVar9;
            uVar8 = *(&stack0xfffffffffffffe1c + uVar12);
            puVar30 = uVar8;
            uVar10 = *(&stack0xfffffffffffffe20 + uVar12);
            uVar27 = uVar10;
            uVar11 = sym.readl_relaxed(uVar14);
            sym.writel_relaxed(uVar11 & (uVar8 ^ 0xffffffff) | uVar9 << (uVar10 & 0x1f) & uVar8,uVar14);
            uVar12 = uVar12 + 0x10;
            if (uVar12 == 0xd0) {
    //WARNING: Does not return
                pcVar29 = SoftwareBreakpoint(0x5512,0x8008cac);
                (*pcVar29)();
            }
        }
        piVar15[0x12d] = 0x4f;
    }
    uVar22 = 0;
    *(piVar15 + 0x103) = 1;
code_r0x08008cc0:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_118) {
        return uVar22;
    }
    auVar31 = __stack_chk_fail();
    iVar20 = auVar31._0_8_;
    *extraout_x18_00 = sym.gpi_generate_cb_event;
    pcStack_218 = sym.gpi_generate_cb_event;
    iVar18 = sp_el0;
    iStack_228 = *(iVar18 + 0x5e0);
    uVar23 = auVar31._8_8_ & 0xffffffff;
    iVar18 = *(iVar20 + 0x110);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    pcStack_250 = NULL;
    puStack_220 = &stack0xfffffffffffffef0;
    uStack_210 = uVar22;
    uStack_208 = uVar12;
    uStack_200 = uVar14;
    piStack_1f8 = piVar15;
    if (*(iVar18 + 0x4c4) < 2) {
        iVar25 = *(iVar18 + 0x4b8);
    }
    else {
        _printk(0x8001e8e,iVar18 + 0x4cc,*(iVar20 + 0x100),"gpi_generate_cb_event",
                *(obj.gpi_cb_event_str + uVar23 * 8),pcVar29);
        iVar25 = *(iVar18 + 0x4b8);
    }
    if ((iVar25 != 0) && (1 < *(iVar18 + 0x4c0))) {
        ipc_log_string(iVar25,"ch:%u %s: notifying event:%s with status:%llu\n",*(iVar20 + 0x100),
                       "gpi_generate_cb_event",*(obj.gpi_cb_event_str + uVar23 * 8),pcVar29);
    }
    uStack_258 = CONCAT44(uStack_258._4_4_,auVar31._8_4_);
    pcStack_250 = pcVar29;
    uStack_248 = sched_clock();
    pcVar29 = *(iVar20 + 0x1a0);
    __cfi_slowpath_diag(0x5d7e5e3785540c6e,pcVar29,0x80002a0);
    uVar12 = (*pcVar29)(iVar20,&stack0xfffffffffffffda8,*(iVar20 + 0x1a8));
    iVar25 = sp_el0;
    if (*(iVar25 + 0x5e0) == iStack_228) {
        return uVar12;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.gpi_handle_irq;
    pcStack_2b8 = sym.gpi_handle_irq;
    iVar25 = sp_el0;
    iStack_2c8 = *(iVar25 + 0x5e0);
    iVar17 = *arg1_02;
    *(arg1_02 + 0x659) = 1;
    puStack_2c0 = &stack0xfffffffffffffde0;
    puStack_2b0 = unaff_x28;
    uStack_2a8 = unaff_x27;
    puStack_298 = puVar26;
    uStack_290 = uVar27;
    puStack_288 = puVar30;
    iStack_280 = iVar18;
    uStack_278 = uVar23;
    pcStack_270 = pcVar29;
    iStack_268 = iVar20;
    uVar13 = _raw_read_lock_irqsave();
    if (arg1_02[0x104] < 2) {
        if (arg1_02[0x131] == 0) {
            iVar18 = *(arg1_02 + 0x12e);
        }
        else {
            _printk(0x8001716,arg1_02 + 0x133,99,"gpi_handle_irq",*(obj.gpi_pm_state_str + arg1_02[0x104] * 8));
            iVar18 = *(arg1_02 + 0x12e);
        }
        if ((iVar18 != 0) && (arg1_02[0x130] != 0)) {
            if (arg1_02[0x104] < 6) {
                pcVar16 = *(obj.gpi_pm_state_str + arg1_02[0x104] * 8);
            }
            else {
                pcVar16 = "INVALID";
            }
            ipc_log_string(iVar18,"ch:%u %s: receive interrupt while in %s state\n",99,"gpi_handle_irq",pcVar16);
        }
    }
    else {
        uVar10 = sym.readl_relaxed(*(arg1_02 + 0xe4) + *arg1_02 * 0x4000 + 0x23080);
        piVar15 = arg1_02 + 0x133;
        arg1_00 = arg1_02 + 2;
        arg1_01 = arg1_02 + 0x70;
        piVar1 = arg1_02 + 0x124;
        uVar8 = iVar17 * 0x4000 + 0x23080;
        do {
            uVar9 = uVar10;
            if ((uVar10 >> 2 & 1) != 0) {
                if (arg1_02[0x131] < 2) {
                    iVar18 = *(arg1_02 + 0x12e);
                }
                else {
                    _printk(0x8000922,piVar15,99,"gpi_handle_irq");
                    iVar18 = *(arg1_02 + 0x12e);
                }
                if ((iVar18 != 0) && (1 < arg1_02[0x130])) {
                    ipc_log_string(iVar18,"ch:%u %s: processing global error irq\n",99,"gpi_handle_irq");
                }
                iVar17 = *arg1_02 * 0x4000;
                uVar12 = sym.readl_relaxed(*(arg1_02 + 0xe4) + iVar17 + 0x23100);
                uVar9 = uVar12;
                uStack_2d8 = 0;
                uStack_2d0 = 0;
                uStack_2e8 = 0;
                uStack_2e0 = 0;
                uStack_2f8 = 0;
                uStack_2f0 = 0;
                sym.writel_relaxed(uVar12,*(arg1_02 + 0xe4) + iVar17 + 0x23110);
                if (uVar9 < 2) {
                    uVar11 = sym.readl_relaxed(*(arg1_02 + 0xe4) + iVar17 + 0x23200);
                    sym.writel_relaxed(0,*(arg1_02 + 0xe4) + iVar17 + 0x23200);
                    uVar9 = uVar11 >> 0x13 & 0x1f;
                    uVar14 = uVar9;
                    if (1 < uVar9) {
                        if (1 < arg1_02[0x131]) {
                            _printk(0x8000b5f,piVar15,99,"gpi_process_glob_err_irq",uVar9);
                        }
                        iVar18 = *(arg1_02 + 0x12e);
                        if ((iVar18 != 0) && (1 < arg1_02[0x130])) {
                            pcVar16 = "ch:%u %s: invalid chid reported:%u\n";
                            goto code_r0x0800917c;
                        }
                        goto code_r0x08009180;
                    }
                    uVar9 = uVar11 >> 4 & 0xf;
                    uVar6 = uVar11 >> 0xc & 0xf;
                    uStack_2d8 = CONCAT44(uVar11 >> 4,uVar11) & 0xf0000000f;
                    uStack_2f8 = CONCAT44(uStack_2f8._4_4_,1);
                    uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar11 >> 0xc) & 0xffffffff0000000f;
                    if (arg1_02[0x131] < 3) {
                        iVar18 = *(arg1_02 + 0x12e);
                    }
                    else {
                        _printk(0x8001be3,piVar15,arg1_02[uVar14 * 0x6e + 0x42],"gpi_process_glob_err_irq",
                                "GLOBAL ERROR");
                        iVar18 = *(arg1_02 + 0x12e);
                    }
                    if ((iVar18 != 0) && (2 < arg1_02[0x130])) {
                        ipc_log_string(iVar18,"ch:%u %s: sending CB event:%s\n",arg1_02[uVar14 * 0x6e + 0x42],
                                       "gpi_process_glob_err_irq","GLOBAL ERROR");
                    }
                    if (arg1_02[0x131] < 2) {
                        iVar18 = *(arg1_02 + 0x12e);
                    }
                    else {
                        _printk(0x8001962,piVar15,arg1_02[uVar14 * 0x6e + 0x42],"gpi_process_glob_err_irq",
                                uVar11 >> 0x1a & 1,uVar11 >> 0x19 & 1,uVar11 & 0xf,uVar9,uVar6);
                        iVar18 = *(arg1_02 + 0x12e);
                    }
                    if ((iVar18 != 0) && (1 < arg1_02[0x130])) {
                        ipc_log_string(iVar18,"ch:%u %s: ee:%u chtype:%u routine:%u type:%u error_code:%u\n",
                                       arg1_02[uVar14 * 0x6e + 0x42],"gpi_process_glob_err_irq",uVar11 >> 0x1a & 1,
                                       uVar11 >> 0x19 & 1,uVar11 & 0xf,uVar9,uVar6);
                    }
                    pcVar29 = *(arg1_02 + uVar14 * 0x6e + 0x6a);
                    __cfi_slowpath_diag(0x5d7e5e3785540c6e,pcVar29,0x8000300);
                    (*pcVar29)(arg1_02 + uVar14 * 0x6e + 2,&stack0xfffffffffffffd08,*(arg1_02 + uVar14 * 0x6e + 0x6c))
                    ;
                }
                else {
                    if (arg1_02[0x131] < 2) {
                        iVar18 = *(arg1_02 + 0x12e);
                    }
                    else {
                        _printk(0x8001747,piVar15,99,"gpi_process_glob_err_irq",uVar12 & 0xffffffff);
                        iVar18 = *(arg1_02 + 0x12e);
                    }
                    if ((iVar18 != 0) && (1 < arg1_02[0x130])) {
                        pcVar16 = "ch:%u %s: invalid error status:0x%x\n";
code_r0x0800917c:
                        ipc_log_string(iVar18,pcVar16,99,"gpi_process_glob_err_irq",uVar9);
                    }
code_r0x08009180:
                    sym.gpi_generate_cb_event(arg1_00,3,uVar12 & 0xffffffff);
                    sym.gpi_generate_cb_event(arg1_01,3,uVar12 & 0xffffffff);
                }
                uVar9 = uVar10 & 0xfffffffb;
            }
            if ((uVar10 >> 3 & 1) != 0) {
                sym.gpi_process_ieob(arg1_02);
                uVar9 = uVar9 & 0xfffffff7;
            }
            uVar10 = uVar9;
            if ((uVar9 >> 1 & 1) != 0) {
                if (arg1_02[0x131] < 3) {
                    iVar18 = *(arg1_02 + 0x12e);
                }
                else {
                    _printk(0x8000e23,piVar15,99,"gpi_handle_irq");
                    iVar18 = *(arg1_02 + 0x12e);
                }
                if ((iVar18 != 0) && (2 < arg1_02[0x130])) {
                    ipc_log_string(iVar18,"ch:%u %s: processing EV CTRL interrupt\n",99,"gpi_handle_irq");
                }
                iVar18 = sym.readl_relaxed(*(arg1_02 + 0xe4) + (uVar8 | 0x14));
                sym.writel_relaxed(iVar18,*(arg1_02 + 0xe4) + (uVar8 | 0x24));
                uVar11 = sym.readl_relaxed(*(arg1_02 + 0xe6));
                uVar10 = 0;
                if (arg1_02[300] != 10) {
                    uVar10 = uVar11 >> 0x14 & 0xf;
                }
                arg1_02[0x102] = uVar10;
                if (arg1_02[0x131] < 3) {
                    iVar18 = *(arg1_02 + 0x12e);
                }
                else {
                    pcVar16 = "INVALID";
                    if (uVar10 < 2) {
                        pcVar16 = *(obj.gpi_ev_state_str + uVar10 * 8);
                    }
                    _printk(0x8000b3b,piVar15,99,"gpi_handle_irq",pcVar16);
                    iVar18 = *(arg1_02 + 0x12e);
                }
                if ((iVar18 != 0) && (2 < arg1_02[0x130])) {
                    pcVar16 = "INVALID";
                    if (arg1_02[0x102] < 2) {
                        pcVar16 = *(obj.gpi_ev_state_str + arg1_02[0x102] * 8);
                    }
                    ipc_log_string(iVar18,"ch:%u %s: setting EV state to %s\n",99,"gpi_handle_irq",pcVar16);
                }
                complete_all(piVar1);
                uVar10 = uVar9 & 0xfffffffd;
            }
            if ((uVar9 & 1) != 0) {
                if (arg1_02[0x131] < 3) {
                    iVar18 = *(arg1_02 + 0x12e);
                }
                else {
                    _printk(0x8001ae0,piVar15,99,"gpi_handle_irq");
                    iVar18 = *(arg1_02 + 0x12e);
                }
                if ((iVar18 != 0) && (2 < arg1_02[0x130])) {
                    ipc_log_string(iVar18,"ch:%u %s: process CH CTRL interrupts\n",99,"gpi_handle_irq");
                }
                iVar17 = *arg1_02;
                uVar12 = sym.readl_relaxed(*(arg1_02 + 0xe4) + iVar17 * 0x4000 + 0x23090);
                sym.writel_relaxed(uVar12,*(arg1_02 + 0xe4) + iVar17 * 0x4000 + 0x230a0);
                if ((uVar12 & 1) != 0) {
                    uVar11 = sym.readl_relaxed(*(arg1_02 + 0x4a));
                    uVar9 = 0;
                    if (arg1_02[300] != 4) {
                        uVar9 = uVar11 >> 0x14 & 0xf;
                    }
                    arg1_02[0x48] = uVar9;
                    complete_all(piVar1);
                    if (arg1_02[0x48] == 0xf) {
                        sym.gpi_generate_cb_event(arg1_00,2,0x4df);
                    }
                }
                if ((uVar12 >> 1 & 1) != 0) {
                    uVar11 = sym.readl_relaxed(*(arg1_02 + 0xb8));
                    uVar9 = 0;
                    if (arg1_02[300] != 4) {
                        uVar9 = uVar11 >> 0x14 & 0xf;
                    }
                    arg1_02[0xb6] = uVar9;
                    complete_all(piVar1);
                    if (arg1_02[0xb6] == 0xf) {
                        sym.gpi_generate_cb_event(arg1_01,2,0x4df);
                    }
                }
                uVar10 = uVar10 & 0xfffffffe;
            }
            if (uVar10 != 0) {
                if (arg1_02[0x131] == 0) {
                    iVar18 = *(arg1_02 + 0x12e);
                }
                else {
                    _printk(0x800033c,piVar15,99,"gpi_handle_irq",uVar10);
                    iVar18 = *(arg1_02 + 0x12e);
                }
                if ((iVar18 != 0) && (arg1_02[0x130] != 0)) {
                    ipc_log_string(iVar18,"ch:%u %s: Unhandled interrupt status:0x%x\n",99,"gpi_handle_irq",uVar10);
                }
                iVar17 = *arg1_02;
                uVar12 = sym.readl_relaxed(*(arg1_02 + 0xe4) + iVar17 * 0x4000 + 0x23118);
                uVar12 = uVar12 & 0xffffffff;
                if (arg1_02[0x131] < 2) {
                    iVar18 = *(arg1_02 + 0x12e);
                }
                else {
                    _printk(0x8001eee,piVar15,99,"gpi_process_gen_err_irq",uVar12);
                    iVar18 = *(arg1_02 + 0x12e);
                }
                if ((iVar18 != 0) && (1 < arg1_02[0x130])) {
                    ipc_log_string(iVar18,"ch:%u %s: irq_stts:0x%x\n",99,"gpi_process_gen_err_irq",uVar12);
                }
                if (*(arg1_02 + 0x6a) != 0) {
                    sym.gpi_generate_cb_event(arg1_00,3,uVar12);
                }
                if (*(arg1_02 + 0xd8) != 0) {
                    sym.gpi_generate_cb_event(arg1_01,3,uVar12);
                }
                sym.writel_relaxed(uVar12,*(arg1_02 + 0xe4) + iVar17 * 0x4000 + 0x23128);
                arg1_02[0x195] = arg1_02[0x195] + 1;
                if (arg1_02[0x194] == '\0') {
                    sym.gpi_dump_debug_reg(arg1_02);
                    *(arg1_02 + 0x194) = 1;
                }
                break;
            }
            uVar10 = sym.readl_relaxed(*(arg1_02 + 0xe4) + *arg1_02 * 0x4000 + 0x23080);
        } while (uVar10 != 0);
    }
    _raw_read_unlock_irqrestore(arg1_02 + 0x105,uVar13);
    *(arg1_02 + 0x659) = 0;
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_2c8) {
        return 1;
    }
    iVar18 = __stack_chk_fail();
    *extraout_x18_02 = sym.gpi_process_ieob;
    sym.writel_relaxed(1,*(iVar18 + 0x3d0));
    if (*(iVar18 + 0x380) == 0) {
        uVar12 = sym.gpi_process_events(iVar18);
    }
    else {
        uVar12 = sym.gpi_config_interrupts(iVar18,1,0);
        puVar30 = iVar18 + 0x470;
        Hint_Prefetch(puVar30,2,0,1);
        do {
            uVar14 = *puVar30;
            cVar3 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar30,0x10);
            if (bVar5) {
                *puVar30 = uVar14 | 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar14 & 1) == 0) {
            uVar12 = __tasklet_schedule(iVar18 + 0x468);
        }
    }
    return uVar12;
}


// ===== sym.gpi_config_interrupts @ 0x08008ad0 (size 672) =====

//WARNING: Type propagation algorithm not settling

uint64_t sym.gpi_config_interrupts(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int *piVar2;
    int *arg1_00;
    int *arg1_01;
    int *piVar3;
    uint64_t *puVar4;
    char cVar5;
    bool bVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong uVar14;
    int *arg1_02;
    char *pcVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar16;
    code *pcVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    int64_t iVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    uint64_t uStack_218;
    ulong uStack_210;
    int64_t iStack_208;
    uchar **ppuStack_200;
    code *pcStack_1f8;
    ulong uStack_198;
    code *pcStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    int64_t iStack_168;
    uchar *puStack_160;
    code *pcStack_158;
    uint64_t uStack_150;
    uint64_t uStack_148;
    uint64_t uStack_140;
    int64_t iStack_138;
    uint32_t uStack_128;
    ulong uStack_124;
    int aiStack_11c [2];
    ulong uStack_114;
    uint uStack_10c;
    uint32_t uStack_108;
    ulong uStack_104;
    uint uStack_fc;
    uint32_t uStack_f8;
    ulong uStack_f4;
    uint uStack_ec;
    int iStack_e8;
    ulong uStack_e4;
    uint uStack_dc;
    int iStack_d8;
    ulong uStack_d4;
    uint uStack_cc;
    uint32_t uStack_c8;
    ulong uStack_c4;
    uint uStack_bc;
    uint32_t uStack_b8;
    ulong uStack_b4;
    uint uStack_ac;
    int iStack_a8;
    ulong uStack_a4;
    uint uStack_9c;
    int iStack_98;
    ulong uStack_94;
    uint uStack_8c;
    int iStack_88;
    ulong uStack_84;
    uint uStack_7c;
    int iStack_78;
    uint uStack_74;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar21 = sp_el0;
    uVar16 = arg3 & 0xffffffff;
    uVar18 = arg2 & 0xffffffff;
    iStack_58 = *(iVar21 + 0x5e0);
    uStack_104 = 3;
    uStack_114 = 1;
    uStack_124 = 0x7f;
    iVar1 = *arg1 * 0x4000;
    uStack_128 = iVar1 + 0x23088;
    uStack_f4 = 1;
    aiStack_11c[0] = 0x4f;
    aiStack_11c[1] = uStack_128 | 0x30;
    uStack_10c = 1;
    uStack_108 = uStack_128 | 0x10;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_fc = 3;
    uStack_f8 = uStack_128 | 0x14;
    uStack_c4 = 0xffffffff;
    uStack_b4 = 0xffffffff;
    uStack_ec = 1;
    iStack_e8 = iVar1 + 0x23108;
    uStack_e4 = 0xf;
    uStack_d4 = 0xf;
    uStack_dc = 1;
    iStack_d8 = iVar1 + 0x23120;
    uStack_74 = 0xffffffff;
    uStack_70 = 0;
    uStack_cc = 0xf;
    uStack_c8 = uStack_128 | 0x100;
    uStack_bc = 0;
    uStack_b8 = uStack_128 | 0x104;
    uStack_a4 = 0xffffffff;
    uStack_94 = 0xffffffff;
    uStack_ac = 0;
    iStack_a8 = iVar1 + 0x23400;
    uStack_84 = 1;
    uStack_9c = 0;
    iStack_98 = iVar1 + 0x23404;
    uStack_8c = 0;
    iStack_88 = iVar1 + 0x23180;
    uStack_7c = 1;
    iStack_78 = iVar1 + 0x23200;
    pcVar17 = arg3;
    if (*(arg1 + 0x40c) == '\0') {
        pcVar17 = sym.gpi_handle_irq.59fdd2041444ad0be5a5134da8e511aa.cfi_jt;
        uVar8 = devm_request_threaded_irq
                          (*(*(arg1 + 0x378) + 0x1b0),*(arg1 + 0x388),
                           sym.gpi_handle_irq.59fdd2041444ad0be5a5134da8e511aa.cfi_jt,0,4,arg1 + 0x4cc,arg1);
        if (uVar8 < 0) {
            uVar20 = uVar8;
            if (*(arg1 + 0x4c4) == 0) {
                iVar21 = *(arg1 + 0x4b8);
            }
            else {
                pcVar17 = 0x63;
                _printk(0x8001fbf,arg1 + 0x4cc,99,"gpi_config_interrupts",*(arg1 + 0x388),uVar20);
                iVar21 = *(arg1 + 0x4b8);
            }
            if ((iVar21 != 0) && (*(arg1 + 0x4c0) != 0)) {
                pcVar17 = 0x63;
                ipc_log_string(iVar21,"ch:%u %s: error request irq:%d ret:%d\n",99,"gpi_config_interrupts",
                               *(arg1 + 0x388),uVar20);
            }
            goto code_r0x08008cc0;
        }
    }
    if (arg2 == 1) {
        uVar10 = *(arg1 + 0x4b4);
        uVar8 = 8;
        if ((arg3 & 1U) == 0) {
            uVar8 = 0;
        }
        uVar9 = uVar10 & 0xfffffff7 | uVar8;
        uVar18 = uVar9;
        uVar16 = *(arg1 + 0x390) + *arg1 * 0x4000 + 0x23088;
        *(arg1 + 0x4b4) = uVar9;
        uVar9 = sym.readl_relaxed(uVar16);
        sym.writel_relaxed(uVar9 & 0xffffff80 | uVar10 & 0x77 | uVar8,uVar16);
    }
    else {
        uVar18 = 0;
        while (*(&uStack_128 + uVar18) != 0) {
            uVar16 = *(arg1 + 0x390) + *(&uStack_128 + uVar18);
            iVar1 = *(aiStack_11c + uVar18);
            uVar8 = *(aiStack_11c + (uVar18 - 8));
            uVar10 = *(aiStack_11c + (uVar18 - 4));
            uVar9 = sym.readl_relaxed(uVar16);
            sym.writel_relaxed(uVar9 & (uVar8 ^ 0xffffffff) | iVar1 << (uVar10 & 0x1f) & uVar8,uVar16);
            uVar18 = uVar18 + 0x10;
            if (uVar18 == 0xd0) {
    //WARNING: Does not return
                pcVar17 = SoftwareBreakpoint(0x5512,0x8008cac);
                (*pcVar17)();
            }
        }
        *(arg1 + 0x4b4) = 0x4f;
    }
    uVar20 = 0;
    *(arg1 + 0x40c) = 1;
code_r0x08008cc0:
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_58) {
        return uVar20;
    }
    auVar22 = __stack_chk_fail();
    iVar12 = auVar22._0_8_;
    *extraout_x18 = sym.gpi_generate_cb_event;
    pcStack_158 = sym.gpi_generate_cb_event;
    iVar21 = sp_el0;
    iStack_168 = *(iVar21 + 0x5e0);
    uVar19 = auVar22._8_8_ & 0xffffffff;
    iVar21 = *(iVar12 + 0x110);
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    pcStack_190 = NULL;
    puStack_160 = &stack0xffffffffffffffb0;
    uStack_150 = uVar20;
    uStack_148 = uVar18;
    uStack_140 = uVar16;
    iStack_138 = arg1;
    if (*(iVar21 + 0x4c4) < 2) {
        iVar13 = *(iVar21 + 0x4b8);
    }
    else {
        _printk(0x8001e8e,iVar21 + 0x4cc,*(iVar12 + 0x100),"gpi_generate_cb_event",
                *(obj.gpi_cb_event_str + uVar19 * 8),pcVar17);
        iVar13 = *(iVar21 + 0x4b8);
    }
    if ((iVar13 != 0) && (1 < *(iVar21 + 0x4c0))) {
        ipc_log_string(iVar13,"ch:%u %s: notifying event:%s with status:%llu\n",*(iVar12 + 0x100),
                       "gpi_generate_cb_event",*(obj.gpi_cb_event_str + uVar19 * 8),pcVar17);
    }
    uStack_198 = CONCAT44(uStack_198._4_4_,auVar22._8_4_);
    pcStack_190 = pcVar17;
    uStack_188 = sched_clock();
    pcVar17 = *(iVar12 + 0x1a0);
    __cfi_slowpath_diag(0x5d7e5e3785540c6e,pcVar17,0x80002a0);
    uVar18 = (*pcVar17)(iVar12,&uStack_198,*(iVar12 + 0x1a8));
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_168) {
        return uVar18;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.gpi_handle_irq;
    pcStack_1f8 = sym.gpi_handle_irq;
    iVar21 = sp_el0;
    iStack_208 = *(iVar21 + 0x5e0);
    iVar1 = *arg1_02;
    *(arg1_02 + 0x659) = 1;
    ppuStack_200 = &puStack_160;
    uVar14 = _raw_read_lock_irqsave();
    if (arg1_02[0x104] < 2) {
        if (arg1_02[0x131] == 0) {
            iVar21 = *(arg1_02 + 0x12e);
        }
        else {
            _printk(0x8001716,arg1_02 + 0x133,99,"gpi_handle_irq",*(obj.gpi_pm_state_str + arg1_02[0x104] * 8));
            iVar21 = *(arg1_02 + 0x12e);
        }
        if ((iVar21 != 0) && (arg1_02[0x130] != 0)) {
            if (arg1_02[0x104] < 6) {
                pcVar15 = *(obj.gpi_pm_state_str + arg1_02[0x104] * 8);
            }
            else {
                pcVar15 = "INVALID";
            }
            ipc_log_string(iVar21,"ch:%u %s: receive interrupt while in %s state\n",99,"gpi_handle_irq",pcVar15);
        }
    }
    else {
        uVar10 = sym.readl_relaxed(*(arg1_02 + 0xe4) + *arg1_02 * 0x4000 + 0x23080);
        piVar2 = arg1_02 + 0x133;
        arg1_00 = arg1_02 + 2;
        arg1_01 = arg1_02 + 0x70;
        piVar3 = arg1_02 + 0x124;
        uVar8 = iVar1 * 0x4000 + 0x23080;
        do {
            uVar9 = uVar10;
            if ((uVar10 >> 2 & 1) != 0) {
                if (arg1_02[0x131] < 2) {
                    iVar21 = *(arg1_02 + 0x12e);
                }
                else {
                    _printk(0x8000922,piVar2,99,"gpi_handle_irq");
                    iVar21 = *(arg1_02 + 0x12e);
                }
                if ((iVar21 != 0) && (1 < arg1_02[0x130])) {
                    ipc_log_string(iVar21,"ch:%u %s: processing global error irq\n",99,"gpi_handle_irq");
                }
                iVar1 = *arg1_02 * 0x4000;
                uVar18 = sym.readl_relaxed(*(arg1_02 + 0xe4) + iVar1 + 0x23100);
                uVar9 = uVar18;
                uStack_218 = 0;
                uStack_210 = 0;
                uStack_228 = 0;
                uStack_220 = 0;
                uStack_238 = 0;
                uStack_230 = 0;
                sym.writel_relaxed(uVar18,*(arg1_02 + 0xe4) + iVar1 + 0x23110);
                if (uVar9 < 2) {
                    uVar11 = sym.readl_relaxed(*(arg1_02 + 0xe4) + iVar1 + 0x23200);
                    sym.writel_relaxed(0,*(arg1_02 + 0xe4) + iVar1 + 0x23200);
                    uVar9 = uVar11 >> 0x13 & 0x1f;
                    uVar16 = uVar9;
                    if (1 < uVar9) {
                        if (1 < arg1_02[0x131]) {
                            _printk(0x8000b5f,piVar2,99,"gpi_process_glob_err_irq",uVar9);
                        }
                        iVar21 = *(arg1_02 + 0x12e);
                        if ((iVar21 != 0) && (1 < arg1_02[0x130])) {
                            pcVar15 = "ch:%u %s: invalid chid reported:%u\n";
                            goto code_r0x0800917c;
                        }
                        goto code_r0x08009180;
                    }
                    uVar9 = uVar11 >> 4 & 0xf;
                    uVar7 = uVar11 >> 0xc & 0xf;
                    uStack_218 = CONCAT44(uVar11 >> 4,uVar11) & 0xf0000000f;
                    uStack_238 = CONCAT44(uStack_238._4_4_,1);
                    uStack_210 = CONCAT44(uStack_210._4_4_,uVar11 >> 0xc) & 0xffffffff0000000f;
                    if (arg1_02[0x131] < 3) {
                        iVar21 = *(arg1_02 + 0x12e);
                    }
                    else {
                        _printk(0x8001be3,piVar2,arg1_02[uVar16 * 0x6e + 0x42],"gpi_process_glob_err_irq",
                                "GLOBAL ERROR");
                        iVar21 = *(arg1_02 + 0x12e);
                    }
                    if ((iVar21 != 0) && (2 < arg1_02[0x130])) {
                        ipc_log_string(iVar21,"ch:%u %s: sending CB event:%s\n",arg1_02[uVar16 * 0x6e + 0x42],
                                       "gpi_process_glob_err_irq","GLOBAL ERROR");
                    }
                    if (arg1_02[0x131] < 2) {
                        iVar21 = *(arg1_02 + 0x12e);
                    }
                    else {
                        _printk(0x8001962,piVar2,arg1_02[uVar16 * 0x6e + 0x42],"gpi_process_glob_err_irq",
                                uVar11 >> 0x1a & 1,uVar11 >> 0x19 & 1,uVar11 & 0xf,uVar9,uVar7);
                        iVar21 = *(arg1_02 + 0x12e);
                    }
                    if ((iVar21 != 0) && (1 < arg1_02[0x130])) {
                        ipc_log_string(iVar21,"ch:%u %s: ee:%u chtype:%u routine:%u type:%u error_code:%u\n",
                                       arg1_02[uVar16 * 0x6e + 0x42],"gpi_process_glob_err_irq",uVar11 >> 0x1a & 1,
                                       uVar11 >> 0x19 & 1,uVar11 & 0xf,uVar9,uVar7);
                    }
                    pcVar17 = *(arg1_02 + uVar16 * 0x6e + 0x6a);
                    __cfi_slowpath_diag(0x5d7e5e3785540c6e,pcVar17,0x8000300);
                    (*pcVar17)(arg1_02 + uVar16 * 0x6e + 2,&uStack_238,*(arg1_02 + uVar16 * 0x6e + 0x6c));
                }
                else {
                    if (arg1_02[0x131] < 2) {
                        iVar21 = *(arg1_02 + 0x12e);
                    }
                    else {
                        _printk(0x8001747,piVar2,99,"gpi_process_glob_err_irq",uVar18 & 0xffffffff);
                        iVar21 = *(arg1_02 + 0x12e);
                    }
                    if ((iVar21 != 0) && (1 < arg1_02[0x130])) {
                        pcVar15 = "ch:%u %s: invalid error status:0x%x\n";
code_r0x0800917c:
                        ipc_log_string(iVar21,pcVar15,99,"gpi_process_glob_err_irq",uVar9);
                    }
code_r0x08009180:
                    sym.gpi_generate_cb_event(arg1_00,3,uVar18 & 0xffffffff);
                    sym.gpi_generate_cb_event(arg1_01,3,uVar18 & 0xffffffff);
                }
                uVar9 = uVar10 & 0xfffffffb;
            }
            if ((uVar10 >> 3 & 1) != 0) {
                sym.gpi_process_ieob(arg1_02);
                uVar9 = uVar9 & 0xfffffff7;
            }
            uVar10 = uVar9;
            if ((uVar9 >> 1 & 1) != 0) {
                if (arg1_02[0x131] < 3) {
                    iVar21 = *(arg1_02 + 0x12e);
                }
                else {
                    _printk(0x8000e23,piVar2,99,"gpi_handle_irq");
                    iVar21 = *(arg1_02 + 0x12e);
                }
                if ((iVar21 != 0) && (2 < arg1_02[0x130])) {
                    ipc_log_string(iVar21,"ch:%u %s: processing EV CTRL interrupt\n",99,"gpi_handle_irq");
                }
                iVar21 = sym.readl_relaxed(*(arg1_02 + 0xe4) + (uVar8 | 0x14));
                sym.writel_relaxed(iVar21,*(arg1_02 + 0xe4) + (uVar8 | 0x24));
                uVar11 = sym.readl_relaxed(*(arg1_02 + 0xe6));
                uVar10 = 0;
                if (arg1_02[300] != 10) {
                    uVar10 = uVar11 >> 0x14 & 0xf;
                }
                arg1_02[0x102] = uVar10;
                if (arg1_02[0x131] < 3) {
                    iVar21 = *(arg1_02 + 0x12e);
                }
                else {
                    pcVar15 = "INVALID";
                    if (uVar10 < 2) {
                        pcVar15 = *(obj.gpi_ev_state_str + uVar10 * 8);
                    }
                    _printk(0x8000b3b,piVar2,99,"gpi_handle_irq",pcVar15);
                    iVar21 = *(arg1_02 + 0x12e);
                }
                if ((iVar21 != 0) && (2 < arg1_02[0x130])) {
                    pcVar15 = "INVALID";
                    if (arg1_02[0x102] < 2) {
                        pcVar15 = *(obj.gpi_ev_state_str + arg1_02[0x102] * 8);
                    }
                    ipc_log_string(iVar21,"ch:%u %s: setting EV state to %s\n",99,"gpi_handle_irq",pcVar15);
                }
                complete_all(piVar3);
                uVar10 = uVar9 & 0xfffffffd;
            }
            if ((uVar9 & 1) != 0) {
                if (arg1_02[0x131] < 3) {
                    iVar21 = *(arg1_02 + 0x12e);
                }
                else {
                    _printk(0x8001ae0,piVar2,99,"gpi_handle_irq");
                    iVar21 = *(arg1_02 + 0x12e);
                }
                if ((iVar21 != 0) && (2 < arg1_02[0x130])) {
                    ipc_log_string(iVar21,"ch:%u %s: process CH CTRL interrupts\n",99,"gpi_handle_irq");
                }
                iVar1 = *arg1_02;
                uVar18 = sym.readl_relaxed(*(arg1_02 + 0xe4) + iVar1 * 0x4000 + 0x23090);
                sym.writel_relaxed(uVar18,*(arg1_02 + 0xe4) + iVar1 * 0x4000 + 0x230a0);
                if ((uVar18 & 1) != 0) {
                    uVar11 = sym.readl_relaxed(*(arg1_02 + 0x4a));
                    uVar9 = 0;
                    if (arg1_02[300] != 4) {
                        uVar9 = uVar11 >> 0x14 & 0xf;
                    }
                    arg1_02[0x48] = uVar9;
                    complete_all(piVar3);
                    if (arg1_02[0x48] == 0xf) {
                        sym.gpi_generate_cb_event(arg1_00,2,0x4df);
                    }
                }
                if ((uVar18 >> 1 & 1) != 0) {
                    uVar11 = sym.readl_relaxed(*(arg1_02 + 0xb8));
                    uVar9 = 0;
                    if (arg1_02[300] != 4) {
                        uVar9 = uVar11 >> 0x14 & 0xf;
                    }
                    arg1_02[0xb6] = uVar9;
                    complete_all(piVar3);
                    if (arg1_02[0xb6] == 0xf) {
                        sym.gpi_generate_cb_event(arg1_01,2,0x4df);
                    }
                }
                uVar10 = uVar10 & 0xfffffffe;
            }
            if (uVar10 != 0) {
                if (arg1_02[0x131] == 0) {
                    iVar21 = *(arg1_02 + 0x12e);
                }
                else {
                    _printk(0x800033c,piVar2,99,"gpi_handle_irq",uVar10);
                    iVar21 = *(arg1_02 + 0x12e);
                }
                if ((iVar21 != 0) && (arg1_02[0x130] != 0)) {
                    ipc_log_string(iVar21,"ch:%u %s: Unhandled interrupt status:0x%x\n",99,"gpi_handle_irq",uVar10);
                }
                iVar1 = *arg1_02;
                uVar18 = sym.readl_relaxed(*(arg1_02 + 0xe4) + iVar1 * 0x4000 + 0x23118);
                uVar18 = uVar18 & 0xffffffff;
                if (arg1_02[0x131] < 2) {
                    iVar21 = *(arg1_02 + 0x12e);
                }
                else {
                    _printk(0x8001eee,piVar2,99,"gpi_process_gen_err_irq",uVar18);
                    iVar21 = *(arg1_02 + 0x12e);
                }
                if ((iVar21 != 0) && (1 < arg1_02[0x130])) {
                    ipc_log_string(iVar21,"ch:%u %s: irq_stts:0x%x\n",99,"gpi_process_gen_err_irq",uVar18);
                }
                if (*(arg1_02 + 0x6a) != 0) {
                    sym.gpi_generate_cb_event(arg1_00,3,uVar18);
                }
                if (*(arg1_02 + 0xd8) != 0) {
                    sym.gpi_generate_cb_event(arg1_01,3,uVar18);
                }
                sym.writel_relaxed(uVar18,*(arg1_02 + 0xe4) + iVar1 * 0x4000 + 0x23128);
                arg1_02[0x195] = arg1_02[0x195] + 1;
                if (arg1_02[0x194] == '\0') {
                    sym.gpi_dump_debug_reg(arg1_02);
                    *(arg1_02 + 0x194) = 1;
                }
                break;
            }
            uVar10 = sym.readl_relaxed(*(arg1_02 + 0xe4) + *arg1_02 * 0x4000 + 0x23080);
        } while (uVar10 != 0);
    }
    _raw_read_unlock_irqrestore(arg1_02 + 0x105,uVar14);
    *(arg1_02 + 0x659) = 0;
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_208) {
        return 1;
    }
    iVar21 = __stack_chk_fail();
    *extraout_x18_01 = sym.gpi_process_ieob;
    sym.writel_relaxed(1,*(iVar21 + 0x3d0));
    if (*(iVar21 + 0x380) == 0) {
        uVar18 = sym.gpi_process_events(iVar21);
    }
    else {
        uVar18 = sym.gpi_config_interrupts(iVar21,1,0);
        puVar4 = iVar21 + 0x470;
        Hint_Prefetch(puVar4,2,0,1);
        do {
            uVar16 = *puVar4;
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(puVar4,0x10);
            if (bVar6) {
                *puVar4 = uVar16 | 1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar16 & 1) == 0) {
            uVar18 = __tasklet_schedule(iVar21 + 0x468);
        }
    }
    return uVar18;
}


// ===== sym.gpi_generate_cb_event @ 0x08008d70 (size 316) =====

//WARNING: Type propagation algorithm not settling

ulong sym.gpi_generate_cb_event(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int *arg1_00;
    int *arg1_01;
    int *piVar2;
    uint64_t *puVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    char cVar7;
    bool bVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int64_t iVar12;
    ulong uVar13;
    uint64_t uVar14;
    int *arg1_02;
    char *pcVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar16;
    int64_t iVar17;
    uint64_t uVar18;
    ulong unaff_x30;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    uint64_t uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_68;
    int64_t iStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_38 = *(iVar17 + 0x5e0);
    iVar17 = *(arg1 + 0x110);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    iStack_60 = 0;
    if (*(iVar17 + 0x4c4) < 2) {
        iVar12 = *(iVar17 + 0x4b8);
    }
    else {
        _printk(0x8001e8e,iVar17 + 0x4cc,*(arg1 + 0x100),"gpi_generate_cb_event",
                *(obj.gpi_cb_event_str + (arg2 & 0xffffffffU) * 8),arg3);
        iVar12 = *(iVar17 + 0x4b8);
    }
    if ((iVar12 != 0) && (1 < *(iVar17 + 0x4c0))) {
        ipc_log_string(iVar12,"ch:%u %s: notifying event:%s with status:%llu\n",*(arg1 + 0x100),
                       "gpi_generate_cb_event",*(obj.gpi_cb_event_str + (arg2 & 0xffffffffU) * 8),arg3);
    }
    uStack_68 = CONCAT44(uStack_68._4_4_,arg2);
    iStack_60 = arg3;
    uStack_58 = sched_clock();
    pcVar16 = *(arg1 + 0x1a0);
    __cfi_slowpath_diag(0x5d7e5e3785540c6e,pcVar16,0x80002a0);
    uVar13 = (*pcVar16)(arg1,&uStack_68,*(arg1 + 0x1a8));
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_38) {
        return uVar13;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.gpi_handle_irq;
    pcStack_c8 = sym.gpi_handle_irq;
    iVar17 = sp_el0;
    iStack_d8 = *(iVar17 + 0x5e0);
    iVar6 = *arg1_02;
    *(arg1_02 + 0x659) = 1;
    puStack_d0 = &stack0xffffffffffffffd0;
    uVar13 = _raw_read_lock_irqsave();
    if (arg1_02[0x104] < 2) {
        if (arg1_02[0x131] == 0) {
            iVar17 = *(arg1_02 + 0x12e);
        }
        else {
            _printk(0x8001716,arg1_02 + 0x133,99,"gpi_handle_irq",*(obj.gpi_pm_state_str + arg1_02[0x104] * 8));
            iVar17 = *(arg1_02 + 0x12e);
        }
        if ((iVar17 != 0) && (arg1_02[0x130] != 0)) {
            if (arg1_02[0x104] < 6) {
                pcVar15 = *(obj.gpi_pm_state_str + arg1_02[0x104] * 8);
            }
            else {
                pcVar15 = "INVALID";
            }
            ipc_log_string(iVar17,"ch:%u %s: receive interrupt while in %s state\n",99,"gpi_handle_irq",pcVar15);
        }
    }
    else {
        uVar10 = sym.readl_relaxed(*(arg1_02 + 0xe4) + *arg1_02 * 0x4000 + 0x23080);
        piVar1 = arg1_02 + 0x133;
        arg1_00 = arg1_02 + 2;
        arg1_01 = arg1_02 + 0x70;
        piVar2 = arg1_02 + 0x124;
        uVar4 = iVar6 * 0x4000 + 0x23080;
        do {
            uVar5 = uVar10;
            if ((uVar10 >> 2 & 1) != 0) {
                if (arg1_02[0x131] < 2) {
                    iVar17 = *(arg1_02 + 0x12e);
                }
                else {
                    _printk(0x8000922,piVar1,99,"gpi_handle_irq");
                    iVar17 = *(arg1_02 + 0x12e);
                }
                if ((iVar17 != 0) && (1 < arg1_02[0x130])) {
                    ipc_log_string(iVar17,"ch:%u %s: processing global error irq\n",99,"gpi_handle_irq");
                }
                iVar6 = *arg1_02 * 0x4000;
                uVar14 = sym.readl_relaxed(*(arg1_02 + 0xe4) + iVar6 + 0x23100);
                uVar5 = uVar14;
                uStack_e8 = 0;
                uStack_e0 = 0;
                uStack_f8 = 0;
                uStack_f0 = 0;
                uStack_108 = 0;
                uStack_100 = 0;
                sym.writel_relaxed(uVar14,*(arg1_02 + 0xe4) + iVar6 + 0x23110);
                if (uVar5 < 2) {
                    uVar11 = sym.readl_relaxed(*(arg1_02 + 0xe4) + iVar6 + 0x23200);
                    sym.writel_relaxed(0,*(arg1_02 + 0xe4) + iVar6 + 0x23200);
                    uVar5 = uVar11 >> 0x13 & 0x1f;
                    uVar18 = uVar5;
                    if (1 < uVar5) {
                        if (1 < arg1_02[0x131]) {
                            _printk(0x8000b5f,piVar1,99,"gpi_process_glob_err_irq",uVar5);
                        }
                        iVar17 = *(arg1_02 + 0x12e);
                        if ((iVar17 != 0) && (1 < arg1_02[0x130])) {
                            pcVar15 = "ch:%u %s: invalid chid reported:%u\n";
                            goto code_r0x0800917c;
                        }
                        goto code_r0x08009180;
                    }
                    uVar5 = uVar11 >> 4 & 0xf;
                    uVar9 = uVar11 >> 0xc & 0xf;
                    uStack_e8 = CONCAT44(uVar11 >> 4,uVar11) & 0xf0000000f;
                    uStack_108 = CONCAT44(uStack_108._4_4_,1);
                    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar11 >> 0xc) & 0xffffffff0000000f;
                    if (arg1_02[0x131] < 3) {
                        iVar17 = *(arg1_02 + 0x12e);
                    }
                    else {
                        _printk(0x8001be3,piVar1,arg1_02[uVar18 * 0x6e + 0x42],"gpi_process_glob_err_irq",
                                "GLOBAL ERROR");
                        iVar17 = *(arg1_02 + 0x12e);
                    }
                    if ((iVar17 != 0) && (2 < arg1_02[0x130])) {
                        ipc_log_string(iVar17,"ch:%u %s: sending CB event:%s\n",arg1_02[uVar18 * 0x6e + 0x42],
                                       "gpi_process_glob_err_irq","GLOBAL ERROR");
                    }
                    if (arg1_02[0x131] < 2) {
                        iVar17 = *(arg1_02 + 0x12e);
                    }
                    else {
                        _printk(0x8001962,piVar1,arg1_02[uVar18 * 0x6e + 0x42],"gpi_process_glob_err_irq",
                                uVar11 >> 0x1a & 1,uVar11 >> 0x19 & 1,uVar11 & 0xf,uVar5,uVar9);
                        iVar17 = *(arg1_02 + 0x12e);
                    }
                    if ((iVar17 != 0) && (1 < arg1_02[0x130])) {
                        ipc_log_string(iVar17,"ch:%u %s: ee:%u chtype:%u routine:%u type:%u error_code:%u\n",
                                       arg1_02[uVar18 * 0x6e + 0x42],"gpi_process_glob_err_irq",uVar11 >> 0x1a & 1,
                                       uVar11 >> 0x19 & 1,uVar11 & 0xf,uVar5,uVar9);
                    }
                    pcVar16 = *(arg1_02 + uVar18 * 0x6e + 0x6a);
                    __cfi_slowpath_diag(0x5d7e5e3785540c6e,pcVar16,0x8000300);
                    (*pcVar16)(arg1_02 + uVar18 * 0x6e + 2,&uStack_108,*(arg1_02 + uVar18 * 0x6e + 0x6c));
                }
                else {
                    if (arg1_02[0x131] < 2) {
                        iVar17 = *(arg1_02 + 0x12e);
                    }
                    else {
                        _printk(0x8001747,piVar1,99,"gpi_process_glob_err_irq",uVar14 & 0xffffffff);
                        iVar17 = *(arg1_02 + 0x12e);
                    }
                    if ((iVar17 != 0) && (1 < arg1_02[0x130])) {
                        pcVar15 = "ch:%u %s: invalid error status:0x%x\n";
code_r0x0800917c:
                        ipc_log_string(iVar17,pcVar15,99,"gpi_process_glob_err_irq",uVar5);
                    }
code_r0x08009180:
                    sym.gpi_generate_cb_event(arg1_00,3,uVar14 & 0xffffffff);
                    sym.gpi_generate_cb_event(arg1_01,3,uVar14 & 0xffffffff);
                }
                uVar5 = uVar10 & 0xfffffffb;
            }
            if ((uVar10 >> 3 & 1) != 0) {
                sym.gpi_process_ieob(arg1_02);
                uVar5 = uVar5 & 0xfffffff7;
            }
            uVar10 = uVar5;
            if ((uVar5 >> 1 & 1) != 0) {
                if (arg1_02[0x131] < 3) {
                    iVar17 = *(arg1_02 + 0x12e);
                }
                else {
                    _printk(0x8000e23,piVar1,99,"gpi_handle_irq");
                    iVar17 = *(arg1_02 + 0x12e);
                }
                if ((iVar17 != 0) && (2 < arg1_02[0x130])) {
                    ipc_log_string(iVar17,"ch:%u %s: processing EV CTRL interrupt\n",99,"gpi_handle_irq");
                }
                iVar17 = sym.readl_relaxed(*(arg1_02 + 0xe4) + (uVar4 | 0x14));
                sym.writel_relaxed(iVar17,*(arg1_02 + 0xe4) + (uVar4 | 0x24));
                uVar11 = sym.readl_relaxed(*(arg1_02 + 0xe6));
                uVar10 = 0;
                if (arg1_02[300] != 10) {
                    uVar10 = uVar11 >> 0x14 & 0xf;
                }
                arg1_02[0x102] = uVar10;
                if (arg1_02[0x131] < 3) {
                    iVar17 = *(arg1_02 + 0x12e);
                }
                else {
                    pcVar15 = "INVALID";
                    if (uVar10 < 2) {
                        pcVar15 = *(obj.gpi_ev_state_str + uVar10 * 8);
                    }
                    _printk(0x8000b3b,piVar1,99,"gpi_handle_irq",pcVar15);
                    iVar17 = *(arg1_02 + 0x12e);
                }
                if ((iVar17 != 0) && (2 < arg1_02[0x130])) {
                    pcVar15 = "INVALID";
                    if (arg1_02[0x102] < 2) {
                        pcVar15 = *(obj.gpi_ev_state_str + arg1_02[0x102] * 8);
                    }
                    ipc_log_string(iVar17,"ch:%u %s: setting EV state to %s\n",99,"gpi_handle_irq",pcVar15);
                }
                complete_all(piVar2);
                uVar10 = uVar5 & 0xfffffffd;
            }
            if ((uVar5 & 1) != 0) {
                if (arg1_02[0x131] < 3) {
                    iVar17 = *(arg1_02 + 0x12e);
                }
                else {
                    _printk(0x8001ae0,piVar1,99,"gpi_handle_irq");
                    iVar17 = *(arg1_02 + 0x12e);
                }
                if ((iVar17 != 0) && (2 < arg1_02[0x130])) {
                    ipc_log_string(iVar17,"ch:%u %s: process CH CTRL interrupts\n",99,"gpi_handle_irq");
                }
                iVar6 = *arg1_02;
                uVar14 = sym.readl_relaxed(*(arg1_02 + 0xe4) + iVar6 * 0x4000 + 0x23090);
                sym.writel_relaxed(uVar14,*(arg1_02 + 0xe4) + iVar6 * 0x4000 + 0x230a0);
                if ((uVar14 & 1) != 0) {
                    uVar11 = sym.readl_relaxed(*(arg1_02 + 0x4a));
                    uVar5 = 0;
                    if (arg1_02[300] != 4) {
                        uVar5 = uVar11 >> 0x14 & 0xf;
                    }
                    arg1_02[0x48] = uVar5;
                    complete_all(piVar2);
                    if (arg1_02[0x48] == 0xf) {
                        sym.gpi_generate_cb_event(arg1_00,2,0x4df);
                    }
                }
                if ((uVar14 >> 1 & 1) != 0) {
                    uVar11 = sym.readl_relaxed(*(arg1_02 + 0xb8));
                    uVar5 = 0;
                    if (arg1_02[300] != 4) {
                        uVar5 = uVar11 >> 0x14 & 0xf;
                    }
                    arg1_02[0xb6] = uVar5;
                    complete_all(piVar2);
                    if (arg1_02[0xb6] == 0xf) {
                        sym.gpi_generate_cb_event(arg1_01,2,0x4df);
                    }
                }
                uVar10 = uVar10 & 0xfffffffe;
            }
            if (uVar10 != 0) {
                if (arg1_02[0x131] == 0) {
                    iVar17 = *(arg1_02 + 0x12e);
                }
                else {
                    _printk(0x800033c,piVar1,99,"gpi_handle_irq",uVar10);
                    iVar17 = *(arg1_02 + 0x12e);
                }
                if ((iVar17 != 0) && (arg1_02[0x130] != 0)) {
                    ipc_log_string(iVar17,"ch:%u %s: Unhandled interrupt status:0x%x\n",99,"gpi_handle_irq",uVar10);
                }
                iVar6 = *arg1_02;
                uVar14 = sym.readl_relaxed(*(arg1_02 + 0xe4) + iVar6 * 0x4000 + 0x23118);
                uVar14 = uVar14 & 0xffffffff;
                if (arg1_02[0x131] < 2) {
                    iVar17 = *(arg1_02 + 0x12e);
                }
                else {
                    _printk(0x8001eee,piVar1,99,"gpi_process_gen_err_irq",uVar14);
                    iVar17 = *(arg1_02 + 0x12e);
                }
                if ((iVar17 != 0) && (1 < arg1_02[0x130])) {
                    ipc_log_string(iVar17,"ch:%u %s: irq_stts:0x%x\n",99,"gpi_process_gen_err_irq",uVar14);
                }
                if (*(arg1_02 + 0x6a) != 0) {
                    sym.gpi_generate_cb_event(arg1_00,3,uVar14);
                }
                if (*(arg1_02 + 0xd8) != 0) {
                    sym.gpi_generate_cb_event(arg1_01,3,uVar14);
                }
                sym.writel_relaxed(uVar14,*(arg1_02 + 0xe4) + iVar6 * 0x4000 + 0x23128);
                arg1_02[0x195] = arg1_02[0x195] + 1;
                if (arg1_02[0x194] == '\0') {
                    sym.gpi_dump_debug_reg(arg1_02);
                    *(arg1_02 + 0x194) = 1;
                }
                break;
            }
            uVar10 = sym.readl_relaxed(*(arg1_02 + 0xe4) + *arg1_02 * 0x4000 + 0x23080);
        } while (uVar10 != 0);
    }
    _raw_read_unlock_irqrestore(arg1_02 + 0x105,uVar13);
    *(arg1_02 + 0x659) = 0;
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_d8) {
        return 1;
    }
    iVar17 = __stack_chk_fail();
    *extraout_x18_00 = sym.gpi_process_ieob;
    sym.writel_relaxed(1,*(iVar17 + 0x3d0));
    if (*(iVar17 + 0x380) == 0) {
        uVar13 = sym.gpi_process_events(iVar17);
    }
    else {
        uVar13 = sym.gpi_config_interrupts(iVar17,1,0);
        puVar3 = iVar17 + 0x470;
        Hint_Prefetch(puVar3,2,0,1);
        do {
            uVar14 = *puVar3;
            cVar7 = '\x01';
            bVar8 = ExclusiveMonitorPass(puVar3,0x10);
            if (bVar8) {
                *puVar3 = uVar14 | 1;
                cVar7 = ExclusiveMonitorsStatus();
            }
        } while (cVar7 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar14 & 1) == 0) {
            uVar13 = __tasklet_schedule(iVar17 + 0x468);
        }
    }
    return uVar13;
}


// ===== sym.gpi_handle_irq @ 0x08008eac (size 2272) =====

//WARNING: Type propagation algorithm not settling

ulong sym.gpi_handle_irq(ulong noname_0,int64_t arg1)

{
    int64_t arg1_00;
    int64_t arg1_01;
    uint64_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    ulong uVar10;
    int64_t iVar11;
    int64_t iVar12;
    uint64_t uVar13;
    int64_t iVar14;
    char *pcVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    uint64_t uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    iVar4 = *arg1;
    *(arg1 + 0x659) = 1;
    uVar10 = _raw_read_lock_irqsave();
    if (*(arg1 + 0x410) < 2) {
        if (*(arg1 + 0x4c4) == 0) {
            iVar14 = *(arg1 + 0x4b8);
        }
        else {
            _printk(0x8001716,arg1 + 0x4cc,99,"gpi_handle_irq",*(obj.gpi_pm_state_str + *(arg1 + 0x410) * 8));
            iVar14 = *(arg1 + 0x4b8);
        }
        if ((iVar14 != 0) && (*(arg1 + 0x4c0) != 0)) {
            if (*(arg1 + 0x410) < 6) {
                pcVar15 = *(obj.gpi_pm_state_str + *(arg1 + 0x410) * 8);
            }
            else {
                pcVar15 = "INVALID";
            }
            ipc_log_string(iVar14,"ch:%u %s: receive interrupt while in %s state\n",99,"gpi_handle_irq",pcVar15);
        }
    }
    else {
        uVar8 = sym.readl_relaxed(*(arg1 + 0x390) + *arg1 * 0x4000 + 0x23080);
        iVar14 = arg1 + 0x4cc;
        arg1_00 = arg1 + 8;
        arg1_01 = arg1 + 0x1c0;
        iVar12 = arg1 + 0x490;
        uVar2 = iVar4 * 0x4000 + 0x23080;
        do {
            uVar3 = uVar8;
            if ((uVar8 >> 2 & 1) != 0) {
                if (*(arg1 + 0x4c4) < 2) {
                    iVar11 = *(arg1 + 0x4b8);
                }
                else {
                    _printk(0x8000922,iVar14,99,"gpi_handle_irq");
                    iVar11 = *(arg1 + 0x4b8);
                }
                if ((iVar11 != 0) && (1 < *(arg1 + 0x4c0))) {
                    ipc_log_string(iVar11,"ch:%u %s: processing global error irq\n",99,"gpi_handle_irq");
                }
                iVar4 = *arg1 * 0x4000;
                uVar13 = sym.readl_relaxed(*(arg1 + 0x390) + iVar4 + 0x23100);
                uVar3 = uVar13;
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                sym.writel_relaxed(uVar13,*(arg1 + 0x390) + iVar4 + 0x23110);
                if (uVar3 < 2) {
                    uVar9 = sym.readl_relaxed(*(arg1 + 0x390) + iVar4 + 0x23200);
                    sym.writel_relaxed(0,*(arg1 + 0x390) + iVar4 + 0x23200);
                    uVar3 = uVar9 >> 0x13 & 0x1f;
                    uVar17 = uVar3;
                    if (1 < uVar3) {
                        if (1 < *(arg1 + 0x4c4)) {
                            _printk(0x8000b5f,iVar14,99,"gpi_process_glob_err_irq",uVar3);
                        }
                        iVar11 = *(arg1 + 0x4b8);
                        if ((iVar11 != 0) && (1 < *(arg1 + 0x4c0))) {
                            pcVar15 = "ch:%u %s: invalid chid reported:%u\n";
                            goto code_r0x0800917c;
                        }
                        goto code_r0x08009180;
                    }
                    uVar3 = uVar9 >> 4 & 0xf;
                    uVar7 = uVar9 >> 0xc & 0xf;
                    uStack_78 = CONCAT44(uVar9 >> 4,uVar9) & 0xf0000000f;
                    uStack_98 = CONCAT44(uStack_98._4_4_,1);
                    uStack_70 = CONCAT44(uStack_70._4_4_,uVar9 >> 0xc) & 0xffffffff0000000f;
                    if (*(arg1 + 0x4c4) < 3) {
                        iVar11 = *(arg1 + 0x4b8);
                    }
                    else {
                        _printk(0x8001be3,iVar14,*(arg1 + uVar17 * 0x1b8 + 0x108),"gpi_process_glob_err_irq",
                                "GLOBAL ERROR");
                        iVar11 = *(arg1 + 0x4b8);
                    }
                    if ((iVar11 != 0) && (2 < *(arg1 + 0x4c0))) {
                        ipc_log_string(iVar11,"ch:%u %s: sending CB event:%s\n",*(arg1 + uVar17 * 0x1b8 + 0x108),
                                       "gpi_process_glob_err_irq","GLOBAL ERROR");
                    }
                    if (*(arg1 + 0x4c4) < 2) {
                        iVar11 = *(arg1 + 0x4b8);
                    }
                    else {
                        _printk(0x8001962,iVar14,*(arg1 + uVar17 * 0x1b8 + 0x108),"gpi_process_glob_err_irq",
                                uVar9 >> 0x1a & 1,uVar9 >> 0x19 & 1,uVar9 & 0xf,uVar3,uVar7);
                        iVar11 = *(arg1 + 0x4b8);
                    }
                    if ((iVar11 != 0) && (1 < *(arg1 + 0x4c0))) {
                        ipc_log_string(iVar11,"ch:%u %s: ee:%u chtype:%u routine:%u type:%u error_code:%u\n",
                                       *(arg1 + uVar17 * 0x1b8 + 0x108),"gpi_process_glob_err_irq",uVar9 >> 0x1a & 1,
                                       uVar9 >> 0x19 & 1,uVar9 & 0xf,uVar3,uVar7);
                    }
                    iVar11 = arg1 + uVar17 * 0x1b8;
                    pcVar16 = *(iVar11 + 0x1a8);
                    __cfi_slowpath_diag(0x5d7e5e3785540c6e,pcVar16,0x8000300);
                    (*pcVar16)(iVar11 + 8,&uStack_98,*(iVar11 + 0x1b0));
                }
                else {
                    if (*(arg1 + 0x4c4) < 2) {
                        iVar11 = *(arg1 + 0x4b8);
                    }
                    else {
                        _printk(0x8001747,iVar14,99,"gpi_process_glob_err_irq",uVar13 & 0xffffffff);
                        iVar11 = *(arg1 + 0x4b8);
                    }
                    if ((iVar11 != 0) && (1 < *(arg1 + 0x4c0))) {
                        pcVar15 = "ch:%u %s: invalid error status:0x%x\n";
code_r0x0800917c:
                        ipc_log_string(iVar11,pcVar15,99,"gpi_process_glob_err_irq",uVar3);
                    }
code_r0x08009180:
                    sym.gpi_generate_cb_event(arg1_00,3,uVar13 & 0xffffffff);
                    sym.gpi_generate_cb_event(arg1_01,3,uVar13 & 0xffffffff);
                }
                uVar3 = uVar8 & 0xfffffffb;
            }
            if ((uVar8 >> 3 & 1) != 0) {
                sym.gpi_process_ieob(arg1);
                uVar3 = uVar3 & 0xfffffff7;
            }
            uVar8 = uVar3;
            if ((uVar3 >> 1 & 1) != 0) {
                if (*(arg1 + 0x4c4) < 3) {
                    iVar11 = *(arg1 + 0x4b8);
                }
                else {
                    _printk(0x8000e23,iVar14,99,"gpi_handle_irq");
                    iVar11 = *(arg1 + 0x4b8);
                }
                if ((iVar11 != 0) && (2 < *(arg1 + 0x4c0))) {
                    ipc_log_string(iVar11,"ch:%u %s: processing EV CTRL interrupt\n",99,"gpi_handle_irq");
                }
                iVar11 = sym.readl_relaxed(*(arg1 + 0x390) + (uVar2 | 0x14));
                sym.writel_relaxed(iVar11,*(arg1 + 0x390) + (uVar2 | 0x24));
                uVar9 = sym.readl_relaxed(*(arg1 + 0x398));
                uVar8 = 0;
                if (*(arg1 + 0x4b0) != 10) {
                    uVar8 = uVar9 >> 0x14 & 0xf;
                }
                *(arg1 + 0x408) = uVar8;
                if (*(arg1 + 0x4c4) < 3) {
                    iVar11 = *(arg1 + 0x4b8);
                }
                else {
                    pcVar15 = "INVALID";
                    if (uVar8 < 2) {
                        pcVar15 = *(obj.gpi_ev_state_str + uVar8 * 8);
                    }
                    _printk(0x8000b3b,iVar14,99,"gpi_handle_irq",pcVar15);
                    iVar11 = *(arg1 + 0x4b8);
                }
                if ((iVar11 != 0) && (2 < *(arg1 + 0x4c0))) {
                    pcVar15 = "INVALID";
                    if (*(arg1 + 0x408) < 2) {
                        pcVar15 = *(obj.gpi_ev_state_str + *(arg1 + 0x408) * 8);
                    }
                    ipc_log_string(iVar11,"ch:%u %s: setting EV state to %s\n",99,"gpi_handle_irq",pcVar15);
                }
                complete_all(iVar12);
                uVar8 = uVar3 & 0xfffffffd;
            }
            if ((uVar3 & 1) != 0) {
                if (*(arg1 + 0x4c4) < 3) {
                    iVar11 = *(arg1 + 0x4b8);
                }
                else {
                    _printk(0x8001ae0,iVar14,99,"gpi_handle_irq");
                    iVar11 = *(arg1 + 0x4b8);
                }
                if ((iVar11 != 0) && (2 < *(arg1 + 0x4c0))) {
                    ipc_log_string(iVar11,"ch:%u %s: process CH CTRL interrupts\n",99,"gpi_handle_irq");
                }
                iVar4 = *arg1;
                uVar13 = sym.readl_relaxed(*(arg1 + 0x390) + iVar4 * 0x4000 + 0x23090);
                sym.writel_relaxed(uVar13,*(arg1 + 0x390) + iVar4 * 0x4000 + 0x230a0);
                if ((uVar13 & 1) != 0) {
                    uVar9 = sym.readl_relaxed(*(arg1 + 0x128));
                    uVar3 = 0;
                    if (*(arg1 + 0x4b0) != 4) {
                        uVar3 = uVar9 >> 0x14 & 0xf;
                    }
                    *(arg1 + 0x120) = uVar3;
                    complete_all(iVar12);
                    if (*(arg1 + 0x120) == 0xf) {
                        sym.gpi_generate_cb_event(arg1_00,2,0x4df);
                    }
                }
                if ((uVar13 >> 1 & 1) != 0) {
                    uVar9 = sym.readl_relaxed(*(arg1 + 0x2e0));
                    uVar3 = 0;
                    if (*(arg1 + 0x4b0) != 4) {
                        uVar3 = uVar9 >> 0x14 & 0xf;
                    }
                    *(arg1 + 0x2d8) = uVar3;
                    complete_all(iVar12);
                    if (*(arg1 + 0x2d8) == 0xf) {
                        sym.gpi_generate_cb_event(arg1_01,2,0x4df);
                    }
                }
                uVar8 = uVar8 & 0xfffffffe;
            }
            if (uVar8 != 0) {
                if (*(arg1 + 0x4c4) == 0) {
                    iVar12 = *(arg1 + 0x4b8);
                }
                else {
                    _printk(0x800033c,iVar14,99,"gpi_handle_irq",uVar8);
                    iVar12 = *(arg1 + 0x4b8);
                }
                if ((iVar12 != 0) && (*(arg1 + 0x4c0) != 0)) {
                    ipc_log_string(iVar12,"ch:%u %s: Unhandled interrupt status:0x%x\n",99,"gpi_handle_irq",uVar8);
                }
                iVar4 = *arg1;
                uVar13 = sym.readl_relaxed(*(arg1 + 0x390) + iVar4 * 0x4000 + 0x23118);
                uVar13 = uVar13 & 0xffffffff;
                if (*(arg1 + 0x4c4) < 2) {
                    iVar14 = *(arg1 + 0x4b8);
                }
                else {
                    _printk(0x8001eee,iVar14,99,"gpi_process_gen_err_irq",uVar13);
                    iVar14 = *(arg1 + 0x4b8);
                }
                if ((iVar14 != 0) && (1 < *(arg1 + 0x4c0))) {
                    ipc_log_string(iVar14,"ch:%u %s: irq_stts:0x%x\n",99,"gpi_process_gen_err_irq",uVar13);
                }
                if (*(arg1 + 0x1a8) != 0) {
                    sym.gpi_generate_cb_event(arg1_00,3,uVar13);
                }
                if (*(arg1 + 0x360) != 0) {
                    sym.gpi_generate_cb_event(arg1_01,3,uVar13);
                }
                sym.writel_relaxed(uVar13,*(arg1 + 0x390) + iVar4 * 0x4000 + 0x23128);
                *(arg1 + 0x654) = *(arg1 + 0x654) + 1;
                if (*(arg1 + 0x650) == '\0') {
                    sym.gpi_dump_debug_reg(arg1);
                    *(arg1 + 0x650) = 1;
                }
                break;
            }
            uVar8 = sym.readl_relaxed(*(arg1 + 0x390) + *arg1 * 0x4000 + 0x23080);
        } while (uVar8 != 0);
    }
    _raw_read_unlock_irqrestore(arg1 + 0x414,uVar10);
    *(arg1 + 0x659) = 0;
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return 1;
    }
    iVar14 = __stack_chk_fail();
    *extraout_x18 = sym.gpi_process_ieob;
    sym.writel_relaxed(1,*(iVar14 + 0x3d0));
    if (*(iVar14 + 0x380) == 0) {
        uVar10 = sym.gpi_process_events(iVar14);
    }
    else {
        uVar10 = sym.gpi_config_interrupts(iVar14,1,0);
        puVar1 = iVar14 + 0x470;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar13 = *puVar1;
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
                *puVar1 = uVar13 | 1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar13 & 1) == 0) {
            uVar10 = __tasklet_schedule(iVar14 + 0x468);
        }
    }
    return uVar10;
}


// ===== sym.gpi_process_ieob @ 0x0800978c (size 168) =====

void sym.gpi_process_ieob(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(1,*(arg1 + 0x3d0));
    if (*(arg1 + 0x380) == 0) {
        sym.gpi_process_events(arg1);
    }
    else {
        sym.gpi_config_interrupts(arg1,1,0);
        puVar1 = arg1 + 0x470;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar4 = *puVar1;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = uVar4 | 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar4 & 1) == 0) {
            __tasklet_schedule(arg1 + 0x468);
        }
    }
    return;
}


// ===== sym.gpi_alloc_ring @ 0x08009834 (size 640) =====

ulong sym.gpi_alloc_ring(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    ulong in_stack_ffffffffffffffb0;
    uint uVar7;
    
    uVar7 = in_stack_ffffffffffffffb0 >> 0x20;
    *in_x18 = unaff_x30;
    uVar2 = arg2 << 4;
    uVar1 = 0;
    if (uVar2 != 0) {
        uVar1 = 0x1f - LZCOUNT(uVar2);
    }
    if ((uVar2 & (-1 << (uVar1 & 0x1f) ^ 0xffffffffU)) != 0) {
        uVar1 = uVar1 + 1;
    }
    uVar1 = 1 << (uVar1 & 0x1f);
    iVar6 = uVar1;
    iVar3 = (-(uVar1 >> 0x1f) & 0xfffffffe00000000 | uVar1 << 1) - 1;
    *(arg1 + 8) = iVar3;
    if (*(arg3 + 0x4c4) < 3) {
        iVar3 = *(arg3 + 0x4b8);
    }
    else {
        _printk(0x80006b0,arg3 + 0x4cc,99,"gpi_alloc_ring",arg2 & 0xffffffffU,0x10,uVar2,iVar6,iVar3);
        uVar7 = iVar3 >> 0x20;
        iVar3 = *(arg3 + 0x4b8);
    }
    if ((iVar3 != 0) && (2 < *(arg3 + 0x4c0))) {
        uVar4 = *(arg1 + 8);
        ipc_log_string(iVar3,"ch:%u %s: #el:%u el_size:%u len:%u actual_len:%llu alloc_size:%lu\n",99,
                       "gpi_alloc_ring",arg2 & 0xffffffffU,0x10,uVar2,iVar6,uVar4);
        uVar7 = uVar4 >> 0x20;
    }
    iVar3 = dma_alloc_attrs(*(*(arg3 + 0x378) + 0x1b0),*(arg1 + 8),arg1 + 0x18,0xcc0,0);
    *arg1 = iVar3;
    if (iVar3 == 0) {
        if (*(arg3 + 0x4c4) == 0) {
            iVar3 = *(arg3 + 0x4b8);
        }
        else {
            _printk(0x800166b,arg3 + 0x4cc,99,"gpi_alloc_ring",*(arg1 + 8));
            iVar3 = *(arg3 + 0x4b8);
        }
        if ((iVar3 != 0) && (*(arg3 + 0x4c0) != 0)) {
            ipc_log_string(iVar3,"ch:%u %s: could not alloc size:%lu mem for ring\n",99,"gpi_alloc_ring",*(arg1 + 8)
                          );
        }
        uVar4 = 0xfffffff4;
    }
    else {
        uVar5 = (iVar6 + *(arg1 + 0x18)) - 1U & -iVar6;
        iVar3 = iVar3 + (uVar5 - *(arg1 + 0x18));
        *(arg1 + 0x38) = uVar1;
        *(arg1 + 0x3c) = 0x10;
        *(arg1 + 0x10) = uVar5;
        *(arg1 + 0x28) = iVar3;
        *(arg1 + 0x30) = iVar3;
        *(arg1 + 0x20) = iVar3;
        *(arg1 + 0x40) = uVar1 >> 4;
        memset(iVar3,0,uVar1);
        *(arg1 + 0x44) = 1;
        DataMemoryBarrier(2,2);
        if (*(arg3 + 0x4c4) < 3) {
            iVar3 = *(arg3 + 0x4b8);
            if (iVar3 == 0) {
                return 0;
            }
        }
        else {
            uVar4 = CONCAT44(uVar7,*(arg1 + 0x40));
            _printk(0x80006f5,arg3 + 0x4cc,99,"gpi_alloc_ring",*(arg1 + 0x18),*(arg1 + 0x10),*(arg1 + 0x38),
                    *(arg1 + 0x3c),uVar4);
            uVar7 = uVar4 >> 0x20;
            iVar3 = *(arg3 + 0x4b8);
            if (iVar3 == 0) {
                return 0;
            }
        }
        if (2 < *(arg3 + 0x4c0)) {
            ipc_log_string(iVar3,"ch:%u %s: phy_pre:0x%0llx phy_alig:0x%0llx len:%u el_size:%u elements:%u\n",99,
                           "gpi_alloc_ring",*(arg1 + 0x18),*(arg1 + 0x10),*(arg1 + 0x38),*(arg1 + 0x3c),
                           CONCAT44(uVar7,*(arg1 + 0x40)));
        }
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.gpi_free_ring @ 0x08009ab4 (size 88) =====

void sym.gpi_free_ring(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    dma_free_attrs(*(*(arg2 + 0x378) + 0x1b0),*(arg1 + 8),*arg1,*(arg1 + 0x18),0);
    *(arg1 + 0x38) = 0;
    *(arg1 + 0x40) = 0;
    *(arg1 + 0x28) = 0;
    *(arg1 + 0x30) = 0;
    *(arg1 + 0x18) = 0;
    *(arg1 + 0x20) = 0;
    *(arg1 + 8) = 0;
    *(arg1 + 0x10) = 0;
    *arg1 = 0;
    return;
}


// ===== sym.gpi_disable_interrupts @ 0x08009b0c (size 356) =====

uint64_t sym.gpi_disable_interrupts(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong in_x6;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar *puVar12;
    uint32_t uStack_c8;
    ulong uStack_c4;
    int aiStack_bc [2];
    ulong uStack_b4;
    uint uStack_ac;
    uint32_t uStack_a8;
    ulong uStack_a4;
    uint uStack_9c;
    int iStack_98;
    ulong uStack_94;
    uint uStack_8c;
    int iStack_88;
    ulong uStack_84;
    uint uStack_7c;
    int iStack_78;
    uint uStack_74;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    puVar12 = &stack0xffffffffffffffb0;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    uStack_c4 = 1;
    uStack_b4 = 3;
    iStack_78 = *arg1 * 0x4000;
    uVar4 = iStack_78 + 0x23088;
    uStack_a4 = 1;
    uStack_c8 = uVar4 | 0x30;
    aiStack_bc[1] = uVar4 | 0x10;
    uStack_74 = 1;
    uStack_a8 = uVar4 | 0x14;
    aiStack_bc[0] = 0;
    iStack_98 = iStack_78 + 0x23108;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_ac = 0;
    uStack_9c = 0;
    iStack_88 = iStack_78 + 0x23120;
    uStack_94 = 0xf;
    uStack_84 = 0xf;
    uStack_8c = 0;
    iStack_78 = iStack_78 + 0x23180;
    iVar9 = *(arg1 + 0x390) + uVar4;
    uStack_7c = 0;
    uVar4 = sym.readl_relaxed(iVar9);
    uVar7 = sym.writel_relaxed(uVar4 & 0xffffff80,iVar9);
    iVar9 = 0;
    while (*(&uStack_c8 + iVar9) != 0) {
        uVar4 = *(aiStack_bc + iVar9 + -8);
        uVar1 = *(aiStack_bc + iVar9 + -4);
        iVar2 = *(aiStack_bc + iVar9);
        iVar10 = *(arg1 + 0x390) + *(&uStack_c8 + iVar9);
        uVar5 = sym.readl_relaxed(iVar10);
        uVar7 = sym.writel_relaxed(uVar5 & (uVar4 ^ 0xffffffff) | iVar2 << (uVar1 & 0x1f) & uVar4,iVar10);
        iVar9 = iVar9 + 0x10;
        if (iVar9 == 0x70) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x8009c2c);
            (*pcVar3)();
        }
    }
    *(arg1 + 0x4b4) = 0;
    iVar9 = sp_el0;
    iVar9 = *(iVar9 + 0x5e0);
    *(arg1 + 0x40c) = 0;
    if (iVar9 != iStack_58) {
        iVar9 = __stack_chk_fail();
        *extraout_x18 = sym.gpi_alloc_ev_chan;
        pcVar3 = sym.gpi_alloc_ev_chan;
        iVar10 = *(iVar9 + 0x398);
        iVar2 = *(iVar9 + 0x45c);
        uVar4 = *(iVar9 + 0x458);
        uVar1 = *(iVar9 + 0x430);
        uVar5 = *(iVar9 + 0x434);
        iVar11 = *(iVar9 + 0x3a0);
        if (*(iVar9 + 0x4c4) < 3) {
            iVar8 = *(iVar9 + 0x4b8);
        }
        else {
            _printk(0x80018e2,iVar9 + 0x4cc,99,"gpi_alloc_ev_chan");
            iVar8 = *(iVar9 + 0x4b8);
        }
        if ((iVar8 != 0) && (2 < *(iVar9 + 0x4c0))) {
            ipc_log_string(iVar8,"ch:%u %s: enter\n",99,"gpi_alloc_ev_chan");
        }
        uVar6 = sym.gpi_send_cmd(iVar9,0,8);
        uVar7 = uVar6;
        if (uVar6 == 0) {
            if (iVar10 != 0) {
                sym.writel_relaxed(iVar2 << 0x18 | 0x10002,iVar10);
                sym.writel_relaxed(uVar4,iVar10 + 4);
                sym.writel_relaxed(uVar1,iVar10 + 8);
                sym.writel_relaxed(uVar5,iVar10 + 0xc);
                if (iVar11 != 0) {
                    sym.writel_relaxed(uVar5,iVar11 + 4);
                    sym.writel_relaxed(0,iVar10 + 0x20);
                    sym.writel_relaxed(0,iVar10 + 0x28);
                    sym.writel_relaxed(0,iVar10 + 0x2c);
                    sym.writel_relaxed(0,iVar10 + 0x20);
                    sym.writel_relaxed(0,iVar10 + 0x30);
                    sym.writel_relaxed(0,iVar10 + 0x34);
                }
            }
            *(iVar9 + 0x448) = (*(iVar9 + 0x440) + *(iVar9 + 0x458)) - *(iVar9 + 0x45c);
            DataSynchronizationBarrier(3,2,0);
            _raw_write_lock_irq(iVar9 + 0x414);
            *(iVar9 + 0x410) = 3;
            _raw_write_unlock_irq(iVar9 + 0x414);
            sym.writel_relaxed((*(iVar9 + 0x430) + *(iVar9 + 0x448)) - *(iVar9 + 0x440),*(iVar9 + 0x3a0));
        }
        else {
            if (*(iVar9 + 0x4c4) < 2) {
                iVar10 = *(iVar9 + 0x4b8);
            }
            else {
                _printk(0x8000ec0,iVar9 + 0x4cc,99,"gpi_alloc_ev_chan","EV ALLOCATE",uVar7,in_x6,in_x7,puVar12,
                        pcVar3);
                iVar10 = *(iVar9 + 0x4b8);
            }
            if ((iVar10 != 0) && (1 < *(iVar9 + 0x4c0))) {
                ipc_log_string(iVar10,"ch:%u %s: error with cmd:%s ret:%d\n",99,"gpi_alloc_ev_chan","EV ALLOCATE",
                               uVar7);
            }
        }
        return uVar7;
    }
    return uVar7;
}


// ===== sym.gpi_alloc_ev_chan @ 0x08009c70 (size 576) =====

int sym.gpi_alloc_ev_chan(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(arg1 + 0x398);
    iVar1 = *(arg1 + 0x45c);
    uVar2 = *(arg1 + 0x458);
    uVar3 = *(arg1 + 0x430);
    uVar4 = *(arg1 + 0x434);
    iVar8 = *(arg1 + 0x3a0);
    if (*(arg1 + 0x4c4) < 3) {
        iVar6 = *(arg1 + 0x4b8);
    }
    else {
        _printk(0x80018e2,arg1 + 0x4cc,99,"gpi_alloc_ev_chan");
        iVar6 = *(arg1 + 0x4b8);
    }
    if ((iVar6 != 0) && (2 < *(arg1 + 0x4c0))) {
        ipc_log_string(iVar6,"ch:%u %s: enter\n",99,"gpi_alloc_ev_chan");
    }
    iVar5 = sym.gpi_send_cmd(arg1,0,8);
    if (iVar5 == 0) {
        if (iVar7 != 0) {
            sym.writel_relaxed(iVar1 << 0x18 | 0x10002,iVar7);
            sym.writel_relaxed(uVar2,iVar7 + 4);
            sym.writel_relaxed(uVar3,iVar7 + 8);
            sym.writel_relaxed(uVar4,iVar7 + 0xc);
            if (iVar8 != 0) {
                sym.writel_relaxed(uVar4,iVar8 + 4);
                sym.writel_relaxed(0,iVar7 + 0x20);
                sym.writel_relaxed(0,iVar7 + 0x28);
                sym.writel_relaxed(0,iVar7 + 0x2c);
                sym.writel_relaxed(0,iVar7 + 0x20);
                sym.writel_relaxed(0,iVar7 + 0x30);
                sym.writel_relaxed(0,iVar7 + 0x34);
            }
        }
        *(arg1 + 0x448) = (*(arg1 + 0x440) + *(arg1 + 0x458)) - *(arg1 + 0x45c);
        DataSynchronizationBarrier(3,2,0);
        _raw_write_lock_irq(arg1 + 0x414);
        *(arg1 + 0x410) = 3;
        _raw_write_unlock_irq(arg1 + 0x414);
        sym.writel_relaxed((*(arg1 + 0x430) + *(arg1 + 0x448)) - *(arg1 + 0x440),*(arg1 + 0x3a0));
    }
    else {
        if (*(arg1 + 0x4c4) < 2) {
            iVar7 = *(arg1 + 0x4b8);
        }
        else {
            _printk(0x8000ec0,arg1 + 0x4cc,99,"gpi_alloc_ev_chan","EV ALLOCATE",iVar5);
            iVar7 = *(arg1 + 0x4b8);
        }
        if ((iVar7 != 0) && (1 < *(arg1 + 0x4c0))) {
            ipc_log_string(iVar7,"ch:%u %s: error with cmd:%s ret:%d\n",99,"gpi_alloc_ev_chan","EV ALLOCATE",iVar5)
            ;
        }
    }
    return iVar5;
}


// ===== sym.__cfi_check_fail @ 0x08009eb0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08009ef4

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
    //switch table (4 cases) at 0x8000324
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8009f08);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08009f28 (size 76) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = debugfs_create_dir("gpi_dma",0);
    __platform_driver_register(reloc.gpi_probe.59fdd2041444ad0be5a5134da8e511aa.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08009f74 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.gpi_probe.59fdd2041444ad0be5a5134da8e511aa.cfi_jt);
    return;
}

