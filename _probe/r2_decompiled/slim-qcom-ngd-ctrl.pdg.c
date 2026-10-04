// decompiled from slim-qcom-ngd-ctrl by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 1120) =====

//WARNING: Switch with 1 destination removed at 0x0800927c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b1394c7097a0a26) {
        if (arg1 < -0x2d1ef4d8549a89e5) {
            if (arg1 < -0x3987c0e26ee29729) {
                if (arg1 != -0x66d421a09845f9f8) {
                    if (arg1 == -0x57be845bca9148ef) {
                        if ((pcVar1 + -0x80034b0 >> 3 | pcVar1 << 0x3d) < 5) {
                            return;
                        }
                        goto code_r0x0800923c;
                    }
                    if (arg1 != -0x550b9e52359ac614) goto code_r0x0800923c;
                    pcVar2 = sym.qcom_slim_ngd_up_worker.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
                    goto code_r0x080033ac;
                }
                pcVar2 = sym.debug_mask_show.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
            }
            else if (arg1 == -0x3987c0e26ee29729) {
                pcVar2 = sym.qcom_slim_ngd_interrupt.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
            }
            else {
                if (arg1 == -0x3557318fb8d07b71) {
                    if ((pcVar1 + -0x8003558 >> 3 | pcVar1 << 0x3d) < 4) {
                        return;
                    }
                    goto code_r0x0800923c;
                }
                if (arg1 != -0x33b0d96f6ee79f4e) goto code_r0x0800923c;
                pcVar2 = sym.qcom_slim_ngd_get_laddr.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
            }
        }
        else if (arg1 < 0x2b3a43e29242445) {
            if (arg1 == -0x2d1ef4d8549a89e5) {
                pcVar2 = sym.qcom_slim_ngd_update_device_status.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
            }
            else if (arg1 == -0x218c0108fde83420) {
                pcVar2 = sym.trace_event_raw_init.cfi_jt;
            }
            else {
                if (arg1 != -0xfae0556695233a4) goto code_r0x0800923c;
                pcVar2 = sym.qcom_slim_ngd_qmi_new_server.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
            }
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 == 0x1c2b0952efa24c7a) {
            pcVar2 = sym.trace_event_reg.cfi_jt;
        }
        else {
            if (arg1 != 0x1e3d0ffe3d0499e9) goto code_r0x0800923c;
            pcVar2 = sym.debug_mask_store.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
        }
    }
    else if (arg1 < 0x4c550309df1cf4c1) {
        if (arg1 < 0x345b8f49125c3eda) {
            if (arg1 == 0x2b1394c7097a0a26) {
                pcVar2 = sym.qcom_slim_qmi_power_resp_cb.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
            }
            else if (arg1 == 0x2d3f4915c22cd1ac) {
                pcVar2 = sym.qcom_ngd_set_suspend.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
            }
            else {
                if (arg1 != 0x2eec8673b37c6729) goto code_r0x0800923c;
                pcVar2 = sym.__traceiter_slimbus_dbg.cfi_jt;
            }
        }
        else {
            if (arg1 == 0x345b8f49125c3eda) {
                if ((pcVar1 + -0x80034f0 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x0800923c;
            }
            if (arg1 != 0x3dd1a39e589289fe) {
                if (arg1 != 0x4b4ad99a78e6dbc3) goto code_r0x0800923c;
                pcVar2 = sym.qcom_slim_ngd_disable_stream.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
                goto code_r0x080033ac;
            }
            pcVar2 = sym.trace_raw_output_slimbus_dbg.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
        }
    }
    else if (arg1 < 0x77b71c1b418c981d) {
        if (arg1 == 0x4c550309df1cf4c1) {
            pcVar2 = sym.qcom_slim_ngd_tx_msg_dma_cb.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
code_r0x080033ac:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x0800923c;
        }
        if (arg1 == 0x65e2fc7b0d9880a3) {
            pcVar2 = sym.qcom_slim_ngd_xfer_msg.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
        }
        else {
            if (arg1 != 0x717e13c02c8a8b12) goto code_r0x0800923c;
            pcVar2 = sym.slim_pd_status.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
        }
    }
    else if (arg1 == 0x77b71c1b418c981d) {
        pcVar2 = sym.qcom_slim_ngd_qmi_del_server.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.qcom_slim_ngd_ssr_notify.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800923c;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800923c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8009290);
    (*pcVar1)();
}


// ===== sym.qcom_slim_ngd_qmi_new_server.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x08003468 (size 8) =====

ulong sym.qcom_slim_ngd_qmi_new_server.a72e7fa1990595d9f3a61d296fa60916.cfi_jt
                (ulong param_1,int64_t param_2,int64_t param_3,int64_t param_4,int64_t param_5)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__slimbus_dbg(param_1,0x8000f2a,param_4,param_5);
    iVar1 = *(param_2 + 0xefc);
    if (2 < iVar1) {
        ipc_log_string(*(param_2 + 0xf08),"Slimbus QMI new server event received\n");
        iVar1 = *(param_2 + 0xefc);
    }
    if (iVar1 == 0) {
        ipc_log_string(*(param_2 + 0xf10),"Slimbus QMI new server event received\n");
    }
    *(param_2 + -0x10) = 0x2a;
    *(param_2 + -0xc) = *(param_3 + 0xc);
    *(param_2 + -8) = *(param_3 + 0x10);
    complete(param_2 + 0xd80);
    return 0;
}


// ===== sym.qcom_slim_ngd_update_device_status.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x08003470 (size 8) =====

ulong sym.qcom_slim_ngd_update_device_status.a72e7fa1990595d9f3a61d296fa60916.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    slim_report_absent();
    return 0;
}


// ===== sym.trace_event_raw_init.cfi_jt @ 0x08003478 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_raw_init.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08003480 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_slim_ngd_ctrl_probe.a72e7fa1990595d9f3a61d296fa60916.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08003488 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.qcom_slim_ngd_ctrl_probe.a72e7fa1990595d9f3a61d296fa60916.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.debug_mask_store.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x08003490 (size 8) =====

ulong sym.debug_mask_store.a72e7fa1990595d9f3a61d296fa60916.cfi_jt
                (int64_t param_1,ulong param_2,uint8_t *param_3,ulong param_4)

{
    int iVar1;
    
    iVar1 = 4;
    if (*param_3 < 0x35) {
        iVar1 = *param_3 - 0x30;
    }
    *(*(param_1 + 0x98) + 0x155c) = iVar1;
    return param_4;
}


// ===== sym.qcom_slim_ngd_interrupt.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x08003498 (size 8) =====

ulong sym.qcom_slim_ngd_interrupt.a72e7fa1990595d9f3a61d296fa60916.cfi_jt
                (ulong param_1,int64_t param_2,ulong param_3,int64_t param_4)

{
    uint8_t *puVar1;
    uint64_t uVar2;
    int iVar3;
    ulong *in_x18;
    uint64_t arg2;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(param_2 + 2000) + 8);
    if ((*(*(param_2 + 0x3a0) + 0x20c) == 2) && ((*(*(param_2 + 0x3a0) + 0x200) & 7) == 0)) {
        puVar1 = param_2 + 0x157c;
        sym.__slimbus_dbg(0x157c,0x80016e2,*puVar1,param_4);
        iVar3 = *(param_2 + 0x155c);
        if (2 < iVar3) {
            ipc_log_string(*(param_2 + 0x1568),"Slimbus is in suspend state %d\n",*puVar1);
            iVar3 = *(param_2 + 0x155c);
        }
        if (iVar3 == 0) {
            ipc_log_string(*(param_2 + 0x1570),"Slimbus is in suspend state %d\n",*puVar1);
        }
    }
    else {
        uVar2 = sym.readl(iVar4 + 0x14);
        arg2 = uVar2 & 0xffffffff;
        if ((uVar2 & 0x2e000000) != 0) {
            sym.__slimbus_dbg(0x2e000000,0x8001b71,arg2,param_4);
            iVar3 = *(param_2 + 0x155c);
            if (1 < iVar3) {
                _printk(0x8000afc,arg2);
                ipc_log_string(*(param_2 + 0x1568),"Error Interrupt received 0x%x\n",arg2);
                iVar3 = *(param_2 + 0x155c);
            }
            if (iVar3 == 0) {
                ipc_log_string(*(param_2 + 0x1570),"Error Interrupt received 0x%x\n",arg2);
            }
        }
        sym.writel(arg2,iVar4 + 0x18);
    }
    return 1;
}


// ===== sym.qcom_slim_ngd_up_worker.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x080034a0 (size 8) =====

void sym.qcom_slim_ngd_up_worker.a72e7fa1990595d9f3a61d296fa60916.cfi_jt
               (int64_t param_1,ulong param_2,int64_t param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    ulong noname_0;
    ulong *in_x18;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    iVar1 = wait_for_completion_interruptible_timeout(param_1 + 0x38,0xfa);
    if (iVar1 == 0) {
        sym.__slimbus_dbg(noname_0,0x800163c,param_3,param_4);
        iVar2 = *(param_1 + 0x1b4);
        if (2 < iVar2) {
            ipc_log_string(*(param_1 + 0x1c0),"QMI wait timeout\n");
            iVar2 = *(param_1 + 0x1b4);
        }
        if (iVar2 == 0) {
            ipc_log_string(*(param_1 + 0x1c8),"QMI wait timeout\n");
        }
    }
    else {
        noname_1 = mutex_lock(param_1 + 0x100);
        sym.qcom_slim_ngd_enable(param_1 + -0x13a8,noname_1,param_3);
        mutex_unlock(param_1 + 0x100);
    }
    return;
}


// ===== sym.qcom_slim_ngd_master_worker.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x080034a8 (size 8) =====

void sym.qcom_slim_ngd_master_worker.a72e7fa1990595d9f3a61d296fa60916.cfi_jt
               (int64_t param_1,ulong param_2,uint64_t param_3,int64_t param_4)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong noname_0;
    uint64_t noname_0_00;
    uint64_t extraout_x8;
    ulong noname_0_01;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar noname_1 [16];
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong *puStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong *puStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    puStack_70 = &uStack_88;
    uStack_68 = 0;
    uStack_88 = 0x101c5d9;
    puStack_58 = &uStack_80;
    uStack_78 = 0;
    uStack_50 = 0;
    uStack_80 = 0x40000;
    uStack_60 = 0xff00000000010608;
    sym.__slimbus_dbg(0xffffffffffffec88,0x8000d3c,param_3,param_4);
    iVar3 = *(param_1 + 0x1e4);
    if (2 < iVar3) {
        ipc_log_string(*(param_1 + 0x1f0),"SLIM SAT: Rcvd master capability\n");
        iVar3 = *(param_1 + 0x1e4);
    }
    if (iVar3 == 0) {
        ipc_log_string(*(param_1 + 0x1f8),"SLIM SAT: Rcvd master capability\n");
    }
    iVar3 = 10;
    while (uVar2 = sym.qcom_slim_ngd_xfer_msg(param_1 + -0xfd8,&uStack_60), uVar2 == 0xfffffffb) {
        sym.__slimbus_dbg(noname_0,0x8001254,param_3,param_4);
        iVar1 = *(param_1 + 0x1e4);
        if (1 < iVar1) {
            _printk(0x8001025);
            ipc_log_string(*(param_1 + 0x1f0),"capability message NACKed, retrying\n");
            iVar1 = *(param_1 + 0x1e4);
        }
        if (iVar1 == 0) {
            ipc_log_string(*(param_1 + 0x1f8),"capability message NACKed, retrying\n");
        }
        if (iVar3 == 0) goto code_r0x08008f70;
        msleep(10);
        iVar3 = iVar3 + -1;
    }
    param_3 = uVar2;
    if (uVar2 == 0) {
        sym.__slimbus_dbg(noname_0,0x8000ba5,0,param_4);
        uVar2 = *(param_1 + 0x1e4);
        if (2 < uVar2) {
            ipc_log_string(*(param_1 + 0x1f0),"SLIM SAT: capability exchange successful\n");
            uVar2 = *(param_1 + 0x1e4);
        }
        noname_0_00 = uVar2;
        if (uVar2 == 0) {
            ipc_log_string(*(param_1 + 0x1f8),"SLIM SAT: capability exchange successful\n");
            noname_0_00 = extraout_x8;
        }
        param_3 = *(param_1 + 0x188);
        if (*(param_1 + 0x188) < 2) {
            sym.__slimbus_dbg(noname_0_00,0x80009d0,param_3,param_4);
            iVar3 = *(param_1 + 0x1e4);
            if (1 < iVar3) {
                _printk(0x8001193,*(param_1 + 0x188));
                param_3 = *(param_1 + 0x188);
                ipc_log_string(*(param_1 + 0x1f0),"capability due to noise, Unexpected state:%d\n");
                iVar3 = *(param_1 + 0x1e4);
            }
            if (iVar3 == 0) {
                param_3 = *(param_1 + 0x188);
                ipc_log_string(*(param_1 + 0x1f8),"capability due to noise, Unexpected state:%d\n");
            }
        }
        else {
            complete(param_1 + -0x40);
        }
        if (*(param_1 + 0x188) == 3) {
            for (iVar4 = of_get_next_child(*(**(param_1 + -0xba8) + 0x300),0); iVar4 != 0;
                iVar4 = of_get_next_child(*(**(param_1 + -0xba8) + 0x300),iVar4)) {
                iVar5 = of_slim_get_device(param_1 + -0xfd8,iVar4);
                if ((iVar5 != 0) && (iVar3 = slim_get_logical_addr(), iVar3 != 0)) {
                    _dev_err(*(param_1 + -0xba0),"Failed to get logical address\n");
                }
            }
        }
    }
    else {
        _dev_err(*(param_1 + -0xba0),"SLIM: capability TX failed:%d\n");
    }
code_r0x08008f70:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_48) {
        iVar4 = __stack_chk_fail();
        *extraout_x18 = sym.qcom_slim_ngd_up_worker;
        iVar5 = wait_for_completion_interruptible_timeout(iVar4 + 0x38,0xfa);
        if (iVar5 == 0) {
            sym.__slimbus_dbg(noname_0_01,0x800163c,param_3,param_4);
            iVar3 = *(iVar4 + 0x1b4);
            if (2 < iVar3) {
                ipc_log_string(*(iVar4 + 0x1c0),"QMI wait timeout\n");
                iVar3 = *(iVar4 + 0x1b4);
            }
            if (iVar3 == 0) {
                ipc_log_string(*(iVar4 + 0x1c8),"QMI wait timeout\n");
            }
        }
        else {
            noname_1 = mutex_lock(iVar4 + 0x100);
            sym.qcom_slim_ngd_enable(iVar4 + -0x13a8,noname_1,param_3);
            mutex_unlock(iVar4 + 0x100);
        }
        return;
    }
    return;
}


// ===== sym.pm_runtime_force_resume.cfi_jt @ 0x080034b0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.pm_runtime_force_resume.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcom_slim_ngd_runtime_resume.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x080034b8 (size 8) =====

uint32_t sym.qcom_slim_ngd_runtime_resume.a72e7fa1990595d9f3a61d296fa60916.cfi_jt
                   (ulong param_1,int64_t param_2,ulong param_3,uint64_t param_4,uint64_t param_5)

{
    int64_t iVar1;
    uint8_t *puVar2;
    uint uVar3;
    uint8_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t extraout_x0;
    uint64_t uVar7;
    char *arg2;
    ulong noname_0;
    ulong noname_0_00;
    ulong noname_0_01;
    uint64_t extraout_x8;
    ulong noname_0_02;
    ulong noname_0_03;
    ulong *in_x18;
    int64_t arg1;
    uint64_t uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_2 + 0x98);
    sym.__slimbus_dbg(param_1,0x8001c66,param_4,param_5);
    iVar5 = *(arg1 + 0x155c);
    if (2 < iVar5) {
        ipc_log_string(*(arg1 + 0x1568),"Slim runtime resume\n");
        iVar5 = *(arg1 + 0x155c);
    }
    if (iVar5 == 0) {
        ipc_log_string(*(arg1 + 0x1570),"Slim runtime resume\n");
    }
    iVar1 = arg1 + 0x1478;
    mutex_lock(iVar1);
    if (*(arg1 + 0x7a8) == 0) {
        sym.__slimbus_dbg(0,0x800110b,0x8001c49,param_5);
        iVar5 = *(arg1 + 0x155c);
        if (1 < iVar5) {
            _printk(0x8000f9c,"qcom_slim_ngd_runtime_resume");
            ipc_log_string(*(arg1 + 0x1568),"%s QMI handle is NULL\n","qcom_slim_ngd_runtime_resume");
            iVar5 = *(arg1 + 0x155c);
        }
        if (iVar5 == 0) {
            ipc_log_string(*(arg1 + 0x1570),"%s QMI handle is NULL\n","qcom_slim_ngd_runtime_resume");
        }
        mutex_unlock(iVar1);
        return 0;
    }
    puVar2 = arg1 + 0x157c;
    if (*puVar2 != 0) {
        enable_irq(*(arg1 + 0x1578));
        *puVar2 = 0;
        sym.__slimbus_dbg(noname_0,0x8000943,param_4,param_5);
        iVar5 = *(arg1 + 0x155c);
        if (2 < iVar5) {
            ipc_log_string(*(arg1 + 0x1568),"Slim ngd IRQ enabled\n");
            iVar5 = *(arg1 + 0x155c);
        }
        if (iVar5 == 0) {
            ipc_log_string(*(arg1 + 0x1570),"Slim ngd IRQ enabled\n");
        }
    }
    if (1 < *(arg1 + 0x1500)) {
        iVar9 = *(arg1 + 2000);
        sym.__slimbus_dbg(*(arg1 + 0x1500),0x800176c,param_4,param_5);
        iVar5 = *(arg1 + 0x155c);
        if (2 < iVar5) {
            ipc_log_string(*(arg1 + 0x1568),"SLIM: NGD power up\n");
            iVar5 = *(arg1 + 0x155c);
        }
        if (iVar5 == 0) {
            ipc_log_string(*(arg1 + 0x1570),"SLIM: NGD power up\n");
        }
        uVar6 = *(arg1 + 0x1500);
        if (uVar6 == 3) {
            iVar5 = wait_for_completion_timeout(arg1 + 0x7b0,0xfa);
            if (iVar5 != 0) {
                uVar6 = *(arg1 + 0x1500);
                goto code_r0x08006ea0;
            }
            sym.__slimbus_dbg(noname_0_00,0x8000c02,param_4,param_5);
            if (*(arg1 + 0x155c) < 1) {
                if (*(arg1 + 0x155c) == 0) goto code_r0x080070a4;
            }
            else {
                _printk(0x8001c7b);
                ipc_log_string(*(arg1 + 0x1568),"slimbus QMI init timed out\n");
                uVar3 = *(arg1 + 0x155c);
                *(arg1 + 0x155c) = 0;
                *(arg1 + 0x1558) = uVar3;
code_r0x080070a4:
                ipc_log_string(*(arg1 + 0x1570),"slimbus QMI init timed out\n");
            }
code_r0x080070b4:
            if (*(arg1 + 0x1500) == 3) {
                sym.__slimbus_dbg(3,0x8000c6c,param_4,param_5);
                uVar6 = *(arg1 + 0x155c);
                if (1 < uVar6) {
                    _printk(0x8000e37);
                    ipc_log_string(*(arg1 + 0x1568),"HW wakeup attempt during SSR\n");
                    uVar6 = *(arg1 + 0x155c);
                }
                uVar8 = uVar6;
                if (uVar6 == 0) {
                    ipc_log_string(*(arg1 + 0x1570),"HW wakeup attempt during SSR\n");
                    uVar8 = extraout_x8;
                }
            }
            else {
                uVar8 = 2;
                *(arg1 + 0x1500) = 2;
            }
            arg2 = "qcom_slim_ngd_runtime_resume";
            sym.__slimbus_dbg(uVar8,0x800182e,0x8001c49,param_5);
            if (*(arg1 + 0x155c) < 2) {
                if (*(arg1 + 0x155c) != 0) goto code_r0x08007128;
code_r0x080071a0:
                arg2 = "qcom_slim_ngd_runtime_resume";
                ipc_log_string(*(arg1 + 0x1570),"%s Power up request failed, try resume again\n");
                uVar4 = *puVar2;
            }
            else {
                arg2 = "qcom_slim_ngd_runtime_resume";
                _printk(0x8000913,"qcom_slim_ngd_runtime_resume");
                ipc_log_string(*(arg1 + 0x1568),"%s Power up request failed, try resume again\n");
                if (*(arg1 + 0x155c) == 0) goto code_r0x080071a0;
code_r0x08007128:
                uVar4 = *puVar2;
            }
            if (uVar4 == 0) {
                disable_irq(*(arg1 + 0x1578));
                *puVar2 = 1;
                sym.__slimbus_dbg(1,0x8001a6e,arg2,param_5);
                iVar5 = *(arg1 + 0x155c);
                if (2 < iVar5) {
                    ipc_log_string(*(arg1 + 0x1568),"Slim ngd IRQ disabled\n");
                    iVar5 = *(arg1 + 0x155c);
                }
                if (iVar5 == 0) {
                    ipc_log_string(*(arg1 + 0x1570),"Slim ngd IRQ disabled\n");
                }
            }
            uVar6 = 0xfffffff5;
            goto code_r0x0800721c;
        }
code_r0x08006ea0:
        if ((uVar6 & 0xfffffffe) == 2) {
            sym.__slimbus_dbg(2,0x80008a8,param_4,param_5);
            iVar5 = *(arg1 + 0x155c);
            if (2 < iVar5) {
                ipc_log_string(*(arg1 + 0x1568),"Sending QMI power on request\n");
                iVar5 = *(arg1 + 0x155c);
            }
            if (iVar5 == 0) {
                ipc_log_string(*(arg1 + 0x1570),"Sending QMI power on request\n");
            }
            uVar6 = sym.qcom_slim_qmi_power_request(arg1,1);
            if (uVar6 != 0) {
                uVar8 = uVar6;
                param_4 = uVar8;
                sym.__slimbus_dbg(noname_0_01,0x8000c8a,uVar8,param_5);
                if (*(arg1 + 0x155c) < 1) {
                    if (*(arg1 + 0x155c) != 0) goto code_r0x080070b4;
                }
                else {
                    _printk(0x80014ca,uVar8);
                    ipc_log_string(*(arg1 + 0x1568),"SLIM QMI power request failed:%d\n",uVar8);
                    uVar3 = *(arg1 + 0x155c);
                    *(arg1 + 0x155c) = 0;
                    *(arg1 + 0x1558) = uVar3;
                }
                ipc_log_string(*(arg1 + 0x1570),"SLIM QMI power request failed:%d\n");
                param_4 = uVar8;
                goto code_r0x080070b4;
            }
        }
        sym.readl_relaxed(*(arg1 + 0x7e0));
        *(arg1 + 0x1530) = extraout_x0 & 0xffff;
        uVar6 = sym.readl_relaxed(*(iVar9 + 8) + 4);
        if ((uVar6 >> 1 & 1) == 0) {
            *(arg1 + 0x1338) = 0;
            sym.writel_relaxed(0xfe000000,*(iVar9 + 8) + 0x10);
            uVar6 = sym.readl_relaxed(*(iVar9 + 8) + 8);
            sym.writel_relaxed(uVar6 | 0x10000,*(iVar9 + 8) + 8);
            sym.qcom_slim_ngd_setup(arg1);
            iVar5 = wait_for_completion_timeout(arg1 + 0x1338,0x9c4);
            if (iVar5 == 0) {
                _dev_err(*(arg1 + 0x7d8),"capability exchange timed-out\n");
                uVar8 = sym.readl_relaxed(*(iVar9 + 8));
                uVar8 = uVar8 & 0xffffffff;
                uVar7 = sym.readl_relaxed(*(iVar9 + 8) + 4);
                uVar7 = uVar7 & 0xffffffff;
                param_4 = uVar7;
                param_5 = uVar8;
                sym.__slimbus_dbg(noname_0_03,0x800160f,uVar7,uVar8);
                iVar5 = *(arg1 + 0x155c);
                if (1 < iVar5) {
                    _printk(0x8001097,uVar7,uVar8);
                    param_4 = uVar7;
                    param_5 = uVar8;
                    ipc_log_string(*(arg1 + 0x1568),"slim capability time-out stat:0x%x,cfg:0x%x\n");
                    iVar5 = *(arg1 + 0x155c);
                }
                if (iVar5 == 0) {
                    ipc_log_string(*(arg1 + 0x1570),"slim capability time-out stat:0x%x,cfg:0x%x\n");
                    param_4 = uVar7;
                    param_5 = uVar8;
                }
                goto code_r0x080070b4;
            }
            if (*(arg1 + 0x1500) == 3) {
                sym.__slimbus_dbg(3,0x8001b9b,param_4,param_5);
                iVar5 = *(arg1 + 0x155c);
                if (2 < iVar5) {
                    ipc_log_string(*(arg1 + 0x1568),"ADSP slimbus power up now\n");
                    iVar5 = *(arg1 + 0x155c);
                }
                if (iVar5 == 0) {
                    ipc_log_string(*(arg1 + 0x1570),"ADSP slimbus power up now\n");
                }
                complete_all(arg1 + 0x1358);
            }
        }
        else {
            sym.qcom_slim_ngd_setup(arg1);
        }
    }
    uVar6 = 0;
    *(arg1 + 0x1500) = 0;
code_r0x0800721c:
    mutex_unlock(iVar1);
    sym.__slimbus_dbg(noname_0_02,0x80018b4,uVar6,*puVar2);
    iVar5 = *(arg1 + 0x155c);
    if (2 < iVar5) {
        ipc_log_string(*(arg1 + 0x1568),"Slim runtime resume: ret %d irq_disabled %d\n",uVar6,*puVar2);
        iVar5 = *(arg1 + 0x155c);
    }
    if (iVar5 == 0) {
        ipc_log_string(*(arg1 + 0x1570),"Slim runtime resume: ret %d irq_disabled %d\n",uVar6,*puVar2);
    }
    return uVar6;
}


// ===== sym.pm_runtime_force_suspend.cfi_jt @ 0x080034c0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.pm_runtime_force_suspend.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcom_slim_ngd_runtime_idle.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x080034c8 (size 8) =====

ulong sym.qcom_slim_ngd_runtime_idle.a72e7fa1990595d9f3a61d296fa60916.cfi_jt
                (int64_t param_1,ulong param_2,int64_t param_3,int64_t param_4)

{
    int iVar1;
    uint64_t noname_0;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    noname_0 = *(iVar2 + 0x1500);
    if (*(iVar2 + 0x1500) == 0) {
        noname_0 = 1;
        *(iVar2 + 0x1500) = 1;
    }
    sym.__slimbus_dbg(noname_0,0x8000d94,param_3,param_4);
    iVar1 = *(iVar2 + 0x155c);
    if (3 < iVar1) {
        ipc_log_string(*(iVar2 + 0x1568),"pm_runtime: idle...\n");
        iVar1 = *(iVar2 + 0x155c);
    }
    if (iVar1 == 0) {
        ipc_log_string(*(iVar2 + 0x1570),"pm_runtime: idle...\n");
    }
    __pm_runtime_suspend(param_1,9);
    return 0xfffffff5;
}


// ===== sym.qcom_slim_ngd_runtime_suspend.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x080034d0 (size 8) =====

uint64_t sym.qcom_slim_ngd_runtime_suspend.a72e7fa1990595d9f3a61d296fa60916.cfi_jt
                   (ulong param_1,int64_t param_2,ulong param_3,int64_t param_4,int64_t param_5)

{
    int64_t iVar1;
    uint8_t *puVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t noname_0;
    ulong noname_0_00;
    ulong noname_0_01;
    ulong *in_x18;
    int64_t arg1;
    uint64_t arg2;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    arg1 = *(param_2 + 0x98);
    sym.__slimbus_dbg(param_1,0x8000fd4,param_4,param_5);
    iVar4 = *(arg1 + 0x155c);
    if (2 < iVar4) {
        ipc_log_string(*(arg1 + 0x1568),"Slim runtime suspend\n");
        iVar4 = *(arg1 + 0x155c);
    }
    if (iVar4 == 0) {
        ipc_log_string(*(arg1 + 0x1570),"Slim runtime suspend\n");
    }
    iVar1 = arg1 + 0x1478;
    noname_1 = mutex_lock(iVar1);
    sym.qcom_slim_ngd_exit_dma(arg1,noname_1,param_4);
    puVar2 = arg1 + 0x157c;
    if (*puVar2 == 0) {
        disable_irq(*(arg1 + 0x1578));
        *puVar2 = 1;
        sym.__slimbus_dbg(1,0x8001a6e,param_4,param_5);
        iVar4 = *(arg1 + 0x155c);
        if (2 < iVar4) {
            ipc_log_string(*(arg1 + 0x1568),"Slim ngd IRQ disabled\n");
            iVar4 = *(arg1 + 0x155c);
        }
        if (iVar4 != 0) goto code_r0x08008390;
        ipc_log_string(*(arg1 + 0x1570),"Slim ngd IRQ disabled\n");
        noname_0 = *(arg1 + 0x7a8);
    }
    else {
code_r0x08008390:
        noname_0 = *(arg1 + 0x7a8);
    }
    if (noname_0 == 0) {
        sym.__slimbus_dbg(0,0x800110b,0x8001af5,param_5);
        iVar4 = *(arg1 + 0x155c);
        if (1 < iVar4) {
            _printk(0x8000f9c,"qcom_slim_ngd_runtime_suspend");
            ipc_log_string(*(arg1 + 0x1568),"%s QMI handle is NULL\n","qcom_slim_ngd_runtime_suspend");
            iVar4 = *(arg1 + 0x155c);
        }
        if (iVar4 == 0) {
            ipc_log_string(*(arg1 + 0x1570),"%s QMI handle is NULL\n","qcom_slim_ngd_runtime_suspend");
        }
        mutex_unlock(iVar1);
        return 0;
    }
    sym.__slimbus_dbg(noname_0,0x8001bc1,param_4,param_5);
    iVar4 = *(arg1 + 0x155c);
    if (2 < iVar4) {
        ipc_log_string(*(arg1 + 0x1568),"Sending QMI power off request\n");
        iVar4 = *(arg1 + 0x155c);
    }
    if (iVar4 == 0) {
        ipc_log_string(*(arg1 + 0x1570),"Sending QMI power off request\n");
    }
    uVar3 = sym.qcom_slim_qmi_power_request(arg1,0);
    arg2 = uVar3;
    if (uVar3 != 0xfffffff0) {
        if (uVar3 != 0) {
            sym.__slimbus_dbg(noname_0_00,0x800097a,uVar3,param_5);
            iVar4 = *(arg1 + 0x155c);
            if (2 < iVar4) {
                ipc_log_string(*(arg1 + 0x1568),"slim resource not idle:%d\n",uVar3);
                iVar4 = *(arg1 + 0x155c);
            }
            if (iVar4 == 0) {
                ipc_log_string(*(arg1 + 0x1570),"slim resource not idle:%d\n",uVar3);
            }
            if ((uVar3 != 0) && (uVar3 != 0xffffff92)) goto code_r0x080084d8;
        }
        *(arg1 + 0x1500) = 2;
    }
code_r0x080084d8:
    mutex_unlock(iVar1);
    sym.__slimbus_dbg(noname_0_01,0x8001dfb,arg2,*puVar2);
    iVar4 = *(arg1 + 0x155c);
    if (2 < iVar4) {
        ipc_log_string(*(arg1 + 0x1568),"Slim runtime suspend: ret %d irq_disabled %d\n",arg2,*puVar2);
        iVar4 = *(arg1 + 0x155c);
    }
    if (iVar4 == 0) {
        ipc_log_string(*(arg1 + 0x1570),"Slim runtime suspend: ret %d irq_disabled %d\n",arg2,*puVar2);
    }
    return arg2;
}


// ===== sym.trace_event_reg.cfi_jt @ 0x080034d8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_reg.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcom_slim_ngd_xfer_msg.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x080034e0 (size 8) =====

//WARNING: Type propagation algorithm not settling

int sym.qcom_slim_ngd_xfer_msg.a72e7fa1990595d9f3a61d296fa60916.cfi_jt
              (int64_t *param_1,uint8_t *param_2,uint64_t param_3,uint64_t param_4)

{
    int64_t iVar1;
    uint uVar2;
    int iVar3;
    bool bVar4;
    code *pcVar5;
    int iVar6;
    uint64_t uVar7;
    ulong uVar8;
    uint8_t *puVar9;
    uint8_t *puVar10;
    char *pcVar11;
    uint8_t uVar12;
    uint32_t uVar13;
    uint64_t extraout_x8;
    ulong noname_0;
    ulong extraout_x8_00;
    int64_t iVar14;
    ulong extraout_x8_01;
    uint64_t extraout_x8_02;
    ulong noname_0_00;
    ulong noname_0_01;
    ulong noname_0_02;
    int64_t iVar15;
    ulong *in_x18;
    int64_t iVar16;
    uint32_t uVar17;
    int64_t iVar19;
    uint32_t *arg2;
    uint32_t uVar20;
    ulong unaff_x30;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong *******pppppppuStack_c8;
    ulong *******pppppppuStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uint32_t uVar18;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_68 = *(iVar16 + 0x5e0);
    pppppppuStack_c8 = &pppppppuStack_c8;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uVar20 = param_2[7];
    uStack_78 = 0;
    uStack_70 = 0;
    iVar16 = *(*param_1 + 0x98);
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    *(iVar16 + 0x1400) = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    pppppppuStack_c0 = pppppppuStack_c8;
    if ((param_2[1] == 0) && ((param_2[2] & 0xe0) == 0x40)) {
code_r0x08005424:
        iVar6 = 0;
    }
    else if (param_2[3] == 1) {
        iVar6 = -0x5d;
    }
    else {
        uVar12 = *(*(param_2 + 8) + 2);
        if ((uVar12 < 0x29) && (uVar12 = *param_2, uVar12 < 0x29)) {
            iVar1 = iVar16 + 0x1448;
            uVar7 = mutex_is_locked(iVar1);
            if (((uVar7 & 1) != 0) && (*(iVar16 + 0x1500) == 4)) {
                sym.__slimbus_dbg(4,0x8001d07,param_3,param_4);
                if (*(iVar16 + 0x155c) < 1) {
                    if (*(iVar16 + 0x155c) != 0) {
                        iVar6 = -0xb;
                        goto code_r0x08005840;
                    }
                }
                else {
                    _printk(0x800155b);
                    ipc_log_string(*(iVar16 + 0x1568),"ngd going down due SSR/PDR, try again!\n");
                    uVar2 = *(iVar16 + 0x155c);
                    *(iVar16 + 0x155c) = 0;
                    *(iVar16 + 0x1558) = uVar2;
                }
                ipc_log_string(*(iVar16 + 0x1570),"ngd going down due SSR/PDR, try again!\n");
                iVar6 = -0xb;
                goto code_r0x08005840;
            }
            mutex_lock(iVar1);
            uVar12 = param_2[2];
            if (((uVar12 == 1) && (param_2[1] == 6)) || (*(iVar16 + 0x1500) != 3)) {
code_r0x0800560c:
                iVar14 = iVar16 + 0x1440;
                uVar8 = _raw_spin_lock_irqsave(iVar14);
                uVar13 = *(iVar16 + 0x1528);
                if (((uVar13 + 1) % 0x1e == *(iVar16 + 0x152c)) || (iVar15 = *(iVar16 + 0x1520), iVar15 == 0)) {
                    _raw_spin_unlock_irqrestore(iVar14,uVar8);
                    uVar8 = extraout_x8_01;
code_r0x080057c0:
                    sym.__slimbus_dbg(uVar8,0x8000a67,param_3,param_4);
                    if (*(iVar16 + 0x155c) < 1) {
                        if (*(iVar16 + 0x155c) == 0) goto code_r0x080057e4;
                    }
                    else {
                        _printk(0x8001920);
                        ipc_log_string(*(iVar16 + 0x1568),"Message buffer unavailable\n");
                        uVar2 = *(iVar16 + 0x155c);
                        *(iVar16 + 0x155c) = 0;
                        *(iVar16 + 0x1558) = uVar2;
code_r0x080057e4:
                        ipc_log_string(*(iVar16 + 0x1570),"Message buffer unavailable\n");
                    }
                    mutex_unlock(iVar1);
                    iVar6 = -0xc;
                    goto code_r0x08005840;
                }
                if (0x1e < uVar13) goto code_r0x08005d3c;
                iVar19 = iVar16 + uVar13 * 0x30;
                *(iVar19 + 0xda8) = &uStack_d8;
                iVar6 = *(iVar16 + 0x1528);
                *(iVar19 + 0xdc0) = iVar15 + uVar13 * 0x28;
                *(iVar16 + 0x1528) = (iVar6 + 1) % 0x1e;
                _raw_spin_unlock_irqrestore(iVar14,uVar8);
                arg2 = *(iVar19 + 0xdc0);
                uVar8 = extraout_x8_00;
                if (arg2 == NULL) goto code_r0x080057c0;
                mutex_unlock(iVar1);
                uVar8 = uStack_90;
                if (param_2[1] == 0) {
                    bVar4 = false;
                    if ((param_2[2] < 0x15) &&
                       (uVar13 = param_2[2], bVar4 = false, (1 << (uVar13 & 0x1f) & 0x130000U) != 0)) {
                        param_2[1] = 2;
                        if (uVar13 == 0x10) {
                            uVar12 = 0x2c;
code_r0x08005b20:
                            param_2[2] = uVar12;
                            uVar7 = 3;
                            uStack_90._0_2_ = CONCAT11(**(*(param_2 + 8) + 0x10),param_2[7]);
                            uStack_90._3_5_ = SUB85(uVar8,3);
                            uStack_90._0_3_ = CONCAT12((*(*(param_2 + 8) + 0x10))[1],uStack_90);
                        }
                        else {
                            if (uVar13 != 0x14) {
                                if (uVar13 != 0x11) goto code_r0x08005480;
                                uVar12 = 0x2d;
                                goto code_r0x08005b20;
                            }
                            uVar7 = 2;
                            param_2[2] = 0x2e;
                            uStack_90._0_2_ = CONCAT11(**(*(param_2 + 8) + 0x10),param_2[7]);
                        }
                        *(param_2 + 0x10) = iVar16 + 0x1400;
                        iVar6 = slim_alloc_txn_tid(param_1,param_2);
                        if (iVar6 != 0) {
                            sym.__slimbus_dbg(noname_0_02,0x8001b20,param_3,param_4);
                            if (*(iVar16 + 0x155c) < 1) {
                                if (*(iVar16 + 0x155c) != 0) goto code_r0x08005840;
                            }
                            else {
                                _printk(0x8001be0);
                                ipc_log_string(*(iVar16 + 0x1568),"Unable to allocate TID\n");
                                uVar2 = *(iVar16 + 0x155c);
                                *(iVar16 + 0x155c) = 0;
                                *(iVar16 + 0x1558) = uVar2;
                            }
                            ipc_log_string(*(iVar16 + 0x1570),"Unable to allocate TID\n");
                            goto code_r0x08005840;
                        }
                        iVar14 = *(param_2 + 8);
                        bVar4 = true;
                        uVar20 = 0xff;
                        *(&uStack_90 | uVar7) = param_2[6];
                        *(iVar14 + 2) = uVar7 + '\x01';
                        *(*(param_2 + 8) + 0x10) = &uStack_90;
                        *(*(param_2 + 8) + 8) = &uStack_b8;
                        *param_2 = *(*(param_2 + 8) + 2) + 4;
                    }
                }
                else {
                    bVar4 = false;
                }
                *param_2 = *param_2 - 1;
                *arg2 = 0;
                uVar12 = param_2[3];
                uVar20 = *param_2 | param_2[1] << 5 | param_2[2] << 8 | uVar20 << 0x10;
                if (uVar12 != 0) {
                    uVar20 = uVar20 | 0x8000;
                }
                *arg2 = uVar20;
                iVar14 = 2;
                if (uVar12 == 0) {
                    iVar14 = 3;
                }
                puVar10 = arg2 + iVar14;
                if (param_2[1] == 0) {
                    uVar12 = param_2[2];
                    if ((uVar12 - 0x60 < 2) || (puVar9 = puVar10, uVar12 - 0x20 < 2)) {
                        puVar9 = puVar10 + 1;
                        *puVar10 = param_2[6];
                        puVar10 = puVar9;
                        if (param_2[1] != 0) goto code_r0x08005794;
                        uVar12 = param_2[2];
                    }
                    if ((uVar12 - 0x20 < 10) || (puVar10 = puVar9, uVar12 - 0x60 < 9)) {
                        puVar10 = puVar9 + 2;
                        *puVar9 = param_2[4];
                        puVar9[1] = param_2[5];
                    }
                }
code_r0x08005794:
                iVar14 = *(param_2 + 8);
                if ((iVar14 != 0) && (*(iVar14 + 0x10) != 0)) {
                    if (*(iVar16 + 0x1554) == '\0') {
                        memcpy(puVar10,*(iVar14 + 0x10),*(iVar14 + 2));
                    }
                    else {
                        __memcpy_toio();
                    }
                }
                mutex_lock(iVar1);
                iVar6 = sym.qcom_slim_ngd_tx_msg_post(iVar16,arg2,*param_2);
                if (iVar6 == 0) {
                    iVar6 = wait_for_completion_timeout(&uStack_d8,500);
                    if (iVar6 == 0) {
                        sym.__slimbus_dbg(noname_0_00,0x800113c,param_2[2],param_2[1]);
                        iVar6 = *(iVar16 + 0x155c);
                        if (1 < iVar6) {
                            _printk(0x80008c6,param_2[2],param_2[1]);
                            ipc_log_string(*(iVar16 + 0x1568),"TX timed out:MC:0x%x,mt:0x%x",param_2[2],param_2[1]);
                            iVar6 = *(iVar16 + 0x155c);
                        }
                        if (iVar6 == 0) {
                            ipc_log_string(*(iVar16 + 0x1570),"TX timed out:MC:0x%x,mt:0x%x",param_2[2],param_2[1]);
                        }
                        mutex_unlock(iVar1);
                        iVar6 = -0x6e;
                        *(iVar16 + 0x157d) = 1;
                    }
                    else {
                        if ((!bVar4) || (iVar6 = wait_for_completion_timeout(iVar16 + 0x1400,0xfa), iVar6 != 0)) {
                            mutex_unlock(iVar1);
                            goto code_r0x08005424;
                        }
                        sym.__slimbus_dbg(noname_0_01,0x8001d70,param_2[2],param_2[1]);
                        iVar6 = *(iVar16 + 0x155c);
                        if (1 < iVar6) {
                            _printk(0x8001585,param_2[2],param_2[1]);
                            ipc_log_string(*(iVar16 + 0x1568),"TX usr_msg timed out:MC:0x%x,mt:0x%x",param_2[2],
                                           param_2[1]);
                            iVar6 = *(iVar16 + 0x155c);
                        }
                        if (iVar6 == 0) {
                            ipc_log_string(*(iVar16 + 0x1570),"TX usr_msg timed out:MC:0x%x,mt:0x%x",param_2[2],
                                           param_2[1]);
                        }
                        mutex_unlock(iVar1);
                        iVar6 = -0x6e;
                    }
                    goto code_r0x08005840;
                }
            }
            else {
                param_3 = uVar12;
                sym.__slimbus_dbg(3,0x8001317,param_3,param_2[1]);
                uVar13 = *(iVar16 + 0x155c);
                uVar17 = uVar12;
                uVar18 = uVar12;
                if (uVar13 < 3) {
                    if (uVar13 == 0) goto code_r0x08005550;
code_r0x080055b0:
                    uVar7 = uVar13;
                    param_4 = param_2[1];
                    if (param_2[1] == 0) goto code_r0x08005570;
code_r0x080055b8:
                    if (param_4 == 2) {
                        if (((0x2e < uVar18) || (uVar7 = 1L << (uVar12 & 0x3f), (uVar7 & 0x401800000000) == 0)) &&
                           (uVar7 = uVar17 - 0x20, 0xd < uVar17 - 0x20)) {
                            param_4 = 2;
                            goto code_r0x080055ec;
                        }
                    }
                    else {
code_r0x080055ec:
                        if (*(iVar16 + 0x1561) == '\0') {
                            sym.__slimbus_dbg(0,0x800136e,uVar18,param_4);
                            uVar20 = *(iVar16 + 0x155c);
                            if (2 < uVar20) {
                                ipc_log_string(*(iVar16 + 0x1568),"Not waiting for ADSP up MC:0x%x,mt:0x%x\n",uVar18,
                                               param_2[1]);
                                uVar20 = *(iVar16 + 0x155c);
                            }
                            uVar7 = uVar20;
                            if (uVar20 == 0) {
                                pcVar11 = "Not waiting for ADSP up MC:0x%x,mt:0x%x\n";
code_r0x08005950:
                                ipc_log_string(*(iVar16 + 0x1570),pcVar11,uVar18,param_2[1]);
                                uVar7 = extraout_x8_02;
                            }
                        }
                        else {
                            *(iVar16 + 0x1358) = 0;
                            iVar6 = wait_for_completion_timeout(iVar16 + 0x1358,0xfa);
                            if (iVar6 != 0) goto code_r0x0800560c;
                            sym.__slimbus_dbg(noname_0,0x8000fea,uVar17,param_2[1]);
                            uVar20 = *(iVar16 + 0x155c);
                            if (1 < uVar20) {
                                _printk(0x8000a83,uVar17,param_2[1]);
                                ipc_log_string(*(iVar16 + 0x1568),"ADSP slimbus not up timeout MC:0x%x,mt:0x%x\n",
                                               uVar18,param_2[1]);
                                uVar20 = *(iVar16 + 0x155c);
                            }
                            uVar7 = uVar20;
                            if (uVar20 == 0) {
                                pcVar11 = "ADSP slimbus not up timeout MC:0x%x,mt:0x%x\n";
                                goto code_r0x08005950;
                            }
                        }
                    }
                    iVar6 = -0x79;
                }
                else {
                    param_3 = uVar17;
                    ipc_log_string(*(iVar16 + 0x1568),"ADSP slimbus not up yet MC:0x%x,mt:0x%x\n",param_3,param_2[1])
                    ;
                    uVar13 = *(iVar16 + 0x155c);
                    if (uVar13 != 0) goto code_r0x080055b0;
code_r0x08005550:
                    param_3 = uVar17;
                    ipc_log_string(*(iVar16 + 0x1570),"ADSP slimbus not up yet MC:0x%x,mt:0x%x\n",param_3,param_2[1])
                    ;
                    param_4 = param_2[1];
                    uVar7 = extraout_x8;
                    if (param_2[1] != 0) goto code_r0x080055b8;
code_r0x08005570:
                    iVar6 = -0x16;
                    if (((uVar17 != 0x14) && (uVar18 != 0x24)) && (uVar18 != 0x58)) {
                        iVar6 = -0x79;
                        uVar7 = uVar18 - 0x10;
                        if (8 < uVar18 - 0x10) {
                            if ((uVar18 & 0xe0) != 0x40) goto code_r0x080055ec;
                            uVar7 = 0x40;
                        }
                    }
                }
                sym.__slimbus_dbg(uVar7,0x80009a4,param_2[2],param_2[1]);
                iVar3 = *(iVar16 + 0x155c);
                if (1 < iVar3) {
                    _printk(0x8001340,param_2[2],param_2[1],iVar6);
                    ipc_log_string(*(iVar16 + 0x1568),"ADSP slimbus not up MC:0x%x,mt:0x%x ret:%d\n",param_2[2],
                                   param_2[1],iVar6);
                    iVar3 = *(iVar16 + 0x155c);
                }
                if (iVar3 == 0) {
                    ipc_log_string(*(iVar16 + 0x1570),"ADSP slimbus not up MC:0x%x,mt:0x%x ret:%d\n",param_2[2],
                                   param_2[1],iVar6);
                }
            }
            mutex_unlock(iVar1);
        }
        else {
            sym.__slimbus_dbg(uVar12,0x800145d,param_3,param_4);
            if (*(iVar16 + 0x155c) < 1) {
                if (*(iVar16 + 0x155c) != 0) {
code_r0x08005480:
                    iVar6 = -0x16;
                    goto code_r0x08005840;
                }
            }
            else {
                _printk(0x8001d58);
                ipc_log_string(*(iVar16 + 0x1568),"msg exceeds HW limit\n");
                uVar2 = *(iVar16 + 0x155c);
                *(iVar16 + 0x155c) = 0;
                *(iVar16 + 0x1558) = uVar2;
            }
            ipc_log_string(*(iVar16 + 0x1570),"msg exceeds HW limit\n");
            iVar6 = -0x16;
        }
    }
code_r0x08005840:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_68) {
        return iVar6;
    }
    __stack_chk_fail();
code_r0x08005d3c:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8005d40);
    (*pcVar5)();
}


// ===== sym.qcom_ngd_set_suspend.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x080034e8 (size 8) =====

uint64_t sym.qcom_ngd_set_suspend.a72e7fa1990595d9f3a61d296fa60916.cfi_jt
                   (uchar param_1 [16],int64_t *param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    ulong noname_0;
    ulong *in_x18;
    uint64_t arg3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.qcom_slim_ngd_runtime_suspend(*param_2,param_1,param_4);
    arg3 = uVar1;
    if (uVar1 == 0) {
        __pm_runtime_disable(*param_2,1);
        __pm_runtime_set_status(*param_2,2);
        pm_runtime_enable(*param_2);
    }
    else {
        sym.__slimbus_dbg(noname_0,0x8001122,0x8000b3c,arg3);
        iVar2 = *(param_2 + 0x11bc);
        if (2 < iVar2) {
            ipc_log_string(param_2[0x239],"%s: Failed to suspend:%d\n","qcom_ngd_set_suspend",arg3);
            iVar2 = *(param_2 + 0x11bc);
        }
        if (iVar2 == 0) {
            ipc_log_string(param_2[0x23a],"%s: Failed to suspend:%d\n","qcom_ngd_set_suspend",arg3);
        }
    }
    return arg3;
}


// ===== sym.trace_event_raw_event_slimbus_dbg.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x080034f0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800383c)

void sym.trace_event_raw_event_slimbus_dbg.a72e7fa1990595d9f3a61d296fa60916.cfi_jt
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
        goto code_r0x0800370c;
    }
    pcVar2 = "(null)";
    if (param_2 != NULL) {
        pcVar2 = param_2;
    }
    iVar7 = strlen(pcVar2);
    piVar11 = iVar7 + 0x65 + 0x10;
    iVar9 = trace_event_buffer_reserve(&uStack_78,param_1);
    if (iVar9 != 0) {
        *(iVar9 + 8) = iVar7 * 0x10000 + 0x10010;
        *(iVar9 + 0xc) = iVar7 + 0x11U | 0x640000;
        strcpy(iVar9 + 0x10,pcVar2);
        piVar11 = *param_3;
        puVar3 = param_3[1];
        uStack_88 = puVar3[2];
        uStack_80 = puVar3[3];
        uStack_98 = *puVar3;
        uStack_90 = puVar3[1];
        iVar7 = vsnprintf(iVar9 + (iVar7 + 0x11U & 0xffff),100,piVar11,&uStack_98);
        if (99 < iVar7) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8003744);
            (*pcVar6)();
        }
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x0800370c:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return;
    }
    auVar13 = __stack_chk_fail();
    iVar10 = auVar13._0_8_;
    *extraout_x18 = sym.perf_trace_slimbus_dbg;
    pcStack_e8 = sym.perf_trace_slimbus_dbg;
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
        iVar4 = (iVar7 + 0x80U & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar4,&iStack_100,&uStack_104);
        if (iVar9 != 0) {
            uVar8 = _trace_event_raw_init & 0x3f;
            *(iStack_100 + 0xe8) = &puStack_f0;
            *(iStack_100 + 0x100) = ~(-1L << uVar8) & 0x800374c;
            *(iStack_100 + 0x108) = 5;
            *(iStack_100 + 0xf8) = auStack_130;
            *(iVar9 + 8) = iVar7 * 0x10000 + 0x10010;
            *(iVar9 + 0xc) = iVar7 + 0x11U | 0x640000;
            strcpy(iVar9 + 0x10,pcVar2);
            puVar3 = piVar11[1];
            uStack_118 = puVar3[2];
            uStack_110 = puVar3[3];
            uStack_128 = *puVar3;
            uStack_120 = puVar3[1];
            iVar7 = vsnprintf(iVar9 + (iVar7 + 0x11U & 0xffff),100,*piVar11,&uStack_128);
            if (99 < iVar7) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x80038f0);
                (*pcVar6)();
            }
            perf_trace_run_bpf_submit(iVar9,iVar4,uStack_104,iVar10,1,iStack_100,piVar1,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_f8) {
        __stack_chk_fail();
        uVar5 = tpidr_el2;
        *extraout_x18_00 = 0x80038f8;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_slimbus_dbg.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x080034f8 (size 8) =====

void sym.perf_trace_slimbus_dbg.a72e7fa1990595d9f3a61d296fa60916.cfi_jt(int64_t param_1,char *param_2,ulong *param_3)

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
        iVar5 = (iVar8 + 0x80U & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar5,&iStack_60,&uStack_64);
        if (iVar9 != 0) {
            uVar10 = -1L << (_trace_event_raw_init & 0x3f);
            uVar3 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar10 | unaff_x30;
            }
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            *(iStack_60 + 0x100) = uVar3;
            *(iStack_60 + 0x108) = 5;
            *(iStack_60 + 0xf8) = auStack_90;
            *(iVar9 + 8) = iVar8 * 0x10000 + 0x10010;
            *(iVar9 + 0xc) = iVar8 + 0x11U | 0x640000;
            strcpy(iVar9 + 0x10,pcVar2);
            puVar4 = param_3[1];
            uStack_78 = puVar4[2];
            uStack_70 = puVar4[3];
            uStack_88 = *puVar4;
            uStack_80 = puVar4[1];
            iVar8 = vsnprintf(iVar9 + (iVar8 + 0x11U & 0xffff),100,*param_3,&uStack_88);
            if (99 < iVar8) {
    //WARNING: Does not return
                pcVar7 = SoftwareBreakpoint(0x800,0x80038f0);
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
    *extraout_x18 = 0x80038f8;
    bpf_trace_run2(in_tmp_ldXn);
    return;
}


// ===== sym.__bpf_trace_slimbus_dbg.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x08003500 (size 8) =====

void sym.__bpf_trace_slimbus_dbg.a72e7fa1990595d9f3a61d296fa60916.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2();
    return;
}


// ===== sym.__traceiter_slimbus_dbg.cfi_jt @ 0x08003508 (size 8) =====

ulong sym.__traceiter_slimbus_dbg.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8009348;
    piVar1 = *0x8009348;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.qcom_slim_ngd_ssr_notify.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x08003510 (size 8) =====

ulong sym.qcom_slim_ngd_ssr_notify.a72e7fa1990595d9f3a61d296fa60916.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qcom_slim_ngd_ssr_pdr_notify(param_1 + -0x14d8,param_2);
    return 1;
}


// ===== sym.qcom_slim_ngd_tx_msg_dma_cb.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x08003518 (size 8) =====

void sym.qcom_slim_ngd_tx_msg_dma_cb.a72e7fa1990595d9f3a61d296fa60916.cfi_jt
               (int64_t param_1,ulong param_2,int64_t param_3,int64_t param_4)

{
    char *noname_0;
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 8);
    noname_0 = iVar3 + 0x157d;
    if (*noname_0 == '\0') {
        uVar2 = _raw_spin_lock_irqsave(iVar3 + 0x1440);
        if (*(param_1 + 0x10) != 0) {
            complete(*(param_1 + 0x10));
            *(param_1 + 0x10) = 0;
        }
        *(iVar3 + 0x152c) = (*(iVar3 + 0x152c) + 1) % 0x1e;
        _raw_spin_unlock_irqrestore(iVar3 + 0x1440,uVar2);
    }
    else {
        *noname_0 = '\0';
        sym.__slimbus_dbg(noname_0,0x8000ab2,param_3,param_4);
        iVar1 = *(iVar3 + 0x155c);
        if (1 < iVar1) {
            _printk(0x80015ac);
            ipc_log_string(*(iVar3 + 0x1568),"Timedout due to delayed interrupt\n");
            iVar1 = *(iVar3 + 0x155c);
        }
        if (iVar1 == 0) {
            ipc_log_string(*(iVar3 + 0x1570),"Timedout due to delayed interrupt\n");
        }
        *(param_1 + 0x10) = 0;
    }
    return;
}


// ===== sym.qcom_slim_ngd_rx_msgq_cb.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x08003520 (size 8) =====

uint64_t sym.qcom_slim_ngd_rx_msgq_cb.a72e7fa1990595d9f3a61d296fa60916.cfi_jt(int64_t *param_1)

{
    uint64_t *puVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    uint uVar7;
    uint32_t uVar8;
    int iVar9;
    ulong uVar10;
    uint64_t uVar11;
    ulong in_x6;
    ulong in_x7;
    ulong noname_0;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar13;
    int64_t *piVar14;
    code *pcVar15;
    int64_t unaff_x23;
    uint8_t *puVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    uchar *puVar18;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    puVar18 = &stack0xffffffffffffffb0;
    iVar13 = sp_el0;
    iStack_58 = *(iVar13 + 0x5e0);
    uVar11 = 0;
    if (param_1 != NULL) {
        puVar16 = param_1[5];
        unaff_x23 = param_1[1];
        uVar2 = *puVar16;
        uVar3 = puVar16[1];
        uVar8 = uVar2 & 0x1f;
        sym.__slimbus_dbg(iStack_58,0x80018e1,uVar8,uVar2);
        iVar9 = *(unaff_x23 + 0x155c);
        if (2 < iVar9) {
            ipc_log_string(*(unaff_x23 + 0x1568),"BAM RX len = %d buf[0]:0x%x buf[1]:0x%x\n",uVar8,*puVar16,
                           puVar16[1]);
            iVar9 = *(unaff_x23 + 0x155c);
        }
        if (iVar9 == 0) {
            ipc_log_string(*(unaff_x23 + 0x1570),"BAM RX len = %d buf[0]:0x%x buf[1]:0x%x\n",uVar8,*puVar16,
                           puVar16[1]);
        }
        if (((uVar3 & 0x7f) == 0) && ((uVar2 & 0xe0) == 0xc0)) {
            queue_work_on(0x20,*(unaff_x23 + 0x13d8),unaff_x23 + 0x1378);
        }
        if ((((uVar3 & 0x3f) == 0x24) || (((uVar3 & 0x7f) == 0xe && ((uVar2 & 0xe0) == 0xc0)))) ||
           (((uVar3 & 0x7f) == 0x25 && ((uVar2 & 0xe0) == 0xc0)))) {
            slim_msg_response(unaff_x23 + 0x3a0,puVar16 + 4,puVar16[3],uVar8 - 4);
            iVar13 = *(unaff_x23 + 0x3a0);
            uVar10 = ktime_get_mono_fast_ns();
            *(iVar13 + 0x218) = uVar10;
        }
        piVar14 = *(unaff_x23 + 0x7e8);
        iStack_68 = 0;
        uStack_60 = 0;
        iVar13 = param_1[4];
        uStack_78 = 0;
        uStack_70 = 0;
        sg_init_table(&uStack_78,1);
        uStack_60 = CONCAT44(uStack_60._4_4_,0x28);
        iStack_68 = iVar13;
        if (((piVar14 == NULL) || (*piVar14 == 0)) || (pcVar15 = *(*piVar14 + 0x138), pcVar15 == NULL)) {
            *param_1 = 0;
        }
        else {
            __cfi_slowpath_diag(0x3675599da7c39b65,pcVar15,0x8000820);
            iVar13 = (*pcVar15)(piVar14,&uStack_78,1,2,1,0);
            *param_1 = iVar13;
            if (iVar13 != 0) {
                *(iVar13 + 0x28) = sym.qcom_slim_ngd_rx_msgq_cb.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
                *(*param_1 + 0x38) = param_1;
                iVar13 = *param_1;
                pcVar15 = *(iVar13 + 0x18);
                __cfi_slowpath_diag(0xc97b94b4f4a7b659,pcVar15,0x8000840);
                uVar7 = (*pcVar15)(iVar13);
                **param_1 = uVar7;
                piVar14 = *(unaff_x23 + 0x7e8);
                pcVar15 = *(*piVar14 + 400);
                __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar15,0x8000860);
                uVar11 = (*pcVar15)(piVar14);
                goto code_r0x08007ee4;
            }
        }
        uVar11 = _dev_err(*(unaff_x23 + 0x7d8),"Unable to prepare rx channel\n");
    }
code_r0x08007ee4:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_58) {
        return uVar11;
    }
    auVar17 = __stack_chk_fail();
    iVar13 = auVar17._8_8_;
    piVar14 = auVar17._0_8_;
    *extraout_x18 = sym.qcom_slim_ngd_xfer_msg_sync;
    pcVar15 = sym.qcom_slim_ngd_xfer_msg_sync;
    *(piVar14 + 0x210) = 0;
    uVar8 = __pm_runtime_resume(*piVar14,4);
    puVar1 = *piVar14 + 0x1f8;
    if (uVar8 < 0) {
        uVar11 = uVar8;
        sym.__slimbus_dbg(puVar1,0x80019a0,0x8001a85,uVar11);
        if (*(piVar14 + 0x11bc) < 1) {
            if (*(piVar14 + 0x11bc) != 0) goto code_r0x08008160;
        }
        else {
            _printk(0x80012e0,"qcom_slim_ngd_xfer_msg_sync",uVar11,*(*piVar14 + 0x1f8),*(iVar13 + 6));
            ipc_log_string(piVar14[0x239],"SLIM %s: PM get_sync failed ret :%d count:%d TID:%d\n",
                           "qcom_slim_ngd_xfer_msg_sync",uVar11,*(*piVar14 + 0x1f8),*(iVar13 + 6),in_x6,in_x7,
                           puVar18,pcVar15,unaff_x23);
            uVar7 = *(piVar14 + 0x11bc);
            *(piVar14 + 0x11bc) = 0;
            *(piVar14 + 0x237) = uVar7;
        }
        ipc_log_string(piVar14[0x23a],"SLIM %s: PM get_sync failed ret :%d count:%d TID:%d\n",
                       "qcom_slim_ngd_xfer_msg_sync",uVar11,*(*piVar14 + 0x1f8),*(iVar13 + 6),in_x6,in_x7,puVar18
                       ,pcVar15,unaff_x23);
    }
    else {
        sym.__slimbus_dbg(puVar1,0x8001506,0x8001a85,*puVar1 & 0xffffffff);
        iVar9 = *(piVar14 + 0x11bc);
        if (2 < iVar9) {
            ipc_log_string(piVar14[0x239],"SLIM %s: PM get_sync count:%d TID:%d\n","qcom_slim_ngd_xfer_msg_sync",
                           *(*piVar14 + 0x1f8),*(iVar13 + 6));
            iVar9 = *(piVar14 + 0x11bc);
        }
        if (iVar9 == 0) {
            ipc_log_string(piVar14[0x23a],"SLIM %s: PM get_sync count:%d TID:%d\n","qcom_slim_ngd_xfer_msg_sync",
                           *(*piVar14 + 0x1f8),*(iVar13 + 6));
        }
        *(iVar13 + 0x10) = piVar14 + 0x210;
        uVar8 = sym.qcom_slim_ngd_xfer_msg(piVar14,iVar13);
        if (uVar8 == 0) {
            iVar9 = wait_for_completion_timeout(piVar14 + 0x210,0xfa);
            if (iVar9 != 0) {
                return 0;
            }
            sym.__slimbus_dbg(noname_0,0x80019d5,*(iVar13 + 2),*(iVar13 + 1));
            iVar9 = *(piVar14 + 0x11bc);
            if (1 < iVar9) {
                _printk(0x800168f,*(iVar13 + 2),*(iVar13 + 1));
                ipc_log_string(piVar14[0x239],"TX sync timed out:MC:0x%x,mt:0x%x",*(iVar13 + 2),*(iVar13 + 1));
                iVar9 = *(piVar14 + 0x11bc);
            }
            if (iVar9 == 0) {
                ipc_log_string(piVar14[0x23a],"TX sync timed out:MC:0x%x,mt:0x%x",*(iVar13 + 2),*(iVar13 + 1));
            }
            uVar11 = 0xffffff92;
        }
        else {
            uVar11 = uVar8;
            sym.__slimbus_dbg(*piVar14 + 0x1f8,0x8001cba,0x8001a85,*(*piVar14 + 0x1f8));
            iVar9 = *(piVar14 + 0x11bc);
            if (2 < iVar9) {
                ipc_log_string(piVar14[0x239],"SLIM %s: xfer_msg failed PM put count:%d TID:%d\n",
                               "qcom_slim_ngd_xfer_msg_sync",*(*piVar14 + 0x1f8),*(iVar13 + 6));
                iVar9 = *(piVar14 + 0x11bc);
            }
            if (iVar9 == 0) {
                ipc_log_string(piVar14[0x23a],"SLIM %s: xfer_msg failed PM put count:%d TID:%d\n",
                               "qcom_slim_ngd_xfer_msg_sync",*(*piVar14 + 0x1f8),*(iVar13 + 6));
            }
        }
    }
code_r0x08008160:
    puVar1 = *piVar14 + 0x1f8;
    uVar12 = *puVar1;
    do {
        uVar8 = uVar12;
        if (uVar8 == 0) break;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar4 = *puVar1;
            uVar12 = uVar4;
            if (uVar4 != uVar8) goto code_r0x08008190;
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
                *puVar1 = uVar8 - 1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08008190:
    } while (uVar8 != uVar4);
    __pm_runtime_set_status(*piVar14,2);
    return uVar11;
}


// ===== sym.qcom_slim_ngd_qmi_del_server.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x08003528 (size 8) =====

void sym.qcom_slim_ngd_qmi_del_server.a72e7fa1990595d9f3a61d296fa60916.cfi_jt
               (ulong param_1,int64_t param_2,ulong param_3,int64_t param_4,int64_t param_5)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__slimbus_dbg(param_1,0x80013b4,param_4,param_5);
    iVar1 = *(param_2 + 0xefc);
    if (2 < iVar1) {
        ipc_log_string(*(param_2 + 0xf08),"Slimbus QMI del server event received\n");
        iVar1 = *(param_2 + 0xefc);
    }
    if (iVar1 == 0) {
        ipc_log_string(*(param_2 + 0xf10),"Slimbus QMI del server event received\n");
    }
    *(param_2 + 0xd80) = 0;
    *(param_2 + -0xc) = 0;
    return;
}


// ===== sym.trace_raw_output_slimbus_dbg.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x08003530 (size 8) =====

void sym.trace_raw_output_slimbus_dbg.a72e7fa1990595d9f3a61d296fa60916.cfi_jt
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


// ===== sym.qcom_slim_ngd_disable_stream.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x08003538 (size 8) =====

//WARNING: Type propagation algorithm not settling

char * sym.qcom_slim_ngd_disable_stream.a72e7fa1990595d9f3a61d296fa60916.cfi_jt(int64_t param_1)

{
    uint uVar1;
    uchar uVar2;
    bool bVar3;
    uint64_t uVar4;
    uchar uVar5;
    code *pcVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    ulong uVar10;
    uint8_t *puVar11;
    uint8_t *puVar12;
    char *arg2;
    char *pcVar13;
    uint8_t uVar14;
    ulong noname_0;
    ulong noname_0_00;
    ulong noname_0_01;
    uint64_t extraout_x8;
    ulong noname_0_02;
    uint64_t extraout_x8_00;
    uint64_t extraout_x8_01;
    ulong noname_0_03;
    ulong extraout_x8_02;
    ulong extraout_x8_03;
    uint64_t extraout_x8_04;
    ulong noname_0_04;
    ulong noname_0_05;
    ulong noname_0_06;
    uint64_t uVar15;
    uint8_t *puVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar17;
    int64_t iVar18;
    char *arg3;
    char *unaff_x21;
    char *unaff_x22;
    uint32_t uVar19;
    int64_t iVar21;
    int64_t iVar22;
    int64_t iVar23;
    uint32_t *arg2_00;
    int64_t unaff_x26;
    int64_t unaff_x27;
    int64_t unaff_x28;
    ulong unaff_x30;
    uchar auVar24 [16];
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong *******pppppppuStack_1b8;
    ulong *******pppppppuStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    int64_t iStack_158;
    uchar *puStack_150;
    code *pcStack_148;
    int64_t iStack_140;
    int64_t iStack_138;
    int64_t iStack_130;
    ulong *puStack_128;
    int64_t iStack_120;
    int64_t iStack_118;
    char *pcStack_110;
    char *pcStack_108;
    char *pcStack_100;
    int64_t iStack_f8;
    ulong uStack_f0;
    ulong *puStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong *puStack_d0;
    ulong *puStack_c8;
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
    ulong uStack_70;
    int64_t iStack_68;
    uint32_t uVar20;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_68 = *(iVar17 + 0x5e0);
    pcVar13 = 0x1;
    iVar22 = *(param_1 + 8);
    puStack_c8 = NULL;
    uStack_c0 = 0;
    uStack_d8 = 0;
    puStack_d0 = NULL;
    iVar17 = *(iVar22 + 0x398);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    iVar21 = iVar17 + -0x3a0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    puStack_e8 = NULL;
    uStack_e0 = 0;
    uStack_f0 = 0;
    sym.__slimbus_dbg(iStack_68,0x8001b13,0x8001440,1);
    iVar7 = *(iVar17 + 0x11bc);
    if (2 < iVar7) {
        pcVar13 = 0x1;
        ipc_log_string(*(iVar17 + 0x11c8),"%s start %d\n","qcom_slim_ngd_disable_stream");
        iVar7 = *(iVar17 + 0x11bc);
    }
    if (iVar7 == 0) {
        pcVar13 = 0x1;
        ipc_log_string(*(iVar17 + 0x11d0),"%s start %d\n","qcom_slim_ngd_disable_stream");
    }
    uVar10 = uStack_f0;
    puStack_e8 = &uStack_d8;
    uStack_f0._0_4_ = uStack_f0;
    uStack_f0._0_2_ = CONCAT11(2,uVar10);
    uVar10 = uStack_f0;
    uStack_f0 = CONCAT17(0xff,uStack_f0);
    puStack_d0 = &uStack_b8;
    uStack_f0._0_4_ = uVar10;
    uStack_f0._0_6_ = uStack_f0;
    uStack_d8._0_3_ = uStack_d8;
    puStack_c8 = &uStack_90;
    if (0 < *(param_1 + 0x24)) {
        uVar15 = 0;
        unaff_x27 = 0xc;
        unaff_x28 = 1;
        unaff_x21 = "%s: wbuf[0] = 0x%x\n";
        unaff_x22 = "qcom_slim_ngd_disable_stream";
        do {
            unaff_x26 = *(param_1 + 0x28);
            if (uVar15 == 0) {
                uVar2 = *(iVar22 + 0x3a4);
                *(puStack_e8 + 2) = 1;
                pcVar13 = *(iVar22 + 0x3a4);
                uStack_90 = CONCAT71(uStack_90._1_7_,uVar2) & 0xffffffffffffff1f | 0x80;
                sym.__slimbus_dbg(puStack_e8,0x8000a53,0x8001440,pcVar13);
                iVar7 = *(iVar17 + 0x11bc);
                if (3 < iVar7) {
                    pcVar13 = *(iVar22 + 0x3a4);
                    ipc_log_string(*(iVar17 + 0x11c8),"%s: wbuf[0] = 0x%x\n","qcom_slim_ngd_disable_stream");
                    iVar7 = *(iVar17 + 0x11bc);
                }
                if (iVar7 == 0) {
                    pcVar13 = *(iVar22 + 0x3a4);
                    ipc_log_string(*(iVar17 + 0x11d0),"%s: wbuf[0] = 0x%x\n","qcom_slim_ngd_disable_stream");
                }
                iVar7 = slim_alloc_txn_tid(iVar17,&uStack_f0);
                if (iVar7 != 0) {
                    arg2 = 0xfffffffa;
                    sym.__slimbus_dbg(noname_0,0x8001aa1,0xfffffffa,pcVar13);
                    if (*(iVar17 + 0x11bc) < 1) {
                        if (*(iVar17 + 0x11bc) != 0) {
                            arg3 = 0xfffffffa;
                            goto code_r0x08005310;
                        }
                    }
                    else {
                        _printk(0x8001235,0xfffffffa);
                        ipc_log_string(*(iVar17 + 0x11c8),"Fail to allocate TID ret:%d\n",0xfffffffa);
                        uVar1 = *(iVar17 + 0x11bc);
                        *(iVar17 + 0x11bc) = 0;
                        *(iVar17 + 0x11b8) = uVar1;
                    }
                    uVar10 = *(iVar17 + 0x11d0);
                    arg3 = 0xfffffffa;
                    goto code_r0x0800530c;
                }
                uVar14 = *(puStack_e8 + 2);
                *(puStack_e8 + 2) = uVar14 + 1;
                if (0x27 < uVar14) goto code_r0x08005390;
                *(&uStack_90 + uVar14) = uStack_f0._6_1_;
                uVar15 = *(puStack_e8 + 2);
            }
            uVar1 = *(unaff_x26 + unaff_x27);
            *(puStack_e8 + 2) = uVar15 + '\x01';
            if (0x27 < uVar15) {
code_r0x08005390:
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x5512,0x8005394);
                (*pcVar6)();
            }
            iVar7 = *(param_1 + 0x24);
            puVar16 = puStack_e8 + 2;
            *(&uStack_90 + uVar15) = uVar1;
            if (iVar7 <= unaff_x28) goto code_r0x08005044;
            uVar15 = *puVar16;
            unaff_x28 = unaff_x28 + 1;
            unaff_x27 = unaff_x27 + 0x24;
        } while( true );
    }
    puVar16 = &uStack_d8 | 2;
code_r0x08005044:
    uStack_f0._0_3_ = CONCAT12(0x23,uStack_f0);
    uStack_f0 = CONCAT71(uStack_f0._1_7_,*puVar16 + 4);
    uVar8 = sym.qcom_slim_ngd_xfer_msg_sync(iVar17,&uStack_f0);
    if (uVar8 == 0) {
        uStack_f0._0_3_ = CONCAT12(0x24,uStack_f0);
        *(puStack_e8 + 2) = 2;
        uStack_90._0_2_ = CONCAT11(*(iVar22 + 0x3a4),uStack_90);
        uStack_f0 = CONCAT71(uStack_f0._1_7_,*(puStack_e8 + 2) + '\x04');
        uVar8 = slim_alloc_txn_tid(iVar17,&uStack_f0);
        if (uVar8 == 0) {
            uStack_90 = CONCAT71(uStack_90._1_7_,uStack_f0._6_1_);
            uVar8 = sym.qcom_slim_ngd_xfer_msg_sync(iVar17,&uStack_f0);
            arg3 = uVar8;
            uVar15 = extraout_x8;
            if (uVar8 != 0) {
                slim_free_txn_tid(iVar17,&uStack_f0);
                sym.__slimbus_dbg(noname_0_02,0x8000b77,uStack_f0 >> 0x10 & 0xff,uStack_f0 >> 8 & 0xff);
                uVar8 = *(iVar17 + 0x11bc);
                uVar4 = uStack_f0;
                if (1 < uVar8) {
                    _printk(0x80019f7,uStack_f0._2_1_,uStack_f0._1_1_,arg3);
                    ipc_log_string(*(iVar17 + 0x11c8),"TX RECONFIG timed out:MC:0x%x,mt:0x%x ret:%d\n",uStack_f0._2_1_
                                   ,uStack_f0._1_1_,arg3);
                    uVar8 = *(iVar17 + 0x11bc);
                    uVar4 = uStack_f0;
                }
                uVar15 = uVar8;
                uStack_f0 = uVar4;
                if (uVar8 == 0) {
                    uStack_f0._2_1_ = uVar4 >> 0x10;
                    uVar5 = uStack_f0._2_1_;
                    uStack_f0._1_1_ = uVar4 >> 8;
                    uVar2 = uStack_f0._1_1_;
                    ipc_log_string(*(iVar17 + 0x11d0),"TX RECONFIG timed out:MC:0x%x,mt:0x%x ret:%d\n",uVar5,uVar2,
                                   arg3);
                    uVar15 = extraout_x8_00;
                }
            }
            arg2 = "qcom_slim_ngd_disable_stream";
            pcVar13 = arg3;
            sym.__slimbus_dbg(uVar15,0x8000995,0x8001440,arg3);
            iVar7 = *(iVar17 + 0x11bc);
            if (2 < iVar7) {
                arg2 = "qcom_slim_ngd_disable_stream";
                pcVar13 = arg3;
                ipc_log_string(*(iVar17 + 0x11c8),"%s End ret %d\n");
                iVar7 = *(iVar17 + 0x11bc);
            }
            if (iVar7 == 0) {
                arg2 = "qcom_slim_ngd_disable_stream";
                pcVar13 = arg3;
                ipc_log_string(*(iVar17 + 0x11d0),"%s End ret %d\n");
            }
        }
        else {
            arg3 = uVar8;
            arg2 = arg3;
            sym.__slimbus_dbg(noname_0_01,0x8001aa1,arg3,pcVar13);
            if (*(iVar17 + 0x11bc) < 1) {
                if (*(iVar17 + 0x11bc) != 0) goto code_r0x08005310;
            }
            else {
                _printk(0x8001235,arg3);
                ipc_log_string(*(iVar17 + 0x11c8),"Fail to allocate TID ret:%d\n",arg3);
                uVar1 = *(iVar17 + 0x11bc);
                *(iVar17 + 0x11bc) = 0;
                *(iVar17 + 0x11b8) = uVar1;
            }
            uVar10 = *(iVar17 + 0x11d0);
code_r0x0800530c:
            arg2 = arg3;
            ipc_log_string(uVar10,"Fail to allocate TID ret:%d\n");
        }
    }
    else {
        arg3 = uVar8;
        slim_free_txn_tid(iVar17,&uStack_f0);
        arg2 = uStack_f0 >> 0x10 & 0xff;
        pcVar13 = uStack_f0 >> 8 & 0xff;
        sym.__slimbus_dbg(noname_0_00,0x800152c,arg2,pcVar13);
        iVar7 = *(iVar17 + 0x11bc);
        if (1 < iVar7) {
            _printk(0x8001e29,uStack_f0._2_1_,uStack_f0._1_1_,arg3);
            arg2 = uStack_f0 >> 0x10 & 0xff;
            pcVar13 = uStack_f0 >> 8 & 0xff;
            ipc_log_string(*(iVar17 + 0x11c8),"TX CHAN_CTRL timed out:MC:0x%x,mt:0x%x ret:%d\n",arg2,pcVar13,arg3);
            iVar7 = *(iVar17 + 0x11bc);
        }
        if (iVar7 == 0) {
            arg2 = uStack_f0 >> 0x10 & 0xff;
            pcVar13 = uStack_f0 >> 8 & 0xff;
            ipc_log_string(*(iVar17 + 0x11d0),"TX CHAN_CTRL timed out:MC:0x%x,mt:0x%x ret:%d\n",arg2,pcVar13,arg3);
        }
    }
code_r0x08005310:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_68) {
        return arg3;
    }
    auVar24 = __stack_chk_fail();
    puVar16 = auVar24._8_8_;
    *extraout_x18 = sym.qcom_slim_ngd_xfer_msg;
    pcStack_148 = sym.qcom_slim_ngd_xfer_msg;
    iVar18 = sp_el0;
    iStack_158 = *(iVar18 + 0x5e0);
    pppppppuStack_1b8 = &pppppppuStack_1b8;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uVar8 = puVar16[7];
    uStack_168 = 0;
    uStack_160 = 0;
    iVar18 = *(*auVar24._0_8_ + 0x98);
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_180 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    *(iVar18 + 0x1400) = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_1a8 = 0;
    pppppppuStack_1b0 = pppppppuStack_1b8;
    puStack_150 = &stack0xffffffffffffffa0;
    iStack_140 = unaff_x28;
    iStack_138 = unaff_x27;
    iStack_130 = unaff_x26;
    puStack_128 = &uStack_90;
    iStack_120 = iVar22;
    iStack_118 = iVar21;
    pcStack_110 = unaff_x22;
    pcStack_108 = unaff_x21;
    pcStack_100 = arg3;
    iStack_f8 = iVar17;
    if ((puVar16[1] == 0) && ((puVar16[2] & 0xe0) == 0x40)) {
code_r0x08005424:
        uVar9 = 0;
    }
    else if (puVar16[3] == 1) {
        uVar9 = 0xffffffa3;
    }
    else {
        uVar14 = *(*(puVar16 + 8) + 2);
        if ((uVar14 < 0x29) && (uVar14 = *puVar16, uVar14 < 0x29)) {
            iVar17 = iVar18 + 0x1448;
            uVar15 = mutex_is_locked(iVar17);
            if (((uVar15 & 1) != 0) && (*(iVar18 + 0x1500) == 4)) {
                sym.__slimbus_dbg(4,0x8001d07,arg2,pcVar13);
                if (*(iVar18 + 0x155c) < 1) {
                    if (*(iVar18 + 0x155c) != 0) {
                        uVar9 = 0xfffffff5;
                        goto code_r0x08005840;
                    }
                }
                else {
                    _printk(0x800155b);
                    ipc_log_string(*(iVar18 + 0x1568),"ngd going down due SSR/PDR, try again!\n");
                    uVar1 = *(iVar18 + 0x155c);
                    *(iVar18 + 0x155c) = 0;
                    *(iVar18 + 0x1558) = uVar1;
                }
                ipc_log_string(*(iVar18 + 0x1570),"ngd going down due SSR/PDR, try again!\n");
                uVar9 = 0xfffffff5;
                goto code_r0x08005840;
            }
            mutex_lock(iVar17);
            uVar14 = puVar16[2];
            if (((uVar14 == 1) && (puVar16[1] == 6)) || (*(iVar18 + 0x1500) != 3)) {
code_r0x0800560c:
                iVar21 = iVar18 + 0x1440;
                uVar10 = _raw_spin_lock_irqsave(iVar21);
                uVar9 = *(iVar18 + 0x1528);
                if (((uVar9 + 1) % 0x1e == *(iVar18 + 0x152c)) || (iVar22 = *(iVar18 + 0x1520), iVar22 == 0)) {
                    _raw_spin_unlock_irqrestore(iVar21,uVar10);
                    uVar10 = extraout_x8_03;
code_r0x080057c0:
                    sym.__slimbus_dbg(uVar10,0x8000a67,arg2,pcVar13);
                    if (*(iVar18 + 0x155c) < 1) {
                        if (*(iVar18 + 0x155c) == 0) goto code_r0x080057e4;
                    }
                    else {
                        _printk(0x8001920);
                        ipc_log_string(*(iVar18 + 0x1568),"Message buffer unavailable\n");
                        uVar1 = *(iVar18 + 0x155c);
                        *(iVar18 + 0x155c) = 0;
                        *(iVar18 + 0x1558) = uVar1;
code_r0x080057e4:
                        ipc_log_string(*(iVar18 + 0x1570),"Message buffer unavailable\n");
                    }
                    mutex_unlock(iVar17);
                    uVar9 = 0xfffffff4;
                    goto code_r0x08005840;
                }
                if (0x1e < uVar9) goto code_r0x08005d3c;
                iVar23 = iVar18 + uVar9 * 0x30;
                *(iVar23 + 0xda8) = &uStack_1c8;
                iVar7 = *(iVar18 + 0x1528);
                *(iVar23 + 0xdc0) = iVar22 + uVar9 * 0x28;
                *(iVar18 + 0x1528) = (iVar7 + 1) % 0x1e;
                _raw_spin_unlock_irqrestore(iVar21,uVar10);
                arg2_00 = *(iVar23 + 0xdc0);
                uVar10 = extraout_x8_02;
                if (arg2_00 == NULL) goto code_r0x080057c0;
                mutex_unlock(iVar17);
                uVar10 = uStack_180;
                if (puVar16[1] == 0) {
                    bVar3 = false;
                    if ((puVar16[2] < 0x15) &&
                       (uVar9 = puVar16[2], bVar3 = false, (1 << (uVar9 & 0x1f) & 0x130000U) != 0)) {
                        puVar16[1] = 2;
                        if (uVar9 == 0x10) {
                            uVar14 = 0x2c;
code_r0x08005b20:
                            puVar16[2] = uVar14;
                            uVar15 = 3;
                            uStack_180._0_2_ = CONCAT11(**(*(puVar16 + 8) + 0x10),puVar16[7]);
                            uStack_180._3_5_ = SUB85(uVar10,3);
                            uStack_180._0_3_ = CONCAT12((*(*(puVar16 + 8) + 0x10))[1],uStack_180);
                        }
                        else {
                            if (uVar9 != 0x14) {
                                if (uVar9 != 0x11) goto code_r0x08005480;
                                uVar14 = 0x2d;
                                goto code_r0x08005b20;
                            }
                            uVar15 = 2;
                            puVar16[2] = 0x2e;
                            uStack_180._0_2_ = CONCAT11(**(*(puVar16 + 8) + 0x10),puVar16[7]);
                        }
                        *(puVar16 + 0x10) = iVar18 + 0x1400;
                        uVar9 = slim_alloc_txn_tid(auVar24._0_8_,puVar16);
                        if (uVar9 != 0) {
                            sym.__slimbus_dbg(noname_0_06,0x8001b20,arg2,pcVar13);
                            if (*(iVar18 + 0x155c) < 1) {
                                if (*(iVar18 + 0x155c) != 0) goto code_r0x08005840;
                            }
                            else {
                                _printk(0x8001be0);
                                ipc_log_string(*(iVar18 + 0x1568),"Unable to allocate TID\n");
                                uVar1 = *(iVar18 + 0x155c);
                                *(iVar18 + 0x155c) = 0;
                                *(iVar18 + 0x1558) = uVar1;
                            }
                            ipc_log_string(*(iVar18 + 0x1570),"Unable to allocate TID\n");
                            goto code_r0x08005840;
                        }
                        iVar21 = *(puVar16 + 8);
                        bVar3 = true;
                        uVar8 = 0xff;
                        *(&uStack_180 | uVar15) = puVar16[6];
                        *(iVar21 + 2) = uVar15 + '\x01';
                        *(*(puVar16 + 8) + 0x10) = &uStack_180;
                        *(*(puVar16 + 8) + 8) = &uStack_1a8;
                        *puVar16 = *(*(puVar16 + 8) + 2) + 4;
                    }
                }
                else {
                    bVar3 = false;
                }
                *puVar16 = *puVar16 - 1;
                *arg2_00 = 0;
                uVar14 = puVar16[3];
                uVar8 = *puVar16 | puVar16[1] << 5 | puVar16[2] << 8 | uVar8 << 0x10;
                if (uVar14 != 0) {
                    uVar8 = uVar8 | 0x8000;
                }
                *arg2_00 = uVar8;
                iVar21 = 2;
                if (uVar14 == 0) {
                    iVar21 = 3;
                }
                puVar12 = arg2_00 + iVar21;
                if (puVar16[1] == 0) {
                    uVar14 = puVar16[2];
                    if ((uVar14 - 0x60 < 2) || (puVar11 = puVar12, uVar14 - 0x20 < 2)) {
                        puVar11 = puVar12 + 1;
                        *puVar12 = puVar16[6];
                        puVar12 = puVar11;
                        if (puVar16[1] != 0) goto code_r0x08005794;
                        uVar14 = puVar16[2];
                    }
                    if ((uVar14 - 0x20 < 10) || (puVar12 = puVar11, uVar14 - 0x60 < 9)) {
                        puVar12 = puVar11 + 2;
                        *puVar11 = puVar16[4];
                        puVar11[1] = puVar16[5];
                    }
                }
code_r0x08005794:
                iVar21 = *(puVar16 + 8);
                if ((iVar21 != 0) && (*(iVar21 + 0x10) != 0)) {
                    if (*(iVar18 + 0x1554) == '\0') {
                        memcpy(puVar12,*(iVar21 + 0x10),*(iVar21 + 2));
                    }
                    else {
                        __memcpy_toio();
                    }
                }
                mutex_lock(iVar17);
                uVar9 = sym.qcom_slim_ngd_tx_msg_post(iVar18,arg2_00,*puVar16);
                if (uVar9 == 0) {
                    iVar7 = wait_for_completion_timeout(&uStack_1c8,500);
                    if (iVar7 == 0) {
                        sym.__slimbus_dbg(noname_0_04,0x800113c,puVar16[2],puVar16[1]);
                        iVar7 = *(iVar18 + 0x155c);
                        if (1 < iVar7) {
                            _printk(0x80008c6,puVar16[2],puVar16[1]);
                            ipc_log_string(*(iVar18 + 0x1568),"TX timed out:MC:0x%x,mt:0x%x",puVar16[2],puVar16[1]);
                            iVar7 = *(iVar18 + 0x155c);
                        }
                        if (iVar7 == 0) {
                            ipc_log_string(*(iVar18 + 0x1570),"TX timed out:MC:0x%x,mt:0x%x",puVar16[2],puVar16[1]);
                        }
                        mutex_unlock(iVar17);
                        uVar9 = 0xffffff92;
                        *(iVar18 + 0x157d) = 1;
                    }
                    else {
                        if ((!bVar3) || (iVar7 = wait_for_completion_timeout(iVar18 + 0x1400,0xfa), iVar7 != 0)) {
                            mutex_unlock(iVar17);
                            goto code_r0x08005424;
                        }
                        sym.__slimbus_dbg(noname_0_05,0x8001d70,puVar16[2],puVar16[1]);
                        iVar7 = *(iVar18 + 0x155c);
                        if (1 < iVar7) {
                            _printk(0x8001585,puVar16[2],puVar16[1]);
                            ipc_log_string(*(iVar18 + 0x1568),"TX usr_msg timed out:MC:0x%x,mt:0x%x",puVar16[2],
                                           puVar16[1]);
                            iVar7 = *(iVar18 + 0x155c);
                        }
                        if (iVar7 == 0) {
                            ipc_log_string(*(iVar18 + 0x1570),"TX usr_msg timed out:MC:0x%x,mt:0x%x",puVar16[2],
                                           puVar16[1]);
                        }
                        mutex_unlock(iVar17);
                        uVar9 = 0xffffff92;
                    }
                    goto code_r0x08005840;
                }
            }
            else {
                arg2 = uVar14;
                sym.__slimbus_dbg(3,0x8001317,arg2,puVar16[1]);
                uVar9 = *(iVar18 + 0x155c);
                uVar19 = uVar14;
                uVar20 = uVar14;
                if (uVar9 < 3) {
                    if (uVar9 == 0) goto code_r0x08005550;
code_r0x080055b0:
                    uVar15 = uVar9;
                    pcVar13 = puVar16[1];
                    if (puVar16[1] == 0) goto code_r0x08005570;
code_r0x080055b8:
                    if (pcVar13 == 2) {
                        if (((0x2e < uVar20) || (uVar15 = 1L << (uVar14 & 0x3f), (uVar15 & 0x401800000000) == 0)) &&
                           (uVar15 = uVar19 - 0x20, 0xd < uVar19 - 0x20)) {
                            pcVar13 = 0x2;
                            goto code_r0x080055ec;
                        }
                    }
                    else {
code_r0x080055ec:
                        if (*(iVar18 + 0x1561) == '\0') {
                            sym.__slimbus_dbg(0,0x800136e,uVar20,pcVar13);
                            uVar8 = *(iVar18 + 0x155c);
                            if (2 < uVar8) {
                                ipc_log_string(*(iVar18 + 0x1568),"Not waiting for ADSP up MC:0x%x,mt:0x%x\n",uVar20,
                                               puVar16[1]);
                                uVar8 = *(iVar18 + 0x155c);
                            }
                            uVar15 = uVar8;
                            if (uVar8 == 0) {
                                pcVar13 = "Not waiting for ADSP up MC:0x%x,mt:0x%x\n";
code_r0x08005950:
                                ipc_log_string(*(iVar18 + 0x1570),pcVar13,uVar20,puVar16[1]);
                                uVar15 = extraout_x8_04;
                            }
                        }
                        else {
                            *(iVar18 + 0x1358) = 0;
                            iVar7 = wait_for_completion_timeout(iVar18 + 0x1358,0xfa);
                            if (iVar7 != 0) goto code_r0x0800560c;
                            sym.__slimbus_dbg(noname_0_03,0x8000fea,uVar19,puVar16[1]);
                            uVar8 = *(iVar18 + 0x155c);
                            if (1 < uVar8) {
                                _printk(0x8000a83,uVar19,puVar16[1]);
                                ipc_log_string(*(iVar18 + 0x1568),"ADSP slimbus not up timeout MC:0x%x,mt:0x%x\n",
                                               uVar20,puVar16[1]);
                                uVar8 = *(iVar18 + 0x155c);
                            }
                            uVar15 = uVar8;
                            if (uVar8 == 0) {
                                pcVar13 = "ADSP slimbus not up timeout MC:0x%x,mt:0x%x\n";
                                goto code_r0x08005950;
                            }
                        }
                    }
                    uVar9 = 0xffffff87;
                }
                else {
                    arg2 = uVar19;
                    ipc_log_string(*(iVar18 + 0x1568),"ADSP slimbus not up yet MC:0x%x,mt:0x%x\n",arg2,puVar16[1]);
                    uVar9 = *(iVar18 + 0x155c);
                    if (uVar9 != 0) goto code_r0x080055b0;
code_r0x08005550:
                    arg2 = uVar19;
                    ipc_log_string(*(iVar18 + 0x1570),"ADSP slimbus not up yet MC:0x%x,mt:0x%x\n",arg2,puVar16[1]);
                    pcVar13 = puVar16[1];
                    uVar15 = extraout_x8_01;
                    if (puVar16[1] != 0) goto code_r0x080055b8;
code_r0x08005570:
                    uVar9 = 0xffffffea;
                    if (((uVar19 != 0x14) && (uVar20 != 0x24)) && (uVar20 != 0x58)) {
                        uVar9 = 0xffffff87;
                        uVar15 = uVar20 - 0x10;
                        if (8 < uVar20 - 0x10) {
                            if ((uVar20 & 0xe0) != 0x40) goto code_r0x080055ec;
                            uVar15 = 0x40;
                        }
                    }
                }
                sym.__slimbus_dbg(uVar15,0x80009a4,puVar16[2],puVar16[1]);
                iVar7 = *(iVar18 + 0x155c);
                if (1 < iVar7) {
                    _printk(0x8001340,puVar16[2],puVar16[1],uVar9);
                    ipc_log_string(*(iVar18 + 0x1568),"ADSP slimbus not up MC:0x%x,mt:0x%x ret:%d\n",puVar16[2],
                                   puVar16[1],uVar9);
                    iVar7 = *(iVar18 + 0x155c);
                }
                if (iVar7 == 0) {
                    ipc_log_string(*(iVar18 + 0x1570),"ADSP slimbus not up MC:0x%x,mt:0x%x ret:%d\n",puVar16[2],
                                   puVar16[1],uVar9);
                }
            }
            mutex_unlock(iVar17);
        }
        else {
            sym.__slimbus_dbg(uVar14,0x800145d,arg2,pcVar13);
            if (*(iVar18 + 0x155c) < 1) {
                if (*(iVar18 + 0x155c) != 0) {
code_r0x08005480:
                    uVar9 = 0xffffffea;
                    goto code_r0x08005840;
                }
            }
            else {
                _printk(0x8001d58);
                ipc_log_string(*(iVar18 + 0x1568),"msg exceeds HW limit\n");
                uVar1 = *(iVar18 + 0x155c);
                *(iVar18 + 0x155c) = 0;
                *(iVar18 + 0x1558) = uVar1;
            }
            ipc_log_string(*(iVar18 + 0x1570),"msg exceeds HW limit\n");
            uVar9 = 0xffffffea;
        }
    }
code_r0x08005840:
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_158) {
        return uVar9;
    }
    __stack_chk_fail();
code_r0x08005d3c:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8005d40);
    (*pcVar6)();
}


// ===== sym.qcom_slim_ngd_enable_stream.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x08003540 (size 8) =====

//WARNING: Type propagation algorithm not settling

char * sym.qcom_slim_ngd_enable_stream.a72e7fa1990595d9f3a61d296fa60916.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint uVar2;
    uint8_t uVar3;
    uchar uVar4;
    bool bVar5;
    uchar uVar6;
    code *pcVar7;
    int iVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    int64_t iVar11;
    ulong uVar12;
    uint8_t *puVar13;
    uint8_t *puVar14;
    char *pcVar15;
    uint64_t uVar16;
    char *pcVar17;
    uint8_t uVar18;
    uint64_t uVar19;
    ulong noname_0;
    ulong noname_0_00;
    ulong noname_0_01;
    uint64_t extraout_x8;
    ulong noname_0_02;
    uint64_t extraout_x8_00;
    ulong noname_0_03;
    ulong noname_0_04;
    ulong noname_0_05;
    uint64_t extraout_x8_01;
    ulong noname_0_06;
    uint64_t extraout_x8_02;
    uint64_t extraout_x8_03;
    ulong noname_0_07;
    ulong extraout_x8_04;
    ulong extraout_x8_05;
    uint64_t extraout_x8_06;
    ulong noname_0_08;
    ulong noname_0_09;
    ulong noname_0_10;
    uint8_t *puVar20;
    int64_t iVar21;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    char *pcVar22;
    char *arg3;
    char *unaff_x21;
    char *unaff_x22;
    uint32_t uVar23;
    char *pcVar25;
    int64_t iVar26;
    int64_t iVar27;
    int64_t iVar28;
    uint32_t *arg2;
    int64_t unaff_x26;
    int64_t unaff_x27;
    int64_t unaff_x28;
    ulong unaff_x30;
    uchar auVar29 [16];
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong *******pppppppuStack_2a8;
    ulong *******pppppppuStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    int64_t iStack_248;
    uchar **ppuStack_240;
    code *pcStack_238;
    int64_t iStack_230;
    int64_t iStack_228;
    int64_t iStack_220;
    ulong *puStack_218;
    int64_t iStack_210;
    int64_t iStack_208;
    char *pcStack_200;
    char *pcStack_1f8;
    char *pcStack_1f0;
    int64_t iStack_1e8;
    ulong uStack_1e0;
    ulong *puStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong *puStack_1c0;
    ulong *puStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    int64_t iStack_158;
    uchar *puStack_150;
    code *pcStack_148;
    int64_t iStack_140;
    int64_t iStack_138;
    int64_t iStack_130;
    ulong *puStack_128;
    int64_t iStack_120;
    char *pcStack_118;
    char *pcStack_110;
    char *pcStack_108;
    char *pcStack_100;
    char *pcStack_f8;
    ulong uStack_f0;
    ulong *puStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong *puStack_d0;
    ulong *puStack_c8;
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
    ulong uStack_70;
    int64_t iStack_68;
    uint32_t uVar24;
    
    *in_x18 = unaff_x30;
    iVar27 = sp_el0;
    iStack_68 = *(iVar27 + 0x5e0);
    uVar16 = 1;
    iVar27 = *(param_1 + 8);
    pcVar17 = "qcom_slim_ngd_enable_stream";
    puStack_c8 = NULL;
    uStack_c0 = 0;
    uStack_d8 = 0;
    puStack_d0 = NULL;
    pcVar22 = *(iVar27 + 0x398);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    pcVar25 = pcVar22 + -0x3a0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    puStack_e8 = NULL;
    uStack_e0 = 0;
    uStack_f0 = 0;
    sym.__slimbus_dbg(iStack_68,0x8001b13,0x8001ceb,1);
    iVar8 = *(pcVar22 + 0x11bc);
    if (2 < iVar8) {
        pcVar17 = "qcom_slim_ngd_enable_stream";
        uVar16 = 1;
        ipc_log_string(*(pcVar22 + 0x11c8),"%s start %d\n");
        iVar8 = *(pcVar22 + 0x11bc);
    }
    if (iVar8 == 0) {
        pcVar17 = "qcom_slim_ngd_enable_stream";
        uVar16 = 1;
        ipc_log_string(*(pcVar22 + 0x11d0),"%s start %d\n");
    }
    uVar12 = uStack_f0;
    puStack_e8 = &uStack_d8;
    uStack_f0._0_4_ = uStack_f0;
    uStack_f0._0_2_ = CONCAT11(2,uVar12);
    uVar12 = uStack_f0;
    uStack_f0 = CONCAT17(0xff,uStack_f0);
    puStack_d0 = &uStack_b8;
    uStack_f0._0_4_ = uVar12;
    uStack_f0._0_6_ = uStack_f0;
    uStack_d8._0_3_ = uStack_d8;
    puStack_c8 = &uStack_90;
    if (0 < *(param_1 + 0x24)) {
        uVar19 = 0;
        unaff_x26 = 0;
        unaff_x28 = 0x24;
        unaff_x21 = "%s: wbuf[0] = 0x%x\n";
        unaff_x22 = "qcom_slim_ngd_enable_stream";
        do {
            unaff_x27 = *(param_1 + 0x28);
            if (uVar19 == 0) {
                uVar18 = *(iVar27 + 0x3a4);
                *(puStack_e8 + 2) = 1;
                uVar16 = *(iVar27 + 0x3a4);
                uStack_90 = CONCAT71(uStack_90._1_7_,uVar18);
                pcVar17 = unaff_x22;
                sym.__slimbus_dbg(uVar18,0x8000a53,0x8001ceb,uVar16);
                iVar8 = *(pcVar22 + 0x11bc);
                if (3 < iVar8) {
                    uVar16 = *(iVar27 + 0x3a4);
                    pcVar17 = unaff_x22;
                    ipc_log_string(*(pcVar22 + 0x11c8),"%s: wbuf[0] = 0x%x\n");
                    iVar8 = *(pcVar22 + 0x11bc);
                }
                if (iVar8 == 0) {
                    uVar16 = *(iVar27 + 0x3a4);
                    pcVar17 = unaff_x22;
                    ipc_log_string(*(pcVar22 + 0x11d0),"%s: wbuf[0] = 0x%x\n");
                }
                if (0x27 < *(puStack_e8 + 2)) goto code_r0x08004e14;
                uVar10 = *(param_1 + 0x18);
                iVar21 = *(param_1 + 8);
                *(&uStack_90 + *(puStack_e8 + 2)) = *(param_1 + 0x1c) >> 2 | *(unaff_x27 + unaff_x26 * 0x24 + 0x1c) << 6
                ;
                uVar9 = *(param_1 + 0x20);
                if (*(*(*(iVar21 + 0x398) + 0x48) + 0x39c) * uVar9 < uVar10) {
                    uVar9 = uVar9 + 1;
                    *(param_1 + 0x20) = uVar9;
                }
                iVar8 = 0;
                uVar10 = uVar9;
                do {
                    while (uVar23 = uVar10, (uVar9 & 1) == 0) {
                        iVar8 = iVar8 + 1;
                        uVar10 = uVar23 >> 1;
                        uVar9 = uVar23 >> 1;
                    }
                    uVar9 = uVar23 + 1;
                    uVar10 = uVar9;
                } while (3 < uVar23);
                if (uVar23 == 1) {
                    if (iVar8 < 10) {
code_r0x080049a4:
                        *(puStack_e8 + 2) = *(puStack_e8 + 2) + '\x01';
                        uVar2 = *(param_1 + 0x14);
                        uVar18 = *(puStack_e8 + 2);
                        *(puStack_e8 + 2) = uVar18 + 1;
                        if (0x27 < uVar18) goto code_r0x08004e14;
                        iVar1 = *(param_1 + 0x14);
                        *(&uStack_90 + uVar18) = uVar2 | iVar8 << 4;
                        uVar3 = *(puStack_e8 + 2);
                        uVar18 = *(unaff_x27 + unaff_x26 * 0x24 + 0x10);
                        *(puStack_e8 + 2) = uVar3 + 1;
                        if (iVar1 == 0) {
                            if (0x27 < uVar3) goto code_r0x08004e14;
                            uVar18 = uVar18 | 0x80;
                        }
                        else if (0x27 < uVar3) goto code_r0x08004e14;
                        *(&uStack_90 + uVar3) = uVar18;
                        iVar8 = slim_alloc_txn_tid(pcVar22,&uStack_f0);
                        if (iVar8 == 0) {
                            uVar18 = *(puStack_e8 + 2);
                            *(puStack_e8 + 2) = uVar18 + 1;
                            if (0x27 < uVar18) goto code_r0x08004e14;
                            *(&uStack_90 + uVar18) = uStack_f0._6_1_;
                            uVar19 = *(puStack_e8 + 2);
                            goto code_r0x08004a44;
                        }
                        sym.__slimbus_dbg(noname_0,0x800190a,pcVar17,uVar16);
                        if (*(pcVar22 + 0x11bc) < 1) {
                            if (*(pcVar22 + 0x11bc) == 0) goto code_r0x08004bdc;
                        }
                        else {
                            _printk(0x80016b3);
                            ipc_log_string(*(pcVar22 + 0x11c8),"Fail to allocate TID\n");
                            uVar2 = *(pcVar22 + 0x11bc);
                            pcVar22[0x11bc] = '\0';
                            pcVar22[0x11bd] = '\0';
                            pcVar22[0x11be] = '\0';
                            pcVar22[0x11bf] = '\0';
                            *(pcVar22 + 0x11b8) = uVar2;
code_r0x08004bdc:
                            ipc_log_string(*(pcVar22 + 0x11d0),"Fail to allocate TID\n");
                        }
                        arg3 = 0xfffffffa;
                        goto code_r0x08004da8;
                    }
                }
                else if (iVar8 < 9) {
                    uVar19 = *(puStack_e8 + 2);
                    if (0x27 < uVar19) goto code_r0x08004e14;
                    *(&uStack_90 + uVar19) = *(&uStack_90 + uVar19) | 0x20;
                    goto code_r0x080049a4;
                }
                sym.__slimbus_dbg(puStack_e8,0x8000cda,0x8001ceb,0xfffffffb);
                if (*(pcVar22 + 0x11bc) < 1) {
                    pcVar17 = pcVar22;
                    if (*(pcVar22 + 0x11bc) != 0) {
                        arg3 = 0xfffffffb;
                        goto code_r0x08004da8;
                    }
                }
                else {
                    pcVar17 = "qcom_slim_ngd_enable_stream";
                    _printk(0x8001f39,"qcom_slim_ngd_enable_stream",0xfffffffb);
                    ipc_log_string(*(pcVar22 + 0x11c8),"%s: error calculating coef %d\n","qcom_slim_ngd_enable_stream"
                                   ,0xfffffffb);
                    uVar2 = *(pcVar22 + 0x11bc);
                    pcVar22[0x11bc] = '\0';
                    pcVar22[0x11bd] = '\0';
                    pcVar22[0x11be] = '\0';
                    pcVar22[0x11bf] = '\0';
                    *(pcVar22 + 0x11b8) = uVar2;
                }
                uVar12 = *(pcVar22 + 0x11d0);
                pcVar15 = "%s: error calculating coef %d\n";
                arg3 = 0xfffffffb;
                pcVar22 = pcVar17;
                goto code_r0x08004da4;
            }
code_r0x08004a44:
            uVar2 = *(unaff_x27 + unaff_x26 * 0x24 + 0xc);
            *(puStack_e8 + 2) = uVar19 + '\x01';
            if (0x27 < uVar19) {
code_r0x08004e14:
    //WARNING: Does not return
                pcVar7 = SoftwareBreakpoint(0x5512,0x8004e18);
                (*pcVar7)();
            }
            iVar8 = *(param_1 + 0x24);
            unaff_x26 = unaff_x26 + 1;
            puVar20 = puStack_e8 + 2;
            *(&uStack_90 + uVar19) = uVar2;
            if (iVar8 <= unaff_x26) goto code_r0x08004a90;
            uVar19 = *puVar20;
        } while( true );
    }
    puVar20 = &uStack_d8 | 2;
code_r0x08004a90:
    uStack_f0._0_3_ = CONCAT12(0x21,uStack_f0);
    uStack_f0 = CONCAT71(uStack_f0._1_7_,*puVar20 + 4);
    uVar9 = sym.qcom_slim_ngd_xfer_msg_sync(pcVar22,&uStack_f0);
    if (uVar9 == 0) {
        uStack_f0._0_3_ = CONCAT12(0x24,uStack_f0);
        *(puStack_e8 + 2) = 2;
        uStack_90._0_2_ = CONCAT11(*(iVar27 + 0x3a4),uStack_90);
        uStack_f0 = CONCAT71(uStack_f0._1_7_,*(puStack_e8 + 2) + '\x04');
        uVar9 = slim_alloc_txn_tid(pcVar22,&uStack_f0);
        if (uVar9 == 0) {
            uStack_90 = CONCAT71(uStack_90._1_7_,uStack_f0._6_1_);
            uVar9 = sym.qcom_slim_ngd_xfer_msg_sync(pcVar22,&uStack_f0);
            arg3 = uVar9;
            uVar16 = extraout_x8;
            if (uVar9 != 0) {
                slim_free_txn_tid(pcVar22,&uStack_f0);
                sym.__slimbus_dbg(noname_0_02,0x8000b51,uStack_f0 >> 0x10 & 0xff,uStack_f0 >> 8 & 0xff);
                uVar9 = *(pcVar22 + 0x11bc);
                if (2 < uVar9) {
                    ipc_log_string(*(pcVar22 + 0x11c8),"TX RECONFIG timed out:MC:0x%x,mt:0x%x",uStack_f0._2_1_,
                                   uStack_f0._1_1_);
                    uVar9 = *(pcVar22 + 0x11bc);
                }
                uVar16 = uVar9;
                if (uVar9 == 0) {
                    ipc_log_string(*(pcVar22 + 0x11d0),"TX RECONFIG timed out:MC:0x%x,mt:0x%x",uStack_f0._2_1_,
                                   uStack_f0._1_1_);
                    uVar16 = extraout_x8_00;
                }
            }
            sym.__slimbus_dbg(uVar16,0x8001f5a,0x8001ceb,arg3);
            iVar8 = *(pcVar22 + 0x11bc);
            if (2 < iVar8) {
                ipc_log_string(*(pcVar22 + 0x11c8),"%s End ret : %d\n","qcom_slim_ngd_enable_stream",arg3);
                iVar8 = *(pcVar22 + 0x11bc);
            }
            if (iVar8 == 0) {
                uVar12 = *(pcVar22 + 0x11d0);
                pcVar15 = "%s End ret : %d\n";
code_r0x08004da4:
                ipc_log_string(uVar12,pcVar15,"qcom_slim_ngd_enable_stream",arg3);
            }
        }
        else {
            arg3 = uVar9;
            sym.__slimbus_dbg(noname_0_01,0x800190a,pcVar17,uVar16);
            if (*(pcVar22 + 0x11bc) < 1) {
                if (*(pcVar22 + 0x11bc) != 0) goto code_r0x08004da8;
            }
            else {
                _printk(0x80016b3);
                ipc_log_string(*(pcVar22 + 0x11c8),"Fail to allocate TID\n");
                uVar2 = *(pcVar22 + 0x11bc);
                pcVar22[0x11bc] = '\0';
                pcVar22[0x11bd] = '\0';
                pcVar22[0x11be] = '\0';
                pcVar22[0x11bf] = '\0';
                *(pcVar22 + 0x11b8) = uVar2;
            }
            ipc_log_string(*(pcVar22 + 0x11d0),"Fail to allocate TID\n");
        }
    }
    else {
        arg3 = uVar9;
        slim_free_txn_tid(pcVar22,&uStack_f0);
        sym.__slimbus_dbg(noname_0_00,0x8000cf9,uStack_f0 >> 0x10 & 0xff,uStack_f0 >> 8 & 0xff);
        iVar8 = *(pcVar22 + 0x11bc);
        uVar16 = uStack_f0;
        if (1 < iVar8) {
            _printk(0x80017b7,uStack_f0._2_1_,uStack_f0._1_1_);
            ipc_log_string(*(pcVar22 + 0x11c8),"TX ACT_CHAN timed out:MC:0x%x,mt:0x%x",uStack_f0._2_1_,
                           uStack_f0._1_1_);
            iVar8 = *(pcVar22 + 0x11bc);
            uVar16 = uStack_f0;
        }
        uStack_f0 = uVar16;
        if (iVar8 == 0) {
            uStack_f0._2_1_ = uVar16 >> 0x10;
            uVar6 = uStack_f0._2_1_;
            uStack_f0._1_1_ = uVar16 >> 8;
            uVar4 = uStack_f0._1_1_;
            ipc_log_string(*(pcVar22 + 0x11d0),"TX ACT_CHAN timed out:MC:0x%x,mt:0x%x",uVar6,uVar4);
        }
    }
code_r0x08004da8:
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_68) {
        return arg3;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_slim_ngd_disable_stream;
    pcStack_148 = sym.qcom_slim_ngd_disable_stream;
    iVar21 = sp_el0;
    iStack_158 = *(iVar21 + 0x5e0);
    pcVar17 = 0x1;
    iVar28 = *(iVar11 + 8);
    puStack_1b8 = NULL;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    puStack_1c0 = NULL;
    iVar21 = *(iVar28 + 0x398);
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_180 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    iVar26 = iVar21 + -0x3a0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_1a8 = 0;
    puStack_1d8 = NULL;
    uStack_1d0 = 0;
    uStack_1e0 = 0;
    puStack_150 = &stack0xffffffffffffffa0;
    iStack_140 = unaff_x28;
    iStack_138 = unaff_x27;
    iStack_130 = unaff_x26;
    puStack_128 = &uStack_90;
    iStack_120 = iVar27;
    pcStack_118 = pcVar25;
    pcStack_110 = unaff_x22;
    pcStack_108 = unaff_x21;
    pcStack_100 = arg3;
    pcStack_f8 = pcVar22;
    sym.__slimbus_dbg(iStack_158,0x8001b13,0x8001440,1);
    iVar8 = *(iVar21 + 0x11bc);
    if (2 < iVar8) {
        pcVar17 = 0x1;
        ipc_log_string(*(iVar21 + 0x11c8),"%s start %d\n","qcom_slim_ngd_disable_stream");
        iVar8 = *(iVar21 + 0x11bc);
    }
    if (iVar8 == 0) {
        pcVar17 = 0x1;
        ipc_log_string(*(iVar21 + 0x11d0),"%s start %d\n","qcom_slim_ngd_disable_stream");
    }
    uVar12 = uStack_1e0;
    puStack_1d8 = &uStack_1c8;
    uStack_1e0._0_4_ = uStack_1e0;
    uStack_1e0._0_2_ = CONCAT11(2,uVar12);
    uVar12 = uStack_1e0;
    uStack_1e0 = CONCAT17(0xff,uStack_1e0);
    puStack_1c0 = &uStack_1a8;
    uStack_1e0._0_4_ = uVar12;
    uStack_1e0._0_6_ = uStack_1e0;
    uStack_1c8._0_3_ = uStack_1c8;
    puStack_1b8 = &uStack_180;
    if (0 < *(iVar11 + 0x24)) {
        uVar16 = 0;
        unaff_x27 = 0xc;
        unaff_x28 = 1;
        unaff_x21 = "%s: wbuf[0] = 0x%x\n";
        unaff_x22 = "qcom_slim_ngd_disable_stream";
        do {
            unaff_x26 = *(iVar11 + 0x28);
            if (uVar16 == 0) {
                uVar4 = *(iVar28 + 0x3a4);
                *(puStack_1d8 + 2) = 1;
                pcVar17 = *(iVar28 + 0x3a4);
                uStack_180 = CONCAT71(uStack_180._1_7_,uVar4) & 0xffffffffffffff1f | 0x80;
                sym.__slimbus_dbg(puStack_1d8,0x8000a53,0x8001440,pcVar17);
                iVar8 = *(iVar21 + 0x11bc);
                if (3 < iVar8) {
                    pcVar17 = *(iVar28 + 0x3a4);
                    ipc_log_string(*(iVar21 + 0x11c8),"%s: wbuf[0] = 0x%x\n","qcom_slim_ngd_disable_stream");
                    iVar8 = *(iVar21 + 0x11bc);
                }
                if (iVar8 == 0) {
                    pcVar17 = *(iVar28 + 0x3a4);
                    ipc_log_string(*(iVar21 + 0x11d0),"%s: wbuf[0] = 0x%x\n","qcom_slim_ngd_disable_stream");
                }
                iVar8 = slim_alloc_txn_tid(iVar21,&uStack_1e0);
                if (iVar8 != 0) {
                    pcVar22 = 0xfffffffa;
                    sym.__slimbus_dbg(noname_0_03,0x8001aa1,0xfffffffa,pcVar17);
                    if (*(iVar21 + 0x11bc) < 1) {
                        if (*(iVar21 + 0x11bc) != 0) {
                            pcVar25 = 0xfffffffa;
                            goto code_r0x08005310;
                        }
                    }
                    else {
                        _printk(0x8001235,0xfffffffa);
                        ipc_log_string(*(iVar21 + 0x11c8),"Fail to allocate TID ret:%d\n",0xfffffffa);
                        uVar2 = *(iVar21 + 0x11bc);
                        *(iVar21 + 0x11bc) = 0;
                        *(iVar21 + 0x11b8) = uVar2;
                    }
                    uVar12 = *(iVar21 + 0x11d0);
                    pcVar25 = 0xfffffffa;
                    goto code_r0x0800530c;
                }
                uVar18 = *(puStack_1d8 + 2);
                *(puStack_1d8 + 2) = uVar18 + 1;
                if (0x27 < uVar18) goto code_r0x08005390;
                *(&uStack_180 + uVar18) = uStack_1e0._6_1_;
                uVar16 = *(puStack_1d8 + 2);
            }
            uVar2 = *(unaff_x26 + unaff_x27);
            *(puStack_1d8 + 2) = uVar16 + '\x01';
            if (0x27 < uVar16) {
code_r0x08005390:
    //WARNING: Does not return
                pcVar7 = SoftwareBreakpoint(0x5512,0x8005394);
                (*pcVar7)();
            }
            iVar8 = *(iVar11 + 0x24);
            puVar20 = puStack_1d8 + 2;
            *(&uStack_180 + uVar16) = uVar2;
            if (iVar8 <= unaff_x28) goto code_r0x08005044;
            uVar16 = *puVar20;
            unaff_x28 = unaff_x28 + 1;
            unaff_x27 = unaff_x27 + 0x24;
        } while( true );
    }
    puVar20 = &uStack_1c8 | 2;
code_r0x08005044:
    uStack_1e0._0_3_ = CONCAT12(0x23,uStack_1e0);
    uStack_1e0 = CONCAT71(uStack_1e0._1_7_,*puVar20 + 4);
    uVar9 = sym.qcom_slim_ngd_xfer_msg_sync(iVar21,&uStack_1e0);
    if (uVar9 == 0) {
        uStack_1e0._0_3_ = CONCAT12(0x24,uStack_1e0);
        *(puStack_1d8 + 2) = 2;
        uStack_180._0_2_ = CONCAT11(*(iVar28 + 0x3a4),uStack_180);
        uStack_1e0 = CONCAT71(uStack_1e0._1_7_,*(puStack_1d8 + 2) + '\x04');
        uVar9 = slim_alloc_txn_tid(iVar21,&uStack_1e0);
        if (uVar9 == 0) {
            uStack_180 = CONCAT71(uStack_180._1_7_,uStack_1e0._6_1_);
            uVar9 = sym.qcom_slim_ngd_xfer_msg_sync(iVar21,&uStack_1e0);
            pcVar25 = uVar9;
            uVar16 = extraout_x8_01;
            if (uVar9 != 0) {
                slim_free_txn_tid(iVar21,&uStack_1e0);
                sym.__slimbus_dbg(noname_0_06,0x8000b77,uStack_1e0 >> 0x10 & 0xff,uStack_1e0 >> 8 & 0xff);
                uVar9 = *(iVar21 + 0x11bc);
                uVar19 = uStack_1e0;
                if (1 < uVar9) {
                    _printk(0x80019f7,uStack_1e0._2_1_,uStack_1e0._1_1_,pcVar25);
                    ipc_log_string(*(iVar21 + 0x11c8),"TX RECONFIG timed out:MC:0x%x,mt:0x%x ret:%d\n",
                                   uStack_1e0._2_1_,uStack_1e0._1_1_,pcVar25);
                    uVar9 = *(iVar21 + 0x11bc);
                    uVar19 = uStack_1e0;
                }
                uVar16 = uVar9;
                uStack_1e0 = uVar19;
                if (uVar9 == 0) {
                    uStack_1e0._2_1_ = uVar19 >> 0x10;
                    uVar6 = uStack_1e0._2_1_;
                    uStack_1e0._1_1_ = uVar19 >> 8;
                    uVar4 = uStack_1e0._1_1_;
                    ipc_log_string(*(iVar21 + 0x11d0),"TX RECONFIG timed out:MC:0x%x,mt:0x%x ret:%d\n",uVar6,uVar4,
                                   pcVar25);
                    uVar16 = extraout_x8_02;
                }
            }
            pcVar22 = "qcom_slim_ngd_disable_stream";
            pcVar17 = pcVar25;
            sym.__slimbus_dbg(uVar16,0x8000995,0x8001440,pcVar25);
            iVar8 = *(iVar21 + 0x11bc);
            if (2 < iVar8) {
                pcVar22 = "qcom_slim_ngd_disable_stream";
                pcVar17 = pcVar25;
                ipc_log_string(*(iVar21 + 0x11c8),"%s End ret %d\n");
                iVar8 = *(iVar21 + 0x11bc);
            }
            if (iVar8 == 0) {
                pcVar22 = "qcom_slim_ngd_disable_stream";
                pcVar17 = pcVar25;
                ipc_log_string(*(iVar21 + 0x11d0),"%s End ret %d\n");
            }
        }
        else {
            pcVar25 = uVar9;
            pcVar22 = pcVar25;
            sym.__slimbus_dbg(noname_0_05,0x8001aa1,pcVar25,pcVar17);
            if (*(iVar21 + 0x11bc) < 1) {
                if (*(iVar21 + 0x11bc) != 0) goto code_r0x08005310;
            }
            else {
                _printk(0x8001235,pcVar25);
                ipc_log_string(*(iVar21 + 0x11c8),"Fail to allocate TID ret:%d\n",pcVar25);
                uVar2 = *(iVar21 + 0x11bc);
                *(iVar21 + 0x11bc) = 0;
                *(iVar21 + 0x11b8) = uVar2;
            }
            uVar12 = *(iVar21 + 0x11d0);
code_r0x0800530c:
            pcVar22 = pcVar25;
            ipc_log_string(uVar12,"Fail to allocate TID ret:%d\n");
        }
    }
    else {
        pcVar25 = uVar9;
        slim_free_txn_tid(iVar21,&uStack_1e0);
        pcVar22 = uStack_1e0 >> 0x10 & 0xff;
        pcVar17 = uStack_1e0 >> 8 & 0xff;
        sym.__slimbus_dbg(noname_0_04,0x800152c,pcVar22,pcVar17);
        iVar8 = *(iVar21 + 0x11bc);
        if (1 < iVar8) {
            _printk(0x8001e29,uStack_1e0._2_1_,uStack_1e0._1_1_,pcVar25);
            pcVar22 = uStack_1e0 >> 0x10 & 0xff;
            pcVar17 = uStack_1e0 >> 8 & 0xff;
            ipc_log_string(*(iVar21 + 0x11c8),"TX CHAN_CTRL timed out:MC:0x%x,mt:0x%x ret:%d\n",pcVar22,pcVar17,
                           pcVar25);
            iVar8 = *(iVar21 + 0x11bc);
        }
        if (iVar8 == 0) {
            pcVar22 = uStack_1e0 >> 0x10 & 0xff;
            pcVar17 = uStack_1e0 >> 8 & 0xff;
            ipc_log_string(*(iVar21 + 0x11d0),"TX CHAN_CTRL timed out:MC:0x%x,mt:0x%x ret:%d\n",pcVar22,pcVar17,
                           pcVar25);
        }
    }
code_r0x08005310:
    iVar27 = sp_el0;
    if (*(iVar27 + 0x5e0) == iStack_158) {
        return pcVar25;
    }
    auVar29 = __stack_chk_fail();
    puVar20 = auVar29._8_8_;
    *extraout_x18_00 = sym.qcom_slim_ngd_xfer_msg;
    pcStack_238 = sym.qcom_slim_ngd_xfer_msg;
    iVar27 = sp_el0;
    iStack_248 = *(iVar27 + 0x5e0);
    pppppppuStack_2a8 = &pppppppuStack_2a8;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uVar9 = puVar20[7];
    uStack_258 = 0;
    uStack_250 = 0;
    iVar27 = *(*auVar29._0_8_ + 0x98);
    uStack_268 = 0;
    uStack_260 = 0;
    uStack_270 = 0;
    uStack_280 = 0;
    uStack_278 = 0;
    *(iVar27 + 0x1400) = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    uStack_298 = 0;
    pppppppuStack_2a0 = pppppppuStack_2a8;
    ppuStack_240 = &puStack_150;
    iStack_230 = unaff_x28;
    iStack_228 = unaff_x27;
    iStack_220 = unaff_x26;
    puStack_218 = &uStack_180;
    iStack_210 = iVar28;
    iStack_208 = iVar26;
    pcStack_200 = unaff_x22;
    pcStack_1f8 = unaff_x21;
    pcStack_1f0 = pcVar25;
    iStack_1e8 = iVar21;
    if ((puVar20[1] == 0) && ((puVar20[2] & 0xe0) == 0x40)) {
code_r0x08005424:
        uVar10 = 0;
    }
    else if (puVar20[3] == 1) {
        uVar10 = 0xffffffa3;
    }
    else {
        uVar18 = *(*(puVar20 + 8) + 2);
        if ((uVar18 < 0x29) && (uVar18 = *puVar20, uVar18 < 0x29)) {
            iVar21 = iVar27 + 0x1448;
            uVar16 = mutex_is_locked(iVar21);
            if (((uVar16 & 1) != 0) && (*(iVar27 + 0x1500) == 4)) {
                sym.__slimbus_dbg(4,0x8001d07,pcVar22,pcVar17);
                if (*(iVar27 + 0x155c) < 1) {
                    if (*(iVar27 + 0x155c) != 0) {
                        uVar10 = 0xfffffff5;
                        goto code_r0x08005840;
                    }
                }
                else {
                    _printk(0x800155b);
                    ipc_log_string(*(iVar27 + 0x1568),"ngd going down due SSR/PDR, try again!\n");
                    uVar2 = *(iVar27 + 0x155c);
                    *(iVar27 + 0x155c) = 0;
                    *(iVar27 + 0x1558) = uVar2;
                }
                ipc_log_string(*(iVar27 + 0x1570),"ngd going down due SSR/PDR, try again!\n");
                uVar10 = 0xfffffff5;
                goto code_r0x08005840;
            }
            mutex_lock(iVar21);
            uVar18 = puVar20[2];
            if (((uVar18 == 1) && (puVar20[1] == 6)) || (*(iVar27 + 0x1500) != 3)) {
code_r0x0800560c:
                iVar11 = iVar27 + 0x1440;
                uVar12 = _raw_spin_lock_irqsave(iVar11);
                uVar10 = *(iVar27 + 0x1528);
                if (((uVar10 + 1) % 0x1e == *(iVar27 + 0x152c)) || (iVar26 = *(iVar27 + 0x1520), iVar26 == 0)) {
                    _raw_spin_unlock_irqrestore(iVar11,uVar12);
                    uVar12 = extraout_x8_05;
code_r0x080057c0:
                    sym.__slimbus_dbg(uVar12,0x8000a67,pcVar22,pcVar17);
                    if (*(iVar27 + 0x155c) < 1) {
                        if (*(iVar27 + 0x155c) == 0) goto code_r0x080057e4;
                    }
                    else {
                        _printk(0x8001920);
                        ipc_log_string(*(iVar27 + 0x1568),"Message buffer unavailable\n");
                        uVar2 = *(iVar27 + 0x155c);
                        *(iVar27 + 0x155c) = 0;
                        *(iVar27 + 0x1558) = uVar2;
code_r0x080057e4:
                        ipc_log_string(*(iVar27 + 0x1570),"Message buffer unavailable\n");
                    }
                    mutex_unlock(iVar21);
                    uVar10 = 0xfffffff4;
                    goto code_r0x08005840;
                }
                if (0x1e < uVar10) goto code_r0x08005d3c;
                iVar28 = iVar27 + uVar10 * 0x30;
                *(iVar28 + 0xda8) = &uStack_2b8;
                iVar8 = *(iVar27 + 0x1528);
                *(iVar28 + 0xdc0) = iVar26 + uVar10 * 0x28;
                *(iVar27 + 0x1528) = (iVar8 + 1) % 0x1e;
                _raw_spin_unlock_irqrestore(iVar11,uVar12);
                arg2 = *(iVar28 + 0xdc0);
                uVar12 = extraout_x8_04;
                if (arg2 == NULL) goto code_r0x080057c0;
                mutex_unlock(iVar21);
                uVar12 = uStack_270;
                if (puVar20[1] == 0) {
                    bVar5 = false;
                    if ((puVar20[2] < 0x15) &&
                       (uVar10 = puVar20[2], bVar5 = false, (1 << (uVar10 & 0x1f) & 0x130000U) != 0)) {
                        puVar20[1] = 2;
                        if (uVar10 == 0x10) {
                            uVar18 = 0x2c;
code_r0x08005b20:
                            puVar20[2] = uVar18;
                            uVar16 = 3;
                            uStack_270._0_2_ = CONCAT11(**(*(puVar20 + 8) + 0x10),puVar20[7]);
                            uStack_270._3_5_ = SUB85(uVar12,3);
                            uStack_270._0_3_ = CONCAT12((*(*(puVar20 + 8) + 0x10))[1],uStack_270);
                        }
                        else {
                            if (uVar10 != 0x14) {
                                if (uVar10 != 0x11) goto code_r0x08005480;
                                uVar18 = 0x2d;
                                goto code_r0x08005b20;
                            }
                            uVar16 = 2;
                            puVar20[2] = 0x2e;
                            uStack_270._0_2_ = CONCAT11(**(*(puVar20 + 8) + 0x10),puVar20[7]);
                        }
                        *(puVar20 + 0x10) = iVar27 + 0x1400;
                        uVar10 = slim_alloc_txn_tid(auVar29._0_8_,puVar20);
                        if (uVar10 != 0) {
                            sym.__slimbus_dbg(noname_0_10,0x8001b20,pcVar22,pcVar17);
                            if (*(iVar27 + 0x155c) < 1) {
                                if (*(iVar27 + 0x155c) != 0) goto code_r0x08005840;
                            }
                            else {
                                _printk(0x8001be0);
                                ipc_log_string(*(iVar27 + 0x1568),"Unable to allocate TID\n");
                                uVar2 = *(iVar27 + 0x155c);
                                *(iVar27 + 0x155c) = 0;
                                *(iVar27 + 0x1558) = uVar2;
                            }
                            ipc_log_string(*(iVar27 + 0x1570),"Unable to allocate TID\n");
                            goto code_r0x08005840;
                        }
                        iVar11 = *(puVar20 + 8);
                        bVar5 = true;
                        uVar9 = 0xff;
                        *(&uStack_270 | uVar16) = puVar20[6];
                        *(iVar11 + 2) = uVar16 + '\x01';
                        *(*(puVar20 + 8) + 0x10) = &uStack_270;
                        *(*(puVar20 + 8) + 8) = &uStack_298;
                        *puVar20 = *(*(puVar20 + 8) + 2) + 4;
                    }
                }
                else {
                    bVar5 = false;
                }
                *puVar20 = *puVar20 - 1;
                *arg2 = 0;
                uVar18 = puVar20[3];
                uVar9 = *puVar20 | puVar20[1] << 5 | puVar20[2] << 8 | uVar9 << 0x10;
                if (uVar18 != 0) {
                    uVar9 = uVar9 | 0x8000;
                }
                *arg2 = uVar9;
                iVar11 = 2;
                if (uVar18 == 0) {
                    iVar11 = 3;
                }
                puVar14 = arg2 + iVar11;
                if (puVar20[1] == 0) {
                    uVar18 = puVar20[2];
                    if ((uVar18 - 0x60 < 2) || (puVar13 = puVar14, uVar18 - 0x20 < 2)) {
                        puVar13 = puVar14 + 1;
                        *puVar14 = puVar20[6];
                        puVar14 = puVar13;
                        if (puVar20[1] != 0) goto code_r0x08005794;
                        uVar18 = puVar20[2];
                    }
                    if ((uVar18 - 0x20 < 10) || (puVar14 = puVar13, uVar18 - 0x60 < 9)) {
                        puVar14 = puVar13 + 2;
                        *puVar13 = puVar20[4];
                        puVar13[1] = puVar20[5];
                    }
                }
code_r0x08005794:
                iVar11 = *(puVar20 + 8);
                if ((iVar11 != 0) && (*(iVar11 + 0x10) != 0)) {
                    if (*(iVar27 + 0x1554) == '\0') {
                        memcpy(puVar14,*(iVar11 + 0x10),*(iVar11 + 2));
                    }
                    else {
                        __memcpy_toio();
                    }
                }
                mutex_lock(iVar21);
                uVar10 = sym.qcom_slim_ngd_tx_msg_post(iVar27,arg2,*puVar20);
                if (uVar10 == 0) {
                    iVar8 = wait_for_completion_timeout(&uStack_2b8,500);
                    if (iVar8 == 0) {
                        sym.__slimbus_dbg(noname_0_08,0x800113c,puVar20[2],puVar20[1]);
                        iVar8 = *(iVar27 + 0x155c);
                        if (1 < iVar8) {
                            _printk(0x80008c6,puVar20[2],puVar20[1]);
                            ipc_log_string(*(iVar27 + 0x1568),"TX timed out:MC:0x%x,mt:0x%x",puVar20[2],puVar20[1]);
                            iVar8 = *(iVar27 + 0x155c);
                        }
                        if (iVar8 == 0) {
                            ipc_log_string(*(iVar27 + 0x1570),"TX timed out:MC:0x%x,mt:0x%x",puVar20[2],puVar20[1]);
                        }
                        mutex_unlock(iVar21);
                        uVar10 = 0xffffff92;
                        *(iVar27 + 0x157d) = 1;
                    }
                    else {
                        if ((!bVar5) || (iVar8 = wait_for_completion_timeout(iVar27 + 0x1400,0xfa), iVar8 != 0)) {
                            mutex_unlock(iVar21);
                            goto code_r0x08005424;
                        }
                        sym.__slimbus_dbg(noname_0_09,0x8001d70,puVar20[2],puVar20[1]);
                        iVar8 = *(iVar27 + 0x155c);
                        if (1 < iVar8) {
                            _printk(0x8001585,puVar20[2],puVar20[1]);
                            ipc_log_string(*(iVar27 + 0x1568),"TX usr_msg timed out:MC:0x%x,mt:0x%x",puVar20[2],
                                           puVar20[1]);
                            iVar8 = *(iVar27 + 0x155c);
                        }
                        if (iVar8 == 0) {
                            ipc_log_string(*(iVar27 + 0x1570),"TX usr_msg timed out:MC:0x%x,mt:0x%x",puVar20[2],
                                           puVar20[1]);
                        }
                        mutex_unlock(iVar21);
                        uVar10 = 0xffffff92;
                    }
                    goto code_r0x08005840;
                }
            }
            else {
                pcVar22 = uVar18;
                sym.__slimbus_dbg(3,0x8001317,pcVar22,puVar20[1]);
                uVar10 = *(iVar27 + 0x155c);
                uVar23 = uVar18;
                uVar24 = uVar18;
                if (uVar10 < 3) {
                    if (uVar10 == 0) goto code_r0x08005550;
code_r0x080055b0:
                    uVar16 = uVar10;
                    pcVar17 = puVar20[1];
                    if (puVar20[1] == 0) goto code_r0x08005570;
code_r0x080055b8:
                    if (pcVar17 == 2) {
                        if (((0x2e < uVar24) || (uVar16 = 1L << (uVar18 & 0x3f), (uVar16 & 0x401800000000) == 0)) &&
                           (uVar16 = uVar23 - 0x20, 0xd < uVar23 - 0x20)) {
                            pcVar17 = 0x2;
                            goto code_r0x080055ec;
                        }
                    }
                    else {
code_r0x080055ec:
                        if (*(iVar27 + 0x1561) == '\0') {
                            sym.__slimbus_dbg(0,0x800136e,uVar24,pcVar17);
                            uVar9 = *(iVar27 + 0x155c);
                            if (2 < uVar9) {
                                ipc_log_string(*(iVar27 + 0x1568),"Not waiting for ADSP up MC:0x%x,mt:0x%x\n",uVar24,
                                               puVar20[1]);
                                uVar9 = *(iVar27 + 0x155c);
                            }
                            uVar16 = uVar9;
                            if (uVar9 == 0) {
                                pcVar17 = "Not waiting for ADSP up MC:0x%x,mt:0x%x\n";
code_r0x08005950:
                                ipc_log_string(*(iVar27 + 0x1570),pcVar17,uVar24,puVar20[1]);
                                uVar16 = extraout_x8_06;
                            }
                        }
                        else {
                            *(iVar27 + 0x1358) = 0;
                            iVar8 = wait_for_completion_timeout(iVar27 + 0x1358,0xfa);
                            if (iVar8 != 0) goto code_r0x0800560c;
                            sym.__slimbus_dbg(noname_0_07,0x8000fea,uVar23,puVar20[1]);
                            uVar9 = *(iVar27 + 0x155c);
                            if (1 < uVar9) {
                                _printk(0x8000a83,uVar23,puVar20[1]);
                                ipc_log_string(*(iVar27 + 0x1568),"ADSP slimbus not up timeout MC:0x%x,mt:0x%x\n",
                                               uVar24,puVar20[1]);
                                uVar9 = *(iVar27 + 0x155c);
                            }
                            uVar16 = uVar9;
                            if (uVar9 == 0) {
                                pcVar17 = "ADSP slimbus not up timeout MC:0x%x,mt:0x%x\n";
                                goto code_r0x08005950;
                            }
                        }
                    }
                    uVar10 = 0xffffff87;
                }
                else {
                    pcVar22 = uVar23;
                    ipc_log_string(*(iVar27 + 0x1568),"ADSP slimbus not up yet MC:0x%x,mt:0x%x\n",pcVar22,puVar20[1])
                    ;
                    uVar10 = *(iVar27 + 0x155c);
                    if (uVar10 != 0) goto code_r0x080055b0;
code_r0x08005550:
                    pcVar22 = uVar23;
                    ipc_log_string(*(iVar27 + 0x1570),"ADSP slimbus not up yet MC:0x%x,mt:0x%x\n",pcVar22,puVar20[1])
                    ;
                    pcVar17 = puVar20[1];
                    uVar16 = extraout_x8_03;
                    if (puVar20[1] != 0) goto code_r0x080055b8;
code_r0x08005570:
                    uVar10 = 0xffffffea;
                    if (((uVar23 != 0x14) && (uVar24 != 0x24)) && (uVar24 != 0x58)) {
                        uVar10 = 0xffffff87;
                        uVar16 = uVar24 - 0x10;
                        if (8 < uVar24 - 0x10) {
                            if ((uVar24 & 0xe0) != 0x40) goto code_r0x080055ec;
                            uVar16 = 0x40;
                        }
                    }
                }
                sym.__slimbus_dbg(uVar16,0x80009a4,puVar20[2],puVar20[1]);
                iVar8 = *(iVar27 + 0x155c);
                if (1 < iVar8) {
                    _printk(0x8001340,puVar20[2],puVar20[1],uVar10);
                    ipc_log_string(*(iVar27 + 0x1568),"ADSP slimbus not up MC:0x%x,mt:0x%x ret:%d\n",puVar20[2],
                                   puVar20[1],uVar10);
                    iVar8 = *(iVar27 + 0x155c);
                }
                if (iVar8 == 0) {
                    ipc_log_string(*(iVar27 + 0x1570),"ADSP slimbus not up MC:0x%x,mt:0x%x ret:%d\n",puVar20[2],
                                   puVar20[1],uVar10);
                }
            }
            mutex_unlock(iVar21);
        }
        else {
            sym.__slimbus_dbg(uVar18,0x800145d,pcVar22,pcVar17);
            if (*(iVar27 + 0x155c) < 1) {
                if (*(iVar27 + 0x155c) != 0) {
code_r0x08005480:
                    uVar10 = 0xffffffea;
                    goto code_r0x08005840;
                }
            }
            else {
                _printk(0x8001d58);
                ipc_log_string(*(iVar27 + 0x1568),"msg exceeds HW limit\n");
                uVar2 = *(iVar27 + 0x155c);
                *(iVar27 + 0x155c) = 0;
                *(iVar27 + 0x1558) = uVar2;
            }
            ipc_log_string(*(iVar27 + 0x1570),"msg exceeds HW limit\n");
            uVar10 = 0xffffffea;
        }
    }
code_r0x08005840:
    iVar27 = sp_el0;
    if (*(iVar27 + 0x5e0) == iStack_248) {
        return uVar10;
    }
    __stack_chk_fail();
code_r0x08005d3c:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x5512,0x8005d40);
    (*pcVar7)();
}


// ===== sym.slim_pd_status.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x08003548 (size 8) =====

void sym.slim_pd_status.a72e7fa1990595d9f3a61d296fa60916.cfi_jt(int param_1,ulong param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qcom_slim_ngd_ssr_pdr_notify(param_3,param_1);
    return;
}


// ===== sym.debug_mask_show.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x08003550 (size 8) =====

int64_t sym.debug_mask_show.a72e7fa1990595d9f3a61d296fa60916.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,4,0x8000f77,*(*(param_1 + 0x98) + 0x155c));
    return iVar1;
}


// ===== sym.qcom_slim_ngd_probe.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x08003558 (size 8) =====

int sym.qcom_slim_ngd_probe.a72e7fa1990595d9f3a61d296fa60916.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int *piVar2;
    int64_t *noname_0;
    char cVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x10;
    iVar7 = *(*(param_1 + 0x70) + 0x98);
    *(iVar7 + 0x3a0) = iVar1;
    iVar5 = slim_register_controller(iVar7 + 0x3a0);
    if (iVar5 == 0) {
        *(param_1 + 0xa8) = iVar7;
        __pm_runtime_use_autosuspend(iVar1,1);
        pm_runtime_set_autosuspend_delay(iVar1,100);
        __pm_runtime_set_status(iVar1,2);
        pm_runtime_enable(iVar1);
        piVar2 = param_1 + 0x208;
        Hint_Prefetch(piVar2,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
                *piVar2 = *piVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        noname_0 = *(iVar7 + 0x3a0) + 0x1f8;
        sym.__slimbus_dbg(noname_0,0x8000e6e,0x8000ad5,*noname_0);
        iVar5 = *(iVar7 + 0x155c);
        if (2 < iVar5) {
            ipc_log_string(*(iVar7 + 0x1568),"SLIM %s:PM get_noresume count:%d\n","qcom_slim_ngd_probe",
                           *(*(iVar7 + 0x3a0) + 0x1f8));
            iVar5 = *(iVar7 + 0x155c);
        }
        if (iVar5 == 0) {
            ipc_log_string(*(iVar7 + 0x1570),"SLIM %s:PM get_noresume count:%d\n","qcom_slim_ngd_probe",
                           *(*(iVar7 + 0x3a0) + 0x1f8));
        }
        *(iVar7 + 0x1378) = 0xfffffffe0;
        *(iVar7 + 0x1380) = iVar7 + 0x1380;
        *(iVar7 + 5000) = iVar7 + 0x1380;
        *(iVar7 + 0x13a8) = 0xfffffffe0;
        *(iVar7 + 0x1390) = sym.qcom_slim_ngd_master_worker.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
        *(iVar7 + 0x13b0) = iVar7 + 0x13b0;
        *(iVar7 + 0x13b8) = iVar7 + 0x13b0;
        *(iVar7 + 0x13c0) = sym.qcom_slim_ngd_up_worker.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
        iVar6 = alloc_workqueue(0x8000d2e,0xe000a,1,"ngd_master");
        *(iVar7 + 0x13d8) = iVar6;
        if (iVar6 == 0) {
            _dev_err(iVar1,"Failed to start master worker\n");
            qmi_handle_release(iVar7 + 0x660);
            if (*(iVar7 + 0x13d8) != 0) {
                destroy_workqueue();
            }
            iVar5 = -0xc;
        }
        else {
            iVar6 = iVar7 + 0x660;
            iVar5 = qmi_handle_init(iVar6,0,reloc.qcom_slim_ngd_qmi_new_server.a72e7fa1990595d9f3a61d296fa60916.cfi_jt
                                    ,0);
            if (iVar5 < 0) {
                _dev_err(*(iVar7 + 0x7d8),"qmi_handle_init failed: %d\n",iVar5);
            }
            else {
                iVar5 = qmi_add_lookup(iVar6,0x301,1,0);
                if (iVar5 < 0) {
                    _dev_err(*(iVar7 + 0x7d8),"qmi_add_lookup failed: %d\n",iVar5);
                    qmi_handle_release(iVar6);
                }
                else if (iVar5 == 0) {
                    return 0;
                }
            }
            _dev_err(iVar1,"QMI service registration failed:%d\n",iVar5);
        }
        slim_unregister_controller(iVar7 + 0x3a0);
    }
    else {
        _dev_err(iVar1,"error adding slim controller\n");
    }
    return iVar5;
}


// ===== sym.qcom_slim_ngd_ctrl_probe.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x08003560 (size 8) =====

uint64_t sym.qcom_slim_ngd_ctrl_probe.a72e7fa1990595d9f3a61d296fa60916.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    uint64_t arg2;
    ulong *puVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t iVar10;
    char *pcVar11;
    int64_t arg2_00;
    ulong noname_0;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong extraout_x8_01;
    ulong noname_0_00;
    ulong extraout_x8_02;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    int *piVar13;
    ulong unaff_x30;
    uint uStack_7c;
    ulong uStack_78;
    ulong uStack_70;
    unkbyte6 Stack_68;
    ushort uStack_62;
    unkbyte6 Stack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    piVar1 = param_1 + 0x10;
    iStack_58 = *(iVar5 + 0x5e0);
    Stack_60 = 0;
    uStack_70 = 0;
    Stack_68 = 0;
    uStack_62 = 0;
    uStack_78 = 0;
    iVar5 = devm_kmalloc(piVar1,0x1580,0xdc0);
    if (iVar5 == 0) {
code_r0x080041d0:
        arg2 = 0xfffffff4;
        goto code_r0x080041d4;
    }
    *(param_1 + 0xa8) = iVar5;
    uVar6 = platform_get_resource(param_1,0x200,0);
    arg2 = devm_ioremap_resource(piVar1,uVar6);
    *(iVar5 + 0x7e0) = arg2;
    if (0xfffffffffffff000 < arg2) goto code_r0x080041d4;
    puVar7 = platform_get_resource(param_1,0x400,0);
    if (puVar7 == NULL) {
        pcVar11 = "no slimbus IRQ resource\n";
    }
    else {
        *(iVar5 + 0x1578) = *puVar7;
        *(iVar5 + 0x1554) = 0;
        piVar8 = platform_get_resource_byname(param_1,0x200,"slimbus_remote_mem");
        iVar3 = dma_set_mask(piVar1,0xffffffff);
        if (iVar3 == 0) {
            dma_set_coherent_mask(piVar1,0xffffffff);
            if (piVar8 == NULL) {
                _dev_err(piVar1,"no Remote mem\n");
            }
            else {
                *(iVar5 + 0x1554) = 1;
                *(iVar5 + 0x1550) = *piVar8;
                iVar12 = devm_ioremap(piVar1,*piVar8,(piVar8[1] - *piVar8) + 1);
                *(iVar5 + 0x1540) = iVar12;
                if (iVar12 == 0) {
                    _dev_err(piVar1,"Remote mem ioremap failed\n");
                    goto code_r0x080041d0;
                }
                *(iVar5 + 0x1548) = iVar12;
                *(iVar5 + 0x1538) = piVar8;
            }
            iVar12 = 0;
            uVar4 = devm_request_threaded_irq
                              (piVar1,*(iVar5 + 0x1578),
                               sym.qcom_slim_ngd_interrupt.a72e7fa1990595d9f3a61d296fa60916.cfi_jt,0,4,"slim-ngd",
                               iVar5);
            if (uVar4 != 0) {
                arg2 = uVar4;
                _dev_err(piVar1,"request IRQ failed\n");
                goto code_r0x080041d4;
            }
            uVar6 = *(param_1 + 0x300);
            *(iVar5 + 0x157c) = 0;
            iVar9 = of_find_property(uVar6,"qcom,wait_for_adsp_up",0);
            iVar10 = *(param_1 + 0x80);
            *(iVar5 + 0x1561) = iVar9 != 0;
            if (iVar10 == 0) {
                iVar10 = *piVar1;
            }
            iVar9 = ipc_log_context_create(10,iVar10,0);
            *(iVar5 + 0x1568) = iVar9;
            if (iVar9 == 0) {
                _dev_err(piVar1,"error creating ipc_logging context\n");
            }
            else {
                iVar9 = *(param_1 + 0x80);
                *(iVar5 + 0x1558) = 0x300000003;
                if (iVar9 == 0) {
                    iVar9 = *piVar1;
                }
                sym.__slimbus_dbg(0x300000003,0x8000da9,iVar9,iVar12);
                iVar3 = *(iVar5 + 0x155c);
                if (2 < iVar3) {
                    iVar12 = *(param_1 + 0x80);
                    if (iVar12 == 0) {
                        iVar12 = *piVar1;
                    }
                    ipc_log_string(*(iVar5 + 0x1568),"start logging for slim dev %s\n",iVar12);
                    iVar3 = *(iVar5 + 0x155c);
                }
                if (iVar3 == 0) {
                    iVar12 = *(param_1 + 0x80);
                    if (iVar12 == 0) {
                        iVar12 = *piVar1;
                    }
                    ipc_log_string(*(iVar5 + 0x1570),"start logging for slim dev %s\n",iVar12);
                }
            }
            iVar12 = *(param_1 + 0x80);
            Stack_60 = 0;
            uStack_70 = 0;
            Stack_68 = 0;
            uStack_62 = 0;
            uStack_78 = 0;
            if (iVar12 == 0) {
                iVar12 = *piVar1;
            }
            scnprintf(&uStack_78,0x1e,"%s%s",iVar12,"_err");
            iVar9 = ipc_log_context_create(10,&uStack_78,0);
            *(iVar5 + 0x1570) = iVar9;
            if (iVar9 == 0) {
                _dev_err(piVar1,"error creating ipc_error_logging context\n");
            }
            else {
                sym.__slimbus_dbg(noname_0,0x80011c3,&uStack_78,iVar12);
                iVar3 = *(iVar5 + 0x155c);
                if (2 < iVar3) {
                    ipc_log_string(*(iVar5 + 0x1568),"start error logging for slim dev %s\n",&uStack_78);
                    iVar3 = *(iVar5 + 0x155c);
                }
                if (iVar3 == 0) {
                    ipc_log_string(*(iVar5 + 0x1570),"start error logging for slim dev %s\n",&uStack_78);
                }
            }
            iVar3 = sysfs_create_file_ns(piVar1,obj.dev_attr_debug_mask,0);
            if (iVar3 != 0) {
                _dev_err(piVar1,"Failed to create sysfs ret:%d\n",iVar3);
            }
            *(iVar5 + 0x1560) = iVar3 == 0;
            *(iVar5 + 0x14d8) = sym.qcom_slim_ngd_ssr_notify.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
            arg2 = qcom_register_ssr_notifier("lpass",iVar5 + 0x14d8);
            *(iVar5 + 0x14f0) = arg2;
            if (arg2 < 0xfffffffffffff001) {
                *(iVar5 + 0x3d4) = 10;
                *(iVar5 + 0x398) = 0xfa0002ee000;
                *(iVar5 + 0x4b8) = sym.qcom_slim_ngd_get_laddr.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
                *(iVar5 + 0x4d8) = sym.qcom_ngd_set_suspend.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
                *(iVar5 + 0x4a8) = sym.qcom_slim_ngd_xfer_msg.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
                *(iVar5 + 0x7d8) = piVar1;
                *(iVar5 + 1000) = iVar5;
                *(iVar5 + 0x4c0) = sym.qcom_slim_ngd_enable_stream.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
                *(iVar5 + 0x4d0) = 0;
                *(iVar5 + 0x4c8) = sym.qcom_slim_ngd_disable_stream.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
                *(iVar5 + 0x1500) = 3;
                __mutex_init(iVar5 + 0x1448,"&ctrl->tx_lock",obj.qcom_slim_ngd_ctrl_probe.__key);
                __mutex_init(iVar5 + 0x1478,"&ctrl->suspend_resume_lock",obj.qcom_slim_ngd_ctrl_probe.__key);
                __mutex_init(iVar5 + 0x14a8,"&ctrl->ssr_lock",obj.qcom_slim_ngd_ctrl_probe.__key);
                *(iVar5 + 0x1440) = 0;
                *(iVar5 + 0x1338) = 0;
                __init_swait_queue_head(iVar5 + 0x1340,"&x->wait",obj.qcom_slim_ngd_ctrl_probe.__key);
                *(iVar5 + 0x1358) = 0;
                __init_swait_queue_head(iVar5 + 0x1360,"&x->wait",obj.qcom_slim_ngd_ctrl_probe.__key);
                *(iVar5 + 0x7b0) = 0;
                __init_swait_queue_head(iVar5 + 0x7b8,"&x->wait",obj.qcom_slim_ngd_ctrl_probe.__key);
                *(iVar5 + 0x13e0) = 0;
                __init_swait_queue_head(iVar5 + 0x13e8,"&x->wait",obj.qcom_slim_ngd_ctrl_probe.__key);
                *(iVar5 + 0x1400) = 0;
                __init_swait_queue_head(iVar5 + 0x1408,"&x->wait",obj.qcom_slim_ngd_ctrl_probe.__key);
                *(iVar5 + 0x1420) = 0;
                __init_swait_queue_head(iVar5 + 0x1428,"&x->wait",obj.qcom_slim_ngd_ctrl_probe.__key);
                arg2 = pdr_handle_alloc(sym.slim_pd_status.a72e7fa1990595d9f3a61d296fa60916.cfi_jt,iVar5);
                *(iVar5 + 0x14f8) = arg2;
                if (arg2 < 0xfffffffffffff001) {
                    arg2 = pdr_add_lookup(arg2,"avs/audio","msm/adsp/audio_pd");
                    if ((arg2 < 0xfffffffffffff001) || (arg2 == 0xffffffffffffff8e)) {
                        uStack_7c = 0;
                        iVar9 = of_match_node(obj.qcom_slim_ngd_dt_match,*(param_1 + 0x300));
                        piVar13 = *(iVar9 + 0xc0);
                        iVar9 = of_get_next_available_child(*(param_1 + 0x300),0);
                        uVar6 = extraout_x8;
                        while (iVar9 != 0) {
                            iVar12 = 1;
                            iVar3 = of_property_read_variable_u32_array(iVar9,0x8001abe,&uStack_7c,1,0);
                            if (-1 < iVar3) {
                                arg2_00 = 0x18;
                                iVar10 = 0x38;
                                if (android_kmalloc_64_create != 0x0) {
                                    iVar10 = 0x30;
                                }
                                piVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar10),0xdc0);
                                if (piVar8 == NULL) {
                                    arg2 = 0xfffffff4;
                                    uVar6 = extraout_x8_01;
                                    goto code_r0x08003fe8;
                                }
                                iVar10 = platform_device_alloc("qcom,slim-ngd",uStack_7c);
                                *piVar8 = iVar10;
                                if (iVar10 == 0) {
                                    kfree(piVar8);
                                    arg2 = 0xfffffff4;
                                    uVar6 = extraout_x8_02;
                                    goto code_r0x08003fe8;
                                }
                                *(piVar8 + 2) = uStack_7c;
                                *(iVar10 + 0x70) = piVar1;
                                *(*piVar8 + 0x3d0) = "qcom,slim-ngd";
                                *(*piVar8 + 0x300) = iVar9;
                                iVar9 = *piVar8;
                                *(iVar5 + 2000) = piVar8;
                                platform_device_add(iVar9);
                                piVar8[1] = *(iVar5 + 0x7e0) + *piVar13 * piVar8[2] + piVar13[1] * (piVar8[2] + -1);
                                __platform_driver_register
                                          (reloc.qcom_slim_ngd_probe.a72e7fa1990595d9f3a61d296fa60916.cfi_jt,
                                           obj.__this_module);
                                sym.__slimbus_dbg(noname_0_00,0x8000ebc,arg2_00,iVar12);
                                iVar3 = *(iVar5 + 0x155c);
                                if (2 < iVar3) {
                                    ipc_log_string(*(iVar5 + 0x1568),"NGD SB controller is up!\n");
                                    iVar3 = *(iVar5 + 0x155c);
                                }
                                if (iVar3 == 0) {
                                    ipc_log_string(*(iVar5 + 0x1570),"NGD SB controller is up!\n");
                                }
                                arg2 = 0;
                                goto code_r0x080041d4;
                            }
                            iVar9 = of_get_next_available_child(*(param_1 + 0x300),iVar9);
                            uVar6 = extraout_x8_00;
                        }
                        arg2 = 0xffffffed;
code_r0x08003fe8:
                        sym.__slimbus_dbg(uVar6,0x8000f51,arg2,iVar12);
                        if (*(iVar5 + 0x155c) < 1) {
                            if (*(iVar5 + 0x155c) != 0) goto code_r0x08004024;
                        }
                        else {
                            _printk(0x8001dc0,arg2);
                            ipc_log_string(*(iVar5 + 0x1568),"qcom_slim_ngd_register failed ret:%d\n",arg2);
                            uVar2 = *(iVar5 + 0x155c);
                            *(iVar5 + 0x155c) = 0;
                            *(iVar5 + 0x1558) = uVar2;
                        }
                        ipc_log_string(*(iVar5 + 0x1570),"qcom_slim_ngd_register failed ret:%d\n",arg2);
                    }
                    else {
                        _dev_err(piVar1,"pdr add lookup failed: %d\n",arg2 & 0xffffffff);
                    }
code_r0x08004024:
                    pdr_handle_release(*(iVar5 + 0x14f8));
                }
                else {
                    _dev_err(piVar1,"Failed to init PDR handle: %d\n",arg2 & 0xffffffff);
                }
                qcom_unregister_ssr_notifier(*(iVar5 + 0x14f0),iVar5 + 0x14d8);
                iVar12 = *(iVar5 + 0x1568);
            }
            else {
                _dev_err(piVar1,"Failed to register SSR notification: %d\n",arg2 & 0xffffffff);
                iVar12 = *(iVar5 + 0x1568);
            }
            if (iVar12 != 0) {
                ipc_log_context_destroy();
            }
            if (*(iVar5 + 0x1560) != '\0') {
                sysfs_remove_file_ns(piVar1,obj.dev_attr_debug_mask,0);
            }
            goto code_r0x080041d4;
        }
        pcVar11 = "could not set 32 bit mask\n";
    }
    _dev_err(piVar1,pcVar11);
    arg2 = 0xffffffed;
code_r0x080041d4:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return arg2 & 0xffffffff;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_slim_ngd_ctrl_remove;
    iVar12 = *(iVar5 + 0xa8);
    platform_driver_unregister(reloc.qcom_slim_ngd_probe.a72e7fa1990595d9f3a61d296fa60916.cfi_jt);
    if (*(iVar12 + 0x1560) != '\0') {
        sysfs_remove_file_ns(iVar5 + 0x10,obj.dev_attr_debug_mask,0);
    }
    ipc_log_context_destroy(*(iVar12 + 0x1568));
    *(iVar12 + 0x1568) = 0;
    return 0;
}


// ===== sym.qcom_slim_ngd_ctrl_remove.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x08003568 (size 8) =====

ulong sym.qcom_slim_ngd_ctrl_remove.a72e7fa1990595d9f3a61d296fa60916.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    platform_driver_unregister(reloc.qcom_slim_ngd_probe.a72e7fa1990595d9f3a61d296fa60916.cfi_jt);
    if (*(iVar1 + 0x1560) != '\0') {
        sysfs_remove_file_ns(param_1 + 0x10,obj.dev_attr_debug_mask,0);
    }
    ipc_log_context_destroy(*(iVar1 + 0x1568));
    *(iVar1 + 0x1568) = 0;
    return 0;
}


// ===== sym.qcom_slim_ngd_remove.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x08003570 (size 8) =====

ulong sym.qcom_slim_ngd_remove.a72e7fa1990595d9f3a61d296fa60916.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xa8);
    __pm_runtime_disable(param_1 + 0x10,1);
    pdr_handle_release(*(arg1 + 0x14f8));
    qcom_unregister_ssr_notifier(*(arg1 + 0x14f0),arg1 + 0x14d8);
    noname_1 = slim_unregister_controller(arg1 + 0x3a0);
    sym.qcom_slim_ngd_exit_dma(arg1,noname_1,param_3);
    qmi_handle_release(arg1 + 0x660);
    if (*(arg1 + 0x13d8) != 0) {
        destroy_workqueue();
    }
    kfree(*(arg1 + 2000));
    *(arg1 + 2000) = 0;
    return 0;
}


// ===== sym.qcom_slim_ngd_get_laddr.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x08003578 (size 8) =====

uint64_t sym.qcom_slim_ngd_get_laddr.a72e7fa1990595d9f3a61d296fa60916.cfi_jt
                   (int64_t param_1,uint *param_2,uint8_t *param_3)

{
    int64_t iVar1;
    ulong uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    char *arg2;
    int iVar6;
    ulong noname_0;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar noname_1 [16];
    ulong uStack_98;
    ulong *puStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong *puStack_78;
    ulong *puStack_70;
    ulong uStack_68;
    int iStack_60;
    int16_t iStack_5c;
    ulong uStack_58;
    ushort uStack_50;
    ulong uStack_48;
    ushort uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    puStack_90 = &uStack_80;
    uStack_80 = 0x70000;
    puStack_78 = &uStack_58;
    uStack_88 = 0;
    puStack_70 = &uStack_48;
    uStack_68 = 0;
    iStack_5c = 0;
    iStack_60 = 0;
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_98 = 0xff000000000d020b;
    arg2 = param_3;
    uVar4 = slim_alloc_txn_tid(param_1,&uStack_98);
    uVar2 = uStack_48;
    if (uVar4 < 0) {
        uVar4 = uVar4 & 0xffffffff;
    }
    else {
        uStack_48._7_1_ = SUB81(uVar2,7);
        uStack_48._0_7_ = CONCAT25(*(param_2 + 1),CONCAT41(*param_2,uStack_98._6_1_));
        uVar4 = sym.qcom_slim_ngd_xfer_msg_sync(param_1,&uStack_98);
        if (uVar4 == 0) {
            if (uStack_58 == iStack_60 && uStack_58._4_2_ == iStack_5c) {
                uVar4 = 0xfffffffa;
            }
            else {
                arg2 = "qcom_slim_ngd_get_laddr";
                *param_3 = uStack_58._6_1_;
                sym.__slimbus_dbg(uStack_58._6_1_,0x800142f,0x80014ee,0);
                iVar6 = *(param_1 + 0x11bc);
                if (2 < iVar6) {
                    arg2 = "qcom_slim_ngd_get_laddr";
                    ipc_log_string(*(param_1 + 0x11c8),"%s end ret : %d\n","qcom_slim_ngd_get_laddr",0);
                    iVar6 = *(param_1 + 0x11bc);
                }
                if (iVar6 == 0) {
                    arg2 = "qcom_slim_ngd_get_laddr";
                    ipc_log_string(*(param_1 + 0x11d0),"%s end ret : %d\n","qcom_slim_ngd_get_laddr",0);
                }
                uVar4 = 0;
            }
        }
        else {
            uVar4 = uVar4 & 0xffffffff;
            slim_free_txn_tid(param_1,&uStack_98);
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    piVar5 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_ngd_set_suspend;
    uVar3 = sym.qcom_slim_ngd_runtime_suspend(*piVar5,noname_1,arg2);
    uVar4 = uVar3;
    if (uVar3 == 0) {
        __pm_runtime_disable(*piVar5,1);
        __pm_runtime_set_status(*piVar5,2);
        pm_runtime_enable(*piVar5);
    }
    else {
        sym.__slimbus_dbg(noname_0,0x8001122,0x8000b3c,uVar4);
        iVar6 = *(piVar5 + 0x11bc);
        if (2 < iVar6) {
            ipc_log_string(piVar5[0x239],"%s: Failed to suspend:%d\n","qcom_ngd_set_suspend",uVar4);
            iVar6 = *(piVar5 + 0x11bc);
        }
        if (iVar6 == 0) {
            ipc_log_string(piVar5[0x23a],"%s: Failed to suspend:%d\n","qcom_ngd_set_suspend",uVar4);
        }
    }
    return uVar4;
}


// ===== sym.qcom_slim_qmi_power_resp_cb.a72e7fa1990595d9f3a61d296fa60916.cfi_jt @ 0x08003580 (size 8) =====

void sym.qcom_slim_qmi_power_resp_cb.a72e7fa1990595d9f3a61d296fa60916.cfi_jt
               (ulong param_1,ulong param_2,int64_t param_3,int16_t *param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*param_4 != 0) {
        _printk(0x8000f7b);
    }
    complete(param_3 + 0x10);
    return;
}


// ===== sym.__traceiter_slimbus_dbg @ 0x08003588 (size 104) =====

ulong sym.__traceiter_slimbus_dbg(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8009348;
    piVar1 = *0x8009348;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2,arg3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.trace_event_raw_event_slimbus_dbg @ 0x080035f8 (size 340) =====

//WARNING: Removing unreachable block (ram,0x0800383c)

void sym.trace_event_raw_event_slimbus_dbg(int64_t arg1,int64_t arg2,int64_t arg3)

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
        goto code_r0x0800370c;
    }
    pcVar1 = "(null)";
    if (arg2 != 0) {
        pcVar1 = arg2;
    }
    iVar7 = strlen(pcVar1);
    puVar11 = iVar7 + 0x65 + 0x10;
    iVar9 = trace_event_buffer_reserve(&uStack_78,arg1);
    if (iVar9 != 0) {
        *(iVar9 + 8) = iVar7 * 0x10000 + 0x10010;
        *(iVar9 + 0xc) = iVar7 + 0x11U | 0x640000;
        strcpy(iVar9 + 0x10,pcVar1);
        puVar11 = *arg3;
        puVar3 = *(arg3 + 8);
        uStack_88 = puVar3[2];
        uStack_80 = puVar3[3];
        uStack_98 = *puVar3;
        uStack_90 = puVar3[1];
        iVar7 = vsnprintf(iVar9 + (iVar7 + 0x11U & 0xffff),100,puVar11,&uStack_98);
        if (99 < iVar7) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8003744);
            (*pcVar6)();
        }
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x0800370c:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return;
    }
    auVar13 = __stack_chk_fail();
    iVar10 = auVar13._0_8_;
    *extraout_x18 = sym.perf_trace_slimbus_dbg;
    pcStack_e8 = sym.perf_trace_slimbus_dbg;
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
        iVar4 = (iVar7 + 0x80U & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar4,&iStack_100,&uStack_104);
        if (iVar9 != 0) {
            uVar8 = _trace_event_raw_init & 0x3f;
            *(iStack_100 + 0xe8) = &puStack_f0;
            *(iStack_100 + 0x100) = ~(-1L << uVar8) & 0x800374c;
            *(iStack_100 + 0x108) = 5;
            *(iStack_100 + 0xf8) = auStack_130;
            *(iVar9 + 8) = iVar7 * 0x10000 + 0x10010;
            *(iVar9 + 0xc) = iVar7 + 0x11U | 0x640000;
            strcpy(iVar9 + 0x10,pcVar1);
            puVar3 = puVar11[1];
            uStack_118 = puVar3[2];
            uStack_110 = puVar3[3];
            uStack_128 = *puVar3;
            uStack_120 = puVar3[1];
            iVar7 = vsnprintf(iVar9 + (iVar7 + 0x11U & 0xffff),100,*puVar11,&uStack_128);
            if (99 < iVar7) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x80038f0);
                (*pcVar6)();
            }
            perf_trace_run_bpf_submit(iVar9,iVar4,uStack_104,iVar10,1,iStack_100,piVar2,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_f8) {
        __stack_chk_fail();
        uVar5 = tpidr_el2;
        *extraout_x18_00 = 0x80038f8;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_slimbus_dbg @ 0x0800374c (size 440) =====

void sym.perf_trace_slimbus_dbg(int64_t arg1,uint32_t arg2,int64_t arg3)

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
    uVar2 = 0x8001a27;
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
        iVar5 = (iVar8 + 0x80U & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar5,&stack0xffffffffffffffa0,&stack0xffffffffffffff9c);
        if (iVar9 != 0) {
            uVar10 = -1L << (_trace_event_raw_init & 0x3f);
            uVar3 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar10 | unaff_x30;
            }
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            *(iStack_60 + 0x100) = uVar3;
            *(iStack_60 + 0x108) = 5;
            *(iStack_60 + 0xf8) = &stack0xffffffffffffff70;
            *(iVar9 + 8) = iVar8 * 0x10000 + 0x10010;
            *(iVar9 + 0xc) = iVar8 + 0x11U | 0x640000;
            strcpy(iVar9 + 0x10,uVar2);
            puVar4 = *(arg3 + 8);
            uStack_78 = puVar4[2];
            uStack_70 = puVar4[3];
            uStack_88 = *puVar4;
            uStack_80 = puVar4[1];
            iVar8 = vsnprintf(iVar9 + (iVar8 + 0x11U & 0xffff),100,*arg3,&stack0xffffffffffffff78);
            if (99 < iVar8) {
    //WARNING: Does not return
                pcVar7 = SoftwareBreakpoint(0x800,0x80038f0);
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
    *extraout_x18 = 0x80038f8;
    bpf_trace_run2(in_tmp_ldXn);
    return;
}


// ===== sym.__bpf_trace_slimbus_dbg @ 0x08003904 (size 36) =====

void sym.__bpf_trace_slimbus_dbg(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2();
    return;
}


// ===== sym.__slimbus_dbg @ 0x08003928 (size 292) =====

void sym.__slimbus_dbg(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t *piVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    int64_t iStack_48;
    uchar *puStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    puStack_40 = &stack0xffffffffffffff98;
    iStack_48 = arg1;
    while (iVar2 = sp_el0, *(iVar2 + 0x5e0) != iStack_38) {
        uVar3 = __stack_chk_fail();
        iVar2 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1) !=
            0) {
            iVar2 = sp_el0;
            *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
            piVar5 = *0x8009348;
            piVar4 = *0x8009348;
            while (piVar4 != NULL) {
                (**piVar5)(piVar5[1],uVar3,&iStack_48);
                piVar5 = piVar5 + 3;
                piVar4 = *piVar5;
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


// ===== sym.trace_raw_output_slimbus_dbg @ 0x08003a64 (size 120) =====

void sym.trace_raw_output_slimbus_dbg(int64_t arg1,uchar noname_1 [16],int64_t arg2)

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


// ===== sym.qcom_slim_ngd_ctrl_probe @ 0x08003adc (size 2068) =====

uint64_t sym.qcom_slim_ngd_ctrl_probe(int64_t arg1)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    uint64_t arg2;
    ulong *puVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t iVar10;
    char *pcVar11;
    int64_t arg2_00;
    ulong noname_0;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong extraout_x8_01;
    ulong noname_0_00;
    ulong extraout_x8_02;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    int *piVar13;
    ulong unaff_x30;
    uint uStack_7c;
    ulong uStack_78;
    ulong uStack_70;
    unkbyte6 Stack_68;
    ushort uStack_62;
    unkbyte6 Stack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    piVar1 = arg1 + 0x10;
    iStack_58 = *(iVar5 + 0x5e0);
    Stack_60 = 0;
    uStack_70 = 0;
    Stack_68 = 0;
    uStack_62 = 0;
    uStack_78 = 0;
    iVar5 = devm_kmalloc(piVar1,0x1580,0xdc0);
    if (iVar5 == 0) {
code_r0x080041d0:
        arg2 = 0xfffffff4;
        goto code_r0x080041d4;
    }
    *(arg1 + 0xa8) = iVar5;
    uVar6 = platform_get_resource(arg1,0x200,0);
    arg2 = devm_ioremap_resource(piVar1,uVar6);
    *(iVar5 + 0x7e0) = arg2;
    if (0xfffffffffffff000 < arg2) goto code_r0x080041d4;
    puVar7 = platform_get_resource(arg1,0x400,0);
    if (puVar7 == NULL) {
        pcVar11 = "no slimbus IRQ resource\n";
    }
    else {
        *(iVar5 + 0x1578) = *puVar7;
        *(iVar5 + 0x1554) = 0;
        piVar8 = platform_get_resource_byname(arg1,0x200,"slimbus_remote_mem");
        iVar3 = dma_set_mask(piVar1,0xffffffff);
        if (iVar3 == 0) {
            dma_set_coherent_mask(piVar1,0xffffffff);
            if (piVar8 == NULL) {
                _dev_err(piVar1,"no Remote mem\n");
            }
            else {
                *(iVar5 + 0x1554) = 1;
                *(iVar5 + 0x1550) = *piVar8;
                iVar12 = devm_ioremap(piVar1,*piVar8,(piVar8[1] - *piVar8) + 1);
                *(iVar5 + 0x1540) = iVar12;
                if (iVar12 == 0) {
                    _dev_err(piVar1,"Remote mem ioremap failed\n");
                    goto code_r0x080041d0;
                }
                *(iVar5 + 0x1548) = iVar12;
                *(iVar5 + 0x1538) = piVar8;
            }
            iVar12 = 0;
            uVar4 = devm_request_threaded_irq
                              (piVar1,*(iVar5 + 0x1578),
                               sym.qcom_slim_ngd_interrupt.a72e7fa1990595d9f3a61d296fa60916.cfi_jt,0,4,"slim-ngd",
                               iVar5);
            if (uVar4 != 0) {
                arg2 = uVar4;
                _dev_err(piVar1,"request IRQ failed\n");
                goto code_r0x080041d4;
            }
            uVar6 = *(arg1 + 0x300);
            *(iVar5 + 0x157c) = 0;
            iVar9 = of_find_property(uVar6,"qcom,wait_for_adsp_up",0);
            iVar10 = *(arg1 + 0x80);
            *(iVar5 + 0x1561) = iVar9 != 0;
            if (iVar10 == 0) {
                iVar10 = *piVar1;
            }
            iVar9 = ipc_log_context_create(10,iVar10,0);
            *(iVar5 + 0x1568) = iVar9;
            if (iVar9 == 0) {
                _dev_err(piVar1,"error creating ipc_logging context\n");
            }
            else {
                iVar9 = *(arg1 + 0x80);
                *(iVar5 + 0x1558) = 0x300000003;
                if (iVar9 == 0) {
                    iVar9 = *piVar1;
                }
                sym.__slimbus_dbg(0x300000003,0x8000da9,iVar9,iVar12);
                iVar3 = *(iVar5 + 0x155c);
                if (2 < iVar3) {
                    iVar12 = *(arg1 + 0x80);
                    if (iVar12 == 0) {
                        iVar12 = *piVar1;
                    }
                    ipc_log_string(*(iVar5 + 0x1568),"start logging for slim dev %s\n",iVar12);
                    iVar3 = *(iVar5 + 0x155c);
                }
                if (iVar3 == 0) {
                    iVar12 = *(arg1 + 0x80);
                    if (iVar12 == 0) {
                        iVar12 = *piVar1;
                    }
                    ipc_log_string(*(iVar5 + 0x1570),"start logging for slim dev %s\n",iVar12);
                }
            }
            iVar12 = *(arg1 + 0x80);
            Stack_60 = 0;
            uStack_70 = 0;
            Stack_68 = 0;
            uStack_62 = 0;
            uStack_78 = 0;
            if (iVar12 == 0) {
                iVar12 = *piVar1;
            }
            scnprintf(&uStack_78,0x1e,"%s%s",iVar12,"_err");
            iVar9 = ipc_log_context_create(10,&uStack_78,0);
            *(iVar5 + 0x1570) = iVar9;
            if (iVar9 == 0) {
                _dev_err(piVar1,"error creating ipc_error_logging context\n");
            }
            else {
                sym.__slimbus_dbg(noname_0,0x80011c3,&uStack_78,iVar12);
                iVar3 = *(iVar5 + 0x155c);
                if (2 < iVar3) {
                    ipc_log_string(*(iVar5 + 0x1568),"start error logging for slim dev %s\n",&uStack_78);
                    iVar3 = *(iVar5 + 0x155c);
                }
                if (iVar3 == 0) {
                    ipc_log_string(*(iVar5 + 0x1570),"start error logging for slim dev %s\n",&uStack_78);
                }
            }
            iVar3 = sysfs_create_file_ns(piVar1,obj.dev_attr_debug_mask,0);
            if (iVar3 != 0) {
                _dev_err(piVar1,"Failed to create sysfs ret:%d\n",iVar3);
            }
            *(iVar5 + 0x1560) = iVar3 == 0;
            *(iVar5 + 0x14d8) = sym.qcom_slim_ngd_ssr_notify.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
            arg2 = qcom_register_ssr_notifier("lpass",iVar5 + 0x14d8);
            *(iVar5 + 0x14f0) = arg2;
            if (arg2 < 0xfffffffffffff001) {
                *(iVar5 + 0x3d4) = 10;
                *(iVar5 + 0x398) = 0xfa0002ee000;
                *(iVar5 + 0x4b8) = sym.qcom_slim_ngd_get_laddr.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
                *(iVar5 + 0x4d8) = sym.qcom_ngd_set_suspend.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
                *(iVar5 + 0x4a8) = sym.qcom_slim_ngd_xfer_msg.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
                *(iVar5 + 0x7d8) = piVar1;
                *(iVar5 + 1000) = iVar5;
                *(iVar5 + 0x4c0) = sym.qcom_slim_ngd_enable_stream.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
                *(iVar5 + 0x4d0) = 0;
                *(iVar5 + 0x4c8) = sym.qcom_slim_ngd_disable_stream.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
                *(iVar5 + 0x1500) = 3;
                __mutex_init(iVar5 + 0x1448,"&ctrl->tx_lock",obj.qcom_slim_ngd_ctrl_probe.__key);
                __mutex_init(iVar5 + 0x1478,"&ctrl->suspend_resume_lock",obj.qcom_slim_ngd_ctrl_probe.__key);
                __mutex_init(iVar5 + 0x14a8,"&ctrl->ssr_lock",obj.qcom_slim_ngd_ctrl_probe.__key);
                *(iVar5 + 0x1440) = 0;
                *(iVar5 + 0x1338) = 0;
                __init_swait_queue_head(iVar5 + 0x1340,"&x->wait",obj.qcom_slim_ngd_ctrl_probe.__key);
                *(iVar5 + 0x1358) = 0;
                __init_swait_queue_head(iVar5 + 0x1360,"&x->wait",obj.qcom_slim_ngd_ctrl_probe.__key);
                *(iVar5 + 0x7b0) = 0;
                __init_swait_queue_head(iVar5 + 0x7b8,"&x->wait",obj.qcom_slim_ngd_ctrl_probe.__key);
                *(iVar5 + 0x13e0) = 0;
                __init_swait_queue_head(iVar5 + 0x13e8,"&x->wait",obj.qcom_slim_ngd_ctrl_probe.__key);
                *(iVar5 + 0x1400) = 0;
                __init_swait_queue_head(iVar5 + 0x1408,"&x->wait",obj.qcom_slim_ngd_ctrl_probe.__key);
                *(iVar5 + 0x1420) = 0;
                __init_swait_queue_head(iVar5 + 0x1428,"&x->wait",obj.qcom_slim_ngd_ctrl_probe.__key);
                arg2 = pdr_handle_alloc(sym.slim_pd_status.a72e7fa1990595d9f3a61d296fa60916.cfi_jt,iVar5);
                *(iVar5 + 0x14f8) = arg2;
                if (arg2 < 0xfffffffffffff001) {
                    arg2 = pdr_add_lookup(arg2,"avs/audio","msm/adsp/audio_pd");
                    if ((arg2 < 0xfffffffffffff001) || (arg2 == 0xffffffffffffff8e)) {
                        uStack_7c = 0;
                        iVar9 = of_match_node(obj.qcom_slim_ngd_dt_match,*(arg1 + 0x300));
                        piVar13 = *(iVar9 + 0xc0);
                        iVar9 = of_get_next_available_child(*(arg1 + 0x300),0);
                        uVar6 = extraout_x8;
                        while (iVar9 != 0) {
                            iVar12 = 1;
                            iVar3 = of_property_read_variable_u32_array(iVar9,0x8001abe,&uStack_7c,1,0);
                            if (-1 < iVar3) {
                                arg2_00 = 0x18;
                                iVar10 = 0x38;
                                if (android_kmalloc_64_create != 0x0) {
                                    iVar10 = 0x30;
                                }
                                piVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar10),0xdc0);
                                if (piVar8 == NULL) {
                                    arg2 = 0xfffffff4;
                                    uVar6 = extraout_x8_01;
                                    goto code_r0x08003fe8;
                                }
                                iVar10 = platform_device_alloc("qcom,slim-ngd",uStack_7c);
                                *piVar8 = iVar10;
                                if (iVar10 == 0) {
                                    kfree(piVar8);
                                    arg2 = 0xfffffff4;
                                    uVar6 = extraout_x8_02;
                                    goto code_r0x08003fe8;
                                }
                                *(piVar8 + 2) = uStack_7c;
                                *(iVar10 + 0x70) = piVar1;
                                *(*piVar8 + 0x3d0) = "qcom,slim-ngd";
                                *(*piVar8 + 0x300) = iVar9;
                                iVar9 = *piVar8;
                                *(iVar5 + 2000) = piVar8;
                                platform_device_add(iVar9);
                                piVar8[1] = *(iVar5 + 0x7e0) + *piVar13 * piVar8[2] + piVar13[1] * (piVar8[2] + -1);
                                __platform_driver_register
                                          (reloc.qcom_slim_ngd_probe.a72e7fa1990595d9f3a61d296fa60916.cfi_jt,
                                           obj.__this_module);
                                sym.__slimbus_dbg(noname_0_00,0x8000ebc,arg2_00,iVar12);
                                iVar3 = *(iVar5 + 0x155c);
                                if (2 < iVar3) {
                                    ipc_log_string(*(iVar5 + 0x1568),"NGD SB controller is up!\n");
                                    iVar3 = *(iVar5 + 0x155c);
                                }
                                if (iVar3 == 0) {
                                    ipc_log_string(*(iVar5 + 0x1570),"NGD SB controller is up!\n");
                                }
                                arg2 = 0;
                                goto code_r0x080041d4;
                            }
                            iVar9 = of_get_next_available_child(*(arg1 + 0x300),iVar9);
                            uVar6 = extraout_x8_00;
                        }
                        arg2 = 0xffffffed;
code_r0x08003fe8:
                        sym.__slimbus_dbg(uVar6,0x8000f51,arg2,iVar12);
                        if (*(iVar5 + 0x155c) < 1) {
                            if (*(iVar5 + 0x155c) != 0) goto code_r0x08004024;
                        }
                        else {
                            _printk(0x8001dc0,arg2);
                            ipc_log_string(*(iVar5 + 0x1568),"qcom_slim_ngd_register failed ret:%d\n",arg2);
                            uVar2 = *(iVar5 + 0x155c);
                            *(iVar5 + 0x155c) = 0;
                            *(iVar5 + 0x1558) = uVar2;
                        }
                        ipc_log_string(*(iVar5 + 0x1570),"qcom_slim_ngd_register failed ret:%d\n",arg2);
                    }
                    else {
                        _dev_err(piVar1,"pdr add lookup failed: %d\n",arg2 & 0xffffffff);
                    }
code_r0x08004024:
                    pdr_handle_release(*(iVar5 + 0x14f8));
                }
                else {
                    _dev_err(piVar1,"Failed to init PDR handle: %d\n",arg2 & 0xffffffff);
                }
                qcom_unregister_ssr_notifier(*(iVar5 + 0x14f0),iVar5 + 0x14d8);
                iVar12 = *(iVar5 + 0x1568);
            }
            else {
                _dev_err(piVar1,"Failed to register SSR notification: %d\n",arg2 & 0xffffffff);
                iVar12 = *(iVar5 + 0x1568);
            }
            if (iVar12 != 0) {
                ipc_log_context_destroy();
            }
            if (*(iVar5 + 0x1560) != '\0') {
                sysfs_remove_file_ns(piVar1,obj.dev_attr_debug_mask,0);
            }
            goto code_r0x080041d4;
        }
        pcVar11 = "could not set 32 bit mask\n";
    }
    _dev_err(piVar1,pcVar11);
    arg2 = 0xffffffed;
code_r0x080041d4:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return arg2 & 0xffffffff;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_slim_ngd_ctrl_remove;
    iVar12 = *(iVar5 + 0xa8);
    platform_driver_unregister(reloc.qcom_slim_ngd_probe.a72e7fa1990595d9f3a61d296fa60916.cfi_jt);
    if (*(iVar12 + 0x1560) != '\0') {
        sysfs_remove_file_ns(iVar5 + 0x10,obj.dev_attr_debug_mask,0);
    }
    ipc_log_context_destroy(*(iVar12 + 0x1568));
    *(iVar12 + 0x1568) = 0;
    return 0;
}


// ===== sym.qcom_slim_ngd_ctrl_remove @ 0x080042f0 (size 108) =====

ulong sym.qcom_slim_ngd_ctrl_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    platform_driver_unregister(reloc.qcom_slim_ngd_probe.a72e7fa1990595d9f3a61d296fa60916.cfi_jt);
    if (*(iVar1 + 0x1560) != '\0') {
        sysfs_remove_file_ns(arg1 + 0x10,obj.dev_attr_debug_mask,0);
    }
    ipc_log_context_destroy(*(iVar1 + 0x1568));
    *(iVar1 + 0x1568) = 0;
    return 0;
}


// ===== sym.qcom_slim_ngd_interrupt @ 0x0800435c (size 332) =====

ulong sym.qcom_slim_ngd_interrupt(ulong noname_0,int64_t arg1)

{
    uint8_t *puVar1;
    uint64_t uVar2;
    int64_t in_x3;
    int iVar3;
    ulong *in_x18;
    uint64_t arg2;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(arg1 + 2000) + 8);
    if ((*(*(arg1 + 0x3a0) + 0x20c) == 2) && ((*(*(arg1 + 0x3a0) + 0x200) & 7) == 0)) {
        puVar1 = arg1 + 0x157c;
        sym.__slimbus_dbg(0x157c,0x80016e2,*puVar1,in_x3);
        iVar3 = *(arg1 + 0x155c);
        if (2 < iVar3) {
            ipc_log_string(*(arg1 + 0x1568),"Slimbus is in suspend state %d\n",*puVar1);
            iVar3 = *(arg1 + 0x155c);
        }
        if (iVar3 == 0) {
            ipc_log_string(*(arg1 + 0x1570),"Slimbus is in suspend state %d\n",*puVar1);
        }
    }
    else {
        uVar2 = sym.readl(iVar4 + 0x14);
        arg2 = uVar2 & 0xffffffff;
        if ((uVar2 & 0x2e000000) != 0) {
            sym.__slimbus_dbg(0x2e000000,0x8001b71,arg2,in_x3);
            iVar3 = *(arg1 + 0x155c);
            if (1 < iVar3) {
                _printk(0x8000afc,arg2);
                ipc_log_string(*(arg1 + 0x1568),"Error Interrupt received 0x%x\n",arg2);
                iVar3 = *(arg1 + 0x155c);
            }
            if (iVar3 == 0) {
                ipc_log_string(*(arg1 + 0x1570),"Error Interrupt received 0x%x\n",arg2);
            }
        }
        sym.writel(arg2,iVar4 + 0x18);
    }
    return 1;
}


// ===== sym.qcom_slim_ngd_ssr_notify @ 0x080044a8 (size 48) =====

ulong sym.qcom_slim_ngd_ssr_notify(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qcom_slim_ngd_ssr_pdr_notify(arg1 + -0x14d8,arg2);
    return 1;
}


// ===== sym.qcom_slim_ngd_get_laddr @ 0x080044d8 (size 432) =====

uint64_t sym.qcom_slim_ngd_get_laddr(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    char *arg2_00;
    int iVar6;
    ulong noname_0;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar noname_1 [16];
    ulong uStack_98;
    ulong *puStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong *puStack_78;
    ulong *puStack_70;
    ulong uStack_68;
    int iStack_60;
    int16_t iStack_5c;
    ulong uStack_58;
    ushort uStack_50;
    ulong uStack_48;
    ushort uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    puStack_90 = &uStack_80;
    uStack_80 = 0x70000;
    puStack_78 = &uStack_58;
    uStack_88 = 0;
    puStack_70 = &uStack_48;
    uStack_68 = 0;
    iStack_5c = 0;
    iStack_60 = 0;
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_98 = 0xff000000000d020b;
    arg2_00 = arg3;
    uVar4 = slim_alloc_txn_tid(arg1,&uStack_98);
    uVar2 = uStack_48;
    if (uVar4 < 0) {
        uVar4 = uVar4 & 0xffffffff;
    }
    else {
        uStack_48._7_1_ = SUB81(uVar2,7);
        uStack_48._0_7_ = CONCAT25(*(arg2 + 4),CONCAT41(*arg2,uStack_98._6_1_));
        uVar4 = sym.qcom_slim_ngd_xfer_msg_sync(arg1,&uStack_98);
        if (uVar4 == 0) {
            if (uStack_58 == iStack_60 && uStack_58._4_2_ == iStack_5c) {
                uVar4 = 0xfffffffa;
            }
            else {
                arg2_00 = "qcom_slim_ngd_get_laddr";
                *arg3 = uStack_58._6_1_;
                sym.__slimbus_dbg(uStack_58._6_1_,0x800142f,0x80014ee,0);
                iVar6 = *(arg1 + 0x11bc);
                if (2 < iVar6) {
                    arg2_00 = "qcom_slim_ngd_get_laddr";
                    ipc_log_string(*(arg1 + 0x11c8),"%s end ret : %d\n","qcom_slim_ngd_get_laddr",0);
                    iVar6 = *(arg1 + 0x11bc);
                }
                if (iVar6 == 0) {
                    arg2_00 = "qcom_slim_ngd_get_laddr";
                    ipc_log_string(*(arg1 + 0x11d0),"%s end ret : %d\n","qcom_slim_ngd_get_laddr",0);
                }
                uVar4 = 0;
            }
        }
        else {
            uVar4 = uVar4 & 0xffffffff;
            slim_free_txn_tid(arg1,&uStack_98);
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    piVar5 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_ngd_set_suspend;
    uVar3 = sym.qcom_slim_ngd_runtime_suspend(*piVar5,noname_1,arg2_00);
    uVar4 = uVar3;
    if (uVar3 == 0) {
        __pm_runtime_disable(*piVar5,1);
        __pm_runtime_set_status(*piVar5,2);
        pm_runtime_enable(*piVar5);
    }
    else {
        sym.__slimbus_dbg(noname_0,0x8001122,0x8000b3c,uVar4);
        iVar6 = *(piVar5 + 0x11bc);
        if (2 < iVar6) {
            ipc_log_string(piVar5[0x239],"%s: Failed to suspend:%d\n","qcom_ngd_set_suspend",uVar4);
            iVar6 = *(piVar5 + 0x11bc);
        }
        if (iVar6 == 0) {
            ipc_log_string(piVar5[0x23a],"%s: Failed to suspend:%d\n","qcom_ngd_set_suspend",uVar4);
        }
    }
    return uVar4;
}


// ===== sym.qcom_ngd_set_suspend @ 0x08004688 (size 204) =====

uint64_t sym.qcom_ngd_set_suspend(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t in_x2;
    int iVar2;
    ulong noname_0;
    ulong *in_x18;
    uint64_t arg3;
    ulong unaff_x30;
    uchar in_q0 [16];
    
    *in_x18 = unaff_x30;
    uVar1 = sym.qcom_slim_ngd_runtime_suspend(*arg1,in_q0,in_x2);
    arg3 = uVar1;
    if (uVar1 == 0) {
        __pm_runtime_disable(*arg1,1);
        __pm_runtime_set_status(*arg1,2);
        pm_runtime_enable(*arg1);
    }
    else {
        sym.__slimbus_dbg(noname_0,0x8001122,0x8000b3c,arg3);
        iVar2 = *(arg1 + 0x11bc);
        if (2 < iVar2) {
            ipc_log_string(*(arg1 + 0x11c8),"%s: Failed to suspend:%d\n","qcom_ngd_set_suspend",arg3);
            iVar2 = *(arg1 + 0x11bc);
        }
        if (iVar2 == 0) {
            ipc_log_string(*(arg1 + 0x11d0),"%s: Failed to suspend:%d\n","qcom_ngd_set_suspend",arg3);
        }
    }
    return arg3;
}


// ===== sym.qcom_slim_ngd_enable_stream @ 0x08004754 (size 1736) =====

//WARNING: Type propagation algorithm not settling

char * sym.qcom_slim_ngd_enable_stream(int64_t arg1)

{
    int iVar1;
    uint uVar2;
    uint8_t uVar3;
    uchar uVar4;
    bool bVar5;
    uchar uVar6;
    code *pcVar7;
    int iVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    int64_t iVar11;
    ulong uVar12;
    uint8_t *puVar13;
    uint8_t *puVar14;
    char *pcVar15;
    uint64_t uVar16;
    char *pcVar17;
    uint8_t uVar18;
    uint64_t uVar19;
    ulong noname_0;
    ulong noname_0_00;
    ulong noname_0_01;
    uint64_t extraout_x8;
    ulong noname_0_02;
    uint64_t extraout_x8_00;
    ulong noname_0_03;
    ulong noname_0_04;
    ulong noname_0_05;
    uint64_t extraout_x8_01;
    ulong noname_0_06;
    uint64_t extraout_x8_02;
    uint64_t extraout_x8_03;
    ulong noname_0_07;
    ulong extraout_x8_04;
    ulong extraout_x8_05;
    uint64_t extraout_x8_06;
    ulong noname_0_08;
    ulong noname_0_09;
    ulong noname_0_10;
    uint8_t *puVar20;
    int64_t iVar21;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    char *pcVar22;
    char *arg3;
    char *unaff_x21;
    char *unaff_x22;
    uint32_t uVar23;
    char *pcVar25;
    int64_t iVar26;
    int64_t iVar27;
    int64_t iVar28;
    uint32_t *arg2;
    int64_t unaff_x26;
    int64_t unaff_x27;
    int64_t unaff_x28;
    ulong unaff_x30;
    uchar auVar29 [16];
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong *******pppppppuStack_2a8;
    ulong *******pppppppuStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    int64_t iStack_248;
    uchar **ppuStack_240;
    code *pcStack_238;
    int64_t iStack_230;
    int64_t iStack_228;
    int64_t iStack_220;
    ulong *puStack_218;
    int64_t iStack_210;
    int64_t iStack_208;
    char *pcStack_200;
    char *pcStack_1f8;
    char *pcStack_1f0;
    int64_t iStack_1e8;
    ulong uStack_1e0;
    ulong *puStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong *puStack_1c0;
    ulong *puStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    int64_t iStack_158;
    uchar *puStack_150;
    code *pcStack_148;
    int64_t iStack_140;
    int64_t iStack_138;
    int64_t iStack_130;
    ulong *puStack_128;
    int64_t iStack_120;
    char *pcStack_118;
    char *pcStack_110;
    char *pcStack_108;
    char *pcStack_100;
    char *pcStack_f8;
    ulong uStack_f0;
    ulong *puStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong *puStack_d0;
    ulong *puStack_c8;
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
    ulong uStack_70;
    int64_t iStack_68;
    uint32_t uVar24;
    
    *in_x18 = unaff_x30;
    iVar27 = sp_el0;
    iStack_68 = *(iVar27 + 0x5e0);
    uVar16 = 1;
    iVar27 = *(arg1 + 8);
    pcVar17 = "qcom_slim_ngd_enable_stream";
    puStack_c8 = NULL;
    uStack_c0 = 0;
    uStack_d8 = 0;
    puStack_d0 = NULL;
    pcVar22 = *(iVar27 + 0x398);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    pcVar25 = pcVar22 + -0x3a0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    puStack_e8 = NULL;
    uStack_e0 = 0;
    uStack_f0 = 0;
    sym.__slimbus_dbg(iStack_68,0x8001b13,0x8001ceb,1);
    iVar8 = *(pcVar22 + 0x11bc);
    if (2 < iVar8) {
        pcVar17 = "qcom_slim_ngd_enable_stream";
        uVar16 = 1;
        ipc_log_string(*(pcVar22 + 0x11c8),"%s start %d\n");
        iVar8 = *(pcVar22 + 0x11bc);
    }
    if (iVar8 == 0) {
        pcVar17 = "qcom_slim_ngd_enable_stream";
        uVar16 = 1;
        ipc_log_string(*(pcVar22 + 0x11d0),"%s start %d\n");
    }
    uVar12 = uStack_f0;
    puStack_e8 = &uStack_d8;
    uStack_f0._0_4_ = uStack_f0;
    uStack_f0._0_2_ = CONCAT11(2,uVar12);
    uVar12 = uStack_f0;
    uStack_f0 = CONCAT17(0xff,uStack_f0);
    puStack_d0 = &uStack_b8;
    uStack_f0._0_4_ = uVar12;
    uStack_f0._0_6_ = uStack_f0;
    uStack_d8._0_3_ = uStack_d8;
    puStack_c8 = &uStack_90;
    if (0 < *(arg1 + 0x24)) {
        uVar19 = 0;
        unaff_x26 = 0;
        unaff_x28 = 0x24;
        unaff_x21 = "%s: wbuf[0] = 0x%x\n";
        unaff_x22 = "qcom_slim_ngd_enable_stream";
        do {
            unaff_x27 = *(arg1 + 0x28);
            if (uVar19 == 0) {
                uVar18 = *(iVar27 + 0x3a4);
                *(puStack_e8 + 2) = 1;
                uVar16 = *(iVar27 + 0x3a4);
                uStack_90 = CONCAT71(uStack_90._1_7_,uVar18);
                pcVar17 = unaff_x22;
                sym.__slimbus_dbg(uVar18,0x8000a53,0x8001ceb,uVar16);
                iVar8 = *(pcVar22 + 0x11bc);
                if (3 < iVar8) {
                    uVar16 = *(iVar27 + 0x3a4);
                    pcVar17 = unaff_x22;
                    ipc_log_string(*(pcVar22 + 0x11c8),"%s: wbuf[0] = 0x%x\n");
                    iVar8 = *(pcVar22 + 0x11bc);
                }
                if (iVar8 == 0) {
                    uVar16 = *(iVar27 + 0x3a4);
                    pcVar17 = unaff_x22;
                    ipc_log_string(*(pcVar22 + 0x11d0),"%s: wbuf[0] = 0x%x\n");
                }
                if (0x27 < *(puStack_e8 + 2)) goto code_r0x08004e14;
                uVar10 = *(arg1 + 0x18);
                iVar21 = *(arg1 + 8);
                *(&uStack_90 + *(puStack_e8 + 2)) = *(arg1 + 0x1c) >> 2 | *(unaff_x27 + unaff_x26 * 0x24 + 0x1c) << 6;
                uVar9 = *(arg1 + 0x20);
                if (*(*(*(iVar21 + 0x398) + 0x48) + 0x39c) * uVar9 < uVar10) {
                    uVar9 = uVar9 + 1;
                    *(arg1 + 0x20) = uVar9;
                }
                iVar8 = 0;
                uVar10 = uVar9;
                do {
                    while (uVar23 = uVar10, (uVar9 & 1) == 0) {
                        iVar8 = iVar8 + 1;
                        uVar10 = uVar23 >> 1;
                        uVar9 = uVar23 >> 1;
                    }
                    uVar9 = uVar23 + 1;
                    uVar10 = uVar9;
                } while (3 < uVar23);
                if (uVar23 == 1) {
                    if (iVar8 < 10) {
code_r0x080049a4:
                        *(puStack_e8 + 2) = *(puStack_e8 + 2) + '\x01';
                        uVar2 = *(arg1 + 0x14);
                        uVar18 = *(puStack_e8 + 2);
                        *(puStack_e8 + 2) = uVar18 + 1;
                        if (0x27 < uVar18) goto code_r0x08004e14;
                        iVar1 = *(arg1 + 0x14);
                        *(&uStack_90 + uVar18) = uVar2 | iVar8 << 4;
                        uVar3 = *(puStack_e8 + 2);
                        uVar18 = *(unaff_x27 + unaff_x26 * 0x24 + 0x10);
                        *(puStack_e8 + 2) = uVar3 + 1;
                        if (iVar1 == 0) {
                            if (0x27 < uVar3) goto code_r0x08004e14;
                            uVar18 = uVar18 | 0x80;
                        }
                        else if (0x27 < uVar3) goto code_r0x08004e14;
                        *(&uStack_90 + uVar3) = uVar18;
                        iVar8 = slim_alloc_txn_tid(pcVar22,&uStack_f0);
                        if (iVar8 == 0) {
                            uVar18 = *(puStack_e8 + 2);
                            *(puStack_e8 + 2) = uVar18 + 1;
                            if (0x27 < uVar18) goto code_r0x08004e14;
                            *(&uStack_90 + uVar18) = uStack_f0._6_1_;
                            uVar19 = *(puStack_e8 + 2);
                            goto code_r0x08004a44;
                        }
                        sym.__slimbus_dbg(noname_0,0x800190a,pcVar17,uVar16);
                        if (*(pcVar22 + 0x11bc) < 1) {
                            if (*(pcVar22 + 0x11bc) == 0) goto code_r0x08004bdc;
                        }
                        else {
                            _printk(0x80016b3);
                            ipc_log_string(*(pcVar22 + 0x11c8),"Fail to allocate TID\n");
                            uVar2 = *(pcVar22 + 0x11bc);
                            pcVar22[0x11bc] = '\0';
                            pcVar22[0x11bd] = '\0';
                            pcVar22[0x11be] = '\0';
                            pcVar22[0x11bf] = '\0';
                            *(pcVar22 + 0x11b8) = uVar2;
code_r0x08004bdc:
                            ipc_log_string(*(pcVar22 + 0x11d0),"Fail to allocate TID\n");
                        }
                        arg3 = 0xfffffffa;
                        goto code_r0x08004da8;
                    }
                }
                else if (iVar8 < 9) {
                    uVar19 = *(puStack_e8 + 2);
                    if (0x27 < uVar19) goto code_r0x08004e14;
                    *(&uStack_90 + uVar19) = *(&uStack_90 + uVar19) | 0x20;
                    goto code_r0x080049a4;
                }
                sym.__slimbus_dbg(puStack_e8,0x8000cda,0x8001ceb,0xfffffffb);
                if (*(pcVar22 + 0x11bc) < 1) {
                    pcVar17 = pcVar22;
                    if (*(pcVar22 + 0x11bc) != 0) {
                        arg3 = 0xfffffffb;
                        goto code_r0x08004da8;
                    }
                }
                else {
                    pcVar17 = "qcom_slim_ngd_enable_stream";
                    _printk(0x8001f39,"qcom_slim_ngd_enable_stream",0xfffffffb);
                    ipc_log_string(*(pcVar22 + 0x11c8),"%s: error calculating coef %d\n","qcom_slim_ngd_enable_stream"
                                   ,0xfffffffb);
                    uVar2 = *(pcVar22 + 0x11bc);
                    pcVar22[0x11bc] = '\0';
                    pcVar22[0x11bd] = '\0';
                    pcVar22[0x11be] = '\0';
                    pcVar22[0x11bf] = '\0';
                    *(pcVar22 + 0x11b8) = uVar2;
                }
                uVar12 = *(pcVar22 + 0x11d0);
                pcVar15 = "%s: error calculating coef %d\n";
                arg3 = 0xfffffffb;
                pcVar22 = pcVar17;
                goto code_r0x08004da4;
            }
code_r0x08004a44:
            uVar2 = *(unaff_x27 + unaff_x26 * 0x24 + 0xc);
            *(puStack_e8 + 2) = uVar19 + '\x01';
            if (0x27 < uVar19) {
code_r0x08004e14:
    //WARNING: Does not return
                pcVar7 = SoftwareBreakpoint(0x5512,0x8004e18);
                (*pcVar7)();
            }
            iVar8 = *(arg1 + 0x24);
            unaff_x26 = unaff_x26 + 1;
            puVar20 = puStack_e8 + 2;
            *(&uStack_90 + uVar19) = uVar2;
            if (iVar8 <= unaff_x26) goto code_r0x08004a90;
            uVar19 = *puVar20;
        } while( true );
    }
    puVar20 = &uStack_d8 | 2;
code_r0x08004a90:
    uStack_f0._0_3_ = CONCAT12(0x21,uStack_f0);
    uStack_f0 = CONCAT71(uStack_f0._1_7_,*puVar20 + 4);
    uVar9 = sym.qcom_slim_ngd_xfer_msg_sync(pcVar22,&uStack_f0);
    if (uVar9 == 0) {
        uStack_f0._0_3_ = CONCAT12(0x24,uStack_f0);
        *(puStack_e8 + 2) = 2;
        uStack_90._0_2_ = CONCAT11(*(iVar27 + 0x3a4),uStack_90);
        uStack_f0 = CONCAT71(uStack_f0._1_7_,*(puStack_e8 + 2) + '\x04');
        uVar9 = slim_alloc_txn_tid(pcVar22,&uStack_f0);
        if (uVar9 == 0) {
            uStack_90 = CONCAT71(uStack_90._1_7_,uStack_f0._6_1_);
            uVar9 = sym.qcom_slim_ngd_xfer_msg_sync(pcVar22,&uStack_f0);
            arg3 = uVar9;
            uVar16 = extraout_x8;
            if (uVar9 != 0) {
                slim_free_txn_tid(pcVar22,&uStack_f0);
                sym.__slimbus_dbg(noname_0_02,0x8000b51,uStack_f0 >> 0x10 & 0xff,uStack_f0 >> 8 & 0xff);
                uVar9 = *(pcVar22 + 0x11bc);
                if (2 < uVar9) {
                    ipc_log_string(*(pcVar22 + 0x11c8),"TX RECONFIG timed out:MC:0x%x,mt:0x%x",uStack_f0._2_1_,
                                   uStack_f0._1_1_);
                    uVar9 = *(pcVar22 + 0x11bc);
                }
                uVar16 = uVar9;
                if (uVar9 == 0) {
                    ipc_log_string(*(pcVar22 + 0x11d0),"TX RECONFIG timed out:MC:0x%x,mt:0x%x",uStack_f0._2_1_,
                                   uStack_f0._1_1_);
                    uVar16 = extraout_x8_00;
                }
            }
            sym.__slimbus_dbg(uVar16,0x8001f5a,0x8001ceb,arg3);
            iVar8 = *(pcVar22 + 0x11bc);
            if (2 < iVar8) {
                ipc_log_string(*(pcVar22 + 0x11c8),"%s End ret : %d\n","qcom_slim_ngd_enable_stream",arg3);
                iVar8 = *(pcVar22 + 0x11bc);
            }
            if (iVar8 == 0) {
                uVar12 = *(pcVar22 + 0x11d0);
                pcVar15 = "%s End ret : %d\n";
code_r0x08004da4:
                ipc_log_string(uVar12,pcVar15,"qcom_slim_ngd_enable_stream",arg3);
            }
        }
        else {
            arg3 = uVar9;
            sym.__slimbus_dbg(noname_0_01,0x800190a,pcVar17,uVar16);
            if (*(pcVar22 + 0x11bc) < 1) {
                if (*(pcVar22 + 0x11bc) != 0) goto code_r0x08004da8;
            }
            else {
                _printk(0x80016b3);
                ipc_log_string(*(pcVar22 + 0x11c8),"Fail to allocate TID\n");
                uVar2 = *(pcVar22 + 0x11bc);
                pcVar22[0x11bc] = '\0';
                pcVar22[0x11bd] = '\0';
                pcVar22[0x11be] = '\0';
                pcVar22[0x11bf] = '\0';
                *(pcVar22 + 0x11b8) = uVar2;
            }
            ipc_log_string(*(pcVar22 + 0x11d0),"Fail to allocate TID\n");
        }
    }
    else {
        arg3 = uVar9;
        slim_free_txn_tid(pcVar22,&uStack_f0);
        sym.__slimbus_dbg(noname_0_00,0x8000cf9,uStack_f0 >> 0x10 & 0xff,uStack_f0 >> 8 & 0xff);
        iVar8 = *(pcVar22 + 0x11bc);
        uVar16 = uStack_f0;
        if (1 < iVar8) {
            _printk(0x80017b7,uStack_f0._2_1_,uStack_f0._1_1_);
            ipc_log_string(*(pcVar22 + 0x11c8),"TX ACT_CHAN timed out:MC:0x%x,mt:0x%x",uStack_f0._2_1_,
                           uStack_f0._1_1_);
            iVar8 = *(pcVar22 + 0x11bc);
            uVar16 = uStack_f0;
        }
        uStack_f0 = uVar16;
        if (iVar8 == 0) {
            uStack_f0._2_1_ = uVar16 >> 0x10;
            uVar6 = uStack_f0._2_1_;
            uStack_f0._1_1_ = uVar16 >> 8;
            uVar4 = uStack_f0._1_1_;
            ipc_log_string(*(pcVar22 + 0x11d0),"TX ACT_CHAN timed out:MC:0x%x,mt:0x%x",uVar6,uVar4);
        }
    }
code_r0x08004da8:
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_68) {
        return arg3;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_slim_ngd_disable_stream;
    pcStack_148 = sym.qcom_slim_ngd_disable_stream;
    iVar21 = sp_el0;
    iStack_158 = *(iVar21 + 0x5e0);
    pcVar17 = 0x1;
    iVar28 = *(iVar11 + 8);
    puStack_1b8 = NULL;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    puStack_1c0 = NULL;
    iVar21 = *(iVar28 + 0x398);
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_180 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    iVar26 = iVar21 + -0x3a0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_1a8 = 0;
    puStack_1d8 = NULL;
    uStack_1d0 = 0;
    uStack_1e0 = 0;
    puStack_150 = &stack0xffffffffffffffa0;
    iStack_140 = unaff_x28;
    iStack_138 = unaff_x27;
    iStack_130 = unaff_x26;
    puStack_128 = &uStack_90;
    iStack_120 = iVar27;
    pcStack_118 = pcVar25;
    pcStack_110 = unaff_x22;
    pcStack_108 = unaff_x21;
    pcStack_100 = arg3;
    pcStack_f8 = pcVar22;
    sym.__slimbus_dbg(iStack_158,0x8001b13,0x8001440,1);
    iVar8 = *(iVar21 + 0x11bc);
    if (2 < iVar8) {
        pcVar17 = 0x1;
        ipc_log_string(*(iVar21 + 0x11c8),"%s start %d\n","qcom_slim_ngd_disable_stream");
        iVar8 = *(iVar21 + 0x11bc);
    }
    if (iVar8 == 0) {
        pcVar17 = 0x1;
        ipc_log_string(*(iVar21 + 0x11d0),"%s start %d\n","qcom_slim_ngd_disable_stream");
    }
    uVar12 = uStack_1e0;
    puStack_1d8 = &uStack_1c8;
    uStack_1e0._0_4_ = uStack_1e0;
    uStack_1e0._0_2_ = CONCAT11(2,uVar12);
    uVar12 = uStack_1e0;
    uStack_1e0 = CONCAT17(0xff,uStack_1e0);
    puStack_1c0 = &uStack_1a8;
    uStack_1e0._0_4_ = uVar12;
    uStack_1e0._0_6_ = uStack_1e0;
    uStack_1c8._0_3_ = uStack_1c8;
    puStack_1b8 = &uStack_180;
    if (0 < *(iVar11 + 0x24)) {
        uVar16 = 0;
        unaff_x27 = 0xc;
        unaff_x28 = 1;
        unaff_x21 = "%s: wbuf[0] = 0x%x\n";
        unaff_x22 = "qcom_slim_ngd_disable_stream";
        do {
            unaff_x26 = *(iVar11 + 0x28);
            if (uVar16 == 0) {
                uVar4 = *(iVar28 + 0x3a4);
                *(puStack_1d8 + 2) = 1;
                pcVar17 = *(iVar28 + 0x3a4);
                uStack_180 = CONCAT71(uStack_180._1_7_,uVar4) & 0xffffffffffffff1f | 0x80;
                sym.__slimbus_dbg(puStack_1d8,0x8000a53,0x8001440,pcVar17);
                iVar8 = *(iVar21 + 0x11bc);
                if (3 < iVar8) {
                    pcVar17 = *(iVar28 + 0x3a4);
                    ipc_log_string(*(iVar21 + 0x11c8),"%s: wbuf[0] = 0x%x\n","qcom_slim_ngd_disable_stream");
                    iVar8 = *(iVar21 + 0x11bc);
                }
                if (iVar8 == 0) {
                    pcVar17 = *(iVar28 + 0x3a4);
                    ipc_log_string(*(iVar21 + 0x11d0),"%s: wbuf[0] = 0x%x\n","qcom_slim_ngd_disable_stream");
                }
                iVar8 = slim_alloc_txn_tid(iVar21,&uStack_1e0);
                if (iVar8 != 0) {
                    pcVar22 = 0xfffffffa;
                    sym.__slimbus_dbg(noname_0_03,0x8001aa1,0xfffffffa,pcVar17);
                    if (*(iVar21 + 0x11bc) < 1) {
                        if (*(iVar21 + 0x11bc) != 0) {
                            pcVar25 = 0xfffffffa;
                            goto code_r0x08005310;
                        }
                    }
                    else {
                        _printk(0x8001235,0xfffffffa);
                        ipc_log_string(*(iVar21 + 0x11c8),"Fail to allocate TID ret:%d\n",0xfffffffa);
                        uVar2 = *(iVar21 + 0x11bc);
                        *(iVar21 + 0x11bc) = 0;
                        *(iVar21 + 0x11b8) = uVar2;
                    }
                    uVar12 = *(iVar21 + 0x11d0);
                    pcVar25 = 0xfffffffa;
                    goto code_r0x0800530c;
                }
                uVar18 = *(puStack_1d8 + 2);
                *(puStack_1d8 + 2) = uVar18 + 1;
                if (0x27 < uVar18) goto code_r0x08005390;
                *(&uStack_180 + uVar18) = uStack_1e0._6_1_;
                uVar16 = *(puStack_1d8 + 2);
            }
            uVar2 = *(unaff_x26 + unaff_x27);
            *(puStack_1d8 + 2) = uVar16 + '\x01';
            if (0x27 < uVar16) {
code_r0x08005390:
    //WARNING: Does not return
                pcVar7 = SoftwareBreakpoint(0x5512,0x8005394);
                (*pcVar7)();
            }
            iVar8 = *(iVar11 + 0x24);
            puVar20 = puStack_1d8 + 2;
            *(&uStack_180 + uVar16) = uVar2;
            if (iVar8 <= unaff_x28) goto code_r0x08005044;
            uVar16 = *puVar20;
            unaff_x28 = unaff_x28 + 1;
            unaff_x27 = unaff_x27 + 0x24;
        } while( true );
    }
    puVar20 = &uStack_1c8 | 2;
code_r0x08005044:
    uStack_1e0._0_3_ = CONCAT12(0x23,uStack_1e0);
    uStack_1e0 = CONCAT71(uStack_1e0._1_7_,*puVar20 + 4);
    uVar9 = sym.qcom_slim_ngd_xfer_msg_sync(iVar21,&uStack_1e0);
    if (uVar9 == 0) {
        uStack_1e0._0_3_ = CONCAT12(0x24,uStack_1e0);
        *(puStack_1d8 + 2) = 2;
        uStack_180._0_2_ = CONCAT11(*(iVar28 + 0x3a4),uStack_180);
        uStack_1e0 = CONCAT71(uStack_1e0._1_7_,*(puStack_1d8 + 2) + '\x04');
        uVar9 = slim_alloc_txn_tid(iVar21,&uStack_1e0);
        if (uVar9 == 0) {
            uStack_180 = CONCAT71(uStack_180._1_7_,uStack_1e0._6_1_);
            uVar9 = sym.qcom_slim_ngd_xfer_msg_sync(iVar21,&uStack_1e0);
            pcVar25 = uVar9;
            uVar16 = extraout_x8_01;
            if (uVar9 != 0) {
                slim_free_txn_tid(iVar21,&uStack_1e0);
                sym.__slimbus_dbg(noname_0_06,0x8000b77,uStack_1e0 >> 0x10 & 0xff,uStack_1e0 >> 8 & 0xff);
                uVar9 = *(iVar21 + 0x11bc);
                uVar19 = uStack_1e0;
                if (1 < uVar9) {
                    _printk(0x80019f7,uStack_1e0._2_1_,uStack_1e0._1_1_,pcVar25);
                    ipc_log_string(*(iVar21 + 0x11c8),"TX RECONFIG timed out:MC:0x%x,mt:0x%x ret:%d\n",
                                   uStack_1e0._2_1_,uStack_1e0._1_1_,pcVar25);
                    uVar9 = *(iVar21 + 0x11bc);
                    uVar19 = uStack_1e0;
                }
                uVar16 = uVar9;
                uStack_1e0 = uVar19;
                if (uVar9 == 0) {
                    uStack_1e0._2_1_ = uVar19 >> 0x10;
                    uVar6 = uStack_1e0._2_1_;
                    uStack_1e0._1_1_ = uVar19 >> 8;
                    uVar4 = uStack_1e0._1_1_;
                    ipc_log_string(*(iVar21 + 0x11d0),"TX RECONFIG timed out:MC:0x%x,mt:0x%x ret:%d\n",uVar6,uVar4,
                                   pcVar25);
                    uVar16 = extraout_x8_02;
                }
            }
            pcVar22 = "qcom_slim_ngd_disable_stream";
            pcVar17 = pcVar25;
            sym.__slimbus_dbg(uVar16,0x8000995,0x8001440,pcVar25);
            iVar8 = *(iVar21 + 0x11bc);
            if (2 < iVar8) {
                pcVar22 = "qcom_slim_ngd_disable_stream";
                pcVar17 = pcVar25;
                ipc_log_string(*(iVar21 + 0x11c8),"%s End ret %d\n");
                iVar8 = *(iVar21 + 0x11bc);
            }
            if (iVar8 == 0) {
                pcVar22 = "qcom_slim_ngd_disable_stream";
                pcVar17 = pcVar25;
                ipc_log_string(*(iVar21 + 0x11d0),"%s End ret %d\n");
            }
        }
        else {
            pcVar25 = uVar9;
            pcVar22 = pcVar25;
            sym.__slimbus_dbg(noname_0_05,0x8001aa1,pcVar25,pcVar17);
            if (*(iVar21 + 0x11bc) < 1) {
                if (*(iVar21 + 0x11bc) != 0) goto code_r0x08005310;
            }
            else {
                _printk(0x8001235,pcVar25);
                ipc_log_string(*(iVar21 + 0x11c8),"Fail to allocate TID ret:%d\n",pcVar25);
                uVar2 = *(iVar21 + 0x11bc);
                *(iVar21 + 0x11bc) = 0;
                *(iVar21 + 0x11b8) = uVar2;
            }
            uVar12 = *(iVar21 + 0x11d0);
code_r0x0800530c:
            pcVar22 = pcVar25;
            ipc_log_string(uVar12,"Fail to allocate TID ret:%d\n");
        }
    }
    else {
        pcVar25 = uVar9;
        slim_free_txn_tid(iVar21,&uStack_1e0);
        pcVar22 = uStack_1e0 >> 0x10 & 0xff;
        pcVar17 = uStack_1e0 >> 8 & 0xff;
        sym.__slimbus_dbg(noname_0_04,0x800152c,pcVar22,pcVar17);
        iVar8 = *(iVar21 + 0x11bc);
        if (1 < iVar8) {
            _printk(0x8001e29,uStack_1e0._2_1_,uStack_1e0._1_1_,pcVar25);
            pcVar22 = uStack_1e0 >> 0x10 & 0xff;
            pcVar17 = uStack_1e0 >> 8 & 0xff;
            ipc_log_string(*(iVar21 + 0x11c8),"TX CHAN_CTRL timed out:MC:0x%x,mt:0x%x ret:%d\n",pcVar22,pcVar17,
                           pcVar25);
            iVar8 = *(iVar21 + 0x11bc);
        }
        if (iVar8 == 0) {
            pcVar22 = uStack_1e0 >> 0x10 & 0xff;
            pcVar17 = uStack_1e0 >> 8 & 0xff;
            ipc_log_string(*(iVar21 + 0x11d0),"TX CHAN_CTRL timed out:MC:0x%x,mt:0x%x ret:%d\n",pcVar22,pcVar17,
                           pcVar25);
        }
    }
code_r0x08005310:
    iVar27 = sp_el0;
    if (*(iVar27 + 0x5e0) == iStack_158) {
        return pcVar25;
    }
    auVar29 = __stack_chk_fail();
    puVar20 = auVar29._8_8_;
    *extraout_x18_00 = sym.qcom_slim_ngd_xfer_msg;
    pcStack_238 = sym.qcom_slim_ngd_xfer_msg;
    iVar27 = sp_el0;
    iStack_248 = *(iVar27 + 0x5e0);
    pppppppuStack_2a8 = &pppppppuStack_2a8;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uVar9 = puVar20[7];
    uStack_258 = 0;
    uStack_250 = 0;
    iVar27 = *(*auVar29._0_8_ + 0x98);
    uStack_268 = 0;
    uStack_260 = 0;
    uStack_270 = 0;
    uStack_280 = 0;
    uStack_278 = 0;
    *(iVar27 + 0x1400) = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    uStack_298 = 0;
    pppppppuStack_2a0 = pppppppuStack_2a8;
    ppuStack_240 = &puStack_150;
    iStack_230 = unaff_x28;
    iStack_228 = unaff_x27;
    iStack_220 = unaff_x26;
    puStack_218 = &uStack_180;
    iStack_210 = iVar28;
    iStack_208 = iVar26;
    pcStack_200 = unaff_x22;
    pcStack_1f8 = unaff_x21;
    pcStack_1f0 = pcVar25;
    iStack_1e8 = iVar21;
    if ((puVar20[1] == 0) && ((puVar20[2] & 0xe0) == 0x40)) {
code_r0x08005424:
        uVar10 = 0;
    }
    else if (puVar20[3] == 1) {
        uVar10 = 0xffffffa3;
    }
    else {
        uVar18 = *(*(puVar20 + 8) + 2);
        if ((uVar18 < 0x29) && (uVar18 = *puVar20, uVar18 < 0x29)) {
            iVar21 = iVar27 + 0x1448;
            uVar16 = mutex_is_locked(iVar21);
            if (((uVar16 & 1) != 0) && (*(iVar27 + 0x1500) == 4)) {
                sym.__slimbus_dbg(4,0x8001d07,pcVar22,pcVar17);
                if (*(iVar27 + 0x155c) < 1) {
                    if (*(iVar27 + 0x155c) != 0) {
                        uVar10 = 0xfffffff5;
                        goto code_r0x08005840;
                    }
                }
                else {
                    _printk(0x800155b);
                    ipc_log_string(*(iVar27 + 0x1568),"ngd going down due SSR/PDR, try again!\n");
                    uVar2 = *(iVar27 + 0x155c);
                    *(iVar27 + 0x155c) = 0;
                    *(iVar27 + 0x1558) = uVar2;
                }
                ipc_log_string(*(iVar27 + 0x1570),"ngd going down due SSR/PDR, try again!\n");
                uVar10 = 0xfffffff5;
                goto code_r0x08005840;
            }
            mutex_lock(iVar21);
            uVar18 = puVar20[2];
            if (((uVar18 == 1) && (puVar20[1] == 6)) || (*(iVar27 + 0x1500) != 3)) {
code_r0x0800560c:
                iVar11 = iVar27 + 0x1440;
                uVar12 = _raw_spin_lock_irqsave(iVar11);
                uVar10 = *(iVar27 + 0x1528);
                if (((uVar10 + 1) % 0x1e == *(iVar27 + 0x152c)) || (iVar26 = *(iVar27 + 0x1520), iVar26 == 0)) {
                    _raw_spin_unlock_irqrestore(iVar11,uVar12);
                    uVar12 = extraout_x8_05;
code_r0x080057c0:
                    sym.__slimbus_dbg(uVar12,0x8000a67,pcVar22,pcVar17);
                    if (*(iVar27 + 0x155c) < 1) {
                        if (*(iVar27 + 0x155c) == 0) goto code_r0x080057e4;
                    }
                    else {
                        _printk(0x8001920);
                        ipc_log_string(*(iVar27 + 0x1568),"Message buffer unavailable\n");
                        uVar2 = *(iVar27 + 0x155c);
                        *(iVar27 + 0x155c) = 0;
                        *(iVar27 + 0x1558) = uVar2;
code_r0x080057e4:
                        ipc_log_string(*(iVar27 + 0x1570),"Message buffer unavailable\n");
                    }
                    mutex_unlock(iVar21);
                    uVar10 = 0xfffffff4;
                    goto code_r0x08005840;
                }
                if (0x1e < uVar10) goto code_r0x08005d3c;
                iVar28 = iVar27 + uVar10 * 0x30;
                *(iVar28 + 0xda8) = &uStack_2b8;
                iVar8 = *(iVar27 + 0x1528);
                *(iVar28 + 0xdc0) = iVar26 + uVar10 * 0x28;
                *(iVar27 + 0x1528) = (iVar8 + 1) % 0x1e;
                _raw_spin_unlock_irqrestore(iVar11,uVar12);
                arg2 = *(iVar28 + 0xdc0);
                uVar12 = extraout_x8_04;
                if (arg2 == NULL) goto code_r0x080057c0;
                mutex_unlock(iVar21);
                uVar12 = uStack_270;
                if (puVar20[1] == 0) {
                    bVar5 = false;
                    if ((puVar20[2] < 0x15) &&
                       (uVar10 = puVar20[2], bVar5 = false, (1 << (uVar10 & 0x1f) & 0x130000U) != 0)) {
                        puVar20[1] = 2;
                        if (uVar10 == 0x10) {
                            uVar18 = 0x2c;
code_r0x08005b20:
                            puVar20[2] = uVar18;
                            uVar16 = 3;
                            uStack_270._0_2_ = CONCAT11(**(*(puVar20 + 8) + 0x10),puVar20[7]);
                            uStack_270._3_5_ = SUB85(uVar12,3);
                            uStack_270._0_3_ = CONCAT12((*(*(puVar20 + 8) + 0x10))[1],uStack_270);
                        }
                        else {
                            if (uVar10 != 0x14) {
                                if (uVar10 != 0x11) goto code_r0x08005480;
                                uVar18 = 0x2d;
                                goto code_r0x08005b20;
                            }
                            uVar16 = 2;
                            puVar20[2] = 0x2e;
                            uStack_270._0_2_ = CONCAT11(**(*(puVar20 + 8) + 0x10),puVar20[7]);
                        }
                        *(puVar20 + 0x10) = iVar27 + 0x1400;
                        uVar10 = slim_alloc_txn_tid(auVar29._0_8_,puVar20);
                        if (uVar10 != 0) {
                            sym.__slimbus_dbg(noname_0_10,0x8001b20,pcVar22,pcVar17);
                            if (*(iVar27 + 0x155c) < 1) {
                                if (*(iVar27 + 0x155c) != 0) goto code_r0x08005840;
                            }
                            else {
                                _printk(0x8001be0);
                                ipc_log_string(*(iVar27 + 0x1568),"Unable to allocate TID\n");
                                uVar2 = *(iVar27 + 0x155c);
                                *(iVar27 + 0x155c) = 0;
                                *(iVar27 + 0x1558) = uVar2;
                            }
                            ipc_log_string(*(iVar27 + 0x1570),"Unable to allocate TID\n");
                            goto code_r0x08005840;
                        }
                        iVar11 = *(puVar20 + 8);
                        bVar5 = true;
                        uVar9 = 0xff;
                        *(&uStack_270 | uVar16) = puVar20[6];
                        *(iVar11 + 2) = uVar16 + '\x01';
                        *(*(puVar20 + 8) + 0x10) = &uStack_270;
                        *(*(puVar20 + 8) + 8) = &uStack_298;
                        *puVar20 = *(*(puVar20 + 8) + 2) + 4;
                    }
                }
                else {
                    bVar5 = false;
                }
                *puVar20 = *puVar20 - 1;
                *arg2 = 0;
                uVar18 = puVar20[3];
                uVar9 = *puVar20 | puVar20[1] << 5 | puVar20[2] << 8 | uVar9 << 0x10;
                if (uVar18 != 0) {
                    uVar9 = uVar9 | 0x8000;
                }
                *arg2 = uVar9;
                iVar11 = 2;
                if (uVar18 == 0) {
                    iVar11 = 3;
                }
                puVar14 = arg2 + iVar11;
                if (puVar20[1] == 0) {
                    uVar18 = puVar20[2];
                    if ((uVar18 - 0x60 < 2) || (puVar13 = puVar14, uVar18 - 0x20 < 2)) {
                        puVar13 = puVar14 + 1;
                        *puVar14 = puVar20[6];
                        puVar14 = puVar13;
                        if (puVar20[1] != 0) goto code_r0x08005794;
                        uVar18 = puVar20[2];
                    }
                    if ((uVar18 - 0x20 < 10) || (puVar14 = puVar13, uVar18 - 0x60 < 9)) {
                        puVar14 = puVar13 + 2;
                        *puVar13 = puVar20[4];
                        puVar13[1] = puVar20[5];
                    }
                }
code_r0x08005794:
                iVar11 = *(puVar20 + 8);
                if ((iVar11 != 0) && (*(iVar11 + 0x10) != 0)) {
                    if (*(iVar27 + 0x1554) == '\0') {
                        memcpy(puVar14,*(iVar11 + 0x10),*(iVar11 + 2));
                    }
                    else {
                        __memcpy_toio();
                    }
                }
                mutex_lock(iVar21);
                uVar10 = sym.qcom_slim_ngd_tx_msg_post(iVar27,arg2,*puVar20);
                if (uVar10 == 0) {
                    iVar8 = wait_for_completion_timeout(&uStack_2b8,500);
                    if (iVar8 == 0) {
                        sym.__slimbus_dbg(noname_0_08,0x800113c,puVar20[2],puVar20[1]);
                        iVar8 = *(iVar27 + 0x155c);
                        if (1 < iVar8) {
                            _printk(0x80008c6,puVar20[2],puVar20[1]);
                            ipc_log_string(*(iVar27 + 0x1568),"TX timed out:MC:0x%x,mt:0x%x",puVar20[2],puVar20[1]);
                            iVar8 = *(iVar27 + 0x155c);
                        }
                        if (iVar8 == 0) {
                            ipc_log_string(*(iVar27 + 0x1570),"TX timed out:MC:0x%x,mt:0x%x",puVar20[2],puVar20[1]);
                        }
                        mutex_unlock(iVar21);
                        uVar10 = 0xffffff92;
                        *(iVar27 + 0x157d) = 1;
                    }
                    else {
                        if ((!bVar5) || (iVar8 = wait_for_completion_timeout(iVar27 + 0x1400,0xfa), iVar8 != 0)) {
                            mutex_unlock(iVar21);
                            goto code_r0x08005424;
                        }
                        sym.__slimbus_dbg(noname_0_09,0x8001d70,puVar20[2],puVar20[1]);
                        iVar8 = *(iVar27 + 0x155c);
                        if (1 < iVar8) {
                            _printk(0x8001585,puVar20[2],puVar20[1]);
                            ipc_log_string(*(iVar27 + 0x1568),"TX usr_msg timed out:MC:0x%x,mt:0x%x",puVar20[2],
                                           puVar20[1]);
                            iVar8 = *(iVar27 + 0x155c);
                        }
                        if (iVar8 == 0) {
                            ipc_log_string(*(iVar27 + 0x1570),"TX usr_msg timed out:MC:0x%x,mt:0x%x",puVar20[2],
                                           puVar20[1]);
                        }
                        mutex_unlock(iVar21);
                        uVar10 = 0xffffff92;
                    }
                    goto code_r0x08005840;
                }
            }
            else {
                pcVar22 = uVar18;
                sym.__slimbus_dbg(3,0x8001317,pcVar22,puVar20[1]);
                uVar10 = *(iVar27 + 0x155c);
                uVar23 = uVar18;
                uVar24 = uVar18;
                if (uVar10 < 3) {
                    if (uVar10 == 0) goto code_r0x08005550;
code_r0x080055b0:
                    uVar16 = uVar10;
                    pcVar17 = puVar20[1];
                    if (puVar20[1] == 0) goto code_r0x08005570;
code_r0x080055b8:
                    if (pcVar17 == 2) {
                        if (((0x2e < uVar24) || (uVar16 = 1L << (uVar18 & 0x3f), (uVar16 & 0x401800000000) == 0)) &&
                           (uVar16 = uVar23 - 0x20, 0xd < uVar23 - 0x20)) {
                            pcVar17 = 0x2;
                            goto code_r0x080055ec;
                        }
                    }
                    else {
code_r0x080055ec:
                        if (*(iVar27 + 0x1561) == '\0') {
                            sym.__slimbus_dbg(0,0x800136e,uVar24,pcVar17);
                            uVar9 = *(iVar27 + 0x155c);
                            if (2 < uVar9) {
                                ipc_log_string(*(iVar27 + 0x1568),"Not waiting for ADSP up MC:0x%x,mt:0x%x\n",uVar24,
                                               puVar20[1]);
                                uVar9 = *(iVar27 + 0x155c);
                            }
                            uVar16 = uVar9;
                            if (uVar9 == 0) {
                                pcVar17 = "Not waiting for ADSP up MC:0x%x,mt:0x%x\n";
code_r0x08005950:
                                ipc_log_string(*(iVar27 + 0x1570),pcVar17,uVar24,puVar20[1]);
                                uVar16 = extraout_x8_06;
                            }
                        }
                        else {
                            *(iVar27 + 0x1358) = 0;
                            iVar8 = wait_for_completion_timeout(iVar27 + 0x1358,0xfa);
                            if (iVar8 != 0) goto code_r0x0800560c;
                            sym.__slimbus_dbg(noname_0_07,0x8000fea,uVar23,puVar20[1]);
                            uVar9 = *(iVar27 + 0x155c);
                            if (1 < uVar9) {
                                _printk(0x8000a83,uVar23,puVar20[1]);
                                ipc_log_string(*(iVar27 + 0x1568),"ADSP slimbus not up timeout MC:0x%x,mt:0x%x\n",
                                               uVar24,puVar20[1]);
                                uVar9 = *(iVar27 + 0x155c);
                            }
                            uVar16 = uVar9;
                            if (uVar9 == 0) {
                                pcVar17 = "ADSP slimbus not up timeout MC:0x%x,mt:0x%x\n";
                                goto code_r0x08005950;
                            }
                        }
                    }
                    uVar10 = 0xffffff87;
                }
                else {
                    pcVar22 = uVar23;
                    ipc_log_string(*(iVar27 + 0x1568),"ADSP slimbus not up yet MC:0x%x,mt:0x%x\n",pcVar22,puVar20[1])
                    ;
                    uVar10 = *(iVar27 + 0x155c);
                    if (uVar10 != 0) goto code_r0x080055b0;
code_r0x08005550:
                    pcVar22 = uVar23;
                    ipc_log_string(*(iVar27 + 0x1570),"ADSP slimbus not up yet MC:0x%x,mt:0x%x\n",pcVar22,puVar20[1])
                    ;
                    pcVar17 = puVar20[1];
                    uVar16 = extraout_x8_03;
                    if (puVar20[1] != 0) goto code_r0x080055b8;
code_r0x08005570:
                    uVar10 = 0xffffffea;
                    if (((uVar23 != 0x14) && (uVar24 != 0x24)) && (uVar24 != 0x58)) {
                        uVar10 = 0xffffff87;
                        uVar16 = uVar24 - 0x10;
                        if (8 < uVar24 - 0x10) {
                            if ((uVar24 & 0xe0) != 0x40) goto code_r0x080055ec;
                            uVar16 = 0x40;
                        }
                    }
                }
                sym.__slimbus_dbg(uVar16,0x80009a4,puVar20[2],puVar20[1]);
                iVar8 = *(iVar27 + 0x155c);
                if (1 < iVar8) {
                    _printk(0x8001340,puVar20[2],puVar20[1],uVar10);
                    ipc_log_string(*(iVar27 + 0x1568),"ADSP slimbus not up MC:0x%x,mt:0x%x ret:%d\n",puVar20[2],
                                   puVar20[1],uVar10);
                    iVar8 = *(iVar27 + 0x155c);
                }
                if (iVar8 == 0) {
                    ipc_log_string(*(iVar27 + 0x1570),"ADSP slimbus not up MC:0x%x,mt:0x%x ret:%d\n",puVar20[2],
                                   puVar20[1],uVar10);
                }
            }
            mutex_unlock(iVar21);
        }
        else {
            sym.__slimbus_dbg(uVar18,0x800145d,pcVar22,pcVar17);
            if (*(iVar27 + 0x155c) < 1) {
                if (*(iVar27 + 0x155c) != 0) {
code_r0x08005480:
                    uVar10 = 0xffffffea;
                    goto code_r0x08005840;
                }
            }
            else {
                _printk(0x8001d58);
                ipc_log_string(*(iVar27 + 0x1568),"msg exceeds HW limit\n");
                uVar2 = *(iVar27 + 0x155c);
                *(iVar27 + 0x155c) = 0;
                *(iVar27 + 0x1558) = uVar2;
            }
            ipc_log_string(*(iVar27 + 0x1570),"msg exceeds HW limit\n");
            uVar10 = 0xffffffea;
        }
    }
code_r0x08005840:
    iVar27 = sp_el0;
    if (*(iVar27 + 0x5e0) == iStack_248) {
        return uVar10;
    }
    __stack_chk_fail();
code_r0x08005d3c:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x5512,0x8005d40);
    (*pcVar7)();
}


// ===== sym.qcom_slim_ngd_disable_stream @ 0x08004e1c (size 1404) =====

//WARNING: Type propagation algorithm not settling

char * sym.qcom_slim_ngd_disable_stream(int64_t arg1)

{
    uint uVar1;
    uchar uVar2;
    bool bVar3;
    uint64_t uVar4;
    uchar uVar5;
    code *pcVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    ulong uVar10;
    uint8_t *puVar11;
    uint8_t *puVar12;
    char *arg2;
    char *pcVar13;
    uint8_t uVar14;
    ulong noname_0;
    ulong noname_0_00;
    ulong noname_0_01;
    uint64_t extraout_x8;
    ulong noname_0_02;
    uint64_t extraout_x8_00;
    uint64_t extraout_x8_01;
    ulong noname_0_03;
    ulong extraout_x8_02;
    ulong extraout_x8_03;
    uint64_t extraout_x8_04;
    ulong noname_0_04;
    ulong noname_0_05;
    ulong noname_0_06;
    uint64_t uVar15;
    uint8_t *puVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar17;
    int64_t iVar18;
    char *arg3;
    char *unaff_x21;
    char *unaff_x22;
    uint32_t uVar19;
    int64_t iVar21;
    int64_t iVar22;
    int64_t iVar23;
    uint32_t *arg2_00;
    int64_t unaff_x26;
    int64_t unaff_x27;
    int64_t unaff_x28;
    ulong unaff_x30;
    uchar auVar24 [16];
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong *******pppppppuStack_1b8;
    ulong *******pppppppuStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    int64_t iStack_158;
    uchar *puStack_150;
    code *pcStack_148;
    int64_t iStack_140;
    int64_t iStack_138;
    int64_t iStack_130;
    ulong *puStack_128;
    int64_t iStack_120;
    int64_t iStack_118;
    char *pcStack_110;
    char *pcStack_108;
    char *pcStack_100;
    int64_t iStack_f8;
    ulong uStack_f0;
    ulong *puStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong *puStack_d0;
    ulong *puStack_c8;
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
    ulong uStack_70;
    int64_t iStack_68;
    uint32_t uVar20;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_68 = *(iVar17 + 0x5e0);
    pcVar13 = 0x1;
    iVar22 = *(arg1 + 8);
    puStack_c8 = NULL;
    uStack_c0 = 0;
    uStack_d8 = 0;
    puStack_d0 = NULL;
    iVar17 = *(iVar22 + 0x398);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    iVar21 = iVar17 + -0x3a0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    puStack_e8 = NULL;
    uStack_e0 = 0;
    uStack_f0 = 0;
    sym.__slimbus_dbg(iStack_68,0x8001b13,0x8001440,1);
    iVar7 = *(iVar17 + 0x11bc);
    if (2 < iVar7) {
        pcVar13 = 0x1;
        ipc_log_string(*(iVar17 + 0x11c8),"%s start %d\n","qcom_slim_ngd_disable_stream");
        iVar7 = *(iVar17 + 0x11bc);
    }
    if (iVar7 == 0) {
        pcVar13 = 0x1;
        ipc_log_string(*(iVar17 + 0x11d0),"%s start %d\n","qcom_slim_ngd_disable_stream");
    }
    uVar10 = uStack_f0;
    puStack_e8 = &uStack_d8;
    uStack_f0._0_4_ = uStack_f0;
    uStack_f0._0_2_ = CONCAT11(2,uVar10);
    uVar10 = uStack_f0;
    uStack_f0 = CONCAT17(0xff,uStack_f0);
    puStack_d0 = &uStack_b8;
    uStack_f0._0_4_ = uVar10;
    uStack_f0._0_6_ = uStack_f0;
    uStack_d8._0_3_ = uStack_d8;
    puStack_c8 = &uStack_90;
    if (0 < *(arg1 + 0x24)) {
        uVar15 = 0;
        unaff_x27 = 0xc;
        unaff_x28 = 1;
        unaff_x21 = "%s: wbuf[0] = 0x%x\n";
        unaff_x22 = "qcom_slim_ngd_disable_stream";
        do {
            unaff_x26 = *(arg1 + 0x28);
            if (uVar15 == 0) {
                uVar2 = *(iVar22 + 0x3a4);
                *(puStack_e8 + 2) = 1;
                pcVar13 = *(iVar22 + 0x3a4);
                uStack_90 = CONCAT71(uStack_90._1_7_,uVar2) & 0xffffffffffffff1f | 0x80;
                sym.__slimbus_dbg(puStack_e8,0x8000a53,0x8001440,pcVar13);
                iVar7 = *(iVar17 + 0x11bc);
                if (3 < iVar7) {
                    pcVar13 = *(iVar22 + 0x3a4);
                    ipc_log_string(*(iVar17 + 0x11c8),"%s: wbuf[0] = 0x%x\n","qcom_slim_ngd_disable_stream");
                    iVar7 = *(iVar17 + 0x11bc);
                }
                if (iVar7 == 0) {
                    pcVar13 = *(iVar22 + 0x3a4);
                    ipc_log_string(*(iVar17 + 0x11d0),"%s: wbuf[0] = 0x%x\n","qcom_slim_ngd_disable_stream");
                }
                iVar7 = slim_alloc_txn_tid(iVar17,&uStack_f0);
                if (iVar7 != 0) {
                    arg2 = 0xfffffffa;
                    sym.__slimbus_dbg(noname_0,0x8001aa1,0xfffffffa,pcVar13);
                    if (*(iVar17 + 0x11bc) < 1) {
                        if (*(iVar17 + 0x11bc) != 0) {
                            arg3 = 0xfffffffa;
                            goto code_r0x08005310;
                        }
                    }
                    else {
                        _printk(0x8001235,0xfffffffa);
                        ipc_log_string(*(iVar17 + 0x11c8),"Fail to allocate TID ret:%d\n",0xfffffffa);
                        uVar1 = *(iVar17 + 0x11bc);
                        *(iVar17 + 0x11bc) = 0;
                        *(iVar17 + 0x11b8) = uVar1;
                    }
                    uVar10 = *(iVar17 + 0x11d0);
                    arg3 = 0xfffffffa;
                    goto code_r0x0800530c;
                }
                uVar14 = *(puStack_e8 + 2);
                *(puStack_e8 + 2) = uVar14 + 1;
                if (0x27 < uVar14) goto code_r0x08005390;
                *(&uStack_90 + uVar14) = uStack_f0._6_1_;
                uVar15 = *(puStack_e8 + 2);
            }
            uVar1 = *(unaff_x26 + unaff_x27);
            *(puStack_e8 + 2) = uVar15 + '\x01';
            if (0x27 < uVar15) {
code_r0x08005390:
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x5512,0x8005394);
                (*pcVar6)();
            }
            iVar7 = *(arg1 + 0x24);
            puVar16 = puStack_e8 + 2;
            *(&uStack_90 + uVar15) = uVar1;
            if (iVar7 <= unaff_x28) goto code_r0x08005044;
            uVar15 = *puVar16;
            unaff_x28 = unaff_x28 + 1;
            unaff_x27 = unaff_x27 + 0x24;
        } while( true );
    }
    puVar16 = &uStack_d8 | 2;
code_r0x08005044:
    uStack_f0._0_3_ = CONCAT12(0x23,uStack_f0);
    uStack_f0 = CONCAT71(uStack_f0._1_7_,*puVar16 + 4);
    uVar8 = sym.qcom_slim_ngd_xfer_msg_sync(iVar17,&uStack_f0);
    if (uVar8 == 0) {
        uStack_f0._0_3_ = CONCAT12(0x24,uStack_f0);
        *(puStack_e8 + 2) = 2;
        uStack_90._0_2_ = CONCAT11(*(iVar22 + 0x3a4),uStack_90);
        uStack_f0 = CONCAT71(uStack_f0._1_7_,*(puStack_e8 + 2) + '\x04');
        uVar8 = slim_alloc_txn_tid(iVar17,&uStack_f0);
        if (uVar8 == 0) {
            uStack_90 = CONCAT71(uStack_90._1_7_,uStack_f0._6_1_);
            uVar8 = sym.qcom_slim_ngd_xfer_msg_sync(iVar17,&uStack_f0);
            arg3 = uVar8;
            uVar15 = extraout_x8;
            if (uVar8 != 0) {
                slim_free_txn_tid(iVar17,&uStack_f0);
                sym.__slimbus_dbg(noname_0_02,0x8000b77,uStack_f0 >> 0x10 & 0xff,uStack_f0 >> 8 & 0xff);
                uVar8 = *(iVar17 + 0x11bc);
                uVar4 = uStack_f0;
                if (1 < uVar8) {
                    _printk(0x80019f7,uStack_f0._2_1_,uStack_f0._1_1_,arg3);
                    ipc_log_string(*(iVar17 + 0x11c8),"TX RECONFIG timed out:MC:0x%x,mt:0x%x ret:%d\n",uStack_f0._2_1_
                                   ,uStack_f0._1_1_,arg3);
                    uVar8 = *(iVar17 + 0x11bc);
                    uVar4 = uStack_f0;
                }
                uVar15 = uVar8;
                uStack_f0 = uVar4;
                if (uVar8 == 0) {
                    uStack_f0._2_1_ = uVar4 >> 0x10;
                    uVar5 = uStack_f0._2_1_;
                    uStack_f0._1_1_ = uVar4 >> 8;
                    uVar2 = uStack_f0._1_1_;
                    ipc_log_string(*(iVar17 + 0x11d0),"TX RECONFIG timed out:MC:0x%x,mt:0x%x ret:%d\n",uVar5,uVar2,
                                   arg3);
                    uVar15 = extraout_x8_00;
                }
            }
            arg2 = "qcom_slim_ngd_disable_stream";
            pcVar13 = arg3;
            sym.__slimbus_dbg(uVar15,0x8000995,0x8001440,arg3);
            iVar7 = *(iVar17 + 0x11bc);
            if (2 < iVar7) {
                arg2 = "qcom_slim_ngd_disable_stream";
                pcVar13 = arg3;
                ipc_log_string(*(iVar17 + 0x11c8),"%s End ret %d\n");
                iVar7 = *(iVar17 + 0x11bc);
            }
            if (iVar7 == 0) {
                arg2 = "qcom_slim_ngd_disable_stream";
                pcVar13 = arg3;
                ipc_log_string(*(iVar17 + 0x11d0),"%s End ret %d\n");
            }
        }
        else {
            arg3 = uVar8;
            arg2 = arg3;
            sym.__slimbus_dbg(noname_0_01,0x8001aa1,arg3,pcVar13);
            if (*(iVar17 + 0x11bc) < 1) {
                if (*(iVar17 + 0x11bc) != 0) goto code_r0x08005310;
            }
            else {
                _printk(0x8001235,arg3);
                ipc_log_string(*(iVar17 + 0x11c8),"Fail to allocate TID ret:%d\n",arg3);
                uVar1 = *(iVar17 + 0x11bc);
                *(iVar17 + 0x11bc) = 0;
                *(iVar17 + 0x11b8) = uVar1;
            }
            uVar10 = *(iVar17 + 0x11d0);
code_r0x0800530c:
            arg2 = arg3;
            ipc_log_string(uVar10,"Fail to allocate TID ret:%d\n");
        }
    }
    else {
        arg3 = uVar8;
        slim_free_txn_tid(iVar17,&uStack_f0);
        arg2 = uStack_f0 >> 0x10 & 0xff;
        pcVar13 = uStack_f0 >> 8 & 0xff;
        sym.__slimbus_dbg(noname_0_00,0x800152c,arg2,pcVar13);
        iVar7 = *(iVar17 + 0x11bc);
        if (1 < iVar7) {
            _printk(0x8001e29,uStack_f0._2_1_,uStack_f0._1_1_,arg3);
            arg2 = uStack_f0 >> 0x10 & 0xff;
            pcVar13 = uStack_f0 >> 8 & 0xff;
            ipc_log_string(*(iVar17 + 0x11c8),"TX CHAN_CTRL timed out:MC:0x%x,mt:0x%x ret:%d\n",arg2,pcVar13,arg3);
            iVar7 = *(iVar17 + 0x11bc);
        }
        if (iVar7 == 0) {
            arg2 = uStack_f0 >> 0x10 & 0xff;
            pcVar13 = uStack_f0 >> 8 & 0xff;
            ipc_log_string(*(iVar17 + 0x11d0),"TX CHAN_CTRL timed out:MC:0x%x,mt:0x%x ret:%d\n",arg2,pcVar13,arg3);
        }
    }
code_r0x08005310:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_68) {
        return arg3;
    }
    auVar24 = __stack_chk_fail();
    puVar16 = auVar24._8_8_;
    *extraout_x18 = sym.qcom_slim_ngd_xfer_msg;
    pcStack_148 = sym.qcom_slim_ngd_xfer_msg;
    iVar18 = sp_el0;
    iStack_158 = *(iVar18 + 0x5e0);
    pppppppuStack_1b8 = &pppppppuStack_1b8;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uVar8 = puVar16[7];
    uStack_168 = 0;
    uStack_160 = 0;
    iVar18 = *(*auVar24._0_8_ + 0x98);
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_180 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    *(iVar18 + 0x1400) = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_1a8 = 0;
    pppppppuStack_1b0 = pppppppuStack_1b8;
    puStack_150 = &stack0xffffffffffffffa0;
    iStack_140 = unaff_x28;
    iStack_138 = unaff_x27;
    iStack_130 = unaff_x26;
    puStack_128 = &uStack_90;
    iStack_120 = iVar22;
    iStack_118 = iVar21;
    pcStack_110 = unaff_x22;
    pcStack_108 = unaff_x21;
    pcStack_100 = arg3;
    iStack_f8 = iVar17;
    if ((puVar16[1] == 0) && ((puVar16[2] & 0xe0) == 0x40)) {
code_r0x08005424:
        uVar9 = 0;
    }
    else if (puVar16[3] == 1) {
        uVar9 = 0xffffffa3;
    }
    else {
        uVar14 = *(*(puVar16 + 8) + 2);
        if ((uVar14 < 0x29) && (uVar14 = *puVar16, uVar14 < 0x29)) {
            iVar17 = iVar18 + 0x1448;
            uVar15 = mutex_is_locked(iVar17);
            if (((uVar15 & 1) != 0) && (*(iVar18 + 0x1500) == 4)) {
                sym.__slimbus_dbg(4,0x8001d07,arg2,pcVar13);
                if (*(iVar18 + 0x155c) < 1) {
                    if (*(iVar18 + 0x155c) != 0) {
                        uVar9 = 0xfffffff5;
                        goto code_r0x08005840;
                    }
                }
                else {
                    _printk(0x800155b);
                    ipc_log_string(*(iVar18 + 0x1568),"ngd going down due SSR/PDR, try again!\n");
                    uVar1 = *(iVar18 + 0x155c);
                    *(iVar18 + 0x155c) = 0;
                    *(iVar18 + 0x1558) = uVar1;
                }
                ipc_log_string(*(iVar18 + 0x1570),"ngd going down due SSR/PDR, try again!\n");
                uVar9 = 0xfffffff5;
                goto code_r0x08005840;
            }
            mutex_lock(iVar17);
            uVar14 = puVar16[2];
            if (((uVar14 == 1) && (puVar16[1] == 6)) || (*(iVar18 + 0x1500) != 3)) {
code_r0x0800560c:
                iVar21 = iVar18 + 0x1440;
                uVar10 = _raw_spin_lock_irqsave(iVar21);
                uVar9 = *(iVar18 + 0x1528);
                if (((uVar9 + 1) % 0x1e == *(iVar18 + 0x152c)) || (iVar22 = *(iVar18 + 0x1520), iVar22 == 0)) {
                    _raw_spin_unlock_irqrestore(iVar21,uVar10);
                    uVar10 = extraout_x8_03;
code_r0x080057c0:
                    sym.__slimbus_dbg(uVar10,0x8000a67,arg2,pcVar13);
                    if (*(iVar18 + 0x155c) < 1) {
                        if (*(iVar18 + 0x155c) == 0) goto code_r0x080057e4;
                    }
                    else {
                        _printk(0x8001920);
                        ipc_log_string(*(iVar18 + 0x1568),"Message buffer unavailable\n");
                        uVar1 = *(iVar18 + 0x155c);
                        *(iVar18 + 0x155c) = 0;
                        *(iVar18 + 0x1558) = uVar1;
code_r0x080057e4:
                        ipc_log_string(*(iVar18 + 0x1570),"Message buffer unavailable\n");
                    }
                    mutex_unlock(iVar17);
                    uVar9 = 0xfffffff4;
                    goto code_r0x08005840;
                }
                if (0x1e < uVar9) goto code_r0x08005d3c;
                iVar23 = iVar18 + uVar9 * 0x30;
                *(iVar23 + 0xda8) = &uStack_1c8;
                iVar7 = *(iVar18 + 0x1528);
                *(iVar23 + 0xdc0) = iVar22 + uVar9 * 0x28;
                *(iVar18 + 0x1528) = (iVar7 + 1) % 0x1e;
                _raw_spin_unlock_irqrestore(iVar21,uVar10);
                arg2_00 = *(iVar23 + 0xdc0);
                uVar10 = extraout_x8_02;
                if (arg2_00 == NULL) goto code_r0x080057c0;
                mutex_unlock(iVar17);
                uVar10 = uStack_180;
                if (puVar16[1] == 0) {
                    bVar3 = false;
                    if ((puVar16[2] < 0x15) &&
                       (uVar9 = puVar16[2], bVar3 = false, (1 << (uVar9 & 0x1f) & 0x130000U) != 0)) {
                        puVar16[1] = 2;
                        if (uVar9 == 0x10) {
                            uVar14 = 0x2c;
code_r0x08005b20:
                            puVar16[2] = uVar14;
                            uVar15 = 3;
                            uStack_180._0_2_ = CONCAT11(**(*(puVar16 + 8) + 0x10),puVar16[7]);
                            uStack_180._3_5_ = SUB85(uVar10,3);
                            uStack_180._0_3_ = CONCAT12((*(*(puVar16 + 8) + 0x10))[1],uStack_180);
                        }
                        else {
                            if (uVar9 != 0x14) {
                                if (uVar9 != 0x11) goto code_r0x08005480;
                                uVar14 = 0x2d;
                                goto code_r0x08005b20;
                            }
                            uVar15 = 2;
                            puVar16[2] = 0x2e;
                            uStack_180._0_2_ = CONCAT11(**(*(puVar16 + 8) + 0x10),puVar16[7]);
                        }
                        *(puVar16 + 0x10) = iVar18 + 0x1400;
                        uVar9 = slim_alloc_txn_tid(auVar24._0_8_,puVar16);
                        if (uVar9 != 0) {
                            sym.__slimbus_dbg(noname_0_06,0x8001b20,arg2,pcVar13);
                            if (*(iVar18 + 0x155c) < 1) {
                                if (*(iVar18 + 0x155c) != 0) goto code_r0x08005840;
                            }
                            else {
                                _printk(0x8001be0);
                                ipc_log_string(*(iVar18 + 0x1568),"Unable to allocate TID\n");
                                uVar1 = *(iVar18 + 0x155c);
                                *(iVar18 + 0x155c) = 0;
                                *(iVar18 + 0x1558) = uVar1;
                            }
                            ipc_log_string(*(iVar18 + 0x1570),"Unable to allocate TID\n");
                            goto code_r0x08005840;
                        }
                        iVar21 = *(puVar16 + 8);
                        bVar3 = true;
                        uVar8 = 0xff;
                        *(&uStack_180 | uVar15) = puVar16[6];
                        *(iVar21 + 2) = uVar15 + '\x01';
                        *(*(puVar16 + 8) + 0x10) = &uStack_180;
                        *(*(puVar16 + 8) + 8) = &uStack_1a8;
                        *puVar16 = *(*(puVar16 + 8) + 2) + 4;
                    }
                }
                else {
                    bVar3 = false;
                }
                *puVar16 = *puVar16 - 1;
                *arg2_00 = 0;
                uVar14 = puVar16[3];
                uVar8 = *puVar16 | puVar16[1] << 5 | puVar16[2] << 8 | uVar8 << 0x10;
                if (uVar14 != 0) {
                    uVar8 = uVar8 | 0x8000;
                }
                *arg2_00 = uVar8;
                iVar21 = 2;
                if (uVar14 == 0) {
                    iVar21 = 3;
                }
                puVar12 = arg2_00 + iVar21;
                if (puVar16[1] == 0) {
                    uVar14 = puVar16[2];
                    if ((uVar14 - 0x60 < 2) || (puVar11 = puVar12, uVar14 - 0x20 < 2)) {
                        puVar11 = puVar12 + 1;
                        *puVar12 = puVar16[6];
                        puVar12 = puVar11;
                        if (puVar16[1] != 0) goto code_r0x08005794;
                        uVar14 = puVar16[2];
                    }
                    if ((uVar14 - 0x20 < 10) || (puVar12 = puVar11, uVar14 - 0x60 < 9)) {
                        puVar12 = puVar11 + 2;
                        *puVar11 = puVar16[4];
                        puVar11[1] = puVar16[5];
                    }
                }
code_r0x08005794:
                iVar21 = *(puVar16 + 8);
                if ((iVar21 != 0) && (*(iVar21 + 0x10) != 0)) {
                    if (*(iVar18 + 0x1554) == '\0') {
                        memcpy(puVar12,*(iVar21 + 0x10),*(iVar21 + 2));
                    }
                    else {
                        __memcpy_toio();
                    }
                }
                mutex_lock(iVar17);
                uVar9 = sym.qcom_slim_ngd_tx_msg_post(iVar18,arg2_00,*puVar16);
                if (uVar9 == 0) {
                    iVar7 = wait_for_completion_timeout(&uStack_1c8,500);
                    if (iVar7 == 0) {
                        sym.__slimbus_dbg(noname_0_04,0x800113c,puVar16[2],puVar16[1]);
                        iVar7 = *(iVar18 + 0x155c);
                        if (1 < iVar7) {
                            _printk(0x80008c6,puVar16[2],puVar16[1]);
                            ipc_log_string(*(iVar18 + 0x1568),"TX timed out:MC:0x%x,mt:0x%x",puVar16[2],puVar16[1]);
                            iVar7 = *(iVar18 + 0x155c);
                        }
                        if (iVar7 == 0) {
                            ipc_log_string(*(iVar18 + 0x1570),"TX timed out:MC:0x%x,mt:0x%x",puVar16[2],puVar16[1]);
                        }
                        mutex_unlock(iVar17);
                        uVar9 = 0xffffff92;
                        *(iVar18 + 0x157d) = 1;
                    }
                    else {
                        if ((!bVar3) || (iVar7 = wait_for_completion_timeout(iVar18 + 0x1400,0xfa), iVar7 != 0)) {
                            mutex_unlock(iVar17);
                            goto code_r0x08005424;
                        }
                        sym.__slimbus_dbg(noname_0_05,0x8001d70,puVar16[2],puVar16[1]);
                        iVar7 = *(iVar18 + 0x155c);
                        if (1 < iVar7) {
                            _printk(0x8001585,puVar16[2],puVar16[1]);
                            ipc_log_string(*(iVar18 + 0x1568),"TX usr_msg timed out:MC:0x%x,mt:0x%x",puVar16[2],
                                           puVar16[1]);
                            iVar7 = *(iVar18 + 0x155c);
                        }
                        if (iVar7 == 0) {
                            ipc_log_string(*(iVar18 + 0x1570),"TX usr_msg timed out:MC:0x%x,mt:0x%x",puVar16[2],
                                           puVar16[1]);
                        }
                        mutex_unlock(iVar17);
                        uVar9 = 0xffffff92;
                    }
                    goto code_r0x08005840;
                }
            }
            else {
                arg2 = uVar14;
                sym.__slimbus_dbg(3,0x8001317,arg2,puVar16[1]);
                uVar9 = *(iVar18 + 0x155c);
                uVar19 = uVar14;
                uVar20 = uVar14;
                if (uVar9 < 3) {
                    if (uVar9 == 0) goto code_r0x08005550;
code_r0x080055b0:
                    uVar15 = uVar9;
                    pcVar13 = puVar16[1];
                    if (puVar16[1] == 0) goto code_r0x08005570;
code_r0x080055b8:
                    if (pcVar13 == 2) {
                        if (((0x2e < uVar20) || (uVar15 = 1L << (uVar14 & 0x3f), (uVar15 & 0x401800000000) == 0)) &&
                           (uVar15 = uVar19 - 0x20, 0xd < uVar19 - 0x20)) {
                            pcVar13 = 0x2;
                            goto code_r0x080055ec;
                        }
                    }
                    else {
code_r0x080055ec:
                        if (*(iVar18 + 0x1561) == '\0') {
                            sym.__slimbus_dbg(0,0x800136e,uVar20,pcVar13);
                            uVar8 = *(iVar18 + 0x155c);
                            if (2 < uVar8) {
                                ipc_log_string(*(iVar18 + 0x1568),"Not waiting for ADSP up MC:0x%x,mt:0x%x\n",uVar20,
                                               puVar16[1]);
                                uVar8 = *(iVar18 + 0x155c);
                            }
                            uVar15 = uVar8;
                            if (uVar8 == 0) {
                                pcVar13 = "Not waiting for ADSP up MC:0x%x,mt:0x%x\n";
code_r0x08005950:
                                ipc_log_string(*(iVar18 + 0x1570),pcVar13,uVar20,puVar16[1]);
                                uVar15 = extraout_x8_04;
                            }
                        }
                        else {
                            *(iVar18 + 0x1358) = 0;
                            iVar7 = wait_for_completion_timeout(iVar18 + 0x1358,0xfa);
                            if (iVar7 != 0) goto code_r0x0800560c;
                            sym.__slimbus_dbg(noname_0_03,0x8000fea,uVar19,puVar16[1]);
                            uVar8 = *(iVar18 + 0x155c);
                            if (1 < uVar8) {
                                _printk(0x8000a83,uVar19,puVar16[1]);
                                ipc_log_string(*(iVar18 + 0x1568),"ADSP slimbus not up timeout MC:0x%x,mt:0x%x\n",
                                               uVar20,puVar16[1]);
                                uVar8 = *(iVar18 + 0x155c);
                            }
                            uVar15 = uVar8;
                            if (uVar8 == 0) {
                                pcVar13 = "ADSP slimbus not up timeout MC:0x%x,mt:0x%x\n";
                                goto code_r0x08005950;
                            }
                        }
                    }
                    uVar9 = 0xffffff87;
                }
                else {
                    arg2 = uVar19;
                    ipc_log_string(*(iVar18 + 0x1568),"ADSP slimbus not up yet MC:0x%x,mt:0x%x\n",arg2,puVar16[1]);
                    uVar9 = *(iVar18 + 0x155c);
                    if (uVar9 != 0) goto code_r0x080055b0;
code_r0x08005550:
                    arg2 = uVar19;
                    ipc_log_string(*(iVar18 + 0x1570),"ADSP slimbus not up yet MC:0x%x,mt:0x%x\n",arg2,puVar16[1]);
                    pcVar13 = puVar16[1];
                    uVar15 = extraout_x8_01;
                    if (puVar16[1] != 0) goto code_r0x080055b8;
code_r0x08005570:
                    uVar9 = 0xffffffea;
                    if (((uVar19 != 0x14) && (uVar20 != 0x24)) && (uVar20 != 0x58)) {
                        uVar9 = 0xffffff87;
                        uVar15 = uVar20 - 0x10;
                        if (8 < uVar20 - 0x10) {
                            if ((uVar20 & 0xe0) != 0x40) goto code_r0x080055ec;
                            uVar15 = 0x40;
                        }
                    }
                }
                sym.__slimbus_dbg(uVar15,0x80009a4,puVar16[2],puVar16[1]);
                iVar7 = *(iVar18 + 0x155c);
                if (1 < iVar7) {
                    _printk(0x8001340,puVar16[2],puVar16[1],uVar9);
                    ipc_log_string(*(iVar18 + 0x1568),"ADSP slimbus not up MC:0x%x,mt:0x%x ret:%d\n",puVar16[2],
                                   puVar16[1],uVar9);
                    iVar7 = *(iVar18 + 0x155c);
                }
                if (iVar7 == 0) {
                    ipc_log_string(*(iVar18 + 0x1570),"ADSP slimbus not up MC:0x%x,mt:0x%x ret:%d\n",puVar16[2],
                                   puVar16[1],uVar9);
                }
            }
            mutex_unlock(iVar17);
        }
        else {
            sym.__slimbus_dbg(uVar14,0x800145d,arg2,pcVar13);
            if (*(iVar18 + 0x155c) < 1) {
                if (*(iVar18 + 0x155c) != 0) {
code_r0x08005480:
                    uVar9 = 0xffffffea;
                    goto code_r0x08005840;
                }
            }
            else {
                _printk(0x8001d58);
                ipc_log_string(*(iVar18 + 0x1568),"msg exceeds HW limit\n");
                uVar1 = *(iVar18 + 0x155c);
                *(iVar18 + 0x155c) = 0;
                *(iVar18 + 0x1558) = uVar1;
            }
            ipc_log_string(*(iVar18 + 0x1570),"msg exceeds HW limit\n");
            uVar9 = 0xffffffea;
        }
    }
code_r0x08005840:
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_158) {
        return uVar9;
    }
    __stack_chk_fail();
code_r0x08005d3c:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8005d40);
    (*pcVar6)();
}


// ===== sym.qcom_slim_ngd_xfer_msg @ 0x08005398 (size 2472) =====

//WARNING: Type propagation algorithm not settling

int sym.qcom_slim_ngd_xfer_msg(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint uVar2;
    int iVar3;
    uint8_t uVar4;
    bool bVar5;
    code *pcVar6;
    bool bVar7;
    int iVar8;
    uint64_t uVar9;
    ulong uVar10;
    uchar *puVar11;
    char *pcVar12;
    uint64_t in_x2;
    uint64_t in_x3;
    uchar uVar13;
    uint32_t uVar14;
    uint64_t extraout_x8;
    ulong noname_0;
    ulong extraout_x8_00;
    int64_t iVar15;
    ulong extraout_x8_01;
    uint64_t extraout_x8_02;
    ulong noname_0_00;
    ulong noname_0_01;
    ulong noname_0_02;
    int64_t iVar16;
    uchar *puVar17;
    ulong *in_x18;
    int64_t iVar18;
    uint32_t uVar19;
    int64_t iVar21;
    uint32_t *arg2_00;
    uint32_t uVar22;
    ulong unaff_x30;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong *******pppppppuStack_c8;
    ulong *******pppppppuStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uint32_t uVar20;
    
    *in_x18 = unaff_x30;
    iVar18 = sp_el0;
    iStack_68 = *(iVar18 + 0x5e0);
    pppppppuStack_c8 = &pppppppuStack_c8;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uVar22 = *(arg2 + 7);
    uStack_78 = 0;
    uStack_70 = 0;
    iVar18 = *(*arg1 + 0x98);
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    *(iVar18 + 0x1400) = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    pppppppuStack_c0 = pppppppuStack_c8;
    if ((*(arg2 + 1) == '\0') && ((*(arg2 + 2) & 0xe0) == 0x40)) {
code_r0x08005424:
        iVar8 = 0;
    }
    else if (*(arg2 + 3) == '\x01') {
        iVar8 = -0x5d;
    }
    else {
        uVar4 = *(*(arg2 + 8) + 2);
        if ((uVar4 < 0x29) && (uVar4 = *arg2, uVar4 < 0x29)) {
            iVar1 = iVar18 + 0x1448;
            uVar9 = mutex_is_locked(iVar1);
            if (((uVar9 & 1) != 0) && (*(iVar18 + 0x1500) == 4)) {
                sym.__slimbus_dbg(4,0x8001d07,in_x2,in_x3);
                if (*(iVar18 + 0x155c) < 1) {
                    if (*(iVar18 + 0x155c) != 0) {
                        iVar8 = -0xb;
                        goto code_r0x08005840;
                    }
                }
                else {
                    _printk(0x800155b);
                    ipc_log_string(*(iVar18 + 0x1568),"ngd going down due SSR/PDR, try again!\n");
                    uVar2 = *(iVar18 + 0x155c);
                    *(iVar18 + 0x155c) = 0;
                    *(iVar18 + 0x1558) = uVar2;
                }
                ipc_log_string(*(iVar18 + 0x1570),"ngd going down due SSR/PDR, try again!\n");
                iVar8 = -0xb;
                goto code_r0x08005840;
            }
            mutex_lock(iVar1);
            uVar4 = *(arg2 + 2);
            if (((uVar4 == 1) && (*(arg2 + 1) == '\x06')) || (*(iVar18 + 0x1500) != 3)) {
code_r0x0800560c:
                iVar15 = iVar18 + 0x1440;
                uVar10 = _raw_spin_lock_irqsave(iVar15);
                uVar14 = *(iVar18 + 0x1528);
                if (((uVar14 + 1) % 0x1e == *(iVar18 + 0x152c)) || (iVar16 = *(iVar18 + 0x1520), iVar16 == 0)) {
                    _raw_spin_unlock_irqrestore(iVar15,uVar10);
                    uVar10 = extraout_x8_01;
code_r0x080057c0:
                    sym.__slimbus_dbg(uVar10,0x8000a67,in_x2,in_x3);
                    if (*(iVar18 + 0x155c) < 1) {
                        if (*(iVar18 + 0x155c) == 0) goto code_r0x080057e4;
                    }
                    else {
                        _printk(0x8001920);
                        ipc_log_string(*(iVar18 + 0x1568),"Message buffer unavailable\n");
                        uVar2 = *(iVar18 + 0x155c);
                        *(iVar18 + 0x155c) = 0;
                        *(iVar18 + 0x1558) = uVar2;
code_r0x080057e4:
                        ipc_log_string(*(iVar18 + 0x1570),"Message buffer unavailable\n");
                    }
                    mutex_unlock(iVar1);
                    iVar8 = -0xc;
                    goto code_r0x08005840;
                }
                if (0x1e < uVar14) goto code_r0x08005d3c;
                iVar21 = iVar18 + uVar14 * 0x30;
                *(iVar21 + 0xda8) = &uStack_d8;
                iVar8 = *(iVar18 + 0x1528);
                *(iVar21 + 0xdc0) = iVar16 + uVar14 * 0x28;
                *(iVar18 + 0x1528) = (iVar8 + 1) % 0x1e;
                _raw_spin_unlock_irqrestore(iVar15,uVar10);
                arg2_00 = *(iVar21 + 0xdc0);
                uVar10 = extraout_x8_00;
                if (arg2_00 == NULL) goto code_r0x080057c0;
                mutex_unlock(iVar1);
                uVar10 = uStack_90;
                if (*(arg2 + 1) == '\0') {
                    bVar5 = false;
                    if ((*(arg2 + 2) < 0x15) &&
                       (uVar14 = *(arg2 + 2), bVar5 = false, (1 << (uVar14 & 0x1f) & 0x130000U) != 0)) {
                        *(arg2 + 1) = 2;
                        if (uVar14 == 0x10) {
                            uVar13 = 0x2c;
code_r0x08005b20:
                            *(arg2 + 2) = uVar13;
                            uVar9 = 3;
                            puVar17 = *(*(arg2 + 8) + 0x10);
                            uStack_90._0_2_ = CONCAT11(*puVar17,*(arg2 + 7));
                            uStack_90._3_5_ = SUB85(uVar10,3);
                            uStack_90._0_3_ = CONCAT12(puVar17[1],uStack_90);
                        }
                        else {
                            if (uVar14 != 0x14) {
                                if (uVar14 != 0x11) goto code_r0x08005480;
                                uVar13 = 0x2d;
                                goto code_r0x08005b20;
                            }
                            uVar9 = 2;
                            *(arg2 + 2) = 0x2e;
                            uStack_90._0_2_ = CONCAT11(**(*(arg2 + 8) + 0x10),*(arg2 + 7));
                        }
                        *(arg2 + 0x10) = iVar18 + 0x1400;
                        iVar8 = slim_alloc_txn_tid(arg1,arg2);
                        if (iVar8 != 0) {
                            sym.__slimbus_dbg(noname_0_02,0x8001b20,in_x2,in_x3);
                            if (*(iVar18 + 0x155c) < 1) {
                                if (*(iVar18 + 0x155c) != 0) goto code_r0x08005840;
                            }
                            else {
                                _printk(0x8001be0);
                                ipc_log_string(*(iVar18 + 0x1568),"Unable to allocate TID\n");
                                uVar2 = *(iVar18 + 0x155c);
                                *(iVar18 + 0x155c) = 0;
                                *(iVar18 + 0x1558) = uVar2;
                            }
                            ipc_log_string(*(iVar18 + 0x1570),"Unable to allocate TID\n");
                            goto code_r0x08005840;
                        }
                        iVar15 = *(arg2 + 8);
                        bVar5 = true;
                        uVar22 = 0xff;
                        *(&uStack_90 | uVar9) = *(arg2 + 6);
                        *(iVar15 + 2) = uVar9 + '\x01';
                        *(*(arg2 + 8) + 0x10) = &uStack_90;
                        *(*(arg2 + 8) + 8) = &uStack_b8;
                        *arg2 = *(*(arg2 + 8) + 2) + '\x04';
                    }
                }
                else {
                    bVar5 = false;
                }
                *arg2 = *arg2 + -1;
                *arg2_00 = 0;
                uVar22 = *arg2 | *(arg2 + 1) << 5 | *(arg2 + 2) << 8 | uVar22 << 0x10;
                bVar7 = *(arg2 + 3) != '\0';
                if (bVar7) {
                    uVar22 = uVar22 | 0x8000;
                }
                *arg2_00 = uVar22;
                iVar15 = 2;
                if (!bVar7) {
                    iVar15 = 3;
                }
                puVar17 = arg2_00 + iVar15;
                if (*(arg2 + 1) == '\0') {
                    uVar4 = *(arg2 + 2);
                    if ((uVar4 - 0x60 < 2) || (puVar11 = puVar17, uVar4 - 0x20 < 2)) {
                        puVar11 = puVar17 + 1;
                        *puVar17 = *(arg2 + 6);
                        puVar17 = puVar11;
                        if (*(arg2 + 1) != '\0') goto code_r0x08005794;
                        uVar4 = *(arg2 + 2);
                    }
                    if ((uVar4 - 0x20 < 10) || (puVar17 = puVar11, uVar4 - 0x60 < 9)) {
                        puVar17 = puVar11 + 2;
                        *puVar11 = *(arg2 + 4);
                        puVar11[1] = *(arg2 + 5);
                    }
                }
code_r0x08005794:
                iVar15 = *(arg2 + 8);
                if ((iVar15 != 0) && (*(iVar15 + 0x10) != 0)) {
                    if (*(iVar18 + 0x1554) == '\0') {
                        memcpy(puVar17,*(iVar15 + 0x10),*(iVar15 + 2));
                    }
                    else {
                        __memcpy_toio();
                    }
                }
                mutex_lock(iVar1);
                iVar8 = sym.qcom_slim_ngd_tx_msg_post(iVar18,arg2_00,*arg2);
                if (iVar8 == 0) {
                    iVar8 = wait_for_completion_timeout(&uStack_d8,500);
                    if (iVar8 == 0) {
                        sym.__slimbus_dbg(noname_0_00,0x800113c,*(arg2 + 2),*(arg2 + 1));
                        iVar8 = *(iVar18 + 0x155c);
                        if (1 < iVar8) {
                            _printk(0x80008c6,*(arg2 + 2),*(arg2 + 1));
                            ipc_log_string(*(iVar18 + 0x1568),"TX timed out:MC:0x%x,mt:0x%x",*(arg2 + 2),*(arg2 + 1))
                            ;
                            iVar8 = *(iVar18 + 0x155c);
                        }
                        if (iVar8 == 0) {
                            ipc_log_string(*(iVar18 + 0x1570),"TX timed out:MC:0x%x,mt:0x%x",*(arg2 + 2),*(arg2 + 1))
                            ;
                        }
                        mutex_unlock(iVar1);
                        iVar8 = -0x6e;
                        *(iVar18 + 0x157d) = 1;
                    }
                    else {
                        if ((!bVar5) || (iVar8 = wait_for_completion_timeout(iVar18 + 0x1400,0xfa), iVar8 != 0)) {
                            mutex_unlock(iVar1);
                            goto code_r0x08005424;
                        }
                        sym.__slimbus_dbg(noname_0_01,0x8001d70,*(arg2 + 2),*(arg2 + 1));
                        iVar8 = *(iVar18 + 0x155c);
                        if (1 < iVar8) {
                            _printk(0x8001585,*(arg2 + 2),*(arg2 + 1));
                            ipc_log_string(*(iVar18 + 0x1568),"TX usr_msg timed out:MC:0x%x,mt:0x%x",*(arg2 + 2),
                                           *(arg2 + 1));
                            iVar8 = *(iVar18 + 0x155c);
                        }
                        if (iVar8 == 0) {
                            ipc_log_string(*(iVar18 + 0x1570),"TX usr_msg timed out:MC:0x%x,mt:0x%x",*(arg2 + 2),
                                           *(arg2 + 1));
                        }
                        mutex_unlock(iVar1);
                        iVar8 = -0x6e;
                    }
                    goto code_r0x08005840;
                }
            }
            else {
                in_x2 = uVar4;
                sym.__slimbus_dbg(3,0x8001317,in_x2,*(arg2 + 1));
                uVar14 = *(iVar18 + 0x155c);
                uVar19 = uVar4;
                uVar20 = uVar4;
                if (uVar14 < 3) {
                    if (uVar14 == 0) goto code_r0x08005550;
code_r0x080055b0:
                    uVar9 = uVar14;
                    in_x3 = *(arg2 + 1);
                    if (*(arg2 + 1) == 0) goto code_r0x08005570;
code_r0x080055b8:
                    if (in_x3 == 2) {
                        if (((0x2e < uVar20) || (uVar9 = 1L << (uVar4 & 0x3f), (uVar9 & 0x401800000000) == 0)) &&
                           (uVar9 = uVar19 - 0x20, 0xd < uVar19 - 0x20)) {
                            in_x3 = 2;
                            goto code_r0x080055ec;
                        }
                    }
                    else {
code_r0x080055ec:
                        if (*(iVar18 + 0x1561) == '\0') {
                            sym.__slimbus_dbg(0,0x800136e,uVar20,in_x3);
                            uVar22 = *(iVar18 + 0x155c);
                            if (2 < uVar22) {
                                ipc_log_string(*(iVar18 + 0x1568),"Not waiting for ADSP up MC:0x%x,mt:0x%x\n",uVar20,
                                               *(arg2 + 1));
                                uVar22 = *(iVar18 + 0x155c);
                            }
                            uVar9 = uVar22;
                            if (uVar22 == 0) {
                                pcVar12 = "Not waiting for ADSP up MC:0x%x,mt:0x%x\n";
code_r0x08005950:
                                ipc_log_string(*(iVar18 + 0x1570),pcVar12,uVar20,*(arg2 + 1));
                                uVar9 = extraout_x8_02;
                            }
                        }
                        else {
                            *(iVar18 + 0x1358) = 0;
                            iVar8 = wait_for_completion_timeout(iVar18 + 0x1358,0xfa);
                            if (iVar8 != 0) goto code_r0x0800560c;
                            sym.__slimbus_dbg(noname_0,0x8000fea,uVar19,*(arg2 + 1));
                            uVar22 = *(iVar18 + 0x155c);
                            if (1 < uVar22) {
                                _printk(0x8000a83,uVar19,*(arg2 + 1));
                                ipc_log_string(*(iVar18 + 0x1568),"ADSP slimbus not up timeout MC:0x%x,mt:0x%x\n",
                                               uVar20,*(arg2 + 1));
                                uVar22 = *(iVar18 + 0x155c);
                            }
                            uVar9 = uVar22;
                            if (uVar22 == 0) {
                                pcVar12 = "ADSP slimbus not up timeout MC:0x%x,mt:0x%x\n";
                                goto code_r0x08005950;
                            }
                        }
                    }
                    iVar8 = -0x79;
                }
                else {
                    in_x2 = uVar19;
                    ipc_log_string(*(iVar18 + 0x1568),"ADSP slimbus not up yet MC:0x%x,mt:0x%x\n",in_x2,*(arg2 + 1));
                    uVar14 = *(iVar18 + 0x155c);
                    if (uVar14 != 0) goto code_r0x080055b0;
code_r0x08005550:
                    in_x2 = uVar19;
                    ipc_log_string(*(iVar18 + 0x1570),"ADSP slimbus not up yet MC:0x%x,mt:0x%x\n",in_x2,*(arg2 + 1));
                    in_x3 = *(arg2 + 1);
                    uVar9 = extraout_x8;
                    if (*(arg2 + 1) != 0) goto code_r0x080055b8;
code_r0x08005570:
                    iVar8 = -0x16;
                    if (((uVar19 != 0x14) && (uVar20 != 0x24)) && (uVar20 != 0x58)) {
                        iVar8 = -0x79;
                        uVar9 = uVar20 - 0x10;
                        if (8 < uVar20 - 0x10) {
                            if ((uVar20 & 0xe0) != 0x40) goto code_r0x080055ec;
                            uVar9 = 0x40;
                        }
                    }
                }
                sym.__slimbus_dbg(uVar9,0x80009a4,*(arg2 + 2),*(arg2 + 1));
                iVar3 = *(iVar18 + 0x155c);
                if (1 < iVar3) {
                    _printk(0x8001340,*(arg2 + 2),*(arg2 + 1),iVar8);
                    ipc_log_string(*(iVar18 + 0x1568),"ADSP slimbus not up MC:0x%x,mt:0x%x ret:%d\n",*(arg2 + 2),
                                   *(arg2 + 1),iVar8);
                    iVar3 = *(iVar18 + 0x155c);
                }
                if (iVar3 == 0) {
                    ipc_log_string(*(iVar18 + 0x1570),"ADSP slimbus not up MC:0x%x,mt:0x%x ret:%d\n",*(arg2 + 2),
                                   *(arg2 + 1),iVar8);
                }
            }
            mutex_unlock(iVar1);
        }
        else {
            sym.__slimbus_dbg(uVar4,0x800145d,in_x2,in_x3);
            if (*(iVar18 + 0x155c) < 1) {
                if (*(iVar18 + 0x155c) != 0) {
code_r0x08005480:
                    iVar8 = -0x16;
                    goto code_r0x08005840;
                }
            }
            else {
                _printk(0x8001d58);
                ipc_log_string(*(iVar18 + 0x1568),"msg exceeds HW limit\n");
                uVar2 = *(iVar18 + 0x155c);
                *(iVar18 + 0x155c) = 0;
                *(iVar18 + 0x1558) = uVar2;
            }
            ipc_log_string(*(iVar18 + 0x1570),"msg exceeds HW limit\n");
            iVar8 = -0x16;
        }
    }
code_r0x08005840:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_68) {
        return iVar8;
    }
    __stack_chk_fail();
code_r0x08005d3c:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8005d40);
    (*pcVar6)();
}


// ===== sym.slim_pd_status @ 0x08005d40 (size 44) =====

void sym.slim_pd_status(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qcom_slim_ngd_ssr_pdr_notify(arg2,arg1);
    return;
}


// ===== sym.readl @ 0x08005d6c (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8005d70);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x8005db4);
    return uVar1;
}


// ===== sym.writel @ 0x08005dec (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8005e08);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8005e34);
    return;
}


// ===== sym.debug_mask_show @ 0x08005e68 (size 68) =====

int64_t sym.debug_mask_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,4,0x8000f77,*(*(arg1 + 0x98) + 0x155c));
    return iVar1;
}


// ===== sym.debug_mask_store @ 0x08005eac (size 44) =====

int64_t sym.debug_mask_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    
    iVar1 = 4;
    if (*arg2 < 0x35) {
        iVar1 = *arg2 - 0x30;
    }
    *(*(arg1 + 0x98) + 0x155c) = iVar1;
    return arg3;
}


// ===== sym.qcom_slim_ngd_ssr_pdr_notify @ 0x08005ed8 (size 1452) =====

void sym.qcom_slim_ngd_ssr_pdr_notify(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    int64_t *noname_0;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    code *arg2_00;
    int64_t in_x3;
    int64_t iVar5;
    int iVar6;
    ulong in_x8;
    uint64_t noname_0_00;
    uint64_t extraout_x8;
    ulong noname_0_01;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar7 [16];
    
    *in_x18 = unaff_x30;
    arg2_00 = arg2;
    sym.__slimbus_dbg(in_x8,0x8001293,arg2,in_x3);
    uVar2 = *(arg1 + 0x155c);
    if (uVar2 < 3) {
        if (uVar2 == 0) goto code_r0x08005f68;
code_r0x08005f20:
        noname_0_00 = uVar2;
        if (arg2 < 3) goto code_r0x08005f84;
code_r0x08005f28:
        if (arg2 == 3) {
            sym.__slimbus_dbg(noname_0_00,0x8001987,arg2_00,in_x3);
            iVar6 = *(arg1 + 0x155c);
            if (2 < iVar6) {
                ipc_log_string(*(arg1 + 0x1568),"SLIM SSR After Shutdown\n");
                iVar6 = *(arg1 + 0x155c);
            }
            if (iVar6 == 0) {
                ipc_log_string(*(arg1 + 0x1570),"SLIM SSR After Shutdown\n");
            }
            goto code_r0x08006270;
        }
        if (arg2 == 0x1fffffff) {
code_r0x08006190:
            if (*(arg1 + 0x1554) != '\0') {
                *(arg1 + 0x1540) = *(arg1 + 0x1548);
                **(arg1 + 0x1538) = *(arg1 + 0x1550);
            }
            iVar5 = arg1 + 0x13a8;
            queue_work_on(0x20,_pm_runtime_force_suspend);
            sym.__slimbus_dbg(noname_0_01,0x800167f,iVar5,in_x3);
            iVar6 = *(arg1 + 0x155c);
            if (2 < iVar6) {
                ipc_log_string(*(arg1 + 0x1568),"SLIM SSR up\n");
                iVar6 = *(arg1 + 0x155c);
            }
            if (iVar6 != 0) {
                return;
            }
            ipc_log_string(*(arg1 + 0x1570),"SLIM SSR up\n");
            return;
        }
        if (arg2 != 0xfffffff) {
            return;
        }
    }
    else {
        arg2_00 = arg2;
        ipc_log_string(*(arg1 + 0x1568),"SLIM DSP SSR/PDR notify cb:0x%lx\n");
        uVar2 = *(arg1 + 0x155c);
        if (uVar2 != 0) goto code_r0x08005f20;
code_r0x08005f68:
        arg2_00 = arg2;
        ipc_log_string(*(arg1 + 0x1570),"SLIM DSP SSR/PDR notify cb:0x%lx\n");
        noname_0_00 = extraout_x8;
        if (2 < arg2) goto code_r0x08005f28;
code_r0x08005f84:
        if (arg2 == 1) goto code_r0x08006190;
        if (arg2 != 2) {
            return;
        }
    }
    sym.__slimbus_dbg(*(arg1 + 0x7d8),0x8001400,arg2_00,in_x3);
    iVar6 = *(arg1 + 0x155c);
    if (2 < iVar6) {
        ipc_log_string(*(arg1 + 0x1568),"SLIM SSR Before Shutdown\n");
        iVar6 = *(arg1 + 0x155c);
    }
    if (iVar6 == 0) {
        ipc_log_string(*(arg1 + 0x1570),"SLIM SSR Before Shutdown\n");
    }
    if (*(arg1 + 0x1500) != 3) {
        mutex_lock(arg1 + 0x1478);
        mutex_lock(arg1 + 0x1448);
        *(arg1 + 0x1500) = 4;
        sym.__slimbus_dbg(4,0x8001ac2,arg2_00,in_x3);
        iVar6 = *(arg1 + 0x155c);
        if (2 < iVar6) {
            ipc_log_string(*(arg1 + 0x1568),"SLIM SSR going down\n");
            iVar6 = *(arg1 + 0x155c);
        }
        if (iVar6 == 0) {
            ipc_log_string(*(arg1 + 0x1570),"SLIM SSR going down\n");
        }
        piVar1 = *(arg1 + 0x3a0) + 0x1f8;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        noname_0 = *(arg1 + 0x3a0) + 0x1f8;
        iVar5 = *noname_0;
        sym.__slimbus_dbg(noname_0,0x8001e9a,0x80013e3,iVar5);
        iVar6 = *(arg1 + 0x155c);
        if (2 < iVar6) {
            iVar5 = *(*(arg1 + 0x3a0) + 0x1f8);
            ipc_log_string(*(arg1 + 0x1568),"SLIM %s: PM get_no_resume count:%d\n","qcom_slim_ngd_ssr_pdr_notify");
            iVar6 = *(arg1 + 0x155c);
        }
        if (iVar6 == 0) {
            iVar5 = *(*(arg1 + 0x3a0) + 0x1f8);
            ipc_log_string(*(arg1 + 0x1570),"SLIM %s: PM get_no_resume count:%d\n","qcom_slim_ngd_ssr_pdr_notify");
        }
        arg2_00 = sym.qcom_slim_ngd_update_device_status.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
        auVar7 = device_for_each_child(*(arg1 + 0x3a0),0);
        sym.qcom_slim_ngd_exit_dma(arg1,auVar7,arg2_00);
        *(arg1 + 0x1500) = 3;
        sym.__slimbus_dbg(3,0x80015d1,arg2_00,iVar5);
        iVar6 = *(arg1 + 0x155c);
        if (2 < iVar6) {
            ipc_log_string(*(arg1 + 0x1568),"SLIM SSR down\n");
            iVar6 = *(arg1 + 0x155c);
        }
        if (iVar6 == 0) {
            ipc_log_string(*(arg1 + 0x1570),"SLIM SSR down\n");
        }
        mutex_unlock(arg1 + 0x1448);
        mutex_unlock(arg1 + 0x1478);
    }
    if (arg2 != 0xfffffff) {
        return;
    }
code_r0x08006270:
    auVar7 = mutex_lock(arg1 + 0x14a8);
    sym.qcom_slim_ngd_enable(arg1,auVar7,arg2_00);
    mutex_unlock(arg1 + 0x14a8);
    return;
}


// ===== sym.qcom_slim_ngd_update_device_status @ 0x08006494 (size 40) =====

ulong sym.qcom_slim_ngd_update_device_status(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    slim_report_absent();
    return 0;
}


// ===== sym.qcom_slim_ngd_exit_dma @ 0x080064bc (size 476) =====

void sym.qcom_slim_ngd_exit_dma(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t in_x3;
    ulong in_x8;
    ulong *in_x18;
    ulong uVar2;
    int64_t *piVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg1 + 0x7d8);
    sym.__slimbus_dbg(in_x8,0x8000bee,arg2,in_x3);
    iVar1 = *(arg1 + 0x155c);
    if (2 < iVar1) {
        ipc_log_string(*(arg1 + 0x1568),"SLIM: NGD exit dma\n");
        iVar1 = *(arg1 + 0x155c);
    }
    if (iVar1 == 0) {
        ipc_log_string(*(arg1 + 0x1570),"SLIM: NGD exit dma\n");
    }
    piVar3 = *(arg1 + 0x7e8);
    if (piVar3 != NULL) {
        pcVar4 = *(*piVar3 + 0x178);
        if (pcVar4 != NULL) {
            __cfi_slowpath_diag(0x146502001565ea5c,pcVar4,0x80007e0);
            iVar1 = (*pcVar4)(piVar3);
            if (iVar1 == 0) {
                pcVar4 = *(*piVar3 + 0x180);
                if (pcVar4 != NULL) {
                    __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar4,0x8000800);
                    (*pcVar4)(piVar3);
                }
            }
        }
        dma_release_channel(*(arg1 + 0x7e8));
    }
    piVar3 = *(arg1 + 0x7f0);
    if (piVar3 != NULL) {
        pcVar4 = *(*piVar3 + 0x178);
        if (pcVar4 != NULL) {
            __cfi_slowpath_diag(0x146502001565ea5c,pcVar4,0x80007e0);
            iVar1 = (*pcVar4)(piVar3);
            if (iVar1 == 0) {
                pcVar4 = *(*piVar3 + 0x180);
                if (pcVar4 != NULL) {
                    __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar4,0x8000800);
                    (*pcVar4)(piVar3);
                }
            }
        }
        dma_release_channel(*(arg1 + 0x7f0));
    }
    if (*(arg1 + 0x1554) == '\0') {
        dma_free_attrs(uVar2,0x4b0,*(arg1 + 0x1518),*(arg1 + 0x1508),0);
        dma_free_attrs(uVar2,0x4d8,*(arg1 + 0x1520),*(arg1 + 0x1510),0);
    }
    else {
        *(arg1 + 0x1540) = *(arg1 + 0x1548);
        **(arg1 + 0x1538) = *(arg1 + 0x1550);
    }
    *(arg1 + 0x7e8) = 0;
    *(arg1 + 0x7f0) = 0;
    return;
}


// ===== sym.qcom_slim_ngd_enable @ 0x08006698 (size 1708) =====

uint64_t sym.qcom_slim_ngd_enable(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t *noname_0;
    int64_t iVar1;
    uint8_t *puVar2;
    uint8_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t extraout_x0;
    ulong *puVar6;
    ulong uVar7;
    uint64_t in_x1;
    char *pcVar8;
    int64_t in_x3;
    uchar *arg3;
    uint64_t uVar9;
    uint uVar10;
    int64_t iVar11;
    int64_t extraout_x8;
    ulong extraout_x8_00;
    ulong noname_0_00;
    ulong noname_0_01;
    ulong noname_0_02;
    ulong noname_0_03;
    uint64_t uVar12;
    uint64_t extraout_x8_01;
    ulong extraout_x8_02;
    uint *noname_0_04;
    ulong noname_0_05;
    ulong noname_0_06;
    ulong noname_0_07;
    uint64_t extraout_x8_03;
    uint64_t uVar13;
    ulong noname_0_08;
    ulong noname_0_09;
    ulong *in_x18;
    ulong *extraout_x18;
    char *pcVar14;
    int64_t iVar15;
    ulong unaff_x30;
    uchar noname_1_00 [16];
    ulong uStack_98;
    uint uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iVar11 = *(iVar11 + 0x5e0);
    iStack_38 = iVar11;
    if ((in_x1 & 1) == 0) {
        pcVar8 = arg2;
        if (*(arg1 + 0x7a8) != 0) {
            qmi_handle_release();
            devm_kfree(*(arg1 + 0x7d8),*(arg1 + 0x7a8));
            *(arg1 + 0x7a8) = 0;
            pcVar8 = arg2;
            iVar11 = extraout_x8;
        }
        uVar12 = sym.__slimbus_dbg(iVar11,0x80010e2,pcVar8,in_x3);
        uVar10 = in_x3 >> 0x20;
        iVar4 = *(arg1 + 0x155c);
        if (2 < iVar4) {
            uVar12 = ipc_log_string(*(arg1 + 0x1568),"SLIM NGD Disable\n");
            iVar4 = *(arg1 + 0x155c);
        }
        if (iVar4 == 0) {
            uVar7 = *(arg1 + 0x1570);
            pcVar14 = "SLIM NGD Disable\n";
code_r0x080069e8:
            uVar12 = ipc_log_string(uVar7,pcVar14);
        }
    }
    else {
        uStack_90 = 0;
        uStack_98 = 0;
        if (*(arg1 + 0x7a8) == 0) {
            puVar6 = devm_kmalloc(*(arg1 + 0x7d8),0x140,0xdc0);
            if (puVar6 == NULL) {
                uVar13 = 0xfffffff4;
                uVar7 = extraout_x8_00;
            }
            else {
                uVar5 = qmi_handle_init(puVar6,0xe,0,obj.qcom_slim_qmi_msg_handlers);
                if (uVar5 < 0) {
                    uVar13 = uVar5;
                    _dev_err(*(arg1 + 0x7d8),"QMI client init failed: %d\n",uVar13);
                }
                else {
                    iVar11 = 0;
                    uVar5 = kernel_connect(*puVar6,arg1 + 0x650,0xc);
                    if (uVar5 < 0) {
                        uVar13 = uVar5;
                        sym.__slimbus_dbg(noname_0_00,0x8001efb,uVar13,iVar11);
                        if (*(arg1 + 0x155c) < 1) {
                            if (*(arg1 + 0x155c) != 0) goto code_r0x08006c9c;
                        }
                        else {
                            _printk(0x8001c24,uVar13);
                            ipc_log_string(*(arg1 + 0x1568),"Remote Service connect failed: %d\n",uVar13);
                            uVar10 = *(arg1 + 0x155c);
                            *(arg1 + 0x155c) = 0;
                            *(arg1 + 0x1558) = uVar10;
                        }
                        ipc_log_string(*(arg1 + 0x1570),"Remote Service connect failed: %d\n",uVar13);
                    }
                    else {
                        arg3 = &stack0xffffffffffffffc4;
                        uStack_98 = CONCAT35(uStack_98._5_3_,0x100000000);
                        uStack_90 = 2;
                        uStack_3c = 0;
                        iVar4 = *(*(arg1 + 2000) + 0x10);
                        *(arg1 + 0x7a8) = puVar6;
                        uStack_50 = 0;
                        uStack_48 = 0;
                        uStack_60 = 0;
                        uStack_58 = 0;
                        uStack_70 = 0;
                        uStack_68 = 0;
                        uStack_80 = 0;
                        uStack_78 = 0;
                        uStack_88 = 0;
                        uStack_98 = CONCAT44(uStack_98._4_4_,iVar4 >> 1);
                        uVar5 = qmi_txn_init(puVar6,&stack0xffffffffffffff78,obj.slimbus_select_inst_resp_msg_v01_ei);
                        if (uVar5 < 0) {
                            uVar13 = uVar5;
                            sym.__slimbus_dbg(noname_0_01,0x80010f4,uVar13,arg3);
                            if (*(arg1 + 0x155c) < 1) {
                                if (*(arg1 + 0x155c) != 0) goto code_r0x08006c88;
                            }
                            else {
                                _printk(0x800107e,uVar13);
                                ipc_log_string(*(arg1 + 0x1568),"QMI TXN init fail: %d\n",uVar13);
                                uVar10 = *(arg1 + 0x155c);
                                *(arg1 + 0x155c) = 0;
                                *(arg1 + 0x1558) = uVar10;
                            }
                            uVar7 = *(arg1 + 0x1570);
                            pcVar8 = "QMI TXN init fail: %d\n";
code_r0x08006c60:
                            ipc_log_string(uVar7,pcVar8,uVar13);
                        }
                        else {
                            iVar11 = 0x20;
                            uVar13 = qmi_send_request(*(arg1 + 0x7a8),0,&stack0xffffffffffffff78,0x20,0xe,
                                                      obj.slimbus_select_inst_req_msg_v01_ei,&stack0xffffffffffffff68);
                            if (uVar13 < 0) {
                                sym.__slimbus_dbg(noname_0_02,0x80014b4,uVar13 & 0xffffffff,iVar11);
                                if (*(arg1 + 0x155c) < 1) {
                                    if (*(arg1 + 0x155c) == 0) goto code_r0x08006c30;
                                }
                                else {
                                    _printk(0x80015f7,uVar13 & 0xffffffff);
                                    ipc_log_string(*(arg1 + 0x1568),"QMI send req fail %d\n",uVar13 & 0xffffffff);
                                    uVar10 = *(arg1 + 0x155c);
                                    *(arg1 + 0x155c) = 0;
                                    *(arg1 + 0x1558) = uVar10;
code_r0x08006c30:
                                    ipc_log_string(*(arg1 + 0x1570),"QMI send req fail %d\n",uVar13 & 0xffffffff);
                                }
                                qmi_txn_cancel(&stack0xffffffffffffff78);
                            }
                            else {
                                uVar5 = qmi_txn_wait(&stack0xffffffffffffff78,1000);
                                uVar13 = uVar5;
                                if (uVar5 < 0) {
                                    sym.__slimbus_dbg(noname_0_03,0x8000e07,uVar13,iVar11);
                                    if (*(arg1 + 0x155c) < 1) {
                                        if (*(arg1 + 0x155c) != 0) goto code_r0x08006c88;
                                    }
                                    else {
                                        _printk(0x8000e1e,uVar13);
                                        ipc_log_string(*(arg1 + 0x1568),"QMI TXN wait fail: %d\n",uVar13);
                                        uVar10 = *(arg1 + 0x155c);
                                        *(arg1 + 0x155c) = 0;
                                        *(arg1 + 0x1558) = uVar10;
                                    }
                                    uVar7 = *(arg1 + 0x1570);
                                    pcVar8 = "QMI TXN wait fail: %d\n";
                                    goto code_r0x08006c60;
                                }
                                if (uStack_3c == 0) {
                                    pcVar8 = "qcom_slim_qmi_send_select_inst_req";
                                    sym.__slimbus_dbg(noname_0_03,0x8000f03,0x8001780,uVar13);
                                    iVar4 = *(arg1 + 0x155c);
                                    if (2 < iVar4) {
                                        pcVar8 = "qcom_slim_qmi_send_select_inst_req";
                                        ipc_log_string(*(arg1 + 0x1568),"%s end RC=%d\n",
                                                       "qcom_slim_qmi_send_select_inst_req",uVar13);
                                        iVar4 = *(arg1 + 0x155c);
                                    }
                                    if (iVar4 == 0) {
                                        pcVar8 = "qcom_slim_qmi_send_select_inst_req";
                                        ipc_log_string(*(arg1 + 0x1570),"%s end RC=%d\n",
                                                       "qcom_slim_qmi_send_select_inst_req",uVar13);
                                    }
                                    goto code_r0x080068d8;
                                }
                                sym.__slimbus_dbg(noname_0_03,0x8000a15,uStack_3c,iVar11);
                                if (*(arg1 + 0x155c) < 1) {
                                    if (*(arg1 + 0x155c) == 0) goto code_r0x08006c70;
                                }
                                else {
                                    _printk(0x8001f1e,uStack_3c);
                                    ipc_log_string(*(arg1 + 0x1568),"QMI request failed 0x%x\n",uStack_3c);
                                    uVar10 = *(arg1 + 0x155c);
                                    *(arg1 + 0x155c) = 0;
                                    *(arg1 + 0x1558) = uVar10;
code_r0x08006c70:
                                    ipc_log_string(*(arg1 + 0x1570),"QMI request failed 0x%x\n",uStack_3c);
                                }
                                uVar13 = 0xffffff87;
                            }
                        }
code_r0x08006c88:
                        _dev_err(*(arg1 + 0x7d8),"failed to select h/w instance\n");
                        *(arg1 + 0x7a8) = 0;
                    }
code_r0x08006c9c:
                    qmi_handle_release(puVar6);
                }
                devm_kfree(*(arg1 + 0x7d8),puVar6);
                uVar7 = extraout_x8_02;
            }
            uVar9 = *(arg1 + 0x1500);
            pcVar8 = uVar13 & 0xffffffff;
            uVar12 = sym.__slimbus_dbg(uVar7,0x8000dc8,pcVar8,uVar9);
            uVar10 = uVar9 >> 0x20;
            if (*(arg1 + 0x155c) < 1) {
                if (*(arg1 + 0x155c) != 0) goto code_r0x080069ec;
            }
            else {
                _printk(0x8001ebe,uVar13 & 0xffffffff,*(arg1 + 0x1500));
                ipc_log_string(*(arg1 + 0x1568),"qmi init fail, ret:%d, state:%d\n",uVar13 & 0xffffffff,
                               *(arg1 + 0x1500));
                uVar10 = *(arg1 + 0x155c);
                *(arg1 + 0x155c) = 0;
                *(arg1 + 0x1558) = uVar10;
            }
            uVar9 = *(arg1 + 0x1500);
            pcVar8 = uVar13 & 0xffffffff;
            uVar12 = ipc_log_string(*(arg1 + 0x1570),"qmi init fail, ret:%d, state:%d\n",pcVar8,uVar9);
            uVar10 = uVar9 >> 0x20;
        }
        else {
            sym.__slimbus_dbg(*(arg1 + 0x7a8),0x8000de9,arg2,in_x3);
            iVar4 = *(arg1 + 0x155c);
            pcVar8 = arg2;
            if (2 < iVar4) {
                ipc_log_string(*(arg1 + 0x1568),"qmi handle already allocated\n");
                iVar4 = *(arg1 + 0x155c);
                pcVar8 = arg2;
            }
            if (iVar4 == 0) {
                ipc_log_string(*(arg1 + 0x1570),"qmi handle already allocated\n");
            }
code_r0x080068d8:
            noname_1_00 = complete(arg1 + 0x7b0);
            iVar11 = *(arg1 + 0x3a0);
            if (((*(iVar11 + 0x200) & 7) == 0) && (*(iVar11 + 0x20c) == 2)) {
                __pm_runtime_resume(iVar11,0);
            }
            else {
                sym.qcom_slim_ngd_runtime_resume(iVar11,noname_1_00,pcVar8);
            }
            iVar11 = *(arg1 + 0x3a0);
            uVar7 = ktime_get_mono_fast_ns();
            *(iVar11 + 0x218) = uVar7;
            __pm_runtime_idle(*(arg1 + 0x3a0),5);
            pcVar8 = "qcom_slim_ngd_enable";
            noname_0 = *(arg1 + 0x3a0) + 0x1f8;
            iVar11 = *noname_0;
            sym.__slimbus_dbg(noname_0,0x8001ee1,0x800141a,iVar11);
            uVar5 = *(arg1 + 0x155c);
            if (2 < uVar5) {
                pcVar8 = "qcom_slim_ngd_enable";
                iVar11 = *(*(arg1 + 0x3a0) + 0x1f8);
                ipc_log_string(*(arg1 + 0x1568),"SLIM %s: PM put count:%d\n");
                uVar5 = *(arg1 + 0x155c);
            }
            uVar12 = uVar5;
            if (uVar5 == 0) {
                pcVar8 = "qcom_slim_ngd_enable";
                iVar11 = *(*(arg1 + 0x3a0) + 0x1f8);
                ipc_log_string(*(arg1 + 0x1570),"SLIM %s: PM put count:%d\n");
                uVar12 = extraout_x8_01;
            }
            uVar12 = sym.__slimbus_dbg(uVar12,0x8000ed6,pcVar8,iVar11);
            uVar10 = iVar11 >> 0x20;
            iVar4 = *(arg1 + 0x155c);
            if (2 < iVar4) {
                uVar12 = ipc_log_string(*(arg1 + 0x1568),"SLIM NGD Enable\n");
                iVar4 = *(arg1 + 0x155c);
            }
            if (iVar4 == 0) {
                uVar7 = *(arg1 + 0x1570);
                pcVar14 = "SLIM NGD Enable\n";
                goto code_r0x080069e8;
            }
        }
    }
code_r0x080069ec:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_38) {
        return uVar12;
    }
    iVar11 = __stack_chk_fail();
    uVar12 = CONCAT44(uVar10,*noname_0_04);
    *extraout_x18 = 0x8006d38;
    iVar11 = *(iVar11 + 0x98);
    sym.__slimbus_dbg(noname_0_04,0x8001c66,pcVar8,uVar12);
    iVar4 = *(iVar11 + 0x155c);
    if (2 < iVar4) {
        ipc_log_string(*(iVar11 + 0x1568),"Slim runtime resume\n");
        iVar4 = *(iVar11 + 0x155c);
    }
    if (iVar4 == 0) {
        ipc_log_string(*(iVar11 + 0x1570),"Slim runtime resume\n");
    }
    iVar1 = iVar11 + 0x1478;
    mutex_lock(iVar1);
    if (*(iVar11 + 0x7a8) == 0) {
        sym.__slimbus_dbg(0,0x800110b,0x8001c49,uVar12);
        iVar4 = *(iVar11 + 0x155c);
        if (1 < iVar4) {
            _printk(0x8000f9c,"qcom_slim_ngd_runtime_resume");
            ipc_log_string(*(iVar11 + 0x1568),"%s QMI handle is NULL\n","qcom_slim_ngd_runtime_resume");
            iVar4 = *(iVar11 + 0x155c);
        }
        if (iVar4 == 0) {
            ipc_log_string(*(iVar11 + 0x1570),"%s QMI handle is NULL\n","qcom_slim_ngd_runtime_resume");
        }
        mutex_unlock(iVar1);
        uVar5 = 0;
        goto code_r0x08007284;
    }
    puVar2 = iVar11 + 0x157c;
    if (*puVar2 != 0) {
        enable_irq(*(iVar11 + 0x1578));
        *puVar2 = 0;
        sym.__slimbus_dbg(noname_0_05,0x8000943,pcVar8,uVar12);
        iVar4 = *(iVar11 + 0x155c);
        if (2 < iVar4) {
            ipc_log_string(*(iVar11 + 0x1568),"Slim ngd IRQ enabled\n");
            iVar4 = *(iVar11 + 0x155c);
        }
        if (iVar4 == 0) {
            ipc_log_string(*(iVar11 + 0x1570),"Slim ngd IRQ enabled\n");
        }
    }
    if (*(iVar11 + 0x1500) < 2) {
code_r0x08007074:
        uVar5 = 0;
        *(iVar11 + 0x1500) = 0;
    }
    else {
        iVar15 = *(iVar11 + 2000);
        sym.__slimbus_dbg(*(iVar11 + 0x1500),0x800176c,pcVar8,uVar12);
        iVar4 = *(iVar11 + 0x155c);
        if (2 < iVar4) {
            ipc_log_string(*(iVar11 + 0x1568),"SLIM: NGD power up\n");
            iVar4 = *(iVar11 + 0x155c);
        }
        if (iVar4 == 0) {
            ipc_log_string(*(iVar11 + 0x1570),"SLIM: NGD power up\n");
        }
        uVar5 = *(iVar11 + 0x1500);
        if (uVar5 != 3) {
code_r0x08006ea0:
            if ((uVar5 & 0xfffffffe) == 2) {
                sym.__slimbus_dbg(2,0x80008a8,pcVar8,uVar12);
                iVar4 = *(iVar11 + 0x155c);
                if (2 < iVar4) {
                    ipc_log_string(*(iVar11 + 0x1568),"Sending QMI power on request\n");
                    iVar4 = *(iVar11 + 0x155c);
                }
                if (iVar4 == 0) {
                    ipc_log_string(*(iVar11 + 0x1570),"Sending QMI power on request\n");
                }
                uVar5 = sym.qcom_slim_qmi_power_request(iVar11,1);
                if (uVar5 != 0) {
                    pcVar14 = uVar5;
                    pcVar8 = pcVar14;
                    sym.__slimbus_dbg(noname_0_07,0x8000c8a,pcVar14,uVar12);
                    if (*(iVar11 + 0x155c) < 1) {
                        if (*(iVar11 + 0x155c) != 0) goto code_r0x080070b4;
                    }
                    else {
                        _printk(0x80014ca,pcVar14);
                        ipc_log_string(*(iVar11 + 0x1568),"SLIM QMI power request failed:%d\n",pcVar14);
                        uVar10 = *(iVar11 + 0x155c);
                        *(iVar11 + 0x155c) = 0;
                        *(iVar11 + 0x1558) = uVar10;
                    }
                    ipc_log_string(*(iVar11 + 0x1570),"SLIM QMI power request failed:%d\n");
                    pcVar8 = pcVar14;
                    goto code_r0x080070b4;
                }
            }
            sym.readl_relaxed(*(iVar11 + 0x7e0));
            *(iVar11 + 0x1530) = extraout_x0 & 0xffff;
            uVar5 = sym.readl_relaxed(*(iVar15 + 8) + 4);
            if ((uVar5 >> 1 & 1) == 0) {
                *(iVar11 + 0x1338) = 0;
                sym.writel_relaxed(0xfe000000,*(iVar15 + 8) + 0x10);
                uVar5 = sym.readl_relaxed(*(iVar15 + 8) + 8);
                sym.writel_relaxed(uVar5 | 0x10000,*(iVar15 + 8) + 8);
                sym.qcom_slim_ngd_setup(iVar11);
                iVar4 = wait_for_completion_timeout(iVar11 + 0x1338,0x9c4);
                if (iVar4 == 0) {
                    _dev_err(*(iVar11 + 0x7d8),"capability exchange timed-out\n");
                    uVar13 = sym.readl_relaxed(*(iVar15 + 8));
                    uVar13 = uVar13 & 0xffffffff;
                    uVar12 = sym.readl_relaxed(*(iVar15 + 8) + 4);
                    pcVar14 = uVar12 & 0xffffffff;
                    pcVar8 = pcVar14;
                    uVar12 = uVar13;
                    sym.__slimbus_dbg(noname_0_09,0x800160f,pcVar14,uVar13);
                    iVar4 = *(iVar11 + 0x155c);
                    if (1 < iVar4) {
                        _printk(0x8001097,pcVar14,uVar13);
                        pcVar8 = pcVar14;
                        uVar12 = uVar13;
                        ipc_log_string(*(iVar11 + 0x1568),"slim capability time-out stat:0x%x,cfg:0x%x\n");
                        iVar4 = *(iVar11 + 0x155c);
                    }
                    if (iVar4 == 0) {
                        ipc_log_string(*(iVar11 + 0x1570),"slim capability time-out stat:0x%x,cfg:0x%x\n");
                        pcVar8 = pcVar14;
                        uVar12 = uVar13;
                    }
                    goto code_r0x080070b4;
                }
                if (*(iVar11 + 0x1500) == 3) {
                    sym.__slimbus_dbg(3,0x8001b9b,pcVar8,uVar12);
                    iVar4 = *(iVar11 + 0x155c);
                    if (2 < iVar4) {
                        ipc_log_string(*(iVar11 + 0x1568),"ADSP slimbus power up now\n");
                        iVar4 = *(iVar11 + 0x155c);
                    }
                    if (iVar4 == 0) {
                        ipc_log_string(*(iVar11 + 0x1570),"ADSP slimbus power up now\n");
                    }
                    complete_all(iVar11 + 0x1358);
                }
            }
            else {
                sym.qcom_slim_ngd_setup(iVar11);
            }
            goto code_r0x08007074;
        }
        iVar4 = wait_for_completion_timeout(iVar11 + 0x7b0,0xfa);
        if (iVar4 != 0) {
            uVar5 = *(iVar11 + 0x1500);
            goto code_r0x08006ea0;
        }
        sym.__slimbus_dbg(noname_0_06,0x8000c02,pcVar8,uVar12);
        if (*(iVar11 + 0x155c) < 1) {
            if (*(iVar11 + 0x155c) == 0) goto code_r0x080070a4;
        }
        else {
            _printk(0x8001c7b);
            ipc_log_string(*(iVar11 + 0x1568),"slimbus QMI init timed out\n");
            uVar10 = *(iVar11 + 0x155c);
            *(iVar11 + 0x155c) = 0;
            *(iVar11 + 0x1558) = uVar10;
code_r0x080070a4:
            ipc_log_string(*(iVar11 + 0x1570),"slimbus QMI init timed out\n");
        }
code_r0x080070b4:
        if (*(iVar11 + 0x1500) == 3) {
            sym.__slimbus_dbg(3,0x8000c6c,pcVar8,uVar12);
            uVar5 = *(iVar11 + 0x155c);
            if (1 < uVar5) {
                _printk(0x8000e37);
                ipc_log_string(*(iVar11 + 0x1568),"HW wakeup attempt during SSR\n");
                uVar5 = *(iVar11 + 0x155c);
            }
            uVar13 = uVar5;
            if (uVar5 == 0) {
                ipc_log_string(*(iVar11 + 0x1570),"HW wakeup attempt during SSR\n");
                uVar13 = extraout_x8_03;
            }
        }
        else {
            uVar13 = 2;
            *(iVar11 + 0x1500) = 2;
        }
        pcVar8 = "qcom_slim_ngd_runtime_resume";
        sym.__slimbus_dbg(uVar13,0x800182e,0x8001c49,uVar12);
        if (*(iVar11 + 0x155c) < 2) {
            if (*(iVar11 + 0x155c) == 0) goto code_r0x080071a0;
code_r0x08007128:
            uVar3 = *puVar2;
        }
        else {
            pcVar8 = "qcom_slim_ngd_runtime_resume";
            _printk(0x8000913,"qcom_slim_ngd_runtime_resume");
            ipc_log_string(*(iVar11 + 0x1568),"%s Power up request failed, try resume again\n");
            if (*(iVar11 + 0x155c) != 0) goto code_r0x08007128;
code_r0x080071a0:
            pcVar8 = "qcom_slim_ngd_runtime_resume";
            ipc_log_string(*(iVar11 + 0x1570),"%s Power up request failed, try resume again\n");
            uVar3 = *puVar2;
        }
        if (uVar3 == 0) {
            disable_irq(*(iVar11 + 0x1578));
            *puVar2 = 1;
            sym.__slimbus_dbg(1,0x8001a6e,pcVar8,uVar12);
            iVar4 = *(iVar11 + 0x155c);
            if (2 < iVar4) {
                ipc_log_string(*(iVar11 + 0x1568),"Slim ngd IRQ disabled\n");
                iVar4 = *(iVar11 + 0x155c);
            }
            if (iVar4 == 0) {
                ipc_log_string(*(iVar11 + 0x1570),"Slim ngd IRQ disabled\n");
            }
        }
        uVar5 = 0xfffffff5;
    }
    mutex_unlock(iVar1);
    sym.__slimbus_dbg(noname_0_08,0x80018b4,uVar5,*puVar2);
    iVar4 = *(iVar11 + 0x155c);
    if (2 < iVar4) {
        ipc_log_string(*(iVar11 + 0x1568),"Slim runtime resume: ret %d irq_disabled %d\n",uVar5,*puVar2);
        iVar4 = *(iVar11 + 0x155c);
    }
    if (iVar4 == 0) {
        ipc_log_string(*(iVar11 + 0x1570),"Slim runtime resume: ret %d irq_disabled %d\n",uVar5,*puVar2);
    }
code_r0x08007284:
    return uVar5;
}


// ===== sym.qcom_slim_ngd_runtime_resume @ 0x08006d44 (size 1684) =====

uint32_t sym.qcom_slim_ngd_runtime_resume(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    uint8_t *puVar2;
    uint uVar3;
    uint8_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t extraout_x0;
    uint64_t uVar7;
    char *arg2_00;
    uint64_t in_x3;
    ulong in_x8;
    ulong noname_0;
    ulong noname_0_00;
    ulong noname_0_01;
    uint64_t extraout_x8;
    ulong noname_0_02;
    ulong noname_0_03;
    ulong *in_x18;
    int64_t arg1_00;
    uint64_t uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    sym.__slimbus_dbg(in_x8,0x8001c66,arg2,in_x3);
    iVar5 = *(arg1_00 + 0x155c);
    if (2 < iVar5) {
        ipc_log_string(*(arg1_00 + 0x1568),"Slim runtime resume\n");
        iVar5 = *(arg1_00 + 0x155c);
    }
    if (iVar5 == 0) {
        ipc_log_string(*(arg1_00 + 0x1570),"Slim runtime resume\n");
    }
    iVar1 = arg1_00 + 0x1478;
    mutex_lock(iVar1);
    if (*(arg1_00 + 0x7a8) == 0) {
        sym.__slimbus_dbg(0,0x800110b,0x8001c49,in_x3);
        iVar5 = *(arg1_00 + 0x155c);
        if (1 < iVar5) {
            _printk(0x8000f9c,"qcom_slim_ngd_runtime_resume");
            ipc_log_string(*(arg1_00 + 0x1568),"%s QMI handle is NULL\n","qcom_slim_ngd_runtime_resume");
            iVar5 = *(arg1_00 + 0x155c);
        }
        if (iVar5 == 0) {
            ipc_log_string(*(arg1_00 + 0x1570),"%s QMI handle is NULL\n","qcom_slim_ngd_runtime_resume");
        }
        mutex_unlock(iVar1);
        return 0;
    }
    puVar2 = arg1_00 + 0x157c;
    if (*puVar2 != 0) {
        enable_irq(*(arg1_00 + 0x1578));
        *puVar2 = 0;
        sym.__slimbus_dbg(noname_0,0x8000943,arg2,in_x3);
        iVar5 = *(arg1_00 + 0x155c);
        if (2 < iVar5) {
            ipc_log_string(*(arg1_00 + 0x1568),"Slim ngd IRQ enabled\n");
            iVar5 = *(arg1_00 + 0x155c);
        }
        if (iVar5 == 0) {
            ipc_log_string(*(arg1_00 + 0x1570),"Slim ngd IRQ enabled\n");
        }
    }
    if (1 < *(arg1_00 + 0x1500)) {
        iVar9 = *(arg1_00 + 2000);
        sym.__slimbus_dbg(*(arg1_00 + 0x1500),0x800176c,arg2,in_x3);
        iVar5 = *(arg1_00 + 0x155c);
        if (2 < iVar5) {
            ipc_log_string(*(arg1_00 + 0x1568),"SLIM: NGD power up\n");
            iVar5 = *(arg1_00 + 0x155c);
        }
        if (iVar5 == 0) {
            ipc_log_string(*(arg1_00 + 0x1570),"SLIM: NGD power up\n");
        }
        uVar6 = *(arg1_00 + 0x1500);
        if (uVar6 == 3) {
            iVar5 = wait_for_completion_timeout(arg1_00 + 0x7b0,0xfa);
            if (iVar5 != 0) {
                uVar6 = *(arg1_00 + 0x1500);
                goto code_r0x08006ea0;
            }
            sym.__slimbus_dbg(noname_0_00,0x8000c02,arg2,in_x3);
            if (*(arg1_00 + 0x155c) < 1) {
                if (*(arg1_00 + 0x155c) == 0) goto code_r0x080070a4;
            }
            else {
                _printk(0x8001c7b);
                ipc_log_string(*(arg1_00 + 0x1568),"slimbus QMI init timed out\n");
                uVar3 = *(arg1_00 + 0x155c);
                *(arg1_00 + 0x155c) = 0;
                *(arg1_00 + 0x1558) = uVar3;
code_r0x080070a4:
                ipc_log_string(*(arg1_00 + 0x1570),"slimbus QMI init timed out\n");
            }
code_r0x080070b4:
            if (*(arg1_00 + 0x1500) == 3) {
                sym.__slimbus_dbg(3,0x8000c6c,arg2,in_x3);
                uVar6 = *(arg1_00 + 0x155c);
                if (1 < uVar6) {
                    _printk(0x8000e37);
                    ipc_log_string(*(arg1_00 + 0x1568),"HW wakeup attempt during SSR\n");
                    uVar6 = *(arg1_00 + 0x155c);
                }
                uVar8 = uVar6;
                if (uVar6 == 0) {
                    ipc_log_string(*(arg1_00 + 0x1570),"HW wakeup attempt during SSR\n");
                    uVar8 = extraout_x8;
                }
            }
            else {
                uVar8 = 2;
                *(arg1_00 + 0x1500) = 2;
            }
            arg2_00 = "qcom_slim_ngd_runtime_resume";
            sym.__slimbus_dbg(uVar8,0x800182e,0x8001c49,in_x3);
            if (*(arg1_00 + 0x155c) < 2) {
                if (*(arg1_00 + 0x155c) != 0) goto code_r0x08007128;
code_r0x080071a0:
                arg2_00 = "qcom_slim_ngd_runtime_resume";
                ipc_log_string(*(arg1_00 + 0x1570),"%s Power up request failed, try resume again\n");
                uVar4 = *puVar2;
            }
            else {
                arg2_00 = "qcom_slim_ngd_runtime_resume";
                _printk(0x8000913,"qcom_slim_ngd_runtime_resume");
                ipc_log_string(*(arg1_00 + 0x1568),"%s Power up request failed, try resume again\n");
                if (*(arg1_00 + 0x155c) == 0) goto code_r0x080071a0;
code_r0x08007128:
                uVar4 = *puVar2;
            }
            if (uVar4 == 0) {
                disable_irq(*(arg1_00 + 0x1578));
                *puVar2 = 1;
                sym.__slimbus_dbg(1,0x8001a6e,arg2_00,in_x3);
                iVar5 = *(arg1_00 + 0x155c);
                if (2 < iVar5) {
                    ipc_log_string(*(arg1_00 + 0x1568),"Slim ngd IRQ disabled\n");
                    iVar5 = *(arg1_00 + 0x155c);
                }
                if (iVar5 == 0) {
                    ipc_log_string(*(arg1_00 + 0x1570),"Slim ngd IRQ disabled\n");
                }
            }
            uVar6 = 0xfffffff5;
            goto code_r0x0800721c;
        }
code_r0x08006ea0:
        if ((uVar6 & 0xfffffffe) == 2) {
            sym.__slimbus_dbg(2,0x80008a8,arg2,in_x3);
            iVar5 = *(arg1_00 + 0x155c);
            if (2 < iVar5) {
                ipc_log_string(*(arg1_00 + 0x1568),"Sending QMI power on request\n");
                iVar5 = *(arg1_00 + 0x155c);
            }
            if (iVar5 == 0) {
                ipc_log_string(*(arg1_00 + 0x1570),"Sending QMI power on request\n");
            }
            uVar6 = sym.qcom_slim_qmi_power_request(arg1_00,1);
            if (uVar6 != 0) {
                uVar8 = uVar6;
                arg2 = uVar8;
                sym.__slimbus_dbg(noname_0_01,0x8000c8a,uVar8,in_x3);
                if (*(arg1_00 + 0x155c) < 1) {
                    if (*(arg1_00 + 0x155c) != 0) goto code_r0x080070b4;
                }
                else {
                    _printk(0x80014ca,uVar8);
                    ipc_log_string(*(arg1_00 + 0x1568),"SLIM QMI power request failed:%d\n",uVar8);
                    uVar3 = *(arg1_00 + 0x155c);
                    *(arg1_00 + 0x155c) = 0;
                    *(arg1_00 + 0x1558) = uVar3;
                }
                ipc_log_string(*(arg1_00 + 0x1570),"SLIM QMI power request failed:%d\n");
                arg2 = uVar8;
                goto code_r0x080070b4;
            }
        }
        sym.readl_relaxed(*(arg1_00 + 0x7e0));
        *(arg1_00 + 0x1530) = extraout_x0 & 0xffff;
        uVar6 = sym.readl_relaxed(*(iVar9 + 8) + 4);
        if ((uVar6 >> 1 & 1) == 0) {
            *(arg1_00 + 0x1338) = 0;
            sym.writel_relaxed(0xfe000000,*(iVar9 + 8) + 0x10);
            uVar6 = sym.readl_relaxed(*(iVar9 + 8) + 8);
            sym.writel_relaxed(uVar6 | 0x10000,*(iVar9 + 8) + 8);
            sym.qcom_slim_ngd_setup(arg1_00);
            iVar5 = wait_for_completion_timeout(arg1_00 + 0x1338,0x9c4);
            if (iVar5 == 0) {
                _dev_err(*(arg1_00 + 0x7d8),"capability exchange timed-out\n");
                uVar8 = sym.readl_relaxed(*(iVar9 + 8));
                uVar8 = uVar8 & 0xffffffff;
                uVar7 = sym.readl_relaxed(*(iVar9 + 8) + 4);
                uVar7 = uVar7 & 0xffffffff;
                arg2 = uVar7;
                in_x3 = uVar8;
                sym.__slimbus_dbg(noname_0_03,0x800160f,uVar7,uVar8);
                iVar5 = *(arg1_00 + 0x155c);
                if (1 < iVar5) {
                    _printk(0x8001097,uVar7,uVar8);
                    arg2 = uVar7;
                    in_x3 = uVar8;
                    ipc_log_string(*(arg1_00 + 0x1568),"slim capability time-out stat:0x%x,cfg:0x%x\n");
                    iVar5 = *(arg1_00 + 0x155c);
                }
                if (iVar5 == 0) {
                    ipc_log_string(*(arg1_00 + 0x1570),"slim capability time-out stat:0x%x,cfg:0x%x\n");
                    arg2 = uVar7;
                    in_x3 = uVar8;
                }
                goto code_r0x080070b4;
            }
            if (*(arg1_00 + 0x1500) == 3) {
                sym.__slimbus_dbg(3,0x8001b9b,arg2,in_x3);
                iVar5 = *(arg1_00 + 0x155c);
                if (2 < iVar5) {
                    ipc_log_string(*(arg1_00 + 0x1568),"ADSP slimbus power up now\n");
                    iVar5 = *(arg1_00 + 0x155c);
                }
                if (iVar5 == 0) {
                    ipc_log_string(*(arg1_00 + 0x1570),"ADSP slimbus power up now\n");
                }
                complete_all(arg1_00 + 0x1358);
            }
        }
        else {
            sym.qcom_slim_ngd_setup(arg1_00);
        }
    }
    uVar6 = 0;
    *(arg1_00 + 0x1500) = 0;
code_r0x0800721c:
    mutex_unlock(iVar1);
    sym.__slimbus_dbg(noname_0_02,0x80018b4,uVar6,*puVar2);
    iVar5 = *(arg1_00 + 0x155c);
    if (2 < iVar5) {
        ipc_log_string(*(arg1_00 + 0x1568),"Slim runtime resume: ret %d irq_disabled %d\n",uVar6,*puVar2);
        iVar5 = *(arg1_00 + 0x155c);
    }
    if (iVar5 == 0) {
        ipc_log_string(*(arg1_00 + 0x1570),"Slim runtime resume: ret %d irq_disabled %d\n",uVar6,*puVar2);
    }
    return uVar6;
}


// ===== sym.qcom_slim_qmi_power_resp_cb @ 0x080073d8 (size 76) =====

void sym.qcom_slim_qmi_power_resp_cb(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*arg2 != 0) {
        noname_1 = _printk(0x8000f7b);
    }
    complete(noname_1,arg1 + 0x10);
    return;
}


// ===== sym.qcom_slim_qmi_power_request @ 0x08007424 (size 696) =====

uint64_t sym.qcom_slim_qmi_power_request(int64_t arg1,uint32_t arg2)

{
    uint uVar1;
    uint32_t uVar2;
    uint64_t arg2_00;
    uint32_t *puVar3;
    int64_t iVar4;
    int iVar5;
    ulong noname_0;
    ulong noname_0_00;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t auStack_88 [4];
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    auStack_88[0] = 1;
    if ((arg2 & 1) != 0) {
        auStack_88[0] = 2;
    }
    auStack_88[1] = 0;
    auStack_88[2] = 0;
    uStack_2c = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    qmi_txn_init(*(arg1 + 0x7a8),&uStack_78,obj.slimbus_power_resp_msg_v01_ei,&uStack_2c);
    iVar4 = 0x21;
    arg2_00 = qmi_send_request(*(arg1 + 0x7a8),0,&uStack_78,0x21,0xe,obj.slimbus_power_req_msg_v01_ei,auStack_88);
    if (-1 < arg2_00) {
        uVar2 = qmi_txn_wait(&uStack_78,1000);
        if (uVar2 < 0) {
            arg2_00 = uVar2;
            sym.__slimbus_dbg(noname_0_00,0x8000e07,arg2_00,iVar4);
            if (*(arg1 + 0x155c) < 1) {
                if (*(arg1 + 0x155c) != 0) goto code_r0x0800760c;
            }
            else {
                _printk(0x8000e1e,arg2_00);
                ipc_log_string(*(arg1 + 0x1568),"QMI TXN wait fail: %d\n",arg2_00);
                uVar1 = *(arg1 + 0x155c);
                *(arg1 + 0x155c) = 0;
                *(arg1 + 0x1558) = uVar1;
            }
            ipc_log_string(*(arg1 + 0x1570),"QMI TXN wait fail: %d\n",arg2_00);
            goto code_r0x0800760c;
        }
        if (uStack_2c == 0) {
            sym.__slimbus_dbg(noname_0_00,0x8001bb6,0x8001a4d,auStack_88[0]);
            iVar5 = *(arg1 + 0x155c);
            if (2 < iVar5) {
                ipc_log_string(*(arg1 + 0x1568),"%s end %d\n","qcom_slim_qmi_send_power_request",auStack_88[0]);
                iVar5 = *(arg1 + 0x155c);
            }
            if (iVar5 == 0) {
                ipc_log_string(*(arg1 + 0x1570),"%s end %d\n","qcom_slim_qmi_send_power_request",auStack_88[0]);
            }
            arg2_00 = 0;
            goto code_r0x0800760c;
        }
        sym.__slimbus_dbg(noname_0_00,0x8000a15,uStack_2c,iVar4);
        if (*(arg1 + 0x155c) < 1) {
            if (*(arg1 + 0x155c) == 0) goto code_r0x080074f8;
        }
        else {
            _printk(0x8001f1e,uStack_2c);
            ipc_log_string(*(arg1 + 0x1568),"QMI request failed 0x%x\n",uStack_2c);
            uVar1 = *(arg1 + 0x155c);
            *(arg1 + 0x155c) = 0;
            *(arg1 + 0x1558) = uVar1;
code_r0x080074f8:
            ipc_log_string(*(arg1 + 0x1570),"QMI request failed 0x%x\n",uStack_2c);
        }
        arg2_00 = 0xffffff87;
        goto code_r0x0800760c;
    }
    sym.__slimbus_dbg(noname_0,0x80014b4,arg2_00 & 0xffffffff,iVar4);
    if (*(arg1 + 0x155c) < 1) {
        if (*(arg1 + 0x155c) == 0) goto code_r0x0800753c;
    }
    else {
        _printk(0x80015f7,arg2_00 & 0xffffffff);
        ipc_log_string(*(arg1 + 0x1568),"QMI send req fail %d\n",arg2_00 & 0xffffffff);
        uVar1 = *(arg1 + 0x155c);
        *(arg1 + 0x155c) = 0;
        *(arg1 + 0x1558) = uVar1;
code_r0x0800753c:
        ipc_log_string(*(arg1 + 0x1570),"QMI send req fail %d\n",arg2_00 & 0xffffffff);
    }
    qmi_txn_cancel(&uStack_78);
code_r0x0800760c:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return arg2_00 & 0xffffffff;
    }
    puVar3 = __stack_chk_fail();
    *extraout_x18 = sym.readl_relaxed;
    log_read_mmio(0x20,puVar3,0x80076e0);
    uVar2 = *puVar3;
    log_post_read_mmio(uVar2,0x20,puVar3,0x8007714);
    return uVar2;
}


// ===== sym.readl_relaxed @ 0x080076dc (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x80076e0);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8007714);
    return uVar1;
}


// ===== sym.qcom_slim_ngd_setup @ 0x0800774c (size 1228) =====

void sym.qcom_slim_ngd_setup(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    char *pcVar7;
    uint *puVar8;
    int64_t in_x2;
    int64_t in_x3;
    int iVar9;
    ulong noname_0;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar10;
    int64_t *piVar11;
    int64_t iVar12;
    code *pcVar13;
    int64_t iVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    uVar2 = sym.readl_relaxed(*(*(arg1 + 2000) + 8));
    sym.__slimbus_dbg(noname_0,0x800185c,in_x2,in_x3);
    iVar9 = *(arg1 + 0x155c);
    if (2 < iVar9) {
        ipc_log_string(*(arg1 + 0x1568),"SLIM: NGD setup\n");
        iVar9 = *(arg1 + 0x155c);
    }
    if (iVar9 == 0) {
        ipc_log_string(*(arg1 + 0x1570),"SLIM: NGD setup\n");
    }
    if ((*(arg1 + 0x1500) & 0xfffffffe) != 2) goto code_r0x08007b80;
    sym.__slimbus_dbg(2,0x8000cac,in_x2,in_x3);
    iVar9 = *(arg1 + 0x155c);
    if (2 < iVar9) {
        ipc_log_string(*(arg1 + 0x1568),"SLIM: NGD init dma\n");
        iVar9 = *(arg1 + 0x155c);
    }
    if (iVar9 == 0) {
        ipc_log_string(*(arg1 + 0x1570),"SLIM: NGD init dma\n");
    }
    uVar10 = *(arg1 + 0x7d8);
    uStack_90 = 0;
    uVar4 = dma_request_chan(uVar10,0x8000fb5);
    *(arg1 + 0x7e8) = uVar4;
    if (uVar4 < 0xfffffffffffff001) {
        pcVar7 = arg1 + 0x1554;
        if (*pcVar7 == '\0') {
            iVar5 = dma_alloc_attrs(uVar10,0x4b0,&uStack_90,0xcc0,0);
            *(arg1 + 0x1518) = iVar5;
        }
        else {
            iVar5 = *(arg1 + 0x1540);
            *(arg1 + 0x1518) = iVar5;
        }
        if (iVar5 == 0) {
code_r0x08007b68:
            dma_release_channel(*(arg1 + 0x7e8));
            goto code_r0x08007b70;
        }
        if (*pcVar7 == '\0') {
            *(arg1 + 0x1508) = uStack_90;
        }
        else {
            *(arg1 + 0x1508) = **(arg1 + 0x1538);
            __memset_io(iVar5,0,0x4b0);
            *(arg1 + 0x1540) = *(arg1 + 0x1540) + 0x4b0;
            **(arg1 + 0x1538) = **(arg1 + 0x1538) + 0x4b0;
        }
        iVar14 = 0;
        iVar5 = 0;
        do {
            iVar12 = arg1 + iVar14;
            piVar11 = *(arg1 + 0x7e8);
            iStack_78 = 0;
            uStack_70 = 0;
            iVar1 = iVar5 + *(arg1 + 0x1508);
            *(iVar12 + 0x800) = arg1;
            uStack_88 = 0;
            uStack_80 = 0;
            *(iVar12 + 0x818) = iVar1;
            *(iVar12 + 0x820) = *(arg1 + 0x1518) + iVar5;
            sg_init_table(&uStack_88,1);
            uStack_70 = CONCAT44(uStack_70._4_4_,0x28);
            iStack_78 = iVar1;
            if (((piVar11 == NULL) || (*piVar11 == 0)) || (pcVar13 = *(*piVar11 + 0x138), pcVar13 == NULL)) {
                *(iVar12 + 0x7f8) = 0;
code_r0x08007b18:
                _dev_err(*(arg1 + 0x7d8),"Unable to prepare rx channel\n");
                _dev_err(uVar10,"post_rx_msgq() failed 0x%x\n",0xffffffea);
                if (*pcVar7 == '\0') {
                    dma_free_attrs(uVar10,0x4b0,*(arg1 + 0x1518),*(arg1 + 0x1508),0);
                }
                goto code_r0x08007b68;
            }
            __cfi_slowpath_diag(0x3675599da7c39b65,pcVar13,0x8000820);
            iVar6 = (*pcVar13)(piVar11,&uStack_88,1,2,1,0);
            iVar1 = arg1 + iVar14;
            *(iVar1 + 0x7f8) = iVar6;
            if (iVar6 == 0) goto code_r0x08007b18;
            *(iVar6 + 0x28) = sym.qcom_slim_ngd_rx_msgq_cb.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
            *(*(iVar1 + 0x7f8) + 0x38) = iVar12 + 0x7f8;
            iVar12 = *(iVar1 + 0x7f8);
            pcVar13 = *(iVar12 + 0x18);
            __cfi_slowpath_diag(0xc97b94b4f4a7b659,pcVar13,0x8000840);
            uVar3 = (*pcVar13)(iVar12);
            iVar5 = iVar5 + 0x28;
            iVar14 = iVar14 + 0x30;
            **(iVar1 + 0x7f8) = uVar3;
        } while (iVar5 != 0x4b0);
        piVar11 = *(arg1 + 0x7e8);
        pcVar13 = *(*piVar11 + 400);
        __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar13,0x8000860);
        (*pcVar13)(piVar11);
code_r0x08007a30:
        uVar10 = *(arg1 + 0x7d8);
        uStack_88 = 0;
        uVar4 = dma_request_chan(uVar10,0x800168c);
        *(arg1 + 0x7f0) = uVar4;
        if (uVar4 < 0xfffffffffffff001) {
            if (*(arg1 + 0x1554) == '\0') {
                iVar5 = dma_alloc_attrs(uVar10,0x4d8,&uStack_88,0xcc0,0);
                *(arg1 + 0x1520) = iVar5;
            }
            else {
                iVar5 = *(arg1 + 0x1540);
                *(arg1 + 0x1520) = iVar5;
            }
            if (iVar5 != 0) {
                if (*(arg1 + 0x1554) == '\0') {
                    *(arg1 + 0x1510) = uStack_88;
                }
                else {
                    *(arg1 + 0x1510) = **(arg1 + 0x1538);
                    __memset_io(iVar5,0,0x4d8);
                    *(arg1 + 0x1540) = *(arg1 + 0x1540) + 0x4d8;
                    **(arg1 + 0x1538) = **(arg1 + 0x1538) + 0x4d8;
                }
                uVar10 = _raw_spin_lock_irqsave(arg1 + 0x1440);
                *(arg1 + 0x1528) = 0;
                _raw_spin_unlock_irqrestore(arg1 + 0x1440,uVar10);
                goto code_r0x08007b80;
            }
            dma_release_channel(*(arg1 + 0x7f0));
        }
        else {
            _dev_err(uVar10,"Failed to request TX dma channel");
            iVar9 = *(arg1 + 0x7f0);
            *(arg1 + 0x7f0) = 0;
            if (iVar9 == 0) goto code_r0x08007b80;
        }
        uVar10 = *(arg1 + 0x7d8);
        pcVar7 = "tx dma init failed\n";
    }
    else {
        _dev_err(uVar10,"Failed to request RX dma channel");
        iVar9 = *(arg1 + 0x7e8);
        *(arg1 + 0x7e8) = 0;
        if (iVar9 == 0) goto code_r0x08007a30;
code_r0x08007b70:
        uVar10 = *(arg1 + 0x7d8);
        pcVar7 = "rx dma init failed\n";
    }
    _dev_err(uVar10,pcVar7);
code_r0x08007b80:
    sym.writel_relaxed(uVar2 & 1 ^ 7 | uVar2,*(*(arg1 + 2000) + 8));
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_68) {
        auVar15 = __stack_chk_fail();
        puVar8 = auVar15._8_8_;
        *extraout_x18 = sym.writel_relaxed;
        uVar4 = auVar15._0_8_ & 0xffffffff;
        log_write_mmio(uVar4,0x20,puVar8,0x8007c34);
        *puVar8 = auVar15._0_4_;
        log_post_write_mmio(uVar4,0x20,puVar8,0x8007c5c);
        return;
    }
    return;
}


// ===== sym.writel_relaxed @ 0x08007c18 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8007c34);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8007c5c);
    return;
}


// ===== sym.qcom_slim_ngd_rx_msgq_cb @ 0x08007c90 (size 656) =====

uint64_t sym.qcom_slim_ngd_rx_msgq_cb(int64_t arg1)

{
    uint64_t *puVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    uint uVar7;
    uint32_t uVar8;
    int iVar9;
    ulong uVar10;
    uint64_t uVar11;
    ulong in_x6;
    ulong in_x7;
    ulong noname_0;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar13;
    int64_t *piVar14;
    code *pcVar15;
    int64_t unaff_x23;
    uint8_t *puVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    uchar *puVar18;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    puVar18 = &stack0xffffffffffffffb0;
    iVar13 = sp_el0;
    iStack_58 = *(iVar13 + 0x5e0);
    uVar11 = 0;
    if (arg1 != 0) {
        puVar16 = *(arg1 + 0x28);
        unaff_x23 = *(arg1 + 8);
        uVar2 = *puVar16;
        uVar3 = puVar16[1];
        uVar8 = uVar2 & 0x1f;
        sym.__slimbus_dbg(iStack_58,0x80018e1,uVar8,uVar2);
        iVar9 = *(unaff_x23 + 0x155c);
        if (2 < iVar9) {
            ipc_log_string(*(unaff_x23 + 0x1568),"BAM RX len = %d buf[0]:0x%x buf[1]:0x%x\n",uVar8,*puVar16,
                           puVar16[1]);
            iVar9 = *(unaff_x23 + 0x155c);
        }
        if (iVar9 == 0) {
            ipc_log_string(*(unaff_x23 + 0x1570),"BAM RX len = %d buf[0]:0x%x buf[1]:0x%x\n",uVar8,*puVar16,
                           puVar16[1]);
        }
        if (((uVar3 & 0x7f) == 0) && ((uVar2 & 0xe0) == 0xc0)) {
            queue_work_on(0x20,*(unaff_x23 + 0x13d8),unaff_x23 + 0x1378);
        }
        if ((((uVar3 & 0x3f) == 0x24) || (((uVar3 & 0x7f) == 0xe && ((uVar2 & 0xe0) == 0xc0)))) ||
           (((uVar3 & 0x7f) == 0x25 && ((uVar2 & 0xe0) == 0xc0)))) {
            slim_msg_response(unaff_x23 + 0x3a0,puVar16 + 4,puVar16[3],uVar8 - 4);
            iVar13 = *(unaff_x23 + 0x3a0);
            uVar10 = ktime_get_mono_fast_ns();
            *(iVar13 + 0x218) = uVar10;
        }
        piVar14 = *(unaff_x23 + 0x7e8);
        uStack_68 = 0;
        uStack_60 = 0;
        uVar10 = *(arg1 + 0x20);
        uStack_78 = 0;
        uStack_70 = 0;
        sg_init_table(&uStack_78,1);
        uStack_60 = CONCAT44(uStack_60._4_4_,0x28);
        uStack_68 = uVar10;
        if (((piVar14 == NULL) || (*piVar14 == 0)) || (pcVar15 = *(*piVar14 + 0x138), pcVar15 == NULL)) {
            *arg1 = 0;
        }
        else {
            __cfi_slowpath_diag(0x3675599da7c39b65,pcVar15,0x8000820);
            iVar13 = (*pcVar15)(piVar14,&uStack_78,1,2,1,0);
            *arg1 = iVar13;
            if (iVar13 != 0) {
                *(iVar13 + 0x28) = sym.qcom_slim_ngd_rx_msgq_cb.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
                *(*arg1 + 0x38) = arg1;
                iVar13 = *arg1;
                pcVar15 = *(iVar13 + 0x18);
                __cfi_slowpath_diag(0xc97b94b4f4a7b659,pcVar15,0x8000840);
                uVar7 = (*pcVar15)(iVar13);
                **arg1 = uVar7;
                piVar14 = *(unaff_x23 + 0x7e8);
                pcVar15 = *(*piVar14 + 400);
                __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar15,0x8000860);
                uVar11 = (*pcVar15)(piVar14);
                goto code_r0x08007ee4;
            }
        }
        uVar11 = _dev_err(*(unaff_x23 + 0x7d8),"Unable to prepare rx channel\n");
    }
code_r0x08007ee4:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_58) {
        return uVar11;
    }
    auVar17 = __stack_chk_fail();
    iVar13 = auVar17._8_8_;
    piVar14 = auVar17._0_8_;
    *extraout_x18 = sym.qcom_slim_ngd_xfer_msg_sync;
    pcVar15 = sym.qcom_slim_ngd_xfer_msg_sync;
    *(piVar14 + 0x210) = 0;
    uVar8 = __pm_runtime_resume(*piVar14,4);
    puVar1 = *piVar14 + 0x1f8;
    if (uVar8 < 0) {
        uVar11 = uVar8;
        sym.__slimbus_dbg(puVar1,0x80019a0,0x8001a85,uVar11);
        if (*(piVar14 + 0x11bc) < 1) {
            if (*(piVar14 + 0x11bc) != 0) goto code_r0x08008160;
        }
        else {
            _printk(0x80012e0,"qcom_slim_ngd_xfer_msg_sync",uVar11,*(*piVar14 + 0x1f8),*(iVar13 + 6));
            ipc_log_string(piVar14[0x239],"SLIM %s: PM get_sync failed ret :%d count:%d TID:%d\n",
                           "qcom_slim_ngd_xfer_msg_sync",uVar11,*(*piVar14 + 0x1f8),*(iVar13 + 6),in_x6,in_x7,
                           puVar18,pcVar15,unaff_x23);
            uVar7 = *(piVar14 + 0x11bc);
            *(piVar14 + 0x11bc) = 0;
            *(piVar14 + 0x237) = uVar7;
        }
        ipc_log_string(piVar14[0x23a],"SLIM %s: PM get_sync failed ret :%d count:%d TID:%d\n",
                       "qcom_slim_ngd_xfer_msg_sync",uVar11,*(*piVar14 + 0x1f8),*(iVar13 + 6),in_x6,in_x7,puVar18
                       ,pcVar15,unaff_x23);
    }
    else {
        sym.__slimbus_dbg(puVar1,0x8001506,0x8001a85,*puVar1 & 0xffffffff);
        iVar9 = *(piVar14 + 0x11bc);
        if (2 < iVar9) {
            ipc_log_string(piVar14[0x239],"SLIM %s: PM get_sync count:%d TID:%d\n","qcom_slim_ngd_xfer_msg_sync",
                           *(*piVar14 + 0x1f8),*(iVar13 + 6));
            iVar9 = *(piVar14 + 0x11bc);
        }
        if (iVar9 == 0) {
            ipc_log_string(piVar14[0x23a],"SLIM %s: PM get_sync count:%d TID:%d\n","qcom_slim_ngd_xfer_msg_sync",
                           *(*piVar14 + 0x1f8),*(iVar13 + 6));
        }
        *(iVar13 + 0x10) = piVar14 + 0x210;
        uVar8 = sym.qcom_slim_ngd_xfer_msg(piVar14,iVar13);
        if (uVar8 == 0) {
            iVar9 = wait_for_completion_timeout(piVar14 + 0x210,0xfa);
            if (iVar9 != 0) {
                return 0;
            }
            sym.__slimbus_dbg(noname_0,0x80019d5,*(iVar13 + 2),*(iVar13 + 1));
            iVar9 = *(piVar14 + 0x11bc);
            if (1 < iVar9) {
                _printk(0x800168f,*(iVar13 + 2),*(iVar13 + 1));
                ipc_log_string(piVar14[0x239],"TX sync timed out:MC:0x%x,mt:0x%x",*(iVar13 + 2),*(iVar13 + 1));
                iVar9 = *(piVar14 + 0x11bc);
            }
            if (iVar9 == 0) {
                ipc_log_string(piVar14[0x23a],"TX sync timed out:MC:0x%x,mt:0x%x",*(iVar13 + 2),*(iVar13 + 1));
            }
            uVar11 = 0xffffff92;
        }
        else {
            uVar11 = uVar8;
            sym.__slimbus_dbg(*piVar14 + 0x1f8,0x8001cba,0x8001a85,*(*piVar14 + 0x1f8));
            iVar9 = *(piVar14 + 0x11bc);
            if (2 < iVar9) {
                ipc_log_string(piVar14[0x239],"SLIM %s: xfer_msg failed PM put count:%d TID:%d\n",
                               "qcom_slim_ngd_xfer_msg_sync",*(*piVar14 + 0x1f8),*(iVar13 + 6));
                iVar9 = *(piVar14 + 0x11bc);
            }
            if (iVar9 == 0) {
                ipc_log_string(piVar14[0x23a],"SLIM %s: xfer_msg failed PM put count:%d TID:%d\n",
                               "qcom_slim_ngd_xfer_msg_sync",*(*piVar14 + 0x1f8),*(iVar13 + 6));
            }
        }
    }
code_r0x08008160:
    puVar1 = *piVar14 + 0x1f8;
    uVar12 = *puVar1;
    do {
        uVar8 = uVar12;
        if (uVar8 == 0) break;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar4 = *puVar1;
            uVar12 = uVar4;
            if (uVar4 != uVar8) goto code_r0x08008190;
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
                *puVar1 = uVar8 - 1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08008190:
    } while (uVar8 != uVar4);
    __pm_runtime_set_status(*piVar14,2);
    return uVar11;
}


// ===== sym.qcom_slim_ngd_xfer_msg_sync @ 0x08007f20 (size 916) =====

uint64_t sym.qcom_slim_ngd_xfer_msg_sync(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    uint32_t uVar6;
    int iVar7;
    ulong noname_0;
    uint64_t uVar8;
    ulong *in_x18;
    uint64_t arg3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x1080) = 0;
    uVar6 = __pm_runtime_resume(*arg1,4);
    puVar1 = *arg1 + 0x1f8;
    if (uVar6 < 0) {
        arg3 = uVar6;
        sym.__slimbus_dbg(puVar1,0x80019a0,0x8001a85,arg3);
        if (*(arg1 + 0x11bc) < 1) {
            if (*(arg1 + 0x11bc) != 0) goto code_r0x08008160;
        }
        else {
            _printk(0x80012e0,"qcom_slim_ngd_xfer_msg_sync",arg3,*(*arg1 + 0x1f8),*(arg2 + 6));
            ipc_log_string(*(arg1 + 0x11c8),"SLIM %s: PM get_sync failed ret :%d count:%d TID:%d\n",
                           "qcom_slim_ngd_xfer_msg_sync",arg3,*(*arg1 + 0x1f8),*(arg2 + 6));
            uVar2 = *(arg1 + 0x11bc);
            *(arg1 + 0x11bc) = 0;
            *(arg1 + 0x11b8) = uVar2;
        }
        ipc_log_string(*(arg1 + 0x11d0),"SLIM %s: PM get_sync failed ret :%d count:%d TID:%d\n",
                       "qcom_slim_ngd_xfer_msg_sync",arg3,*(*arg1 + 0x1f8),*(arg2 + 6));
    }
    else {
        sym.__slimbus_dbg(puVar1,0x8001506,0x8001a85,*puVar1 & 0xffffffff);
        iVar7 = *(arg1 + 0x11bc);
        if (2 < iVar7) {
            ipc_log_string(*(arg1 + 0x11c8),"SLIM %s: PM get_sync count:%d TID:%d\n","qcom_slim_ngd_xfer_msg_sync",
                           *(*arg1 + 0x1f8),*(arg2 + 6));
            iVar7 = *(arg1 + 0x11bc);
        }
        if (iVar7 == 0) {
            ipc_log_string(*(arg1 + 0x11d0),"SLIM %s: PM get_sync count:%d TID:%d\n","qcom_slim_ngd_xfer_msg_sync",
                           *(*arg1 + 0x1f8),*(arg2 + 6));
        }
        *(arg2 + 0x10) = arg1 + 0x1080;
        uVar6 = sym.qcom_slim_ngd_xfer_msg(arg1,arg2);
        if (uVar6 == 0) {
            iVar7 = wait_for_completion_timeout(arg1 + 0x1080,0xfa);
            if (iVar7 != 0) {
                return 0;
            }
            sym.__slimbus_dbg(noname_0,0x80019d5,*(arg2 + 2),*(arg2 + 1));
            iVar7 = *(arg1 + 0x11bc);
            if (1 < iVar7) {
                _printk(0x800168f,*(arg2 + 2),*(arg2 + 1));
                ipc_log_string(*(arg1 + 0x11c8),"TX sync timed out:MC:0x%x,mt:0x%x",*(arg2 + 2),*(arg2 + 1));
                iVar7 = *(arg1 + 0x11bc);
            }
            if (iVar7 == 0) {
                ipc_log_string(*(arg1 + 0x11d0),"TX sync timed out:MC:0x%x,mt:0x%x",*(arg2 + 2),*(arg2 + 1));
            }
            arg3 = 0xffffff92;
        }
        else {
            arg3 = uVar6;
            sym.__slimbus_dbg(*arg1 + 0x1f8,0x8001cba,0x8001a85,*(*arg1 + 0x1f8));
            iVar7 = *(arg1 + 0x11bc);
            if (2 < iVar7) {
                ipc_log_string(*(arg1 + 0x11c8),"SLIM %s: xfer_msg failed PM put count:%d TID:%d\n",
                               "qcom_slim_ngd_xfer_msg_sync",*(*arg1 + 0x1f8),*(arg2 + 6));
                iVar7 = *(arg1 + 0x11bc);
            }
            if (iVar7 == 0) {
                ipc_log_string(*(arg1 + 0x11d0),"SLIM %s: xfer_msg failed PM put count:%d TID:%d\n",
                               "qcom_slim_ngd_xfer_msg_sync",*(*arg1 + 0x1f8),*(arg2 + 6));
            }
        }
    }
code_r0x08008160:
    puVar1 = *arg1 + 0x1f8;
    uVar8 = *puVar1;
    do {
        uVar6 = uVar8;
        if (uVar6 == 0) break;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar3 = *puVar1;
            uVar8 = uVar3;
            if (uVar3 != uVar6) goto code_r0x08008190;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
                *puVar1 = uVar6 - 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08008190:
    } while (uVar6 != uVar3);
    __pm_runtime_set_status(*arg1,2);
    return arg3;
}


// ===== sym.qcom_slim_ngd_runtime_suspend @ 0x080082bc (size 728) =====

uint64_t sym.qcom_slim_ngd_runtime_suspend(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    uint8_t *puVar2;
    uint32_t uVar3;
    int64_t in_x3;
    int iVar4;
    ulong in_x8;
    int64_t noname_0;
    ulong noname_0_00;
    ulong noname_0_01;
    ulong *in_x18;
    int64_t arg1_00;
    uint64_t arg2_00;
    ulong unaff_x30;
    uchar noname_1_00 [16];
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    sym.__slimbus_dbg(in_x8,0x8000fd4,arg2,in_x3);
    iVar4 = *(arg1_00 + 0x155c);
    if (2 < iVar4) {
        ipc_log_string(*(arg1_00 + 0x1568),"Slim runtime suspend\n");
        iVar4 = *(arg1_00 + 0x155c);
    }
    if (iVar4 == 0) {
        ipc_log_string(*(arg1_00 + 0x1570),"Slim runtime suspend\n");
    }
    iVar1 = arg1_00 + 0x1478;
    noname_1_00 = mutex_lock(iVar1);
    sym.qcom_slim_ngd_exit_dma(arg1_00,noname_1_00,arg2);
    puVar2 = arg1_00 + 0x157c;
    if (*puVar2 == 0) {
        disable_irq(*(arg1_00 + 0x1578));
        *puVar2 = 1;
        sym.__slimbus_dbg(1,0x8001a6e,arg2,in_x3);
        iVar4 = *(arg1_00 + 0x155c);
        if (2 < iVar4) {
            ipc_log_string(*(arg1_00 + 0x1568),"Slim ngd IRQ disabled\n");
            iVar4 = *(arg1_00 + 0x155c);
        }
        if (iVar4 != 0) goto code_r0x08008390;
        ipc_log_string(*(arg1_00 + 0x1570),"Slim ngd IRQ disabled\n");
        noname_0 = *(arg1_00 + 0x7a8);
    }
    else {
code_r0x08008390:
        noname_0 = *(arg1_00 + 0x7a8);
    }
    if (noname_0 == 0) {
        sym.__slimbus_dbg(0,0x800110b,0x8001af5,in_x3);
        iVar4 = *(arg1_00 + 0x155c);
        if (1 < iVar4) {
            _printk(0x8000f9c,"qcom_slim_ngd_runtime_suspend");
            ipc_log_string(*(arg1_00 + 0x1568),"%s QMI handle is NULL\n","qcom_slim_ngd_runtime_suspend");
            iVar4 = *(arg1_00 + 0x155c);
        }
        if (iVar4 == 0) {
            ipc_log_string(*(arg1_00 + 0x1570),"%s QMI handle is NULL\n","qcom_slim_ngd_runtime_suspend");
        }
        mutex_unlock(iVar1);
        return 0;
    }
    sym.__slimbus_dbg(noname_0,0x8001bc1,arg2,in_x3);
    iVar4 = *(arg1_00 + 0x155c);
    if (2 < iVar4) {
        ipc_log_string(*(arg1_00 + 0x1568),"Sending QMI power off request\n");
        iVar4 = *(arg1_00 + 0x155c);
    }
    if (iVar4 == 0) {
        ipc_log_string(*(arg1_00 + 0x1570),"Sending QMI power off request\n");
    }
    uVar3 = sym.qcom_slim_qmi_power_request(arg1_00,0);
    arg2_00 = uVar3;
    if (uVar3 != 0xfffffff0) {
        if (uVar3 != 0) {
            sym.__slimbus_dbg(noname_0_00,0x800097a,uVar3,in_x3);
            iVar4 = *(arg1_00 + 0x155c);
            if (2 < iVar4) {
                ipc_log_string(*(arg1_00 + 0x1568),"slim resource not idle:%d\n",uVar3);
                iVar4 = *(arg1_00 + 0x155c);
            }
            if (iVar4 == 0) {
                ipc_log_string(*(arg1_00 + 0x1570),"slim resource not idle:%d\n",uVar3);
            }
            if ((uVar3 != 0) && (uVar3 != 0xffffff92)) goto code_r0x080084d8;
        }
        *(arg1_00 + 0x1500) = 2;
    }
code_r0x080084d8:
    mutex_unlock(iVar1);
    sym.__slimbus_dbg(noname_0_01,0x8001dfb,arg2_00,*puVar2);
    iVar4 = *(arg1_00 + 0x155c);
    if (2 < iVar4) {
        ipc_log_string(*(arg1_00 + 0x1568),"Slim runtime suspend: ret %d irq_disabled %d\n",arg2_00,*puVar2);
        iVar4 = *(arg1_00 + 0x155c);
    }
    if (iVar4 == 0) {
        ipc_log_string(*(arg1_00 + 0x1570),"Slim runtime suspend: ret %d irq_disabled %d\n",arg2_00,*puVar2);
    }
    return arg2_00;
}


// ===== sym.qcom_slim_ngd_tx_msg_post @ 0x08008594 (size 796) =====

ulong sym.qcom_slim_ngd_tx_msg_post(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    char *noname_0;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint uVar5;
    ulong uVar6;
    uint64_t in_x3;
    uint64_t noname_0_00;
    uint64_t extraout_x8;
    int iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar8;
    uint64_t arg2_00;
    code *pcVar9;
    int64_t iVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    ulong uVar13;
    int64_t iVar14;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    iVar4 = arg3;
    uVar6 = _raw_spin_lock_irqsave(arg1 + 0x1440);
    iVar7 = arg2 - *(arg1 + 0x1520);
    if (0x1e < iVar7 / 0x28) {
    //WARNING: Does not return
        pcVar9 = SoftwareBreakpoint(0x5512,0x80088ac);
        (*pcVar9)();
    }
    iVar14 = arg1 + (iVar7 / 0x28) * 0x30;
    noname_0_00 = *(arg1 + 0x1520) + iVar7;
    uVar1 = iVar4 + 3;
    uVar2 = uVar1 & 0xfc;
    arg2_00 = uVar2;
    *(iVar14 + 0xdb8) = *(arg1 + 0x1510) + iVar7;
    *(iVar14 + 0xdc0) = noname_0_00;
    *(iVar14 + 0xda0) = arg1;
    if (uVar2 != 0) {
        uVar2 = uVar2 >> 2;
        noname_0_00 = uVar2;
        uVar12 = 0;
        if (uVar2 < 2) {
            uVar2 = 1;
        }
        do {
            in_x3 = uVar12 & 0xffffffff;
            arg3 = arg2_00;
            sym.__slimbus_dbg(noname_0_00,0x8001159,arg2_00,in_x3);
            uVar3 = *(arg1 + 0x155c);
            if (2 < uVar3) {
                in_x3 = uVar12 & 0xffffffff;
                arg3 = arg2_00;
                ipc_log_string(*(arg1 + 0x1568),"BAM TX len = %d buf[%d]:0x%x\n",arg2_00,in_x3,*(arg2 + uVar12 * 4))
                ;
                uVar3 = *(arg1 + 0x155c);
            }
            noname_0_00 = uVar3;
            if (uVar3 == 0) {
                in_x3 = uVar12 & 0xffffffff;
                arg3 = arg2_00;
                ipc_log_string(*(arg1 + 0x1570),"BAM TX len = %d buf[%d]:0x%x\n",arg2_00,in_x3,*(arg2 + uVar12 * 4))
                ;
                noname_0_00 = extraout_x8;
            }
            uVar12 = uVar12 + 1;
        } while (uVar2 != uVar12);
    }
    piVar11 = *(arg1 + 0x7f0);
    piVar8 = iVar14 + 0xd98;
    if (piVar11 == NULL) {
        sym.__slimbus_dbg(noname_0_00,0x8001b38,arg3,in_x3);
        iVar4 = *(arg1 + 0x155c);
        if (1 < iVar4) {
            _printk(0x8001397);
            ipc_log_string(*(arg1 + 0x1568)," tx channel not available\n");
            iVar4 = *(arg1 + 0x155c);
        }
        if (iVar4 == 0) {
            ipc_log_string(*(arg1 + 0x1570)," tx channel not available\n");
        }
        piVar11 = *(arg1 + 0x7f0);
    }
    uVar13 = *(iVar14 + 0xdb8);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    sg_init_table(&uStack_88,1);
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar1) & 0xffffffff000000fc;
    uStack_78 = uVar13;
    if (((piVar11 == NULL) || (*piVar11 == 0)) || (pcVar9 = *(*piVar11 + 0x138), pcVar9 == NULL)) {
        *piVar8 = 0;
    }
    else {
        __cfi_slowpath_diag(0x3675599da7c39b65,pcVar9,0x8000820);
        arg3 = 1;
        in_x3 = 1;
        iVar14 = (*pcVar9)(piVar11,&uStack_88,1,1,1,0);
        *piVar8 = iVar14;
        if (iVar14 != 0) {
            *(iVar14 + 0x28) = sym.qcom_slim_ngd_tx_msg_dma_cb.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
            *(*piVar8 + 0x38) = piVar8;
            iVar14 = *piVar8;
            pcVar9 = *(iVar14 + 0x18);
            __cfi_slowpath_diag(0xc97b94b4f4a7b659,pcVar9,0x8000840);
            uVar5 = (*pcVar9)(iVar14);
            arg3 = 0x8000860;
            **piVar8 = uVar5;
            piVar8 = *(arg1 + 0x7f0);
            pcVar9 = *(*piVar8 + 400);
            __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar9);
            (*pcVar9)(piVar8);
            uVar13 = 0;
            goto code_r0x08008834;
        }
    }
    _dev_err(*(arg1 + 0x7d8),"unable to prepare channel\n");
    uVar13 = 0xffffffea;
code_r0x08008834:
    _raw_spin_unlock_irqrestore(arg1 + 0x1440,uVar6);
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return uVar13;
    }
    iVar14 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_slim_ngd_tx_msg_dma_cb;
    iVar10 = *(iVar14 + 8);
    noname_0 = iVar10 + 0x157d;
    if (*noname_0 == '\0') {
        uVar6 = _raw_spin_lock_irqsave(iVar10 + 0x1440);
        if (*(iVar14 + 0x10) != 0) {
            complete(*(iVar14 + 0x10));
            *(iVar14 + 0x10) = 0;
        }
        *(iVar10 + 0x152c) = (*(iVar10 + 0x152c) + 1) % 0x1e;
        uVar6 = _raw_spin_unlock_irqrestore(iVar10 + 0x1440,uVar6);
    }
    else {
        *noname_0 = '\0';
        uVar6 = sym.__slimbus_dbg(noname_0,0x8000ab2,arg3,in_x3);
        iVar4 = *(iVar10 + 0x155c);
        if (1 < iVar4) {
            _printk(0x80015ac);
            uVar6 = ipc_log_string(*(iVar10 + 0x1568),"Timedout due to delayed interrupt\n");
            iVar4 = *(iVar10 + 0x155c);
        }
        if (iVar4 == 0) {
            uVar6 = ipc_log_string(*(iVar10 + 0x1570),"Timedout due to delayed interrupt\n");
        }
        *(iVar14 + 0x10) = 0;
    }
    return uVar6;
}


// ===== sym.qcom_slim_ngd_tx_msg_dma_cb @ 0x080088b0 (size 276) =====

void sym.qcom_slim_ngd_tx_msg_dma_cb(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    char *noname_0;
    int iVar1;
    ulong uVar2;
    int64_t in_x3;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 8);
    noname_0 = iVar3 + 0x157d;
    if (*noname_0 == '\0') {
        uVar2 = _raw_spin_lock_irqsave(iVar3 + 0x1440);
        if (*(arg1 + 0x10) != 0) {
            complete(*(arg1 + 0x10));
            *(arg1 + 0x10) = 0;
        }
        *(iVar3 + 0x152c) = (*(iVar3 + 0x152c) + 1) % 0x1e;
        _raw_spin_unlock_irqrestore(iVar3 + 0x1440,uVar2);
    }
    else {
        *noname_0 = '\0';
        sym.__slimbus_dbg(noname_0,0x8000ab2,arg2,in_x3);
        iVar1 = *(iVar3 + 0x155c);
        if (1 < iVar1) {
            _printk(0x80015ac);
            ipc_log_string(*(iVar3 + 0x1568),"Timedout due to delayed interrupt\n");
            iVar1 = *(iVar3 + 0x155c);
        }
        if (iVar1 == 0) {
            ipc_log_string(*(iVar3 + 0x1570),"Timedout due to delayed interrupt\n");
        }
        *(arg1 + 0x10) = 0;
    }
    return;
}


// ===== sym.qcom_slim_ngd_probe @ 0x080089c4 (size 668) =====

int sym.qcom_slim_ngd_probe(int64_t arg1)

{
    int64_t iVar1;
    int *piVar2;
    int64_t *noname_0;
    char cVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x10;
    iVar7 = *(*(arg1 + 0x70) + 0x98);
    *(iVar7 + 0x3a0) = iVar1;
    iVar5 = slim_register_controller(iVar7 + 0x3a0);
    if (iVar5 == 0) {
        *(arg1 + 0xa8) = iVar7;
        __pm_runtime_use_autosuspend(iVar1,1);
        pm_runtime_set_autosuspend_delay(iVar1,100);
        __pm_runtime_set_status(iVar1,2);
        pm_runtime_enable(iVar1);
        piVar2 = arg1 + 0x208;
        Hint_Prefetch(piVar2,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
                *piVar2 = *piVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        noname_0 = *(iVar7 + 0x3a0) + 0x1f8;
        sym.__slimbus_dbg(noname_0,0x8000e6e,0x8000ad5,*noname_0);
        iVar5 = *(iVar7 + 0x155c);
        if (2 < iVar5) {
            ipc_log_string(*(iVar7 + 0x1568),"SLIM %s:PM get_noresume count:%d\n","qcom_slim_ngd_probe",
                           *(*(iVar7 + 0x3a0) + 0x1f8));
            iVar5 = *(iVar7 + 0x155c);
        }
        if (iVar5 == 0) {
            ipc_log_string(*(iVar7 + 0x1570),"SLIM %s:PM get_noresume count:%d\n","qcom_slim_ngd_probe",
                           *(*(iVar7 + 0x3a0) + 0x1f8));
        }
        *(iVar7 + 0x1378) = 0xfffffffe0;
        *(iVar7 + 0x1380) = iVar7 + 0x1380;
        *(iVar7 + 5000) = iVar7 + 0x1380;
        *(iVar7 + 0x13a8) = 0xfffffffe0;
        *(iVar7 + 0x1390) = sym.qcom_slim_ngd_master_worker.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
        *(iVar7 + 0x13b0) = iVar7 + 0x13b0;
        *(iVar7 + 0x13b8) = iVar7 + 0x13b0;
        *(iVar7 + 0x13c0) = sym.qcom_slim_ngd_up_worker.a72e7fa1990595d9f3a61d296fa60916.cfi_jt;
        iVar6 = alloc_workqueue(0x8000d2e,0xe000a,1,"ngd_master");
        *(iVar7 + 0x13d8) = iVar6;
        if (iVar6 == 0) {
            _dev_err(iVar1,"Failed to start master worker\n");
            qmi_handle_release(iVar7 + 0x660);
            if (*(iVar7 + 0x13d8) != 0) {
                destroy_workqueue();
            }
            iVar5 = -0xc;
        }
        else {
            iVar6 = iVar7 + 0x660;
            iVar5 = qmi_handle_init(iVar6,0,reloc.qcom_slim_ngd_qmi_new_server.a72e7fa1990595d9f3a61d296fa60916.cfi_jt
                                    ,0);
            if (iVar5 < 0) {
                _dev_err(*(iVar7 + 0x7d8),"qmi_handle_init failed: %d\n",iVar5);
            }
            else {
                iVar5 = qmi_add_lookup(iVar6,0x301,1,0);
                if (iVar5 < 0) {
                    _dev_err(*(iVar7 + 0x7d8),"qmi_add_lookup failed: %d\n",iVar5);
                    qmi_handle_release(iVar6);
                }
                else if (iVar5 == 0) {
                    return 0;
                }
            }
            _dev_err(iVar1,"QMI service registration failed:%d\n",iVar5);
        }
        slim_unregister_controller(iVar7 + 0x3a0);
    }
    else {
        _dev_err(iVar1,"error adding slim controller\n");
    }
    return iVar5;
}


// ===== sym.qcom_slim_ngd_remove @ 0x08008c60 (size 136) =====

ulong sym.qcom_slim_ngd_remove(int64_t arg1)

{
    int64_t in_x2;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xa8);
    __pm_runtime_disable(arg1 + 0x10,1);
    pdr_handle_release(*(arg1_00 + 0x14f8));
    qcom_unregister_ssr_notifier(*(arg1_00 + 0x14f0),arg1_00 + 0x14d8);
    noname_1 = slim_unregister_controller(arg1_00 + 0x3a0);
    sym.qcom_slim_ngd_exit_dma(arg1_00,noname_1,in_x2);
    qmi_handle_release(arg1_00 + 0x660);
    if (*(arg1_00 + 0x13d8) != 0) {
        destroy_workqueue();
    }
    kfree(*(arg1_00 + 2000));
    *(arg1_00 + 2000) = 0;
    return 0;
}


// ===== sym.qcom_slim_ngd_master_worker @ 0x08008ce8 (size 752) =====

void sym.qcom_slim_ngd_master_worker(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t in_x3;
    ulong noname_0;
    uint64_t noname_0_00;
    uint64_t extraout_x8;
    ulong noname_0_01;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar noname_1_00 [16];
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong *puStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong *puStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    puStack_70 = &uStack_88;
    uStack_68 = 0;
    uStack_88 = 0x101c5d9;
    puStack_58 = &uStack_80;
    uStack_78 = 0;
    uStack_50 = 0;
    uStack_80 = 0x40000;
    uStack_60 = 0xff00000000010608;
    sym.__slimbus_dbg(0xffffffffffffec88,0x8000d3c,arg2,in_x3);
    iVar3 = *(arg1 + 0x1e4);
    if (2 < iVar3) {
        ipc_log_string(*(arg1 + 0x1f0),"SLIM SAT: Rcvd master capability\n");
        iVar3 = *(arg1 + 0x1e4);
    }
    if (iVar3 == 0) {
        ipc_log_string(*(arg1 + 0x1f8),"SLIM SAT: Rcvd master capability\n");
    }
    iVar3 = 10;
    while (uVar2 = sym.qcom_slim_ngd_xfer_msg(arg1 + -0xfd8,&uStack_60), uVar2 == 0xfffffffb) {
        sym.__slimbus_dbg(noname_0,0x8001254,arg2,in_x3);
        iVar1 = *(arg1 + 0x1e4);
        if (1 < iVar1) {
            _printk(0x8001025);
            ipc_log_string(*(arg1 + 0x1f0),"capability message NACKed, retrying\n");
            iVar1 = *(arg1 + 0x1e4);
        }
        if (iVar1 == 0) {
            ipc_log_string(*(arg1 + 0x1f8),"capability message NACKed, retrying\n");
        }
        if (iVar3 == 0) goto code_r0x08008f70;
        msleep(10);
        iVar3 = iVar3 + -1;
    }
    arg2 = uVar2;
    if (uVar2 == 0) {
        sym.__slimbus_dbg(noname_0,0x8000ba5,0,in_x3);
        uVar2 = *(arg1 + 0x1e4);
        if (2 < uVar2) {
            ipc_log_string(*(arg1 + 0x1f0),"SLIM SAT: capability exchange successful\n");
            uVar2 = *(arg1 + 0x1e4);
        }
        noname_0_00 = uVar2;
        if (uVar2 == 0) {
            ipc_log_string(*(arg1 + 0x1f8),"SLIM SAT: capability exchange successful\n");
            noname_0_00 = extraout_x8;
        }
        arg2 = *(arg1 + 0x188);
        if (*(arg1 + 0x188) < 2) {
            sym.__slimbus_dbg(noname_0_00,0x80009d0,arg2,in_x3);
            iVar3 = *(arg1 + 0x1e4);
            if (1 < iVar3) {
                _printk(0x8001193,*(arg1 + 0x188));
                arg2 = *(arg1 + 0x188);
                ipc_log_string(*(arg1 + 0x1f0),"capability due to noise, Unexpected state:%d\n");
                iVar3 = *(arg1 + 0x1e4);
            }
            if (iVar3 == 0) {
                arg2 = *(arg1 + 0x188);
                ipc_log_string(*(arg1 + 0x1f8),"capability due to noise, Unexpected state:%d\n");
            }
        }
        else {
            complete(arg1 + -0x40);
        }
        if (*(arg1 + 0x188) == 3) {
            for (iVar4 = of_get_next_child(*(**(arg1 + -0xba8) + 0x300),0); iVar4 != 0;
                iVar4 = of_get_next_child(*(**(arg1 + -0xba8) + 0x300),iVar4)) {
                iVar5 = of_slim_get_device(arg1 + -0xfd8,iVar4);
                if ((iVar5 != 0) && (iVar3 = slim_get_logical_addr(), iVar3 != 0)) {
                    _dev_err(*(arg1 + -0xba0),"Failed to get logical address\n");
                }
            }
        }
    }
    else {
        _dev_err(*(arg1 + -0xba0),"SLIM: capability TX failed:%d\n");
    }
code_r0x08008f70:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_48) {
        iVar4 = __stack_chk_fail();
        *extraout_x18 = sym.qcom_slim_ngd_up_worker;
        iVar5 = wait_for_completion_interruptible_timeout(iVar4 + 0x38,0xfa);
        if (iVar5 == 0) {
            sym.__slimbus_dbg(noname_0_01,0x800163c,arg2,in_x3);
            iVar3 = *(iVar4 + 0x1b4);
            if (2 < iVar3) {
                ipc_log_string(*(iVar4 + 0x1c0),"QMI wait timeout\n");
                iVar3 = *(iVar4 + 0x1b4);
            }
            if (iVar3 == 0) {
                ipc_log_string(*(iVar4 + 0x1c8),"QMI wait timeout\n");
            }
        }
        else {
            noname_1_00 = mutex_lock(iVar4 + 0x100);
            sym.qcom_slim_ngd_enable(iVar4 + -0x13a8,noname_1_00,arg2);
            mutex_unlock(iVar4 + 0x100);
        }
        return;
    }
    return;
}


// ===== sym.qcom_slim_ngd_up_worker @ 0x08008fd8 (size 176) =====

void sym.qcom_slim_ngd_up_worker(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    wait_for_completion_interruptible_timeout(0xffffffffffffec58,arg1 + 0x38,0xfa);
    return;
}


// ===== sym.qcom_slim_ngd_qmi_new_server @ 0x08009088 (size 156) =====

ulong sym.qcom_slim_ngd_qmi_new_server(int64_t arg1,int64_t arg2)

{
    int64_t in_x2;
    int64_t in_x3;
    int iVar1;
    ulong in_x8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__slimbus_dbg(in_x8,0x8000f2a,in_x2,in_x3);
    iVar1 = *(arg1 + 0xefc);
    if (2 < iVar1) {
        ipc_log_string(*(arg1 + 0xf08),"Slimbus QMI new server event received\n");
        iVar1 = *(arg1 + 0xefc);
    }
    if (iVar1 == 0) {
        ipc_log_string(*(arg1 + 0xf10),"Slimbus QMI new server event received\n");
    }
    *(arg1 + -0x10) = 0x2a;
    *(arg1 + -0xc) = *(arg2 + 0xc);
    *(arg1 + -8) = *(arg2 + 0x10);
    complete(arg1 + 0xd80);
    return 0;
}


// ===== sym.qcom_slim_ngd_qmi_del_server @ 0x08009124 (size 124) =====

void sym.qcom_slim_ngd_qmi_del_server(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t in_x3;
    int iVar1;
    ulong in_x8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__slimbus_dbg(in_x8,0x80013b4,arg2,in_x3);
    iVar1 = *(arg1 + 0xefc);
    if (2 < iVar1) {
        ipc_log_string(*(arg1 + 0xf08),"Slimbus QMI del server event received\n");
        iVar1 = *(arg1 + 0xefc);
    }
    if (iVar1 == 0) {
        ipc_log_string(*(arg1 + 0xf10),"Slimbus QMI del server event received\n");
    }
    *(arg1 + 0xd80) = 0;
    *(arg1 + -0xc) = 0;
    return;
}


// ===== sym.qcom_slim_ngd_runtime_idle @ 0x080091a0 (size 152) =====

ulong sym.qcom_slim_ngd_runtime_idle(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t in_x3;
    int iVar1;
    uint64_t noname_0;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    noname_0 = *(iVar2 + 0x1500);
    if (*(iVar2 + 0x1500) == 0) {
        noname_0 = 1;
        *(iVar2 + 0x1500) = 1;
    }
    sym.__slimbus_dbg(noname_0,0x8000d94,arg2,in_x3);
    iVar1 = *(iVar2 + 0x155c);
    if (3 < iVar1) {
        ipc_log_string(*(iVar2 + 0x1568),"pm_runtime: idle...\n");
        iVar1 = *(iVar2 + 0x155c);
    }
    if (iVar1 == 0) {
        ipc_log_string(*(iVar2 + 0x1570),"pm_runtime: idle...\n");
    }
    __pm_runtime_suspend(arg1,9);
    return 0xfffffff5;
}


// ===== sym.__cfi_check_fail @ 0x08009238 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800927c

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
    //switch table (4 cases) at 0x8001f87
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8009290);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08009298 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.qcom_slim_ngd_ctrl_probe.a72e7fa1990595d9f3a61d296fa60916.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080092cc (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_slim_ngd_ctrl_probe.a72e7fa1990595d9f3a61d296fa60916.cfi_jt);
    return;
}

