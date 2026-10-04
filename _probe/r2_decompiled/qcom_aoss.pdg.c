// decompiled from qcom_aoss by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 820) =====

//WARNING: Switch with 1 destination removed at 0x08003c84

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x13af7d8b96936307) {
        if (arg1 < -0x1fd03030338b0118) {
            if (arg1 < -0x3987c0e26ee29729) {
                if (arg1 == -0x6eb2fd08f6a9d59e) {
                    pcVar2 = sym.qmp_pd_power_on.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                }
                else {
                    if (arg1 != -0x57be845bca9148ef) goto code_r0x08003c44;
                    pcVar2 = sym.aoss_qmp_mbox_freeze.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                }
            }
            else {
                if (arg1 == -0x3987c0e26ee29729) {
                    pcVar2 = sym.qmp_intr.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                    goto code_r0x08002324;
                }
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x08003c44;
                pcVar2 = sym.qmp_remove.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
            }
code_r0x080022c4:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08003c44;
        }
        if (arg1 < -0x3377f916ca0c702) {
            if (arg1 == -0x1fd03030338b0118) {
                pcVar2 = sym.qmp_get.cfi_jt;
            }
            else {
                if (arg1 != -0x8dc801903aca538) goto code_r0x08003c44;
                pcVar2 = sym.simple_open.cfi_jt;
            }
        }
        else if (arg1 == -0x3377f916ca0c702) {
            pcVar2 = sym.qmp_qdss_clk_prepare.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08003c44;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x699f53b13490ebfc) {
        if (arg1 < 0x41bf92bc6b6aca25) {
            if (arg1 == 0x13af7d8b96936307) {
                pcVar2 = sym.qmp_send.cfi_jt;
            }
            else {
                if (arg1 != 0x1d7ed092cb04d3f1) goto code_r0x08003c44;
                pcVar2 = sym.aoss_dbg_write.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
            }
        }
        else if (arg1 == 0x41bf92bc6b6aca25) {
            pcVar2 = sym.of_clk_hw_simple_get.cfi_jt;
        }
        else {
            if (arg1 != 0x519d946a5cb8d608) goto code_r0x08003c44;
            pcVar2 = sym.qmp_cdev_set_cur_state.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
        }
    }
    else if (arg1 < 0x6f56d4dab1c62b9f) {
        if (arg1 != 0x699f53b13490ebfc) {
            if (arg1 != 0x6b571d3f779580cd) goto code_r0x08003c44;
            pcVar2 = sym.qmp_cdev_get_cur_state.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
            goto code_r0x080022c4;
        }
        pcVar2 = sym.qmp_put.cfi_jt;
    }
    else if (arg1 == 0x6f56d4dab1c62b9f) {
        pcVar2 = sym.qmp_qdss_clk_unprepare.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
    }
    else if (arg1 == 0x70bdc47f224d235e) {
        pcVar2 = sym.qmp_register_rx_cb.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08003c44;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
code_r0x08002324:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08003c44:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003c98);
    (*pcVar1)();
}


// ===== sym.qmp_qdss_clk_unprepare.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt @ 0x08002340 (size 8) =====

void sym.qmp_qdss_clk_unprepare.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt(int param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qmp_send(param_1 - 0xd0,0x8001510,0x40);
    return;
}


// ===== sym.qmp_send.cfi_jt @ 0x08002348 (size 8) =====

uint64_t sym.qmp_send.cfi_jt(int64_t *param_1,int64_t param_2,uint64_t param_3)

{
    int64_t *piVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    uint64_t uVar5;
    uint *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    if (((param_1 == NULL) || (0xfffffffffffff000 < param_1)) || (param_2 == 0)) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x8002700);
        (*pcVar3)();
    }
    if (param_1[0xb] < param_3 + 4) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x800270c);
        (*pcVar3)();
    }
    if ((param_3 & 3) != 0) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x8002718);
        (*pcVar3)();
    }
    mutex_lock(param_1 + 0x14);
    __iowrite32_copy(*param_1 + param_1[10] + 4,param_2,param_3 >> 2);
    sym.writel(param_3 & 0xffffffff,*param_1 + param_1[10]);
    sym.readl(*param_1 + param_1[10]);
    mbox_send_message(param_1[9],0);
    mbox_client_txdone(param_1[9],0);
    ipc_log_string(_segment.ehdr,"[%s]: msg: %.*s\n","qmp_send",param_3,param_2);
    iVar4 = sym.readl(*param_1 + param_1[10]);
    if (iVar4 != 0) {
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_80 = 0;
        init_wait_entry(&uStack_80,0);
        piVar1 = param_1 + 0x11;
        uVar5 = prepare_to_wait_event(piVar1,&uStack_80,1);
        iVar4 = sym.readl(*param_1 + param_1[10]);
        if (iVar4 == 0) {
            finish_wait(piVar1,&uStack_80);
        }
        else {
            uVar7 = 0xfa;
            do {
                if (uVar5 != 0) goto code_r0x08002674;
                uVar7 = schedule_timeout(uVar7);
                uVar5 = prepare_to_wait_event(piVar1,&uStack_80,1);
                iVar4 = sym.readl(*param_1 + param_1[10]);
                if (uVar7 == 0 && iVar4 == 0) {
                    uVar7 = 1;
                }
            } while ((iVar4 != 0) && (uVar7 != 0));
            finish_wait(piVar1,&uStack_80);
            uVar5 = uVar7;
            if (uVar7 == 0) {
                _dev_err(param_1[1],"ucore did not ack channel\n");
                ipc_log_string(_segment.ehdr,"[%s]: timed out clearing msg: %.*s\n","qmp_send",param_3,param_2);
                sym.writel(0,*param_1 + param_1[10]);
                uVar5 = 0xffffff92;
                goto code_r0x0800269c;
            }
code_r0x08002674:
            if (uVar5 < 0) {
                _dev_err(param_1[1],"wait error %d\n",uVar5);
                goto code_r0x0800269c;
            }
        }
    }
    ipc_log_string(_segment.ehdr,"[%s]: ack: %.*s\n","qmp_send",param_3,param_2);
    uVar5 = 0;
code_r0x0800269c:
    mutex_unlock(param_1 + 0x14);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_58) {
        return uVar5 & 0xffffffff;
    }
    auVar8 = __stack_chk_fail();
    puVar6 = auVar8._8_8_;
    *extraout_x18 = sym.writel;
    uVar5 = auVar8._0_8_ & 0xffffffff;
    log_write_mmio(uVar5,0x20,puVar6,0x800273c);
    DataMemoryBarrier(0,2);
    *puVar6 = auVar8._0_4_;
    uVar5 = log_post_write_mmio(uVar5,0x20,puVar6,0x8002768);
    return uVar5;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002350 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qmp_probe.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002358 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qmp_probe.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qmp_qdss_clk_prepare.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt @ 0x08002360 (size 8) =====

void sym.qmp_qdss_clk_prepare.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt(int param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qmp_send(param_1 - 0xd0,0x80014d0,0x40);
    return;
}


// ===== sym.qmp_cdev_set_cur_state.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt @ 0x08002368 (size 8) =====

uint64_t sym.qmp_cdev_set_cur_state.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt
                   (int64_t param_1,uint64_t param_2,uint64_t param_3)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    int iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar10;
    ulong uVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_28 = *(iVar10 + 0x5e0);
    iVar10 = *(param_1 + 0x3a8);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    if (*(iVar10 + 0x18) == param_2) {
        uVar6 = 0;
    }
    else {
        uVar11 = 0x8000361;
        if (param_2 == 0) {
            uVar11 = 0x8000546;
        }
        snprintf(&uStack_68,0x40,"{class: volt_flr, event:zero_temp, res:%s, value:%s}",*(iVar10 + 0x10),uVar11);
        param_3 = 0x40;
        uVar6 = sym.qmp_send(*(iVar10 + 8),&uStack_68,0x40);
        if (uVar6 == 0) {
            *(iVar10 + 0x18) = param_2 != 0;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_28) {
        return uVar6;
    }
    auVar12 = __stack_chk_fail(uVar6);
    *extraout_x18 = sym.aoss_dbg_write;
    pcStack_98 = sym.aoss_dbg_write;
    iVar10 = sp_el0;
    iStack_a8 = *(iVar10 + 0x5e0);
    uVar11 = *(auVar12._0_8_ + 0xd8);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar6 = param_3;
    puStack_a0 = &stack0xffffffffffffffe0;
    if (param_3 - 0x40 < 0xffffffffffffffc1) {
        param_3 = 0xffffffffffffffea;
    }
    else {
        __check_object_size(&uStack_e8,param_3,0);
        iVar5 = sym._copy_from_user(&uStack_e8,auVar12._8_8_,param_3);
        if (iVar5 == 0) {
            iVar10 = strim(&uStack_e8);
            uVar6 = 0x40;
            iVar5 = sym.qmp_send(uVar11,iVar10,0x40);
            if (iVar5 != 0) {
                param_3 = iVar5;
            }
        }
        else {
            param_3 = 0xfffffffffffffff2;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_a8) {
        auVar12 = __stack_chk_fail(param_3);
        uVar8 = auVar12._8_8_;
        *extraout_x18_00 = sym._copy_from_user;
        puVar2 = sp_el0;
        uVar3 = (uVar8 << 8) >> 8;
        if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar9 = uVar8, (*puVar2 >> 0x1a & 1) != 0)) {
            uVar9 = uVar8 & uVar3;
        }
        bVar4 = CARRY8(uVar9,uVar6);
        uVar9 = uVar9 + uVar6;
        uVar1 = 0;
        if (!bVar4 || uVar9 == 0) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar4) {
            uVar9 = 0xffffffffffffffff;
        }
        uVar7 = uVar6;
        if (!CARRY8(uVar9,~uVar1) && !CARRY8(uVar9 + ~uVar1,bVar4) || uVar9 == uVar1 + !bVar4) {
            if ((_of_clk_hw_simple_get >> 0x18 & 1) == 0) {
                uVar9 = daif;
                if ((uVar9 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar2[1];
                InstructionSynchronizationBarrier();
                daif = uVar9;
            }
            if ((uVar8 & uVar3 & 0xffffff8000000000) != 0) {
                uVar8 = 0;
            }
            uVar7 = __arch_copy_from_user(auVar12._0_8_,uVar8,uVar6);
            if ((_of_clk_hw_simple_get >> 0x18 & 1) == 0) {
                uVar3 = daif;
                if ((uVar3 & 0x80) == 0) {
                    uVar8 = daif;
                    daif = uVar8 | 0xc0;
                }
                uVar8 = ttbr1_el1;
                ttbr0_el1 = (uVar8 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar8 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar3;
            }
        }
        if (uVar7 != 0) {
            memset(auVar12._0_8_ + (uVar6 - uVar7),0,uVar7);
        }
        return uVar7;
    }
    return param_3;
}


// ===== sym.qmp_remove.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt @ 0x08002370 (size 8) =====

ulong sym.qmp_remove.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t *piVar1;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(param_1 + 0xa8);
    debugfs_remove(piVar1[0x21]);
    of_clk_del_provider(*(piVar1[1] + 0x2f0));
    clk_hw_unregister(piVar1 + 0x1a);
    of_genpd_del_provider(*(piVar1[1] + 0x2f0));
    if (piVar1[0x1e] != 0) {
        uVar2 = 0;
        do {
            pm_genpd_remove(*(piVar1[0x1d] + uVar2 * 8));
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(piVar1 + 0x1e));
    }
    thermal_cooling_device_unregister(*piVar1[0x20]);
    thermal_cooling_device_unregister(*(piVar1[0x20] + 0x20));
    sym.writel(0xffff0000,*piVar1 + 0x2c);
    sym.writel(0xffff0000,*piVar1 + 0x24);
    mbox_send_message(piVar1[9],0);
    mbox_client_txdone(piVar1[9],0);
    mbox_free_channel(piVar1[9]);
    return 0;
}


// ===== sym.qmp_probe.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt @ 0x08002378 (size 8) =====

uint64_t sym.qmp_probe.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    uint uVar3;
    uint32_t uVar4;
    uint64_t *arg1;
    ulong uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    uint64_t *puVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar10 = param_1 + 0x10;
    arg1 = devm_kmalloc(uVar10,0x110,0xdc0);
    if (arg1 == NULL) {
        uVar6 = 0xfffffff4;
        goto code_r0x08002d6c;
    }
    arg1[1] = uVar10;
    __init_waitqueue_head(arg1 + 0x11,"&qmp->event",reloc.qmp_remove.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt);
    __mutex_init(arg1 + 0x14,"&qmp->tx_lock",reloc.qmp_remove.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt);
    _segment.ehdr = ipc_log_context_create(2,"aoss",0);
    uVar5 = platform_get_resource(param_1,0x200,0);
    uVar6 = devm_ioremap_resource(uVar10,uVar5);
    *arg1 = uVar6;
    if (0xfffffffffffff000 < uVar6) goto code_r0x08002d6c;
    arg1[2] = uVar10;
    *(arg1 + 5) = 1;
    uVar6 = mbox_request_channel(arg1 + 2,0);
    arg1[9] = uVar6;
    if (0xfffffffffffff000 < uVar6) {
        _dev_err(uVar10,"failed to acquire ipc mailbox\n");
        uVar6 = arg1[9];
        goto code_r0x08002d6c;
    }
    uVar3 = platform_get_irq(param_1,0);
    uVar4 = devm_request_threaded_irq
                      (uVar10,uVar3,sym.qmp_intr.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt,0,0,"aoss-qmp",arg1);
    if (uVar4 < 0) {
        uVar6 = uVar4;
        _dev_err(uVar10,"failed to request interrupt\n");
    }
    else {
        irq_set_irq_wake(uVar3,1);
        uVar4 = sym.qmp_open(arg1);
        if (uVar4 < 0) {
            uVar6 = uVar4;
        }
        else {
            puVar9 = arg1 + 0x1a;
            arg1[0x1c] = obj.qmp_qdss_clk_add.qdss_init;
            uVar7 = clk_hw_register(arg1[1],puVar9);
            uVar6 = uVar7 & 0xffffffff;
            if (uVar7 < 0) {
                _dev_err(arg1[1],"failed to register qdss clock\n");
            }
            else {
                uVar7 = of_clk_add_hw_provider(*(arg1[1] + 0x2f0),sym.of_clk_hw_simple_get.cfi_jt,puVar9);
                uVar6 = uVar7 & 0xffffffff;
                if (uVar7 < 0) {
                    _dev_err(arg1[1],"unable to register of clk hw provider\n");
                }
                else {
                    if (uVar7 != 0) goto code_r0x08002d2c;
                    uVar7 = arg1[1];
                    piVar8 = devm_kmalloc(uVar7,0x2430,0xdc0);
                    if (piVar8 == NULL) {
code_r0x08002d14:
                        uVar6 = 0xfffffff4;
                    }
                    else {
                        puVar1 = arg1 + 0x1d;
                        uVar6 = devm_kmalloc(uVar7,0x30,0xdc0);
                        *puVar1 = uVar6;
                        if (uVar6 == 0) goto code_r0x08002d14;
                        *piVar8 = arg1;
                        piVar8[0xa2] = "cdsp";
                        piVar8[0xa8] = sym.qmp_pd_power_on.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                        piVar8[0xa7] = sym.qmp_pd_power_off.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                        uVar4 = pm_genpd_init(piVar8 + 1,0,1);
                        if (uVar4 < 0) {
                            uVar6 = uVar4;
                            _dev_err(uVar7,"failed to init genpd\n");
                        }
                        else {
                            *arg1[0x1d] = piVar8 + 1;
                            piVar8[0xc1] = arg1;
                            piVar8[0x163] = "adsp";
                            piVar8[0x169] = sym.qmp_pd_power_on.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                            piVar8[0x168] = sym.qmp_pd_power_off.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                            uVar4 = pm_genpd_init(piVar8 + 0xc2,0,1);
                            if (uVar4 < 0) {
                                uVar6 = uVar4;
                                iVar11 = 0;
code_r0x08002eb4:
                                _dev_err(uVar7,"failed to init genpd\n");
                            }
                            else {
                                *(arg1[0x1d] + 8) = piVar8 + 0xc2;
                                piVar8[0x182] = arg1;
                                piVar8[0x224] = "modem";
                                piVar8[0x22a] = sym.qmp_pd_power_on.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                                iVar11 = 1;
                                piVar8[0x229] = sym.qmp_pd_power_off.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                                uVar4 = pm_genpd_init(piVar8 + 0x183,0,1);
                                if (uVar4 < 0) {
                                    uVar6 = uVar4;
                                    goto code_r0x08002eb4;
                                }
                                *(arg1[0x1d] + 0x10) = piVar8 + 0x183;
                                piVar8[0x243] = arg1;
                                piVar8[0x2e5] = "slpi";
                                piVar8[0x2eb] = sym.qmp_pd_power_on.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                                piVar8[0x2ea] = sym.qmp_pd_power_off.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                                uVar4 = pm_genpd_init(piVar8 + 0x244,0,1);
                                if (uVar4 < 0) {
                                    uVar6 = uVar4;
                                    iVar11 = 2;
                                    goto code_r0x08002eb4;
                                }
                                *(arg1[0x1d] + 0x18) = piVar8 + 0x244;
                                piVar8[0x304] = arg1;
                                piVar8[0x3a6] = "spss";
                                piVar8[0x3ac] = sym.qmp_pd_power_on.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                                piVar8[0x3ab] = sym.qmp_pd_power_off.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                                uVar4 = pm_genpd_init(piVar8 + 0x305,0,1);
                                if (uVar4 < 0) {
                                    uVar6 = uVar4;
                                    iVar11 = 3;
                                    goto code_r0x08002eb4;
                                }
                                *(arg1[0x1d] + 0x20) = piVar8 + 0x305;
                                piVar8[0x3c5] = arg1;
                                piVar8[0x467] = "venus";
                                piVar8[0x46d] = sym.qmp_pd_power_on.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                                piVar8[0x46c] = sym.qmp_pd_power_off.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                                uVar4 = pm_genpd_init(piVar8 + 0x3c6,0,1);
                                if (uVar4 < 0) {
                                    uVar6 = uVar4;
                                    iVar11 = 4;
                                    goto code_r0x08002eb4;
                                }
                                *(arg1[0x1d] + 0x28) = piVar8 + 0x3c6;
                                *(arg1 + 0x1e) = 6;
                                uVar4 = of_genpd_add_provider_onecell(*(uVar7 + 0x2f0),puVar1);
                                if (-1 < uVar4) {
                                    uVar5 = *(arg1[1] + 0x2f0);
                                    uVar6 = devm_kmalloc(arg1[1],0x40,0xdc0);
                                    arg1[0x20] = uVar6;
                                    if (uVar6 == 0) {
code_r0x08002f3c:
                                        _dev_err(uVar10,"failed to register aoss cooling devices\n");
                                    }
                                    else {
                                        puVar9 = of_get_next_available_child(uVar5,0);
                                        if (puVar9 == NULL) {
code_r0x08002dfc:
                                            uVar6 = 0;
code_r0x08002e28:
                                            devm_kfree(arg1[1],arg1[0x20]);
                                            if (uVar6 != 0) goto code_r0x08002f3c;
                                        }
                                        else {
                                            uVar4 = 0;
                                            do {
                                                iVar11 = of_find_property(puVar9,"#cooling-cells",0);
                                                uVar2 = uVar4;
                                                if (iVar11 != 0) {
                                                    uVar7 = *puVar9;
                                                    puVar1 = arg1[0x20] + uVar4 * 0x20;
                                                    *(puVar1 + 3) = 0;
                                                    puVar1[1] = arg1;
                                                    puVar1[2] = uVar7;
                                                    uVar6 = devm_thermal_of_cooling_device_register
                                                                      (arg1[1],puVar9,uVar7,puVar1,
                                                                       
                                                            reloc.qmp_cdev_get_max_state.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt
                                                            );
                                                    *puVar1 = uVar6;
                                                    if (0xfffffffffffff000 < uVar6) {
                                                        _dev_err(arg1[1],"unable to register %s cooling device\n",
                                                                 uVar7);
                                                        uVar6 = *puVar1;
                                                    }
                                                    uVar2 = uVar4 + 1;
                                                    if ((0xfffffffffffff000 < uVar6) && (uVar6 != 0)) {
                                                        if (-1 < uVar4) {
                                                            iVar11 = uVar4 << 5;
                                                            do {
                                                                thermal_cooling_device_unregister
                                                                          (*(arg1[0x20] + iVar11));
                                                                iVar11 = iVar11 + -0x20;
                                                            } while (iVar11 != -0x20);
                                                        }
                                                        goto code_r0x08002e28;
                                                    }
                                                }
                                                uVar4 = uVar2;
                                                puVar9 = of_get_next_available_child(uVar5,puVar9);
                                            } while (puVar9 != NULL);
                                            if (uVar4 == 0) goto code_r0x08002dfc;
                                        }
                                    }
                                    *(param_1 + 0xa8) = arg1;
                                    uVar10 = debugfs_create_file("aoss_send_message",0x90,0,arg1,obj.aoss_dbg_fops);
                                    uVar6 = 0;
                                    arg1[0x21] = uVar10;
                                    goto code_r0x08002d6c;
                                }
                                uVar6 = uVar4;
                                iVar11 = 5;
                            }
                            pm_genpd_remove(*(*puVar1 + iVar11 * 8));
                            if ((((iVar11 != 0) && (pm_genpd_remove(*(*puVar1 + (iVar11 + -1) * 8)), iVar11 + -1 != 0))
                                && (pm_genpd_remove(*(*puVar1 + (iVar11 + -2) * 8)), iVar11 + -2 != 0)) &&
                               ((pm_genpd_remove(*(*puVar1 + (iVar11 + -3) * 8)), iVar11 + -3 != 0 &&
                                (pm_genpd_remove(*(*puVar1 + (iVar11 + -4) * 8)), iVar11 + -4 != 0)))) {
                                pm_genpd_remove(*(*puVar1 + iVar11 * 8 + -0x28));
                            }
                        }
                    }
                    of_clk_del_provider(*(arg1[1] + 0x2f0));
                }
                clk_hw_unregister(puVar9);
            }
code_r0x08002d2c:
            sym.writel(0xffff0000,*arg1 + 0x2c);
            sym.writel(0xffff0000,*arg1 + 0x24);
            mbox_send_message(arg1[9],0);
            mbox_client_txdone(arg1[9],0);
        }
    }
    mbox_free_channel(arg1[9]);
code_r0x08002d6c:
    return uVar6 & 0xffffffff;
}


// ===== sym.qmp_register_rx_cb.cfi_jt @ 0x08002380 (size 8) =====

ulong sym.qmp_register_rx_cb.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _printk(0x80002e0);
        uVar1 = 0xffffffea;
    }
    else {
        ipc_log_string(_segment.ehdr,"[%s]: Registering RX callback\n","qmp_register_rx_cb");
        *(param_1 + 0x78) = param_2;
        if (*(param_1 + 0x80) == 0) {
            uVar1 = 0;
            *(param_1 + 0x80) = param_3;
        }
        else {
            uVar1 = 0xffffffea;
        }
    }
    return uVar1;
}


// ===== sym.of_clk_hw_simple_get.cfi_jt @ 0x08002388 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.of_clk_hw_simple_get.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.aoss_qmp_mbox_freeze.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt @ 0x08002390 (size 8) =====

ulong sym.aoss_qmp_mbox_freeze.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt(void)

{
    return 0;
}


// ===== sym.aoss_qmp_mbox_restore.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt @ 0x08002398 (size 8) =====

ulong sym.aoss_qmp_mbox_restore.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.qmp_open(*(param_1 + 0x98));
    if (iVar1 < 0) {
        _dev_err(param_1,"QMP restore failed, ret = %d\n",iVar1);
    }
    return 0;
}


// ===== sym.qmp_put.cfi_jt @ 0x080023a0 (size 8) =====

void sym.qmp_put.cfi_jt(uint64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if ((param_1 != 0) && (param_1 < 0xfffffffffffff001)) {
        *in_x18 = unaff_x30;
        put_device(*(param_1 + 8));
    }
    return;
}


// ===== sym.qmp_cdev_get_cur_state.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt @ 0x080023a8 (size 8) =====

ulong sym.qmp_cdev_get_cur_state.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    *param_2 = *(*(param_1 + 0x3a8) + 0x18);
    return 0;
}


// ===== sym.qmp_cdev_get_max_state.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt @ 0x080023b0 (size 8) =====

ulong sym.qmp_cdev_get_max_state.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt(ulong param_1,ulong *param_2)

{
    *param_2 = 1;
    return 0;
}


// ===== sym.qmp_intr.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt @ 0x080023b8 (size 8) =====

ulong sym.qmp_intr.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt(ulong param_1,int64_t *param_2)

{
    int iVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"[%s]: \n","qmp_intr");
    iVar1 = sym.readl_relaxed(*param_2 + param_2[0xc]);
    if ((iVar1 != 0) && (param_2[0xe] != 0)) {
        __ioread32_copy(param_2[0xe],*param_2 + param_2[0xc] + 4,iVar1 + 3U >> 2);
        pcVar2 = param_2[0x10];
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0xd485a31f0038b54e,pcVar2,0x80002c0);
            (*pcVar2)(param_2[0xe],param_2[0xf],iVar1 + 3U & 0xfffffffc);
        }
        sym.writel_relaxed(*param_2,*param_2 + param_2[0xc]);
        mbox_send_message(param_2[9],0);
        mbox_client_txdone(param_2[9],0);
    }
    __wake_up(param_2 + 0x11,3,0,0);
    return 1;
}


// ===== sym.simple_open.cfi_jt @ 0x080023c0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_open.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.aoss_dbg_write.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt @ 0x080023c8 (size 8) =====

uint64_t sym.aoss_dbg_write.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uVar11 = *(param_1 + 0xd8);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar9 = param_3;
    if (param_3 - 0x40 < 0xffffffffffffffc1) {
        param_3 = 0xffffffffffffffea;
    }
    else {
        __check_object_size(&uStack_78,param_3,0);
        iVar5 = sym._copy_from_user(&uStack_78,param_2,param_3);
        if (iVar5 == 0) {
            iVar6 = strim(&uStack_78);
            uVar9 = 0x40;
            iVar5 = sym.qmp_send(uVar11,iVar6,0x40);
            if (iVar5 != 0) {
                param_3 = iVar5;
            }
        }
        else {
            param_3 = 0xfffffffffffffff2;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_38) {
        auVar12 = __stack_chk_fail(param_3);
        uVar8 = auVar12._8_8_;
        *extraout_x18 = sym._copy_from_user;
        puVar2 = sp_el0;
        uVar3 = (uVar8 << 8) >> 8;
        if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar10 = uVar8, (*puVar2 >> 0x1a & 1) != 0)) {
            uVar10 = uVar8 & uVar3;
        }
        bVar4 = CARRY8(uVar10,uVar9);
        uVar10 = uVar10 + uVar9;
        uVar1 = 0;
        if (!bVar4 || uVar10 == 0) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar4) {
            uVar10 = 0xffffffffffffffff;
        }
        uVar7 = uVar9;
        if (!CARRY8(uVar10,~uVar1) && !CARRY8(uVar10 + ~uVar1,bVar4) || uVar10 == uVar1 + !bVar4) {
            if ((_of_clk_hw_simple_get >> 0x18 & 1) == 0) {
                uVar10 = daif;
                if ((uVar10 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar2[1];
                InstructionSynchronizationBarrier();
                daif = uVar10;
            }
            if ((uVar8 & uVar3 & 0xffffff8000000000) != 0) {
                uVar8 = 0;
            }
            uVar7 = __arch_copy_from_user(auVar12._0_8_,uVar8,uVar9);
            if ((_of_clk_hw_simple_get >> 0x18 & 1) == 0) {
                uVar3 = daif;
                if ((uVar3 & 0x80) == 0) {
                    uVar8 = daif;
                    daif = uVar8 | 0xc0;
                }
                uVar8 = ttbr1_el1;
                ttbr0_el1 = (uVar8 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar8 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar3;
            }
        }
        if (uVar7 != 0) {
            memset(auVar12._0_8_ + (uVar9 - uVar7),0,uVar7);
        }
        return uVar7;
    }
    return param_3;
}


// ===== sym.qmp_pd_power_on.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt @ 0x080023d0 (size 8) =====

ulong sym.qmp_pd_power_on.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    int64_t iStack_80;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    snprintf(&uStack_68,0x40,"{class: image, res: load_state, name: %s, val: %s}",*(param_1 + 0x508),0x8000361);
    uVar2 = sym.qmp_send(*(param_1 + -8),&uStack_68,0x40);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar2;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.qmp_pd_power_off;
    pcStack_88 = sym.qmp_pd_power_off;
    iVar1 = sp_el0;
    iStack_98 = *(iVar1 + 0x5e0);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    puStack_90 = &stack0xffffffffffffffe0;
    iStack_80 = param_1;
    snprintf(&uStack_d8,0x40,"{class: image, res: load_state, name: %s, val: %s}",*(iVar3 + 0x508),0x8000546);
    uVar2 = sym.qmp_send(*(iVar3 + -8),&uStack_d8,0x40);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_98) {
        return uVar2;
    }
    __stack_chk_fail();
    *extraout_x1 = 1;
    return 0;
}


// ===== sym.qmp_pd_power_off.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt @ 0x080023d8 (size 8) =====

ulong sym.qmp_pd_power_off.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *extraout_x1;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    snprintf(&uStack_68,0x40,"{class: image, res: load_state, name: %s, val: %s}",*(param_1 + 0x508),0x8000546);
    uVar2 = sym.qmp_send(*(param_1 + -8),&uStack_68,0x40);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar2;
    }
    __stack_chk_fail();
    *extraout_x1 = 1;
    return 0;
}


// ===== sym.qmp_get.cfi_jt @ 0x080023e0 (size 8) =====

int64_t sym.qmp_get.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 != 0) && (*(param_1 + 0x2f0) != 0)) {
        iVar1 = of_parse_phandle(*(param_1 + 0x2f0),"qcom,qmp",0);
        if (iVar1 == 0) {
            return -0x13;
        }
        iVar1 = of_find_device_by_node();
        if (iVar1 != 0) {
            if (*(iVar1 + 0xa8) != 0) {
                return *(iVar1 + 0xa8);
            }
            put_device(iVar1 + 0x10);
            return -0x205;
        }
    }
    return -0x16;
}


// ===== sym.qmp_register_rx_cb @ 0x080023e8 (size 140) =====

ulong sym.qmp_register_rx_cb(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x80002e0);
        uVar1 = 0xffffffea;
    }
    else {
        ipc_log_string(_segment.ehdr,"[%s]: Registering RX callback\n","qmp_register_rx_cb");
        *(arg1 + 0x78) = arg2;
        if (*(arg1 + 0x80) == 0) {
            uVar1 = 0;
            *(arg1 + 0x80) = arg3;
        }
        else {
            uVar1 = 0xffffffea;
        }
    }
    return uVar1;
}


// ===== sym.qmp_send @ 0x08002474 (size 684) =====

uint64_t sym.qmp_send(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    uint *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    piVar5 = arg1;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    if (((piVar5 == NULL) || (0xfffffffffffff000 < piVar5)) || (arg2 == 0)) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x8002700);
        (*pcVar3)();
    }
    if (piVar5[0xb] < arg3 + 4U) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x800270c);
        (*pcVar3)();
    }
    if ((arg3 & 3U) != 0) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x8002718);
        (*pcVar3)();
    }
    mutex_lock(piVar5 + 0x14);
    __iowrite32_copy(*piVar5 + piVar5[10] + 4,arg2,arg3 >> 2);
    sym.writel(arg3 & 0xffffffff,*piVar5 + piVar5[10]);
    sym.readl(*piVar5 + piVar5[10]);
    mbox_send_message(piVar5[9],0);
    mbox_client_txdone(piVar5[9],0);
    ipc_log_string(_segment.ehdr,"[%s]: msg: %.*s\n","qmp_send",arg3,arg2);
    iVar4 = sym.readl(*piVar5 + piVar5[10]);
    if (iVar4 != 0) {
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_80 = 0;
        init_wait_entry(&uStack_80,0);
        piVar1 = piVar5 + 0x11;
        uVar6 = prepare_to_wait_event(piVar1,&uStack_80,1);
        iVar4 = sym.readl(*piVar5 + piVar5[10]);
        if (iVar4 == 0) {
            finish_wait(piVar1,&uStack_80);
        }
        else {
            uVar8 = 0xfa;
            do {
                if (uVar6 != 0) goto code_r0x08002674;
                uVar8 = schedule_timeout(uVar8);
                uVar6 = prepare_to_wait_event(piVar1,&uStack_80,1);
                iVar4 = sym.readl(*piVar5 + piVar5[10]);
                if (uVar8 == 0 && iVar4 == 0) {
                    uVar8 = 1;
                }
            } while ((iVar4 != 0) && (uVar8 != 0));
            finish_wait(piVar1,&uStack_80);
            uVar6 = uVar8;
            if (uVar8 == 0) {
                _dev_err(piVar5[1],"ucore did not ack channel\n");
                ipc_log_string(_segment.ehdr,"[%s]: timed out clearing msg: %.*s\n","qmp_send",arg3,arg2);
                sym.writel(0,*piVar5 + piVar5[10]);
                uVar6 = 0xffffff92;
                goto code_r0x0800269c;
            }
code_r0x08002674:
            if (uVar6 < 0) {
                _dev_err(piVar5[1],"wait error %d\n",uVar6);
                goto code_r0x0800269c;
            }
        }
    }
    ipc_log_string(_segment.ehdr,"[%s]: ack: %.*s\n","qmp_send",arg3,arg2);
    uVar6 = 0;
code_r0x0800269c:
    mutex_unlock(piVar5 + 0x14);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_58) {
        return uVar6 & 0xffffffff;
    }
    auVar9 = __stack_chk_fail();
    puVar7 = auVar9._8_8_;
    *extraout_x18 = sym.writel;
    uVar6 = auVar9._0_8_ & 0xffffffff;
    log_write_mmio(uVar6,0x20,puVar7,0x800273c);
    DataMemoryBarrier(0,2);
    *puVar7 = auVar9._0_4_;
    uVar6 = log_post_write_mmio(uVar6,0x20,puVar7,0x8002768);
    return uVar6;
}


// ===== sym.writel @ 0x08002720 (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800273c);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8002768);
    return;
}


// ===== sym.readl @ 0x0800279c (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x80027a0);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x80027e4);
    return uVar1;
}


// ===== sym.qmp_get @ 0x0800281c (size 112) =====

int64_t sym.qmp_get(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && (*(arg1 + 0x2f0) != 0)) {
        iVar1 = of_parse_phandle(*(arg1 + 0x2f0),"qcom,qmp",0);
        if (iVar1 == 0) {
            return -0x13;
        }
        iVar1 = of_find_device_by_node();
        if (iVar1 != 0) {
            if (*(iVar1 + 0xa8) != 0) {
                return *(iVar1 + 0xa8);
            }
            put_device(iVar1 + 0x10);
            return -0x205;
        }
    }
    return -0x16;
}


// ===== sym.qmp_put @ 0x0800288c (size 56) =====

void sym.qmp_put(uint32_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar1 = arg1;
    if ((uVar1 != 0) && (uVar1 < 0xfffffffffffff001)) {
        *in_x18 = unaff_x30;
        put_device(*(uVar1 + 8));
    }
    return;
}


// ===== sym.qmp_probe @ 0x080028c4 (size 1676) =====

uint64_t sym.qmp_probe(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    uint uVar3;
    uint32_t uVar4;
    uint64_t *arg1_00;
    ulong uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    uint64_t *puVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar10 = arg1 + 0x10;
    arg1_00 = devm_kmalloc(uVar10,0x110,0xdc0);
    if (arg1_00 == NULL) {
        uVar6 = 0xfffffff4;
        goto code_r0x08002d6c;
    }
    arg1_00[1] = uVar10;
    __init_waitqueue_head(arg1_00 + 0x11,"&qmp->event",reloc.qmp_remove.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt);
    __mutex_init(arg1_00 + 0x14,"&qmp->tx_lock",reloc.qmp_remove.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt);
    _segment.ehdr = ipc_log_context_create(2,"aoss",0);
    uVar5 = platform_get_resource(arg1,0x200,0);
    uVar6 = devm_ioremap_resource(uVar10,uVar5);
    *arg1_00 = uVar6;
    if (0xfffffffffffff000 < uVar6) goto code_r0x08002d6c;
    arg1_00[2] = uVar10;
    *(arg1_00 + 5) = 1;
    uVar6 = mbox_request_channel(arg1_00 + 2,0);
    arg1_00[9] = uVar6;
    if (0xfffffffffffff000 < uVar6) {
        _dev_err(uVar10,"failed to acquire ipc mailbox\n");
        uVar6 = arg1_00[9];
        goto code_r0x08002d6c;
    }
    uVar3 = platform_get_irq(arg1,0);
    uVar4 = devm_request_threaded_irq
                      (uVar10,uVar3,sym.qmp_intr.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt,0,0,"aoss-qmp",arg1_00);
    if (uVar4 < 0) {
        uVar6 = uVar4;
        _dev_err(uVar10,"failed to request interrupt\n");
    }
    else {
        irq_set_irq_wake(uVar3,1);
        uVar4 = sym.qmp_open(arg1_00);
        if (uVar4 < 0) {
            uVar6 = uVar4;
        }
        else {
            puVar9 = arg1_00 + 0x1a;
            arg1_00[0x1c] = obj.qmp_qdss_clk_add.qdss_init;
            uVar7 = clk_hw_register(arg1_00[1],puVar9);
            uVar6 = uVar7 & 0xffffffff;
            if (uVar7 < 0) {
                _dev_err(arg1_00[1],"failed to register qdss clock\n");
            }
            else {
                uVar7 = of_clk_add_hw_provider(*(arg1_00[1] + 0x2f0),sym.of_clk_hw_simple_get.cfi_jt,puVar9);
                uVar6 = uVar7 & 0xffffffff;
                if (uVar7 < 0) {
                    _dev_err(arg1_00[1],"unable to register of clk hw provider\n");
                }
                else {
                    if (uVar7 != 0) goto code_r0x08002d2c;
                    uVar7 = arg1_00[1];
                    piVar8 = devm_kmalloc(uVar7,0x2430,0xdc0);
                    if (piVar8 == NULL) {
code_r0x08002d14:
                        uVar6 = 0xfffffff4;
                    }
                    else {
                        puVar1 = arg1_00 + 0x1d;
                        uVar6 = devm_kmalloc(uVar7,0x30,0xdc0);
                        *puVar1 = uVar6;
                        if (uVar6 == 0) goto code_r0x08002d14;
                        *piVar8 = arg1_00;
                        piVar8[0xa2] = "cdsp";
                        piVar8[0xa8] = sym.qmp_pd_power_on.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                        piVar8[0xa7] = sym.qmp_pd_power_off.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                        uVar4 = pm_genpd_init(piVar8 + 1,0,1);
                        if (uVar4 < 0) {
                            uVar6 = uVar4;
                            _dev_err(uVar7,"failed to init genpd\n");
                        }
                        else {
                            *arg1_00[0x1d] = piVar8 + 1;
                            piVar8[0xc1] = arg1_00;
                            piVar8[0x163] = "adsp";
                            piVar8[0x169] = sym.qmp_pd_power_on.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                            piVar8[0x168] = sym.qmp_pd_power_off.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                            uVar4 = pm_genpd_init(piVar8 + 0xc2,0,1);
                            if (uVar4 < 0) {
                                uVar6 = uVar4;
                                iVar11 = 0;
code_r0x08002eb4:
                                _dev_err(uVar7,"failed to init genpd\n");
                            }
                            else {
                                *(arg1_00[0x1d] + 8) = piVar8 + 0xc2;
                                piVar8[0x182] = arg1_00;
                                piVar8[0x224] = "modem";
                                piVar8[0x22a] = sym.qmp_pd_power_on.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                                iVar11 = 1;
                                piVar8[0x229] = sym.qmp_pd_power_off.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                                uVar4 = pm_genpd_init(piVar8 + 0x183,0,1);
                                if (uVar4 < 0) {
                                    uVar6 = uVar4;
                                    goto code_r0x08002eb4;
                                }
                                *(arg1_00[0x1d] + 0x10) = piVar8 + 0x183;
                                piVar8[0x243] = arg1_00;
                                piVar8[0x2e5] = "slpi";
                                piVar8[0x2eb] = sym.qmp_pd_power_on.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                                piVar8[0x2ea] = sym.qmp_pd_power_off.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                                uVar4 = pm_genpd_init(piVar8 + 0x244,0,1);
                                if (uVar4 < 0) {
                                    uVar6 = uVar4;
                                    iVar11 = 2;
                                    goto code_r0x08002eb4;
                                }
                                *(arg1_00[0x1d] + 0x18) = piVar8 + 0x244;
                                piVar8[0x304] = arg1_00;
                                piVar8[0x3a6] = "spss";
                                piVar8[0x3ac] = sym.qmp_pd_power_on.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                                piVar8[0x3ab] = sym.qmp_pd_power_off.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                                uVar4 = pm_genpd_init(piVar8 + 0x305,0,1);
                                if (uVar4 < 0) {
                                    uVar6 = uVar4;
                                    iVar11 = 3;
                                    goto code_r0x08002eb4;
                                }
                                *(arg1_00[0x1d] + 0x20) = piVar8 + 0x305;
                                piVar8[0x3c5] = arg1_00;
                                piVar8[0x467] = "venus";
                                piVar8[0x46d] = sym.qmp_pd_power_on.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                                piVar8[0x46c] = sym.qmp_pd_power_off.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt;
                                uVar4 = pm_genpd_init(piVar8 + 0x3c6,0,1);
                                if (uVar4 < 0) {
                                    uVar6 = uVar4;
                                    iVar11 = 4;
                                    goto code_r0x08002eb4;
                                }
                                *(arg1_00[0x1d] + 0x28) = piVar8 + 0x3c6;
                                *(arg1_00 + 0x1e) = 6;
                                uVar4 = of_genpd_add_provider_onecell(*(uVar7 + 0x2f0),puVar1);
                                if (-1 < uVar4) {
                                    uVar5 = *(arg1_00[1] + 0x2f0);
                                    uVar6 = devm_kmalloc(arg1_00[1],0x40,0xdc0);
                                    arg1_00[0x20] = uVar6;
                                    if (uVar6 == 0) {
code_r0x08002f3c:
                                        _dev_err(uVar10,"failed to register aoss cooling devices\n");
                                    }
                                    else {
                                        puVar9 = of_get_next_available_child(uVar5,0);
                                        if (puVar9 == NULL) {
code_r0x08002dfc:
                                            uVar6 = 0;
code_r0x08002e28:
                                            devm_kfree(arg1_00[1],arg1_00[0x20]);
                                            if (uVar6 != 0) goto code_r0x08002f3c;
                                        }
                                        else {
                                            uVar4 = 0;
                                            do {
                                                iVar11 = of_find_property(puVar9,"#cooling-cells",0);
                                                uVar2 = uVar4;
                                                if (iVar11 != 0) {
                                                    uVar7 = *puVar9;
                                                    puVar1 = arg1_00[0x20] + uVar4 * 0x20;
                                                    *(puVar1 + 3) = 0;
                                                    puVar1[1] = arg1_00;
                                                    puVar1[2] = uVar7;
                                                    uVar6 = devm_thermal_of_cooling_device_register
                                                                      (arg1_00[1],puVar9,uVar7,puVar1,
                                                                       
                                                            reloc.qmp_cdev_get_max_state.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt
                                                            );
                                                    *puVar1 = uVar6;
                                                    if (0xfffffffffffff000 < uVar6) {
                                                        _dev_err(arg1_00[1],"unable to register %s cooling device\n",
                                                                 uVar7);
                                                        uVar6 = *puVar1;
                                                    }
                                                    uVar2 = uVar4 + 1;
                                                    if ((0xfffffffffffff000 < uVar6) && (uVar6 != 0)) {
                                                        if (-1 < uVar4) {
                                                            iVar11 = uVar4 << 5;
                                                            do {
                                                                thermal_cooling_device_unregister
                                                                          (*(arg1_00[0x20] + iVar11));
                                                                iVar11 = iVar11 + -0x20;
                                                            } while (iVar11 != -0x20);
                                                        }
                                                        goto code_r0x08002e28;
                                                    }
                                                }
                                                uVar4 = uVar2;
                                                puVar9 = of_get_next_available_child(uVar5,puVar9);
                                            } while (puVar9 != NULL);
                                            if (uVar4 == 0) goto code_r0x08002dfc;
                                        }
                                    }
                                    *(arg1 + 0xa8) = arg1_00;
                                    uVar10 = debugfs_create_file("aoss_send_message",0x90,0,arg1_00,
                                                                 obj.aoss_dbg_fops);
                                    uVar6 = 0;
                                    arg1_00[0x21] = uVar10;
                                    goto code_r0x08002d6c;
                                }
                                uVar6 = uVar4;
                                iVar11 = 5;
                            }
                            pm_genpd_remove(*(*puVar1 + iVar11 * 8));
                            if ((((iVar11 != 0) && (pm_genpd_remove(*(*puVar1 + (iVar11 + -1) * 8)), iVar11 + -1 != 0))
                                && (pm_genpd_remove(*(*puVar1 + (iVar11 + -2) * 8)), iVar11 + -2 != 0)) &&
                               ((pm_genpd_remove(*(*puVar1 + (iVar11 + -3) * 8)), iVar11 + -3 != 0 &&
                                (pm_genpd_remove(*(*puVar1 + (iVar11 + -4) * 8)), iVar11 + -4 != 0)))) {
                                pm_genpd_remove(*(*puVar1 + iVar11 * 8 + -0x28));
                            }
                        }
                    }
                    of_clk_del_provider(*(arg1_00[1] + 0x2f0));
                }
                clk_hw_unregister(puVar9);
            }
code_r0x08002d2c:
            sym.writel(0xffff0000,*arg1_00 + 0x2c);
            sym.writel(0xffff0000,*arg1_00 + 0x24);
            mbox_send_message(arg1_00[9],0);
            mbox_client_txdone(arg1_00[9],0);
        }
    }
    mbox_free_channel(arg1_00[9]);
code_r0x08002d6c:
    return uVar6 & 0xffffffff;
}


// ===== sym.qmp_remove @ 0x08002f50 (size 216) =====

ulong sym.qmp_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(arg1 + 0xa8);
    debugfs_remove(piVar1[0x21]);
    of_clk_del_provider(*(piVar1[1] + 0x2f0));
    clk_hw_unregister(piVar1 + 0x1a);
    of_genpd_del_provider(*(piVar1[1] + 0x2f0));
    if (piVar1[0x1e] != 0) {
        uVar2 = 0;
        do {
            pm_genpd_remove(*(piVar1[0x1d] + uVar2 * 8));
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(piVar1 + 0x1e));
    }
    thermal_cooling_device_unregister(*piVar1[0x20]);
    thermal_cooling_device_unregister(*(piVar1[0x20] + 0x20));
    sym.writel(0xffff0000,*piVar1 + 0x2c);
    sym.writel(0xffff0000,*piVar1 + 0x24);
    mbox_send_message(piVar1[9],0);
    mbox_client_txdone(piVar1[9],0);
    mbox_free_channel(piVar1[9]);
    return 0;
}


// ===== sym.qmp_intr @ 0x08003028 (size 264) =====

ulong sym.qmp_intr(ulong noname_0,int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"[%s]: \n","qmp_intr");
    iVar1 = sym.readl_relaxed(*arg1 + *(arg1 + 0x60));
    if ((iVar1 != 0) && (*(arg1 + 0x70) != 0)) {
        __ioread32_copy(*(arg1 + 0x70),*arg1 + *(arg1 + 0x60) + 4,iVar1 + 3U >> 2);
        pcVar2 = *(arg1 + 0x80);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0xd485a31f0038b54e,pcVar2,0x80002c0);
            (*pcVar2)(*(arg1 + 0x70),*(arg1 + 0x78),iVar1 + 3U & 0xfffffffc);
        }
        sym.writel_relaxed(*arg1,*arg1 + *(arg1 + 0x60));
        mbox_send_message(*(arg1 + 0x48),0);
        mbox_client_txdone(*(arg1 + 0x48),0);
    }
    __wake_up(arg1 + 0x88,3,0,0);
    return 1;
}


// ===== sym.qmp_open @ 0x08003130 (size 1188) =====

uint sym.qmp_open(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    uint uVar3;
    uint64_t uVar4;
    ulong uVar5;
    int64_t iVar6;
    uint *puVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    iVar1 = sym.readl(*arg1);
    if (iVar1 != 0x4d41494c) {
        uVar5 = *(arg1 + 8);
        pcVar8 = "QMP magic doesn\'t match\n";
        goto code_r0x08003524;
    }
    iVar1 = sym.readl(*arg1 + 4);
    if (iVar1 == 1) {
        uVar4 = sym.readl(*arg1 + 0x38);
        *(arg1 + 0x50) = uVar4 & 0xffffffff;
        uVar2 = sym.readl(*arg1 + 0x34);
        *(arg1 + 0x58) = uVar2;
        if (uVar2 == 0) {
            uVar5 = *(arg1 + 8);
            pcVar8 = "invalid tx mailbox size\n";
        }
        else {
            uVar4 = sym.readl(*arg1 + 0x20);
            *(arg1 + 0x60) = uVar4 & 0xffffffff;
            uVar2 = sym.readl(*arg1 + 0x1c);
            uVar5 = *(arg1 + 8);
            *(arg1 + 0x68) = uVar2;
            if (uVar2 != 0) {
                iVar6 = devm_kmalloc(uVar5,uVar2,0xdc0);
                *(arg1 + 0x70) = iVar6;
                if (iVar6 == 0) {
                    uVar3 = 0xfffffff4;
                    goto code_r0x0800352c;
                }
                iVar6 = sym.readl(*arg1 + 0xc);
                sym.writel(iVar6,*arg1 + 0x10);
                sym.writel(0xffff,*arg1 + 0x24);
                mbox_send_message(*(arg1 + 0x48),0);
                mbox_client_txdone(*(arg1 + 0x48),0);
                iVar1 = sym.readl(*arg1 + 0x28);
                if (iVar1 == 0xffff) {
code_r0x08003304:
                    sym.writel(0xffff,*arg1 + 0x2c);
                    mbox_send_message(*(arg1 + 0x48),0);
                    mbox_client_txdone(*(arg1 + 0x48),0);
                    iVar1 = sym.readl(*arg1 + 0x14);
                    if (iVar1 == 0xffff) {
code_r0x080033e8:
                        sym.writel(0xffff,*arg1 + 0x18);
                        mbox_send_message(*(arg1 + 0x48),0);
                        mbox_client_txdone(*(arg1 + 0x48),0);
                        iVar1 = sym.readl(*arg1 + 0x30);
                        uVar3 = 0;
                        if (iVar1 == 0xffff) goto code_r0x0800352c;
                        uStack_58 = 0;
                        uStack_50 = 0;
                        uStack_68 = 0;
                        uStack_60 = 0;
                        uStack_70 = 0;
                        init_wait_entry(&uStack_70,0);
                        iVar6 = arg1 + 0x88;
                        prepare_to_wait_event(iVar6,&uStack_70,2);
                        iVar1 = sym.readl(*arg1 + 0x30);
                        if (iVar1 == 0xffff) {
                            finish_wait(iVar6,&uStack_70);
                            uVar3 = 0;
                            goto code_r0x0800352c;
                        }
                        iVar9 = 0xfa;
                        do {
                            iVar9 = schedule_timeout(iVar9);
                            prepare_to_wait_event(iVar6,&uStack_70,2);
                            iVar1 = sym.readl(*arg1 + 0x30);
                            if (iVar9 == 0 && iVar1 == 0xffff) {
                                iVar9 = 1;
                            }
                        } while ((iVar1 != 0xffff) && (iVar9 != 0));
                        finish_wait(iVar6,&uStack_70);
                        if (iVar9 != 0) {
                            uVar3 = 0;
                            goto code_r0x0800352c;
                        }
                        pcVar8 = "ucore didn\'t ack channel\n";
                    }
                    else {
                        uStack_58 = 0;
                        uStack_50 = 0;
                        uStack_68 = 0;
                        uStack_60 = 0;
                        uStack_70 = 0;
                        init_wait_entry(&uStack_70,0);
                        iVar6 = arg1 + 0x88;
                        prepare_to_wait_event(iVar6,&uStack_70,2);
                        iVar1 = sym.readl(*arg1 + 0x14);
                        if (iVar1 == 0xffff) {
                            finish_wait(iVar6,&uStack_70);
                            goto code_r0x080033e8;
                        }
                        iVar9 = 0xfa;
                        do {
                            iVar9 = schedule_timeout(iVar9);
                            prepare_to_wait_event(iVar6,&uStack_70,2);
                            iVar1 = sym.readl(*arg1 + 0x14);
                            if (iVar9 == 0 && iVar1 == 0xffff) {
                                iVar9 = 1;
                            }
                        } while ((iVar1 != 0xffff) && (iVar9 != 0));
                        finish_wait(iVar6,&uStack_70);
                        if (iVar9 != 0) goto code_r0x080033e8;
                        pcVar8 = "ucore didn\'t open channel\n";
                    }
                    _dev_err(*(arg1 + 8),pcVar8);
                    sym.writel(0xffff0000,*arg1 + 0x2c);
                }
                else {
                    uStack_58 = 0;
                    uStack_50 = 0;
                    uStack_68 = 0;
                    uStack_60 = 0;
                    uStack_70 = 0;
                    init_wait_entry(&uStack_70,0);
                    iVar6 = arg1 + 0x88;
                    prepare_to_wait_event(iVar6,&uStack_70,2);
                    iVar1 = sym.readl(*arg1 + 0x28);
                    if (iVar1 == 0xffff) {
                        finish_wait(iVar6,&uStack_70);
                        goto code_r0x08003304;
                    }
                    iVar9 = 0xfa;
                    do {
                        iVar9 = schedule_timeout(iVar9);
                        prepare_to_wait_event(iVar6,&uStack_70,2);
                        iVar1 = sym.readl(*arg1 + 0x28);
                        if (iVar9 == 0 && iVar1 == 0xffff) {
                            iVar9 = 1;
                        }
                    } while ((iVar1 != 0xffff) && (iVar9 != 0));
                    finish_wait(iVar6,&uStack_70);
                    if (iVar9 != 0) goto code_r0x08003304;
                    _dev_err(*(arg1 + 8),"ucore didn\'t ack link\n");
                }
                sym.writel(0xffff0000,*arg1 + 0x24);
                mbox_send_message(*(arg1 + 0x48),0);
                mbox_client_txdone(*(arg1 + 0x48),0);
                uVar3 = 0xffffff92;
                goto code_r0x0800352c;
            }
            pcVar8 = "invalid rx mailbox size\n";
        }
code_r0x08003524:
        _dev_err(uVar5,pcVar8);
    }
    else {
        _dev_err(*(arg1 + 8),"unsupported QMP version %d\n",iVar1);
    }
    uVar3 = 0xffffffea;
code_r0x0800352c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return uVar3;
    }
    puVar7 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.readl_relaxed;
    log_read_mmio(0x20,puVar7,0x80035d8);
    uVar3 = *puVar7;
    log_post_read_mmio(uVar3,0x20,puVar7,0x800360c);
    return uVar3;
}


// ===== sym.readl_relaxed @ 0x080035d4 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x80035d8);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x800360c);
    return uVar1;
}


// ===== sym.writel_relaxed @ 0x08003644 (size 112) =====

void sym.writel_relaxed(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(0,0x20,arg1,0x8003648);
    *arg1 = 0;
    log_post_write_mmio(0,0x20,arg1,0x8003684);
    return;
}


// ===== sym.qmp_qdss_clk_prepare @ 0x080036b4 (size 52) =====

void sym.qmp_qdss_clk_prepare(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qmp_send(arg1 - 0xd0,0x80014d0,0x40);
    return;
}


// ===== sym.qmp_qdss_clk_unprepare @ 0x080036e8 (size 52) =====

void sym.qmp_qdss_clk_unprepare(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qmp_send(arg1 - 0xd0,0x8001510,0x40);
    return;
}


// ===== sym.qmp_pd_power_on @ 0x0800371c (size 152) =====

ulong sym.qmp_pd_power_on(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    int64_t iStack_80;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    snprintf(&uStack_68,0x40,"{class: image, res: load_state, name: %s, val: %s}",*(arg1 + 0x508),0x8000361);
    uVar2 = sym.qmp_send(*(arg1 + -8),&uStack_68,0x40);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar2;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.qmp_pd_power_off;
    pcStack_88 = sym.qmp_pd_power_off;
    iVar1 = sp_el0;
    iStack_98 = *(iVar1 + 0x5e0);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    puStack_90 = &stack0xffffffffffffffe0;
    iStack_80 = arg1;
    snprintf(&uStack_d8,0x40,"{class: image, res: load_state, name: %s, val: %s}",*(iVar3 + 0x508),0x8000546);
    uVar2 = sym.qmp_send(*(iVar3 + -8),&uStack_d8,0x40);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_98) {
        return uVar2;
    }
    __stack_chk_fail();
    *extraout_x1 = 1;
    return 0;
}


// ===== sym.qmp_pd_power_off @ 0x080037b4 (size 152) =====

ulong sym.qmp_pd_power_off(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *extraout_x1;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    snprintf(&uStack_68,0x40,"{class: image, res: load_state, name: %s, val: %s}",*(arg1 + 0x508),0x8000546);
    uVar2 = sym.qmp_send(*(arg1 + -8),&uStack_68,0x40);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar2;
    }
    __stack_chk_fail();
    *extraout_x1 = 1;
    return 0;
}


// ===== sym.qmp_cdev_get_max_state @ 0x0800384c (size 24) =====

ulong sym.qmp_cdev_get_max_state(int64_t arg1,int64_t arg2)

{
    *arg2 = 1;
    return 0;
}


// ===== sym.qmp_cdev_get_cur_state @ 0x08003864 (size 28) =====

ulong sym.qmp_cdev_get_cur_state(int64_t arg1,int64_t arg2)

{
    *arg2 = *(*(arg1 + 0x3a8) + 0x18);
    return 0;
}


// ===== sym.qmp_cdev_set_cur_state @ 0x08003880 (size 204) =====

uint64_t sym.qmp_cdev_set_cur_state(int64_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    int iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t in_x2;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar10;
    ulong uVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_28 = *(iVar10 + 0x5e0);
    iVar10 = *(arg1 + 0x3a8);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    if (*(iVar10 + 0x18) == arg2) {
        uVar6 = 0;
    }
    else {
        uVar11 = 0x8000361;
        if (arg2 == 0) {
            uVar11 = 0x8000546;
        }
        snprintf(&uStack_68,0x40,"{class: volt_flr, event:zero_temp, res:%s, value:%s}",*(iVar10 + 0x10),uVar11);
        in_x2 = 0x40;
        uVar6 = sym.qmp_send(*(iVar10 + 8),&uStack_68,0x40);
        if (uVar6 == 0) {
            *(iVar10 + 0x18) = arg2 != 0;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_28) {
        return uVar6;
    }
    auVar12 = __stack_chk_fail(uVar6);
    *extraout_x18 = sym.aoss_dbg_write;
    pcStack_98 = sym.aoss_dbg_write;
    iVar10 = sp_el0;
    iStack_a8 = *(iVar10 + 0x5e0);
    uVar11 = *(auVar12._0_8_ + 0xd8);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar6 = in_x2;
    puStack_a0 = &stack0xffffffffffffffe0;
    if (in_x2 - 0x40 < 0xffffffffffffffc1) {
        in_x2 = 0xffffffffffffffea;
    }
    else {
        __check_object_size(&uStack_e8,in_x2,0);
        iVar5 = sym._copy_from_user(&uStack_e8,auVar12._8_8_,in_x2);
        if (iVar5 == 0) {
            iVar10 = strim(&uStack_e8);
            uVar6 = 0x40;
            iVar5 = sym.qmp_send(uVar11,iVar10,0x40);
            if (iVar5 != 0) {
                in_x2 = iVar5;
            }
        }
        else {
            in_x2 = 0xfffffffffffffff2;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_a8) {
        auVar12 = __stack_chk_fail(in_x2);
        uVar8 = auVar12._8_8_;
        *extraout_x18_00 = sym._copy_from_user;
        puVar2 = sp_el0;
        uVar3 = (uVar8 << 8) >> 8;
        if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar9 = uVar8, (*puVar2 >> 0x1a & 1) != 0)) {
            uVar9 = uVar8 & uVar3;
        }
        bVar4 = CARRY8(uVar9,uVar6);
        uVar9 = uVar9 + uVar6;
        uVar1 = 0;
        if (!bVar4 || uVar9 == 0) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar4) {
            uVar9 = 0xffffffffffffffff;
        }
        uVar7 = uVar6;
        if (!CARRY8(uVar9,~uVar1) && !CARRY8(uVar9 + ~uVar1,bVar4) || uVar9 == uVar1 + !bVar4) {
            if ((_of_clk_hw_simple_get >> 0x18 & 1) == 0) {
                uVar9 = daif;
                if ((uVar9 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar2[1];
                InstructionSynchronizationBarrier();
                daif = uVar9;
            }
            if ((uVar8 & uVar3 & 0xffffff8000000000) != 0) {
                uVar8 = 0;
            }
            uVar7 = __arch_copy_from_user(auVar12._0_8_,uVar8,uVar6);
            if ((_of_clk_hw_simple_get >> 0x18 & 1) == 0) {
                uVar3 = daif;
                if ((uVar3 & 0x80) == 0) {
                    uVar8 = daif;
                    daif = uVar8 | 0xc0;
                }
                uVar8 = ttbr1_el1;
                ttbr0_el1 = (uVar8 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar8 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar3;
            }
        }
        if (uVar7 != 0) {
            memset(auVar12._0_8_ + (uVar6 - uVar7),0,uVar7);
        }
        return uVar7;
    }
    return in_x2;
}


// ===== sym.aoss_dbg_write @ 0x0800394c (size 220) =====

uint64_t sym.aoss_dbg_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uVar11 = *(arg1 + 0xd8);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar9 = arg3;
    if (arg3 - 0x40U < 0xffffffffffffffc1) {
        uVar6 = 0xffffffffffffffea;
    }
    else {
        __check_object_size(&uStack_78,arg3,0);
        iVar4 = sym._copy_from_user(&uStack_78,arg2,arg3);
        if (iVar4 == 0) {
            iVar5 = strim(&uStack_78);
            uVar9 = 0x40;
            iVar4 = sym.qmp_send(uVar11,iVar5,0x40);
            uVar6 = arg3;
            if (iVar4 != 0) {
                uVar6 = iVar4;
            }
        }
        else {
            uVar6 = 0xfffffffffffffff2;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_38) {
        auVar12 = __stack_chk_fail(uVar6);
        uVar8 = auVar12._8_8_;
        *extraout_x18 = sym._copy_from_user;
        puVar2 = sp_el0;
        uVar6 = (uVar8 << 8) >> 8;
        if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar10 = uVar8, (*puVar2 >> 0x1a & 1) != 0)) {
            uVar10 = uVar8 & uVar6;
        }
        bVar3 = CARRY8(uVar10,uVar9);
        uVar10 = uVar10 + uVar9;
        uVar1 = 0;
        if (!bVar3 || uVar10 == 0) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar3) {
            uVar10 = 0xffffffffffffffff;
        }
        uVar7 = uVar9;
        if (!CARRY8(uVar10,~uVar1) && !CARRY8(uVar10 + ~uVar1,bVar3) || uVar10 == uVar1 + !bVar3) {
            if ((_of_clk_hw_simple_get >> 0x18 & 1) == 0) {
                uVar10 = daif;
                if ((uVar10 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar2[1];
                InstructionSynchronizationBarrier();
                daif = uVar10;
            }
            if ((uVar8 & uVar6 & 0xffffff8000000000) != 0) {
                uVar8 = 0;
            }
            uVar7 = __arch_copy_from_user(auVar12._0_8_,uVar8,uVar9);
            if ((_of_clk_hw_simple_get >> 0x18 & 1) == 0) {
                uVar6 = daif;
                if ((uVar6 & 0x80) == 0) {
                    uVar8 = daif;
                    daif = uVar8 | 0xc0;
                }
                uVar8 = ttbr1_el1;
                ttbr0_el1 = (uVar8 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar8 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar6;
            }
        }
        if (uVar7 != 0) {
            memset(auVar12._0_8_ + (uVar9 - uVar7),0,uVar7);
        }
        return uVar7;
    }
    return uVar6;
}


// ===== sym._copy_from_user @ 0x08003a28 (size 376) =====

int64_t sym._copy_from_user(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg2 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar6 = arg2, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar6 = arg2 & uVar3;
    }
    bVar4 = CARRY8(uVar6,arg3);
    uVar6 = uVar6 + arg3;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    iVar5 = arg3;
    if (!CARRY8(uVar6,~uVar1) && !CARRY8(uVar6 + ~uVar1,bVar4) || uVar6 == uVar1 + !bVar4) {
        if ((_of_clk_hw_simple_get >> 0x18 & 1) == 0) {
            uVar6 = daif;
            if ((uVar6 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar6;
        }
        if ((arg2 & uVar3 & 0xffffff8000000000) != 0) {
            arg2 = 0;
        }
        iVar5 = __arch_copy_from_user(arg1,arg2,arg3);
        if ((_of_clk_hw_simple_get >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar6 = daif;
                daif = uVar6 | 0xc0;
            }
            uVar6 = ttbr1_el1;
            ttbr0_el1 = (uVar6 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar6 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    if (iVar5 != 0) {
        memset(arg1 + (arg3 - iVar5),0,iVar5);
    }
    return iVar5;
}


// ===== sym.aoss_qmp_mbox_freeze @ 0x08003bdc (size 16) =====

ulong sym.aoss_qmp_mbox_freeze(int64_t arg1)

{
    return 0;
}


// ===== sym.aoss_qmp_mbox_restore @ 0x08003bec (size 84) =====

ulong sym.aoss_qmp_mbox_restore(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.qmp_open(*(arg1 + 0x98));
    if (iVar1 < 0) {
        _dev_err(arg1,"QMP restore failed, ret = %d\n",iVar1);
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08003c40 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08003c84

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
    //switch table (4 cases) at 0x80006e8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003c98);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08003cd0 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qmp_probe.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08003d04 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qmp_probe.2e1f1152604feabcb0cad5dcfa3aefc3.cfi_jt);
    return;
}

