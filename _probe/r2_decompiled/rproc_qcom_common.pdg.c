// decompiled from rproc_qcom_common by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 1164) =====

//WARNING: Switch with 1 destination removed at 0x08002f58

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x228529b67cf28c8c) {
        if (arg1 < -0x1d0f770c5d502406) {
            if (arg1 < -0x2ee0710dce68437c) {
                if (arg1 == -0x716b114850246e19) {
                    pcVar2 = sym.qcom_minidump.cfi_jt;
                }
                else {
                    if (arg1 == -0x5ce31e376b06509f) {
                        if ((pcVar1 + -0x8001528 >> 3 | pcVar1 << 0x3d) < 5) {
                            return;
                        }
                        goto code_r0x08002f18;
                    }
                    if (arg1 != -0x433102b91fe690ab) goto code_r0x08002f18;
                    pcVar2 = sym.qcom_register_dump_segments.cfi_jt;
                }
            }
            else if (arg1 == -0x2ee0710dce68437c) {
                pcVar2 = sym.ssr_notif_timeout_handler.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
            }
            else if (arg1 == -0x260ef19575c9b5a3) {
                pcVar2 = sym.__traceiter_rproc_qcom_event.cfi_jt;
            }
            else {
                if (arg1 != -0x218c0108fde83420) goto code_r0x08002f18;
                pcVar2 = sym.trace_event_raw_init.cfi_jt;
            }
        }
        else {
            if (arg1 < 0x1b6c344e75cfc4ea) {
                if (arg1 == -0x1d0f770c5d502406) {
                    pcVar2 = sym.smd_subdev_stop.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
                }
                else {
                    if (arg1 != -0x71994e1f66356d6) {
                        if (arg1 != 0x2b3a43e29242445) goto code_r0x08002f18;
                        pcVar2 = sym.init_module.cfi_jt;
                        goto code_r0x0800147c;
                    }
                    pcVar2 = sym.glink_subdev_unprepare.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
                }
code_r0x08001418:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x08002f18;
            }
            if (arg1 == 0x1b6c344e75cfc4ea) {
                pcVar2 = sym.qcom_rproc_shutdown_request_store.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
            }
            else if (arg1 == 0x1c2b0952efa24c7a) {
                pcVar2 = sym.trace_event_reg.cfi_jt;
            }
            else {
                if (arg1 != 0x1f76c9d8a8ac6a88) goto code_r0x08002f18;
                pcVar2 = sym.qcom_remove_ssr_subdev.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x5c5e12be07400f75) {
        if (arg1 < 0x3d4c609fb5525b83) {
            if (arg1 == 0x228529b67cf28c8c) {
                pcVar2 = sym.qcom_add_glink_subdev.cfi_jt;
            }
            else {
                if (arg1 != 0x2fd4698678672cfc) {
                    if (arg1 != 0x330e5e9de1b7baf0) goto code_r0x08002f18;
                    pcVar2 = sym.qcom_check_ssr_status.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
                    goto code_r0x080013fc;
                }
                pcVar2 = sym.qcom_add_ssr_subdev.cfi_jt;
            }
        }
        else if (arg1 == 0x3d4c609fb5525b83) {
            pcVar2 = sym.qcom_notify_ssr_clients.cfi_jt;
        }
        else if (arg1 == 0x3dd1a39e589289fe) {
            pcVar2 = sym.trace_raw_output_rproc_qcom_event.08b81e75ad7853621899dcb9ced7238e.cfi_jt;
        }
        else {
            if (arg1 != 0x54c5ed839c790d4d) goto code_r0x08002f18;
            pcVar2 = sym.qcom_remove_glink_subdev.cfi_jt;
        }
    }
    else {
        if (arg1 < 0x6b6852ab53af5d45) {
            if (arg1 == 0x5c5e12be07400f75) {
                pcVar2 = sym.qcom_register_ssr_notifier.cfi_jt;
            }
            else {
                if (arg1 == 0x62456f2d5198a6e2) {
                    pcVar2 = sym.perf_trace_rproc_qcom_event.08b81e75ad7853621899dcb9ced7238e.cfi_jt;
                    goto code_r0x08001418;
                }
                if (arg1 != 0x6a2528fd383a57e4) goto code_r0x08002f18;
                pcVar2 = sym.qcom_add_smd_subdev.cfi_jt;
            }
code_r0x080013fc:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08002f18;
        }
        if (arg1 < 0x7e04a0fb7ad8bcd5) {
            if (arg1 == 0x6b6852ab53af5d45) {
                pcVar2 = sym.qcom_ssr_get_subsys.cfi_jt;
            }
            else {
                if (arg1 != 0x7d57972cd3914fb1) goto code_r0x08002f18;
                pcVar2 = sym.glink_early_ssr_notifier_event.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
            }
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) {
                if (arg1 != 0x7ffad59d50a61c95) goto code_r0x08002f18;
                pcVar2 = sym.qcom_unregister_early_ssr_notifier.cfi_jt;
                goto code_r0x080013fc;
            }
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
code_r0x0800147c:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002f18:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002f6c);
    (*pcVar1)();
}


// ===== sym.qcom_add_ssr_subdev.cfi_jt @ 0x08001498 (size 8) =====

void sym.qcom_add_ssr_subdev.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.qcom_ssr_get_subsys(param_3);
    if (uVar1 < 0xfffffffffffff001) {
        init_timer_key(param_2 + 0x38,sym.ssr_notif_timeout_handler.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt,0,0,0);
        *(param_2 + 0x70) = uVar1;
        *(param_2 + 0x10) = sym.ssr_notify_prepare.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
        *(param_2 + 0x18) = sym.ssr_notify_start.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
        *(param_2 + 0x20) = sym.ssr_notify_stop.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
        *(param_2 + 0x28) = sym.ssr_notify_unprepare.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
        rproc_add_subdev(param_1,param_2);
    }
    else {
        _dev_err(param_1 + 0x38,"Failed to add ssr subdevice\n");
    }
    return;
}


// ===== sym.__traceiter_rproc_qcom_event.cfi_jt @ 0x080014a0 (size 8) =====

ulong sym.__traceiter_rproc_qcom_event.cfi_jt(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80038e8;
    piVar1 = *0x80038e8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.qcom_add_glink_subdev.cfi_jt @ 0x080014a8 (size 8) =====

void sym.qcom_add_glink_subdev.cfi_jt(int64_t param_1,int64_t param_2,ulong param_3)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_get_child_by_name(*(*(param_1 + 0x98) + 0x2f0),"glink-edge");
    *(param_2 + 0x40) = iVar1;
    if (iVar1 != 0) {
        iVar1 = kstrdup_const(param_3,0xcc0);
        *(param_2 + 0x30) = iVar1;
        if (iVar1 != 0) {
            *(param_2 + 0x38) = param_1 + 0x38;
            *(param_2 + 0x10) = sym.glink_subdev_prepare.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
            *(param_2 + 0x18) = sym.glink_subdev_start.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
            *(param_2 + 0x20) = sym.glink_subdev_stop.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
            *(param_2 + 0x28) = sym.glink_subdev_unprepare.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
            rproc_add_subdev(param_1,param_2);
        }
    }
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080014b0 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    obj.qcom_device_shutdown_in_progress = 0x0;
    _segment.ehdr = kobject_create_and_add("qcom_rproc",_rproc_coredump_add_custom_segment);
    if (_segment.ehdr == 0) {
        _printk(0x80007d0);
        iVar1 = -0x16;
    }
    else {
        iVar1 = sysfs_create_file_ns(_segment.ehdr,obj.shutdown_requested_attr,0);
        if (iVar1 == 0) {
            iVar1 = tracepoint_probe_register
                              (__tracepoint_android_vh_rproc_recovery,
                               sym.qcom_check_ssr_status.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt,0);
            if (iVar1 == 0) {
                iVar1 = tracepoint_probe_register
                                  (__tracepoint_android_vh_rproc_recovery_set,
                                   sym.rproc_recovery_notifier.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt,0);
                if (iVar1 == 0) {
                    return 0;
                }
                _printk(0x8000959);
                tracepoint_probe_unregister
                          (__tracepoint_android_vh_rproc_recovery,
                           sym.qcom_check_ssr_status.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt,0);
            }
            else {
                _printk(0x80008f8);
            }
            sysfs_remove_file_ns(_segment.ehdr,obj.shutdown_requested_attr,0);
        }
        else {
            _printk(0x8000a8c);
        }
        kobject_put(_segment.ehdr);
    }
    return iVar1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080014b8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    tracepoint_probe_unregister
              (__tracepoint_android_vh_rproc_recovery_set,
               sym.rproc_recovery_notifier.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt,0);
    sysfs_remove_file_ns(_segment.ehdr,obj.shutdown_requested_attr,0);
    kobject_put(_segment.ehdr);
    tracepoint_probe_unregister
              (__tracepoint_android_vh_rproc_recovery,sym.qcom_check_ssr_status.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt
               ,0);
    return;
}


// ===== sym.trace_event_raw_init.cfi_jt @ 0x080014c0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_raw_init.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcom_add_smd_subdev.cfi_jt @ 0x080014c8 (size 8) =====

void sym.qcom_add_smd_subdev.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_get_child_by_name(*(*(param_1 + 0x98) + 0x2f0),"smd-edge");
    *(param_2 + 0x38) = iVar1;
    if (iVar1 != 0) {
        *(param_2 + 0x30) = param_1 + 0x38;
        *(param_2 + 0x18) = sym.smd_subdev_start.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
        *(param_2 + 0x20) = sym.smd_subdev_stop.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
        rproc_add_subdev(param_1,param_2);
    }
    return;
}


// ===== sym.qcom_remove_smd_subdev.cfi_jt @ 0x080014d0 (size 8) =====

void sym.qcom_remove_smd_subdev.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 0x38) != 0) {
        rproc_remove_subdev();
    }
    return;
}


// ===== sym.qcom_rproc_shutdown_request_store.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt @ 0x080014d8 (size 8) =====

uchar * sym.qcom_rproc_shutdown_request_store.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,uchar *param_4)

{
    char *pcVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    uchar *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    uchar auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    auStack_2c[0] = 0x0;
    iVar4 = kstrtobool(param_3,auStack_2c);
    if (iVar4 == 0) {
        pcVar1 = "false";
        if (auStack_2c[0] != 0x0) {
            pcVar1 = "true";
        }
        obj.qcom_device_shutdown_in_progress = auStack_2c[0];
        _printk(0x800084f,pcVar1);
    }
    else {
        param_4 = iVar4;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_28) {
        auVar6 = __stack_chk_fail();
        puVar5 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar5 != NULL) {
            switch(*puVar5) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar5,auVar6._8_8_,0);
                break;
            default:
                return puVar5;
            }
        }
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5502,0x8002f6c);
        (*pcVar3)();
    }
    return param_4;
}


// ===== sym.qcom_register_dump_segments.cfi_jt @ 0x080014e0 (size 8) =====

ulong sym.qcom_register_dump_segments.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_2 + 8);
    uVar2 = *(iVar3 + 0x2c);
    if (*(iVar3 + 0x2c) != 0) {
        uVar4 = 0;
        puVar5 = iVar3 + 0x4c;
        do {
            if (((puVar5[-6] == 1) && ((*puVar5 & 0x7000000) != 0x2000000)) && (puVar5[-1] != 0)) {
                uVar1 = rproc_coredump_add_segment(param_1,puVar5[-3]);
                if (uVar1 != 0) {
                    return uVar1;
                }
                uVar2 = *(iVar3 + 0x2c);
            }
            uVar4 = uVar4 + 1;
            puVar5 = puVar5 + 8;
        } while (uVar4 < uVar2);
    }
    return 0;
}


// ===== sym.glink_early_ssr_notifier_event.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt @ 0x080014e8 (size 8) =====

ulong sym.glink_early_ssr_notifier_event.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    qcom_glink_early_ssr_notify(*(param_1 + -8));
    return 0;
}


// ===== sym.trace_raw_output_rproc_qcom_event.08b81e75ad7853621899dcb9ced7238e.cfi_jt @ 0x080014f0 (size 8) =====

void sym.trace_raw_output_rproc_qcom_event.08b81e75ad7853621899dcb9ced7238e.cfi_jt
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
        trace_event_printf(param_1,"%s: %s: %s\n",iVar2 + *(iVar2 + 8),iVar2 + *(iVar2 + 0xc),
                           iVar2 + *(iVar2 + 0x10));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.ssr_notif_timeout_handler.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt @ 0x080014f8 (size 8) =====

void sym.ssr_notif_timeout_handler.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    code *pcVar2;
    uint *in_x6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *in_x6 = 0x801a000;
    uVar1 = *(param_1 + -8);
    if (obj.qcom_device_shutdown_in_progress == 0x0) {
        if (uVar1 < 4) {
            panic("srcu notifier chain for %s:%s taking too long",**(param_1 + 0x38),
                  *(obj.subdevice_state_string + uVar1 * 8));
        }
    }
    else if (uVar1 < 4) {
        __warn_printk("srcu notifier chain for %s:%s taking too long",**(param_1 + 0x38),
                      *(obj.subdevice_state_string + uVar1 * 8));
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x800,0x800273c);
        (*pcVar2)();
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8002778);
    (*pcVar2)();
}


// ===== sym.glink_subdev_unprepare.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt @ 0x08001500 (size 8) =====

void sym.glink_subdev_unprepare.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(*(param_1 + 0x38) + 0x60);
    iVar1 = piVar2[0xe];
    if (iVar1 == 0) {
        iVar1 = *piVar2;
    }
    qcom_glink_ssr_notify(*(param_1 + 0x30),iVar1);
    return;
}


// ===== sym.qcom_notify_early_ssr_clients.cfi_jt @ 0x08001508 (size 8) =====

void sym.qcom_notify_early_ssr_clients.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    srcu_notifier_call_chain(*(param_1 + 0x70) + 0x2f8,2,0);
    return;
}


// ===== sym.ssr_notify_unprepare.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt @ 0x08001510 (size 8) =====

void sym.ssr_notify_unprepare.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t arg2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_40 = 0;
    uStack_48 = **(param_1 + 0x70);
    while( true ) {
        *(param_1 + 0x30) = 3;
        mod_timer(param_1 + 0x38,_arm64_use_ng_mappings + 5000);
        srcu_notifier_call_chain(*(param_1 + 0x70) + 8,*(param_1 + 0x30),&uStack_48);
        del_timer_sync(param_1 + 0x38);
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
        iVar2 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1) !=
            0) {
            iVar2 = sp_el0;
            piVar1 = iVar2 + 0x10;
            *(iVar2 + 0x10) = *piVar1 + 1;
            sym.__traceiter_rproc_qcom_event(0,arg2,0x80006fb,0x80007c6);
            iVar3 = *piVar1;
            *(iVar2 + 0x10) = iVar3 + -1;
            if ((iVar3 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return;
}


// ===== sym.qcom_unregister_early_ssr_notifier.cfi_jt @ 0x08001518 (size 8) =====

void sym.qcom_unregister_early_ssr_notifier.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    srcu_notifier_chain_unregister();
    return;
}


// ===== sym.qcom_unregister_ssr_notifier.cfi_jt @ 0x08001520 (size 8) =====

void sym.qcom_unregister_ssr_notifier.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    srcu_notifier_chain_unregister();
    return;
}


// ===== sym.smd_subdev_start.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt @ 0x08001528 (size 8) =====

uint sym.smd_subdev_start.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = qcom_smd_register_edge(*(param_1 + 0x30),*(param_1 + 0x38));
    uVar2 = uVar1;
    if (uVar1 < 0xfffffffffffff001) {
        uVar2 = 0;
    }
    *(param_1 + 0x40) = uVar1;
    return uVar2;
}


// ===== sym.ssr_notify_prepare.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt @ 0x08001530 (size 8) =====

ulong sym.ssr_notify_prepare.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t arg2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_40 = 0;
    uStack_48 = **(param_1 + 0x70);
    while( true ) {
        *(param_1 + 0x30) = 0;
        mod_timer(param_1 + 0x38,_arm64_use_ng_mappings + 5000);
        srcu_notifier_call_chain(*(param_1 + 0x70) + 8,*(param_1 + 0x30),&uStack_48);
        del_timer_sync(param_1 + 0x38);
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
        iVar2 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1) !=
            0) {
            iVar2 = sp_el0;
            piVar1 = iVar2 + 0x10;
            *(iVar2 + 0x10) = *piVar1 + 1;
            sym.__traceiter_rproc_qcom_event(0,arg2,0x80006fb,0x8000a2f);
            iVar3 = *piVar1;
            *(iVar2 + 0x10) = iVar3 + -1;
            if ((iVar3 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return 0;
}


// ===== sym.glink_subdev_prepare.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt @ 0x08001538 (size 8) =====

uint sym.glink_subdev_prepare.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = qcom_glink_smem_register(*(param_1 + 0x38),*(param_1 + 0x40));
    uVar2 = uVar1;
    if (uVar1 < 0xfffffffffffff001) {
        uVar2 = 0;
    }
    *(param_1 + 0x48) = uVar1;
    return uVar2;
}


// ===== sym.ssr_notify_start.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt @ 0x08001540 (size 8) =====

ulong sym.ssr_notify_start.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t arg2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_40 = 0;
    uStack_48 = **(param_1 + 0x70);
    while( true ) {
        *(param_1 + 0x30) = 1;
        mod_timer(param_1 + 0x38,_arm64_use_ng_mappings + 5000);
        srcu_notifier_call_chain(*(param_1 + 0x70) + 8,*(param_1 + 0x30),&uStack_48);
        del_timer_sync(param_1 + 0x38);
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
        iVar2 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1) !=
            0) {
            iVar2 = sp_el0;
            piVar1 = iVar2 + 0x10;
            *(iVar2 + 0x10) = *piVar1 + 1;
            sym.__traceiter_rproc_qcom_event(0,arg2,0x80006fb,0x8000ab7);
            iVar3 = *piVar1;
            *(iVar2 + 0x10) = iVar3 + -1;
            if ((iVar3 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return 0;
}


// ===== sym.glink_subdev_start.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt @ 0x08001548 (size 8) =====

void sym.glink_subdev_start.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x50) = sym.glink_early_ssr_notifier_event.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
    uVar1 = sym.qcom_ssr_get_subsys(*(param_1 + 0x30));
    if (uVar1 < 0xfffffffffffff001) {
        uVar1 = uVar1 + 0x2f8;
        srcu_notifier_chain_register(uVar1,param_1 + 0x50);
    }
    *(param_1 + 0x68) = uVar1;
    if (0xfffffffffffff000 < uVar1) {
        _dev_err(*(param_1 + 0x38),"Failed to register for SSR notifier\n");
        *(param_1 + 0x68) = 0;
    }
    qcom_glink_smem_start(*(param_1 + 0x48));
    return;
}


// ===== sym.perf_trace_rproc_qcom_event.08b81e75ad7853621899dcb9ced7238e.cfi_jt @ 0x08001550 (size 8) =====

void sym.perf_trace_rproc_qcom_event.08b81e75ad7853621899dcb9ced7238e.cfi_jt
               (int64_t param_1,char *param_2,char *param_3,char *param_4)

{
    char *pcVar1;
    int iVar2;
    int64_t *piVar3;
    char *pcVar4;
    char *pcVar5;
    uint64_t uVar6;
    int iVar7;
    ulong uVar8;
    ulong in_tmp_ldXn;
    int iVar9;
    int iVar10;
    int iVar11;
    int64_t iVar12;
    uint64_t uVar13;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uint uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    pcVar1 = "(null)";
    iStack_68 = *(iVar12 + 0x5e0);
    pcVar4 = pcVar1;
    if (param_2 != NULL) {
        pcVar4 = param_2;
    }
    iStack_70 = 0;
    uStack_74 = 0;
    iVar9 = strlen();
    pcVar5 = pcVar1;
    if (param_3 != NULL) {
        pcVar5 = param_3;
    }
    iVar10 = strlen(pcVar5);
    if (param_4 != NULL) {
        pcVar1 = param_4;
    }
    iVar11 = strlen(pcVar1);
    iVar12 = tpidr_el1;
    piVar3 = iVar12 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar3 != 0)) {
        iVar2 = iVar10 + 1 + iVar9 + 1;
        iVar7 = (iVar2 + iVar11 + 1 + 0x1fU & 0xfffffff8) - 4;
        iVar12 = perf_trace_buf_alloc(iVar7,&iStack_70,&uStack_74);
        if (iVar12 != 0) {
            uVar13 = -1L << (___memcpy_fromio & 0x3f);
            uVar6 = (~uVar13 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar6 = uVar13 | unaff_x30;
            }
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = &stack0xffffffffffffff70;
            *(iStack_70 + 0x100) = uVar6;
            *(iStack_70 + 0x108) = 5;
            *(iVar12 + 8) = (iVar9 + 1) * 0x10000 | 0x14;
            *(iVar12 + 0xc) = iVar9 + 0x15U | (iVar10 + 1) * 0x10000;
            *(iVar12 + 0x10) = iVar2 + 0x14U | (iVar11 + 1) * 0x10000;
            strcpy(iVar12 + 0x14,pcVar4);
            strcpy(iVar12 + (iVar9 + 0x15U & 0xffff),pcVar5);
            strcpy(iVar12 + *(iVar12 + 0x10),pcVar1);
            perf_trace_run_bpf_submit(iVar12,iVar7,uStack_74,param_1,1,iStack_70,piVar3,0);
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail();
    uVar8 = tpidr_el2;
    *extraout_x18 = 0x800334c;
    bpf_trace_run3(in_tmp_ldXn);
    return;
}


// ===== sym.__bpf_trace_rproc_qcom_event.08b81e75ad7853621899dcb9ced7238e.cfi_jt @ 0x08001558 (size 8) =====

void sym.__bpf_trace_rproc_qcom_event.08b81e75ad7853621899dcb9ced7238e.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3();
    return;
}


// ===== sym.trace_event_raw_event_rproc_qcom_event.08b81e75ad7853621899dcb9ced7238e.cfi_jt @ 0x08001560 (size 8) =====

void sym.trace_event_raw_event_rproc_qcom_event.08b81e75ad7853621899dcb9ced7238e.cfi_jt
               (int64_t param_1,char *param_2,char *param_3,char *param_4)

{
    char *pcVar1;
    char *pcVar2;
    char *pcVar3;
    int iVar4;
    ulong uVar5;
    ulong in_tmp_ldXn;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    char *pcVar13;
    char *pcVar14;
    uint64_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    code *pcStack_130;
    char *pcStack_128;
    int64_t *piStack_120;
    uint uStack_114;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uVar16 = *(param_1 + 0x48);
    pcVar14 = param_4;
    if ((uVar16 >> 8 & 1) == 0) {
        pcVar13 = param_3;
        if ((uVar16 >> 7 & 1) != 0) {
            pcVar13 = NULL;
            pcVar14 = NULL;
            event_triggers_call(param_1,0);
        }
        if (((uVar16 >> 6 & 1) != 0) ||
           (((uVar16 >> 9 & 1) != 0 && (uVar10 = trace_event_ignore_this_pid(param_1), (uVar10 & 1) != 0))))
        goto code_r0x08003128;
    }
    pcVar1 = "(null)";
    pcVar3 = pcVar1;
    if (param_2 != NULL) {
        pcVar3 = param_2;
    }
    iVar6 = strlen(pcVar3);
    pcVar2 = pcVar1;
    if (param_3 != NULL) {
        pcVar2 = param_3;
    }
    iVar7 = strlen(pcVar2);
    if (param_4 != NULL) {
        pcVar1 = param_4;
    }
    iVar9 = iVar7 + 1 + iVar6 + 1;
    iVar8 = strlen(pcVar1);
    pcVar13 = iVar8 + 1 + iVar9 + 0x14;
    iVar11 = trace_event_buffer_reserve(&uStack_98,param_1);
    if (iVar11 != 0) {
        *(iVar11 + 8) = (iVar6 + 1) * 0x10000 | 0x14;
        *(iVar11 + 0xc) = iVar6 + 0x15U | (iVar7 + 1) * 0x10000;
        *(iVar11 + 0x10) = iVar9 + 0x14U | (iVar8 + 1) * 0x10000;
        strcpy(iVar11 + 0x14,pcVar3);
        strcpy(iVar11 + (iVar6 + 0x15U & 0xffff),pcVar2);
        strcpy(iVar11 + *(iVar11 + 0x10),pcVar1);
        trace_event_buffer_commit(&uStack_98);
    }
code_r0x08003128:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar12 = auVar17._0_8_;
    *extraout_x18 = sym.perf_trace_rproc_qcom_event;
    pcStack_f8 = sym.perf_trace_rproc_qcom_event;
    pcStack_130 = sym.perf_trace_rproc_qcom_event;
    iVar11 = sp_el0;
    pcVar1 = "(null)";
    iStack_108 = *(iVar11 + 0x5e0);
    pcStack_128 = pcVar1;
    if (auVar17._8_8_ != NULL) {
        pcStack_128 = auVar17._8_8_;
    }
    iStack_110 = 0;
    uStack_114 = 0;
    puStack_100 = &stack0xffffffffffffffa0;
    iVar6 = strlen();
    pcVar3 = pcVar1;
    if (pcVar13 != NULL) {
        pcVar3 = pcVar13;
    }
    iVar7 = strlen(pcVar3);
    if (pcVar14 != NULL) {
        pcVar1 = pcVar14;
    }
    iVar9 = strlen(pcVar1);
    iVar11 = tpidr_el1;
    piStack_120 = iVar11 + *(iVar12 + 0x78);
    if ((*(iVar12 + 0x80) != 0) || (*piStack_120 != 0)) {
        iVar8 = iVar7 + 1 + iVar6 + 1;
        iVar4 = (iVar8 + iVar9 + 1 + 0x1fU & 0xfffffff8) - 4;
        iVar11 = perf_trace_buf_alloc(iVar4,&iStack_110,&uStack_114);
        if (iVar11 != 0) {
            uVar15 = -1L << (___memcpy_fromio & 0x3f);
            uVar10 = (~uVar15 | 0xff80000000000000) & pcStack_130;
            if ((pcStack_130 & 0x80000000000000) != 0) {
                uVar10 = uVar15 | pcStack_130;
            }
            *(iStack_110 + 0xe8) = &puStack_100;
            *(iStack_110 + 0xf8) = &pcStack_130;
            *(iStack_110 + 0x100) = uVar10;
            *(iStack_110 + 0x108) = 5;
            *(iVar11 + 8) = (iVar6 + 1) * 0x10000 | 0x14;
            *(iVar11 + 0xc) = iVar6 + 0x15U | (iVar7 + 1) * 0x10000;
            *(iVar11 + 0x10) = iVar8 + 0x14U | (iVar9 + 1) * 0x10000;
            strcpy(iVar11 + 0x14,pcStack_128);
            strcpy(iVar11 + (iVar6 + 0x15U & 0xffff),pcVar3);
            strcpy(iVar11 + *(iVar11 + 0x10),pcVar1);
            perf_trace_run_bpf_submit(iVar11,iVar4,uStack_114,iVar12,1,iStack_110,piStack_120,0);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_108) {
        return;
    }
    __stack_chk_fail();
    uVar5 = tpidr_el2;
    *extraout_x18_00 = 0x800334c;
    bpf_trace_run3(in_tmp_ldXn);
    return;
}


// ===== sym.trace_event_reg.cfi_jt @ 0x08001568 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_reg.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcom_remove_glink_subdev.cfi_jt @ 0x08001570 (size 8) =====

void sym.qcom_remove_glink_subdev.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 0x40) != 0) {
        rproc_remove_subdev();
        kfree_const(*(param_2 + 0x30));
    }
    return;
}


// ===== sym.qcom_remove_ssr_subdev.cfi_jt @ 0x08001578 (size 8) =====

void sym.qcom_remove_ssr_subdev.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    rproc_remove_subdev();
    *(param_2 + 0x70) = 0;
    return;
}


// ===== sym.smd_subdev_stop.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt @ 0x08001580 (size 8) =====

void sym.smd_subdev_stop.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt(int64_t param_1,uint32_t param_2,ulong param_3)

{
    char *pcVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x40) != 0) {
        piVar3 = *(*(param_1 + 0x30) + 0x60);
        iVar2 = piVar3[0xe];
        if (iVar2 == 0) {
            iVar2 = *piVar3;
        }
        pcVar1 = "crash stop";
        if ((param_2 & 1) == 0) {
            pcVar1 = "stop";
        }
        qcom_smd_unregister_edge(*(param_1 + 0x40),iVar2,param_3,pcVar1);
        *(param_1 + 0x40) = 0;
    }
    return;
}


// ===== sym.ssr_notify_stop.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt @ 0x08001588 (size 8) =====

void sym.ssr_notify_stop.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t arg2;
    char *arg4;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    arg4 = "crash stop";
    if ((param_2 & 1) == 0) {
        arg4 = "stop";
    }
    uStack_48 = **(param_1 + 0x70);
    uStack_40 = param_2 & 0xff;
    while( true ) {
        *(param_1 + 0x30) = 2;
        mod_timer(param_1 + 0x38,_arm64_use_ng_mappings + 5000);
        srcu_notifier_call_chain(*(param_1 + 0x70) + 8,*(param_1 + 0x30),&uStack_48);
        del_timer_sync(param_1 + 0x38);
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
        iVar2 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1) !=
            0) {
            iVar2 = sp_el0;
            piVar1 = iVar2 + 0x10;
            *(iVar2 + 0x10) = *piVar1 + 1;
            sym.__traceiter_rproc_qcom_event(0,arg2,0x80006fb,arg4);
            iVar3 = *piVar1;
            *(iVar2 + 0x10) = iVar3 + -1;
            if ((iVar3 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return;
}


// ===== sym.glink_subdev_stop.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt @ 0x08001590 (size 8) =====

void sym.glink_subdev_stop.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt(int64_t param_1,uint32_t param_2,ulong param_3)

{
    char *pcVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x48) != 0) {
        pcVar1 = "crash stop";
        if ((param_2 & 1) == 0) {
            pcVar1 = "stop";
        }
        iVar2 = srcu_notifier_chain_unregister(*(param_1 + 0x68),param_1 + 0x50,param_3,pcVar1);
        if (iVar2 != 0) {
            _dev_err(*(param_1 + 0x38),"Error in unregistering notifier\n");
        }
        *(param_1 + 0x68) = 0;
        qcom_glink_smem_unregister(*(param_1 + 0x48));
        *(param_1 + 0x48) = 0;
    }
    return;
}


// ===== sym.qcom_notify_ssr_clients.cfi_jt @ 0x08001598 (size 8) =====

ulong sym.qcom_notify_ssr_clients.cfi_jt(int64_t param_1,int param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar1 = 0xffffffea;
    if ((param_1 != 0) && (-1 < param_2)) {
        *in_x18 = unaff_x30;
        uVar1 = srcu_notifier_call_chain(param_1 + 8,param_2);
    }
    return uVar1;
}


// ===== sym.qcom_check_ssr_status.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt @ 0x080015a0 (size 8) =====

void sym.qcom_check_ssr_status.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt(ulong param_1,int64_t param_2)

{
    char *pcVar1;
    int64_t extraout_x1;
    uint *in_x6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(param_2 + 0x3c8) != 0) && (*(param_2 + 0x3cc) != 2)) && (obj.qcom_device_shutdown_in_progress == 0x0)) {
        *in_x6 = 0x801a000;
        panic("Panicking, remoteproc %s failed to recover!\n",*(param_2 + 0x18));
        *extraout_x18 = 0x8002d68;
        pcVar1 = "enabled";
        if (*(extraout_x1 + 0x4c4) != '\0') {
            pcVar1 = "disabled";
        }
        _printk(0x8000926,*(extraout_x1 + 0x18),pcVar1);
        return;
    }
    return;
}


// ===== sym.rproc_recovery_notifier.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt @ 0x080015a8 (size 8) =====

void sym.rproc_recovery_notifier.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt(ulong param_1,int64_t param_2)

{
    char *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = "enabled";
    if (*(param_2 + 0x4c4) != '\0') {
        pcVar1 = "disabled";
    }
    _printk(0x8000926,*(param_2 + 0x18),pcVar1);
    return;
}


// ===== sym.qcom_ssr_get_subsys.cfi_jt @ 0x080015b0 (size 8) =====

code * sym.qcom_ssr_get_subsys.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    int iVar2;
    code *pcVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        pcVar3 = 0xffffffffffffffea;
    }
    else {
        mutex_lock(obj.qcom_ssr_subsys_lock);
        for (pcVar6 = _obj.qcom_ssr_subsystem_list; pcVar6 != obj.qcom_ssr_subsystem_list; pcVar6 = *pcVar6) {
            pcVar3 = pcVar6 + -0x5e8;
            iVar2 = strcmp(*pcVar3,param_1);
            if (iVar2 == 0) goto code_r0x080024a4;
        }
        pcVar3 = kmem_cache_alloc_trace(_trace_event_raw_init,0xdc0,0x5f8);
        if (pcVar3 == NULL) {
            pcVar3 = 0xfffffffffffffff4;
        }
        else {
            uVar4 = kstrdup_const(param_1,0xcc0);
            *pcVar3 = uVar4;
            srcu_init_notifier_head(pcVar3 + 8);
            srcu_init_notifier_head(pcVar3 + 0x2f8);
            pcVar1 = *0x80004e8;
            pcVar6 = pcVar3 + 0x5e8;
            uVar5 = __list_add_valid(pcVar6,*0x80004e8,obj.qcom_ssr_subsystem_list);
            if ((uVar5 & 1) != 0) {
                *0x80004e8 = pcVar6;
                *(pcVar3 + 0x5e8) = obj.qcom_ssr_subsystem_list;
                *(pcVar3 + 0x5f0) = pcVar1;
                *pcVar1 = pcVar6;
            }
        }
code_r0x080024a4:
        mutex_unlock(obj.qcom_ssr_subsys_lock);
    }
    return pcVar3;
}


// ===== sym.qcom_minidump.cfi_jt @ 0x080015b8 (size 8) =====

void sym.qcom_minidump.cfi_jt(int64_t param_1,ulong param_2,uint32_t param_3,ulong param_4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ushort uVar3;
    uint32_t uVar4;
    int iVar5;
    int *piVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *puVar9;
    uint uVar10;
    ulong uVar11;
    uint32_t *puVar12;
    int64_t iVar13;
    ulong *in_x18;
    int64_t iVar14;
    uint16_t uVar15;
    int64_t *piVar16;
    ulong *puVar17;
    int64_t *piVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    code *pcVar22;
    int64_t iVar23;
    int64_t iVar24;
    ulong unaff_x30;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    piVar6 = qcom_smem_get(0xffffffff,0x25a,0);
    if ((piVar6 < 0xfffffffffffff001) && (*piVar6 != 0)) {
        if (10 < param_3) goto code_r0x08001b64;
        uVar19 = param_3;
        if (((*(piVar6 + uVar19 * 8 + 10) == 0) || (piVar6[uVar19 * 8 + 4] != 1)) ||
           (piVar6[uVar19 * 8 + 5] != 0x454e424c)) {
            rproc_coredump(param_1);
        }
        else {
            if (piVar6[uVar19 * 8 + 6] != 0x444f4e45) {
                _dev_err(param_1 + 0x38,"encryption_status != MD_SS_ENCR_DONE\n");
            }
            rproc_coredump_cleanup(param_1);
            piVar1 = param_1 + 0x4f8;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_90 = 0;
            if (piVar1 != *piVar1) {
    //WARNING: Does not return
                pcVar22 = SoftwareBreakpoint(0x800,0x8001b54);
                (*pcVar22)();
            }
            uVar4 = piVar6[uVar19 * 8 + 8];
            uVar11 = 0x68000000000713;
            if (arm64_use_ng_mappings != 0x0) {
                uVar11 = 0x68000000000f13;
            }
            iVar7 = __ioremap(*(piVar6 + uVar19 * 8 + 10),uVar4 * 0x28,uVar11);
            if (iVar7 == 0) {
                uVar11 = 0xfffffff2;
code_r0x080019b4:
                _dev_err(param_1 + 0x38,"Failed with error: %d while adding minidump entries\n",uVar11);
            }
            else {
                if (0 < uVar4) {
                    uVar20 = 0;
                    iVar14 = iVar7;
                    do {
                        __memcpy_fromio(&uStack_90,iVar14,0x28);
                        if (uStack_80._4_4_ == 0x56414c49) {
                            iVar8 = kstrdup(&uStack_90,0xcc0);
                            uVar11 = uStack_78;
                            if (iVar8 == 0) {
                                iounmap(iVar7);
                                uVar11 = 0xfffffff4;
                                goto code_r0x080019b4;
                            }
                            uVar21 = uStack_70 & 0xffffffff;
                            if (piVar6[uVar19 * 8 + 6] != 0x444f4e45) {
                                if ((uVar20 == 0) && (iVar5 = strcmp(iVar8,"md_dbg_buf"), iVar5 == 0)) {
                                    rproc_coredump_add_custom_segment(param_1,uVar11,uVar21,param_4,iVar8);
                                }
                                break;
                            }
                            rproc_coredump_add_custom_segment(param_1,uStack_78,uVar21,param_4,iVar8);
                        }
                        uVar20 = uVar20 + 1;
                        iVar14 = iVar14 + 0x28;
                    } while (uVar4 != uVar20);
                }
                iounmap(iVar7);
                if (*(param_1 + 0x50c) == '\x02') {
                    if ((piVar1 != *(param_1 + 0x4f8)) && (*(param_1 + 0x3d0) != 0)) {
                        piVar16 = *piVar1;
                        uVar15 = 2;
                        if (piVar16 == piVar1) {
                            iVar14 = 0xc0;
                            iVar7 = 9;
                        }
                        else {
                            iVar7 = 9;
                            iVar14 = 0xc0;
                            do {
                                iVar8 = strlen(piVar16[4]);
                                piVar18 = piVar16 + 3;
                                piVar16 = *piVar16;
                                iVar7 = iVar7 + iVar8 + 1;
                                uVar15 = uVar15 + 1;
                                iVar14 = iVar14 + *piVar18 + 0x40;
                            } while (piVar16 != piVar1);
                        }
                        puVar9 = vmalloc(iVar14 + iVar7);
                        if (puVar9 != NULL) {
                            puVar9[6] = 0;
                            puVar9[7] = 0;
                            puVar9[4] = 0;
                            puVar9[5] = 0;
                            puVar9[2] = 0;
                            puVar9[3] = 0;
                            *(puVar9 + 2) = 4;
                            iVar24 = 1;
                            *puVar9 = 0x10102464c457f;
                            puVar9[1] = 0;
                            uVar3 = *(param_1 + 0x50e);
                            *(puVar9 + 0x14) = 1;
                            *(puVar9 + 0x12) = uVar3;
                            uVar11 = *(param_1 + 0x448);
                            puVar9[5] = 0x40;
                            *(puVar9 + 0x34) = 0x40;
                            *(puVar9 + 0x3a) = 0x40;
                            puVar9[3] = uVar11;
                            *(puVar9 + 0x3c) = uVar15;
                            iVar8 = uVar15 * 0x40 + 0x40;
                            *(puVar9 + 0x3e) = 1;
                            puVar9[9] = 0;
                            puVar9[10] = 0;
                            puVar9[0xb] = 0;
                            puVar9[0xc] = 0;
                            puVar9[0xd] = 0;
                            puVar9[0xe] = 0;
                            puVar9[0xf] = 0;
                            puVar9[8] = 0;
                            memset(puVar9 + uVar15 * 8 + 8,0,iVar7);
                            uVar15 = *(puVar9 + 0x3e);
                            puVar9[0x15] = 0;
                            puVar9[0x16] = 0;
                            puVar9[0x13] = iVar8;
                            puVar9[0x14] = 0;
                            puVar9[0x11] = 0;
                            puVar9[0x12] = 0;
                            puVar12 = puVar9 + 0x10;
                            puVar12[0] = 0;
                            puVar12[1] = 0;
                            *(puVar9 + 0x84) = 3;
                            iVar13 = (puVar9 + 8)[uVar15 * 8 + 3];
                            puVar9[0x14] = iVar7;
                            puVar9[0x17] = 0;
                            iVar13 = puVar9 + iVar13;
                            if (iVar13 != 0) {
                                iVar24 = 9;
                                *(iVar13 + 1) = 0x4c42545f525453;
                            }
                            *puVar12 = iVar13 != 0;
                            piVar16 = *piVar1;
                            if (piVar16 != piVar1) {
                                iVar8 = puVar9[0x14] + iVar8;
                                puVar17 = puVar9 + 0x18;
                                do {
                                    puVar17[6] = 0;
                                    puVar17[7] = 0;
                                    puVar17[4] = 0;
                                    puVar17[5] = 0;
                                    *puVar17 = 0;
                                    puVar17[1] = 0;
                                    *(puVar17 + 4) = 1;
                                    puVar17[2] = 0;
                                    puVar17[3] = iVar8;
                                    puVar17[2] = piVar16[2];
                                    iVar13 = piVar16[3];
                                    puVar17[7] = 0;
                                    puVar17[1] = 1;
                                    puVar17[4] = iVar13;
                                    uVar10 = 0;
                                    iVar23 = piVar16[4];
                                    iVar13 = iVar24;
                                    if ((iVar23 != 0) && (puVar9 + puVar9[*(puVar9 + 0x3e) * 8 + 0xb] != 0)) {
                                        strcpy(puVar9 + puVar9[*(puVar9 + 0x3e) * 8 + 0xb] + iVar24,iVar23);
                                        iVar13 = strlen(iVar23);
                                        iVar13 = iVar24 + iVar13 + 1;
                                        uVar10 = iVar24;
                                    }
                                    *puVar17 = uVar10;
                                    pcVar22 = piVar16[5];
                                    __cfi_slowpath_diag(0x10a05f3892d68efc,pcVar22,0x8000690);
                                    (*pcVar22)(param_1,piVar16,puVar9 + iVar8,0,piVar16[3]);
                                    piVar18 = puVar17 + 4;
                                    puVar17 = puVar17 + 8;
                                    piVar16 = *piVar16;
                                    iVar8 = *piVar18 + iVar8;
                                    iVar24 = iVar13;
                                } while (piVar16 != piVar1);
                            }
                            dev_coredumpv(param_2,puVar9,iVar14 + iVar7,0xcc0);
                        }
                    }
                }
                else {
                    rproc_coredump(param_1);
                }
            }
            piVar16 = *piVar1;
            while (piVar16 != piVar1) {
                piVar18 = *piVar16;
                uVar19 = __list_del_entry_valid(piVar16);
                if ((uVar19 & 1) != 0) {
                    iVar7 = *piVar16;
                    piVar2 = piVar16[1];
                    *(iVar7 + 8) = piVar2;
                    *piVar2 = iVar7;
                }
                *piVar16 = -0x2152ffffffffff00;
                piVar16[1] = -0x2152fffffffffede;
                kfree(piVar16[4]);
                kfree(piVar16);
                piVar16 = piVar18;
            }
        }
    }
    else {
        _dev_err(param_1 + 0x38,"Minidump TOC not found in SMEM\n");
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail();
code_r0x08001b64:
    //WARNING: Does not return
    pcVar22 = SoftwareBreakpoint(0x5512,0x8001b68);
    (*pcVar22)();
}


// ===== sym.qcom_register_ssr_notifier.cfi_jt @ 0x080015c0 (size 8) =====

uint64_t sym.qcom_register_ssr_notifier.cfi_jt(int64_t param_1,ulong param_2)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.qcom_ssr_get_subsys(param_1);
    if (uVar1 < 0xfffffffffffff001) {
        uVar1 = uVar1 + 8;
        srcu_notifier_chain_register(uVar1,param_2);
    }
    return uVar1;
}


// ===== sym.qcom_register_early_ssr_notifier.cfi_jt @ 0x080015c8 (size 8) =====

uint64_t sym.qcom_register_early_ssr_notifier.cfi_jt(int64_t param_1,ulong param_2)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.qcom_ssr_get_subsys(param_1);
    if (uVar1 < 0xfffffffffffff001) {
        uVar1 = uVar1 + 0x2f8;
        srcu_notifier_chain_register(uVar1,param_2);
    }
    return uVar1;
}


// ===== sym.qcom_minidump @ 0x080015d0 (size 1432) =====

void sym.qcom_minidump(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ushort uVar3;
    uint32_t uVar4;
    int iVar5;
    int *piVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *puVar9;
    uint uVar10;
    ulong uVar11;
    uint32_t *puVar12;
    int64_t iVar13;
    ulong *in_x18;
    int64_t iVar14;
    uint16_t uVar15;
    int64_t *piVar16;
    ulong *puVar17;
    int64_t *piVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    code *pcVar22;
    int64_t iVar23;
    int64_t iVar24;
    ulong unaff_x30;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    piVar6 = qcom_smem_get(0xffffffff,0x25a,0);
    if ((piVar6 < 0xfffffffffffff001) && (*piVar6 != 0)) {
        if (10 < arg3) goto code_r0x08001b64;
        uVar19 = arg3 & 0xffffffff;
        if (((*(piVar6 + uVar19 * 8 + 10) == 0) || (piVar6[uVar19 * 8 + 4] != 1)) ||
           (piVar6[uVar19 * 8 + 5] != 0x454e424c)) {
            rproc_coredump(arg1);
        }
        else {
            if (piVar6[uVar19 * 8 + 6] != 0x444f4e45) {
                _dev_err(arg1 + 0x38,"encryption_status != MD_SS_ENCR_DONE\n");
            }
            rproc_coredump_cleanup(arg1);
            piVar1 = arg1 + 0x4f8;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_90 = 0;
            if (piVar1 != *piVar1) {
    //WARNING: Does not return
                pcVar22 = SoftwareBreakpoint(0x800,0x8001b54);
                (*pcVar22)();
            }
            uVar4 = piVar6[uVar19 * 8 + 8];
            uVar11 = 0x68000000000713;
            if (arm64_use_ng_mappings != 0x0) {
                uVar11 = 0x68000000000f13;
            }
            iVar7 = __ioremap(*(piVar6 + uVar19 * 8 + 10),uVar4 * 0x28,uVar11);
            if (iVar7 == 0) {
                uVar11 = 0xfffffff2;
code_r0x080019b4:
                _dev_err(arg1 + 0x38,"Failed with error: %d while adding minidump entries\n",uVar11);
            }
            else {
                if (0 < uVar4) {
                    uVar20 = 0;
                    iVar14 = iVar7;
                    do {
                        __memcpy_fromio(&uStack_90,iVar14,0x28);
                        if (uStack_80._4_4_ == 0x56414c49) {
                            iVar8 = kstrdup(&uStack_90,0xcc0);
                            uVar11 = uStack_78;
                            if (iVar8 == 0) {
                                iounmap(iVar7);
                                uVar11 = 0xfffffff4;
                                goto code_r0x080019b4;
                            }
                            uVar21 = uStack_70 & 0xffffffff;
                            if (piVar6[uVar19 * 8 + 6] != 0x444f4e45) {
                                if ((uVar20 == 0) && (iVar5 = strcmp(iVar8,"md_dbg_buf"), iVar5 == 0)) {
                                    rproc_coredump_add_custom_segment(arg1,uVar11,uVar21,arg4,iVar8);
                                }
                                break;
                            }
                            rproc_coredump_add_custom_segment(arg1,uStack_78,uVar21,arg4,iVar8);
                        }
                        uVar20 = uVar20 + 1;
                        iVar14 = iVar14 + 0x28;
                    } while (uVar4 != uVar20);
                }
                iounmap(iVar7);
                if (*(arg1 + 0x50c) == '\x02') {
                    if ((piVar1 != *(arg1 + 0x4f8)) && (*(arg1 + 0x3d0) != 0)) {
                        piVar16 = *piVar1;
                        uVar15 = 2;
                        if (piVar16 == piVar1) {
                            iVar14 = 0xc0;
                            iVar7 = 9;
                        }
                        else {
                            iVar7 = 9;
                            iVar14 = 0xc0;
                            do {
                                iVar8 = strlen(piVar16[4]);
                                piVar18 = piVar16 + 3;
                                piVar16 = *piVar16;
                                iVar7 = iVar7 + iVar8 + 1;
                                uVar15 = uVar15 + 1;
                                iVar14 = iVar14 + *piVar18 + 0x40;
                            } while (piVar16 != piVar1);
                        }
                        puVar9 = vmalloc(iVar14 + iVar7);
                        if (puVar9 != NULL) {
                            puVar9[6] = 0;
                            puVar9[7] = 0;
                            puVar9[4] = 0;
                            puVar9[5] = 0;
                            puVar9[2] = 0;
                            puVar9[3] = 0;
                            *(puVar9 + 2) = 4;
                            iVar24 = 1;
                            *puVar9 = 0x10102464c457f;
                            puVar9[1] = 0;
                            uVar3 = *(arg1 + 0x50e);
                            *(puVar9 + 0x14) = 1;
                            *(puVar9 + 0x12) = uVar3;
                            uVar11 = *(arg1 + 0x448);
                            puVar9[5] = 0x40;
                            *(puVar9 + 0x34) = 0x40;
                            *(puVar9 + 0x3a) = 0x40;
                            puVar9[3] = uVar11;
                            *(puVar9 + 0x3c) = uVar15;
                            iVar8 = uVar15 * 0x40 + 0x40;
                            *(puVar9 + 0x3e) = 1;
                            puVar9[9] = 0;
                            puVar9[10] = 0;
                            puVar9[0xb] = 0;
                            puVar9[0xc] = 0;
                            puVar9[0xd] = 0;
                            puVar9[0xe] = 0;
                            puVar9[0xf] = 0;
                            puVar9[8] = 0;
                            memset(puVar9 + uVar15 * 8 + 8,0,iVar7);
                            uVar15 = *(puVar9 + 0x3e);
                            puVar9[0x15] = 0;
                            puVar9[0x16] = 0;
                            puVar9[0x13] = iVar8;
                            puVar9[0x14] = 0;
                            puVar9[0x11] = 0;
                            puVar9[0x12] = 0;
                            puVar12 = puVar9 + 0x10;
                            puVar12[0] = 0;
                            puVar12[1] = 0;
                            *(puVar9 + 0x84) = 3;
                            iVar13 = (puVar9 + 8)[uVar15 * 8 + 3];
                            puVar9[0x14] = iVar7;
                            puVar9[0x17] = 0;
                            iVar13 = puVar9 + iVar13;
                            if (iVar13 != 0) {
                                iVar24 = 9;
                                *(iVar13 + 1) = 0x4c42545f525453;
                            }
                            *puVar12 = iVar13 != 0;
                            piVar16 = *piVar1;
                            if (piVar16 != piVar1) {
                                iVar8 = puVar9[0x14] + iVar8;
                                puVar17 = puVar9 + 0x18;
                                do {
                                    puVar17[6] = 0;
                                    puVar17[7] = 0;
                                    puVar17[4] = 0;
                                    puVar17[5] = 0;
                                    *puVar17 = 0;
                                    puVar17[1] = 0;
                                    *(puVar17 + 4) = 1;
                                    puVar17[2] = 0;
                                    puVar17[3] = iVar8;
                                    puVar17[2] = piVar16[2];
                                    iVar13 = piVar16[3];
                                    puVar17[7] = 0;
                                    puVar17[1] = 1;
                                    puVar17[4] = iVar13;
                                    uVar10 = 0;
                                    iVar23 = piVar16[4];
                                    iVar13 = iVar24;
                                    if ((iVar23 != 0) && (puVar9 + puVar9[*(puVar9 + 0x3e) * 8 + 0xb] != 0)) {
                                        strcpy(puVar9 + puVar9[*(puVar9 + 0x3e) * 8 + 0xb] + iVar24,iVar23);
                                        iVar13 = strlen(iVar23);
                                        iVar13 = iVar24 + iVar13 + 1;
                                        uVar10 = iVar24;
                                    }
                                    *puVar17 = uVar10;
                                    pcVar22 = piVar16[5];
                                    __cfi_slowpath_diag(0x10a05f3892d68efc,pcVar22,0x8000690);
                                    (*pcVar22)(arg1,piVar16,puVar9 + iVar8,0,piVar16[3]);
                                    piVar18 = puVar17 + 4;
                                    puVar17 = puVar17 + 8;
                                    piVar16 = *piVar16;
                                    iVar8 = *piVar18 + iVar8;
                                    iVar24 = iVar13;
                                } while (piVar16 != piVar1);
                            }
                            dev_coredumpv(arg2,puVar9,iVar14 + iVar7,0xcc0);
                        }
                    }
                }
                else {
                    rproc_coredump(arg1);
                }
            }
            piVar16 = *piVar1;
            while (piVar16 != piVar1) {
                piVar18 = *piVar16;
                uVar19 = __list_del_entry_valid(piVar16);
                if ((uVar19 & 1) != 0) {
                    iVar7 = *piVar16;
                    piVar2 = piVar16[1];
                    *(iVar7 + 8) = piVar2;
                    *piVar2 = iVar7;
                }
                *piVar16 = -0x2152ffffffffff00;
                piVar16[1] = -0x2152fffffffffede;
                kfree(piVar16[4]);
                kfree(piVar16);
                piVar16 = piVar18;
            }
        }
    }
    else {
        _dev_err(arg1 + 0x38,"Minidump TOC not found in SMEM\n");
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail();
code_r0x08001b64:
    //WARNING: Does not return
    pcVar22 = SoftwareBreakpoint(0x5512,0x8001b68);
    (*pcVar22)();
}


// ===== sym.qcom_add_glink_subdev @ 0x08001b70 (size 168) =====

void sym.qcom_add_glink_subdev(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_get_child_by_name(*(*(arg1 + 0x98) + 0x2f0),"glink-edge");
    *(arg2 + 0x40) = iVar1;
    if (iVar1 != 0) {
        iVar1 = kstrdup_const(arg3,0xcc0);
        *(arg2 + 0x30) = iVar1;
        if (iVar1 != 0) {
            *(arg2 + 0x38) = arg1 + 0x38;
            *(arg2 + 0x10) = sym.glink_subdev_prepare.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
            *(arg2 + 0x18) = sym.glink_subdev_start.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
            *(arg2 + 0x20) = sym.glink_subdev_stop.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
            *(arg2 + 0x28) = sym.glink_subdev_unprepare.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
            rproc_add_subdev(arg1,arg2);
        }
    }
    return;
}


// ===== sym.glink_subdev_start @ 0x08001c18 (size 172) =====

void sym.glink_subdev_start(int64_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x50) = sym.glink_early_ssr_notifier_event.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
    uVar1 = sym.qcom_ssr_get_subsys(*(arg1 + 0x30));
    if (uVar1 < 0xfffffffffffff001) {
        uVar1 = uVar1 + 0x2f8;
        srcu_notifier_chain_register(uVar1,arg1 + 0x50);
    }
    *(arg1 + 0x68) = uVar1;
    if (0xfffffffffffff000 < uVar1) {
        _dev_err(*(arg1 + 0x38),"Failed to register for SSR notifier\n");
        *(arg1 + 0x68) = 0;
    }
    qcom_glink_smem_start(*(arg1 + 0x48));
    return;
}


// ===== sym.glink_subdev_prepare @ 0x08001d50 (size 100) =====

uint sym.glink_subdev_prepare(int64_t arg1)

{
    uint64_t uVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = qcom_glink_smem_register(*(arg1 + 0x38),*(arg1 + 0x40));
    uVar2 = uVar1;
    if (uVar1 < 0xfffffffffffff001) {
        uVar2 = 0;
    }
    *(arg1 + 0x48) = uVar1;
    return uVar2;
}


// ===== sym.glink_subdev_stop @ 0x08001e40 (size 164) =====

void sym.glink_subdev_stop(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    int iVar2;
    ulong in_x2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x48) != 0) {
        pcVar1 = "crash stop";
        if ((arg2 & 1U) == 0) {
            pcVar1 = "stop";
        }
        iVar2 = srcu_notifier_chain_unregister(*(arg1 + 0x68),arg1 + 0x50,in_x2,pcVar1);
        if (iVar2 != 0) {
            _dev_err(*(arg1 + 0x38),"Error in unregistering notifier\n");
        }
        *(arg1 + 0x68) = 0;
        qcom_glink_smem_unregister(*(arg1 + 0x48));
        *(arg1 + 0x48) = 0;
    }
    return;
}


// ===== sym.glink_subdev_unprepare @ 0x08001f68 (size 80) =====

void sym.glink_subdev_unprepare(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(*(arg1 + 0x38) + 0x60);
    iVar1 = piVar2[0xe];
    if (iVar1 == 0) {
        iVar1 = *piVar2;
    }
    qcom_glink_ssr_notify(*(arg1 + 0x30),iVar1);
    return;
}


// ===== sym.qcom_remove_glink_subdev @ 0x08002050 (size 64) =====

void sym.qcom_remove_glink_subdev(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x40) != 0) {
        rproc_remove_subdev();
        kfree_const(*(arg1 + 0x30));
    }
    return;
}


// ===== sym.qcom_register_dump_segments @ 0x08002090 (size 168) =====

ulong sym.qcom_register_dump_segments(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg2 + 8);
    uVar2 = *(iVar3 + 0x2c);
    if (*(iVar3 + 0x2c) != 0) {
        uVar4 = 0;
        puVar5 = iVar3 + 0x4c;
        do {
            if (((puVar5[-6] == 1) && ((*puVar5 & 0x7000000) != 0x2000000)) && (puVar5[-1] != 0)) {
                uVar1 = rproc_coredump_add_segment(arg1,puVar5[-3]);
                if (uVar1 != 0) {
                    return uVar1;
                }
                uVar2 = *(iVar3 + 0x2c);
            }
            uVar4 = uVar4 + 1;
            puVar5 = puVar5 + 8;
        } while (uVar4 < uVar2);
    }
    return 0;
}


// ===== sym.qcom_add_smd_subdev @ 0x08002138 (size 116) =====

void sym.qcom_add_smd_subdev(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_get_child_by_name(*(*(arg1 + 0x98) + 0x2f0),"smd-edge");
    *(arg2 + 0x38) = iVar1;
    if (iVar1 != 0) {
        *(arg2 + 0x30) = arg1 + 0x38;
        *(arg2 + 0x18) = sym.smd_subdev_start.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
        *(arg2 + 0x20) = sym.smd_subdev_stop.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
        rproc_add_subdev(arg1,arg2);
    }
    return;
}


// ===== sym.smd_subdev_start @ 0x080021ac (size 100) =====

uint sym.smd_subdev_start(int64_t arg1)

{
    uint64_t uVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = qcom_smd_register_edge(*(arg1 + 0x30),*(arg1 + 0x38));
    uVar2 = uVar1;
    if (uVar1 < 0xfffffffffffff001) {
        uVar2 = 0;
    }
    *(arg1 + 0x40) = uVar1;
    return uVar2;
}


// ===== sym.smd_subdev_stop @ 0x0800229c (size 124) =====

void sym.smd_subdev_stop(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    int64_t iVar2;
    ulong in_x2;
    int64_t *piVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x40) != 0) {
        piVar3 = *(*(arg1 + 0x30) + 0x60);
        iVar2 = piVar3[0xe];
        if (iVar2 == 0) {
            iVar2 = *piVar3;
        }
        pcVar1 = "crash stop";
        if ((arg2 & 1U) == 0) {
            pcVar1 = "stop";
        }
        qcom_smd_unregister_edge(*(arg1 + 0x40),iVar2,in_x2,pcVar1);
        *(arg1 + 0x40) = 0;
    }
    return;
}


// ===== sym.qcom_remove_smd_subdev @ 0x0800239c (size 44) =====

void sym.qcom_remove_smd_subdev(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x38) != 0) {
        rproc_remove_subdev();
    }
    return;
}


// ===== sym.qcom_ssr_get_subsys @ 0x080023c8 (size 260) =====

code * sym.qcom_ssr_get_subsys(int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    code *pcVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        pcVar3 = 0xffffffffffffffea;
    }
    else {
        mutex_lock(obj.qcom_ssr_subsys_lock);
        for (pcVar6 = _obj.qcom_ssr_subsystem_list; pcVar6 != obj.qcom_ssr_subsystem_list; pcVar6 = *pcVar6) {
            pcVar3 = pcVar6 + -0x5e8;
            iVar2 = strcmp(*pcVar3,arg1);
            if (iVar2 == 0) goto code_r0x080024a4;
        }
        pcVar3 = kmem_cache_alloc_trace(_trace_event_raw_init,0xdc0,0x5f8);
        if (pcVar3 == NULL) {
            pcVar3 = 0xfffffffffffffff4;
        }
        else {
            uVar4 = kstrdup_const(arg1,0xcc0);
            *pcVar3 = uVar4;
            srcu_init_notifier_head(pcVar3 + 8);
            srcu_init_notifier_head(pcVar3 + 0x2f8);
            pcVar1 = *0x80004e8;
            pcVar6 = pcVar3 + 0x5e8;
            uVar5 = __list_add_valid(pcVar6,*0x80004e8,obj.qcom_ssr_subsystem_list);
            if ((uVar5 & 1) != 0) {
                *0x80004e8 = pcVar6;
                *(pcVar3 + 0x5e8) = obj.qcom_ssr_subsystem_list;
                *(pcVar3 + 0x5f0) = pcVar1;
                *pcVar1 = pcVar6;
            }
        }
code_r0x080024a4:
        mutex_unlock(obj.qcom_ssr_subsys_lock);
    }
    return pcVar3;
}


// ===== sym.qcom_register_early_ssr_notifier @ 0x080024cc (size 80) =====

uint64_t sym.qcom_register_early_ssr_notifier(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.qcom_ssr_get_subsys(arg1);
    if (uVar1 < 0xfffffffffffff001) {
        uVar1 = uVar1 + 0x2f8;
        srcu_notifier_chain_register(uVar1,arg2);
    }
    return uVar1;
}


// ===== sym.qcom_unregister_early_ssr_notifier @ 0x0800251c (size 36) =====

void sym.qcom_unregister_early_ssr_notifier(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    srcu_notifier_chain_unregister();
    return;
}


// ===== sym.qcom_notify_early_ssr_clients @ 0x08002540 (size 52) =====

void sym.qcom_notify_early_ssr_clients(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    srcu_notifier_call_chain(*(arg1 + 0x70) + 0x2f8,2,0);
    return;
}


// ===== sym.qcom_register_ssr_notifier @ 0x08002574 (size 80) =====

uint64_t sym.qcom_register_ssr_notifier(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.qcom_ssr_get_subsys(arg1);
    if (uVar1 < 0xfffffffffffff001) {
        uVar1 = uVar1 + 8;
        srcu_notifier_chain_register(uVar1,arg2);
    }
    return uVar1;
}


// ===== sym.qcom_unregister_ssr_notifier @ 0x080025c4 (size 36) =====

void sym.qcom_unregister_ssr_notifier(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    srcu_notifier_chain_unregister();
    return;
}


// ===== sym.qcom_notify_ssr_clients @ 0x080025e8 (size 64) =====

ulong sym.qcom_notify_ssr_clients(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar1 = 0xffffffea;
    if ((arg1 != 0) && (-1 < arg2)) {
        *in_x18 = unaff_x30;
        uVar1 = srcu_notifier_call_chain(arg1 + 8,arg2 & 0xffffffff);
    }
    return uVar1;
}


// ===== sym.qcom_add_ssr_subdev @ 0x08002628 (size 180) =====

void sym.qcom_add_ssr_subdev(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.qcom_ssr_get_subsys(arg3);
    if (uVar1 < 0xfffffffffffff001) {
        init_timer_key(arg2 + 0x38,sym.ssr_notif_timeout_handler.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt,0,0,0);
        *(arg2 + 0x70) = uVar1;
        *(arg2 + 0x10) = sym.ssr_notify_prepare.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
        *(arg2 + 0x18) = sym.ssr_notify_start.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
        *(arg2 + 0x20) = sym.ssr_notify_stop.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
        *(arg2 + 0x28) = sym.ssr_notify_unprepare.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt;
        rproc_add_subdev(arg1,arg2);
    }
    else {
        _dev_err(arg1 + 0x38,"Failed to add ssr subdevice\n");
    }
    return;
}


// ===== sym.ssr_notif_timeout_handler @ 0x080026dc (size 156) =====

void sym.ssr_notif_timeout_handler(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    uint *in_x6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *in_x6 = 0x801a000;
    uVar1 = *(arg1 + -8);
    if (obj.qcom_device_shutdown_in_progress == 0x0) {
        if (uVar1 < 4) {
            panic("srcu notifier chain for %s:%s taking too long",**(arg1 + 0x38),
                  *(obj.subdevice_state_string + uVar1 * 8));
        }
    }
    else if (uVar1 < 4) {
        __warn_printk("srcu notifier chain for %s:%s taking too long",**(arg1 + 0x38),
                      *(obj.subdevice_state_string + uVar1 * 8));
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x800,0x800273c);
        (*pcVar2)();
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8002778);
    (*pcVar2)();
}


// ===== sym.ssr_notify_prepare @ 0x08002778 (size 308) =====

ulong sym.ssr_notify_prepare(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t arg2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_40 = 0;
    uStack_48 = **(arg1 + 0x70);
    while( true ) {
        *(arg1 + 0x30) = 0;
        mod_timer(arg1 + 0x38,_arm64_use_ng_mappings + 5000);
        srcu_notifier_call_chain(*(arg1 + 0x70) + 8,*(arg1 + 0x30),&uStack_48);
        del_timer_sync(arg1 + 0x38);
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
        iVar2 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1) !=
            0) {
            iVar2 = sp_el0;
            piVar1 = iVar2 + 0x10;
            *(iVar2 + 0x10) = *piVar1 + 1;
            sym.__traceiter_rproc_qcom_event(0,arg2,0x80006fb,0x8000a2f);
            iVar3 = *piVar1;
            *(iVar2 + 0x10) = iVar3 + -1;
            if ((iVar3 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return 0;
}


// ===== sym.ssr_notify_start @ 0x080028bc (size 312) =====

ulong sym.ssr_notify_start(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t arg2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_40 = 0;
    uStack_48 = **(arg1 + 0x70);
    while( true ) {
        *(arg1 + 0x30) = 1;
        mod_timer(arg1 + 0x38,_arm64_use_ng_mappings + 5000);
        srcu_notifier_call_chain(*(arg1 + 0x70) + 8,*(arg1 + 0x30),&uStack_48);
        del_timer_sync(arg1 + 0x38);
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
        iVar2 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1) !=
            0) {
            iVar2 = sp_el0;
            piVar1 = iVar2 + 0x10;
            *(iVar2 + 0x10) = *piVar1 + 1;
            sym.__traceiter_rproc_qcom_event(0,arg2,0x80006fb,0x8000ab7);
            iVar3 = *piVar1;
            *(iVar2 + 0x10) = iVar3 + -1;
            if ((iVar3 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return 0;
}


// ===== sym.ssr_notify_stop @ 0x08002a04 (size 328) =====

void sym.ssr_notify_stop(int64_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t arg2_00;
    char *arg4;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    arg4 = "crash stop";
    if ((arg2 & 1) == 0) {
        arg4 = "stop";
    }
    uStack_48 = **(arg1 + 0x70);
    uStack_40 = arg2;
    while( true ) {
        *(arg1 + 0x30) = 2;
        mod_timer(arg1 + 0x38,_arm64_use_ng_mappings + 5000);
        srcu_notifier_call_chain(*(arg1 + 0x70) + 8,*(arg1 + 0x30),&uStack_48);
        del_timer_sync(arg1 + 0x38);
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
        iVar2 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1) !=
            0) {
            iVar2 = sp_el0;
            piVar1 = iVar2 + 0x10;
            *(iVar2 + 0x10) = *piVar1 + 1;
            sym.__traceiter_rproc_qcom_event(0,arg2_00,0x80006fb,arg4);
            iVar3 = *piVar1;
            *(iVar2 + 0x10) = iVar3 + -1;
            if ((iVar3 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return;
}


// ===== sym.ssr_notify_unprepare @ 0x08002b5c (size 308) =====

void sym.ssr_notify_unprepare(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t arg2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_40 = 0;
    uStack_48 = **(arg1 + 0x70);
    while( true ) {
        *(arg1 + 0x30) = 3;
        mod_timer(arg1 + 0x38,_arm64_use_ng_mappings + 5000);
        srcu_notifier_call_chain(*(arg1 + 0x70) + 8,*(arg1 + 0x30),&uStack_48);
        del_timer_sync(arg1 + 0x38);
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
        iVar2 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1) !=
            0) {
            iVar2 = sp_el0;
            piVar1 = iVar2 + 0x10;
            *(iVar2 + 0x10) = *piVar1 + 1;
            sym.__traceiter_rproc_qcom_event(0,arg2,0x80006fb,0x80007c6);
            iVar3 = *piVar1;
            *(iVar2 + 0x10) = iVar3 + -1;
            if ((iVar3 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return;
}


// ===== sym.qcom_remove_ssr_subdev @ 0x08002ca0 (size 52) =====

void sym.qcom_remove_ssr_subdev(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    rproc_remove_subdev();
    *(arg1 + 0x70) = 0;
    return;
}


// ===== sym.glink_early_ssr_notifier_event @ 0x08002cd4 (size 44) =====

ulong sym.glink_early_ssr_notifier_event(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    qcom_glink_early_ssr_notify(*(arg1 + -8));
    return 0;
}


// ===== sym.qcom_check_ssr_status @ 0x08002d00 (size 108) =====

void sym.qcom_check_ssr_status(ulong noname_0,int64_t arg1)

{
    char *pcVar1;
    int64_t extraout_x1;
    uint *in_x6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(arg1 + 0x3c8) != 0) && (*(arg1 + 0x3cc) != 2)) && (obj.qcom_device_shutdown_in_progress == 0x0)) {
        *in_x6 = 0x801a000;
        panic("Panicking, remoteproc %s failed to recover!\n",*(arg1 + 0x18));
        *extraout_x18 = 0x8002d68;
        pcVar1 = "enabled";
        if (*(extraout_x1 + 0x4c4) != '\0') {
            pcVar1 = "disabled";
        }
        _printk(0x8000926,*(extraout_x1 + 0x18),pcVar1);
        return;
    }
    return;
}


// ===== sym.rproc_recovery_notifier @ 0x08002d6c (size 104) =====

void sym.rproc_recovery_notifier(ulong noname_0,int64_t arg1)

{
    char *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = "enabled";
    if (*(arg1 + 0x4c4) != '\0') {
        pcVar1 = "disabled";
    }
    _printk(0x8000926,*(arg1 + 0x18),pcVar1);
    return;
}


// ===== sym.qcom_rproc_shutdown_request_store @ 0x08002e6c (size 168) =====

uchar * sym.qcom_rproc_shutdown_request_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    uchar *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    uchar auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    auStack_2c[0] = 0x0;
    iVar4 = kstrtobool(arg1,auStack_2c);
    if (iVar4 == 0) {
        pcVar1 = "false";
        if (auStack_2c[0] != 0x0) {
            pcVar1 = "true";
        }
        obj.qcom_device_shutdown_in_progress = auStack_2c[0];
        _printk(0x800084f,pcVar1);
    }
    else {
        arg2 = iVar4;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_28) {
        auVar6 = __stack_chk_fail();
        puVar5 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar5 != NULL) {
            switch(*puVar5) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar5,auVar6._8_8_,0);
                break;
            default:
                return puVar5;
            }
        }
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5502,0x8002f6c);
        (*pcVar3)();
    }
    return arg2;
}


// ===== sym.__cfi_check_fail @ 0x08002f14 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002f58

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
    //switch table (4 cases) at 0x8000abd
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002f6c);
    (*pcVar1)();
}


// ===== sym.__traceiter_rproc_qcom_event @ 0x08002f6c (size 112) =====

ulong sym.__traceiter_rproc_qcom_event(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80038e8;
    piVar1 = *0x80038e8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2,arg3,arg4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.trace_event_raw_event_rproc_qcom_event @ 0x08002fe4 (size 388) =====

void sym.trace_event_raw_event_rproc_qcom_event(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    char *pcVar2;
    char *pcVar3;
    int iVar4;
    ulong uVar5;
    ulong in_tmp_ldXn;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    char *pcVar13;
    char *pcVar14;
    uint64_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    code *pcStack_130;
    char *pcStack_128;
    int64_t *piStack_120;
    uint uStack_114;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uVar16 = *(arg1 + 0x48);
    pcVar14 = arg4;
    if ((uVar16 >> 8 & 1) == 0) {
        pcVar13 = arg3;
        if ((uVar16 >> 7 & 1) != 0) {
            pcVar13 = NULL;
            pcVar14 = NULL;
            event_triggers_call(arg1,0);
        }
        if (((uVar16 >> 6 & 1) != 0) ||
           (((uVar16 >> 9 & 1) != 0 && (uVar10 = trace_event_ignore_this_pid(arg1), (uVar10 & 1) != 0))))
        goto code_r0x08003128;
    }
    pcVar1 = "(null)";
    pcVar3 = pcVar1;
    if (arg2 != 0) {
        pcVar3 = arg2;
    }
    iVar6 = strlen(pcVar3);
    pcVar2 = pcVar1;
    if (arg3 != 0) {
        pcVar2 = arg3;
    }
    iVar7 = strlen(pcVar2);
    if (arg4 != 0) {
        pcVar1 = arg4;
    }
    iVar9 = iVar7 + 1 + iVar6 + 1;
    iVar8 = strlen(pcVar1);
    pcVar13 = iVar8 + 1 + iVar9 + 0x14;
    iVar11 = trace_event_buffer_reserve(&uStack_98,arg1);
    if (iVar11 != 0) {
        *(iVar11 + 8) = (iVar6 + 1) * 0x10000 | 0x14;
        *(iVar11 + 0xc) = iVar6 + 0x15U | (iVar7 + 1) * 0x10000;
        *(iVar11 + 0x10) = iVar9 + 0x14U | (iVar8 + 1) * 0x10000;
        strcpy(iVar11 + 0x14,pcVar3);
        strcpy(iVar11 + (iVar6 + 0x15U & 0xffff),pcVar2);
        strcpy(iVar11 + *(iVar11 + 0x10),pcVar1);
        trace_event_buffer_commit(&uStack_98);
    }
code_r0x08003128:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar12 = auVar17._0_8_;
    *extraout_x18 = sym.perf_trace_rproc_qcom_event;
    pcStack_f8 = sym.perf_trace_rproc_qcom_event;
    pcStack_130 = sym.perf_trace_rproc_qcom_event;
    iVar11 = sp_el0;
    pcVar1 = "(null)";
    iStack_108 = *(iVar11 + 0x5e0);
    pcStack_128 = pcVar1;
    if (auVar17._8_8_ != NULL) {
        pcStack_128 = auVar17._8_8_;
    }
    iStack_110 = 0;
    uStack_114 = 0;
    puStack_100 = &stack0xffffffffffffffa0;
    iVar6 = strlen();
    pcVar3 = pcVar1;
    if (pcVar13 != NULL) {
        pcVar3 = pcVar13;
    }
    iVar7 = strlen(pcVar3);
    if (pcVar14 != NULL) {
        pcVar1 = pcVar14;
    }
    iVar9 = strlen(pcVar1);
    iVar11 = tpidr_el1;
    piStack_120 = iVar11 + *(iVar12 + 0x78);
    if ((*(iVar12 + 0x80) != 0) || (*piStack_120 != 0)) {
        iVar8 = iVar7 + 1 + iVar6 + 1;
        iVar4 = (iVar8 + iVar9 + 1 + 0x1fU & 0xfffffff8) - 4;
        iVar11 = perf_trace_buf_alloc(iVar4,&iStack_110,&uStack_114);
        if (iVar11 != 0) {
            uVar15 = -1L << (___memcpy_fromio & 0x3f);
            uVar10 = (~uVar15 | 0xff80000000000000) & pcStack_130;
            if ((pcStack_130 & 0x80000000000000) != 0) {
                uVar10 = uVar15 | pcStack_130;
            }
            *(iStack_110 + 0xe8) = &puStack_100;
            *(iStack_110 + 0xf8) = &pcStack_130;
            *(iStack_110 + 0x100) = uVar10;
            *(iStack_110 + 0x108) = 5;
            *(iVar11 + 8) = (iVar6 + 1) * 0x10000 | 0x14;
            *(iVar11 + 0xc) = iVar6 + 0x15U | (iVar7 + 1) * 0x10000;
            *(iVar11 + 0x10) = iVar8 + 0x14U | (iVar9 + 1) * 0x10000;
            strcpy(iVar11 + 0x14,pcStack_128);
            strcpy(iVar11 + (iVar6 + 0x15U & 0xffff),pcVar3);
            strcpy(iVar11 + *(iVar11 + 0x10),pcVar1);
            perf_trace_run_bpf_submit(iVar11,iVar4,uStack_114,iVar12,1,iStack_110,piStack_120,0);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_108) {
        return;
    }
    __stack_chk_fail();
    uVar5 = tpidr_el2;
    *extraout_x18_00 = 0x800334c;
    bpf_trace_run3(in_tmp_ldXn);
    return;
}


// ===== sym.perf_trace_rproc_qcom_event @ 0x08003168 (size 496) =====

void sym.perf_trace_rproc_qcom_event(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    int iVar2;
    int64_t *piVar3;
    char *pcVar4;
    char *pcVar5;
    uint64_t uVar6;
    int iVar7;
    ulong uVar8;
    ulong in_tmp_ldXn;
    int iVar9;
    int iVar10;
    int iVar11;
    int64_t iVar12;
    uint64_t uVar13;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uint uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    pcVar1 = "(null)";
    iStack_68 = *(iVar12 + 0x5e0);
    pcVar4 = pcVar1;
    if (arg2 != NULL) {
        pcVar4 = arg2;
    }
    iStack_70 = 0;
    uStack_74 = 0;
    iVar9 = strlen();
    pcVar5 = pcVar1;
    if (arg3 != 0) {
        pcVar5 = arg3;
    }
    iVar10 = strlen(pcVar5);
    if (arg4 != 0) {
        pcVar1 = arg4;
    }
    iVar11 = strlen(pcVar1);
    iVar12 = tpidr_el1;
    piVar3 = iVar12 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar3 != 0)) {
        iVar2 = iVar10 + 1 + iVar9 + 1;
        iVar7 = (iVar2 + iVar11 + 1 + 0x1fU & 0xfffffff8) - 4;
        iVar12 = perf_trace_buf_alloc(iVar7,&stack0xffffffffffffff90,&stack0xffffffffffffff8c);
        if (iVar12 != 0) {
            uVar13 = -1L << (___memcpy_fromio & 0x3f);
            uVar6 = (~uVar13 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar6 = uVar13 | unaff_x30;
            }
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = &stack0xffffffffffffff70;
            *(iStack_70 + 0x100) = uVar6;
            *(iStack_70 + 0x108) = 5;
            *(iVar12 + 8) = (iVar9 + 1) * 0x10000 | 0x14;
            *(iVar12 + 0xc) = iVar9 + 0x15U | (iVar10 + 1) * 0x10000;
            *(iVar12 + 0x10) = iVar2 + 0x14U | (iVar11 + 1) * 0x10000;
            strcpy(iVar12 + 0x14,pcVar4);
            strcpy(iVar12 + (iVar9 + 0x15U & 0xffff),pcVar5);
            strcpy(iVar12 + *(iVar12 + 0x10),pcVar1);
            perf_trace_run_bpf_submit(iVar12,iVar7,uStack_74,arg1,1,iStack_70,piVar3,0);
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail();
    uVar8 = tpidr_el2;
    *extraout_x18 = 0x800334c;
    bpf_trace_run3(in_tmp_ldXn);
    return;
}


// ===== sym.__bpf_trace_rproc_qcom_event @ 0x08003358 (size 36) =====

void sym.__bpf_trace_rproc_qcom_event(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3();
    return;
}


// ===== sym.trace_raw_output_rproc_qcom_event @ 0x0800337c (size 128) =====

void sym.trace_raw_output_rproc_qcom_event(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"%s: %s: %s\n",iVar2 + *(iVar2 + 8),iVar2 + *(iVar2 + 0xc),iVar2 + *(iVar2 + 0x10));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.init_module @ 0x080035f8 (size 292) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    obj.qcom_device_shutdown_in_progress = 0x0;
    _segment.ehdr = kobject_create_and_add("qcom_rproc",_rproc_coredump_add_custom_segment);
    if (_segment.ehdr == 0) {
        _printk(0x80007d0);
        iVar1 = -0x16;
    }
    else {
        iVar1 = sysfs_create_file_ns(_segment.ehdr,obj.shutdown_requested_attr,0);
        if (iVar1 == 0) {
            iVar1 = tracepoint_probe_register
                              (__tracepoint_android_vh_rproc_recovery,
                               sym.qcom_check_ssr_status.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt,0);
            if (iVar1 == 0) {
                iVar1 = tracepoint_probe_register
                                  (__tracepoint_android_vh_rproc_recovery_set,
                                   sym.rproc_recovery_notifier.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt,0);
                if (iVar1 == 0) {
                    return 0;
                }
                _printk(0x8000959);
                tracepoint_probe_unregister
                          (__tracepoint_android_vh_rproc_recovery,
                           sym.qcom_check_ssr_status.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt,0);
            }
            else {
                _printk(0x80008f8);
            }
            sysfs_remove_file_ns(_segment.ehdr,obj.shutdown_requested_attr,0);
        }
        else {
            _printk(0x8000a8c);
        }
        kobject_put(_segment.ehdr);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x0800371c (size 120) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    tracepoint_probe_unregister
              (__tracepoint_android_vh_rproc_recovery_set,
               sym.rproc_recovery_notifier.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt,0);
    sysfs_remove_file_ns(_segment.ehdr,obj.shutdown_requested_attr,0);
    kobject_put(_segment.ehdr);
    tracepoint_probe_unregister
              (__tracepoint_android_vh_rproc_recovery,sym.qcom_check_ssr_status.20a2eafdc5172b5f281f08852ee6ffa4.cfi_jt
               ,0);
    return;
}

