// decompiled from qcom_esoc by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08005000 (size 1724) =====

//WARNING: Switch with 1 destination removed at 0x08006558

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x139c6025929df038) {
        if (arg1 < -0x48ef54602b463a27) {
            if (arg1 < -0x58c4a7feef7ff60d) {
                if (-0x5f0886bc8f56d74a < arg1) {
                    if (arg1 == -0x5f0886bc8f56d749) {
                        pcVar2 = sym.__typeid__ZTSFi8esoc_cmdP10esoc_clinkE_global_addr;
                    }
                    else {
                        if (arg1 != -0x59a85bcf63dffd48) goto code_r0x08006518;
                        pcVar2 = sym.esoc_bus_match.84989022ed7ef2c74ff175de61317727.cfi_jt;
                    }
                    goto code_r0x08005688;
                }
                if (arg1 == -0x66d421a09845f9f8) {
                    pcVar2 = sym.esoc_link_show.84989022ed7ef2c74ff175de61317727.cfi_jt;
                    goto code_r0x0800562c;
                }
                if (arg1 != -0x668cec2f46f46005) goto code_r0x08006518;
                pcVar2 = sym.__typeid__ZTSFvPjP10esoc_clinkE_global_addr;
            }
            else if (arg1 < -0x550b9e52359ac614) {
                if (arg1 == -0x58c4a7feef7ff60d) {
                    pcVar2 = sym.devm_esoc_desc_match.73c7e5d36e8a3d84b5ab2d61716898c8.cfi_jt;
                    goto code_r0x08005688;
                }
                if (arg1 != -0x57be845bca9148ef) goto code_r0x08006518;
                pcVar2 = sym.esoc_bus_probe.84989022ed7ef2c74ff175de61317727.cfi_jt;
            }
            else {
                if (arg1 == -0x550b9e52359ac614) {
                    if ((pcVar1 + -0x8005880 >> 3 | pcVar1 << 0x3d) < 4) {
                        return;
                    }
                    goto code_r0x08006518;
                }
                if (arg1 != -0x4a81a0cc030082d5) goto code_r0x08006518;
                pcVar2 = sym.sdx50m_cold_reset.efec15fb3fafe4dd582f51ad8b2db369.cfi_jt;
            }
code_r0x08005648:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08006518;
        }
        if (arg1 < -0x3987c0e26ee29729) {
            if (arg1 < -0x433102b91fe690ab) {
                if (arg1 != -0x48ef54602b463a27) {
                    if (arg1 != -0x456f1acda78e3a69) goto code_r0x08006518;
                    pcVar2 = sym.esoc_clink_match_id.84989022ed7ef2c74ff175de61317727.cfi_jt;
                    goto code_r0x08005648;
                }
                pcVar2 = sym.devm_esoc_desc_release.73c7e5d36e8a3d84b5ab2d61716898c8.cfi_jt;
            }
            else {
                if (arg1 != -0x433102b91fe690ab) {
                    if (arg1 != -0x3fc1ceded465754a) goto code_r0x08006518;
                    pcVar2 = sym.__typeid__ZTSFiP8mdm_ctrlbE_global_addr;
                    goto code_r0x0800562c;
                }
                pcVar2 = sym.mdm_rproc_elf_load_segments.1170f134d19d2c286ae3a2a8519f89df.cfi_jt;
            }
        }
        else {
            if (arg1 < -0x2ee0710dce68437c) {
                if (arg1 == -0x3987c0e26ee29729) {
                    pcVar2 = sym.mdm_pblrdy_change.3f2debd08d7acb99a985e6098affe835.cfi_jt;
code_r0x0800562c:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                        return;
                    }
                    goto code_r0x08006518;
                }
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x08006518;
                pcVar2 = sym.mdm_probe.3f2debd08d7acb99a985e6098affe835.cfi_jt;
                goto code_r0x08005648;
            }
            if (arg1 == -0x2ee0710dce68437c) {
                pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
            }
            else if (arg1 == -0x2d1ef4d8549a89e5) {
                pcVar2 = sym.esoc_clink_add_device.cfi_jt;
            }
            else {
                if (arg1 != -0x25aee0507e978bbf) goto code_r0x08006518;
                pcVar2 = sym.__typeid__ZTSFv8esoc_reqP8esoc_engE_global_addr;
            }
        }
    }
    else {
        if (arg1 < 0x4aa3977fc3532e27) {
            if (arg1 < 0xf577ffc9c1a0eb7) {
                if (arg1 < -0x890743871a4a53) {
                    if (arg1 == -0x139c6025929df038) {
                        pcVar2 = sym.mdm_rproc_shutdown.1170f134d19d2c286ae3a2a8519f89df.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x8dc801903aca538) goto code_r0x08006518;
                        pcVar2 = sym.esoc_dev_release.81da45b6a825930f28ec90b51f6404f7.cfi_jt;
                    }
                }
                else {
                    if (arg1 == -0x890743871a4a53) {
                        pcVar2 = sym.esoc_dev_ioctl.81da45b6a825930f28ec90b51f6404f7.cfi_jt;
                        goto code_r0x08005688;
                    }
                    if (arg1 != 0x2b3a43e29242445) goto code_r0x08006518;
                    pcVar2 = sym.init_module.cfi_jt;
                }
            }
            else {
                if (0x190ba2fe57e749b9 < arg1) {
                    if (arg1 == 0x190ba2fe57e749ba) {
                        pcVar2 = sym.__typeid__ZTSFv11esoc_notifyP10esoc_clinkE_global_addr;
                    }
                    else if (arg1 == 0x3408851a0ecce1f3) {
                        pcVar2 = sym.devm_unregister_esoc_client.cfi_jt;
                    }
                    else {
                        if (arg1 != 0x4a5e4c5fff261047) goto code_r0x08006518;
                        pcVar2 = sym.notify_esoc_clients.cfi_jt;
                    }
                    goto code_r0x08005688;
                }
                if (arg1 != 0xf577ffc9c1a0eb7) {
                    if ((arg1 == 0x12240efbe0a9f8db) && ((pcVar1 + -0x80058a0 >> 3 | pcVar1 << 0x3d) < 6)) {
                        return;
                    }
                    goto code_r0x08006518;
                }
                pcVar2 = sym.__typeid__ZTSFiP10esoc_clinkP8esoc_drvE_global_addr;
            }
            goto code_r0x08005648;
        }
        if (arg1 < 0x66af1fb51be21677) {
            if (arg1 < 0x5b83a3fd302a5421) {
                if (arg1 != 0x4aa3977fc3532e27) {
                    if ((arg1 == 0x5325a6c16b375fe3) && ((pcVar1 + -0x8005818 >> 3 | pcVar1 << 0x3d) < 7)) {
                        return;
                    }
                    goto code_r0x08006518;
                }
                pcVar2 = sym.esoc_register_client_notifier.cfi_jt;
            }
            else if (arg1 == 0x5b83a3fd302a5421) {
                pcVar2 = sym.esoc_clink_release.84989022ed7ef2c74ff175de61317727.cfi_jt;
            }
            else {
                if (arg1 != 0x64f5f85365b61026) goto code_r0x08006518;
                pcVar2 = sym.devm_register_esoc_client.cfi_jt;
            }
        }
        else {
            if (arg1 < 0x7d57972cd3914fb1) {
                if (arg1 == 0x66af1fb51be21677) {
                    pcVar2 = sym.__typeid__ZTSFv8esoc_evtP8esoc_engE_global_addr;
                }
                else {
                    if (arg1 != 0x7bdd7c06a8eb2c04) goto code_r0x08006518;
                    pcVar2 = sym.esoc_unregister_client_hook.cfi_jt;
                }
                goto code_r0x08005648;
            }
            if (arg1 == 0x7d57972cd3914fb1) {
                pcVar2 = sym.esoc_msm_restart_handler.1170f134d19d2c286ae3a2a8519f89df.cfi_jt;
            }
            else {
                if (arg1 == 0x7e04a0fb7ad8bcd5) {
                    pcVar2 = sym.esoc_dev_exit.cfi_jt;
                    goto code_r0x08005648;
                }
                if (arg1 != 0x7f25e1751fd2a794) goto code_r0x08006518;
                pcVar2 = sym.mdm_rproc_panic.1170f134d19d2c286ae3a2a8519f89df.cfi_jt;
            }
        }
    }
code_r0x08005688:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08006518:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800656c);
    (*pcVar1)();
}


// ===== sym.__typeid__ZTSFi8esoc_cmdP10esoc_clinkE_global_addr @ 0x080056c8 (size 8) =====

void sym.__typeid__ZTSFi8esoc_cmdP10esoc_clinkE_global_addr(uint param_1,code *param_2)

{
    code cVar1;
    int64_t iVar2;
    ulong uVar3;
    uint32_t uVar4;
    code *pcVar5;
    uint64_t uVar6;
    code *extraout_x8;
    ulong *in_x18;
    int64_t iVar7;
    code *unaff_x20;
    code *unaff_x21;
    ulong unaff_x30;
    int iStack_40;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    iVar7 = *(param_2 + 1000);
    iStack_3c = 0;
    iStack_40 = 0;
    switch(param_1) {
    case 1:
        if (param_2[0x4a0] == 0x0) goto code_r0x08009c0c;
        unaff_x21 = sym.__typeid__ZTSFvPjP10esoc_clinkE_global_addr;
        pcVar5 = *(*(param_2 + 0x3c8) + 8);
        if (1 < (pcVar5 + -0x8005870 >> 3 | pcVar5 << 0x3d)) goto code_r0x08009d80;
        break;
    case 2:
        sym.mdm_disable_irqs(iVar7);
        *(iVar7 + 0x1a4) = 0;
        uVar3 = 0;
        *(iVar7 + 0x1d8) = 0;
        *(iVar7 + 0x1f8) = 0;
        if (param_2[0x4a1] != 0x0) goto code_r0x08009d18;
        if (param_2[0x4a3] == 0x0) goto code_r0x08009d14;
        sym.esoc_clink_queue_request(4,param_2);
        goto code_r0x08009d14;
    case 3:
        uVar6 = qcom_sysmon_shutdown_acked(*(param_2 + 0x490));
        if ((uVar6 & 1) == 0) {
            sym.mdm_disable_irqs(iVar7);
            *(iVar7 + 0x1a4) = 0;
            *(iVar7 + 0x1d8) = 0;
            *(iVar7 + 0x1f8) = 0;
            _dev_err(*(iVar7 + 0x150),"Graceful shutdown fail\n");
            cVar1 = param_2[0x4a1];
        }
        else {
            cVar1 = param_2[0x4a1];
        }
        if (cVar1 != 0x0) goto code_r0x08009d14;
        if (param_2[0x4a2] == 0x0) {
            ipc_log_string(_segment.ehdr,"[%s]: ESOC_FORCE_PWR_OFF: setting AP2MDM_STATUS = 0\n","mdm_cmd_exe");
            uVar3 = gpio_to_desc(*(iVar7 + 4));
            gpiod_set_raw_value(uVar3,0);
        }
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_FORCE_PWR_OFF: Queueing request: ESOC_REQ_SHUTDOWN\n","mdm_cmd_exe");
        sym.esoc_clink_queue_request(3,param_2);
        param_2 = *(*(iVar7 + 0x200) + 0x10);
        if (param_2 != NULL) {
            if (6 < (param_2 + -0x8005818 >> 3 | param_2 << 0x3d)) {
                __cfi_slowpath_diag(0x5325a6c16b375fe3,param_2,0x8001310);
            }
            (*param_2)(iVar7);
        }
        if (*(iVar7 + 0x160) == 0) goto code_r0x08009d14;
        uVar3 = pinctrl_select_state(*(iVar7 + 0x158));
        if (uVar3 == 0) goto code_r0x08009d18;
        _dev_err(*(iVar7 + 0x150),"switching gpio config failed\n");
        goto code_r0x08009d14;
    case 4:
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_RESET: Resetting the modem\n","mdm_cmd_exe");
        param_2 = *(*(iVar7 + 0x200) + 8);
        if (param_2 == NULL) goto code_r0x08009d14;
        if (2 < (param_2 + -0x8005850 >> 3 | param_2 << 0x3d)) {
            __cfi_slowpath_diag(0xc03e31212b9a8ab6,param_2,0x8001270);
        }
        (*param_2)(iVar7,0);
        goto code_r0x08009d14;
    case 5:
        param_2 = segment.ehdr;
        *(iVar7 + 0x1d8) = 0;
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_PREPARE_DEBUG: Cancelling the status check work\n","mdm_cmd_exe");
        cancel_delayed_work(iVar7 + 0x48);
        uVar3 = 0;
        if (*(*(iVar7 + 0x1c0) + 0x4a0) != '\0') goto code_r0x08009d18;
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_PREPARE_DEBUG: setting AP2MDM_ERRFATAL = 1\n","mdm_cmd_exe");
        uVar3 = gpio_to_desc(*(iVar7 + 0x14));
        gpiod_set_raw_value(uVar3,1);
        msleep(*(iVar7 + 0x1b4));
        goto code_r0x08009d14;
    case 6:
        uVar3 = 0;
        *(iVar7 + 0x1f8) = 0;
        if (*(iVar7 + 0x208) != '\0') goto code_r0x08009d18;
        unaff_x21 = segment.ehdr;
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_EXE_DEBUG: Resetting the modem\n","mdm_cmd_exe");
        *(iVar7 + 0x1a4) = 1;
        param_2 = *(*(iVar7 + 0x200) + 8);
        if (param_2 != NULL) {
            if (2 < (param_2 + -0x8005850 >> 3 | param_2 << 0x3d)) {
                __cfi_slowpath_diag(0xc03e31212b9a8ab6,param_2,0x8001270);
            }
            (*param_2)(iVar7,0);
        }
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_EXE_DEBUG: Waiting for ramdumps to be collected\n","mdm_cmd_exe");
        wait_for_completion(iVar7 + 0x130);
        if (*(iVar7 + 0x1ac) != '\0') {
            ipc_log_string(_segment.ehdr,"[%s]: ESOC_EXE_DEBUG: Failed to collect the ramdumps\n","mdm_cmd_exe");
            _dev_err(*(iVar7 + 0x150),"unable to collect ramdumps\n");
            uVar3 = 0xfffffffb;
            *(iVar7 + 0x1a4) = 0;
            goto code_r0x08009d18;
        }
        *(iVar7 + 0x1a4) = 0;
        *(iVar7 + 0x130) = 0;
        __init_swait_queue_head(iVar7 + 0x138,"&x->wait",obj.init_completion.__key);
        goto code_r0x08009d14;
    case 7:
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_EXIT_DEBUG: Setting AP2MDM_ERRFATAL = 0\n","mdm_cmd_exe");
        uVar3 = gpio_to_desc(*(iVar7 + 0x14));
        gpiod_set_raw_value(uVar3,0);
        uVar3 = 0;
        *(iVar7 + 0x1c8) = 1;
        goto code_r0x08009d18;
    default:
        ipc_log_string(_segment.ehdr,"[%s]: Invalid command\n","mdm_cmd_exe");
        uVar3 = 0xffffffea;
        param_2 = unaff_x20;
        goto code_r0x08009d18;
    }
    do {
        (*pcVar5)(&iStack_3c,param_2);
        pcVar5 = *(*(param_2 + 0x3c8) + 0x10);
        if (1 < (pcVar5 - unaff_x21 >> 3 | pcVar5 - unaff_x21 << 0x3d)) {
            __cfi_slowpath_diag(0x997313d0b90b9ffb,pcVar5,0x80012b0);
            unaff_x21 = pcVar5;
        }
        (*pcVar5)(&iStack_40,param_2);
        if (iStack_40 == 0) {
            if ((iStack_3c != 0) && (*(iVar7 + 0x1d8) == '\0')) {
                *(iVar7 + 0x1d8) = 1;
                pcVar5 = *(*(param_2 + 0x3c8) + 0x18);
                if (pcVar5 != sym.__typeid__ZTSFv11esoc_notifyP10esoc_clinkE_global_addr) {
                    __cfi_slowpath_diag(0x190ba2fe57e749ba,pcVar5,0x80012d0);
                }
                (*pcVar5)(2,param_2);
            }
code_r0x08009c0c:
            unaff_x21 = segment.ehdr;
            ipc_log_string(_segment.ehdr,"[%s]: ESOC_PWR_ON: Setting AP2MDM_ERRFATAL = 0\n","mdm_cmd_exe");
            uVar3 = gpio_to_desc(*(iVar7 + 0x14));
            gpiod_set_raw_value(uVar3,0);
            *(iVar7 + 0x1a8) = 1;
            param_2 = **(iVar7 + 0x200);
            if (param_2 != NULL) {
                if (6 < (param_2 + -0x8005818 >> 3 | param_2 << 0x3d)) {
                    __cfi_slowpath_diag(0x5325a6c16b375fe3,param_2,0x80012f0);
                }
                (*param_2)(iVar7);
            }
            if (iVar7 != 0) {
                ipc_log_string(_segment.ehdr,"[%s]: Enabling the interrupts\n","mdm_enable_irqs");
                uVar6 = *(iVar7 + 0x1d0);
                if ((uVar6 & 1) == 0) {
                    if ((uVar6 >> 1 & 1) != 0) goto code_r0x08009cb4;
code_r0x08009c94:
                    uVar4 = uVar6;
                }
                else {
                    enable_irq(*(iVar7 + 0x188));
                    uVar6 = *(iVar7 + 0x1d0) & 0xfffffffffffffffe;
                    *(iVar7 + 0x1d0) = uVar6;
                    if ((uVar6 >> 1 & 1) == 0) goto code_r0x08009c94;
code_r0x08009cb4:
                    enable_irq(*(iVar7 + 0x18c));
                    uVar6 = *(iVar7 + 0x1d0) & 0xfffffffffffffffd;
                    *(iVar7 + 0x1d0) = uVar6;
                    uVar4 = uVar6;
                }
                if ((uVar4 >> 2 & 1) != 0) {
                    enable_irq(*(iVar7 + 400));
                    uVar3 = 0;
                    *(iVar7 + 0x1d0) = *(iVar7 + 0x1d0) & 0xfffffffffffffffb;
                    goto code_r0x08009d18;
                }
            }
code_r0x08009d14:
            uVar3 = 0;
        }
        else {
            uVar3 = 0xfffffffb;
        }
code_r0x08009d18:
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iStack_38) {
            return;
        }
        __stack_chk_fail(uVar3);
        pcVar5 = extraout_x8;
code_r0x08009d80:
        __cfi_slowpath_diag(0x997313d0b90b9ffb,pcVar5,0x8001290);
    } while( true );
}


// ===== sym.esoc_clink_release.84989022ed7ef2c74ff175de61317727.cfi_jt @ 0x080056d0 (size 8) =====

void sym.esoc_clink_release.84989022ed7ef2c74ff175de61317727.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ida_free(obj.esoc_ida,*(param_1 + 0x398));
    kfree(param_1 + -0x20);
    return;
}


// ===== sym.devm_esoc_desc_match.73c7e5d36e8a3d84b5ab2d61716898c8.cfi_jt @ 0x080056d8 (size 8) =====

bool sym.devm_esoc_desc_match.73c7e5d36e8a3d84b5ab2d61716898c8.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3)

{
    return param_2 == param_3;
}


// ===== sym.esoc_dev_ioctl.81da45b6a825930f28ec90b51f6404f7.cfi_jt @ 0x080056e0 (size 8) =====

code * sym.esoc_dev_ioctl.81da45b6a825930f28ec90b51f6404f7.cfi_jt(int64_t param_1,int param_2,code *param_3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    ulong uVar7;
    uint32_t uVar8;
    char *pcVar9;
    code *pcVar10;
    ulong *in_x18;
    code *arg1;
    code *pcVar11;
    ulong *puVar12;
    int64_t iVar13;
    ulong *puVar14;
    ulong unaff_x30;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    uint32_t uStack_64;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_58 = *(iVar13 + 0x5e0);
    pcVar11 = 0xffffffffffffffea;
    puVar14 = *(param_1 + 0xd8);
    uStack_60 = 0;
    uStack_64 = 0;
    arg1 = *puVar14;
    puVar12 = *(arg1 + 0x3c8);
    if (param_2 < 0xcc07) {
        if (param_2 + 0x7ffb33feU < 5) {
            iVar13 = puVar14[4];
            switch(param_2) {
            case -0x7ffb33fe:
                if (*(arg1 + 0x3d0) == puVar14 + 1) {
                    ipc_log_string(_segment.ehdr,"[%s]: ESOC_WAIT_FOR_REQ: Waiting for req event to arrive.\n",
                                   "esoc_dev_ioctl");
                    pcVar10 = param_3;
                    if (*(iVar13 + 8) == *(iVar13 + 0xc)) {
                        uStack_78 = 0;
                        uStack_70 = 0;
                        uStack_88 = 0;
                        uStack_80 = 0;
                        uStack_90 = 0;
                        init_wait_entry(&uStack_90,0);
                        while (iVar6 = prepare_to_wait_event(iVar13 + 0x20,&uStack_90,1),
                              *(iVar13 + 8) == *(iVar13 + 0xc)) {
                            if (iVar6 != 0) {
                                if (iVar6 == 0) goto code_r0x08007810;
                                goto code_r0x080078d0;
                            }
                            schedule();
                        }
                        finish_wait(iVar13 + 0x20,&uStack_90);
                    }
code_r0x08007810:
                    uVar7 = _raw_spin_lock_irqsave(iVar13 + 0x38);
                    iVar5 = __kfifo_out(iVar13 + 8,&uStack_60,4);
                    _raw_spin_unlock_irqrestore(iVar13 + 0x38,uVar7);
                    if (iVar5 == 4) {
                        puVar12 = sp_el0;
                        if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (pcVar11 = param_3, (*puVar12 >> 0x1a & 1) != 0)) {
                            pcVar11 = param_3 & (param_3 << 8) >> 8;
                        }
                        bVar3 = 0xfffffffffffffffb < pcVar11;
                        pcVar11 = pcVar11 + 4;
                        uVar1 = 0;
                        if (!bVar3 || pcVar11 == NULL) {
                            uVar1 = 0x7fffffffff;
                        }
                        if (bVar3) {
                            pcVar11 = 0xffffffffffffffff;
                        }
                        if (!CARRY8(pcVar11,~uVar1) && !CARRY8(pcVar11 + ~uVar1,bVar3) || pcVar11 == uVar1 + !bVar3) {
                            if ((param_3 & (param_3 << 8) >> 8 & 0xffffff8000000000) != 0) {
                                param_3 = NULL;
                            }
                            uVar4 = uStack_60;
                            pcVar10 = uStack_60 & 0xffffffff;
                            sym.uaccess_ttbr0_enable();
                            *param_3 = uVar4;
                            sym.uaccess_ttbr0_disable(0);
                            arg1 = param_3;
                        }
                        ipc_log_string(_segment.ehdr,"[%s]: ESOC_WAIT_FOR_REQ: Event arrived: %u\n","esoc_dev_ioctl",
                                       uStack_60 & 0xffffffff);
                        iVar6 = 4;
code_r0x080078d0:
                        pcVar11 = iVar6;
                        param_3 = pcVar10;
                    }
                    else {
                        ipc_log_string(_segment.ehdr,"[%s]: ESOC_WAIT_FOR_REQ: Failed to read the event\n",
                                       "esoc_dev_ioctl");
                        _printk(0x8003139,*arg1);
                        pcVar11 = 0xfffffffffffffffb;
                    }
                }
                else {
                    ipc_log_string(_segment.ehdr,"[%s]: ESOC_WAIT_FOR_REQ: Failed to access\n","esoc_dev_ioctl");
                    pcVar11 = 0xfffffffffffffff3;
                }
                break;
            case -0x7ffb33fc:
                pcVar11 = puVar12[1];
                if (1 < (pcVar11 + -0x8005870 >> 3 | pcVar11 << 0x3d)) goto code_r0x080079e0;
                goto code_r0x08006f68;
            case -0x7ffb33fb:
                pcVar11 = puVar12[2];
                if (1 < (pcVar11 + -0x8005870 >> 3 | pcVar11 << 0x3d)) {
                    __cfi_slowpath_diag(0x997313d0b90b9ffb,pcVar11,0x8001210);
                }
                (*pcVar11)(&uStack_60 + 4,arg1);
                ipc_log_string(_segment.ehdr,"[%s]: ESOC_GET_ERR_FATAL: Sending err_fatal status from esoc: %u\n",
                               "esoc_dev_ioctl",uStack_60._4_4_);
                puVar12 = sp_el0;
                if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (pcVar10 = param_3, (*puVar12 >> 0x1a & 1) != 0)) {
                    pcVar10 = param_3 & (param_3 << 8) >> 8;
                }
                pcVar11 = NULL;
                bVar3 = 0xfffffffffffffffb < pcVar10;
                pcVar10 = pcVar10 + 4;
                uVar1 = 0;
                if (!bVar3 || pcVar10 == NULL) {
                    uVar1 = 0x7fffffffff;
                }
                if (bVar3) {
                    pcVar10 = 0xffffffffffffffff;
                }
                if (!CARRY8(pcVar10,~uVar1) && !CARRY8(pcVar10 + ~uVar1,bVar3) || pcVar10 == uVar1 + !bVar3) {
                    pcVar11 = param_3;
                    if ((param_3 & (param_3 << 8) >> 8 & 0xffffff8000000000) != 0) {
                        pcVar11 = NULL;
                    }
                    if ((_bus_for_each_dev >> 0x18 & 1) == 0) {
                        uVar1 = daif;
                        if ((uVar1 & 0x80) == 0) {
                            uVar2 = daif;
                            daif = uVar2 | 0xc0;
                        }
                        uVar2 = ttbr1_el1;
                        ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                        InstructionSynchronizationBarrier();
                        ttbr0_el1 = puVar12[1];
                        InstructionSynchronizationBarrier();
                        daif = uVar1;
                    }
                    *pcVar11 = uStack_60._4_4_;
                    pcVar11 = NULL;
                    if ((_bus_for_each_dev >> 0x18 & 1) == 0) {
                        uVar1 = daif;
                        if ((uVar1 & 0x80) == 0) {
                            uVar2 = daif;
                            daif = uVar2 | 0xc0;
                        }
                        uVar2 = ttbr1_el1;
                        pcVar11 = NULL;
                        ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
                        InstructionSynchronizationBarrier();
                        ttbr1_el1 = uVar2 & 0xffffffffffff;
                        InstructionSynchronizationBarrier();
                        daif = uVar1;
                    }
                }
                break;
            case -0x7ffb33fa:
                ipc_log_string(_segment.ehdr,"[%s]: ESOC_WAIT_FOR_CRASH: Waiting for evt to arrive..\n",
                               "esoc_dev_ioctl");
                if (*(iVar13 + 0x40) == *(iVar13 + 0x44)) {
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_90 = 0;
                    init_wait_entry(&uStack_90,0);
                    while (iVar6 = prepare_to_wait_event(iVar13 + 0x58,&uStack_90,1),
                          *(iVar13 + 0x40) == *(iVar13 + 0x44)) {
                        if (iVar6 != 0) {
                            if (iVar6 == 0) goto code_r0x08007648;
                            goto code_r0x08007790;
                        }
                        schedule();
                    }
                    finish_wait(iVar13 + 0x58,&uStack_90);
                }
code_r0x08007648:
                uVar7 = _raw_spin_lock_irqsave(iVar13 + 0x70);
                iVar5 = __kfifo_out(iVar13 + 0x40,&uStack_64,4);
                _raw_spin_unlock_irqrestore(iVar13 + 0x70,uVar7);
                if (iVar5 == 4) {
                    puVar12 = sp_el0;
                    if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (pcVar11 = param_3, (*puVar12 >> 0x1a & 1) != 0)) {
                        pcVar11 = param_3 & (param_3 << 8) >> 8;
                    }
                    bVar3 = 0xfffffffffffffffb < pcVar11;
                    pcVar11 = pcVar11 + 4;
                    uVar1 = 0;
                    if (!bVar3 || pcVar11 == NULL) {
                        uVar1 = 0x7fffffffff;
                    }
                    if (bVar3) {
                        pcVar11 = 0xffffffffffffffff;
                    }
                    if (!CARRY8(pcVar11,~uVar1) && !CARRY8(pcVar11 + ~uVar1,bVar3) || pcVar11 == uVar1 + !bVar3) {
                        pcVar11 = param_3;
                        if ((param_3 & (param_3 << 8) >> 8 & 0xffffff8000000000) != 0) {
                            pcVar11 = NULL;
                        }
                        if ((_bus_for_each_dev >> 0x18 & 1) == 0) {
                            uVar1 = daif;
                            if ((uVar1 & 0x80) == 0) {
                                uVar2 = daif;
                                daif = uVar2 | 0xc0;
                            }
                            uVar2 = ttbr1_el1;
                            ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                            InstructionSynchronizationBarrier();
                            ttbr0_el1 = puVar12[1];
                            InstructionSynchronizationBarrier();
                            daif = uVar1;
                        }
                        *pcVar11 = uStack_64;
                        if ((_bus_for_each_dev >> 0x18 & 1) == 0) {
                            uVar1 = daif;
                            if ((uVar1 & 0x80) == 0) {
                                uVar2 = daif;
                                daif = uVar2 | 0xc0;
                            }
                            uVar2 = ttbr1_el1;
                            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
                            InstructionSynchronizationBarrier();
                            ttbr1_el1 = uVar2 & 0xffffffffffff;
                            InstructionSynchronizationBarrier();
                            daif = uVar1;
                        }
                    }
                    ipc_log_string(_segment.ehdr,"[%s]: ESOC_WAIT_FOR_CRASH: Event arrived: %u\n","esoc_dev_ioctl",
                                   uStack_64);
                    iVar6 = 4;
code_r0x08007790:
                    pcVar11 = iVar6;
                }
                else {
                    ipc_log_string(_segment.ehdr,"[%s]: ESOC_WAIT_FOR_CRASH: Failed to read event\n","esoc_dev_ioctl")
                    ;
                    _printk(0x8003db5,*arg1);
                    pcVar11 = 0xfffffffffffffffb;
                }
            }
        }
        else if (param_2 == -0x3fef33f7) {
            uStack_90 = 0;
            uStack_88 = 0;
            if (param_3 == NULL) {
                pcVar11 = 0xffffffffffffffea;
                pcVar9 = "Missing argument for link id\n";
            }
            else {
                iVar13 = sym._copy_from_user(&uStack_90,param_3);
                if (iVar13 == 0) {
                    if (uStack_90 == 0) {
                        iVar13 = *(arg1 + 0x4a8);
                        if ((iVar13 == 0) || (pcVar11 = *(iVar13 + 0x28), pcVar11 == NULL)) {
                            pcVar11 = 0xffffffffffffffea;
                            pcVar9 = "Client hooks not registered for the device\n";
                        }
                        else {
                            __cfi_slowpath_diag(0x23044101be64e432,pcVar11,0x8001230);
                            uStack_88 = (*pcVar11)(*(iVar13 + 8));
                            iVar13 = sym._copy_to_user(param_3);
                            if (iVar13 == 0) {
                                pcVar11 = NULL;
                                goto code_r0x08007970;
                            }
                            pcVar11 = 0xfffffffffffffff2;
                            pcVar9 = "Failed to send the data to the user\n";
                        }
                    }
                    else {
                        pcVar11 = 0xffffffffffffffea;
                        pcVar9 = "Invalid client identifier passed\n";
                    }
                }
                else {
                    pcVar11 = 0xfffffffffffffff2;
                    pcVar9 = "Unable to copy the data from the user\n";
                }
            }
            _dev_err(arg1 + 0x20,pcVar9);
        }
    }
    else {
        uVar4 = _bus_for_each_dev;
        switch(param_2) {
        case 0x4004cc01:
            if (*(arg1 + 0x3d8) == puVar14 + 1) {
                puVar14 = sp_el0;
                if (((*(puVar14 + 0x3e) >> 5 & 1) != 0) || (pcVar11 = param_3, (*puVar14 >> 0x1a & 1) != 0)) {
                    pcVar11 = param_3 & (param_3 << 8) >> 8;
                }
                bVar3 = 0xfffffffffffffffb < pcVar11;
                pcVar11 = pcVar11 + 4;
                uVar1 = 0;
                if (!bVar3 || pcVar11 == NULL) {
                    uVar1 = 0x7fffffffff;
                }
                if (bVar3) {
                    pcVar11 = 0xffffffffffffffff;
                }
                if ((CARRY8(pcVar11,~uVar1) || CARRY8(pcVar11 + ~uVar1,bVar3)) && pcVar11 != uVar1 + !bVar3) {
                    param_3 = NULL;
                }
                else {
                    if ((param_3 & (param_3 << 8) >> 8 & 0xffffff8000000000) != 0) {
                        param_3 = NULL;
                    }
                    sym.uaccess_ttbr0_enable();
                    param_3 = *param_3;
                    sym.uaccess_ttbr0_disable(0);
                }
                ipc_log_string(_segment.ehdr,"[%s]: ESOC_CMD_EXE: Executing esoc command: %u\n","esoc_dev_ioctl",
                               param_3);
                pcVar11 = *puVar12;
                if (pcVar11 != sym.__typeid__ZTSFi8esoc_cmdP10esoc_clinkE_global_addr) {
                    __cfi_slowpath_diag(0xa0f7794370a928b7,pcVar11,0x80011b0);
                }
                iVar5 = (*pcVar11)(param_3,arg1);
                pcVar11 = iVar5;
            }
            else {
                ipc_log_string(_segment.ehdr,"[%s]: ESOC_CMD_EXE failed to access\n","esoc_dev_ioctl");
                pcVar11 = 0xfffffffffffffff3;
            }
            break;
        case 0x4004cc02:
        case 0x4004cc04:
        case 0x4004cc05:
        case 0x4004cc06:
        case 0x4004cc07:
        case 0x4004cc08:
        case 0x4004cc09:
            break;
        case 0x4004cc03:
            puVar14 = sp_el0;
            if (((*(puVar14 + 0x3e) >> 5 & 1) != 0) || (pcVar11 = param_3, (*puVar14 >> 0x1a & 1) != 0)) {
                pcVar11 = param_3 & (param_3 << 8) >> 8;
            }
            uVar8 = 0;
            bVar3 = 0xfffffffffffffffb < pcVar11;
            pcVar11 = pcVar11 + 4;
            uVar1 = 0;
            if (!bVar3 || pcVar11 == NULL) {
                uVar1 = 0x7fffffffff;
            }
            if (bVar3) {
                pcVar11 = 0xffffffffffffffff;
            }
            if (!CARRY8(pcVar11,~uVar1) && !CARRY8(pcVar11 + ~uVar1,bVar3) || pcVar11 == uVar1 + !bVar3) {
                if ((param_3 & (param_3 << 8) >> 8 & 0xffffff8000000000) != 0) {
                    param_3 = NULL;
                }
                if ((uVar4 >> 0x18 & 1) == 0) {
                    uVar1 = daif;
                    if ((uVar1 & 0x80) == 0) {
                        uVar2 = daif;
                        daif = uVar2 | 0xc0;
                    }
                    uVar2 = ttbr1_el1;
                    ttbr1_el1 = puVar14[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    ttbr0_el1 = puVar14[1];
                    InstructionSynchronizationBarrier();
                    daif = uVar1;
                }
                uVar8 = *param_3;
                if ((uVar4 >> 0x18 & 1) == 0) {
                    uVar1 = daif;
                    if ((uVar1 & 0x80) == 0) {
                        uVar2 = daif;
                        daif = uVar2 | 0xc0;
                    }
                    uVar2 = ttbr1_el1;
                    ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
                    InstructionSynchronizationBarrier();
                    ttbr1_el1 = uVar2 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    daif = uVar1;
                }
            }
            ipc_log_string(_segment.ehdr,"[%s]: ESOC_NOTIFY: Notifying esoc about cmd: %u\n","esoc_dev_ioctl",uVar8);
            param_3 = puVar12[3];
            if (param_3 != sym.__typeid__ZTSFv11esoc_notifyP10esoc_clinkE_global_addr) {
                __cfi_slowpath_diag(0x190ba2fe57e749ba,param_3,0x80011d0);
            }
            (*param_3)(uVar8,arg1);
            pcVar11 = NULL;
            break;
        case 0x4004cc0a:
            puVar12 = sp_el0;
            if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (pcVar11 = param_3, (*puVar12 >> 0x1a & 1) != 0)) {
                pcVar11 = param_3 & (param_3 << 8) >> 8;
            }
            uVar8 = 0;
            bVar3 = 0xfffffffffffffffb < pcVar11;
            pcVar11 = pcVar11 + 4;
            uVar1 = 0;
            if (!bVar3 || pcVar11 == NULL) {
                uVar1 = 0x7fffffffff;
            }
            if (bVar3) {
                pcVar11 = 0xffffffffffffffff;
            }
            if (!CARRY8(pcVar11,~uVar1) && !CARRY8(pcVar11 + ~uVar1,bVar3) || pcVar11 == uVar1 + !bVar3) {
                pcVar11 = param_3;
                if ((param_3 & (param_3 << 8) >> 8 & 0xffffff8000000000) != 0) {
                    pcVar11 = NULL;
                }
                if ((uVar4 >> 0x18 & 1) == 0) {
                    uVar1 = daif;
                    if ((uVar1 & 0x80) == 0) {
                        uVar2 = daif;
                        daif = uVar2 | 0xc0;
                    }
                    uVar2 = ttbr1_el1;
                    ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    ttbr0_el1 = puVar12[1];
                    InstructionSynchronizationBarrier();
                    daif = uVar1;
                }
                uVar8 = *pcVar11;
                if ((uVar4 >> 0x18 & 1) == 0) {
                    uVar1 = daif;
                    if ((uVar1 & 0x80) == 0) {
                        uVar2 = daif;
                        daif = uVar2 | 0xc0;
                    }
                    uVar2 = ttbr1_el1;
                    ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
                    InstructionSynchronizationBarrier();
                    ttbr1_el1 = uVar2 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    daif = uVar1;
                }
            }
            iVar5 = sym.esoc_set_boot_fail_action(arg1,uVar8);
            pcVar11 = iVar5;
            break;
        case 0x4004cc0b:
            puVar12 = sp_el0;
            uVar1 = (param_3 << 8) >> 8;
            if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (pcVar11 = param_3, (*puVar12 >> 0x1a & 1) != 0)) {
                pcVar11 = param_3 & uVar1;
            }
            uVar8 = 0;
            bVar3 = 0xfffffffffffffffb < pcVar11;
            pcVar11 = pcVar11 + 4;
            uVar2 = 0;
            if (!bVar3 || pcVar11 == NULL) {
                uVar2 = 0x7fffffffff;
            }
            if (bVar3) {
                pcVar11 = 0xffffffffffffffff;
            }
            if (!CARRY8(pcVar11,~uVar2) && !CARRY8(pcVar11 + ~uVar2,bVar3) || pcVar11 == uVar2 + !bVar3) {
                pcVar11 = param_3;
                if ((param_3 & uVar1 & 0xffffff8000000000) != 0) {
                    pcVar11 = NULL;
                }
                if ((uVar4 >> 0x18 & 1) == 0) {
                    uVar1 = daif;
                    if ((uVar1 & 0x80) == 0) {
                        uVar2 = daif;
                        daif = uVar2 | 0xc0;
                    }
                    uVar2 = ttbr1_el1;
                    ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    ttbr0_el1 = puVar12[1];
                    InstructionSynchronizationBarrier();
                    daif = uVar1;
                }
                uVar8 = *pcVar11;
                if ((uVar4 >> 0x18 & 1) == 0) {
                    uVar1 = daif;
                    if ((uVar1 & 0x80) == 0) {
                        uVar2 = daif;
                        daif = uVar2 | 0xc0;
                    }
                    uVar2 = ttbr1_el1;
                    ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
                    InstructionSynchronizationBarrier();
                    ttbr1_el1 = uVar2 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    daif = uVar1;
                }
            }
            iVar5 = sym.esoc_set_n_pon_tries(arg1,uVar8);
            pcVar11 = iVar5;
            break;
        default:
            if (param_2 == 0xcc08) {
                ipc_log_string(_segment.ehdr,"[%s]: ESOC_REG_CMD_ENG\n","esoc_dev_ioctl");
                uVar4 = sym.esoc_clink_register_cmd_eng(arg1,puVar14 + 1);
                param_3 = segment.ehdr;
                if (uVar4 == 0) {
                    pcVar11 = NULL;
                    *(puVar14 + 0x29) = 1;
                }
                else {
                    arg1 = uVar4;
                    ipc_log_string(_segment.ehdr,"[%s]: ESOC_REG_CMD_ENG failed: %d\n","esoc_dev_ioctl",arg1);
                    pcVar11 = uVar4;
                }
            }
            else if (param_2 == 0xcc07) {
                ipc_log_string(_segment.ehdr,"[%s]: ESOC_REG_REQ_ENG\n","esoc_dev_ioctl");
                uVar4 = sym.esoc_clink_register_req_eng(arg1,puVar14 + 1);
                param_3 = segment.ehdr;
                if (uVar4 == 0) {
                    pcVar11 = NULL;
                    *(puVar14 + 5) = 1;
                }
                else {
                    arg1 = uVar4;
                    ipc_log_string(_segment.ehdr,"[%s]: ESOC_REG_REQ_ENG failed: %d\n","esoc_dev_ioctl",arg1);
                    pcVar11 = uVar4;
                }
            }
        }
    }
code_r0x08007970:
    do {
        iVar13 = sp_el0;
        if (*(iVar13 + 0x5e0) == iStack_58) {
            return pcVar11;
        }
        __stack_chk_fail();
code_r0x080079e0:
        __cfi_slowpath_diag(0x997313d0b90b9ffb,pcVar11,0x80011f0);
code_r0x08006f68:
        (*pcVar11)(&uStack_60 + 4,arg1);
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_GET_STATUS: Sending the status from esoc: %u\n","esoc_dev_ioctl",
                       uStack_60._4_4_);
        puVar12 = sp_el0;
        if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (pcVar10 = param_3, (*puVar12 >> 0x1a & 1) != 0)) {
            pcVar10 = param_3 & (param_3 << 8) >> 8;
        }
        pcVar11 = NULL;
        bVar3 = 0xfffffffffffffffb < pcVar10;
        pcVar10 = pcVar10 + 4;
        uVar1 = 0;
        if (!bVar3 || pcVar10 == NULL) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar3) {
            pcVar10 = 0xffffffffffffffff;
        }
        if (!CARRY8(pcVar10,~uVar1) && !CARRY8(pcVar10 + ~uVar1,bVar3) || pcVar10 == uVar1 + !bVar3) {
            pcVar11 = param_3;
            if ((param_3 & (param_3 << 8) >> 8 & 0xffffff8000000000) != 0) {
                pcVar11 = NULL;
            }
            if ((_bus_for_each_dev >> 0x18 & 1) == 0) {
                uVar1 = daif;
                if ((uVar1 & 0x80) == 0) {
                    uVar2 = daif;
                    daif = uVar2 | 0xc0;
                }
                uVar2 = ttbr1_el1;
                ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar12[1];
                InstructionSynchronizationBarrier();
                daif = uVar1;
            }
            *pcVar11 = uStack_60._4_4_;
            pcVar11 = NULL;
            if ((_bus_for_each_dev >> 0x18 & 1) == 0) {
                uVar1 = daif;
                if ((uVar1 & 0x80) == 0) {
                    uVar2 = daif;
                    daif = uVar2 | 0xc0;
                }
                uVar2 = ttbr1_el1;
                pcVar11 = NULL;
                ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar2 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar1;
            }
        }
    } while( true );
}


// ===== sym.esoc_bus_match.84989022ed7ef2c74ff175de61317727.cfi_jt @ 0x080056e8 (size 8) =====

ulong sym.esoc_bus_match.84989022ed7ef2c74ff175de61317727.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong uVar2;
    uint64_t uVar3;
    ulong *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(param_2 + 0xc0);
    if (0 < *(param_2 + 0xc0)) {
        puVar4 = *(param_2 + 0xb8);
        uVar2 = *(param_1 + -0x20);
        do {
            iVar1 = strcasecmp(uVar2,*puVar4);
            if (iVar1 == 0) {
                return 1;
            }
            uVar3 = uVar3 - 1;
            puVar4 = puVar4 + 2;
        } while (uVar3 != 0);
    }
    return 0;
}


// ===== sym.__typeid__ZTSFv8esoc_reqP8esoc_engE_global_addr @ 0x080056f0 (size 8) =====

uint64_t sym.__typeid__ZTSFv8esoc_reqP8esoc_engE_global_addr(uint32_t param_1,int64_t param_2)

{
    uint64_t *puVar1;
    uint64_t *puVar2;
    uint64_t *puVar3;
    uint32_t uVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    uint64_t *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar10;
    code *unaff_x21;
    ulong unaff_x22;
    ulong *puVar11;
    ulong *puVar12;
    code *pcVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    uint uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    code *pcStack_80;
    ulong *puStack_78;
    ulong uStack_70;
    code *pcStack_68;
    uint64_t uStack_60;
    uint64_t uStack_58;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    puVar11 = *(param_2 + 0x10);
    uVar4 = *(puVar11 + 0x77);
    uVar10 = uVar4;
    _raw_spin_lock(obj.esoc_udev_list_lock);
    for (pcVar13 = _obj.esoc_udev_list; pcVar13 != obj.esoc_udev_list; pcVar13 = *pcVar13) {
        if (*(*(pcVar13 + 0x10) + 0x3b8) == uVar4) {
            _raw_spin_unlock(obj.esoc_udev_list_lock);
            if (pcVar13 == 0x78) goto code_r0x080065ec;
            unaff_x21 = pcVar13 + -0x40;
            uStack_4c = param_1;
            unaff_x22 = _raw_spin_lock_irqsave(unaff_x21);
            uVar4 = __kfifo_in(pcVar13 + -0x70,&uStack_4c,4);
            uVar10 = uVar4;
            _raw_spin_unlock_irqrestore(unaff_x21,unaff_x22);
            if (uVar4 == 4) {
                uVar6 = __wake_up(pcVar13 + -0x58,1,1,0);
            }
            else {
                ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),"[%s]: Unable to queue request %d; err: %d\n",
                               "esoc_udev_handle_clink_req",param_1,uVar4);
                uVar6 = _printk(0x8003401,*puVar11);
            }
            goto code_r0x08006608;
        }
    }
    _raw_spin_unlock(obj.esoc_udev_list_lock);
code_r0x080065ec:
    uVar6 = ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),"[%s]: esoc_udev not found\n",
                           "esoc_udev_handle_clink_req");
code_r0x08006608:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return uVar6;
    }
    auVar14 = __stack_chk_fail();
    *extraout_x18 = sym.esoc_udev_handle_clink_evt;
    pcStack_88 = sym.esoc_udev_handle_clink_evt;
    iVar8 = sp_el0;
    iStack_98 = *(iVar8 + 0x5e0);
    puVar12 = *(auVar14._8_8_ + 0x10);
    iVar5 = *(puVar12 + 0x77);
    puStack_90 = &stack0xffffffffffffffc0;
    pcStack_80 = pcVar13;
    puStack_78 = puVar11;
    uStack_70 = unaff_x22;
    pcStack_68 = unaff_x21;
    uStack_60 = uVar10;
    uStack_58 = param_1;
    _raw_spin_lock(obj.esoc_udev_list_lock);
    for (pcVar13 = _obj.esoc_udev_list; pcVar13 != obj.esoc_udev_list; pcVar13 = *pcVar13) {
        if (*(*(pcVar13 + 0x10) + 0x3b8) == iVar5) {
            _raw_spin_unlock(obj.esoc_udev_list_lock);
            if (pcVar13 == 0x78) goto code_r0x08006760;
            uStack_9c = auVar14._0_4_;
            uVar7 = _raw_spin_lock_irqsave(pcVar13 + -8);
            iVar5 = __kfifo_in(pcVar13 + -0x38,&uStack_9c,4);
            _raw_spin_unlock_irqrestore(pcVar13 + -8,uVar7);
            if (iVar5 == 4) {
                uVar10 = __wake_up(pcVar13 + -0x20,1,1,0);
            }
            else {
                ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),"[%s]: Unable to queue event %d; err: %d\n",
                               "esoc_udev_handle_clink_evt",auVar14._0_8_ & 0xffffffff,iVar5);
                uVar10 = _printk(0x80020f7,*puVar12);
            }
            goto code_r0x0800677c;
        }
    }
    _raw_spin_unlock(obj.esoc_udev_list_lock);
code_r0x08006760:
    uVar10 = ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),"[%s]: esoc_udev not found\n",
                            "esoc_udev_handle_clink_evt");
code_r0x0800677c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_98) {
        return uVar10;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18_00 = sym.esoc_clink_add_device;
    if (*(iVar8 + 0x398) < 0x101) {
        puVar9 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x90);
        if (puVar9 == NULL) {
            puVar9 = 0xfffffffffffffff4;
        }
        else {
            puVar11 = iVar8 - 0x20;
            puVar1 = puVar9 + 1;
            iVar5 = __kfifo_alloc(puVar1,0x20,1,0xcc0);
            if (iVar5 == 0) {
                iVar5 = __kfifo_alloc(puVar9 + 8,0x10,1,0xcc0);
                if (iVar5 == 0) {
                    __init_waitqueue_head(puVar9 + 4,"&esoc_udev->req_wait",obj.get_free_esoc_udev.__key);
                    __init_waitqueue_head(puVar9 + 0xb,"&esoc_udev->evt_wait",obj.get_free_esoc_udev.__key);
                    *(puVar9 + 7) = 0;
                    *(puVar9 + 0xe) = 0;
                    puVar9[0x11] = puVar11;
                    _raw_spin_lock(obj.esoc_udev_list_lock);
                    puVar3 = *0x8000d50;
                    puVar2 = puVar9 + 0xf;
                    uVar10 = __list_add_valid(puVar2,*0x8000d50,obj.esoc_udev_list);
                    if ((uVar10 & 1) != 0) {
                        *0x8000d50 = puVar2;
                        puVar9[0xf] = obj.esoc_udev_list;
                        puVar9[0x10] = puVar3;
                        *puVar3 = puVar2;
                    }
                    _raw_spin_unlock(obj.esoc_udev_list_lock);
                    if (puVar9 < 0xfffffffffffff001) {
                        uVar10 = device_create(CONCAT44(*0x8000004,_segment.ehdr),iVar8,
                                               *(iVar8 + 0x398) | _segment.ehdr << 0x14,puVar11,"esoc-%d");
                        *puVar9 = uVar10;
                        if ((uVar10 == 0) || (0xfffffffffffff000 < uVar10)) {
                            _printk(0x8002e6d);
                            _raw_spin_lock(obj.esoc_udev_list_lock);
                            uVar10 = __list_del_entry_valid(puVar2);
                            if ((uVar10 & 1) != 0) {
                                uVar10 = puVar9[0xf];
                                puVar2 = puVar9[0x10];
                                *(uVar10 + 8) = puVar2;
                                *puVar2 = uVar10;
                            }
                            puVar9[0xf] = 0xdead000000000100;
                            puVar9[0x10] = 0xdead000000000122;
                            _raw_spin_unlock(obj.esoc_udev_list_lock);
                            __kfifo_free(puVar1);
                            __kfifo_free(puVar9 + 8);
                            kfree(puVar9);
                            puVar9 = 0xffffffed;
                        }
                        else {
                            puVar9 = NULL;
                        }
                    }
                    goto code_r0x080069b0;
                }
                _printk(0x800388d,*puVar11);
                __kfifo_free(puVar1);
            }
            else {
                _printk(0x8002c56,*puVar11);
            }
            kfree(puVar9);
            puVar9 = 0xffffffffffffffed;
        }
    }
    else {
        _printk(0x80026c6);
        puVar9 = 0xffffffffffffffed;
    }
code_r0x080069b0:
    return puVar9 & 0xffffffff;
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x080056f8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module.cfi_jt @ 0x08005700 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = ipc_log_context_create(10,"esoc-mdm",0);
    if (_segment.ehdr == 0) {
        _printk(0x80027f5);
    }
    iVar1 = sym.esoc_bus_init();
    if (iVar1 == 0) {
        iVar1 = __platform_driver_register(reloc.mdm_probe.3f2debd08d7acb99a985e6098affe835.cfi_jt,obj.__this_module);
    }
    else {
        _printk(0x80021c3);
    }
    return iVar1;
}


// ===== sym.esoc_dev_init.cfi_jt @ 0x08005708 (size 8) =====

uint64_t sym.esoc_dev_init.cfi_jt(void)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = __class_create(obj.__this_module,"esoc-dev",obj.esoc_udev_list_lock);
    if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
        _printk(0x8002e8d);
        uVar2 = _segment.ehdr & 0xffffffff;
    }
    else {
        iVar1 = __register_chrdev(0,0,0x100,"esoc",obj.esoc_dev_fops);
        _segment.ehdr = CONCAT44(*0x8000004,iVar1);
        if (iVar1 < 0) {
            _printk(0x8003423);
            class_destroy(_segment.ehdr);
        }
        else {
            bus_for_each_dev(obj.esoc_bus_type,0,0,sym.esoc_clink_add_device.cfi_jt);
        }
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.__typeid__ZTSFv11esoc_notifyP10esoc_clinkE_global_addr @ 0x08005710 (size 8) =====

void sym.__typeid__ZTSFv11esoc_notifyP10esoc_clinkE_global_addr(uint param_1,int64_t param_2)

{
    int iVar1;
    ulong uVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_2 + 1000);
    ipc_log_string(_segment.ehdr,"[%s]: Notification: %d\n","mdm_notify",param_1);
    switch(param_1) {
    case 1:
        gpio_to_desc(*(iVar4 + 0x2c));
        iVar1 = gpiod_get_raw_value();
        if (iVar1 == 0) {
            ipc_log_string(_segment.ehdr,"[%s]: ESOC_IMG_XFER_DONE: Begin timeout of %lu ms for modem_status\n",
                           "mdm_notify",120000);
            queue_delayed_work_on(0x20,___stack_chk_fail,iVar4 + 0x48,30000);
        }
        break;
    case 2:
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_BOOT_DONE: Sending the notification: ESOC_RUN_STATE\n","mdm_notify");
        iVar4 = 1;
        goto code_r0x0800a1c8;
    case 3:
        pcVar3 = "[%s]: ESOC_BOOT_FAIL: Send notification: ESOC_INVALID_STATE\n";
        goto code_r0x0800a07c;
    case 4:
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_IMG_XFER_RETRY: Resetting the device\n","mdm_notify");
        *(iVar4 + 0x1a8) = 1;
        pcVar5 = *(*(iVar4 + 0x200) + 8);
        if (pcVar5 != NULL) {
            if (2 < (pcVar5 + -0x8005850 >> 3 | pcVar5 << 0x3d)) {
                __cfi_slowpath_diag(0xc03e31212b9a8ab6,pcVar5,0x8001270);
            }
            (*pcVar5)(iVar4,0);
        }
        break;
    case 5:
        pcVar3 = "[%s]: ESOC_IMG_XFER_FAIL: Send notification: ESOC_INVALID_STATE\n";
code_r0x0800a07c:
        ipc_log_string(_segment.ehdr,pcVar3,"mdm_notify");
        iVar4 = 9;
        goto code_r0x0800a1c8;
    case 7:
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_DEBUG_DONE: Ramdumps collection done\n","mdm_notify");
        *(iVar4 + 0x1ac) = 0;
        if ((*(iVar4 + 0x160) != 0) && (iVar1 = pinctrl_select_state(*(iVar4 + 0x158)), iVar1 != 0)) {
            _dev_err(*(iVar4 + 0x150),"switching gpio config failed\n");
        }
        complete(iVar4 + 0x130);
        break;
    case 8:
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_DEBUG_FAIL: Ramdumps collection failed\n","mdm_notify");
        *(iVar4 + 0x1ac) = 1;
        complete(iVar4 + 0x130);
        break;
    case 9:
        sym.mdm_disable_irqs(iVar4);
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_PRIMARY_CRASH: Setting AP2MDM_ERRFATAL = 1\n","mdm_notify");
        uVar2 = gpio_to_desc(*(iVar4 + 0x14));
        gpiod_set_raw_value(uVar2,1);
        if (*(param_2 + 0x4a1) == '\0') {
            sym.mdm_wait_for_status_low(iVar4,1);
        }
        break;
    case 10:
        sym.mdm_disable_irqs(iVar4);
        uVar2 = _segment.ehdr;
        *(iVar4 + 0x1a4) = 0;
        *(iVar4 + 0x1d8) = 0;
        ipc_log_string(uVar2,"[%s]: ESOC_PRIMARY_REBOOT: Powering down the modem\n","mdm_notify");
        pcVar5 = *(*(iVar4 + 0x200) + 0x10);
        if (pcVar5 != NULL) {
            if (6 < (pcVar5 + -0x8005818 >> 3 | pcVar5 << 0x3d)) {
                __cfi_slowpath_diag(0x5325a6c16b375fe3,pcVar5,0x8001310);
            }
            (*pcVar5)(iVar4);
        }
        break;
    case 0xb:
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_PON_RETRY: Send notification: ESOC_RETRY_PON_EVT\n","mdm_notify");
        iVar4 = 10;
code_r0x0800a1c8:
        sym.esoc_clink_evt_notify(iVar4,param_2);
    }
    return;
}


// ===== sym.notify_esoc_clients.cfi_jt @ 0x08005718 (size 8) =====

ulong sym.notify_esoc_clients.cfi_jt(int64_t param_1,ulong param_2)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uVar2 = _raw_spin_lock_irqsave(obj.notify_lock);
    uStack_3c = *(param_1 + 0x3b8);
    atomic_notifier_call_chain(obj.get_free_esoc_udev.__key,param_2,&uStack_3c);
    uVar2 = _raw_spin_unlock_irqrestore(obj.notify_lock,uVar2);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    auVar5 = __stack_chk_fail();
    uVar3 = auVar5._8_8_;
    uVar4 = auVar5._0_8_;
    uVar2 = 0xffffffea;
    if ((((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) && (uVar2 = 0xffffffea, uVar3 != 0)) &&
       (uVar3 < 0xfffffffffffff001)) {
        uVar4 = *(uVar4 + 0x18);
        uVar2 = 0xffffffea;
        if ((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) {
            if ((*(uVar3 + 0x10) != 0) || (*(uVar4 + 0x4a8) != 0)) {
                return 0xffffffea;
            }
            uVar2 = 0;
            *(uVar4 + 0x4a8) = uVar3;
        }
    }
    return uVar2;
}


// ===== sym.esoc_bus_probe.84989022ed7ef2c74ff175de61317727.cfi_jt @ 0x08005720 (size 8) =====

int sym.esoc_bus_probe.84989022ed7ef2c74ff175de61317727.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x88);
    pcVar3 = *(iVar2 + 200);
    if (1 < (pcVar3 + -0x8005798 >> 3 | pcVar3 << 0x3d)) {
        __cfi_slowpath_diag(0xf577ffc9c1a0eb7,pcVar3,0x8001170);
    }
    iVar1 = (*pcVar3)(param_1 + -0x20,iVar2);
    if (iVar1 != 0) {
        _printk(0x800197d,*(param_1 + -0x20));
    }
    return iVar1;
}


// ===== sym.esoc_bus_remove.84989022ed7ef2c74ff175de61317727.cfi_jt @ 0x08005728 (size 8) =====

int sym.esoc_bus_remove.84989022ed7ef2c74ff175de61317727.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x88);
    pcVar3 = *(iVar2 + 0xd0);
    if (1 < (pcVar3 + -0x8005798 >> 3 | pcVar3 << 0x3d)) {
        __cfi_slowpath_diag(0xf577ffc9c1a0eb7,pcVar3,0x8001190);
    }
    iVar1 = (*pcVar3)(param_1 + -0x20,iVar2);
    if (iVar1 != 0) {
        _printk(0x80032d9,*(param_1 + -0x20));
    }
    return iVar1;
}


// ===== sym.__typeid__ZTSFv8esoc_evtP8esoc_engE_global_addr @ 0x08005730 (size 8) =====

void sym.__typeid__ZTSFv8esoc_evtP8esoc_engE_global_addr(int param_1,int64_t param_2)

{
    char *pcVar1;
    uint uVar2;
    ulong *in_x18;
    uint32_t *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (10 < param_1 - 1U) {
        return;
    }
    puVar3 = param_2 + -8;
    pcVar1 = "[%s]: evt_state: ESOC_UNEXPECTED_RESET\n";
    switch(param_1) {
    case 1:
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_RUN_STATE: Calling complete with state: PON_SUCCESS\n",
                       "mdm_handle_clink_evt");
        *(param_2 + 0x80) = 1;
        *puVar3 = 9;
        goto code_r0x0800c414;
    case 3:
        pcVar1 = "[%s]: evt_state: ESOC_ERR_FATAL\n";
    case 2:
        ipc_log_string(_segment.ehdr,pcVar1,"mdm_handle_clink_evt");
        if (*puVar3 < 7) {
            ipc_log_string(_segment.ehdr,"[%s]: Modem in crash state or not booted. Ignoring.\n",
                           "mdm_handle_clink_evt");
        }
        else {
            ipc_log_string(_segment.ehdr,"[%s]: Setting crash flag\n","mdm_handle_clink_evt");
            *puVar3 = 6;
            queue_work_on(0x20,*(param_2 + 0x88),param_2 + 0x90);
        }
        break;
    case 5:
        ipc_log_string(_segment.ehdr,"[%s]: evt_state: ESOC_REQ_ENG_ON; Registered a req engine\n",
                       "mdm_handle_clink_evt");
        param_2 = param_2 + 0x58;
        goto code_r0x0800c41c;
    case 9:
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_INVALID_STATE: Calling complete with state: PON_FAIL\n",
                       "mdm_handle_clink_evt");
        uVar2 = 3;
        goto code_r0x0800c40c;
    case 10:
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_RETRY_PON_EVT: Calling complete with state: PON_RETRY\n",
                       "mdm_handle_clink_evt");
        uVar2 = 2;
code_r0x0800c40c:
        *(param_2 + 0x80) = uVar2;
code_r0x0800c414:
        complete(param_2 + 0x18);
        param_2 = param_2 + 0x38;
code_r0x0800c41c:
        complete(param_2);
        break;
    case 0xb:
        if (*puVar3 == 1) {
            ipc_log_string(_segment.ehdr,"[%s]: ESOC_BOOT_STATE: Observed status high from modem.\n",
                           "mdm_handle_clink_evt");
            *puVar3 = 8;
        }
    }
    return;
}


// ===== sym.esoc_udev_handle_clink_evt.cfi_jt @ 0x08005738 (size 8) =====

uint64_t sym.esoc_udev_handle_clink_evt.cfi_jt(uint param_1,int64_t param_2)

{
    uint64_t *puVar1;
    uint64_t *puVar2;
    uint64_t *puVar3;
    int iVar4;
    uint64_t uVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar9;
    code *pcVar10;
    ulong unaff_x30;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    puVar9 = *(param_2 + 0x10);
    iVar4 = *(puVar9 + 0x77);
    _raw_spin_lock(obj.esoc_udev_list_lock);
    for (pcVar10 = _obj.esoc_udev_list; pcVar10 != obj.esoc_udev_list; pcVar10 = *pcVar10) {
        if (*(*(pcVar10 + 0x10) + 0x3b8) == iVar4) {
            _raw_spin_unlock(obj.esoc_udev_list_lock);
            if (pcVar10 == 0x78) goto code_r0x08006760;
            uStack_4c = param_1;
            uVar6 = _raw_spin_lock_irqsave(pcVar10 + -8);
            iVar4 = __kfifo_in(pcVar10 + -0x38,&uStack_4c,4);
            _raw_spin_unlock_irqrestore(pcVar10 + -8,uVar6);
            if (iVar4 == 4) {
                uVar5 = __wake_up(pcVar10 + -0x20,1,1,0);
            }
            else {
                ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),"[%s]: Unable to queue event %d; err: %d\n",
                               "esoc_udev_handle_clink_evt",param_1,iVar4);
                uVar5 = _printk(0x80020f7,*puVar9);
            }
            goto code_r0x0800677c;
        }
    }
    _raw_spin_unlock(obj.esoc_udev_list_lock);
code_r0x08006760:
    uVar5 = ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),"[%s]: esoc_udev not found\n",
                           "esoc_udev_handle_clink_evt");
code_r0x0800677c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return uVar5;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.esoc_clink_add_device;
    if (*(iVar7 + 0x398) < 0x101) {
        puVar8 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x90);
        if (puVar8 == NULL) {
            puVar8 = 0xfffffffffffffff4;
        }
        else {
            puVar9 = iVar7 - 0x20;
            puVar1 = puVar8 + 1;
            iVar4 = __kfifo_alloc(puVar1,0x20,1,0xcc0);
            if (iVar4 == 0) {
                iVar4 = __kfifo_alloc(puVar8 + 8,0x10,1,0xcc0);
                if (iVar4 == 0) {
                    __init_waitqueue_head(puVar8 + 4,"&esoc_udev->req_wait",obj.get_free_esoc_udev.__key);
                    __init_waitqueue_head(puVar8 + 0xb,"&esoc_udev->evt_wait",obj.get_free_esoc_udev.__key);
                    *(puVar8 + 7) = 0;
                    *(puVar8 + 0xe) = 0;
                    puVar8[0x11] = puVar9;
                    _raw_spin_lock(obj.esoc_udev_list_lock);
                    puVar3 = *0x8000d50;
                    puVar2 = puVar8 + 0xf;
                    uVar5 = __list_add_valid(puVar2,*0x8000d50,obj.esoc_udev_list);
                    if ((uVar5 & 1) != 0) {
                        *0x8000d50 = puVar2;
                        puVar8[0xf] = obj.esoc_udev_list;
                        puVar8[0x10] = puVar3;
                        *puVar3 = puVar2;
                    }
                    _raw_spin_unlock(obj.esoc_udev_list_lock);
                    if (puVar8 < 0xfffffffffffff001) {
                        uVar5 = device_create(CONCAT44(*0x8000004,_segment.ehdr),iVar7,
                                              *(iVar7 + 0x398) | _segment.ehdr << 0x14,puVar9,"esoc-%d");
                        *puVar8 = uVar5;
                        if ((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) {
                            _printk(0x8002e6d);
                            _raw_spin_lock(obj.esoc_udev_list_lock);
                            uVar5 = __list_del_entry_valid(puVar2);
                            if ((uVar5 & 1) != 0) {
                                uVar5 = puVar8[0xf];
                                puVar2 = puVar8[0x10];
                                *(uVar5 + 8) = puVar2;
                                *puVar2 = uVar5;
                            }
                            puVar8[0xf] = 0xdead000000000100;
                            puVar8[0x10] = 0xdead000000000122;
                            _raw_spin_unlock(obj.esoc_udev_list_lock);
                            __kfifo_free(puVar1);
                            __kfifo_free(puVar8 + 8);
                            kfree(puVar8);
                            puVar8 = 0xffffffed;
                        }
                        else {
                            puVar8 = NULL;
                        }
                    }
                    goto code_r0x080069b0;
                }
                _printk(0x800388d,*puVar9);
                __kfifo_free(puVar1);
            }
            else {
                _printk(0x8002c56,*puVar9);
            }
            kfree(puVar8);
            puVar8 = 0xffffffffffffffed;
        }
    }
    else {
        _printk(0x80026c6);
        puVar8 = 0xffffffffffffffed;
    }
code_r0x080069b0:
    return puVar8 & 0xffffffff;
}


// ===== sym.esoc_clink_match_id.84989022ed7ef2c74ff175de61317727.cfi_jt @ 0x08005740 (size 8) =====

uint32_t sym.esoc_clink_match_id.84989022ed7ef2c74ff175de61317727.cfi_jt(int64_t param_1,int *param_2)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x398) == *param_2) {
        uVar1 = try_module_get(*(param_1 + 0x3a0));
        uVar1 = uVar1 & 1;
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.esoc_clink_match_node.84989022ed7ef2c74ff175de61317727.cfi_jt @ 0x08005748 (size 8) =====

uint32_t sym.esoc_clink_match_node.84989022ed7ef2c74ff175de61317727.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x478) == param_2) {
        uVar1 = try_module_get(*(param_1 + 0x3a0));
        uVar1 = uVar1 & 1;
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.esoc_link_show.84989022ed7ef2c74ff175de61317727.cfi_jt @ 0x08005750 (size 8) =====

int64_t sym.esoc_link_show.84989022ed7ef2c74ff175de61317727.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x14,0x8001c4e,*(param_1 + -0x18));
    return iVar1;
}


// ===== sym.esoc_link_info_show.84989022ed7ef2c74ff175de61317727.cfi_jt @ 0x08005758 (size 8) =====

int64_t sym.esoc_link_info_show.84989022ed7ef2c74ff175de61317727.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x14,0x8001c4e,*(param_1 + -0x10));
    return iVar1;
}


// ===== sym.esoc_name_show.84989022ed7ef2c74ff175de61317727.cfi_jt @ 0x08005760 (size 8) =====

int64_t sym.esoc_name_show.84989022ed7ef2c74ff175de61317727.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x14,0x8001c4e,*(param_1 + -0x20));
    return iVar1;
}


// ===== sym.mdm_rproc_elf_load_segments.1170f134d19d2c286ae3a2a8519f89df.cfi_jt @ 0x08005768 (size 8) =====

ulong sym.mdm_rproc_elf_load_segments.1170f134d19d2c286ae3a2a8519f89df.cfi_jt(void)

{
    return 0;
}


// ===== sym.devm_esoc_desc_release.73c7e5d36e8a3d84b5ab2d61716898c8.cfi_jt @ 0x08005770 (size 8) =====

void sym.devm_esoc_desc_release.73c7e5d36e8a3d84b5ab2d61716898c8.cfi_jt(ulong param_1,ulong *param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(*param_2);
    kfree(param_2[1]);
    module_put(*(param_2[3] + 0x3c0));
    return;
}


// ===== sym.esoc_register_client_notifier.cfi_jt @ 0x08005778 (size 8) =====

void sym.esoc_register_client_notifier.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    atomic_notifier_chain_register(obj.get_free_esoc_udev.__key,param_1);
    return;
}


// ===== sym.esoc_dev_release.81da45b6a825930f28ec90b51f6404f7.cfi_jt @ 0x08005780 (size 8) =====

ulong sym.esoc_dev_release.81da45b6a825930f28ec90b51f6404f7.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    int64_t *piVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(param_2 + 0xd8);
    iVar2 = *piVar1;
    if (piVar1[5] == '\0') {
        ipc_log_string(_segment.ehdr,"[%s]: No req_eng to unregister\n","esoc_dev_release");
    }
    else {
        ipc_log_string(_segment.ehdr,"[%s]: Unregistering req_eng\n","esoc_dev_release");
        *(iVar2 + 0x3d0) = 0;
        sym.esoc_clink_evt_notify(6,iVar2);
    }
    if (*(piVar1 + 0x29) == '\0') {
        ipc_log_string(_segment.ehdr,"[%s]: No cmd_eng to unregister\n","esoc_dev_release");
    }
    else {
        ipc_log_string(_segment.ehdr,"[%s]: Unregistering cmd_eng\n","esoc_dev_release");
        *(iVar2 + 0x3d8) = 0;
        sym.esoc_clink_evt_notify(8,iVar2);
    }
    *(piVar1 + 5) = 0;
    module_put(*(iVar2 + 0x3c0));
    kfree(piVar1);
    iVar2 = sp_el0;
    ipc_log_string(_segment.ehdr,"[%s]: %s Unregistered with esoc\n","esoc_dev_release",iVar2 + 0x7a8);
    return 0;
}


// ===== sym.esoc_dev_open.81da45b6a825930f28ec90b51f6404f7.cfi_jt @ 0x08005788 (size 8) =====

ulong sym.esoc_dev_open.81da45b6a825930f28ec90b51f6404f7.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong uVar5;
    ulong *in_x18;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(param_1 + 0x4c);
    _raw_spin_lock(obj.esoc_udev_list_lock);
    if (_obj.esoc_udev_list != obj.esoc_udev_list) {
        pcVar6 = _obj.esoc_udev_list;
        do {
            if (*(*(pcVar6 + 0x10) + 0x3b8) == (uVar2 & 0xfffff)) {
                _raw_spin_unlock(obj.esoc_udev_list_lock);
                if (pcVar6 + -0x78 == NULL) goto code_r0x08007df8;
                iVar3 = sym.get_esoc_clink(*(*(pcVar6 + 0x10) + 0x3b8));
                if (iVar3 != 0) {
                    iVar1 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar1 = 0x30;
                    }
                    piVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x30);
                    if (piVar4 == NULL) {
                        module_put(*(iVar3 + 0x3c0));
                        return 0xfffffff4;
                    }
                    piVar4[4] = pcVar6 + -0x78;
                    *piVar4 = iVar3;
                    piVar4[1] = sym.__typeid__ZTSFv8esoc_reqP8esoc_engE_global_addr;
                    uVar5 = _segment.ehdr;
                    iVar3 = sp_el0;
                    piVar4[2] = sym.esoc_udev_handle_clink_evt.cfi_jt;
                    *(param_2 + 0xd8) = piVar4;
                    ipc_log_string(uVar5,"[%s]: %s successfully attached to esoc driver\n","esoc_dev_open",
                                   iVar3 + 0x7a8);
                    return 0;
                }
                ipc_log_string(_segment.ehdr,"[%s]: failed to get clink\n","esoc_dev_open");
                uVar5 = 0x8002857;
                goto code_r0x08007e44;
            }
            pcVar6 = *pcVar6;
        } while (pcVar6 != obj.esoc_udev_list);
    }
    _raw_spin_unlock(obj.esoc_udev_list_lock);
code_r0x08007df8:
    ipc_log_string(_segment.ehdr,"[%s]: failed to get udev\n","esoc_dev_open");
    uVar5 = 0x8003dd8;
code_r0x08007e44:
    _printk(uVar5);
    return 0xfffffff4;
}


// ===== sym.esoc_clink_add_device.cfi_jt @ 0x08005790 (size 8) =====

uint64_t sym.esoc_clink_add_device.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    uint64_t *puVar2;
    uint64_t *puVar3;
    int iVar4;
    uint64_t *puVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x398) < 0x101) {
        puVar5 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x90);
        if (puVar5 == NULL) {
            puVar5 = 0xfffffffffffffff4;
        }
        else {
            puVar7 = param_1 - 0x20;
            puVar1 = puVar5 + 1;
            iVar4 = __kfifo_alloc(puVar1,0x20,1,0xcc0);
            if (iVar4 == 0) {
                iVar4 = __kfifo_alloc(puVar5 + 8,0x10,1,0xcc0);
                if (iVar4 == 0) {
                    __init_waitqueue_head(puVar5 + 4,"&esoc_udev->req_wait",obj.get_free_esoc_udev.__key);
                    __init_waitqueue_head(puVar5 + 0xb,"&esoc_udev->evt_wait",obj.get_free_esoc_udev.__key);
                    *(puVar5 + 7) = 0;
                    *(puVar5 + 0xe) = 0;
                    puVar5[0x11] = puVar7;
                    _raw_spin_lock(obj.esoc_udev_list_lock);
                    puVar3 = *0x8000d50;
                    puVar2 = puVar5 + 0xf;
                    uVar6 = __list_add_valid(puVar2,*0x8000d50,obj.esoc_udev_list);
                    if ((uVar6 & 1) != 0) {
                        *0x8000d50 = puVar2;
                        puVar5[0xf] = obj.esoc_udev_list;
                        puVar5[0x10] = puVar3;
                        *puVar3 = puVar2;
                    }
                    _raw_spin_unlock(obj.esoc_udev_list_lock);
                    if (puVar5 < 0xfffffffffffff001) {
                        uVar6 = device_create(CONCAT44(*0x8000004,_segment.ehdr),param_1,
                                              *(param_1 + 0x398) | _segment.ehdr << 0x14,puVar7,"esoc-%d");
                        *puVar5 = uVar6;
                        if ((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) {
                            _printk(0x8002e6d);
                            _raw_spin_lock(obj.esoc_udev_list_lock);
                            uVar6 = __list_del_entry_valid(puVar2);
                            if ((uVar6 & 1) != 0) {
                                uVar6 = puVar5[0xf];
                                puVar2 = puVar5[0x10];
                                *(uVar6 + 8) = puVar2;
                                *puVar2 = uVar6;
                            }
                            puVar5[0xf] = 0xdead000000000100;
                            puVar5[0x10] = 0xdead000000000122;
                            _raw_spin_unlock(obj.esoc_udev_list_lock);
                            __kfifo_free(puVar1);
                            __kfifo_free(puVar5 + 8);
                            kfree(puVar5);
                            puVar5 = 0xffffffed;
                        }
                        else {
                            puVar5 = NULL;
                        }
                    }
                    goto code_r0x080069b0;
                }
                _printk(0x800388d,*puVar7);
                __kfifo_free(puVar1);
            }
            else {
                _printk(0x8002c56,*puVar7);
            }
            kfree(puVar5);
            puVar5 = 0xffffffffffffffed;
        }
    }
    else {
        _printk(0x80026c6);
        puVar5 = 0xffffffffffffffed;
    }
code_r0x080069b0:
    return puVar5 & 0xffffffff;
}


// ===== sym.__typeid__ZTSFiP10esoc_clinkP8esoc_drvE_global_addr @ 0x08005798 (size 8) =====

ulong sym.__typeid__ZTSFiP10esoc_clinkP8esoc_drvE_global_addr(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0xb8);
    *(param_1 + 0xb8) = 0;
    *(param_1 + 0x3d8) = 0;
    sym.esoc_clink_evt_notify(8,param_1);
    sym.esoc_clink_unregister_rproc(param_1);
    if (*(iVar2 + 0x90) != 0) {
        destroy_workqueue();
    }
    iVar1 = unregister_reboot_notifier(iVar2 + 200);
    if (iVar1 != 0) {
        _dev_err(param_1 + 0x20,"unregister reboot notifier failed\n");
    }
    return 0;
}


// ===== sym.esoc_ssr_probe.cfi_jt @ 0x080057a0 (size 8) =====

uint64_t sym.esoc_ssr_probe.cfi_jt(int64_t param_1)

{
    int64_t arg1;
    uint32_t uVar1;
    int iVar2;
    ulong *puVar3;
    ulong *puVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = param_1 + 0x20;
    puVar3 = sym.esoc_device_get_match_data(arg1);
    if (puVar3 < 0xfffffffffffff001) {
        *(param_1 + 0x3f8) = *puVar3;
        puVar4 = devm_kmalloc(arg1,0x118,0xdc0);
        puVar3 = puVar4;
        if ((puVar4 != NULL) && (puVar4 < 0xfffffffffffff001)) {
            puVar4[2] = sym.__typeid__ZTSFv8esoc_evtP8esoc_engE_global_addr;
            uVar1 = sym.esoc_clink_register_cmd_eng(param_1,puVar4 + 1);
            if (uVar1 == 0) {
                __mutex_init(puVar4 + 0x1c,"&mdm_drv->poff_lock",obj.esoc_ssr_probe.__key);
                *(param_1 + 0x420) = sym.mdm_rproc_shutdown.1170f134d19d2c286ae3a2a8519f89df.cfi_jt;
                *(param_1 + 0x418) = sym.mdm_rproc_powerup.1170f134d19d2c286ae3a2a8519f89df.cfi_jt;
                *(param_1 + 0x480) = sym.mdm_rproc_panic.1170f134d19d2c286ae3a2a8519f89df.cfi_jt;
                *(param_1 + 0x468) = sym.mdm_rproc_elf_load_segments.1170f134d19d2c286ae3a2a8519f89df.cfi_jt;
                uVar5 = sym.esoc_clink_register_rproc(param_1);
                puVar3 = uVar5 & 0xffffffff;
                if (uVar5 == 0) {
                    iVar6 = alloc_workqueue("mdm_drv_queue",0,0);
                    puVar4[0x12] = iVar6;
                    if (iVar6 != 0) {
                        *(param_1 + 0xb8) = puVar4;
                        *(puVar4 + 4) = 0;
                        __init_swait_queue_head(puVar4 + 5,"&x->wait",obj.init_completion.__key);
                        *(puVar4 + 8) = 0;
                        __init_swait_queue_head(puVar4 + 9,"&x->wait",obj.init_completion.__key);
                        *(puVar4 + 0xc) = 0;
                        __init_swait_queue_head(puVar4 + 0xd,"&x->wait",obj.init_completion.__key);
                        puVar4[0x13] = 0xfffffffe0;
                        puVar4[0x14] = puVar4 + 0x14;
                        puVar4[0x15] = puVar4 + 0x14;
                        puVar4[0x10] = param_1;
                        puVar4[0x16] = sym.mdm_ssr_fn.1170f134d19d2c286ae3a2a8519f89df.cfi_jt;
                        *puVar4 = 1;
                        *(puVar4 + 0x11) = 0;
                        *(puVar4 + 0x22) = 3;
                        *(puVar4 + 0x114) = 3;
                        puVar4[0x19] = sym.esoc_msm_restart_handler.1170f134d19d2c286ae3a2a8519f89df.cfi_jt;
                        iVar2 = register_reboot_notifier(puVar4 + 0x19);
                        puVar3 = NULL;
                        if (iVar2 != 0) {
                            _dev_err(arg1,"register for reboot failed\n");
                            puVar3 = NULL;
                        }
                        goto code_r0x0800c214;
                    }
                    _dev_err(param_1 + 0x20,"could not create mdm_queue\n");
                    sym.esoc_clink_unregister_rproc(param_1);
                }
                *(param_1 + 0x3d8) = 0;
                sym.esoc_clink_evt_notify(8,param_1);
            }
            else {
                puVar3 = uVar1;
                _dev_err(arg1,"failed to register cmd engine\n");
            }
        }
    }
    else {
        _dev_err(arg1,"esoc match data failed: %d\n",puVar3);
    }
code_r0x0800c214:
    return puVar3 & 0xffffffff;
}


// ===== sym.sdx50m_cold_reset.efec15fb3fafe4dd582f51ad8b2db369.cfi_jt @ 0x080057a8 (size 8) =====

void sym.sdx50m_cold_reset.efec15fb3fafe4dd582f51ad8b2db369.cfi_jt(int64_t param_1)

{
    int iVar1;
    bool bVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"[%s]: Setting AP2MDM_SOFT_RESET = %d\n","sdx50m_cold_reset",*(param_1 + 0x184) != 0
                  );
    iVar1 = *(param_1 + 0x184);
    uVar3 = gpio_to_desc(*(param_1 + 8));
    gpiod_direction_output_raw(uVar3,iVar1 != 0);
    iVar4 = -600;
    do {
        __const_udelay(0x418958);
        bVar2 = iVar4 != -1;
        iVar4 = iVar4 + 1;
    } while (bVar2);
    ipc_log_string(_segment.ehdr,"[%s]: Setting AP2MDM_SOFT_RESET = %d\n","sdx50m_cold_reset",*(param_1 + 0x184) != 0
                  );
    iVar1 = *(param_1 + 0x184);
    uVar3 = gpio_to_desc(*(param_1 + 8));
    gpiod_direction_output_raw(uVar3,iVar1 == 0);
    return;
}


// ===== sym.mdm9x55_cold_reset.efec15fb3fafe4dd582f51ad8b2db369.cfi_jt @ 0x080057b0 (size 8) =====

void sym.mdm9x55_cold_reset.efec15fb3fafe4dd582f51ad8b2db369.cfi_jt(int64_t param_1)

{
    int iVar1;
    bool bVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x184);
    uVar3 = gpio_to_desc(*(param_1 + 8));
    gpiod_direction_output_raw(uVar3,iVar1 != 0);
    iVar4 = -0x14e;
    do {
        __const_udelay(0x418958);
        bVar2 = iVar4 != -1;
        iVar4 = iVar4 + 1;
    } while (bVar2);
    iVar1 = *(param_1 + 0x184);
    uVar3 = gpio_to_desc(*(param_1 + 8));
    gpiod_direction_output_raw(uVar3,iVar1 == 0);
    return;
}


// ===== sym.mdm_rproc_panic.1170f134d19d2c286ae3a2a8519f89df.cfi_jt @ 0x080057b8 (size 8) =====

ulong sym.mdm_rproc_panic.1170f134d19d2c286ae3a2a8519f89df.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    iVar3 = *(iVar2 + 0x3a8);
    ipc_log_string(_segment.ehdr,"[%s]: MDM crashed notification from SSR\n","mdm_rproc_panic");
    pcVar1 = *(iVar3 + 0x18);
    if (pcVar1 != sym.__typeid__ZTSFv11esoc_notifyP10esoc_clinkE_global_addr) {
        __cfi_slowpath_diag(0x190ba2fe57e749ba,pcVar1,0x80014f0);
    }
    (*pcVar1)(9,iVar2 + -0x20);
    return 0;
}


// ===== sym.mdm_rproc_shutdown.1170f134d19d2c286ae3a2a8519f89df.cfi_jt @ 0x080057c0 (size 8) =====

int sym.mdm_rproc_shutdown.1170f134d19d2c286ae3a2a8519f89df.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    uint32_t uVar5;
    int64_t arg2;
    int64_t iVar6;
    int64_t iVar7;
    code *pcVar8;
    uint32_t *puVar9;
    ulong *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_1 + 0x98);
    puVar9 = *(iVar6 + 0x98);
    arg2 = iVar6 + -0x20;
    puVar10 = *(iVar6 + 0x3a8);
    iVar7 = *(*(puVar9 + 0x20) + 1000);
    ipc_log_string(_segment.ehdr,"[%s]: Shutdown request from SSR\n","mdm_rproc_shutdown");
    mutex_lock(puVar9 + 0x38);
    if ((*puVar9 | 2) == 6) {
        ipc_log_string(_segment.ehdr,"[%s]: Shutdown in crash mode\n","mdm_rproc_shutdown");
        sym.mdm_wait_for_status_low(iVar7,0);
        sym.esoc_clink_queue_request(5,arg2);
        ipc_log_string(_segment.ehdr,"[%s]: Calling power_off hooks with flags: 0x%x\n","esoc_client_link_power_off",
                       1);
        iVar7 = *(iVar6 + 0x488);
        if ((iVar7 != 0) && (pcVar8 = *(iVar7 + 0x20), pcVar8 != NULL)) {
            __cfi_slowpath_diag(0xddcd4a035804a8bc,pcVar8,0x8001430);
            (*pcVar8)(*(iVar7 + 8),1);
        }
        ipc_log_string(_segment.ehdr,"[%s]: Executing the ESOC_PREPARE_DEBUG command\n","mdm_rproc_shutdown");
        pcVar8 = *puVar10;
        if (pcVar8 != sym.__typeid__ZTSFi8esoc_cmdP10esoc_clinkE_global_addr) {
            __cfi_slowpath_diag(0xa0f7794370a928b7,pcVar8,0x80013b0);
        }
        uVar5 = 5;
        iVar1 = (*pcVar8)(5,arg2);
        if (iVar1 == 0) {
code_r0x0800c998:
            *puVar9 = uVar5;
            pcVar4 = "[%s]: Shutdown completed\n";
code_r0x0800c9a8:
            ipc_log_string(_segment.ehdr,pcVar4,"mdm_rproc_shutdown");
            iVar1 = 0;
            goto code_r0x0800c9b8;
        }
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_PREPARE_DEBUG command failed\n","mdm_rproc_shutdown");
        pcVar4 = "failed to enter debug\n";
    }
    else {
        ipc_log_string(_segment.ehdr,"[%s]: Graceful shutdown mode\n","mdm_rproc_shutdown");
        if (*puVar9 == 1) {
            pcVar4 = "[%s]: mdm already powered-off\n";
            goto code_r0x0800c9a8;
        }
        uVar2 = qcom_sysmon_shutdown_acked(*(iVar6 + 0x470));
        if ((uVar2 & 1) == 0) {
            ipc_log_string(_segment.ehdr,"[%s]: Executing the ESOC_FORCE_PWR_OFF command\n","mdm_rproc_shutdown");
            pcVar8 = *puVar10;
            if (pcVar8 != sym.__typeid__ZTSFi8esoc_cmdP10esoc_clinkE_global_addr) {
                __cfi_slowpath_diag(0xa0f7794370a928b7,pcVar8,0x80013d0);
            }
            uVar3 = 3;
        }
        else {
            ipc_log_string(_segment.ehdr,"[%s]: Executing the ESOC_PWR_OFF command\n","mdm_rproc_shutdown");
            pcVar8 = *puVar10;
            if (pcVar8 != sym.__typeid__ZTSFi8esoc_cmdP10esoc_clinkE_global_addr) {
                __cfi_slowpath_diag(0xa0f7794370a928b7,pcVar8,0x80013f0);
            }
            uVar3 = 2;
        }
        iVar1 = (*pcVar8)(uVar3,arg2);
        if (iVar1 == 0) {
            ipc_log_string(_segment.ehdr,"[%s]: Calling power_off hooks with flags: 0x%x\n",
                           "esoc_client_link_power_off",2);
            iVar6 = *(iVar6 + 0x488);
            if ((iVar6 != 0) && (pcVar8 = *(iVar6 + 0x20), pcVar8 != NULL)) {
                __cfi_slowpath_diag(0xddcd4a035804a8bc,pcVar8,0x8001430);
                (*pcVar8)(*(iVar6 + 8),2);
            }
            pcVar8 = *puVar10;
            if (pcVar8 != sym.__typeid__ZTSFi8esoc_cmdP10esoc_clinkE_global_addr) {
                __cfi_slowpath_diag(0xa0f7794370a928b7,pcVar8,0x8001410);
            }
            (*pcVar8)(3,arg2);
            uVar5 = 1;
            goto code_r0x0800c998;
        }
        ipc_log_string(_segment.ehdr,"[%s]: Executing the ESOC_PWR_OFF command failed\n","mdm_rproc_shutdown");
        pcVar4 = "failed to exe power off\n";
    }
    _dev_err(iVar6,pcVar4);
code_r0x0800c9b8:
    mutex_unlock(puVar9 + 0x38);
    return iVar1;
}


// ===== sym.mdm_rproc_powerup.1170f134d19d2c286ae3a2a8519f89df.cfi_jt @ 0x080057c8 (size 8) =====

int sym.mdm_rproc_powerup.1170f134d19d2c286ae3a2a8519f89df.cfi_jt(int64_t param_1)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    ulong uVar4;
    char *pcVar5;
    ulong *puVar6;
    ulong *in_x18;
    code *pcVar7;
    code *arg1;
    uint32_t uVar8;
    int64_t iVar9;
    uint *puVar10;
    uint uVar11;
    int *piVar12;
    code *pcVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar7 = *(param_1 + 0x98);
    puVar6 = *(pcVar7 + 0x3a8);
    arg1 = pcVar7 + -0x20;
    piVar12 = *(pcVar7 + 0x98);
    ipc_log_string(_segment.ehdr,"[%s]: Powerup request from SSR\n","mdm_rproc_powerup");
    uVar8 = 0;
    uVar11 = 0x7fffffff;
    do {
        ipc_log_string(_segment.ehdr,"[%s]: Boot trial: %d\n","mdm_rproc_powerup",uVar8 & 0xff);
        if ((pcVar7[0x480] == 0x0) && (*(pcVar7 + 0x3b0) == 0)) {
            ipc_log_string(_segment.ehdr,"[%s]: Wait for req eng registration\n","mdm_rproc_powerup");
            wait_for_completion(piVar12 + 0x18);
        }
        ipc_log_string(_segment.ehdr,"[%s]: Req eng available\n","mdm_rproc_powerup");
        if (*piVar12 == 5) {
            ipc_log_string(_segment.ehdr,"[%s]: In SSR power-on mode\n","mdm_rproc_powerup");
            ipc_log_string(_segment.ehdr,"[%s]: Executing the ESOC_EXIT_DEBUG command\n","mdm_rproc_powerup");
            pcVar13 = *puVar6;
            if (pcVar13 != sym.__typeid__ZTSFi8esoc_cmdP10esoc_clinkE_global_addr) {
                __cfi_slowpath_diag(0xa0f7794370a928b7,pcVar13,0x8001470);
            }
            iVar1 = (*pcVar13)(7,arg1);
            if (iVar1 != 0) {
                ipc_log_string(_segment.ehdr,"[%s]: ESOC_EXIT_DEBUG command failed\n","mdm_rproc_powerup");
                pcVar5 = "cannot exit debug mode\n";
                goto code_r0x0800d050;
            }
            *piVar12 = 1;
            ipc_log_string(_segment.ehdr,"[%s]: Executing the ESOC_PWR_ON command\n","mdm_rproc_powerup");
            pcVar13 = *puVar6;
            if (pcVar13 != sym.__typeid__ZTSFi8esoc_cmdP10esoc_clinkE_global_addr) {
                __cfi_slowpath_diag(0xa0f7794370a928b7,pcVar13,0x8001490);
            }
            iVar1 = (*pcVar13)(1,arg1);
            if (iVar1 != 0) goto code_r0x0800d048;
            ipc_log_string(_segment.ehdr,"[%s]: Calling power_on hooks with flags: 0x%x\n","esoc_client_link_power_on"
                           ,1);
            iVar9 = *(pcVar7 + 0x488);
            if ((iVar9 != 0) && (pcVar13 = *(iVar9 + 0x18), pcVar13 != NULL)) {
                __cfi_slowpath_diag(0xccf68899c64718a6,pcVar13,0x80014b0);
                uVar3 = *(iVar9 + 8);
                uVar4 = 1;
                goto code_r0x0800cd44;
            }
        }
        else if (*piVar12 == 1) {
            ipc_log_string(_segment.ehdr,"[%s]: In normal power-on mode\n","mdm_rproc_powerup");
            ipc_log_string(_segment.ehdr,"[%s]: Executing the ESOC_PWR_ON command\n","mdm_rproc_powerup");
            pcVar13 = *puVar6;
            if (pcVar13 != sym.__typeid__ZTSFi8esoc_cmdP10esoc_clinkE_global_addr) {
                __cfi_slowpath_diag(0xa0f7794370a928b7,pcVar13,0x8001450);
            }
            iVar1 = (*pcVar13)(1,arg1);
            if (iVar1 != 0) {
                ipc_log_string(_segment.ehdr,"[%s]: ESOC_PWR_ON command failed\n","mdm_rproc_powerup");
code_r0x0800d048:
                pcVar5 = "pwr on fail\n";
code_r0x0800d050:
                _dev_err(pcVar7,pcVar5);
                return iVar1;
            }
            ipc_log_string(_segment.ehdr,"[%s]: Calling power_on hooks with flags: 0x%x\n","esoc_client_link_power_on"
                           ,0);
            iVar9 = *(pcVar7 + 0x488);
            if ((iVar9 != 0) && (pcVar13 = *(iVar9 + 0x18), pcVar13 != NULL)) {
                __cfi_slowpath_diag(0xccf68899c64718a6,pcVar13,0x80014b0);
                uVar3 = *(iVar9 + 8);
                uVar4 = 0;
code_r0x0800cd44:
                (*pcVar13)(uVar3,uVar4);
            }
        }
        if (pcVar7[0x480] != 0x0) {
            uVar11 = 0x9c4;
        }
        ipc_log_string(_segment.ehdr,"[%s]: Modem turned-on. Waiting for pon_done notification..\n",
                       "mdm_rproc_powerup");
        uVar3 = __msecs_to_jiffies(uVar11);
        iVar2 = wait_for_completion_timeout(piVar12 + 8,uVar3);
        iVar1 = piVar12[0x22];
        if ((iVar1 != 3) && (0 < iVar2)) {
            if (iVar1 == 2) {
                ipc_log_string(_segment.ehdr,"[%s]: Boot failed. Doing cleanup and attempting to retry\n",
                               "mdm_rproc_powerup");
                sym.mdm_subsys_retry_powerup_cleanup(arg1,0);
            }
            else if (iVar1 == 1) {
                return 0;
            }
            goto code_r0x0800cb30;
        }
        _dev_err(pcVar7,"booting failed\n");
        ipc_log_string(_segment.ehdr,"[%s]: booting failed\n","mdm_rproc_powerup");
        puVar10 = *(pcVar7 + 0x98);
        iVar9 = *(pcVar7 + 0x3c8);
        if (*(puVar10 + 0x45) == (uVar8 & 0xff)) {
            ipc_log_string(_segment.ehdr,"[%s]: Reached max. number of boot trials\n","mdm_handle_boot_fail");
            puVar10[0x44] = 3;
        }
        switch(*(puVar10 + 0x44) & 0xffffffff) {
        case 0:
            sym.mdm_subsys_retry_powerup_cleanup(arg1,0);
            ipc_log_string(_segment.ehdr,"[%s]: Request to retry a warm reset\n","mdm_handle_boot_fail");
            uVar8 = uVar8 + 1;
            break;
        case 1:
            sym.mdm_subsys_retry_powerup_cleanup(arg1,2);
            ipc_log_string(_segment.ehdr,"[%s]: Doing cold reset by power-down and warm reset\n",
                           "mdm_handle_boot_fail");
            uVar8 = uVar8 + 1;
            pcVar13 = *(*(iVar9 + 0x200) + 0x10);
            if (pcVar13 != NULL) {
                if (6 < (pcVar13 + -0x8005818 >> 3 | pcVar13 << 0x3d)) {
                    __cfi_slowpath_diag(0x5325a6c16b375fe3,pcVar13,0x80014d0);
                }
                (*pcVar13)(iVar9);
            }
            break;
        default:
            sym.mdm_subsys_retry_powerup_cleanup(arg1,2);
            ipc_log_string(_segment.ehdr,"[%s]: Shutdown the modem and quit\n","mdm_handle_boot_fail");
            pcVar7 = *(*(iVar9 + 0x200) + 0x10);
            if (pcVar7 == NULL) {
                return -5;
            }
            if ((pcVar7 + -0x8005818 >> 3 | pcVar7 << 0x3d) < 7) goto code_r0x0800d0a8;
            goto code_r0x0800d114;
        case 3:
            ipc_log_string(_segment.ehdr,"[%s]: Calling panic!!\n","mdm_handle_boot_fail");
            panic("Panic requested on external modem boot failure\n");
code_r0x0800d114:
            __cfi_slowpath_diag(0x5325a6c16b375fe3,pcVar7,0x80014d0);
code_r0x0800d0a8:
            (*pcVar7)(iVar9);
            return -5;
        case 4:
            ipc_log_string(_segment.ehdr,"[%s]: Leaving the modem in its curent state\n","mdm_handle_boot_fail");
            *puVar10 = 1;
            return -5;
        case 5:
            sym.mdm_subsys_retry_powerup_cleanup(arg1,2);
            ipc_log_string(_segment.ehdr,"[%s]: Doing an S3 reset\n","mdm_handle_boot_fail");
            pcVar13 = *(*(iVar9 + 0x200) + 0x10);
            if (pcVar13 != NULL) {
                if (6 < (pcVar13 + -0x8005818 >> 3 | pcVar13 << 0x3d)) {
                    __cfi_slowpath_diag(0x5325a6c16b375fe3,pcVar13,0x80014d0);
                }
                (*pcVar13)(iVar9);
            }
            uVar8 = uVar8 + 1;
            msleep(1000);
        }
code_r0x0800cb30:
        if (*(piVar12 + 0x45) < (uVar8 & 0xff)) {
            return 0;
        }
    } while( true );
}


// ===== sym.esoc_dev_exit.cfi_jt @ 0x080057d0 (size 8) =====

void sym.esoc_dev_exit.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
    __unregister_chrdev(_segment.ehdr,0,0x100,"esoc");
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080057d8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.mdm_probe.3f2debd08d7acb99a985e6098affe835.cfi_jt);
    sym.esoc_bus_exit();
    ipc_log_context_destroy(_segment.ehdr);
    return;
}


// ===== sym.devm_register_esoc_client.cfi_jt @ 0x080057e0 (size 8) =====

uint64_t * sym.devm_register_esoc_client.cfi_jt(int64_t param_1,ulong param_2)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    uint32_t *puVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    char *pcVar9;
    ulong *extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar10;
    uint64_t *puVar11;
    int iVar12;
    ulong unaff_x30;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    uVar10 = *(param_1 + 0x2f0);
    uStack_60 = 0;
    uVar3 = kasprintf(0xcc0,"esoc-%d",0);
    puVar11 = 0xfffffffffffffff4;
    if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
        iVar12 = 0;
        while( true ) {
            puVar4 = of_get_property(uVar10,uVar3,0);
            if (puVar4 == NULL) {
                _dev_err(param_1,"esoc device not present\n");
                kfree(uVar3);
                puVar11 = NULL;
                goto code_r0x08008568;
            }
            iVar2 = of_property_read_string_helper(uVar10,"esoc-names",&uStack_60,1,iVar12);
            if (iVar2 < 0) {
                _dev_err(param_1,"cannot find matching string\n");
                kfree(uVar3);
                puVar11 = NULL;
                goto code_r0x08008568;
            }
            iVar2 = strcmp(uStack_60,param_2);
            if (iVar2 == 0) break;
            kfree(uVar3);
            iVar12 = iVar12 + 1;
            uVar3 = kasprintf(0xcc0,"esoc-%d",iVar12);
            puVar11 = 0xfffffffffffffff4;
            if ((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) goto code_r0x08008568;
        }
        kfree(uVar3);
        uVar1 = (*puVar4 & 0xff00ff00) >> 8 | (*puVar4 & 0xff00ff) << 8;
        iVar5 = of_find_node_by_phandle(uVar1 >> 0x10 | uVar1 << 0x10);
        uVar3 = sym.get_esoc_clink_by_node(iVar5);
        if ((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) {
            _dev_err(param_1,"matching esoc clink not present\n");
            puVar11 = 0xfffffffffffffdfb;
        }
        else {
            uVar6 = kasprintf(0xcc0,"esoc%d",*(uVar3 + 0x3b8));
            if ((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) {
                pcVar9 = "unable to allocate esoc name\n";
code_r0x08008664:
                _dev_err(param_1,pcVar9);
                puVar11 = 0xfffffffffffffff4;
            }
            else {
                uVar7 = kasprintf(0xcc0,0x8001c4e,*(uVar3 + 8));
                if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
                    _dev_err(param_1,"unable to allocate esoc link name\n");
                }
                else {
                    uVar8 = kasprintf(0xcc0,0x8001c4e,*(uVar3 + 0x10));
                    if ((uVar8 != 0) && (uVar8 < 0xfffffffffffff001)) {
                        puVar11 = __devres_alloc_node(sym.devm_esoc_desc_release.73c7e5d36e8a3d84b5ab2d61716898c8.cfi_jt
                                                      ,0x20,0xcc0,0xffffffff,"devm_esoc_desc_release");
                        if ((puVar11 == NULL) || (0xfffffffffffff000 < puVar11)) {
                            kfree(uVar6);
                            kfree(uVar7);
                            kfree(uVar8);
                            pcVar9 = "unable to allocate esoc descriptor\n";
                            goto code_r0x08008664;
                        }
                        *puVar11 = uVar6;
                        puVar11[1] = uVar7;
                        puVar11[2] = uVar8;
                        puVar11[3] = uVar3;
                        devres_add(param_1,puVar11);
                        goto code_r0x08008568;
                    }
                    _dev_err(param_1,"unable to alloc link info name\n");
                    kfree(uVar6);
                    uVar6 = uVar7;
                }
                kfree(uVar6);
                puVar11 = 0xfffffffffffffff4;
            }
        }
    }
code_r0x08008568:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_58) {
        __stack_chk_fail();
        *extraout_x18 = sym.devm_esoc_desc_release;
        kfree(*extraout_x1);
        kfree(extraout_x1[1]);
        puVar11 = module_put(*(extraout_x1[3] + 0x3c0));
        return puVar11;
    }
    return puVar11;
}


// ===== sym.mdm_pblrdy_change.3f2debd08d7acb99a985e6098affe835.cfi_jt @ 0x080057e8 (size 8) =====

ulong sym.mdm_pblrdy_change.3f2debd08d7acb99a985e6098affe835.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 != 0) {
        if (*(param_2 + 0x1a8) == 0) {
            if (*(param_2 + 0x1a4) == 0) {
                return 1;
            }
            arg1 = 2;
        }
        else {
            arg1 = 1;
            *(param_2 + 0x1a8) = 0;
        }
        sym.esoc_clink_queue_request(arg1,*(param_2 + 0x1c0));
    }
    return 1;
}


// ===== sym.mdm_status_change.3f2debd08d7acb99a985e6098affe835.cfi_jt @ 0x080057f0 (size 8) =====

ulong sym.mdm_status_change.3f2debd08d7acb99a985e6098affe835.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    int64_t arg2;
    code *pcVar2;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 != 0) {
        uVar3 = *(param_2 + 0x150);
        arg2 = *(param_2 + 0x1c0);
        ipc_log_string(_segment.ehdr,"[%s]: MDM2AP_STATUS IRQ received!\n","mdm_status_change");
        if (arg2 == 0) {
            ipc_log_string(_segment.ehdr,"[%s]: Unexpected IRQ. Ignoring.\n","mdm_status_change");
        }
        else {
            gpio_to_desc(*(param_2 + 0x2c));
            iVar1 = gpiod_get_raw_value();
            if (iVar1 == 1) {
                if ((*(arg2 + 0x4a0) == '\0') || (*(param_2 + 0x1d8) == '\0')) {
                    ipc_log_string(_segment.ehdr,"[%s]: Modem ready. Cancelling the status_check work\n",
                                   "mdm_status_change");
                    cancel_delayed_work(param_2 + 0x48);
                    *(param_2 + 0x1d8) = 1;
                    sym.esoc_clink_evt_notify(0xb,arg2);
                    queue_work_on(0x20,*(param_2 + 0x40),param_2 + 0xd0);
                    if (*(param_2 + 0x1c8) != '\0') {
                        queue_work_on(0x20,*(param_2 + 0x40),param_2 + 0x100);
                    }
                    if (*(arg2 + 0x4a0) != '\0') {
                        pcVar2 = *(*(arg2 + 0x3c8) + 0x18);
                        if (pcVar2 != sym.__typeid__ZTSFv11esoc_notifyP10esoc_clinkE_global_addr) {
                            __cfi_slowpath_diag(0x190ba2fe57e749ba,pcVar2,0x8001370);
                        }
                        (*pcVar2)(2,arg2);
                    }
                }
            }
            else if ((iVar1 == 0) && (*(param_2 + 0x1d8) != '\0')) {
                ipc_log_string(_segment.ehdr,"[%s]: Unexpected reset of external modem\n","mdm_status_change");
                _dev_err(uVar3,"unexpected reset external modem\n");
                sym.esoc_clink_evt_notify(2,arg2);
            }
        }
    }
    return 1;
}


// ===== sym.mdm_errfatal.3f2debd08d7acb99a985e6098affe835.cfi_jt @ 0x080057f8 (size 8) =====

ulong sym.mdm_errfatal.3f2debd08d7acb99a985e6098affe835.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong uVar1;
    int64_t arg2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 != 0) {
        uVar1 = *(param_2 + 0x150);
        if (*(param_2 + 0x1d8) == '\0') {
            ipc_log_string(_segment.ehdr,"[%s]: MDM2AP_ERRFATAL IRQ received before modem booted. Ignoring.\n",
                           0x8001ff9);
            _dev_info(uVar1,"errfatal irq when in pwroff\n");
        }
        else {
            arg2 = *(param_2 + 0x1c0);
            ipc_log_string(_segment.ehdr,"[%s]: MDM2AP_ERRFATAL IRQ received!\n",0x8001ff9);
            _dev_err(uVar1,"%s: mdm sent errfatal interrupt\n",0x8001ff9);
            sym.esoc_clink_evt_notify(3,arg2);
        }
    }
    return 1;
}


// ===== sym.devm_unregister_esoc_client.cfi_jt @ 0x08005800 (size 8) =====

void sym.devm_unregister_esoc_client.cfi_jt(uint param_1,ulong param_2)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = devres_release(param_1,sym.devm_esoc_desc_release.73c7e5d36e8a3d84b5ab2d61716898c8.cfi_jt,
                           sym.devm_esoc_desc_match.73c7e5d36e8a3d84b5ab2d61716898c8.cfi_jt,param_2);
    if (iVar2 == 0) {
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8008700);
    (*pcVar1)();
}


// ===== sym.esoc_unregister_client_hook.cfi_jt @ 0x08005808 (size 8) =====

ulong sym.esoc_unregister_client_hook.cfi_jt(uint64_t param_1,uint64_t param_2)

{
    ulong uVar1;
    uint64_t uVar2;
    
    uVar1 = 0xffffffea;
    if ((((param_1 != 0) && (param_1 < 0xfffffffffffff001)) && (uVar1 = 0xffffffea, param_2 != 0)) &&
       (param_2 < 0xfffffffffffff001)) {
        uVar2 = *(param_1 + 0x18);
        uVar1 = 0xffffffea;
        if ((uVar2 != 0) && (uVar2 < 0xfffffffffffff001)) {
            if ((*(param_2 + 0x10) != 0) || (*(uVar2 + 0x4a8) == 0)) {
                return 0xffffffea;
            }
            uVar1 = 0;
            *(uVar2 + 0x4a8) = 0;
        }
    }
    return uVar1;
}


// ===== sym.esoc_register_client_hook.cfi_jt @ 0x08005810 (size 8) =====

ulong sym.esoc_register_client_hook.cfi_jt(uint64_t param_1,uint64_t param_2)

{
    ulong uVar1;
    uint64_t uVar2;
    
    uVar1 = 0xffffffea;
    if ((((param_1 != 0) && (param_1 < 0xfffffffffffff001)) && (uVar1 = 0xffffffea, param_2 != 0)) &&
       (param_2 < 0xfffffffffffff001)) {
        uVar2 = *(param_1 + 0x18);
        uVar1 = 0xffffffea;
        if ((uVar2 != 0) && (uVar2 < 0xfffffffffffff001)) {
            if ((*(param_2 + 0x10) != 0) || (*(uVar2 + 0x4a8) != 0)) {
                return 0xffffffea;
            }
            uVar1 = 0;
            *(uVar2 + 0x4a8) = param_2;
        }
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP8mdm_ctrlE_global_addr @ 0x08005818 (size 8) =====

ulong sym.__typeid__ZTSFiP8mdm_ctrlE_global_addr(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 8) < 0x200) {
        uVar2 = *(param_1 + 0x150);
        uVar1 = gpio_request(*(param_1 + 8),"AP2MDM_SOFT_RESET");
        if (uVar1 != 0) {
            _dev_err(uVar2,"Cannot config AP2MDM_SOFT_RESET gpio\n");
            uVar1 = 0xfffffffb;
        }
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.sdx50m_power_down.efec15fb3fafe4dd582f51ad8b2db369.cfi_jt @ 0x08005820 (size 8) =====

ulong sym.sdx50m_power_down.efec15fb3fafe4dd582f51ad8b2db369.cfi_jt(int64_t param_1)

{
    bool bVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bVar1 = *(param_1 + 0x184) != 0;
    ipc_log_string(_segment.ehdr,"[%s]: Setting AP2MDM_SOFT_RESET = %d\n","sdx50m_power_down",bVar1);
    uVar2 = gpio_to_desc(*(param_1 + 8));
    gpiod_direction_output_raw(uVar2,bVar1);
    uVar2 = gpio_to_desc(*(param_1 + 8));
    gpiod_direction_output_raw(uVar2,bVar1);
    msleep(300);
    return 0;
}


// ===== sym.mdm4x_do_first_power_on.efec15fb3fafe4dd582f51ad8b2db369.cfi_jt @ 0x08005828 (size 8) =====

int sym.mdm4x_do_first_power_on.efec15fb3fafe4dd582f51ad8b2db369.cfi_jt(int64_t param_1)

{
    ulong *puVar1;
    int iVar2;
    int iVar3;
    ulong uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    code *pcVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"[%s]: Powering on modem for the first time\n","mdm4x_do_first_power_on");
    if (*(*(param_1 + 0x1c0) + 0x4a0) == '\0') {
        if (0 < *(param_1 + 0x1a0)) {
            iVar7 = 0;
            uVar5 = 0;
            do {
                puVar1 = *(param_1 + 0x198) + iVar7;
                regulator_set_voltage(*puVar1,*(puVar1 + 1),0x7fffffff);
                puVar1 = *(param_1 + 0x198) + iVar7;
                regulator_set_load(*puVar1,*(puVar1 + 0xc));
                iVar2 = regulator_enable(*(*(param_1 + 0x198) + iVar7));
                if (iVar2 != 0) {
                    _dev_err(*(param_1 + 0x150),"Failed to enable regulator %d (rc:%d)\n",uVar5 & 0xffffffff,iVar2);
                    ipc_log_string(_segment.ehdr,"[%s]: Failed to enable regulator %d (rc:%d)\n",
                                   "mdm4x_do_first_power_on",uVar5 & 0xffffffff,iVar2);
                    return iVar2;
                }
                uVar5 = uVar5 + 1;
                iVar7 = iVar7 + 0x10;
            } while (uVar5 < *(param_1 + 0x1a0));
        }
        pcVar6 = *(*(param_1 + 0x200) + 8);
        if (pcVar6 != NULL) {
            if (2 < (pcVar6 + -0x8005850 >> 3 | pcVar6 << 0x3d)) {
                __cfi_slowpath_diag(0xc03e31212b9a8ab6,pcVar6,0x8001250);
            }
            (*pcVar6)(param_1,0);
        }
        msleep(0x96);
        ipc_log_string(_segment.ehdr,"[%s]: Setting AP2MDM_STATUS = 1\n","mdm4x_do_first_power_on");
        uVar4 = gpio_to_desc(*(param_1 + 4));
        gpiod_direction_output_raw(uVar4,1);
        if (*(param_1 + 0x28) < 0x200) {
            gpio_to_desc();
            iVar2 = gpiod_get_raw_value();
            if (iVar2 == 0) {
                iVar2 = 0x14;
                do {
                    usleep_range_state(5000,6000,2);
                    iVar2 = iVar2 + -1;
                    if (iVar2 == 0) break;
                    gpio_to_desc(*(param_1 + 0x28));
                    iVar3 = gpiod_get_raw_value();
                } while (iVar3 == 0);
            }
            msleep(200);
        }
        else {
            ipc_log_string(_segment.ehdr,"[%s]: Queueing the request: ESOC_REQ_IMG\n","mdm4x_do_first_power_on");
            sym.esoc_clink_queue_request(1,*(param_1 + 0x1c0));
        }
    }
    return 0;
}


// ===== sym.mdm4x_pon_dt_init.efec15fb3fafe4dd582f51ad8b2db369.cfi_jt @ 0x08005830 (size 8) =====

ulong sym.mdm4x_pon_dt_init.efec15fb3fafe4dd582f51ad8b2db369.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 1;
    iVar1 = of_get_named_gpio_flags(*(*(param_1 + 0x150) + 0x2f0),"qcom,ap2mdm-soft-reset-gpio",0,&uStack_2c);
    if (iVar1 < 0) {
        uVar2 = 0xfffffffb;
    }
    else {
        *(param_1 + 8) = iVar1;
        if ((uStack_2c & 1) == 0) {
            uVar2 = 0;
        }
        else {
            uVar2 = 0;
            *(param_1 + 0x184) = 1;
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return uVar2;
    }
    iVar3 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.sdx55m_toggle_soft_reset;
    ipc_log_string(_segment.ehdr,"[%s]: Doing a Warm reset using SPMI\n","sdx55m_toggle_soft_reset");
    _dev_err(*(iVar3 + 0x150),"SPMI warm reset failed\n");
    ipc_log_string(_segment.ehdr,"[%s]: SPMI warm reset failed\n","sdx55m_toggle_soft_reset");
    return 0xffffffed;
}


// ===== sym.mdm9x55_power_down.efec15fb3fafe4dd582f51ad8b2db369.cfi_jt @ 0x08005838 (size 8) =====

ulong sym.mdm9x55_power_down.efec15fb3fafe4dd582f51ad8b2db369.cfi_jt(int64_t param_1)

{
    bool bVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bVar1 = *(param_1 + 0x184) == 0;
    uVar2 = gpio_to_desc(*(param_1 + 8));
    gpiod_direction_output_raw(uVar2,!bVar1);
    msleep(0x196);
    uVar2 = gpio_to_desc(*(param_1 + 8));
    gpiod_direction_output_raw(uVar2,bVar1);
    return 0;
}


// ===== sym.sdx55m_power_down.efec15fb3fafe4dd582f51ad8b2db369.cfi_jt @ 0x08005840 (size 8) =====

ulong sym.sdx55m_power_down.efec15fb3fafe4dd582f51ad8b2db369.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"[%s]: Performing warm reset as cold reset is not supported\n","sdx55m_power_down");
    ipc_log_string(_segment.ehdr,"[%s]: Doing a Warm reset using SPMI\n","sdx55m_toggle_soft_reset");
    _dev_err(*(param_1 + 0x150),"SPMI warm reset failed\n");
    ipc_log_string(_segment.ehdr,"[%s]: SPMI warm reset failed\n","sdx55m_toggle_soft_reset");
    return 0xffffffed;
}


// ===== sym.mdm9x55_pon_dt_init.efec15fb3fafe4dd582f51ad8b2db369.cfi_jt @ 0x08005848 (size 8) =====

ulong sym.mdm9x55_pon_dt_init.efec15fb3fafe4dd582f51ad8b2db369.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar3;
    ulong uVar4;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_3c = 1;
    uVar4 = *(*(param_1 + 0x150) + 0x2f0);
    iVar1 = of_property_read_variable_u32_array(uVar4,"qcom,reset-time-ms",param_1 + 0x1bc,1,0);
    if (iVar1 < 0) {
        *(param_1 + 0x1bc) = 0xcb;
    }
    iVar1 = of_get_named_gpio_flags(uVar4,"qcom,ap2mdm-soft-reset-gpio",0,&uStack_3c);
    if (iVar1 < 0) {
        uVar4 = 0xfffffffb;
    }
    else {
        *(param_1 + 8) = iVar1;
        if ((uStack_3c & 1) == 0) {
            uVar4 = 0;
        }
        else {
            uVar4 = 0;
            *(param_1 + 0x184) = 1;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    iVar2 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.mdm4x_pon_setup;
    if (*(iVar2 + 8) < 0x200) {
        uVar3 = *(iVar2 + 0x150);
        uVar4 = gpio_request(*(iVar2 + 8),"AP2MDM_SOFT_RESET");
        if (uVar4 != 0) {
            _dev_err(uVar3,"Cannot config AP2MDM_SOFT_RESET gpio\n");
            uVar4 = 0xfffffffb;
        }
    }
    else {
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.__typeid__ZTSFiP8mdm_ctrlbE_global_addr @ 0x08005850 (size 8) =====

ulong sym.__typeid__ZTSFiP8mdm_ctrlbE_global_addr(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"[%s]: Doing a Warm reset using SPMI\n","sdx55m_toggle_soft_reset");
    _dev_err(*(param_1 + 0x150),"SPMI warm reset failed\n");
    ipc_log_string(_segment.ehdr,"[%s]: SPMI warm reset failed\n","sdx55m_toggle_soft_reset");
    return 0xffffffed;
}


// ===== sym.sdx50m_toggle_soft_reset.efec15fb3fafe4dd582f51ad8b2db369.cfi_jt @ 0x08005858 (size 8) =====

ulong sym.sdx50m_toggle_soft_reset.efec15fb3fafe4dd582f51ad8b2db369.cfi_jt(int64_t param_1,uint64_t param_2)

{
    bool bVar1;
    bool bVar2;
    uint uVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = _segment.ehdr;
    bVar2 = *(param_1 + 0x184) == 0;
    gpio_to_desc(*(param_1 + 8));
    uVar3 = gpiod_get_raw_value();
    ipc_log_string(uVar4,"[%s]: RESET GPIO value (before doing a reset): %d\n","sdx50m_toggle_soft_reset",uVar3);
    ipc_log_string(_segment.ehdr,"[%s]: Setting AP2MDM_SOFT_RESET = %d\n","sdx50m_toggle_soft_reset",!bVar2);
    uVar4 = gpio_to_desc(*(param_1 + 8));
    gpiod_direction_output_raw(uVar4,!bVar2);
    if ((param_2 & 1) == 0) {
        usleep_range_state(80000,180000,2);
    }
    else {
        iVar5 = -100;
        do {
            __const_udelay(0x418958);
            bVar1 = iVar5 != -1;
            iVar5 = iVar5 + 1;
        } while (bVar1);
    }
    ipc_log_string(_segment.ehdr,"[%s]: Setting AP2MDM_SOFT_RESET = %d\n","sdx50m_toggle_soft_reset",bVar2);
    uVar4 = gpio_to_desc(*(param_1 + 8));
    gpiod_direction_output_raw(uVar4,bVar2);
    return 0;
}


// ===== sym.mdm9x55_toggle_soft_reset.efec15fb3fafe4dd582f51ad8b2db369.cfi_jt @ 0x08005860 (size 8) =====

ulong sym.mdm9x55_toggle_soft_reset.efec15fb3fafe4dd582f51ad8b2db369.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x184);
    iVar2 = *(param_1 + 0x1bc);
    uVar3 = gpio_to_desc(*(param_1 + 8));
    gpiod_direction_output_raw(uVar3,iVar1 != 0);
    if ((param_2 & 1) == 0) {
        iVar2 = iVar2 * 1000;
        usleep_range_state(iVar2,iVar2 + 100000,2);
    }
    else {
        uVar4 = *(param_1 + 0x1bc);
        if (*(param_1 + 0x1bc) != 0) {
            do {
                uVar4 = uVar4 - 1;
                __const_udelay(0x418958);
            } while (uVar4 != 0);
        }
    }
    uVar3 = gpio_to_desc(*(param_1 + 8));
    gpiod_direction_output_raw(uVar3,iVar1 == 0);
    return 0;
}


// ===== sym.esoc_msm_restart_handler.1170f134d19d2c286ae3a2a8519f89df.cfi_jt @ 0x08005868 (size 8) =====

ulong sym.esoc_msm_restart_handler.1170f134d19d2c286ae3a2a8519f89df.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    int64_t iVar1;
    code *pcVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    if (param_2 == 1) {
        *in_x18 = unaff_x30;
        iVar1 = *(param_1 + -0x48);
        iVar3 = *(iVar1 + 0x3c8);
        mutex_lock(param_1 + 0x18);
        if (*(param_1 + -200) == 1) {
            ipc_log_string(_segment.ehdr,"[%s]: Reboot notifier: mdm already powered-off\n","esoc_msm_restart_handler"
                          );
        }
        else {
            ipc_log_string(_segment.ehdr,"[%s]: Calling power_off hooks with flags: 0x%x\n",
                           "esoc_client_link_power_off",2);
            iVar4 = *(iVar1 + 0x4a8);
            if ((iVar4 != 0) && (pcVar2 = *(iVar4 + 0x20), pcVar2 != NULL)) {
                __cfi_slowpath_diag(0xddcd4a035804a8bc,pcVar2,0x8001430);
                (*pcVar2)(*(iVar4 + 8),2);
            }
            ipc_log_string(_segment.ehdr,"[%s]: Reboot notifier: Notifying esoc of cold reboot\n",
                           "esoc_msm_restart_handler");
            pcVar2 = *(iVar3 + 0x18);
            if (pcVar2 != sym.__typeid__ZTSFv11esoc_notifyP10esoc_clinkE_global_addr) {
                __cfi_slowpath_diag(0x190ba2fe57e749ba,pcVar2,0x8001530);
            }
            (*pcVar2)(10,iVar1);
            *(param_1 + -200) = 1;
        }
        mutex_unlock(param_1 + 0x18);
    }
    return 1;
}


// ===== sym.__typeid__ZTSFvPjP10esoc_clinkE_global_addr @ 0x08005870 (size 8) =====

void sym.__typeid__ZTSFvPjP10esoc_clinkE_global_addr(uint32_t *param_1,int64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpio_to_desc(*(*(param_2 + 1000) + 0x24));
    iVar1 = gpiod_get_raw_value();
    *param_1 = iVar1 != 0;
    return;
}


// ===== sym.mdm_get_status.3f2debd08d7acb99a985e6098affe835.cfi_jt @ 0x08005878 (size 8) =====

void sym.mdm_get_status.3f2debd08d7acb99a985e6098affe835.cfi_jt(uint32_t *param_1,int64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpio_to_desc(*(*(param_2 + 1000) + 0x2c));
    iVar1 = gpiod_get_raw_value();
    *param_1 = iVar1 != 0;
    return;
}


// ===== sym.mdm_get_restart_reason.3f2debd08d7acb99a985e6098affe835.cfi_jt @ 0x08005880 (size 8) =====

void sym.mdm_get_restart_reason.3f2debd08d7acb99a985e6098affe835.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg2;
    ulong uVar3;
    ulong unaff_x30;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uint uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_30 = 0;
    uVar3 = *(param_1 + 0x50);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    qcom_sysmon_get_reason(*(*(param_1 + 0xc0) + 0x490),&uStack_90,100);
    ipc_log_string(_segment.ehdr,"[%s]: restart reason is %s\n","mdm_get_restart_reason",&uStack_90);
    _dev_err(uVar3,"mdm restart reason is %s\n",&uStack_90);
    *(param_1 + 200) = 0;
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.mdm2ap_status_check;
    arg2 = *(iVar2 + 0x178);
    ipc_log_string(_segment.ehdr,"[%s]: Powerup timer expired after images are transferred to modem\n",
                   "mdm2ap_status_check");
    gpio_to_desc(*(iVar2 + -0x1c));
    iVar1 = gpiod_get_raw_value();
    if (iVar1 == 0) {
        ipc_log_string(_segment.ehdr,"[%s]: MDM2AP_STATUS did not go high\n","mdm2ap_status_check");
        sym.esoc_clink_evt_notify(2,arg2);
    }
    return;
}


// ===== sym.mdm_status_fn.3f2debd08d7acb99a985e6098affe835.cfi_jt @ 0x08005888 (size 8) =====

void sym.mdm_status_fn.3f2debd08d7acb99a985e6098affe835.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpio_to_desc(*(param_1 + -0xa4));
    gpiod_get_raw_value();
    if ((*(param_1 + 0x98) != 0) && (iVar1 = pinctrl_select_state(*(param_1 + 0x88)), iVar1 != 0)) {
        _dev_err(*(param_1 + 0x80),"switching gpio config failed\n");
    }
    return;
}


// ===== sym.mdm2ap_status_check.3f2debd08d7acb99a985e6098affe835.cfi_jt @ 0x08005890 (size 8) =====

void sym.mdm2ap_status_check.3f2debd08d7acb99a985e6098affe835.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    int64_t arg2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *(param_1 + 0x178);
    ipc_log_string(_segment.ehdr,"[%s]: Powerup timer expired after images are transferred to modem\n",
                   "mdm2ap_status_check");
    gpio_to_desc(*(param_1 + -0x1c));
    iVar1 = gpiod_get_raw_value();
    if (iVar1 == 0) {
        ipc_log_string(_segment.ehdr,"[%s]: MDM2AP_STATUS did not go high\n","mdm2ap_status_check");
        sym.esoc_clink_evt_notify(2,arg2);
    }
    return;
}


// ===== sym.mdm_ssr_fn.1170f134d19d2c286ae3a2a8519f89df.cfi_jt @ 0x08005898 (size 8) =====

void sym.mdm_ssr_fn.1170f134d19d2c286ae3a2a8519f89df.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(*(param_1 + -0x18) + 1000);
    wait_for_completion(param_1 + -0x58);
    if (*(param_1 + -0x10) == 1) {
        iVar1 = *(param_1 + -0x18);
        ipc_log_string(_segment.ehdr,"[%s]: Calling mdm_crash hooks\n","esoc_client_link_mdm_crash");
        iVar1 = *(iVar1 + 0x4a8);
        if ((iVar1 != 0) && (pcVar2 = *(iVar1 + 0x30), pcVar2 != NULL)) {
            __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar2,0x8001510);
            (*pcVar2)(*(iVar1 + 8));
        }
        sym.mdm_wait_for_status_low(arg1,0);
        ipc_log_string(_segment.ehdr,"[%s]: Starting SSR work\n","mdm_ssr_fn");
        sym.esoc_clink_request_ssr(*(param_1 + -0x18));
    }
    else {
        ipc_log_string(_segment.ehdr,"[%s]: Got errfatal but ignoring as boot failed\n","mdm_ssr_fn");
    }
    return;
}


// ===== sym.__typeid__ZTSFiP8mdm_ctrlPK7mdm_opsP15platform_deviceE_global_addr @ 0x080058a0 (size 8) =====

uint64_t sym.__typeid__ZTSFiP8mdm_ctrlPK7mdm_opsP15platform_deviceE_global_addr
                   (ulong *param_1,ulong *param_2,int64_t param_3)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *arg1;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong uVar7;
    ulong uVar8;
    code *pcVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = *param_2;
    uVar7 = param_2[1];
    param_1[0x2a] = param_3 + 0x10;
    param_1[0x40] = uVar7;
    uVar7 = *(param_3 + 0x300);
    arg1 = devm_kmalloc(param_3 + 0x10,0x4c8,0xdc0);
    if ((arg1 == NULL) || (0xfffffffffffff000 < arg1)) {
        _dev_err(param_1[0x2a],"cannot allocate esoc device\n");
        uVar5 = arg1 & 0xffffffff;
    }
    else {
        arg1[0x76] = param_3;
        iVar4 = alloc_workqueue("mdm_queue",0,0);
        param_1[8] = iVar4;
        if (iVar4 == 0) {
            _dev_err(param_1[0x2a],"could not create mdm_queue\n");
            uVar5 = 0xfffffff4;
        }
        else {
            param_1[0x3a] = 0;
            *(param_1 + 0x3b) = 0;
            iVar4 = 0;
            uVar8 = *(param_1[0x2a] + 0x2f0);
            *param_1 = 0xffffffffffffffff;
            param_1[1] = 0xffffffffffffffff;
            param_1[2] = 0xffffffffffffffff;
            param_1[3] = 0xffffffffffffffff;
            param_1[4] = 0xffffffffffffffff;
            param_1[5] = 0xffffffffffffffff;
            param_1[6] = 0xffffffffffffffff;
            do {
                iVar2 = of_get_named_gpio_flags(uVar8,*(obj.gpio_map + iVar4),0,0);
                if (-1 < iVar2) {
                    *(param_1 + *(iVar4 + 0x80049a8) * 4) = iVar2;
                }
                iVar4 = iVar4 + 0x10;
            } while (iVar4 != 0xc0);
            if ((((*(param_1 + 0x24) == -1) || (*(param_1 + 0x14) == -1)) || (*(param_1 + 0x2c) == -1)) ||
               (*(param_1 + 4) == -1)) {
                uVar5 = 0xfffffffa;
            }
            else {
                pcVar9 = *(param_1[0x40] + 0x28);
                if (pcVar9 != NULL) {
                    if (6 < (pcVar9 + -0x8005818 >> 3 | pcVar9 << 0x3d)) {
                        __cfi_slowpath_diag(0x5325a6c16b375fe3,pcVar9,0x8001330);
                    }
                    uVar5 = (*pcVar9)(param_1);
                    if (uVar5 != 0) {
                        return uVar5;
                    }
                    uVar5 = sym.mdm_pinctrl_init(param_1);
                    if (uVar5 != 0) {
                        return uVar5;
                    }
                    pcVar9 = *(param_1[0x40] + 0x30);
                    if (pcVar9 != NULL) {
                        if (6 < (pcVar9 + -0x8005818 >> 3 | pcVar9 << 0x3d)) {
                            __cfi_slowpath_diag(0x5325a6c16b375fe3,pcVar9,0x8001350);
                        }
                        uVar5 = (*pcVar9)(param_1);
                        if (uVar5 != 0) {
                            return uVar5;
                        }
                        uVar5 = sym.mdm_configure_ipc(param_1,param_3);
                        if (uVar5 != 0) {
                            return uVar5;
                        }
                        *arg1 = "MDM9x55";
                        iVar4 = of_find_property(uVar7,"qcom,mdm-dual-link",0);
                        *(param_1 + 0x1d9) = iVar4 != 0;
                        arg1[1] = "PCIe";
                        iVar2 = of_property_read_string(uVar7,"qcom,mdm-link-info",arg1 + 2);
                        if (iVar2 != 0) {
                            _dev_info(param_1[0x2a],"esoc link info missing\n");
                        }
                        iVar2 = of_property_read_variable_u32_array
                                          (uVar7,"qcom,shutdown-timeout-ms",param_1 + 0x37,1,0);
                        if (iVar2 < 0) {
                            *(param_1 + 0x37) = 10000;
                        }
                        iVar2 = of_property_read_variable_u32_array(uVar7,"qcom,ssctl-instance-id",arg1 + 0x96,1,0);
                        if (iVar2 < 0) {
                            _dev_info(param_1[0x2a],"esoc ssctl id missing\n");
                        }
                        uVar8 = param_1[0x2a];
                        uVar7 = *(param_3 + 0x300);
                        arg1[0x97] = "MDM9x55";
                        arg1[0x79] = uVar6;
                        arg1[0x78] = obj.__this_module;
                        arg1[3] = uVar8;
                        arg1[0x93] = uVar7;
                        iVar4 = of_find_property(uVar7,"qcom,mdm-auto-boot",0);
                        *(arg1 + 0x94) = iVar4 != 0;
                        iVar4 = of_find_property(arg1[0x93],"qcom,mdm-statusline-not-a-powersource",0);
                        *(arg1 + 0x4a2) = iVar4 != 0;
                        iVar4 = of_find_property(arg1[0x93],"qcom,mdm-userspace-handle-shutdown",0);
                        arg1[0x7d] = param_1;
                        *(arg1 + 0x4a3) = iVar4 != 0;
                        uVar3 = sym.esoc_clink_register(arg1);
                        if (uVar3 == 0) {
                            *(param_1 + 0x26) = 0;
                            __init_swait_queue_head(param_1 + 0x27,"&x->wait",obj.init_completion.__key);
                            param_1[0x1a] = 0xfffffffe0;
                            param_1[0x1b] = param_1 + 0x1b;
                            param_1[0x1c] = param_1 + 0x1b;
                            param_1[0x1d] = sym.mdm_status_fn.3f2debd08d7acb99a985e6098affe835.cfi_jt;
                            param_1[0x20] = 0xfffffffe0;
                            param_1[0x21] = param_1 + 0x21;
                            param_1[0x22] = param_1 + 0x21;
                            param_1[9] = 0xfffffffe0;
                            param_1[0x23] = sym.mdm_get_restart_reason.3f2debd08d7acb99a985e6098affe835.cfi_jt;
                            param_1[10] = param_1 + 10;
                            param_1[0xb] = param_1 + 10;
                            param_1[0xc] = sym.mdm2ap_status_check.3f2debd08d7acb99a985e6098affe835.cfi_jt;
                            init_timer_key(param_1 + 0xf,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                            cVar1 = *(arg1 + 0x94);
                            *(param_1 + 0x39) = 0;
                            *(param_1 + 0x1ac) = 0;
                            param_1[0x38] = arg1;
                            *(param_1 + 0x35) = 0;
                            if (cVar1 != '\0') {
                                uVar6 = gpio_to_desc(*(param_1 + 4));
                                gpiod_direction_output_raw(uVar6,1);
                            }
                            return 0;
                        }
                        _dev_err(param_1[0x2a],"esoc registration failed\n");
                        return uVar3;
                    }
                }
                uVar5 = 0xfffffffe;
            }
        }
    }
    return uVar5;
}


// ===== sym.pinn_setup_hw.3f2debd08d7acb99a985e6098affe835.cfi_jt @ 0x080058a8 (size 8) =====

uint64_t sym.pinn_setup_hw.3f2debd08d7acb99a985e6098affe835.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    uint32_t uVar1;
    ulong *arg4;
    uint64_t uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg4 = devm_kmalloc(param_3 + 0x10,0x4c8,0xdc0);
    if ((arg4 == NULL) || (0xfffffffffffff000 < arg4)) {
        _dev_err(param_3 + 0x10,"cannot allocate esoc device\n");
    }
    else {
        *arg4 = "SDXPINN";
        arg4[1] = "PCIe";
        arg4[0x97] = "SDXPINN";
        uVar1 = sym.sdx_setup_hw(param_1,param_2,param_3,arg4);
        if (uVar1 == 0) {
            uVar2 = sym.sdx_setup_regulators(param_1);
            arg4 = uVar2 & 0xffffffff;
            if (uVar2 != 0) {
                _dev_err(*(param_1 + 0x150),"Failed to setup regulators: %d\n",arg4);
                ipc_log_string(_segment.ehdr,"[%s]: Failed to setup regulators: %d\n","pinn_setup_hw",arg4);
            }
            pcVar3 = "[%s]: Hardware setup done for pinn\n";
        }
        else {
            arg4 = uVar1;
            _dev_err(*(param_1 + 0x150),"Hardware setup failed for pinn\n");
            pcVar3 = "[%s]: Hardware setup failed for pinn\n";
        }
        ipc_log_string(_segment.ehdr,pcVar3,"pinn_setup_hw");
    }
    return arg4 & 0xffffffff;
}


// ===== sym.sdx55m_setup_hw.3f2debd08d7acb99a985e6098affe835.cfi_jt @ 0x080058b0 (size 8) =====

uint64_t sym.sdx55m_setup_hw.3f2debd08d7acb99a985e6098affe835.cfi_jt(ulong *param_1,ulong *param_2,int64_t param_3)

{
    ulong uVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *arg1;
    int64_t iVar4;
    ulong *in_x18;
    ulong uVar5;
    ulong uVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *param_2;
    uVar5 = param_2[1];
    param_1[0x2a] = param_3 + 0x10;
    param_1[0x40] = uVar5;
    uVar5 = *(param_3 + 0x300);
    arg1 = devm_kmalloc(param_3 + 0x10,0x4c8,0xdc0);
    if ((arg1 == NULL) || (0xfffffffffffff000 < arg1)) {
        _dev_err(param_1[0x2a],"cannot allocate esoc device\n");
        uVar7 = arg1 & 0xffffffff;
    }
    else {
        arg1[0x76] = param_3;
        iVar4 = alloc_workqueue("mdm_queue",0,0);
        param_1[8] = iVar4;
        if (iVar4 == 0) {
            _dev_err(param_1[0x2a],"could not create mdm_queue\n");
            uVar7 = 0xfffffff4;
        }
        else {
            param_1[0x3a] = 0;
            *(param_1 + 0x3b) = 0;
            iVar4 = 0;
            uVar6 = *(param_1[0x2a] + 0x2f0);
            *param_1 = 0xffffffffffffffff;
            param_1[1] = 0xffffffffffffffff;
            param_1[2] = 0xffffffffffffffff;
            param_1[3] = 0xffffffffffffffff;
            param_1[4] = 0xffffffffffffffff;
            param_1[5] = 0xffffffffffffffff;
            param_1[6] = 0xffffffffffffffff;
            do {
                iVar2 = of_get_named_gpio_flags(uVar6,*(obj.gpio_map + iVar4),0,0);
                if (-1 < iVar2) {
                    *(param_1 + *(iVar4 + 0x80049a8) * 4) = iVar2;
                }
                iVar4 = iVar4 + 0x10;
            } while (iVar4 != 0xc0);
            if ((((*(param_1 + 0x24) == -1) || (*(param_1 + 0x14) == -1)) || (*(param_1 + 0x2c) == -1)) ||
               (*(param_1 + 4) == -1)) {
                ipc_log_string(_segment.ehdr,"[%s]: Failed to parse DT gpios\n","sdx55m_setup_hw");
                _dev_err(param_1[0x2a],"Failed to parse DT gpios\n");
                uVar7 = 0xfffffffa;
            }
            else {
                uVar3 = sym.mdm_pinctrl_init(param_1);
                if (uVar3 == 0) {
                    uVar3 = sym.mdm_configure_ipc(param_1,param_3);
                    if (uVar3 == 0) {
                        *arg1 = "SDX55M";
                        iVar4 = of_find_property(uVar5,"qcom,mdm-dual-link",0);
                        *(param_1 + 0x1d9) = iVar4 != 0;
                        arg1[1] = "PCIe";
                        iVar2 = of_property_read_string(uVar5,"qcom,mdm-link-info",arg1 + 2);
                        if (iVar2 != 0) {
                            _dev_info(param_1[0x2a],"esoc link info missing\n");
                        }
                        iVar4 = of_find_property(uVar5,"qcom,esoc-skip-restart-for-mdm-crash",0);
                        *(param_1 + 0x41) = iVar4 != 0;
                        iVar2 = of_property_read_variable_u32_array(uVar5,"qcom,ssctl-instance-id",arg1 + 0x96,1,0);
                        if (iVar2 < 0) {
                            _dev_info(param_1[0x2a],"esoc ssctl id missing\n");
                        }
                        uVar5 = param_1[0x2a];
                        uVar6 = *(param_3 + 0x300);
                        arg1[0x97] = "SDX55M";
                        arg1[0x79] = uVar1;
                        arg1[0x78] = obj.__this_module;
                        arg1[3] = uVar5;
                        arg1[0x93] = uVar6;
                        arg1[0x7d] = param_1;
                        uVar3 = sym.esoc_clink_register(arg1);
                        uVar7 = uVar3;
                        if (uVar3 == 0) {
                            ipc_log_string(_segment.ehdr,"[%s]: Done configuring the GPIOs and esoc registration\n",
                                           "sdx55m_setup_hw");
                            *(param_1 + 0x26) = 0;
                            __init_swait_queue_head(param_1 + 0x27,"&x->wait",obj.init_completion.__key);
                            param_1[0x1a] = 0xfffffffe0;
                            param_1[0x1b] = param_1 + 0x1b;
                            param_1[0x1c] = param_1 + 0x1b;
                            param_1[0x1d] = sym.mdm_status_fn.3f2debd08d7acb99a985e6098affe835.cfi_jt;
                            param_1[0x20] = 0xfffffffe0;
                            param_1[0x21] = param_1 + 0x21;
                            param_1[0x22] = param_1 + 0x21;
                            param_1[9] = 0xfffffffe0;
                            param_1[0x23] = sym.mdm_get_restart_reason.3f2debd08d7acb99a985e6098affe835.cfi_jt;
                            param_1[10] = param_1 + 10;
                            param_1[0xb] = param_1 + 10;
                            param_1[0xc] = sym.mdm2ap_status_check.3f2debd08d7acb99a985e6098affe835.cfi_jt;
                            init_timer_key(param_1 + 0xf,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                            param_1[0x38] = arg1;
                            uVar1 = _segment.ehdr;
                            *(param_1 + 0x39) = 0;
                            *(param_1 + 0x1ac) = 0;
                            *(param_1 + 0x35) = 0;
                            ipc_log_string(uVar1,"[%s]: MDM2AP_ERRFATAL gpio = %d\n","mdm_debug_gpio_ipc_log",
                                           *(param_1 + 0x24));
                            ipc_log_string(_segment.ehdr,"[%s]: AP2MDM_ERRFATAL gpio = %d\n","mdm_debug_gpio_ipc_log"
                                           ,*(param_1 + 0x14));
                            ipc_log_string(_segment.ehdr,"[%s]: MDM2AP_STATUS gpio = %d\n","mdm_debug_gpio_ipc_log",
                                           *(param_1 + 0x2c));
                            ipc_log_string(_segment.ehdr,"[%s]: AP2MDM_STATUS gpio = %d\n","mdm_debug_gpio_ipc_log",
                                           *(param_1 + 4));
                            ipc_log_string(_segment.ehdr,"[%s]: AP2MDM_SOFT_RESET gpio = %d\n",
                                           "mdm_debug_gpio_ipc_log",*(param_1 + 1));
                            return 0;
                        }
                        ipc_log_string(_segment.ehdr,"[%s]: esoc registration failed\n","sdx55m_setup_hw");
                        _dev_err(param_1[0x2a],"esoc registration failed\n");
                        if (param_1 != NULL) {
                            free_irq(*(param_1 + 0x31),param_1);
                            free_irq(*(param_1 + 0x18c),param_1);
                        }
                    }
                    else {
                        uVar7 = uVar3;
                        ipc_log_string(_segment.ehdr,"[%s]: Failed to configure the ipc\n","sdx55m_setup_hw");
                        _dev_err(param_1[0x2a],"Failed to configure the ipc\n");
                    }
                    sym.mdm_release_ipc_gpio(param_1);
                }
                else {
                    uVar7 = uVar3;
                    ipc_log_string(_segment.ehdr,"[%s]: Failed to init pinctrl\n","sdx55m_setup_hw");
                    _dev_err(param_1[0x2a],"Failed to init pinctrl\n");
                }
            }
            destroy_workqueue(param_1[8]);
        }
    }
    return uVar7;
}


// ===== sym.baagha_setup_hw.3f2debd08d7acb99a985e6098affe835.cfi_jt @ 0x080058b8 (size 8) =====

uint64_t sym.baagha_setup_hw.3f2debd08d7acb99a985e6098affe835.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    uint32_t uVar1;
    ulong *arg4;
    uint64_t uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg4 = devm_kmalloc(param_3 + 0x10,0x4c8,0xdc0);
    if ((arg4 == NULL) || (0xfffffffffffff000 < arg4)) {
        _dev_err(param_3 + 0x10,"cannot allocate esoc device\n");
    }
    else {
        *arg4 = "SDXBAAGHA";
        arg4[1] = "PCIe";
        arg4[0x97] = "SDXBAAGHA";
        uVar1 = sym.sdx_setup_hw(param_1,param_2,param_3,arg4);
        if (uVar1 == 0) {
            uVar2 = sym.sdx_setup_regulators(param_1);
            arg4 = uVar2 & 0xffffffff;
            if (uVar2 != 0) {
                _dev_err(*(param_1 + 0x150),"Failed to setup regulators: %d\n",arg4);
                ipc_log_string(_segment.ehdr,"[%s]: Failed to setup regulators: %d\n","baagha_setup_hw",arg4);
            }
            pcVar3 = "[%s]: Hardware setup done for baagha\n";
        }
        else {
            arg4 = uVar1;
            _dev_err(*(param_1 + 0x150),"Hardware setup failed for baagha\n");
            pcVar3 = "[%s]: Hardware setup failed for baahga\n";
        }
        ipc_log_string(_segment.ehdr,pcVar3,"baagha_setup_hw");
    }
    return arg4 & 0xffffffff;
}


// ===== sym.lemur_setup_hw.3f2debd08d7acb99a985e6098affe835.cfi_jt @ 0x080058c0 (size 8) =====

uint64_t sym.lemur_setup_hw.3f2debd08d7acb99a985e6098affe835.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    uint32_t uVar1;
    ulong *arg4;
    uint64_t uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg4 = devm_kmalloc(param_3 + 0x10,0x4c8,0xdc0);
    if ((arg4 == NULL) || (0xfffffffffffff000 < arg4)) {
        _dev_err(param_3 + 0x10,"cannot allocate esoc device\n");
    }
    else {
        *arg4 = "SDXLEMUR";
        arg4[1] = "PCIe";
        arg4[0x97] = "SDXLEMUR";
        uVar1 = sym.sdx_setup_hw(param_1,param_2,param_3,arg4);
        if (uVar1 == 0) {
            uVar2 = sym.sdx_setup_regulators(param_1);
            arg4 = uVar2 & 0xffffffff;
            if (uVar2 != 0) {
                _dev_err(*(param_1 + 0x150),"Failed to setup regulators: %d\n",arg4);
                ipc_log_string(_segment.ehdr,"[%s]: Failed to setup regulators: %d\n","lemur_setup_hw",arg4);
            }
            pcVar3 = "[%s]: Hardware setup done for lemur\n";
        }
        else {
            arg4 = uVar1;
            _dev_err(*(param_1 + 0x150),"Hardware setup failed for lemur\n");
            pcVar3 = "[%s]: Hardware setup failed for lemur\n";
        }
        ipc_log_string(_segment.ehdr,pcVar3,"lemur_setup_hw");
    }
    return arg4 & 0xffffffff;
}


// ===== sym.sdx50m_setup_hw.3f2debd08d7acb99a985e6098affe835.cfi_jt @ 0x080058c8 (size 8) =====

uint64_t sym.sdx50m_setup_hw.3f2debd08d7acb99a985e6098affe835.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    ulong *arg4;
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg4 = devm_kmalloc(param_3 + 0x10,0x4c8,0xdc0);
    if ((arg4 == NULL) || (0xfffffffffffff000 < arg4)) {
        _dev_err(*(param_1 + 0x150),"cannot allocate esoc device\n");
    }
    else {
        *arg4 = "SDX50M";
        arg4[1] = "PCIe";
        arg4[0x97] = "SDX50M";
        uVar1 = sym.sdx_setup_hw(param_1,param_2,param_3,arg4);
        arg4 = uVar1 & 0xffffffff;
    }
    return arg4 & 0xffffffff;
}


// ===== sym.mdm_probe.3f2debd08d7acb99a985e6098affe835.cfi_jt @ 0x080058d0 (size 8) =====

uint64_t sym.mdm_probe.3f2debd08d7acb99a985e6098affe835.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    code *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = of_match_node(obj.mdm_dt_match,*(param_1 + 0x300));
    if ((uVar1 != 0) && (uVar1 < 0xfffffffffffff001)) {
        iVar4 = *(uVar1 + 0xc0);
        uVar2 = devm_kmalloc(param_1 + 0x10,0x210,0xdc0);
        if ((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) {
            uVar1 = uVar2 & 0xffffffff;
        }
        else {
            pcVar3 = *(iVar4 + 0x10);
            if (5 < (pcVar3 + -0x80058a0 >> 3 | pcVar3 << 0x3d)) {
                __cfi_slowpath_diag(0x12240efbe0a9f8db,pcVar3,0x8001390);
            }
            uVar1 = (*pcVar3)(uVar2,iVar4,param_1);
            *(param_1 + 0xa8) = uVar2;
        }
    }
    return uVar1;
}


// ===== sym.mdm_remove.3f2debd08d7acb99a985e6098affe835.cfi_jt @ 0x080058d8 (size 8) =====

ulong sym.mdm_remove.3f2debd08d7acb99a985e6098affe835.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    if (*(iVar1 + 0x40) != 0) {
        destroy_workqueue();
    }
    sym.esoc_clink_unregister(*(iVar1 + 0x1c0));
    return 0;
}


// ===== sym.esoc_device_get_match_data @ 0x080058e0 (size 116) =====

ulong sym.esoc_device_get_match_data(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    ulong uVar3;
    uint64_t uVar4;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(arg1 + 0x88) + 0xc0);
    uVar4 = uVar1;
    if (0 < uVar1) {
        uVar3 = *(arg1 + -0x20);
        puVar5 = *(*(arg1 + 0x88) + 0xb8) + 8;
        do {
            iVar2 = strcasecmp(uVar3,puVar5[-1]);
            if (iVar2 == 0) {
                return *puVar5;
            }
            puVar5 = puVar5 + 2;
            uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
    }
    return 0xffffffffffffffea;
}


// ===== sym.esoc_bus_match @ 0x08005954 (size 108) =====

ulong sym.esoc_bus_match(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong uVar2;
    uint64_t uVar3;
    ulong *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(arg2 + 0xc0);
    if (0 < *(arg2 + 0xc0)) {
        puVar4 = *(arg2 + 0xb8);
        uVar2 = *(arg1 + -0x20);
        do {
            iVar1 = strcasecmp(uVar2,*puVar4);
            if (iVar1 == 0) {
                return 1;
            }
            uVar3 = uVar3 - 1;
            puVar4 = puVar4 + 2;
        } while (uVar3 != 0);
    }
    return 0;
}


// ===== sym.esoc_for_each_dev @ 0x080059c0 (size 56) =====

void sym.esoc_for_each_dev(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bus_for_each_dev(obj.esoc_bus_type,0,arg1,arg2);
    return;
}


// ===== sym.get_esoc_clink @ 0x080059f8 (size 124) =====

uint64_t sym.get_esoc_clink(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint uStack_1c;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    uStack_1c = arg1;
    uVar3 = bus_find_device(obj.esoc_bus_type,0,&uStack_1c,
                            sym.esoc_clink_match_id.84989022ed7ef2c74ff175de61317727.cfi_jt);
    iVar1 = sp_el0;
    uVar4 = 0;
    if (uVar3 < 0xfffffffffffff001 && uVar3 != 0) {
        uVar4 = uVar3 - 0x20;
    }
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.esoc_clink_match_id;
    if (*(auVar5._0_8_ + 0x398) == *auVar5._8_8_) {
        uVar2 = try_module_get(*(auVar5._0_8_ + 0x3a0));
        uVar4 = uVar2 & 1;
    }
    else {
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.esoc_clink_match_id @ 0x08005a74 (size 68) =====

uint32_t sym.esoc_clink_match_id(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x398) == *arg2) {
        uVar1 = try_module_get(*(arg1 + 0x3a0));
        uVar1 = uVar1 & 1;
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.get_esoc_clink_by_node @ 0x08005ab8 (size 76) =====

int64_t sym.get_esoc_clink_by_node(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = bus_find_device(obj.esoc_bus_type,0,arg1,
                            sym.esoc_clink_match_node.84989022ed7ef2c74ff175de61317727.cfi_jt);
    iVar1 = 0;
    if (uVar2 < 0xfffffffffffff001 && uVar2 != 0) {
        iVar1 = uVar2 - 0x20;
    }
    return iVar1;
}


// ===== sym.esoc_clink_match_node @ 0x08005b04 (size 64) =====

uint32_t sym.esoc_clink_match_node(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x478) == arg2) {
        uVar1 = try_module_get(*(arg1 + 0x3a0));
        uVar1 = uVar1 & 1;
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.put_esoc_clink @ 0x08005b44 (size 40) =====

void sym.put_esoc_clink(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    module_put(*(arg1 + 0x3c0));
    return;
}


// ===== sym.esoc_req_eng_enabled @ 0x08005b6c (size 24) =====

bool sym.esoc_req_eng_enabled(int64_t arg1)

{
    return *(arg1 + 0x3d0) != 0;
}


// ===== sym.esoc_cmd_eng_enabled @ 0x08005b84 (size 24) =====

bool sym.esoc_cmd_eng_enabled(int64_t arg1)

{
    return *(arg1 + 0x3d8) != 0;
}


// ===== sym.esoc_clink_register_rproc @ 0x08005b9c (size 340) =====

uint64_t sym.esoc_clink_register_rproc(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar3 = 0x30;
    }
    uVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,8);
    if ((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) {
        uVar4 = uVar2 & 0xffffffff;
    }
    else {
        snprintf(uVar2,8,"esoc%d",*(arg1 + 0x3b8));
        *(arg1 + 0x310) = *(arg1 + 0x498);
        iVar3 = rproc_alloc(arg1 + 0x20,uVar2,arg1 + 0x408,*(arg1 + 0x3f8),0);
        *(arg1 + 0x400) = iVar3;
        if (iVar3 == 0) {
            _dev_err(arg1 + 0x20,"unable to allocate remoteproc\n");
            uVar4 = 0xfffffff4;
        }
        else {
            *(iVar3 + 0x4c4) = 1;
            *(*(arg1 + 0x400) + 0x4f1) = 0;
            uVar4 = qcom_add_sysmon_subdev(*(arg1 + 0x400),*(arg1 + 0x4b8),*(arg1 + 0x4b0));
            *(arg1 + 0x490) = uVar4;
            if (uVar4 < 0xfffffffffffff001) {
                uVar1 = rproc_add(*(arg1 + 0x400));
                uVar4 = uVar1;
                if (uVar1 == 0) {
                    return 0;
                }
                _dev_err(arg1 + 0x20,"unable to add remoteproc\n");
                qcom_remove_sysmon_subdev(*(arg1 + 0x490));
            }
            else {
                _dev_err(arg1 + 0x20,"Failed to register sysmon\n");
                uVar4 = *(arg1 + 0x490);
            }
        }
        kfree(uVar2);
    }
    return uVar4;
}


// ===== sym.esoc_clink_unregister_rproc @ 0x08005cf0 (size 68) =====

void sym.esoc_clink_unregister_rproc(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    rproc_del(*(arg1 + 0x400));
    qcom_remove_sysmon_subdev(*(arg1 + 0x490));
    rproc_free(*(arg1 + 0x400));
    return;
}


// ===== sym.esoc_clink_request_ssr @ 0x08005d34 (size 72) =====

ulong sym.esoc_clink_request_ssr(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t arg2;
    ulong unaff_x30;
    uchar auVar5 [16];
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x400);
    if (*(iVar1 + 0x4c4) == '\0') {
        rproc_report_crash(iVar1,2);
        return 0;
    }
    auVar5 = panic("Panicking, remoterpoc %s crashed\n",*(iVar1 + 0x18));
    iVar1 = auVar5._8_8_;
    *extraout_x18 = sym.esoc_clink_evt_notify;
    arg2 = auVar5._0_8_ & 0xffffffff;
    uVar2 = _raw_spin_lock_irqsave(iVar1 + 0x3e0);
    sym.notify_esoc_clients(iVar1,arg2);
    iVar3 = *(iVar1 + 0x3d0);
    if ((iVar3 != 0) && (pcVar4 = *(iVar3 + 8), pcVar4 != NULL)) {
        if (1 < (pcVar4 + -0x8005730 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0x66af1fb51be21677,pcVar4,0x8001110);
            iVar3 = *(iVar1 + 0x3d0);
        }
        (*pcVar4)(arg2,iVar3);
    }
    iVar3 = *(iVar1 + 0x3d8);
    if ((iVar3 != 0) && (pcVar4 = *(iVar3 + 8), pcVar4 != NULL)) {
        if (1 < (pcVar4 + -0x8005730 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0x66af1fb51be21677,pcVar4,0x8001130);
            iVar3 = *(iVar1 + 0x3d8);
        }
        (*pcVar4)(arg2,iVar3);
    }
    uVar2 = _raw_spin_unlock_irqrestore(iVar1 + 0x3e0,uVar2);
    return uVar2;
}


// ===== sym.esoc_clink_evt_notify @ 0x08005d7c (size 296) =====

void sym.esoc_clink_evt_notify(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    uint64_t arg2_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2_00 = arg1 & 0xffffffff;
    uVar1 = _raw_spin_lock_irqsave(arg2 + 0x3e0);
    sym.notify_esoc_clients(arg2,arg2_00);
    iVar2 = *(arg2 + 0x3d0);
    if ((iVar2 != 0) && (pcVar3 = *(iVar2 + 8), pcVar3 != NULL)) {
        if (1 < (pcVar3 + -0x8005730 >> 3 | pcVar3 << 0x3d)) {
            __cfi_slowpath_diag(0x66af1fb51be21677,pcVar3,0x8001110);
            iVar2 = *(arg2 + 0x3d0);
        }
        (*pcVar3)(arg2_00,iVar2);
    }
    iVar2 = *(arg2 + 0x3d8);
    if ((iVar2 != 0) && (pcVar3 = *(iVar2 + 8), pcVar3 != NULL)) {
        if (1 < (pcVar3 + -0x8005730 >> 3 | pcVar3 << 0x3d)) {
            __cfi_slowpath_diag(0x66af1fb51be21677,pcVar3,0x8001130);
            iVar2 = *(arg2 + 0x3d8);
        }
        (*pcVar3)(arg2_00,iVar2);
    }
    _raw_spin_unlock_irqrestore(arg2 + 0x3e0,uVar1);
    return;
}


// ===== sym.get_esoc_clink_data @ 0x08005ea4 (size 16) =====

ulong sym.get_esoc_clink_data(int64_t arg1)

{
    return *(arg1 + 1000);
}


// ===== sym.set_esoc_clink_data @ 0x08005eb4 (size 16) =====

void sym.set_esoc_clink_data(int64_t arg1,int64_t arg2)

{
    *(arg1 + 1000) = arg2;
    return;
}


// ===== sym.esoc_clink_queue_request @ 0x08005ec4 (size 180) =====

void sym.esoc_clink_queue_request(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *puVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(arg2 + 0x3e0);
    puVar2 = *(arg2 + 0x3d0);
    if (puVar2 != NULL) {
        pcVar3 = *puVar2;
        if (pcVar3 != sym.__typeid__ZTSFv8esoc_reqP8esoc_engE_global_addr) {
            __cfi_slowpath_diag(0xda511faf81687441,pcVar3,0x8001150);
        }
        (*pcVar3)(arg1 & 0xffffffff,puVar2);
    }
    _raw_spin_unlock_irqrestore(arg2 + 0x3e0,uVar1);
    return;
}


// ===== sym.esoc_set_drv_data @ 0x08005f78 (size 16) =====

void sym.esoc_set_drv_data(int64_t arg1,int64_t arg2)

{
    *(arg1 + 0xb8) = arg2;
    return;
}


// ===== sym.esoc_get_drv_data @ 0x08005f88 (size 16) =====

ulong sym.esoc_get_drv_data(int64_t arg1)

{
    return *(arg1 + 0xb8);
}


// ===== sym.esoc_clink_unregister @ 0x08005f98 (size 104) =====

void sym.esoc_clink_unregister(int64_t arg1)

{
    int64_t arg1_00;
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = arg1 + 0x20;
    iVar1 = get_device(arg1_00);
    if (iVar1 != 0) {
        sym.esoc_clink_del_device(arg1_00);
        device_unregister(arg1_00);
        put_device(arg1_00);
        ida_free(obj.esoc_ida,*(arg1 + 0x3b8));
    }
    return;
}


// ===== sym.esoc_clink_register @ 0x08006000 (size 332) =====

int sym.esoc_clink_register(int64_t arg1)

{
    int64_t arg1_00;
    code *pcVar1;
    int iVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*arg1 == 0) || (*(arg1 + 8) == 0)) || (*(arg1 + 0x3c8) == 0)) {
        _dev_err(*(arg1 + 0x18),"invalid esoc arguments\n");
        iVar3 = -0x16;
    }
    else {
        iVar2 = ida_alloc_range(obj.esoc_ida,0,3,0xcc0);
        iVar3 = iVar2;
        if (-1 < iVar2) {
            arg1_00 = arg1 + 0x20;
            *(arg1 + 0xa0) = obj.esoc_bus_type;
            pcVar1 = obj.esoc_bus;
            if (*(arg1 + 0x18) != NULL) {
                pcVar1 = *(arg1 + 0x18);
            }
            *(arg1 + 0x3b8) = iVar2;
            *(arg1 + 0x350) = sym.esoc_clink_release.84989022ed7ef2c74ff175de61317727.cfi_jt;
            *(arg1 + 0x3e0) = 0;
            *(arg1 + 0x80) = pcVar1;
            dev_set_name(arg1_00,"esoc%d",iVar2);
            iVar3 = device_register(arg1_00);
            if (iVar3 == 0) {
                iVar3 = sym.esoc_clink_add_device(arg1_00);
                if (iVar3 == 0) {
                    return 0;
                }
                device_unregister(arg1_00);
            }
            else {
                _dev_err(*(arg1 + 0x18),"esoc device register failed\n");
                put_device(arg1_00);
            }
        }
        ida_free(obj.esoc_ida,iVar2);
        _printk(0x800384f,*arg1,iVar3);
    }
    return iVar3;
}


// ===== sym.esoc_clink_release @ 0x0800614c (size 68) =====

void sym.esoc_clink_release(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ida_free(obj.esoc_ida,*(arg1 + 0x398));
    kfree(arg1 + -0x20);
    return;
}


// ===== sym.esoc_clink_register_req_eng @ 0x08006190 (size 92) =====

ulong sym.esoc_clink_register_req_eng(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x3d0) == 0) {
        if (*arg2 == 0) {
            uVar1 = 0xffffffea;
        }
        else {
            *(arg1 + 0x3d0) = arg2;
            *(arg2 + 0x10) = arg1;
            sym.esoc_clink_evt_notify(5,arg1);
            uVar1 = 0;
        }
    }
    else {
        uVar1 = 0xfffffff0;
    }
    return uVar1;
}


// ===== sym.esoc_clink_register_cmd_eng @ 0x080061ec (size 76) =====

ulong sym.esoc_clink_register_cmd_eng(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x3d8) == 0) {
        *(arg1 + 0x3d8) = arg2;
        *(arg2 + 0x10) = arg1;
        sym.esoc_clink_evt_notify(7,arg1);
        uVar1 = 0;
    }
    else {
        uVar1 = 0xfffffff0;
    }
    return uVar1;
}


// ===== sym.esoc_clink_unregister_req_eng @ 0x08006238 (size 48) =====

void sym.esoc_clink_unregister_req_eng(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x3d0) = 0;
    sym.esoc_clink_evt_notify(6,arg1);
    return;
}


// ===== sym.esoc_clink_unregister_cmd_eng @ 0x08006268 (size 48) =====

void sym.esoc_clink_unregister_cmd_eng(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x3d8) = 0;
    sym.esoc_clink_evt_notify(8,arg1);
    return;
}


// ===== sym.esoc_driver_register @ 0x08006298 (size 72) =====

void sym.esoc_driver_register(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 8) = obj.esoc_bus_type;
    *(arg1 + 0x38) = sym.esoc_bus_probe.84989022ed7ef2c74ff175de61317727.cfi_jt;
    *(arg1 + 0x48) = sym.esoc_bus_remove.84989022ed7ef2c74ff175de61317727.cfi_jt;
    driver_register();
    return;
}


// ===== sym.esoc_bus_probe @ 0x080062e0 (size 168) =====

int sym.esoc_bus_probe(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x88);
    pcVar3 = *(iVar2 + 200);
    if (1 < (pcVar3 + -0x8005798 >> 3 | pcVar3 << 0x3d)) {
        __cfi_slowpath_diag(0xf577ffc9c1a0eb7,pcVar3,0x8001170);
    }
    iVar1 = (*pcVar3)(arg1 + -0x20,iVar2);
    if (iVar1 != 0) {
        _printk(0x800197d,*(arg1 + -0x20));
    }
    return iVar1;
}


// ===== sym.esoc_bus_remove @ 0x08006388 (size 168) =====

int sym.esoc_bus_remove(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x88);
    pcVar3 = *(iVar2 + 0xd0);
    if (1 < (pcVar3 + -0x8005798 >> 3 | pcVar3 << 0x3d)) {
        __cfi_slowpath_diag(0xf577ffc9c1a0eb7,pcVar3,0x8001190);
    }
    iVar1 = (*pcVar3)(arg1 + -0x20,iVar2);
    if (iVar1 != 0) {
        _printk(0x80032d9,*(arg1 + -0x20));
    }
    return iVar1;
}


// ===== sym.esoc_driver_unregister @ 0x08006430 (size 36) =====

void sym.esoc_driver_unregister(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    driver_unregister();
    return;
}


// ===== sym.esoc_name_show @ 0x08006454 (size 64) =====

int64_t sym.esoc_name_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x14,0x8001c4e,*(arg1 + -0x20));
    return iVar1;
}


// ===== sym.esoc_link_show @ 0x08006494 (size 64) =====

int64_t sym.esoc_link_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x14,0x8001c4e,*(arg1 + -0x18));
    return iVar1;
}


// ===== sym.esoc_link_info_show @ 0x080064d4 (size 64) =====

int64_t sym.esoc_link_info_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x14,0x8001c4e,*(arg1 + -0x10));
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x08006514 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08006558

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
    //switch table (4 cases) at 0x8001550
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800656c);
    (*pcVar1)();
}


// ===== sym.esoc_udev_handle_clink_req @ 0x0800656c (size 372) =====

uint64_t sym.esoc_udev_handle_clink_req(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t *puVar5;
    int iVar6;
    uint64_t uVar7;
    ulong uVar8;
    uint64_t *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *unaff_x21;
    ulong unaff_x22;
    int64_t iVar10;
    ulong *puVar11;
    code *pcVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uint uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    code *pcStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    code *pcStack_68;
    uint64_t uStack_60;
    uint64_t uStack_58;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_48 = *(iVar10 + 0x5e0);
    iVar10 = *(arg2 + 0x10);
    uVar3 = *(iVar10 + 0x3b8);
    _raw_spin_lock(obj.esoc_udev_list_lock);
    for (pcVar12 = _obj.esoc_udev_list; pcVar12 != obj.esoc_udev_list; pcVar12 = *pcVar12) {
        if (*(*(pcVar12 + 0x10) + 0x3b8) == uVar3) {
            _raw_spin_unlock(obj.esoc_udev_list_lock);
            if (pcVar12 == 0x78) goto code_r0x080065ec;
            unaff_x21 = pcVar12 + -0x40;
            uStack_4c = arg1;
            unaff_x22 = _raw_spin_lock_irqsave(unaff_x21);
            iVar6 = __kfifo_in(pcVar12 + -0x70,&uStack_4c,4);
            _raw_spin_unlock_irqrestore(unaff_x21,unaff_x22);
            if (iVar6 != 4) {
                uVar7 = ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),
                                       "[%s]: Unable to queue request %d; err: %d\n","esoc_udev_handle_clink_req",
                                       arg1 & 0xffffffff,iVar6);
                return uVar7;
            }
            uVar7 = __wake_up(pcVar12 + -0x58,1,1,0);
            uVar3 = 4;
            goto code_r0x08006608;
        }
    }
    _raw_spin_unlock(obj.esoc_udev_list_lock);
code_r0x080065ec:
    uVar7 = ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),"[%s]: esoc_udev not found\n",
                           "esoc_udev_handle_clink_req");
code_r0x08006608:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return uVar7;
    }
    auVar13 = __stack_chk_fail();
    *extraout_x18 = sym.esoc_udev_handle_clink_evt;
    pcStack_88 = sym.esoc_udev_handle_clink_evt;
    iVar4 = sp_el0;
    iStack_98 = *(iVar4 + 0x5e0);
    puVar11 = *(auVar13._8_8_ + 0x10);
    iVar6 = *(puVar11 + 0x77);
    puStack_90 = &stack0xffffffffffffffc0;
    pcStack_80 = pcVar12;
    iStack_78 = iVar10;
    uStack_70 = unaff_x22;
    pcStack_68 = unaff_x21;
    uStack_60 = uVar3;
    uStack_58 = arg1 & 0xffffffff;
    _raw_spin_lock(obj.esoc_udev_list_lock);
    for (pcVar12 = _obj.esoc_udev_list; pcVar12 != obj.esoc_udev_list; pcVar12 = *pcVar12) {
        if (*(*(pcVar12 + 0x10) + 0x3b8) == iVar6) {
            _raw_spin_unlock(obj.esoc_udev_list_lock);
            if (pcVar12 == 0x78) goto code_r0x08006760;
            uStack_9c = auVar13._0_4_;
            uVar8 = _raw_spin_lock_irqsave(pcVar12 + -8);
            iVar6 = __kfifo_in(pcVar12 + -0x38,&uStack_9c,4);
            _raw_spin_unlock_irqrestore(pcVar12 + -8,uVar8);
            if (iVar6 == 4) {
                uVar7 = __wake_up(pcVar12 + -0x20,1,1,0);
            }
            else {
                ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),"[%s]: Unable to queue event %d; err: %d\n",
                               "esoc_udev_handle_clink_evt",auVar13._0_8_ & 0xffffffff,iVar6);
                uVar7 = _printk(0x80020f7,*puVar11);
            }
            goto code_r0x0800677c;
        }
    }
    _raw_spin_unlock(obj.esoc_udev_list_lock);
code_r0x08006760:
    uVar7 = ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),"[%s]: esoc_udev not found\n",
                           "esoc_udev_handle_clink_evt");
code_r0x0800677c:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_98) {
        return uVar7;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18_00 = sym.esoc_clink_add_device;
    if (*(iVar10 + 0x398) < 0x101) {
        puVar9 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x90);
        if (puVar9 == NULL) {
            puVar9 = 0xfffffffffffffff4;
        }
        else {
            puVar11 = iVar10 - 0x20;
            puVar1 = puVar9 + 1;
            iVar6 = __kfifo_alloc(puVar1,0x20,1,0xcc0);
            if (iVar6 == 0) {
                iVar6 = __kfifo_alloc(puVar9 + 8,0x10,1,0xcc0);
                if (iVar6 == 0) {
                    __init_waitqueue_head(puVar9 + 4,"&esoc_udev->req_wait",obj.get_free_esoc_udev.__key);
                    __init_waitqueue_head(puVar9 + 0xb,"&esoc_udev->evt_wait",obj.get_free_esoc_udev.__key);
                    *(puVar9 + 7) = 0;
                    *(puVar9 + 0xe) = 0;
                    puVar9[0x11] = puVar11;
                    _raw_spin_lock(obj.esoc_udev_list_lock);
                    puVar5 = *0x8000d50;
                    puVar2 = puVar9 + 0xf;
                    uVar7 = __list_add_valid(puVar2,*0x8000d50,obj.esoc_udev_list);
                    if ((uVar7 & 1) != 0) {
                        *0x8000d50 = puVar2;
                        puVar9[0xf] = obj.esoc_udev_list;
                        puVar9[0x10] = puVar5;
                        *puVar5 = puVar2;
                    }
                    _raw_spin_unlock(obj.esoc_udev_list_lock);
                    if (puVar9 < 0xfffffffffffff001) {
                        uVar7 = device_create(CONCAT44(*0x8000004,_segment.ehdr),iVar10,
                                              *(iVar10 + 0x398) | _segment.ehdr << 0x14,puVar11,"esoc-%d");
                        *puVar9 = uVar7;
                        if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
                            _printk(0x8002e6d);
                            _raw_spin_lock(obj.esoc_udev_list_lock);
                            uVar7 = __list_del_entry_valid(puVar2);
                            if ((uVar7 & 1) != 0) {
                                uVar7 = puVar9[0xf];
                                puVar2 = puVar9[0x10];
                                *(uVar7 + 8) = puVar2;
                                *puVar2 = uVar7;
                            }
                            puVar9[0xf] = 0xdead000000000100;
                            puVar9[0x10] = 0xdead000000000122;
                            _raw_spin_unlock(obj.esoc_udev_list_lock);
                            __kfifo_free(puVar1);
                            __kfifo_free(puVar9 + 8);
                            kfree(puVar9);
                            puVar9 = 0xffffffed;
                        }
                        else {
                            puVar9 = NULL;
                        }
                    }
                    goto code_r0x080069b0;
                }
                _printk(0x800388d,*puVar11);
                __kfifo_free(puVar1);
            }
            else {
                _printk(0x8002c56,*puVar11);
            }
            kfree(puVar9);
            puVar9 = 0xffffffffffffffed;
        }
    }
    else {
        _printk(0x80026c6);
        puVar9 = 0xffffffffffffffed;
    }
code_r0x080069b0:
    return puVar9 & 0xffffffff;
}


// ===== sym.esoc_udev_handle_clink_evt @ 0x080066e0 (size 372) =====

uint64_t sym.esoc_udev_handle_clink_evt(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint64_t *puVar2;
    uint64_t *puVar3;
    int iVar4;
    uint64_t uVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar9;
    code *pcVar10;
    ulong unaff_x30;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    puVar9 = *(arg2 + 0x10);
    iVar4 = *(puVar9 + 0x77);
    _raw_spin_lock(obj.esoc_udev_list_lock);
    for (pcVar10 = _obj.esoc_udev_list; pcVar10 != obj.esoc_udev_list; pcVar10 = *pcVar10) {
        if (*(*(pcVar10 + 0x10) + 0x3b8) == iVar4) {
            _raw_spin_unlock(obj.esoc_udev_list_lock);
            if (pcVar10 == 0x78) goto code_r0x08006760;
            uStack_4c = arg1;
            uVar6 = _raw_spin_lock_irqsave(pcVar10 + -8);
            iVar4 = __kfifo_in(pcVar10 + -0x38,&uStack_4c,4);
            _raw_spin_unlock_irqrestore(pcVar10 + -8,uVar6);
            if (iVar4 == 4) {
                uVar5 = __wake_up(pcVar10 + -0x20,1,1,0);
            }
            else {
                ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),"[%s]: Unable to queue event %d; err: %d\n",
                               "esoc_udev_handle_clink_evt",arg1 & 0xffffffff,iVar4);
                uVar5 = _printk(0x80020f7,*puVar9);
            }
            goto code_r0x0800677c;
        }
    }
    _raw_spin_unlock(obj.esoc_udev_list_lock);
code_r0x08006760:
    uVar5 = ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),"[%s]: esoc_udev not found\n",
                           "esoc_udev_handle_clink_evt");
code_r0x0800677c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return uVar5;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.esoc_clink_add_device;
    if (*(iVar7 + 0x398) < 0x101) {
        puVar8 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x90);
        if (puVar8 == NULL) {
            puVar8 = 0xfffffffffffffff4;
        }
        else {
            puVar9 = iVar7 - 0x20;
            puVar1 = puVar8 + 1;
            iVar4 = __kfifo_alloc(puVar1,0x20,1,0xcc0);
            if (iVar4 == 0) {
                iVar4 = __kfifo_alloc(puVar8 + 8,0x10,1,0xcc0);
                if (iVar4 == 0) {
                    __init_waitqueue_head(puVar8 + 4,"&esoc_udev->req_wait",obj.get_free_esoc_udev.__key);
                    __init_waitqueue_head(puVar8 + 0xb,"&esoc_udev->evt_wait",obj.get_free_esoc_udev.__key);
                    *(puVar8 + 7) = 0;
                    *(puVar8 + 0xe) = 0;
                    puVar8[0x11] = puVar9;
                    _raw_spin_lock(obj.esoc_udev_list_lock);
                    puVar3 = *0x8000d50;
                    puVar2 = puVar8 + 0xf;
                    uVar5 = __list_add_valid(puVar2,*0x8000d50,obj.esoc_udev_list);
                    if ((uVar5 & 1) != 0) {
                        *0x8000d50 = puVar2;
                        puVar8[0xf] = obj.esoc_udev_list;
                        puVar8[0x10] = puVar3;
                        *puVar3 = puVar2;
                    }
                    _raw_spin_unlock(obj.esoc_udev_list_lock);
                    if (puVar8 < 0xfffffffffffff001) {
                        uVar5 = device_create(CONCAT44(*0x8000004,_segment.ehdr),iVar7,
                                              *(iVar7 + 0x398) | _segment.ehdr << 0x14,puVar9,"esoc-%d");
                        *puVar8 = uVar5;
                        if ((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) {
                            _printk(0x8002e6d);
                            _raw_spin_lock(obj.esoc_udev_list_lock);
                            uVar5 = __list_del_entry_valid(puVar2);
                            if ((uVar5 & 1) != 0) {
                                uVar5 = puVar8[0xf];
                                puVar2 = puVar8[0x10];
                                *(uVar5 + 8) = puVar2;
                                *puVar2 = uVar5;
                            }
                            puVar8[0xf] = 0xdead000000000100;
                            puVar8[0x10] = 0xdead000000000122;
                            _raw_spin_unlock(obj.esoc_udev_list_lock);
                            __kfifo_free(puVar1);
                            __kfifo_free(puVar8 + 8);
                            kfree(puVar8);
                            puVar8 = 0xffffffed;
                        }
                        else {
                            puVar8 = NULL;
                        }
                    }
                    goto code_r0x080069b0;
                }
                _printk(0x800388d,*puVar9);
                __kfifo_free(puVar1);
            }
            else {
                _printk(0x8002c56,*puVar9);
            }
            kfree(puVar8);
            puVar8 = 0xffffffffffffffed;
        }
    }
    else {
        _printk(0x80026c6);
        puVar8 = 0xffffffffffffffed;
    }
code_r0x080069b0:
    return puVar8 & 0xffffffff;
}


// ===== sym.esoc_clink_add_device @ 0x08006854 (size 576) =====

uint64_t sym.esoc_clink_add_device(int64_t arg1)

{
    uint64_t *puVar1;
    uint64_t *puVar2;
    uint64_t *puVar3;
    int iVar4;
    uint64_t *puVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x398) < 0x101) {
        puVar5 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x90);
        if (puVar5 == NULL) {
            puVar5 = 0xfffffffffffffff4;
        }
        else {
            puVar7 = arg1 - 0x20;
            puVar1 = puVar5 + 1;
            iVar4 = __kfifo_alloc(puVar1,0x20,1,0xcc0);
            if (iVar4 == 0) {
                iVar4 = __kfifo_alloc(puVar5 + 8,0x10,1,0xcc0);
                if (iVar4 == 0) {
                    __init_waitqueue_head(puVar5 + 4,"&esoc_udev->req_wait",obj.get_free_esoc_udev.__key);
                    __init_waitqueue_head(puVar5 + 0xb,"&esoc_udev->evt_wait",obj.get_free_esoc_udev.__key);
                    *(puVar5 + 7) = 0;
                    *(puVar5 + 0xe) = 0;
                    puVar5[0x11] = puVar7;
                    _raw_spin_lock(obj.esoc_udev_list_lock);
                    puVar3 = *0x8000d50;
                    puVar2 = puVar5 + 0xf;
                    uVar6 = __list_add_valid(puVar2,*0x8000d50,obj.esoc_udev_list);
                    if ((uVar6 & 1) != 0) {
                        *0x8000d50 = puVar2;
                        puVar5[0xf] = obj.esoc_udev_list;
                        puVar5[0x10] = puVar3;
                        *puVar3 = puVar2;
                    }
                    _raw_spin_unlock(obj.esoc_udev_list_lock);
                    if (puVar5 < 0xfffffffffffff001) {
                        uVar6 = device_create(CONCAT44(*0x8000004,_segment.ehdr),arg1,
                                              *(arg1 + 0x398) | _segment.ehdr << 0x14,puVar7,"esoc-%d");
                        *puVar5 = uVar6;
                        if ((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) {
                            _printk(0x8002e6d);
                            _raw_spin_lock(obj.esoc_udev_list_lock);
                            uVar6 = __list_del_entry_valid(puVar2);
                            if ((uVar6 & 1) != 0) {
                                uVar6 = puVar5[0xf];
                                puVar2 = puVar5[0x10];
                                *(uVar6 + 8) = puVar2;
                                *puVar2 = uVar6;
                            }
                            puVar5[0xf] = 0xdead000000000100;
                            puVar5[0x10] = 0xdead000000000122;
                            _raw_spin_unlock(obj.esoc_udev_list_lock);
                            __kfifo_free(puVar1);
                            __kfifo_free(puVar5 + 8);
                            kfree(puVar5);
                            puVar5 = 0xffffffed;
                        }
                        else {
                            puVar5 = NULL;
                        }
                    }
                    goto code_r0x080069b0;
                }
                _printk(0x800388d,*puVar7);
                __kfifo_free(puVar1);
            }
            else {
                _printk(0x8002c56,*puVar7);
            }
            kfree(puVar5);
            puVar5 = 0xffffffffffffffed;
        }
    }
    else {
        _printk(0x80026c6);
        puVar5 = 0xffffffffffffffed;
    }
code_r0x080069b0:
    return puVar5 & 0xffffffff;
}


// ===== sym.esoc_clink_del_device @ 0x08006a94 (size 276) =====

ulong sym.esoc_clink_del_device(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x398);
    _raw_spin_lock(obj.esoc_udev_list_lock);
    pcVar5 = _obj.esoc_udev_list;
    while( true ) {
        if (pcVar5 == obj.esoc_udev_list) {
            _raw_spin_unlock(obj.esoc_udev_list_lock);
            return 0;
        }
        if (*(*(pcVar5 + 0x10) + 0x3b8) == iVar3) break;
        pcVar5 = *pcVar5;
    }
    _raw_spin_unlock(obj.esoc_udev_list_lock);
    if (pcVar5 + -0x78 == NULL) {
        return 0;
    }
    device_destroy(CONCAT44(*0x8000004,_segment.ehdr),*(arg1 + 0x398) | _segment.ehdr << 0x14);
    _raw_spin_lock(obj.esoc_udev_list_lock);
    uVar4 = __list_del_entry_valid(pcVar5);
    if ((uVar4 & 1) != 0) {
        iVar1 = *pcVar5;
        piVar2 = *(pcVar5 + 8);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *pcVar5 = -0x2152ffffffffff00;
    *(pcVar5 + 8) = -0x2152fffffffffede;
    _raw_spin_unlock(obj.esoc_udev_list_lock);
    __kfifo_free(pcVar5 + -0x70);
    __kfifo_free(pcVar5 + -0x38);
    kfree(pcVar5 + -0x78);
    return 0;
}


// ===== sym.esoc_dev_init @ 0x08006ba8 (size 208) =====

uint64_t sym.esoc_dev_init(void)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = __class_create(obj.__this_module,"esoc-dev",obj.esoc_udev_list_lock);
    if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
        _printk(0x8002e8d);
        uVar2 = _segment.ehdr & 0xffffffff;
    }
    else {
        iVar1 = __register_chrdev(0,0,0x100,"esoc",obj.esoc_dev_fops);
        _segment.ehdr = CONCAT44(*0x8000004,iVar1);
        if (iVar1 < 0) {
            _printk(0x8003423);
            class_destroy(_segment.ehdr);
        }
        else {
            bus_for_each_dev(obj.esoc_bus_type,0,0,sym.esoc_clink_add_device.cfi_jt);
        }
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.esoc_dev_exit @ 0x08006c78 (size 72) =====

void sym.esoc_dev_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
    __unregister_chrdev(_segment.ehdr,0,0x100,"esoc");
    return;
}


// ===== sym.esoc_dev_ioctl @ 0x08006cc0 (size 3752) =====

code * sym.esoc_dev_ioctl(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint32_t *puVar2;
    uint *puVar3;
    bool bVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    ulong uVar8;
    uint32_t uVar9;
    char *pcVar10;
    code *pcVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *arg1_00;
    uint uVar14;
    code *pcVar15;
    ulong *puVar16;
    int64_t iVar17;
    ulong *puVar18;
    ulong unaff_x30;
    int aiStack_90 [2];
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    uint uStack_64;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_58 = *(iVar17 + 0x5e0);
    pcVar15 = 0xffffffffffffffea;
    puVar18 = *(arg1 + 0xd8);
    uStack_60 = 0;
    uStack_64 = 0;
    arg1_00 = *puVar18;
    puVar16 = arg1_00[0x79];
    if (arg2 < 0xcc07) {
        if (arg2 + 0x7ffb33fe < 5) {
            iVar17 = puVar18[4];
    //switch table (5 cases) at 0x80042b0
            switch(*((arg2 + 0x7ffb33fe) * 4 + 0x80042b0) + 0x8006d9c) {
            case 0x8006db0:
                if (arg1_00[0x7a] == puVar18 + 1) {
                    ipc_log_string(_segment.ehdr,"[%s]: ESOC_WAIT_FOR_REQ: Waiting for req event to arrive.\n",
                                   "esoc_dev_ioctl");
                    pcVar11 = arg3;
                    if (*(iVar17 + 8) == *(iVar17 + 0xc)) {
                        uStack_78 = 0;
                        uStack_70 = 0;
                        uStack_88 = 0;
                        uStack_80 = 0;
                        aiStack_90[0] = 0;
                        aiStack_90[1] = 0;
                        init_wait_entry(&stack0xffffffffffffff70,0);
                        while (iVar7 = prepare_to_wait_event(iVar17 + 0x20,&stack0xffffffffffffff70,1),
                              *(iVar17 + 8) == *(iVar17 + 0xc)) {
                            if (iVar7 != 0) {
                                if (iVar7 == 0) goto code_r0x08007810;
                                goto code_r0x080078d0;
                            }
                            schedule();
                        }
                        finish_wait(iVar17 + 0x20,&stack0xffffffffffffff70);
                    }
code_r0x08007810:
                    uVar8 = _raw_spin_lock_irqsave(iVar17 + 0x38);
                    iVar6 = __kfifo_out(iVar17 + 8,&stack0xffffffffffffffa0,4);
                    _raw_spin_unlock_irqrestore(iVar17 + 0x38,uVar8);
                    if (iVar6 == 4) {
                        puVar16 = sp_el0;
                        if (((*(puVar16 + 0x3e) >> 5 & 1) != 0) || (uVar12 = arg3, (*puVar16 >> 0x1a & 1) != 0)) {
                            uVar12 = arg3 & (arg3 << 8) >> 8;
                        }
                        bVar4 = 0xfffffffffffffffb < uVar12;
                        uVar12 = uVar12 + 4;
                        uVar13 = 0;
                        if (!bVar4 || uVar12 == 0) {
                            uVar13 = 0x7fffffffff;
                        }
                        if (bVar4) {
                            uVar12 = 0xffffffffffffffff;
                        }
                        if (!CARRY8(uVar12,~uVar13) && !CARRY8(uVar12 + ~uVar13,bVar4) || uVar12 == uVar13 + !bVar4) {
                            if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
                                arg3 = 0;
                            }
                            uVar14 = uStack_60;
                            pcVar11 = uStack_60 & 0xffffffff;
                            sym.uaccess_ttbr0_enable();
                            *arg3 = uVar14;
                            sym.uaccess_ttbr0_disable(0);
                            arg1_00 = arg3;
                        }
                        ipc_log_string(_segment.ehdr,"[%s]: ESOC_WAIT_FOR_REQ: Event arrived: %u\n","esoc_dev_ioctl",
                                       uStack_60 & 0xffffffff);
                        iVar7 = 4;
code_r0x080078d0:
                        pcVar15 = iVar7;
                        arg3 = pcVar11;
                    }
                    else {
                        ipc_log_string(_segment.ehdr,"[%s]: ESOC_WAIT_FOR_REQ: Failed to read the event\n",
                                       "esoc_dev_ioctl");
                        _printk(0x8003139,*arg1_00);
                        pcVar15 = 0xfffffffffffffffb;
                    }
                }
                else {
                    ipc_log_string(_segment.ehdr,"[%s]: ESOC_WAIT_FOR_REQ: Failed to access\n","esoc_dev_ioctl");
                    pcVar15 = 0xfffffffffffffff3;
                }
                break;
            case 0x8006ed8:
                ipc_log_string(_segment.ehdr,"[%s]: ESOC_WAIT_FOR_CRASH: Waiting for evt to arrive..\n",
                               "esoc_dev_ioctl");
                if (*(iVar17 + 0x40) == *(iVar17 + 0x44)) {
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    aiStack_90[0] = 0;
                    aiStack_90[1] = 0;
                    init_wait_entry(&stack0xffffffffffffff70,0);
                    while (iVar7 = prepare_to_wait_event(iVar17 + 0x58,&stack0xffffffffffffff70,1),
                          *(iVar17 + 0x40) == *(iVar17 + 0x44)) {
                        if (iVar7 != 0) {
                            if (iVar7 == 0) goto code_r0x08007648;
                            goto code_r0x08007790;
                        }
                        schedule();
                    }
                    finish_wait(iVar17 + 0x58,&stack0xffffffffffffff70);
                }
code_r0x08007648:
                uVar8 = _raw_spin_lock_irqsave(iVar17 + 0x70);
                iVar6 = __kfifo_out(iVar17 + 0x40,&stack0xffffffffffffff9c,4);
                _raw_spin_unlock_irqrestore(iVar17 + 0x70,uVar8);
                if (iVar6 == 4) {
                    puVar16 = sp_el0;
                    if (((*(puVar16 + 0x3e) >> 5 & 1) != 0) || (uVar12 = arg3, (*puVar16 >> 0x1a & 1) != 0)) {
                        uVar12 = arg3 & (arg3 << 8) >> 8;
                    }
                    bVar4 = 0xfffffffffffffffb < uVar12;
                    uVar12 = uVar12 + 4;
                    uVar13 = 0;
                    if (!bVar4 || uVar12 == 0) {
                        uVar13 = 0x7fffffffff;
                    }
                    if (bVar4) {
                        uVar12 = 0xffffffffffffffff;
                    }
                    if (!CARRY8(uVar12,~uVar13) && !CARRY8(uVar12 + ~uVar13,bVar4) || uVar12 == uVar13 + !bVar4) {
                        puVar3 = arg3;
                        if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
                            puVar3 = NULL;
                        }
                        if ((_bus_for_each_dev >> 0x18 & 1) == 0) {
                            uVar12 = daif;
                            if ((uVar12 & 0x80) == 0) {
                                uVar13 = daif;
                                daif = uVar13 | 0xc0;
                            }
                            uVar13 = ttbr1_el1;
                            ttbr1_el1 = puVar16[1] & 0xffff000000000000 | uVar13 & 0xffffffffffff;
                            InstructionSynchronizationBarrier();
                            ttbr0_el1 = puVar16[1];
                            InstructionSynchronizationBarrier();
                            daif = uVar12;
                        }
                        *puVar3 = uStack_64;
                        if ((_bus_for_each_dev >> 0x18 & 1) == 0) {
                            uVar12 = daif;
                            if ((uVar12 & 0x80) == 0) {
                                uVar13 = daif;
                                daif = uVar13 | 0xc0;
                            }
                            uVar13 = ttbr1_el1;
                            ttbr0_el1 = (uVar13 & 0xffffffffffff) - 0x1000;
                            InstructionSynchronizationBarrier();
                            ttbr1_el1 = uVar13 & 0xffffffffffff;
                            InstructionSynchronizationBarrier();
                            daif = uVar12;
                        }
                    }
                    ipc_log_string(_segment.ehdr,"[%s]: ESOC_WAIT_FOR_CRASH: Event arrived: %u\n","esoc_dev_ioctl",
                                   uStack_64);
                    iVar7 = 4;
code_r0x08007790:
                    pcVar15 = iVar7;
                }
                else {
                    ipc_log_string(_segment.ehdr,"[%s]: ESOC_WAIT_FOR_CRASH: Failed to read event\n","esoc_dev_ioctl")
                    ;
                    _printk(0x8003db5,*arg1_00);
                    pcVar15 = 0xfffffffffffffffb;
                }
                break;
            case 0x8006f4c:
                pcVar15 = puVar16[1];
                if (1 < (pcVar15 + -0x8005870 >> 3 | pcVar15 << 0x3d)) goto code_r0x080079e0;
                goto code_r0x08006f68;
            case 0x8007094:
                pcVar15 = puVar16[2];
                if (1 < (pcVar15 + -0x8005870 >> 3 | pcVar15 << 0x3d)) {
                    __cfi_slowpath_diag(0x997313d0b90b9ffb,pcVar15,0x8001210);
                }
                (*pcVar15)(&stack0xffffffffffffffa4,arg1_00);
                ipc_log_string(_segment.ehdr,"[%s]: ESOC_GET_ERR_FATAL: Sending err_fatal status from esoc: %u\n",
                               "esoc_dev_ioctl",uStack_60._4_4_);
                puVar16 = sp_el0;
                if (((*(puVar16 + 0x3e) >> 5 & 1) != 0) || (uVar12 = arg3, (*puVar16 >> 0x1a & 1) != 0)) {
                    uVar12 = arg3 & (arg3 << 8) >> 8;
                }
                pcVar15 = NULL;
                bVar4 = 0xfffffffffffffffb < uVar12;
                uVar12 = uVar12 + 4;
                uVar13 = 0;
                if (!bVar4 || uVar12 == 0) {
                    uVar13 = 0x7fffffffff;
                }
                if (bVar4) {
                    uVar12 = 0xffffffffffffffff;
                }
                if (!CARRY8(uVar12,~uVar13) && !CARRY8(uVar12 + ~uVar13,bVar4) || uVar12 == uVar13 + !bVar4) {
                    puVar3 = arg3;
                    if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
                        puVar3 = NULL;
                    }
                    if ((_bus_for_each_dev >> 0x18 & 1) == 0) {
                        uVar12 = daif;
                        if ((uVar12 & 0x80) == 0) {
                            uVar13 = daif;
                            daif = uVar13 | 0xc0;
                        }
                        uVar13 = ttbr1_el1;
                        ttbr1_el1 = puVar16[1] & 0xffff000000000000 | uVar13 & 0xffffffffffff;
                        InstructionSynchronizationBarrier();
                        ttbr0_el1 = puVar16[1];
                        InstructionSynchronizationBarrier();
                        daif = uVar12;
                    }
                    *puVar3 = uStack_60._4_4_;
                    pcVar15 = NULL;
                    if ((_bus_for_each_dev >> 0x18 & 1) == 0) {
                        uVar12 = daif;
                        if ((uVar12 & 0x80) == 0) {
                            uVar13 = daif;
                            daif = uVar13 | 0xc0;
                        }
                        uVar13 = ttbr1_el1;
                        pcVar15 = NULL;
                        ttbr0_el1 = (uVar13 & 0xffffffffffff) - 0x1000;
                        InstructionSynchronizationBarrier();
                        ttbr1_el1 = uVar13 & 0xffffffffffff;
                        InstructionSynchronizationBarrier();
                        daif = uVar12;
                    }
                }
            }
        }
        else if (arg2 == 0xc010cc09) {
            aiStack_90[0] = 0;
            aiStack_90[1] = 0;
            uStack_88 = 0;
            if (arg3 == 0) {
                pcVar15 = 0xffffffffffffffea;
                pcVar10 = "Missing argument for link id\n";
            }
            else {
                iVar17 = sym._copy_from_user(&stack0xffffffffffffff70,arg3);
                if (iVar17 == 0) {
                    if (aiStack_90[0] == 0) {
                        iVar17 = arg1_00[0x95];
                        if ((iVar17 == 0) || (pcVar15 = *(iVar17 + 0x28), pcVar15 == NULL)) {
                            pcVar15 = 0xffffffffffffffea;
                            pcVar10 = "Client hooks not registered for the device\n";
                        }
                        else {
                            __cfi_slowpath_diag(0x23044101be64e432,pcVar15,0x8001230);
                            uStack_88 = (*pcVar15)(*(iVar17 + 8));
                            iVar17 = sym._copy_to_user(arg3);
                            if (iVar17 == 0) {
                                pcVar15 = NULL;
                                goto code_r0x08007970;
                            }
                            pcVar15 = 0xfffffffffffffff2;
                            pcVar10 = "Failed to send the data to the user\n";
                        }
                    }
                    else {
                        pcVar15 = 0xffffffffffffffea;
                        pcVar10 = "Invalid client identifier passed\n";
                    }
                }
                else {
                    pcVar15 = 0xfffffffffffffff2;
                    pcVar10 = "Unable to copy the data from the user\n";
                }
            }
            _dev_err(arg1_00 + 4,pcVar10);
        }
    }
    else if (arg2 + 0xbffb33ff < 0xb) {
    //switch table (11 cases) at 0x80042c4
        uVar5 = _bus_for_each_dev;
        switch(*((arg2 + 0xbffb33ff) * 4 + 0x80042c4) + 0x8006d34) {
        case 0x8006d48:
            if (arg1_00[0x7b] == puVar18 + 1) {
                puVar18 = sp_el0;
                if (((*(puVar18 + 0x3e) >> 5 & 1) != 0) || (uVar12 = arg3, (*puVar18 >> 0x1a & 1) != 0)) {
                    uVar12 = arg3 & (arg3 << 8) >> 8;
                }
                bVar4 = 0xfffffffffffffffb < uVar12;
                uVar12 = uVar12 + 4;
                uVar13 = 0;
                if (!bVar4 || uVar12 == 0) {
                    uVar13 = 0x7fffffffff;
                }
                if (bVar4) {
                    uVar12 = 0xffffffffffffffff;
                }
                if ((CARRY8(uVar12,~uVar13) || CARRY8(uVar12 + ~uVar13,bVar4)) && uVar12 != uVar13 + !bVar4) {
                    arg3 = 0;
                }
                else {
                    if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
                        arg3 = 0;
                    }
                    sym.uaccess_ttbr0_enable();
                    arg3 = *arg3;
                    sym.uaccess_ttbr0_disable(0);
                }
                ipc_log_string(_segment.ehdr,"[%s]: ESOC_CMD_EXE: Executing esoc command: %u\n","esoc_dev_ioctl",arg3
                              );
                pcVar15 = *puVar16;
                if (pcVar15 != sym.__typeid__ZTSFi8esoc_cmdP10esoc_clinkE_global_addr) {
                    __cfi_slowpath_diag(0xa0f7794370a928b7,pcVar15,0x80011b0);
                }
                iVar6 = (*pcVar15)(arg3,arg1_00);
                pcVar15 = iVar6;
            }
            else {
                ipc_log_string(_segment.ehdr,"[%s]: ESOC_CMD_EXE failed to access\n","esoc_dev_ioctl");
                pcVar15 = 0xfffffffffffffff3;
            }
            break;
        case 0x80071dc:
            puVar16 = sp_el0;
            uVar12 = (arg3 << 8) >> 8;
            if (((*(puVar16 + 0x3e) >> 5 & 1) != 0) || (uVar13 = arg3, (*puVar16 >> 0x1a & 1) != 0)) {
                uVar13 = arg3 & uVar12;
            }
            uVar9 = 0;
            bVar4 = 0xfffffffffffffffb < uVar13;
            uVar13 = uVar13 + 4;
            uVar1 = 0;
            if (!bVar4 || uVar13 == 0) {
                uVar1 = 0x7fffffffff;
            }
            if (bVar4) {
                uVar13 = 0xffffffffffffffff;
            }
            if (!CARRY8(uVar13,~uVar1) && !CARRY8(uVar13 + ~uVar1,bVar4) || uVar13 == uVar1 + !bVar4) {
                puVar2 = arg3;
                if ((arg3 & uVar12 & 0xffffff8000000000) != 0) {
                    puVar2 = NULL;
                }
                if ((uVar5 >> 0x18 & 1) == 0) {
                    uVar12 = daif;
                    if ((uVar12 & 0x80) == 0) {
                        uVar13 = daif;
                        daif = uVar13 | 0xc0;
                    }
                    uVar13 = ttbr1_el1;
                    ttbr1_el1 = puVar16[1] & 0xffff000000000000 | uVar13 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    ttbr0_el1 = puVar16[1];
                    InstructionSynchronizationBarrier();
                    daif = uVar12;
                }
                uVar9 = *puVar2;
                if ((uVar5 >> 0x18 & 1) == 0) {
                    uVar12 = daif;
                    if ((uVar12 & 0x80) == 0) {
                        uVar13 = daif;
                        daif = uVar13 | 0xc0;
                    }
                    uVar13 = ttbr1_el1;
                    ttbr0_el1 = (uVar13 & 0xffffffffffff) - 0x1000;
                    InstructionSynchronizationBarrier();
                    ttbr1_el1 = uVar13 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    daif = uVar12;
                }
            }
            iVar6 = sym.esoc_set_n_pon_tries(arg1_00,uVar9);
            pcVar15 = iVar6;
            break;
        case 0x80072dc:
            puVar18 = sp_el0;
            if (((*(puVar18 + 0x3e) >> 5 & 1) != 0) || (uVar12 = arg3, (*puVar18 >> 0x1a & 1) != 0)) {
                uVar12 = arg3 & (arg3 << 8) >> 8;
            }
            uVar14 = 0;
            bVar4 = 0xfffffffffffffffb < uVar12;
            uVar12 = uVar12 + 4;
            uVar13 = 0;
            if (!bVar4 || uVar12 == 0) {
                uVar13 = 0x7fffffffff;
            }
            if (bVar4) {
                uVar12 = 0xffffffffffffffff;
            }
            if (!CARRY8(uVar12,~uVar13) && !CARRY8(uVar12 + ~uVar13,bVar4) || uVar12 == uVar13 + !bVar4) {
                if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
                    arg3 = 0;
                }
                if ((uVar5 >> 0x18 & 1) == 0) {
                    uVar12 = daif;
                    if ((uVar12 & 0x80) == 0) {
                        uVar13 = daif;
                        daif = uVar13 | 0xc0;
                    }
                    uVar13 = ttbr1_el1;
                    ttbr1_el1 = puVar18[1] & 0xffff000000000000 | uVar13 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    ttbr0_el1 = puVar18[1];
                    InstructionSynchronizationBarrier();
                    daif = uVar12;
                }
                uVar14 = *arg3;
                if ((uVar5 >> 0x18 & 1) == 0) {
                    uVar12 = daif;
                    if ((uVar12 & 0x80) == 0) {
                        uVar13 = daif;
                        daif = uVar13 | 0xc0;
                    }
                    uVar13 = ttbr1_el1;
                    ttbr0_el1 = (uVar13 & 0xffffffffffff) - 0x1000;
                    InstructionSynchronizationBarrier();
                    ttbr1_el1 = uVar13 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    daif = uVar12;
                }
            }
            ipc_log_string(_segment.ehdr,"[%s]: ESOC_NOTIFY: Notifying esoc about cmd: %u\n","esoc_dev_ioctl",uVar14)
            ;
            arg3 = puVar16[3];
            if (arg3 != sym.__typeid__ZTSFv11esoc_notifyP10esoc_clinkE_global_addr) {
                __cfi_slowpath_diag(0x190ba2fe57e749ba,arg3,0x80011d0);
            }
            (*arg3)(uVar14,arg1_00);
            pcVar15 = NULL;
            break;
        case 0x8007418:
            puVar16 = sp_el0;
            if (((*(puVar16 + 0x3e) >> 5 & 1) != 0) || (uVar12 = arg3, (*puVar16 >> 0x1a & 1) != 0)) {
                uVar12 = arg3 & (arg3 << 8) >> 8;
            }
            uVar9 = 0;
            bVar4 = 0xfffffffffffffffb < uVar12;
            uVar12 = uVar12 + 4;
            uVar13 = 0;
            if (!bVar4 || uVar12 == 0) {
                uVar13 = 0x7fffffffff;
            }
            if (bVar4) {
                uVar12 = 0xffffffffffffffff;
            }
            if (!CARRY8(uVar12,~uVar13) && !CARRY8(uVar12 + ~uVar13,bVar4) || uVar12 == uVar13 + !bVar4) {
                puVar2 = arg3;
                if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
                    puVar2 = NULL;
                }
                if ((uVar5 >> 0x18 & 1) == 0) {
                    uVar12 = daif;
                    if ((uVar12 & 0x80) == 0) {
                        uVar13 = daif;
                        daif = uVar13 | 0xc0;
                    }
                    uVar13 = ttbr1_el1;
                    ttbr1_el1 = puVar16[1] & 0xffff000000000000 | uVar13 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    ttbr0_el1 = puVar16[1];
                    InstructionSynchronizationBarrier();
                    daif = uVar12;
                }
                uVar9 = *puVar2;
                if ((uVar5 >> 0x18 & 1) == 0) {
                    uVar12 = daif;
                    if ((uVar12 & 0x80) == 0) {
                        uVar13 = daif;
                        daif = uVar13 | 0xc0;
                    }
                    uVar13 = ttbr1_el1;
                    ttbr0_el1 = (uVar13 & 0xffffffffffff) - 0x1000;
                    InstructionSynchronizationBarrier();
                    ttbr1_el1 = uVar13 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    daif = uVar12;
                }
            }
            iVar6 = sym.esoc_set_boot_fail_action(arg1_00,uVar9);
            pcVar15 = iVar6;
        }
    }
    else if (arg2 == 0xcc08) {
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_REG_CMD_ENG\n","esoc_dev_ioctl");
        uVar5 = sym.esoc_clink_register_cmd_eng(arg1_00,puVar18 + 1);
        if (uVar5 == 0) {
            pcVar15 = NULL;
            *(puVar18 + 0x29) = 1;
            arg3 = segment.ehdr;
        }
        else {
            arg1_00 = uVar5;
            ipc_log_string(_segment.ehdr,"[%s]: ESOC_REG_CMD_ENG failed: %d\n","esoc_dev_ioctl",arg1_00);
            pcVar15 = uVar5;
            arg3 = segment.ehdr;
        }
    }
    else if (arg2 == 0xcc07) {
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_REG_REQ_ENG\n","esoc_dev_ioctl");
        uVar5 = sym.esoc_clink_register_req_eng(arg1_00,puVar18 + 1);
        if (uVar5 == 0) {
            pcVar15 = NULL;
            *(puVar18 + 5) = 1;
            arg3 = segment.ehdr;
        }
        else {
            arg1_00 = uVar5;
            ipc_log_string(_segment.ehdr,"[%s]: ESOC_REG_REQ_ENG failed: %d\n","esoc_dev_ioctl",arg1_00);
            pcVar15 = uVar5;
            arg3 = segment.ehdr;
        }
    }
code_r0x08007970:
    while (iVar17 = sp_el0, *(iVar17 + 0x5e0) != iStack_58) {
        __stack_chk_fail();
code_r0x080079e0:
        __cfi_slowpath_diag(0x997313d0b90b9ffb,pcVar15,0x80011f0);
code_r0x08006f68:
        (*pcVar15)(&stack0xffffffffffffffa4,arg1_00);
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_GET_STATUS: Sending the status from esoc: %u\n","esoc_dev_ioctl",
                       uStack_60._4_4_);
        puVar16 = sp_el0;
        if (((*(puVar16 + 0x3e) >> 5 & 1) != 0) || (pcVar11 = arg3, (*puVar16 >> 0x1a & 1) != 0)) {
            pcVar11 = arg3 & (arg3 << 8) >> 8;
        }
        pcVar15 = NULL;
        bVar4 = 0xfffffffffffffffb < pcVar11;
        pcVar11 = pcVar11 + 4;
        uVar12 = 0;
        if (!bVar4 || pcVar11 == NULL) {
            uVar12 = 0x7fffffffff;
        }
        if (bVar4) {
            pcVar11 = 0xffffffffffffffff;
        }
        if (!CARRY8(pcVar11,~uVar12) && !CARRY8(pcVar11 + ~uVar12,bVar4) || pcVar11 == uVar12 + !bVar4) {
            pcVar15 = arg3;
            if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
                pcVar15 = NULL;
            }
            if ((_bus_for_each_dev >> 0x18 & 1) == 0) {
                uVar12 = daif;
                if ((uVar12 & 0x80) == 0) {
                    uVar13 = daif;
                    daif = uVar13 | 0xc0;
                }
                uVar13 = ttbr1_el1;
                ttbr1_el1 = puVar16[1] & 0xffff000000000000 | uVar13 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar16[1];
                InstructionSynchronizationBarrier();
                daif = uVar12;
            }
            *pcVar15 = uStack_60._4_4_;
            pcVar15 = NULL;
            if ((_bus_for_each_dev >> 0x18 & 1) == 0) {
                uVar12 = daif;
                if ((uVar12 & 0x80) == 0) {
                    uVar13 = daif;
                    daif = uVar13 | 0xc0;
                }
                uVar13 = ttbr1_el1;
                pcVar15 = NULL;
                ttbr0_el1 = (uVar13 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar13 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar12;
            }
        }
    }
    return pcVar15;
}


// ===== sym.esoc_dev_open @ 0x08007cd0 (size 404) =====

ulong sym.esoc_dev_open(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong uVar5;
    ulong *in_x18;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg1 + 0x4c);
    _raw_spin_lock(obj.esoc_udev_list_lock);
    if (_obj.esoc_udev_list != obj.esoc_udev_list) {
        pcVar6 = _obj.esoc_udev_list;
        do {
            if (*(*(pcVar6 + 0x10) + 0x3b8) == (uVar2 & 0xfffff)) {
                _raw_spin_unlock(obj.esoc_udev_list_lock);
                if (pcVar6 + -0x78 == NULL) goto code_r0x08007df8;
                iVar3 = sym.get_esoc_clink(*(*(pcVar6 + 0x10) + 0x3b8));
                if (iVar3 != 0) {
                    iVar1 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar1 = 0x30;
                    }
                    piVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x30);
                    if (piVar4 == NULL) {
                        module_put(*(iVar3 + 0x3c0));
                        return 0xfffffff4;
                    }
                    piVar4[4] = pcVar6 + -0x78;
                    *piVar4 = iVar3;
                    piVar4[1] = sym.__typeid__ZTSFv8esoc_reqP8esoc_engE_global_addr;
                    uVar5 = _segment.ehdr;
                    iVar3 = sp_el0;
                    piVar4[2] = sym.esoc_udev_handle_clink_evt.cfi_jt;
                    *(arg2 + 0xd8) = piVar4;
                    ipc_log_string(uVar5,"[%s]: %s successfully attached to esoc driver\n","esoc_dev_open",
                                   iVar3 + 0x7a8);
                    return 0;
                }
                ipc_log_string(_segment.ehdr,"[%s]: failed to get clink\n","esoc_dev_open");
                uVar5 = 0x8002857;
                goto code_r0x08007e44;
            }
            pcVar6 = *pcVar6;
        } while (pcVar6 != obj.esoc_udev_list);
    }
    _raw_spin_unlock(obj.esoc_udev_list_lock);
code_r0x08007df8:
    ipc_log_string(_segment.ehdr,"[%s]: failed to get udev\n","esoc_dev_open");
    uVar5 = 0x8003dd8;
code_r0x08007e44:
    _printk(uVar5);
    return 0xfffffff4;
}


// ===== sym.esoc_dev_release @ 0x08007e64 (size 260) =====

ulong sym.esoc_dev_release(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(arg1 + 0xd8);
    iVar2 = *piVar1;
    if (piVar1[5] == '\0') {
        ipc_log_string(_segment.ehdr,"[%s]: No req_eng to unregister\n","esoc_dev_release");
    }
    else {
        ipc_log_string(_segment.ehdr,"[%s]: Unregistering req_eng\n","esoc_dev_release");
        *(iVar2 + 0x3d0) = 0;
        sym.esoc_clink_evt_notify(6,iVar2);
    }
    if (*(piVar1 + 0x29) == '\0') {
        ipc_log_string(_segment.ehdr,"[%s]: No cmd_eng to unregister\n","esoc_dev_release");
    }
    else {
        ipc_log_string(_segment.ehdr,"[%s]: Unregistering cmd_eng\n","esoc_dev_release");
        *(iVar2 + 0x3d8) = 0;
        sym.esoc_clink_evt_notify(8,iVar2);
    }
    *(piVar1 + 5) = 0;
    module_put(*(iVar2 + 0x3c0));
    kfree(piVar1);
    iVar2 = sp_el0;
    ipc_log_string(_segment.ehdr,"[%s]: %s Unregistered with esoc\n","esoc_dev_release",iVar2 + 0x7a8);
    return 0;
}


// ===== sym.uaccess_ttbr0_enable @ 0x08007f68 (size 112) =====

void sym.uaccess_ttbr0_enable(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    if ((_bus_for_each_dev >> 0x18 & 1) == 0) {
        uVar2 = daif;
        if ((uVar2 & 0x80) == 0) {
            uVar3 = daif;
            daif = uVar3 | 0xc0;
        }
        iVar1 = sp_el0;
        uVar3 = ttbr1_el1;
        ttbr1_el1 = *(iVar1 + 8) & 0xffff000000000000 | uVar3 & 0xffffffffffff;
        InstructionSynchronizationBarrier();
        ttbr0_el1 = *(iVar1 + 8);
        InstructionSynchronizationBarrier();
        daif = uVar2;
    }
    return;
}


// ===== sym.uaccess_ttbr0_disable @ 0x08007ff8 (size 100) =====

void sym.uaccess_ttbr0_disable(void)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    if ((_bus_for_each_dev >> 0x18 & 1) == 0) {
        uVar1 = daif;
        if ((uVar1 & 0x80) == 0) {
            uVar2 = daif;
            daif = uVar2 | 0xc0;
        }
        uVar2 = ttbr1_el1;
        ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
        InstructionSynchronizationBarrier();
        ttbr1_el1 = uVar2 & 0xffffffffffff;
        InstructionSynchronizationBarrier();
        daif = uVar1;
    }
    return;
}


// ===== sym._copy_from_user @ 0x08008078 (size 364) =====

int64_t sym._copy_from_user(int64_t arg1,int64_t arg2)

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
    bVar4 = 0xffffffffffffffef < uVar6;
    uVar6 = uVar6 + 0x10;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    if ((CARRY8(uVar6,~uVar1) || CARRY8(uVar6 + ~uVar1,bVar4)) && uVar6 != uVar1 + !bVar4) {
        iVar5 = 0x10;
    }
    else {
        if ((_bus_for_each_dev >> 0x18 & 1) == 0) {
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
        iVar5 = __arch_copy_from_user(arg1,arg2,0x10);
        if ((_bus_for_each_dev >> 0x18 & 1) == 0) {
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
        if (iVar5 == 0) {
            return 0;
        }
    }
    memset((arg1 - iVar5) + 0x10,0,iVar5);
    return iVar5;
}


// ===== sym._copy_to_user @ 0x08008220 (size 320) =====

ulong sym._copy_to_user(int64_t arg1)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    ulong in_x1;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg1 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar6 = arg1, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar6 = arg1 & uVar3;
    }
    uVar5 = 0x10;
    bVar4 = 0xffffffffffffffef < uVar6;
    uVar6 = uVar6 + 0x10;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar6,~uVar1) && !CARRY8(uVar6 + ~uVar1,bVar4) || uVar6 == uVar1 + !bVar4) {
        if ((_bus_for_each_dev >> 0x18 & 1) == 0) {
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
        if ((arg1 & uVar3 & 0xffffff8000000000) != 0) {
            arg1 = 0;
        }
        uVar5 = __arch_copy_to_user(arg1,in_x1,0x10);
        if ((_bus_for_each_dev >> 0x18 & 1) == 0) {
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
    return uVar5;
}


// ===== sym.devm_register_esoc_client @ 0x0800839c (size 732) =====

uint64_t * sym.devm_register_esoc_client(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    uint32_t *puVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    char *pcVar9;
    ulong *extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar10;
    uint64_t *puVar11;
    int iVar12;
    ulong unaff_x30;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    uVar10 = *(arg1 + 0x2f0);
    uStack_60 = 0;
    uVar3 = kasprintf(0xcc0,"esoc-%d",0);
    puVar11 = 0xfffffffffffffff4;
    if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
        iVar12 = 0;
        while( true ) {
            puVar4 = of_get_property(uVar10,uVar3,0);
            if (puVar4 == NULL) {
                _dev_err(arg1,"esoc device not present\n");
                kfree(uVar3);
                puVar11 = NULL;
                goto code_r0x08008568;
            }
            iVar2 = of_property_read_string_helper(uVar10,"esoc-names",&uStack_60,1,iVar12);
            if (iVar2 < 0) {
                _dev_err(arg1,"cannot find matching string\n");
                kfree(uVar3);
                puVar11 = NULL;
                goto code_r0x08008568;
            }
            iVar2 = strcmp(uStack_60,arg2);
            if (iVar2 == 0) break;
            kfree(uVar3);
            iVar12 = iVar12 + 1;
            uVar3 = kasprintf(0xcc0,"esoc-%d",iVar12);
            puVar11 = 0xfffffffffffffff4;
            if ((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) goto code_r0x08008568;
        }
        kfree(uVar3);
        uVar1 = (*puVar4 & 0xff00ff00) >> 8 | (*puVar4 & 0xff00ff) << 8;
        iVar5 = of_find_node_by_phandle(uVar1 >> 0x10 | uVar1 << 0x10);
        uVar3 = sym.get_esoc_clink_by_node(iVar5);
        if ((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) {
            _dev_err(arg1,"matching esoc clink not present\n");
            puVar11 = 0xfffffffffffffdfb;
        }
        else {
            uVar6 = kasprintf(0xcc0,"esoc%d",*(uVar3 + 0x3b8));
            if ((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) {
                pcVar9 = "unable to allocate esoc name\n";
code_r0x08008664:
                _dev_err(arg1,pcVar9);
                puVar11 = 0xfffffffffffffff4;
            }
            else {
                uVar7 = kasprintf(0xcc0,0x8001c4e,*(uVar3 + 8));
                if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
                    _dev_err(arg1,"unable to allocate esoc link name\n");
                }
                else {
                    uVar8 = kasprintf(0xcc0,0x8001c4e,*(uVar3 + 0x10));
                    if ((uVar8 != 0) && (uVar8 < 0xfffffffffffff001)) {
                        puVar11 = __devres_alloc_node(sym.devm_esoc_desc_release.73c7e5d36e8a3d84b5ab2d61716898c8.cfi_jt
                                                      ,0x20,0xcc0,0xffffffff,"devm_esoc_desc_release");
                        if ((puVar11 == NULL) || (0xfffffffffffff000 < puVar11)) {
                            kfree(uVar6);
                            kfree(uVar7);
                            kfree(uVar8);
                            pcVar9 = "unable to allocate esoc descriptor\n";
                            goto code_r0x08008664;
                        }
                        *puVar11 = uVar6;
                        puVar11[1] = uVar7;
                        puVar11[2] = uVar8;
                        puVar11[3] = uVar3;
                        devres_add(arg1,puVar11);
                        goto code_r0x08008568;
                    }
                    _dev_err(arg1,"unable to alloc link info name\n");
                    kfree(uVar6);
                    uVar6 = uVar7;
                }
                kfree(uVar6);
                puVar11 = 0xfffffffffffffff4;
            }
        }
    }
code_r0x08008568:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_58) {
        __stack_chk_fail();
        *extraout_x18 = sym.devm_esoc_desc_release;
        kfree(*extraout_x1);
        kfree(extraout_x1[1]);
        puVar11 = module_put(*(extraout_x1[3] + 0x3c0));
        return puVar11;
    }
    return puVar11;
}


// ===== sym.devm_esoc_desc_release @ 0x08008678 (size 72) =====

void sym.devm_esoc_desc_release(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(*arg1);
    kfree(*(arg1 + 8));
    module_put(*(*(arg1 + 0x18) + 0x3c0));
    return;
}


// ===== sym.devm_unregister_esoc_client @ 0x080086c0 (size 64) =====

void sym.devm_unregister_esoc_client(ulong noname_0,int64_t arg1)

{
    code *pcVar1;
    uint in_w0;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = devres_release(in_w0,sym.devm_esoc_desc_release.73c7e5d36e8a3d84b5ab2d61716898c8.cfi_jt,
                           sym.devm_esoc_desc_match.73c7e5d36e8a3d84b5ab2d61716898c8.cfi_jt,arg1);
    if (iVar2 == 0) {
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8008700);
    (*pcVar1)();
}


// ===== sym.devm_esoc_desc_match @ 0x08008704 (size 20) =====

bool sym.devm_esoc_desc_match(ulong noname_0,uint32_t arg1,int64_t arg2)

{
    return arg1 == arg2;
}


// ===== sym.esoc_register_client_notifier @ 0x08008718 (size 48) =====

void sym.esoc_register_client_notifier(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    atomic_notifier_chain_register(obj.get_free_esoc_udev.__key,arg1);
    return;
}


// ===== sym.notify_esoc_clients @ 0x08008748 (size 160) =====

ulong sym.notify_esoc_clients(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uVar2 = _raw_spin_lock_irqsave(obj.notify_lock);
    uStack_3c = *(arg1 + 0x3b8);
    atomic_notifier_call_chain(obj.get_free_esoc_udev.__key,arg2,&uStack_3c);
    uVar2 = _raw_spin_unlock_irqrestore(obj.notify_lock,uVar2);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    auVar5 = __stack_chk_fail();
    uVar3 = auVar5._8_8_;
    uVar4 = auVar5._0_8_;
    uVar2 = 0xffffffea;
    if ((((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) && (uVar2 = 0xffffffea, uVar3 != 0)) &&
       (uVar3 < 0xfffffffffffff001)) {
        uVar4 = *(uVar4 + 0x18);
        uVar2 = 0xffffffea;
        if ((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) {
            if ((*(uVar3 + 0x10) != 0) || (*(uVar4 + 0x4a8) != 0)) {
                return 0xffffffea;
            }
            uVar2 = 0;
            *(uVar4 + 0x4a8) = uVar3;
        }
    }
    return uVar2;
}


// ===== sym.esoc_register_client_hook @ 0x080087e8 (size 104) =====

ulong sym.esoc_register_client_hook(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    uVar2 = arg2;
    uVar1 = 0xffffffea;
    if ((((arg1 != 0) && (arg1 < 0xfffffffffffff001)) && (uVar1 = 0xffffffea, uVar2 != 0)) &&
       (uVar2 < 0xfffffffffffff001)) {
        uVar3 = *(arg1 + 0x18);
        uVar1 = 0xffffffea;
        if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
            if ((*(uVar2 + 0x10) != 0) || (*(uVar3 + 0x4a8) != 0)) {
                return 0xffffffea;
            }
            uVar1 = 0;
            *(uVar3 + 0x4a8) = uVar2;
        }
    }
    return uVar1;
}


// ===== sym.esoc_unregister_client_hook @ 0x08008850 (size 104) =====

ulong sym.esoc_unregister_client_hook(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    uVar2 = arg2;
    uVar1 = 0xffffffea;
    if ((((arg1 != 0) && (arg1 < 0xfffffffffffff001)) && (uVar1 = 0xffffffea, uVar2 != 0)) &&
       (uVar2 < 0xfffffffffffff001)) {
        uVar3 = *(arg1 + 0x18);
        uVar1 = 0xffffffea;
        if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
            if ((*(uVar2 + 0x10) != 0) || (*(uVar3 + 0x4a8) == 0)) {
                return 0xffffffea;
            }
            uVar1 = 0;
            *(uVar3 + 0x4a8) = 0;
        }
    }
    return uVar1;
}


// ===== sym.qpnp_pon_wd_config @ 0x080088b8 (size 16) =====

ulong sym.qpnp_pon_wd_config(void)

{
    return 0xffffffed;
}


// ===== sym.mdm4x_do_first_power_on @ 0x080088c8 (size 520) =====

int sym.mdm4x_do_first_power_on(int64_t arg1)

{
    ulong *puVar1;
    int iVar2;
    int iVar3;
    ulong uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    code *pcVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"[%s]: Powering on modem for the first time\n","mdm4x_do_first_power_on");
    if (*(*(arg1 + 0x1c0) + 0x4a0) == '\0') {
        if (0 < *(arg1 + 0x1a0)) {
            iVar7 = 0;
            uVar5 = 0;
            do {
                puVar1 = *(arg1 + 0x198) + iVar7;
                regulator_set_voltage(*puVar1,*(puVar1 + 1),0x7fffffff);
                puVar1 = *(arg1 + 0x198) + iVar7;
                regulator_set_load(*puVar1,*(puVar1 + 0xc));
                iVar2 = regulator_enable(*(*(arg1 + 0x198) + iVar7));
                if (iVar2 != 0) {
                    _dev_err(*(arg1 + 0x150),"Failed to enable regulator %d (rc:%d)\n",uVar5 & 0xffffffff,iVar2);
                    ipc_log_string(_segment.ehdr,"[%s]: Failed to enable regulator %d (rc:%d)\n",
                                   "mdm4x_do_first_power_on",uVar5 & 0xffffffff,iVar2);
                    return iVar2;
                }
                uVar5 = uVar5 + 1;
                iVar7 = iVar7 + 0x10;
            } while (uVar5 < *(arg1 + 0x1a0));
        }
        pcVar6 = *(*(arg1 + 0x200) + 8);
        if (pcVar6 != NULL) {
            if (2 < (pcVar6 + -0x8005850 >> 3 | pcVar6 << 0x3d)) {
                __cfi_slowpath_diag(0xc03e31212b9a8ab6,pcVar6,0x8001250);
            }
            (*pcVar6)(arg1,0);
        }
        msleep(0x96);
        ipc_log_string(_segment.ehdr,"[%s]: Setting AP2MDM_STATUS = 1\n","mdm4x_do_first_power_on");
        uVar4 = gpio_to_desc(*(arg1 + 4));
        gpiod_direction_output_raw(uVar4,1);
        if (*(arg1 + 0x28) < 0x200) {
            gpio_to_desc();
            iVar2 = gpiod_get_raw_value();
            if (iVar2 == 0) {
                iVar2 = 0x14;
                do {
                    usleep_range_state(5000,6000,2);
                    iVar2 = iVar2 + -1;
                    if (iVar2 == 0) break;
                    gpio_to_desc(*(arg1 + 0x28));
                    iVar3 = gpiod_get_raw_value();
                } while (iVar3 == 0);
            }
            msleep(200);
        }
        else {
            ipc_log_string(_segment.ehdr,"[%s]: Queueing the request: ESOC_REQ_IMG\n","mdm4x_do_first_power_on");
            sym.esoc_clink_queue_request(1,*(arg1 + 0x1c0));
        }
    }
    return 0;
}


// ===== sym.mdm9x55_toggle_soft_reset @ 0x08008ad0 (size 184) =====

ulong sym.mdm9x55_toggle_soft_reset(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x184);
    iVar2 = *(arg1 + 0x1bc);
    uVar3 = gpio_to_desc(*(arg1 + 8));
    gpiod_direction_output_raw(uVar3,iVar1 != 0);
    if ((arg2 & 1U) == 0) {
        iVar2 = iVar2 * 1000;
        usleep_range_state(iVar2,iVar2 + 100000,2);
    }
    else {
        uVar4 = *(arg1 + 0x1bc);
        if (*(arg1 + 0x1bc) != 0) {
            do {
                uVar4 = uVar4 - 1;
                __const_udelay(0x418958);
            } while (uVar4 != 0);
        }
    }
    uVar3 = gpio_to_desc(*(arg1 + 8));
    gpiod_direction_output_raw(uVar3,iVar1 == 0);
    return 0;
}


// ===== sym.mdm9x55_power_down @ 0x08008b88 (size 112) =====

ulong sym.mdm9x55_power_down(int64_t arg1)

{
    bool bVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bVar1 = *(arg1 + 0x184) == 0;
    uVar2 = gpio_to_desc(*(arg1 + 8));
    gpiod_direction_output_raw(uVar2,!bVar1);
    msleep(0x196);
    uVar2 = gpio_to_desc(*(arg1 + 8));
    gpiod_direction_output_raw(uVar2,bVar1);
    return 0;
}


// ===== sym.mdm9x55_cold_reset @ 0x08008bf8 (size 124) =====

void sym.mdm9x55_cold_reset(int64_t arg1)

{
    int iVar1;
    bool bVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x184);
    uVar3 = gpio_to_desc(*(arg1 + 8));
    gpiod_direction_output_raw(uVar3,iVar1 != 0);
    iVar4 = -0x14e;
    do {
        __const_udelay(0x418958);
        bVar2 = iVar4 != -1;
        iVar4 = iVar4 + 1;
    } while (bVar2);
    iVar1 = *(arg1 + 0x184);
    uVar3 = gpio_to_desc(*(arg1 + 8));
    gpiod_direction_output_raw(uVar3,iVar1 == 0);
    return;
}


// ===== sym.mdm9x55_pon_dt_init @ 0x08008c74 (size 224) =====

ulong sym.mdm9x55_pon_dt_init(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar3;
    ulong uVar4;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_3c = 1;
    uVar4 = *(*(arg1 + 0x150) + 0x2f0);
    iVar1 = of_property_read_variable_u32_array(uVar4,"qcom,reset-time-ms",arg1 + 0x1bc,1,0);
    if (iVar1 < 0) {
        *(arg1 + 0x1bc) = 0xcb;
    }
    iVar1 = of_get_named_gpio_flags(uVar4,"qcom,ap2mdm-soft-reset-gpio",0,&uStack_3c);
    if (iVar1 < 0) {
        uVar4 = 0xfffffffb;
    }
    else {
        *(arg1 + 8) = iVar1;
        if ((uStack_3c & 1) == 0) {
            uVar4 = 0;
        }
        else {
            uVar4 = 0;
            *(arg1 + 0x184) = 1;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    iVar2 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.mdm4x_pon_setup;
    if (*(iVar2 + 8) < 0x200) {
        uVar3 = *(iVar2 + 0x150);
        uVar4 = gpio_request(*(iVar2 + 8),"AP2MDM_SOFT_RESET");
        if (uVar4 != 0) {
            _dev_err(uVar3,"Cannot config AP2MDM_SOFT_RESET gpio\n");
            uVar4 = 0xfffffffb;
        }
    }
    else {
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.mdm4x_pon_setup @ 0x08008d54 (size 104) =====

ulong sym.mdm4x_pon_setup(uint32_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 8);
    if (uVar1 < 0x200) {
        uVar3 = *(arg1 + 0x150);
        uVar2 = gpio_request(uVar1,"AP2MDM_SOFT_RESET");
        if (uVar2 != 0) {
            _dev_err(uVar3,"Cannot config AP2MDM_SOFT_RESET gpio\n");
            uVar2 = 0xfffffffb;
        }
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.sdx50m_toggle_soft_reset @ 0x08008dbc (size 284) =====

ulong sym.sdx50m_toggle_soft_reset(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    bool bVar2;
    uint uVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = _segment.ehdr;
    bVar2 = *(arg1 + 0x184) == 0;
    gpio_to_desc(*(arg1 + 8));
    uVar3 = gpiod_get_raw_value();
    ipc_log_string(uVar4,"[%s]: RESET GPIO value (before doing a reset): %d\n","sdx50m_toggle_soft_reset",uVar3);
    ipc_log_string(_segment.ehdr,"[%s]: Setting AP2MDM_SOFT_RESET = %d\n","sdx50m_toggle_soft_reset",!bVar2);
    uVar4 = gpio_to_desc(*(arg1 + 8));
    gpiod_direction_output_raw(uVar4,!bVar2);
    if ((arg2 & 1U) == 0) {
        usleep_range_state(80000,180000,2);
    }
    else {
        iVar5 = -100;
        do {
            __const_udelay(0x418958);
            bVar1 = iVar5 != -1;
            iVar5 = iVar5 + 1;
        } while (bVar1);
    }
    ipc_log_string(_segment.ehdr,"[%s]: Setting AP2MDM_SOFT_RESET = %d\n","sdx50m_toggle_soft_reset",bVar2);
    uVar4 = gpio_to_desc(*(arg1 + 8));
    gpiod_direction_output_raw(uVar4,bVar2);
    return 0;
}


// ===== sym.sdx50m_power_down @ 0x08008ed8 (size 132) =====

ulong sym.sdx50m_power_down(int64_t arg1)

{
    bool bVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bVar1 = *(arg1 + 0x184) != 0;
    ipc_log_string(_segment.ehdr,"[%s]: Setting AP2MDM_SOFT_RESET = %d\n","sdx50m_power_down",bVar1);
    uVar2 = gpio_to_desc(*(arg1 + 8));
    gpiod_direction_output_raw(uVar2,bVar1);
    uVar2 = gpio_to_desc(*(arg1 + 8));
    gpiod_direction_output_raw(uVar2,bVar1);
    msleep(300);
    return 0;
}


// ===== sym.sdx50m_cold_reset @ 0x08008f5c (size 208) =====

void sym.sdx50m_cold_reset(int64_t arg1)

{
    int iVar1;
    bool bVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"[%s]: Setting AP2MDM_SOFT_RESET = %d\n","sdx50m_cold_reset",*(arg1 + 0x184) != 0);
    iVar1 = *(arg1 + 0x184);
    uVar3 = gpio_to_desc(*(arg1 + 8));
    gpiod_direction_output_raw(uVar3,iVar1 != 0);
    iVar4 = -600;
    do {
        __const_udelay(0x418958);
        bVar2 = iVar4 != -1;
        iVar4 = iVar4 + 1;
    } while (bVar2);
    ipc_log_string(_segment.ehdr,"[%s]: Setting AP2MDM_SOFT_RESET = %d\n","sdx50m_cold_reset",*(arg1 + 0x184) != 0);
    iVar1 = *(arg1 + 0x184);
    uVar3 = gpio_to_desc(*(arg1 + 8));
    gpiod_direction_output_raw(uVar3,iVar1 == 0);
    return;
}


// ===== sym.mdm4x_pon_dt_init @ 0x0800902c (size 168) =====

ulong sym.mdm4x_pon_dt_init(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 1;
    iVar1 = of_get_named_gpio_flags(*(*(arg1 + 0x150) + 0x2f0),"qcom,ap2mdm-soft-reset-gpio",0,&uStack_2c);
    if (iVar1 < 0) {
        uVar2 = 0xfffffffb;
    }
    else {
        *(arg1 + 8) = iVar1;
        if ((uStack_2c & 1) == 0) {
            uVar2 = 0;
        }
        else {
            uVar2 = 0;
            *(arg1 + 0x184) = 1;
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return uVar2;
    }
    iVar3 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.sdx55m_toggle_soft_reset;
    ipc_log_string(_segment.ehdr,"[%s]: Doing a Warm reset using SPMI\n","sdx55m_toggle_soft_reset");
    _dev_err(*(iVar3 + 0x150),"SPMI warm reset failed\n");
    ipc_log_string(_segment.ehdr,"[%s]: SPMI warm reset failed\n","sdx55m_toggle_soft_reset");
    return 0xffffffed;
}


// ===== sym.sdx55m_toggle_soft_reset @ 0x080090d4 (size 124) =====

ulong sym.sdx55m_toggle_soft_reset(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"[%s]: Doing a Warm reset using SPMI\n","sdx55m_toggle_soft_reset");
    _dev_err(*(arg1 + 0x150),"SPMI warm reset failed\n");
    ipc_log_string(_segment.ehdr,"[%s]: SPMI warm reset failed\n","sdx55m_toggle_soft_reset");
    return 0xffffffed;
}


// ===== sym.sdx55m_power_down @ 0x08009150 (size 148) =====

ulong sym.sdx55m_power_down(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"[%s]: Performing warm reset as cold reset is not supported\n","sdx55m_power_down");
    ipc_log_string(_segment.ehdr,"[%s]: Doing a Warm reset using SPMI\n","sdx55m_toggle_soft_reset");
    _dev_err(*(arg1 + 0x150),"SPMI warm reset failed\n");
    ipc_log_string(_segment.ehdr,"[%s]: SPMI warm reset failed\n","sdx55m_toggle_soft_reset");
    return 0xffffffed;
}


// ===== sym.mdm_disable_irqs @ 0x080091e4 (size 164) =====

void sym.mdm_disable_irqs(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return;
    }
    ipc_log_string(_segment.ehdr,"[%s]: Disabling the interrupts\n","mdm_disable_irqs");
    uVar2 = *(arg1 + 0x1d0);
    uVar1 = uVar2;
    if ((uVar2 & 1) == 0) {
        disable_irq_nosync(*(arg1 + 0x188));
        uVar2 = *(arg1 + 0x1d0) | 1;
        *(arg1 + 0x1d0) = uVar2;
        uVar1 = uVar2;
    }
    if ((uVar1 >> 1 & 1) == 0) {
        disable_irq_nosync(*(arg1 + 0x18c));
        uVar2 = *(arg1 + 0x1d0) | 2;
        *(arg1 + 0x1d0) = uVar2;
        uVar1 = uVar2;
    }
    else {
        uVar1 = uVar2;
    }
    if ((uVar1 >> 2 & 1) == 0) {
        disable_irq_nosync(*(arg1 + 400));
        *(arg1 + 0x1d0) = *(arg1 + 0x1d0) | 4;
    }
    return;
}


// ===== sym.mdm_wait_for_status_low @ 0x08009288 (size 324) =====

void sym.mdm_wait_for_status_low(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"[%s]: Waiting for MDM2AP_STATUS to go LOW\n","mdm_wait_for_status_low");
    uVar2 = sched_clock();
    do {
        gpio_to_desc(*(arg1 + 0x2c));
        iVar1 = gpiod_get_raw_value();
        if (iVar1 == 0) {
            ipc_log_string(_segment.ehdr,"[%s]: MDM2AP_STATUS went LOW\n","mdm_wait_for_status_low");
            return;
        }
        uVar3 = sched_clock();
    } while (uVar3 / 1000000 <= uVar2 / 1000000 + 3000);
    ipc_log_string(_segment.ehdr,"[%s]: MDM2AP_STATUS didn\'t go LOW. Warm-resetting modem\n",
                   "mdm_wait_for_status_low");
    _dev_err(*(arg1 + 0x150),"MDM2AP status did not go low\n");
    pcVar4 = *(*(arg1 + 0x200) + 8);
    if (pcVar4 != NULL) {
        if (2 < (pcVar4 + -0x8005850 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0xc03e31212b9a8ab6,pcVar4,0x8001270);
        }
        (*pcVar4)(arg1,arg2 & 1);
    }
    return;
}


// ===== sym.mdm9x55_setup_hw @ 0x080093cc (size 1116) =====

uint64_t sym.mdm9x55_setup_hw(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *arg1_00;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong uVar7;
    ulong uVar8;
    code *pcVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = *arg2;
    uVar7 = *(arg2 + 8);
    *(arg1 + 0x150) = arg3 + 0x10;
    *(arg1 + 0x200) = uVar7;
    uVar7 = *(arg3 + 0x300);
    arg1_00 = devm_kmalloc(arg3 + 0x10,0x4c8,0xdc0);
    if ((arg1_00 == NULL) || (0xfffffffffffff000 < arg1_00)) {
        _dev_err(*(arg1 + 0x150),"cannot allocate esoc device\n");
        uVar5 = arg1_00 & 0xffffffff;
    }
    else {
        arg1_00[0x76] = arg3;
        iVar4 = alloc_workqueue("mdm_queue",0,0);
        *(arg1 + 0x40) = iVar4;
        if (iVar4 == 0) {
            _dev_err(*(arg1 + 0x150),"could not create mdm_queue\n");
            uVar5 = 0xfffffff4;
        }
        else {
            *(arg1 + 0x1d0) = 0;
            *(arg1 + 0x1d8) = 0;
            iVar4 = 0;
            uVar8 = *(*(arg1 + 0x150) + 0x2f0);
            *arg1 = 0xffffffffffffffff;
            *(arg1 + 8) = 0xffffffffffffffff;
            *(arg1 + 0x10) = 0xffffffffffffffff;
            *(arg1 + 0x18) = 0xffffffffffffffff;
            *(arg1 + 0x20) = 0xffffffffffffffff;
            *(arg1 + 0x28) = 0xffffffffffffffff;
            *(arg1 + 0x30) = 0xffffffffffffffff;
            do {
                iVar2 = of_get_named_gpio_flags(uVar8,*(obj.gpio_map + iVar4),0,0);
                if (-1 < iVar2) {
                    *(arg1 + *(iVar4 + 0x80049a8) * 4) = iVar2;
                }
                iVar4 = iVar4 + 0x10;
            } while (iVar4 != 0xc0);
            if ((((*(arg1 + 0x24) == -1) || (*(arg1 + 0x14) == -1)) || (*(arg1 + 0x2c) == -1)) || (*(arg1 + 4) == -1)) {
                uVar5 = 0xfffffffa;
            }
            else {
                pcVar9 = *(*(arg1 + 0x200) + 0x28);
                if (pcVar9 != NULL) {
                    if (6 < (pcVar9 + -0x8005818 >> 3 | pcVar9 << 0x3d)) {
                        __cfi_slowpath_diag(0x5325a6c16b375fe3,pcVar9,0x8001330);
                    }
                    uVar5 = (*pcVar9)(arg1);
                    if (uVar5 != 0) {
                        return uVar5;
                    }
                    uVar5 = sym.mdm_pinctrl_init(arg1);
                    if (uVar5 != 0) {
                        return uVar5;
                    }
                    pcVar9 = *(*(arg1 + 0x200) + 0x30);
                    if (pcVar9 != NULL) {
                        if (6 < (pcVar9 + -0x8005818 >> 3 | pcVar9 << 0x3d)) {
                            __cfi_slowpath_diag(0x5325a6c16b375fe3,pcVar9,0x8001350);
                        }
                        uVar5 = (*pcVar9)(arg1);
                        if (uVar5 != 0) {
                            return uVar5;
                        }
                        uVar5 = sym.mdm_configure_ipc(arg1,arg3);
                        if (uVar5 != 0) {
                            return uVar5;
                        }
                        *arg1_00 = "MDM9x55";
                        iVar4 = of_find_property(uVar7,"qcom,mdm-dual-link",0);
                        *(arg1 + 0x1d9) = iVar4 != 0;
                        arg1_00[1] = "PCIe";
                        iVar2 = of_property_read_string(uVar7,"qcom,mdm-link-info",arg1_00 + 2);
                        if (iVar2 != 0) {
                            _dev_info(*(arg1 + 0x150),"esoc link info missing\n");
                        }
                        iVar2 = of_property_read_variable_u32_array
                                          (uVar7,"qcom,shutdown-timeout-ms",arg1 + 0x1b8,1,0);
                        if (iVar2 < 0) {
                            *(arg1 + 0x1b8) = 10000;
                        }
                        iVar2 = of_property_read_variable_u32_array
                                          (uVar7,"qcom,ssctl-instance-id",arg1_00 + 0x96,1,0);
                        if (iVar2 < 0) {
                            _dev_info(*(arg1 + 0x150),"esoc ssctl id missing\n");
                        }
                        uVar8 = *(arg1 + 0x150);
                        uVar7 = *(arg3 + 0x300);
                        arg1_00[0x97] = "MDM9x55";
                        arg1_00[0x79] = uVar6;
                        arg1_00[0x78] = obj.__this_module;
                        arg1_00[3] = uVar8;
                        arg1_00[0x93] = uVar7;
                        iVar4 = of_find_property(uVar7,"qcom,mdm-auto-boot",0);
                        *(arg1_00 + 0x94) = iVar4 != 0;
                        iVar4 = of_find_property(arg1_00[0x93],"qcom,mdm-statusline-not-a-powersource",0);
                        *(arg1_00 + 0x4a2) = iVar4 != 0;
                        iVar4 = of_find_property(arg1_00[0x93],"qcom,mdm-userspace-handle-shutdown",0);
                        arg1_00[0x7d] = arg1;
                        *(arg1_00 + 0x4a3) = iVar4 != 0;
                        uVar3 = sym.esoc_clink_register(arg1_00);
                        if (uVar3 == 0) {
                            *(arg1 + 0x130) = 0;
                            __init_swait_queue_head(arg1 + 0x138,"&x->wait",obj.init_completion.__key);
                            *(arg1 + 0xd0) = 0xfffffffe0;
                            *(arg1 + 0xd8) = arg1 + 0xd8;
                            *(arg1 + 0xe0) = arg1 + 0xd8;
                            *(arg1 + 0xe8) = sym.mdm_status_fn.3f2debd08d7acb99a985e6098affe835.cfi_jt;
                            *(arg1 + 0x100) = 0xfffffffe0;
                            *(arg1 + 0x108) = arg1 + 0x108;
                            *(arg1 + 0x110) = arg1 + 0x108;
                            *(arg1 + 0x48) = 0xfffffffe0;
                            *(arg1 + 0x118) = sym.mdm_get_restart_reason.3f2debd08d7acb99a985e6098affe835.cfi_jt;
                            *(arg1 + 0x50) = arg1 + 0x50;
                            *(arg1 + 0x58) = arg1 + 0x50;
                            *(arg1 + 0x60) = sym.mdm2ap_status_check.3f2debd08d7acb99a985e6098affe835.cfi_jt;
                            init_timer_key(arg1 + 0x78,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                            cVar1 = *(arg1_00 + 0x94);
                            *(arg1 + 0x1c8) = 0;
                            *(arg1 + 0x1ac) = 0;
                            *(arg1 + 0x1c0) = arg1_00;
                            *(arg1 + 0x1a8) = 0;
                            if (cVar1 != '\0') {
                                uVar6 = gpio_to_desc(*(arg1 + 4));
                                gpiod_direction_output_raw(uVar6,1);
                            }
                            return 0;
                        }
                        _dev_err(*(arg1 + 0x150),"esoc registration failed\n");
                        return uVar3;
                    }
                }
                uVar5 = 0xfffffffe;
            }
        }
    }
    return uVar5;
}


// ===== sym.mdm_cmd_exe @ 0x08009828 (size 1976) =====

void sym.mdm_cmd_exe(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    ulong uVar3;
    uint32_t uVar4;
    code *pcVar5;
    uint64_t uVar6;
    code *extraout_x8;
    ulong *in_x18;
    int64_t iVar7;
    code *unaff_x20;
    code *unaff_x21;
    ulong unaff_x30;
    int iStack_40;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uVar4 = arg1 - 1;
    iVar7 = *(arg2 + 1000);
    iStack_3c = 0;
    iStack_40 = 0;
    if (6 < uVar4) {
        ipc_log_string(_segment.ehdr,"[%s]: Invalid command\n","mdm_cmd_exe");
        uVar3 = 0xffffffea;
        goto code_r0x08009d18;
    }
    //switch table (7 cases) at 0x8004410
    unaff_x20 = arg2;
    switch(*(uVar4 + 0x8004410) * 4 + 0x8009884) {
    case 0x8009888:
        if (*(arg2 + 0x4a0) == '\0') goto code_r0x08009c0c;
        unaff_x21 = sym.__typeid__ZTSFvPjP10esoc_clinkE_global_addr;
        pcVar5 = *(*(arg2 + 0x3c8) + 8);
        if (1 < (pcVar5 + -0x8005870 >> 3 | pcVar5 << 0x3d)) goto code_r0x08009d80;
        break;
    case 0x8009918:
        sym.mdm_disable_irqs(iVar7);
        *(iVar7 + 0x1a4) = 0;
        uVar3 = 0;
        *(iVar7 + 0x1d8) = 0;
        *(iVar7 + 0x1f8) = 0;
        if (*(arg2 + 0x4a1) != '\0') goto code_r0x08009d18;
        if (*(arg2 + 0x4a3) == '\0') goto code_r0x08009d14;
        sym.esoc_clink_queue_request(4,arg2);
        goto code_r0x08009d14;
    case 0x8009954:
        uVar6 = qcom_sysmon_shutdown_acked(*(arg2 + 0x490));
        if ((uVar6 & 1) == 0) {
            sym.mdm_disable_irqs(iVar7);
            *(iVar7 + 0x1a4) = 0;
            *(iVar7 + 0x1d8) = 0;
            *(iVar7 + 0x1f8) = 0;
            _dev_err(*(iVar7 + 0x150),"Graceful shutdown fail\n");
            cVar1 = *(arg2 + 0x4a1);
        }
        else {
            cVar1 = *(arg2 + 0x4a1);
        }
        if (cVar1 != '\0') goto code_r0x08009d14;
        if (*(arg2 + 0x4a2) == '\0') {
            ipc_log_string(_segment.ehdr,"[%s]: ESOC_FORCE_PWR_OFF: setting AP2MDM_STATUS = 0\n","mdm_cmd_exe");
            uVar3 = gpio_to_desc(*(iVar7 + 4));
            gpiod_set_raw_value(uVar3,0);
        }
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_FORCE_PWR_OFF: Queueing request: ESOC_REQ_SHUTDOWN\n","mdm_cmd_exe");
        sym.esoc_clink_queue_request(3,arg2);
        unaff_x20 = *(*(iVar7 + 0x200) + 0x10);
        if (unaff_x20 != NULL) {
            if (6 < (unaff_x20 + -0x8005818 >> 3 | unaff_x20 << 0x3d)) {
                __cfi_slowpath_diag(0x5325a6c16b375fe3,unaff_x20,0x8001310);
            }
            (*unaff_x20)(iVar7);
        }
        if (*(iVar7 + 0x160) == 0) goto code_r0x08009d14;
        uVar3 = pinctrl_select_state(*(iVar7 + 0x158));
        if (uVar3 == 0) goto code_r0x08009d18;
        _dev_err(*(iVar7 + 0x150),"switching gpio config failed\n");
        goto code_r0x08009d14;
    case 0x8009a1c:
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_RESET: Resetting the modem\n","mdm_cmd_exe");
        unaff_x20 = *(*(iVar7 + 0x200) + 8);
        if (unaff_x20 == NULL) goto code_r0x08009d14;
        if (2 < (unaff_x20 + -0x8005850 >> 3 | unaff_x20 << 0x3d)) {
            __cfi_slowpath_diag(0xc03e31212b9a8ab6,unaff_x20,0x8001270);
        }
        (*unaff_x20)(iVar7,0);
        goto code_r0x08009d14;
    case 0x8009a70:
        unaff_x20 = segment.ehdr;
        *(iVar7 + 0x1d8) = 0;
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_PREPARE_DEBUG: Cancelling the status check work\n","mdm_cmd_exe");
        cancel_delayed_work(iVar7 + 0x48);
        uVar3 = 0;
        if (*(*(iVar7 + 0x1c0) + 0x4a0) != '\0') goto code_r0x08009d18;
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_PREPARE_DEBUG: setting AP2MDM_ERRFATAL = 1\n","mdm_cmd_exe");
        uVar3 = gpio_to_desc(*(iVar7 + 0x14));
        gpiod_set_raw_value(uVar3,1);
        msleep(*(iVar7 + 0x1b4));
        goto code_r0x08009d14;
    case 0x8009ae0:
        uVar3 = 0;
        *(iVar7 + 0x1f8) = 0;
        if (*(iVar7 + 0x208) != '\0') goto code_r0x08009d18;
        unaff_x21 = segment.ehdr;
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_EXE_DEBUG: Resetting the modem\n","mdm_cmd_exe");
        *(iVar7 + 0x1a4) = 1;
        unaff_x20 = *(*(iVar7 + 0x200) + 8);
        if (unaff_x20 != NULL) {
            if (2 < (unaff_x20 + -0x8005850 >> 3 | unaff_x20 << 0x3d)) {
                __cfi_slowpath_diag(0xc03e31212b9a8ab6,unaff_x20,0x8001270);
            }
            (*unaff_x20)(iVar7,0);
        }
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_EXE_DEBUG: Waiting for ramdumps to be collected\n","mdm_cmd_exe");
        wait_for_completion(iVar7 + 0x130);
        if (*(iVar7 + 0x1ac) != '\0') {
            ipc_log_string(_segment.ehdr,"[%s]: ESOC_EXE_DEBUG: Failed to collect the ramdumps\n","mdm_cmd_exe");
            _dev_err(*(iVar7 + 0x150),"unable to collect ramdumps\n");
            uVar3 = 0xfffffffb;
            *(iVar7 + 0x1a4) = 0;
            goto code_r0x08009d18;
        }
        *(iVar7 + 0x1a4) = 0;
        *(iVar7 + 0x130) = 0;
        __init_swait_queue_head(iVar7 + 0x138,"&x->wait",obj.init_completion.__key);
        goto code_r0x08009d14;
    case 0x8009b94:
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_EXIT_DEBUG: Setting AP2MDM_ERRFATAL = 0\n","mdm_cmd_exe");
        uVar3 = gpio_to_desc(*(iVar7 + 0x14));
        gpiod_set_raw_value(uVar3,0);
        uVar3 = 0;
        *(iVar7 + 0x1c8) = 1;
        goto code_r0x08009d18;
    }
    do {
        (*pcVar5)(&stack0xffffffffffffffc4,unaff_x20);
        pcVar5 = *(*(unaff_x20 + 0x3c8) + 0x10);
        if (1 < (pcVar5 - unaff_x21 >> 3 | pcVar5 - unaff_x21 << 0x3d)) {
            __cfi_slowpath_diag(0x997313d0b90b9ffb,pcVar5,0x80012b0);
            unaff_x21 = pcVar5;
        }
        (*pcVar5)(&stack0xffffffffffffffc0,unaff_x20);
        if (iStack_40 == 0) {
            if ((iStack_3c != 0) && (*(iVar7 + 0x1d8) == '\0')) {
                *(iVar7 + 0x1d8) = 1;
                pcVar5 = *(*(unaff_x20 + 0x3c8) + 0x18);
                if (pcVar5 != sym.__typeid__ZTSFv11esoc_notifyP10esoc_clinkE_global_addr) {
                    __cfi_slowpath_diag(0x190ba2fe57e749ba,pcVar5,0x80012d0);
                }
                (*pcVar5)(2,unaff_x20);
            }
code_r0x08009c0c:
            unaff_x21 = segment.ehdr;
            ipc_log_string(_segment.ehdr,"[%s]: ESOC_PWR_ON: Setting AP2MDM_ERRFATAL = 0\n","mdm_cmd_exe");
            uVar3 = gpio_to_desc(*(iVar7 + 0x14));
            gpiod_set_raw_value(uVar3,0);
            *(iVar7 + 0x1a8) = 1;
            unaff_x20 = **(iVar7 + 0x200);
            if (unaff_x20 != NULL) {
                if (6 < (unaff_x20 + -0x8005818 >> 3 | unaff_x20 << 0x3d)) {
                    __cfi_slowpath_diag(0x5325a6c16b375fe3,unaff_x20,0x80012f0);
                }
                (*unaff_x20)(iVar7);
            }
            if (iVar7 != 0) {
                ipc_log_string(_segment.ehdr,"[%s]: Enabling the interrupts\n","mdm_enable_irqs");
                uVar6 = *(iVar7 + 0x1d0);
                if ((uVar6 & 1) == 0) {
                    if ((uVar6 >> 1 & 1) != 0) goto code_r0x08009cb4;
code_r0x08009c94:
                    uVar4 = uVar6;
                }
                else {
                    enable_irq(*(iVar7 + 0x188));
                    uVar6 = *(iVar7 + 0x1d0) & 0xfffffffffffffffe;
                    *(iVar7 + 0x1d0) = uVar6;
                    if ((uVar6 >> 1 & 1) == 0) goto code_r0x08009c94;
code_r0x08009cb4:
                    enable_irq(*(iVar7 + 0x18c));
                    uVar6 = *(iVar7 + 0x1d0) & 0xfffffffffffffffd;
                    *(iVar7 + 0x1d0) = uVar6;
                    uVar4 = uVar6;
                }
                if ((uVar4 >> 2 & 1) != 0) {
                    enable_irq(*(iVar7 + 400));
                    uVar3 = 0;
                    *(iVar7 + 0x1d0) = *(iVar7 + 0x1d0) & 0xfffffffffffffffb;
                    goto code_r0x08009d18;
                }
            }
code_r0x08009d14:
            uVar3 = 0;
        }
        else {
            uVar3 = 0xfffffffb;
        }
code_r0x08009d18:
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iStack_38) {
            return;
        }
        __stack_chk_fail(uVar3);
        pcVar5 = extraout_x8;
code_r0x08009d80:
        __cfi_slowpath_diag(0x997313d0b90b9ffb,pcVar5,0x8001290);
    } while( true );
}


// ===== sym.mdm_get_status @ 0x08009e94 (size 72) =====

void sym.mdm_get_status(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpio_to_desc(*(*(arg2 + 1000) + 0x2c));
    iVar1 = gpiod_get_raw_value();
    *arg1 = iVar1 != 0;
    return;
}


// ===== sym.mdm_get_err_fatal @ 0x08009edc (size 72) =====

void sym.mdm_get_err_fatal(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpio_to_desc(*(*(arg2 + 1000) + 0x24));
    iVar1 = gpiod_get_raw_value();
    *arg1 = iVar1 != 0;
    return;
}


// ===== sym.mdm_notify @ 0x08009f24 (size 1184) =====

void sym.mdm_notify(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    int64_t iVar5;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg2 + 1000);
    ipc_log_string(_segment.ehdr,"[%s]: Notification: %d\n","mdm_notify",arg1 & 0xffffffff);
    uVar1 = arg1 - 1;
    if (10 < uVar1) {
        return;
    }
    //switch table (11 cases) at 0x8004417
    switch(*(uVar1 + 0x8004417) * 4 + 0x8009f8c) {
    case 0x8009f90:
        gpio_to_desc(*(iVar5 + 0x2c));
        iVar2 = gpiod_get_raw_value();
        if (iVar2 == 0) {
            ipc_log_string(_segment.ehdr,"[%s]: ESOC_IMG_XFER_DONE: Begin timeout of %lu ms for modem_status\n",
                           "mdm_notify",120000);
            queue_delayed_work_on(0x20,___stack_chk_fail,iVar5 + 0x48,30000);
        }
        break;
    case 0x8009fe0:
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_BOOT_DONE: Sending the notification: ESOC_RUN_STATE\n","mdm_notify");
        iVar5 = 1;
        goto code_r0x0800a1c8;
    case 0x800a004:
        pcVar4 = "[%s]: ESOC_BOOT_FAIL: Send notification: ESOC_INVALID_STATE\n";
        goto code_r0x0800a07c;
    case 0x800a018:
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_IMG_XFER_RETRY: Resetting the device\n","mdm_notify");
        *(iVar5 + 0x1a8) = 1;
        pcVar6 = *(*(iVar5 + 0x200) + 8);
        if (pcVar6 != NULL) {
            if (2 < (pcVar6 + -0x8005850 >> 3 | pcVar6 << 0x3d)) {
                __cfi_slowpath_diag(0xc03e31212b9a8ab6,pcVar6,0x8001270);
            }
            (*pcVar6)(iVar5,0);
        }
        break;
    case 0x800a070:
        pcVar4 = "[%s]: ESOC_IMG_XFER_FAIL: Send notification: ESOC_INVALID_STATE\n";
code_r0x0800a07c:
        ipc_log_string(_segment.ehdr,pcVar4,"mdm_notify");
        iVar5 = 9;
        goto code_r0x0800a1c8;
    case 0x800a094:
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_DEBUG_DONE: Ramdumps collection done\n","mdm_notify");
        *(iVar5 + 0x1ac) = 0;
        if ((*(iVar5 + 0x160) != 0) && (iVar2 = pinctrl_select_state(*(iVar5 + 0x158)), iVar2 != 0)) {
            _dev_err(*(iVar5 + 0x150),"switching gpio config failed\n");
        }
        complete(iVar5 + 0x130);
        break;
    case 0x800a0d4:
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_DEBUG_FAIL: Ramdumps collection failed\n","mdm_notify");
        *(iVar5 + 0x1ac) = 1;
        complete(iVar5 + 0x130);
        break;
    case 0x800a104:
        sym.mdm_disable_irqs(iVar5);
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_PRIMARY_CRASH: Setting AP2MDM_ERRFATAL = 1\n","mdm_notify");
        uVar3 = gpio_to_desc(*(iVar5 + 0x14));
        gpiod_set_raw_value(uVar3,1);
        if (*(arg2 + 0x4a1) == '\0') {
            sym.mdm_wait_for_status_low(iVar5,1);
        }
        break;
    case 0x800a150:
        sym.mdm_disable_irqs(iVar5);
        uVar3 = _segment.ehdr;
        *(iVar5 + 0x1a4) = 0;
        *(iVar5 + 0x1d8) = 0;
        ipc_log_string(uVar3,"[%s]: ESOC_PRIMARY_REBOOT: Powering down the modem\n","mdm_notify");
        pcVar6 = *(*(iVar5 + 0x200) + 0x10);
        if (pcVar6 != NULL) {
            if (6 < (pcVar6 + -0x8005818 >> 3 | pcVar6 << 0x3d)) {
                __cfi_slowpath_diag(0x5325a6c16b375fe3,pcVar6,0x8001310);
            }
            (*pcVar6)(iVar5);
        }
        break;
    case 0x800a1ac:
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_PON_RETRY: Send notification: ESOC_RETRY_PON_EVT\n","mdm_notify");
        iVar5 = 10;
code_r0x0800a1c8:
        sym.esoc_clink_evt_notify(iVar5,arg2);
    }
    return;
}


// ===== sym.mdm_pinctrl_init @ 0x0800a248 (size 228) =====

void sym.mdm_pinctrl_init(int64_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = devm_pinctrl_get(*(arg1 + 0x150));
    *(arg1 + 0x158) = uVar1;
    if ((uVar1 != 0) && (uVar1 < 0xfffffffffffff001)) {
        uVar1 = pinctrl_lookup_state(uVar1,"mdm_booting");
        *(arg1 + 0x160) = uVar1;
        if ((uVar1 == 0) || (0xfffffffffffff000 < uVar1)) {
code_r0x0800a2b4:
            *(arg1 + 0x160) = 0;
            *(arg1 + 0x168) = 0;
        }
        else {
            uVar1 = pinctrl_lookup_state(*(arg1 + 0x158),"mdm_running");
            *(arg1 + 0x168) = uVar1;
            if ((uVar1 == 0) || (0xfffffffffffff000 < uVar1)) goto code_r0x0800a2b4;
        }
        uVar1 = pinctrl_lookup_state(*(arg1 + 0x158),"mdm_active");
        *(arg1 + 0x170) = uVar1;
        if ((uVar1 == 0) || (0xfffffffffffff000 < uVar1)) goto code_r0x0800a310;
        uVar1 = pinctrl_lookup_state(*(arg1 + 0x158),"mdm_suspend");
        *(arg1 + 0x178) = uVar1;
        if ((uVar1 != 0) && (uVar1 < 0xfffffffffffff001)) {
            pinctrl_select_state(*(arg1 + 0x158),*(arg1 + 0x170));
            return;
        }
    }
    *(arg1 + 0x170) = 0;
code_r0x0800a310:
    *(arg1 + 0x178) = 0;
    *(arg1 + 0x160) = 0;
    *(arg1 + 0x168) = 0;
    return;
}


// ===== sym.mdm_configure_ipc @ 0x0800a32c (size 1204) =====

uint32_t sym.mdm_configure_ipc(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong uVar6;
    ulong uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = *(arg2 + 0x300);
    uVar6 = *(arg1 + 0x150);
    iVar1 = of_property_read_variable_u32_array(uVar7,"qcom,ramdump-timeout-ms",arg1 + 0x1b0,1,0);
    if (iVar1 < 0) {
        *(arg1 + 0x1b0) = 120000;
    }
    uVar2 = of_property_read_variable_u32_array(uVar7,"qcom,ramdump-delay-ms",arg1 + 0x1b4,1,0);
    if (uVar2 < 0) {
        *(arg1 + 0x1b4) = 2000;
    }
    iVar1 = gpio_request(*(arg1 + 4),"AP2MDM_STATUS");
    if (iVar1 == 0) {
        uVar7 = gpio_to_desc(*(arg1 + 4));
        gpiod_direction_output_raw(uVar7,0);
    }
    else {
        _dev_err(uVar6,"Failed to configure AP2MDM_STATUS gpio\n");
    }
    iVar1 = gpio_request(*(arg1 + 0x14),"AP2MDM_ERRFATAL");
    if (iVar1 == 0) {
        uVar7 = gpio_to_desc(*(arg1 + 0x14));
        gpiod_direction_output_raw(uVar7,0);
    }
    else {
        _dev_err(uVar6,"%s Failed to configure AP2MDM_ERRFATAL gpio\n","mdm_configure_ipc");
    }
    iVar1 = gpio_request(*(arg1 + 0x2c),"MDM2AP_STATUS");
    if (iVar1 == 0) {
        iVar1 = gpio_request(*(arg1 + 0x24),"MDM2AP_ERRFATAL");
        if (iVar1 == 0) {
            if ((*(arg1 + 0x28) < 0x200) && (iVar1 = gpio_request(*(arg1 + 0x28),"MDM2AP_PBLRDY"), iVar1 != 0)) {
                pcVar5 = "Cannot configure MDM2AP_PBLRDY gpio\n";
            }
            else if ((*arg1 < 0x200) && (iVar1 = gpio_request(*arg1,"AP2MDM_WAKEUP"), iVar1 != 0)) {
                pcVar5 = "Cannot configure AP2MDM_WAKEUP gpio\n";
            }
            else {
                if (0x1ff < *(arg1 + 0x10)) {
code_r0x0800a494:
                    gpio_to_desc(*(arg1 + 0x2c));
                    gpiod_direction_input();
                    gpio_to_desc(*(arg1 + 0x24));
                    gpiod_direction_input();
                    gpio_to_desc(*(arg1 + 0x24));
                    uVar4 = gpiod_to_irq();
                    if (uVar4 < 0) {
                        _dev_err(uVar6,"bad MDM2AP_ERRFATAL IRQ resource\n");
                    }
                    else {
                        iVar1 = request_threaded_irq
                                          (uVar4,sym.mdm_errfatal.3f2debd08d7acb99a985e6098affe835.cfi_jt,0,1,
                                           "mdm errfatal",arg1);
                        if (iVar1 < 0) {
                            _dev_err(uVar6,"%s: MDM2AP_ERRFATAL IRQ#%d request failed,\n","mdm_configure_ipc",
                                     uVar4 & 0xffffffff);
                        }
                        else {
                            *(arg1 + 0x188) = uVar4;
                            irq_set_irq_wake(uVar4 & 0xffffffff,1);
                        }
                    }
                    gpio_to_desc(*(arg1 + 0x2c));
                    iVar1 = gpiod_to_irq();
                    if (iVar1 < 0) {
                        _dev_err(uVar6,"%s: bad MDM2AP_STATUS IRQ resource, err = %d\n","mdm_configure_ipc",iVar1);
                    }
                    else {
                        iVar3 = request_threaded_irq
                                          (iVar1,0,sym.mdm_status_change.3f2debd08d7acb99a985e6098affe835.cfi_jt,
                                           0x2003,"mdm status",arg1);
                        if (iVar3 < 0) {
                            _dev_err(uVar6,"%s: MDM2AP_STATUS IRQ#%d request failed, err=%d\n","mdm_configure_ipc",
                                     iVar1,iVar3);
                        }
                        else {
                            *(arg1 + 0x18c) = iVar1;
                            irq_set_irq_wake(iVar1,1);
                        }
                    }
                    if (*(arg1 + 0x28) < 0x200) {
                        uVar4 = platform_get_irq_byname(arg2,"plbrdy_irq");
                        if (uVar4 < 0) {
                            _dev_err(uVar6,"%s: MDM2AP_PBLRDY IRQ request failed\n","mdm_configure_ipc");
                            return 0;
                        }
                        iVar1 = request_threaded_irq
                                          (uVar4,0,sym.mdm_pblrdy_change.3f2debd08d7acb99a985e6098affe835.cfi_jt,
                                           0x2001,"mdm pbl ready",arg1);
                        if (iVar1 < 0) {
                            _dev_err(uVar6,"MDM2AP_PBL IRQ#%d request failed %d\n",uVar4 & 0xffffffff,iVar1);
                            return 0;
                        }
                        *(arg1 + 400) = uVar4;
                    }
                    sym.mdm_disable_irqs(arg1);
                    return 0;
                }
                iVar1 = gpio_request(*(arg1 + 0x10),"AP2MDM_CHNLRDY");
                if (iVar1 == 0) {
                    if (*(arg1 + 0x10) < 0x200) {
                        uVar7 = gpio_to_desc();
                        gpiod_direction_output_raw(uVar7,0);
                    }
                    goto code_r0x0800a494;
                }
                pcVar5 = "Cannot configure AP2MDM_CHNLRDY gpio\n";
            }
            _dev_err(uVar6,pcVar5);
            goto code_r0x0800a6b0;
        }
        pcVar5 = "%s Failed to configure MDM2AP_ERRFATAL gpio\n";
    }
    else {
        pcVar5 = "%s Failed to configure MDM2AP_STATUS gpio\n";
    }
    _dev_err(uVar6,pcVar5,"mdm_configure_ipc");
code_r0x0800a6b0:
    if (*arg1 < 0x200) {
        gpio_free();
    }
    if (*(arg1 + 4) < 0x200) {
        gpio_free();
    }
    if (*(arg1 + 8) < 0x200) {
        gpio_free();
    }
    if (*(arg1 + 0xc) < 0x200) {
        gpio_free();
    }
    if (*(arg1 + 0x10) < 0x200) {
        gpio_free();
    }
    if (*(arg1 + 0x14) < 0x200) {
        gpio_free();
    }
    if (*(arg1 + 0x18) < 0x200) {
        gpio_free();
    }
    if (*(arg1 + 0x1c) < 0x200) {
        gpio_free();
    }
    if (*(arg1 + 0x20) < 0x200) {
        gpio_free();
    }
    if (*(arg1 + 0x24) < 0x200) {
        gpio_free();
    }
    if (*(arg1 + 0x28) < 0x200) {
        gpio_free();
    }
    if (*(arg1 + 0x2c) < 0x200) {
        gpio_free();
    }
    if (*(arg1 + 0x30) < 0x200) {
        gpio_free();
    }
    if (*(arg1 + 0x34) < 0x200) {
        gpio_free();
    }
    if (*(arg1 + 0x40) != 0) {
        destroy_workqueue();
        *(arg1 + 0x40) = 0;
    }
    return uVar2 & uVar2 >> 0x1f;
}


// ===== sym.mdm_status_fn @ 0x0800a7e0 (size 96) =====

void sym.mdm_status_fn(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpio_to_desc(*(arg1 + -0xa4));
    gpiod_get_raw_value();
    if ((*(arg1 + 0x98) != 0) && (iVar1 = pinctrl_select_state(*(arg1 + 0x88)), iVar1 != 0)) {
        _dev_err(*(arg1 + 0x80),"switching gpio config failed\n");
    }
    return;
}


// ===== sym.mdm_get_restart_reason @ 0x0800a840 (size 196) =====

void sym.mdm_get_restart_reason(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg2;
    ulong uVar3;
    ulong unaff_x30;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uint uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_30 = 0;
    uVar3 = *(arg1 + 0x50);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    qcom_sysmon_get_reason(*(*(arg1 + 0xc0) + 0x490),&uStack_90,100);
    ipc_log_string(_segment.ehdr,"[%s]: restart reason is %s\n","mdm_get_restart_reason",&uStack_90);
    _dev_err(uVar3,"mdm restart reason is %s\n",&uStack_90);
    *(arg1 + 200) = 0;
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.mdm2ap_status_check;
    arg2 = *(iVar2 + 0x178);
    ipc_log_string(_segment.ehdr,"[%s]: Powerup timer expired after images are transferred to modem\n",
                   "mdm2ap_status_check");
    gpio_to_desc(*(iVar2 + -0x1c));
    iVar1 = gpiod_get_raw_value();
    if (iVar1 == 0) {
        ipc_log_string(_segment.ehdr,"[%s]: MDM2AP_STATUS did not go high\n","mdm2ap_status_check");
        sym.esoc_clink_evt_notify(2,arg2);
    }
    return;
}


// ===== sym.mdm2ap_status_check @ 0x0800a904 (size 136) =====

void sym.mdm2ap_status_check(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t arg2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *(arg1 + 0x178);
    ipc_log_string(_segment.ehdr,"[%s]: Powerup timer expired after images are transferred to modem\n",
                   "mdm2ap_status_check");
    gpio_to_desc(*(arg1 + -0x1c));
    iVar1 = gpiod_get_raw_value();
    if (iVar1 == 0) {
        ipc_log_string(_segment.ehdr,"[%s]: MDM2AP_STATUS did not go high\n","mdm2ap_status_check");
        sym.esoc_clink_evt_notify(2,arg2);
    }
    return;
}


// ===== sym.mdm_errfatal @ 0x0800a98c (size 188) =====

ulong sym.mdm_errfatal(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong uVar1;
    int64_t arg2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        uVar1 = *(arg1 + 0x150);
        if (*(arg1 + 0x1d8) == '\0') {
            ipc_log_string(_segment.ehdr,"[%s]: MDM2AP_ERRFATAL IRQ received before modem booted. Ignoring.\n",
                           0x8001ff9);
            _dev_info(uVar1,"errfatal irq when in pwroff\n");
        }
        else {
            arg2 = *(arg1 + 0x1c0);
            ipc_log_string(_segment.ehdr,"[%s]: MDM2AP_ERRFATAL IRQ received!\n",0x8001ff9);
            _dev_err(uVar1,"%s: mdm sent errfatal interrupt\n",0x8001ff9);
            sym.esoc_clink_evt_notify(3,arg2);
        }
    }
    return 1;
}


// ===== sym.mdm_status_change @ 0x0800aa48 (size 404) =====

ulong sym.mdm_status_change(ulong noname_0,int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t arg2;
    code *pcVar2;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        uVar3 = *(arg1 + 0x150);
        arg2 = *(arg1 + 0x1c0);
        ipc_log_string(_segment.ehdr,"[%s]: MDM2AP_STATUS IRQ received!\n","mdm_status_change");
        if (arg2 == 0) {
            ipc_log_string(_segment.ehdr,"[%s]: Unexpected IRQ. Ignoring.\n","mdm_status_change");
        }
        else {
            gpio_to_desc(*(arg1 + 0x2c));
            iVar1 = gpiod_get_raw_value();
            if (iVar1 == 1) {
                if ((*(arg2 + 0x4a0) == '\0') || (*(arg1 + 0x1d8) == '\0')) {
                    ipc_log_string(_segment.ehdr,"[%s]: Modem ready. Cancelling the status_check work\n",
                                   "mdm_status_change");
                    cancel_delayed_work(arg1 + 0x48);
                    *(arg1 + 0x1d8) = 1;
                    sym.esoc_clink_evt_notify(0xb,arg2);
                    queue_work_on(0x20,*(arg1 + 0x40),arg1 + 0xd0);
                    if (*(arg1 + 0x1c8) != '\0') {
                        queue_work_on(0x20,*(arg1 + 0x40),arg1 + 0x100);
                    }
                    if (*(arg2 + 0x4a0) != '\0') {
                        pcVar2 = *(*(arg2 + 0x3c8) + 0x18);
                        if (pcVar2 != sym.__typeid__ZTSFv11esoc_notifyP10esoc_clinkE_global_addr) {
                            __cfi_slowpath_diag(0x190ba2fe57e749ba,pcVar2,0x8001370);
                        }
                        (*pcVar2)(2,arg2);
                    }
                }
            }
            else if ((iVar1 == 0) && (*(arg1 + 0x1d8) != '\0')) {
                ipc_log_string(_segment.ehdr,"[%s]: Unexpected reset of external modem\n","mdm_status_change");
                _dev_err(uVar3,"unexpected reset external modem\n");
                sym.esoc_clink_evt_notify(2,arg2);
            }
        }
    }
    return 1;
}


// ===== sym.mdm_pblrdy_change @ 0x0800abdc (size 84) =====

ulong sym.mdm_pblrdy_change(ulong noname_0,int64_t arg1)

{
    int64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        if (*(arg1 + 0x1a8) == 0) {
            if (*(arg1 + 0x1a4) == 0) {
                return 1;
            }
            arg1_00 = 2;
        }
        else {
            arg1_00 = 1;
            *(arg1 + 0x1a8) = 0;
        }
        sym.esoc_clink_queue_request(arg1_00,*(arg1 + 0x1c0));
    }
    return 1;
}


// ===== sym.sdx50m_setup_hw @ 0x0800ac30 (size 164) =====

uint64_t sym.sdx50m_setup_hw(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *arg4;
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg4 = devm_kmalloc(arg3 + 0x10,0x4c8,0xdc0);
    if ((arg4 == NULL) || (0xfffffffffffff000 < arg4)) {
        _dev_err(*(arg1 + 0x150),"cannot allocate esoc device\n");
    }
    else {
        *arg4 = "SDX50M";
        arg4[1] = "PCIe";
        arg4[0x97] = "SDX50M";
        uVar1 = sym.sdx_setup_hw(arg1,arg2,arg3,arg4);
        arg4 = uVar1 & 0xffffffff;
    }
    return arg4 & 0xffffffff;
}


// ===== sym.sdx_setup_hw @ 0x0800acd4 (size 1384) =====

int sym.sdx_setup_hw(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong uVar4;
    ulong uVar5;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *arg2;
    uVar4 = *(arg2 + 8);
    *(arg1 + 0x150) = arg3 + 0x10;
    *(arg1 + 0x200) = uVar4;
    uVar4 = *(arg3 + 0x300);
    *(arg4 + 0x3b0) = arg3;
    iVar2 = alloc_workqueue("mdm_queue",0,0);
    *(arg1 + 0x40) = iVar2;
    if (iVar2 == 0) {
        _dev_err(*(arg1 + 0x150),"could not create mdm_queue\n");
        return -0xc;
    }
    *(arg1 + 0x1d0) = 0;
    *(arg1 + 0x1d8) = 0;
    iVar2 = 0;
    uVar5 = *(*(arg1 + 0x150) + 0x2f0);
    *arg1 = 0xffffffffffffffff;
    *(arg1 + 8) = 0xffffffffffffffff;
    *(arg1 + 0x10) = 0xffffffffffffffff;
    *(arg1 + 0x18) = 0xffffffffffffffff;
    *(arg1 + 0x20) = 0xffffffffffffffff;
    *(arg1 + 0x28) = 0xffffffffffffffff;
    *(arg1 + 0x30) = 0xffffffffffffffff;
    do {
        iVar1 = of_get_named_gpio_flags(uVar5,*(obj.gpio_map + iVar2),0,0);
        if (-1 < iVar1) {
            *(arg1 + *(iVar2 + 0x80049a8) * 4) = iVar1;
        }
        iVar2 = iVar2 + 0x10;
    } while (iVar2 != 0xc0);
    if ((((*(arg1 + 0x24) == -1) || (*(arg1 + 0x14) == -1)) || (*(arg1 + 0x2c) == -1)) || (*(arg1 + 4) == -1)) {
        ipc_log_string(_segment.ehdr,"[%s]: Failed to parse DT gpios\n","sdx_setup_hw");
        _dev_err(*(arg1 + 0x150),"Failed to parse DT gpios\n");
        iVar1 = -6;
        goto code_r0x0800b1c8;
    }
    pcVar6 = *(*(arg1 + 0x200) + 0x28);
    if (pcVar6 == NULL) {
        iVar1 = -2;
    }
    else {
        if (6 < (pcVar6 + -0x8005818 >> 3 | pcVar6 << 0x3d)) {
            __cfi_slowpath_diag(0x5325a6c16b375fe3,pcVar6,0x8001330);
        }
        iVar1 = (*pcVar6)(arg1);
        if (iVar1 == 0) {
            iVar1 = sym.mdm_pinctrl_init(arg1);
            if (iVar1 == 0) {
                pcVar6 = *(*(arg1 + 0x200) + 0x30);
                if (pcVar6 == NULL) {
                    iVar1 = -2;
                }
                else {
                    if (6 < (pcVar6 + -0x8005818 >> 3 | pcVar6 << 0x3d)) {
                        __cfi_slowpath_diag(0x5325a6c16b375fe3,pcVar6,0x8001350);
                    }
                    iVar1 = (*pcVar6)(arg1);
                    if (iVar1 == 0) {
                        iVar1 = sym.mdm_configure_ipc(arg1,arg3);
                        if (iVar1 == 0) {
                            iVar2 = of_find_property(uVar4,"qcom,mdm-dual-link",0);
                            *(arg1 + 0x1d9) = iVar2 != 0;
                            iVar1 = of_property_read_string(uVar4,"qcom,mdm-link-info",arg4 + 0x10);
                            if (iVar1 != 0) {
                                _dev_info(*(arg1 + 0x150),"esoc link info missing\n");
                            }
                            iVar2 = of_find_property(uVar4,"qcom,esoc-skip-restart-for-mdm-crash",0);
                            *(arg1 + 0x208) = iVar2 != 0;
                            iVar1 = of_property_read_variable_u32_array
                                              (uVar4,"qcom,ssctl-instance-id",arg4 + 0x4b0,1,0);
                            if (iVar1 < 0) {
                                _dev_info(*(arg1 + 0x150),"esoc ssctl id missing\n");
                            }
                            *(arg4 + 0x3c8) = uVar3;
                            uVar3 = *(arg1 + 0x150);
                            *(arg4 + 0x3c0) = obj.__this_module;
                            *(arg4 + 0x18) = uVar3;
                            uVar3 = *(arg3 + 0x300);
                            *(arg4 + 1000) = arg1;
                            *(arg4 + 0x498) = uVar3;
                            iVar1 = sym.esoc_clink_register(arg4);
                            if (iVar1 == 0) {
                                ipc_log_string(_segment.ehdr,"[%s]: Done configuring the GPIOs and esoc registration\n"
                                               ,"sdx_setup_hw");
                                *(arg1 + 0x130) = 0;
                                __init_swait_queue_head(arg1 + 0x138,"&x->wait",obj.init_completion.__key);
                                *(arg1 + 0xd0) = 0xfffffffe0;
                                *(arg1 + 0xd8) = arg1 + 0xd8;
                                *(arg1 + 0xe0) = arg1 + 0xd8;
                                *(arg1 + 0xe8) = sym.mdm_status_fn.3f2debd08d7acb99a985e6098affe835.cfi_jt;
                                *(arg1 + 0x100) = 0xfffffffe0;
                                *(arg1 + 0x108) = arg1 + 0x108;
                                *(arg1 + 0x110) = arg1 + 0x108;
                                *(arg1 + 0x48) = 0xfffffffe0;
                                *(arg1 + 0x118) = sym.mdm_get_restart_reason.3f2debd08d7acb99a985e6098affe835.cfi_jt;
                                *(arg1 + 0x50) = arg1 + 0x50;
                                *(arg1 + 0x58) = arg1 + 0x50;
                                *(arg1 + 0x60) = sym.mdm2ap_status_check.3f2debd08d7acb99a985e6098affe835.cfi_jt;
                                init_timer_key(arg1 + 0x78,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                                *(arg1 + 0x1c0) = arg4;
                                uVar3 = _segment.ehdr;
                                *(arg1 + 0x1c8) = 0;
                                *(arg1 + 0x1ac) = 0;
                                *(arg1 + 0x1a8) = 0;
                                ipc_log_string(uVar3,"[%s]: MDM2AP_ERRFATAL gpio = %d\n","mdm_debug_gpio_ipc_log",
                                               *(arg1 + 0x24));
                                ipc_log_string(_segment.ehdr,"[%s]: AP2MDM_ERRFATAL gpio = %d\n",
                                               "mdm_debug_gpio_ipc_log",*(arg1 + 0x14));
                                ipc_log_string(_segment.ehdr,"[%s]: MDM2AP_STATUS gpio = %d\n",
                                               "mdm_debug_gpio_ipc_log",*(arg1 + 0x2c));
                                ipc_log_string(_segment.ehdr,"[%s]: AP2MDM_STATUS gpio = %d\n",
                                               "mdm_debug_gpio_ipc_log",*(arg1 + 4));
                                ipc_log_string(_segment.ehdr,"[%s]: AP2MDM_SOFT_RESET gpio = %d\n",
                                               "mdm_debug_gpio_ipc_log",*(arg1 + 8));
                                return 0;
                            }
                            ipc_log_string(_segment.ehdr,"[%s]: esoc registration failed\n","sdx_setup_hw");
                            _dev_err(*(arg1 + 0x150),"esoc registration failed\n");
                            if (arg1 != 0) {
                                free_irq(*(arg1 + 0x188),arg1);
                                free_irq(*(arg1 + 0x18c),arg1);
                            }
                        }
                        else {
                            ipc_log_string(_segment.ehdr,"[%s]: Failed to configure the ipc\n","sdx_setup_hw");
                            _dev_err(*(arg1 + 0x150),"Failed to configure the ipc\n");
                        }
                        sym.mdm_release_ipc_gpio(arg1);
                        goto code_r0x0800b1c8;
                    }
                }
                ipc_log_string(_segment.ehdr,"[%s]: Failed to setup PON\n","sdx_setup_hw");
                _dev_err(*(arg1 + 0x150),"Failed to setup PON\n");
            }
            else {
                ipc_log_string(_segment.ehdr,"[%s]: Failed to init pinctrl\n","sdx_setup_hw");
                _dev_err(*(arg1 + 0x150),"Failed to init pinctrl\n");
            }
            goto code_r0x0800b1c8;
        }
    }
    ipc_log_string(_segment.ehdr,"[%s]: Failed to parse PON DT gpios\n","sdx_setup_hw");
    _dev_err(*(arg1 + 0x150),"Failed to parse PON DT gpio\n");
code_r0x0800b1c8:
    destroy_workqueue(*(arg1 + 0x40));
    return iVar1;
}


// ===== sym.mdm_release_ipc_gpio @ 0x0800b23c (size 272) =====

void sym.mdm_release_ipc_gpio(uint32_t arg1)

{
    uint32_t *puVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    puVar1 = arg1;
    *in_x18 = unaff_x30;
    if (puVar1 != NULL) {
        if (*puVar1 < 0x200) {
            gpio_free();
        }
        if (puVar1[1] < 0x200) {
            gpio_free();
        }
        if (puVar1[2] < 0x200) {
            gpio_free();
        }
        if (puVar1[3] < 0x200) {
            gpio_free();
        }
        if (puVar1[4] < 0x200) {
            gpio_free();
        }
        if (puVar1[5] < 0x200) {
            gpio_free();
        }
        if (puVar1[6] < 0x200) {
            gpio_free();
        }
        if (puVar1[7] < 0x200) {
            gpio_free();
        }
        if (puVar1[8] < 0x200) {
            gpio_free();
        }
        if (puVar1[9] < 0x200) {
            gpio_free();
        }
        if (puVar1[10] < 0x200) {
            gpio_free();
        }
        if (puVar1[0xb] < 0x200) {
            gpio_free();
        }
        if (puVar1[0xc] < 0x200) {
            gpio_free();
        }
        if (puVar1[0xd] < 0x200) {
            gpio_free();
        }
    }
    return;
}


// ===== sym.sdx55m_setup_hw @ 0x0800b34c (size 1180) =====

uint64_t sym.sdx55m_setup_hw(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *arg1_00;
    int64_t iVar4;
    ulong *in_x18;
    ulong uVar5;
    ulong uVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *arg2;
    uVar5 = *(arg2 + 8);
    *(arg1 + 0x150) = arg3 + 0x10;
    *(arg1 + 0x200) = uVar5;
    uVar5 = *(arg3 + 0x300);
    arg1_00 = devm_kmalloc(arg3 + 0x10,0x4c8,0xdc0);
    if ((arg1_00 == NULL) || (0xfffffffffffff000 < arg1_00)) {
        _dev_err(*(arg1 + 0x150),"cannot allocate esoc device\n");
        uVar7 = arg1_00 & 0xffffffff;
    }
    else {
        arg1_00[0x76] = arg3;
        iVar4 = alloc_workqueue("mdm_queue",0,0);
        *(arg1 + 0x40) = iVar4;
        if (iVar4 == 0) {
            _dev_err(*(arg1 + 0x150),"could not create mdm_queue\n");
            uVar7 = 0xfffffff4;
        }
        else {
            *(arg1 + 0x1d0) = 0;
            *(arg1 + 0x1d8) = 0;
            iVar4 = 0;
            uVar6 = *(*(arg1 + 0x150) + 0x2f0);
            *arg1 = 0xffffffffffffffff;
            *(arg1 + 8) = 0xffffffffffffffff;
            *(arg1 + 0x10) = 0xffffffffffffffff;
            *(arg1 + 0x18) = 0xffffffffffffffff;
            *(arg1 + 0x20) = 0xffffffffffffffff;
            *(arg1 + 0x28) = 0xffffffffffffffff;
            *(arg1 + 0x30) = 0xffffffffffffffff;
            do {
                iVar2 = of_get_named_gpio_flags(uVar6,*(obj.gpio_map + iVar4),0,0);
                if (-1 < iVar2) {
                    *(arg1 + *(iVar4 + 0x80049a8) * 4) = iVar2;
                }
                iVar4 = iVar4 + 0x10;
            } while (iVar4 != 0xc0);
            if ((((*(arg1 + 0x24) == -1) || (*(arg1 + 0x14) == -1)) || (*(arg1 + 0x2c) == -1)) || (*(arg1 + 4) == -1)) {
                ipc_log_string(_segment.ehdr,"[%s]: Failed to parse DT gpios\n","sdx55m_setup_hw");
                _dev_err(*(arg1 + 0x150),"Failed to parse DT gpios\n");
                uVar7 = 0xfffffffa;
            }
            else {
                uVar3 = sym.mdm_pinctrl_init(arg1);
                if (uVar3 == 0) {
                    uVar3 = sym.mdm_configure_ipc(arg1,arg3);
                    if (uVar3 == 0) {
                        *arg1_00 = "SDX55M";
                        iVar4 = of_find_property(uVar5,"qcom,mdm-dual-link",0);
                        *(arg1 + 0x1d9) = iVar4 != 0;
                        arg1_00[1] = "PCIe";
                        iVar2 = of_property_read_string(uVar5,"qcom,mdm-link-info",arg1_00 + 2);
                        if (iVar2 != 0) {
                            _dev_info(*(arg1 + 0x150),"esoc link info missing\n");
                        }
                        iVar4 = of_find_property(uVar5,"qcom,esoc-skip-restart-for-mdm-crash",0);
                        *(arg1 + 0x208) = iVar4 != 0;
                        iVar2 = of_property_read_variable_u32_array
                                          (uVar5,"qcom,ssctl-instance-id",arg1_00 + 0x96,1,0);
                        if (iVar2 < 0) {
                            _dev_info(*(arg1 + 0x150),"esoc ssctl id missing\n");
                        }
                        uVar5 = *(arg1 + 0x150);
                        uVar6 = *(arg3 + 0x300);
                        arg1_00[0x97] = "SDX55M";
                        arg1_00[0x79] = uVar1;
                        arg1_00[0x78] = obj.__this_module;
                        arg1_00[3] = uVar5;
                        arg1_00[0x93] = uVar6;
                        arg1_00[0x7d] = arg1;
                        uVar3 = sym.esoc_clink_register(arg1_00);
                        uVar7 = uVar3;
                        if (uVar3 == 0) {
                            ipc_log_string(_segment.ehdr,"[%s]: Done configuring the GPIOs and esoc registration\n",
                                           "sdx55m_setup_hw");
                            *(arg1 + 0x130) = 0;
                            __init_swait_queue_head(arg1 + 0x138,"&x->wait",obj.init_completion.__key);
                            *(arg1 + 0xd0) = 0xfffffffe0;
                            *(arg1 + 0xd8) = arg1 + 0xd8;
                            *(arg1 + 0xe0) = arg1 + 0xd8;
                            *(arg1 + 0xe8) = sym.mdm_status_fn.3f2debd08d7acb99a985e6098affe835.cfi_jt;
                            *(arg1 + 0x100) = 0xfffffffe0;
                            *(arg1 + 0x108) = arg1 + 0x108;
                            *(arg1 + 0x110) = arg1 + 0x108;
                            *(arg1 + 0x48) = 0xfffffffe0;
                            *(arg1 + 0x118) = sym.mdm_get_restart_reason.3f2debd08d7acb99a985e6098affe835.cfi_jt;
                            *(arg1 + 0x50) = arg1 + 0x50;
                            *(arg1 + 0x58) = arg1 + 0x50;
                            *(arg1 + 0x60) = sym.mdm2ap_status_check.3f2debd08d7acb99a985e6098affe835.cfi_jt;
                            init_timer_key(arg1 + 0x78,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                            *(arg1 + 0x1c0) = arg1_00;
                            uVar1 = _segment.ehdr;
                            *(arg1 + 0x1c8) = 0;
                            *(arg1 + 0x1ac) = 0;
                            *(arg1 + 0x1a8) = 0;
                            ipc_log_string(uVar1,"[%s]: MDM2AP_ERRFATAL gpio = %d\n","mdm_debug_gpio_ipc_log",
                                           *(arg1 + 0x24));
                            ipc_log_string(_segment.ehdr,"[%s]: AP2MDM_ERRFATAL gpio = %d\n","mdm_debug_gpio_ipc_log"
                                           ,*(arg1 + 0x14));
                            ipc_log_string(_segment.ehdr,"[%s]: MDM2AP_STATUS gpio = %d\n","mdm_debug_gpio_ipc_log",
                                           *(arg1 + 0x2c));
                            ipc_log_string(_segment.ehdr,"[%s]: AP2MDM_STATUS gpio = %d\n","mdm_debug_gpio_ipc_log",
                                           *(arg1 + 4));
                            ipc_log_string(_segment.ehdr,"[%s]: AP2MDM_SOFT_RESET gpio = %d\n",
                                           "mdm_debug_gpio_ipc_log",*(arg1 + 8));
                            return 0;
                        }
                        ipc_log_string(_segment.ehdr,"[%s]: esoc registration failed\n","sdx55m_setup_hw");
                        _dev_err(*(arg1 + 0x150),"esoc registration failed\n");
                        if (arg1 != 0) {
                            free_irq(*(arg1 + 0x188),arg1);
                            free_irq(*(arg1 + 0x18c),arg1);
                        }
                    }
                    else {
                        uVar7 = uVar3;
                        ipc_log_string(_segment.ehdr,"[%s]: Failed to configure the ipc\n","sdx55m_setup_hw");
                        _dev_err(*(arg1 + 0x150),"Failed to configure the ipc\n");
                    }
                    sym.mdm_release_ipc_gpio(arg1);
                }
                else {
                    uVar7 = uVar3;
                    ipc_log_string(_segment.ehdr,"[%s]: Failed to init pinctrl\n","sdx55m_setup_hw");
                    _dev_err(*(arg1 + 0x150),"Failed to init pinctrl\n");
                }
            }
            destroy_workqueue(*(arg1 + 0x40));
        }
    }
    return uVar7;
}


// ===== sym.lemur_setup_hw @ 0x0800b7e8 (size 312) =====

uint64_t sym.lemur_setup_hw(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong *arg4;
    uint64_t uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg4 = devm_kmalloc(arg3 + 0x10,0x4c8,0xdc0);
    if ((arg4 == NULL) || (0xfffffffffffff000 < arg4)) {
        _dev_err(arg3 + 0x10,"cannot allocate esoc device\n");
    }
    else {
        *arg4 = "SDXLEMUR";
        arg4[1] = "PCIe";
        arg4[0x97] = "SDXLEMUR";
        uVar1 = sym.sdx_setup_hw(arg1,arg2,arg3,arg4);
        if (uVar1 == 0) {
            uVar2 = sym.sdx_setup_regulators(arg1);
            arg4 = uVar2 & 0xffffffff;
            if (uVar2 != 0) {
                _dev_err(*(arg1 + 0x150),"Failed to setup regulators: %d\n",arg4);
                ipc_log_string(_segment.ehdr,"[%s]: Failed to setup regulators: %d\n","lemur_setup_hw",arg4);
            }
            pcVar3 = "[%s]: Hardware setup done for lemur\n";
        }
        else {
            arg4 = uVar1;
            _dev_err(*(arg1 + 0x150),"Hardware setup failed for lemur\n");
            pcVar3 = "[%s]: Hardware setup failed for lemur\n";
        }
        ipc_log_string(_segment.ehdr,pcVar3,"lemur_setup_hw");
    }
    return arg4 & 0xffffffff;
}


// ===== sym.sdx_setup_regulators @ 0x0800b920 (size 572) =====

int * sym.sdx_setup_regulators(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *arg4;
    char *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    int *piVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    int *piStack_98;
    int aiStack_90 [3];
    int iStack_84;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ushort uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    iStack_84 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    piStack_98 = NULL;
    aiStack_90[0] = 0;
    aiStack_90[1] = 0;
    uVar1 = of_property_read_string_helper(*(*(arg1 + 0x150) + 0x2f0),"reg-names",0,0,0);
    *(arg1 + 0x1a0) = uVar1;
    if (uVar1 < 1) {
        _dev_err(*(arg1 + 0x150),"No regulators for this device\n");
        pcVar5 = "sdx_setup_regulators";
        ipc_log_string(_segment.ehdr,"[%s]: No regulators for %s device\n","sdx_setup_regulators",**(arg1 + 0x1c0));
    }
    else {
        pcVar5 = 0xdc0;
        iVar2 = devm_kmalloc(*(arg1 + 0x150),uVar1 << 4);
        *(arg1 + 0x198) = iVar2;
        if (iVar2 == 0) {
            piVar7 = 0xfffffff4;
            goto code_r0x0800bae4;
        }
        if (0 < *(arg1 + 0x1a0)) {
            iVar2 = 0;
            uVar6 = 0;
            do {
                of_property_read_string_helper
                          (*(*(arg1 + 0x150) + 0x2f0),"reg-names",&piStack_98,1,uVar6 & 0xffffffff);
                uVar3 = devm_regulator_get(*(arg1 + 0x150),piStack_98);
                *(*(arg1 + 0x198) + iVar2) = uVar3;
                if (0xfffffffffffff000 < *(*(arg1 + 0x198) + iVar2)) {
                    pcVar5 = piStack_98;
                    _dev_err(*(arg1 + 0x150),"failed to get %s reg\n");
                    piVar7 = *(*(arg1 + 0x198) + iVar2);
                    goto code_r0x0800bae4;
                }
                snprintf(&uStack_80,0x32,"%s-uV-uA",piStack_98);
                pcVar5 = &iStack_84;
                iVar4 = of_find_property(*(*(arg1 + 0x150) + 0x2f0),&uStack_80);
                if (iVar4 != 0) {
                    pcVar5 = aiStack_90;
                    uVar1 = of_property_read_variable_u32_array(*(*(arg1 + 0x150) + 0x2f0),&uStack_80,pcVar5,2,0);
                    if (uVar1 < 0) {
                        piVar7 = uVar1;
                        pcVar5 = piVar7;
                        _dev_err(*(arg1 + 0x150),"Failed to read uVuA value(rc:%d)\n");
                        goto code_r0x0800bae4;
                    }
                    if (aiStack_90[0] != 0) {
                        *(*(arg1 + 0x198) + iVar2 + 8) = aiStack_90[0];
                    }
                    if (aiStack_90[1] != 0) {
                        *(*(arg1 + 0x198) + iVar2 + 0xc) = aiStack_90[1];
                    }
                }
                uVar6 = uVar6 + 1;
                iVar2 = iVar2 + 0x10;
            } while (uVar6 < *(arg1 + 0x1a0));
        }
    }
    piVar7 = NULL;
code_r0x0800bae4:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return piVar7;
    }
    auVar8 = __stack_chk_fail();
    iVar2 = auVar8._0_8_;
    *extraout_x18 = sym.pinn_setup_hw;
    arg4 = devm_kmalloc(pcVar5 + 0x10,0x4c8,0xdc0);
    if ((arg4 == NULL) || (0xfffffffffffff000 < arg4)) {
        _dev_err(pcVar5 + 0x10,"cannot allocate esoc device\n");
    }
    else {
        *arg4 = "SDXPINN";
        arg4[1] = "PCIe";
        arg4[0x97] = "SDXPINN";
        uVar1 = sym.sdx_setup_hw(iVar2,auVar8._8_8_,pcVar5,arg4);
        if (uVar1 == 0) {
            uVar6 = sym.sdx_setup_regulators(iVar2);
            arg4 = uVar6 & 0xffffffff;
            if (uVar6 != 0) {
                _dev_err(*(iVar2 + 0x150),"Failed to setup regulators: %d\n",arg4);
                ipc_log_string(_segment.ehdr,"[%s]: Failed to setup regulators: %d\n","pinn_setup_hw",arg4);
            }
            pcVar5 = "[%s]: Hardware setup done for pinn\n";
        }
        else {
            arg4 = uVar1;
            _dev_err(*(iVar2 + 0x150),"Hardware setup failed for pinn\n");
            pcVar5 = "[%s]: Hardware setup failed for pinn\n";
        }
        ipc_log_string(_segment.ehdr,pcVar5,"pinn_setup_hw");
    }
    return arg4 & 0xffffffff;
}


// ===== sym.pinn_setup_hw @ 0x0800bb5c (size 312) =====

uint64_t sym.pinn_setup_hw(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong *arg4;
    uint64_t uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg4 = devm_kmalloc(arg3 + 0x10,0x4c8,0xdc0);
    if ((arg4 == NULL) || (0xfffffffffffff000 < arg4)) {
        _dev_err(arg3 + 0x10,"cannot allocate esoc device\n");
    }
    else {
        *arg4 = "SDXPINN";
        arg4[1] = "PCIe";
        arg4[0x97] = "SDXPINN";
        uVar1 = sym.sdx_setup_hw(arg1,arg2,arg3,arg4);
        if (uVar1 == 0) {
            uVar2 = sym.sdx_setup_regulators(arg1);
            arg4 = uVar2 & 0xffffffff;
            if (uVar2 != 0) {
                _dev_err(*(arg1 + 0x150),"Failed to setup regulators: %d\n",arg4);
                ipc_log_string(_segment.ehdr,"[%s]: Failed to setup regulators: %d\n","pinn_setup_hw",arg4);
            }
            pcVar3 = "[%s]: Hardware setup done for pinn\n";
        }
        else {
            arg4 = uVar1;
            _dev_err(*(arg1 + 0x150),"Hardware setup failed for pinn\n");
            pcVar3 = "[%s]: Hardware setup failed for pinn\n";
        }
        ipc_log_string(_segment.ehdr,pcVar3,"pinn_setup_hw");
    }
    return arg4 & 0xffffffff;
}


// ===== sym.baagha_setup_hw @ 0x0800bc94 (size 312) =====

uint64_t sym.baagha_setup_hw(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong *arg4;
    uint64_t uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg4 = devm_kmalloc(arg3 + 0x10,0x4c8,0xdc0);
    if ((arg4 == NULL) || (0xfffffffffffff000 < arg4)) {
        _dev_err(arg3 + 0x10,"cannot allocate esoc device\n");
    }
    else {
        *arg4 = "SDXBAAGHA";
        arg4[1] = "PCIe";
        arg4[0x97] = "SDXBAAGHA";
        uVar1 = sym.sdx_setup_hw(arg1,arg2,arg3,arg4);
        if (uVar1 == 0) {
            uVar2 = sym.sdx_setup_regulators(arg1);
            arg4 = uVar2 & 0xffffffff;
            if (uVar2 != 0) {
                _dev_err(*(arg1 + 0x150),"Failed to setup regulators: %d\n",arg4);
                ipc_log_string(_segment.ehdr,"[%s]: Failed to setup regulators: %d\n","baagha_setup_hw",arg4);
            }
            pcVar3 = "[%s]: Hardware setup done for baagha\n";
        }
        else {
            arg4 = uVar1;
            _dev_err(*(arg1 + 0x150),"Hardware setup failed for baagha\n");
            pcVar3 = "[%s]: Hardware setup failed for baahga\n";
        }
        ipc_log_string(_segment.ehdr,pcVar3,"baagha_setup_hw");
    }
    return arg4 & 0xffffffff;
}


// ===== sym.mdm_probe @ 0x0800bdcc (size 220) =====

uint64_t sym.mdm_probe(int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    code *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = of_match_node(obj.mdm_dt_match,*(arg1 + 0x300));
    if ((uVar1 != 0) && (uVar1 < 0xfffffffffffff001)) {
        iVar4 = *(uVar1 + 0xc0);
        uVar2 = devm_kmalloc(arg1 + 0x10,0x210,0xdc0);
        if ((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) {
            uVar1 = uVar2 & 0xffffffff;
        }
        else {
            pcVar3 = *(iVar4 + 0x10);
            if (5 < (pcVar3 + -0x80058a0 >> 3 | pcVar3 << 0x3d)) {
                __cfi_slowpath_diag(0x12240efbe0a9f8db,pcVar3,0x8001390);
            }
            uVar1 = (*pcVar3)(uVar2,iVar4,arg1);
            *(arg1 + 0xa8) = uVar2;
        }
    }
    return uVar1;
}


// ===== sym.mdm_remove @ 0x0800bea8 (size 68) =====

ulong sym.mdm_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    if (*(iVar1 + 0x40) != 0) {
        destroy_workqueue();
    }
    sym.esoc_clink_unregister(*(iVar1 + 0x1c0));
    return 0;
}


// ===== sym.esoc_set_boot_fail_action @ 0x0800beec (size 160) =====

ulong sym.esoc_set_boot_fail_action(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 < 6) {
        if (*(arg1 + 0xb8) == 0) {
            ipc_log_string(_segment.ehdr,"[%s]: esoc-mdm driver not present\n","esoc_set_boot_fail_action");
            uVar1 = 0xfffffff5;
        }
        else {
            *(*(arg1 + 0xb8) + 0x110) = arg2;
            ipc_log_string(_segment.ehdr,"[%s]: Boot fail action configured to %u\n","esoc_set_boot_fail_action");
            uVar1 = 0;
        }
    }
    else {
        ipc_log_string(_segment.ehdr,"[%s]: Unknown boot fail action requested: %u\n","esoc_set_boot_fail_action");
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.esoc_set_n_pon_tries @ 0x0800bf8c (size 172) =====

ulong sym.esoc_set_n_pon_tries(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xb8);
    if (5 < arg2) {
        ipc_log_string(_segment.ehdr,"[%s]: Num PON tries requested (%u) is over the limit: %u\n",
                       "esoc_set_n_pon_tries",arg2,5);
    }
    if (iVar2 == 0) {
        ipc_log_string(_segment.ehdr,"[%s]: esoc-mdm driver not present\n","esoc_set_n_pon_tries");
        uVar1 = 0xfffffff5;
    }
    else {
        *(iVar2 + 0x114) = arg2;
        ipc_log_string(_segment.ehdr,"[%s]: Num PON tries configured to %u\n","esoc_set_n_pon_tries",arg2);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.esoc_ssr_probe @ 0x0800c038 (size 560) =====

uint64_t sym.esoc_ssr_probe(int64_t arg1)

{
    int64_t arg1_00;
    uint32_t uVar1;
    int iVar2;
    ulong *puVar3;
    ulong *puVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = arg1 + 0x20;
    puVar3 = sym.esoc_device_get_match_data(arg1_00);
    if (puVar3 < 0xfffffffffffff001) {
        *(arg1 + 0x3f8) = *puVar3;
        puVar4 = devm_kmalloc(arg1_00,0x118,0xdc0);
        puVar3 = puVar4;
        if ((puVar4 != NULL) && (puVar4 < 0xfffffffffffff001)) {
            puVar4[2] = sym.__typeid__ZTSFv8esoc_evtP8esoc_engE_global_addr;
            uVar1 = sym.esoc_clink_register_cmd_eng(arg1,puVar4 + 1);
            if (uVar1 == 0) {
                __mutex_init(puVar4 + 0x1c,"&mdm_drv->poff_lock",obj.esoc_ssr_probe.__key);
                *(arg1 + 0x420) = sym.mdm_rproc_shutdown.1170f134d19d2c286ae3a2a8519f89df.cfi_jt;
                *(arg1 + 0x418) = sym.mdm_rproc_powerup.1170f134d19d2c286ae3a2a8519f89df.cfi_jt;
                *(arg1 + 0x480) = sym.mdm_rproc_panic.1170f134d19d2c286ae3a2a8519f89df.cfi_jt;
                *(arg1 + 0x468) = sym.mdm_rproc_elf_load_segments.1170f134d19d2c286ae3a2a8519f89df.cfi_jt;
                uVar5 = sym.esoc_clink_register_rproc(arg1);
                puVar3 = uVar5 & 0xffffffff;
                if (uVar5 == 0) {
                    iVar6 = alloc_workqueue("mdm_drv_queue",0,0);
                    puVar4[0x12] = iVar6;
                    if (iVar6 != 0) {
                        *(arg1 + 0xb8) = puVar4;
                        *(puVar4 + 4) = 0;
                        __init_swait_queue_head(puVar4 + 5,"&x->wait",obj.init_completion.__key);
                        *(puVar4 + 8) = 0;
                        __init_swait_queue_head(puVar4 + 9,"&x->wait",obj.init_completion.__key);
                        *(puVar4 + 0xc) = 0;
                        __init_swait_queue_head(puVar4 + 0xd,"&x->wait",obj.init_completion.__key);
                        puVar4[0x13] = 0xfffffffe0;
                        puVar4[0x14] = puVar4 + 0x14;
                        puVar4[0x15] = puVar4 + 0x14;
                        puVar4[0x10] = arg1;
                        puVar4[0x16] = sym.mdm_ssr_fn.1170f134d19d2c286ae3a2a8519f89df.cfi_jt;
                        *puVar4 = 1;
                        *(puVar4 + 0x11) = 0;
                        *(puVar4 + 0x22) = 3;
                        *(puVar4 + 0x114) = 3;
                        puVar4[0x19] = sym.esoc_msm_restart_handler.1170f134d19d2c286ae3a2a8519f89df.cfi_jt;
                        iVar2 = register_reboot_notifier(puVar4 + 0x19);
                        puVar3 = NULL;
                        if (iVar2 != 0) {
                            _dev_err(arg1_00,"register for reboot failed\n");
                            puVar3 = NULL;
                        }
                        goto code_r0x0800c214;
                    }
                    _dev_err(arg1 + 0x20,"could not create mdm_queue\n");
                    sym.esoc_clink_unregister_rproc(arg1);
                }
                *(arg1 + 0x3d8) = 0;
                sym.esoc_clink_evt_notify(8,arg1);
            }
            else {
                puVar3 = uVar1;
                _dev_err(arg1_00,"failed to register cmd engine\n");
            }
        }
    }
    else {
        _dev_err(arg1_00,"esoc match data failed: %d\n",puVar3);
    }
code_r0x0800c214:
    return puVar3 & 0xffffffff;
}


// ===== sym.mdm_handle_clink_evt @ 0x0800c268 (size 464) =====

void sym.mdm_handle_clink_evt(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char *pcVar2;
    uint uVar3;
    ulong *in_x18;
    uint32_t *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg1 - 1;
    if (10 < uVar1) {
        return;
    }
    puVar4 = arg2 + -8;
    pcVar2 = "[%s]: evt_state: ESOC_UNEXPECTED_RESET\n";
    //switch table (11 cases) at 0x8004a60
    switch(*(uVar1 + 0x8004a60) * 4 + 0x800c2ac) {
    case 0x800c2b0:
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_RUN_STATE: Calling complete with state: PON_SUCCESS\n",
                       "mdm_handle_clink_evt");
        *(arg2 + 0x80) = 1;
        *puVar4 = 9;
        goto code_r0x0800c414;
    case 0x800c2e8:
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_RETRY_PON_EVT: Calling complete with state: PON_RETRY\n",
                       "mdm_handle_clink_evt");
        uVar3 = 2;
code_r0x0800c40c:
        *(arg2 + 0x80) = uVar3;
code_r0x0800c414:
        complete(arg2 + 0x18);
        arg2 = arg2 + 0x38;
code_r0x0800c41c:
        complete(arg2);
        break;
    case 0x800c310:
        if (*puVar4 == 1) {
            ipc_log_string(_segment.ehdr,"[%s]: ESOC_BOOT_STATE: Observed status high from modem.\n",
                           "mdm_handle_clink_evt");
            *puVar4 = 8;
        }
        break;
    case 0x800c348:
        pcVar2 = "[%s]: evt_state: ESOC_ERR_FATAL\n";
    case 0x800c354:
        ipc_log_string(_segment.ehdr,pcVar2,"mdm_handle_clink_evt");
        if (*puVar4 < 7) {
            ipc_log_string(_segment.ehdr,"[%s]: Modem in crash state or not booted. Ignoring.\n",
                           "mdm_handle_clink_evt");
        }
        else {
            ipc_log_string(_segment.ehdr,"[%s]: Setting crash flag\n","mdm_handle_clink_evt");
            *puVar4 = 6;
            queue_work_on(0x20,*(arg2 + 0x88),arg2 + 0x90);
        }
        break;
    case 0x800c3c4:
        ipc_log_string(_segment.ehdr,"[%s]: evt_state: ESOC_REQ_ENG_ON; Registered a req engine\n",
                       "mdm_handle_clink_evt");
        arg2 = arg2 + 0x58;
        goto code_r0x0800c41c;
    case 0x800c3ec:
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_INVALID_STATE: Calling complete with state: PON_FAIL\n",
                       "mdm_handle_clink_evt");
        uVar3 = 3;
        goto code_r0x0800c40c;
    }
    return;
}


// ===== sym.mdm_ssr_fn @ 0x0800c438 (size 256) =====

void sym.mdm_ssr_fn(int64_t arg1)

{
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(*(arg1 + -0x18) + 1000);
    wait_for_completion(arg1 + -0x58);
    if (*(arg1 + -0x10) == 1) {
        iVar1 = *(arg1 + -0x18);
        ipc_log_string(_segment.ehdr,"[%s]: Calling mdm_crash hooks\n","esoc_client_link_mdm_crash");
        iVar1 = *(iVar1 + 0x4a8);
        if ((iVar1 != 0) && (pcVar2 = *(iVar1 + 0x30), pcVar2 != NULL)) {
            __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar2,0x8001510);
            (*pcVar2)(*(iVar1 + 8));
        }
        sym.mdm_wait_for_status_low(arg1_00,0);
        ipc_log_string(_segment.ehdr,"[%s]: Starting SSR work\n","mdm_ssr_fn");
        sym.esoc_clink_request_ssr(*(arg1 + -0x18));
    }
    else {
        ipc_log_string(_segment.ehdr,"[%s]: Got errfatal but ignoring as boot failed\n","mdm_ssr_fn");
    }
    return;
}


// ===== sym.esoc_msm_restart_handler @ 0x0800c538 (size 348) =====

ulong sym.esoc_msm_restart_handler(int64_t arg1,uint32_t arg2)

{
    ulong *in_x18;
    int64_t iVar1;
    code *pcVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    if (arg2 == 1) {
        *in_x18 = unaff_x30;
        iVar1 = *(arg1 + -0x48);
        iVar3 = *(iVar1 + 0x3c8);
        mutex_lock(arg1 + 0x18);
        if (*(arg1 + -200) == 1) {
            ipc_log_string(_segment.ehdr,"[%s]: Reboot notifier: mdm already powered-off\n","esoc_msm_restart_handler"
                          );
        }
        else {
            ipc_log_string(_segment.ehdr,"[%s]: Calling power_off hooks with flags: 0x%x\n",
                           "esoc_client_link_power_off",2);
            iVar4 = *(iVar1 + 0x4a8);
            if ((iVar4 != 0) && (pcVar2 = *(iVar4 + 0x20), pcVar2 != NULL)) {
                __cfi_slowpath_diag(0xddcd4a035804a8bc,pcVar2,0x8001430);
                (*pcVar2)(*(iVar4 + 8),2);
            }
            ipc_log_string(_segment.ehdr,"[%s]: Reboot notifier: Notifying esoc of cold reboot\n",
                           "esoc_msm_restart_handler");
            pcVar2 = *(iVar3 + 0x18);
            if (pcVar2 != sym.__typeid__ZTSFv11esoc_notifyP10esoc_clinkE_global_addr) {
                __cfi_slowpath_diag(0x190ba2fe57e749ba,pcVar2,0x8001530);
            }
            (*pcVar2)(10,iVar1);
            *(arg1 + -200) = 1;
        }
        mutex_unlock(arg1 + 0x18);
    }
    return 1;
}


// ===== sym.esoc_ssr_remove @ 0x0800c694 (size 124) =====

ulong sym.esoc_ssr_remove(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xb8);
    *(arg1 + 0xb8) = 0;
    *(arg1 + 0x3d8) = 0;
    sym.esoc_clink_evt_notify(8,arg1);
    sym.esoc_clink_unregister_rproc(arg1);
    if (*(iVar2 + 0x90) != 0) {
        destroy_workqueue();
    }
    iVar1 = unregister_reboot_notifier(iVar2 + 200);
    if (iVar1 != 0) {
        _dev_err(arg1 + 0x20,"unregister reboot notifier failed\n");
    }
    return 0;
}


// ===== sym.mdm_rproc_shutdown @ 0x0800c710 (size 900) =====

int sym.mdm_rproc_shutdown(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    uint32_t uVar5;
    int64_t arg2;
    int64_t iVar6;
    int64_t iVar7;
    code *pcVar8;
    uint32_t *puVar9;
    ulong *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x98);
    puVar9 = *(iVar6 + 0x98);
    arg2 = iVar6 + -0x20;
    puVar10 = *(iVar6 + 0x3a8);
    iVar7 = *(*(puVar9 + 0x20) + 1000);
    ipc_log_string(_segment.ehdr,"[%s]: Shutdown request from SSR\n","mdm_rproc_shutdown");
    mutex_lock(puVar9 + 0x38);
    if ((*puVar9 | 2) == 6) {
        ipc_log_string(_segment.ehdr,"[%s]: Shutdown in crash mode\n","mdm_rproc_shutdown");
        sym.mdm_wait_for_status_low(iVar7,0);
        sym.esoc_clink_queue_request(5,arg2);
        ipc_log_string(_segment.ehdr,"[%s]: Calling power_off hooks with flags: 0x%x\n","esoc_client_link_power_off",
                       1);
        iVar7 = *(iVar6 + 0x488);
        if ((iVar7 != 0) && (pcVar8 = *(iVar7 + 0x20), pcVar8 != NULL)) {
            __cfi_slowpath_diag(0xddcd4a035804a8bc,pcVar8,0x8001430);
            (*pcVar8)(*(iVar7 + 8),1);
        }
        ipc_log_string(_segment.ehdr,"[%s]: Executing the ESOC_PREPARE_DEBUG command\n","mdm_rproc_shutdown");
        pcVar8 = *puVar10;
        if (pcVar8 != sym.__typeid__ZTSFi8esoc_cmdP10esoc_clinkE_global_addr) {
            __cfi_slowpath_diag(0xa0f7794370a928b7,pcVar8,0x80013b0);
        }
        uVar5 = 5;
        iVar1 = (*pcVar8)(5,arg2);
        if (iVar1 == 0) {
code_r0x0800c998:
            *puVar9 = uVar5;
            pcVar4 = "[%s]: Shutdown completed\n";
code_r0x0800c9a8:
            ipc_log_string(_segment.ehdr,pcVar4,"mdm_rproc_shutdown");
            iVar1 = 0;
            goto code_r0x0800c9b8;
        }
        ipc_log_string(_segment.ehdr,"[%s]: ESOC_PREPARE_DEBUG command failed\n","mdm_rproc_shutdown");
        pcVar4 = "failed to enter debug\n";
    }
    else {
        ipc_log_string(_segment.ehdr,"[%s]: Graceful shutdown mode\n","mdm_rproc_shutdown");
        if (*puVar9 == 1) {
            pcVar4 = "[%s]: mdm already powered-off\n";
            goto code_r0x0800c9a8;
        }
        uVar2 = qcom_sysmon_shutdown_acked(*(iVar6 + 0x470));
        if ((uVar2 & 1) == 0) {
            ipc_log_string(_segment.ehdr,"[%s]: Executing the ESOC_FORCE_PWR_OFF command\n","mdm_rproc_shutdown");
            pcVar8 = *puVar10;
            if (pcVar8 != sym.__typeid__ZTSFi8esoc_cmdP10esoc_clinkE_global_addr) {
                __cfi_slowpath_diag(0xa0f7794370a928b7,pcVar8,0x80013d0);
            }
            uVar3 = 3;
        }
        else {
            ipc_log_string(_segment.ehdr,"[%s]: Executing the ESOC_PWR_OFF command\n","mdm_rproc_shutdown");
            pcVar8 = *puVar10;
            if (pcVar8 != sym.__typeid__ZTSFi8esoc_cmdP10esoc_clinkE_global_addr) {
                __cfi_slowpath_diag(0xa0f7794370a928b7,pcVar8,0x80013f0);
            }
            uVar3 = 2;
        }
        iVar1 = (*pcVar8)(uVar3,arg2);
        if (iVar1 == 0) {
            ipc_log_string(_segment.ehdr,"[%s]: Calling power_off hooks with flags: 0x%x\n",
                           "esoc_client_link_power_off",2);
            iVar6 = *(iVar6 + 0x488);
            if ((iVar6 != 0) && (pcVar8 = *(iVar6 + 0x20), pcVar8 != NULL)) {
                __cfi_slowpath_diag(0xddcd4a035804a8bc,pcVar8,0x8001430);
                (*pcVar8)(*(iVar6 + 8),2);
            }
            pcVar8 = *puVar10;
            if (pcVar8 != sym.__typeid__ZTSFi8esoc_cmdP10esoc_clinkE_global_addr) {
                __cfi_slowpath_diag(0xa0f7794370a928b7,pcVar8,0x8001410);
            }
            (*pcVar8)(3,arg2);
            uVar5 = 1;
            goto code_r0x0800c998;
        }
        ipc_log_string(_segment.ehdr,"[%s]: Executing the ESOC_PWR_OFF command failed\n","mdm_rproc_shutdown");
        pcVar4 = "failed to exe power off\n";
    }
    _dev_err(iVar6,pcVar4);
code_r0x0800c9b8:
    mutex_unlock(puVar9 + 0x38);
    return iVar1;
}


// ===== sym.mdm_rproc_powerup @ 0x0800ca94 (size 1700) =====

int sym.mdm_rproc_powerup(int64_t arg1)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    ulong uVar4;
    char *pcVar5;
    ulong *puVar6;
    ulong *in_x18;
    code *pcVar7;
    code *arg1_00;
    uint32_t uVar8;
    int64_t iVar9;
    uint *puVar10;
    uint uVar11;
    int *piVar12;
    code *pcVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar7 = *(arg1 + 0x98);
    puVar6 = *(pcVar7 + 0x3a8);
    arg1_00 = pcVar7 + -0x20;
    piVar12 = *(pcVar7 + 0x98);
    ipc_log_string(_segment.ehdr,"[%s]: Powerup request from SSR\n","mdm_rproc_powerup");
    uVar8 = 0;
    uVar11 = 0x7fffffff;
    do {
        ipc_log_string(_segment.ehdr,"[%s]: Boot trial: %d\n","mdm_rproc_powerup",uVar8 & 0xff);
        if ((pcVar7[0x480] == 0x0) && (*(pcVar7 + 0x3b0) == 0)) {
            ipc_log_string(_segment.ehdr,"[%s]: Wait for req eng registration\n","mdm_rproc_powerup");
            wait_for_completion(piVar12 + 0x18);
        }
        ipc_log_string(_segment.ehdr,"[%s]: Req eng available\n","mdm_rproc_powerup");
        if (*piVar12 == 5) {
            ipc_log_string(_segment.ehdr,"[%s]: In SSR power-on mode\n","mdm_rproc_powerup");
            ipc_log_string(_segment.ehdr,"[%s]: Executing the ESOC_EXIT_DEBUG command\n","mdm_rproc_powerup");
            pcVar13 = *puVar6;
            if (pcVar13 != sym.__typeid__ZTSFi8esoc_cmdP10esoc_clinkE_global_addr) {
                __cfi_slowpath_diag(0xa0f7794370a928b7,pcVar13,0x8001470);
            }
            iVar1 = (*pcVar13)(7,arg1_00);
            if (iVar1 != 0) {
                ipc_log_string(_segment.ehdr,"[%s]: ESOC_EXIT_DEBUG command failed\n","mdm_rproc_powerup");
                pcVar5 = "cannot exit debug mode\n";
                goto code_r0x0800d050;
            }
            *piVar12 = 1;
            ipc_log_string(_segment.ehdr,"[%s]: Executing the ESOC_PWR_ON command\n","mdm_rproc_powerup");
            pcVar13 = *puVar6;
            if (pcVar13 != sym.__typeid__ZTSFi8esoc_cmdP10esoc_clinkE_global_addr) {
                __cfi_slowpath_diag(0xa0f7794370a928b7,pcVar13,0x8001490);
            }
            iVar1 = (*pcVar13)(1,arg1_00);
            if (iVar1 != 0) goto code_r0x0800d048;
            ipc_log_string(_segment.ehdr,"[%s]: Calling power_on hooks with flags: 0x%x\n","esoc_client_link_power_on"
                           ,1);
            iVar9 = *(pcVar7 + 0x488);
            if ((iVar9 != 0) && (pcVar13 = *(iVar9 + 0x18), pcVar13 != NULL)) {
                __cfi_slowpath_diag(0xccf68899c64718a6,pcVar13,0x80014b0);
                uVar3 = *(iVar9 + 8);
                uVar4 = 1;
                goto code_r0x0800cd44;
            }
        }
        else if (*piVar12 == 1) {
            ipc_log_string(_segment.ehdr,"[%s]: In normal power-on mode\n","mdm_rproc_powerup");
            ipc_log_string(_segment.ehdr,"[%s]: Executing the ESOC_PWR_ON command\n","mdm_rproc_powerup");
            pcVar13 = *puVar6;
            if (pcVar13 != sym.__typeid__ZTSFi8esoc_cmdP10esoc_clinkE_global_addr) {
                __cfi_slowpath_diag(0xa0f7794370a928b7,pcVar13,0x8001450);
            }
            iVar1 = (*pcVar13)(1,arg1_00);
            if (iVar1 != 0) {
                ipc_log_string(_segment.ehdr,"[%s]: ESOC_PWR_ON command failed\n","mdm_rproc_powerup");
code_r0x0800d048:
                pcVar5 = "pwr on fail\n";
code_r0x0800d050:
                _dev_err(pcVar7,pcVar5);
                return iVar1;
            }
            ipc_log_string(_segment.ehdr,"[%s]: Calling power_on hooks with flags: 0x%x\n","esoc_client_link_power_on"
                           ,0);
            iVar9 = *(pcVar7 + 0x488);
            if ((iVar9 != 0) && (pcVar13 = *(iVar9 + 0x18), pcVar13 != NULL)) {
                __cfi_slowpath_diag(0xccf68899c64718a6,pcVar13,0x80014b0);
                uVar3 = *(iVar9 + 8);
                uVar4 = 0;
code_r0x0800cd44:
                (*pcVar13)(uVar3,uVar4);
            }
        }
        if (pcVar7[0x480] != 0x0) {
            uVar11 = 0x9c4;
        }
        ipc_log_string(_segment.ehdr,"[%s]: Modem turned-on. Waiting for pon_done notification..\n",
                       "mdm_rproc_powerup");
        uVar3 = __msecs_to_jiffies(uVar11);
        iVar2 = wait_for_completion_timeout(piVar12 + 8,uVar3);
        iVar1 = piVar12[0x22];
        if ((iVar1 != 3) && (0 < iVar2)) {
            if (iVar1 == 2) {
                ipc_log_string(_segment.ehdr,"[%s]: Boot failed. Doing cleanup and attempting to retry\n",
                               "mdm_rproc_powerup");
                sym.mdm_subsys_retry_powerup_cleanup(arg1_00,0);
            }
            else if (iVar1 == 1) {
                return 0;
            }
            goto code_r0x0800cb30;
        }
        _dev_err(pcVar7,"booting failed\n");
        ipc_log_string(_segment.ehdr,"[%s]: booting failed\n","mdm_rproc_powerup");
        puVar10 = *(pcVar7 + 0x98);
        iVar9 = *(pcVar7 + 0x3c8);
        if (*(puVar10 + 0x45) == (uVar8 & 0xff)) {
            ipc_log_string(_segment.ehdr,"[%s]: Reached max. number of boot trials\n","mdm_handle_boot_fail");
            puVar10[0x44] = 3;
        }
        if (5 < *(puVar10 + 0x44)) {
code_r0x0800d060:
            sym.mdm_subsys_retry_powerup_cleanup(arg1_00,2);
            ipc_log_string(_segment.ehdr,"[%s]: Shutdown the modem and quit\n","mdm_handle_boot_fail");
            pcVar7 = *(*(iVar9 + 0x200) + 0x10);
            if (pcVar7 == NULL) {
                return -5;
            }
            if ((pcVar7 + -0x8005818 >> 3 | pcVar7 << 0x3d) < 7) goto code_r0x0800d0a8;
code_r0x0800d114:
            __cfi_slowpath_diag(0x5325a6c16b375fe3,pcVar7,0x80014d0);
code_r0x0800d0a8:
            (*pcVar7)(iVar9);
            return -5;
        }
    //switch table (7 cases) at 0x8004a6c
        switch(*((*(puVar10 + 0x44) & 0xffffffff) * 4 + 0x8004a6c) + 0x800ce20) {
        case 0x800ce34:
            sym.mdm_subsys_retry_powerup_cleanup(arg1_00,0);
            ipc_log_string(_segment.ehdr,"[%s]: Request to retry a warm reset\n","mdm_handle_boot_fail");
            uVar8 = uVar8 + 1;
            break;
        case 0x800ce64:
            sym.mdm_subsys_retry_powerup_cleanup(arg1_00,2);
            ipc_log_string(_segment.ehdr,"[%s]: Doing cold reset by power-down and warm reset\n",
                           "mdm_handle_boot_fail");
            uVar8 = uVar8 + 1;
            pcVar13 = *(*(iVar9 + 0x200) + 0x10);
            if (pcVar13 != NULL) {
                if (6 < (pcVar13 + -0x8005818 >> 3 | pcVar13 << 0x3d)) {
                    __cfi_slowpath_diag(0x5325a6c16b375fe3,pcVar13,0x80014d0);
                }
                (*pcVar13)(iVar9);
            }
            break;
        case 0x800cec0:
            sym.mdm_subsys_retry_powerup_cleanup(arg1_00,2);
            ipc_log_string(_segment.ehdr,"[%s]: Doing an S3 reset\n","mdm_handle_boot_fail");
            pcVar13 = *(*(iVar9 + 0x200) + 0x10);
            if (pcVar13 != NULL) {
                if (6 < (pcVar13 + -0x8005818 >> 3 | pcVar13 << 0x3d)) {
                    __cfi_slowpath_diag(0x5325a6c16b375fe3,pcVar13,0x80014d0);
                }
                (*pcVar13)(iVar9);
            }
            uVar8 = uVar8 + 1;
            msleep(1000);
            break;
        case 0x800d060:
            goto code_r0x0800d060;
        case 0x800d0bc:
            ipc_log_string(_segment.ehdr,"[%s]: Leaving the modem in its curent state\n","mdm_handle_boot_fail");
            *puVar10 = 1;
            return -5;
        case 0x800d0f0:
            ipc_log_string(_segment.ehdr,"[%s]: Calling panic!!\n","mdm_handle_boot_fail");
            panic("Panic requested on external modem boot failure\n");
            goto code_r0x0800d114;
        }
code_r0x0800cb30:
        if (*(piVar12 + 0x45) < (uVar8 & 0xff)) {
            return 0;
        }
    } while( true );
}


// ===== sym.mdm_rproc_panic @ 0x0800d144 (size 164) =====

ulong sym.mdm_rproc_panic(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    iVar3 = *(iVar2 + 0x3a8);
    ipc_log_string(_segment.ehdr,"[%s]: MDM crashed notification from SSR\n","mdm_rproc_panic");
    pcVar1 = *(iVar3 + 0x18);
    if (pcVar1 != sym.__typeid__ZTSFv11esoc_notifyP10esoc_clinkE_global_addr) {
        __cfi_slowpath_diag(0x190ba2fe57e749ba,pcVar1,0x80014f0);
    }
    (*pcVar1)(9,iVar2 + -0x20);
    return 0;
}


// ===== sym.mdm_rproc_elf_load_segments @ 0x0800d1e8 (size 16) =====

ulong sym.mdm_rproc_elf_load_segments(int64_t arg1)

{
    return 0;
}


// ===== sym.mdm_subsys_retry_powerup_cleanup @ 0x0800d1f8 (size 220) =====

void sym.mdm_subsys_retry_powerup_cleanup(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    int64_t arg1_00;
    code *pcVar1;
    uint *puVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 1000);
    puVar2 = *(arg1 + 0xb8);
    ipc_log_string(_segment.ehdr,"[%s]: Doing cleanup\n","mdm_subsys_retry_powerup_cleanup");
    ipc_log_string(_segment.ehdr,"[%s]: Calling power_off hooks with flags: 0x%x\n","esoc_client_link_power_off",
                   arg2 & 0xffffffffU);
    iVar3 = *(arg1 + 0x4a8);
    if ((iVar3 != 0) && (pcVar1 = *(iVar3 + 0x20), pcVar1 != NULL)) {
        __cfi_slowpath_diag(0xddcd4a035804a8bc,pcVar1,0x8001430);
        (*pcVar1)(*(iVar3 + 8),arg2 & 0xffffffffU);
    }
    sym.mdm_disable_irqs(arg1_00);
    puVar2[0x22] = 0;
    puVar2[8] = 0;
    puVar2[0x10] = 0;
    *puVar2 = 1;
    puVar2[0x18] = 0;
    return;
}


// ===== sym.esoc_bus_init @ 0x0800d2e4 (size 156) =====

int sym.esoc_bus_init(void)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = device_register(obj.esoc_bus);
    if (iVar1 == 0) {
        iVar1 = bus_register(obj.esoc_bus_type);
        if (iVar1 == 0) {
            iVar1 = sym.esoc_dev_init();
            if (iVar1 == 0) {
                iVar1 = sym.mdm_drv_init();
                if (iVar1 == 0) {
                    return 0;
                }
                uVar2 = 0x8002479;
            }
            else {
                uVar2 = 0x80020c8;
            }
        }
        else {
            uVar2 = 0x8003b7a;
        }
    }
    else {
        uVar2 = 0x8003109;
    }
    _printk(uVar2);
    return iVar1;
}


// ===== sym.init_module @ 0x0800d380 (size 144) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = ipc_log_context_create(10,"esoc-mdm",0);
    if (_segment.ehdr == 0) {
        _printk(0x80027f5);
    }
    iVar1 = sym.esoc_bus_init();
    if (iVar1 == 0) {
        iVar1 = __platform_driver_register(reloc.mdm_probe.3f2debd08d7acb99a985e6098affe835.cfi_jt,obj.__this_module);
    }
    else {
        _printk(0x80021c3);
    }
    return iVar1;
}


// ===== sym.mdm_drv_init @ 0x0800d410 (size 80) =====

int sym.mdm_drv_init(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.esoc_driver_register(0x8001030);
    if (iVar1 != 0) {
        _printk(0x8002d89);
    }
    return iVar1;
}


// ===== sym.esoc_bus_exit @ 0x0800d460 (size 108) =====

void sym.esoc_bus_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    driver_unregister(obj.esoc_ssr_drv.llvm.12077621547925128093);
    class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
    __unregister_chrdev(_segment.ehdr,0,0x100,"esoc");
    bus_unregister(obj.esoc_bus_type);
    device_unregister(obj.esoc_bus);
    return;
}


// ===== sym.cleanup_module @ 0x0800d4cc (size 60) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.mdm_probe.3f2debd08d7acb99a985e6098affe835.cfi_jt);
    sym.esoc_bus_exit();
    ipc_log_context_destroy(_segment.ehdr);
    return;
}


// ===== sym.mdm_drv_exit @ 0x0800d508 (size 44) =====

void sym.mdm_drv_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    driver_unregister(obj.esoc_ssr_drv.llvm.12077621547925128093);
    return;
}

