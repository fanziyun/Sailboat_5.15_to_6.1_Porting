// decompiled from qcom_sysmon by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 896) =====

//WARNING: Switch with 1 destination removed at 0x08002874

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0xfae0556695233a4) {
        if (arg1 < -0x369ea26d45857f34) {
            if (arg1 < -0x402e985e921947e3) {
                if (arg1 != -0x61278529fef85643) {
                    if (arg1 != -0x5ce31e376b06509f) goto code_r0x08002834;
                    pcVar2 = sym.sysmon_start.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
                    goto code_r0x08001258;
                }
                pcVar2 = sym.sysmon_callback.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
            }
            else if (arg1 == -0x402e985e921947e3) {
                pcVar2 = sym.qcom_remove_sysmon_subdev.cfi_jt;
            }
            else {
                if (arg1 != -0x3987c0e26ee29729) goto code_r0x08002834;
                pcVar2 = sym.sysmon_shutdown_interrupt.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
            }
        }
        else if (arg1 < -0x2e0966c9da5aba80) {
            if (arg1 != -0x369ea26d45857f34) {
                if (arg1 != -0x2ee0710dce68437c) goto code_r0x08002834;
                pcVar2 = sym.sysmon_shutdown_notif_timeout_handler.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
code_r0x08001258:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08002834;
            }
            pcVar2 = sym.qcom_sysmon_get_txn_id.cfi_jt;
        }
        else if (arg1 == -0x2e0966c9da5aba80) {
            pcVar2 = sym.qcom_sysmon_get_reason.cfi_jt;
        }
        else if (arg1 == -0x1d0f770c5d502406) {
            pcVar2 = sym.sysmon_stop.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
        }
        else {
            if (arg1 != -0x19ad56ffbc919b67) goto code_r0x08002834;
            pcVar2 = sym.sysmon_probe.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
        }
    }
    else if (arg1 < 0x46acbfe808f94353) {
        if (arg1 < 0x2b3a43e29242445) {
            if (arg1 == -0xfae0556695233a4) {
                pcVar2 = sym.ssctl_new_server.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
            }
            else {
                if (arg1 != -0x71994e1f66356d6) goto code_r0x08002834;
                pcVar2 = sym.sysmon_unprepare.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
            }
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 == 0x2b1394c7097a0a26) {
            pcVar2 = sym.sysmon_ind_cb.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
        }
        else {
            if (arg1 != 0x2ce63a3287021e91) goto code_r0x08002834;
            pcVar2 = sym.sysmon_remove.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
        }
    }
    else if (arg1 < 0x77b71c1b418c981d) {
        if (arg1 == 0x46acbfe808f94353) {
            pcVar2 = sym.qcom_sysmon_shutdown_acked.cfi_jt;
        }
        else {
            if (arg1 != 0x52fd4d4e19f8f2ab) goto code_r0x08002834;
            pcVar2 = sym.qcom_add_sysmon_subdev.cfi_jt;
        }
    }
    else if (arg1 == 0x77b71c1b418c981d) {
        pcVar2 = sym.ssctl_del_server.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.sysmon_notify.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002834;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002834:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002888);
    (*pcVar1)();
}


// ===== sym.ssctl_del_server.f5bc8881cdf160df1d5678497b95ba66.cfi_jt @ 0x08001388 (size 8) =====

void sym.ssctl_del_server.f5bc8881cdf160df1d5678497b95ba66.cfi_jt(ulong param_1,int64_t param_2)

{
    *(*(param_2 + 0x18) + 0x8c) = 0;
    return;
}


// ===== sym.sysmon_probe.f5bc8881cdf160df1d5678497b95ba66.cfi_jt @ 0x08001390 (size 8) =====

ulong sym.sysmon_probe.f5bc8881cdf160df1d5678497b95ba66.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    char *pcVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rproc_get_by_child();
    if (iVar1 == 0) {
        pcVar2 = "sysmon device not child of rproc\n";
    }
    else {
        mutex_lock(obj.sysmon_lock);
        for (pcVar3 = _obj.sysmon_list; pcVar3 != obj.sysmon_list; pcVar3 = *pcVar3) {
            if (*(pcVar3 + -0x40) == iVar1) {
                mutex_unlock(obj.sysmon_lock);
                *(*(param_1 + 0x3c8) + 0x58) = pcVar3 + -0x70;
                *(pcVar3 + 0x90) = *(param_1 + 0x3c8);
                return 0;
            }
        }
        mutex_unlock(obj.sysmon_lock);
        pcVar2 = "no sysmon associated with parent rproc\n";
    }
    _dev_err(param_1,pcVar2);
    return 0xffffffea;
}


// ===== sym.sysmon_stop.f5bc8881cdf160df1d5678497b95ba66.cfi_jt @ 0x08001398 (size 8) =====

void sym.sysmon_stop.f5bc8881cdf160df1d5678497b95ba66.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int64_t *piVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong uVar5;
    char *pcVar6;
    ulong extraout_x8;
    int64_t iVar7;
    ulong *in_x18;
    uchar uVar8;
    ulong unaff_x30;
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
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    param_2 = param_2 & 0xffffffff;
    do {
        *(param_1 + 0x1b9) = 0;
        mutex_lock(param_1 + 0x40);
        *(param_1 + 0x38) = 2;
        *(param_1 + 0xf8) = *(param_1 + 0xf8) + 1;
        _dev_info(*(param_1 + 0xf0),"Incrementing tid for %s to %d\n",*(param_1 + 0x80));
        blocking_notifier_call_chain(obj.sysmon_notifiers,0,param_1);
        mutex_unlock(param_1 + 0x40);
        if ((param_2 & 1) == 0) {
            param_2 = param_1 + 0xa0;
            *(param_1 + 0xb8) = sym.sysmon_shutdown_notif_timeout_handler.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
            mod_timer(param_2,__printk + 5000);
            if ((*(param_1 + 0x90) == 0) || (iVar3 = wait_for_completion_timeout(param_1 + 0x168,0x7d), iVar3 != 0)) {
                if (*(param_1 + 0x8c) != 0) goto code_r0x08001ce0;
code_r0x08001db8:
                if (*(param_1 + 0x100) != 0) {
                    mutex_lock(param_1 + 0x188);
                    *(param_1 + 0x108) = 0;
                    *(param_1 + 0x1b8) = 0;
                    iVar2 = rpmsg_send(*(param_1 + 0x100),"ssr:shutdown",0xd);
                    if (iVar2 < 0) {
                        pcVar6 = "send sysmon shutdown request failed\n";
code_r0x08001ec8:
                        _dev_err(*(param_1 + 0xf0),pcVar6);
                        uVar8 = 0;
                    }
                    else {
                        iVar2 = wait_for_completion_timeout(param_1 + 0x108,0x4e2);
                        if (iVar2 == 0) {
                            pcVar6 = "timeout waiting for sysmon ack\n";
                            goto code_r0x08001ec8;
                        }
                        if (*(param_1 + 0x1b8) == '\0') {
                            pcVar6 = "unexpected response to sysmon shutdown request\n";
                            goto code_r0x08001ec8;
                        }
                        uVar8 = 1;
                    }
                    mutex_unlock(param_1 + 0x188);
                    goto code_r0x08001e10;
                }
            }
            else {
                _dev_err(*(param_1 + 0xf0),"timeout waiting for ssctl service\n");
                if (*(param_1 + 0x8c) == 0) goto code_r0x08001db8;
code_r0x08001ce0:
                uVar8 = 0;
                uStack_3c = 0;
                uStack_50 = 0;
                uStack_48 = 0;
                uStack_60 = 0;
                uStack_58 = 0;
                uStack_70 = 0;
                uStack_68 = 0;
                uStack_80 = 0;
                uStack_78 = 0;
                uStack_88 = 0;
                if (*(param_1 + 0x90) != -0x16) {
                    *(param_1 + 0x128) = 0;
                    *(param_1 + 0x148) = 0;
                    iVar2 = qmi_txn_init(param_1 + 0x1c0,&uStack_88,obj.ssctl_shutdown_resp_ei,&uStack_3c);
                    if (iVar2 < 0) {
                        uVar5 = *(param_1 + 0xf0);
                        pcVar6 = "failed to allocate QMI txn\n";
code_r0x08001e58:
                        _dev_err(uVar5,pcVar6);
                        uVar8 = 0;
                    }
                    else {
                        iVar2 = qmi_send_request(param_1 + 0x1c0,param_1 + 0x300,&uStack_88,0x21,0,0,0);
                        if (iVar2 < 0) {
                            _dev_err(*(param_1 + 0xf0),"failed to send shutdown request\n");
                            qmi_txn_cancel(&uStack_88);
                            uVar8 = 0;
                            goto code_r0x08001e10;
                        }
                        iVar2 = qmi_txn_wait(&uStack_88,0x4e2);
                        if (iVar2 < 0) {
                            pcVar6 = "failed receiving QMI response\n";
code_r0x08001e98:
                            _dev_err(*(param_1 + 0xf0),pcVar6);
                            uVar8 = 0;
                        }
                        else {
                            if (uStack_3c != 0) {
                                pcVar6 = "shutdown request failed\n";
                                goto code_r0x08001e98;
                            }
                            uVar8 = 1;
                        }
                        if (0 < *(param_1 + 0x88)) {
                            iVar2 = wait_for_completion_timeout(param_1 + 0x148,0x9c4);
                            if ((iVar2 == 0) && (uVar4 = try_wait_for_completion(param_1 + 0x128), (uVar4 & 1) == 0)) {
                                uVar5 = *(param_1 + 0xf0);
                                pcVar6 = "timeout waiting for shutdown ack\n";
                                goto code_r0x08001e58;
                            }
                            uVar8 = 1;
                        }
                    }
                }
code_r0x08001e10:
                *(param_1 + 0x1b9) = uVar8;
            }
            del_timer_sync(param_2);
        }
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iStack_38) {
            return;
        }
        __stack_chk_fail();
        iVar3 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar3) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar3) & 0x3f) & 1) !=
            0) {
            iVar3 = sp_el0;
            piVar1 = iVar3 + 0x10;
            *(iVar3 + 0x10) = *piVar1 + 1;
            __traceiter_rproc_qcom_event(0,extraout_x8,"sysmon");
            iVar7 = *piVar1;
            *(iVar3 + 0x10) = iVar7 + -1;
            if ((iVar7 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
    } while( true );
}


// ===== sym.cleanup_module.cfi_jt @ 0x080013a0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_rpmsg_driver(obj.sysmon_driver);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080013a8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __register_rpmsg_driver(obj.sysmon_driver,obj.__this_module);
    return;
}


// ===== sym.sysmon_callback.f5bc8881cdf160df1d5678497b95ba66.cfi_jt @ 0x080013b0 (size 8) =====

ulong sym.sysmon_callback.f5bc8881cdf160df1d5678497b95ba66.cfi_jt
                (ulong param_1,int64_t *param_2,int param_3,int64_t param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_4 != 0) {
        *in_x18 = unaff_x30;
        if ((7 < param_3) && (*param_2 == 0x6b63613a727373)) {
            *(param_4 + 0x1b8) = 1;
        }
        complete(param_4 + 0x108);
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.sysmon_unprepare.f5bc8881cdf160df1d5678497b95ba66.cfi_jt @ 0x080013b8 (size 8) =====

void sym.sysmon_unprepare.f5bc8881cdf160df1d5678497b95ba66.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(*(param_1 + 0x30) + 0x98);
    iVar1 = piVar2[0xe];
    if (iVar1 == 0) {
        iVar1 = *piVar2;
    }
    mutex_lock(param_1 + 0x40,iVar1);
    *(param_1 + 0x38) = 3;
    blocking_notifier_call_chain(obj.sysmon_notifiers,0,param_1);
    mutex_unlock(param_1 + 0x40);
    return;
}


// ===== sym.qcom_sysmon_shutdown_acked.cfi_jt @ 0x080013c0 (size 8) =====

bool sym.qcom_sysmon_shutdown_acked.cfi_jt(int64_t param_1)

{
    bool bVar1;
    
    bVar1 = false;
    if (param_1 != 0) {
        bVar1 = *(param_1 + 0x1b9) != '\0';
    }
    return bVar1;
}


// ===== sym.qcom_remove_sysmon_subdev.cfi_jt @ 0x080013c8 (size 8) =====

void sym.qcom_remove_sysmon_subdev.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 != 0) {
        *in_x18 = unaff_x30;
        mutex_lock(obj.sysmon_lock);
        uVar3 = __list_del_entry_valid(param_1 + 0x70);
        if ((uVar3 & 1) != 0) {
            iVar1 = *(param_1 + 0x70);
            piVar2 = *(param_1 + 0x78);
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *(param_1 + 0x70) = 0xdead000000000100;
        *(param_1 + 0x78) = 0xdead000000000122;
        mutex_unlock(obj.sysmon_lock);
        blocking_notifier_chain_unregister(obj.sysmon_notifiers,param_1 + 0xd8);
        rproc_remove_subdev(*(param_1 + 0x30),param_1);
        if (*(param_1 + 0x90) != -0x16) {
            qmi_handle_release(param_1 + 0x1c0);
        }
        kfree(param_1);
    }
    return;
}


// ===== sym.sysmon_shutdown_notif_timeout_handler.f5bc8881cdf160df1d5678497b95ba66.cfi_jt @ 0x080013d0 (size 8) =====

ulong sym.sysmon_shutdown_notif_timeout_handler.f5bc8881cdf160df1d5678497b95ba66.cfi_jt
                (int64_t param_1,ulong param_2,ulong *param_3)

{
    code *pcVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = *(param_1 + -0x20);
    *param_3 = qmi_txn_init;
    if (qcom_device_shutdown_in_progress != 0x0) {
        __warn_printk();
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x80026d0);
        (*pcVar1)();
    }
    iVar2 = panic("sysmon_send_shutdown to %s taking too long",uVar4);
    *extraout_x18 = sym.sysmon_probe;
    iVar3 = rproc_get_by_child();
    if (iVar3 == 0) {
        pcVar5 = "sysmon device not child of rproc\n";
    }
    else {
        mutex_lock(obj.sysmon_lock);
        for (pcVar1 = _obj.sysmon_list; pcVar1 != obj.sysmon_list; pcVar1 = *pcVar1) {
            if (*(pcVar1 + -0x40) == iVar3) {
                mutex_unlock(obj.sysmon_lock);
                *(*(iVar2 + 0x3c8) + 0x58) = pcVar1 + -0x70;
                *(pcVar1 + 0x90) = *(iVar2 + 0x3c8);
                return 0;
            }
        }
        mutex_unlock(obj.sysmon_lock);
        pcVar5 = "no sysmon associated with parent rproc\n";
    }
    _dev_err(iVar2,pcVar5);
    return 0xffffffea;
}


// ===== sym.sysmon_notif_timeout_handler.f5bc8881cdf160df1d5678497b95ba66.cfi_jt @ 0x080013d8 (size 8) =====

void sym.sysmon_notif_timeout_handler.f5bc8881cdf160df1d5678497b95ba66.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,uint *param_4)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *param_4 = 0x800c000;
    uVar1 = *(param_1 + -0x68);
    if (qcom_device_shutdown_in_progress == 0x0) {
        if (uVar1 < 4) {
            panic("sysmon msg from %s to %s for %s taking too long",*(param_1 + -0x20),*(*(param_1 + -8) + 0x80),
                  *(obj.subdevice_state_string + uVar1 * 8));
        }
    }
    else if (uVar1 < 4) {
        __warn_printk("sysmon msg from %s to %s for %s taking too long",*(param_1 + -0x20),*(*(param_1 + -8) + 0x80),
                      *(obj.subdevice_state_string + uVar1 * 8));
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x800,0x80018e4);
        (*pcVar2)();
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8001924);
    (*pcVar2)();
}


// ===== sym.qcom_sysmon_get_txn_id.cfi_jt @ 0x080013e0 (size 8) =====

uint sym.qcom_sysmon_get_txn_id.cfi_jt(int64_t param_1)

{
    return *(param_1 + 0xf8);
}


// ===== sym.qcom_add_sysmon_subdev.cfi_jt @ 0x080013e8 (size 8) =====

int64_t sym.qcom_add_sysmon_subdev.cfi_jt(int64_t param_1,ulong param_2,uint param_3)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = kmem_cache_alloc_trace(_qmi_txn_init,0xdc0,0x310);
    if (iVar3 == 0) {
        return -0xc;
    }
    *(iVar3 + 0x80) = param_2;
    *(iVar3 + 0x90) = param_3;
    uVar5 = *(param_1 + 0x98);
    *(iVar3 + 0x30) = param_1;
    *(iVar3 + 0xf0) = uVar5;
    *(iVar3 + 0x108) = 0;
    __init_swait_queue_head(iVar3 + 0x110,"&x->wait",obj.init_completion.__key);
    *(iVar3 + 0x128) = 0;
    __init_swait_queue_head(iVar3 + 0x130,"&x->wait",obj.init_completion.__key);
    *(iVar3 + 0x148) = 0;
    __init_swait_queue_head(iVar3 + 0x150,"&x->wait",obj.init_completion.__key);
    *(iVar3 + 0x168) = 0;
    __init_swait_queue_head(iVar3 + 0x170,"&x->wait",obj.init_completion.__key);
    init_timer_key(iVar3 + 0xa0,sym.sysmon_notif_timeout_handler.f5bc8881cdf160df1d5678497b95ba66.cfi_jt,0,0,0);
    __mutex_init(iVar3 + 0x188,"&sysmon->lock",obj.init_completion.__key);
    __mutex_init(iVar3 + 0x40,"&sysmon->state_lock",obj.init_completion.__key);
    if (*(iVar3 + 0x90) != -0x16) {
        iVar2 = of_irq_get_byname(*(*(iVar3 + 0xf0) + 0x2f0),"shutdown-ack");
        *(iVar3 + 0x88) = iVar2;
        if (iVar2 < 0) {
            if (iVar2 != -0x3d) {
                _dev_err(*(iVar3 + 0xf0),"failed to retrieve shutdown-ack IRQ\n");
                return *(iVar3 + 0x88);
            }
        }
        else {
            iVar2 = devm_request_threaded_irq
                              (*(iVar3 + 0xf0),iVar2,0,
                               sym.sysmon_shutdown_interrupt.f5bc8881cdf160df1d5678497b95ba66.cfi_jt,0x2001,
                               "q6v5 shutdown-ack",iVar3);
            if (iVar2 != 0) {
                _dev_err(*(iVar3 + 0xf0),"failed to acquire shutdown-ack IRQ\n");
                return iVar2;
            }
        }
        iVar2 = qmi_handle_init(iVar3 + 0x1c0,7,reloc.ssctl_new_server.f5bc8881cdf160df1d5678497b95ba66.cfi_jt,
                                obj.qmi_indication_handler);
        if (iVar2 < 0) {
            _dev_err(*(iVar3 + 0xf0),"failed to initialize qmi handle\n");
            kfree(iVar3);
            return iVar2;
        }
        qmi_add_lookup(iVar3 + 0x1c0,0x2b,0,0);
    }
    *(iVar3 + 0x10) = sym.sysmon_prepare.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
    *(iVar3 + 0x18) = sym.sysmon_start.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
    *(iVar3 + 0x20) = sym.sysmon_stop.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
    *(iVar3 + 0x28) = sym.sysmon_unprepare.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
    rproc_add_subdev(param_1,iVar3);
    *(iVar3 + 0xd8) = sym.sysmon_notify.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
    blocking_notifier_chain_register(obj.sysmon_notifiers,iVar3 + 0xd8);
    mutex_lock(obj.sysmon_lock);
    iVar1 = _obj.sysmon_list;
    iVar6 = iVar3 + 0x70;
    uVar4 = __list_add_valid(iVar6,obj.sysmon_list,_obj.sysmon_list);
    if ((uVar4 & 1) != 0) {
        *(iVar1 + 8) = iVar6;
        *(iVar3 + 0x70) = iVar1;
        *(iVar3 + 0x78) = obj.sysmon_list;
        _obj.sysmon_list = iVar6;
    }
    mutex_unlock(obj.sysmon_lock);
    return iVar3;
}


// ===== sym.ssctl_new_server.f5bc8881cdf160df1d5678497b95ba66.cfi_jt @ 0x080013f0 (size 8) =====

ulong sym.ssctl_new_server.f5bc8881cdf160df1d5678497b95ba66.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_2 + 4);
    if (iVar1 == 2) {
        if (*(param_2 + 8) == *(param_1 + -0x130)) goto code_r0x08002210;
    }
    else if (((iVar1 == 1) && (*(param_2 + 8) == 0)) && (iVar2 = strcmp(*(param_1 + -0x140),"modem"), iVar2 == 0)) {
code_r0x08002210:
        *(param_1 + -0x134) = iVar1;
        *(param_1 + 0x140) = 0x2a;
        *(param_1 + 0x144) = *(param_2 + 0xc);
        *(param_1 + 0x148) = *(param_2 + 0x10);
        *(param_2 + 0x18) = param_1 + -0x1c0;
        complete(param_1 + -0x58);
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.sysmon_notify.f5bc8881cdf160df1d5678497b95ba66.cfi_jt @ 0x080013f8 (size 8) =====

ulong sym.sysmon_notify.f5bc8881cdf160df1d5678497b95ba66.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + -0xa0) == 1) && (iVar1 = strcmp(*(param_3 + 0x80),*(param_1 + -0x58)), iVar1 != 0)) {
        sym.send_event(param_1 + -0xd8,param_3);
    }
    return 0;
}


// ===== sym.sysmon_remove.f5bc8881cdf160df1d5678497b95ba66.cfi_jt @ 0x08001400 (size 8) =====

void sym.sysmon_remove.f5bc8881cdf160df1d5678497b95ba66.cfi_jt(int64_t param_1)

{
    *(*(*(param_1 + 0x3c8) + 0x58) + 0x100) = 0;
    return;
}


// ===== sym.qcom_sysmon_get_reason.cfi_jt @ 0x08001408 (size 8) =====

uint64_t sym.qcom_sysmon_get_reason.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    uint uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    uint64_t uVar8;
    ulong uVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    uchar auStack_b4 [4];
    uint64_t uStack_b0;
    ulong uStack_a8;
    uchar auStack_a4 [4];
    ulong uStack_a0;
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
    iVar5 = sp_el0;
    uVar8 = 0xffffffea;
    iStack_48 = *(iVar5 + 0x5e0);
    auStack_b4[0] = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_100 = 0;
    uVar3 = param_3;
    if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) goto code_r0x0800153c;
    uVar9 = *(param_1 + 0x80);
    uVar1 = qmi_txn_init(param_1 + 0x1c0,&uStack_100,obj.qmi_ssctl_get_failure_reason_resp_msg_ei,&uStack_b0);
    if (uVar1 < 0) {
        uVar8 = uVar1;
        uVar4 = 0x800064e;
    }
    else {
        uVar8 = qmi_send_request(param_1 + 0x1c0,param_1 + 0x300,&uStack_100,0x22,0,
                                 obj.qmi_ssctl_get_failure_reason_resp_msg_ei,auStack_b4);
        if (uVar8 < 0) {
            uVar3 = uVar8 & 0xffffffff;
            _printk(0x800074a,uVar9);
            qmi_txn_cancel(&uStack_100);
            goto code_r0x0800153c;
        }
        uVar3 = qmi_txn_wait(&uStack_100,0x4e2);
        uVar8 = uVar3 & 0xffffffff;
        if (-1 < uVar3) {
            uVar3 = uStack_b0 & 0xffff;
            if (uStack_b0 == 0) {
                strscpy(param_2,auStack_a4);
                uVar3 = param_3;
            }
            else {
                _dev_err(*(param_1 + 0xf0),"failed to receive req. response result: %d\n");
            }
            goto code_r0x0800153c;
        }
        uVar4 = 0x80006e2;
    }
    uVar3 = uVar8;
    _printk(uVar4,uVar9);
code_r0x0800153c:
    uVar6 = uVar3;
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar8 & 0xffffffff;
    }
    auVar10 = __stack_chk_fail();
    iVar5 = auVar10._0_8_;
    *extraout_x18 = sym.qcom_add_sysmon_subdev;
    uVar3 = kmem_cache_alloc_trace(_qmi_txn_init,0xdc0,0x310);
    if (uVar3 == 0) {
        return 0xfffffffffffffff4;
    }
    *(uVar3 + 0x80) = auVar10._8_8_;
    *(uVar3 + 0x90) = uVar6;
    uVar9 = *(iVar5 + 0x98);
    *(uVar3 + 0x30) = iVar5;
    *(uVar3 + 0xf0) = uVar9;
    *(uVar3 + 0x108) = 0;
    __init_swait_queue_head(uVar3 + 0x110,"&x->wait",obj.init_completion.__key);
    *(uVar3 + 0x128) = 0;
    __init_swait_queue_head(uVar3 + 0x130,"&x->wait",obj.init_completion.__key);
    *(uVar3 + 0x148) = 0;
    __init_swait_queue_head(uVar3 + 0x150,"&x->wait",obj.init_completion.__key);
    *(uVar3 + 0x168) = 0;
    __init_swait_queue_head(uVar3 + 0x170,"&x->wait",obj.init_completion.__key);
    init_timer_key(uVar3 + 0xa0,sym.sysmon_notif_timeout_handler.f5bc8881cdf160df1d5678497b95ba66.cfi_jt,0,0,0);
    __mutex_init(uVar3 + 0x188,"&sysmon->lock",obj.init_completion.__key);
    __mutex_init(uVar3 + 0x40,"&sysmon->state_lock",obj.init_completion.__key);
    if (*(uVar3 + 0x90) != -0x16) {
        iVar2 = of_irq_get_byname(*(*(uVar3 + 0xf0) + 0x2f0),"shutdown-ack");
        *(uVar3 + 0x88) = iVar2;
        if (iVar2 < 0) {
            if (iVar2 != -0x3d) {
                _dev_err(*(uVar3 + 0xf0),"failed to retrieve shutdown-ack IRQ\n");
                return *(uVar3 + 0x88);
            }
        }
        else {
            iVar2 = devm_request_threaded_irq
                              (*(uVar3 + 0xf0),iVar2,0,
                               sym.sysmon_shutdown_interrupt.f5bc8881cdf160df1d5678497b95ba66.cfi_jt,0x2001,
                               "q6v5 shutdown-ack",uVar3);
            if (iVar2 != 0) {
                _dev_err(*(uVar3 + 0xf0),"failed to acquire shutdown-ack IRQ\n");
                return iVar2;
            }
        }
        iVar2 = qmi_handle_init(uVar3 + 0x1c0,7,reloc.ssctl_new_server.f5bc8881cdf160df1d5678497b95ba66.cfi_jt,
                                obj.qmi_indication_handler);
        if (iVar2 < 0) {
            _dev_err(*(uVar3 + 0xf0),"failed to initialize qmi handle\n");
            kfree(uVar3);
            return iVar2;
        }
        qmi_add_lookup(uVar3 + 0x1c0,0x2b,0,0);
    }
    *(uVar3 + 0x10) = sym.sysmon_prepare.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
    *(uVar3 + 0x18) = sym.sysmon_start.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
    *(uVar3 + 0x20) = sym.sysmon_stop.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
    *(uVar3 + 0x28) = sym.sysmon_unprepare.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
    rproc_add_subdev(iVar5,uVar3);
    *(uVar3 + 0xd8) = sym.sysmon_notify.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
    blocking_notifier_chain_register(obj.sysmon_notifiers,uVar3 + 0xd8);
    mutex_lock(obj.sysmon_lock);
    iVar5 = _obj.sysmon_list;
    iVar7 = uVar3 + 0x70;
    uVar8 = __list_add_valid(iVar7,obj.sysmon_list,_obj.sysmon_list);
    if ((uVar8 & 1) != 0) {
        *(iVar5 + 8) = iVar7;
        *(uVar3 + 0x70) = iVar5;
        *(uVar3 + 0x78) = obj.sysmon_list;
        _obj.sysmon_list = iVar7;
    }
    mutex_unlock(obj.sysmon_lock);
    return uVar3;
}


// ===== sym.sysmon_shutdown_interrupt.f5bc8881cdf160df1d5678497b95ba66.cfi_jt @ 0x08001410 (size 8) =====

ulong sym.sysmon_shutdown_interrupt.f5bc8881cdf160df1d5678497b95ba66.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    complete(param_2 + 0x148);
    return 1;
}


// ===== sym.sysmon_ind_cb.f5bc8881cdf160df1d5678497b95ba66.cfi_jt @ 0x08001418 (size 8) =====

void sym.sysmon_ind_cb.f5bc8881cdf160df1d5678497b95ba66.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    complete(param_1 + -0x98);
    return;
}


// ===== sym.sysmon_start.f5bc8881cdf160df1d5678497b95ba66.cfi_jt @ 0x08001420 (size 8) =====

ulong sym.sysmon_start.f5bc8881cdf160df1d5678497b95ba66.cfi_jt(code *param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = (*(*(param_1 + 0x30) + 0x98))[0xe];
    if (iVar1 == 0) {
        iVar1 = **(*(param_1 + 0x30) + 0x98);
    }
    *(param_1 + 0x168) = 0;
    mutex_lock(param_1 + 0x40,iVar1);
    *(param_1 + 0x38) = 1;
    blocking_notifier_call_chain(obj.sysmon_notifiers,0,param_1);
    mutex_unlock(param_1 + 0x40);
    mutex_lock(obj.sysmon_lock);
    for (pcVar2 = _obj.sysmon_list; pcVar2 != obj.sysmon_list; pcVar2 = *pcVar2) {
        mutex_lock(pcVar2 + -0x30);
        if ((pcVar2 + -0x70 != param_1) && (*(pcVar2 + -0x38) == 1)) {
            sym.send_event(param_1,pcVar2 + -0x70);
        }
        mutex_unlock(pcVar2 + -0x30);
    }
    mutex_unlock(obj.sysmon_lock);
    return 0;
}


// ===== sym.sysmon_prepare.f5bc8881cdf160df1d5678497b95ba66.cfi_jt @ 0x08001428 (size 8) =====

ulong sym.sysmon_prepare.f5bc8881cdf160df1d5678497b95ba66.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(*(param_1 + 0x30) + 0x98);
    iVar1 = piVar2[0xe];
    if (iVar1 == 0) {
        iVar1 = *piVar2;
    }
    mutex_lock(param_1 + 0x40,iVar1);
    *(param_1 + 0x38) = 0;
    blocking_notifier_call_chain(obj.sysmon_notifiers,0,param_1);
    mutex_unlock(param_1 + 0x40);
    return 0;
}


// ===== sym.qcom_sysmon_get_txn_id @ 0x08001430 (size 16) =====

uint sym.qcom_sysmon_get_txn_id(int64_t arg1)

{
    return *(arg1 + 0xf8);
}


// ===== sym.qcom_sysmon_get_reason @ 0x08001440 (size 404) =====

uint64_t sym.qcom_sysmon_get_reason(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    uint uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    uint64_t uVar8;
    ulong uVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    uchar auStack_b4 [4];
    uint64_t uStack_b0;
    ulong uStack_a8;
    uchar auStack_a4 [4];
    ulong uStack_a0;
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
    iVar5 = sp_el0;
    uVar8 = 0xffffffea;
    iStack_48 = *(iVar5 + 0x5e0);
    auStack_b4[0] = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_100 = 0;
    uVar3 = arg3;
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) goto code_r0x0800153c;
    uVar9 = *(arg1 + 0x80);
    uVar1 = qmi_txn_init(arg1 + 0x1c0,&uStack_100,obj.qmi_ssctl_get_failure_reason_resp_msg_ei,&uStack_b0);
    if (uVar1 < 0) {
        uVar8 = uVar1;
        uVar4 = 0x800064e;
    }
    else {
        uVar8 = qmi_send_request(arg1 + 0x1c0,arg1 + 0x300,&uStack_100,0x22,0,
                                 obj.qmi_ssctl_get_failure_reason_resp_msg_ei,auStack_b4);
        if (uVar8 < 0) {
            uVar3 = uVar8 & 0xffffffff;
            _printk(0x800074a,uVar9);
            qmi_txn_cancel(&uStack_100);
            goto code_r0x0800153c;
        }
        uVar3 = qmi_txn_wait(&uStack_100,0x4e2);
        uVar8 = uVar3 & 0xffffffff;
        if (-1 < uVar3) {
            uVar3 = uStack_b0 & 0xffff;
            if (uStack_b0 == 0) {
                strscpy(arg2,auStack_a4);
                uVar3 = arg3;
            }
            else {
                _dev_err(*(arg1 + 0xf0),"failed to receive req. response result: %d\n");
            }
            goto code_r0x0800153c;
        }
        uVar4 = 0x80006e2;
    }
    uVar3 = uVar8;
    _printk(uVar4,uVar9);
code_r0x0800153c:
    uVar6 = uVar3;
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar8 & 0xffffffff;
    }
    auVar10 = __stack_chk_fail();
    iVar5 = auVar10._0_8_;
    *extraout_x18 = sym.qcom_add_sysmon_subdev;
    uVar3 = kmem_cache_alloc_trace(_qmi_txn_init,0xdc0,0x310);
    if (uVar3 == 0) {
        return 0xfffffffffffffff4;
    }
    *(uVar3 + 0x80) = auVar10._8_8_;
    *(uVar3 + 0x90) = uVar6;
    uVar9 = *(iVar5 + 0x98);
    *(uVar3 + 0x30) = iVar5;
    *(uVar3 + 0xf0) = uVar9;
    *(uVar3 + 0x108) = 0;
    __init_swait_queue_head(uVar3 + 0x110,"&x->wait",obj.init_completion.__key);
    *(uVar3 + 0x128) = 0;
    __init_swait_queue_head(uVar3 + 0x130,"&x->wait",obj.init_completion.__key);
    *(uVar3 + 0x148) = 0;
    __init_swait_queue_head(uVar3 + 0x150,"&x->wait",obj.init_completion.__key);
    *(uVar3 + 0x168) = 0;
    __init_swait_queue_head(uVar3 + 0x170,"&x->wait",obj.init_completion.__key);
    init_timer_key(uVar3 + 0xa0,sym.sysmon_notif_timeout_handler.f5bc8881cdf160df1d5678497b95ba66.cfi_jt,0,0,0);
    __mutex_init(uVar3 + 0x188,"&sysmon->lock",obj.init_completion.__key);
    __mutex_init(uVar3 + 0x40,"&sysmon->state_lock",obj.init_completion.__key);
    if (*(uVar3 + 0x90) != -0x16) {
        iVar2 = of_irq_get_byname(*(*(uVar3 + 0xf0) + 0x2f0),"shutdown-ack");
        *(uVar3 + 0x88) = iVar2;
        if (iVar2 < 0) {
            if (iVar2 != -0x3d) {
                _dev_err(*(uVar3 + 0xf0),"failed to retrieve shutdown-ack IRQ\n");
                return *(uVar3 + 0x88);
            }
        }
        else {
            iVar2 = devm_request_threaded_irq
                              (*(uVar3 + 0xf0),iVar2,0,
                               sym.sysmon_shutdown_interrupt.f5bc8881cdf160df1d5678497b95ba66.cfi_jt,0x2001,
                               "q6v5 shutdown-ack",uVar3);
            if (iVar2 != 0) {
                _dev_err(*(uVar3 + 0xf0),"failed to acquire shutdown-ack IRQ\n");
                return iVar2;
            }
        }
        iVar2 = qmi_handle_init(uVar3 + 0x1c0,7,reloc.ssctl_new_server.f5bc8881cdf160df1d5678497b95ba66.cfi_jt,
                                obj.qmi_indication_handler);
        if (iVar2 < 0) {
            _dev_err(*(uVar3 + 0xf0),"failed to initialize qmi handle\n");
            kfree(uVar3);
            return iVar2;
        }
        qmi_add_lookup(uVar3 + 0x1c0,0x2b,0,0);
    }
    *(uVar3 + 0x10) = sym.sysmon_prepare.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
    *(uVar3 + 0x18) = sym.sysmon_start.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
    *(uVar3 + 0x20) = sym.sysmon_stop.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
    *(uVar3 + 0x28) = sym.sysmon_unprepare.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
    rproc_add_subdev(iVar5,uVar3);
    *(uVar3 + 0xd8) = sym.sysmon_notify.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
    blocking_notifier_chain_register(obj.sysmon_notifiers,uVar3 + 0xd8);
    mutex_lock(obj.sysmon_lock);
    iVar5 = _obj.sysmon_list;
    iVar7 = uVar3 + 0x70;
    uVar8 = __list_add_valid(iVar7,obj.sysmon_list,_obj.sysmon_list);
    if ((uVar8 & 1) != 0) {
        *(iVar5 + 8) = iVar7;
        *(uVar3 + 0x70) = iVar5;
        *(uVar3 + 0x78) = obj.sysmon_list;
        _obj.sysmon_list = iVar7;
    }
    mutex_unlock(obj.sysmon_lock);
    return uVar3;
}


// ===== sym.qcom_add_sysmon_subdev @ 0x080015d4 (size 684) =====

int64_t sym.qcom_add_sysmon_subdev(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = kmem_cache_alloc_trace(_qmi_txn_init,0xdc0,0x310);
    if (iVar3 == 0) {
        return -0xc;
    }
    *(iVar3 + 0x80) = arg2;
    *(iVar3 + 0x90) = arg3;
    uVar5 = *(arg1 + 0x98);
    *(iVar3 + 0x30) = arg1;
    *(iVar3 + 0xf0) = uVar5;
    *(iVar3 + 0x108) = 0;
    __init_swait_queue_head(iVar3 + 0x110,"&x->wait",obj.init_completion.__key);
    *(iVar3 + 0x128) = 0;
    __init_swait_queue_head(iVar3 + 0x130,"&x->wait",obj.init_completion.__key);
    *(iVar3 + 0x148) = 0;
    __init_swait_queue_head(iVar3 + 0x150,"&x->wait",obj.init_completion.__key);
    *(iVar3 + 0x168) = 0;
    __init_swait_queue_head(iVar3 + 0x170,"&x->wait",obj.init_completion.__key);
    init_timer_key(iVar3 + 0xa0,sym.sysmon_notif_timeout_handler.f5bc8881cdf160df1d5678497b95ba66.cfi_jt,0,0,0);
    __mutex_init(iVar3 + 0x188,"&sysmon->lock",obj.init_completion.__key);
    __mutex_init(iVar3 + 0x40,"&sysmon->state_lock",obj.init_completion.__key);
    if (*(iVar3 + 0x90) != -0x16) {
        iVar2 = of_irq_get_byname(*(*(iVar3 + 0xf0) + 0x2f0),"shutdown-ack");
        *(iVar3 + 0x88) = iVar2;
        if (iVar2 < 0) {
            if (iVar2 != -0x3d) {
                _dev_err(*(iVar3 + 0xf0),"failed to retrieve shutdown-ack IRQ\n");
                return *(iVar3 + 0x88);
            }
        }
        else {
            iVar2 = devm_request_threaded_irq
                              (*(iVar3 + 0xf0),iVar2,0,
                               sym.sysmon_shutdown_interrupt.f5bc8881cdf160df1d5678497b95ba66.cfi_jt,0x2001,
                               "q6v5 shutdown-ack",iVar3);
            if (iVar2 != 0) {
                _dev_err(*(iVar3 + 0xf0),"failed to acquire shutdown-ack IRQ\n");
                return iVar2;
            }
        }
        iVar2 = qmi_handle_init(iVar3 + 0x1c0,7,reloc.ssctl_new_server.f5bc8881cdf160df1d5678497b95ba66.cfi_jt,
                                obj.qmi_indication_handler);
        if (iVar2 < 0) {
            _dev_err(*(iVar3 + 0xf0),"failed to initialize qmi handle\n");
            kfree(iVar3);
            return iVar2;
        }
        qmi_add_lookup(iVar3 + 0x1c0,0x2b,0,0);
    }
    *(iVar3 + 0x10) = sym.sysmon_prepare.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
    *(iVar3 + 0x18) = sym.sysmon_start.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
    *(iVar3 + 0x20) = sym.sysmon_stop.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
    *(iVar3 + 0x28) = sym.sysmon_unprepare.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
    rproc_add_subdev(arg1,iVar3);
    *(iVar3 + 0xd8) = sym.sysmon_notify.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
    blocking_notifier_chain_register(obj.sysmon_notifiers,iVar3 + 0xd8);
    mutex_lock(obj.sysmon_lock);
    iVar1 = _obj.sysmon_list;
    iVar6 = iVar3 + 0x70;
    uVar4 = __list_add_valid(iVar6,obj.sysmon_list,_obj.sysmon_list);
    if ((uVar4 & 1) != 0) {
        *(iVar1 + 8) = iVar6;
        *(iVar3 + 0x70) = iVar1;
        *(iVar3 + 0x78) = obj.sysmon_list;
        _obj.sysmon_list = iVar6;
    }
    mutex_unlock(obj.sysmon_lock);
    return iVar3;
}


// ===== sym.sysmon_notif_timeout_handler @ 0x08001880 (size 164) =====

void sym.sysmon_notif_timeout_handler(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    uint *in_x3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *in_x3 = 0x800c000;
    uVar1 = *(arg1 + -0x68);
    if (qcom_device_shutdown_in_progress == 0x0) {
        if (uVar1 < 4) {
            panic("sysmon msg from %s to %s for %s taking too long",*(arg1 + -0x20),*(*(arg1 + -8) + 0x80),
                  *(obj.subdevice_state_string + uVar1 * 8));
        }
    }
    else if (uVar1 < 4) {
        __warn_printk("sysmon msg from %s to %s for %s taking too long",*(arg1 + -0x20),*(*(arg1 + -8) + 0x80),
                      *(obj.subdevice_state_string + uVar1 * 8));
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x800,0x80018e4);
        (*pcVar2)();
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8001924);
    (*pcVar2)();
}


// ===== sym.sysmon_shutdown_interrupt @ 0x08001924 (size 44) =====

ulong sym.sysmon_shutdown_interrupt(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    complete(arg1 + 0x148);
    return 1;
}


// ===== sym.sysmon_prepare @ 0x08001950 (size 124) =====

ulong sym.sysmon_prepare(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(*(arg1 + 0x30) + 0x98);
    iVar1 = piVar2[0xe];
    if (iVar1 == 0) {
        iVar1 = *piVar2;
    }
    mutex_lock(arg1 + 0x40,iVar1);
    *(arg1 + 0x38) = 0;
    blocking_notifier_call_chain(obj.sysmon_notifiers,0,arg1);
    mutex_unlock(arg1 + 0x40);
    return 0;
}


// ===== sym.sysmon_start @ 0x08001a58 (size 252) =====

ulong sym.sysmon_start(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(*(arg1 + 0x30) + 0x98);
    iVar1 = piVar2[0xe];
    if (iVar1 == 0) {
        iVar1 = *piVar2;
    }
    *(arg1 + 0x168) = 0;
    mutex_lock(arg1 + 0x40,iVar1);
    *(arg1 + 0x38) = 1;
    blocking_notifier_call_chain(obj.sysmon_notifiers,0,arg1);
    mutex_unlock(arg1 + 0x40);
    mutex_lock(obj.sysmon_lock);
    for (pcVar3 = _obj.sysmon_list; pcVar3 != obj.sysmon_list; pcVar3 = *pcVar3) {
        mutex_lock(pcVar3 + -0x30);
        if ((pcVar3 + -0x70 != arg1) && (*(pcVar3 + -0x38) == 1)) {
            sym.send_event(arg1,pcVar3 + -0x70);
        }
        mutex_unlock(pcVar3 + -0x30);
    }
    mutex_unlock(obj.sysmon_lock);
    return 0;
}


// ===== sym.sysmon_stop @ 0x08001be0 (size 900) =====

void sym.sysmon_stop(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong uVar5;
    char *pcVar6;
    ulong extraout_x8;
    int64_t iVar7;
    ulong *in_x18;
    uint64_t uVar8;
    uchar uVar9;
    ulong unaff_x30;
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
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uVar8 = arg2 & 0xffffffff;
    do {
        *(arg1 + 0x1b9) = 0;
        mutex_lock(arg1 + 0x40);
        *(arg1 + 0x38) = 2;
        *(arg1 + 0xf8) = *(arg1 + 0xf8) + 1;
        _dev_info(*(arg1 + 0xf0),"Incrementing tid for %s to %d\n",*(arg1 + 0x80));
        blocking_notifier_call_chain(obj.sysmon_notifiers,0,arg1);
        mutex_unlock(arg1 + 0x40);
        if ((uVar8 & 1) == 0) {
            uVar8 = arg1 + 0xa0;
            *(arg1 + 0xb8) = sym.sysmon_shutdown_notif_timeout_handler.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
            mod_timer(uVar8,__printk + 5000);
            if ((*(arg1 + 0x90) == 0) || (iVar3 = wait_for_completion_timeout(arg1 + 0x168,0x7d), iVar3 != 0)) {
                if (*(arg1 + 0x8c) != 0) goto code_r0x08001ce0;
code_r0x08001db8:
                if (*(arg1 + 0x100) != 0) {
                    mutex_lock(arg1 + 0x188);
                    *(arg1 + 0x108) = 0;
                    *(arg1 + 0x1b8) = 0;
                    iVar2 = rpmsg_send(*(arg1 + 0x100),"ssr:shutdown",0xd);
                    if (iVar2 < 0) {
                        pcVar6 = "send sysmon shutdown request failed\n";
code_r0x08001ec8:
                        _dev_err(*(arg1 + 0xf0),pcVar6);
                        uVar9 = 0;
                    }
                    else {
                        iVar2 = wait_for_completion_timeout(arg1 + 0x108,0x4e2);
                        if (iVar2 == 0) {
                            pcVar6 = "timeout waiting for sysmon ack\n";
                            goto code_r0x08001ec8;
                        }
                        if (*(arg1 + 0x1b8) == '\0') {
                            pcVar6 = "unexpected response to sysmon shutdown request\n";
                            goto code_r0x08001ec8;
                        }
                        uVar9 = 1;
                    }
                    mutex_unlock(arg1 + 0x188);
                    goto code_r0x08001e10;
                }
            }
            else {
                _dev_err(*(arg1 + 0xf0),"timeout waiting for ssctl service\n");
                if (*(arg1 + 0x8c) == 0) goto code_r0x08001db8;
code_r0x08001ce0:
                uVar9 = 0;
                uStack_3c = 0;
                uStack_50 = 0;
                uStack_48 = 0;
                uStack_60 = 0;
                uStack_58 = 0;
                uStack_70 = 0;
                uStack_68 = 0;
                uStack_80 = 0;
                uStack_78 = 0;
                uStack_88 = 0;
                if (*(arg1 + 0x90) != -0x16) {
                    *(arg1 + 0x128) = 0;
                    *(arg1 + 0x148) = 0;
                    iVar2 = qmi_txn_init(arg1 + 0x1c0,&uStack_88,obj.ssctl_shutdown_resp_ei,&uStack_3c);
                    if (iVar2 < 0) {
                        uVar5 = *(arg1 + 0xf0);
                        pcVar6 = "failed to allocate QMI txn\n";
code_r0x08001e58:
                        _dev_err(uVar5,pcVar6);
                        uVar9 = 0;
                    }
                    else {
                        iVar2 = qmi_send_request(arg1 + 0x1c0,arg1 + 0x300,&uStack_88,0x21,0,0,0);
                        if (iVar2 < 0) {
                            _dev_err(*(arg1 + 0xf0),"failed to send shutdown request\n");
                            qmi_txn_cancel(&uStack_88);
                            uVar9 = 0;
                            goto code_r0x08001e10;
                        }
                        iVar2 = qmi_txn_wait(&uStack_88,0x4e2);
                        if (iVar2 < 0) {
                            pcVar6 = "failed receiving QMI response\n";
code_r0x08001e98:
                            _dev_err(*(arg1 + 0xf0),pcVar6);
                            uVar9 = 0;
                        }
                        else {
                            if (uStack_3c != 0) {
                                pcVar6 = "shutdown request failed\n";
                                goto code_r0x08001e98;
                            }
                            uVar9 = 1;
                        }
                        if (0 < *(arg1 + 0x88)) {
                            iVar2 = wait_for_completion_timeout(arg1 + 0x148,0x9c4);
                            if ((iVar2 == 0) && (uVar4 = try_wait_for_completion(arg1 + 0x128), (uVar4 & 1) == 0)) {
                                uVar5 = *(arg1 + 0xf0);
                                pcVar6 = "timeout waiting for shutdown ack\n";
                                goto code_r0x08001e58;
                            }
                            uVar9 = 1;
                        }
                    }
                }
code_r0x08001e10:
                *(arg1 + 0x1b9) = uVar9;
            }
            del_timer_sync(uVar8);
        }
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iStack_38) {
            return;
        }
        __stack_chk_fail();
        iVar3 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar3) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar3) & 0x3f) & 1) !=
            0) {
            iVar3 = sp_el0;
            piVar1 = iVar3 + 0x10;
            *(iVar3 + 0x10) = *piVar1 + 1;
            __traceiter_rproc_qcom_event(0,extraout_x8,"sysmon");
            iVar7 = *piVar1;
            *(iVar3 + 0x10) = iVar7 + -1;
            if ((iVar7 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
    } while( true );
}


// ===== sym.sysmon_unprepare @ 0x08001f74 (size 124) =====

void sym.sysmon_unprepare(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(*(arg1 + 0x30) + 0x98);
    iVar1 = piVar2[0xe];
    if (iVar1 == 0) {
        iVar1 = *piVar2;
    }
    mutex_lock(arg1 + 0x40,iVar1);
    *(arg1 + 0x38) = 3;
    blocking_notifier_call_chain(obj.sysmon_notifiers,0,arg1);
    mutex_unlock(arg1 + 0x40);
    return;
}


// ===== sym.sysmon_notify @ 0x0800207c (size 92) =====

ulong sym.sysmon_notify(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + -0xa0) == 1) && (iVar1 = strcmp(*(arg2 + 0x80),*(arg1 + -0x58)), iVar1 != 0)) {
        sym.send_event(arg1 + -0xd8,arg2);
    }
    return 0;
}


// ===== sym.qcom_remove_sysmon_subdev @ 0x080020d8 (size 176) =====

void sym.qcom_remove_sysmon_subdev(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 != 0) {
        *in_x18 = unaff_x30;
        mutex_lock(obj.sysmon_lock);
        uVar3 = __list_del_entry_valid(arg1 + 0x70);
        if ((uVar3 & 1) != 0) {
            iVar1 = *(arg1 + 0x70);
            piVar2 = *(arg1 + 0x78);
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *(arg1 + 0x70) = 0xdead000000000100;
        *(arg1 + 0x78) = 0xdead000000000122;
        mutex_unlock(obj.sysmon_lock);
        blocking_notifier_chain_unregister(obj.sysmon_notifiers,arg1 + 0xd8);
        rproc_remove_subdev(*(arg1 + 0x30),arg1);
        if (*(arg1 + 0x90) != -0x16) {
            qmi_handle_release(arg1 + 0x1c0);
        }
        kfree(arg1);
    }
    return;
}


// ===== sym.qcom_sysmon_shutdown_acked @ 0x08002188 (size 32) =====

bool sym.qcom_sysmon_shutdown_acked(int64_t arg1)

{
    bool bVar1;
    
    bVar1 = false;
    if (arg1 != 0) {
        bVar1 = *(arg1 + 0x1b9) != '\0';
    }
    return bVar1;
}


// ===== sym.ssctl_new_server @ 0x080021a8 (size 172) =====

ulong sym.ssctl_new_server(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg2 + 4);
    if (iVar1 == 2) {
        if (*(arg2 + 8) == *(arg1 + -0x130)) goto code_r0x08002210;
    }
    else if (((iVar1 == 1) && (*(arg2 + 8) == 0)) && (iVar2 = strcmp(*(arg1 + -0x140),"modem"), iVar2 == 0)) {
code_r0x08002210:
        *(arg1 + -0x134) = iVar1;
        *(arg1 + 0x140) = 0x2a;
        *(arg1 + 0x144) = *(arg2 + 0xc);
        *(arg1 + 0x148) = *(arg2 + 0x10);
        *(arg2 + 0x18) = arg1 + -0x1c0;
        complete(arg1 + -0x58);
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.ssctl_del_server @ 0x08002254 (size 20) =====

void sym.ssctl_del_server(int64_t arg1,int64_t arg2)

{
    *(*(arg2 + 0x18) + 0x8c) = 0;
    return;
}


// ===== sym.sysmon_ind_cb @ 0x08002268 (size 40) =====

void sym.sysmon_ind_cb(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    complete(arg1 + -0x98);
    return;
}


// ===== sym.send_event @ 0x08002290 (size 1020) =====

void sym.send_event(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    code *pcVar3;
    uchar uVar4;
    int iVar5;
    uint32_t uVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong unaff_x30;
    uint32_t uStack_c4;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    uint64_t uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint64_t uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    *(arg2 + 0xb8) = sym.sysmon_notif_timeout_handler.f5bc8881cdf160df1d5678497b95ba66.cfi_jt;
    *(arg2 + 0x98) = arg1;
    mod_timer(arg2 + 0xa0,__printk + 5000);
    if (*(arg1 + 0x8c) == 2) {
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a0 = 0;
        if (*(arg1 + 0x90) == -0x16) {
code_r0x08002320:
            uStack_60 = 0;
            uStack_68 = 0;
            uStack_70 = 0;
            uStack_78 = 0;
            uStack_80 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            uVar6 = 0xffffffea;
        }
        else {
            iVar1 = arg1 + 0x1c0;
            uStack_c4 = 0;
            uVar6 = qmi_txn_init(iVar1,&uStack_a0,obj.ssctl_subsys_event_with_tid_resp_ei,&uStack_c4);
            if (uVar6 < 0) {
code_r0x08002608:
                _dev_err(*(arg1 + 0xf0),"failed to allocate QMI txn\n");
            }
            else {
                uStack_b0 = 0;
                uStack_a8 = 0;
                uStack_c0 = 0;
                uStack_b8 = 0;
                strscpy(&uStack_c0 | 1,*(arg2 + 0x80),0xf);
                uVar4 = strlen(&uStack_c0 | 1);
                uStack_c0 = CONCAT71(uStack_c0._1_7_,uVar4);
                uVar2 = uStack_a8 >> 8;
                uStack_a8 = CONCAT71(uVar2 & 0xffffff,1);
                uStack_b0 = CONCAT44(*(arg1 + 0xf8),*(arg2 + 0x38));
                uVar6 = qmi_send_request(iVar1,arg1 + 0x300,&uStack_a0,0x25,0x28,
                                         obj.ssctl_subsys_event_with_tid_req_ei,&uStack_c0);
                if (uVar6 < 0) {
code_r0x08002668:
                    _dev_err(*(arg1 + 0xf0),"failed to send shutdown request\n");
                    qmi_txn_cancel(&uStack_a0);
                }
                else {
                    uVar6 = qmi_txn_wait(&uStack_a0,0x4e2);
                    if (uVar6 < 0) {
code_r0x08002620:
                        _dev_err(*(arg1 + 0xf0),"failed receiving QMI response\n");
                    }
                    else if (uStack_c4 == 0) {
code_r0x08002478:
                        uVar6 = 0;
                    }
                    else {
                        if (3 < *(arg2 + 0x38)) goto code_r0x08002688;
                        _dev_err(*(arg1 + 0xf0),"failed to receive %s ssr %s event. response result: %d\n",
                                 *(arg2 + 0x80),*(obj.subdevice_state_string + *(arg2 + 0x38) * 8));
                        uVar6 = uStack_c4 & 0xffff;
                        if (uVar6 == 1) {
                            _dev_err(*(arg1 + 0xf0),"Retrying legacy EVENT_REQ\n");
                            uStack_68 = 0;
                            uStack_60 = 0;
                            uStack_78 = 0;
                            uStack_70 = 0;
                            uStack_88 = 0;
                            uStack_80 = 0;
                            uStack_98 = 0;
                            uStack_90 = 0;
                            uStack_a0 = 0;
                            if (*(arg1 + 0x90) == -0x16) goto code_r0x08002320;
                            uStack_c4 = 0;
                            uVar6 = qmi_txn_init(iVar1,&uStack_a0,obj.ssctl_subsys_event_with_tid_resp_ei,&uStack_c4)
                            ;
                            if (uVar6 < 0) goto code_r0x08002608;
                            uStack_a8 = uStack_a8 & 0xffffffff00000000;
                            uStack_b8 = 0;
                            uStack_b0 = 0;
                            uStack_c0 = 0;
                            strscpy(&uStack_c0 | 1,*(arg2 + 0x80),0xf);
                            uVar4 = strlen(&uStack_c0 | 1);
                            uStack_c0 = CONCAT71(uStack_c0._1_7_,uVar4);
                            uStack_b0._0_5_ = CONCAT14(1,*(arg2 + 0x38));
                            uStack_a8 = uStack_a8 & 0xffffffff00000000;
                            uVar6 = qmi_send_request(iVar1,arg1 + 0x300,&uStack_a0,0x23,0x28,
                                                     obj.ssctl_subsys_event_req_ei,&uStack_c0);
                            if (uVar6 < 0) goto code_r0x08002668;
                            uVar6 = qmi_txn_wait(&uStack_a0,0x4e2);
                            if (uVar6 < 0) goto code_r0x08002620;
                            if (uStack_c4 == 0) goto code_r0x08002478;
                            if (3 < *(arg2 + 0x38)) goto code_r0x08002688;
                            _dev_err(*(arg1 + 0xf0),"failed to receive %s ssr %s event. response result: %d\n",
                                     *(arg2 + 0x80),*(obj.subdevice_state_string + *(arg2 + 0x38) * 8));
                            uVar6 = uStack_c4 & 0xffff;
                        }
                    }
                }
            }
        }
        if (uVar6 != 0) {
            _printk(0x8000835);
        }
    }
    else if (*(arg1 + 0x100) != 0) {
        uStack_70 = uStack_70 & 0xffffffffffff0000;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        if (3 < *(arg2 + 0x38)) goto code_r0x08002688;
        uVar6 = scnprintf(&uStack_a0,0x32,"ssr:%s:%s",*(arg2 + 0x80),
                          *(obj.subdevice_state_string + *(arg2 + 0x38) * 8));
        if (0x31 < uVar6) goto code_r0x08002480;
        mutex_lock(arg1 + 0x188);
        *(arg1 + 0x108) = 0;
        *(arg1 + 0x1b8) = 0;
        iVar5 = rpmsg_send(*(arg1 + 0x100),&uStack_a0,uVar6);
        if (iVar5 < 0) {
            pcVar7 = "failed to send sysmon event\n";
code_r0x08002658:
            _dev_err(*(arg1 + 0xf0),pcVar7);
        }
        else {
            iVar5 = wait_for_completion_timeout(arg1 + 0x108,0x4e2);
            if (iVar5 == 0) {
                pcVar7 = "timeout waiting for sysmon ack\n";
                goto code_r0x08002658;
            }
            if (*(arg1 + 0x1b8) == '\0') {
                pcVar7 = "unexpected response to sysmon event\n";
                goto code_r0x08002658;
            }
        }
        mutex_unlock(arg1 + 0x188);
    }
code_r0x08002480:
    del_timer_sync(arg2 + 0xa0);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail();
code_r0x08002688:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x800268c);
    (*pcVar3)();
}


// ===== sym.sysmon_shutdown_notif_timeout_handler @ 0x0800268c (size 88) =====

ulong sym.sysmon_shutdown_notif_timeout_handler(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    code *pcVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = *(arg1 + -0x20);
    *arg2 = qmi_txn_init;
    if (qcom_device_shutdown_in_progress != 0x0) {
        __warn_printk();
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x80026d0);
        (*pcVar1)();
    }
    iVar2 = panic("sysmon_send_shutdown to %s taking too long",uVar4);
    *extraout_x18 = sym.sysmon_probe;
    iVar3 = rproc_get_by_child();
    if (iVar3 == 0) {
        pcVar5 = "sysmon device not child of rproc\n";
    }
    else {
        mutex_lock(obj.sysmon_lock);
        for (pcVar1 = _obj.sysmon_list; pcVar1 != obj.sysmon_list; pcVar1 = *pcVar1) {
            if (*(pcVar1 + -0x40) == iVar3) {
                mutex_unlock(obj.sysmon_lock);
                *(*(iVar2 + 0x3c8) + 0x58) = pcVar1 + -0x70;
                *(pcVar1 + 0x90) = *(iVar2 + 0x3c8);
                return 0;
            }
        }
        mutex_unlock(obj.sysmon_lock);
        pcVar5 = "no sysmon associated with parent rproc\n";
    }
    _dev_err(iVar2,pcVar5);
    return 0xffffffea;
}


// ===== sym.sysmon_probe @ 0x080026e4 (size 204) =====

ulong sym.sysmon_probe(int64_t arg1)

{
    int64_t iVar1;
    char *pcVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rproc_get_by_child();
    if (iVar1 == 0) {
        pcVar2 = "sysmon device not child of rproc\n";
    }
    else {
        mutex_lock(obj.sysmon_lock);
        for (pcVar3 = _obj.sysmon_list; pcVar3 != obj.sysmon_list; pcVar3 = *pcVar3) {
            if (*(pcVar3 + -0x40) == iVar1) {
                mutex_unlock(obj.sysmon_lock);
                *(*(arg1 + 0x3c8) + 0x58) = pcVar3 + -0x70;
                *(pcVar3 + 0x90) = *(arg1 + 0x3c8);
                return 0;
            }
        }
        mutex_unlock(obj.sysmon_lock);
        pcVar2 = "no sysmon associated with parent rproc\n";
    }
    _dev_err(arg1,pcVar2);
    return 0xffffffea;
}


// ===== sym.sysmon_remove @ 0x080027b0 (size 24) =====

void sym.sysmon_remove(int64_t arg1)

{
    *(*(*(arg1 + 0x3c8) + 0x58) + 0x100) = 0;
    return;
}


// ===== sym.sysmon_callback @ 0x080027c8 (size 104) =====

ulong sym.sysmon_callback(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg3 != 0) {
        *in_x18 = unaff_x30;
        if ((7 < arg2) && (*arg1 == 0x6b63613a727373)) {
            *(arg3 + 0x1b8) = 1;
        }
        complete(arg3 + 0x108);
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.__cfi_check_fail @ 0x08002830 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002874

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
    //switch table (4 cases) at 0x8000ae1
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002888);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002910 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __register_rpmsg_driver(obj.sysmon_driver,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08002944 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_rpmsg_driver(obj.sysmon_driver);
    return;
}

