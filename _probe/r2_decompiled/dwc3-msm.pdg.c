// decompiled from dwc3-msm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08005000 (size 1064) =====

//WARNING: Switch with 1 destination removed at 0x080103e8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x16ccd154cd488791) {
        if (arg1 < -0x550b9e52359ac614) {
            if (arg1 < -0x66d421a09845f9f8) {
                if (arg1 == -0x793e45dd7413135e) {
                    pcVar2 = sym.msm_ep_config.cfi_jt;
                    goto code_r0x080053f8;
                }
                if (arg1 != -0x67798da153848ba2) goto code_r0x080103a8;
                pcVar2 = sym.dwc3_msm_usb_role_switch_set_role.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
            }
            else {
                if (arg1 == -0x66d421a09845f9f8) {
                    if ((pcVar1 + -0x8005600 >> 3 | pcVar1 << 0x3d) < 6) {
                        return;
                    }
                    goto code_r0x080103a8;
                }
                if (arg1 != -0x652be1521fe6ab15) {
                    if (arg1 != -0x57be845bca9148ef) goto code_r0x080103a8;
                    pcVar2 = sym.dwc3_host_prepare.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
code_r0x08005348:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 8) {
                        return;
                    }
                    goto code_r0x080103a8;
                }
                pcVar2 = sym.msm_ep_set_mode.cfi_jt;
            }
        }
        else if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 == -0x550b9e52359ac614) {
                pcVar2 = sym.msm_dwc3_perf_vote_work.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
                goto code_r0x080053dc;
            }
            if (arg1 != -0x4849b454a03b6fa7) {
                if (arg1 != -0x3987c0e26ee29729) goto code_r0x080103a8;
                pcVar2 = sym.msm_dwc3_pwr_irq_thread.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
                goto code_r0x080053f8;
            }
            pcVar2 = sym.dwc3_msm_set_dp_mode.cfi_jt;
        }
        else {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.dwc3_msm_remove.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
code_r0x080053f8:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x080103a8;
            }
            if (arg1 == -0x2ee0710dce68437c) {
                pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
            }
            else {
                if (arg1 != -0x2adee302d6262d9a) goto code_r0x080103a8;
                pcVar2 = sym.dwc3_msm_ep_enable.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x1928ac8ca2ca5be9) {
        if (arg1 < -0x5679cf33e9f3b52) {
            if (arg1 == -0x16ccd154cd488791) {
                if ((pcVar1 + -0x8005548 >> 3 | pcVar1 << 0x3d) < 0x13) {
                    return;
                }
                goto code_r0x080103a8;
            }
            if (arg1 != -0x8e25ebb041d233a) goto code_r0x080103a8;
            pcVar2 = sym.msm_data_fifo_config.cfi_jt;
        }
        else {
            if (arg1 == -0x5679cf33e9f3b52) {
                pcVar2 = sym.__typeid__ZTSFiP6usb_epE_global_addr;
code_r0x080053dc:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 4) {
                    return;
                }
                goto code_r0x080103a8;
            }
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 != 0x157bb25b0e835924) goto code_r0x080103a8;
                pcVar2 = sym.dwc3_msm_usb_role_switch_get_role.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x643f348a21390606) {
        if (arg1 != 0x1928ac8ca2ca5be9) {
            if (arg1 == 0x1e3d0ffe3d0499e9) {
                pcVar2 = sym.bus_vote_store.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
                goto code_r0x08005348;
            }
            if (arg1 != 0x5b83a3fd302a5421) goto code_r0x080103a8;
            pcVar2 = sym.dwc3_core_complete.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
            goto code_r0x080053f8;
        }
        pcVar2 = sym.usb_gsi_ep_op.cfi_jt;
    }
    else if (arg1 == 0x643f348a21390606) {
        pcVar2 = sym.__typeid__ZTSFvP6usb_epP11usb_requestE_global_addr;
    }
    else {
        if (arg1 == 0x7d57972cd3914fb1) {
            pcVar2 = sym.dwc3_msm_id_notifier.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
            goto code_r0x080053dc;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080103a8;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080103a8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80103fc);
    (*pcVar1)();
}


// ===== sym.__typeid__ZTSFvP6usb_epP11usb_requestE_global_addr @ 0x08005430 (size 8) =====

void sym.__typeid__ZTSFvP6usb_epP11usb_requestE_global_addr(int64_t param_1,int64_t param_2)

{
    int64_t *piVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int iVar6;
    int64_t *piVar7;
    int64_t iVar8;
    int *piVar9;
    ulong *in_x18;
    int64_t *piVar10;
    int64_t arg1;
    code *pcVar11;
    uint32_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(param_1 + 0x98) + 400);
    arg1 = *(*(iVar4 + 0x60) + 0x98);
    piVar10 = *(arg1 + 0x138);
    piVar1 = arg1 + 0x138;
    piVar7 = piVar1;
    if (piVar10 != piVar1) {
        iVar8 = piVar10[2];
        piVar7 = piVar10;
        while ((piVar10 = piVar7, iVar8 != param_2 && (piVar10 = *piVar7, piVar7 = piVar1, piVar10 != piVar1))) {
            iVar8 = piVar10[2];
            piVar7 = piVar10;
        }
    }
    if ((piVar10 == NULL) || (piVar10[2] != param_2)) {
        _dev_err(iVar4,"%s: could not find the request\n","dwc3_msm_req_complete_func");
    }
    else {
        uVar5 = __list_del_entry_valid(piVar7);
        if ((uVar5 & 1) != 0) {
            iVar4 = *piVar10;
            piVar1 = piVar10[1];
            *(iVar4 + 8) = piVar1;
            *piVar1 = iVar4;
        }
        *piVar10 = -0x2152ffffffffff00;
        piVar10[1] = -0x2152fffffffffede;
        uVar5 = *(param_1 + 0xaa);
        *(param_1 + 0xa9) = *(param_1 + 0xa9) + '\x01';
        if (0x1f < uVar5) {
    //WARNING: Does not return
            pcVar11 = SoftwareBreakpoint(0x5512,0x8009100);
            (*pcVar11)();
        }
        if (*(arg1 + uVar5 * 0x28 + 0x580) == 1) {
            iVar4 = arg1 + uVar5 * 0x28;
            piVar9 = *(arg1 + 0x1d0);
            uVar2 = *(iVar4 + 0x590);
            *(iVar4 + 0x590) = 0;
            uVar12 = uVar2;
            uVar3 = sym.readl(*(arg1 + 8) + *piVar9 + piVar9[1] * uVar12 + 0xf8000);
            sym.writel(uVar3 & 0xfffffffe,*(arg1 + 8) + **(arg1 + 0x1d0) + (*(arg1 + 0x1d0))[1] * uVar12 + 0xf8000);
        }
        iVar4 = 0;
        iVar6 = 0;
        do {
            piVar9 = arg1 + 0x580 + iVar4;
            iVar4 = iVar4 + 0x28;
            if (*piVar9 == 1) {
                iVar6 = iVar6 + 1;
            }
        } while (iVar4 != 0x500);
        if (iVar6 == 0) {
            sym.dbm_event_buffer_config(arg1,0,0,0);
        }
        pcVar11 = piVar10[3];
        *(param_2 + 0x30) = pcVar11;
        if (pcVar11 != NULL) {
            if (pcVar11 != sym.__typeid__ZTSFvP6usb_epP11usb_requestE_global_addr) {
                __cfi_slowpath_diag(0x643f348a21390606,pcVar11,0x80012f0);
            }
            (*pcVar11)(param_1,param_2);
        }
        kfree(piVar10);
    }
    return;
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x08005438 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module.cfi_jt @ 0x08005440 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_msm_kretprobe_init();
    __platform_driver_register(reloc.dwc3_msm_probe.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.dwc3_msm_ep_enable.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005448 (size 8) =====

uint32_t sym.dwc3_msm_ep_enable.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(int64_t param_1,int64_t param_2)

{
    code *pcVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    uint64_t noname_0;
    uint64_t extraout_x8;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [12];
    ulong uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    uVar2 = 0xffffffea;
    iStack_58 = *(iVar7 + 0x5e0);
    if ((param_1 != 0) && (param_2 != 0)) {
        if ((*(param_2 + 1) == '\x05') && (*(param_2 + 4) != 0)) {
            iVar7 = *(param_1 + 0x98);
            if (((*(param_1 + 0xa4) & 1) != 0) && (obj.dwc3_msm_ep_enable.__already_done == 0x0)) {
                obj.dwc3_msm_ep_enable.__already_done = 0x1;
                uVar4 = dev_driver_string();
                iVar5 = (*(iVar7 + 400))[0xe];
                if (iVar5 == 0) {
                    iVar5 = **(iVar7 + 400);
                }
                __warn_printk("%s %s: %s is already enabled\n",uVar4,iVar5,param_1 + 0xb8);
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x800,0x80077d4);
                (*pcVar1)();
            }
            if ((*(param_1 + 0xa4) & 1) == 0) {
                if ((*(*(iVar7 + 0x198) + 0x20c) == 2) && ((*(*(iVar7 + 0x198) + 0x200) & 7) == 0)) {
                    _dev_err(*(iVar7 + 400),"fail ep_enable %s device is into LPM\n",param_1 + 0xb8);
                    uVar2 = 0xffffffea;
                }
                else {
                    uVar4 = _raw_spin_lock_irqsave(iVar7 + 0x158);
                    iVar8 = *(param_1 + 0x98);
                    iVar6 = *(param_1 + 0x38);
                    uStack_60 = 0;
                    uStack_68 = 0;
                    iVar5 = *(*(*(iVar8 + 400) + 0x60) + 0x98);
                    sym.dwc3_msm_depcfg_params(param_1,&uStack_68);
                    uVar2 = sym.dwc3_core_send_gadget_ep_cmd(param_1,1,&uStack_68);
                    if (uVar2 == 0) {
                        noname_0 = *(param_1 + 0xa4);
                        if ((*(param_1 + 0xa4) & 1) == 0) {
                            sym.dwc3_core_resize_tx_fifos(param_1);
                            *(param_1 + 0xab) = *(iVar6 + 3) & 3;
                            *(param_1 + 0xa4) = *(param_1 + 0xa4) | 1;
                            uVar3 = sym.readl(*(iVar5 + 8) + 0xc720);
                            sym.writel(uVar3 | 1L << (*(param_1 + 0xaa) & 0x3f),*(iVar5 + 8) + 0xc720);
                            *(param_1 + 0xa8) = 0;
                            memset(*(param_1 + 0x88),0,0x1000);
                            noname_0 = *(param_1 + 0x88);
                            *(noname_0 + 0xff0) = *(param_1 + 0x90);
                            *(noname_0 + 0xff4) = (noname_0 - *(param_1 + 0x88)) + *(param_1 + 0x90) >> 0x20;
                            *(noname_0 + 0xffc) = *(noname_0 + 0xffc) | 0x81;
                        }
                    }
                    else {
                        _dev_err(*(iVar8 + 400),"set_ep_config() failed for %s\n",param_1 + 0xb8);
                        noname_0 = extraout_x8;
                    }
                    sym.dwc3_dbg_print(noname_0,*(param_1 + 0xaa),0x8001e26,uVar2);
                    _raw_spin_unlock_irqrestore(iVar7 + 0x158,uVar4);
                }
            }
            else {
                uVar2 = 0;
            }
        }
        else {
            uVar2 = 0xffffffea;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return uVar2;
    }
    auVar9 = __stack_chk_fail();
    iVar7 = auVar9._0_8_;
    iVar5 = *(*(*(*(iVar7 + 0x98) + 400) + 0x60) + 0x98);
    if (auVar9._8_4_ == 0) {
        if (0x20 < *(iVar7 + 0xaa)) goto code_r0x080079a8;
        iVar6 = iVar5 + *(iVar7 + 0xaa) * 0x28;
        *(iVar6 + 0x598) = 0;
        *(iVar6 + 0x590) = 0;
        *(iVar6 + 0x588) = 0;
        *(iVar6 + 0x580) = 0;
        *(iVar6 + 0x578) = 0;
    }
    if (*(iVar7 + 0xaa) < 0x20) {
        *(iVar5 + *(iVar7 + 0xaa) * 0x28 + 0x580) = auVar9._8_4_;
        return 0;
    }
code_r0x080079a8:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80079ac);
    (*pcVar1)();
}


// ===== sym.usb_gsi_ep_op.cfi_jt @ 0x08005450 (size 8) =====

uint32_t sym.usb_gsi_ep_op.cfi_jt(int64_t param_1,uint8_t *param_2,uint32_t param_3)

{
    uint8_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    bool bVar4;
    uint32_t uVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong uVar9;
    char *pcVar10;
    char *pcVar11;
    uint64_t uVar12;
    int64_t *piVar13;
    int64_t *piVar14;
    ulong noname_0;
    int iVar15;
    ulong *in_x18;
    int iVar16;
    int64_t iVar17;
    int64_t iVar18;
    ulong *puVar19;
    uint8_t *puVar20;
    int64_t iVar21;
    ulong unaff_x30;
    ulong uStack_78;
    uint32_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar21 = sp_el0;
    iStack_68 = *(iVar21 + 0x5e0);
    iVar21 = *(param_1 + 0x98);
    puVar19 = *(*(*(iVar21 + 400) + 0x60) + 0x98);
    if (param_3 < 0xe) {
        pcVar11 = *(obj.gsi_op_strings + param_3 * 8);
    }
    else {
        pcVar11 = "Invalid";
    }
    ipc_log_string(puVar19[0xad],"%s: %s(%d):%s","usb_gsi_ep_op",*(param_1 + 8),*(param_1 + 0xaa) >> 1,pcVar11);
    switch(param_3) {
    case 0:
        if ((*(iVar21 + 0x4d8) >> 0xc & 1) != 0) {
            uVar6 = _raw_spin_lock_irqsave(iVar21 + 0x158);
            iVar17 = *(param_1 + 0x38);
            uVar9 = *(param_1 + 0x40);
            iVar16 = (param_2[0x34] << 2 | 0xf8800) - 4;
            iVar7 = *(*(*(*(param_1 + 0x98) + 400) + 0x60) + 0x98);
            sym.writel(*(iVar7 + 0x544),*(iVar7 + 8) + iVar16 + *(*(iVar7 + 0x508) + 8));
            sym.writel(*(iVar7 + 0x540),*(iVar7 + 8) + *(*(iVar7 + 0x508) + 4) + iVar16);
            uStack_70 = 0;
            uStack_78 = 0;
            sym.dwc3_msm_depcfg_params(param_1,&uStack_78);
            uStack_78 = CONCAT44(uStack_78._4_4_ | param_2[0x34] & 0x1f,uStack_78);
            sym.dwc3_core_send_gadget_ep_cmd(param_1,1,&uStack_78);
            if ((*(param_1 + 0xa4) & 1) == 0) {
                sym.dwc3_core_resize_tx_fifos(param_1);
                *(param_1 + 0x38) = iVar17;
                *(param_1 + 0x40) = uVar9;
                uVar1 = *(iVar17 + 3);
                *(param_1 + 0xa4) = *(param_1 + 0xa4) | 1;
                *(param_1 + 0xab) = uVar1 & 3;
                uVar5 = sym.readl(*(iVar7 + 8) + 0xc720);
                sym.writel(uVar5 | 1L << (*(param_1 + 0xaa) & 0x3f),*(iVar7 + 8) + 0xc720);
            }
            _raw_spin_unlock_irqrestore(iVar21 + 0x158,uVar6);
            goto code_r0x0800629c;
        }
code_r0x080060e0:
        ipc_log_string(puVar19[0xad],"%s: No Pullup\n","usb_gsi_ep_op");
        uVar5 = 0xffffff94;
        break;
    case 1:
        if ((*(iVar21 + 0x4d8) >> 0xc & 1) == 0) goto code_r0x080060e0;
        uVar9 = _raw_spin_lock_irqsave(iVar21 + 0x158);
        uStack_70 = *(param_1 + 0x90) >> 0x20 & 0xffff | param_2[0x34] << 0x10 | 0xa00000;
        uStack_78 = *(param_1 + 0x90) << 0x20;
        uVar5 = sym.dwc3_core_send_gadget_ep_cmd(param_1,6,&uStack_78);
        _raw_spin_unlock_irqrestore(iVar21 + 0x158,uVar9);
        break;
    case 2:
        iVar17 = *(param_1 + 0x98);
        iVar16 = (param_2[0x34] << 2 | 0xf8800) - 4;
        puVar19 = *(*(*(iVar17 + 400) + 0x60) + 0x98);
        sym.writel(*(param_1 + 0x90),puVar19[1] + iVar16 + *(puVar19[0xa1] + 0xc));
        sym.writel(*(param_1 + 0x94),puVar19[1] + *(puVar19[0xa1] + 0x10) + iVar16);
        iVar21 = *(param_2 + 0x28);
        if (iVar21 == 0) {
            iVar21 = dma_map_resource(*(iVar17 + 0x198),*(param_2 + 0x20),0x1000,0,0);
            *(param_2 + 0x28) = iVar21;
            if (iVar21 == -1) {
                _dev_err(*puVar19,"mapping error for db_reg_phs_addr_lsb\n");
                iVar21 = *(param_2 + 0x28);
            }
        }
        ipc_log_string(puVar19[0xad],"%s: ep:%s dbl_addr_lsb:%x mapped_addr:%llx\n","gsi_store_ringbase_dbl_info",
                       *(param_1 + 8),*(param_2 + 0x20),iVar21);
        sym.writel(*(param_2 + 0x2c),puVar19[1] + *(puVar19[0xa1] + 8) + iVar16);
        sym.writel(*(param_2 + 0x28),puVar19[1] + *(puVar19[0xa1] + 4) + iVar16);
        goto code_r0x0800629c;
    case 3:
        if ((*(iVar21 + 0x4d8) >> 0xc & 1) == 0) goto code_r0x080060e0;
        iVar17 = *(*(*(*(param_1 + 0x98) + 400) + 0x60) + 0x98);
        iVar21 = *(iVar17 + 8) + **(iVar17 + 0x508) + 0xf8800;
        uVar5 = sym.readl(iVar21);
        sym.writel(uVar5 | 0x1000,iVar21);
        sym.readl(iVar21);
        iVar21 = *(iVar17 + 8) + **(iVar17 + 0x508) + 0xf8800;
        uVar5 = sym.readl(iVar21);
        sym.writel(uVar5 | 0x100000,iVar21);
        sym.readl(iVar21);
        iVar21 = *(iVar17 + 8) + **(iVar17 + 0x508) + 0xf8800;
        uVar5 = sym.readl(iVar21);
        sym.writel(uVar5 & 0xffefffff,iVar21);
        sym.readl(iVar21);
        iVar21 = *(iVar17 + 8) + **(iVar17 + 0x508) + 0xf8800;
        uVar5 = sym.readl(iVar21);
        uVar5 = uVar5 | 1;
        goto code_r0x08006140;
    case 4:
        uVar9 = _raw_spin_lock_irqsave(iVar21 + 0x158);
        uVar12 = *(param_2 + 0x10);
        if (0 < uVar12) {
            iVar17 = 0;
            do {
                iVar7 = *(param_1 + 0x88) + iVar17;
                iVar17 = iVar17 + 0x10;
                *(iVar7 + 0xc) = *(iVar7 + 0xc) | 1;
            } while ((uVar12 & 0xffffffff) * 0x10 - iVar17 != 0);
        }
        uStack_70 = 0;
        uStack_78 = 0;
        uVar5 = sym.dwc3_core_send_gadget_ep_cmd(param_1,*(param_1 + 0xac) << 0x10 | 7,&uStack_78);
        _raw_spin_unlock_irqrestore(iVar21 + 0x158,uVar9);
        break;
    case 5:
        if ((*(iVar21 + 0x4d8) >> 0xc & 1) == 0) goto code_r0x080060e0;
        puVar20 = param_2 + 0x20;
        uVar1 = *(param_1 + 0xcc);
        uVar9 = 0x68000000000713;
        if (arm64_use_ng_mappings != 0x0) {
            uVar9 = 0x68000000000f13;
        }
        iVar17 = *(param_2 + 0x10);
        puVar19 = *(*(*(*(param_1 + 0x98) + 400) + 0x60) + 0x98);
        iVar21 = __ioremap(*puVar20,4,uVar9);
        if (iVar21 == 0) {
            _dev_err(*puVar19,"Failed to map GSI DBL address LSB 0x%x\n",*puVar20);
        }
        else {
            param_2 = param_2 + 0x30;
            uVar9 = 0x68000000000713;
            if (arm64_use_ng_mappings != 0x0) {
                uVar9 = 0x68000000000f13;
            }
            iVar7 = __ioremap(*param_2,4,uVar9);
            if (iVar7 == 0) {
                _dev_err(*puVar19,"Failed to map GSI DBL address MSB 0x%x\n",*param_2);
                iounmap(iVar21);
            }
            else {
                uStack_78 = *(param_1 + 0x90) + (((iVar17 << (uVar1 & 1)) << 0x20) + 0x100000000U >> 0x1c & 0xfffffff0);
                ipc_log_string(puVar19[0xad],"%s: ep:%s link TRB addr:%pad db_lsb:%pad db_msb:%pad\n","gsi_ring_db",
                               *(param_1 + 8),&uStack_78,puVar20,param_2);
                sym.writel_relaxed(uStack_78 & 0xffffffff,iVar21);
                sym.writel_relaxed(uStack_78 >> 0x20,iVar7);
                iounmap(iVar21);
                iounmap(iVar7);
            }
        }
        goto code_r0x0800629c;
    case 6:
        uVar9 = _raw_spin_lock_irqsave(iVar21 + 0x158);
        sym.dwc3_core_stop_active_transfer(param_1);
        _raw_spin_unlock_irqrestore(iVar21 + 0x158,uVar9);
        goto code_r0x0800629c;
    case 7:
        uVar1 = *(param_1 + 0xaa);
        iVar21 = *(*(*(*(param_1 + 0x98) + 400) + 0x60) + 0x98);
        iVar16 = *(iVar21 + 0x20);
        param_2[8] = 0;
        *(param_2 + 4) = iVar16 + uVar1 * 0x10 + 0xc80c;
        iVar17 = *(param_2 + 0x20);
        *(param_2 + 0x18) = *(param_1 + 0x90);
        param_2[2] = *(iVar17 + 0x18) >> 10;
        if ((*(param_1 + 0xcc) & 1) == 0) {
            *(param_2 + 0x12) = *(iVar17 + 0x10) * 0x10 + 0x20;
            iVar7 = *(iVar17 + 0x10);
        }
        else {
            *(param_2 + 0x12) = *(iVar17 + 0x10) * 0x20 + 0x20;
            iVar7 = *(iVar17 + 0x10) << 1;
        }
        uVar5 = 0;
        *param_2 = ((iVar7 << 0x20) + 0x100000000U >> 0x1c) + *(param_1 + 0x90);
        iVar16 = *(iVar21 + 0x20);
        uVar1 = *(iVar17 + 0x34);
        param_2[0x10] = 0;
        *(param_2 + 0xc) = iVar16 + uVar1 * 0x10 + 0xc40c;
        break;
    case 8:
        uVar5 = *(param_1 + 0xac);
        break;
    case 9:
        if ((*(iVar21 + 0x4d8) >> 0xc & 1) == 0) goto code_r0x080060e0;
        iVar21 = *(param_1 + 0x98);
        iVar17 = *(*(*(iVar21 + 400) + 0x60) + 0x98);
        if (1 < *(param_1 + 0xaa)) {
            iVar7 = *(param_1 + 0x88);
            if ((iVar7 != 0) && (*(param_1 + 0x90) != 0)) {
                memset(iVar7,0,0x1000);
                sym.dwc3_dbg_print(noname_0,*(param_1 + 0xaa),0x8001dde,0);
                _dev_info(*(iVar21 + 400),"Clr_TRB ring of %s\n",param_1 + 0xb8);
                dma_free_attrs(*(iVar21 + 0x198),0x1000,*(param_1 + 0x88),*(param_1 + 0x90),0);
                iVar21 = *(param_1 + 0x98);
                *(param_1 + 0x88) = 0;
                *(param_1 + 0x90) = 0;
                iVar17 = *(*(*(iVar21 + 400) + 0x60) + 0x98);
            }
        }
        iVar7 = *(param_2 + 0x10);
        uVar1 = *(param_1 + 0xcc);
        iVar18 = *(param_2 + 0x18) * iVar7;
        iVar8 = dma_alloc_attrs(*(iVar21 + 0x198),iVar18,param_2 + 8,0xcc0,0);
        *param_2 = iVar8;
        if (iVar8 != 0) {
            iVar16 = iVar7 << (uVar1 & 1);
            uVar5 = iVar16 + 2;
            dma_get_sgtable_attrs(*(iVar21 + 0x198),param_2 + 0x48,iVar8,*(param_2 + 8),iVar18,0);
            uStack_78 = *(param_2 + 8);
            ipc_log_string(*(iVar17 + 0x568),"%s: TRB buffer_addr = %pad buf_len = %zu\n","gsi_prepare_trbs",
                           &uStack_78,*(param_2 + 0x18));
            uVar12 = -(uVar5 >> 0x1f) & 0xfffffff000000000 | uVar5 << 4;
            iVar7 = dma_alloc_attrs(*(iVar21 + 0x198),uVar12,param_1 + 0x90,0xcc0,0);
            *(param_1 + 0x88) = iVar7;
            if (iVar7 != 0) {
                memset(iVar7,0,uVar12);
                if (0x1f < *(param_1 + 0xaa)) goto code_r0x08006724;
                iVar7 = *(param_1 + 0x90);
                *(iVar17 + *(param_1 + 0xaa) * 0x28 + 0x594) = uVar5;
                dma_get_sgtable_attrs
                          (*(iVar21 + 0x198),param_2 + 0x38,*(param_1 + 0x88),*(param_1 + 0x90),uVar12,0);
                if (*(param_2 + 0x40) != 0) {
                    uVar5 = 0;
                    uVar9 = *(param_2 + 0x38);
                    do {
                        uVar5 = uVar5 + 1;
                        uVar9 = sg_next(uVar9);
                    } while (uVar5 < *(param_2 + 0x40));
                }
                piVar13 = *(param_1 + 0x88);
                uVar2 = iVar7 >> 0x20;
                if ((*(param_1 + 0xcc) & 1) == 0) {
                    *(piVar13 + 0xc) = 0x80;
                    *piVar13 = iVar7 + 0x10;
                    piVar14 = piVar13;
                    if (1 < iVar16 + 1) {
                        do {
                            iVar16 = iVar16 + -1;
                            piVar13 = piVar14 + 2;
                            *piVar13 = uStack_78;
                            *(piVar14 + 0x14) = uStack_78._4_4_;
                            *(piVar14 + 3) = *(param_2 + 0x18);
                            uStack_78 = uStack_78 + *(param_2 + 0x18);
                            *(piVar14 + 0x1c) = 0xc18;
                            piVar14 = piVar13;
                        } while (iVar16 != 0);
                    }
                    uVar2 = uVar2 & 0xffff;
                    uVar5 = 0;
                    *(piVar13 + 2) = iVar7;
                    *(piVar13 + 0x14) = uVar2;
                    uVar1 = param_2[0x34];
                    *(piVar13 + 0x1c) = 0x81;
                    *(piVar13 + 0x14) = uVar2 | uVar1 << 0x10 | 0xa00000;
                }
                else {
                    if (*(param_2 + 0x10) == -1) {
                        iVar15 = 0;
                    }
                    else {
                        iVar15 = 0;
                        do {
                            *(piVar13 + 0xc) = 0x810;
                            iVar15 = iVar15 + 1;
                            piVar13 = piVar13 + 2;
                        } while (iVar15 < *(param_2 + 0x10) + 1U);
                    }
                    if (iVar15 < iVar16 + 1) {
                        iVar16 = (iVar16 - iVar15) + 1;
                        do {
                            *piVar13 = uStack_78;
                            iVar16 = iVar16 + -1;
                            *(piVar13 + 0xc) = 0x810;
                            *(piVar13 + 4) = uStack_78._4_4_;
                            piVar13 = piVar13 + 2;
                            uStack_78 = uStack_78 + *(param_2 + 0x18);
                        } while (iVar16 != 0);
                    }
                    uVar2 = uVar2 & 0xffff;
                    uVar5 = 0;
                    *piVar13 = iVar7;
                    *(piVar13 + 4) = uVar2;
                    uVar1 = param_2[0x34];
                    *(piVar13 + 0xc) = 0x81;
                    *(piVar13 + 4) = uVar2 | uVar1 << 0x10 | 0xa00000;
                }
                break;
            }
            dma_free_attrs(*(iVar21 + 0x198),iVar18,*param_2,*(param_2 + 8),0);
            param_2[0] = 0;
            param_2[1] = 0;
            param_2[2] = 0;
            param_2[3] = 0;
            param_2[4] = 0;
            param_2[5] = 0;
            param_2[6] = 0;
            param_2[7] = 0;
            sg_free_table(param_2 + 0x48);
        }
        uVar5 = 0xfffffff4;
        break;
    case 10:
        uVar12 = *(param_1 + 0xaa);
        if (0x1f < uVar12) goto code_r0x08006724;
        iVar17 = *(param_1 + 0x98);
        iVar21 = *(*(*(iVar17 + 400) + 0x60) + 0x98) + 0x578;
        if (*(iVar21 + uVar12 * 0x28 + 8) == 2) {
            if (*(param_1 + 0x90) != 0) {
                dma_free_attrs(*(iVar17 + 0x198),*(iVar21 + uVar12 * 0x28 + 0x1c) << 4,*(param_1 + 0x88),
                               *(param_1 + 0x90),0);
                *(param_1 + 0x88) = 0;
                *(param_1 + 0x90) = 0;
            }
            sg_free_table(param_2 + 0x38);
            dma_free_attrs(*(iVar17 + 0x198),*(param_2 + 0x10) * *(param_2 + 0x18),*param_2,*(param_2 + 8),0);
            param_2[0] = 0;
            param_2[1] = 0;
            param_2[2] = 0;
            param_2[3] = 0;
            param_2[4] = 0;
            param_2[5] = 0;
            param_2[6] = 0;
            param_2[7] = 0;
            sg_free_table(param_2 + 0x48);
        }
        if (*(param_1 + 0x88) == 0) {
            iVar21 = dma_alloc_attrs(*(*(param_1 + 0x98) + 0x198),0x1000,param_1 + 0x90,0xcc0,0);
            *(param_1 + 0x88) = iVar21;
            if (iVar21 == 0) {
                pcVar10 = param_1 + 0xb8;
                pcVar11 = "failed to allocate trb pool for %s\n";
                uVar9 = *(*(param_1 + 0x98) + 400);
                goto code_r0x080066ac;
            }
        }
        goto code_r0x0800629c;
    case 0xb:
        uVar1 = *param_2;
        iVar21 = *(*(*(*(param_1 + 0x98) + 400) + 0x60) + 0x98);
        iVar21 = *(iVar21 + 8) + **(iVar21 + 0x508) + 0xf8800;
        uVar5 = sym.readl(iVar21);
        uVar5 = uVar5 & 0xfffffffd | uVar1 << 1;
code_r0x08006140:
        sym.writel(uVar5,iVar21);
        sym.readl(iVar21);
        goto code_r0x0800629c;
    case 0xc:
        iVar16 = -0x5dd;
        do {
            uVar5 = sym.readl(puVar19[1] + *(puVar19[0xa1] + 0x14) + 0xf8800);
            if ((uVar5 >> 0xf & 1) == 0) {
                uVar5 = 1;
                goto code_r0x080062a0;
            }
            bVar4 = iVar16 != -1;
            iVar16 = iVar16 + 1;
        } while (bVar4);
        _dev_err(*puVar19,"Unable to suspend GSI ch. WR_CTRL_STATE != 0\n");
        uVar5 = (uVar5 & 0x8000) >> 0xf ^ 1;
        break;
    case 0xd:
        uVar9 = _raw_spin_lock_irqsave(iVar21 + 0x158);
        sym.dwc3_core_stop_active_transfer(param_1);
        _raw_spin_unlock_irqrestore(iVar21 + 0x158,uVar9);
        pcVar3 = *(*(param_1 + 0x10) + 8);
        if (3 < (pcVar3 + -0x8005468 >> 3 | pcVar3 << 0x3d)) {
            __cfi_slowpath_diag(0xfa98630cc160c4ae,pcVar3,0x80012d0);
        }
        uVar5 = (*pcVar3)(param_1);
        break;
    default:
        uVar9 = *puVar19;
        pcVar11 = "%s: Invalid opcode GSI EP\n";
        pcVar10 = "usb_gsi_ep_op";
code_r0x080066ac:
        _dev_err(uVar9,pcVar11,pcVar10);
code_r0x0800629c:
        uVar5 = 0;
    }
code_r0x080062a0:
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    __stack_chk_fail();
code_r0x08006724:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8006728);
    (*pcVar3)();
}


// ===== sym.msm_data_fifo_config.cfi_jt @ 0x08005458 (size 8) =====

ulong sym.msm_data_fifo_config.cfi_jt(int64_t param_1,uint64_t param_2,uint32_t param_3,uint8_t param_4)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = param_4;
    puVar5 = *(*(*(*(param_1 + 0x98) + 400) + 0x60) + 0x98);
    if (uVar2 < 8) {
        if (0x1f < *(param_1 + 0xaa)) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x800598c);
            (*pcVar1)();
        }
        iVar4 = puVar5[0x3a];
        *(puVar5 + *(param_1 + 0xaa) * 5 + 0xb2) = param_4;
        sym.writel(param_2 & 0xffffffff,puVar5[1] + *(iVar4 + 0x88) + *(iVar4 + 0x8c) * uVar2 + 0xf8000);
        sym.writel(param_2 >> 0x20,puVar5[1] + *(puVar5[0x3a] + 0x90) + *(puVar5[0x3a] + 0x94) * uVar2 + 0xf8000);
        iVar4 = puVar5[1] + *(puVar5[0x3a] + 0x10) + *(puVar5[0x3a] + 0x14) * uVar2 + 0xf8000;
        uVar2 = sym.readl(iVar4);
        sym.writel(uVar2 & 0xffff0000 | param_3,iVar4);
        sym.readl(iVar4);
        uVar3 = 0;
    }
    else {
        _dev_err(*puVar5,"Invalid DBM EP num:%d\n",uVar2);
        uVar3 = 0xffffffea;
    }
    return uVar3;
}


// ===== sym.dwc3_msm_usb_role_switch_get_role.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005460 (size 8) =====

uchar sym.dwc3_msm_usb_role_switch_get_role.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(void)

{
    uchar uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = usb_role_switch_get_drvdata();
    if (*(iVar2 + 0x352) == '\0') {
        uVar1 = *(iVar2 + 0x358) == 0;
    }
    else {
        uVar1 = 2;
    }
    uVar4 = *(iVar2 + 0x568);
    uVar3 = usb_role_string(uVar1);
    ipc_log_string(uVar4,"%s: get_role:%s\n","dwc3_msm_usb_role_switch_get_role",uVar3);
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP6usb_epE_global_addr @ 0x08005468 (size 8) =====

ulong sym.__typeid__ZTSFiP6usb_epE_global_addr(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    ulong uVar7;
    ulong uVar8;
    code *pcVar9;
    ulong uVar10;
    uint64_t uVar11;
    ulong *puVar12;
    ulong *in_x18;
    ulong *puVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98) + 0x158;
    puVar13 = *(*(*(*(param_1 + 0x98) + 400) + 0x60) + 0x98);
    uVar10 = _raw_spin_lock_irqsave(iVar1);
    uVar11 = *(param_1 + 0xaa);
    if (uVar11 < 0x20) {
        if (puVar13[uVar11 + 7] == 0) {
            puVar13[uVar11 + 7] = *(param_1 + 0x10);
            puVar13 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xb20,0x60);
            if (puVar13 == NULL) {
                _raw_spin_unlock_irqrestore(iVar1,uVar10);
                uVar10 = 0xfffffff4;
            }
            else {
                puVar12 = *(param_1 + 0x10);
                uVar2 = puVar12[4];
                uVar3 = puVar12[6];
                uVar6 = puVar12[7];
                puVar13[5] = puVar12[5];
                uVar4 = puVar12[2];
                uVar7 = puVar12[3];
                uVar5 = *puVar12;
                uVar8 = puVar12[1];
                puVar13[6] = uVar3;
                puVar13[7] = uVar6;
                puVar13[3] = uVar7;
                puVar13[4] = uVar2;
                *puVar13 = uVar5;
                puVar13[1] = uVar8;
                puVar13[2] = uVar4;
                uVar2 = puVar12[10];
                uVar4 = puVar12[0xb];
                uVar3 = puVar12[8];
                uVar5 = puVar12[9];
                puVar13[5] = sym.dwc3_msm_ep_queue.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
                *puVar13 = sym.dwc3_msm_ep_enable.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
                puVar13[10] = uVar2;
                puVar13[0xb] = uVar4;
                *(param_1 + 0x10) = puVar13;
                puVar13[8] = uVar3;
                puVar13[9] = uVar5;
                _raw_spin_unlock_irqrestore(iVar1,uVar10);
                uVar10 = 0;
            }
        }
        else {
            _raw_spin_unlock_irqrestore(iVar1,uVar10);
            _dev_err(*puVar13,"ep [%s,%d] already configured as msm endpoint\n",*(param_1 + 8),*(param_1 + 0xaa));
            uVar10 = 0xffffffff;
        }
        return uVar10;
    }
    //WARNING: Does not return
    pcVar9 = SoftwareBreakpoint(0x5512,0x8007174);
    (*pcVar9)();
}


// ===== sym.msm_dwc3_reset_dbm_ep.cfi_jt @ 0x08005470 (size 8) =====

ulong sym.msm_dwc3_reset_dbm_ep.cfi_jt(int64_t param_1)

{
    int *piVar1;
    code *pcVar2;
    uint32_t uVar3;
    ulong uVar4;
    int iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    uint32_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = *(param_1 + 0xaa);
    if (uVar6 < 0x20) {
        iVar8 = *(*(*(*(param_1 + 0x98) + 400) + 0x60) + 0x98);
        if (*(iVar8 + uVar6 * 0x28 + 0x580) == 1) {
            uVar6 = 1L << (*(iVar8 + uVar6 * 0x28 + 0x590) & 0x3f);
            uVar9 = uVar6 & 0xf;
            iVar7 = *(iVar8 + 8) + *(*(iVar8 + 0x1d0) + 0x68) + 0xf8000;
            uVar6 = (uVar6 & 10) >> 1 | (uVar6 & 5) << 1;
            uVar3 = sym.readl(iVar7);
            sym.writel(1 << (LZCOUNT((uVar6 >> 2 | (uVar6 & 0x3333333333333333) << 2) << 0x3c) & 0x1f) |
                       uVar3 & (uVar9 ^ 0xffffffff),iVar7);
            sym.readl(iVar7);
            iVar7 = 0;
            iVar5 = 0;
            do {
                piVar1 = iVar8 + 0x580 + iVar7;
                iVar7 = iVar7 + 0x28;
                if (*piVar1 == 1) {
                    iVar5 = iVar5 + 1;
                }
            } while (iVar7 != 0x500);
            if (iVar5 < 2) {
                __const_udelay(0xa7c6);
            }
            else {
                usleep_range_state(1000,0x4b0,2);
            }
            iVar8 = *(iVar8 + 8) + *(*(iVar8 + 0x1d0) + 0x68) + 0xf8000;
            uVar3 = sym.readl(iVar8);
            sym.writel(uVar3 & ~uVar9,iVar8);
            sym.readl(iVar8);
            uVar4 = 0;
        }
        else {
            uVar4 = 0xffffffed;
        }
        return uVar4;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8005ad8);
    (*pcVar2)();
}


// ===== sym.msm_ep_clear_ops.cfi_jt @ 0x08005478 (size 8) =====

ulong sym.msm_ep_clear_ops.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    code *pcVar2;
    ulong uVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98) + 0x158;
    puVar6 = *(*(*(*(param_1 + 0x98) + 400) + 0x60) + 0x98);
    uVar3 = _raw_spin_lock_irqsave(iVar1);
    uVar5 = *(param_1 + 0xaa);
    if (uVar5 < 0x20) {
        if (puVar6[uVar5 + 7] == 0) {
            _raw_spin_unlock_irqrestore(iVar1,uVar3);
            _dev_err(*puVar6,"ep [%s,%d] was not configured as msm endpoint\n",*(param_1 + 8),*(param_1 + 0xaa));
            uVar3 = 0xffffffea;
        }
        else {
            uVar4 = *(param_1 + 0x10);
            *(param_1 + 0x10) = puVar6[uVar5 + 7];
            puVar6[uVar5 + 7] = 0;
            kfree(uVar4);
            _raw_spin_unlock_irqrestore(iVar1,uVar3);
            uVar3 = 0;
        }
        return uVar3;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8007040);
    (*pcVar2)();
}


// ===== sym.msm_ep_unconfig.cfi_jt @ 0x08005480 (size 8) =====

ulong sym.msm_ep_unconfig.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint8_t uVar2;
    code *pcVar3;
    uint32_t uVar4;
    ulong uVar5;
    int iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int *piVar9;
    ulong *in_x18;
    int64_t arg1;
    uint32_t uVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98) + 0x158;
    arg1 = *(*(*(*(param_1 + 0x98) + 400) + 0x60) + 0x98);
    uVar5 = _raw_spin_lock_irqsave(iVar1);
    uVar2 = *(param_1 + 0xaa);
    if (uVar2 < 0x20) {
        if (*(arg1 + 0x578 + uVar2 * 0x28 + 8) == 3) {
            uVar8 = uVar2 + 0xf;
            if ((*(param_1 + 0xcc) & 1) != 0) {
                uVar8 = uVar2 >> 1;
            }
            uVar4 = sym.readl(*(arg1 + 8) + 0xf8a00);
            sym.writel(uVar4 & (1L << (uVar8 & 0x3f) ^ 0xffffffff),*(arg1 + 8) + 0xf8a00);
            sym.writel(0,*(arg1 + 8) + 0xf8a00);
            uVar4 = sym.readl(*(arg1 + 8) + 0xf8a04);
            sym.writel(uVar4 & 0xffffefff,*(arg1 + 8) + 0xf8a04);
            if (0x20 < *(param_1 + 0xaa)) goto code_r0x08006eb0;
            iVar7 = *(*(*(*(param_1 + 0x98) + 400) + 0x60) + 0x98) + *(param_1 + 0xaa) * 0x28;
            if (*(iVar7 + 0x588) != 0) {
                memunmap();
                *(iVar7 + 0x588) = 0;
            }
        }
        else if (((*(param_1 + 0xa9) == *(param_1 + 0xa8)) && (*(param_1 + 0x60) == param_1 + 0x60)) &&
                (*(param_1 + 0x70) == param_1 + 0x70)) {
            uVar8 = *(param_1 + 0xaa);
            if (0x1f < uVar8) goto code_r0x08006eb0;
            if (*(arg1 + uVar8 * 0x28 + 0x580) == 1) {
                iVar7 = arg1 + uVar8 * 0x28;
                piVar9 = *(arg1 + 0x1d0);
                uVar2 = *(iVar7 + 0x590);
                *(iVar7 + 0x590) = 0;
                uVar10 = uVar2;
                uVar4 = sym.readl(*(arg1 + 8) + *piVar9 + piVar9[1] * uVar10 + 0xf8000);
                sym.writel(uVar4 & 0xfffffffe,*(arg1 + 8) + **(arg1 + 0x1d0) + (*(arg1 + 0x1d0))[1] * uVar10 + 0xf8000)
                ;
            }
            iVar7 = 0;
            iVar6 = 0;
            do {
                piVar9 = arg1 + 0x580 + iVar7;
                iVar7 = iVar7 + 0x28;
                if (*piVar9 == 1) {
                    iVar6 = iVar6 + 1;
                }
            } while (iVar7 != 0x500);
            if (iVar6 == 0) {
                sym.dbm_event_buffer_config(arg1,0,0,0);
            }
        }
        if (*(param_1 + 0xaa) < 0x20) {
            *(arg1 + 0x578 + *(param_1 + 0xaa) * 0x28) = 0;
            _raw_spin_unlock_irqrestore(iVar1,uVar5);
            return 0;
        }
    }
code_r0x08006eb0:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8006eb4);
    (*pcVar3)();
}


// ===== sym.dwc3_msm_id_notifier.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005488 (size 8) =====

ulong sym.dwc3_msm_id_notifier.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt
                (ulong param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_4 != 0) && (iVar3 = *(param_2 + -0x28), iVar3 != 0)) {
        sym.dwc3_dbg_print(param_1,0xff,0x80038d6,*(param_2 + -0x20));
        uVar2 = param_3 == 0;
        if (*(iVar3 + 0x358) != uVar2) {
            uVar1 = *(param_2 + -0x20);
            *(iVar3 + 0x358) = uVar2;
            *(iVar3 + 0x388) = uVar1;
            sym.dwc3_dbg_print(uVar1,0xff,0x8002f8b,param_3 == 0);
            queue_work_on(0x20,*(iVar3 + 0x280),iVar3 + 0x218);
        }
    }
    return 0;
}


// ===== sym.dwc_dpdm_cb.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005490 (size 8) =====

ulong sym.dwc_dpdm_cb.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 == 0x80) && (*(param_1 + -0x1f8) == 0)) {
        queue_delayed_work_on(0x20,*(param_1 + -0x290),param_1 + -0x288,0);
    }
    return 1;
}


// ===== sym.dwc3_msm_host_notifier.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005498 (size 8) =====

ulong sym.dwc3_msm_host_notifier.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt
                (int64_t param_1,int64_t param_2,int64_t param_3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 - 3U < 0xfffffffffffffffe) {
        return 0;
    }
    iVar4 = *(*(param_1 + -0x368) + 0xa8);
    if (param_2 == 1) {
        iVar6 = *(param_3 + 0x48);
        *(param_3 + 0x1f8) = *(param_3 + 0x1f8) | 2;
        if (iVar6 == 0) {
            __pm_runtime_use_autosuspend(param_3 + 0xa8,1);
            pm_runtime_set_autosuspend_delay(param_3 + 0xa8,1000);
            return 0;
        }
    }
    else {
        iVar6 = *(param_3 + 0x48);
        if (iVar6 == 0) {
            return 0;
        }
    }
    if (*(iVar6 + 0x48) != 0) {
        return 0;
    }
    if (*(*(param_3 + 0x108) + 0x60) != *(iVar4 + 0x1a0) + 0x10) {
        return 0;
    }
    iVar4 = param_1 + -0x390;
    if (param_2 != 1) {
        clk_set_rate(*(param_1 + -0x248),*(param_1 + -0x240));
        *(param_1 + -0x44) = 0;
        sym.dwc3_msm_update_bus_bw(iVar4,*(param_1 + -0x68));
        sym.dwc3_msm_host_ss_powerup(iVar4);
        if (*(*(param_3 + 0x48) + 0x1c) < 5) {
            return 0;
        }
        usb_redriver_host_powercycle(*(param_1 + -0x1c8));
        return 0;
    }
    piVar7 = param_1 + -0x388;
    uVar1 = sym.readl(*piVar7 + 4);
    uVar1 = uVar1 >> 0x18 & 0x7f;
    if (uVar1 == 0) {
code_r0x0800e7e0:
        clk_set_rate(*(param_1 + -0x248),*(param_1 + -0x238));
        *(param_1 + -0x44) = 3;
        sym.dwc3_msm_update_bus_bw(iVar4,2);
        sym.dwc3_msm_host_ss_powerdown(iVar4);
    }
    else {
        uVar2 = sym.readl(*piVar7 + 0x420);
        if (((uVar2 & 1) == 0) || ((uVar2 & 0x3000) == 0)) {
            iVar6 = 0x430;
            uVar2 = 1;
            do {
                uVar5 = uVar2;
                if (uVar1 == uVar5) break;
                uVar3 = sym.readl(*piVar7 + iVar6);
                iVar6 = iVar6 + 0x10;
                uVar2 = uVar5 + 1;
            } while (((uVar3 & 1) == 0) || ((uVar3 & 0x3000) == 0));
            if (uVar1 <= uVar5) goto code_r0x0800e7e0;
        }
        if (*(param_1 + -0x44) < 5) {
            sym.dwc3_msm_host_ss_powerup(iVar4);
        }
        *(param_1 + -0x44) = 5;
    }
    return 0;
}


// ===== sym.dwc3_msm_vbus_notifier.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x080054a0 (size 8) =====

ulong sym.dwc3_msm_vbus_notifier.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt
                (int64_t param_1,uint64_t param_2,int64_t param_3)

{
    int iVar1;
    ulong uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_3 != 0) && (iVar5 = *(param_1 + -0x10), iVar5 != 0)) {
        iVar4 = *(iVar5 + 0x28);
        if (iVar4 == 0) {
            iVar6 = 0;
        }
        else {
            iVar6 = *(iVar4 + 0xa8);
        }
        sym.dwc3_dbg_print(iVar4,0xff,0x80038d6,*(param_1 + -8));
        uVar2 = extcon_get_edev_name(param_3);
        ipc_log_string(*(iVar5 + 0x568),"%s: edev:%s\n","dwc3_msm_vbus_notifier",uVar2);
        uVar3 = strlen(uVar2);
        iVar4 = strnstr(uVar2,0x80031ec,uVar3);
        if (iVar4 == 0) {
            if (*(iVar5 + 0x352) == param_2) {
                return 0;
            }
            *(iVar5 + 0x352) = param_2 != 0;
        }
        else {
            iVar1 = extcon_get_state(param_3,0x3d);
            if (*(iVar5 + 0x353) == param_2) {
                return 0;
            }
            *(iVar5 + 0x353) = param_2 != 0;
            if (((iVar6 != 0) && (4 < *(*(iVar6 + 0x370) + 0x58))) && (iVar1 == 0)) {
                return 0;
            }
            *(iVar5 + 0x351) = 1;
        }
        *(iVar5 + 0x388) = *(param_1 + -8);
        if ((*(iVar5 + 0x324) == 3) && (*(iVar5 + 0x278) == '\0')) {
            queue_work_on(0x20,*(iVar5 + 0x280),iVar5 + 0x218);
        }
    }
    return 0;
}


// ===== sym.dwc3_msm_set_dp_mode.cfi_jt @ 0x080054a8 (size 8) =====

int sym.dwc3_msm_set_dp_mode.cfi_jt(int64_t param_1,uint32_t param_2,int param_3)

{
    int iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong *arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    if ((arg1 == NULL) || (arg1[5] == 0)) {
        _dev_err(param_1,"dwc3-msm is not initialized yet.\n");
        return -0xb;
    }
    flush_work(arg1 + 0x43);
    flush_workqueue(arg1[0x51]);
    _dev_err(*arg1,"DP: cur_state:%d new_state:%d lanes:%d\n",*(arg1 + 0xa8c),param_2 & 1,param_3);
    if ((param_2 & 1) == 0) {
        _dev_err(*arg1,"%s: DP not connected, refcnt:%d\n","dwc3_msm_set_dp_mode",*(arg1 + 0x151));
        mutex_lock(arg1 + 0x9a);
        iVar1 = *(arg1 + 0x151);
        *(arg1 + 0xab) = 0;
        *(arg1 + 0xa8c) = 0;
        *(arg1 + 0x151) = iVar1 + -1;
        if (*(arg1 + 100) == 4) {
            if (iVar1 + -1 == 0) {
                sym.dwc3_start_stop_host(arg1);
            }
        }
        else {
            sym.dwc3_msm_clear_dp_only_params(arg1);
        }
        *(arg1[0x38] + 0x10) = *(arg1[0x38] + 0x10) & 0xfffffbff;
        mutex_unlock(arg1 + 0x9a);
        return 0;
    }
    if (*(arg1 + 0xa8c) == param_3) {
        ipc_log_string(arg1[0xad],"%s: DP lane already configured\n","dwc3_msm_set_dp_mode");
        return 0;
    }
    ipc_log_string(arg1[0xad],"%s: Set DP lanes:%d refcnt:%d\n","dwc3_msm_set_dp_mode",param_3,*(arg1 + 0x151));
    if (param_3 == 2) {
        if (*(arg1 + 0x349) == '\0') {
            msleep(0x19);
            return -0xb;
        }
        mutex_lock(arg1 + 0x9a);
        *(arg1 + 0xa8c) = 2;
        *(arg1 + 0x151) = *(arg1 + 0x151) + 1;
        mutex_unlock(arg1 + 0x9a);
        usb_redriver_release_lanes(arg1[0x39],2);
        __pm_runtime_resume(arg1[5] + 0x10,4);
        *(arg1[0x38] + 0x10) = *(arg1[0x38] + 0x10) | 0x400;
        __pm_runtime_idle(arg1[5] + 0x10,4);
        ipc_log_string(arg1[0xad],"%s: Set DP 2 lanes: success, refcnt:%d\n","dwc3_msm_set_dp_mode",*(arg1 + 0x151));
        return 0;
    }
    flush_work(arg1 + 0x43);
    flush_workqueue(arg1[0x51]);
    mutex_lock(arg1 + 0x9a);
    if (*(arg1 + 0x6b) == 0) {
        iVar1 = sym.dwc3_start_stop_host(arg1);
        if (iVar1 != 0) goto code_r0x08008418;
        sym.dwc3_msm_set_dp_only_params(arg1);
        sym.dwc3_start_stop_host(arg1);
    }
    else if (*(arg1 + 0x352) == '\0') {
        uVar2 = arg1[99];
        while ((uVar2 >> 3 & 1) != 0) {
            msleep(0x14);
            uVar2 = arg1[99];
        }
        ipc_log_string(arg1[0xad],"%s: USB is not active.\n","dwc3_msm_set_dp_mode");
        sym.dwc3_msm_set_dp_only_params(arg1);
    }
    else {
        iVar1 = sym.dwc3_start_stop_device(arg1);
        if (iVar1 != 0) goto code_r0x08008418;
        sym.dwc3_msm_set_dp_only_params(arg1);
        sym.dwc3_start_stop_device(arg1);
    }
    if (*(arg1 + 0xa8c) != 2) {
        *(arg1 + 0x151) = *(arg1 + 0x151) + 1;
    }
    iVar1 = 0;
    *(arg1 + 0xa8c) = 4;
code_r0x08008418:
    ipc_log_string(arg1[0xad],"%s: Set DP 4 lanes: %d refcnt:%d\n","dwc3_msm_set_dp_mode",iVar1,*(arg1 + 0x151));
    mutex_unlock(arg1 + 0x9a);
    return iVar1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080054b0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.dwc3_msm_probe.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt);
    sym.dwc3_msm_kretprobe_exit();
    return;
}


// ===== sym.dwc3_msm_remove.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x080054b8 (size 8) =====

ulong sym.dwc3_msm_remove.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    ulong noname_0;
    int64_t iVar3;
    ulong noname_0_00;
    ulong *puVar4;
    ulong *in_x18;
    ulong uVar5;
    int64_t iVar6;
    ulong *puVar7;
    int64_t iVar8;
    uint32_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar7 = *(param_1 + 0xa8);
    iVar8 = *(puVar7[5] + 0xa8);
    usb_role_switch_unregister(puVar7[0xa9]);
    if (puVar7[0xa3] != 0) {
        regulator_unregister_notifier(puVar7[0xa6],puVar7 + 0xa3);
        puVar7[0xa3] = 0;
    }
    uVar1 = __pm_runtime_resume(*puVar7,4);
    sym.dwc3_dbg_print(noname_0,0xff,0x800180f,uVar1);
    if (uVar1 < 0) {
        _dev_err(*puVar7,"pm_runtime_get_sync failed with %d\n",uVar1);
        uVar5 = puVar7[0x33];
        iVar2 = clk_prepare(uVar5);
        if ((iVar2 == 0) && (iVar2 = clk_enable(uVar5), iVar2 != 0)) {
            clk_unprepare(uVar5);
        }
        uVar5 = puVar7[0x2f];
        iVar2 = clk_prepare(uVar5);
        if ((iVar2 == 0) && (iVar2 = clk_enable(uVar5), iVar2 != 0)) {
            clk_unprepare(uVar5);
        }
        uVar5 = puVar7[0x29];
        iVar2 = clk_prepare(uVar5);
        if ((iVar2 == 0) && (iVar2 = clk_enable(uVar5), iVar2 != 0)) {
            clk_unprepare(uVar5);
        }
        uVar5 = puVar7[0x2d];
        iVar2 = clk_prepare(uVar5);
        if ((iVar2 == 0) && (iVar2 = clk_enable(uVar5), iVar2 != 0)) {
            clk_unprepare(uVar5);
        }
        uVar5 = puVar7[0x2e];
        iVar2 = clk_prepare(uVar5);
        if ((iVar2 == 0) && (iVar2 = clk_enable(uVar5), iVar2 != 0)) {
            clk_unprepare(uVar5);
        }
        uVar5 = puVar7[0x32];
        iVar2 = clk_prepare(uVar5);
        if ((iVar2 == 0) && (iVar2 = clk_enable(uVar5), iVar2 != 0)) {
            clk_unprepare(uVar5);
        }
    }
    irq_to_desc(*(puVar7 + 0x20c));
    cancel_delayed_work_sync(puVar7 + 0x83);
    if ((*(puVar7 + 0x6a) != '\0') && (*(puVar7 + 0x7c) != 0)) {
        cpu_latency_qos_update_request(puVar7 + 0x7d,0xffffffff);
        *(puVar7 + 0x6a) = 0;
    }
    cancel_delayed_work_sync(puVar7 + 0x52);
    iVar3 = puVar7[0x37];
    if (iVar3 != 0) {
        *(iVar3 + 0x10) = *(iVar3 + 0x10) & 0xfffffffe;
    }
    iVar6 = *(*(*(iVar8 + 400) + 0x60) + 0x98);
    iVar3 = *(iVar6 + 0x3d8);
    if (iVar3 != 0) {
        uVar1 = *(iVar6 + 0x3d0);
        if (uVar1 != 0) {
            uVar9 = 1;
            while( true ) {
                puVar4 = *(iVar3 + (uVar9 - 1) * 8);
                if (puVar4 != NULL) {
                    dma_free_attrs(*(iVar8 + 0x198),*(puVar4 + 2),*puVar4,puVar4[4],0);
                    uVar1 = *(iVar6 + 0x3d0);
                }
                if (uVar1 <= uVar9) break;
                iVar3 = *(iVar6 + 0x3d8);
                uVar9 = uVar9 + 1;
            }
        }
        if (*(iVar6 + 0x540) != 0) {
            dma_unmap_page_attrs(*(iVar8 + 0x198),*(iVar6 + 0x540),8,2,0);
            *(iVar6 + 0x540) = 0;
        }
    }
    platform_device_put(puVar7[5]);
    of_platform_depopulate(param_1 + 0x10);
    usb_put_redriver(puVar7[0x39]);
    sym.dwc3_dbg_print(noname_0_00,0xff,0x80030b0,0);
    __pm_runtime_disable(*puVar7,1);
    pm_runtime_barrier(*puVar7);
    __pm_runtime_idle(*puVar7,4);
    __pm_runtime_set_status(*puVar7,2);
    device_wakeup_disable(*puVar7);
    icc_put(puVar7[0x66]);
    icc_put(puVar7[0x67]);
    icc_put(puVar7[0x68]);
    if (*(puVar7 + 0x1e4) != 0) {
        disable_irq();
    }
    if (*(puVar7 + 500) != 0) {
        disable_irq();
    }
    if (*(puVar7 + 0x1fc) != 0) {
        disable_irq();
    }
    if (*(puVar7 + 0x204) != 0) {
        disable_irq();
    }
    disable_irq(*(puVar7 + 0x1ec));
    uVar5 = puVar7[0x2f];
    clk_disable(uVar5);
    clk_unprepare(uVar5);
    clk_set_rate(puVar7[0x29],19200000);
    uVar5 = puVar7[0x29];
    clk_disable(uVar5);
    clk_unprepare(uVar5);
    uVar5 = puVar7[0x2d];
    clk_disable(uVar5);
    clk_unprepare(uVar5);
    uVar5 = puVar7[0x2e];
    clk_disable(uVar5);
    clk_unprepare(uVar5);
    if ((puVar7[0x36] != 0) && (puVar7[0x36] < 0xfffffffffffff001)) {
        qcom_clk_set_flags(puVar7[0x29],3);
        iVar2 = regulator_disable(puVar7[0x36]);
        if (iVar2 != 0) {
            _dev_err(*puVar7,"unable to disable usb3 gdsc\n");
        }
    }
    destroy_workqueue(puVar7[0x51]);
    destroy_workqueue(puVar7[0x50]);
    ipc_log_context_destroy(puVar7[0xad]);
    puVar7[0xad] = 0;
    ipc_log_context_destroy(puVar7[0xae]);
    puVar7[0xae] = 0;
    kfree(puVar7[0x79]);
    kfree(puVar7[0x78]);
    return 0;
}


// ===== sym.dwc3_msm_probe.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x080054c0 (size 8) =====

uint64_t sym.dwc3_msm_probe.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(int64_t *param_1)

{
    int64_t *arg1;
    int64_t *piVar1;
    int *piVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    int64_t *arg1_00;
    uint64_t uVar7;
    ulong uVar8;
    int64_t *piVar9;
    uint64_t uVar10;
    char *pcVar11;
    int64_t iVar12;
    uint64_t *extraout_x8;
    uint64_t *puVar13;
    ulong *in_x18;
    int64_t *unaff_x19;
    int64_t iVar14;
    int64_t iVar15;
    code *unaff_x26;
    code *pcVar16;
    code *pcVar17;
    ulong uVar18;
    ulong unaff_x30;
    int iStack_dc;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    code *pcStack_b8;
    code *pcStack_b0;
    ulong uStack_a8;
    int64_t *piStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    arg1 = param_1 + 2;
    iVar14 = param_1[0x60];
    iStack_dc = 0;
    _printk(0x800377e,"dwc3_msm_probe");
    arg1_00 = devm_kmalloc(arg1,0xa98,0xdc0);
    iVar15 = iVar14;
    if (arg1_00 == NULL) goto code_r0x0800a0c4;
    param_1[0x15] = arg1_00;
    *arg1_00 = arg1;
    arg1_00[0x27] = arg1_00 + 0x27;
    arg1_00[0x28] = arg1_00 + 0x27;
    arg1_00[0x43] = 0xfffffffe0;
    arg1_00[0x44] = arg1_00 + 0x44;
    arg1_00[0x45] = arg1_00 + 0x44;
    arg1_00[0x46] = sym.dwc3_resume_work.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
    arg1_00[0x49] = 0xfffffffe0;
    arg1_00[0x4a] = arg1_00 + 0x4a;
    pcVar16 = arg1_00 + 0x52;
    arg1_00[0x4b] = arg1_00 + 0x4a;
    arg1_00[0x4c] = sym.dwc3_restart_usb_work.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
    arg1_00[0x52] = 0xfffffffe0;
    arg1_00[0x53] = arg1_00 + 0x53;
    arg1_00[0x54] = arg1_00 + 0x53;
    arg1_00[0x55] = sym.dwc3_otg_sm_work.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
    init_timer_key(arg1_00 + 0x58,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    arg1_00[0x83] = 0xfffffffe0;
    arg1_00[0x84] = arg1_00 + 0x84;
    arg1_00[0x85] = arg1_00 + 0x84;
    arg1_00[0x86] = sym.msm_dwc3_perf_vote_work.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
    init_timer_key(arg1_00 + 0x89,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    uStack_c0 = 0;
    pcStack_b8 = NULL;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_d8 = 0;
    iVar12 = (*arg1_00)[0xe];
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    if (iVar12 == 0) {
        iVar12 = **arg1_00;
    }
    snprintf(&uStack_d8,0x28,0x8001ac4,iVar12);
    iVar12 = 0;
    do {
        if (*(&uStack_d8 + iVar12) == '.') {
            *(&uStack_d8 + iVar12) = 0x5f;
        }
        else if (*(&uStack_d8 + iVar12) == '\0') {
            iVar12 = ipc_log_context_create(0xc,&uStack_d8,0x10000);
            arg1_00[0xad] = iVar12;
            if (iVar12 == 0) {
                _dev_err(*arg1_00,"Error getting ipc_log_ctxt\n");
            }
            snprintf(&uStack_90,0x28,"%s_ep_events",&uStack_d8);
            iVar12 = ipc_log_context_create(0x18,&uStack_90,0x10000);
            arg1_00[0xae] = iVar12;
            if (iVar12 == 0) {
                _dev_err(*arg1_00,"Error getting ipc_log_ctxt for ep_events\n");
            }
            snprintf(&uStack_90,0x28,"%s_trace",&uStack_d8);
            _segment.ehdr = ipc_log_context_create(0x24,&uStack_90,0x10000);
            if (_segment.ehdr == 0) {
                _dev_err(*arg1_00,"Error getting trace_ipc_log_ctxt for ep_events\n");
            }
            iVar12 = alloc_workqueue("dwc3_wq",0xa0002,1);
            arg1_00[0x50] = iVar12;
            unaff_x19 = arg1_00;
            unaff_x26 = pcVar16;
            if (iVar12 == 0) {
                _printk(0x800395c,"dwc3_msm_probe");
                goto code_r0x0800a0c4;
            }
            iVar12 = alloc_workqueue("k_sm_usb",0xa0006,1);
            arg1_00[0x51] = iVar12;
            if (iVar12 == 0) {
                destroy_workqueue(arg1_00[0x50]);
                goto code_r0x0800a0c4;
            }
            uVar7 = usb_get_redriver_by_phandle(iVar14,"ssusb_redriver",0);
            arg1_00[0x39] = uVar7;
            if (uVar7 < 0xfffffffffffff001) {
                uVar7 = devm_regulator_get(*arg1_00,"USB3_GDSC");
                arg1_00[0x36] = uVar7;
                if (uVar7 < 0xfffffffffffff001) {
code_r0x08009a7c:
                    uVar7 = devm_clk_get(*arg1_00,"iface_clk");
                    arg1_00[0x2d] = uVar7;
                    if (uVar7 < 0xfffffffffffff001) {
                        uVar7 = devm_clk_get(*arg1_00,"core_clk");
                        arg1_00[0x29] = uVar7;
                        if (uVar7 < 0xfffffffffffff001) {
                            uVar7 = __devm_reset_control_get(*arg1_00,"core_reset",0,0,0,1);
                            arg1_00[0x35] = uVar7;
                            if (uVar7 < 0xfffffffffffff001) {
                                piVar9 = arg1_00 + 0x2a;
                                iVar5 = of_property_read_variable_u32_array
                                                  (*(*arg1_00 + 0x2f0),"qcom,core-clk-rate",piVar9,1,0);
                                if (iVar5 < 0) {
                                    _dev_err(*arg1_00,"USB core-clk-rate is not present\n");
                                    uVar7 = 0xffffffea;
                                    goto code_r0x0800a040;
                                }
                                iVar12 = clk_round_rate(arg1_00[0x29],arg1_00[0x2a]);
                                arg1_00[0x2a] = iVar12;
                                iVar5 = of_property_read_variable_u32_array
                                                  (*(*arg1_00 + 0x2f0),"qcom,core-clk-rate-hs",arg1_00 + 0x2b,1,0);
                                if (iVar5 < 0) {
                                    arg1_00[0x2b] = *piVar9;
                                }
                                piVar1 = arg1_00 + 0x2c;
                                iVar5 = of_property_read_variable_u32_array
                                                  (*(*arg1_00 + 0x2f0),"qcom,core-clk-rate-disconnected",piVar1,1,0)
                                ;
                                if (iVar5 < 0) {
                                    iVar12 = *piVar9;
                                    *piVar1 = iVar12;
                                }
                                else {
                                    iVar12 = *piVar1;
                                }
                                iVar5 = clk_set_rate(arg1_00[0x29],iVar12);
                                if (iVar5 != 0) {
                                    _dev_err(*arg1_00,"fail to set core_clk freq:%d\n",iVar5);
                                }
                                uVar7 = devm_clk_get(*arg1_00,"sleep_clk");
                                arg1_00[0x2e] = uVar7;
                                if (uVar7 < 0xfffffffffffff001) {
                                    clk_set_rate(uVar7,32000);
                                    *(arg1_00 + 0x30) = 19200000;
                                    uVar7 = devm_clk_get(*arg1_00,"utmi_clk");
                                    arg1_00[0x2f] = uVar7;
                                    if (uVar7 < 0xfffffffffffff001) {
                                        clk_set_rate(uVar7,arg1_00[0x30]);
                                        uVar10 = devm_clk_get(*arg1_00,"bus_aggr_clk");
                                        uVar7 = 0;
                                        if (uVar10 < 0xfffffffffffff001) {
                                            uVar7 = uVar10;
                                        }
                                        arg1_00[0x32] = uVar7;
                                        uVar10 = devm_clk_get(*arg1_00,"noc_aggr_clk");
                                        uVar7 = 0;
                                        if (uVar10 < 0xfffffffffffff001) {
                                            uVar7 = uVar10;
                                        }
                                        arg1_00[0x33] = uVar7;
                                        iVar5 = of_property_match_string
                                                          (*(*arg1_00 + 0x2f0),"clock-names","cfg_ahb_clk");
                                        if (iVar5 < 0) goto code_r0x08009d7c;
                                        uVar7 = devm_clk_get(*arg1_00,"cfg_ahb_clk");
                                        arg1_00[0x34] = uVar7;
                                        if (uVar7 < 0xfffffffffffff001) goto code_r0x08009d7c;
                                        arg1_00[0x34] = 0;
                                        if (uVar7 == -0x205) goto code_r0x08009c6c;
                                        _dev_err(*arg1_00,"failed to get cfg_ahb_clk ret %d\n",uVar7 & 0xffffffff);
                                    }
                                    else {
                                        _dev_err(*arg1_00,"failed to get utmi_clk\n");
                                        uVar7 = *(arg1_00 + 0x2f);
                                    }
                                }
                                else {
                                    _dev_err(*arg1_00,"failed to get sleep_clk\n");
                                    uVar7 = *(arg1_00 + 0x2e);
                                }
                            }
                            else {
                                _dev_err(*arg1_00,"failed to get core_reset\n");
                                uVar7 = *(arg1_00 + 0x35);
                            }
                        }
                        else {
                            _dev_err(*arg1_00,"failed to get core_clk\n");
                            uVar7 = *(arg1_00 + 0x29);
                        }
                    }
                    else {
                        _dev_err(*arg1_00,"failed to get iface_clk\n");
                        uVar7 = *(arg1_00 + 0x2d);
                    }
                    if (uVar7 == 0) {
code_r0x08009d7c:
                        puVar13 = arg1_00 + 99;
                        *(arg1_00 + 0x6b) = 1;
                        pcVar17 = pcVar16;
                        goto code_r0x0800a6f0;
                    }
                }
                else {
                    if (uVar7 != 0xfffffffffffffdfb) {
                        arg1_00[0x36] = 0;
                        goto code_r0x08009a7c;
                    }
code_r0x08009c6c:
                    uVar7 = 0xfffffdfb;
                }
code_r0x0800a040:
                _dev_err(arg1,"error getting clock or gdsc.\n");
            }
            else {
                uVar7 = uVar7 & 0xffffffff;
                arg1_00[0x39] = 0;
            }
            break;
        }
        iVar12 = iVar12 + 1;
        if (iVar12 == 0x28) {
    //WARNING: Does not return
            pcVar16 = SoftwareBreakpoint(0x5512,0x800a5dc);
            (*pcVar16)();
        }
    } while( true );
code_r0x08009a2c:
    destroy_workqueue(arg1_00[0x51]);
    destroy_workqueue(arg1_00[0x50]);
    usb_put_redriver(arg1_00[0x39]);
    iVar15 = iVar14;
    unaff_x26 = pcVar16;
code_r0x0800a0c8:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return uVar7 & 0xffffffff;
    }
    __stack_chk_fail();
    puVar13 = extraout_x8;
    pcVar17 = unaff_x26;
code_r0x0800a6f0:
    Hint_Prefetch(puVar13,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar13,0x10);
        if (bVar4) {
            *puVar13 = *puVar13 | 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    iVar5 = of_property_read_variable_u32_array(iVar15,"qcom,lpm-to-suspend-delay-ms",arg1_00 + 0x77,1,0);
    if (iVar5 < 0) {
        *(arg1_00 + 0x77) = 0;
    }
    iVar12 = 0;
    iVar14 = 0x1e4;
    unaff_x26 = sym.msm_dwc3_pwr_irq_thread.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
    pcVar16 = sym.msm_dwc3_pwr_irq_thread.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
    do {
        uVar18 = *(obj.usb_irq_info + iVar12);
        uVar8 = platform_get_irq_byname(param_1,uVar18);
        *(arg1_00 + iVar14) = uVar8;
        if (uVar8 < 0) {
            if (iVar12 == 0x18) {
                _dev_err(arg1,"get_irq for %s failed\n\n",uVar18);
                uVar7 = 0xffffffea;
                goto code_r0x08009a2c;
            }
            *(arg1_00 + iVar14) = 0;
        }
        else {
            irq_modify_status(uVar8,0,0x1000);
            uVar6 = devm_request_threaded_irq
                              (arg1,*(arg1_00 + iVar14),sym.msm_dwc3_pwr_irq.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt,
                               sym.msm_dwc3_pwr_irq_thread.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt,
                               *(iVar12 + 0x8003e98),uVar18,arg1_00);
            if (uVar6 != 0) {
                uVar7 = uVar6;
                _dev_err(arg1,"irq req %s failed: %d\n\n",uVar18,uVar7);
                goto code_r0x08009a2c;
            }
        }
        iVar12 = iVar12 + 0x18;
        iVar14 = iVar14 + 8;
    } while (iVar12 != 0x78);
    piVar9 = platform_get_resource_byname(param_1,0x200,"core_base");
    if (piVar9 == NULL) {
        pcVar11 = "missing memory base resource\n";
code_r0x0800a250:
        _dev_err(arg1,pcVar11);
        uVar7 = 0xffffffed;
        pcVar16 = unaff_x26;
        goto code_r0x08009a2c;
    }
    arg1_00[4] = *piVar9;
    iVar12 = devm_ioremap(arg1,*piVar9,(piVar9[1] - *piVar9) + 1);
    arg1_00[1] = iVar12;
    if (iVar12 == 0) {
        pcVar11 = "ioremap failed\n";
        goto code_r0x0800a250;
    }
    piVar9 = platform_get_resource_byname(param_1,0x200,"tcsr_dyn_en_dis");
    if (piVar9 != NULL) {
        iVar12 = devm_ioremap(arg1,*piVar9,(piVar9[1] - *piVar9) + 1);
        arg1_00[2] = iVar12;
        if (iVar12 == 0) {
            pcVar11 = "ioremap for tcsr_dyn_en_dis failed\n";
            goto code_r0x0800a250;
        }
    }
    piVar9 = platform_get_resource_byname(param_1,0x200,"ahb2phy_base");
    if (piVar9 != NULL) {
        uVar7 = devm_ioremap(arg1,*piVar9,(piVar9[1] - *piVar9) + 1);
        arg1_00[3] = uVar7;
        if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
            _dev_err(arg1,"couldn\'t find ahb2phy_base addr.\n");
            arg1_00[3] = 0;
        }
        else {
            if ((arg1_00[0x36] != 0) && (arg1_00[0x36] < 0xfffffffffffff001)) {
                iVar5 = regulator_enable();
                if (iVar5 == 0) {
                    qcom_clk_set_flags(arg1_00[0x29],2);
                }
                else {
                    _dev_err(*arg1_00,"unable to enable usb3 gdsc\n");
                }
            }
            iVar14 = arg1_00[0x34];
            iVar5 = clk_prepare(iVar14);
            if ((iVar5 == 0) && (iVar5 = clk_enable(iVar14), iVar5 != 0)) {
                clk_unprepare(iVar14);
            }
            iVar5 = sym.readl_relaxed(arg1_00[3] + 0x10);
            if (iVar5 != 0x11) {
                sym.writel_relaxed(0x11,arg1_00[3] + 0x10);
                DataSynchronizationBarrier(3,3,0);
            }
            iVar14 = arg1_00[0x34];
            clk_disable(iVar14);
            clk_unprepare(iVar14);
            if ((arg1_00[0x36] != 0) && (arg1_00[0x36] < 0xfffffffffffff001)) {
                qcom_clk_set_flags(arg1_00[0x29],3);
                iVar5 = regulator_disable(arg1_00[0x36]);
                if (iVar5 != 0) {
                    _dev_err(*arg1_00,"unable to disable usb3 gdsc\n");
                }
            }
        }
    }
    piVar9 = platform_get_resource_byname(param_1,0x200,"ebc_desc");
    if (piVar9 != NULL) {
        arg1_00[0x14f] = *piVar9;
    }
    uStack_d8 = 0;
    iVar5 = of_property_read_string(*(*arg1_00 + 0x2f0),"qcom,dbm-version",&uStack_d8);
    iVar14 = iVar15;
    if ((iVar5 == 0) && (iVar5 = strcmp(uStack_d8,0x8001ffb), iVar5 == 0)) {
        *(arg1_00 + 0x3b) = 4;
        arg1_00[0x3a] = obj.dbm_1_4_regtable;
        *(arg1_00 + 0x1dc) = 1;
    }
    else {
        *(arg1_00 + 0x3b) = 8;
        arg1_00[0x3a] = obj.dbm_1_5_regtable;
        if ((*(arg1_00 + 0x1dc) == '\0') && (*(arg1_00 + 0x1ec) == 0)) goto code_r0x0800a028;
    }
    of_property_read_variable_u32_array(iVar15,"qcom,num-gsi-evt-buffs",arg1_00 + 0x7a,1,0);
    if (arg1_00[0x7a] == 0) {
code_r0x0800a15c:
        iVar12 = of_find_property(iVar15,"qcom,use-pdc-interrupts",0);
        *(arg1_00 + 0x355) = iVar12 != 0;
        iVar12 = of_find_property(iVar15,"qcom,use-eusb2-phy",0);
        *(arg1_00 + 0xa81) = iVar12 != 0;
        iVar12 = of_find_property(iVar15,"qcom,disable-host-ssphy-powerdown",0);
        *(arg1_00 + 0x369) = iVar12 != 0;
        iVar5 = sym.dma_set_mask_and_coherent(arg1,-1);
        if (iVar5 != 0) {
            _dev_err(arg1,"setting DMA mask to 64 failed.\n");
            iVar5 = sym.dma_set_mask_and_coherent(arg1,0xffffffff);
            if (iVar5 != 0) {
                _dev_err(arg1,"setting DMA mask to 32 failed.\n");
                uVar7 = 0xffffffa1;
                goto code_r0x08009a2c;
            }
        }
        iVar12 = of_find_property(iVar15,"qcom,dis-sending-cm-l1-quirk",0);
        *(arg1_00 + 0x150) = iVar12 != 0;
        piVar9 = of_get_next_available_child(iVar15,0);
        if (piVar9 == NULL) {
            pcVar11 = "failed to find dwc3 child\n";
            goto code_r0x0800a250;
        }
        sym.dwc3_msm_parse_core_params(arg1_00,piVar9);
        uVar8 = of_parse_phandle(piVar9,"usb-phy",0);
        uVar7 = devm_usb_get_phy_by_node(*arg1_00,uVar8,0);
        arg1_00[0x37] = uVar7;
        param_1 = piVar9;
        if (0xfffffffffffff000 < uVar7) {
            _dev_err(*arg1_00,"unable to get hsphy device\n");
            uVar7 = *(arg1_00 + 0x37);
            goto code_r0x08009a2c;
        }
        uVar8 = of_parse_phandle(piVar9,"usb-phy",1);
        uVar7 = devm_usb_get_phy_by_node(*arg1_00,uVar8,0);
        arg1_00[0x38] = uVar7;
        if (0xfffffffffffff000 < uVar7) {
            _dev_err(*arg1_00,"unable to get ssphy device\n");
            uVar7 = *(arg1_00 + 0x38);
            goto code_r0x08009a2c;
        }
        *(arg1_00 + 0x65) = 1;
        of_property_read_variable_u32_array(iVar15,"qcom,default-bus-vote",arg1_00 + 0x65,1,0);
        if (3 < *(arg1_00 + 0x65)) {
            *(arg1_00 + 0x65) = 3;
        }
        uVar10 = of_icc_get(arg1,"usb-ddr");
        uVar7 = 0;
        if (uVar10 < 0xfffffffffffff001) {
            uVar7 = uVar10;
        }
        arg1_00[0x66] = uVar7;
        uVar10 = of_icc_get(arg1,"usb-ipa");
        uVar7 = 0;
        if (uVar10 < 0xfffffffffffff001) {
            uVar7 = uVar10;
        }
        arg1_00[0x67] = uVar7;
        uVar10 = of_icc_get(arg1,"ddr-usb");
        uVar7 = 0;
        if (uVar10 < 0xfffffffffffff001) {
            uVar7 = uVar10;
        }
        arg1_00[0x6e] = 5;
        arg1_00[0x68] = uVar7;
        *(arg1_00 + 0x76) = 1;
        *(arg1_00 + 0x3b4) = 1;
        pm_runtime_set_autosuspend_delay(*arg1_00,1000);
        __pm_runtime_use_autosuspend(*arg1_00,1);
        device_init_wakeup(*arg1_00,1);
        iVar12 = of_find_property(iVar15,"qcom,disable-dev-mode-pm",0);
        if (iVar12 != 0) {
            piVar2 = *arg1_00 + 0x1f8;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                    *piVar2 = *piVar2 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
        param_1 = arg1_00 + 0x7c;
        iVar5 = of_property_read_variable_u32_array(iVar15,"qcom,pm-qos-latency",param_1,1,0);
        if (iVar5 < 0) {
            *param_1 = 0;
        }
        __mutex_init(arg1_00 + 0x94,"&mdwc->suspend_resume_mutex",obj.dwc3_msm_probe.__key);
        __mutex_init(arg1_00 + 0x9a,"&mdwc->role_switch_mutex",obj.dwc3_msm_probe.__key);
        iVar12 = of_find_property(iVar15,"qcom,force-gen1",0);
        *(arg1_00 + 0xa82) = iVar12 != 0;
        _printk(0x8001a87);
        iVar12 = of_find_property(iVar15,"usb-role-switch",0);
        if (iVar12 != 0) {
            uStack_d0 = 0;
            uStack_c8 = 0;
            uStack_98 = 0;
            uStack_c0 = 0;
            pcStack_b8 = sym.dwc3_msm_usb_role_switch_set_role.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
            pcStack_b0 = sym.dwc3_msm_usb_role_switch_get_role.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
            uStack_a8 = 1;
            piStack_a0 = arg1_00;
            uStack_d8 = dev_fwnode(arg1);
            uVar10 = usb_role_switch_register(*arg1_00,&uStack_d8);
            arg1_00[0xa9] = uVar10;
            if (uVar10 < 0xfffffffffffff001) goto code_r0x0800a594;
            uVar7 = uVar10 & 0xffffffff;
code_r0x0800a574:
            usb_role_switch_unregister(uVar10);
            icc_put(arg1_00[0x66]);
            icc_put(arg1_00[0x67]);
            icc_put(arg1_00[0x68]);
            goto code_r0x08009a2c;
        }
code_r0x0800a594:
        _printk(0x80031c9,"dwc3_msm_probe");
        iVar12 = of_find_property(iVar15,"extcon",0);
        if (iVar12 != 0) {
            uVar6 = sym.dwc3_msm_extcon_register(arg1_00);
            if (uVar6 != 0) {
                uVar7 = uVar6;
                uVar10 = arg1_00[0xa9];
                goto code_r0x0800a574;
            }
            uVar10 = devm_regulator_get_optional(arg1,"dpdm");
            uVar7 = 0;
            if (uVar10 < 0xfffffffffffff001) {
                uVar7 = uVar10;
            }
            arg1_00[0xa6] = uVar7;
            if (((*(arg1_00 + 0x352) == '\0') && (uVar7 != 0)) && (iVar5 = regulator_is_enabled(), iVar5 != 0)) {
                arg1_00[0xa3] = sym.dwc_dpdm_cb.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
                regulator_register_notifier(arg1_00[0xa6],arg1_00 + 0xa3);
            }
            else if (arg1_00[0xa9] == 0) {
                queue_delayed_work_on(0x20,arg1_00[0x51],pcVar17,0);
            }
        }
        if ((arg1_00[0xa9] == 0) && (arg1_00[0x70] == 0)) {
            if (*(arg1_00 + 0x324) == 1) {
code_r0x0800a680:
                *(arg1_00 + 0x6b) = 0;
            }
            else {
                if (*(arg1_00 + 0x324) == 3) {
                    iVar14 = of_find_property(iVar15,"qcom,default-mode-host",0);
                    if (iVar14 != 0) goto code_r0x0800a680;
                    iVar14 = of_find_property(iVar15,"qcom,default-mode-none",0);
                    if (iVar14 != 0) goto code_r0x0800a6d8;
                }
                *(arg1_00 + 0x352) = 1;
            }
code_r0x0800a6d8:
            sym.dwc3_ext_event_notify(arg1_00);
        }
        else {
            _printk(0x8001565,"dwc3_msm_probe");
            iVar14 = of_find_property(iVar15,"qcom,msm-probe-core-init",0);
            if (iVar14 != 0) goto code_r0x0800a6d8;
        }
        uVar7 = 0;
    }
    else {
        of_get_property(iVar15,"qcom,gsi-reg-offset",&iStack_dc);
        if (iStack_dc == 0) {
            pcVar11 = "err provide qcom,gsi-reg-offset\n";
code_r0x0800a2f4:
            _dev_err(arg1,pcVar11);
            uVar7 = 0xffffffea;
        }
        else {
            iVar12 = devm_kmalloc(arg1,iStack_dc,0xdc0);
            arg1_00[0xa1] = iVar12;
            unaff_x19 = arg1_00;
            if (iVar12 != 0) {
                *(arg1_00 + 0xa2) = iStack_dc >> 2;
                if (iStack_dc >> 2 == 6) {
                    of_property_read_variable_u32_array(param_1[0x60],"qcom,gsi-reg-offset",iVar12,6,0);
                    goto code_r0x0800a15c;
                }
                pcVar11 = "invalid reg offset count\n";
                goto code_r0x0800a2f4;
            }
code_r0x0800a0c4:
            uVar7 = 0xfffffff4;
            arg1_00 = unaff_x19;
        }
    }
    goto code_r0x0800a0c8;
code_r0x0800a028:
    _dev_err(arg1,"need pwr_event_irq exiting L1\n");
    uVar7 = 0xffffffea;
    pcVar16 = unaff_x26;
    goto code_r0x08009a2c;
}


// ===== sym.dwc3_msm_usb_role_switch_set_role.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x080054c8 (size 8) =====

void sym.dwc3_msm_usb_role_switch_set_role.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(ulong param_1,uint32_t param_2)

{
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = usb_role_switch_get_drvdata();
    sym.dwc3_msm_set_role(arg1,param_2);
    return;
}


// ===== sym.dwc3_core_complete.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x080054d0 (size 8) =====

void sym.dwc3_core_complete.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(*(*(param_1 + 0x98) + 400) + 0x60) + 0x98);
    sym.dwc3_dbg_print(*(param_1 + 0x10c),0xff,0x8001e87,*(param_1 + 0x10c) >> 9 & 1);
    if (*(iVar1 + 0x348) == '\0') {
        sym.dwc3_dbg_print(0,0xff,0x80028b1,0);
        queue_work_on(0x20,*(iVar1 + 0x280),iVar1 + 0x218);
    }
    return;
}


// ===== sym.dwc3_host_complete.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x080054d8 (size 8) =====

void sym.dwc3_host_complete.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(param_1 + 0x10c) >> 9 & 1) != 0) && (iVar1 = __pm_runtime_resume(param_1,0), iVar1 < 0)) {
        _dev_err(param_1,"failed to runtime resume, ret %d\n",iVar1);
    }
    return;
}


// ===== sym.msm_dwc3_pwr_irq_thread.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x080054e0 (size 8) =====

ulong sym.msm_dwc3_pwr_irq_thread.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 0x3b0) == 0) {
        sym.dwc3_pwr_event_handler(param_2);
    }
    else {
        sym.dwc3_resume_work(param_2 + 0x218);
    }
    sym.dwc3_dbg_print(param_2 + 0x3b0,0xff,0x8001cb5,*(param_2 + 0x3b0));
    return 1;
}


// ===== sym.msm_dwc3_pwr_irq.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x080054e8 (size 8) =====

ulong sym.msm_dwc3_pwr_irq.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 0x3b0) == 0) {
        sym.dwc3_pwr_event_handler(param_2);
        uVar1 = 1;
    }
    else {
        uVar1 = 2;
        *(param_2 + 0x1dd) = 1;
    }
    return uVar1;
}


// ===== sym.dwc3_host_prepare.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x080054f0 (size 8) =====

bool sym.dwc3_host_prepare.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(int64_t param_1)

{
    if ((*(param_1 + 0x200) & 7) != 0) {
        return false;
    }
    return *(param_1 + 0x20c) == 2;
}


// ===== sym.dwc3_msm_pm_resume.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x080054f8 (size 8) =====

int sym.dwc3_msm_pm_resume.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *arg1;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_2 + 0x98);
    sym.dwc3_dbg_print(param_1,0xff,0x80019cf,0);
    *(arg1 + 0x3c) = 0;
    if (*(arg1 + 0x69) != '\0') {
        iVar1 = sym.dwc3_msm_resume(arg1);
        if (iVar1 != 0) {
            _dev_err(*arg1,"%s: dwc3_msm_resume failed\n","dwc3_msm_pm_resume");
            *(arg1 + 0x3c) = 1;
            return iVar1;
        }
        __pm_runtime_disable(param_2,1);
        __pm_runtime_set_status(param_2,0);
        pm_runtime_enable(param_2);
        if ((*(arg1 + 0x6d) != '\0') && (*(arg1 + 0x69) != '\0')) {
            *(arg1[0x37] + 0x10) = *(arg1[0x37] + 0x10) | 1;
            iVar3 = arg1[0x37];
            if ((iVar3 != 0) && (pcVar4 = *(iVar3 + 0x148), pcVar4 != NULL)) {
                __cfi_slowpath_diag(0x64ea1348e09a6946,pcVar4,0x8001310);
                (*pcVar4)(iVar3,3);
            }
            if (arg1[5] == 0) {
                puVar2 = arg1 + 0xa0;
            }
            else {
                puVar2 = *(arg1[5] + 0xa8) + 0x450;
            }
            if (4 < *puVar2) {
                *(arg1[0x38] + 0x10) = *(arg1[0x38] + 0x10) | 1;
                iVar3 = arg1[0x38];
                if ((iVar3 != 0) && (pcVar4 = *(iVar3 + 0x148), pcVar4 != NULL)) {
                    __cfi_slowpath_diag(0x64ea1348e09a6946,pcVar4,0x8001310);
                    (*pcVar4)(iVar3,5);
                }
            }
        }
        queue_work_on(0x20,arg1[0x50],arg1 + 0x43);
    }
    return 0;
}


// ===== sym.dwc3_msm_pm_suspend.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005500 (size 8) =====

ulong sym.dwc3_msm_pm_suspend.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong *arg1;
    int64_t iVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    if (arg1[5] != 0) {
        sym.dwc3_dbg_print(arg1[5],0xff,0x800278c,0);
        if ((*(arg1 + 0x6d) == '\0') || (*(arg1 + 0x69) == '\0')) {
            if (arg1[0x76] != 0) {
                *(arg1 + 0x3c) = 1;
                return 0;
            }
            _dev_err(*arg1,"Abort PM suspend!! (USB is outside LPM)\n");
            return 0xfffffff0;
        }
        iVar2 = arg1[0x37];
        if ((iVar2 != 0) && (pcVar3 = *(iVar2 + 0x150), pcVar3 != NULL)) {
            __cfi_slowpath_diag(0x64ea1348e09a6946,pcVar3,0x8001370);
            (*pcVar3)(iVar2,3);
            iVar2 = arg1[0x37];
        }
        *(iVar2 + 0x10) = *(iVar2 + 0x10) & 0xfffffffe;
        iVar2 = arg1[0x38];
        if ((iVar2 != 0) && (pcVar3 = *(iVar2 + 0x150), pcVar3 != NULL)) {
            __cfi_slowpath_diag(0x64ea1348e09a6946,pcVar3,0x8001370);
            (*pcVar3)(iVar2,5);
            iVar2 = arg1[0x38];
        }
        *(iVar2 + 0x10) = *(iVar2 + 0x10) & 0xfffffffe;
    }
    uVar1 = sym.dwc3_msm_suspend(arg1,1);
    if (uVar1 == 0) {
        *(arg1 + 0x3c) = 1;
    }
    return uVar1;
}


// ===== sym.dwc3_msm_runtime_suspend.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005508 (size 8) =====

void sym.dwc3_msm_runtime_suspend.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(int64_t param_1)

{
    int64_t noname_0;
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    noname_0 = *(arg1 + 0x28);
    if (noname_0 == 0) {
        sym.dwc3_dbg_print(0,0xff,0x80035ce,0);
    }
    else {
        iVar1 = *(noname_0 + 0xa8);
        sym.dwc3_dbg_print(noname_0,0xff,0x80035ce,0);
        if (iVar1 != 0) {
            device_init_wakeup(*(iVar1 + 400),0);
        }
    }
    sym.dwc3_msm_suspend(arg1,0);
    return;
}


// ===== sym.dwc3_msm_release_ss_lane.cfi_jt @ 0x08005510 (size 8) =====

void sym.dwc3_msm_release_ss_lane.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_msm_set_dp_mode(param_1,1,4);
    return;
}


// ===== sym.dwc3_core_prepare.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005518 (size 8) =====

ulong sym.dwc3_core_prepare.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    uint64_t arg3;
    uint64_t noname_0;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    noname_0 = *(*(*(iVar2 + 400) + 0x60) + 0x98);
    if (*(param_1 + 0x20c) == 2) {
        noname_0 = *(param_1 + 0x200);
        arg3 = (*(param_1 + 0x200) & 7) == 0;
    }
    else {
        arg3 = 0;
    }
    sym.dwc3_dbg_print(noname_0,0xff,0x800303f,arg3);
    if (((*(param_1 + 0x200) & 7) == 0) && (*(param_1 + 0x20c) == 2)) {
        uVar1 = 1;
    }
    else if ((*(iVar2 + 0x3e4) == 2) && ((*(param_1 + 0x20c) != 2 || ((*(param_1 + 0x200) & 7) != 0)))) {
        _dev_info(param_1,"%s: peripheral mode still active\n","dwc3_core_prepare");
        uVar1 = 0xfffffff0;
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.dwc3_msm_runtime_idle.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005520 (size 8) =====

ulong sym.dwc3_msm_runtime_idle.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_dbg_print(*(param_1 + 0x98),0xff,0x800172f,0);
    return 0;
}


// ===== sym.dwc3_msm_runtime_resume.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005528 (size 8) =====

void sym.dwc3_msm_runtime_resume.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_2 + 0x98);
    sym.dwc3_dbg_print(param_1,0xff,0x80038f6,0);
    sym.dwc3_msm_resume(arg1);
    return;
}


// ===== sym.msm_ep_config.cfi_jt @ 0x08005530 (size 8) =====

uint sym.msm_ep_config.cfi_jt(int64_t param_1,int64_t param_2,uint32_t param_3)

{
    int64_t iVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint8_t uVar5;
    uint8_t uVar6;
    code *pcVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    ulong uVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong *puVar13;
    uint64_t uVar14;
    int iVar15;
    ulong *in_x18;
    uint uVar16;
    ulong *puVar17;
    ulong *puVar18;
    uint64_t uVar19;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98) + 0x158;
    puVar17 = *(*(*(*(param_1 + 0x98) + 400) + 0x60) + 0x98);
    uVar10 = _raw_spin_lock_irqsave(iVar1);
    uVar5 = *(param_1 + 0xaa);
    uVar19 = uVar5;
    if (0x1f < uVar19) goto code_r0x08006c74;
    if (*(puVar17 + uVar19 * 5 + 0xb0) == 3) {
        puVar18 = *(*(*(*(param_1 + 0x98) + 400) + 0x60) + 0x98);
        uVar8 = sym.readl(puVar18[1] + 0xf8a04);
        uVar9 = sym.readl(puVar18[1] + 0xc70c);
        if ((uVar9 & 7) == 4) {
            uVar19 = uVar8 | 1;
        }
        else if ((uVar9 & 7) == 5) {
            uVar19 = uVar8 | 2;
        }
        else {
            uVar19 = uVar8 & 0xfffffffc;
        }
        sym.writel(uVar19,puVar18[1] + 0xf8a04);
        puVar13 = *(*(*(*(param_1 + 0x98) + 400) + 0x60) + 0x98);
        iVar11 = puVar13[0x14f];
        if (iVar11 == 0) {
            _dev_err(*puVar13,"%s: ebc_desc_addr not specified\n","msm_ep_setup_ebc_trbs");
            uVar16 = 0xffffffea;
        }
        else {
            uVar5 = *(param_1 + 0xaa);
            uVar8 = 0x8000;
            if ((*(param_1 + 0xcc) & 1) != 0) {
                uVar8 = 0x4000;
            }
            if ((0x20 < uVar5) || (uVar5 == 0x20)) goto code_r0x08006c74;
            uVar4 = *(param_2 + 8);
            uVar3 = (*(param_1 + 0xcc) & 1) << 9 ^ 0x200;
            uVar9 = uVar4 >> 0xe;
            *(puVar13 + uVar5 * 0x28 + 0x594) = uVar9;
            iVar11 = memremap(uVar3 + iVar11,uVar9 << 4,2);
            puVar13[uVar5 * 5 + 0xb1] = iVar11;
            if (iVar11 != 0) {
                if (0x3fff < uVar4) {
                    uVar4 = uVar9 - 1;
                    if (uVar9 == 0 || uVar4 == 0) {
                        uVar9 = 1;
                    }
                    iVar12 = 0;
                    while( true ) {
                        puVar2 = iVar11 + iVar12;
                        *puVar2 = uVar8;
                        puVar2[1] = 0x8000;
                        puVar2[2] = 0x4000;
                        puVar2[3] = 0x15;
                        if (uVar4 * 0x10 - iVar12 == 0) {
                            iVar15 = 0;
                            *puVar2 = uVar3;
                            puVar2[1] = 0x8000;
                            puVar2[2] = 0;
                            puVar2[3] = 0x81;
                        }
                        else {
                            iVar15 = 0x4000;
                        }
                        if (uVar9 * 0x10 + -0x10 == iVar12) break;
                        iVar11 = puVar13[uVar5 * 5 + 0xb1];
                        uVar8 = iVar15 + uVar8;
                        iVar12 = iVar12 + 0x10;
                    }
                }
                uVar19 = *(param_1 + 0xaa) + 0xf;
                if ((*(param_1 + 0xcc) & 1) != 0) {
                    uVar19 = *(param_1 + 0xaa) >> 1;
                }
                uVar8 = sym.readl(puVar18[1] + 0xf8a00);
                sym.writel(uVar8 | 1L << (uVar19 & 0x3f),puVar18[1] + 0xf8a00);
                uVar8 = sym.readl(puVar18[1] + 0xf8a04);
                sym.writel(uVar8 | 0x1000,puVar18[1] + 0xf8a04);
                uVar8 = sym.readl(puVar18[1] + 0xf8a10);
                sym.writel(uVar8 | 1,puVar18[1] + 0xf8a10);
                goto code_r0x08006b34;
            }
            uVar16 = 0xfffffff4;
        }
        _dev_err(*puVar18,"error %d setting up ebc trbs\n",uVar16);
        _dev_err(*puVar17,"error %d after calling ebc_ep_config\n",uVar16);
    }
    else {
        if (*(puVar17 + uVar19 * 5 + 0xb0) == 1) {
            uVar6 = *(puVar17 + uVar19 * 5 + 0xb2);
            if ((((param_3 & 0x80) == 0) || (*(puVar17 + 0x1dc) != '\0')) || (uVar6 != 7)) {
                uVar14 = 1L << (uVar6 & 0x3f);
                uVar19 = (uVar14 & 10) >> 1 | (uVar14 & 5) << 1;
                iVar11 = puVar17[1] + *(puVar17[0x3a] + 0x30) + 0xf8000;
                uVar8 = sym.readl(iVar11);
                sym.writel(uVar8 & (uVar14 & 0xf ^ 0xffffffff) |
                           (param_3 >> 9 & 1) <<
                           (LZCOUNT((uVar19 >> 2 | (uVar19 & 0x3333333333333333) << 2) << 0x3c) & 0x1f),iVar11);
                sym.readl(iVar11);
                iVar11 = puVar17[1] + *puVar17[0x3a] + puVar17[0x3a][1] * uVar6 + 0xf8000;
                uVar8 = sym.readl(iVar11);
                sym.writel(uVar8 & 0xfffff8ff | param_3 & 0x400 | (param_3 >> 7 & 2 | (param_3 & 0x80) >> 7) << 8,
                           iVar11);
                sym.readl(iVar11);
                uVar9 = uVar6;
                iVar11 = puVar17[1] + *puVar17[0x3a] + puVar17[0x3a][1] * uVar9 + 0xf8000;
                uVar8 = sym.readl(iVar11);
                sym.writel(uVar8 & 0xffffffc1 | uVar5 << 1,iVar11);
                sym.readl(iVar11);
                if (*(puVar17 + 0x1dc) != '\0') {
                    iVar11 = puVar17[1] + *puVar17[0x3a] + puVar17[0x3a][1] * uVar9 + 0xf8000;
                    uVar8 = sym.readl(iVar11);
                    sym.writel(uVar8 & 0xffffff3f | (param_3 & 0x1f) << 6,iVar11);
                    sym.readl(iVar11);
                    iVar11 = puVar17[1] + *(puVar17[0x3a] + 0x58) + 0xf8000;
                    uVar8 = sym.readl(iVar11);
                    sym.writel(uVar8 & 0xffffff00 | 0xe4,iVar11);
                    sym.readl(iVar11);
                }
                iVar11 = puVar17[1] + *puVar17[0x3a] + puVar17[0x3a][1] * uVar9 + 0xf8000;
                uVar8 = sym.readl(iVar11);
                sym.writel(uVar8 | 1,iVar11);
                sym.readl(iVar11);
                uVar8 = sym.readl(puVar17[1] + *(puVar17[0x3a] + 0x60) + 0xf8000);
                sym.writel(uVar8 & (uVar14 ^ 0xffffffff),puVar17[1] + *(puVar17[0x3a] + 0x60) + 0xf8000);
code_r0x08006b34:
                if (0x1f < *(param_1 + 0xaa)) {
code_r0x08006c74:
    //WARNING: Does not return
                    pcVar7 = SoftwareBreakpoint(0x5512,0x8006c78);
                    (*pcVar7)();
                }
                uVar16 = 0;
                puVar17[*(param_1 + 0xaa) * 5 + 0xaf] = param_1;
                goto code_r0x08006b54;
            }
            _printk(0x8001e07);
        }
        uVar16 = 0xffffffed;
        _dev_err(*puVar17,"error %d after calling dbm_ep_config\n",0xffffffed);
    }
code_r0x08006b54:
    _raw_spin_unlock_irqrestore(iVar1,uVar10);
    return uVar16;
}


// ===== sym.dwc3_msm_ep_queue.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005538 (size 8) =====

uint64_t sym.dwc3_msm_ep_queue.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt
                   (int64_t param_1,int64_t param_2,uint32_t param_3)

{
    int64_t *piVar1;
    char cVar2;
    uint8_t uVar3;
    code *pcVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong uVar7;
    int64_t *piVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong uVar11;
    char *pcVar12;
    ulong uVar13;
    uint64_t extraout_x8;
    int64_t iVar14;
    int64_t iVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *unaff_x19;
    int64_t iVar16;
    int64_t *piVar17;
    int64_t unaff_x25;
    ulong *puVar18;
    int64_t iVar19;
    int64_t *unaff_x26;
    int64_t iVar20;
    ulong *puVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    uchar auVar23 [12];
    ulong uStack_e8;
    uint uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    ulong uStack_c8;
    int64_t *piStack_c0;
    int64_t iStack_b8;
    uint64_t uStack_b0;
    int64_t *piStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    int64_t iStack_90;
    ulong *puStack_88;
    ulong uStack_80;
    uint uStack_78;
    ulong uStack_74;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_68 = *(iVar16 + 0x5e0);
    piVar17 = param_3;
    iVar16 = *(param_1 + 0x98) + 0x158;
    puVar21 = *(*(*(*(param_1 + 0x98) + 400) + 0x60) + 0x98);
    uVar7 = _raw_spin_lock_irqsave(iVar16);
    if (*(param_1 + 0x38) == 0) {
        uVar11 = *puVar21;
        uVar13 = *(param_1 + 8);
        pcVar12 = "%s: trying to queue request %pK to disabled ep %s\n";
        goto code_r0x08007630;
    }
    uVar3 = *(param_1 + 0xaa);
    if (0x1f < uVar3) goto code_r0x080076cc;
    if (puVar21[uVar3 + 7] == 0) {
        _dev_err(*puVar21,"ep [%s,%d] was unconfigured as msm endpoint\n",*(param_1 + 8));
code_r0x0800766c:
        _raw_spin_unlock_irqrestore(iVar16,uVar7);
        uVar9 = 0xffffffea;
    }
    else {
        if (param_2 == 0) {
            uVar11 = *puVar21;
            pcVar12 = "%s: request is NULL\n";
code_r0x08007660:
            _dev_err(uVar11,pcVar12,"dwc3_msm_ep_queue");
            goto code_r0x0800766c;
        }
        unaff_x19 = puVar21 + 0xaf;
        if ((*(unaff_x19 + uVar3 * 5 + 1) == 1) && (*(param_2 + 8) >> 0xd == 0)) {
            uVar11 = *puVar21;
            pcVar12 = "%s: Min TRB size is 8KB\n";
            goto code_r0x08007660;
        }
        if (uVar3 < 2) {
            uVar11 = *puVar21;
            uVar13 = *(param_1 + 8);
            pcVar12 = "%s: trying to queue dbm request %pK to ep %s\n";
code_r0x08007630:
            _dev_err(uVar11,pcVar12,"dwc3_msm_ep_queue",param_2,uVar13);
            _raw_spin_unlock_irqrestore(iVar16,uVar7);
            uVar9 = 0xffffffff;
        }
        else {
            if (((*(param_1 + 0xa9) != *(param_1 + 0xa8)) || (*(param_1 + 0x60) != param_1 + 0x60)) ||
               (piVar1 = param_1 + 0x70, *piVar1 != piVar1)) {
                uVar11 = *puVar21;
                uVar13 = *(param_1 + 8);
                pcVar12 = "%s: trying to queue dbm request %pK tp ep %s\n";
                goto code_r0x08007630;
            }
            *(param_1 + 0xa8) = 0;
            if ((param_3 & 0x400010) == 0) {
                iVar14 = 0;
            }
            else {
                iVar14 = 1;
                if ((param_3 & 0x10) != 0) {
                    iVar14 = 2;
                }
            }
            iVar15 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar15 = 0x30;
            }
            piVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar15 + iVar14 * 0x70),param_3 | 0x100,0x20);
            if (piVar8 == NULL) {
                _raw_spin_unlock_irqrestore(iVar16,uVar7);
                uVar9 = 0xfffffff4;
            }
            else {
                iVar14 = *(param_2 + 0x30);
                piVar8[2] = param_2;
                piVar8[3] = iVar14;
                puVar18 = puVar21[0x28];
                uVar9 = __list_add_valid(piVar8,puVar18,puVar21 + 0x27);
                if ((uVar9 & 1) != 0) {
                    puVar21[0x28] = piVar8;
                    *piVar8 = puVar21 + 0x27;
                    piVar8[1] = puVar18;
                    *puVar18 = piVar8;
                }
                *(param_2 + 0x30) = sym.__typeid__ZTSFvP6usb_epP11usb_requestE_global_addr;
                if (0x1f < *(param_1 + 0xaa)) goto code_r0x080076cc;
                if (*(unaff_x19 + *(param_1 + 0xaa) * 5 + 1) == 3) {
                    unaff_x25 = param_2 + 0x68;
                    *(param_2 + 0x9c) = 1;
                    unaff_x26 = *(param_1 + 0x78);
                    uVar9 = __list_add_valid(unaff_x25,unaff_x26,piVar1);
                    if ((uVar9 & 1) != 0) {
                        *(param_1 + 0x78) = unaff_x25;
                        *(param_2 + 0x68) = piVar1;
                        *(param_2 + 0x70) = unaff_x26;
                        *unaff_x26 = unaff_x25;
                    }
                    uStack_78 = 0;
                    uStack_74 = CONCAT44(0x8000,(*(param_1 + 0xcc) & 1) << 9 ^ 0x200);
                    uVar5 = sym.dwc3_core_send_gadget_ep_cmd(param_1,6,&uStack_78);
                    uVar9 = uVar5;
                    if (uVar5 < 0) {
                        uVar10 = __list_del_entry_valid(unaff_x25);
joined_r0x080075dc:
                        if ((uVar10 & 1) != 0) {
                            iVar14 = *(param_2 + 0x68);
                            piVar17 = *(param_2 + 0x70);
                            *(iVar14 + 8) = piVar17;
                            *piVar17 = iVar14;
                        }
                        *(param_2 + 0x68) = 0xdead000000000100;
                        *(param_2 + 0x70) = 0xdead000000000122;
                    }
                    uVar5 = uVar9;
                }
                else {
                    unaff_x26 = param_2 + 0x68;
                    unaff_x25 = *(*(*(*(param_1 + 0x98) + 400) + 0x60) + 0x98);
                    *(param_2 + 0x9c) = 1;
                    puVar18 = *(param_1 + 0x78);
                    uStack_80 = uVar7;
                    uVar9 = __list_add_valid(unaff_x26,puVar18,piVar1);
                    if ((uVar9 & 1) != 0) {
                        *(param_1 + 0x78) = unaff_x26;
                        *(param_2 + 0x68) = piVar1;
                        *(param_2 + 0x70) = puVar18;
                        *puVar18 = unaff_x26;
                    }
                    uVar5 = sym.readl(*(unaff_x25 + 8) + 0xc408);
                    uVar9 = sym.readl(*(unaff_x25 + 8) + 0xc400);
                    uVar10 = sym.readl(*(unaff_x25 + 8) + 0xc404);
                    sym.dbm_event_buffer_config(unaff_x25,uVar9 & 0xffffffff,uVar10 & 0xffffffff,uVar5 & 0xffff);
                    uVar3 = *(param_1 + 0xa8);
                    uStack_78 = 0;
                    cVar2 = '\0';
                    if (uVar3 != 0xfe) {
                        cVar2 = uVar3 + 1;
                    }
                    puVar18 = *(param_1 + 0x88) + uVar3 * 0x10;
                    *(param_1 + 0xa8) = cVar2;
                    *puVar18 = 0;
                    puVar18[1] = 0;
                    *(param_2 + 0xa8) = puVar18;
                    *(param_2 + 0xb8) = *(param_2 + 0xb8) + 1;
                    *(puVar18 + 4) = *(param_1 + 0xaa) << 0x18 | 0xa0000000;
                    *(puVar18 + 1) = *(param_2 + 8) & 0xffffff;
                    *(puVar18 + 0xc) = (*(param_2 + 0xbc) & 2) << 2 ^ 0x1d;
                    *(param_2 + 0xb0) = (puVar18 - *(param_1 + 0x88)) + *(param_1 + 0x90);
                    uVar3 = *(param_1 + 0xa8);
                    cVar2 = '\0';
                    if (uVar3 != 0xfe) {
                        cVar2 = uVar3 + 1;
                    }
                    puVar18 = *(param_1 + 0x88) + uVar3 * 0x10;
                    *(param_1 + 0xa8) = cVar2;
                    *puVar18 = 0;
                    puVar18[1] = 0;
                    *puVar18 = *(param_2 + 0xb0);
                    uVar5 = *(param_2 + 0xb4);
                    uVar3 = *(param_1 + 0xaa);
                    puVar18[1] = 0x8100000000;
                    *(puVar18 + 4) = uVar5 | uVar3 << 0x18 | 0xa0000000;
                    uStack_74 = *(param_2 + 0xb0);
                    uVar5 = sym.dwc3_core_send_gadget_ep_cmd(param_1,0x106,&uStack_78);
                    uVar9 = uVar5;
                    if (uVar5 < 0) {
                        uVar10 = __list_del_entry_valid(unaff_x26);
                        uVar7 = uStack_80;
                        goto joined_r0x080075dc;
                    }
                    uVar6 = sym.dwc3_msm_is_superspeed(unaff_x25);
                    sym.writel(uVar6 & 1,*(unaff_x25 + 8) + *(*(unaff_x25 + 0x1d0) + 0x70) + 0xf8000);
                    uVar7 = uStack_80;
                }
                piVar17 = piVar8;
                if (uVar5 < 0) {
                    if (0x1f < *(param_1 + 0xaa)) {
code_r0x080076cc:
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(0x5512,0x80076d0);
                        (*pcVar4)();
                    }
                    uVar11 = 0x8003197;
                    if (*(unaff_x19 + *(param_1 + 0xaa) * 5 + 1) != 3) {
                        uVar11 = 0x80023db;
                    }
                    _dev_err(*puVar21,"error %d after queuing %s req\n",uVar9,uVar11);
                    _raw_spin_unlock_irqrestore(iVar16,uVar7);
                    kfree(piVar8);
                }
                else {
                    _raw_spin_unlock_irqrestore(iVar16,uVar7);
                    uVar9 = 0;
                }
            }
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return uVar9;
    }
    auVar22 = __stack_chk_fail();
    iVar19 = auVar22._8_8_;
    iVar15 = auVar22._0_8_;
    *extraout_x18 = 0x80076d4;
    uStack_c8 = 0x80076d4;
    iVar14 = sp_el0;
    uVar5 = 0xffffffea;
    iStack_d8 = *(iVar14 + 0x5e0);
    puStack_d0 = &stack0xffffffffffffffa0;
    piStack_c0 = unaff_x26;
    iStack_b8 = unaff_x25;
    uStack_b0 = uVar9;
    piStack_a8 = piVar17;
    iStack_a0 = param_2;
    iStack_98 = param_1;
    iStack_90 = iVar16;
    puStack_88 = unaff_x19;
    if ((iVar15 != 0) && (iVar19 != 0)) {
        if ((*(iVar19 + 1) == '\x05') && (*(iVar19 + 4) != 0)) {
            iVar16 = *(iVar15 + 0x98);
            if (((*(iVar15 + 0xa4) & 1) != 0) && (obj.dwc3_msm_ep_enable.__already_done == 0x0)) {
                obj.dwc3_msm_ep_enable.__already_done = 0x1;
                uVar7 = dev_driver_string();
                iVar14 = (*(iVar16 + 400))[0xe];
                if (iVar14 == 0) {
                    iVar14 = **(iVar16 + 400);
                }
                __warn_printk("%s %s: %s is already enabled\n",uVar7,iVar14,iVar15 + 0xb8);
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x80077d4);
                (*pcVar4)();
            }
            if ((*(iVar15 + 0xa4) & 1) == 0) {
                if ((*(*(iVar16 + 0x198) + 0x20c) == 2) && ((*(*(iVar16 + 0x198) + 0x200) & 7) == 0)) {
                    _dev_err(*(iVar16 + 400),"fail ep_enable %s device is into LPM\n",iVar15 + 0xb8);
                    uVar5 = 0xffffffea;
                }
                else {
                    uVar7 = _raw_spin_lock_irqsave(iVar16 + 0x158);
                    iVar20 = *(iVar15 + 0x98);
                    iVar19 = *(iVar15 + 0x38);
                    uStack_e0 = 0;
                    uStack_e8 = 0;
                    iVar14 = *(*(*(iVar20 + 400) + 0x60) + 0x98);
                    sym.dwc3_msm_depcfg_params(iVar15,&uStack_e8);
                    uVar5 = sym.dwc3_core_send_gadget_ep_cmd(iVar15,1,&uStack_e8);
                    if (uVar5 == 0) {
                        uVar9 = *(iVar15 + 0xa4);
                        if ((*(iVar15 + 0xa4) & 1) == 0) {
                            sym.dwc3_core_resize_tx_fifos(iVar15);
                            *(iVar15 + 0xab) = *(iVar19 + 3) & 3;
                            *(iVar15 + 0xa4) = *(iVar15 + 0xa4) | 1;
                            uVar6 = sym.readl(*(iVar14 + 8) + 0xc720);
                            sym.writel(uVar6 | 1L << (*(iVar15 + 0xaa) & 0x3f),*(iVar14 + 8) + 0xc720);
                            *(iVar15 + 0xa8) = 0;
                            memset(*(iVar15 + 0x88),0,0x1000);
                            uVar9 = *(iVar15 + 0x88);
                            *(uVar9 + 0xff0) = *(iVar15 + 0x90);
                            *(uVar9 + 0xff4) = (uVar9 - *(iVar15 + 0x88)) + *(iVar15 + 0x90) >> 0x20;
                            *(uVar9 + 0xffc) = *(uVar9 + 0xffc) | 0x81;
                        }
                    }
                    else {
                        _dev_err(*(iVar20 + 400),"set_ep_config() failed for %s\n",iVar15 + 0xb8);
                        uVar9 = extraout_x8;
                    }
                    sym.dwc3_dbg_print(uVar9,*(iVar15 + 0xaa),0x8001e26,uVar5);
                    _raw_spin_unlock_irqrestore(iVar16 + 0x158,uVar7);
                }
            }
            else {
                uVar5 = 0;
            }
        }
        else {
            uVar5 = 0xffffffea;
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_d8) {
        return uVar5;
    }
    auVar23 = __stack_chk_fail();
    iVar16 = auVar23._0_8_;
    iVar14 = *(*(*(*(iVar16 + 0x98) + 400) + 0x60) + 0x98);
    if (auVar23._8_4_ == 0) {
        if (0x20 < *(iVar16 + 0xaa)) goto code_r0x080079a8;
        iVar15 = iVar14 + *(iVar16 + 0xaa) * 0x28;
        *(iVar15 + 0x598) = 0;
        *(iVar15 + 0x590) = 0;
        *(iVar15 + 0x588) = 0;
        *(iVar15 + 0x580) = 0;
        *(iVar15 + 0x578) = 0;
    }
    if (*(iVar16 + 0xaa) < 0x20) {
        *(iVar14 + *(iVar16 + 0xaa) * 0x28 + 0x580) = auVar23._8_4_;
        return 0;
    }
code_r0x080079a8:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x80079ac);
    (*pcVar4)();
}


// ===== sym.msm_ep_set_mode.cfi_jt @ 0x08005540 (size 8) =====

ulong sym.msm_ep_set_mode.cfi_jt(int64_t param_1,int param_2)

{
    code *pcVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar2 = *(*(*(*(param_1 + 0x98) + 400) + 0x60) + 0x98);
    if (param_2 == 0) {
        if (0x20 < *(param_1 + 0xaa)) goto code_r0x080079a8;
        iVar3 = iVar2 + *(param_1 + 0xaa) * 0x28;
        *(iVar3 + 0x598) = 0;
        *(iVar3 + 0x590) = 0;
        *(iVar3 + 0x588) = 0;
        *(iVar3 + 0x580) = 0;
        *(iVar3 + 0x578) = 0;
    }
    if (*(param_1 + 0xaa) < 0x20) {
        *(iVar2 + *(param_1 + 0xaa) * 0x28 + 0x580) = param_2;
        return 0;
    }
code_r0x080079a8:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80079ac);
    (*pcVar1)();
}


// ===== sym.exit_dwc3_gadget_pullup.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt @ 0x08005548 (size 8) =====

ulong sym.exit_dwc3_gadget_pullup.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_msm_notify_event(*(param_1 + 0x30),9,*(param_1 + 0x38));
    return 0;
}


// ===== sym.entry_dwc3_gadget_init_out_endpoint.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt @ 0x08005550 (size 8) =====

ulong sym.entry_dwc3_gadget_init_out_endpoint.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int64_t iVar1;
    
    iVar1 = *param_2;
    *(param_1 + 0x30) = *(iVar1 + 0x98);
    *(param_1 + 0x38) = *(iVar1 + 0xaa);
    return 0;
}


// ===== sym.entry_trace_dwc3_gadget_giveback.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt @ 0x08005558 (size 8) =====

ulong sym.entry_trace_dwc3_gadget_giveback.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt(ulong param_1,int64_t *param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_dbg_trace_log_request(0x8000000,*param_2);
    return 0;
}


// ===== sym.entry_trace_dwc3_ep_dequeue.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt @ 0x08005560 (size 8) =====

ulong sym.entry_trace_dwc3_ep_dequeue.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt(ulong param_1,int64_t *param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_dbg_trace_log_request(0x8000000,*param_2);
    return 0;
}


// ===== sym.entry_trace_dwc3_gadget_ep_cmd.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt @ 0x08005568 (size 8) =====

ulong sym.entry_trace_dwc3_gadget_ep_cmd.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt(ulong param_1,ulong *param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_dbg_trace_ep_cmd(*param_2,*param_2,*(param_2 + 1),param_2[2]);
    return 0;
}


// ===== sym.entry_dwc3_gadget_reset_interrupt.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt @ 0x08005570 (size 8) =====

ulong sym.entry_dwc3_gadget_reset_interrupt.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt(ulong param_1,int64_t *param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_msm_notify_event(*param_2,0xf,0);
    return 0;
}


// ===== sym.entry_trace_dwc3_ctrl_req.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt @ 0x08005578 (size 8) =====

ulong sym.entry_trace_dwc3_ctrl_req.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt(ulong param_1,int64_t *param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_dbg_trace_log_ctrl(_segment.ehdr,*param_2);
    return 0;
}


// ===== sym.entry_dwc3_gadget_pullup.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt @ 0x08005580 (size 8) =====

ulong sym.entry_dwc3_gadget_pullup.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt(int64_t param_1,int64_t *param_2)

{
    uint32_t arg3;
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(*param_2 + 0x108);
    *(param_1 + 0x30) = arg1;
    arg3 = *(param_2 + 1);
    *(param_1 + 0x38) = arg3;
    sym.dwc3_msm_notify_event(arg1,8,arg3);
    return 0;
}


// ===== sym.entry_trace_dwc3_event.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt @ 0x08005588 (size 8) =====

ulong sym.entry_trace_dwc3_event.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt(ulong param_1,uint32_t *param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_dbg_trace_event(_segment.ehdr,*param_2,*(param_2 + 2));
    return 0;
}


// ===== sym.entry_dwc3_gadget_init_in_endpoint.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt @ 0x08005590 (size 8) =====

ulong sym.entry_dwc3_gadget_init_in_endpoint.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int64_t iVar1;
    
    iVar1 = *param_2;
    *(param_1 + 0x30) = *(iVar1 + 0x98);
    *(param_1 + 0x38) = *(iVar1 + 0xaa);
    return 0;
}


// ===== sym.exit_dwc3_gadget_conndone_interrupt.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt @ 0x08005598 (size 8) =====

ulong sym.exit_dwc3_gadget_conndone_interrupt.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_msm_notify_event(*(param_1 + 0x30),5,0);
    return 0;
}


// ===== sym.exit_dwc3_gadget_init_out_endpoint.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt @ 0x080055a0 (size 8) =====

ulong sym.exit_dwc3_gadget_init_out_endpoint.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x38) < 0x20) {
        usb_ep_set_maxpacket_limit(*(*(param_1 + 0x30) + *(param_1 + 0x38) * 8 + 0x270),0x400);
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8011608);
    (*pcVar1)();
}


// ===== sym.entry_dwc3_gadget_run_stop.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt @ 0x080055a8 (size 8) =====

ulong sym.entry_dwc3_gadget_run_stop.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt(ulong param_1,int64_t *param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *param_2;
    if (param_2[1] == 0) {
        sym.dwc3_core_stop_hw_active_transfers(arg1);
        sym.dwc3_msm_notify_event(arg1,0xd,0);
        sym.dwc3_msm_notify_event(arg1,0xf,0);
    }
    else {
        iVar1 = irq_to_desc(*(arg1 + 0x434));
        if (iVar1 != 0) {
            for (iVar1 = *(iVar1 + 0x78); iVar1 != 0; iVar1 = *(iVar1 + 0x18)) {
                iVar2 = *(iVar1 + 0x28);
                if (iVar2 != 0) {
                    _dev_info(*(arg1 + 400),"Set IRQ thread:%s pid:%d to SCHED_NORMAL prio\n",iVar2 + 0x7a8,
                              *(iVar2 + 0x5d8));
                    sched_set_normal(*(iVar1 + 0x28),0xffffffec);
                    return 0;
                }
            }
        }
    }
    return 0;
}


// ===== sym.entry_dwc3_gadget_conndone_interrupt.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt @ 0x080055b0 (size 8) =====

ulong sym.entry_dwc3_gadget_conndone_interrupt.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt(int64_t param_1,ulong *param_2)

{
    *(param_1 + 0x30) = *param_2;
    return 0;
}


// ===== sym.entry_dwc3_send_gadget_ep_cmd.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt @ 0x080055b8 (size 8) =====

ulong sym.entry_dwc3_send_gadget_ep_cmd.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt(ulong param_1,int64_t *param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2[1] == 8) {
        sym.dwc3_msm_notify_event(*(*param_2 + 0x98),7,*(*param_2 + 0xaa));
    }
    return 0;
}


// ===== sym.entry_trace_dwc3_ep_queue.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt @ 0x080055c0 (size 8) =====

ulong sym.entry_trace_dwc3_ep_queue.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt(ulong param_1,int64_t *param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_dbg_trace_log_request(0x8000000,*param_2);
    return 0;
}


// ===== sym.entry___dwc3_gadget_start.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt @ 0x080055c8 (size 8) =====

ulong sym.entry___dwc3_gadget_start.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt(ulong param_1,int64_t *param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_msm_notify_event(*param_2,0xb,0);
    return 0;
}


// ===== sym.exit_dwc3_gadget_init_in_endpoint.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt @ 0x080055d0 (size 8) =====

ulong sym.exit_dwc3_gadget_init_in_endpoint.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x38) < 0x20) {
        usb_ep_set_maxpacket_limit(*(*(param_1 + 0x30) + *(param_1 + 0x38) * 8 + 0x270),0x400);
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8011598);
    (*pcVar1)();
}


// ===== sym.entry_trace_dwc3_prepare_trb.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt @ 0x080055d8 (size 8) =====

ulong sym.entry_trace_dwc3_prepare_trb.b95d0b8ebc9846073c6bf68f7e3caa31.cfi_jt(ulong param_1,ulong *param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_dbg_trace_trb_complete(*param_2,*param_2,param_2[1],0x80024d3);
    return 0;
}


// ===== sym.msm_dwc3_perf_vote_work.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x080055e0 (size 8) =====

void sym.msm_dwc3_perf_vote_work.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(int64_t param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = irq_to_desc(*(param_1 + -0x20c));
    iVar1 = *(iVar5 + 0x90);
    iVar3 = *(param_1 + -0x38);
    iVar2 = *(param_1 + -0x208);
    *(param_1 + -0x208) = iVar1;
    uVar4 = iVar1 - iVar2;
    if (*(param_1 + -200) != 399 < uVar4 && iVar3 != 0) {
        if (uVar4 < 400) {
            iVar3 = -1;
        }
        cpu_latency_qos_update_request(param_1 + -0x30,iVar3);
        *(param_1 + -200) = 399 < uVar4;
    }
    queue_delayed_work_on(0x20,___stack_chk_fail,param_1,500);
    return;
}


// ===== sym.dwc3_restart_usb_work.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x080055e8 (size 8) =====

void sym.dwc3_restart_usb_work.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(int64_t param_1)

{
    bool bVar1;
    ulong *in_x18;
    int64_t *piVar2;
    int iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0x168) == 0) && (piVar2 = param_1 + -0x248, *(param_1 + 0xdc) == 3)) {
        *(param_1 + 0x30) = 1;
        if (*(param_1 + 0x10a) == '\0') {
            *(param_1 + 0x318) = 0;
            *(param_1 + 0x30) = 0;
        }
        else {
            sym.dwc3_dbg_print(1,0xff,0x80020bf,0);
            sym.dwc3_resume_work(param_1 + -0x30);
            iVar3 = -0x31;
            do {
                if ((*(*piVar2 + 0x20c) == 2) && ((*(*piVar2 + 0x200) & 7) == 0)) goto code_r0x0800af00;
                msleep(0x14);
                bVar1 = iVar3 != -1;
                iVar3 = iVar3 + 1;
            } while (bVar1);
            sym.dwc3_dbg_print(*piVar2 + 0x1f8,0xff,0x80033fc,*(*piVar2 + 0x1f8));
            __pm_runtime_suspend(*piVar2,0);
code_r0x0800af00:
            *(param_1 + 0x30) = 0;
            if (*(param_1 + 0x10a) != '\0') {
                sym.dwc3_resume_work(param_1 + -0x30);
            }
            *(param_1 + 0x318) = 0;
            flush_delayed_work(param_1 + 0x48);
        }
    }
    return;
}


// ===== sym.dwc3_otg_sm_work.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x080055f0 (size 8) =====

void sym.dwc3_otg_sm_work.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    int64_t iVar7;
    ulong *puVar8;
    ulong uVar9;
    int64_t iVar10;
    uint uVar11;
    ulong noname_0;
    ulong noname_0_00;
    uint32_t *puVar12;
    ulong noname_0_01;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong extraout_x8_01;
    ulong extraout_x8_02;
    uint64_t uVar13;
    ulong *in_x18;
    int64_t *piVar14;
    char *pcVar15;
    int64_t iVar16;
    code *pcVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar14 = param_1 + -0x290;
    if ((*(param_1 + -0x268) == 0) || (iVar16 = *(*(param_1 + -0x268) + 0xa8), iVar16 == 0)) {
        if (*(param_1 + 0x90) != 0) {
            _dev_err(*piVar14,"dwc is NULL.\n");
            return;
        }
        iVar16 = 0;
        uVar6 = 0;
code_r0x0800afb0:
        pcVar15 = *(obj.state_names + uVar6 * 8);
    }
    else {
        uVar6 = *(param_1 + 0x90);
        if (uVar6 < 5) goto code_r0x0800afb0;
        pcVar15 = "UNKNOWN";
    }
    _dev_err(*piVar14,"%s state, mdwc->inputs is %d\n",pcVar15,*(param_1 + 0x88));
    sym.dwc3_dbg_print(noname_0,0xff,pcVar15,0);
    switch(*(param_1 + 0x90)) {
    case 0:
        if (*(param_1 + 0x288) != 0) {
            regulator_unregister_notifier(*(param_1 + 0x2a0),param_1 + 0x288);
            *(param_1 + 0x288) = 0;
        }
        pm_runtime_enable(*piVar14);
        iVar16 = *piVar14;
        iVar5 = __pm_runtime_resume(iVar16,4);
        if (iVar5 < 0) {
            puVar1 = iVar16 + 0x1f8;
            uVar13 = *puVar1;
            do {
                uVar6 = uVar13;
                if (uVar6 == 0) break;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar2 = *puVar1;
                    uVar13 = uVar2;
                    if (uVar2 != uVar6) goto code_r0x0800b6bc;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = uVar6 - 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                DataMemoryBarrier(2,3);
code_r0x0800b6bc:
            } while (uVar6 != uVar2);
            goto code_r0x0800b7e0;
        }
        if (*(param_1 + -0x268) != 0) goto code_r0x0800b4ac;
        iVar16 = *(param_1 + -0xd8);
        uVar9 = *(*piVar14 + 0x2f0);
        if ((iVar16 == 0) || (pcVar17 = *(iVar16 + 0x118), pcVar17 == NULL)) {
code_r0x0800b230:
            puVar12 = param_1 + 0x270;
code_r0x0800b234:
            if (((4 < *puVar12) && (iVar16 = *(param_1 + -0xd0), iVar16 != 0)) &&
               (pcVar17 = *(iVar16 + 0x118), pcVar17 != NULL)) {
                __cfi_slowpath_diag(0xfa1a46938cbab6cf,pcVar17,0x8001350);
                uVar6 = (*pcVar17)(iVar16);
                if (uVar6 != 0) {
                    uVar13 = uVar6;
                    iVar16 = *piVar14;
                    pcVar15 = "failed to init SS PHY\n";
                    goto code_r0x0800b82c;
                }
            }
            iVar16 = of_get_next_available_child(uVar9,0);
            if (iVar16 == 0) {
                _dev_err(*piVar14,"failed to find dwc3 child\n");
                uVar13 = 0xffffffed;
                uVar9 = extraout_x8;
            }
            else {
                uVar6 = of_platform_populate(uVar9,0,0);
                if (uVar6 != 0) {
                    uVar13 = uVar6;
                    iVar16 = *piVar14;
                    pcVar15 = "failed to add create dwc3 core\n";
                    goto code_r0x0800b82c;
                }
                iVar16 = of_find_device_by_node(iVar16);
                *(param_1 + -0x268) = iVar16;
                if (iVar16 == 0) {
                    _dev_err(*piVar14,"failed to get dwc3 platform device\n");
                }
                else {
                    iVar16 = *(iVar16 + 0xa8);
                    if (iVar16 != 0) {
                        uVar2 = *(param_1 + 0x270);
                        uVar6 = *(iVar16 + 0x450);
                        if ((uVar2 != 0) && (uVar2 <= uVar6)) {
                            uVar6 = uVar2;
                            if (*(param_1 + 0x274) <= uVar2) {
                                uVar6 = *(param_1 + 0x274);
                            }
                            *(iVar16 + 0x450) = uVar6;
                        }
                        if ((4 < uVar6) && (*(param_1 + -0x8c) == 0)) {
                            *(param_1 + 0xd0) = *(param_1 + 0xd0) | 1;
                        }
                        if ((*(param_1 + 0xc5) == '\0') && (*(param_1 + -0xac) == 0)) {
                            *(param_1 + 0xd0) = *(param_1 + 0xd0) | 2;
                        }
                        iVar7 = of_find_property(uVar9,"qcom,host-poweroff-in-pm-suspend",0);
                        if (iVar7 != 0) {
                            *(param_1 + 0xd8) = 1;
                            _dev_info(*piVar14,"%s: Core power collapse on host PM suspend\n","dwc3_msm_core_init");
                        }
                        dev_fwnode(*(iVar16 + 400));
                        uVar13 = usb_role_switch_find_by_fwnode();
                        *(param_1 + 0x2c0) = uVar13;
                        if (uVar13 < 0xfffffffffffff001) {
                            puVar8 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xb20,0xc0);
                            *(param_1 + 0x130) = puVar8;
                            if (puVar8 != NULL) {
                                iVar7 = *(iVar16 + 400);
                                if ((*(iVar7 + 0x88) == 0) || (iVar10 = *(*(iVar7 + 0x88) + 0x78), iVar10 == 0)) {
                                    _dev_err(iVar7,"can\'t override PM OPs\n");
                                }
                                else {
                                    memcpy(puVar8,iVar10,0xc0);
                                    *puVar8 = sym.dwc3_core_prepare.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
                                    puVar8[1] = sym.dwc3_core_complete.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
                                    *(*(iVar7 + 0x88) + 0x78) = puVar8;
                                }
                                iVar7 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xb20,0xc0);
                                *(param_1 + 0x138) = iVar7;
                                if (iVar7 != 0) {
                                    if ((*(param_1 + 0x7f2) != '\0') && (*(param_1 + 0x118) == 0x3331)) {
                                        iVar7 = *(param_1 + -0x288) + 0xd024;
                                        uVar6 = sym.readl(iVar7);
                                        sym.writel(uVar6 | 0x400,iVar7);
                                        sym.readl(iVar7);
                                    }
                                    sym.dwc3_msm_notify_event(iVar16,10,0);
                                    pm_runtime_set_autosuspend_delay(*(iVar16 + 400),0);
                                    pm_runtime_allow(*(iVar16 + 400));
                                    goto code_r0x0800b4ac;
                                }
                                kfree(*(param_1 + 0x130));
                            }
                            of_platform_depopulate(*piVar14);
                        }
                        else {
                            _dev_err(*piVar14,"failed to find dwc3 drd role switch\n");
                            uVar6 = *(param_1 + 0x2c0);
                            uVar13 = uVar6;
                            of_platform_depopulate(*piVar14);
                            uVar9 = extraout_x8_01;
                            if (uVar6 != 0) goto code_r0x0800b830;
                        }
code_r0x0800b4ac:
                        *(param_1 + 0x90) = 1;
                        if (((*(param_1 + 0x88) & 1) != 0) && ((*(param_1 + 0x88) >> 1 & 1) == 0)) {
                            sym.dwc3_dbg_print(*(param_1 + 0x88),0xff,0x800300c,0);
                            __pm_runtime_idle(*piVar14,4);
                            sym.dwc3_dbg_print(*piVar14 + 0x1f8,0xff,0x8002749,*(*piVar14 + 0x1f8));
                            return;
                        }
                        puVar1 = *piVar14 + 0x1f8;
                        uVar13 = *puVar1;
                        do {
                            uVar6 = uVar13;
                            if (uVar6 == 0) break;
                            Hint_Prefetch(puVar1,2,0,1);
                            do {
                                uVar2 = *puVar1;
                                uVar13 = uVar2;
                                if (uVar2 != uVar6) goto code_r0x0800b54c;
                                cVar3 = '\x01';
                                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                                if (bVar4) {
                                    *puVar1 = uVar6 - 1;
                                    cVar3 = ExclusiveMonitorsStatus();
                                }
                            } while (cVar3 != '\0');
                            DataMemoryBarrier(2,3);
code_r0x0800b54c:
                        } while (uVar6 != uVar2);
                        sym.dwc3_dbg_print(puVar1,0xff,0x800190d,0);
                        goto code_r0x0800b58c;
                    }
                    _dev_err(*piVar14,"Failed to get dwc3 device\n");
                    *(param_1 + -0x268) = 0;
                }
                of_platform_depopulate(*piVar14);
                uVar13 = 0xffffffed;
                uVar9 = extraout_x8_00;
            }
        }
        else {
            __cfi_slowpath_diag(0xfa1a46938cbab6cf,pcVar17,0x8001350);
            uVar6 = (*pcVar17)(iVar16);
            if (uVar6 == 0) {
                if (*(param_1 + -0x268) == 0) goto code_r0x0800b230;
                puVar12 = *(*(param_1 + -0x268) + 0xa8) + 0x450;
                goto code_r0x0800b234;
            }
            uVar13 = uVar6;
            iVar16 = *piVar14;
            pcVar15 = "failed to init HS PHY\n";
code_r0x0800b82c:
            _dev_err(iVar16,pcVar15);
            uVar9 = extraout_x8_02;
        }
code_r0x0800b830:
        sym.dwc3_dbg_print(uVar9,0xff,0x8001e76,uVar13);
        __pm_runtime_suspend(*piVar14,4);
        __pm_runtime_disable(*piVar14,1);
        goto code_r0x0800b1d8;
    case 1:
code_r0x0800b58c:
        if ((*(param_1 + 0x88) >> 3 & 1) != 0) {
            _dev_err(*piVar14,"still not in lpm, wait.\n");
            sym.dwc3_dbg_print(noname_0_01,0xff,0x800357f,0);
            return;
        }
        if ((*(param_1 + 0x88) & 1) == 0) {
            _dev_err(*piVar14,"!id\n");
            *(param_1 + 0x90) = 4;
            iVar5 = sym.dwc3_otg_start_host(piVar14);
            if (iVar5 == 0) {
                return;
            }
            _dev_err(*piVar14,"unable to start host\n");
            *(param_1 + 0x90) = 1;
            return;
        }
        if ((*(param_1 + 0x88) >> 1 & 1) == 0) {
            return;
        }
        _dev_err(*piVar14,"b_sess_vld\n");
        iVar5 = sym.pm_runtime_resume_and_get(*piVar14);
        if (iVar5 < 0) {
code_r0x0800b7e0:
            _dev_err(*piVar14,"%s: pm_runtime_resume_and_get failed\n","dwc3_otg_sm_work");
            __pm_runtime_set_status(*piVar14,2);
            return;
        }
        sym.dwc3_dbg_print(*piVar14 + 0x1f8,0xff,0x80039a3,*(*piVar14 + 0x1f8));
        sym.dwc3_otg_start_peripheral(piVar14,1);
        uVar11 = 2;
        break;
    case 2:
        if (((*(param_1 + 0x88) >> 1 & 1) != 0) && ((*(param_1 + 0x88) & 1) != 0)) {
            if ((*(param_1 + 0x88) >> 2 & 1) == 0) {
                return;
            }
            if ((*(param_1 + 0x88) >> 1 & 1) == 0) {
                return;
            }
            iVar16 = *piVar14;
            *(param_1 + 0x90) = 3;
            uVar9 = ktime_get_mono_fast_ns();
            *(iVar16 + 0x218) = uVar9;
            __pm_runtime_suspend(*piVar14,0xd);
            pcVar15 = "SUSP put";
            piVar14 = *piVar14 + 0x1f8;
            iVar16 = *piVar14;
code_r0x0800b46c:
            sym.dwc3_dbg_print(piVar14,0xff,pcVar15,iVar16);
            return;
        }
        *(param_1 + 0x90) = 1;
        sym.dwc3_otg_start_peripheral(piVar14,0);
        __pm_runtime_suspend(*piVar14,4);
        sym.dwc3_dbg_print(*piVar14 + 0x1f8,0xff,0x8001411,*(*piVar14 + 0x1f8));
        goto code_r0x0800b1d8;
    case 3:
        if ((*(param_1 + 0x88) >> 1 & 1) == 0) {
            *(param_1 + 0x90) = 1;
            sym.dwc3_otg_start_peripheral(piVar14,0);
            return;
        }
        if ((*(param_1 + 0x88) >> 2 & 1) != 0) {
            return;
        }
        iVar16 = *piVar14;
        *(param_1 + 0x90) = 2;
        iVar5 = __pm_runtime_resume(iVar16,4);
        if (-1 < iVar5) {
            pcVar15 = "!SUSP gsync";
            piVar14 = *piVar14 + 0x1f8;
            iVar16 = *piVar14;
            goto code_r0x0800b46c;
        }
        puVar1 = iVar16 + 0x1f8;
        uVar13 = *puVar1;
        do {
            uVar6 = uVar13;
            if (uVar6 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar13 = uVar2;
                if (uVar2 != uVar6) goto code_r0x0800b7c4;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar6 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800b7c4:
        } while (uVar6 != uVar2);
        goto code_r0x0800b7e0;
    case 4:
        if ((*(param_1 + 0x88) & 1) == 0) {
            if (*(iVar16 + 0x3e4) != 1) {
                return;
            }
            sym.dwc3_dbg_print(1,0xff,0x80039af,0);
            iVar5 = __pm_runtime_resume(*(iVar16 + 0x1a0) + 0x10,0);
            if (iVar5 < 1) {
                return;
            }
            uVar6 = hrtimer_active(*(iVar16 + 0x1a0) + 0x168);
            sym.dwc3_dbg_print(noname_0_00,0xff,0x800342a,uVar6 & 1);
            __pm_runtime_idle(*(iVar16 + 0x1a0) + 0x10,1);
            return;
        }
        sym.dwc3_otg_start_host(piVar14);
        uVar11 = 1;
        break;
    default:
        _dev_err(*piVar14,"%s: invalid otg-state\n","dwc3_otg_sm_work");
        return;
    }
    *(param_1 + 0x90) = uVar11;
code_r0x0800b1d8:
    queue_delayed_work_on(0x20,*(param_1 + -8),param_1,0);
    return;
}


// ===== sym.dwc3_resume_work.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x080055f8 (size 8) =====

void sym.dwc3_resume_work.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    bool bVar2;
    int iVar3;
    ulong uVar4;
    ulong uVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint *puVar8;
    uint32_t *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    uint uVar11;
    int64_t *piVar12;
    int64_t iVar13;
    ulong unaff_x30;
    int aiStack_40 [2];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    iVar10 = param_1 + -0x218;
    aiStack_40[0] = 0;
    ipc_log_string(*(param_1 + 0x350),"%s: resume_work: ext_idx:%d\n","dwc3_resume_work",*(param_1 + 0x170));
    if (*(param_1 + 0x168) == 0) {
code_r0x0800ab8c:
        bVar2 = false;
        iVar13 = 0;
        uVar11 = 0;
code_r0x0800ab98:
        if (*(param_1 + 0x340) == '\0') {
            if (*(param_1 + -0x1f0) == 0) {
                puVar8 = param_1 + 0x2e8;
            }
            else {
                puVar8 = *(*(param_1 + -0x1f0) + 0xa8) + 0x450;
            }
            *puVar8 = *(param_1 + 0x2ec);
        }
        if (((bVar2) && (iVar3 = extcon_get_state(iVar13,uVar11), iVar3 != 0)) &&
           (iVar3 = extcon_get_property(iVar13,uVar11,2,aiStack_40), iVar3 == 0 && aiStack_40[0] == 0)) {
            uVar1 = *(param_1 + 0x2ec);
            if (*(param_1 + -0x1f0) == 0) {
                puVar7 = param_1 + 0x2e8;
            }
            else {
                puVar7 = *(*(param_1 + -0x1f0) + 0xa8) + 0x450;
            }
            if (2 < uVar1) {
                uVar1 = 3;
            }
            *puVar7 = uVar1;
        }
        if (*(param_1 + -0x1f0) == 0) {
            puVar7 = param_1 + 0x2e8;
        }
        else {
            puVar7 = *(*(param_1 + -0x1f0) + 0xa8) + 0x450;
        }
        if (4 < *puVar7) {
            sym.dwc3_set_ssphy_orientation_flag(iVar10);
        }
    }
    else {
        if ((*(param_1 + 0x13a) == '\0') || (*(param_1 + 0x60) != '\0')) {
            if (*(param_1 + 0x140) != 0) goto code_r0x0800ab8c;
            uVar11 = 2;
        }
        else {
            uVar11 = 1;
        }
        iVar13 = *(*(param_1 + 0x168) + *(param_1 + 0x170) * 0x48);
        if (iVar13 == 0) {
            bVar2 = false;
            goto code_r0x0800ab98;
        }
        uVar4 = extcon_get_edev_name(iVar13);
        ipc_log_string(*(param_1 + 0x350),"%s: edev:%s\n","dwc3_resume_work",uVar4);
        uVar5 = strlen(uVar4);
        iVar6 = strnstr(uVar4,0x80031ec,uVar5);
        bVar2 = true;
        if (iVar6 == 0) goto code_r0x0800ab98;
    }
    if (*(param_1 + -0x1f0) == 0) {
        puVar8 = param_1 + 0x2e8;
    }
    else {
        puVar8 = *(*(param_1 + -0x1f0) + 0xa8) + 0x450;
    }
    puVar7 = param_1 + 0x2e8;
    ipc_log_string(*(param_1 + 0x350),"%s: max_speed:%d hw_supp_speed:%d override_speed:%d","dwc3_resume_work",
                   *puVar8,*(param_1 + 0x2ec),*(param_1 + 0x2e8));
    uVar1 = *(param_1 + 0x2e8);
    if (uVar1 != 0) {
        puVar9 = puVar7;
        if (*(param_1 + -0x1f0) != 0) {
            iVar13 = *(*(param_1 + -0x1f0) + 0xa8);
            if (*(iVar13 + 0x450) < uVar1) goto code_r0x0800ad48;
            puVar9 = iVar13 + 0x450;
        }
        if (*(param_1 + 0x2ec) <= uVar1) {
            uVar1 = *(param_1 + 0x2ec);
        }
        *puVar9 = uVar1;
    }
code_r0x0800ad48:
    iVar13 = 0;
    if (*(param_1 + -0x1f0) != 0) {
        iVar13 = *(*(param_1 + -0x1f0) + 0xa8);
        puVar7 = iVar13 + 0x450;
    }
    sym.dwc3_dbg_print(iVar13,0xff,0x8002346,*puVar7);
    if (bVar2 || *(param_1 + 0x108) != 0) {
        if (*(param_1 + -0x3b) != '\0') goto code_r0x0800ad9c;
    }
    else {
        if (*(param_1 + -0x3b) == '\0') goto code_r0x0800ade0;
code_r0x0800ad9c:
        sym.dwc3_msm_resume(iVar10);
        *(param_1 + -0x3b) = 0;
    }
    if (*(param_1 + -0x38) == 0) {
        sym.dwc3_ext_event_notify(iVar10);
    }
    else {
        sym.dwc3_dbg_print(*(param_1 + -0x38),0xff,0x8001fe5,0);
    }
code_r0x0800ade0:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18 = 0x800ae14;
    if ((*(iVar10 + 0x168) == 0) && (piVar12 = iVar10 + -0x248, *(iVar10 + 0xdc) == 3)) {
        *(iVar10 + 0x30) = 1;
        if (*(iVar10 + 0x10a) == '\0') {
            *(iVar10 + 0x318) = 0;
            *(iVar10 + 0x30) = 0;
        }
        else {
            sym.dwc3_dbg_print(1,0xff,0x80020bf,0);
            sym.dwc3_resume_work(iVar10 + -0x30);
            iVar3 = -0x31;
            do {
                if ((*(*piVar12 + 0x20c) == 2) && ((*(*piVar12 + 0x200) & 7) == 0)) goto code_r0x0800af00;
                msleep(0x14);
                bVar2 = iVar3 != -1;
                iVar3 = iVar3 + 1;
            } while (bVar2);
            sym.dwc3_dbg_print(*piVar12 + 0x1f8,0xff,0x80033fc,*(*piVar12 + 0x1f8));
            __pm_runtime_suspend(*piVar12,0);
code_r0x0800af00:
            *(iVar10 + 0x30) = 0;
            if (*(iVar10 + 0x10a) != '\0') {
                sym.dwc3_resume_work(iVar10 + -0x30);
            }
            *(iVar10 + 0x318) = 0;
            flush_delayed_work(iVar10 + 0x48);
        }
    }
    return;
}


// ===== sym.super_speed_show.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005600 (size 8) =====

int64_t sym.super_speed_show.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    uint64_t uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(param_1 + 0x98) + 0x3b4) == 0) {
        uVar2 = sym.dwc3_msm_is_superspeed(*(param_1 + 0x98));
        pcVar3 = "true";
        if ((uVar2 & 1) == 0) {
            pcVar3 = "false";
        }
    }
    else {
        _printk(0x80036b2,"super_speed_show");
        pcVar3 = "false";
    }
    iVar1 = snprintf(param_3,0x1000,0x80039e4,pcVar3);
    return iVar1;
}


// ===== sym.enable_l1_suspend_show.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005608 (size 8) =====

int64_t sym.enable_l1_suspend_show.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8002a80,
                      *(*(*(*(*(param_1 + 0x98) + 0x28) + 0xa8) + 0x370) + 0x420) >> 0x10 & 1);
    return iVar1;
}


// ===== sym.bus_vote_show.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005610 (size 8) =====

int64_t sym.bus_vote_show.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    char *pcVar1;
    char *pcVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x98) + 0x32c);
    pcVar1 = "Fixed bus vote: max";
    if (iVar3 != 4) {
        pcVar1 = "Do not have fixed bus vote";
    }
    pcVar2 = "Fixed bus vote: min";
    if (iVar3 != 3) {
        pcVar2 = pcVar1;
    }
    iVar3 = scnprintf(param_3,0x1000,0x80039e4,pcVar2);
    return iVar3;
}


// ===== sym.mode_show.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005618 (size 8) =====

int64_t sym.mode_show.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(param_1 + 0x98) + 0x352) == '\0') {
        pcVar2 = "host\n";
        if (*(*(param_1 + 0x98) + 0x358) != 0) {
            pcVar2 = "none\n";
        }
    }
    else {
        pcVar2 = "peripheral\n";
    }
    iVar1 = scnprintf(param_3,0x1000,pcVar2);
    return iVar1;
}


// ===== sym.orientation_show.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005620 (size 8) =====

int64_t sym.orientation_show.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    char *pcVar1;
    char *pcVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x98) + 0x55c);
    pcVar1 = 0x80032ed;
    if (iVar3 != 8) {
        pcVar1 = "none\n";
    }
    pcVar2 = 0x80032ea;
    if (iVar3 != 4) {
        pcVar2 = pcVar1;
    }
    iVar3 = scnprintf(param_3,0x1000,pcVar2);
    return iVar3;
}


// ===== sym.speed_show.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005628 (size 8) =====

int64_t sym.speed_show.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong uVar2;
    uint *puVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(param_1 + 0x98) + 0x28);
    if (iVar4 == 0) {
        puVar3 = *(param_1 + 0x98) + 0x500;
    }
    else {
        puVar3 = *(iVar4 + 0xa8) + 0x450;
    }
    uVar2 = usb_speed_string(*puVar3);
    iVar1 = scnprintf(param_3,0x1000,0x80039e4,uVar2);
    return iVar1;
}


// ===== sym.bus_vote_store.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005630 (size 8) =====

ulong sym.bus_vote_store.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    uint64_t uVar1;
    uint uVar2;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    uVar1 = sysfs_streq(param_3,0x80028ed);
    if ((uVar1 & 1) == 0) {
        uVar1 = sysfs_streq(param_3,0x80015ee);
        if ((uVar1 & 1) == 0) {
            uVar1 = sysfs_streq(param_3,"cancel");
            if ((uVar1 & 1) == 0) {
                _dev_err(param_1,"min/max/cancel only.\n");
                return 0xffffffffffffffea;
            }
            *(arg1 + 0x32c) = 0;
            if (*(arg1 + 0x3b0) != 0) {
                return param_4;
            }
            if ((*(arg1 + 0x348) == '\0') || (*(arg1 + 0x34c) != 3)) {
                uVar1 = *(arg1 + 0x328);
            }
            else {
                uVar1 = 2;
            }
            goto code_r0x0800f410;
        }
        uVar2 = 4;
    }
    else {
        uVar2 = 3;
    }
    *(arg1 + 0x32c) = uVar2;
    if (*(arg1 + 0x3b0) != 0) {
        return param_4;
    }
    uVar1 = *(arg1 + 0x32c);
code_r0x0800f410:
    sym.dwc3_msm_update_bus_bw(arg1,uVar1);
    return param_4;
}


// ===== sym.speed_store.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005638 (size 8) =====

ulong sym.speed_store.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    uint64_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x98);
    if ((*(iVar5 + 0x318) & 1) == 0) {
        return 0xffffffffffffffff;
    }
    uVar1 = sysfs_streq(param_3,"full");
    if ((uVar1 & 1) == 0) {
        uVar1 = sysfs_streq(param_3,"high");
        if ((uVar1 & 1) == 0) {
            uVar1 = sysfs_streq(param_3,"super");
            if ((uVar1 & 1) == 0) {
                uVar1 = sysfs_streq(param_3,0x80036ae);
                if ((uVar1 & 1) == 0) {
                    return 0xffffffffffffffea;
                }
                uVar2 = 6;
                iVar3 = *(iVar5 + 0x28);
            }
            else {
                uVar2 = 5;
                iVar3 = *(iVar5 + 0x28);
            }
        }
        else {
            uVar2 = 3;
            iVar3 = *(iVar5 + 0x28);
        }
    }
    else {
        uVar2 = 2;
        iVar3 = *(iVar5 + 0x28);
    }
    if (iVar3 == 0) {
        puVar4 = iVar5 + 0x500;
    }
    else {
        puVar4 = *(iVar3 + 0xa8) + 0x450;
    }
    if (uVar2 == *puVar4 || *(iVar5 + 0x504) < uVar2) {
        if (*(iVar5 + 0x504) <= uVar2) {
            *(iVar5 + 0x500) = 0;
        }
    }
    else {
        *(iVar5 + 0x500) = uVar2;
        queue_work_on(0x20,___stack_chk_fail,iVar5 + 0x248);
    }
    return param_4;
}


// ===== sym.super_speed_store.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005640 (size 8) =====

ulong sym.super_speed_store.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt(void)

{
    return 0;
}


// ===== sym.dynamic_disable_store.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005648 (size 8) =====

ulong sym.dynamic_disable_store.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    int iVar4;
    char *pcVar5;
    uint32_t uVar6;
    ulong *in_x18;
    ulong *arg1;
    ulong *unaff_x21;
    uint64_t *unaff_x22;
    ulong unaff_x30;
    char acStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    arg1 = *(param_1 + 0x98);
    acStack_3c[0] = '\0';
    kstrtobool(param_3,acStack_3c);
    if (acStack_3c[0] == '\0') {
        if (*(arg1 + 0x152) == '\0') {
            pcVar5 = "%s: USB already enabled\n";
        }
        else if ((arg1[2] == 0) || (iVar4 = sym.readl(arg1[2]), iVar4 == 0xf)) {
            *(arg1 + 0x152) = 0;
            __pm_runtime_disable(*arg1,1);
            __pm_runtime_set_status(*arg1,2);
            pm_runtime_enable(*arg1);
            sym.dwc3_ext_event_notify(arg1);
            flush_delayed_work(arg1 + 0x52);
            pcVar5 = "%s: Dynamic USB enable\n";
        }
        else {
            pcVar5 = "%s: Unable to enable USB\n";
        }
    }
    else {
        if (*(arg1 + 0x152) == '\0') {
            unaff_x21 = arg1 + 0x52;
            flush_delayed_work(unaff_x21);
            unaff_x22 = arg1 + 99;
            goto code_r0x0800f784;
        }
        pcVar5 = "%s: USB already disabled\n";
    }
    while( true ) {
        ipc_log_string(arg1[0xad],pcVar5,"dynamic_disable_store");
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
code_r0x0800f784:
        Hint_Prefetch(unaff_x22,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
            if (bVar2) {
                *unaff_x22 = *unaff_x22 | 1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        Hint_Prefetch(unaff_x22,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
            if (bVar2) {
                *unaff_x22 = *unaff_x22 & 0xfffffffffffffffd;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        queue_delayed_work_on(0x20,arg1[0x51],unaff_x21,0);
        flush_delayed_work(unaff_x21);
        uVar6 = arg1[99];
        while ((uVar6 >> 3 & 1) != 0) {
            msleep(0x14);
            uVar6 = *unaff_x22;
        }
        pcVar5 = "%s: Dynamic USB disable\n";
        *(arg1 + 0x152) = 1;
    }
    return param_4;
}


// ===== sym.enable_l1_suspend_store.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005650 (size 8) =====

uint64_t sym.enable_l1_suspend_store.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt
                   (int64_t param_1,ulong param_2,char *param_3,uint64_t param_4)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    ulong *arg1;
    ulong *puVar9;
    uint64_t *unaff_x22;
    ulong unaff_x30;
    char acStack_7c [4];
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint8_t auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    auStack_3c[0] = 0;
    puVar9 = *(*(*(param_1 + 0x98) + 0x28) + 0xa8);
    uVar8 = param_4;
    uVar4 = kstrtobool(param_3,auStack_3c);
    if (uVar4 < 0) {
        uVar8 = uVar4;
        param_3 = "enable_l1_suspend_store";
        _dev_err(puVar9[0x32],"%s: can\'t get entered value: %d\n","enable_l1_suspend_store",uVar8);
        param_4 = uVar4;
    }
    else {
        *(puVar9[0x6e] + 0x420) = *(puVar9[0x6e] + 0x420) & 0xfffeffff | auStack_3c[0] << 0x10;
        pcVar7 = "disabled";
        if (auStack_3c[0] != 0) {
            pcVar7 = "enabled";
        }
        *(puVar9 + 0x9b) = *(puVar9 + 0x9b) & 0xfffbffff | (auStack_3c[0] ^ 1) << 0x12;
        _printk(0x8002bf5,pcVar7);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_38) {
        iVar6 = __stack_chk_fail();
        *extraout_x18 = sym.dynamic_disable_store;
        pcStack_68 = sym.dynamic_disable_store;
        iVar3 = sp_el0;
        iStack_78 = *(iVar3 + 0x5e0);
        arg1 = *(iVar6 + 0x98);
        acStack_7c[0] = '\0';
        puStack_70 = &stack0xffffffffffffffd0;
        kstrtobool(param_3,acStack_7c);
        if (acStack_7c[0] == '\0') {
            if (*(arg1 + 0x152) == '\0') {
                pcVar7 = "%s: USB already enabled\n";
            }
            else if ((arg1[2] == 0) || (iVar5 = sym.readl(arg1[2]), iVar5 == 0xf)) {
                *(arg1 + 0x152) = 0;
                __pm_runtime_disable(*arg1,1);
                __pm_runtime_set_status(*arg1,2);
                pm_runtime_enable(*arg1);
                sym.dwc3_ext_event_notify(arg1);
                flush_delayed_work(arg1 + 0x52);
                pcVar7 = "%s: Dynamic USB enable\n";
            }
            else {
                pcVar7 = "%s: Unable to enable USB\n";
            }
        }
        else {
            if (*(arg1 + 0x152) == '\0') {
                puVar9 = arg1 + 0x52;
                flush_delayed_work(puVar9);
                unaff_x22 = arg1 + 99;
                goto code_r0x0800f784;
            }
            pcVar7 = "%s: USB already disabled\n";
        }
        while( true ) {
            ipc_log_string(arg1[0xad],pcVar7,"dynamic_disable_store");
            iVar3 = sp_el0;
            if (*(iVar3 + 0x5e0) == iStack_78) break;
            __stack_chk_fail();
code_r0x0800f784:
            Hint_Prefetch(unaff_x22,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
                if (bVar2) {
                    *unaff_x22 = *unaff_x22 | 1;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            Hint_Prefetch(unaff_x22,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
                if (bVar2) {
                    *unaff_x22 = *unaff_x22 & 0xfffffffffffffffd;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            queue_delayed_work_on(0x20,arg1[0x51],puVar9,0);
            flush_delayed_work(puVar9);
            uVar4 = arg1[99];
            while ((uVar4 >> 3 & 1) != 0) {
                msleep(0x14);
                uVar4 = *unaff_x22;
            }
            pcVar7 = "%s: Dynamic USB disable\n";
            *(arg1 + 0x152) = 1;
        }
        return uVar8;
    }
    return param_4;
}


// ===== sym.mode_store.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005658 (size 8) =====

int64_t sym.mode_store.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x98);
    uVar3 = sysfs_streq(param_3,"peripheral");
    if ((uVar3 & 1) == 0) {
        uVar1 = sysfs_streq(param_3,"host");
        uVar1 = uVar1 & 1;
    }
    else {
        uVar1 = 2;
    }
    uVar6 = *(iVar5 + 0x568);
    uVar4 = usb_role_string(uVar1);
    ipc_log_string(uVar6,"%s: mode_request:%s\n","mode_store",uVar4);
    iVar2 = sym.dwc3_msm_set_role(iVar5,uVar1);
    iVar5 = iVar2;
    if (-1 < iVar2) {
        iVar5 = param_4;
    }
    return iVar5;
}


// ===== sym.xhci_test_store.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005660 (size 8) =====

ulong sym.xhci_test_store.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x98);
    if (*(iVar3 + 0x28) != 0) {
        if ((*(iVar3 + 0x352) == '\0') && (*(iVar3 + 0x358) == 0)) {
            iVar2 = *(*(iVar3 + 0x28) + 0xa8);
            __pm_runtime_resume(*(iVar2 + 0x1a0) + 0x10,0);
            pm_runtime_forbid(*(iVar2 + 0x1a0) + 0x10);
            uVar1 = sym.readl(*(iVar3 + 8) + 0x424);
            _dev_info(param_1,"USB PORTPMSC val:%x\n",uVar1);
            _dev_info(param_1,"writing %x to USB PORTPMSC\n",uVar1 | 0x40000000);
            sym.writel(uVar1 | 0x40000000,*(iVar3 + 8) + 0x424);
        }
        else {
            _dev_err(param_1,"USB is not in host mode\n");
        }
    }
    return param_4;
}


// ===== sym.orientation_store.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt @ 0x08005668 (size 8) =====

ulong sym.orientation_store.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    uint64_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    uVar1 = sysfs_streq(param_3,0x8002cf6);
    if ((uVar1 & 1) == 0) {
        uVar1 = sysfs_streq(param_3,0x80015ec);
        if ((uVar1 & 1) == 0) {
            *(iVar2 + 0x55c) = 0;
        }
        else {
            *(iVar2 + 0x55c) = 8;
        }
    }
    else {
        *(iVar2 + 0x55c) = 4;
    }
    return param_4;
}


// ===== sym.dwc3_core_stop_hw_active_transfers @ 0x08005670 (size 120) =====

ulong sym.dwc3_core_stop_hw_active_transfers(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    int *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0;
    piVar2 = *(*(*(arg1 + 400) + 0x60) + 0x98) + 0x580;
    do {
        if (*piVar2 == 2) {
            sym.dwc3_core_stop_active_transfer(*(arg1 + 0x270 + iVar1));
        }
        iVar1 = iVar1 + 8;
        piVar2 = piVar2 + 10;
    } while (iVar1 != 0x100);
    return 0;
}


// ===== sym.dwc3_core_stop_active_transfer @ 0x080056e8 (size 408) =====

int64_t sym.dwc3_core_stop_active_transfer(int64_t arg1)

{
    uint8_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint32_t in_w2;
    uint32_t in_w3;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    int64_t iVar7;
    ulong *puVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_58;
    uint uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uVar5 = *(arg1 + 0xaa);
    if (uVar5 < 0x20) {
        iVar6 = *(arg1 + 0x98);
        iVar7 = *(*(*(iVar6 + 400) + 0x60) + 0x98);
        iVar4 = arg1;
        if ((*(iVar7 + 0x578 + uVar5 * 0x28 + 0x20) & 1) != 0) {
            if (*(iVar7 + uVar5 * 0x28 + 0x580) == 1) {
                uVar1 = *(iVar7 + uVar5 * 0x28 + 0x590);
                uVar3 = sym.readl(*(iVar7 + 8) + *(*(iVar7 + 0x1d0) + 0x60) + 0xf8000);
                sym.writel(uVar3 | 1 << (uVar1 & 0x1f),*(iVar7 + 8) + *(*(iVar7 + 0x1d0) + 0x60) + 0xf8000);
            }
            puVar8 = &uStack_58;
            uStack_58 = 0;
            uStack_50 = 0;
            iVar4 = sym.dwc3_core_send_gadget_ep_cmd(arg1,*(arg1 + 0xac) << 0x10 | 0x808,puVar8);
            in_w2 = puVar8;
            if (iVar4 != 0) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x8005874);
                (*pcVar2)();
            }
            *(arg1 + 0xac) = 0;
            if ((*(iVar6 + 0x460) == 0x3331) || ((*(iVar6 + 0x460) == 0x5533 && (*(iVar6 + 0x464) < 0x5533310a)))) {
                iVar4 = __const_udelay(0x68dbc);
            }
            if ((*(arg1 + 0xcc) >> 1 & 1) != 0) {
                *(arg1 + 0xa4) = *(arg1 + 0xa4) | 0x100;
            }
            if (0x1f < *(arg1 + 0xaa)) goto code_r0x08005878;
            iVar6 = iVar7 + 0x578 + *(arg1 + 0xaa) * 0x28;
            *(iVar6 + 0x20) = *(iVar6 + 0x20) & 0xfffffffffffffffe;
        }
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == iStack_48) {
            return iVar4;
        }
        auVar9 = __stack_chk_fail();
        *extraout_x18 = sym.msm_data_fifo_config;
        uVar3 = in_w3 & 0xff;
        puVar8 = *(*(*(*(auVar9._0_8_ + 0x98) + 400) + 0x60) + 0x98);
        if (uVar3 < 8) {
            uVar5 = *(auVar9._0_8_ + 0xaa);
            if (0x1f < uVar5) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x800598c);
                (*pcVar2)();
            }
            iVar4 = puVar8[0x3a];
            *(puVar8 + uVar5 * 5 + 0xb2) = in_w3;
            sym.writel(auVar9._8_8_ & 0xffffffff,puVar8[1] + *(iVar4 + 0x88) + *(iVar4 + 0x8c) * uVar3 + 0xf8000);
            sym.writel(auVar9._8_8_ >> 0x20,
                       puVar8[1] + *(puVar8[0x3a] + 0x90) + *(puVar8[0x3a] + 0x94) * uVar3 + 0xf8000);
            iVar4 = puVar8[1] + *(puVar8[0x3a] + 0x10) + *(puVar8[0x3a] + 0x14) * uVar3 + 0xf8000;
            uVar3 = sym.readl(iVar4);
            sym.writel(uVar3 & 0xffff0000 | in_w2,iVar4);
            sym.readl(iVar4);
            iVar4 = 0;
        }
        else {
            _dev_err(*puVar8,"Invalid DBM EP num:%d\n",uVar3);
            iVar4 = 0xffffffea;
        }
        return iVar4;
    }
code_r0x08005878:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800587c);
    (*pcVar2)();
}


// ===== sym.msm_data_fifo_config @ 0x08005880 (size 268) =====

ulong sym.msm_data_fifo_config(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = arg4 & 0xff;
    puVar5 = *(*(*(*(arg1 + 0x98) + 400) + 0x60) + 0x98);
    if (uVar2 < 8) {
        if (0x1f < *(arg1 + 0xaa)) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x800598c);
            (*pcVar1)();
        }
        iVar4 = puVar5[0x3a];
        *(puVar5 + *(arg1 + 0xaa) * 5 + 0xb2) = arg4;
        sym.writel(arg2 & 0xffffffff,puVar5[1] + *(iVar4 + 0x88) + *(iVar4 + 0x8c) * uVar2 + 0xf8000);
        sym.writel(arg2 >> 0x20,puVar5[1] + *(puVar5[0x3a] + 0x90) + *(puVar5[0x3a] + 0x94) * uVar2 + 0xf8000);
        iVar4 = puVar5[1] + *(puVar5[0x3a] + 0x10) + *(puVar5[0x3a] + 0x14) * uVar2 + 0xf8000;
        uVar2 = sym.readl(iVar4);
        sym.writel(uVar2 & 0xffff0000 | arg3,iVar4);
        sym.readl(iVar4);
        uVar3 = 0;
    }
    else {
        _dev_err(*puVar5,"Invalid DBM EP num:%d\n",uVar2);
        uVar3 = 0xffffffea;
    }
    return uVar3;
}


// ===== sym.msm_dwc3_reset_dbm_ep @ 0x0800598c (size 332) =====

ulong sym.msm_dwc3_reset_dbm_ep(int64_t arg1)

{
    int *piVar1;
    code *pcVar2;
    uint32_t uVar3;
    ulong uVar4;
    int iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    uint32_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = *(arg1 + 0xaa);
    if (uVar6 < 0x20) {
        iVar8 = *(*(*(*(arg1 + 0x98) + 400) + 0x60) + 0x98);
        if (*(iVar8 + uVar6 * 0x28 + 0x580) == 1) {
            uVar6 = 1L << (*(iVar8 + uVar6 * 0x28 + 0x590) & 0x3f);
            uVar9 = uVar6 & 0xf;
            iVar7 = *(iVar8 + 8) + *(*(iVar8 + 0x1d0) + 0x68) + 0xf8000;
            uVar6 = (uVar6 & 10) >> 1 | (uVar6 & 5) << 1;
            uVar3 = sym.readl(iVar7);
            sym.writel(1 << (LZCOUNT((uVar6 >> 2 | (uVar6 & 0x3333333333333333) << 2) << 0x3c) & 0x1f) |
                       uVar3 & (uVar9 ^ 0xffffffff),iVar7);
            sym.readl(iVar7);
            iVar7 = 0;
            iVar5 = 0;
            do {
                piVar1 = iVar8 + 0x580 + iVar7;
                iVar7 = iVar7 + 0x28;
                if (*piVar1 == 1) {
                    iVar5 = iVar5 + 1;
                }
            } while (iVar7 != 0x500);
            if (iVar5 < 2) {
                __const_udelay(0xa7c6);
            }
            else {
                usleep_range_state(1000,0x4b0,2);
            }
            iVar8 = *(iVar8 + 8) + *(*(iVar8 + 0x1d0) + 0x68) + 0xf8000;
            uVar3 = sym.readl(iVar8);
            sym.writel(uVar3 & ~uVar9,iVar8);
            sym.readl(iVar8);
            uVar4 = 0;
        }
        else {
            uVar4 = 0xffffffed;
        }
        return uVar4;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8005ad8);
    (*pcVar2)();
}


// ===== sym.usb_gsi_ep_op @ 0x08005ad8 (size 3152) =====

uint32_t sym.usb_gsi_ep_op(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint8_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    bool bVar4;
    uint32_t uVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong uVar9;
    char *pcVar10;
    char *pcVar11;
    uint64_t uVar12;
    int64_t *piVar13;
    int64_t *piVar14;
    ulong noname_0;
    int iVar15;
    ulong *in_x18;
    int iVar16;
    uint *puVar17;
    int64_t iVar18;
    int64_t iVar19;
    ulong *puVar20;
    uint *puVar21;
    int64_t iVar22;
    ulong unaff_x30;
    ulong uStack_78;
    uint32_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar22 = sp_el0;
    iStack_68 = *(iVar22 + 0x5e0);
    iVar22 = *(arg1 + 0x98);
    puVar20 = *(*(*(iVar22 + 400) + 0x60) + 0x98);
    if (arg3 < 0xe) {
        pcVar11 = *(obj.gsi_op_strings + arg3 * 8);
    }
    else {
        pcVar11 = "Invalid";
    }
    ipc_log_string(puVar20[0xad],"%s: %s(%d):%s","usb_gsi_ep_op",*(arg1 + 8),*(arg1 + 0xaa) >> 1,pcVar11);
    if (0xd < arg3) {
        uVar9 = *puVar20;
        pcVar11 = "%s: Invalid opcode GSI EP\n";
        pcVar10 = "usb_gsi_ep_op";
code_r0x080066ac:
        _dev_err(uVar9,pcVar11,pcVar10);
        goto code_r0x0800629c;
    }
    //switch table (14 cases) at 0x8003b58
    switch(*(arg3 * 2 + 0x8003b58) * 4 + 0x8005b90) {
    case 0x8005b94:
        if ((*(iVar22 + 0x4d8) >> 0xc & 1) != 0) {
            uVar6 = _raw_spin_lock_irqsave(iVar22 + 0x158);
            iVar18 = *(arg1 + 0x38);
            uVar9 = *(arg1 + 0x40);
            iVar16 = (*(arg2 + 0x34) << 2 | 0xf8800) - 4;
            iVar7 = *(*(*(*(arg1 + 0x98) + 400) + 0x60) + 0x98);
            sym.writel(*(iVar7 + 0x544),*(iVar7 + 8) + iVar16 + *(*(iVar7 + 0x508) + 8));
            sym.writel(*(iVar7 + 0x540),*(iVar7 + 8) + *(*(iVar7 + 0x508) + 4) + iVar16);
            uStack_70 = 0;
            uStack_78 = 0;
            sym.dwc3_msm_depcfg_params(arg1,&stack0xffffffffffffff88);
            uStack_78 = CONCAT44(uStack_78._4_4_ | *(arg2 + 0x34) & 0x1f,uStack_78);
            sym.dwc3_core_send_gadget_ep_cmd(arg1,1,&stack0xffffffffffffff88);
            if ((*(arg1 + 0xa4) & 1) == 0) {
                sym.dwc3_core_resize_tx_fifos(arg1);
                *(arg1 + 0x38) = iVar18;
                *(arg1 + 0x40) = uVar9;
                uVar1 = *(iVar18 + 3);
                *(arg1 + 0xa4) = *(arg1 + 0xa4) | 1;
                *(arg1 + 0xab) = uVar1 & 3;
                uVar5 = sym.readl(*(iVar7 + 8) + 0xc720);
                sym.writel(uVar5 | 1L << (*(arg1 + 0xaa) & 0x3f),*(iVar7 + 8) + 0xc720);
            }
            _raw_spin_unlock_irqrestore(iVar22 + 0x158,uVar6);
            goto code_r0x0800629c;
        }
code_r0x080060e0:
        ipc_log_string(puVar20[0xad],"%s: No Pullup\n","usb_gsi_ep_op");
        uVar5 = 0xffffff94;
        break;
    case 0x8005cb8:
        if ((*(iVar22 + 0x4d8) >> 0xc & 1) == 0) goto code_r0x080060e0;
        uVar9 = _raw_spin_lock_irqsave(iVar22 + 0x158);
        uStack_70 = *(arg1 + 0x90) >> 0x20 & 0xffff | *(arg2 + 0x34) << 0x10 | 0xa00000;
        uStack_78 = *(arg1 + 0x90) << 0x20;
        uVar5 = sym.dwc3_core_send_gadget_ep_cmd(arg1,6,&stack0xffffffffffffff88);
        _raw_spin_unlock_irqrestore(iVar22 + 0x158,uVar9);
        break;
    case 0x8005d20:
        iVar18 = *(arg1 + 0x98);
        iVar16 = (*(arg2 + 0x34) << 2 | 0xf8800) - 4;
        puVar20 = *(*(*(iVar18 + 400) + 0x60) + 0x98);
        sym.writel(*(arg1 + 0x90),puVar20[1] + iVar16 + *(puVar20[0xa1] + 0xc));
        sym.writel(*(arg1 + 0x94),puVar20[1] + *(puVar20[0xa1] + 0x10) + iVar16);
        iVar22 = *(arg2 + 0x28);
        if (iVar22 == 0) {
            iVar22 = dma_map_resource(*(iVar18 + 0x198),*(arg2 + 0x20),0x1000,0,0);
            *(arg2 + 0x28) = iVar22;
            if (iVar22 == -1) {
                _dev_err(*puVar20,"mapping error for db_reg_phs_addr_lsb\n");
                iVar22 = *(arg2 + 0x28);
            }
        }
        ipc_log_string(puVar20[0xad],"%s: ep:%s dbl_addr_lsb:%x mapped_addr:%llx\n","gsi_store_ringbase_dbl_info",
                       *(arg1 + 8),*(arg2 + 0x20),iVar22);
        sym.writel(*(arg2 + 0x2c),puVar20[1] + *(puVar20[0xa1] + 8) + iVar16);
        sym.writel(*(arg2 + 0x28),puVar20[1] + *(puVar20[0xa1] + 4) + iVar16);
        goto code_r0x0800629c;
    case 0x8005e0c:
        if ((*(iVar22 + 0x4d8) >> 0xc & 1) == 0) goto code_r0x080060e0;
        iVar18 = *(*(*(*(arg1 + 0x98) + 400) + 0x60) + 0x98);
        iVar22 = *(iVar18 + 8) + **(iVar18 + 0x508) + 0xf8800;
        uVar5 = sym.readl(iVar22);
        sym.writel(uVar5 | 0x1000,iVar22);
        sym.readl(iVar22);
        iVar22 = *(iVar18 + 8) + **(iVar18 + 0x508) + 0xf8800;
        uVar5 = sym.readl(iVar22);
        sym.writel(uVar5 | 0x100000,iVar22);
        sym.readl(iVar22);
        iVar22 = *(iVar18 + 8) + **(iVar18 + 0x508) + 0xf8800;
        uVar5 = sym.readl(iVar22);
        sym.writel(uVar5 & 0xffefffff,iVar22);
        sym.readl(iVar22);
        iVar22 = *(iVar18 + 8) + **(iVar18 + 0x508) + 0xf8800;
        uVar5 = sym.readl(iVar22);
        uVar5 = uVar5 | 1;
        goto code_r0x08006140;
    case 0x8005eec:
        uVar9 = _raw_spin_lock_irqsave(iVar22 + 0x158);
        uVar12 = *(arg2 + 0x10);
        if (0 < uVar12) {
            iVar18 = 0;
            do {
                iVar7 = *(arg1 + 0x88) + iVar18;
                iVar18 = iVar18 + 0x10;
                *(iVar7 + 0xc) = *(iVar7 + 0xc) | 1;
            } while ((uVar12 & 0xffffffff) * 0x10 - iVar18 != 0);
        }
        uStack_70 = 0;
        uStack_78 = 0;
        uVar5 = sym.dwc3_core_send_gadget_ep_cmd(arg1,*(arg1 + 0xac) << 0x10 | 7,&stack0xffffffffffffff88);
        _raw_spin_unlock_irqrestore(iVar22 + 0x158,uVar9);
        break;
    case 0x8005f6c:
        if ((*(iVar22 + 0x4d8) >> 0xc & 1) == 0) goto code_r0x080060e0;
        puVar21 = arg2 + 0x20;
        uVar1 = *(arg1 + 0xcc);
        uVar9 = 0x68000000000713;
        if (arm64_use_ng_mappings != 0x0) {
            uVar9 = 0x68000000000f13;
        }
        iVar18 = *(arg2 + 0x10);
        puVar20 = *(*(*(*(arg1 + 0x98) + 400) + 0x60) + 0x98);
        iVar22 = __ioremap(*puVar21,4,uVar9);
        if (iVar22 == 0) {
            _dev_err(*puVar20,"Failed to map GSI DBL address LSB 0x%x\n",*puVar21);
        }
        else {
            puVar17 = arg2 + 0x30;
            uVar9 = 0x68000000000713;
            if (arm64_use_ng_mappings != 0x0) {
                uVar9 = 0x68000000000f13;
            }
            iVar7 = __ioremap(*puVar17,4,uVar9);
            if (iVar7 == 0) {
                _dev_err(*puVar20,"Failed to map GSI DBL address MSB 0x%x\n",*puVar17);
                iounmap(iVar22);
            }
            else {
                uStack_78 = *(arg1 + 0x90) + (((iVar18 << (uVar1 & 1)) << 0x20) + 0x100000000U >> 0x1c & 0xfffffff0);
                ipc_log_string(puVar20[0xad],"%s: ep:%s link TRB addr:%pad db_lsb:%pad db_msb:%pad\n","gsi_ring_db",
                               *(arg1 + 8),&stack0xffffffffffffff88,puVar21,puVar17);
                sym.writel_relaxed(uStack_78 & 0xffffffff,iVar22);
                sym.writel_relaxed(uStack_78 >> 0x20,iVar7);
                iounmap(iVar22);
                iounmap(iVar7);
            }
        }
        goto code_r0x0800629c;
    case 0x8006068:
        uVar1 = *(arg1 + 0xaa);
        iVar22 = *(*(*(*(arg1 + 0x98) + 400) + 0x60) + 0x98);
        iVar16 = *(iVar22 + 0x20);
        *(arg2 + 8) = 0;
        *(arg2 + 4) = iVar16 + uVar1 * 0x10 + 0xc80c;
        iVar18 = *(arg2 + 0x20);
        *(arg2 + 0x18) = *(arg1 + 0x90);
        *(arg2 + 2) = *(iVar18 + 0x18) >> 10;
        if ((*(arg1 + 0xcc) & 1) == 0) {
            *(arg2 + 0x12) = *(iVar18 + 0x10) * 0x10 + 0x20;
            iVar7 = *(iVar18 + 0x10);
        }
        else {
            *(arg2 + 0x12) = *(iVar18 + 0x10) * 0x20 + 0x20;
            iVar7 = *(iVar18 + 0x10) << 1;
        }
        uVar5 = 0;
        *arg2 = ((iVar7 << 0x20) + 0x100000000U >> 0x1c) + *(arg1 + 0x90);
        iVar16 = *(iVar22 + 0x20);
        uVar1 = *(iVar18 + 0x34);
        *(arg2 + 0x10) = 0;
        *(arg2 + 0xc) = iVar16 + uVar1 * 0x10 + 0xc40c;
        break;
    case 0x80060d0:
        if ((*(iVar22 + 0x4d8) >> 0xc & 1) == 0) goto code_r0x080060e0;
        iVar22 = *(arg1 + 0x98);
        iVar18 = *(*(*(iVar22 + 400) + 0x60) + 0x98);
        if (1 < *(arg1 + 0xaa)) {
            iVar7 = *(arg1 + 0x88);
            if ((iVar7 != 0) && (*(arg1 + 0x90) != 0)) {
                memset(iVar7,0,0x1000);
                sym.dwc3_dbg_print(noname_0,*(arg1 + 0xaa),0x8001dde,0);
                _dev_info(*(iVar22 + 400),"Clr_TRB ring of %s\n",arg1 + 0xb8);
                dma_free_attrs(*(iVar22 + 0x198),0x1000,*(arg1 + 0x88),*(arg1 + 0x90),0);
                iVar22 = *(arg1 + 0x98);
                *(arg1 + 0x88) = 0;
                *(arg1 + 0x90) = 0;
                iVar18 = *(*(*(iVar22 + 400) + 0x60) + 0x98);
            }
        }
        iVar7 = *(arg2 + 0x10);
        uVar1 = *(arg1 + 0xcc);
        iVar19 = *(arg2 + 0x18) * iVar7;
        iVar8 = dma_alloc_attrs(*(iVar22 + 0x198),iVar19,arg2 + 8,0xcc0,0);
        *arg2 = iVar8;
        if (iVar8 != 0) {
            iVar16 = iVar7 << (uVar1 & 1);
            uVar5 = iVar16 + 2;
            dma_get_sgtable_attrs(*(iVar22 + 0x198),arg2 + 0x48,iVar8,*(arg2 + 8),iVar19,0);
            uStack_78 = *(arg2 + 8);
            ipc_log_string(*(iVar18 + 0x568),"%s: TRB buffer_addr = %pad buf_len = %zu\n","gsi_prepare_trbs",
                           &stack0xffffffffffffff88,*(arg2 + 0x18));
            uVar12 = -(uVar5 >> 0x1f) & 0xfffffff000000000 | uVar5 << 4;
            iVar7 = dma_alloc_attrs(*(iVar22 + 0x198),uVar12,arg1 + 0x90,0xcc0,0);
            *(arg1 + 0x88) = iVar7;
            if (iVar7 != 0) {
                memset(iVar7,0,uVar12);
                if (0x1f < *(arg1 + 0xaa)) goto code_r0x08006724;
                iVar7 = *(arg1 + 0x90);
                *(iVar18 + *(arg1 + 0xaa) * 0x28 + 0x594) = uVar5;
                dma_get_sgtable_attrs(*(iVar22 + 0x198),arg2 + 0x38,*(arg1 + 0x88),*(arg1 + 0x90),uVar12,0);
                if (*(arg2 + 0x40) != 0) {
                    uVar5 = 0;
                    uVar9 = *(arg2 + 0x38);
                    do {
                        uVar5 = uVar5 + 1;
                        uVar9 = sg_next(uVar9);
                    } while (uVar5 < *(arg2 + 0x40));
                }
                piVar13 = *(arg1 + 0x88);
                uVar2 = iVar7 >> 0x20;
                if ((*(arg1 + 0xcc) & 1) == 0) {
                    *(piVar13 + 0xc) = 0x80;
                    *piVar13 = iVar7 + 0x10;
                    piVar14 = piVar13;
                    if (1 < iVar16 + 1) {
                        do {
                            iVar16 = iVar16 + -1;
                            piVar13 = piVar14 + 2;
                            *piVar13 = uStack_78;
                            *(piVar14 + 0x14) = uStack_78._4_4_;
                            *(piVar14 + 3) = *(arg2 + 0x18);
                            uStack_78 = uStack_78 + *(arg2 + 0x18);
                            *(piVar14 + 0x1c) = 0xc18;
                            piVar14 = piVar13;
                        } while (iVar16 != 0);
                    }
                    uVar2 = uVar2 & 0xffff;
                    uVar5 = 0;
                    *(piVar13 + 2) = iVar7;
                    *(piVar13 + 0x14) = uVar2;
                    uVar1 = *(arg2 + 0x34);
                    *(piVar13 + 0x1c) = 0x81;
                    *(piVar13 + 0x14) = uVar2 | uVar1 << 0x10 | 0xa00000;
                }
                else {
                    if (*(arg2 + 0x10) == -1) {
                        iVar15 = 0;
                    }
                    else {
                        iVar15 = 0;
                        do {
                            *(piVar13 + 0xc) = 0x810;
                            iVar15 = iVar15 + 1;
                            piVar13 = piVar13 + 2;
                        } while (iVar15 < *(arg2 + 0x10) + 1U);
                    }
                    if (iVar15 < iVar16 + 1) {
                        iVar16 = (iVar16 - iVar15) + 1;
                        do {
                            *piVar13 = uStack_78;
                            iVar16 = iVar16 + -1;
                            *(piVar13 + 0xc) = 0x810;
                            *(piVar13 + 4) = uStack_78._4_4_;
                            piVar13 = piVar13 + 2;
                            uStack_78 = uStack_78 + *(arg2 + 0x18);
                        } while (iVar16 != 0);
                    }
                    uVar2 = uVar2 & 0xffff;
                    uVar5 = 0;
                    *piVar13 = iVar7;
                    *(piVar13 + 4) = uVar2;
                    uVar1 = *(arg2 + 0x34);
                    *(piVar13 + 0xc) = 0x81;
                    *(piVar13 + 4) = uVar2 | uVar1 << 0x10 | 0xa00000;
                }
                break;
            }
            dma_free_attrs(*(iVar22 + 0x198),iVar19,*arg2,*(arg2 + 8),0);
            *arg2 = 0;
            sg_free_table(arg2 + 0x48);
        }
        uVar5 = 0xfffffff4;
        break;
    case 0x8006104:
        uVar1 = *arg2;
        iVar22 = *(*(*(*(arg1 + 0x98) + 400) + 0x60) + 0x98);
        iVar22 = *(iVar22 + 8) + **(iVar22 + 0x508) + 0xf8800;
        uVar5 = sym.readl(iVar22);
        uVar5 = uVar5 & 0xfffffffd | uVar1 << 1;
code_r0x08006140:
        sym.writel(uVar5,iVar22);
        sym.readl(iVar22);
code_r0x0800629c:
        uVar5 = 0;
        break;
    case 0x8006158:
        iVar16 = -0x5dd;
        do {
            uVar5 = sym.readl(puVar20[1] + *(puVar20[0xa1] + 0x14) + 0xf8800);
            if ((uVar5 >> 0xf & 1) == 0) {
                uVar5 = 1;
                goto code_r0x080062a0;
            }
            bVar4 = iVar16 != -1;
            iVar16 = iVar16 + 1;
        } while (bVar4);
        _dev_err(*puVar20,"Unable to suspend GSI ch. WR_CTRL_STATE != 0\n");
        uVar5 = (uVar5 & 0x8000) >> 0xf ^ 1;
        break;
    case 0x80061ac:
        uVar9 = _raw_spin_lock_irqsave(iVar22 + 0x158);
        sym.dwc3_core_stop_active_transfer(arg1);
        _raw_spin_unlock_irqrestore(iVar22 + 0x158,uVar9);
        goto code_r0x0800629c;
    case 0x80061d8:
        uVar5 = *(arg1 + 0xac);
        break;
    case 0x80061e4:
        uVar12 = *(arg1 + 0xaa);
        if (0x1f < uVar12) goto code_r0x08006724;
        iVar18 = *(arg1 + 0x98);
        iVar22 = *(*(*(iVar18 + 400) + 0x60) + 0x98) + 0x578;
        if (*(iVar22 + uVar12 * 0x28 + 8) == 2) {
            if (*(arg1 + 0x90) != 0) {
                dma_free_attrs(*(iVar18 + 0x198),*(iVar22 + uVar12 * 0x28 + 0x1c) << 4,*(arg1 + 0x88),*(arg1 + 0x90)
                               ,0);
                *(arg1 + 0x88) = 0;
                *(arg1 + 0x90) = 0;
            }
            sg_free_table(arg2 + 0x38);
            dma_free_attrs(*(iVar18 + 0x198),*(arg2 + 0x10) * *(arg2 + 0x18),*arg2,*(arg2 + 8),0);
            *arg2 = 0;
            sg_free_table(arg2 + 0x48);
        }
        if (*(arg1 + 0x88) == 0) {
            iVar22 = dma_alloc_attrs(*(*(arg1 + 0x98) + 0x198),0x1000,arg1 + 0x90,0xcc0,0);
            *(arg1 + 0x88) = iVar22;
            if (iVar22 == 0) {
                pcVar10 = arg1 + 0xb8;
                pcVar11 = "failed to allocate trb pool for %s\n";
                uVar9 = *(*(arg1 + 0x98) + 400);
                goto code_r0x080066ac;
            }
        }
        goto code_r0x0800629c;
    case 0x80062e4:
        uVar9 = _raw_spin_lock_irqsave(iVar22 + 0x158);
        sym.dwc3_core_stop_active_transfer(arg1);
        _raw_spin_unlock_irqrestore(iVar22 + 0x158,uVar9);
        pcVar3 = *(*(arg1 + 0x10) + 8);
        if (3 < (pcVar3 + -0x8005468 >> 3 | pcVar3 << 0x3d)) {
            __cfi_slowpath_diag(0xfa98630cc160c4ae,pcVar3,0x80012d0);
        }
        uVar5 = (*pcVar3)(arg1);
    }
code_r0x080062a0:
    iVar22 = sp_el0;
    if (*(iVar22 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    __stack_chk_fail();
code_r0x08006724:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8006728);
    (*pcVar3)();
}


// ===== sym.msm_ep_config @ 0x0800674c (size 1324) =====

uint sym.msm_ep_config(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    code *pcVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    ulong uVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong *puVar12;
    uint64_t uVar13;
    int iVar14;
    ulong *in_x18;
    uint uVar15;
    ulong *puVar16;
    ulong *puVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = arg3;
    iVar1 = *(arg1 + 0x98) + 0x158;
    puVar16 = *(*(*(*(arg1 + 0x98) + 400) + 0x60) + 0x98);
    uVar9 = _raw_spin_lock_irqsave(iVar1);
    uVar4 = *(arg1 + 0xaa);
    uVar19 = uVar4;
    if (0x1f < uVar19) goto code_r0x08006c74;
    if (*(puVar16 + uVar19 * 5 + 0xb0) == 3) {
        puVar17 = *(*(*(*(arg1 + 0x98) + 400) + 0x60) + 0x98);
        uVar7 = sym.readl(puVar17[1] + 0xf8a04);
        uVar8 = sym.readl(puVar17[1] + 0xc70c);
        if ((uVar8 & 7) == 4) {
            uVar19 = uVar7 | 1;
        }
        else if ((uVar8 & 7) == 5) {
            uVar19 = uVar7 | 2;
        }
        else {
            uVar19 = uVar7 & 0xfffffffc;
        }
        sym.writel(uVar19,puVar17[1] + 0xf8a04);
        puVar12 = *(*(*(*(arg1 + 0x98) + 400) + 0x60) + 0x98);
        iVar10 = puVar12[0x14f];
        if (iVar10 == 0) {
            _dev_err(*puVar12,"%s: ebc_desc_addr not specified\n","msm_ep_setup_ebc_trbs");
            uVar15 = 0xffffffea;
        }
        else {
            uVar4 = *(arg1 + 0xaa);
            uVar7 = 0x8000;
            if ((*(arg1 + 0xcc) & 1) != 0) {
                uVar7 = 0x4000;
            }
            if ((0x20 < uVar4) || (uVar4 == 0x20)) goto code_r0x08006c74;
            uVar3 = *(arg2 + 8);
            uVar18 = (*(arg1 + 0xcc) & 1) << 9 ^ 0x200;
            uVar8 = uVar3 >> 0xe;
            *(puVar12 + uVar4 * 0x28 + 0x594) = uVar8;
            iVar10 = memremap(uVar18 + iVar10,uVar8 << 4,2);
            puVar12[uVar4 * 5 + 0xb1] = iVar10;
            if (iVar10 != 0) {
                if (0x3fff < uVar3) {
                    uVar3 = uVar8 - 1;
                    if (uVar8 == 0 || uVar3 == 0) {
                        uVar8 = 1;
                    }
                    iVar11 = 0;
                    while( true ) {
                        puVar2 = iVar10 + iVar11;
                        *puVar2 = uVar7;
                        puVar2[1] = 0x8000;
                        puVar2[2] = 0x4000;
                        puVar2[3] = 0x15;
                        if (uVar3 * 0x10 - iVar11 == 0) {
                            iVar14 = 0;
                            *puVar2 = uVar18;
                            puVar2[1] = 0x8000;
                            puVar2[2] = 0;
                            puVar2[3] = 0x81;
                        }
                        else {
                            iVar14 = 0x4000;
                        }
                        if (uVar8 * 0x10 + -0x10 == iVar11) break;
                        iVar10 = puVar12[uVar4 * 5 + 0xb1];
                        uVar7 = iVar14 + uVar7;
                        iVar11 = iVar11 + 0x10;
                    }
                }
                uVar19 = *(arg1 + 0xaa) + 0xf;
                if ((*(arg1 + 0xcc) & 1) != 0) {
                    uVar19 = *(arg1 + 0xaa) >> 1;
                }
                uVar7 = sym.readl(puVar17[1] + 0xf8a00);
                sym.writel(uVar7 | 1L << (uVar19 & 0x3f),puVar17[1] + 0xf8a00);
                uVar7 = sym.readl(puVar17[1] + 0xf8a04);
                sym.writel(uVar7 | 0x1000,puVar17[1] + 0xf8a04);
                uVar7 = sym.readl(puVar17[1] + 0xf8a10);
                sym.writel(uVar7 | 1,puVar17[1] + 0xf8a10);
                goto code_r0x08006b34;
            }
            uVar15 = 0xfffffff4;
        }
        _dev_err(*puVar17,"error %d setting up ebc trbs\n",uVar15);
        _dev_err(*puVar16,"error %d after calling ebc_ep_config\n",uVar15);
    }
    else {
        if (*(puVar16 + uVar19 * 5 + 0xb0) == 1) {
            uVar5 = *(puVar16 + uVar19 * 5 + 0xb2);
            if ((((arg3 & 0x80U) == 0) || (*(puVar16 + 0x1dc) != '\0')) || (uVar5 != 7)) {
                uVar13 = 1L << (uVar5 & 0x3f);
                uVar19 = (uVar13 & 10) >> 1 | (uVar13 & 5) << 1;
                iVar10 = puVar16[1] + *(puVar16[0x3a] + 0x30) + 0xf8000;
                uVar8 = sym.readl(iVar10);
                sym.writel(uVar8 & (uVar13 & 0xf ^ 0xffffffff) |
                           (uVar7 >> 9 & 1) <<
                           (LZCOUNT((uVar19 >> 2 | (uVar19 & 0x3333333333333333) << 2) << 0x3c) & 0x1f),iVar10);
                sym.readl(iVar10);
                iVar10 = puVar16[1] + *puVar16[0x3a] + puVar16[0x3a][1] * uVar5 + 0xf8000;
                uVar8 = sym.readl(iVar10);
                sym.writel(uVar8 & 0xfffff8ff | uVar7 & 0x400 | (uVar7 >> 7 & 2 | (uVar7 & 0x80) >> 7) << 8,iVar10);
                sym.readl(iVar10);
                uVar18 = uVar5;
                iVar10 = puVar16[1] + *puVar16[0x3a] + puVar16[0x3a][1] * uVar18 + 0xf8000;
                uVar8 = sym.readl(iVar10);
                sym.writel(uVar8 & 0xffffffc1 | uVar4 << 1,iVar10);
                sym.readl(iVar10);
                if (*(puVar16 + 0x1dc) != '\0') {
                    iVar10 = puVar16[1] + *puVar16[0x3a] + puVar16[0x3a][1] * uVar18 + 0xf8000;
                    uVar8 = sym.readl(iVar10);
                    sym.writel(uVar8 & 0xffffff3f | (uVar7 & 0x1f) << 6,iVar10);
                    sym.readl(iVar10);
                    iVar10 = puVar16[1] + *(puVar16[0x3a] + 0x58) + 0xf8000;
                    uVar7 = sym.readl(iVar10);
                    sym.writel(uVar7 & 0xffffff00 | 0xe4,iVar10);
                    sym.readl(iVar10);
                }
                iVar10 = puVar16[1] + *puVar16[0x3a] + puVar16[0x3a][1] * uVar18 + 0xf8000;
                uVar7 = sym.readl(iVar10);
                sym.writel(uVar7 | 1,iVar10);
                sym.readl(iVar10);
                uVar7 = sym.readl(puVar16[1] + *(puVar16[0x3a] + 0x60) + 0xf8000);
                sym.writel(uVar7 & (uVar13 ^ 0xffffffff),puVar16[1] + *(puVar16[0x3a] + 0x60) + 0xf8000);
code_r0x08006b34:
                if (0x1f < *(arg1 + 0xaa)) {
code_r0x08006c74:
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x5512,0x8006c78);
                    (*pcVar6)();
                }
                uVar15 = 0;
                puVar16[*(arg1 + 0xaa) * 5 + 0xaf] = arg1;
                goto code_r0x08006b54;
            }
            _printk(0x8001e07);
        }
        uVar15 = 0xffffffed;
        _dev_err(*puVar16,"error %d after calling dbm_ep_config\n",0xffffffed);
    }
code_r0x08006b54:
    _raw_spin_unlock_irqrestore(iVar1,uVar9);
    return uVar15;
}


// ===== sym.msm_ep_unconfig @ 0x08006c78 (size 572) =====

ulong sym.msm_ep_unconfig(int64_t arg1)

{
    int64_t iVar1;
    uint8_t uVar2;
    code *pcVar3;
    uint32_t uVar4;
    ulong uVar5;
    int iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int *piVar9;
    ulong *in_x18;
    int64_t arg1_00;
    uint32_t uVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98) + 0x158;
    arg1_00 = *(*(*(*(arg1 + 0x98) + 400) + 0x60) + 0x98);
    uVar5 = _raw_spin_lock_irqsave(iVar1);
    uVar2 = *(arg1 + 0xaa);
    if (uVar2 < 0x20) {
        if (*(arg1_00 + 0x578 + uVar2 * 0x28 + 8) == 3) {
            uVar8 = uVar2 + 0xf;
            if ((*(arg1 + 0xcc) & 1) != 0) {
                uVar8 = uVar2 >> 1;
            }
            uVar4 = sym.readl(*(arg1_00 + 8) + 0xf8a00);
            sym.writel(uVar4 & (1L << (uVar8 & 0x3f) ^ 0xffffffff),*(arg1_00 + 8) + 0xf8a00);
            sym.writel(0,*(arg1_00 + 8) + 0xf8a00);
            uVar4 = sym.readl(*(arg1_00 + 8) + 0xf8a04);
            sym.writel(uVar4 & 0xffffefff,*(arg1_00 + 8) + 0xf8a04);
            if (0x20 < *(arg1 + 0xaa)) goto code_r0x08006eb0;
            iVar7 = *(*(*(*(arg1 + 0x98) + 400) + 0x60) + 0x98) + *(arg1 + 0xaa) * 0x28;
            if (*(iVar7 + 0x588) != 0) {
                memunmap();
                *(iVar7 + 0x588) = 0;
            }
        }
        else if (((*(arg1 + 0xa9) == *(arg1 + 0xa8)) && (*(arg1 + 0x60) == arg1 + 0x60)) &&
                (*(arg1 + 0x70) == arg1 + 0x70)) {
            uVar8 = *(arg1 + 0xaa);
            if (0x1f < uVar8) goto code_r0x08006eb0;
            if (*(arg1_00 + uVar8 * 0x28 + 0x580) == 1) {
                iVar7 = arg1_00 + uVar8 * 0x28;
                piVar9 = *(arg1_00 + 0x1d0);
                uVar2 = *(iVar7 + 0x590);
                *(iVar7 + 0x590) = 0;
                uVar10 = uVar2;
                uVar4 = sym.readl(*(arg1_00 + 8) + *piVar9 + piVar9[1] * uVar10 + 0xf8000);
                sym.writel(uVar4 & 0xfffffffe,
                           *(arg1_00 + 8) + **(arg1_00 + 0x1d0) + (*(arg1_00 + 0x1d0))[1] * uVar10 + 0xf8000);
            }
            iVar7 = 0;
            iVar6 = 0;
            do {
                piVar9 = arg1_00 + 0x580 + iVar7;
                iVar7 = iVar7 + 0x28;
                if (*piVar9 == 1) {
                    iVar6 = iVar6 + 1;
                }
            } while (iVar7 != 0x500);
            if (iVar6 == 0) {
                sym.dbm_event_buffer_config(arg1_00,0,0,0);
            }
        }
        if (*(arg1 + 0xaa) < 0x20) {
            *(arg1_00 + 0x578 + *(arg1 + 0xaa) * 0x28) = 0;
            _raw_spin_unlock_irqrestore(iVar1,uVar5);
            return 0;
        }
    }
code_r0x08006eb0:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8006eb4);
    (*pcVar3)();
}


// ===== sym.dbm_event_buffer_config @ 0x08006ebc (size 200) =====

void sym.dbm_event_buffer_config(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    int iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.readl(*(arg1 + 8) + *(*(arg1 + 0x1d0) + 0x28) + 0xf8000);
    if (iVar1 == 0) {
        sym.writel(arg2 & 0xffffffff,*(arg1 + 8) + *(*(arg1 + 0x1d0) + 0x78) + 0xf8000);
        sym.writel(arg3 & 0xffffffff,*(arg1 + 8) + *(*(arg1 + 0x1d0) + 0x80) + 0xf8000);
        arg1_00 = *(arg1 + 8) + *(*(arg1 + 0x1d0) + 0x28) + 0xf8000;
        uVar2 = sym.readl(arg1_00);
        sym.writel(uVar2 & 0xffff0000 | arg4,arg1_00);
        sym.readl(arg1_00);
    }
    return;
}


// ===== sym.msm_ep_clear_ops @ 0x08006f84 (size 188) =====

ulong sym.msm_ep_clear_ops(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    ulong uVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98) + 0x158;
    puVar6 = *(*(*(*(arg1 + 0x98) + 400) + 0x60) + 0x98);
    uVar3 = _raw_spin_lock_irqsave(iVar1);
    uVar5 = *(arg1 + 0xaa);
    if (uVar5 < 0x20) {
        if (puVar6[uVar5 + 7] == 0) {
            _raw_spin_unlock_irqrestore(iVar1,uVar3);
            _dev_err(*puVar6,"ep [%s,%d] was not configured as msm endpoint\n",*(arg1 + 8),*(arg1 + 0xaa));
            uVar3 = 0xffffffea;
        }
        else {
            uVar4 = *(arg1 + 0x10);
            *(arg1 + 0x10) = puVar6[uVar5 + 7];
            puVar6[uVar5 + 7] = 0;
            kfree(uVar4);
            _raw_spin_unlock_irqrestore(iVar1,uVar3);
            uVar3 = 0;
        }
        return uVar3;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8007040);
    (*pcVar2)();
}


// ===== sym.msm_ep_update_ops @ 0x08007040 (size 308) =====

ulong sym.msm_ep_update_ops(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    ulong uVar7;
    ulong uVar8;
    code *pcVar9;
    ulong uVar10;
    uint64_t uVar11;
    ulong *puVar12;
    ulong *in_x18;
    ulong *puVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98) + 0x158;
    puVar13 = *(*(*(*(arg1 + 0x98) + 400) + 0x60) + 0x98);
    uVar10 = _raw_spin_lock_irqsave(iVar1);
    uVar11 = *(arg1 + 0xaa);
    if (uVar11 < 0x20) {
        if (puVar13[uVar11 + 7] == 0) {
            puVar13[uVar11 + 7] = *(arg1 + 0x10);
            puVar13 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xb20,0x60);
            if (puVar13 == NULL) {
                _raw_spin_unlock_irqrestore(iVar1,uVar10);
                uVar10 = 0xfffffff4;
            }
            else {
                puVar12 = *(arg1 + 0x10);
                uVar2 = puVar12[4];
                uVar3 = puVar12[6];
                uVar6 = puVar12[7];
                puVar13[5] = puVar12[5];
                uVar4 = puVar12[2];
                uVar7 = puVar12[3];
                uVar5 = *puVar12;
                uVar8 = puVar12[1];
                puVar13[6] = uVar3;
                puVar13[7] = uVar6;
                puVar13[3] = uVar7;
                puVar13[4] = uVar2;
                *puVar13 = uVar5;
                puVar13[1] = uVar8;
                puVar13[2] = uVar4;
                uVar2 = puVar12[10];
                uVar4 = puVar12[0xb];
                uVar3 = puVar12[8];
                uVar5 = puVar12[9];
                puVar13[5] = sym.dwc3_msm_ep_queue.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
                *puVar13 = sym.dwc3_msm_ep_enable.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
                puVar13[10] = uVar2;
                puVar13[0xb] = uVar4;
                *(arg1 + 0x10) = puVar13;
                puVar13[8] = uVar3;
                puVar13[9] = uVar5;
                _raw_spin_unlock_irqrestore(iVar1,uVar10);
                uVar10 = 0;
            }
        }
        else {
            _raw_spin_unlock_irqrestore(iVar1,uVar10);
            _dev_err(*puVar13,"ep [%s,%d] already configured as msm endpoint\n",*(arg1 + 8),*(arg1 + 0xaa));
            uVar10 = 0xffffffff;
        }
        return uVar10;
    }
    //WARNING: Does not return
    pcVar9 = SoftwareBreakpoint(0x5512,0x8007174);
    (*pcVar9)();
}


// ===== sym.dwc3_msm_ep_queue @ 0x08007174 (size 1384) =====

uint64_t sym.dwc3_msm_ep_queue(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    char cVar2;
    uint8_t uVar3;
    code *pcVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong uVar7;
    int64_t *piVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong uVar11;
    char *pcVar12;
    ulong uVar13;
    uint64_t extraout_x8;
    int64_t iVar14;
    int64_t iVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *unaff_x19;
    int64_t iVar16;
    int64_t *piVar17;
    int64_t unaff_x25;
    ulong *puVar18;
    int64_t iVar19;
    int64_t *unaff_x26;
    int64_t iVar20;
    ulong *puVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    uchar auVar23 [12];
    ulong uStack_e8;
    uint uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    ulong uStack_c8;
    int64_t *piStack_c0;
    int64_t iStack_b8;
    uint64_t uStack_b0;
    int64_t *piStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    int64_t iStack_90;
    ulong *puStack_88;
    ulong uStack_80;
    uint uStack_78;
    ulong uStack_74;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_68 = *(iVar16 + 0x5e0);
    piVar17 = arg3 & 0xffffffff;
    iVar16 = *(arg1 + 0x98) + 0x158;
    puVar21 = *(*(*(*(arg1 + 0x98) + 400) + 0x60) + 0x98);
    uVar7 = _raw_spin_lock_irqsave(iVar16);
    if (*(arg1 + 0x38) == 0) {
        uVar11 = *puVar21;
        uVar13 = *(arg1 + 8);
        pcVar12 = "%s: trying to queue request %pK to disabled ep %s\n";
        goto code_r0x08007630;
    }
    uVar3 = *(arg1 + 0xaa);
    if (0x1f < uVar3) goto code_r0x080076cc;
    if (puVar21[uVar3 + 7] == 0) {
        _dev_err(*puVar21,"ep [%s,%d] was unconfigured as msm endpoint\n",*(arg1 + 8));
code_r0x0800766c:
        _raw_spin_unlock_irqrestore(iVar16,uVar7);
        uVar9 = 0xffffffea;
    }
    else {
        if (arg2 == 0) {
            uVar11 = *puVar21;
            pcVar12 = "%s: request is NULL\n";
code_r0x08007660:
            _dev_err(uVar11,pcVar12,"dwc3_msm_ep_queue");
            goto code_r0x0800766c;
        }
        unaff_x19 = puVar21 + 0xaf;
        if ((*(unaff_x19 + uVar3 * 5 + 1) == 1) && (*(arg2 + 8) >> 0xd == 0)) {
            uVar11 = *puVar21;
            pcVar12 = "%s: Min TRB size is 8KB\n";
            goto code_r0x08007660;
        }
        if (uVar3 < 2) {
            uVar11 = *puVar21;
            uVar13 = *(arg1 + 8);
            pcVar12 = "%s: trying to queue dbm request %pK to ep %s\n";
code_r0x08007630:
            _dev_err(uVar11,pcVar12,"dwc3_msm_ep_queue",arg2,uVar13);
            _raw_spin_unlock_irqrestore(iVar16,uVar7);
            uVar9 = 0xffffffff;
        }
        else {
            if (((*(arg1 + 0xa9) != *(arg1 + 0xa8)) || (*(arg1 + 0x60) != arg1 + 0x60)) ||
               (piVar1 = arg1 + 0x70, *piVar1 != piVar1)) {
                uVar11 = *puVar21;
                uVar13 = *(arg1 + 8);
                pcVar12 = "%s: trying to queue dbm request %pK tp ep %s\n";
                goto code_r0x08007630;
            }
            *(arg1 + 0xa8) = 0;
            if ((arg3 & 0x400010U) == 0) {
                iVar14 = 0;
            }
            else {
                iVar14 = 1;
                if ((arg3 & 0x10U) != 0) {
                    iVar14 = 2;
                }
            }
            iVar15 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar15 = 0x30;
            }
            piVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar15 + iVar14 * 0x70),arg3 | 0x100,0x20);
            if (piVar8 == NULL) {
                _raw_spin_unlock_irqrestore(iVar16,uVar7);
                uVar9 = 0xfffffff4;
            }
            else {
                iVar14 = *(arg2 + 0x30);
                piVar8[2] = arg2;
                piVar8[3] = iVar14;
                puVar18 = puVar21[0x28];
                uVar9 = __list_add_valid(piVar8,puVar18,puVar21 + 0x27);
                if ((uVar9 & 1) != 0) {
                    puVar21[0x28] = piVar8;
                    *piVar8 = puVar21 + 0x27;
                    piVar8[1] = puVar18;
                    *puVar18 = piVar8;
                }
                *(arg2 + 0x30) = sym.__typeid__ZTSFvP6usb_epP11usb_requestE_global_addr;
                if (0x1f < *(arg1 + 0xaa)) goto code_r0x080076cc;
                if (*(unaff_x19 + *(arg1 + 0xaa) * 5 + 1) == 3) {
                    unaff_x25 = arg2 + 0x68;
                    *(arg2 + 0x9c) = 1;
                    unaff_x26 = *(arg1 + 0x78);
                    uVar9 = __list_add_valid(unaff_x25,unaff_x26,piVar1);
                    if ((uVar9 & 1) != 0) {
                        *(arg1 + 0x78) = unaff_x25;
                        *(arg2 + 0x68) = piVar1;
                        *(arg2 + 0x70) = unaff_x26;
                        *unaff_x26 = unaff_x25;
                    }
                    uStack_78 = 0;
                    uStack_74 = CONCAT44(0x8000,(*(arg1 + 0xcc) & 1) << 9 ^ 0x200);
                    uVar5 = sym.dwc3_core_send_gadget_ep_cmd(arg1,6,&stack0xffffffffffffff88);
                    uVar9 = uVar5;
                    if (uVar5 < 0) {
                        uVar10 = __list_del_entry_valid(unaff_x25);
joined_r0x080075dc:
                        if ((uVar10 & 1) != 0) {
                            iVar14 = *(arg2 + 0x68);
                            piVar17 = *(arg2 + 0x70);
                            *(iVar14 + 8) = piVar17;
                            *piVar17 = iVar14;
                        }
                        *(arg2 + 0x68) = 0xdead000000000100;
                        *(arg2 + 0x70) = 0xdead000000000122;
                    }
                    uVar5 = uVar9;
                }
                else {
                    unaff_x26 = arg2 + 0x68;
                    unaff_x25 = *(*(*(*(arg1 + 0x98) + 400) + 0x60) + 0x98);
                    *(arg2 + 0x9c) = 1;
                    puVar18 = *(arg1 + 0x78);
                    uStack_80 = uVar7;
                    uVar9 = __list_add_valid(unaff_x26,puVar18,piVar1);
                    if ((uVar9 & 1) != 0) {
                        *(arg1 + 0x78) = unaff_x26;
                        *(arg2 + 0x68) = piVar1;
                        *(arg2 + 0x70) = puVar18;
                        *puVar18 = unaff_x26;
                    }
                    uVar5 = sym.readl(*(unaff_x25 + 8) + 0xc408);
                    uVar9 = sym.readl(*(unaff_x25 + 8) + 0xc400);
                    uVar10 = sym.readl(*(unaff_x25 + 8) + 0xc404);
                    sym.dbm_event_buffer_config(unaff_x25,uVar9 & 0xffffffff,uVar10 & 0xffffffff,uVar5 & 0xffff);
                    uVar3 = *(arg1 + 0xa8);
                    uStack_78 = 0;
                    cVar2 = '\0';
                    if (uVar3 != 0xfe) {
                        cVar2 = uVar3 + 1;
                    }
                    puVar18 = *(arg1 + 0x88) + uVar3 * 0x10;
                    *(arg1 + 0xa8) = cVar2;
                    *puVar18 = 0;
                    puVar18[1] = 0;
                    *(arg2 + 0xa8) = puVar18;
                    *(arg2 + 0xb8) = *(arg2 + 0xb8) + 1;
                    *(puVar18 + 4) = *(arg1 + 0xaa) << 0x18 | 0xa0000000;
                    *(puVar18 + 1) = *(arg2 + 8) & 0xffffff;
                    *(puVar18 + 0xc) = (*(arg2 + 0xbc) & 2) << 2 ^ 0x1d;
                    *(arg2 + 0xb0) = (puVar18 - *(arg1 + 0x88)) + *(arg1 + 0x90);
                    uVar3 = *(arg1 + 0xa8);
                    cVar2 = '\0';
                    if (uVar3 != 0xfe) {
                        cVar2 = uVar3 + 1;
                    }
                    puVar18 = *(arg1 + 0x88) + uVar3 * 0x10;
                    *(arg1 + 0xa8) = cVar2;
                    *puVar18 = 0;
                    puVar18[1] = 0;
                    *puVar18 = *(arg2 + 0xb0);
                    uVar5 = *(arg2 + 0xb4);
                    uVar3 = *(arg1 + 0xaa);
                    puVar18[1] = 0x8100000000;
                    *(puVar18 + 4) = uVar5 | uVar3 << 0x18 | 0xa0000000;
                    uStack_74 = *(arg2 + 0xb0);
                    uVar5 = sym.dwc3_core_send_gadget_ep_cmd(arg1,0x106,&stack0xffffffffffffff88);
                    uVar9 = uVar5;
                    if (uVar5 < 0) {
                        uVar10 = __list_del_entry_valid(unaff_x26);
                        uVar7 = uStack_80;
                        goto joined_r0x080075dc;
                    }
                    uVar6 = sym.dwc3_msm_is_superspeed(unaff_x25);
                    sym.writel(uVar6 & 1,*(unaff_x25 + 8) + *(*(unaff_x25 + 0x1d0) + 0x70) + 0xf8000);
                    uVar7 = uStack_80;
                }
                piVar17 = piVar8;
                if (uVar5 < 0) {
                    if (0x1f < *(arg1 + 0xaa)) {
code_r0x080076cc:
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(0x5512,0x80076d0);
                        (*pcVar4)();
                    }
                    uVar11 = 0x8003197;
                    if (*(unaff_x19 + *(arg1 + 0xaa) * 5 + 1) != 3) {
                        uVar11 = 0x80023db;
                    }
                    _dev_err(*puVar21,"error %d after queuing %s req\n",uVar9,uVar11);
                    _raw_spin_unlock_irqrestore(iVar16,uVar7);
                    kfree(piVar8);
                }
                else {
                    _raw_spin_unlock_irqrestore(iVar16,uVar7);
                    uVar9 = 0;
                }
            }
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return uVar9;
    }
    auVar22 = __stack_chk_fail();
    iVar19 = auVar22._8_8_;
    iVar15 = auVar22._0_8_;
    *extraout_x18 = 0x80076d4;
    uStack_c8 = 0x80076d4;
    iVar14 = sp_el0;
    uVar5 = 0xffffffea;
    iStack_d8 = *(iVar14 + 0x5e0);
    puStack_d0 = &stack0xffffffffffffffa0;
    piStack_c0 = unaff_x26;
    iStack_b8 = unaff_x25;
    uStack_b0 = uVar9;
    piStack_a8 = piVar17;
    iStack_a0 = arg2;
    iStack_98 = arg1;
    iStack_90 = iVar16;
    puStack_88 = unaff_x19;
    if ((iVar15 != 0) && (iVar19 != 0)) {
        if ((*(iVar19 + 1) == '\x05') && (*(iVar19 + 4) != 0)) {
            iVar16 = *(iVar15 + 0x98);
            if (((*(iVar15 + 0xa4) & 1) != 0) && (obj.dwc3_msm_ep_enable.__already_done == 0x0)) {
                obj.dwc3_msm_ep_enable.__already_done = 0x1;
                uVar7 = dev_driver_string();
                iVar14 = (*(iVar16 + 400))[0xe];
                if (iVar14 == 0) {
                    iVar14 = **(iVar16 + 400);
                }
                __warn_printk("%s %s: %s is already enabled\n",uVar7,iVar14,iVar15 + 0xb8);
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x80077d4);
                (*pcVar4)();
            }
            if ((*(iVar15 + 0xa4) & 1) == 0) {
                if ((*(*(iVar16 + 0x198) + 0x20c) == 2) && ((*(*(iVar16 + 0x198) + 0x200) & 7) == 0)) {
                    _dev_err(*(iVar16 + 400),"fail ep_enable %s device is into LPM\n",iVar15 + 0xb8);
                    uVar5 = 0xffffffea;
                }
                else {
                    uVar7 = _raw_spin_lock_irqsave(iVar16 + 0x158);
                    iVar20 = *(iVar15 + 0x98);
                    iVar19 = *(iVar15 + 0x38);
                    uStack_e0 = 0;
                    uStack_e8 = 0;
                    iVar14 = *(*(*(iVar20 + 400) + 0x60) + 0x98);
                    sym.dwc3_msm_depcfg_params(iVar15,&stack0xffffffffffffff18);
                    uVar5 = sym.dwc3_core_send_gadget_ep_cmd(iVar15,1,&stack0xffffffffffffff18);
                    if (uVar5 == 0) {
                        uVar9 = *(iVar15 + 0xa4);
                        if ((*(iVar15 + 0xa4) & 1) == 0) {
                            sym.dwc3_core_resize_tx_fifos(iVar15);
                            *(iVar15 + 0xab) = *(iVar19 + 3) & 3;
                            *(iVar15 + 0xa4) = *(iVar15 + 0xa4) | 1;
                            uVar6 = sym.readl(*(iVar14 + 8) + 0xc720);
                            sym.writel(uVar6 | 1L << (*(iVar15 + 0xaa) & 0x3f),*(iVar14 + 8) + 0xc720);
                            *(iVar15 + 0xa8) = 0;
                            memset(*(iVar15 + 0x88),0,0x1000);
                            uVar9 = *(iVar15 + 0x88);
                            *(uVar9 + 0xff0) = *(iVar15 + 0x90);
                            *(uVar9 + 0xff4) = (uVar9 - *(iVar15 + 0x88)) + *(iVar15 + 0x90) >> 0x20;
                            *(uVar9 + 0xffc) = *(uVar9 + 0xffc) | 0x81;
                        }
                    }
                    else {
                        _dev_err(*(iVar20 + 400),"set_ep_config() failed for %s\n",iVar15 + 0xb8);
                        uVar9 = extraout_x8;
                    }
                    sym.dwc3_dbg_print(uVar9,*(iVar15 + 0xaa),0x8001e26,uVar5);
                    _raw_spin_unlock_irqrestore(iVar16 + 0x158,uVar7);
                }
            }
            else {
                uVar5 = 0;
            }
        }
        else {
            uVar5 = 0xffffffea;
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_d8) {
        return uVar5;
    }
    auVar23 = __stack_chk_fail();
    iVar16 = auVar23._0_8_;
    iVar14 = *(*(*(*(iVar16 + 0x98) + 400) + 0x60) + 0x98);
    if (auVar23._8_4_ == 0) {
        if (0x20 < *(iVar16 + 0xaa)) goto code_r0x080079a8;
        iVar15 = iVar14 + *(iVar16 + 0xaa) * 0x28;
        *(iVar15 + 0x598) = 0;
        *(iVar15 + 0x590) = 0;
        *(iVar15 + 0x588) = 0;
        *(iVar15 + 0x580) = 0;
        *(iVar15 + 0x578) = 0;
    }
    if (*(iVar16 + 0xaa) < 0x20) {
        *(iVar14 + *(iVar16 + 0xaa) * 0x28 + 0x580) = auVar23._8_4_;
        return 0;
    }
code_r0x080079a8:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x80079ac);
    (*pcVar4)();
}


// ===== sym.dwc3_msm_ep_enable @ 0x080076dc (size 616) =====

uint32_t sym.dwc3_msm_ep_enable(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    uint64_t noname_0;
    uint64_t extraout_x8;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [12];
    ulong uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    uVar2 = 0xffffffea;
    iStack_58 = *(iVar7 + 0x5e0);
    if ((arg1 != 0) && (arg2 != 0)) {
        if ((*(arg2 + 1) == '\x05') && (*(arg2 + 4) != 0)) {
            iVar7 = *(arg1 + 0x98);
            if (((*(arg1 + 0xa4) & 1) != 0) && (obj.dwc3_msm_ep_enable.__already_done == 0x0)) {
                obj.dwc3_msm_ep_enable.__already_done = 0x1;
                uVar4 = dev_driver_string();
                iVar5 = (*(iVar7 + 400))[0xe];
                if (iVar5 == 0) {
                    iVar5 = **(iVar7 + 400);
                }
                __warn_printk("%s %s: %s is already enabled\n",uVar4,iVar5,arg1 + 0xb8);
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x800,0x80077d4);
                (*pcVar1)();
            }
            if ((*(arg1 + 0xa4) & 1) == 0) {
                if ((*(*(iVar7 + 0x198) + 0x20c) == 2) && ((*(*(iVar7 + 0x198) + 0x200) & 7) == 0)) {
                    _dev_err(*(iVar7 + 400),"fail ep_enable %s device is into LPM\n",arg1 + 0xb8);
                    uVar2 = 0xffffffea;
                }
                else {
                    uVar4 = _raw_spin_lock_irqsave(iVar7 + 0x158);
                    iVar8 = *(arg1 + 0x98);
                    iVar6 = *(arg1 + 0x38);
                    uStack_60 = 0;
                    uStack_68 = 0;
                    iVar5 = *(*(*(iVar8 + 400) + 0x60) + 0x98);
                    sym.dwc3_msm_depcfg_params(arg1,&uStack_68);
                    uVar2 = sym.dwc3_core_send_gadget_ep_cmd(arg1,1,&uStack_68);
                    if (uVar2 == 0) {
                        noname_0 = *(arg1 + 0xa4);
                        if ((*(arg1 + 0xa4) & 1) == 0) {
                            sym.dwc3_core_resize_tx_fifos(arg1);
                            *(arg1 + 0xab) = *(iVar6 + 3) & 3;
                            *(arg1 + 0xa4) = *(arg1 + 0xa4) | 1;
                            uVar3 = sym.readl(*(iVar5 + 8) + 0xc720);
                            sym.writel(uVar3 | 1L << (*(arg1 + 0xaa) & 0x3f),*(iVar5 + 8) + 0xc720);
                            *(arg1 + 0xa8) = 0;
                            memset(*(arg1 + 0x88),0,0x1000);
                            noname_0 = *(arg1 + 0x88);
                            *(noname_0 + 0xff0) = *(arg1 + 0x90);
                            *(noname_0 + 0xff4) = (noname_0 - *(arg1 + 0x88)) + *(arg1 + 0x90) >> 0x20;
                            *(noname_0 + 0xffc) = *(noname_0 + 0xffc) | 0x81;
                        }
                    }
                    else {
                        _dev_err(*(iVar8 + 400),"set_ep_config() failed for %s\n",arg1 + 0xb8);
                        noname_0 = extraout_x8;
                    }
                    sym.dwc3_dbg_print(noname_0,*(arg1 + 0xaa),0x8001e26,uVar2);
                    _raw_spin_unlock_irqrestore(iVar7 + 0x158,uVar4);
                }
            }
            else {
                uVar2 = 0;
            }
        }
        else {
            uVar2 = 0xffffffea;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return uVar2;
    }
    auVar9 = __stack_chk_fail();
    iVar7 = auVar9._0_8_;
    iVar5 = *(*(*(*(iVar7 + 0x98) + 400) + 0x60) + 0x98);
    if (auVar9._8_4_ == 0) {
        if (0x20 < *(iVar7 + 0xaa)) goto code_r0x080079a8;
        iVar6 = iVar5 + *(iVar7 + 0xaa) * 0x28;
        *(iVar6 + 0x598) = 0;
        *(iVar6 + 0x590) = 0;
        *(iVar6 + 0x588) = 0;
        *(iVar6 + 0x580) = 0;
        *(iVar6 + 0x578) = 0;
    }
    if (*(iVar7 + 0xaa) < 0x20) {
        *(iVar5 + *(iVar7 + 0xaa) * 0x28 + 0x580) = auVar9._8_4_;
        return 0;
    }
code_r0x080079a8:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80079ac);
    (*pcVar1)();
}


// ===== sym.msm_ep_set_mode @ 0x08007944 (size 104) =====

ulong sym.msm_ep_set_mode(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar2 = *(*(*(*(arg1 + 0x98) + 400) + 0x60) + 0x98);
    if (arg2 == 0) {
        if (0x20 < *(arg1 + 0xaa)) goto code_r0x080079a8;
        iVar3 = iVar2 + *(arg1 + 0xaa) * 0x28;
        *(iVar3 + 0x598) = 0;
        *(iVar3 + 0x590) = 0;
        *(iVar3 + 0x588) = 0;
        *(iVar3 + 0x580) = 0;
        *(iVar3 + 0x578) = 0;
    }
    if (*(arg1 + 0xaa) < 0x20) {
        *(iVar2 + *(arg1 + 0xaa) * 0x28 + 0x580) = arg2;
        return 0;
    }
code_r0x080079a8:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80079ac);
    (*pcVar1)();
}


// ===== sym.dwc3_msm_notify_event @ 0x080079ac (size 1972) =====

void sym.dwc3_msm_notify_event(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    char *pcVar1;
    char *pcVar2;
    uint8_t uVar3;
    code *pcVar4;
    uint32_t uVar5;
    int64_t *piVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong *puVar9;
    ulong *in_x18;
    uint32_t uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    ulong *puVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 < 0x10) {
        puVar13 = *(*(*(arg1 + 400) + 0x60) + 0x98);
    //switch table (16 cases) at 0x8003b74
        switch(*(arg2 * 4 + 0x8003b74) + 0x80079f0) {
        case 0x8007a04:
            if ((*(puVar13[0x37] + 0x10) & 1) == 0) {
                if ((*(puVar13 + 0xa81) != '\0') && (uVar5 = *(*(arg1 + 0x370) + 0x58), 4 < uVar5)) {
                    iVar8 = puVar13[0x37];
                    if ((iVar8 != 0) && (pcVar4 = *(iVar8 + 0x148), pcVar4 != NULL)) {
                        __cfi_slowpath_diag(0x64ea1348e09a6946,pcVar4,0x8001310);
                        (*pcVar4)(iVar8,uVar5);
                    }
                    __const_udelay(0x14f8c);
                    uVar5 = sym.readl(puVar13[1] + 0xc200);
                    sym.writel(uVar5 | 0x80000000,puVar13[1] + 0xc200);
                    __const_udelay(0x14f8c);
                    uVar5 = sym.readl(puVar13[1] + 0xc200);
                    sym.writel(uVar5 & 0x7fffffff,puVar13[1] + 0xc200);
                }
                if (*(puVar13 + 0x1dc) == '\0') {
                    iVar8 = puVar13[1] + 0xf885c;
                    uVar5 = sym.readl(iVar8);
                    sym.writel(uVar5 | 0x2000,iVar8);
                    sym.readl(iVar8);
                }
                *(puVar13 + 0x76) = 0;
                *(puVar13 + 0x3b4) = 0;
                iVar8 = *(*(*(arg1 + 400) + 0x60) + 0x98);
                if ((reloc.dwc3_msm_probe.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt & 1) == 0) {
                    *(iVar8 + 0xa83) = *(arg1 + 0x4d8) >> 0x1e & 1;
                    *(iVar8 + 0xa84) = *(arg1 + 0x4d8) >> 0x1f;
                    reloc.dwc3_msm_probe.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt = 0x1;
                    _printk(0x8002b50);
                }
                if (*(arg1 + 0x47e) == '\x04') {
                    uVar11 = *(arg1 + 0x4d8) & 0xffffffffbfffffff | *(arg1 + 0x4dc) << 0x20 | *(iVar8 + 0xa83) << 0x1e;
                    *(arg1 + 0x4d8) = uVar11;
                    *(arg1 + 0x4dc) = uVar11 >> 0x20;
                    uVar11 = uVar11 & 0xffffffff7fffffff | *(iVar8 + 0xa84) << 0x1f;
                    *(arg1 + 0x4d8) = uVar11;
                    *(arg1 + 0x4dc) = uVar11 >> 0x20;
                }
                else {
                    uVar11 = *(arg1 + 0x4d8) | 0xc0000000;
                    *(arg1 + 0x4d8) = uVar11;
                }
                pcVar1 = "enabled";
                if ((uVar11 & 0x40000000) != 0) {
                    pcVar1 = "disabled";
                }
                pcVar2 = "enabled";
                if ((uVar11 & 0x80000000) != 0) {
                    pcVar2 = "disabled";
                }
                ipc_log_string(*(iVar8 + 0x568),"%s: speed:%d u1:%s u2:%s\n","mdwc3_update_u1u2_value",
                               *(arg1 + 0x47e),pcVar1,pcVar2);
                return;
            }
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x80080f0);
            (*pcVar4)();
        case 0x8007b5c:
            if (((puVar13[0x7b] != NULL) && (*(puVar13 + 0x7a) != 0)) && (iVar8 = *puVar13[0x7b], iVar8 != 0)) {
                uVar10 = 1;
                uVar5 = 0xc41c;
                do {
                    *(iVar8 + 0x14) = 0;
                    sym.writel(0,puVar13[1] + (uVar5 - 0xc));
                    sym.writel(0,puVar13[1] + (uVar5 - 8));
                    sym.writel(uVar10 & 0xffff | 0x80000000,puVar13[1] + (uVar5 - 4));
                    sym.writel(0,puVar13[1] + uVar5);
                    if (*(puVar13 + 0x7a) <= uVar10) {
                        return;
                    }
                    uVar5 = uVar5 + 0x10;
                    iVar8 = *(puVar13[0x7b] + uVar10 * 8);
                    uVar10 = uVar10 + 1;
                } while (iVar8 != 0);
            }
            break;
        case 0x8007bf8:
            if (puVar13[0xa1] != NULL) {
                iVar8 = puVar13[1] + *puVar13[0xa1] + 0xf8800;
                uVar5 = sym.readl(iVar8);
                sym.writel(uVar5 | 2,iVar8);
                sym.readl(iVar8);
                iVar8 = puVar13[1] + *puVar13[0xa1] + 0xf8800;
                uVar5 = sym.readl(iVar8);
                sym.writel(uVar5 & 0xfffffffe,iVar8);
                sym.readl(iVar8);
            }
            break;
        case 0x8007c6c:
            if ((arg3 & 0xe0) != 0) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8008160);
                (*pcVar4)();
            }
            if (*(puVar13 + (arg3 & 0xff) * 5 + 0xb0) == 1) {
                uVar3 = *(puVar13 + (arg3 & 0xff) * 5 + 0xb2);
                uVar5 = sym.readl(puVar13[1] + *(puVar13[0x3a] + 0x60) + 0xf8000);
                sym.writel(uVar5 | 1 << (uVar3 & 0x1f),puVar13[1] + *(puVar13[0x3a] + 0x60) + 0xf8000);
            }
            break;
        case 0x8007cdc:
            if (*(puVar13 + 0x352) != '\0') {
                usb_redriver_gadget_pullup_enter(puVar13[0x39],arg3);
            }
            break;
        case 0x8007cf8:
            if (*(puVar13 + 0x352) != '\0') {
                usb_redriver_gadget_pullup_exit(puVar13[0x39],arg3);
            }
            break;
        case 0x8007d14:
            if (*(puVar13 + 0x7a) != 0) {
                iVar8 = devm_kmalloc(*(arg1 + 400),*(puVar13 + 0x7a) * 0x38,0xdc0);
                puVar13[0x7b] = iVar8;
                if (iVar8 == 0) {
                    _dev_err(*(arg1 + 400),"can\'t allocate gsi_ev_buff\n");
                }
                else {
                    if (*(puVar13 + 0x7a) != 0) {
                        uVar5 = 0;
                        do {
                            piVar6 = devm_kmalloc(*(arg1 + 400),0x38,0xdc0);
                            if (piVar6 == NULL) {
                                return;
                            }
                            uVar7 = *(arg1 + 0x198);
                            piVar6[5] = arg1;
                            *(piVar6 + 2) = 0x1000;
                            iVar8 = dma_alloc_attrs(uVar7,0x1000,piVar6 + 4,0xcc0,0);
                            *piVar6 = iVar8;
                            if (iVar8 == 0) {
                                _dev_err(*(arg1 + 400),"can\'t allocate gsi_evt_buf(%d)\n",uVar5);
                                return;
                            }
                            *(puVar13[0x7b] + uVar5 * 8) = piVar6;
                            uVar5 = uVar5 + 1;
                        } while (uVar5 < *(puVar13 + 0x7a));
                    }
                    puVar9 = puVar13 + 0xa7;
                    piVar6 = *(arg1 + 0x198);
                    uVar11 = is_vmalloc_addr(puVar9);
                    if (((uVar11 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                        obj.dma_map_single_attrs.__already_done = 0x1;
                        uVar7 = dev_driver_string(piVar6);
                        iVar8 = piVar6[0xe];
                        if (iVar8 == 0) {
                            iVar8 = *piVar6;
                        }
                        __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar7,iVar8);
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(0x800,0x8008134);
                        (*pcVar4)();
                    }
                    if ((uVar11 & 1) == 0) {
                        iVar8 = dma_map_page_attrs(piVar6,((puVar9 * 0x100 >> 8) + 0x8000000000U >> 6 &
                                                           0x3ffffffffffffc0) - 0x200000000,puVar9 & 0xfff,8,2,0);
                        puVar13[0xa8] = iVar8;
                        if (iVar8 != -1) {
                            return;
                        }
                    }
                    else {
                        puVar13[0xa8] = 0xffffffffffffffff;
                    }
                    _dev_err(*(arg1 + 400),"failed to map dummy doorbell buffer\n");
                    puVar13[0xa8] = 0;
                }
            }
            break;
        case 0x8007e0c:
            if (((puVar13[0x7b] != NULL) && (*(puVar13 + 0x7a) != 0)) && (puVar9 = *puVar13[0x7b], puVar9 != NULL)) {
                uVar10 = 1;
                uVar12 = 0x10000;
                uVar5 = 0xc41c;
                do {
                    memset(*puVar9,0,*(puVar9 + 2));
                    *(puVar9 + 0x14) = 0;
                    sym.writel(*(puVar9 + 4),puVar13[1] + (uVar5 - 0xc));
                    sym.writel(*(puVar9 + 0x24) | uVar12 | 0xc00000,puVar13[1] + (uVar5 - 8));
                    sym.writel(*(puVar9 + 2) | 0x80000000,puVar13[1] + (uVar5 - 4));
                    sym.writel(0,puVar13[1] + uVar5);
                    if (*(puVar13 + 0x7a) <= uVar10) {
                        return;
                    }
                    uVar12 = uVar12 + 0x10000;
                    uVar5 = uVar5 + 0x10;
                    puVar9 = *(puVar13[0x7b] + uVar10 * 8);
                    uVar10 = uVar10 + 1;
                } while (puVar9 != NULL);
            }
            break;
        case 0x8007ec8:
            if (*(puVar13 + 0x7a) != 0) {
                uVar11 = 0;
                uVar14 = 0xc41c;
                do {
                    uVar11 = uVar11 + 1;
                    uVar5 = sym.readl(puVar13[1] + (uVar14 & 0xfffffffc));
                    sym.writel(uVar5 & 0xfffc,puVar13[1] + (uVar14 & 0xfffffffc));
                    ipc_log_string(puVar13[0xad],"%s: remaining EVNTCOUNT(%d)=%d","dwc3_msm_notify_event",
                                   uVar11 & 0xffffffff,uVar5 & 0xfffc);
                    uVar14 = uVar14 + 0x10;
                } while (uVar11 < *(puVar13 + 0x7a));
            }
            break;
        case 0x8007f40:
            iVar8 = puVar13[0x7b];
            if (iVar8 != 0) {
                uVar5 = *(puVar13 + 0x7a);
                if (uVar5 != 0) {
                    uVar10 = 1;
                    while( true ) {
                        puVar9 = *(iVar8 + (uVar10 - 1) * 8);
                        if (puVar9 != NULL) {
                            dma_free_attrs(*(arg1 + 0x198),*(puVar9 + 2),*puVar9,puVar9[4],0);
                            uVar5 = *(puVar13 + 0x7a);
                        }
                        if (uVar5 <= uVar10) break;
                        iVar8 = puVar13[0x7b];
                        uVar10 = uVar10 + 1;
                    }
                }
                if (puVar13[0xa8] != 0) {
                    dma_unmap_page_attrs(*(arg1 + 0x198),puVar13[0xa8],8,2,0);
                    puVar13[0xa8] = 0;
                }
            }
            break;
        case 0x8008028:
            _dev_info(*puVar13,"DWC3_CONTROLLER_ERROR_EVENT received\n");
            sym.writel(0,puVar13[1] + 0xc708);
            uVar5 = sym.readl(puVar13[1] + 0xc110);
            sym.writel(uVar5 | 0x800,puVar13[1] + 0xc110);
            if (*(puVar13 + 0x564) < 3) {
                queue_work_on(0x20,___stack_chk_fail,puVar13 + 0x49);
            }
        }
    }
    return;
}


// ===== sym.dwc3_msm_set_dp_mode @ 0x08008160 (size 780) =====

int sym.dwc3_msm_set_dp_mode(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong *arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    if ((arg1_00 == NULL) || (arg1_00[5] == 0)) {
        _dev_err(arg1,"dwc3-msm is not initialized yet.\n");
        return -0xb;
    }
    flush_work(arg1_00 + 0x43);
    flush_workqueue(arg1_00[0x51]);
    _dev_err(*arg1_00,"DP: cur_state:%d new_state:%d lanes:%d\n",*(arg1_00 + 0xa8c),arg2 & 1,arg3 & 0xffffffff);
    if ((arg2 & 1U) == 0) {
        _dev_err(*arg1_00,"%s: DP not connected, refcnt:%d\n","dwc3_msm_set_dp_mode",*(arg1_00 + 0x151));
        mutex_lock(arg1_00 + 0x9a);
        iVar1 = *(arg1_00 + 0x151);
        *(arg1_00 + 0xab) = 0;
        *(arg1_00 + 0xa8c) = 0;
        *(arg1_00 + 0x151) = iVar1 + -1;
        if (*(arg1_00 + 100) == 4) {
            if (iVar1 + -1 == 0) {
                sym.dwc3_start_stop_host(arg1_00);
            }
        }
        else {
            sym.dwc3_msm_clear_dp_only_params(arg1_00);
        }
        *(arg1_00[0x38] + 0x10) = *(arg1_00[0x38] + 0x10) & 0xfffffbff;
        mutex_unlock(arg1_00 + 0x9a);
        return 0;
    }
    if (*(arg1_00 + 0xa8c) == arg3) {
        ipc_log_string(arg1_00[0xad],"%s: DP lane already configured\n","dwc3_msm_set_dp_mode");
        return 0;
    }
    ipc_log_string(arg1_00[0xad],"%s: Set DP lanes:%d refcnt:%d\n","dwc3_msm_set_dp_mode",arg3 & 0xffffffff,
                   *(arg1_00 + 0x151));
    if (arg3 == 2) {
        if (*(arg1_00 + 0x349) == '\0') {
            msleep(0x19);
            return -0xb;
        }
        mutex_lock(arg1_00 + 0x9a);
        *(arg1_00 + 0xa8c) = 2;
        *(arg1_00 + 0x151) = *(arg1_00 + 0x151) + 1;
        mutex_unlock(arg1_00 + 0x9a);
        usb_redriver_release_lanes(arg1_00[0x39],2);
        __pm_runtime_resume(arg1_00[5] + 0x10,4);
        *(arg1_00[0x38] + 0x10) = *(arg1_00[0x38] + 0x10) | 0x400;
        __pm_runtime_idle(arg1_00[5] + 0x10,4);
        ipc_log_string(arg1_00[0xad],"%s: Set DP 2 lanes: success, refcnt:%d\n","dwc3_msm_set_dp_mode",
                       *(arg1_00 + 0x151));
        return 0;
    }
    flush_work(arg1_00 + 0x43);
    flush_workqueue(arg1_00[0x51]);
    mutex_lock(arg1_00 + 0x9a);
    if (*(arg1_00 + 0x6b) == 0) {
        iVar1 = sym.dwc3_start_stop_host(arg1_00);
        if (iVar1 != 0) goto code_r0x08008418;
        sym.dwc3_msm_set_dp_only_params(arg1_00);
        sym.dwc3_start_stop_host(arg1_00);
    }
    else if (*(arg1_00 + 0x352) == '\0') {
        uVar2 = arg1_00[99];
        while ((uVar2 >> 3 & 1) != 0) {
            msleep(0x14);
            uVar2 = arg1_00[99];
        }
        ipc_log_string(arg1_00[0xad],"%s: USB is not active.\n","dwc3_msm_set_dp_mode");
        sym.dwc3_msm_set_dp_only_params(arg1_00);
    }
    else {
        iVar1 = sym.dwc3_start_stop_device(arg1_00);
        if (iVar1 != 0) goto code_r0x08008418;
        sym.dwc3_msm_set_dp_only_params(arg1_00);
        sym.dwc3_start_stop_device(arg1_00);
    }
    if (*(arg1_00 + 0xa8c) != 2) {
        *(arg1_00 + 0x151) = *(arg1_00 + 0x151) + 1;
    }
    iVar1 = 0;
    *(arg1_00 + 0xa8c) = 4;
code_r0x08008418:
    ipc_log_string(arg1_00[0xad],"%s: Set DP 4 lanes: %d refcnt:%d\n","dwc3_msm_set_dp_mode",iVar1,
                   *(arg1_00 + 0x151));
    mutex_unlock(arg1_00 + 0x9a);
    return iVar1;
}


// ===== sym.dwc3_start_stop_host @ 0x0800846c (size 248) =====

ulong sym.dwc3_start_stop_host(int64_t arg1)

{
    uint64_t in_x1;
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_x1 & 1) == 0) {
        ipc_log_string(*(arg1 + 0x568),"%s: stop_host_mode started","dwc3_start_stop_host");
        *(arg1 + 0x352) = 0;
        *(arg1 + 0x358) = 1;
        sym.dwc3_ext_event_notify(arg1);
        __pm_runtime_resume(*(arg1 + 0x28) + 0x10,5);
        flush_work(arg1 + 0x218);
        flush_workqueue(*(arg1 + 0x288));
        __pm_runtime_idle(*(arg1 + 0x28) + 0x10,5);
        uVar1 = *(arg1 + 0x318);
        while ((uVar1 >> 3 & 1) != 0) {
            msleep(0x14);
            uVar1 = *(arg1 + 0x318);
        }
        ipc_log_string(*(arg1 + 0x568),"%s: stop_host_mode completed","dwc3_start_stop_host");
        if (*(arg1 + 0x358) == 0) {
            return 0xfffffff0;
        }
    }
    else {
        ipc_log_string(*(arg1 + 0x568),"%s: start host mode","dwc3_start_stop_host");
        *(arg1 + 0x358) = 0;
        *(arg1 + 0x352) = 0;
        sym.dwc3_ext_event_notify(arg1);
    }
    return 0;
}


// ===== sym.dwc3_msm_clear_dp_only_params @ 0x08008564 (size 120) =====

void sym.dwc3_msm_clear_dp_only_params(int64_t arg1)

{
    uint *puVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _dev_err(*arg1,"resetting params for USB ss\n");
    *(arg1 + 0x558) = 0;
    *(*(arg1 + 0x1c0) + 0x10) = *(*(arg1 + 0x1c0) + 0x10) & 0xfffffdff;
    if (*(arg1 + 0x28) == 0) {
        puVar1 = arg1 + 0x500;
    }
    else {
        puVar1 = *(*(arg1 + 0x28) + 0xa8) + 0x450;
    }
    *puVar1 = *(arg1 + 0x504);
    usb_redriver_notify_disconnect(*(arg1 + 0x1c8));
    return;
}


// ===== sym.dwc3_msm_set_dp_only_params @ 0x080085dc (size 124) =====

void sym.dwc3_msm_set_dp_only_params(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_redriver_release_lanes(*(arg1 + 0x1c8),4);
    uVar1 = *(arg1 + 0x504);
    *(arg1 + 0x558) = 1;
    if (*(arg1 + 0x28) == 0) {
        puVar2 = arg1 + 0x500;
    }
    else {
        puVar2 = *(*(arg1 + 0x28) + 0xa8) + 0x450;
    }
    if (2 < uVar1) {
        uVar1 = 3;
    }
    *puVar2 = uVar1;
    *(*(arg1 + 0x1c0) + 0x10) = *(*(arg1 + 0x1c0) + 0x10) | 0x200;
    return;
}


// ===== sym.dwc3_start_stop_device @ 0x08008658 (size 252) =====

ulong sym.dwc3_start_stop_device(int64_t arg1)

{
    uint64_t in_x1;
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_x1 & 1) == 0) {
        ipc_log_string(*(arg1 + 0x568),"%s: stop device mode","dwc3_start_stop_device");
        *(arg1 + 0x352) = 0;
        *(arg1 + 0x358) = 1;
        sym.dwc3_ext_event_notify(arg1);
        __pm_runtime_resume(*(arg1 + 0x28) + 0x10,5);
        flush_work(arg1 + 0x218);
        flush_workqueue(*(arg1 + 0x288));
        __pm_runtime_idle(*(arg1 + 0x28) + 0x10,5);
        uVar1 = *(arg1 + 0x318);
        while ((uVar1 >> 3 & 1) != 0) {
            msleep(0x14);
            uVar1 = *(arg1 + 0x318);
        }
        ipc_log_string(*(arg1 + 0x568),"%s: stop_device_mode completed","dwc3_start_stop_device");
        if (*(arg1 + 0x352) != '\0') {
            return 0xfffffff0;
        }
    }
    else {
        ipc_log_string(*(arg1 + 0x568),"%s: start device mode","dwc3_start_stop_device");
        *(arg1 + 0x358) = 1;
        *(arg1 + 0x352) = 1;
        sym.dwc3_ext_event_notify(arg1);
    }
    return 0;
}


// ===== sym.dwc3_msm_release_ss_lane @ 0x08008754 (size 44) =====

void sym.dwc3_msm_release_ss_lane(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_msm_set_dp_mode(arg1,1,4);
    return;
}


// ===== sym.init_module @ 0x08008780 (size 56) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_msm_kretprobe_init();
    __platform_driver_register(reloc.dwc3_msm_probe.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.dwc3_core_send_gadget_ep_cmd @ 0x080087b8 (size 640) =====

int sym.dwc3_core_send_gadget_ep_cmd(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint8_t extraout_w0;
    ulong uVar5;
    uint32_t uVar6;
    int iVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t iVar9;
    int iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = *(arg1 + 0x98);
    uVar4 = arg2;
    iVar11 = *(arg1 + 0x38);
    iVar8 = *(*(*(iVar9 + 400) + 0x60) + 0x98);
    if (*(*(iVar9 + 0x370) + 0x58) < 4) {
        uVar3 = sym.readl(*(iVar8 + 8) + 0xc200);
        if ((uVar3 >> 6 & 1) == 0) {
            uVar6 = 0;
        }
        else {
            uVar3 = uVar3 & 0xffffffbf;
            uVar6 = 0x40;
        }
        uVar6 = uVar3 & 0x100 | uVar6;
        if (uVar6 != 0) {
            sym.writel(uVar3 & 0xfffffeff,*(iVar8 + 8) + 0xc200);
        }
    }
    else {
        uVar6 = 0;
    }
    sym.writel_relaxed(*(arg3 + 8),*(arg1 + 0x80) + -0xc0f8);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(*(arg3 + 4),*(arg1 + 0x80) + -0xc0fc);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(*arg3,*(arg1 + 0x80) + -0xc100);
    DataSynchronizationBarrier(3,3,0);
    if (((uVar4 & 0xf) == 7) && ((*(iVar11 + 3) & 3) != 1)) {
        uVar4 = uVar4 & 0xfffffaff;
    }
    else {
        uVar4 = uVar4 | 0x400;
    }
    sym.writel_relaxed(uVar4,*(arg1 + 0x80) + -0xc0f4);
    DataSynchronizationBarrier(3,3,0);
    iVar10 = 5000;
    do {
        uVar3 = sym.readl_relaxed(*(arg1 + 0x80) + -0xc0f4);
        if ((uVar3 >> 10 & 1) == 0) {
            uVar3 = uVar3 >> 0xc & 0xf;
            if (uVar3 == 2) {
                iVar7 = -0xb;
            }
            else {
                if (uVar3 == 1) {
                    uVar5 = dev_driver_string(*(iVar9 + 400));
                    iVar8 = (*(iVar9 + 400))[0xe];
                    if (iVar8 == 0) {
                        iVar8 = **(iVar9 + 400);
                    }
                    __warn_printk("%s %s: No resource for %s\n",uVar5,iVar8,arg1 + 0xb8);
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x800,0x8008980);
                    (*pcVar2)();
                }
                iVar7 = 0;
                if (uVar3 != 0) {
                    uVar5 = dev_driver_string(*(iVar9 + 400));
                    iVar8 = (*(iVar9 + 400))[0xe];
                    if (iVar8 == 0) {
                        iVar8 = **(iVar9 + 400);
                    }
                    __warn_printk("%s %s: UNKNOWN cmd status\n",uVar5,iVar8);
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x800,0x8008940);
                    (*pcVar2)();
                }
            }
            goto code_r0x08008980;
        }
        iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    iVar7 = -0x16;
code_r0x08008980:
    iVar1 = -0x6e;
    if (iVar10 != 0) {
        iVar1 = iVar7;
    }
    if (((uVar4 & 0xf) == 6) && (iVar1 != -0x6e)) {
        if (iVar1 == 0) {
            if (0x1f < *(arg1 + 0xaa)) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8008a38);
                (*pcVar2)();
            }
            iVar9 = iVar8 + *(arg1 + 0xaa) * 0x28;
            *(iVar9 + 0x598) = *(iVar9 + 0x598) | 1;
            if (iVar10 == 0) goto code_r0x080089e0;
        }
        sym.readl_relaxed(*(arg1 + 0x80) + -0xc0f4);
        *(arg1 + 0xac) = extraout_w0 & 0x7f;
    }
code_r0x080089e0:
    if (uVar6 != 0) {
        uVar4 = sym.readl(*(iVar8 + 8) + 0xc200);
        sym.writel(uVar4 | uVar6,*(iVar8 + 8) + 0xc200);
    }
    return iVar1;
}


// ===== sym.writel_relaxed @ 0x08008a38 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8008a54);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8008a7c);
    return;
}


// ===== sym.readl_relaxed @ 0x08008ab0 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8008ab4);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8008ae8);
    return uVar1;
}


// ===== sym.dwc3_msm_depcfg_params @ 0x08008b20 (size 292) =====

void sym.dwc3_msm_depcfg_params(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int iVar4;
    code *pcVar5;
    int64_t iVar6;
    int64_t iVar7;
    
    iVar2 = *(arg1 + 0x38);
    iVar3 = *(arg1 + 0x40);
    iVar7 = *(arg1 + 0x98);
    uVar1 = (*(iVar2 + 3) & 3) << 1 | (*(iVar2 + 4) & 0x7ff) << 3;
    iVar6 = *(*(*(iVar7 + 400) + 0x60) + 0x98);
    *(arg2 + 8) = uVar1;
    if (4 < *(*(iVar7 + 0x370) + 0x58)) {
        *(arg2 + 8) = (*(arg1 + 0x34) & 0x3c) * 0x100000 + 0x3c00000 & 0x3c00000 | uVar1;
    }
    if (((iVar3 != 0) && ((*(iVar3 + 3) & 0x1f) != 0)) && ((*(iVar2 + 3) & 3) == 2)) {
        *(arg2 + 4) = *(arg2 + 4) | 0x1002000;
        *(arg1 + 0xcc) = *(arg1 + 0xcc) | 2;
    }
    uVar1 = *(arg2 + 4) | (*(arg1 + 0xaa) & 0x1f) << 0x19;
    *(arg2 + 4) = uVar1;
    if ((*(arg1 + 0xcc) & 1) != 0) {
        *(arg2 + 8) = *(arg2 + 8) | (*(arg1 + 0xaa) >> 1 & 0x1f) << 0x11;
    }
    if (*(arg1 + 0xaa) < 0x20) {
        iVar4 = *(iVar6 + *(arg1 + 0xaa) * 0x28 + 0x580);
        if (iVar4 == 3) {
            *(arg2 + 4) = uVar1 | 0xc000;
            *(arg2 + 8) = *(arg2 + 8) | 0x8000;
        }
        else if (iVar4 == 2) {
            *(arg2 + 4) = uVar1 | 0xb00;
            return;
        }
        return;
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8008c44);
    (*pcVar5)();
}


// ===== sym.dwc3_core_resize_tx_fifos @ 0x08008c44 (size 508) =====

void sym.dwc3_core_resize_tx_fifos(int64_t arg1)

{
    int iVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    int iVar4;
    uint16_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = *(arg1 + 0x98);
    if ((((*(iVar9 + 0x4d8) >> 0xb & 1) != 0) && (*(*(arg1 + 0x38) + 2) < '\0')) && (1 < *(arg1 + 0xaa))) {
        uVar5 = *(iVar9 + 0x49c);
        uVar2 = *(*(arg1 + 0x38) + 3) & 3;
        uVar3 = *(arg1 + 0x32) << 0x20;
        iVar10 = *(*(*(iVar9 + 400) + 0x60) + 0x98);
        uVar7 = 3;
        if ((uVar2 != 2 || (uVar3 & 0x78000000000000) == 0) && uVar2 != 1) {
            uVar7 = 1;
        }
        if ((((uVar3 & 0x7c000000000000) < 0x18000000000001) || (uVar2 != 2)) || (*(iVar9 + 0x460) != 0x3331)) {
            uVar8 = *(iVar9 + 0x481);
            if (*(iVar9 + 0x460) == 0x3332) {
                uVar8 = *(iVar9 + 0x498) & 0x300 | uVar8;
            }
        }
        else {
            uVar7 = *(iVar9 + 0x4cc);
            uVar8 = *(iVar9 + 0x481);
        }
        uVar8 = uVar8 >> 3;
        uVar6 = 0;
        if (uVar8 != 0) {
            uVar6 = (uVar8 | 0x400) / uVar8;
        }
        uVar8 = (uVar7 - 1) + (uVar7 - 1) * uVar6;
        uVar7 = (uVar5 - *(iVar9 + 0x4e4)) + (*(iVar9 + 0x4e0) - *(iVar9 + 0x4e8)) * (-2 - uVar6);
        uVar7 = uVar7 & (uVar7 >> 0x1f ^ 0xffffffffU);
        if (uVar8 <= uVar7) {
            uVar7 = uVar8;
        }
        uVar7 = uVar6 + uVar7 + 2;
        uVar6 = sym.readl(*(iVar10 + 8) + 0xc300);
        iVar4 = *(iVar9 + 0x4e4);
        uVar8 = uVar7 & 0xffff;
        if (*(iVar9 + 0x460) != 0x5533) {
            uVar8 = uVar7 & 0x7fff;
        }
        iVar1 = uVar8 + iVar4;
        *(iVar9 + 0x4e4) = iVar1;
        if (iVar1 < uVar5) {
            sym.writel(uVar7 | (uVar6 & 0xffff0000) + iVar4 * 0x10000,
                       (*(arg1 + 0xaa) & 0xfe) * 2 + *(iVar10 + 8) + 0xc300);
            *(iVar9 + 0x4e8) = *(iVar9 + 0x4e8) + 1;
        }
        else {
            _dev_err(*(iVar9 + 400),"Fifosize(%d) > RAM size(%d) %s depth:%d\n",iVar1,uVar5,*(arg1 + 8));
            uVar8 = uVar7 & 0xffff;
            if (*(iVar9 + 0x460) != 0x5533) {
                uVar8 = uVar7 & 0x7fff;
            }
            *(iVar9 + 0x4e4) = *(iVar9 + 0x4e4) - uVar8;
        }
    }
    return;
}


// ===== sym.readl @ 0x08008e40 (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8008e44);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x8008e88);
    return uVar1;
}


// ===== sym.writel @ 0x08008ec0 (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8008edc);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8008f08);
    return;
}


// ===== sym.dwc3_msm_req_complete_func @ 0x08008f3c (size 488) =====

void sym.dwc3_msm_req_complete_func(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int iVar6;
    int64_t *piVar7;
    int64_t iVar8;
    int *piVar9;
    ulong *in_x18;
    int64_t *piVar10;
    int64_t arg1_00;
    code *pcVar11;
    uint32_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(arg1 + 0x98) + 400);
    arg1_00 = *(*(iVar4 + 0x60) + 0x98);
    piVar10 = *(arg1_00 + 0x138);
    piVar1 = arg1_00 + 0x138;
    piVar7 = piVar1;
    if (piVar10 != piVar1) {
        iVar8 = piVar10[2];
        piVar7 = piVar10;
        while ((piVar10 = piVar7, iVar8 != arg2 && (piVar10 = *piVar7, piVar7 = piVar1, piVar10 != piVar1))) {
            iVar8 = piVar10[2];
            piVar7 = piVar10;
        }
    }
    if ((piVar10 == NULL) || (piVar10[2] != arg2)) {
        _dev_err(iVar4,"%s: could not find the request\n","dwc3_msm_req_complete_func");
    }
    else {
        uVar5 = __list_del_entry_valid(piVar7);
        if ((uVar5 & 1) != 0) {
            iVar4 = *piVar10;
            piVar1 = piVar10[1];
            *(iVar4 + 8) = piVar1;
            *piVar1 = iVar4;
        }
        *piVar10 = -0x2152ffffffffff00;
        piVar10[1] = -0x2152fffffffffede;
        uVar5 = *(arg1 + 0xaa);
        *(arg1 + 0xa9) = *(arg1 + 0xa9) + '\x01';
        if (0x1f < uVar5) {
    //WARNING: Does not return
            pcVar11 = SoftwareBreakpoint(0x5512,0x8009100);
            (*pcVar11)();
        }
        if (*(arg1_00 + uVar5 * 0x28 + 0x580) == 1) {
            iVar4 = arg1_00 + uVar5 * 0x28;
            piVar9 = *(arg1_00 + 0x1d0);
            uVar2 = *(iVar4 + 0x590);
            *(iVar4 + 0x590) = 0;
            uVar12 = uVar2;
            uVar3 = sym.readl(*(arg1_00 + 8) + *piVar9 + piVar9[1] * uVar12 + 0xf8000);
            sym.writel(uVar3 & 0xfffffffe,
                       *(arg1_00 + 8) + **(arg1_00 + 0x1d0) + (*(arg1_00 + 0x1d0))[1] * uVar12 + 0xf8000);
        }
        iVar4 = 0;
        iVar6 = 0;
        do {
            piVar9 = arg1_00 + 0x580 + iVar4;
            iVar4 = iVar4 + 0x28;
            if (*piVar9 == 1) {
                iVar6 = iVar6 + 1;
            }
        } while (iVar4 != 0x500);
        if (iVar6 == 0) {
            sym.dbm_event_buffer_config(arg1_00,0,0,0);
        }
        pcVar11 = piVar10[3];
        *(arg2 + 0x30) = pcVar11;
        if (pcVar11 != NULL) {
            if (pcVar11 != sym.__typeid__ZTSFvP6usb_epP11usb_requestE_global_addr) {
                __cfi_slowpath_diag(0x643f348a21390606,pcVar11,0x80012f0);
            }
            (*pcVar11)(arg1,arg2);
        }
        kfree(piVar10);
    }
    return;
}


// ===== sym.dwc3_msm_is_superspeed @ 0x08009124 (size 300) =====

uint64_t sym.dwc3_msm_is_superspeed(int64_t arg1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    char *pcVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    uint64_t uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x348) == '\0') {
        if (*(arg1 + 0x34a) == '\0') {
            _dev_info(*arg1,"%s: Null Insert.\n","dwc3_msm_is_superspeed");
            return 0;
        }
        uVar2 = sym.readl(*(arg1 + 8) + 0xc70c);
        uVar4 = *arg1;
        uVar6 = (uVar2 & 6) == 4;
        pcVar3 = "%s: device SS:%d.\n";
    }
    else {
        uVar2 = sym.readl(*(arg1 + 8) + 4);
        uVar2 = uVar2 >> 0x18 & 0x7f;
        uVar6 = uVar2;
        if (uVar2 != 0) {
            uVar2 = sym.readl(*(arg1 + 8) + 0x420);
            if (((uVar2 >> 1 & 1) == 0) || ((uVar2 & 0x3000) == 0)) {
                iVar7 = 0x430;
                uVar1 = 1;
                do {
                    uVar5 = uVar1;
                    if (uVar6 == uVar5) break;
                    uVar2 = sym.readl(*(arg1 + 8) + iVar7);
                    iVar7 = iVar7 + 0x10;
                    uVar1 = uVar5 + 1;
                } while (((uVar2 >> 1 & 1) == 0) || ((uVar2 & 0x3000) == 0));
                uVar6 = uVar5 < uVar6;
            }
            else {
                uVar6 = 1;
            }
        }
        uVar4 = *arg1;
        pcVar3 = "%s: host SS:%d.\n";
    }
    _dev_info(uVar4,pcVar3,"dwc3_msm_is_superspeed",uVar6);
    return uVar6;
}


// ===== sym.dwc3_ext_event_notify @ 0x08009250 (size 1252) =====

void sym.dwc3_ext_event_notify(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    code *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    flush_delayed_work(arg1 + 0x290);
    if ((*(arg1 + 0xa90) == '\0') || ((*(arg1 + 0x352) == '\0' && (*(arg1 + 0x358) != 0)))) {
        puVar1 = arg1 + 0x318;
        ipc_log_string(*(arg1 + 0x568),"%s: enter: mdwc->inputs:%lx hs_phy_flags:%x\n","dwc3_ext_event_notify",
                       *(arg1 + 0x318),*(*(arg1 + 0x1b8) + 0x10));
        if (*(arg1 + 0x358) == 1) {
            ipc_log_string(*(arg1 + 0x568),"%s: XCVR: ID set\n","dwc3_ext_event_notify");
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 | 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
        else {
            ipc_log_string(*(arg1 + 0x568),"%s: XCVR: ID clear\n","dwc3_ext_event_notify");
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffe;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
        if ((*(arg1 + 0x352) == '\0') || (*(arg1 + 0x278) != '\0')) {
            ipc_log_string(*(arg1 + 0x568),"%s: XCVR: BSV clear\n","dwc3_ext_event_notify");
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffd;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
        else if ((*(*(arg1 + 0x1b8) + 0x10) >> 6 & 1) == 0) {
            ipc_log_string(*(arg1 + 0x568),"%s: XCVR: BSV set\n","dwc3_ext_event_notify");
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 | 2;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
        else {
            ipc_log_string(*(arg1 + 0x568),"%s: XCVR: BSV clear\n","dwc3_ext_event_notify");
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffd;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
        if (*(arg1 + 0x354) == '\0') {
            ipc_log_string(*(arg1 + 0x568),"%s: XCVR: SUSP clear\n","dwc3_ext_event_notify");
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffb;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
        else {
            ipc_log_string(*(arg1 + 0x568),"%s: XCVR: SUSP set\n","dwc3_ext_event_notify");
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 | 4;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
        if (*(arg1 + 0x351) == '\0') {
            uVar5 = 0;
        }
        else if (*(arg1 + 0x352) == '\0') {
            uVar5 = 1;
        }
        else {
            *(*(arg1 + 0x1b8) + 0x10) = *(*(arg1 + 0x1b8) + 0x10) & 0xffffff3f;
            ipc_log_string(*(arg1 + 0x568),"%s: eud: state:%d active:%d hs_phy_flags:0x%x\n","dwc3_ext_event_notify",
                           *(arg1 + 0x351),*(arg1 + 0x353),*(*(arg1 + 0x1b8) + 0x10));
            iVar6 = *(arg1 + 0x1b8);
            if (*(arg1 + 0x353) == '\0') {
                *(iVar6 + 0x10) = *(iVar6 + 0x10) | 0x40;
                ipc_log_string(*(arg1 + 0x568),"%s: EUD: XCVR: BSV clear\n","dwc3_ext_event_notify");
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = *puVar1 & 0xfffffffffffffffd;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
            }
            else {
                *(iVar6 + 0x10) = *(iVar6 + 0x10) | 0x80;
                ipc_log_string(*(arg1 + 0x568),"%s: EUD: XCVR: BSV set\n","dwc3_ext_event_notify");
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = *puVar1 | 2;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
            }
            uVar5 = 0;
            *(arg1 + 0x351) = 0;
        }
        ipc_log_string(*(arg1 + 0x568),"%s: eud: state:%d active:%d hs_phy_flags:0x%x\n","dwc3_ext_event_notify",
                       uVar5,*(arg1 + 0x353),*(*(arg1 + 0x1b8) + 0x10));
        if (*(arg1 + 0x352) == '\0') {
            uVar2 = *(*(arg1 + 0x1b8) + 0x10);
            if ((uVar2 >> 6 & 1) != 0) {
                *(*(arg1 + 0x1b8) + 0x10) = uVar2 & 0xffffffbf;
                *(*(arg1 + 0x1b8) + 0x10) = *(*(arg1 + 0x1b8) + 0x10) | 0x100;
                iVar6 = *(arg1 + 0x1b8);
                if ((iVar6 != 0) && (pcVar7 = *(iVar6 + 0x138), pcVar7 != NULL)) {
                    __cfi_slowpath_diag(0x9eb30a7a6c5b472a,pcVar7,0x8001330);
                    (*pcVar7)(iVar6,1);
                    iVar6 = *(arg1 + 0x1b8);
                }
                *(iVar6 + 0x10) = *(iVar6 + 0x10) & 0xfffffeff;
                return;
            }
        }
        ipc_log_string(*(arg1 + 0x568),"%s: exit: mdwc->inputs:%lx\n","dwc3_ext_event_notify",*(arg1 + 0x318));
        queue_delayed_work_on(0x20,*(arg1 + 0x288),arg1 + 0x290,0);
    }
    else {
        _dev_err(*arg1,"%s: Event not allowed\n","dwc3_ext_event_notify");
    }
    return;
}


// ===== sym.usb_phy_set_suspend @ 0x08009734 (size 112) =====

void sym.usb_phy_set_suspend(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && (pcVar1 = *(arg1 + 0x138), pcVar1 != NULL)) {
        __cfi_slowpath_diag(0x9eb30a7a6c5b472a,pcVar1,0x8001330);
        (*pcVar1)(arg1,arg2 & 0xffffffff);
    }
    return;
}


// ===== sym.dwc3_msm_probe @ 0x080097a4 (size 3984) =====

uint64_t sym.dwc3_msm_probe(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int *piVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    int64_t *arg1_00;
    uint64_t uVar8;
    ulong uVar9;
    int64_t *piVar10;
    uint64_t uVar11;
    char *pcVar12;
    int64_t iVar13;
    uint64_t *extraout_x8;
    uint64_t *puVar14;
    ulong *in_x18;
    int64_t *unaff_x19;
    int64_t iVar15;
    int64_t iVar16;
    code *unaff_x26;
    code *pcVar17;
    code *pcVar18;
    ulong uVar19;
    ulong unaff_x30;
    int iStack_dc;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    code *pcStack_b8;
    code *pcStack_b0;
    ulong uStack_a8;
    int64_t *piStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    iVar1 = arg1 + 0x10;
    iVar15 = *(arg1 + 0x300);
    iStack_dc = 0;
    _printk(0x800377e,"dwc3_msm_probe");
    arg1_00 = devm_kmalloc(iVar1,0xa98,0xdc0);
    iVar16 = iVar15;
    if (arg1_00 == NULL) goto code_r0x0800a0c4;
    *(arg1 + 0xa8) = arg1_00;
    *arg1_00 = iVar1;
    arg1_00[0x27] = arg1_00 + 0x27;
    arg1_00[0x28] = arg1_00 + 0x27;
    arg1_00[0x43] = 0xfffffffe0;
    arg1_00[0x44] = arg1_00 + 0x44;
    arg1_00[0x45] = arg1_00 + 0x44;
    arg1_00[0x46] = sym.dwc3_resume_work.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
    arg1_00[0x49] = 0xfffffffe0;
    arg1_00[0x4a] = arg1_00 + 0x4a;
    pcVar17 = arg1_00 + 0x52;
    arg1_00[0x4b] = arg1_00 + 0x4a;
    arg1_00[0x4c] = sym.dwc3_restart_usb_work.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
    arg1_00[0x52] = 0xfffffffe0;
    arg1_00[0x53] = arg1_00 + 0x53;
    arg1_00[0x54] = arg1_00 + 0x53;
    arg1_00[0x55] = sym.dwc3_otg_sm_work.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
    init_timer_key(arg1_00 + 0x58,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    arg1_00[0x83] = 0xfffffffe0;
    arg1_00[0x84] = arg1_00 + 0x84;
    arg1_00[0x85] = arg1_00 + 0x84;
    arg1_00[0x86] = sym.msm_dwc3_perf_vote_work.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
    init_timer_key(arg1_00 + 0x89,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    uStack_c0 = 0;
    pcStack_b8 = NULL;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_d8 = 0;
    iVar13 = (*arg1_00)[0xe];
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    if (iVar13 == 0) {
        iVar13 = **arg1_00;
    }
    snprintf(&uStack_d8,0x28,0x8001ac4,iVar13);
    iVar13 = 0;
    do {
        if (*(&uStack_d8 + iVar13) == '.') {
            *(&uStack_d8 + iVar13) = 0x5f;
        }
        else if (*(&uStack_d8 + iVar13) == '\0') {
            iVar13 = ipc_log_context_create(0xc,&uStack_d8,0x10000);
            arg1_00[0xad] = iVar13;
            if (iVar13 == 0) {
                _dev_err(*arg1_00,"Error getting ipc_log_ctxt\n");
            }
            snprintf(&uStack_90,0x28,"%s_ep_events",&uStack_d8);
            iVar13 = ipc_log_context_create(0x18,&uStack_90,0x10000);
            arg1_00[0xae] = iVar13;
            if (iVar13 == 0) {
                _dev_err(*arg1_00,"Error getting ipc_log_ctxt for ep_events\n");
            }
            snprintf(&uStack_90,0x28,"%s_trace",&uStack_d8);
            _segment.ehdr = ipc_log_context_create(0x24,&uStack_90,0x10000);
            if (_segment.ehdr == 0) {
                _dev_err(*arg1_00,"Error getting trace_ipc_log_ctxt for ep_events\n");
            }
            iVar13 = alloc_workqueue("dwc3_wq",0xa0002,1);
            arg1_00[0x50] = iVar13;
            unaff_x19 = arg1_00;
            unaff_x26 = pcVar17;
            if (iVar13 == 0) {
                _printk(0x800395c,"dwc3_msm_probe");
                goto code_r0x0800a0c4;
            }
            iVar13 = alloc_workqueue("k_sm_usb",0xa0006,1);
            arg1_00[0x51] = iVar13;
            if (iVar13 == 0) {
                destroy_workqueue(arg1_00[0x50]);
                goto code_r0x0800a0c4;
            }
            uVar8 = usb_get_redriver_by_phandle(iVar15,"ssusb_redriver",0);
            arg1_00[0x39] = uVar8;
            if (uVar8 < 0xfffffffffffff001) {
                uVar8 = devm_regulator_get(*arg1_00,"USB3_GDSC");
                arg1_00[0x36] = uVar8;
                if (uVar8 < 0xfffffffffffff001) {
code_r0x08009a7c:
                    uVar8 = devm_clk_get(*arg1_00,"iface_clk");
                    arg1_00[0x2d] = uVar8;
                    if (uVar8 < 0xfffffffffffff001) {
                        uVar8 = devm_clk_get(*arg1_00,"core_clk");
                        arg1_00[0x29] = uVar8;
                        if (uVar8 < 0xfffffffffffff001) {
                            uVar8 = __devm_reset_control_get(*arg1_00,"core_reset",0,0,0,1);
                            arg1_00[0x35] = uVar8;
                            if (uVar8 < 0xfffffffffffff001) {
                                piVar10 = arg1_00 + 0x2a;
                                iVar6 = of_property_read_variable_u32_array
                                                  (*(*arg1_00 + 0x2f0),"qcom,core-clk-rate",piVar10,1,0);
                                if (iVar6 < 0) {
                                    _dev_err(*arg1_00,"USB core-clk-rate is not present\n");
                                    uVar8 = 0xffffffea;
                                    goto code_r0x0800a040;
                                }
                                iVar13 = clk_round_rate(arg1_00[0x29],arg1_00[0x2a]);
                                arg1_00[0x2a] = iVar13;
                                iVar6 = of_property_read_variable_u32_array
                                                  (*(*arg1_00 + 0x2f0),"qcom,core-clk-rate-hs",arg1_00 + 0x2b,1,0);
                                if (iVar6 < 0) {
                                    arg1_00[0x2b] = *piVar10;
                                }
                                piVar2 = arg1_00 + 0x2c;
                                iVar6 = of_property_read_variable_u32_array
                                                  (*(*arg1_00 + 0x2f0),"qcom,core-clk-rate-disconnected",piVar2,1,0)
                                ;
                                if (iVar6 < 0) {
                                    iVar13 = *piVar10;
                                    *piVar2 = iVar13;
                                }
                                else {
                                    iVar13 = *piVar2;
                                }
                                iVar6 = clk_set_rate(arg1_00[0x29],iVar13);
                                if (iVar6 != 0) {
                                    _dev_err(*arg1_00,"fail to set core_clk freq:%d\n",iVar6);
                                }
                                uVar8 = devm_clk_get(*arg1_00,"sleep_clk");
                                arg1_00[0x2e] = uVar8;
                                if (uVar8 < 0xfffffffffffff001) {
                                    clk_set_rate(uVar8,32000);
                                    *(arg1_00 + 0x30) = 19200000;
                                    uVar8 = devm_clk_get(*arg1_00,"utmi_clk");
                                    arg1_00[0x2f] = uVar8;
                                    if (uVar8 < 0xfffffffffffff001) {
                                        clk_set_rate(uVar8,arg1_00[0x30]);
                                        uVar11 = devm_clk_get(*arg1_00,"bus_aggr_clk");
                                        uVar8 = 0;
                                        if (uVar11 < 0xfffffffffffff001) {
                                            uVar8 = uVar11;
                                        }
                                        arg1_00[0x32] = uVar8;
                                        uVar11 = devm_clk_get(*arg1_00,"noc_aggr_clk");
                                        uVar8 = 0;
                                        if (uVar11 < 0xfffffffffffff001) {
                                            uVar8 = uVar11;
                                        }
                                        arg1_00[0x33] = uVar8;
                                        iVar6 = of_property_match_string
                                                          (*(*arg1_00 + 0x2f0),"clock-names","cfg_ahb_clk");
                                        if (iVar6 < 0) goto code_r0x08009d7c;
                                        uVar8 = devm_clk_get(*arg1_00,"cfg_ahb_clk");
                                        arg1_00[0x34] = uVar8;
                                        if (uVar8 < 0xfffffffffffff001) goto code_r0x08009d7c;
                                        arg1_00[0x34] = 0;
                                        if (uVar8 == -0x205) goto code_r0x08009c6c;
                                        _dev_err(*arg1_00,"failed to get cfg_ahb_clk ret %d\n",uVar8 & 0xffffffff);
                                    }
                                    else {
                                        _dev_err(*arg1_00,"failed to get utmi_clk\n");
                                        uVar8 = *(arg1_00 + 0x2f);
                                    }
                                }
                                else {
                                    _dev_err(*arg1_00,"failed to get sleep_clk\n");
                                    uVar8 = *(arg1_00 + 0x2e);
                                }
                            }
                            else {
                                _dev_err(*arg1_00,"failed to get core_reset\n");
                                uVar8 = *(arg1_00 + 0x35);
                            }
                        }
                        else {
                            _dev_err(*arg1_00,"failed to get core_clk\n");
                            uVar8 = *(arg1_00 + 0x29);
                        }
                    }
                    else {
                        _dev_err(*arg1_00,"failed to get iface_clk\n");
                        uVar8 = *(arg1_00 + 0x2d);
                    }
                    if (uVar8 == 0) {
code_r0x08009d7c:
                        puVar14 = arg1_00 + 99;
                        *(arg1_00 + 0x6b) = 1;
                        pcVar18 = pcVar17;
                        goto code_r0x0800a6f0;
                    }
                }
                else {
                    if (uVar8 != 0xfffffffffffffdfb) {
                        arg1_00[0x36] = 0;
                        goto code_r0x08009a7c;
                    }
code_r0x08009c6c:
                    uVar8 = 0xfffffdfb;
                }
code_r0x0800a040:
                _dev_err(iVar1,"error getting clock or gdsc.\n");
            }
            else {
                uVar8 = uVar8 & 0xffffffff;
                arg1_00[0x39] = 0;
            }
            break;
        }
        iVar13 = iVar13 + 1;
        if (iVar13 == 0x28) {
    //WARNING: Does not return
            pcVar17 = SoftwareBreakpoint(0x5512,0x800a5dc);
            (*pcVar17)();
        }
    } while( true );
code_r0x08009a2c:
    destroy_workqueue(arg1_00[0x51]);
    destroy_workqueue(arg1_00[0x50]);
    usb_put_redriver(arg1_00[0x39]);
    iVar16 = iVar15;
    unaff_x26 = pcVar17;
code_r0x0800a0c8:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_68) {
        return uVar8 & 0xffffffff;
    }
    __stack_chk_fail();
    puVar14 = extraout_x8;
    pcVar18 = unaff_x26;
code_r0x0800a6f0:
    Hint_Prefetch(puVar14,2,0,1);
    do {
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(puVar14,0x10);
        if (bVar5) {
            *puVar14 = *puVar14 | 1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    iVar6 = of_property_read_variable_u32_array(iVar16,"qcom,lpm-to-suspend-delay-ms",arg1_00 + 0x77,1,0);
    if (iVar6 < 0) {
        *(arg1_00 + 0x77) = 0;
    }
    iVar13 = 0;
    iVar15 = 0x1e4;
    unaff_x26 = sym.msm_dwc3_pwr_irq_thread.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
    pcVar17 = sym.msm_dwc3_pwr_irq_thread.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
    do {
        uVar19 = *(obj.usb_irq_info + iVar13);
        uVar9 = platform_get_irq_byname(arg1,uVar19);
        *(arg1_00 + iVar15) = uVar9;
        if (uVar9 < 0) {
            if (iVar13 == 0x18) {
                _dev_err(iVar1,"get_irq for %s failed\n\n",uVar19);
                uVar8 = 0xffffffea;
                goto code_r0x08009a2c;
            }
            *(arg1_00 + iVar15) = 0;
        }
        else {
            irq_modify_status(uVar9,0,0x1000);
            uVar7 = devm_request_threaded_irq
                              (iVar1,*(arg1_00 + iVar15),sym.msm_dwc3_pwr_irq.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt
                               ,sym.msm_dwc3_pwr_irq_thread.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt,
                               *(iVar13 + 0x8003e98),uVar19,arg1_00);
            if (uVar7 != 0) {
                uVar8 = uVar7;
                _dev_err(iVar1,"irq req %s failed: %d\n\n",uVar19,uVar8);
                goto code_r0x08009a2c;
            }
        }
        iVar13 = iVar13 + 0x18;
        iVar15 = iVar15 + 8;
    } while (iVar13 != 0x78);
    piVar10 = platform_get_resource_byname(arg1,0x200,"core_base");
    if (piVar10 == NULL) {
        pcVar12 = "missing memory base resource\n";
code_r0x0800a250:
        _dev_err(iVar1,pcVar12);
        uVar8 = 0xffffffed;
        pcVar17 = unaff_x26;
        goto code_r0x08009a2c;
    }
    arg1_00[4] = *piVar10;
    iVar13 = devm_ioremap(iVar1,*piVar10,(piVar10[1] - *piVar10) + 1);
    arg1_00[1] = iVar13;
    if (iVar13 == 0) {
        pcVar12 = "ioremap failed\n";
        goto code_r0x0800a250;
    }
    piVar10 = platform_get_resource_byname(arg1,0x200,"tcsr_dyn_en_dis");
    if (piVar10 != NULL) {
        iVar13 = devm_ioremap(iVar1,*piVar10,(piVar10[1] - *piVar10) + 1);
        arg1_00[2] = iVar13;
        if (iVar13 == 0) {
            pcVar12 = "ioremap for tcsr_dyn_en_dis failed\n";
            goto code_r0x0800a250;
        }
    }
    piVar10 = platform_get_resource_byname(arg1,0x200,"ahb2phy_base");
    if (piVar10 != NULL) {
        uVar8 = devm_ioremap(iVar1,*piVar10,(piVar10[1] - *piVar10) + 1);
        arg1_00[3] = uVar8;
        if ((uVar8 == 0) || (0xfffffffffffff000 < uVar8)) {
            _dev_err(iVar1,"couldn\'t find ahb2phy_base addr.\n");
            arg1_00[3] = 0;
        }
        else {
            if ((arg1_00[0x36] != 0) && (arg1_00[0x36] < 0xfffffffffffff001)) {
                iVar6 = regulator_enable();
                if (iVar6 == 0) {
                    qcom_clk_set_flags(arg1_00[0x29],2);
                }
                else {
                    _dev_err(*arg1_00,"unable to enable usb3 gdsc\n");
                }
            }
            iVar15 = arg1_00[0x34];
            iVar6 = clk_prepare(iVar15);
            if ((iVar6 == 0) && (iVar6 = clk_enable(iVar15), iVar6 != 0)) {
                clk_unprepare(iVar15);
            }
            iVar6 = sym.readl_relaxed(arg1_00[3] + 0x10);
            if (iVar6 != 0x11) {
                sym.writel_relaxed(0x11,arg1_00[3] + 0x10);
                DataSynchronizationBarrier(3,3,0);
            }
            iVar15 = arg1_00[0x34];
            clk_disable(iVar15);
            clk_unprepare(iVar15);
            if ((arg1_00[0x36] != 0) && (arg1_00[0x36] < 0xfffffffffffff001)) {
                qcom_clk_set_flags(arg1_00[0x29],3);
                iVar6 = regulator_disable(arg1_00[0x36]);
                if (iVar6 != 0) {
                    _dev_err(*arg1_00,"unable to disable usb3 gdsc\n");
                }
            }
        }
    }
    piVar10 = platform_get_resource_byname(arg1,0x200,"ebc_desc");
    if (piVar10 != NULL) {
        arg1_00[0x14f] = *piVar10;
    }
    uStack_d8 = 0;
    iVar6 = of_property_read_string(*(*arg1_00 + 0x2f0),"qcom,dbm-version",&uStack_d8);
    iVar15 = iVar16;
    if ((iVar6 == 0) && (iVar6 = strcmp(uStack_d8,0x8001ffb), iVar6 == 0)) {
        *(arg1_00 + 0x3b) = 4;
        arg1_00[0x3a] = obj.dbm_1_4_regtable;
        *(arg1_00 + 0x1dc) = 1;
    }
    else {
        *(arg1_00 + 0x3b) = 8;
        arg1_00[0x3a] = obj.dbm_1_5_regtable;
        if ((*(arg1_00 + 0x1dc) == '\0') && (*(arg1_00 + 0x1ec) == 0)) goto code_r0x0800a028;
    }
    of_property_read_variable_u32_array(iVar16,"qcom,num-gsi-evt-buffs",arg1_00 + 0x7a,1,0);
    if (arg1_00[0x7a] == 0) {
code_r0x0800a15c:
        iVar13 = of_find_property(iVar16,"qcom,use-pdc-interrupts",0);
        *(arg1_00 + 0x355) = iVar13 != 0;
        iVar13 = of_find_property(iVar16,"qcom,use-eusb2-phy",0);
        *(arg1_00 + 0xa81) = iVar13 != 0;
        iVar13 = of_find_property(iVar16,"qcom,disable-host-ssphy-powerdown",0);
        *(arg1_00 + 0x369) = iVar13 != 0;
        iVar6 = sym.dma_set_mask_and_coherent(iVar1,-1);
        if (iVar6 != 0) {
            _dev_err(iVar1,"setting DMA mask to 64 failed.\n");
            iVar6 = sym.dma_set_mask_and_coherent(iVar1,0xffffffff);
            if (iVar6 != 0) {
                _dev_err(iVar1,"setting DMA mask to 32 failed.\n");
                uVar8 = 0xffffffa1;
                goto code_r0x08009a2c;
            }
        }
        iVar13 = of_find_property(iVar16,"qcom,dis-sending-cm-l1-quirk",0);
        *(arg1_00 + 0x150) = iVar13 != 0;
        piVar10 = of_get_next_available_child(iVar16,0);
        if (piVar10 == NULL) {
            pcVar12 = "failed to find dwc3 child\n";
            goto code_r0x0800a250;
        }
        sym.dwc3_msm_parse_core_params(arg1_00,piVar10);
        uVar9 = of_parse_phandle(piVar10,"usb-phy",0);
        uVar8 = devm_usb_get_phy_by_node(*arg1_00,uVar9,0);
        arg1_00[0x37] = uVar8;
        arg1 = piVar10;
        if (0xfffffffffffff000 < uVar8) {
            _dev_err(*arg1_00,"unable to get hsphy device\n");
            uVar8 = *(arg1_00 + 0x37);
            goto code_r0x08009a2c;
        }
        uVar9 = of_parse_phandle(piVar10,"usb-phy",1);
        uVar8 = devm_usb_get_phy_by_node(*arg1_00,uVar9,0);
        arg1_00[0x38] = uVar8;
        if (0xfffffffffffff000 < uVar8) {
            _dev_err(*arg1_00,"unable to get ssphy device\n");
            uVar8 = *(arg1_00 + 0x38);
            goto code_r0x08009a2c;
        }
        *(arg1_00 + 0x65) = 1;
        of_property_read_variable_u32_array(iVar16,"qcom,default-bus-vote",arg1_00 + 0x65,1,0);
        if (3 < *(arg1_00 + 0x65)) {
            *(arg1_00 + 0x65) = 3;
        }
        uVar11 = of_icc_get(iVar1,"usb-ddr");
        uVar8 = 0;
        if (uVar11 < 0xfffffffffffff001) {
            uVar8 = uVar11;
        }
        arg1_00[0x66] = uVar8;
        uVar11 = of_icc_get(iVar1,"usb-ipa");
        uVar8 = 0;
        if (uVar11 < 0xfffffffffffff001) {
            uVar8 = uVar11;
        }
        arg1_00[0x67] = uVar8;
        uVar11 = of_icc_get(iVar1,"ddr-usb");
        uVar8 = 0;
        if (uVar11 < 0xfffffffffffff001) {
            uVar8 = uVar11;
        }
        arg1_00[0x6e] = 5;
        arg1_00[0x68] = uVar8;
        *(arg1_00 + 0x76) = 1;
        *(arg1_00 + 0x3b4) = 1;
        pm_runtime_set_autosuspend_delay(*arg1_00,1000);
        __pm_runtime_use_autosuspend(*arg1_00,1);
        device_init_wakeup(*arg1_00,1);
        iVar13 = of_find_property(iVar16,"qcom,disable-dev-mode-pm",0);
        if (iVar13 != 0) {
            piVar3 = *arg1_00 + 0x1f8;
            Hint_Prefetch(piVar3,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar3,0x10);
                if (bVar5) {
                    *piVar3 = *piVar3 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
        arg1 = arg1_00 + 0x7c;
        iVar6 = of_property_read_variable_u32_array(iVar16,"qcom,pm-qos-latency",arg1,1,0);
        if (iVar6 < 0) {
            *arg1 = 0;
        }
        __mutex_init(arg1_00 + 0x94,"&mdwc->suspend_resume_mutex",obj.dwc3_msm_probe.__key);
        __mutex_init(arg1_00 + 0x9a,"&mdwc->role_switch_mutex",obj.dwc3_msm_probe.__key);
        iVar13 = of_find_property(iVar16,"qcom,force-gen1",0);
        *(arg1_00 + 0xa82) = iVar13 != 0;
        _printk(0x8001a87);
        iVar13 = of_find_property(iVar16,"usb-role-switch",0);
        if (iVar13 != 0) {
            uStack_d0 = 0;
            uStack_c8 = 0;
            uStack_98 = 0;
            uStack_c0 = 0;
            pcStack_b8 = sym.dwc3_msm_usb_role_switch_set_role.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
            pcStack_b0 = sym.dwc3_msm_usb_role_switch_get_role.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
            uStack_a8 = 1;
            piStack_a0 = arg1_00;
            uStack_d8 = dev_fwnode(iVar1);
            uVar11 = usb_role_switch_register(*arg1_00,&uStack_d8);
            arg1_00[0xa9] = uVar11;
            if (uVar11 < 0xfffffffffffff001) goto code_r0x0800a594;
            uVar8 = uVar11 & 0xffffffff;
code_r0x0800a574:
            usb_role_switch_unregister(uVar11);
            icc_put(arg1_00[0x66]);
            icc_put(arg1_00[0x67]);
            icc_put(arg1_00[0x68]);
            goto code_r0x08009a2c;
        }
code_r0x0800a594:
        _printk(0x80031c9,"dwc3_msm_probe");
        iVar13 = of_find_property(iVar16,"extcon",0);
        if (iVar13 != 0) {
            uVar7 = sym.dwc3_msm_extcon_register(arg1_00);
            if (uVar7 != 0) {
                uVar8 = uVar7;
                uVar11 = arg1_00[0xa9];
                goto code_r0x0800a574;
            }
            uVar11 = devm_regulator_get_optional(iVar1,"dpdm");
            uVar8 = 0;
            if (uVar11 < 0xfffffffffffff001) {
                uVar8 = uVar11;
            }
            arg1_00[0xa6] = uVar8;
            if (((*(arg1_00 + 0x352) == '\0') && (uVar8 != 0)) && (iVar6 = regulator_is_enabled(), iVar6 != 0)) {
                arg1_00[0xa3] = sym.dwc_dpdm_cb.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
                regulator_register_notifier(arg1_00[0xa6],arg1_00 + 0xa3);
            }
            else if (arg1_00[0xa9] == 0) {
                queue_delayed_work_on(0x20,arg1_00[0x51],pcVar18,0);
            }
        }
        if ((arg1_00[0xa9] == 0) && (arg1_00[0x70] == 0)) {
            if (*(arg1_00 + 0x324) == 1) {
code_r0x0800a680:
                *(arg1_00 + 0x6b) = 0;
            }
            else {
                if (*(arg1_00 + 0x324) == 3) {
                    iVar15 = of_find_property(iVar16,"qcom,default-mode-host",0);
                    if (iVar15 != 0) goto code_r0x0800a680;
                    iVar15 = of_find_property(iVar16,"qcom,default-mode-none",0);
                    if (iVar15 != 0) goto code_r0x0800a6d8;
                }
                *(arg1_00 + 0x352) = 1;
            }
code_r0x0800a6d8:
            sym.dwc3_ext_event_notify(arg1_00);
        }
        else {
            _printk(0x8001565,"dwc3_msm_probe");
            iVar15 = of_find_property(iVar16,"qcom,msm-probe-core-init",0);
            if (iVar15 != 0) goto code_r0x0800a6d8;
        }
        uVar8 = 0;
    }
    else {
        of_get_property(iVar16,"qcom,gsi-reg-offset",&iStack_dc);
        if (iStack_dc == 0) {
            pcVar12 = "err provide qcom,gsi-reg-offset\n";
code_r0x0800a2f4:
            _dev_err(iVar1,pcVar12);
            uVar8 = 0xffffffea;
        }
        else {
            iVar13 = devm_kmalloc(iVar1,iStack_dc,0xdc0);
            arg1_00[0xa1] = iVar13;
            unaff_x19 = arg1_00;
            if (iVar13 != 0) {
                *(arg1_00 + 0xa2) = iStack_dc >> 2;
                if (iStack_dc >> 2 == 6) {
                    of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,gsi-reg-offset",iVar13,6,0);
                    goto code_r0x0800a15c;
                }
                pcVar12 = "invalid reg offset count\n";
                goto code_r0x0800a2f4;
            }
code_r0x0800a0c4:
            uVar8 = 0xfffffff4;
            arg1_00 = unaff_x19;
        }
    }
    goto code_r0x0800a0c8;
code_r0x0800a028:
    _dev_err(iVar1,"need pwr_event_irq exiting L1\n");
    uVar8 = 0xffffffea;
    pcVar17 = unaff_x26;
    goto code_r0x08009a2c;
}


// ===== sym.dwc3_msm_remove @ 0x0800a734 (size 1000) =====

ulong sym.dwc3_msm_remove(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    ulong noname_0;
    int64_t iVar3;
    ulong noname_0_00;
    ulong *puVar4;
    ulong *in_x18;
    ulong uVar5;
    int64_t iVar6;
    ulong *puVar7;
    int64_t iVar8;
    uint32_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar7 = *(arg1 + 0xa8);
    iVar8 = *(puVar7[5] + 0xa8);
    usb_role_switch_unregister(puVar7[0xa9]);
    if (puVar7[0xa3] != 0) {
        regulator_unregister_notifier(puVar7[0xa6],puVar7 + 0xa3);
        puVar7[0xa3] = 0;
    }
    uVar1 = __pm_runtime_resume(*puVar7,4);
    sym.dwc3_dbg_print(noname_0,0xff,0x800180f,uVar1);
    if (uVar1 < 0) {
        _dev_err(*puVar7,"pm_runtime_get_sync failed with %d\n",uVar1);
        uVar5 = puVar7[0x33];
        iVar2 = clk_prepare(uVar5);
        if ((iVar2 == 0) && (iVar2 = clk_enable(uVar5), iVar2 != 0)) {
            clk_unprepare(uVar5);
        }
        uVar5 = puVar7[0x2f];
        iVar2 = clk_prepare(uVar5);
        if ((iVar2 == 0) && (iVar2 = clk_enable(uVar5), iVar2 != 0)) {
            clk_unprepare(uVar5);
        }
        uVar5 = puVar7[0x29];
        iVar2 = clk_prepare(uVar5);
        if ((iVar2 == 0) && (iVar2 = clk_enable(uVar5), iVar2 != 0)) {
            clk_unprepare(uVar5);
        }
        uVar5 = puVar7[0x2d];
        iVar2 = clk_prepare(uVar5);
        if ((iVar2 == 0) && (iVar2 = clk_enable(uVar5), iVar2 != 0)) {
            clk_unprepare(uVar5);
        }
        uVar5 = puVar7[0x2e];
        iVar2 = clk_prepare(uVar5);
        if ((iVar2 == 0) && (iVar2 = clk_enable(uVar5), iVar2 != 0)) {
            clk_unprepare(uVar5);
        }
        uVar5 = puVar7[0x32];
        iVar2 = clk_prepare(uVar5);
        if ((iVar2 == 0) && (iVar2 = clk_enable(uVar5), iVar2 != 0)) {
            clk_unprepare(uVar5);
        }
    }
    irq_to_desc(*(puVar7 + 0x20c));
    cancel_delayed_work_sync(puVar7 + 0x83);
    if ((*(puVar7 + 0x6a) != '\0') && (*(puVar7 + 0x7c) != 0)) {
        cpu_latency_qos_update_request(puVar7 + 0x7d,0xffffffff);
        *(puVar7 + 0x6a) = 0;
    }
    cancel_delayed_work_sync(puVar7 + 0x52);
    iVar3 = puVar7[0x37];
    if (iVar3 != 0) {
        *(iVar3 + 0x10) = *(iVar3 + 0x10) & 0xfffffffe;
    }
    iVar6 = *(*(*(iVar8 + 400) + 0x60) + 0x98);
    iVar3 = *(iVar6 + 0x3d8);
    if (iVar3 != 0) {
        uVar1 = *(iVar6 + 0x3d0);
        if (uVar1 != 0) {
            uVar9 = 1;
            while( true ) {
                puVar4 = *(iVar3 + (uVar9 - 1) * 8);
                if (puVar4 != NULL) {
                    dma_free_attrs(*(iVar8 + 0x198),*(puVar4 + 2),*puVar4,puVar4[4],0);
                    uVar1 = *(iVar6 + 0x3d0);
                }
                if (uVar1 <= uVar9) break;
                iVar3 = *(iVar6 + 0x3d8);
                uVar9 = uVar9 + 1;
            }
        }
        if (*(iVar6 + 0x540) != 0) {
            dma_unmap_page_attrs(*(iVar8 + 0x198),*(iVar6 + 0x540),8,2,0);
            *(iVar6 + 0x540) = 0;
        }
    }
    platform_device_put(puVar7[5]);
    of_platform_depopulate(arg1 + 0x10);
    usb_put_redriver(puVar7[0x39]);
    sym.dwc3_dbg_print(noname_0_00,0xff,0x80030b0,0);
    __pm_runtime_disable(*puVar7,1);
    pm_runtime_barrier(*puVar7);
    __pm_runtime_idle(*puVar7,4);
    __pm_runtime_set_status(*puVar7,2);
    device_wakeup_disable(*puVar7);
    icc_put(puVar7[0x66]);
    icc_put(puVar7[0x67]);
    icc_put(puVar7[0x68]);
    if (*(puVar7 + 0x1e4) != 0) {
        disable_irq();
    }
    if (*(puVar7 + 500) != 0) {
        disable_irq();
    }
    if (*(puVar7 + 0x1fc) != 0) {
        disable_irq();
    }
    if (*(puVar7 + 0x204) != 0) {
        disable_irq();
    }
    disable_irq(*(puVar7 + 0x1ec));
    uVar5 = puVar7[0x2f];
    clk_disable(uVar5);
    clk_unprepare(uVar5);
    clk_set_rate(puVar7[0x29],19200000);
    uVar5 = puVar7[0x29];
    clk_disable(uVar5);
    clk_unprepare(uVar5);
    uVar5 = puVar7[0x2d];
    clk_disable(uVar5);
    clk_unprepare(uVar5);
    uVar5 = puVar7[0x2e];
    clk_disable(uVar5);
    clk_unprepare(uVar5);
    if ((puVar7[0x36] != 0) && (puVar7[0x36] < 0xfffffffffffff001)) {
        qcom_clk_set_flags(puVar7[0x29],3);
        iVar2 = regulator_disable(puVar7[0x36]);
        if (iVar2 != 0) {
            _dev_err(*puVar7,"unable to disable usb3 gdsc\n");
        }
    }
    destroy_workqueue(puVar7[0x51]);
    destroy_workqueue(puVar7[0x50]);
    ipc_log_context_destroy(puVar7[0xad]);
    puVar7[0xad] = 0;
    ipc_log_context_destroy(puVar7[0xae]);
    puVar7[0xae] = 0;
    kfree(puVar7[0x79]);
    kfree(puVar7[0x78]);
    return 0;
}


// ===== sym.dwc3_resume_work @ 0x0800ab1c (size 764) =====

void sym.dwc3_resume_work(int64_t arg1)

{
    uint32_t uVar1;
    bool bVar2;
    int iVar3;
    ulong uVar4;
    ulong uVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint *puVar8;
    uint32_t *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    uint uVar11;
    int64_t *piVar12;
    int64_t iVar13;
    ulong unaff_x30;
    int aiStack_40 [2];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    iVar10 = arg1 + -0x218;
    aiStack_40[0] = 0;
    ipc_log_string(*(arg1 + 0x350),"%s: resume_work: ext_idx:%d\n","dwc3_resume_work",*(arg1 + 0x170));
    if (*(arg1 + 0x168) == 0) {
code_r0x0800ab8c:
        bVar2 = false;
        iVar13 = 0;
        uVar11 = 0;
code_r0x0800ab98:
        if (*(arg1 + 0x340) == '\0') {
            if (*(arg1 + -0x1f0) == 0) {
                puVar8 = arg1 + 0x2e8;
            }
            else {
                puVar8 = *(*(arg1 + -0x1f0) + 0xa8) + 0x450;
            }
            *puVar8 = *(arg1 + 0x2ec);
        }
        if (((bVar2) && (iVar3 = extcon_get_state(iVar13,uVar11), iVar3 != 0)) &&
           (iVar3 = extcon_get_property(iVar13,uVar11,2,&stack0xffffffffffffffc0), iVar3 == 0 && aiStack_40[0] == 0)
           ) {
            uVar1 = *(arg1 + 0x2ec);
            if (*(arg1 + -0x1f0) == 0) {
                puVar7 = arg1 + 0x2e8;
            }
            else {
                puVar7 = *(*(arg1 + -0x1f0) + 0xa8) + 0x450;
            }
            if (2 < uVar1) {
                uVar1 = 3;
            }
            *puVar7 = uVar1;
        }
        if (*(arg1 + -0x1f0) == 0) {
            puVar7 = arg1 + 0x2e8;
        }
        else {
            puVar7 = *(*(arg1 + -0x1f0) + 0xa8) + 0x450;
        }
        if (4 < *puVar7) {
            sym.dwc3_set_ssphy_orientation_flag(iVar10);
        }
    }
    else {
        if ((*(arg1 + 0x13a) == '\0') || (*(arg1 + 0x60) != '\0')) {
            if (*(arg1 + 0x140) != 0) goto code_r0x0800ab8c;
            uVar11 = 2;
        }
        else {
            uVar11 = 1;
        }
        iVar13 = *(*(arg1 + 0x168) + *(arg1 + 0x170) * 0x48);
        if (iVar13 == 0) {
            bVar2 = false;
            goto code_r0x0800ab98;
        }
        uVar4 = extcon_get_edev_name(iVar13);
        ipc_log_string(*(arg1 + 0x350),"%s: edev:%s\n","dwc3_resume_work",uVar4);
        uVar5 = strlen(uVar4);
        iVar6 = strnstr(uVar4,0x80031ec,uVar5);
        bVar2 = true;
        if (iVar6 == 0) goto code_r0x0800ab98;
    }
    if (*(arg1 + -0x1f0) == 0) {
        puVar8 = arg1 + 0x2e8;
    }
    else {
        puVar8 = *(*(arg1 + -0x1f0) + 0xa8) + 0x450;
    }
    puVar7 = arg1 + 0x2e8;
    ipc_log_string(*(arg1 + 0x350),"%s: max_speed:%d hw_supp_speed:%d override_speed:%d","dwc3_resume_work",*puVar8,
                   *(arg1 + 0x2ec),*(arg1 + 0x2e8));
    uVar1 = *(arg1 + 0x2e8);
    if (uVar1 != 0) {
        puVar9 = puVar7;
        if (*(arg1 + -0x1f0) != 0) {
            iVar13 = *(*(arg1 + -0x1f0) + 0xa8);
            if (*(iVar13 + 0x450) < uVar1) goto code_r0x0800ad48;
            puVar9 = iVar13 + 0x450;
        }
        if (*(arg1 + 0x2ec) <= uVar1) {
            uVar1 = *(arg1 + 0x2ec);
        }
        *puVar9 = uVar1;
    }
code_r0x0800ad48:
    iVar13 = 0;
    if (*(arg1 + -0x1f0) != 0) {
        iVar13 = *(*(arg1 + -0x1f0) + 0xa8);
        puVar7 = iVar13 + 0x450;
    }
    sym.dwc3_dbg_print(iVar13,0xff,0x8002346,*puVar7);
    if (bVar2 || *(arg1 + 0x108) != 0) {
        if (*(arg1 + -0x3b) != '\0') goto code_r0x0800ad9c;
    }
    else {
        if (*(arg1 + -0x3b) == '\0') goto code_r0x0800ade0;
code_r0x0800ad9c:
        sym.dwc3_msm_resume(iVar10);
        *(arg1 + -0x3b) = 0;
    }
    if (*(arg1 + -0x38) == 0) {
        sym.dwc3_ext_event_notify(iVar10);
    }
    else {
        sym.dwc3_dbg_print(*(arg1 + -0x38),0xff,0x8001fe5,0);
    }
code_r0x0800ade0:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18 = 0x800ae14;
    if ((*(iVar10 + 0x168) == 0) && (piVar12 = iVar10 + -0x248, *(iVar10 + 0xdc) == 3)) {
        *(iVar10 + 0x30) = 1;
        if (*(iVar10 + 0x10a) == '\0') {
            *(iVar10 + 0x318) = 0;
            *(iVar10 + 0x30) = 0;
        }
        else {
            sym.dwc3_dbg_print(1,0xff,0x80020bf,0);
            sym.dwc3_resume_work(iVar10 + -0x30);
            iVar3 = -0x31;
            do {
                if ((*(*piVar12 + 0x20c) == 2) && ((*(*piVar12 + 0x200) & 7) == 0)) goto code_r0x0800af00;
                msleep(0x14);
                bVar2 = iVar3 != -1;
                iVar3 = iVar3 + 1;
            } while (bVar2);
            sym.dwc3_dbg_print(*piVar12 + 0x1f8,0xff,0x80033fc,*(*piVar12 + 0x1f8));
            __pm_runtime_suspend(*piVar12,0);
code_r0x0800af00:
            *(iVar10 + 0x30) = 0;
            if (*(iVar10 + 0x10a) != '\0') {
                sym.dwc3_resume_work(iVar10 + -0x30);
            }
            *(iVar10 + 0x318) = 0;
            flush_delayed_work(iVar10 + 0x48);
        }
    }
    return;
}


// ===== sym.dwc3_restart_usb_work @ 0x0800ae18 (size 288) =====

void sym.dwc3_restart_usb_work(int64_t arg1)

{
    bool bVar1;
    ulong *in_x18;
    int64_t *piVar2;
    int iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x168) == 0) && (piVar2 = arg1 + -0x248, *(arg1 + 0xdc) == 3)) {
        *(arg1 + 0x30) = 1;
        if (*(arg1 + 0x10a) == '\0') {
            *(arg1 + 0x318) = 0;
            *(arg1 + 0x30) = 0;
        }
        else {
            sym.dwc3_dbg_print(1,0xff,0x80020bf,0);
            sym.dwc3_resume_work(arg1 + -0x30);
            iVar3 = -0x31;
            do {
                if ((*(*piVar2 + 0x20c) == 2) && ((*(*piVar2 + 0x200) & 7) == 0)) goto code_r0x0800af00;
                msleep(0x14);
                bVar1 = iVar3 != -1;
                iVar3 = iVar3 + 1;
            } while (bVar1);
            sym.dwc3_dbg_print(*piVar2 + 0x1f8,0xff,0x80033fc,*(*piVar2 + 0x1f8));
            __pm_runtime_suspend(*piVar2,0);
code_r0x0800af00:
            *(arg1 + 0x30) = 0;
            if (*(arg1 + 0x10a) != '\0') {
                sym.dwc3_resume_work(arg1 + -0x30);
            }
            *(arg1 + 0x318) = 0;
            flush_delayed_work(arg1 + 0x48);
        }
    }
    return;
}


// ===== sym.dwc3_otg_sm_work @ 0x0800af40 (size 2476) =====

void sym.dwc3_otg_sm_work(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    int64_t iVar7;
    ulong *puVar8;
    ulong uVar9;
    int64_t iVar10;
    uint uVar11;
    ulong noname_0;
    ulong noname_0_00;
    uint32_t *puVar12;
    ulong noname_0_01;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong extraout_x8_01;
    ulong extraout_x8_02;
    uint64_t uVar13;
    ulong *in_x18;
    int64_t *piVar14;
    char *pcVar15;
    int64_t iVar16;
    code *pcVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar14 = arg1 + -0x290;
    if ((*(arg1 + -0x268) == 0) || (iVar16 = *(*(arg1 + -0x268) + 0xa8), iVar16 == 0)) {
        if (*(arg1 + 0x90) != 0) {
            _dev_err(*piVar14,"dwc is NULL.\n");
            return;
        }
        iVar16 = 0;
        uVar6 = 0;
code_r0x0800afb0:
        pcVar15 = *(obj.state_names + uVar6 * 8);
    }
    else {
        uVar6 = *(arg1 + 0x90);
        if (uVar6 < 5) goto code_r0x0800afb0;
        pcVar15 = "UNKNOWN";
    }
    _dev_err(*piVar14,"%s state, mdwc->inputs is %d\n",pcVar15,*(arg1 + 0x88));
    sym.dwc3_dbg_print(noname_0,0xff,pcVar15,0);
    if (4 < *(arg1 + 0x90)) {
        _dev_err(*piVar14,"%s: invalid otg-state\n","dwc3_otg_sm_work");
        return;
    }
    //switch table (4 cases) at 0x8003bb4
    switch(*(*(arg1 + 0x90) * 4 + 0x8003bb4) + 0x800b004) {
    case 0x800b018:
        if (*(arg1 + 0x288) != 0) {
            regulator_unregister_notifier(*(arg1 + 0x2a0),arg1 + 0x288);
            *(arg1 + 0x288) = 0;
        }
        pm_runtime_enable(*piVar14);
        iVar16 = *piVar14;
        iVar5 = __pm_runtime_resume(iVar16,4);
        if (iVar5 < 0) {
            puVar1 = iVar16 + 0x1f8;
            uVar13 = *puVar1;
            do {
                uVar6 = uVar13;
                if (uVar6 == 0) break;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar2 = *puVar1;
                    uVar13 = uVar2;
                    if (uVar2 != uVar6) goto code_r0x0800b6bc;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = uVar6 - 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                DataMemoryBarrier(2,3);
code_r0x0800b6bc:
            } while (uVar6 != uVar2);
            goto code_r0x0800b7e0;
        }
        if (*(arg1 + -0x268) != 0) goto code_r0x0800b4ac;
        iVar16 = *(arg1 + -0xd8);
        uVar9 = *(*piVar14 + 0x2f0);
        if ((iVar16 == 0) || (pcVar17 = *(iVar16 + 0x118), pcVar17 == NULL)) {
code_r0x0800b230:
            puVar12 = arg1 + 0x270;
code_r0x0800b234:
            if (((4 < *puVar12) && (iVar16 = *(arg1 + -0xd0), iVar16 != 0)) &&
               (pcVar17 = *(iVar16 + 0x118), pcVar17 != NULL)) {
                __cfi_slowpath_diag(0xfa1a46938cbab6cf,pcVar17,0x8001350);
                uVar6 = (*pcVar17)(iVar16);
                if (uVar6 != 0) {
                    uVar13 = uVar6;
                    iVar16 = *piVar14;
                    pcVar15 = "failed to init SS PHY\n";
                    goto code_r0x0800b82c;
                }
            }
            iVar16 = of_get_next_available_child(uVar9,0);
            if (iVar16 == 0) {
                _dev_err(*piVar14,"failed to find dwc3 child\n");
                uVar13 = 0xffffffed;
                uVar9 = extraout_x8;
            }
            else {
                uVar6 = of_platform_populate(uVar9,0,0);
                if (uVar6 != 0) {
                    uVar13 = uVar6;
                    iVar16 = *piVar14;
                    pcVar15 = "failed to add create dwc3 core\n";
                    goto code_r0x0800b82c;
                }
                iVar16 = of_find_device_by_node(iVar16);
                *(arg1 + -0x268) = iVar16;
                if (iVar16 == 0) {
                    _dev_err(*piVar14,"failed to get dwc3 platform device\n");
                }
                else {
                    iVar16 = *(iVar16 + 0xa8);
                    if (iVar16 != 0) {
                        uVar2 = *(arg1 + 0x270);
                        uVar6 = *(iVar16 + 0x450);
                        if ((uVar2 != 0) && (uVar2 <= uVar6)) {
                            uVar6 = uVar2;
                            if (*(arg1 + 0x274) <= uVar2) {
                                uVar6 = *(arg1 + 0x274);
                            }
                            *(iVar16 + 0x450) = uVar6;
                        }
                        if ((4 < uVar6) && (*(arg1 + -0x8c) == 0)) {
                            *(arg1 + 0xd0) = *(arg1 + 0xd0) | 1;
                        }
                        if ((*(arg1 + 0xc5) == '\0') && (*(arg1 + -0xac) == 0)) {
                            *(arg1 + 0xd0) = *(arg1 + 0xd0) | 2;
                        }
                        iVar7 = of_find_property(uVar9,"qcom,host-poweroff-in-pm-suspend",0);
                        if (iVar7 != 0) {
                            *(arg1 + 0xd8) = 1;
                            _dev_info(*piVar14,"%s: Core power collapse on host PM suspend\n","dwc3_msm_core_init");
                        }
                        dev_fwnode(*(iVar16 + 400));
                        uVar13 = usb_role_switch_find_by_fwnode();
                        *(arg1 + 0x2c0) = uVar13;
                        if (uVar13 < 0xfffffffffffff001) {
                            puVar8 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xb20,0xc0);
                            *(arg1 + 0x130) = puVar8;
                            if (puVar8 != NULL) {
                                iVar7 = *(iVar16 + 400);
                                if ((*(iVar7 + 0x88) == 0) || (iVar10 = *(*(iVar7 + 0x88) + 0x78), iVar10 == 0)) {
                                    _dev_err(iVar7,"can\'t override PM OPs\n");
                                }
                                else {
                                    memcpy(puVar8,iVar10,0xc0);
                                    *puVar8 = sym.dwc3_core_prepare.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
                                    puVar8[1] = sym.dwc3_core_complete.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
                                    *(*(iVar7 + 0x88) + 0x78) = puVar8;
                                }
                                iVar7 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xb20,0xc0);
                                *(arg1 + 0x138) = iVar7;
                                if (iVar7 != 0) {
                                    if ((*(arg1 + 0x7f2) != '\0') && (*(arg1 + 0x118) == 0x3331)) {
                                        iVar7 = *(arg1 + -0x288) + 0xd024;
                                        uVar6 = sym.readl(iVar7);
                                        sym.writel(uVar6 | 0x400,iVar7);
                                        sym.readl(iVar7);
                                    }
                                    sym.dwc3_msm_notify_event(iVar16,10,0);
                                    pm_runtime_set_autosuspend_delay(*(iVar16 + 400),0);
                                    pm_runtime_allow(*(iVar16 + 400));
                                    goto code_r0x0800b4ac;
                                }
                                kfree(*(arg1 + 0x130));
                            }
                            of_platform_depopulate(*piVar14);
                        }
                        else {
                            _dev_err(*piVar14,"failed to find dwc3 drd role switch\n");
                            uVar6 = *(arg1 + 0x2c0);
                            uVar13 = uVar6;
                            of_platform_depopulate(*piVar14);
                            uVar9 = extraout_x8_01;
                            if (uVar6 != 0) goto code_r0x0800b830;
                        }
code_r0x0800b4ac:
                        *(arg1 + 0x90) = 1;
                        if (((*(arg1 + 0x88) & 1) != 0) && ((*(arg1 + 0x88) >> 1 & 1) == 0)) {
                            sym.dwc3_dbg_print(*(arg1 + 0x88),0xff,0x800300c,0);
                            __pm_runtime_idle(*piVar14,4);
                            sym.dwc3_dbg_print(*piVar14 + 0x1f8,0xff,0x8002749,*(*piVar14 + 0x1f8));
                            return;
                        }
                        puVar1 = *piVar14 + 0x1f8;
                        uVar13 = *puVar1;
                        do {
                            uVar6 = uVar13;
                            if (uVar6 == 0) break;
                            Hint_Prefetch(puVar1,2,0,1);
                            do {
                                uVar2 = *puVar1;
                                uVar13 = uVar2;
                                if (uVar2 != uVar6) goto code_r0x0800b54c;
                                cVar3 = '\x01';
                                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                                if (bVar4) {
                                    *puVar1 = uVar6 - 1;
                                    cVar3 = ExclusiveMonitorsStatus();
                                }
                            } while (cVar3 != '\0');
                            DataMemoryBarrier(2,3);
code_r0x0800b54c:
                        } while (uVar6 != uVar2);
                        sym.dwc3_dbg_print(puVar1,0xff,0x800190d,0);
                        goto code_r0x0800b58c;
                    }
                    _dev_err(*piVar14,"Failed to get dwc3 device\n");
                    *(arg1 + -0x268) = 0;
                }
                of_platform_depopulate(*piVar14);
                uVar13 = 0xffffffed;
                uVar9 = extraout_x8_00;
            }
        }
        else {
            __cfi_slowpath_diag(0xfa1a46938cbab6cf,pcVar17,0x8001350);
            uVar6 = (*pcVar17)(iVar16);
            if (uVar6 == 0) {
                if (*(arg1 + -0x268) == 0) goto code_r0x0800b230;
                puVar12 = *(*(arg1 + -0x268) + 0xa8) + 0x450;
                goto code_r0x0800b234;
            }
            uVar13 = uVar6;
            iVar16 = *piVar14;
            pcVar15 = "failed to init HS PHY\n";
code_r0x0800b82c:
            _dev_err(iVar16,pcVar15);
            uVar9 = extraout_x8_02;
        }
code_r0x0800b830:
        sym.dwc3_dbg_print(uVar9,0xff,0x8001e76,uVar13);
        __pm_runtime_suspend(*piVar14,4);
        __pm_runtime_disable(*piVar14,1);
        goto code_r0x0800b1d8;
    case 0x800b0b0:
        if ((*(arg1 + 0x88) & 1) == 0) {
            if (*(iVar16 + 0x3e4) != 1) {
                return;
            }
            sym.dwc3_dbg_print(1,0xff,0x80039af,0);
            iVar5 = __pm_runtime_resume(*(iVar16 + 0x1a0) + 0x10,0);
            if (iVar5 < 1) {
                return;
            }
            uVar6 = hrtimer_active(*(iVar16 + 0x1a0) + 0x168);
            sym.dwc3_dbg_print(noname_0_00,0xff,0x800342a,uVar6 & 1);
            __pm_runtime_idle(*(iVar16 + 0x1a0) + 0x10,1);
            return;
        }
        sym.dwc3_otg_start_host(piVar14);
        uVar11 = 1;
        break;
    case 0x800b144:
        if (((*(arg1 + 0x88) >> 1 & 1) != 0) && ((*(arg1 + 0x88) & 1) != 0)) {
            if ((*(arg1 + 0x88) >> 2 & 1) == 0) {
                return;
            }
            if ((*(arg1 + 0x88) >> 1 & 1) == 0) {
                return;
            }
            iVar16 = *piVar14;
            *(arg1 + 0x90) = 3;
            uVar9 = ktime_get_mono_fast_ns();
            *(iVar16 + 0x218) = uVar9;
            __pm_runtime_suspend(*piVar14,0xd);
            pcVar15 = "SUSP put";
            piVar14 = *piVar14 + 0x1f8;
            iVar16 = *piVar14;
code_r0x0800b46c:
            sym.dwc3_dbg_print(piVar14,0xff,pcVar15,iVar16);
            return;
        }
        *(arg1 + 0x90) = 1;
        sym.dwc3_otg_start_peripheral(piVar14,0);
        __pm_runtime_suspend(*piVar14,4);
        sym.dwc3_dbg_print(*piVar14 + 0x1f8,0xff,0x8001411,*(*piVar14 + 0x1f8));
        goto code_r0x0800b1d8;
    case 0x800b1a4:
        if ((*(arg1 + 0x88) >> 1 & 1) == 0) {
            *(arg1 + 0x90) = 1;
            sym.dwc3_otg_start_peripheral(piVar14,0);
            return;
        }
        if ((*(arg1 + 0x88) >> 2 & 1) != 0) {
            return;
        }
        iVar16 = *piVar14;
        *(arg1 + 0x90) = 2;
        iVar5 = __pm_runtime_resume(iVar16,4);
        if (-1 < iVar5) {
            pcVar15 = "!SUSP gsync";
            piVar14 = *piVar14 + 0x1f8;
            iVar16 = *piVar14;
            goto code_r0x0800b46c;
        }
        puVar1 = iVar16 + 0x1f8;
        uVar13 = *puVar1;
        do {
            uVar6 = uVar13;
            if (uVar6 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar13 = uVar2;
                if (uVar2 != uVar6) goto code_r0x0800b7c4;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar6 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800b7c4:
        } while (uVar6 != uVar2);
        goto code_r0x0800b7e0;
    case 0x800b58c:
code_r0x0800b58c:
        if ((*(arg1 + 0x88) >> 3 & 1) != 0) {
            _dev_err(*piVar14,"still not in lpm, wait.\n");
            sym.dwc3_dbg_print(noname_0_01,0xff,0x800357f,0);
            return;
        }
        if ((*(arg1 + 0x88) & 1) == 0) {
            _dev_err(*piVar14,"!id\n");
            *(arg1 + 0x90) = 4;
            iVar5 = sym.dwc3_otg_start_host(piVar14);
            if (iVar5 == 0) {
                return;
            }
            _dev_err(*piVar14,"unable to start host\n");
            *(arg1 + 0x90) = 1;
            return;
        }
        if ((*(arg1 + 0x88) >> 1 & 1) == 0) {
            return;
        }
        _dev_err(*piVar14,"b_sess_vld\n");
        iVar5 = sym.pm_runtime_resume_and_get(*piVar14);
        if (iVar5 < 0) {
code_r0x0800b7e0:
            _dev_err(*piVar14,"%s: pm_runtime_resume_and_get failed\n","dwc3_otg_sm_work");
            __pm_runtime_set_status(*piVar14,2);
            return;
        }
        sym.dwc3_dbg_print(*piVar14 + 0x1f8,0xff,0x80039a3,*(*piVar14 + 0x1f8));
        sym.dwc3_otg_start_peripheral(piVar14,1);
        uVar11 = 2;
    }
    *(arg1 + 0x90) = uVar11;
code_r0x0800b1d8:
    queue_delayed_work_on(0x20,*(arg1 + -8),arg1,0);
    return;
}


// ===== sym.msm_dwc3_perf_vote_work @ 0x0800b8ec (size 152) =====

void sym.msm_dwc3_perf_vote_work(int64_t arg1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = irq_to_desc(*(arg1 + -0x20c));
    iVar1 = *(iVar5 + 0x90);
    iVar3 = *(arg1 + -0x38);
    iVar2 = *(arg1 + -0x208);
    *(arg1 + -0x208) = iVar1;
    uVar4 = iVar1 - iVar2;
    if (*(arg1 + -200) != 399 < uVar4 && iVar3 != 0) {
        if (uVar4 < 400) {
            iVar3 = -1;
        }
        cpu_latency_qos_update_request(arg1 + -0x30,iVar3);
        *(arg1 + -200) = 399 < uVar4;
    }
    queue_delayed_work_on(0x20,___stack_chk_fail,arg1,500);
    return;
}


// ===== sym.msm_dwc3_pwr_irq @ 0x0800b984 (size 72) =====

ulong sym.msm_dwc3_pwr_irq(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x3b0) == 0) {
        sym.dwc3_pwr_event_handler(arg1);
        uVar1 = 1;
    }
    else {
        uVar1 = 2;
        *(arg1 + 0x1dd) = 1;
    }
    return uVar1;
}


// ===== sym.msm_dwc3_pwr_irq_thread @ 0x0800b9d0 (size 116) =====

ulong sym.msm_dwc3_pwr_irq_thread(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x3b0) == 0) {
        sym.dwc3_pwr_event_handler(arg1);
    }
    else {
        sym.dwc3_resume_work(arg1 + 0x218);
    }
    sym.dwc3_dbg_print(arg1 + 0x3b0,0xff,0x8001cb5,*(arg1 + 0x3b0));
    return 1;
}


// ===== sym.dwc3_msm_config_gdsc @ 0x0800ba4c (size 104) =====

void sym.dwc3_msm_config_gdsc(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x1b0) != 0) && (*(arg1 + 0x1b0) < 0xfffffffffffff001)) {
        qcom_clk_set_flags(*(arg1 + 0x148),3);
        iVar1 = regulator_disable(*(arg1 + 0x1b0));
        if (iVar1 != 0) {
            _dev_err(*arg1,"unable to disable usb3 gdsc\n");
        }
    }
    return;
}


// ===== sym.dma_set_mask_and_coherent @ 0x0800bab4 (size 84) =====

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


// ===== sym.dwc3_msm_parse_core_params @ 0x0800bb08 (size 264) =====

void sym.dwc3_msm_parse_core_params(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint uVar2;
    int64_t iVar3;
    uint32_t arg2_00;
    uint *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    uVar1 = of_property_read_string(arg2,"maximum-speed",&uStack_30);
    if (uVar1 == 0) {
        uVar1 = match_string(obj.speed_names,7,uStack_30);
    }
    *(arg1 + 0x504) = uVar1 & (uVar1 >> 0x1f ^ 0xffffffffU);
    _printk(0x8001471);
    if (*(arg1 + 0x28) == 0) {
        puVar4 = arg1 + 0x500;
    }
    else {
        puVar4 = *(*(arg1 + 0x28) + 0xa8) + 0x450;
    }
    *puVar4 = *(arg1 + 0x504);
    uVar1 = of_property_read_string(arg2,"dr_mode",&uStack_30);
    if (uVar1 == 0) {
        uVar1 = match_string(obj.usb_dr_modes,4,uStack_30);
    }
    *(arg1 + 0x324) = uVar1 & (uVar1 >> 0x1f ^ 0xffffffffU);
    uVar2 = of_irq_get(arg2,0);
    *(arg1 + 0x20c) = uVar2;
    disable_irq();
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.dwc3_msm_usb_role_switch_set_role;
    iVar3 = usb_role_switch_get_drvdata();
    sym.dwc3_msm_set_role(iVar3,arg2_00);
    return;
}


// ===== sym.dwc3_msm_usb_role_switch_set_role @ 0x0800bc10 (size 56) =====

void sym.dwc3_msm_usb_role_switch_set_role(ulong noname_0,int64_t arg1)

{
    int64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = usb_role_switch_get_drvdata();
    sym.dwc3_msm_set_role(arg1_00,arg1);
    return;
}


// ===== sym.dwc3_msm_usb_role_switch_get_role @ 0x0800bc48 (size 116) =====

uchar sym.dwc3_msm_usb_role_switch_get_role(void)

{
    uchar uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = usb_role_switch_get_drvdata();
    if (*(iVar2 + 0x352) == '\0') {
        uVar1 = *(iVar2 + 0x358) == 0;
    }
    else {
        uVar1 = 2;
    }
    uVar4 = *(iVar2 + 0x568);
    uVar3 = usb_role_string(uVar1);
    ipc_log_string(uVar4,"%s: get_role:%s\n","dwc3_msm_usb_role_switch_get_role",uVar3);
    return uVar1;
}


// ===== sym.dwc3_msm_extcon_register @ 0x0800bcbc (size 604) =====

uint64_t sym.dwc3_msm_extcon_register(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    int64_t iVar7;
    uint64_t arg3;
    ulong uVar8;
    char *pcVar9;
    ulong *in_x18;
    int iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = of_count_phandle_with_args(*(*arg1 + 0x2f0),"extcon",0);
    if (uVar4 < 0) {
        uVar8 = *arg1;
        pcVar9 = "of_count_phandle_with_args failed\n";
    }
    else {
        iVar7 = devm_kmalloc(*arg1,(uVar4 + uVar4 * 8) * 8,0xdc0);
        *(arg1 + 0x380) = iVar7;
        if (iVar7 == 0) {
            arg3 = 0xfffffff4;
            goto code_r0x0800bef0;
        }
        if (uVar4 != 0) {
            iVar10 = 0;
            iVar7 = 0;
            bVar3 = false;
            do {
                arg3 = extcon_get_edev_by_phandle(*arg1,iVar10);
                if (arg3 < 0xfffffffffffff001) {
                    if (arg3 != 0) {
                        *(*(arg1 + 0x380) + iVar7 + 8) = arg1;
                        *(*(arg1 + 0x380) + iVar7) = arg3;
                        *(*(arg1 + 0x380) + iVar7 + 0x10) = iVar10;
                        *(*(arg1 + 0x380) + iVar7 + 0x18) =
                             sym.dwc3_msm_vbus_notifier.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
                        iVar5 = extcon_register_notifier(arg3,1,*(arg1 + 0x380) + iVar7 + 0x18);
                        *(*(arg1 + 0x380) + iVar7 + 0x30) =
                             sym.dwc3_msm_id_notifier.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
                        iVar6 = extcon_register_notifier(arg3,2,*(arg1 + 0x380) + iVar7 + 0x30);
                        if ((iVar5 < 0) || (iVar5 = extcon_get_state(arg3,1), iVar5 == 0)) {
                            if ((-1 < iVar6) && (iVar5 = extcon_get_state(arg3,2), iVar5 != 0)) {
                                iVar1 = *(arg1 + 0x380) + iVar7;
                                iVar11 = *(iVar1 + 8);
                                if ((iVar11 != 0) &&
                                   (sym.dwc3_dbg_print(*(arg1 + 0x380),0xff,0x80038d6,*(iVar1 + 0x10)),
                                   *(iVar11 + 0x358) != 0)) {
                                    uVar2 = *(iVar1 + 0x10);
                                    *(iVar11 + 0x388) = uVar2;
                                    *(iVar11 + 0x358) = 0;
                                    sym.dwc3_dbg_print(uVar2,0xff,0x8002f8b,0);
                                    queue_work_on(0x20,*(iVar11 + 0x280),iVar11 + 0x218);
                                }
                            }
                            bVar3 = true;
                        }
                        else {
                            bVar3 = true;
                            sym.dwc3_msm_vbus_notifier(*(arg1 + 0x380) + iVar7 + 0x18,1,arg3);
                        }
                    }
                }
                else if (arg3 != 0xffffffffffffffed) goto code_r0x0800bef0;
                iVar7 = iVar7 + 0x48;
                iVar10 = iVar10 + 1;
            } while (uVar4 * 0x48 - iVar7 != 0);
            if (bVar3) {
                arg3 = 0;
                goto code_r0x0800bef0;
            }
        }
        uVar8 = *arg1;
        pcVar9 = "no extcon device found\n";
    }
    _dev_err(uVar8,pcVar9);
    arg3 = 0xffffffed;
code_r0x0800bef0:
    return arg3 & 0xffffffff;
}


// ===== sym.dwc_dpdm_cb @ 0x0800bf18 (size 76) =====

ulong sym.dwc_dpdm_cb(int64_t arg1,uint32_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 == 0x80) && (*(arg1 + -0x1f8) == 0)) {
        queue_delayed_work_on(0x20,*(arg1 + -0x290),arg1 + -0x288,0);
    }
    return 1;
}


// ===== sym.dwc3_set_ssphy_orientation_flag @ 0x0800bf64 (size 368) =====

uint64_t sym.dwc3_set_ssphy_orientation_flag(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    uint64_t uVar6;
    ulong *arg1_00;
    uint64_t uVar7;
    int64_t iVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar11;
    code *pcVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uchar extraout_q0 [16];
    int aiStack_40 [2];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    aiStack_40[0] = 0;
    *(*(arg1 + 0x1c0) + 0x10) = *(*(arg1 + 0x1c0) + 0x10) & 0xfffffff3;
    uVar4 = *(arg1 + 0x55c);
    if (uVar4 == 0) {
        if ((*(arg1 + 0x1c8) == 0) || (*(*(arg1 + 0x1c8) + 0x59) == '\0')) {
            if (*(arg1 + 0x380) != 0) {
                if ((*(arg1 + 0x352) == '\0') || (*(arg1 + 0x278) != '\0')) {
                    if (*(arg1 + 0x358) != 0) goto code_r0x0800bfbc;
                    uVar11 = 2;
                }
                else {
                    uVar11 = 1;
                }
                iVar8 = *(*(arg1 + 0x380) + *(arg1 + 0x388) * 0x48);
                if (((iVar8 != 0) && (iVar5 = extcon_get_state(iVar8,uVar11), iVar5 != 0)) &&
                   (iVar5 = extcon_get_property(iVar8,uVar11,1,aiStack_40), iVar5 == 0)) {
                    iVar8 = *(arg1 + 0x1c0);
                    uVar4 = *(iVar8 + 0x10);
                    uVar10 = 4;
                    if (aiStack_40[0] != 0) {
                        uVar10 = 8;
                    }
                    goto code_r0x0800bfb4;
                }
            }
        }
        else {
            iVar5 = usb_redriver_get_orientation();
            iVar8 = *(arg1 + 0x1c0);
            if (iVar5 == 0) {
                *(iVar8 + 0x10) = *(iVar8 + 0x10) | 4;
            }
            else {
                *(iVar8 + 0x10) = *(iVar8 + 0x10) | 8;
            }
        }
    }
    else {
        iVar8 = *(arg1 + 0x1c0);
        uVar10 = *(iVar8 + 0x10);
code_r0x0800bfb4:
        *(iVar8 + 0x10) = uVar10 | uVar4;
    }
code_r0x0800bfbc:
    uVar6 = sym.dwc3_dbg_print(*(arg1 + 0x1c0),0xff,0x8003986,*(*(arg1 + 0x1c0) + 0x10));
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return uVar6;
    }
    arg1_00 = __stack_chk_fail();
    *extraout_x18 = sym.dwc3_msm_resume;
    if ((*(arg1_00 + 0x352) == '\0') && (*(arg1_00 + 0x6b) != 0)) {
        puVar1 = arg1_00 + 99;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | 8;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    mutex_lock(arg1_00 + 0x94);
    if (arg1_00[0x76] == 0) {
code_r0x0800c584:
        uVar6 = 0;
    }
    else {
        pm_stay_awake(*arg1_00);
        if ((*(arg1_00 + 0x69) == '\0') || (*(arg1_00 + 0x34c) != 3)) {
            uVar6 = *(arg1_00 + 0x65);
        }
        else {
            uVar6 = 2;
        }
        auVar13 = sym.dwc3_msm_update_bus_bw(arg1_00,uVar6);
        if ((*(arg1_00 + 0x6e) >> 2 & 1) == 0) {
code_r0x0800c1b4:
            uVar4 = sym.dwc3_clk_enable_disable(arg1_00,auVar13,arg1_00[0x6e] >> 2 & 1);
            uVar7 = arg1_00[0x6e];
            if (-1 < uVar4) {
                if ((uVar7 >> 3 & 1) != 0) {
                    disable_irq_nosync(*(arg1_00 + 0x1ec));
                    sym.dwc3_msm_set_pwr_events(arg1_00,0);
                    uVar7 = arg1_00[0x6e] & 0xfffffffffffffff7;
                    arg1_00[0x6e] = uVar7;
                }
                if (arg1_00[5] == 0) {
                    puVar9 = arg1_00 + 0xa0;
                }
                else {
                    puVar9 = *(arg1_00[5] + 0xa8) + 0x450;
                }
                if ((4 < *puVar9) && ((uVar7 & 1) != 0)) {
                    sym.dwc3_set_ssphy_orientation_flag(arg1_00);
                    if ((*(arg1_00 + 0x69) == '\0') || ((*(arg1_00 + 0x369) != '\0' || (*(arg1_00 + 0x34c) != 3)))) {
                        sym.usb_phy_set_suspend(arg1_00[0x38],0);
                    }
                    *(arg1_00[0x38] + 0x10) = *(arg1_00[0x38] + 0x10) & 0xfffffffd;
                    arg1_00[0x6e] = arg1_00[0x6e] & 0xfffffffffffffffe;
                    if (*(arg1_00 + 0x69) != '\0') {
                        uVar4 = sym.readl(arg1_00[1] + 0xc2c0);
                        sym.writel(uVar4 & 0xffbfffff,arg1_00[1] + 0xc2c0);
                    }
                }
                *(arg1_00[0x37] + 0x10) = *(arg1_00[0x37] + 0x10) & 0xffffffcf;
                iVar8 = arg1_00[0x37];
                if ((iVar8 != 0) && (pcVar12 = *(iVar8 + 0x138), pcVar12 != NULL)) {
                    __cfi_slowpath_diag(0x9eb30a7a6c5b472a,pcVar12,0x8001330);
                    (*pcVar12)(iVar8,0);
                }
                if ((*(arg1_00 + 0x6e) >> 2 & 1) != 0) {
                    uVar4 = sym.dwc3_msm_power_collapse_por(arg1_00);
                    if (uVar4 < 0) {
                        uVar6 = uVar4;
                        auVar13 = _dev_err(*arg1_00,"%s: Controller was not turned on properly\n","dwc3_msm_resume");
                        sym.dwc3_clk_enable_disable(arg1_00,auVar13,arg1_00[0x6e] >> 2 & 1);
                        sym.dwc3_msm_config_gdsc(arg1_00);
                        goto code_r0x0800c200;
                    }
                    arg1_00[0x6e] = arg1_00[0x6e] & 0xfffffffffffffffb;
                }
                *(arg1_00 + 0x76) = 0;
                *(arg1_00 + 0x3b4) = 0;
                enable_irq(*(arg1_00 + 0x1ec));
                iVar8 = arg1_00[1];
                uVar4 = sym.readl(iVar8 + 0xc200);
                sym.writel(uVar4 & 0xffffffbf,iVar8 + 0xc200);
                if ((*(arg1_00 + 0x6e) >> 1 & 1) != 0) {
                    if ((*(arg1_00 + 0x355) == '\0') && (*(arg1_00 + 0x1e4) != 0)) {
                        sym.configure_nonpdc_usb_interrupt(arg1_00,arg1_00 + 0x1e4,0);
                        sym.configure_nonpdc_usb_interrupt(arg1_00,arg1_00 + 0x204,0);
                    }
                    else {
                        sym.configure_usb_wakeup_interrupts(arg1_00);
                    }
                    arg1_00[0x6e] = arg1_00[0x6e] & 0xfffffffffffffffd;
                }
                _dev_info(*arg1_00,"DWC3 exited from low power mode\n");
                if (*(arg1_00 + 0x20c) != 0) {
                    enable_irq();
                }
                sym.dwc3_pwr_event_handler(arg1_00);
                uVar6 = cpu_latency_qos_request_active(arg1_00 + 0x7d);
                if ((uVar6 & 1) != 0) {
                    queue_delayed_work_on(0x20,___stack_chk_fail,arg1_00 + 0x83,500);
                }
                if (arg1_00[5] == 0) {
                    iVar5 = *(arg1_00 + 0xa0);
                }
                else {
                    iVar5 = *(*(arg1_00[5] + 0xa8) + 0x450);
                }
                if ((iVar5 == 3) || (iVar5 == 2)) {
                    iVar8 = arg1_00[1];
                    uVar4 = sym.readl(iVar8 + 0xf8808);
                    sym.writel(uVar4 | 0x100,iVar8 + 0xf8808);
                    __const_udelay(0x53e3);
                    uVar4 = sym.readl(arg1_00[1] + 0xf8808);
                    sym.writel(uVar4 | 9,arg1_00[1] + 0xf8808);
                    __const_udelay(0x53e3);
                    iVar8 = arg1_00[1];
                    uVar4 = sym.readl(iVar8 + 0xf8808);
                    sym.writel(uVar4 & 0xfffffeff,iVar8 + 0xf8808);
                }
                sym.dwc3_dbg_print(arg1_00 + 0x76,0xff,0x8002a2d,arg1_00[0x76]);
                goto code_r0x0800c584;
            }
            uVar6 = uVar4;
            if ((((uVar7 >> 2 & 1) != 0) && (arg1_00[0x36] != 0)) && (arg1_00[0x36] < 0xfffffffffffff001)) {
                qcom_clk_set_flags(arg1_00[0x29],3);
                iVar5 = regulator_disable(arg1_00[0x36]);
                if (iVar5 != 0) {
                    _dev_err(*arg1_00,"unable to disable usb3 gdsc\n");
                }
            }
        }
        else {
            uVar6 = 0xffffffff;
            if ((arg1_00[0x36] != 0) && (arg1_00[0x36] < 0xfffffffffffff001)) {
                uVar4 = regulator_enable();
                if (uVar4 == 0) {
                    qcom_clk_set_flags(arg1_00[0x29],2);
                }
                else {
                    uVar6 = uVar4;
                    _dev_err(*arg1_00,"unable to enable usb3 gdsc\n");
                    if (uVar4 < 0) goto code_r0x0800c200;
                }
                iVar5 = reset_control_assert(arg1_00[0x35]);
                if (iVar5 != 0) {
                    _dev_err(*arg1_00,"%s:core_reset assert failed\n","dwc3_msm_resume");
                }
                usleep_range_state(1000,0x4b0,2);
                iVar5 = reset_control_deassert(arg1_00[0x35]);
                auVar13 = extraout_q0;
                if (iVar5 != 0) {
                    auVar13 = _dev_err(*arg1_00,"%s:core_reset deassert failed\n","dwc3_msm_resume");
                }
                goto code_r0x0800c1b4;
            }
        }
code_r0x0800c200:
        sym.dwc3_msm_update_bus_bw(arg1_00,0);
        pm_relax(*arg1_00);
        puVar1 = arg1_00 + 99;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & 0xfffffffffffffff7;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    mutex_unlock(arg1_00 + 0x94);
    return uVar6;
}


// ===== sym.dwc3_msm_resume @ 0x0800c0d4 (size 1324) =====

int sym.dwc3_msm_resume(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    ulong *in_x18;
    int64_t iVar9;
    code *pcVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar extraout_q0 [16];
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x352) == '\0') && (*(arg1 + 0x358) != 0)) {
        puVar1 = arg1 + 0x318;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | 8;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    mutex_lock(arg1 + 0x4a0);
    if (*(arg1 + 0x3b0) == 0) {
code_r0x0800c584:
        iVar4 = 0;
    }
    else {
        pm_stay_awake(*arg1);
        if ((*(arg1 + 0x348) == '\0') || (*(arg1 + 0x34c) != 3)) {
            uVar7 = *(arg1 + 0x328);
        }
        else {
            uVar7 = 2;
        }
        auVar11 = sym.dwc3_msm_update_bus_bw(arg1,uVar7);
        if ((*(arg1 + 0x370) >> 2 & 1) == 0) {
code_r0x0800c1b4:
            iVar4 = sym.dwc3_clk_enable_disable(arg1,auVar11,*(arg1 + 0x370) >> 2 & 1);
            uVar7 = *(arg1 + 0x370);
            if (-1 < iVar4) {
                if ((uVar7 >> 3 & 1) != 0) {
                    disable_irq_nosync(*(arg1 + 0x1ec));
                    sym.dwc3_msm_set_pwr_events(arg1,0);
                    uVar7 = *(arg1 + 0x370) & 0xfffffffffffffff7;
                    *(arg1 + 0x370) = uVar7;
                }
                if (*(arg1 + 0x28) == 0) {
                    puVar8 = arg1 + 0x500;
                }
                else {
                    puVar8 = *(*(arg1 + 0x28) + 0xa8) + 0x450;
                }
                if ((4 < *puVar8) && ((uVar7 & 1) != 0)) {
                    sym.dwc3_set_ssphy_orientation_flag(arg1);
                    if ((*(arg1 + 0x348) == '\0') || ((*(arg1 + 0x369) != '\0' || (*(arg1 + 0x34c) != 3)))) {
                        sym.usb_phy_set_suspend(*(arg1 + 0x1c0),0);
                    }
                    *(*(arg1 + 0x1c0) + 0x10) = *(*(arg1 + 0x1c0) + 0x10) & 0xfffffffd;
                    *(arg1 + 0x370) = *(arg1 + 0x370) & 0xfffffffffffffffe;
                    if (*(arg1 + 0x348) != '\0') {
                        uVar6 = sym.readl(*(arg1 + 8) + 0xc2c0);
                        sym.writel(uVar6 & 0xffbfffff,*(arg1 + 8) + 0xc2c0);
                    }
                }
                *(*(arg1 + 0x1b8) + 0x10) = *(*(arg1 + 0x1b8) + 0x10) & 0xffffffcf;
                iVar9 = *(arg1 + 0x1b8);
                if ((iVar9 != 0) && (pcVar10 = *(iVar9 + 0x138), pcVar10 != NULL)) {
                    __cfi_slowpath_diag(0x9eb30a7a6c5b472a,pcVar10,0x8001330);
                    (*pcVar10)(iVar9,0);
                }
                if ((*(arg1 + 0x370) >> 2 & 1) != 0) {
                    iVar4 = sym.dwc3_msm_power_collapse_por(arg1);
                    if (iVar4 < 0) {
                        auVar11 = _dev_err(*arg1,"%s: Controller was not turned on properly\n","dwc3_msm_resume");
                        sym.dwc3_clk_enable_disable(arg1,auVar11,*(arg1 + 0x370) >> 2 & 1);
                        sym.dwc3_msm_config_gdsc(arg1);
                        goto code_r0x0800c200;
                    }
                    *(arg1 + 0x370) = *(arg1 + 0x370) & 0xfffffffffffffffb;
                }
                *(arg1 + 0x3b0) = 0;
                *(arg1 + 0x3b4) = 0;
                enable_irq(*(arg1 + 0x1ec));
                iVar9 = *(arg1 + 8) + 0xc200;
                uVar6 = sym.readl(iVar9);
                sym.writel(uVar6 & 0xffffffbf,iVar9);
                if ((*(arg1 + 0x370) >> 1 & 1) != 0) {
                    if ((*(arg1 + 0x355) == '\0') && (*(arg1 + 0x1e4) != 0)) {
                        sym.configure_nonpdc_usb_interrupt(arg1,arg1 + 0x1e4,0);
                        sym.configure_nonpdc_usb_interrupt(arg1,arg1 + 0x204,0);
                    }
                    else {
                        sym.configure_usb_wakeup_interrupts(arg1);
                    }
                    *(arg1 + 0x370) = *(arg1 + 0x370) & 0xfffffffffffffffd;
                }
                _dev_info(*arg1,"DWC3 exited from low power mode\n");
                if (*(arg1 + 0x20c) != 0) {
                    enable_irq();
                }
                sym.dwc3_pwr_event_handler(arg1);
                uVar7 = cpu_latency_qos_request_active(arg1 + 1000);
                if ((uVar7 & 1) != 0) {
                    queue_delayed_work_on(0x20,___stack_chk_fail,arg1 + 0x418,500);
                }
                if (*(arg1 + 0x28) == 0) {
                    iVar4 = *(arg1 + 0x500);
                }
                else {
                    iVar4 = *(*(*(arg1 + 0x28) + 0xa8) + 0x450);
                }
                if ((iVar4 == 3) || (iVar4 == 2)) {
                    iVar9 = *(arg1 + 8) + 0xf8808;
                    uVar6 = sym.readl(iVar9);
                    sym.writel(uVar6 | 0x100,iVar9);
                    __const_udelay(0x53e3);
                    uVar6 = sym.readl(*(arg1 + 8) + 0xf8808);
                    sym.writel(uVar6 | 9,*(arg1 + 8) + 0xf8808);
                    __const_udelay(0x53e3);
                    iVar9 = *(arg1 + 8) + 0xf8808;
                    uVar6 = sym.readl(iVar9);
                    sym.writel(uVar6 & 0xfffffeff,iVar9);
                }
                sym.dwc3_dbg_print(arg1 + 0x3b0,0xff,0x8002a2d,*(arg1 + 0x3b0));
                goto code_r0x0800c584;
            }
            if ((((uVar7 >> 2 & 1) != 0) && (*(arg1 + 0x1b0) != 0)) && (*(arg1 + 0x1b0) < 0xfffffffffffff001)) {
                qcom_clk_set_flags(*(arg1 + 0x148),3);
                iVar5 = regulator_disable(*(arg1 + 0x1b0));
                if (iVar5 != 0) {
                    _dev_err(*arg1,"unable to disable usb3 gdsc\n");
                }
            }
        }
        else {
            iVar4 = -1;
            if ((*(arg1 + 0x1b0) != 0) && (*(arg1 + 0x1b0) < 0xfffffffffffff001)) {
                iVar4 = regulator_enable();
                if (iVar4 == 0) {
                    qcom_clk_set_flags(*(arg1 + 0x148),2);
                }
                else {
                    _dev_err(*arg1,"unable to enable usb3 gdsc\n");
                    if (iVar4 < 0) goto code_r0x0800c200;
                }
                iVar4 = reset_control_assert(*(arg1 + 0x1a8));
                if (iVar4 != 0) {
                    _dev_err(*arg1,"%s:core_reset assert failed\n","dwc3_msm_resume");
                }
                usleep_range_state(1000,0x4b0,2);
                iVar4 = reset_control_deassert(*(arg1 + 0x1a8));
                auVar11 = extraout_q0;
                if (iVar4 != 0) {
                    auVar11 = _dev_err(*arg1,"%s:core_reset deassert failed\n","dwc3_msm_resume");
                }
                goto code_r0x0800c1b4;
            }
        }
code_r0x0800c200:
        sym.dwc3_msm_update_bus_bw(arg1,0);
        pm_relax(*arg1);
        puVar1 = arg1 + 0x318;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & 0xfffffffffffffff7;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    mutex_unlock(arg1 + 0x4a0);
    return iVar4;
}


// ===== sym.dwc3_msm_update_bus_bw @ 0x0800c600 (size 328) =====

void sym.dwc3_msm_update_bus_bw(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    ulong extraout_x8;
    ulong noname_0;
    ulong extraout_x8_00;
    ulong *in_x18;
    uint64_t arg3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg1 + 0x32c);
    uVar1 = arg2;
    if (uVar2 != 0) {
        uVar1 = uVar2;
    }
    sym.dwc3_dbg_print(uVar2,0xff,0x80013e9,arg2 & 0xffffffff);
    if (2 < uVar1) {
        uVar1 = 3;
    }
    arg3 = uVar1;
    iVar3 = icc_set_bw(*(arg1 + 0x330),*(obj.bus_vote_values + arg3 * 0x18),*(arg3 * 0x18 + 0x8003f0c));
    if (iVar3 != 0) {
        _dev_err(*arg1,"bus bw voting path:%s bv:%d failed %d\n","usb-ddr",arg3,iVar3);
    }
    iVar3 = icc_set_bw(*(arg1 + 0x338),*(arg3 * 0x18 + 0x8003f10),*(arg3 * 0x18 + 0x8003f14));
    if (iVar3 != 0) {
        _dev_err(*arg1,"bus bw voting path:%s bv:%d failed %d\n","usb-ipa",arg3,iVar3);
    }
    iVar3 = icc_set_bw(*(arg1 + 0x340),*(arg3 * 0x18 + 0x8003f18),*(arg3 * 0x18 + 0x8003f1c));
    noname_0 = extraout_x8;
    if (iVar3 != 0) {
        _dev_err(*arg1,"bus bw voting path:%s bv:%d failed %d\n","ddr-usb",arg3,iVar3);
        noname_0 = extraout_x8_00;
    }
    sym.dwc3_dbg_print(noname_0,0xff,0x8003572,arg3);
    return;
}


// ===== sym.dwc3_clk_enable_disable @ 0x0800c748 (size 760) =====

int sym.dwc3_clk_enable_disable(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    uint64_t in_x1;
    ulong *puVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    
    *in_x18 = unaff_x30;
    if ((in_x1 & 1) == 0) {
        uVar3 = *(arg1 + 400);
        clk_disable(uVar3);
        clk_unprepare(uVar3);
        iVar1 = 0;
code_r0x0800c7d4:
        uVar3 = *(arg1 + 0x178);
        clk_disable(uVar3);
        clk_unprepare(uVar3);
code_r0x0800c7e8:
        clk_set_rate(*(arg1 + 0x148),19200000);
        uVar3 = *(arg1 + 0x148);
        clk_disable(uVar3);
        clk_unprepare(uVar3);
code_r0x0800c80c:
        uVar3 = *(arg1 + 0x198);
        clk_disable(uVar3);
        clk_unprepare(uVar3);
    }
    else {
        if ((arg2 & 1U) != 0) {
            uVar3 = *(arg1 + 0x170);
            iVar1 = clk_prepare(uVar3);
            noname_1 = extraout_q0;
            if (iVar1 == 0) {
                iVar1 = clk_enable(uVar3);
                noname_1 = extraout_q0_00;
                if (iVar1 == 0) goto code_r0x0800c7a0;
                noname_1 = clk_unprepare(uVar3);
            }
            if (iVar1 < 0) {
                _dev_err(*arg1,"%s: sleep_clk enable failed\n","dwc3_clk_enable_disable");
                return iVar1;
            }
        }
code_r0x0800c7a0:
        uVar3 = *(arg1 + 0x168);
        iVar1 = clk_prepare(noname_1,uVar3);
        if (iVar1 == 0) {
            iVar1 = clk_enable(uVar3);
            if (iVar1 != 0) {
                clk_unprepare(uVar3);
                goto joined_r0x0800c868;
            }
        }
        else {
joined_r0x0800c868:
            if (iVar1 < 0) {
                _dev_err(*arg1,"%s: iface_clk enable failed\n","dwc3_clk_enable_disable");
                goto joined_r0x0800c834;
            }
        }
        uVar3 = *(arg1 + 0x198);
        iVar1 = clk_prepare(uVar3);
        if (iVar1 == 0) {
            iVar1 = clk_enable(uVar3);
            if (iVar1 != 0) {
                clk_unprepare(uVar3);
                goto joined_r0x0800c8a0;
            }
code_r0x0800c8a4:
            uVar3 = *(arg1 + 0x160);
            if ((*(arg1 + 0x348) == '\0') || (*(arg1 + 0x34c) != 3)) {
                if ((*(arg1 + 0x370) >> 2 & 1) == 0) {
                    puVar2 = arg1 + 0x150;
                    goto code_r0x0800c8d0;
                }
            }
            else {
                puVar2 = arg1 + 0x158;
code_r0x0800c8d0:
                uVar3 = *puVar2;
            }
            clk_set_rate(*(arg1 + 0x148),uVar3);
            uVar3 = *(arg1 + 0x148);
            iVar1 = clk_prepare(uVar3);
            if (iVar1 == 0) {
                iVar1 = clk_enable(uVar3);
                if (iVar1 != 0) {
                    clk_unprepare(uVar3);
                    goto code_r0x0800c908;
                }
code_r0x0800c90c:
                uVar3 = *(arg1 + 0x178);
                iVar1 = clk_prepare(uVar3);
                if (iVar1 == 0) {
                    iVar1 = clk_enable(uVar3);
                    if (iVar1 != 0) {
                        clk_unprepare(uVar3);
                        goto joined_r0x0800c940;
                    }
code_r0x0800c944:
                    uVar3 = *(arg1 + 400);
                    iVar1 = clk_prepare(uVar3);
                    if (iVar1 == 0) {
                        iVar1 = clk_enable(uVar3);
                        if (iVar1 == 0) {
                            return 0;
                        }
                        clk_unprepare(uVar3);
                    }
                    if (-1 < iVar1) {
                        return 0;
                    }
                    _dev_err(*arg1,"%s: bus_aggr_clk enable failed\n","dwc3_clk_enable_disable");
                    goto code_r0x0800c7d4;
                }
joined_r0x0800c940:
                if (-1 < iVar1) goto code_r0x0800c944;
                _dev_err(*arg1,"%s: utmi_clk enable failed\n","dwc3_clk_enable_disable");
                goto code_r0x0800c7e8;
            }
code_r0x0800c908:
            if (-1 < iVar1) goto code_r0x0800c90c;
            _dev_err(*arg1,"%s: core_clk enable failed\n","dwc3_clk_enable_disable");
            goto code_r0x0800c80c;
        }
joined_r0x0800c8a0:
        if (-1 < iVar1) goto code_r0x0800c8a4;
        _dev_err(*arg1,"%s: noc_aggr_clk enable failed\n","dwc3_clk_enable_disable");
    }
    uVar3 = *(arg1 + 0x168);
    clk_disable(uVar3);
    clk_unprepare(uVar3);
joined_r0x0800c834:
    if ((arg2 & 1U) != 0) {
        uVar3 = *(arg1 + 0x170);
        clk_disable(uVar3);
        clk_unprepare(uVar3);
    }
    return iVar1;
}


// ===== sym.dwc3_msm_set_pwr_events @ 0x0800ca40 (size 196) =====

void sym.dwc3_msm_set_pwr_events(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint32_t uVar2;
    int64_t arg1_00;
    uint64_t arg1_01;
    uint64_t uVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = sym.readl(*(arg1 + 8) + 0xf8858);
    sym.writel(arg1_00,*(arg1 + 8) + 0xf8858);
    uVar2 = sym.readl(*(arg1 + 8) + 0xf885c);
    uVar3 = *(arg1 + 0x360);
    if ((arg2 & 1U) == 0) {
        if ((uVar3 & 2) != 0) {
            uVar2 = uVar2 & 0xffffffdf;
        }
        arg1_01 = uVar2;
        if ((uVar3 & 1) == 0) goto code_r0x0800cadc;
        uVar1 = *(arg1 + 0x370);
        uVar4 = uVar2 & 0xffffeff7;
    }
    else {
        uVar2 = (uVar3 & 2) << 4 | uVar2;
        arg1_01 = uVar2;
        if ((uVar3 & 1) == 0) goto code_r0x0800cadc;
        uVar1 = *(arg1 + 0x370);
        uVar4 = uVar2 | 0x1008;
    }
    if ((uVar1 & 1) != 0) {
        uVar4 = uVar2;
    }
    arg1_01 = uVar4;
code_r0x0800cadc:
    sym.writel(arg1_01,*(arg1 + 8) + 0xf885c);
    return;
}


// ===== sym.dwc3_msm_power_collapse_por @ 0x0800cb04 (size 464) =====

ulong sym.dwc3_msm_power_collapse_por(int64_t arg1)

{
    int64_t iVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t extraout_x0;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x28) == 0) {
        iVar6 = 0;
        iVar3 = *(arg1 + 0x3a8);
    }
    else {
        iVar6 = *(*(arg1 + 0x28) + 0xa8);
        iVar3 = *(arg1 + 0x3a8);
    }
    if (iVar3 == 0) {
        sym.readl(*(arg1 + 8) + 0xc120);
        *(arg1 + 0x3a8) = extraout_x0 & 0xffff;
        cVar2 = *(arg1 + 0xa90);
    }
    else {
        cVar2 = *(arg1 + 0xa90);
    }
    if ((cVar2 == '\0') &&
       (((*(arg1 + 0x10) == 0 || (iVar3 = sym.readl(*(arg1 + 0x10)), iVar3 == 0xf)) &&
        (uVar4 = sym.readl(*(arg1 + 8) + 0xc120), 0xffff < uVar4)))) {
        iVar1 = *(arg1 + 8) + 0xf885c;
        uVar4 = sym.readl(iVar1);
        sym.writel(uVar4 | 4,iVar1);
        sym.readl(iVar1);
        if (*(arg1 + 0x348) != '\0') {
            iVar1 = *(arg1 + 8) + 0xc110;
            uVar4 = sym.readl(iVar1);
            sym.writel(uVar4 & 0xffffcfff | 0x1000000,iVar1);
            sym.readl(iVar1);
            if ((iVar6 != 0) && ((*(iVar6 + 0x4d8) >> 0x1d & 1) == 0)) {
                uVar4 = sym.readl(*(arg1 + 8) + 0xc200);
                sym.writel(uVar4 | 0x100,*(arg1 + 8) + 0xc200);
                uVar4 = sym.readl(*(arg1 + 8) + 0xc11c);
                sym.writel(uVar4 | 0x100,*(arg1 + 8) + 0xc11c);
            }
            if (*(arg1 + 0xa80) != '\0') {
                uVar4 = sym.readl(*(arg1 + 8) + 0xc200);
                sym.writel(uVar4 | 0x40,*(arg1 + 8) + 0xc200);
            }
        }
        if ((*(arg1 + 0xa82) != '\0') && (*(arg1 + 0x3a8) == 0x3331)) {
            iVar6 = *(arg1 + 8) + 0xd024;
            uVar4 = sym.readl(iVar6);
            sym.writel(uVar4 | 0x400,iVar6);
            sym.readl(iVar6);
        }
        uVar5 = 0;
    }
    else {
        uVar5 = 0xffffffea;
    }
    return uVar5;
}


// ===== sym.configure_usb_wakeup_interrupts @ 0x0800ccd4 (size 452) =====

void sym.configure_usb_wakeup_interrupts(int64_t arg1)

{
    uint64_t in_x1;
    int64_t arg2;
    uint64_t uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_x1 & 1) == 0) {
        if ((arg1 != -500) && (*(arg1 + 0x1f8) != 0)) {
            sym.dwc3_dbg_print(*(arg1 + 0x1f8),0xff,0x8001d0a,*(arg1 + 500));
            irq_set_irq_wake(*(arg1 + 500),0);
            disable_irq_nosync(*(arg1 + 500));
            *(arg1 + 0x1f8) = 0;
        }
        if ((arg1 != -0x1fc) && (*(arg1 + 0x200) != 0)) {
            sym.dwc3_dbg_print(*(arg1 + 0x200),0xff,0x8001d0a,*(arg1 + 0x1fc));
            irq_set_irq_wake(*(arg1 + 0x1fc),0);
            disable_irq_nosync(*(arg1 + 0x1fc));
            *(arg1 + 0x200) = 0;
        }
        if (arg1 == -0x204) {
            return;
        }
        if (*(arg1 + 0x208) == 0) {
            return;
        }
        sym.dwc3_dbg_print(*(arg1 + 0x208),0xff,0x8001d0a,*(arg1 + 0x204));
        irq_set_irq_wake(*(arg1 + 0x204),0);
        disable_irq_nosync(*(arg1 + 0x204));
        *(arg1 + 0x208) = 0;
        return;
    }
    uVar2 = *(*(arg1 + 0x1b8) + 0x10);
    if ((uVar2 >> 5 & 1) == 0) {
        if ((uVar2 >> 4 & 1) == 0) {
            if (*(arg1 + 0x348) == '\0') {
                uVar1 = 1;
            }
            else {
                uVar2 = 4;
                if ((*(arg1 + 0x360) & 2) != 0) {
                    uVar2 = 1;
                }
                uVar1 = uVar2;
            }
            sym.configure_usb_wakeup_interrupt(arg1,arg1 + 500,uVar1);
            arg2 = arg1 + 0x1fc;
            if (*(arg1 + 0x348) == '\0') {
                uVar1 = 1;
            }
            else {
                uVar2 = 4;
                if ((*(arg1 + 0x360) & 2) != 0) {
                    uVar2 = 1;
                }
                uVar1 = uVar2;
            }
            goto code_r0x0800ce70;
        }
        if (*(arg1 + 0xa81) == '\0') {
            arg2 = arg1 + 500;
            goto code_r0x0800ce5c;
        }
        arg2 = arg1 + 0x1fc;
    }
    else {
        if (*(arg1 + 0xa81) == '\0') {
            arg2 = arg1 + 0x1fc;
code_r0x0800ce5c:
            uVar1 = 2;
            goto code_r0x0800ce70;
        }
        arg2 = arg1 + 500;
    }
    uVar1 = 1;
code_r0x0800ce70:
    sym.configure_usb_wakeup_interrupt(arg1,arg2,uVar1);
    sym.configure_usb_wakeup_interrupt(arg1,arg1 + 0x204,4);
    return;
}


// ===== sym.configure_nonpdc_usb_interrupt @ 0x0800ce98 (size 208) =====

void sym.configure_nonpdc_usb_interrupt(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg2 != 0) && ((arg3 & 1U) != 0)) && (*(arg2 + 4) == '\0')) {
        sym.dwc3_dbg_print(0,0xff,0x800398e,*arg2);
        irq_set_irq_wake(*arg2,1);
        enable_irq(*arg2);
        *(arg2 + 4) = 1;
    }
    if (((arg2 != 0) && ((arg3 & 1U) == 0)) && (*(arg2 + 4) != 0)) {
        sym.dwc3_dbg_print(*(arg2 + 4),0xff,0x800258f,*arg2);
        irq_set_irq_wake(*arg2,0);
        disable_irq_nosync(*arg2);
        *(arg2 + 4) = 0;
    }
    return;
}


// ===== sym.dwc3_pwr_event_handler @ 0x0800cf68 (size 356) =====

void sym.dwc3_pwr_event_handler(int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t extraout_x0;
    uint64_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    uint32_t uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x28) == 0) {
        iVar9 = 0;
        iVar4 = *(arg1 + 0x3a8);
    }
    else {
        iVar9 = *(*(arg1 + 0x28) + 0xa8);
        iVar4 = *(arg1 + 0x3a8);
    }
    if (iVar4 == 0) {
        sym.readl(*(arg1 + 8) + 0xc120);
        *(arg1 + 0x3a8) = extraout_x0 & 0xffff;
    }
    uVar5 = sym.readl(*(arg1 + 8) + 0xf8858);
    uVar8 = uVar5;
    if ((uVar5 & 0xc) == 0xc) {
        iVar2 = 0xd050;
        if (*(arg1 + 0x3a8) != 0x3331) {
            iVar2 = 0xc164;
        }
        uVar3 = sym.readl(*(arg1 + 8) + iVar2);
        uVar7 = 0xc;
        uVar6 = 0xfffffff3;
        uVar3 = (uVar3 & 0x3c00000) == 0xc00000;
    }
    else {
        uVar1 = uVar5 & 8;
        uVar6 = 0xfffffffb;
        if (uVar1 != 0) {
            uVar6 = 0xfffffff7;
        }
        uVar7 = 4;
        if (uVar1 != 0) {
            uVar7 = 8;
        }
        if ((uVar5 & 0xc) == 0) {
            uVar7 = 0;
            goto joined_r0x0800d0a8;
        }
        uVar3 = uVar1 >> 3 ^ 1;
    }
    uVar8 = uVar6 & uVar8;
    *(arg1 + 0x3ac) = uVar3;
joined_r0x0800d0a8:
    if ((uVar8 >> 0xd & 1) != 0) {
        if (((*(arg1 + 0x348) == '\0') && (iVar9 != 0)) && (iVar4 = usb_gadget_wakeup(*(iVar9 + 0x370)), iVar4 != 0)) {
            _dev_err(*arg1,"%s failed to take dwc out of L1\n","dwc3_pwr_event_handler");
        }
        uVar8 = uVar8 & 0xffffdfff;
        uVar7 = uVar7 | 0x2000;
    }
    sym.writel(uVar8 & 0x20 | uVar7,*(arg1 + 8) + 0xf8858);
    return;
}


// ===== sym.configure_usb_wakeup_interrupt @ 0x0800d0cc (size 192) =====

void sym.configure_usb_wakeup_interrupt(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong noname_0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 != 0) && (*(arg2 + 4) == '\0')) {
        sym.dwc3_dbg_print(0,0xff,0x80037bc,*arg2);
        sym.dwc3_dbg_print(noname_0,0xff,0x8003b01,arg3 & 0xffffffffU);
        irq_set_irqchip_state(*arg2,0,0);
        irq_set_irq_type(*arg2,arg3 & 0xffffffffU);
        irq_set_irq_wake(*arg2,1);
        enable_irq(*arg2);
        *(arg2 + 4) = 1;
    }
    return;
}


// ===== sym.pm_runtime_resume_and_get @ 0x0800d18c (size 176) =====

int sym.pm_runtime_resume_and_get(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = __pm_runtime_resume(arg1,4);
    if (iVar5 < 0) {
        puVar1 = arg1 + 0x1f8;
        uVar7 = *puVar1;
        do {
            uVar6 = uVar7;
            if (uVar6 == 0) {
                return iVar5;
            }
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar7 = uVar2;
                if (uVar2 != uVar6) goto code_r0x0800d1fc;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar6 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800d1fc:
        } while (uVar6 != uVar2);
    }
    else {
        iVar5 = 0;
    }
    return iVar5;
}


// ===== sym.dwc3_otg_start_host @ 0x0800d23c (size 2084) =====

int sym.dwc3_otg_start_host(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    ulong uVar7;
    int in_w1;
    int64_t iVar8;
    uint32_t *puVar9;
    uint64_t uVar10;
    uint *puVar11;
    ulong *in_x18;
    int64_t iVar12;
    code *pcVar13;
    ulong *puVar14;
    int64_t iVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar12 = *(*(arg1 + 0x28) + 0xa8);
    if (in_w1 == 0) {
        _dev_err(*arg1,"%s: turn off host\n","dwc3_otg_start_host");
        iVar15 = *(arg1 + 0x28);
        iVar5 = __pm_runtime_resume(iVar15 + 0x10,4);
        if (-1 < iVar5) {
            sym.dwc3_dbg_print(*arg1 + 0x1f8,0xff,0x80025a4,*(*arg1 + 0x1f8));
            *(arg1 + 0x348) = 0;
            if (*(arg1 + 0x558) == '\0') {
                sym.dwc3_msm_host_ss_powerup(arg1);
                _dev_err(*arg1,"resetting params for USB ss\n");
                *(arg1 + 0x558) = 0;
                *(*(arg1 + 0x1c0) + 0x10) = *(*(arg1 + 0x1c0) + 0x10) & 0xfffffdff;
                if (*(arg1 + 0x28) == 0) {
                    puVar11 = arg1 + 0x500;
                }
                else {
                    puVar11 = *(*(arg1 + 0x28) + 0xa8) + 0x450;
                }
                *puVar11 = *(arg1 + 0x504);
                usb_redriver_notify_disconnect(*(arg1 + 0x1c8));
            }
            usb_role_switch_set_role(*(arg1 + 0x550),2);
            if (*(iVar12 + 0x3e0) == 3) {
                flush_work(iVar12);
            }
            iVar12 = *(arg1 + 0x1b8);
            if ((iVar12 != 0) && (pcVar13 = *(iVar12 + 0x150), pcVar13 != NULL)) {
                __cfi_slowpath_diag(0x64ea1348e09a6946,pcVar13,0x8001370);
                (*pcVar13)(iVar12,3);
            }
            iVar12 = *(arg1 + 0x1c0);
            uVar6 = *(iVar12 + 0x10);
            if ((uVar6 & 1) != 0) {
                if ((iVar12 != 0) && (pcVar13 = *(iVar12 + 0x150), pcVar13 != NULL)) {
                    __cfi_slowpath_diag(0x64ea1348e09a6946,pcVar13,0x8001370);
                    (*pcVar13)(iVar12,5);
                    iVar12 = *(arg1 + 0x1c0);
                    uVar6 = *(iVar12 + 0x10);
                }
                *(iVar12 + 0x10) = uVar6 & 0xfffffffe;
            }
            usb_redriver_notify_disconnect(*(arg1 + 0x1c8));
            *(*(arg1 + 0x1b8) + 0x10) = *(*(arg1 + 0x1b8) + 0x10) & 0xfffffffe;
            usb_unregister_notify(arg1 + 0x390);
            iVar12 = *(arg1 + 8) + 0xc2c0;
            uVar6 = sym.readl(iVar12);
            sym.writel(uVar6 & 0xfffdffff,iVar12);
            sym.readl(iVar12);
            puVar1 = arg1 + 0x318;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 | 8;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            __pm_runtime_suspend(*(arg1 + 0x28) + 0x10,4);
            sym.dwc3_dbg_print(*arg1 + 0x1f8,0xff,0x8002467,*(*arg1 + 0x1f8));
            return 0;
        }
        puVar1 = iVar15 + 0x208;
        uVar10 = *puVar1;
        do {
            uVar6 = uVar10;
            if (uVar6 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar10 = uVar2;
                if (uVar2 != uVar6) goto code_r0x0800d8c0;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar6 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800d8c0:
        } while (uVar6 != uVar2);
        _dev_err(*arg1,"%s: pm_runtime_resume_and_get failed\n","dwc3_otg_start_host");
        __pm_runtime_set_status(*(arg1 + 0x28) + 0x10,2);
    }
    else {
        _dev_err(*arg1,"%s: turn on host\n","dwc3_otg_start_host");
        *(*(arg1 + 0x1b8) + 0x10) = *(*(arg1 + 0x1b8) + 0x10) | 1;
        sym.dwc3_dbg_print(*(arg1 + 0x1b8),0xff,0x8002597,*(*(arg1 + 0x1b8) + 0x10));
        iVar15 = *arg1;
        iVar5 = __pm_runtime_resume(iVar15,4);
        if (-1 < iVar5) {
            sym.dwc3_dbg_print(*arg1 + 0x1f8,0xff,0x800358c,*(*arg1 + 0x1f8));
            clk_set_rate(*(arg1 + 0x148),*(arg1 + 0x150));
            if (*(arg1 + 0x1c8) == 0) {
                uVar7 = 0;
            }
            else {
                *(*(arg1 + 0x1c8) + 0x58) = 1;
                uVar7 = *(arg1 + 0x1c8);
            }
            usb_redriver_notify_connect(uVar7,(*(*(arg1 + 0x1c0) + 0x10) >> 2 ^ 0xffffffff) & 1);
            if (*(arg1 + 0x28) == 0) {
                puVar9 = arg1 + 0x500;
            }
            else {
                puVar9 = *(*(arg1 + 0x28) + 0xa8) + 0x450;
            }
            if (4 < *puVar9) {
                *(*(arg1 + 0x1c0) + 0x10) = *(*(arg1 + 0x1c0) + 0x10) | 1;
                iVar15 = *(arg1 + 0x1c0);
                if ((iVar15 != 0) && (pcVar13 = *(iVar15 + 0x148), pcVar13 != NULL)) {
                    __cfi_slowpath_diag(0x64ea1348e09a6946,pcVar13,0x8001310);
                    (*pcVar13)(iVar15,5);
                }
            }
            iVar15 = *(arg1 + 0x1b8);
            if ((iVar15 != 0) && (pcVar13 = *(iVar15 + 0x148), pcVar13 != NULL)) {
                __cfi_slowpath_diag(0x64ea1348e09a6946,pcVar13,0x8001310);
                (*pcVar13)(iVar15,3);
            }
            *(arg1 + 0x390) = sym.dwc3_msm_host_notifier.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
            usb_register_notify(arg1 + 0x390);
            if ((*(iVar12 + 0x4d8) >> 0x1d & 1) == 0) {
                uVar6 = sym.readl(*(arg1 + 8) + 0xc200);
                sym.writel(uVar6 | 0x100,*(arg1 + 8) + 0xc200);
                uVar6 = sym.readl(*(arg1 + 8) + 0xc11c);
                sym.writel(uVar6 | 0x100,*(arg1 + 8) + 0xc11c);
            }
            if (*(arg1 + 0xa80) != '\0') {
                uVar6 = sym.readl(*(arg1 + 8) + 0xc200);
                sym.writel(uVar6 | 0x40,*(arg1 + 8) + 0xc200);
            }
            uVar6 = sym.readl(*(arg1 + 8) + 0xc12c);
            sym.writel(uVar6 | 0x20000,*(arg1 + 8) + 0xc12c);
            if ((*(iVar12 + 0x460) == 0x3331) && (0x31373029 < *(iVar12 + 0x464))) {
                iVar15 = *(arg1 + 8) + 0xc11c;
                uVar6 = sym.readl(iVar15);
                sym.writel(uVar6 & 0xff1fffff | 0x200000,iVar15);
                sym.readl(iVar15);
                iVar15 = *(arg1 + 8) + 0xc60c;
                uVar6 = sym.readl(iVar15);
                sym.writel(uVar6 | 0x10000,iVar15);
                sym.readl(iVar15);
            }
            usb_role_switch_set_role(*(arg1 + 0x550),1);
            if (*(iVar12 + 0x3e0) == 3) {
                flush_work(iVar12);
            }
            iVar15 = *(iVar12 + 0x1a0);
            if ((*(iVar15 + 0x98) == 0) || (iVar8 = *(*(iVar15 + 0x98) + 0x78), iVar8 == 0)) {
                _dev_err(iVar15 + 0x10,"can\'t override PM OPs\n");
            }
            else {
                puVar14 = *(arg1 + 0x3c8);
                memcpy(puVar14,iVar8,0xc0);
                *puVar14 = sym.dwc3_host_prepare.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
                puVar14[1] = sym.dwc3_host_complete.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt;
                *(*(iVar15 + 0x98) + 0x78) = puVar14;
            }
            *(arg1 + 0x348) = 1;
            __pm_runtime_use_autosuspend(*(iVar12 + 0x1a0) + 0x10,1);
            pm_runtime_set_autosuspend_delay(*(iVar12 + 0x1a0) + 0x10,0);
            pm_runtime_allow(*(iVar12 + 0x1a0) + 0x10);
            iVar15 = *(iVar12 + 0x1a0);
            uVar7 = ktime_get_mono_fast_ns();
            *(iVar15 + 0x228) = uVar7;
            iVar15 = *(arg1 + 8) + 0xc2c0;
            uVar6 = sym.readl(iVar15);
            sym.writel(uVar6 | 0x20000,iVar15);
            sym.readl(iVar15);
            if ((*(*(arg1 + 0x1c0) + 0x10) & 1) != 0) {
                iVar15 = *(arg1 + 8) + 0xd024;
                uVar6 = sym.readl(iVar15);
                sym.writel(uVar6 | 0x400,iVar15);
                sym.readl(iVar15);
            }
            if ((*(iVar12 + 0x460) == 0x3331) && (*(iVar12 + 0x464) == 0x3137302a)) {
                iVar12 = *(arg1 + 8) + 0xd010;
                uVar6 = sym.readl(iVar12);
                sym.writel(uVar6 & 0xff00ffff | 0x60000,iVar12);
                sym.readl(iVar12);
                iVar12 = *(arg1 + 8) + 0xd010;
                uVar6 = sym.readl(iVar12);
                sym.writel(uVar6 & 0xffffff00 | 5,iVar12);
                sym.readl(iVar12);
            }
            sym.dwc3_dbg_print(*arg1 + 0x1f8,0xff,0x800141c,*(*arg1 + 0x1f8));
            iVar12 = *arg1;
            uVar7 = ktime_get_mono_fast_ns();
            *(iVar12 + 0x218) = uVar7;
            __pm_runtime_suspend(*arg1,0xc);
            *(arg1 + 0x349) = 1;
            return 0;
        }
        puVar1 = iVar15 + 0x1f8;
        uVar10 = *puVar1;
        do {
            uVar6 = uVar10;
            if (uVar6 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar10 = uVar2;
                if (uVar2 != uVar6) goto code_r0x0800d90c;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar6 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800d90c:
        } while (uVar6 != uVar2);
        _dev_err(*arg1,"%s: pm_runtime_resume_and_get failed\n","dwc3_otg_start_host");
        *(*(arg1 + 0x1b8) + 0x10) = *(*(arg1 + 0x1b8) + 0x10) & 0xfffffffe;
    }
    __pm_runtime_set_status(*arg1,2);
    return iVar5;
}


// ===== sym.dwc3_otg_start_peripheral @ 0x0800da60 (size 2536) =====

void sym.dwc3_otg_start_peripheral(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    unkuint6 *pVar2;
    uint32_t uVar3;
    char cVar4;
    unkuint6 Var5;
    bool bVar6;
    int iVar7;
    uint32_t uVar8;
    ulong uVar9;
    uint32_t *puVar10;
    uint64_t uVar11;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar12;
    code *pcVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar12 = *arg1;
    arg1_00 = *(*(arg1 + 0x28) + 0xa8);
    iVar7 = __pm_runtime_resume(iVar12,4);
    if (iVar7 < 0) {
        puVar1 = iVar12 + 0x1f8;
        uVar11 = *puVar1;
        do {
            uVar8 = uVar11;
            if (uVar8 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar11 = uVar3;
                if (uVar3 != uVar8) goto code_r0x0800dad4;
                cVar4 = '\x01';
                bVar6 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar6) {
                    *puVar1 = uVar8 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800dad4:
        } while (uVar8 != uVar3);
        _dev_err(*arg1,"%s: pm_runtime_resume_and_get failed\n","dwc3_otg_start_peripheral");
        __pm_runtime_set_status(*arg1,2);
        return;
    }
    sym.dwc3_dbg_print(*arg1 + 0x1f8,0xff,0x800276c,*(*arg1 + 0x1f8));
    if (arg2 != 0) {
        _dev_err(*arg1,"%s: turn on gadget\n","dwc3_otg_start_peripheral");
        __pm_runtime_resume(*(arg1 + 0x28) + 0x10,4);
        if (*(arg1_00 + 0x3e0) == 3) {
            flush_work(arg1_00);
        }
        sym.dwc3_msm_notify_event(arg1_00,0xb,0);
        iVar12 = *(arg1 + 8) + 0xf8810;
        uVar8 = sym.readl(iVar12);
        sym.writel(uVar8 | 0x100000,iVar12);
        sym.readl(iVar12);
        if (*(arg1 + 0x28) == 0) {
            puVar10 = arg1 + 0x500;
        }
        else {
            puVar10 = *(*(arg1 + 0x28) + 0xa8) + 0x450;
        }
        if (4 < *puVar10) {
            iVar12 = *(arg1 + 8) + 0xf8830;
            uVar8 = sym.readl(iVar12);
            sym.writel(uVar8 | 0x1000000,iVar12);
            sym.readl(iVar12);
        }
        if (*(arg1 + 0x1c8) == 0) {
            uVar9 = 0;
        }
        else {
            *(*(arg1 + 0x1c8) + 0x58) = 0;
            uVar9 = *(arg1 + 0x1c8);
        }
        usb_redriver_notify_connect(uVar9,(*(*(arg1 + 0x1c0) + 0x10) >> 2 ^ 0xffffffff) & 1);
        if (*(arg1 + 0x28) == 0) {
            puVar10 = arg1 + 0x500;
        }
        else {
            puVar10 = *(*(arg1 + 0x28) + 0xa8) + 0x450;
        }
        if (((4 < *puVar10) && (iVar12 = *(arg1 + 0x1c0), iVar12 != 0)) &&
           (pcVar13 = *(iVar12 + 0x148), pcVar13 != NULL)) {
            __cfi_slowpath_diag(0x64ea1348e09a6946,pcVar13,0x8001310);
            (*pcVar13)(iVar12,5);
        }
        iVar12 = *(arg1 + 0x1b8);
        if ((iVar12 != 0) && (pcVar13 = *(iVar12 + 0x148), pcVar13 != NULL)) {
            __cfi_slowpath_diag(0x64ea1348e09a6946,pcVar13,0x8001310);
            (*pcVar13)(iVar12,3);
        }
        iVar12 = *(arg1 + 8) + *(*(arg1 + 0x1d0) + 0x68) + 0xf8000;
        uVar8 = sym.readl(iVar12);
        sym.writel(uVar8 | 0x80000000,iVar12);
        sym.readl(iVar12);
        usleep_range_state(1000,0x4b0,2);
        iVar12 = *(arg1 + 8) + *(*(arg1 + 0x1d0) + 0x68) + 0xf8000;
        uVar8 = sym.readl(iVar12);
        sym.writel(uVar8 & 0x7fffffff,iVar12);
        sym.readl(iVar12);
        iVar12 = *(arg1 + 8) + 0xf8808;
        uVar8 = sym.readl(iVar12);
        sym.writel(uVar8 | 2,iVar12);
        sym.readl(iVar12);
        if (*(arg1 + 0x1dc) == '\0') {
            sym.writel(0xff,*(arg1 + 8) + *(*(arg1 + 0x1d0) + 0x98) + 0xf8000);
            sym.writel(0xff,*(arg1 + 8) + *(*(arg1 + 0x1d0) + 0xa0) + 0xf8000);
        }
        uVar8 = sym.readl(*(arg1 + 8) + 0xc200);
        sym.writel(uVar8 & 0xfffffeff,*(arg1 + 8) + 0xc200);
        uVar8 = sym.readl(*(arg1 + 8) + 0xc11c);
        sym.writel(uVar8 & 0xfffffeff,*(arg1 + 8) + 0xc11c);
        *(arg1 + 0x34a) = 1;
        if ((*(arg1_00 + 0x460) == 0x3331) && (*(arg1_00 + 0x464) == 0x3137302a)) {
            iVar12 = *(arg1 + 8) + 0xd010;
            uVar8 = sym.readl(iVar12);
            sym.writel(uVar8 & 0xff00ffff | 0x60000,iVar12);
            sym.readl(iVar12);
            iVar12 = *(arg1 + 8) + 0xd010;
            uVar8 = sym.readl(iVar12);
            sym.writel(uVar8 & 0xffffff00 | 5,iVar12);
            sym.readl(iVar12);
        }
        usb_role_switch_set_role(*(arg1 + 0x550),2);
        cpu_latency_qos_add_request(arg1 + 1000,0xffffffff);
        clk_set_rate(*(arg1 + 0x148),*(arg1 + 0x150));
        iVar12 = irq_to_desc(*(arg1 + 0x20c));
        *(arg1 + 0x210) = *(iVar12 + 0x90);
        if ((*(arg1 + 0x350) != '\x01') && (*(arg1 + 0x3e0) != 0)) {
            cpu_latency_qos_update_request(arg1 + 1000);
            *(arg1 + 0x350) = 1;
        }
        queue_delayed_work_on(0x20,___stack_chk_fail,arg1 + 0x418,500);
        if (*(arg1 + 0xa91) != '\0') {
            usb_gadget_connect(*(arg1_00 + 0x370));
            *(arg1 + 0xa91) = 0;
        }
        goto code_r0x0800e3a0;
    }
    _dev_err(*arg1,"%s: turn off gadget\n","dwc3_otg_start_peripheral");
    irq_to_desc(*(arg1 + 0x20c));
    cancel_delayed_work_sync(arg1 + 0x418);
    if ((*(arg1 + 0x350) != '\0') && (*(arg1 + 0x3e0) != 0)) {
        cpu_latency_qos_update_request(arg1 + 1000,0xffffffff);
        *(arg1 + 0x350) = 0;
    }
    cpu_latency_qos_remove_request(arg1 + 1000);
    iVar12 = *(arg1 + 8) + 0xf8810;
    uVar8 = sym.readl(iVar12);
    sym.writel(uVar8 & 0xffefffff,iVar12);
    sym.readl(iVar12);
    iVar12 = *(arg1 + 8) + 0xf8830;
    uVar8 = sym.readl(iVar12);
    sym.writel(uVar8 & 0xfeffffff,iVar12);
    sym.readl(iVar12);
    iVar12 = *(arg1 + 0x1b8);
    *(arg1 + 0x34a) = 0;
    if (iVar12 != 0) {
        pcVar13 = *(iVar12 + 0x150);
        if (pcVar13 != NULL) {
            __cfi_slowpath_diag(0x64ea1348e09a6946,pcVar13,0x8001370);
            (*pcVar13)(iVar12,3);
            iVar12 = *(arg1 + 0x1b8);
            if (iVar12 == 0) goto code_r0x0800dc44;
        }
        usb_phy_set_charger_current(iVar12,0);
        pcVar13 = *(iVar12 + 0x130);
        if (pcVar13 != NULL) {
            __cfi_slowpath_diag(0x7cedcdc737e35bbf,pcVar13,0x8001390);
            (*pcVar13)(iVar12,0);
        }
    }
code_r0x0800dc44:
    iVar12 = *(arg1 + 0x1c0);
    if ((iVar12 != 0) && (pcVar13 = *(iVar12 + 0x150), pcVar13 != NULL)) {
        __cfi_slowpath_diag(0x64ea1348e09a6946,pcVar13,0x8001370);
        (*pcVar13)(iVar12,5);
    }
    usb_redriver_notify_disconnect(*(arg1 + 0x1c8));
    iVar12 = *(*(*(arg1_00 + 400) + 0x60) + 0x98);
    if (*(iVar12 + 0x3d0) != 0) {
        uVar11 = 0;
        uVar14 = 0xc41c;
        do {
            uVar11 = uVar11 + 1;
            uVar8 = sym.readl(*(iVar12 + 8) + (uVar14 & 0xfffffffc));
            sym.writel(uVar8 & 0xfffc,*(iVar12 + 8) + (uVar14 & 0xfffffffc));
            ipc_log_string(*(iVar12 + 0x568),"%s: remaining EVNTCOUNT(%d)=%d","dwc3_msm_notify_event",
                           uVar11 & 0xffffffff,uVar8 & 0xfffc);
            uVar14 = uVar14 + 0x10;
        } while (uVar11 < *(iVar12 + 0x3d0));
    }
    iVar12 = *(arg1 + 8) + 0xf8810;
    uVar8 = sym.readl(iVar12);
    sym.writel(uVar8 & 0xffefffff,iVar12);
    sym.readl(iVar12);
    iVar12 = *(arg1 + 8) + 0xf8830;
    uVar8 = sym.readl(iVar12);
    sym.writel(uVar8 & 0xfeffffff,iVar12);
    sym.readl(iVar12);
    iVar12 = *(arg1 + 8) + 0xc2c0;
    uVar8 = sym.readl(iVar12);
    sym.writel(uVar8 & 0xfffdffff,iVar12);
    sym.readl(iVar12);
    __pm_runtime_idle(*(arg1 + 0x28) + 0x10,4);
    if ((*(*(arg1 + 0x28) + 0x21c) != 2) || ((*(*(arg1 + 0x28) + 0x210) & 7) != 0)) {
        pVar2 = arg1_00 + 0x4d8;
        iVar7 = -99;
        do {
            uVar8 = *pVar2;
            Var5 = *pVar2;
            if ((uVar8 & 1) == 0) goto code_r0x0800de90;
            msleep(0x14);
            bVar6 = iVar7 != -1;
            iVar7 = iVar7 + 1;
        } while (bVar6);
        Var5 = *pVar2;
code_r0x0800de90:
        sym.dwc3_dbg_print(Var5,0xff,0x8002358,Var5 & 1);
        __pm_runtime_suspend(*(arg1 + 0x28) + 0x10,0);
        if (((*pVar2 & 1) != 0) && ((uVar8 & 1) != 0)) {
            usb_gadget_disconnect(*(arg1_00 + 0x370));
            if ((*(*(arg1_00 + 400) + 0x20c) != 2) || ((*(*(arg1_00 + 400) + 0x200) & 7) != 0)) {
                msleep(0x14);
                if ((*(*(arg1_00 + 400) + 0x20c) != 2) || ((*(*(arg1_00 + 400) + 0x200) & 7) != 0)) {
                    msleep(0x14);
                    if ((*(*(arg1_00 + 400) + 0x20c) != 2) || ((*(*(arg1_00 + 400) + 0x200) & 7) != 0)) {
                        msleep(0x14);
                        if ((*(*(arg1_00 + 400) + 0x20c) != 2) || ((*(*(arg1_00 + 400) + 0x200) & 7) != 0)) {
                            msleep(0x14);
                            if ((*(*(arg1_00 + 400) + 0x20c) != 2) || ((*(*(arg1_00 + 400) + 0x200) & 7) != 0)) {
                                msleep(0x14);
                                if ((*(*(arg1_00 + 400) + 0x20c) != 2) || ((*(*(arg1_00 + 400) + 0x200) & 7) != 0)) {
                                    msleep(0x14);
                                    if ((*(*(arg1_00 + 400) + 0x20c) != 2) || ((*(*(arg1_00 + 400) + 0x200) & 7) != 0))
                                    {
                                        msleep(0x14);
                                        if ((*(*(arg1_00 + 400) + 0x20c) != 2) ||
                                           ((*(*(arg1_00 + 400) + 0x200) & 7) != 0)) {
                                            msleep(0x14);
                                            if ((*(*(arg1_00 + 400) + 0x20c) != 2) ||
                                               ((*(*(arg1_00 + 400) + 0x200) & 7) != 0)) {
                                                msleep(0x14);
                                                if ((*(*(arg1_00 + 400) + 0x20c) != 2) ||
                                                   ((*(*(arg1_00 + 400) + 0x200) & 7) != 0)) {
                                                    msleep(0x14);
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
            *(arg1 + 0xa91) = 1;
            sym.dwc3_dbg_print(1,0xff,0x8001e98,0);
        }
    }
    puVar1 = arg1 + 0x318;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        cVar4 = '\x01';
        bVar6 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
            *puVar1 = *puVar1 | 8;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
code_r0x0800e3a0:
    __pm_runtime_idle(*arg1,4);
    sym.dwc3_dbg_print(*arg1 + 0x1f8,0xff,0x80031f0,*(*arg1 + 0x1f8));
    return;
}


// ===== sym.dwc3_host_prepare @ 0x0800e448 (size 48) =====

bool sym.dwc3_host_prepare(int64_t arg1)

{
    if ((*(arg1 + 0x200) & 7) != 0) {
        return false;
    }
    return *(arg1 + 0x20c) == 2;
}


// ===== sym.dwc3_core_prepare @ 0x0800e478 (size 216) =====

ulong sym.dwc3_core_prepare(int64_t arg1)

{
    ulong uVar1;
    uint64_t arg3;
    uint64_t noname_0;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    noname_0 = *(*(*(iVar2 + 400) + 0x60) + 0x98);
    if (*(arg1 + 0x20c) == 2) {
        noname_0 = *(arg1 + 0x200);
        arg3 = (*(arg1 + 0x200) & 7) == 0;
    }
    else {
        arg3 = 0;
    }
    sym.dwc3_dbg_print(noname_0,0xff,0x800303f,arg3);
    if (((*(arg1 + 0x200) & 7) == 0) && (*(arg1 + 0x20c) == 2)) {
        uVar1 = 1;
    }
    else if ((*(iVar2 + 0x3e4) == 2) && ((*(arg1 + 0x20c) != 2 || ((*(arg1 + 0x200) & 7) != 0)))) {
        _dev_info(arg1,"%s: peripheral mode still active\n","dwc3_core_prepare");
        uVar1 = 0xfffffff0;
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.dwc3_host_complete @ 0x0800e550 (size 88) =====

void sym.dwc3_host_complete(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(arg1 + 0x10c) >> 9 & 1) != 0) && (iVar1 = __pm_runtime_resume(arg1,0), iVar1 < 0)) {
        _dev_err(arg1,"failed to runtime resume, ret %d\n",iVar1);
    }
    return;
}


// ===== sym.dwc3_core_complete @ 0x0800e5a8 (size 148) =====

void sym.dwc3_core_complete(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(*(*(arg1 + 0x98) + 400) + 0x60) + 0x98);
    sym.dwc3_dbg_print(*(arg1 + 0x10c),0xff,0x8001e87,*(arg1 + 0x10c) >> 9 & 1);
    if (*(iVar1 + 0x348) == '\0') {
        sym.dwc3_dbg_print(0,0xff,0x80028b1,0);
        queue_work_on(0x20,*(iVar1 + 0x280),iVar1 + 0x218);
    }
    return;
}


// ===== sym.dwc3_msm_host_notifier @ 0x0800e63c (size 472) =====

ulong sym.dwc3_msm_host_notifier(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    
    uVar2 = arg2;
    *in_x18 = unaff_x30;
    if (uVar2 - 3 < 0xfffffffffffffffe) {
        return 0;
    }
    iVar4 = *(*(arg1 + -0x368) + 0xa8);
    if (uVar2 == 1) {
        iVar6 = *(arg3 + 0x48);
        *(arg3 + 0x1f8) = *(arg3 + 0x1f8) | 2;
        if (iVar6 == 0) {
            __pm_runtime_use_autosuspend(arg3 + 0xa8,1);
            pm_runtime_set_autosuspend_delay(arg3 + 0xa8,1000);
            return 0;
        }
    }
    else {
        iVar6 = *(arg3 + 0x48);
        if (iVar6 == 0) {
            return 0;
        }
    }
    if (*(iVar6 + 0x48) != 0) {
        return 0;
    }
    if (*(*(arg3 + 0x108) + 0x60) != *(iVar4 + 0x1a0) + 0x10) {
        return 0;
    }
    iVar4 = arg1 + -0x390;
    if (uVar2 != 1) {
        clk_set_rate(*(arg1 + -0x248),*(arg1 + -0x240));
        *(arg1 + -0x44) = 0;
        sym.dwc3_msm_update_bus_bw(iVar4,*(arg1 + -0x68));
        sym.dwc3_msm_host_ss_powerup(iVar4);
        if (*(*(arg3 + 0x48) + 0x1c) < 5) {
            return 0;
        }
        usb_redriver_host_powercycle(*(arg1 + -0x1c8));
        return 0;
    }
    piVar7 = arg1 + -0x388;
    uVar1 = sym.readl(*piVar7 + 4);
    uVar1 = uVar1 >> 0x18 & 0x7f;
    if (uVar1 == 0) {
code_r0x0800e7e0:
        clk_set_rate(*(arg1 + -0x248),*(arg1 + -0x238));
        *(arg1 + -0x44) = 3;
        sym.dwc3_msm_update_bus_bw(iVar4,2);
        sym.dwc3_msm_host_ss_powerdown(iVar4);
    }
    else {
        uVar2 = sym.readl(*piVar7 + 0x420);
        if (((uVar2 & 1) == 0) || ((uVar2 & 0x3000) == 0)) {
            iVar6 = 0x430;
            uVar2 = 1;
            do {
                uVar5 = uVar2;
                if (uVar1 == uVar5) break;
                uVar3 = sym.readl(*piVar7 + iVar6);
                iVar6 = iVar6 + 0x10;
                uVar2 = uVar5 + 1;
            } while (((uVar3 & 1) == 0) || ((uVar3 & 0x3000) == 0));
            if (uVar1 <= uVar5) goto code_r0x0800e7e0;
        }
        if (*(arg1 + -0x44) < 5) {
            sym.dwc3_msm_host_ss_powerup(iVar4);
        }
        *(arg1 + -0x44) = 5;
    }
    return 0;
}


// ===== sym.dwc3_msm_host_ss_powerup @ 0x0800e814 (size 424) =====

void sym.dwc3_msm_host_ss_powerup(int64_t arg1)

{
    uint32_t uVar1;
    uint *puVar2;
    uint32_t *puVar3;
    ulong *in_x18;
    int64_t iVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x28) == 0) {
        puVar2 = arg1 + 0x500;
    }
    else {
        puVar2 = *(*(arg1 + 0x28) + 0xa8) + 0x450;
    }
    ipc_log_string(*(arg1 + 0x568),"%s: start: speed:%d\n","dwc3_msm_host_ss_powerup",*puVar2);
    if (*(arg1 + 0x348) == '\0') {
        return;
    }
    if (*(arg1 + 0x369) != '\0') {
        return;
    }
    if (*(arg1 + 0x28) == 0) {
        puVar3 = arg1 + 0x500;
    }
    else {
        puVar3 = *(*(arg1 + 0x28) + 0xa8) + 0x450;
    }
    if (*puVar3 < 5) {
        return;
    }
    iVar4 = *(arg1 + 0x1c0);
    if (iVar4 != 0) {
        pcVar5 = *(iVar4 + 0x138);
        if (pcVar5 != NULL) {
            __cfi_slowpath_diag(0x9eb30a7a6c5b472a,pcVar5,0x8001330);
            (*pcVar5)(iVar4,0);
            iVar4 = *(arg1 + 0x1c0);
            if (iVar4 == 0) goto code_r0x0800e910;
        }
        pcVar5 = *(iVar4 + 0x148);
        if (pcVar5 != NULL) {
            __cfi_slowpath_diag(0x64ea1348e09a6946,pcVar5,0x8001310);
            (*pcVar5)(iVar4,5);
        }
    }
code_r0x0800e910:
    iVar4 = *(arg1 + 8) + 0xf8808;
    uVar1 = sym.readl(iVar4);
    sym.writel(uVar1 | 0x100,iVar4);
    __const_udelay(0x53e3);
    uVar1 = sym.readl(*(arg1 + 8) + 0xf8808);
    sym.writel(uVar1 & 0xfffffff6,*(arg1 + 8) + 0xf8808);
    __const_udelay(0x53e3);
    iVar4 = *(arg1 + 8) + 0xf8808;
    uVar1 = sym.readl(iVar4);
    sym.writel(uVar1 & 0xfffffeff,iVar4);
    uVar1 = sym.readl(*(arg1 + 8) + 0xf89e4);
    sym.writel(uVar1 & 0xffffffdf,*(arg1 + 8) + 0xf89e4);
    return;
}


// ===== sym.dwc3_msm_host_ss_powerdown @ 0x0800e9bc (size 372) =====

void sym.dwc3_msm_host_ss_powerdown(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x369) == '\0') && (*(arg1 + 0xa8c) == 0)) {
        if (*(arg1 + 0x28) == 0) {
            puVar2 = arg1 + 0x500;
        }
        else {
            puVar2 = *(*(arg1 + 0x28) + 0xa8) + 0x450;
        }
        if (4 < *puVar2) {
            uVar1 = sym.readl(*(arg1 + 8) + 0xf89e4);
            sym.writel(uVar1 | 0x20,*(arg1 + 8) + 0xf89e4);
            iVar3 = *(arg1 + 8) + 0xf8808;
            uVar1 = sym.readl(iVar3);
            sym.writel(uVar1 | 0x100,iVar3);
            __const_udelay(0x53e3);
            uVar1 = sym.readl(*(arg1 + 8) + 0xf8808);
            sym.writel(uVar1 | 9,*(arg1 + 8) + 0xf8808);
            __const_udelay(0x53e3);
            iVar3 = *(arg1 + 8) + 0xf8808;
            uVar1 = sym.readl(iVar3);
            sym.writel(uVar1 & 0xfffffeff,iVar3);
            iVar3 = *(arg1 + 0x1c0);
            if (iVar3 != 0) {
                pcVar4 = *(iVar3 + 0x150);
                if (pcVar4 != NULL) {
                    __cfi_slowpath_diag(0x64ea1348e09a6946,pcVar4,0x8001370);
                    (*pcVar4)(iVar3,5);
                    iVar3 = *(arg1 + 0x1c0);
                    if (iVar3 == 0) {
                        return;
                    }
                }
                pcVar4 = *(iVar3 + 0x138);
                if (pcVar4 != NULL) {
                    __cfi_slowpath_diag(0x9eb30a7a6c5b472a,pcVar4,0x8001330);
                    (*pcVar4)(iVar3,1);
                }
            }
        }
    }
    return;
}


// ===== sym.dwc3_msm_set_role @ 0x0800eb30 (size 448) =====

ulong sym.dwc3_msm_set_role(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong uVar4;
    int iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 2) {
        if (*(arg1 + 0x324) == 1) {
            return 0xffffffea;
        }
    }
    else if ((arg2 == 1) && (*(arg1 + 0x324) == 2)) {
        return 0xffffffea;
    }
    iVar1 = arg1 + 0x4d0;
    mutex_lock(iVar1);
    if (*(arg1 + 0x352) == '\0') {
        uVar2 = *(arg1 + 0x358) == 0;
        iVar5 = *(arg1 + 800);
    }
    else {
        uVar2 = 2;
        iVar5 = *(arg1 + 800);
    }
    if ((iVar5 != 0) && (uVar2 == arg2)) {
        ipc_log_string(*(arg1 + 0x568),"%s: no USB role change","dwc3_msm_set_role");
code_r0x0800ebd8:
        mutex_unlock(iVar1);
        return 0;
    }
    uVar3 = usb_role_string();
    uVar4 = usb_role_string(arg2);
    _printk(0x80028c7,uVar3,uVar4,*(arg1 + 0xa88));
    if (arg2 == 0) {
        if (*(arg1 + 0xa8c) != 0) {
            *(arg1 + 0xa88) = *(arg1 + 0xa88) + -1;
            ipc_log_string(*(arg1 + 0x568),"%s: DP (%d)session active, refcnt:%d\n","dwc3_msm_set_role");
            goto code_r0x0800ebd8;
        }
        iVar5 = 0;
        *(arg1 + 0x352) = 0;
        *(arg1 + 0x358) = 1;
    }
    else if (arg2 == 2) {
        *(arg1 + 0x352) = 1;
        *(arg1 + 0x358) = 1;
        ipc_log_string(*(arg1 + 0x568),"%s: refcnt:%d reset refcnt_dp_usb\n","dwc3_msm_set_role",*(arg1 + 0xa88));
        iVar5 = 0;
    }
    else {
        if (arg2 != 1) goto code_r0x0800ecdc;
        *(arg1 + 0x352) = 0;
        *(arg1 + 0x358) = 0;
        ipc_log_string(*(arg1 + 0x568),"%s: refcnt:%d start host mode\n","dwc3_msm_set_role",*(arg1 + 0xa88));
        iVar5 = *(arg1 + 0xa88) + 1;
    }
    *(arg1 + 0xa88) = iVar5;
code_r0x0800ecdc:
    mutex_unlock(iVar1);
    sym.dwc3_ext_event_notify(arg1);
    return 0;
}


// ===== sym.dwc3_msm_vbus_notifier @ 0x0800ecf0 (size 348) =====

ulong sym.dwc3_msm_vbus_notifier(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg3 != 0) && (iVar5 = *(arg1 + -0x10), iVar5 != 0)) {
        iVar4 = *(iVar5 + 0x28);
        if (iVar4 == 0) {
            iVar6 = 0;
        }
        else {
            iVar6 = *(iVar4 + 0xa8);
        }
        sym.dwc3_dbg_print(iVar4,0xff,0x80038d6,*(arg1 + -8));
        uVar2 = extcon_get_edev_name(arg3);
        ipc_log_string(*(iVar5 + 0x568),"%s: edev:%s\n","dwc3_msm_vbus_notifier",uVar2);
        uVar3 = strlen(uVar2);
        iVar4 = strnstr(uVar2,0x80031ec,uVar3);
        if (iVar4 == 0) {
            if (*(iVar5 + 0x352) == arg2) {
                return 0;
            }
            *(iVar5 + 0x352) = arg2 != 0;
        }
        else {
            iVar1 = extcon_get_state(arg3,0x3d);
            if (*(iVar5 + 0x353) == arg2) {
                return 0;
            }
            *(iVar5 + 0x353) = arg2 != 0;
            if (((iVar6 != 0) && (4 < *(*(iVar6 + 0x370) + 0x58))) && (iVar1 == 0)) {
                return 0;
            }
            *(iVar5 + 0x351) = 1;
        }
        *(iVar5 + 0x388) = *(arg1 + -8);
        if ((*(iVar5 + 0x324) == 3) && (*(iVar5 + 0x278) == '\0')) {
            queue_work_on(0x20,*(iVar5 + 0x280),iVar5 + 0x218);
        }
    }
    return 0;
}


// ===== sym.dwc3_msm_id_notifier @ 0x0800ee4c (size 180) =====

ulong sym.dwc3_msm_id_notifier(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t in_x2;
    uint32_t uVar2;
    ulong in_x8;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_x2 != 0) && (iVar3 = *(arg1 + -0x28), iVar3 != 0)) {
        sym.dwc3_dbg_print(in_x8,0xff,0x80038d6,*(arg1 + -0x20));
        uVar2 = arg2 == 0;
        if (*(iVar3 + 0x358) != uVar2) {
            uVar1 = *(arg1 + -0x20);
            *(iVar3 + 0x358) = uVar2;
            *(iVar3 + 0x388) = uVar1;
            sym.dwc3_dbg_print(uVar1,0xff,0x8002f8b,arg2 == 0);
            queue_work_on(0x20,*(iVar3 + 0x280),iVar3 + 0x218);
        }
    }
    return 0;
}


// ===== sym.orientation_show @ 0x0800ef00 (size 100) =====

int64_t sym.orientation_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    char *pcVar1;
    char *pcVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x98) + 0x55c);
    pcVar1 = 0x80032ed;
    if (iVar3 != 8) {
        pcVar1 = "none\n";
    }
    pcVar2 = 0x80032ea;
    if (iVar3 != 4) {
        pcVar2 = pcVar1;
    }
    iVar3 = scnprintf(arg2,0x1000,pcVar2);
    return iVar3;
}


// ===== sym.orientation_store @ 0x0800ef64 (size 132) =====

int64_t sym.orientation_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    uVar1 = sysfs_streq(arg2,0x8002cf6);
    if ((uVar1 & 1) == 0) {
        uVar1 = sysfs_streq(arg2,0x80015ec);
        if ((uVar1 & 1) == 0) {
            *(iVar2 + 0x55c) = 0;
        }
        else {
            *(iVar2 + 0x55c) = 8;
        }
    }
    else {
        *(iVar2 + 0x55c) = 4;
    }
    return arg3;
}


// ===== sym.mode_show @ 0x0800efe8 (size 100) =====

int64_t sym.mode_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0x98) + 0x352) == '\0') {
        pcVar2 = "host\n";
        if (*(*(arg1 + 0x98) + 0x358) != 0) {
            pcVar2 = "none\n";
        }
    }
    else {
        pcVar2 = "peripheral\n";
    }
    iVar1 = scnprintf(arg2,0x1000,pcVar2);
    return iVar1;
}


// ===== sym.mode_store @ 0x0800f04c (size 172) =====

int64_t sym.mode_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x98);
    uVar3 = sysfs_streq(arg2,"peripheral");
    if ((uVar3 & 1) == 0) {
        uVar1 = sysfs_streq(arg2,"host");
        uVar1 = uVar1 & 1;
    }
    else {
        uVar1 = 2;
    }
    uVar6 = *(iVar5 + 0x568);
    uVar4 = usb_role_string(uVar1);
    ipc_log_string(uVar6,"%s: mode_request:%s\n","mode_store",uVar4);
    iVar2 = sym.dwc3_msm_set_role(iVar5,uVar1);
    iVar5 = iVar2;
    if (-1 < iVar2) {
        iVar5 = arg3;
    }
    return iVar5;
}


// ===== sym.speed_show @ 0x0800f0f8 (size 108) =====

int64_t sym.speed_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    uint *puVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(arg1 + 0x98) + 0x28);
    if (iVar4 == 0) {
        puVar3 = *(arg1 + 0x98) + 0x500;
    }
    else {
        puVar3 = *(iVar4 + 0xa8) + 0x450;
    }
    uVar2 = usb_speed_string(*puVar3);
    iVar1 = scnprintf(arg2,0x1000,0x80039e4,uVar2);
    return iVar1;
}


// ===== sym.speed_store @ 0x0800f164 (size 300) =====

int64_t sym.speed_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x98);
    if ((*(iVar5 + 0x318) & 1) == 0) {
        return -1;
    }
    uVar1 = sysfs_streq(arg2,"full");
    if ((uVar1 & 1) == 0) {
        uVar1 = sysfs_streq(arg2,"high");
        if ((uVar1 & 1) == 0) {
            uVar1 = sysfs_streq(arg2,"super");
            if ((uVar1 & 1) == 0) {
                uVar1 = sysfs_streq(arg2,0x80036ae);
                if ((uVar1 & 1) == 0) {
                    return -0x16;
                }
                uVar2 = 6;
                iVar3 = *(iVar5 + 0x28);
            }
            else {
                uVar2 = 5;
                iVar3 = *(iVar5 + 0x28);
            }
        }
        else {
            uVar2 = 3;
            iVar3 = *(iVar5 + 0x28);
        }
    }
    else {
        uVar2 = 2;
        iVar3 = *(iVar5 + 0x28);
    }
    if (iVar3 == 0) {
        puVar4 = iVar5 + 0x500;
    }
    else {
        puVar4 = *(iVar3 + 0xa8) + 0x450;
    }
    if (uVar2 == *puVar4 || *(iVar5 + 0x504) < uVar2) {
        if (*(iVar5 + 0x504) <= uVar2) {
            *(iVar5 + 0x500) = 0;
        }
    }
    else {
        *(iVar5 + 0x500) = uVar2;
        queue_work_on(0x20,___stack_chk_fail,iVar5 + 0x248);
    }
    return arg3;
}


// ===== sym.super_speed_show @ 0x0800f290 (size 144) =====

int64_t sym.super_speed_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0x98) + 0x3b4) == 0) {
        uVar2 = sym.dwc3_msm_is_superspeed(*(arg1 + 0x98));
        pcVar3 = "true";
        if ((uVar2 & 1) == 0) {
            pcVar3 = "false";
        }
    }
    else {
        _printk(0x80036b2,"super_speed_show");
        pcVar3 = "false";
    }
    iVar1 = snprintf(arg2,0x1000,0x80039e4,pcVar3);
    return iVar1;
}


// ===== sym.super_speed_store @ 0x0800f324 (size 16) =====

ulong sym.super_speed_store(void)

{
    return 0;
}


// ===== sym.bus_vote_show @ 0x0800f334 (size 108) =====

int64_t sym.bus_vote_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    char *pcVar1;
    char *pcVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x98) + 0x32c);
    pcVar1 = "Fixed bus vote: max";
    if (iVar3 != 4) {
        pcVar1 = "Do not have fixed bus vote";
    }
    pcVar2 = "Fixed bus vote: min";
    if (iVar3 != 3) {
        pcVar2 = pcVar1;
    }
    iVar3 = scnprintf(arg2,0x1000,0x80039e4,pcVar2);
    return iVar3;
}


// ===== sym.bus_vote_store @ 0x0800f3a0 (size 248) =====

int64_t sym.bus_vote_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint uVar2;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    uVar1 = sysfs_streq(arg2,0x80028ed);
    if ((uVar1 & 1) == 0) {
        uVar1 = sysfs_streq(arg2,0x80015ee);
        if ((uVar1 & 1) == 0) {
            uVar1 = sysfs_streq(arg2,"cancel");
            if ((uVar1 & 1) == 0) {
                _dev_err(arg1,"min/max/cancel only.\n");
                return -0x16;
            }
            *(arg1_00 + 0x32c) = 0;
            if (*(arg1_00 + 0x3b0) != 0) {
                return arg3;
            }
            if ((*(arg1_00 + 0x348) == '\0') || (*(arg1_00 + 0x34c) != 3)) {
                uVar1 = *(arg1_00 + 0x328);
            }
            else {
                uVar1 = 2;
            }
            goto code_r0x0800f410;
        }
        uVar2 = 4;
    }
    else {
        uVar2 = 3;
    }
    *(arg1_00 + 0x32c) = uVar2;
    if (*(arg1_00 + 0x3b0) != 0) {
        return arg3;
    }
    uVar1 = *(arg1_00 + 0x32c);
code_r0x0800f410:
    sym.dwc3_msm_update_bus_bw(arg1_00,uVar1);
    return arg3;
}


// ===== sym.enable_l1_suspend_show @ 0x0800f4a0 (size 84) =====

int64_t sym.enable_l1_suspend_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8002a80,*(*(*(*(*(arg1 + 0x98) + 0x28) + 0xa8) + 0x370) + 0x420) >> 0x10 & 1);
    return iVar1;
}


// ===== sym.enable_l1_suspend_store @ 0x0800f4f4 (size 260) =====

uint64_t sym.enable_l1_suspend_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    ulong *arg1_00;
    ulong *puVar9;
    uint64_t *unaff_x22;
    ulong unaff_x30;
    char acStack_7c [4];
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint8_t auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    auStack_3c[0] = 0;
    puVar9 = *(*(*(arg1 + 0x98) + 0x28) + 0xa8);
    uVar8 = arg3;
    uVar4 = kstrtobool(arg2,auStack_3c);
    if (uVar4 < 0) {
        uVar8 = uVar4;
        pcVar7 = "enable_l1_suspend_store";
        _dev_err(puVar9[0x32],"%s: can\'t get entered value: %d\n","enable_l1_suspend_store",uVar8);
        arg3 = uVar4;
    }
    else {
        *(puVar9[0x6e] + 0x420) = *(puVar9[0x6e] + 0x420) & 0xfffeffff | auStack_3c[0] << 0x10;
        pcVar7 = "disabled";
        if (auStack_3c[0] != 0) {
            pcVar7 = "enabled";
        }
        *(puVar9 + 0x9b) = *(puVar9 + 0x9b) & 0xfffbffff | (auStack_3c[0] ^ 1) << 0x12;
        _printk(0x8002bf5,pcVar7);
        pcVar7 = arg2;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_38) {
        iVar6 = __stack_chk_fail();
        *extraout_x18 = sym.dynamic_disable_store;
        pcStack_68 = sym.dynamic_disable_store;
        iVar3 = sp_el0;
        iStack_78 = *(iVar3 + 0x5e0);
        arg1_00 = *(iVar6 + 0x98);
        acStack_7c[0] = '\0';
        puStack_70 = &stack0xffffffffffffffd0;
        kstrtobool(pcVar7,acStack_7c);
        if (acStack_7c[0] == '\0') {
            if (*(arg1_00 + 0x152) == '\0') {
                pcVar7 = "%s: USB already enabled\n";
            }
            else if ((arg1_00[2] == 0) || (iVar5 = sym.readl(arg1_00[2]), iVar5 == 0xf)) {
                *(arg1_00 + 0x152) = 0;
                __pm_runtime_disable(*arg1_00,1);
                __pm_runtime_set_status(*arg1_00,2);
                pm_runtime_enable(*arg1_00);
                sym.dwc3_ext_event_notify(arg1_00);
                flush_delayed_work(arg1_00 + 0x52);
                pcVar7 = "%s: Dynamic USB enable\n";
            }
            else {
                pcVar7 = "%s: Unable to enable USB\n";
            }
        }
        else {
            if (*(arg1_00 + 0x152) == '\0') {
                puVar9 = arg1_00 + 0x52;
                flush_delayed_work(puVar9);
                unaff_x22 = arg1_00 + 99;
                goto code_r0x0800f784;
            }
            pcVar7 = "%s: USB already disabled\n";
        }
        while( true ) {
            ipc_log_string(arg1_00[0xad],pcVar7,"dynamic_disable_store");
            iVar3 = sp_el0;
            if (*(iVar3 + 0x5e0) == iStack_78) break;
            __stack_chk_fail();
code_r0x0800f784:
            Hint_Prefetch(unaff_x22,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
                if (bVar2) {
                    *unaff_x22 = *unaff_x22 | 1;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            Hint_Prefetch(unaff_x22,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
                if (bVar2) {
                    *unaff_x22 = *unaff_x22 & 0xfffffffffffffffd;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            queue_delayed_work_on(0x20,arg1_00[0x51],puVar9,0);
            flush_delayed_work(puVar9);
            uVar4 = arg1_00[99];
            while ((uVar4 >> 3 & 1) != 0) {
                msleep(0x14);
                uVar4 = *unaff_x22;
            }
            pcVar7 = "%s: Dynamic USB disable\n";
            *(arg1_00 + 0x152) = 1;
        }
        return uVar8;
    }
    return arg3;
}


// ===== sym.dynamic_disable_store @ 0x0800f5f8 (size 468) =====

int64_t sym.dynamic_disable_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    int iVar4;
    char *pcVar5;
    uint32_t uVar6;
    ulong *in_x18;
    ulong *arg1_00;
    ulong *unaff_x21;
    uint64_t *unaff_x22;
    ulong unaff_x30;
    char acStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    arg1_00 = *(arg1 + 0x98);
    acStack_3c[0] = '\0';
    kstrtobool(arg2,acStack_3c);
    if (acStack_3c[0] == '\0') {
        if (*(arg1_00 + 0x152) == '\0') {
            pcVar5 = "%s: USB already enabled\n";
        }
        else if ((arg1_00[2] == 0) || (iVar4 = sym.readl(arg1_00[2]), iVar4 == 0xf)) {
            *(arg1_00 + 0x152) = 0;
            __pm_runtime_disable(*arg1_00,1);
            __pm_runtime_set_status(*arg1_00,2);
            pm_runtime_enable(*arg1_00);
            sym.dwc3_ext_event_notify(arg1_00);
            flush_delayed_work(arg1_00 + 0x52);
            pcVar5 = "%s: Dynamic USB enable\n";
        }
        else {
            pcVar5 = "%s: Unable to enable USB\n";
        }
    }
    else {
        if (*(arg1_00 + 0x152) == '\0') {
            unaff_x21 = arg1_00 + 0x52;
            flush_delayed_work(unaff_x21);
            unaff_x22 = arg1_00 + 99;
            goto code_r0x0800f784;
        }
        pcVar5 = "%s: USB already disabled\n";
    }
    while( true ) {
        ipc_log_string(arg1_00[0xad],pcVar5,"dynamic_disable_store");
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
code_r0x0800f784:
        Hint_Prefetch(unaff_x22,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
            if (bVar2) {
                *unaff_x22 = *unaff_x22 | 1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        Hint_Prefetch(unaff_x22,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
            if (bVar2) {
                *unaff_x22 = *unaff_x22 & 0xfffffffffffffffd;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        queue_delayed_work_on(0x20,arg1_00[0x51],unaff_x21,0);
        flush_delayed_work(unaff_x21);
        uVar6 = arg1_00[99];
        while ((uVar6 >> 3 & 1) != 0) {
            msleep(0x14);
            uVar6 = *unaff_x22;
        }
        pcVar5 = "%s: Dynamic USB disable\n";
        *(arg1_00 + 0x152) = 1;
    }
    return arg3;
}


// ===== sym.xhci_test_store @ 0x0800f7cc (size 220) =====

int64_t sym.xhci_test_store(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x98);
    if (*(iVar3 + 0x28) != 0) {
        if ((*(iVar3 + 0x352) == '\0') && (*(iVar3 + 0x358) == 0)) {
            iVar2 = *(*(iVar3 + 0x28) + 0xa8);
            __pm_runtime_resume(*(iVar2 + 0x1a0) + 0x10,0);
            pm_runtime_forbid(*(iVar2 + 0x1a0) + 0x10);
            uVar1 = sym.readl(*(iVar3 + 8) + 0x424);
            _dev_info(arg1,"USB PORTPMSC val:%x\n",uVar1);
            _dev_info(arg1,"writing %x to USB PORTPMSC\n",uVar1 | 0x40000000);
            sym.writel(uVar1 | 0x40000000,*(iVar3 + 8) + 0x424);
        }
        else {
            _dev_err(arg1,"USB is not in host mode\n");
        }
    }
    return arg2;
}


// ===== sym.dwc3_msm_pm_suspend @ 0x0800f8a8 (size 336) =====

ulong sym.dwc3_msm_pm_suspend(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong *arg1_00;
    int64_t iVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    if (arg1_00[5] != 0) {
        sym.dwc3_dbg_print(arg1_00[5],0xff,0x800278c,0);
        if ((*(arg1_00 + 0x6d) == '\0') || (*(arg1_00 + 0x69) == '\0')) {
            if (arg1_00[0x76] != 0) {
                *(arg1_00 + 0x3c) = 1;
                return 0;
            }
            _dev_err(*arg1_00,"Abort PM suspend!! (USB is outside LPM)\n");
            return 0xfffffff0;
        }
        iVar2 = arg1_00[0x37];
        if ((iVar2 != 0) && (pcVar3 = *(iVar2 + 0x150), pcVar3 != NULL)) {
            __cfi_slowpath_diag(0x64ea1348e09a6946,pcVar3,0x8001370);
            (*pcVar3)(iVar2,3);
            iVar2 = arg1_00[0x37];
        }
        *(iVar2 + 0x10) = *(iVar2 + 0x10) & 0xfffffffe;
        iVar2 = arg1_00[0x38];
        if ((iVar2 != 0) && (pcVar3 = *(iVar2 + 0x150), pcVar3 != NULL)) {
            __cfi_slowpath_diag(0x64ea1348e09a6946,pcVar3,0x8001370);
            (*pcVar3)(iVar2,5);
            iVar2 = arg1_00[0x38];
        }
        *(iVar2 + 0x10) = *(iVar2 + 0x10) & 0xfffffffe;
    }
    uVar1 = sym.dwc3_msm_suspend(arg1_00,1);
    if (uVar1 == 0) {
        *(arg1_00 + 0x3c) = 1;
    }
    return uVar1;
}


// ===== sym.dwc3_msm_pm_resume @ 0x0800f9fc (size 412) =====

int sym.dwc3_msm_pm_resume(int64_t arg1)

{
    int iVar1;
    ulong in_x8;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *arg1_00;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    sym.dwc3_dbg_print(in_x8,0xff,0x80019cf,0);
    *(arg1_00 + 0x3c) = 0;
    if (*(arg1_00 + 0x69) != '\0') {
        iVar1 = sym.dwc3_msm_resume(arg1_00);
        if (iVar1 != 0) {
            _dev_err(*arg1_00,"%s: dwc3_msm_resume failed\n","dwc3_msm_pm_resume");
            *(arg1_00 + 0x3c) = 1;
            return iVar1;
        }
        __pm_runtime_disable(arg1,1);
        __pm_runtime_set_status(arg1,0);
        pm_runtime_enable(arg1);
        if ((*(arg1_00 + 0x6d) != '\0') && (*(arg1_00 + 0x69) != '\0')) {
            *(arg1_00[0x37] + 0x10) = *(arg1_00[0x37] + 0x10) | 1;
            iVar3 = arg1_00[0x37];
            if ((iVar3 != 0) && (pcVar4 = *(iVar3 + 0x148), pcVar4 != NULL)) {
                __cfi_slowpath_diag(0x64ea1348e09a6946,pcVar4,0x8001310);
                (*pcVar4)(iVar3,3);
            }
            if (arg1_00[5] == 0) {
                puVar2 = arg1_00 + 0xa0;
            }
            else {
                puVar2 = *(arg1_00[5] + 0xa8) + 0x450;
            }
            if (4 < *puVar2) {
                *(arg1_00[0x38] + 0x10) = *(arg1_00[0x38] + 0x10) | 1;
                iVar3 = arg1_00[0x38];
                if ((iVar3 != 0) && (pcVar4 = *(iVar3 + 0x148), pcVar4 != NULL)) {
                    __cfi_slowpath_diag(0x64ea1348e09a6946,pcVar4,0x8001310);
                    (*pcVar4)(iVar3,5);
                }
            }
        }
        queue_work_on(0x20,arg1_00[0x50],arg1_00 + 0x43);
    }
    return 0;
}


// ===== sym.dwc3_msm_runtime_suspend @ 0x0800fb98 (size 152) =====

void sym.dwc3_msm_runtime_suspend(int64_t arg1)

{
    int64_t noname_0;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    noname_0 = *(arg1_00 + 0x28);
    if (noname_0 == 0) {
        sym.dwc3_dbg_print(0,0xff,0x80035ce,0);
    }
    else {
        iVar1 = *(noname_0 + 0xa8);
        sym.dwc3_dbg_print(noname_0,0xff,0x80035ce,0);
        if (iVar1 != 0) {
            device_init_wakeup(*(iVar1 + 400),0);
        }
    }
    sym.dwc3_msm_suspend(arg1_00,0);
    return;
}


// ===== sym.dwc3_msm_runtime_resume @ 0x0800fc30 (size 84) =====

void sym.dwc3_msm_runtime_resume(int64_t arg1)

{
    ulong in_x8;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    sym.dwc3_dbg_print(in_x8,0xff,0x80038f6,0);
    sym.dwc3_msm_resume(arg1_00);
    return;
}


// ===== sym.dwc3_msm_runtime_idle @ 0x0800fc84 (size 72) =====

ulong sym.dwc3_msm_runtime_idle(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_dbg_print(*(arg1 + 0x98),0xff,0x800172f,0);
    return 0;
}


// ===== sym.dwc3_msm_suspend @ 0x0800fccc (size 1752) =====

ulong sym.dwc3_msm_suspend(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t *puVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int iVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uint32_t *puVar10;
    ulong *in_x18;
    int64_t iVar11;
    code *pcVar12;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar extraout_q0_01 [16];
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x28) == 0) {
        iVar11 = 0;
    }
    else {
        iVar11 = *(*(arg1 + 0x28) + 0xa8);
    }
    iVar1 = arg1 + 0x4a0;
    mutex_lock(iVar1);
    if (*(arg1 + 0x3b0) != 0) goto code_r0x0800fd20;
    *(arg1 + 0x3b4) = 1;
    irq_to_desc(*(arg1 + 0x20c));
    cancel_delayed_work_sync(arg1 + 0x418);
    if ((*(arg1 + 0x350) != '\0') && (*(arg1 + 0x3e0) != 0)) {
        cpu_latency_qos_update_request(arg1 + 1000,0xffffffff);
        *(arg1 + 0x350) = 0;
    }
    if (iVar11 != 0) {
        if ((*(arg1 + 0x348) == '\0') && ((*(*(iVar11 + 0x268) + 0x1c) & 1) != 0)) goto code_r0x0800fdc8;
        if ((*(arg1 + 0x324) == 3) && ((*(arg1 + 800) == 3 && (*(*(iVar11 + 0x370) + 0x68) != 7)))) {
            _printk(0x8002793,"dwc3_msm_suspend");
            _printk(0x8001eba,"dwc3_msm_suspend");
            goto code_r0x0800fdc8;
        }
    }
    if ((*(arg1 + 0x352) == '\0') && ((*(arg1 + 0x324) == 3 && (*(arg1 + 800) == 2)))) {
code_r0x0800fdc8:
        mutex_unlock(iVar1);
        return 0xfffffff0;
    }
    if ((*(arg1 + 0x348) != '\0') || (*(arg1 + 0x34a) != '\0')) {
        if (((((arg2 & 1U) == 0) && (uVar8 = sym.dwc3_msm_is_superspeed(arg1), (uVar8 & 1) != 0)) &&
            (*(arg1 + 0x278) == '\0')) && (*(arg1 + 0x3ac) == 0)) {
            _dev_err(*arg1,"Not in P3,aborting LPM sequence\n");
            mutex_unlock(iVar1);
            if (*(arg1 + 0x348) == '\0') {
                return 0xfffffff0;
            }
            if (iVar11 != 0) {
                __pm_runtime_resume(*(iVar11 + 0x1a0) + 0x10,1);
                return 0xfffffff0;
            }
            return 0xfffffff0;
        }
        sym.writel(0x30,*(arg1 + 8) + 0xf8858);
        uVar5 = sym.readl(*(arg1 + 8) + 0xc200);
        sym.writel(uVar5 | 0x140,*(arg1 + 8) + 0xc200);
        iVar11 = _usleep_range_state + 2;
        do {
            if (iVar11 - _usleep_range_state < 0) break;
            uVar5 = sym.readl(*(arg1 + 8) + 0xf8858);
        } while ((uVar5 >> 4 & 1) == 0);
        if ((uVar5 >> 4 & 1) == 0) {
            _dev_err(*arg1,"could not transition HS PHY to L2\n");
        }
        sym.writel(0x10,*(arg1 + 8) + 0xf8858);
    }
    if (*(arg1 + 0x20c) != 0) {
        disable_irq();
    }
    noname_1 = disable_irq_nosync(*(arg1 + 0x1ec));
    if (*(arg1 + 0x28) != 0) {
        iVar11 = *(*(arg1 + 0x28) + 0xa8);
        *(*(arg1 + 0x1b8) + 0x10) = *(*(arg1 + 0x1b8) + 0x10) & 0xffffffcf;
        if (*(arg1 + 0x348) == '\0') {
            if ((*(arg1 + 800) == 3) && (uVar5 = *(*(iVar11 + 0x370) + 0x58) - 1, uVar5 < 3)) {
                *(*(arg1 + 0x1b8) + 0x10) = *(*(arg1 + 0x1b8) + 0x10) | *(uVar5 * 4 + 0x80042ac);
            }
        }
        else {
            uVar5 = sym.readl(*(arg1 + 8) + 4);
            uVar5 = uVar5 >> 0x18 & 0x7f;
            noname_1 = extraout_q0;
            if (uVar5 != 0) {
                iVar11 = 0;
                do {
                    uVar6 = sym.readl(*(arg1 + 8) + iVar11 + 0x420);
                    if ((uVar6 & 0x20001) == 1) {
                        uVar6 = uVar6 & 0x3c00;
                        uVar9 = 0x10;
                        if ((uVar6 != 0x400) && (uVar6 != 0xc00)) {
                            if (uVar6 != 0x800) goto code_r0x0801001c;
                            uVar9 = 0x20;
                        }
                        *(*(arg1 + 0x1b8) + 0x10) = *(*(arg1 + 0x1b8) + 0x10) | uVar9;
                    }
code_r0x0801001c:
                    iVar11 = iVar11 + 0x10;
                    noname_1 = extraout_q0_00;
                } while (uVar5 * 0x10 - iVar11 != 0);
            }
        }
    }
    iVar11 = *(arg1 + 0x1b8);
    if ((iVar11 != 0) && (pcVar12 = *(iVar11 + 0x138), pcVar12 != NULL)) {
        __cfi_slowpath_diag(0x9eb30a7a6c5b472a,pcVar12,0x8001330);
        noname_1 = (*pcVar12)(iVar11,1);
    }
    if (*(arg1 + 0x348) == '\0') {
        uVar5 = 1;
    }
    else if ((*(*(arg1 + 0x1b8) + 0x10) & 0x30) == 0) {
        uVar5 = 0;
    }
    else {
        uVar5 = sym.dwc3_msm_is_superspeed(arg1);
        uVar5 = uVar5 ^ 1;
        noname_1 = extraout_q0_01;
    }
    if (*(arg1 + 0x28) == 0) {
        puVar10 = arg1 + 0x500;
    }
    else {
        puVar10 = *(*(arg1 + 0x28) + 0xa8) + 0x450;
    }
    if (*puVar10 < 5) {
        if ((*(arg1 + 0x360) & 1) != 0) goto code_r0x0801010c;
    }
    else {
        if ((*(arg1 + 0x360) & 1) == 0 || (uVar5 & 1) != 0) {
            if (*(arg1 + 0x348) != '\0') {
                uVar5 = sym.readl(*(arg1 + 8) + 0xc2c0);
                sym.writel(uVar5 | 0x400000,*(arg1 + 8) + 0xc2c0);
            }
            uVar8 = sym.dwc3_msm_is_superspeed(arg1);
            if ((uVar8 & 1) != 0) {
                *(*(arg1 + 0x1c0) + 0x10) = *(*(arg1 + 0x1c0) + 0x10) | 2;
            }
            uVar8 = 1;
            noname_1 = sym.usb_phy_set_suspend(*(arg1 + 0x1c0),1);
        }
        else {
code_r0x0801010c:
            uVar8 = 8;
        }
        *(arg1 + 0x370) = *(arg1 + 0x370) | uVar8;
    }
    if ((*(arg1 + 0x348) != '\0') && ((*(arg1 + 0x360) >> 1 & 1) != 0)) {
        *(arg1 + 0x370) = *(arg1 + 0x370) | 8;
    }
    if ((*(arg1 + 0x370) >> 3 & 1) != 0) {
        iVar11 = sym.readl(*(arg1 + 8) + 0xf8858);
        sym.writel(iVar11,*(arg1 + 8) + 0xf8858);
        uVar5 = sym.readl(*(arg1 + 8) + 0xf885c);
        uVar5 = (*(arg1 + 0x360) & 2) << 4 | uVar5;
        uVar6 = uVar5;
        if (((*(arg1 + 0x360) & 1) != 0) && (uVar6 = uVar5 | 0x1008, (*(arg1 + 0x370) & 1) != 0)) {
            uVar6 = uVar5;
        }
        sym.writel(uVar6,*(arg1 + 8) + 0xf885c);
        noname_1 = enable_irq(*(arg1 + 0x1ec));
    }
    DataSynchronizationBarrier(3,2,0);
    if ((((*(arg1 + 0x348) == '\0') && (*(arg1 + 0x34a) == '\0')) || (*(arg1 + 0x278) != '\0')) || ((arg2 & 1U) != 0)) {
        uVar8 = *(arg1 + 0x370) | 4;
        *(arg1 + 0x370) = uVar8;
    }
    else {
        uVar8 = *(arg1 + 0x370);
    }
    sym.dwc3_clk_enable_disable(arg1,noname_1,uVar8 >> 2 & 1);
    if ((((*(arg1 + 0x370) >> 2 & 1) != 0) && (*(arg1 + 0x1b0) != 0)) && (*(arg1 + 0x1b0) < 0xfffffffffffff001)) {
        qcom_clk_set_flags(*(arg1 + 0x148),3);
        iVar7 = regulator_disable(*(arg1 + 0x1b0));
        if (iVar7 != 0) {
            _dev_err(*arg1,"unable to disable usb3 gdsc\n");
        }
    }
    sym.dwc3_msm_update_bus_bw(arg1,0);
    if (*(arg1 + 0x3b8) == 0) {
        pm_relax();
    }
    else {
        pm_wakeup_dev_event(*arg1,*(arg1 + 0x3b8),0);
    }
    *(arg1 + 0x3b0) = 1;
    if ((*(arg1 + 0x34a) != '\0') || (*(arg1 + 0x348) != '\0')) {
        if ((*(arg1 + 0x355) == '\0') && (*(arg1 + 0x1e4) != 0)) {
            sym.configure_nonpdc_usb_interrupt(arg1,arg1 + 0x1e4,1);
            sym.configure_nonpdc_usb_interrupt(arg1,arg1 + 0x204,1);
        }
        else {
            sym.configure_usb_wakeup_interrupts(arg1);
        }
        *(arg1 + 0x370) = *(arg1 + 0x370) | 2;
    }
    if ((*(arg1 + 0x360) != 0) && ((*(arg1 + 0x370) & 1) == 0)) {
        enable_irq(*(arg1 + 0x1ec));
    }
    _dev_info(*arg1,"DWC3 in low power mode\n");
    sym.dwc3_dbg_print(arg1 + 0x3b0,0xff,0x8001af7,*(arg1 + 0x3b0));
    puVar2 = arg1 + 0x318;
    Hint_Prefetch(puVar2,2,0,1);
    do {
        uVar8 = *puVar2;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
            *puVar2 = uVar8 & 0xfffffffffffffff7;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    if ((uVar8 >> 3 & 1) != 0) {
        queue_delayed_work_on(0x20,*(arg1 + 0x288),arg1 + 0x290,0);
    }
code_r0x0800fd20:
    mutex_unlock(iVar1);
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x080103a4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080103e8

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
    //switch table (4 cases) at 0x8003bc8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80103fc);
    (*pcVar1)();
}


// ===== sym.dwc3_dbg_trace_log_ctrl @ 0x080103fc (size 144) =====

void sym.dwc3_dbg_trace_log_ctrl(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 != 0) && (iVar1 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xb20,500), iVar1 != 0)) {
        usb_decode_ctrl(iVar1,500,*arg2,*(arg2 + 1),*(arg2 + 2),*(arg2 + 4),*(arg2 + 6));
        ipc_log_string(arg1,"dbg_trace_log_ctrl: %s",iVar1);
        kfree(iVar1);
    }
    return;
}


// ===== sym.dwc3_dbg_trace_log_request @ 0x0801048c (size 164) =====

void sym.dwc3_dbg_trace_log_request(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    uint32_t uVar4;
    ulong in_x0;
    ulong in_x2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 != 0) {
        *in_x18 = unaff_x30;
        uVar4 = *(arg1 + 0x28);
        uVar1 = 0x80038fd;
        if ((uVar4 & 0x40000) != 0) {
            uVar1 = 0x8001cbd;
        }
        uVar2 = 0x8001d7d;
        if ((uVar4 & 0x80000) != 0) {
            uVar2 = 0x8001737;
        }
        uVar3 = 0x8002909;
        if ((uVar4 & 0x20000) != 0) {
            uVar3 = 0x8001aff;
        }
        ipc_log_string(in_x0,"%s: %s: req %p length %u/%u %s%s%s ==> %d",in_x2,*(arg1 + 0x78) + 0xb8,arg1,
                       *(arg1 + 0x58),*(arg1 + 8),uVar1,uVar2,uVar3,*(arg1 + 0x54));
    }
    return;
}


// ===== sym.dwc3_dbg_trace_ep_cmd @ 0x08010530 (size 216) =====

void sym.dwc3_dbg_trace_ep_cmd(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong in_x0;
    char *pcVar2;
    int in_w4;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2 - 1;
    if ((uVar1 & 0xff) < 9) {
        pcVar2 = *(uVar1 * 8 + 0x80042b8);
    }
    else {
        pcVar2 = "UNKNOWN command";
    }
    if (in_w4 < 1) {
        if (in_w4 == -0x6e) {
            pcVar3 = "Timed Out";
            goto code_r0x080105dc;
        }
        if (in_w4 == 0) {
            pcVar3 = "Successful";
            goto code_r0x080105dc;
        }
    }
    else {
        if (in_w4 == 1) {
            pcVar3 = "No Resource";
            goto code_r0x080105dc;
        }
        if (in_w4 == 2) {
            pcVar3 = "Bus Expiry";
            goto code_r0x080105dc;
        }
    }
    pcVar3 = "UNKNOWN";
code_r0x080105dc:
    ipc_log_string(in_x0,"dbg_send_ep_cmd: %s: cmd \'%s\' [%x] params %08x %08x %08x --> status: %s",arg1 + 0xb8,
                   pcVar2,arg2 & 0xffffffff,*(arg3 + 8),*(arg3 + 4),*arg3,pcVar3);
    return;
}


// ===== sym.dwc3_dbg_trace_trb_complete @ 0x08010608 (size 332) =====

void sym.dwc3_dbg_trace_trb_complete(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    uint uVar2;
    ulong uVar3;
    ulong uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong in_x0;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    char *pcVar11;
    uint uVar12;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = *(arg2 + 8);
    uVar6 = *(arg2 + 0xc);
    uVar3 = 0x80024b5;
    if ((uVar5 >> 0x18 & 3) != 1) {
        uVar3 = 0x8002fc5;
    }
    uVar4 = 0x8002c27;
    if ((uVar5 >> 0x18 & 3) != 0) {
        uVar4 = uVar3;
    }
    if ((*(*(arg1 + 0x38) + 3) & 1) == 0) {
        uVar4 = 0x8003631;
    }
    uVar7 = (uVar6 & 0x3f0) - 0x10;
    if (uVar7 < 0x80) {
        pcVar11 = *((uVar7 >> 4) * 8 + 0x8004300);
    }
    else {
        pcVar11 = "UNKNOWN";
    }
    uVar12 = 99;
    uVar1 = uVar12;
    if ((uVar6 & 0x800) != 0) {
        uVar1 = 0x43;
    }
    uVar8 = 0x73;
    uVar2 = uVar8;
    if ((uVar6 & 0x400) != 0) {
        uVar2 = 0x53;
    }
    if ((uVar6 & 8) != 0) {
        uVar8 = 0x53;
    }
    if ((uVar6 & 4) != 0) {
        uVar12 = 0x43;
    }
    uVar9 = 0x6c;
    if ((uVar6 & 2) != 0) {
        uVar9 = 0x4c;
    }
    uVar10 = 0x68;
    if ((uVar6 & 1) != 0) {
        uVar10 = 0x48;
    }
    ipc_log_string(in_x0,"%s: %s: trb %p (E%d:D%d) buf %08x%08x sz %s%d ctrl %08x (%c%c%c%c:%c%c:%s)",arg3,
                   arg1 + 0xb8,arg2,*(arg1 + 0xa8),*(arg1 + 0xa9),*(arg2 + 4),*arg2,uVar4,uVar5,uVar6,uVar10,
                   uVar9,uVar12,uVar8,uVar2,uVar1,pcVar11);
    return;
}


// ===== sym.dwc3_dbg_trace_event @ 0x08010754 (size 1232) =====

void sym.dwc3_dbg_trace_event(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int iVar7;
    ulong *puVar8;
    int64_t iVar9;
    char *pcVar10;
    uint uVar11;
    uint uVar12;
    uint uVar13;
    ulong *in_x18;
    int64_t iVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = arg2;
    puVar8 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xb20,500);
    if (puVar8 == NULL) {
        return;
    }
    if ((arg2 & 1U) != 0) {
        uVar2 = uVar6 >> 8 & 0xf;
        if (uVar2 < 0xc) {
    //switch table (12 cases) at 0x8004150
            switch(*(uVar2 + 0x8004150) * 4 + 0x80108ac) {
            case 0x80108b0:
                pcVar10 = "Disconnect: [%s]";
                break;
            case 0x8010a0c:
                pcVar10 = "Reset [%s]";
                break;
            case 0x8010a24:
                pcVar10 = "Connection Done [%s]";
                break;
            case 0x8010a3c:
                pcVar10 = "Link Change [%s]";
                break;
            case 0x8010a54:
                pcVar10 = "WakeUp [%s]";
                break;
            case 0x8010a6c:
                goto code_r0x08010a6c;
            case 0x8010a88:
                pcVar10 = "Suspend [%s]";
                break;
            case 0x8010aa0:
                pcVar10 = "Start-Of-Frame [%s]";
                break;
            case 0x8010ab8:
                pcVar10 = "Erratic Error [%s]";
                break;
            case 0x8010ad0:
                pcVar10 = "Command Complete [%s]";
                break;
            case 0x8010ae8:
                pcVar10 = "Overflow [%s]";
            }
            snprintf(puVar8,500,pcVar10,*((uVar6 >> 0x10 & 0xf) * 8 + 0x8004340));
        }
        else {
code_r0x08010a6c:
            *puVar8 = 0x4e574f4e4b4e55;
        }
        goto code_r0x08010b48;
    }
    uVar1 = 0x8001870;
    if ((arg2 & 2U) != 0) {
        uVar1 = 0x8003728;
    }
    uVar2 = *(arg3 + 0x470);
    iVar7 = scnprintf(puVar8,500,"ep%d%s: ",uVar6 >> 2 & 0xf,uVar1);
    iVar14 = iVar7;
    uVar3 = (uVar6 >> 6 & 0xf) - 1;
    if (6 < uVar3) {
code_r0x080109a8:
        iVar9 = puVar8 + iVar14;
        iVar14 = 500 - iVar14;
        pcVar10 = "UNKNOWN";
        goto code_r0x08010b44;
    }
    uVar5 = uVar6 >> 1 & 0x1f;
    uVar4 = uVar6 >> 0xc;
    //switch table (7 cases) at 0x800415c
    switch(*(uVar3 + 0x800415c) * 4 + 0x8010808) {
    case 0x801080c:
        uVar12 = 0x73;
        if ((uVar4 & 2) != 0) {
            uVar12 = 0x53;
        }
        uVar13 = 0x69;
        if ((uVar4 & 4) != 0) {
            uVar13 = 0x49;
        }
        uVar11 = 0x6c;
        if ((uVar4 & 8) != 0) {
            uVar11 = 0x4c;
        }
        iVar7 = scnprintf(puVar8 + iVar14,500 - iVar14,"Transfer Complete (%c%c%c)",uVar12,uVar13,uVar11);
        if (uVar5 < 2) {
            if (uVar2 < 4) {
                pcVar10 = *(uVar2 * 8 + 0x80043c0);
            }
            else {
                pcVar10 = "UNKNOWN";
            }
            scnprintf(puVar8 + iVar14 + iVar7,500 - (iVar14 + iVar7)," [%s]",pcVar10);
        }
        goto code_r0x08010b48;
    case 0x80108c8:
        uVar12 = 0x73;
        if ((uVar4 & 2) != 0) {
            uVar12 = 0x53;
        }
        uVar13 = 0x69;
        if ((uVar4 & 4) != 0) {
            uVar13 = 0x49;
        }
        uVar11 = 0x6d;
        if ((uVar4 & 8) != 0) {
            uVar11 = 0x4d;
        }
        scnprintf(puVar8 + iVar14,500 - iVar14,"Transfer In Progress [%d] (%c%c%c)",uVar6 >> 0x10,uVar12,uVar13,
                  uVar11);
        goto code_r0x08010b48;
    case 0x801091c:
        pcVar10 = " (Not Active)";
        if ((arg2 & 0x8000U) != 0) {
            pcVar10 = " (Active)";
        }
        iVar7 = scnprintf(puVar8 + iVar14,500 - iVar14,"Transfer Not Ready [%d]%s",uVar6 >> 0x10,pcVar10);
        if (1 < uVar5) goto code_r0x08010b48;
        iVar14 = iVar14 + iVar7;
        uVar6 = uVar6 >> 0xc & 3;
        if (uVar6 == 2) {
            iVar9 = puVar8 + iVar14;
            iVar14 = 500 - iVar14;
            pcVar10 = " [Status Phase]";
        }
        else {
            if (uVar6 != 1) goto code_r0x08010b48;
            iVar9 = puVar8 + iVar14;
            iVar14 = 500 - iVar14;
            pcVar10 = " [Data Phase]";
        }
        break;
    case 0x801098c:
        iVar9 = puVar8 + iVar14;
        iVar14 = 500 - iVar14;
        pcVar10 = "FIFO";
        break;
    case 0x80109a8:
        goto code_r0x080109a8;
    case 0x80109c4:
        iVar9 = puVar8 + iVar14;
        iVar14 = 500 - iVar14;
        if ((uVar4 & 0xf) == 1) {
            scnprintf(iVar9,iVar14," Stream %d Found",uVar6 >> 0x10);
            goto code_r0x08010b48;
        }
        pcVar10 = " Stream Not Found";
        break;
    case 0x80109f0:
        iVar9 = puVar8 + iVar14;
        iVar14 = 500 - iVar14;
        pcVar10 = "Endpoint Command Complete";
    }
code_r0x08010b44:
    scnprintf(iVar9,iVar14,pcVar10);
code_r0x08010b48:
    ipc_log_string(arg1,"event (%08x): %s",arg2 & 0xffffffff,puVar8);
    kfree(puVar8);
    return;
}


// ===== sym.dwc3_dbg_print @ 0x08010b84 (size 128) =====

void sym.dwc3_dbg_print(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg1 & 0xff;
    if (uVar1 == 0xff) {
        if (arg2 == 0) {
            return;
        }
    }
    else {
        if (arg2 == 0) {
            return;
        }
        if ((_segment.ehdr & 1 << (uVar1 >> 1 & 0x1f)) == 0) {
            return;
        }
    }
    ipc_log_string(in_x0,"%02X %-25.25s %4i ?\t%s",uVar1,arg2,arg3 & 0xffffffff);
    return;
}


// ===== sym.dwc3_dbg_done @ 0x08010c04 (size 124) =====

void sym.dwc3_dbg_done(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg1 & 0xff;
    if ((uVar1 == 0xff) || ((_segment.ehdr & 1 << (uVar1 >> 1 & 0x1f)) != 0)) {
        ipc_log_string(in_x0,"%02X %-25.25s %4i ?\t%d",uVar1,"DONE",arg3 & 0xffffffff,arg2 & 0xffffffff);
    }
    return;
}


// ===== sym.dwc3_dbg_event @ 0x08010c80 (size 132) =====

void sym.dwc3_dbg_event(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg1 & 0xff;
    if (uVar1 == 0xff) {
        if (arg2 == 0) {
            return;
        }
    }
    else {
        if (arg2 == 0) {
            return;
        }
        if ((_segment.ehdr & 1 << (uVar1 >> 1 & 0x1f)) == 0) {
            return;
        }
    }
    ipc_log_string(in_x0,"%02X %-25.25s %4i ?\t%s",uVar1,arg2,arg3 & 0xffffffff,0x8003631);
    return;
}


// ===== sym.dwc3_dbg_queue @ 0x08010d04 (size 148) =====

void sym.dwc3_dbg_queue(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg1 & 0xff;
    if (uVar1 == 0xff) {
        if (arg2 == 0) {
            return;
        }
    }
    else {
        if (arg2 == 0) {
            return;
        }
        if ((_segment.ehdr & 1 << (uVar1 >> 1 & 0x1f)) == 0) {
            return;
        }
    }
    ipc_log_string(in_x0,"%02X %-25.25s %4i ?\t%d %d",uVar1,"QUEUE",arg3 & 0xffffffff,
                   (*(arg2 + 0x28) >> 0x11 ^ 0xffffffff) & 1,*(arg2 + 8));
    return;
}


// ===== sym.dwc3_dbg_setup @ 0x08010d98 (size 160) =====

void sym.dwc3_dbg_setup(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg1 & 0xff;
    if (uVar1 == 0xff) {
        if (arg2 == 0) {
            return;
        }
    }
    else {
        if (arg2 == 0) {
            return;
        }
        if ((_segment.ehdr & 1 << (uVar1 >> 1 & 0x1f)) == 0) {
            return;
        }
    }
    ipc_log_string(in_x0,"%02X %-25.25s ?\t%02X %02X %04X %04X %d",uVar1,"SETUP",*arg2,*(arg2 + 1),*(arg2 + 2),
                   *(arg2 + 4),*(arg2 + 6));
    return;
}


// ===== sym.dwc3_dbg_print_reg @ 0x08010e38 (size 60) =====

void sym.dwc3_dbg_print_reg(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 != 0) {
        *in_x18 = unaff_x30;
        ipc_log_string(in_x0,"%s = 0x%08x",arg1,arg2 & 0xffffffff);
    }
    return;
}


// ===== sym.dwc3_dbg_dma_unmap @ 0x08010e74 (size 156) =====

void sym.dwc3_dbg_dma_unmap(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar1 = arg1 & 0xff;
    if (1 < uVar1) {
        *in_x18 = unaff_x30;
        uVar2 = 0x8002d39;
        if ((arg1 & 1U) != 0) {
            uVar2 = 0x8002e9c;
        }
        uVar3 = 0x8003631;
        if ((*(*(arg2 + 0xa8) + 0xc) & 1) != 0) {
            uVar3 = 0x800203c;
        }
        ipc_log_string(in_x0,"%02X-%-3.3s %-25.25s 0x%pK %pad %u %pad %s",uVar1 >> 1,uVar2,"UNMAP",arg2,
                       arg2 + 0x10,*(arg2 + 8),arg2 + 0xb0,uVar3);
    }
    return;
}


// ===== sym.dwc3_dbg_dma_map @ 0x08010f10 (size 124) =====

void sym.dwc3_dbg_dma_map(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar1 = arg1 & 0xff;
    if (1 < uVar1) {
        *in_x18 = unaff_x30;
        uVar2 = 0x8002d39;
        if ((arg1 & 1U) != 0) {
            uVar2 = 0x8002e9c;
        }
        ipc_log_string(in_x0,"%02X-%-3.3s %-25.25s 0x%pK %pad %u %pad",uVar1 >> 1,uVar2,0x80014b4,arg2,arg2 + 0x10
                       ,*(arg2 + 8),arg2 + 0xb0);
    }
    return;
}


// ===== sym.dwc3_dbg_dma_dequeue @ 0x08010f8c (size 108) =====

void sym.dwc3_dbg_dma_dequeue(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar1 = arg1 & 0xff;
    if (1 < uVar1) {
        *in_x18 = unaff_x30;
        uVar2 = 0x8002d39;
        if ((arg1 & 1U) != 0) {
            uVar2 = 0x8002e9c;
        }
        ipc_log_string(in_x0,"%02X-%-3.3s %-25.25s 0x%pK %pad %pad",uVar1 >> 1,uVar2,"DEQUEUE",arg2,arg2 + 0x10,
                       arg2 + 0xb0);
    }
    return;
}


// ===== sym.dwc3_dbg_dma_queue @ 0x08010ff8 (size 100) =====

void sym.dwc3_dbg_dma_queue(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar1 = arg1 & 0xff;
    if (1 < uVar1) {
        *in_x18 = unaff_x30;
        uVar2 = 0x8002d39;
        if ((arg1 & 1U) != 0) {
            uVar2 = 0x8002e9c;
        }
        ipc_log_string(in_x0,"%02X-%-3.3s %-25.25s 0x%pK",uVar1 >> 1,uVar2,"QUEUE",arg2);
    }
    return;
}


// ===== sym.dwc3_msm_kretprobe_init @ 0x0801105c (size 124) =====

ulong sym.dwc3_msm_kretprobe_init(void)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = 0;
    do {
        iVar1 = register_kretprobe(obj.dwc3_msm_probes + iVar2);
        if (iVar1 < 0) {
            _printk(0x8001d90,*(iVar2 + 0x80008a8),iVar1);
        }
        iVar2 = iVar2 + 0xb0;
    } while (iVar2 != 0xa50);
    return 0;
}


// ===== sym.dwc3_msm_kretprobe_exit @ 0x080110d8 (size 168) =====

void sym.dwc3_msm_kretprobe_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_kretprobe(obj.dwc3_msm_probes);
    unregister_kretprobe(0x8000928);
    unregister_kretprobe(0x80009d8);
    unregister_kretprobe(0x8000a88);
    unregister_kretprobe(0x8000b38);
    unregister_kretprobe(0x8000be8);
    unregister_kretprobe(0x8000c98);
    unregister_kretprobe(0x8000d48);
    unregister_kretprobe(0x8000df8);
    unregister_kretprobe(0x8000ea8);
    unregister_kretprobe(0x8000f58);
    unregister_kretprobe(0x8001008);
    unregister_kretprobe(0x80010b8);
    unregister_kretprobe(0x8001168);
    unregister_kretprobe(0x8001218);
    return;
}


// ===== sym.entry_dwc3_gadget_run_stop @ 0x08011180 (size 176) =====

ulong sym.entry_dwc3_gadget_run_stop(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *arg1;
    if (*(arg1 + 8) == 0) {
        sym.dwc3_core_stop_hw_active_transfers(arg1_00);
        sym.dwc3_msm_notify_event(arg1_00,0xd,0);
        sym.dwc3_msm_notify_event(arg1_00,0xf,0);
    }
    else {
        iVar1 = irq_to_desc(*(arg1_00 + 0x434));
        if (iVar1 != 0) {
            for (iVar1 = *(iVar1 + 0x78); iVar1 != 0; iVar1 = *(iVar1 + 0x18)) {
                iVar2 = *(iVar1 + 0x28);
                if (iVar2 != 0) {
                    _dev_info(*(arg1_00 + 400),"Set IRQ thread:%s pid:%d to SCHED_NORMAL prio\n",iVar2 + 0x7a8,
                              *(iVar2 + 0x5d8));
                    sched_set_normal(*(iVar1 + 0x28),0xffffffec);
                    return 0;
                }
            }
        }
    }
    return 0;
}


// ===== sym.entry_dwc3_send_gadget_ep_cmd @ 0x08011230 (size 68) =====

ulong sym.entry_dwc3_send_gadget_ep_cmd(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg2 + 8) == 8) {
        sym.dwc3_msm_notify_event(*(*arg2 + 0x98),7,*(*arg2 + 0xaa));
    }
    return 0;
}


// ===== sym.entry_dwc3_gadget_reset_interrupt @ 0x08011274 (size 52) =====

ulong sym.entry_dwc3_gadget_reset_interrupt(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_msm_notify_event(*arg1,0xf,0);
    return 0;
}


// ===== sym.exit_dwc3_gadget_conndone_interrupt @ 0x080112a8 (size 52) =====

ulong sym.exit_dwc3_gadget_conndone_interrupt(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_msm_notify_event(*(arg1 + 0x30),5,0);
    return 0;
}


// ===== sym.entry_dwc3_gadget_conndone_interrupt @ 0x080112dc (size 28) =====

ulong sym.entry_dwc3_gadget_conndone_interrupt(int64_t arg1,int64_t arg2)

{
    *(arg1 + 0x30) = *arg2;
    return 0;
}


// ===== sym.exit_dwc3_gadget_pullup @ 0x080112f8 (size 56) =====

ulong sym.exit_dwc3_gadget_pullup(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_msm_notify_event(*(arg1 + 0x30),9,*(arg1 + 0x38));
    return 0;
}


// ===== sym.entry_dwc3_gadget_pullup @ 0x08011330 (size 68) =====

ulong sym.entry_dwc3_gadget_pullup(int64_t arg1,int64_t arg2)

{
    uint32_t arg3;
    int64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(*arg2 + 0x108);
    *(arg1 + 0x30) = arg1_00;
    arg3 = *(arg2 + 8);
    *(arg1 + 0x38) = arg3;
    sym.dwc3_msm_notify_event(arg1_00,8,arg3);
    return 0;
}


// ===== sym.entry___dwc3_gadget_start @ 0x08011374 (size 52) =====

ulong sym.entry___dwc3_gadget_start(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_msm_notify_event(*arg1,0xb,0);
    return 0;
}


// ===== sym.entry_trace_dwc3_ctrl_req @ 0x080113a8 (size 52) =====

ulong sym.entry_trace_dwc3_ctrl_req(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_dbg_trace_log_ctrl(_segment.ehdr,*arg1);
    return 0;
}


// ===== sym.entry_trace_dwc3_ep_queue @ 0x080113dc (size 60) =====

ulong sym.entry_trace_dwc3_ep_queue(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_dbg_trace_log_request(0x8000000,*arg1);
    return 0;
}


// ===== sym.entry_trace_dwc3_ep_dequeue @ 0x08011418 (size 60) =====

ulong sym.entry_trace_dwc3_ep_dequeue(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_dbg_trace_log_request(0x8000000,*arg1);
    return 0;
}


// ===== sym.entry_trace_dwc3_gadget_giveback @ 0x08011454 (size 60) =====

ulong sym.entry_trace_dwc3_gadget_giveback(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_dbg_trace_log_request(0x8000000,*arg1);
    return 0;
}


// ===== sym.entry_trace_dwc3_gadget_ep_cmd @ 0x08011490 (size 68) =====

ulong sym.entry_trace_dwc3_gadget_ep_cmd(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_dbg_trace_ep_cmd(*arg1,*arg1,*(arg1 + 8),*(arg1 + 0x10));
    return 0;
}


// ===== sym.entry_trace_dwc3_prepare_trb @ 0x080114d4 (size 64) =====

ulong sym.entry_trace_dwc3_prepare_trb(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_dbg_trace_trb_complete(*arg1,*arg1,*(arg1 + 8),0x80024d3);
    return 0;
}


// ===== sym.entry_trace_dwc3_event @ 0x08011514 (size 60) =====

ulong sym.entry_trace_dwc3_event(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dwc3_dbg_trace_event(_segment.ehdr,*arg1,*(arg1 + 8));
    return 0;
}


// ===== sym.exit_dwc3_gadget_init_in_endpoint @ 0x08011550 (size 72) =====

ulong sym.exit_dwc3_gadget_init_in_endpoint(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x38) < 0x20) {
        usb_ep_set_maxpacket_limit(*(*(arg1 + 0x30) + *(arg1 + 0x38) * 8 + 0x270),0x400);
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8011598);
    (*pcVar1)();
}


// ===== sym.entry_dwc3_gadget_init_in_endpoint @ 0x08011598 (size 40) =====

ulong sym.entry_dwc3_gadget_init_in_endpoint(int64_t arg1,int64_t arg2)

{
    arg2 = *arg2;
    *(arg1 + 0x30) = *(arg2 + 0x98);
    *(arg1 + 0x38) = *(arg2 + 0xaa);
    return 0;
}


// ===== sym.exit_dwc3_gadget_init_out_endpoint @ 0x080115c0 (size 72) =====

ulong sym.exit_dwc3_gadget_init_out_endpoint(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x38) < 0x20) {
        usb_ep_set_maxpacket_limit(*(*(arg1 + 0x30) + *(arg1 + 0x38) * 8 + 0x270),0x400);
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8011608);
    (*pcVar1)();
}


// ===== sym.entry_dwc3_gadget_init_out_endpoint @ 0x08011608 (size 40) =====

ulong sym.entry_dwc3_gadget_init_out_endpoint(int64_t arg1,int64_t arg2)

{
    arg2 = *arg2;
    *(arg1 + 0x30) = *(arg2 + 0x98);
    *(arg1 + 0x38) = *(arg2 + 0xaa);
    return 0;
}


// ===== sym.cleanup_module @ 0x080116ec (size 48) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.dwc3_msm_probe.b8b971d1e862b8af18f8e930b719f3dd.cfi_jt);
    sym.dwc3_msm_kretprobe_exit();
    return;
}

