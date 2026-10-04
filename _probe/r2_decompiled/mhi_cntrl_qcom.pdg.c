// decompiled from mhi_cntrl_qcom by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 1240) =====

//WARNING: Switch with 1 destination removed at 0x08004db0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x3fb6242234a190e5) {
            if (arg1 < -0x62673efe5b018057) {
                if (arg1 == -0x7c70029a9f3a5b39) {
                    pcVar2 = sym.mhi_pci_remove.cfi_jt;
                }
                else {
                    if (arg1 != -0x76e7814a8afd6df4) {
                        if (arg1 != -0x6adcd325f9643bc3) goto code_r0x08004d70;
                        pcVar2 = sym.mhi_runtime_last_busy.1acbed515394b2fc46302a41633e1c99.cfi_jt;
code_r0x0800318c:
                        if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                            return;
                        }
                        goto code_r0x08004d70;
                    }
                    pcVar2 = sym.mhi_debugfs_disable_pci_lpm_get.1acbed515394b2fc46302a41633e1c99.cfi_jt;
                }
            }
            else {
                if (arg1 == -0x62673efe5b018057) {
                    pcVar2 = sym.mhi_runtime_get.1acbed515394b2fc46302a41633e1c99.cfi_jt;
code_r0x08003464:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                        return;
                    }
                    goto code_r0x08004d70;
                }
                if (arg1 == -0x57be845bca9148ef) {
                    if ((pcVar1 + -0x80035f0 >> 3 | pcVar1 << 0x3d) < 7) {
                        return;
                    }
                    goto code_r0x08004d70;
                }
                if (arg1 != -0x4d1c42cf2ef326f2) goto code_r0x08004d70;
                pcVar2 = sym.mhi_qcom_time_get.1acbed515394b2fc46302a41633e1c99.cfi_jt;
            }
        }
        else if (arg1 < -0x2648401b1c1d210c) {
            if (arg1 == -0x3fb6242234a190e5) {
                pcVar2 = sym.mhi_arch_pci_link_state_cb.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt;
            }
            else if (arg1 == -0x33e083e563d83d80) {
                pcVar2 = sym.mhi_qcom_write_reg.1acbed515394b2fc46302a41633e1c99.cfi_jt;
            }
            else {
                if (arg1 != -0x3309776639b8e75a) goto code_r0x08004d70;
                pcVar2 = sym.mhi_arch_esoc_ops_power_on.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt;
            }
        }
        else if (arg1 < -0xdf7310ca8234d08) {
            if (arg1 == -0x2648401b1c1d210c) {
                pcVar2 = sym.mhi_bl_probe.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt;
            }
            else {
                if (arg1 != -0x2232b5fca7fb5744) goto code_r0x08004d70;
                pcVar2 = sym.mhi_arch_esoc_ops_power_off.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt;
            }
        }
        else {
            if (arg1 != -0xdf7310ca8234d08) {
                if ((arg1 == -0x8dc801903aca538) && ((pcVar1 + -0x8003538 >> 3 | pcVar1 << 0x3d) < 4)) {
                    return;
                }
                goto code_r0x08004d70;
            }
            pcVar2 = sym.mhi_arch_bw_scale.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt;
        }
    }
    else if (arg1 < 0x57a1365f607de20a) {
        if (arg1 < 0x1d7ed092cb04d3f1) {
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else if (arg1 == 0x67f4bcfe73f7260) {
                pcVar2 = sym.mhi_qcom_read_reg.1acbed515394b2fc46302a41633e1c99.cfi_jt;
            }
            else {
                if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x08004d70;
                pcVar2 = sym.debugfs_attr_read.cfi_jt;
            }
        }
        else if (arg1 == 0x1d7ed092cb04d3f1) {
            pcVar2 = sym.debugfs_attr_write.cfi_jt;
        }
        else if (arg1 == 0x321969b888d4949e) {
            pcVar2 = sym.no_llseek.cfi_jt;
        }
        else {
            if (arg1 != 0x4c550309df1cf4c1) goto code_r0x08004d70;
            pcVar2 = sym.mhi_arch_esoc_ops_mdm_error.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt;
        }
    }
    else if (arg1 < 0x6e9fb1c868c44dc4) {
        if (arg1 == 0x57a1365f607de20a) {
            pcVar2 = sym.mhi_pci_probe.cfi_jt;
        }
        else {
            if (arg1 == 0x6b141b54612cf75f) {
                pcVar2 = sym.mhi_debugfs_disable_pci_lpm_set.1acbed515394b2fc46302a41633e1c99.cfi_jt;
                goto code_r0x08003464;
            }
            if (arg1 != 0x6ba83359ac4765be) goto code_r0x08004d70;
            pcVar2 = sym.mhi_status_cb.1acbed515394b2fc46302a41633e1c99.cfi_jt;
        }
    }
    else if (arg1 < 0x7d57972cd3914fb1) {
        if (arg1 != 0x6e9fb1c868c44dc4) {
            if (arg1 != 0x791a5468d96d0f95) goto code_r0x08004d70;
            pcVar2 = sym.mhi_bl_dummy_cb.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt;
            goto code_r0x0800318c;
        }
        pcVar2 = sym.mhi_bl_remove.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.mhi_arch_pm_notifier.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08004d70;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08004d70:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004dc4);
    (*pcVar1)();
}


// ===== sym.debugfs_attr_write.cfi_jt @ 0x080034e0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_write.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.mhi_bl_remove.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt @ 0x080034e8 (size 8) =====

void sym.mhi_bl_remove.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = mhi_controller_get_privdata(*(param_1 + 0x10));
    iVar1 = *(iVar1 + 0x40);
    *(iVar1 + 0x108) = 0;
    ipc_log_string(*(iVar1 + 0x100),"Host: Remove notification\n");
    mhi_unprepare_from_transfer(param_1);
    return;
}


// ===== sym.mhi_arch_esoc_ops_mdm_error.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt @ 0x080034f0 (size 8) =====

void sym.mhi_arch_esoc_ops_mdm_error.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt(ulong param_1)

{
    uint uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = mhi_controller_get_privdata();
    uVar3 = *(iVar2 + 0x38);
    uVar1 = mhi_report_error(param_1);
    ipc_log_string(uVar3,"[I][%s] Enter: mdm asserted: ret: %d\n","mhi_arch_esoc_ops_mdm_error",uVar1);
    return;
}


// ===== sym.mhi_bl_probe.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt @ 0x080034f8 (size 8) =====

int sym.mhi_bl_probe.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x10);
    iVar2 = mhi_controller_get_privdata(iVar4);
    iVar5 = *(iVar2 + 0x40);
    *(iVar5 + 0x108) = param_1;
    iVar2 = *(param_1 + 0x98);
    if (iVar2 == 0) {
        iVar2 = *(param_1 + 0x28);
    }
    uVar3 = ipc_log_context_create(0x19,iVar2,0);
    *(iVar5 + 0x100) = uVar3;
    ipc_log_string(uVar3,"Host: Entered SBL, Session ID:0x%x\n",*(iVar4 + 0x120));
    iVar1 = mhi_prepare_for_transfer(param_1,0);
    if (iVar1 == 0) {
        iVar2 = 0x1000;
        if (*(param_2 + 0x20) != 0) {
            iVar2 = *(param_2 + 0x20);
        }
        *(iVar5 + 0x110) = iVar2;
        iVar1 = sym.mhi_bl_queue_inbound(param_1,iVar2);
        if (iVar1 != 0) {
            mhi_unprepare_from_transfer(param_1);
        }
    }
    return iVar1;
}


// ===== sym.mhi_runtime_last_busy.1acbed515394b2fc46302a41633e1c99.cfi_jt @ 0x08003500 (size 8) =====

void sym.mhi_runtime_last_busy.1acbed515394b2fc46302a41633e1c99.cfi_jt(int64_t *param_1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *param_1;
    uVar1 = ktime_get_mono_fast_ns();
    *(iVar2 + 0x218) = uVar1;
    return;
}


// ===== sym.mhi_runtime_put.1acbed515394b2fc46302a41633e1c99.cfi_jt @ 0x08003508 (size 8) =====

void sym.mhi_runtime_put.1acbed515394b2fc46302a41633e1c99.cfi_jt(int64_t *param_1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    
    puVar1 = *param_1 + 0x1f8;
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
            if (uVar2 != uVar5) goto code_r0x080046a0;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar5 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
code_r0x080046a0:
        if (uVar5 == uVar2) {
            return;
        }
    } while( true );
}


// ===== sym.cleanup_module.cfi_jt @ 0x08003510 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pci_unregister_driver(obj.mhi_pcie_driver);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08003518 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __pci_register_driver(obj.mhi_pcie_driver,obj.__this_module,"mhi_cntrl_qcom");
    return;
}


// ===== sym.mhi_qcom_write_reg.1acbed515394b2fc46302a41633e1c99.cfi_jt @ 0x08003520 (size 8) =====

void sym.mhi_qcom_write_reg.1acbed515394b2fc46302a41633e1c99.cfi_jt(ulong param_1,int64_t param_2,uint32_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(param_3,param_2);
    return;
}


// ===== sym.mhi_arch_pm_notifier.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt @ 0x08003528 (size 8) =====

ulong sym.mhi_arch_pm_notifier.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 4) {
        complete_all(param_1 + 0x18);
    }
    else if (param_2 == 3) {
        *(param_1 + 0x18) = 0;
    }
    return 0;
}


// ===== sym.mhi_arch_esoc_ops_power_off.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt @ 0x08003530 (size 8) =====

void sym.mhi_arch_esoc_ops_power_off.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt(int64_t *param_1,uint32_t param_2)

{
    int64_t *piVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int64_t *piVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar6 = mhi_controller_get_privdata();
    iVar10 = piVar6[8];
    iVar7 = mhi_controller_get_privdata(param_1);
    ipc_log_string(*(iVar7 + 0x38),"[I][%s] Enter: mdm_crashed: %d\n","mhi_arch_esoc_ops_power_off",param_2 & 1);
    pm_stay_awake(param_1[1] + 0x28);
    wait_for_completion(iVar10 + 200);
    __pm_runtime_resume(*param_1,4);
    piVar1 = param_1 + 0x28;
    mutex_lock(piVar1);
    if (piVar6[9] == '\0') {
        iVar7 = mhi_controller_get_privdata(param_1);
        ipc_log_string(*(iVar7 + 0x38),"[I][%s] Not in active state\n","mhi_arch_esoc_ops_power_off");
        mutex_unlock(piVar1);
        puVar2 = *param_1 + 0x1f8;
        uVar9 = *puVar2;
        do {
            uVar8 = uVar9;
            if (uVar8 == 0) {
                return;
            }
            Hint_Prefetch(puVar2,2,0,1);
            do {
                uVar3 = *puVar2;
                uVar9 = uVar3;
                if (uVar3 != uVar8) goto code_r0x08005a34;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar5) {
                    *puVar2 = uVar8 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005a34:
        } while (uVar8 != uVar3);
    }
    else {
        *(piVar6 + 9) = 0;
        *(piVar6 + 10) = 0;
        mutex_unlock(piVar1);
        puVar2 = *param_1 + 0x1f8;
        uVar9 = *puVar2;
        do {
            uVar8 = uVar9;
            if (uVar8 == 0) break;
            Hint_Prefetch(puVar2,2,0,1);
            do {
                uVar3 = *puVar2;
                uVar9 = uVar3;
                if (uVar3 != uVar8) goto code_r0x080058d0;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar5) {
                    *puVar2 = uVar8 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080058d0:
        } while (uVar8 != uVar3);
        iVar7 = mhi_controller_get_privdata(param_1);
        ipc_log_string(*(iVar7 + 0x38),"[I][%s] Triggering shutdown process\n","mhi_arch_esoc_ops_power_off");
        mhi_power_down(param_1,(param_2 & 1) == 0);
        iVar11 = *param_1;
        iVar10 = iVar11 + -0xd0;
        iVar7 = mhi_controller_get_privdata(param_1);
        ipc_log_string(*(iVar7 + 0x38),"[I][%s] Entered\n","mhi_arch_link_off");
        pci_set_power_state(iVar10,3);
        msm_pcie_pm_control(1,*(*(iVar11 + -0xc0) + 0xf8),iVar10,0,0);
        sym.mhi_arch_set_bus_request(param_1,0);
        iVar7 = mhi_controller_get_privdata(param_1);
        ipc_log_string(*(iVar7 + 0x38),"[I][%s] Exited\n","mhi_arch_link_off");
        sym.mhi_arch_pcie_deinit(param_1);
        sym.mhi_deinit_pci_dev(*param_1 + -0xd0,*piVar6);
        pm_relax(param_1[1] + 0x28);
    }
    return;
}


// ===== sym.debugfs_trigger_m3_fops_open.1acbed515394b2fc46302a41633e1c99.cfi_jt @ 0x08003538 (size 8) =====

void sym.debugfs_trigger_m3_fops_open.1acbed515394b2fc46302a41633e1c99.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,0,sym.mhi_debugfs_trigger_m3.1acbed515394b2fc46302a41633e1c99.cfi_jt,"%llu\n");
    return;
}


// ===== sym.debugfs_trigger_m0_fops_open.1acbed515394b2fc46302a41633e1c99.cfi_jt @ 0x08003540 (size 8) =====

void sym.debugfs_trigger_m0_fops_open.1acbed515394b2fc46302a41633e1c99.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,0,sym.mhi_debugfs_trigger_m0.1acbed515394b2fc46302a41633e1c99.cfi_jt,"%llu\n");
    return;
}


// ===== sym.simple_attr_release.cfi_jt @ 0x08003548 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_attr_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.debugfs_pci_lpm_fops_open.1acbed515394b2fc46302a41633e1c99.cfi_jt @ 0x08003550 (size 8) =====

void sym.debugfs_pci_lpm_fops_open.1acbed515394b2fc46302a41633e1c99.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.mhi_debugfs_disable_pci_lpm_get.1acbed515394b2fc46302a41633e1c99.cfi_jt,
                     sym.mhi_debugfs_disable_pci_lpm_set.1acbed515394b2fc46302a41633e1c99.cfi_jt,"%llu\n");
    return;
}


// ===== sym.mhi_pci_probe.cfi_jt @ 0x08003558 (size 8) =====

int sym.mhi_pci_probe.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int64_t arg2;
    ulong *arg3;
    ulong *in_x18;
    ulong uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(param_2 + 0x18);
    arg2 = mhi_bdf_to_controller
                     (*(*(param_1 + 0x10) + 0xfc),*(*(param_1 + 0x10) + 0xf8),*(param_1 + 0x38) >> 3 & 0x1f,
                      *(param_1 + 0x3e));
    if (((arg2 == 0) && (arg2 = mhi_alloc_controller(), arg2 == 0)) ||
       ((arg3 = mhi_controller_get_privdata(arg2), arg3 == NULL &&
        (arg3 = kmem_cache_alloc_trace(_debugfs_attr_write,0xdc0,0x58), arg3 == NULL)))) {
        iVar1 = -0xc;
    }
    else {
        *arg3 = uVar2;
        *(arg3 + 10) = 1;
        iVar1 = sym.mhi_qcom_pci_probe(param_1,arg2,arg3);
        if (iVar1 != 0) {
            kfree(arg3);
            mhi_free_controller(arg2);
        }
    }
    return iVar1;
}


// ===== sym.mhi_arch_bw_scale.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt @ 0x08003560 (size 8) =====

int sym.mhi_arch_bw_scale.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt(int64_t *param_1,uint32_t *param_2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = msm_pcie_set_link_bandwidth(*param_1 + -0xd0,*param_2,param_2[1]);
    if (iVar1 == 0) {
        sym.mhi_arch_set_bus_request(param_1,*param_2);
        iVar2 = mhi_controller_get_privdata(param_1);
        ipc_log_string(*(iVar2 + 0x38),"[I][%s] BW changed to speed:0x%x width:0x%x\n","mhi_arch_pcie_scale_bw",
                       *param_2,param_2[1]);
    }
    return iVar1;
}


// ===== sym.debugfs_attr_read.cfi_jt @ 0x08003568 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.mhi_arch_esoc_ops_power_on.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt @ 0x08003570 (size 8) =====

int sym.mhi_arch_esoc_ops_power_on.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt(int64_t *param_1,uint8_t param_2)

{
    int64_t *piVar1;
    char cVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    char *pcVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = mhi_controller_get_privdata();
    piVar1 = param_1 + 0x28;
    iVar8 = *param_1;
    mutex_lock(piVar1);
    cVar2 = *(iVar4 + 0x48);
    iVar5 = mhi_controller_get_privdata(param_1);
    if (cVar2 == '\0') {
        ipc_log_string(*(iVar5 + 0x38),"[I][%s] Enter: mdm_crashed: %d\n","mhi_arch_esoc_ops_power_on",param_2 & 1);
        __pm_runtime_set_status(*param_1,0);
        pm_runtime_enable(*param_1);
        mutex_unlock(piVar1);
        pm_runtime_forbid(*param_1);
        iVar3 = __pm_runtime_resume(*param_1,4);
        if (iVar3 < 0) {
            iVar4 = mhi_controller_get_privdata(param_1);
            _printk(0x80014ab,"mhi_arch_esoc_ops_power_on",iVar3);
            uVar6 = *(iVar4 + 0x38);
            pcVar7 = "[E][%s] Error with rpm resume, ret: %d\n";
        }
        else {
            iVar5 = iVar8 + -0xd0;
            iVar3 = msm_pcie_pm_control(2,*(*(iVar8 + -0xc0) + 0xf8),iVar5,0,0);
            if (iVar3 == 0) {
                *(iVar4 + 0x49) = param_2 & 1;
                iVar3 = sym.mhi_qcom_pci_probe(iVar5,param_1,iVar4);
                return iVar3;
            }
            iVar4 = mhi_controller_get_privdata(param_1);
            _printk(0x8000c9f,"mhi_arch_esoc_ops_power_on",iVar3);
            uVar6 = *(iVar4 + 0x38);
            pcVar7 = "[E][%s] Failed to resume pcie bus ret: %d\n";
        }
        ipc_log_string(uVar6,pcVar7,"mhi_arch_esoc_ops_power_on",iVar3);
    }
    else {
        ipc_log_string(*(iVar5 + 0x38),"[I][%s] MHI still in active state\n","mhi_arch_esoc_ops_power_on");
        mutex_unlock(piVar1);
        iVar3 = 0;
    }
    return iVar3;
}


// ===== sym.mhi_qcom_time_get.1acbed515394b2fc46302a41633e1c99.cfi_jt @ 0x08003578 (size 8) =====

void sym.mhi_qcom_time_get.1acbed515394b2fc46302a41633e1c99.cfi_jt(void)

{
    ulong uVar1;
    
    InstructionSynchronizationBarrier();
    uVar1 = cntvct_el0;
    return;
}


// ===== sym.mhi_arch_pci_link_state_cb.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt @ 0x08003580 (size 8) =====

void sym.mhi_arch_pci_link_state_cb.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt(int *param_1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar10 = *(param_1 + 4);
    iVar5 = mhi_controller_get_privdata(piVar10);
    if (*param_1 == 8) {
        iVar5 = mhi_controller_get_privdata(piVar10);
        ipc_log_string(*(iVar5 + 0x38),"[I][%s] Received PCIE_L1SS_TIMEOUT signal\n","mhi_arch_pci_link_state_cb");
        iVar5 = *piVar10;
        uVar7 = ktime_get_mono_fast_ns();
        *(iVar5 + 0x218) = uVar7;
        __pm_runtime_suspend(*piVar10,9);
    }
    else if (*param_1 == 4) {
        iVar6 = mhi_controller_get_privdata(piVar10);
        ipc_log_string(*(iVar6 + 0x38),"[I][%s] Received PCIE_WAKE signal\n","mhi_arch_pci_link_state_cb");
        if (*(iVar5 + 0x48) != '\0') {
            __pm_runtime_resume(*piVar10,5);
            puVar1 = *piVar10 + 0x1f8;
            uVar9 = *puVar1;
            do {
                uVar8 = uVar9;
                if (uVar8 == 0) {
                    return;
                }
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar2 = *puVar1;
                    uVar9 = uVar2;
                    if (uVar2 != uVar8) goto code_r0x08005560;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = uVar8 - 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                DataMemoryBarrier(2,3);
code_r0x08005560:
            } while (uVar8 != uVar2);
        }
    }
    else {
        iVar5 = mhi_controller_get_privdata(piVar10);
        ipc_log_string(*(iVar5 + 0x38),"[I][%s] Unhandled event: 0x%x\n","mhi_arch_pci_link_state_cb",*param_1);
    }
    return;
}


// ===== sym.mhi_bl_dummy_cb.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt @ 0x08003588 (size 8) =====

void sym.mhi_bl_dummy_cb.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt(void)

{
    return;
}


// ===== sym.mhi_bl_dl_cb.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt @ 0x08003590 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.mhi_bl_dl_cb.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong uVar4;
    ulong unaff_x30;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    uVar4 = *(param_1 + 0x10);
    iVar2 = mhi_controller_get_privdata(uVar4);
    iVar3 = *param_2;
    iVar2 = *(iVar2 + 0x40);
    iStack_60 = iVar3;
    if (*(param_2 + 0x14) == -0x6b) {
        kfree();
    }
    else {
        *(param_2[1] + iVar3 + -1) = 0;
        if (param_2[1] < 0xff) {
            ipc_log_string(*(iVar2 + 0x100),"%s %s","Dev->Host: ",iVar3);
        }
        else {
            iVar3 = strsep(&iStack_60,0x8001317);
            while (iVar3 != 0) {
                ipc_log_string(*(iVar2 + 0x100),"%s %s","Dev->Host: ",iVar3);
                iVar3 = strsep(&iStack_60,0x8001317);
            }
            iVar3 = *param_2;
            iStack_60 = iVar3;
        }
        iVar1 = mhi_queue_buf(param_1,2,iVar3,*(iVar2 + 0x110),2);
        if (iVar1 != 0) {
            kfree(iStack_60);
            iVar2 = mhi_controller_get_privdata(uVar4);
            _printk(0x800085f,"mhi_bl_dl_cb",iVar1);
            ipc_log_string(*(iVar2 + 0x38),"[E][%s] Failed to recycle BL channel buffer: %d\n","mhi_bl_dl_cb",iVar1);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.mhi_debugfs_disable_pci_lpm_set.1acbed515394b2fc46302a41633e1c99.cfi_jt @ 0x08003598 (size 8) =====

ulong sym.mhi_debugfs_disable_pci_lpm_set.1acbed515394b2fc46302a41633e1c99.cfi_jt(int64_t param_1,int64_t param_2)

{
    char *pcVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = mhi_controller_get_privdata();
    mutex_lock(param_1 + 0x140);
    *(iVar2 + 0x4a) = param_2 != 0;
    pcVar1 = "Disabled";
    if (param_2 == 0) {
        pcVar1 = "Enabled";
    }
    mutex_unlock(param_1 + 0x140);
    iVar2 = mhi_controller_get_privdata(param_1);
    ipc_log_string(*(iVar2 + 0x38),"[I][%s] %s PCIe low power modes (D3 hot/cold)\n","mhi_debugfs_disable_pci_lpm_set"
                   ,pcVar1);
    return 0;
}


// ===== sym.mhi_debugfs_trigger_m0.1acbed515394b2fc46302a41633e1c99.cfi_jt @ 0x080035a0 (size 8) =====

ulong sym.mhi_debugfs_trigger_m0.1acbed515394b2fc46302a41633e1c99.cfi_jt(ulong *param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = mhi_controller_get_privdata();
    ipc_log_string(*(iVar1 + 0x38),"[I][%s] Trigger M3 Exit\n","mhi_debugfs_trigger_m0");
    __pm_runtime_resume(*param_1,5);
    __pm_runtime_idle(*param_1,5);
    return 0;
}


// ===== sym.mhi_debugfs_trigger_m3.1acbed515394b2fc46302a41633e1c99.cfi_jt @ 0x080035a8 (size 8) =====

ulong sym.mhi_debugfs_trigger_m3.1acbed515394b2fc46302a41633e1c99.cfi_jt(int64_t *param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = mhi_controller_get_privdata();
    ipc_log_string(*(iVar1 + 0x38),"[I][%s] Trigger M3 Entry\n","mhi_debugfs_trigger_m3");
    iVar1 = *param_1;
    uVar2 = ktime_get_mono_fast_ns();
    *(iVar1 + 0x218) = uVar2;
    __pm_runtime_suspend(*param_1,9);
    return 0;
}


// ===== sym.mhi_debugfs_disable_pci_lpm_get.1acbed515394b2fc46302a41633e1c99.cfi_jt @ 0x080035b0 (size 8) =====

ulong sym.mhi_debugfs_disable_pci_lpm_get.1acbed515394b2fc46302a41633e1c99.cfi_jt(ulong param_1,uint64_t *param_2)

{
    char *pcVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = mhi_controller_get_privdata();
    *param_2 = *(iVar2 + 0x4a);
    iVar2 = mhi_controller_get_privdata(param_1);
    pcVar1 = "Enabled";
    if (*(iVar2 + 0x4a) != '\0') {
        pcVar1 = "Disabled";
    }
    ipc_log_string(*(iVar2 + 0x38),"[I][%s] PCIe low power modes (D3 hot/cold) are %s\n",
                   "mhi_debugfs_disable_pci_lpm_get",pcVar1);
    return 0;
}


// ===== sym.mhi_status_cb.1acbed515394b2fc46302a41633e1c99.cfi_jt @ 0x080035b8 (size 8) =====

void sym.mhi_status_cb.1acbed515394b2fc46302a41633e1c99.cfi_jt(int64_t *param_1,int param_2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = mhi_controller_get_privdata();
    iVar6 = *param_1;
    if (param_2 == 5) {
        iVar7 = *piVar3;
        iVar4 = mhi_controller_get_privdata(param_1);
        ipc_log_string(*(iVar4 + 0x38),"[I][%s] Mission mode entry\n","mhi_status_cb");
        if (*(iVar7 + 0x31) == '\0') {
            __pm_runtime_resume(iVar6,5);
            iVar4 = mhi_controller_get_privdata(param_1);
            uVar1 = param_1[0x2f] + 99;
            iVar7 = mhi_controller_get_privdata(param_1);
            ipc_log_string(*(iVar7 + 0x38),"[I][%s] Entered\n","mhi_force_suspend");
            piVar3 = param_1 + 0x28;
            mutex_lock(piVar3);
            if (uVar1 < 100) {
                iVar2 = -5;
            }
            else {
                uVar8 = uVar1 / 100;
                do {
                    iVar2 = mhi_pm_suspend(param_1);
                    if (iVar2 != -0x10) {
                        if (iVar2 != 0) goto code_r0x080045bc;
                        *(iVar4 + 0x4c) = 1;
                        iVar2 = sym.mhi_arch_link_suspend(param_1);
                        mutex_unlock(piVar3);
                        if (iVar2 == 0) {
                            iVar4 = mhi_controller_get_privdata(param_1);
                            ipc_log_string(*(iVar4 + 0x38),"[I][%s] Resume after forced suspend\n","mhi_status_cb");
                            sym.mhi_runtime_resume(iVar6);
                        }
                        goto code_r0x08004604;
                    }
                    iVar7 = mhi_controller_get_privdata(param_1);
                    ipc_log_string(*(iVar7 + 0x38),"[I][%s] MHI busy, sleeping and retry\n","mhi_force_suspend");
                    msleep(100);
                    uVar1 = uVar8 - 1;
                    uVar8 = uVar1;
                } while (uVar1 != 0);
                iVar2 = -0x10;
            }
code_r0x080045bc:
            iVar4 = mhi_controller_get_privdata(param_1);
            _printk(0x8000e28,"mhi_force_suspend",iVar2);
            ipc_log_string(*(iVar4 + 0x38),"[E][%s] Force suspend ret:%d\n","mhi_force_suspend",iVar2);
            mutex_unlock(piVar3);
code_r0x08004604:
            __pm_runtime_idle(iVar6,5);
        }
        sym.mhi_arch_mission_mode_enter(param_1);
        pm_runtime_allow(iVar6);
    }
    else if (param_2 == 0) {
        iVar4 = mhi_controller_get_privdata(param_1);
        ipc_log_string(*(iVar4 + 0x38),"[I][%s] Schedule runtime suspend\n","mhi_status_cb");
        uVar5 = ktime_get_mono_fast_ns();
        *(iVar6 + 0x218) = uVar5;
        __pm_runtime_suspend(iVar6,9);
    }
    else {
        iVar6 = mhi_controller_get_privdata(param_1);
        ipc_log_string(*(iVar6 + 0x38),"[I][%s] Unhandled cb: 0x%x\n","mhi_status_cb",param_2);
    }
    return;
}


// ===== sym.no_llseek.cfi_jt @ 0x080035c0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.no_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.mhi_pci_remove.cfi_jt @ 0x080035c8 (size 8) =====

void sym.mhi_pci_remove.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t *arg1;
    int64_t *piVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = mhi_bdf_to_controller
                     (*(*(param_1 + 0x10) + 0xfc),*(*(param_1 + 0x10) + 0xf8),*(param_1 + 0x38) >> 3 & 0x1f,
                      *(param_1 + 0x3e));
    if ((arg1 != NULL) && (piVar5 = mhi_controller_get_privdata(), piVar5 != NULL)) {
        __pm_runtime_resume(*arg1,4);
        if (piVar5[9] != '\0') {
            iVar6 = mhi_controller_get_privdata(arg1);
            ipc_log_string(*(iVar6 + 0x38),"[I][%s] Triggering shutdown process\n","mhi_pci_remove");
            mhi_power_down(arg1,0);
            mhi_unprepare_after_power_down(arg1);
        }
        *(piVar5 + 9) = 0;
        puVar1 = *arg1 + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08004360;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08004360:
        } while (uVar7 != uVar2);
        *(piVar5 + 10) = 1;
        sym.mhi_arch_pcie_deinit(arg1);
        sym.mhi_deinit_pci_dev(param_1,*piVar5);
        mhi_unregister_controller(arg1);
        kfree(piVar5);
        mhi_free_controller(arg1);
    }
    return;
}


// ===== sym.mhi_qcom_read_reg.1acbed515394b2fc46302a41633e1c99.cfi_jt @ 0x080035d0 (size 8) =====

void sym.mhi_qcom_read_reg.1acbed515394b2fc46302a41633e1c99.cfi_jt(int64_t *param_1,int64_t param_2,int *param_3)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    int64_t arg2;
    int *piVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    int16_t aiStack_3c [2];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    piVar4 = param_3;
    iVar1 = sym.readl_relaxed(param_2);
    if (iVar1 == -1) {
        iVar5 = *param_1;
        piVar4 = aiStack_3c;
        aiStack_3c[0] = 0;
        iVar2 = pci_read_config_word(iVar5 + -0xd0,2);
        if ((iVar2 != 0) || (aiStack_3c[0] != *(iVar5 + -0x92))) {
            uVar3 = 0xfffffffb;
            goto code_r0x0800479c;
        }
    }
    uVar3 = 0;
    *param_3 = iVar1;
code_r0x0800479c:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar3);
    *extraout_x18 = sym.mhi_qcom_write_reg;
    sym.writel_relaxed(piVar4 & 0xffffffff,arg2);
    return;
}


// ===== sym.mhi_runtime_get.1acbed515394b2fc46302a41633e1c99.cfi_jt @ 0x080035d8 (size 8) =====

void sym.mhi_runtime_get.1acbed515394b2fc46302a41633e1c99.cfi_jt(ulong *param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __pm_runtime_resume(*param_1,5);
    return;
}


// ===== sym.mhi_qcom_lpm_disable.1acbed515394b2fc46302a41633e1c99.cfi_jt @ 0x080035e0 (size 8) =====

void sym.mhi_qcom_lpm_disable.1acbed515394b2fc46302a41633e1c99.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mhi_arch_link_lpm_disable(param_1);
    return;
}


// ===== sym.mhi_qcom_lpm_enable.1acbed515394b2fc46302a41633e1c99.cfi_jt @ 0x080035e8 (size 8) =====

void sym.mhi_qcom_lpm_enable.1acbed515394b2fc46302a41633e1c99.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mhi_arch_link_lpm_enable(param_1);
    return;
}


// ===== sym.mhi_runtime_suspend.1acbed515394b2fc46302a41633e1c99.cfi_jt @ 0x080035f0 (size 8) =====

uint32_t sym.mhi_runtime_suspend.1acbed515394b2fc46302a41633e1c99.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    iVar2 = mhi_controller_get_privdata(arg1);
    iVar3 = mhi_controller_get_privdata(arg1);
    ipc_log_string(*(iVar3 + 0x38),"[I][%s] Entered\n","mhi_runtime_suspend");
    iVar3 = arg1 + 0x140;
    mutex_lock(iVar3);
    if (*(iVar2 + 0x48) == '\0') {
        iVar2 = mhi_controller_get_privdata(arg1);
        ipc_log_string(*(iVar2 + 0x38),"[I][%s] Not fully powered, return success\n","mhi_runtime_suspend");
        mutex_unlock(iVar3);
        return 0;
    }
    iVar1 = mhi_pm_suspend(arg1);
    if (iVar1 == 0) {
        *(iVar2 + 0x4c) = 1;
        iVar1 = sym.mhi_arch_link_suspend(arg1);
        if (iVar1 == 0) goto code_r0x080039bc;
        iVar4 = mhi_controller_get_privdata(arg1);
        ipc_log_string(*(iVar4 + 0x38),"[I][%s] Failed to suspend link, abort suspend\n","mhi_runtime_suspend");
        mhi_pm_resume(arg1);
    }
    else {
        iVar4 = mhi_controller_get_privdata(arg1);
        ipc_log_string(*(iVar4 + 0x38),"[I][%s] Abort due to ret: %d\n","mhi_runtime_suspend",iVar1);
    }
    *(iVar2 + 0x4c) = 0;
code_r0x080039bc:
    mutex_unlock(iVar3);
    iVar3 = mhi_controller_get_privdata(arg1);
    ipc_log_string(*(iVar3 + 0x38),"[I][%s] Exited with ret: %d\n","mhi_runtime_suspend",iVar1);
    return iVar1 >> 0x1f & 0xfffffff0;
}


// ===== sym.mhi_system_suspend.cfi_jt @ 0x080035f8 (size 8) =====

int sym.mhi_system_suspend.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x98);
    piVar2 = mhi_controller_get_privdata(iVar4);
    iVar5 = *piVar2;
    iVar3 = mhi_controller_get_privdata(iVar4);
    ipc_log_string(*(iVar3 + 0x38),"[I][%s] Entered\n","mhi_system_suspend");
    if (*(iVar5 + 0x34) == '\0') {
        iVar1 = sym.mhi_runtime_suspend(param_1);
        return iVar1;
    }
    iVar3 = iVar4 + 0x140;
    mutex_lock(iVar3);
    if (piVar2[9] == '\0') {
        iVar4 = mhi_controller_get_privdata(iVar4);
        ipc_log_string(*(iVar4 + 0x38),"[I][%s] Not fully powered, return success\n","mhi_system_suspend");
        mutex_unlock(iVar3);
        return 0;
    }
    if (*(param_1 + 0x1f8) < 2) {
        *(piVar2 + 0x4c) = 1;
        iVar1 = mhi_pm_suspend(iVar4);
        if (iVar1 == -0x10) {
            iVar1 = mhi_pm_fast_suspend(iVar4,1);
            goto code_r0x080037d8;
        }
    }
    else {
        iVar1 = mhi_pm_fast_suspend(iVar4,0);
code_r0x080037d8:
        *(piVar2 + 0x4c) = 3;
    }
    if (iVar1 == 0) {
        iVar1 = sym.mhi_arch_link_suspend(iVar4);
        if (iVar1 == 0) goto code_r0x08003810;
        iVar5 = mhi_controller_get_privdata(iVar4);
        ipc_log_string(*(iVar5 + 0x38),"[I][%s] Failed to suspend link, abort suspend\n","mhi_system_suspend");
        if (*(piVar2 + 0x4c) == 1) {
            mhi_pm_resume();
        }
        else {
            mhi_pm_fast_resume(iVar4,1);
        }
    }
    else {
        iVar5 = mhi_controller_get_privdata();
        ipc_log_string(*(iVar5 + 0x38),"[I][%s] Abort due to ret: %d\n","mhi_system_suspend",iVar1);
    }
    *(piVar2 + 0x4c) = 0;
code_r0x08003810:
    mutex_unlock(iVar3);
    iVar3 = mhi_controller_get_privdata(iVar4);
    ipc_log_string(*(iVar3 + 0x38),"[I][%s] Exited with ret: %d\n","mhi_system_suspend",iVar1);
    return iVar1;
}


// ===== sym.mhi_runtime_resume.1acbed515394b2fc46302a41633e1c99.cfi_jt @ 0x08003600 (size 8) =====

uint32_t sym.mhi_runtime_resume.1acbed515394b2fc46302a41633e1c99.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    iVar3 = mhi_controller_get_privdata(arg1);
    iVar4 = mhi_controller_get_privdata(arg1);
    ipc_log_string(*(iVar4 + 0x38),"[I][%s] Entered\n","mhi_runtime_resume");
    iVar4 = arg1 + 0x140;
    mutex_lock(iVar4);
    if (*(iVar3 + 0x48) == '\0') {
        iVar3 = mhi_controller_get_privdata(arg1);
        ipc_log_string(*(iVar3 + 0x38),"[I][%s] Not fully powered, return success\n","mhi_runtime_resume");
        mutex_unlock(iVar4);
        uVar2 = 0;
    }
    else {
        iVar1 = sym.mhi_arch_link_resume(arg1);
        if (iVar1 == 0) {
            if (*(iVar3 + 0x4c) == 1) {
                iVar1 = mhi_pm_resume();
            }
            else {
                iVar1 = mhi_pm_fast_resume(arg1,1);
            }
            *(iVar3 + 0x4c) = 0;
        }
        mutex_unlock(iVar4);
        iVar4 = mhi_controller_get_privdata(arg1);
        ipc_log_string(*(iVar4 + 0x38),"[I][%s] Exited with ret: %d\n","mhi_runtime_resume",iVar1);
        uVar2 = iVar1 >> 0x1f & 0xfffffff0;
    }
    return uVar2;
}


// ===== sym.mhi_runtime_idle.1acbed515394b2fc46302a41633e1c99.cfi_jt @ 0x08003608 (size 8) =====

ulong sym.mhi_runtime_idle.1acbed515394b2fc46302a41633e1c99.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = mhi_controller_get_privdata(*(param_1 + 0x98));
    ipc_log_string(*(iVar1 + 0x38),"[I][%s] Entered returning -EBUSY\n","mhi_runtime_idle");
    return 0xfffffff0;
}


// ===== sym.mhi_resume_noirq.1acbed515394b2fc46302a41633e1c99.cfi_jt @ 0x08003610 (size 8) =====

ulong sym.mhi_resume_noirq.1acbed515394b2fc46302a41633e1c99.cfi_jt(void)

{
    return 0;
}


// ===== sym.mhi_system_resume.1acbed515394b2fc46302a41633e1c99.cfi_jt @ 0x08003618 (size 8) =====

void sym.mhi_system_resume.1acbed515394b2fc46302a41633e1c99.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mhi_runtime_resume(param_1);
    return;
}


// ===== sym.mhi_suspend_noirq.1acbed515394b2fc46302a41633e1c99.cfi_jt @ 0x08003620 (size 8) =====

ulong sym.mhi_suspend_noirq.1acbed515394b2fc46302a41633e1c99.cfi_jt(void)

{
    return 0;
}


// ===== sym.mhi_deinit_pci_dev @ 0x08003628 (size 168) =====

void sym.mhi_deinit_pci_dev(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t *piVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(arg1 + 0x168);
    if (piVar2 != NULL) {
        iVar3 = *piVar2;
        uVar1 = ktime_get_mono_fast_ns();
        *(iVar3 + 0x218) = uVar1;
        __pm_runtime_use_autosuspend(*piVar2,0);
        __pm_runtime_disable(*piVar2,1);
        pci_free_irq_vectors(arg1);
        kfree(piVar2[0x16]);
        piVar2[0x16] = 0;
        iounmap(piVar2[3]);
        piVar2[3] = 0;
        piVar2[0xf] = 0;
        *(piVar2 + 0x19) = 0;
        pci_clear_master(arg1);
        pci_release_region(arg1,*(arg2 + 0x28));
        pci_disable_device(arg1);
    }
    return;
}


// ===== sym.mhi_system_suspend @ 0x080036d0 (size 476) =====

int sym.mhi_system_suspend(int64_t arg1)

{
    int iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x98);
    piVar2 = mhi_controller_get_privdata(iVar4);
    iVar5 = *piVar2;
    iVar3 = mhi_controller_get_privdata(iVar4);
    ipc_log_string(*(iVar3 + 0x38),"[I][%s] Entered\n","mhi_system_suspend");
    if (*(iVar5 + 0x34) == '\0') {
        iVar1 = sym.mhi_runtime_suspend(arg1);
        return iVar1;
    }
    iVar3 = iVar4 + 0x140;
    mutex_lock(iVar3);
    if (piVar2[9] == '\0') {
        iVar4 = mhi_controller_get_privdata(iVar4);
        ipc_log_string(*(iVar4 + 0x38),"[I][%s] Not fully powered, return success\n","mhi_system_suspend");
        mutex_unlock(iVar3);
        return 0;
    }
    if (*(arg1 + 0x1f8) < 2) {
        *(piVar2 + 0x4c) = 1;
        iVar1 = mhi_pm_suspend(iVar4);
        if (iVar1 == -0x10) {
            iVar1 = mhi_pm_fast_suspend(iVar4,1);
            goto code_r0x080037d8;
        }
    }
    else {
        iVar1 = mhi_pm_fast_suspend(iVar4,0);
code_r0x080037d8:
        *(piVar2 + 0x4c) = 3;
    }
    if (iVar1 == 0) {
        iVar1 = sym.mhi_arch_link_suspend(iVar4);
        if (iVar1 == 0) goto code_r0x08003810;
        iVar5 = mhi_controller_get_privdata(iVar4);
        ipc_log_string(*(iVar5 + 0x38),"[I][%s] Failed to suspend link, abort suspend\n","mhi_system_suspend");
        if (*(piVar2 + 0x4c) == 1) {
            mhi_pm_resume();
        }
        else {
            mhi_pm_fast_resume(iVar4,1);
        }
    }
    else {
        iVar5 = mhi_controller_get_privdata();
        ipc_log_string(*(iVar5 + 0x38),"[I][%s] Abort due to ret: %d\n","mhi_system_suspend",iVar1);
    }
    *(piVar2 + 0x4c) = 0;
code_r0x08003810:
    mutex_unlock(iVar3);
    iVar3 = mhi_controller_get_privdata(iVar4);
    ipc_log_string(*(iVar3 + 0x38),"[I][%s] Exited with ret: %d\n","mhi_system_suspend",iVar1);
    return iVar1;
}


// ===== sym.mhi_runtime_suspend @ 0x080038b0 (size 344) =====

uint32_t sym.mhi_runtime_suspend(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    iVar2 = mhi_controller_get_privdata(arg1_00);
    iVar3 = mhi_controller_get_privdata(arg1_00);
    ipc_log_string(*(iVar3 + 0x38),"[I][%s] Entered\n","mhi_runtime_suspend");
    iVar3 = arg1_00 + 0x140;
    mutex_lock(iVar3);
    if (*(iVar2 + 0x48) == '\0') {
        iVar2 = mhi_controller_get_privdata(arg1_00);
        ipc_log_string(*(iVar2 + 0x38),"[I][%s] Not fully powered, return success\n","mhi_runtime_suspend");
        mutex_unlock(iVar3);
        return 0;
    }
    iVar1 = mhi_pm_suspend(arg1_00);
    if (iVar1 == 0) {
        *(iVar2 + 0x4c) = 1;
        iVar1 = sym.mhi_arch_link_suspend(arg1_00);
        if (iVar1 == 0) goto code_r0x080039bc;
        iVar4 = mhi_controller_get_privdata(arg1_00);
        ipc_log_string(*(iVar4 + 0x38),"[I][%s] Failed to suspend link, abort suspend\n","mhi_runtime_suspend");
        mhi_pm_resume(arg1_00);
    }
    else {
        iVar4 = mhi_controller_get_privdata(arg1_00);
        ipc_log_string(*(iVar4 + 0x38),"[I][%s] Abort due to ret: %d\n","mhi_runtime_suspend",iVar1);
    }
    *(iVar2 + 0x4c) = 0;
code_r0x080039bc:
    mutex_unlock(iVar3);
    iVar3 = mhi_controller_get_privdata(arg1_00);
    ipc_log_string(*(iVar3 + 0x38),"[I][%s] Exited with ret: %d\n","mhi_runtime_suspend",iVar1);
    return iVar1 >> 0x1f & 0xfffffff0;
}


// ===== sym.mhi_qcom_pci_probe @ 0x08003a08 (size 1024) =====

int sym.mhi_qcom_pci_probe(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong uVar7;
    ulong *puVar8;
    int64_t iVar9;
    ulong unaff_x30;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    iVar6 = *arg3;
    *(arg1 + 0x168) = arg2;
    *arg2 = arg1 + 0xd0;
    iVar3 = sym.mhi_init_pci_dev(arg1,iVar6);
    if (iVar3 == 0) {
        if (*(arg3 + 0x50) == '\0') {
code_r0x08003c68:
            *(arg3 + 0x48) = 1;
            iVar3 = sym.mhi_arch_pcie_init(arg2);
            if (iVar3 == 0) {
                uVar4 = *arg2;
                uVar1 = 0xffffffffffffffff;
                if (*(iVar6 + 0x2c) != 0x40) {
                    uVar1 = ~(-1L << (*(iVar6 + 0x2c) & 0x3f));
                }
                iVar3 = dma_set_mask(uVar4,uVar1);
                if (iVar3 == 0) {
                    dma_set_coherent_mask(uVar4,uVar1);
                    *(arg2 + 0x184) = 10;
                    iVar3 = mhi_prepare_for_power_up(arg2);
                    if (iVar3 == 0) {
                        iVar3 = mhi_async_power_up(arg2);
                        if (iVar3 == 0) {
                            if (*(arg2 + 0x10) != 0) {
                                debugfs_create_file(0x8001007,0x124,*(arg2 + 0x10),arg2,obj.debugfs_trigger_m0_fops)
                                ;
                                debugfs_create_file(0x8000c98,0x124,*(arg2 + 0x10),arg2,obj.debugfs_trigger_m3_fops)
                                ;
                                debugfs_create_file("disable_pci_lpm",0x1a4,*(arg2 + 0x10),arg2,
                                                    obj.debugfs_pci_lpm_fops);
                            }
                            arg2 = *arg2;
                            uVar4 = ktime_get_mono_fast_ns();
                            iVar3 = 0;
                            *(arg2 + 0x218) = uVar4;
                            goto code_r0x08003cc0;
                        }
                        mhi_unprepare_after_power_down(arg2);
                    }
                    iVar9 = mhi_controller_get_privdata(arg2);
                    _printk(0x8001603,"mhi_qcom_pci_probe");
                    ipc_log_string(*(iVar9 + 0x38),"[E][%s] Failed to power up MHI\n","mhi_qcom_pci_probe");
                    *(arg3 + 0x48) = 0;
                    sym.mhi_arch_pcie_deinit(arg2);
                }
            }
        }
        else {
            puVar8 = *arg3;
            iVar9 = *arg2;
            uVar7 = *puVar8;
            uStack_68 = 0;
            uStack_60 = 0;
            uVar4 = *(iVar9 + 0x2f0);
            *(arg2 + 0x38) = 0;
            uVar1 = 0xffffffffffffffff;
            if (*(puVar8 + 0x2c) != 0x40) {
                uVar1 = ~(-1L << (*(puVar8 + 0x2c) & 0x3f));
            }
            *(arg2 + 0x40) = uVar1;
            iVar5 = of_parse_phandle(uVar4,"qcom,iommu-group",0);
            if ((iVar5 == 0) ||
               ((iVar3 = of_property_read_string(iVar5,"qcom,iommu-dma",&uStack_68), iVar3 == 0 &&
                (iVar3 = strcmp("bypass",uStack_68), iVar3 == 0)))) {
code_r0x08003b08:
                *(arg2 + 0x220) = sym.mhi_status_cb.1acbed515394b2fc46302a41633e1c99.cfi_jt;
                *(arg2 + 0x240) = sym.mhi_runtime_get.1acbed515394b2fc46302a41633e1c99.cfi_jt;
                *(arg2 + 0x248) = sym.mhi_runtime_put.1acbed515394b2fc46302a41633e1c99.cfi_jt;
                *(arg2 + 0x250) = sym.mhi_runtime_last_busy.1acbed515394b2fc46302a41633e1c99.cfi_jt;
                *(arg2 + 0x268) = sym.mhi_qcom_read_reg.1acbed515394b2fc46302a41633e1c99.cfi_jt;
                *(arg2 + 0x270) = sym.mhi_qcom_write_reg.1acbed515394b2fc46302a41633e1c99.cfi_jt;
                iVar3 = mhi_register_controller(arg2,uVar7);
                if (iVar3 != 0) goto code_r0x08003cac;
                *(arg2 + 0x48) = puVar8[3];
                *(arg2 + 0x58) = puVar8[4];
                mhi_controller_set_privdata(arg2,arg3);
                mhi_controller_set_loglevel(arg2,2);
                if (0x10 < *(puVar8 + 5)) goto code_r0x08003e04;
                mhi_controller_set_base(arg2,*(iVar9 + *(puVar8 + 5) * 0x60 + 0x398));
                if (((*(puVar8 + 0x32) == '\0') || (iVar3 = mhi_controller_set_sfr_support(arg2,0x100), iVar3 == 0))
                   && ((*(puVar8 + 0x33) == '\0' ||
                       (iVar3 = mhi_controller_setup_timesync
                                          (arg2,sym.mhi_qcom_time_get.1acbed515394b2fc46302a41633e1c99.cfi_jt,
                                           sym.mhi_qcom_lpm_disable.1acbed515394b2fc46302a41633e1c99.cfi_jt,
                                           sym.mhi_qcom_lpm_enable.1acbed515394b2fc46302a41633e1c99.cfi_jt), iVar3 == 0
                       )))) {
                    if (*(puVar8 + 0x34) != '\0') {
                        *(iVar9 + 0x260) = obj.mhi_qcom_pm_domain;
                    }
                    iVar5 = *(arg2 + 8);
                    dev_set_name(iVar5 + 0x28,"mhi_%04x_%02u.%02u.%02u",*(iVar9 + -0x92),*(*(iVar9 + -0xc0) + 0xfc),
                                 *(*(iVar9 + -0xc0) + 0xf8),*(iVar9 + -0x98) >> 3 & 0x1f);
                    iVar9 = *(iVar5 + 0x98);
                    if (iVar9 == 0) {
                        iVar9 = *(iVar5 + 0x28);
                    }
                    *(iVar5 + 8) = iVar9;
                    uVar4 = ipc_log_context_create(100,puVar8[2],0);
                    *(arg3 + 0x38) = uVar4;
                    goto code_r0x08003c68;
                }
                mhi_unregister_controller(arg2);
            }
            else {
                iVar3 = of_property_read_variable_u32_array(iVar5,"qcom,iommu-dma-addr-pool",&uStack_60,2,0);
                if (-1 < iVar3) {
                    *(arg2 + 0x38) = 0;
                    *(arg2 + 0x40) = uStack_60._4_4_ + uStack_60;
                    goto code_r0x08003b08;
                }
            }
            iVar3 = -0x16;
        }
code_r0x08003cac:
        sym.mhi_deinit_pci_dev(arg1,iVar6);
        *(arg1 + 0x168) = 0;
        *arg2 = 0;
    }
code_r0x08003cc0:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return iVar3;
    }
    __stack_chk_fail();
code_r0x08003e04:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8003e08);
    (*pcVar2)();
}


// ===== sym.mhi_init_pci_dev @ 0x08003e08 (size 956) =====

uint32_t sym.mhi_init_pci_dev(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    code *pcVar6;
    uint32_t uVar7;
    uint uVar8;
    int64_t iVar9;
    ulong uVar10;
    int64_t iVar11;
    int64_t iVar12;
    uint64_t uVar13;
    ulong *in_x18;
    int64_t *piVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar14 = *(arg1 + 0x168);
    if (piVar14 == NULL) {
        uVar7 = 0xffffffed;
    }
    else {
        uVar7 = pci_assign_resource(arg1,*(arg2 + 0x28));
        if (uVar7 == 0) {
            uVar7 = pci_enable_device(arg1);
            if (uVar7 == 0) {
                uVar7 = pci_request_region(arg1,*(arg2 + 0x28),0x8001134);
                if (uVar7 == 0) {
                    pci_set_master(arg1);
                    if (0x10 < *(arg2 + 0x28)) {
    //WARNING: Does not return
                        pcVar6 = SoftwareBreakpoint(0x5512,0x80041a0);
                        (*pcVar6)();
                    }
                    iVar11 = arg1 + *(arg2 + 0x28) * 0x60;
                    iVar9 = *(iVar11 + 0x468);
                    iVar12 = *(iVar11 + 0x470);
                    iVar11 = 0;
                    if (iVar12 != 0) {
                        iVar11 = (iVar12 - iVar9) + 1;
                    }
                    uVar10 = 0x68000000000713;
                    if (arm64_use_ng_mappings != 0x0) {
                        uVar10 = 0x68000000000f13;
                    }
                    piVar14[0xf] = iVar11;
                    iVar11 = __ioremap(iVar9,iVar11,uVar10);
                    piVar14[3] = iVar11;
                    if (iVar11 == 0) {
                        iVar11 = mhi_controller_get_privdata(piVar14);
                        _printk(0x8001625,"mhi_init_pci_dev");
                        ipc_log_string(*(iVar11 + 0x38),"[E][%s] Error ioremap region\n","mhi_init_pci_dev");
                        uVar7 = 0;
                    }
                    else {
                        iVar1 = *(*arg2 + 0x18) + 1;
                        *(piVar14 + 0x19) = iVar1;
                        uVar7 = pci_alloc_irq_vectors_affinity(arg1,iVar1,iVar1,2,0);
                        if ((uVar7 < 0xfffff001) && (*(piVar14 + 0x19) <= uVar7)) {
                            iVar11 = __kmalloc(*(piVar14 + 0x19) << 2,0xcc0);
                            piVar14[0x16] = iVar11;
                            if (iVar11 != 0) {
                                if (piVar14[0x19] != 0) {
                                    uVar15 = 0;
                                    do {
                                        uVar8 = pci_irq_vector(arg1,uVar15);
                                        uVar13 = -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
                                        *(piVar14[0x16] + uVar13) = uVar8;
                                        uVar7 = *(piVar14[0x16] + uVar13);
                                        if (uVar7 < 0) {
                                            kfree();
                                            piVar14[0x16] = 0;
                                            goto code_r0x08003fec;
                                        }
                                        uVar7 = uVar15 + 1;
                                        uVar15 = uVar7;
                                    } while (uVar7 < *(piVar14 + 0x19));
                                }
                                pm_runtime_set_autosuspend_delay(*piVar14,0xfa);
                                __pm_runtime_use_autosuspend(*piVar14,1);
                                *(*piVar14 + 0x200) = *(*piVar14 + 0x200) | 0x100;
                                iVar11 = *piVar14;
                                uVar10 = ktime_get_mono_fast_ns();
                                *(iVar11 + 0x218) = uVar10;
                                puVar2 = *piVar14 + 0x1f8;
                                uVar15 = *puVar2;
                                do {
                                    uVar7 = uVar15;
                                    if (uVar7 == 0) {
                                        return 0;
                                    }
                                    Hint_Prefetch(puVar2,2,0,1);
                                    do {
                                        uVar3 = *puVar2;
                                        uVar15 = uVar3;
                                        if (uVar3 != uVar7) goto code_r0x08003fb4;
                                        cVar4 = '\x01';
                                        bVar5 = ExclusiveMonitorPass(puVar2,0x10);
                                        if (bVar5) {
                                            *puVar2 = uVar7 - 1;
                                            cVar4 = ExclusiveMonitorsStatus();
                                        }
                                    } while (cVar4 != '\0');
                                    DataMemoryBarrier(2,3);
code_r0x08003fb4:
                                    if (uVar7 == uVar3) {
                                        return 0;
                                    }
                                } while( true );
                            }
                            uVar7 = 0xfffffff4;
code_r0x08003fec:
                            pci_free_irq_vectors(arg1);
                        }
                        else {
                            iVar11 = mhi_controller_get_privdata(piVar14);
                            _printk(0x800108c,"mhi_init_pci_dev",uVar7);
                            ipc_log_string(*(iVar11 + 0x38),"[E][%s] Failed to enable MSI, ret: %d\n",
                                           "mhi_init_pci_dev",uVar7);
                        }
                        iounmap(piVar14[3]);
                    }
                    pci_clear_master(arg1);
                }
                else {
                    iVar11 = mhi_controller_get_privdata(piVar14);
                    _printk(0x8000a7c,"mhi_init_pci_dev",uVar7);
                    ipc_log_string(*(iVar11 + 0x38),"[E][%s] Error pci_request_region, ret: %d\n","mhi_init_pci_dev",
                                   uVar7);
                }
                pci_disable_device(arg1);
            }
            else {
                iVar11 = mhi_controller_get_privdata(piVar14);
                _printk(0x80014f5,"mhi_init_pci_dev",uVar7);
                ipc_log_string(*(iVar11 + 0x38),"[E][%s] Error enabling device, ret: %d\n","mhi_init_pci_dev",uVar7);
            }
            pci_release_region(arg1,*(arg2 + 0x28));
        }
        else {
            iVar11 = mhi_controller_get_privdata(piVar14);
            _printk(0x8001409,"mhi_init_pci_dev",uVar7);
            ipc_log_string(*(iVar11 + 0x38),"[E][%s] Error assign pci resources, ret: %d\n","mhi_init_pci_dev",uVar7)
            ;
        }
    }
    return uVar7;
}


// ===== sym.mhi_pci_probe @ 0x080041c4 (size 212) =====

int sym.mhi_pci_probe(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t arg2_00;
    ulong *arg3;
    ulong *in_x18;
    ulong uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg2 + 0x18);
    arg2_00 = mhi_bdf_to_controller
                        (*(*(arg1 + 0x10) + 0xfc),*(*(arg1 + 0x10) + 0xf8),*(arg1 + 0x38) >> 3 & 0x1f,*(arg1 + 0x3e))
    ;
    if (((arg2_00 == 0) && (arg2_00 = mhi_alloc_controller(), arg2_00 == 0)) ||
       ((arg3 = mhi_controller_get_privdata(arg2_00), arg3 == NULL &&
        (arg3 = kmem_cache_alloc_trace(_debugfs_attr_write,0xdc0,0x58), arg3 == NULL)))) {
        iVar1 = -0xc;
    }
    else {
        *arg3 = uVar2;
        *(arg3 + 10) = 1;
        iVar1 = sym.mhi_qcom_pci_probe(arg1,arg2_00,arg3);
        if (iVar1 != 0) {
            kfree(arg3);
            mhi_free_controller(arg2_00);
        }
    }
    return iVar1;
}


// ===== sym.mhi_pci_remove @ 0x08004298 (size 340) =====

void sym.mhi_pci_remove(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t *arg1_00;
    int64_t *piVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = mhi_bdf_to_controller
                        (*(*(arg1 + 0x10) + 0xfc),*(*(arg1 + 0x10) + 0xf8),*(arg1 + 0x38) >> 3 & 0x1f,*(arg1 + 0x3e))
    ;
    if ((arg1_00 != NULL) && (piVar5 = mhi_controller_get_privdata(), piVar5 != NULL)) {
        __pm_runtime_resume(*arg1_00,4);
        if (piVar5[9] != '\0') {
            iVar6 = mhi_controller_get_privdata(arg1_00);
            ipc_log_string(*(iVar6 + 0x38),"[I][%s] Triggering shutdown process\n","mhi_pci_remove");
            mhi_power_down(arg1_00,0);
            mhi_unprepare_after_power_down(arg1_00);
        }
        *(piVar5 + 9) = 0;
        puVar1 = *arg1_00 + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08004360;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08004360:
        } while (uVar7 != uVar2);
        *(piVar5 + 10) = 1;
        sym.mhi_arch_pcie_deinit(arg1_00);
        sym.mhi_deinit_pci_dev(arg1,*piVar5);
        mhi_unregister_controller(arg1_00);
        kfree(piVar5);
        mhi_free_controller(arg1_00);
    }
    return;
}


// ===== sym.mhi_status_cb @ 0x080043ec (size 596) =====

void sym.mhi_status_cb(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = mhi_controller_get_privdata();
    iVar7 = *arg1;
    if (arg2 == 5) {
        iVar8 = *piVar3;
        iVar4 = mhi_controller_get_privdata(arg1);
        ipc_log_string(*(iVar4 + 0x38),"[I][%s] Mission mode entry\n","mhi_status_cb");
        if (*(iVar8 + 0x31) == '\0') {
            __pm_runtime_resume(iVar7,5);
            iVar8 = mhi_controller_get_privdata(arg1);
            uVar1 = *(arg1 + 0x178) + 99;
            iVar4 = mhi_controller_get_privdata(arg1);
            ipc_log_string(*(iVar4 + 0x38),"[I][%s] Entered\n","mhi_force_suspend");
            iVar4 = arg1 + 0x140;
            mutex_lock(iVar4);
            if (uVar1 < 100) {
                iVar2 = -5;
            }
            else {
                uVar9 = uVar1 / 100;
                do {
                    iVar2 = mhi_pm_suspend(arg1);
                    if (iVar2 != -0x10) {
                        if (iVar2 != 0) goto code_r0x080045bc;
                        *(iVar8 + 0x4c) = 1;
                        iVar2 = sym.mhi_arch_link_suspend(arg1);
                        mutex_unlock(iVar4);
                        if (iVar2 == 0) {
                            iVar4 = mhi_controller_get_privdata(arg1);
                            ipc_log_string(*(iVar4 + 0x38),"[I][%s] Resume after forced suspend\n","mhi_status_cb");
                            sym.mhi_runtime_resume(iVar7);
                        }
                        goto code_r0x08004604;
                    }
                    iVar6 = mhi_controller_get_privdata(arg1);
                    ipc_log_string(*(iVar6 + 0x38),"[I][%s] MHI busy, sleeping and retry\n","mhi_force_suspend");
                    msleep(100);
                    uVar1 = uVar9 - 1;
                    uVar9 = uVar1;
                } while (uVar1 != 0);
                iVar2 = -0x10;
            }
code_r0x080045bc:
            iVar8 = mhi_controller_get_privdata(arg1);
            _printk(0x8000e28,"mhi_force_suspend",iVar2);
            ipc_log_string(*(iVar8 + 0x38),"[E][%s] Force suspend ret:%d\n","mhi_force_suspend",iVar2);
            mutex_unlock(iVar4);
code_r0x08004604:
            __pm_runtime_idle(iVar7,5);
        }
        sym.mhi_arch_mission_mode_enter(arg1);
        pm_runtime_allow(iVar7);
    }
    else if (arg2 == 0) {
        iVar4 = mhi_controller_get_privdata(arg1);
        ipc_log_string(*(iVar4 + 0x38),"[I][%s] Schedule runtime suspend\n","mhi_status_cb");
        uVar5 = ktime_get_mono_fast_ns();
        *(iVar7 + 0x218) = uVar5;
        __pm_runtime_suspend(iVar7,9);
    }
    else {
        iVar7 = mhi_controller_get_privdata(arg1);
        ipc_log_string(*(iVar7 + 0x38),"[I][%s] Unhandled cb: 0x%x\n","mhi_status_cb",arg2 & 0xffffffff);
    }
    return;
}


// ===== sym.mhi_runtime_get @ 0x08004640 (size 44) =====

void sym.mhi_runtime_get(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __pm_runtime_resume(*arg1,5);
    return;
}


// ===== sym.mhi_runtime_put @ 0x0800466c (size 124) =====

void sym.mhi_runtime_put(uint32_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    
    puVar1 = *arg1 + 0x1f8;
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
            if (uVar2 != uVar5) goto code_r0x080046a0;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar5 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
code_r0x080046a0:
        if (uVar5 == uVar2) {
            return;
        }
    } while( true );
}


// ===== sym.mhi_runtime_last_busy @ 0x080046e8 (size 52) =====

void sym.mhi_runtime_last_busy(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *arg1;
    uVar1 = ktime_get_mono_fast_ns();
    *(arg1 + 0x218) = uVar1;
    return;
}


// ===== sym.mhi_qcom_read_reg @ 0x0800471c (size 180) =====

void sym.mhi_qcom_read_reg(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    ulong uVar4;
    int64_t arg2_00;
    int16_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int16_t aiStack_3c [2];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    piVar5 = arg3;
    iVar2 = sym.readl_relaxed(arg2);
    if (iVar2 == -1) {
        arg1 = *arg1;
        piVar5 = aiStack_3c;
        aiStack_3c[0] = 0;
        iVar3 = pci_read_config_word(arg1 + -0xd0,2);
        if ((iVar3 != 0) || (aiStack_3c[0] != *(arg1 + -0x92))) {
            uVar4 = 0xfffffffb;
            goto code_r0x0800479c;
        }
    }
    uVar4 = 0;
    *arg3 = iVar2;
code_r0x0800479c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar4);
    *extraout_x18 = sym.mhi_qcom_write_reg;
    sym.writel_relaxed(piVar5 & 0xffffffff,arg2_00);
    return;
}


// ===== sym.mhi_qcom_write_reg @ 0x080047d0 (size 40) =====

void sym.mhi_qcom_write_reg(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(arg2 & 0xffffffff,arg1);
    return;
}


// ===== sym.mhi_qcom_time_get @ 0x080047f8 (size 32) =====

void sym.mhi_qcom_time_get(void)

{
    ulong uVar1;
    
    InstructionSynchronizationBarrier();
    uVar1 = cntvct_el0;
    return;
}


// ===== sym.mhi_qcom_lpm_disable @ 0x08004818 (size 36) =====

void sym.mhi_qcom_lpm_disable(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mhi_arch_link_lpm_disable(arg1);
    return;
}


// ===== sym.mhi_qcom_lpm_enable @ 0x0800483c (size 36) =====

void sym.mhi_qcom_lpm_enable(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mhi_arch_link_lpm_enable(arg1);
    return;
}


// ===== sym.mhi_runtime_resume @ 0x08004860 (size 272) =====

uint32_t sym.mhi_runtime_resume(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    iVar3 = mhi_controller_get_privdata(arg1_00);
    iVar4 = mhi_controller_get_privdata(arg1_00);
    ipc_log_string(*(iVar4 + 0x38),"[I][%s] Entered\n","mhi_runtime_resume");
    iVar4 = arg1_00 + 0x140;
    mutex_lock(iVar4);
    if (*(iVar3 + 0x48) == '\0') {
        iVar3 = mhi_controller_get_privdata(arg1_00);
        ipc_log_string(*(iVar3 + 0x38),"[I][%s] Not fully powered, return success\n","mhi_runtime_resume");
        mutex_unlock(iVar4);
        uVar2 = 0;
    }
    else {
        iVar1 = sym.mhi_arch_link_resume(arg1_00);
        if (iVar1 == 0) {
            if (*(iVar3 + 0x4c) == 1) {
                iVar1 = mhi_pm_resume();
            }
            else {
                iVar1 = mhi_pm_fast_resume(arg1_00,1);
            }
            *(iVar3 + 0x4c) = 0;
        }
        mutex_unlock(iVar4);
        iVar4 = mhi_controller_get_privdata(arg1_00);
        ipc_log_string(*(iVar4 + 0x38),"[I][%s] Exited with ret: %d\n","mhi_runtime_resume",iVar1);
        uVar2 = iVar1 >> 0x1f & 0xfffffff0;
    }
    return uVar2;
}


// ===== sym.readl_relaxed @ 0x08004970 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8004974);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x80049a8);
    return uVar1;
}


// ===== sym.writel_relaxed @ 0x080049e0 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80049fc);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8004a24);
    return;
}


// ===== sym.mhi_system_resume @ 0x08004a58 (size 36) =====

void sym.mhi_system_resume(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mhi_runtime_resume(arg1);
    return;
}


// ===== sym.mhi_suspend_noirq @ 0x08004a7c (size 16) =====

ulong sym.mhi_suspend_noirq(int64_t arg1)

{
    return 0;
}


// ===== sym.mhi_resume_noirq @ 0x08004a8c (size 16) =====

ulong sym.mhi_resume_noirq(int64_t arg1)

{
    return 0;
}


// ===== sym.mhi_runtime_idle @ 0x08004a9c (size 68) =====

ulong sym.mhi_runtime_idle(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = mhi_controller_get_privdata(*(arg1 + 0x98));
    ipc_log_string(*(iVar1 + 0x38),"[I][%s] Entered returning -EBUSY\n","mhi_runtime_idle");
    return 0xfffffff0;
}


// ===== sym.debugfs_trigger_m0_fops_open @ 0x08004ae0 (size 56) =====

void sym.debugfs_trigger_m0_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,0,sym.mhi_debugfs_trigger_m0.1acbed515394b2fc46302a41633e1c99.cfi_jt,"%llu\n");
    return;
}


// ===== sym.mhi_debugfs_trigger_m0 @ 0x08004b18 (size 100) =====

ulong sym.mhi_debugfs_trigger_m0(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = mhi_controller_get_privdata();
    ipc_log_string(*(iVar1 + 0x38),"[I][%s] Trigger M3 Exit\n","mhi_debugfs_trigger_m0");
    __pm_runtime_resume(*arg1,5);
    __pm_runtime_idle(*arg1,5);
    return 0;
}


// ===== sym.debugfs_trigger_m3_fops_open @ 0x08004b7c (size 56) =====

void sym.debugfs_trigger_m3_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,0,sym.mhi_debugfs_trigger_m3.1acbed515394b2fc46302a41633e1c99.cfi_jt,"%llu\n");
    return;
}


// ===== sym.mhi_debugfs_trigger_m3 @ 0x08004bb4 (size 100) =====

ulong sym.mhi_debugfs_trigger_m3(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = mhi_controller_get_privdata();
    ipc_log_string(*(iVar1 + 0x38),"[I][%s] Trigger M3 Entry\n","mhi_debugfs_trigger_m3");
    iVar1 = *arg1;
    uVar2 = ktime_get_mono_fast_ns();
    *(iVar1 + 0x218) = uVar2;
    __pm_runtime_suspend(*arg1,9);
    return 0;
}


// ===== sym.debugfs_pci_lpm_fops_open @ 0x08004c18 (size 60) =====

void sym.debugfs_pci_lpm_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.mhi_debugfs_disable_pci_lpm_get.1acbed515394b2fc46302a41633e1c99.cfi_jt,
                     sym.mhi_debugfs_disable_pci_lpm_set.1acbed515394b2fc46302a41633e1c99.cfi_jt,"%llu\n");
    return;
}


// ===== sym.mhi_debugfs_disable_pci_lpm_get @ 0x08004c54 (size 124) =====

ulong sym.mhi_debugfs_disable_pci_lpm_get(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = mhi_controller_get_privdata();
    *arg2 = *(iVar2 + 0x4a);
    iVar2 = mhi_controller_get_privdata(arg1);
    pcVar1 = "Enabled";
    if (*(iVar2 + 0x4a) != '\0') {
        pcVar1 = "Disabled";
    }
    ipc_log_string(*(iVar2 + 0x38),"[I][%s] PCIe low power modes (D3 hot/cold) are %s\n",
                   "mhi_debugfs_disable_pci_lpm_get",pcVar1);
    return 0;
}


// ===== sym.mhi_debugfs_disable_pci_lpm_set @ 0x08004cd0 (size 156) =====

ulong sym.mhi_debugfs_disable_pci_lpm_set(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = mhi_controller_get_privdata();
    mutex_lock(arg1 + 0x140);
    *(iVar2 + 0x4a) = arg2 != 0;
    pcVar1 = "Disabled";
    if (arg2 == 0) {
        pcVar1 = "Enabled";
    }
    mutex_unlock(arg1 + 0x140);
    iVar2 = mhi_controller_get_privdata(arg1);
    ipc_log_string(*(iVar2 + 0x38),"[I][%s] %s PCIe low power modes (D3 hot/cold)\n","mhi_debugfs_disable_pci_lpm_set"
                   ,pcVar1);
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08004d6c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08004db0

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
    //switch table (4 cases) at 0x8000670
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004dc4);
    (*pcVar1)();
}


// ===== sym.mhi_arch_mission_mode_enter @ 0x08004dc4 (size 168) =====

void sym.mhi_arch_mission_mode_enter(int64_t arg1)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = mhi_controller_get_privdata();
    iVar3 = *piVar2;
    iVar1 = msm_pcie_set_target_link_speed(*(*(*arg1 + -0xc0) + 0xfc),0,1);
    if (iVar1 == 0) {
        if ((*(iVar3 + 0x31) != '\0') && (*(iVar3 + 0x30) == '\0')) {
            msm_pcie_l1ss_timeout_enable(*arg1 + -0xd0);
        }
    }
    else {
        iVar3 = mhi_controller_get_privdata(arg1);
        _printk(0x800172d,"mhi_arch_mission_mode_enter");
        ipc_log_string(*(iVar3 + 0x38),"[E][%s] Failed to set PCIe target link speed\n","mhi_arch_mission_mode_enter")
        ;
    }
    return;
}


// ===== sym.mhi_bl_queue_inbound @ 0x08004e6c (size 160) =====

ulong sym.mhi_bl_queue_inbound(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = mhi_get_free_desc_count(arg1,2);
    if (0 < iVar1) {
        do {
            iVar3 = __kmalloc(arg2,0xcc0);
            if (iVar3 == 0) {
                return 0xfffffff4;
            }
            iVar2 = mhi_queue_buf(arg1,2,iVar3,arg2,2);
            if (iVar2 != 0) {
                kfree(iVar3);
                return 0xfffffffb;
            }
            iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
    }
    return 0;
}


// ===== sym.mhi_arch_pcie_deinit @ 0x08004f0c (size 248) =====

void sym.mhi_arch_pcie_deinit(int64_t arg1)

{
    char cVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = mhi_controller_get_privdata();
    iVar5 = *(iVar3 + 0x40);
    iVar4 = *arg1;
    sym.mhi_arch_set_bus_request(arg1,0);
    iVar2 = msm_pcie_set_target_link_speed(*(*(iVar4 + -0xc0) + 0xfc),0,0);
    if (iVar2 == 0) {
        cVar1 = *(iVar3 + 0x50);
    }
    else {
        iVar4 = mhi_controller_get_privdata(arg1);
        _printk(0x800172d,"mhi_arch_pcie_deinit");
        ipc_log_string(*(iVar4 + 0x38),"[E][%s] Failed to set PCIe target link speed\n","mhi_arch_pcie_deinit");
        cVar1 = *(iVar3 + 0x50);
    }
    if (cVar1 != '\0') {
        mhi_driver_unregister(obj.mhi_bl_driver);
        esoc_unregister_client_hook(*(iVar5 + 8),iVar5 + 0x10);
        devm_unregister_esoc_client(*arg1,*(iVar5 + 8));
        complete_all(iVar5 + 200);
        unregister_pm_notifier(iVar5 + 0xb0);
        msm_pcie_deregister_event(iVar5 + 0x48);
    }
    return;
}


// ===== sym.mhi_arch_set_bus_request @ 0x08005004 (size 228) =====

int sym.mhi_arch_set_bus_request(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = arg2;
    iVar4 = mhi_controller_get_privdata();
    if (iVar2 < 5) {
        iVar4 = *(iVar4 + 0x40);
        puVar1 = *(iVar4 + 0xf8) + iVar2 * 8;
        iVar3 = icc_set_bw(*(iVar4 + 0xe8),*puVar1,puVar1[1]);
        if (iVar3 != 0) {
            iVar5 = mhi_controller_get_privdata(arg1);
            puVar1 = *(iVar4 + 0xf8) + iVar2 * 8;
            _printk(0x800082a,"mhi_arch_set_bus_request",arg2 & 0xffffffff,*puVar1,puVar1[1],iVar3);
            puVar1 = *(iVar4 + 0xf8) + iVar2 * 8;
            ipc_log_string(*(iVar5 + 0x38),"[E][%s] Could not set BW cfg: %d (%d %d), ret: %d\n",
                           "mhi_arch_set_bus_request",arg2 & 0xffffffff,*puVar1,puVar1[1],iVar3);
        }
    }
    else {
        iVar3 = -0x16;
    }
    return iVar3;
}


// ===== sym.mhi_arch_pcie_init @ 0x080050e8 (size 980) =====

uint64_t sym.mhi_arch_pcie_init(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    int64_t iVar10;
    int *piVar11;
    ulong uVar12;
    uint uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar14;
    int64_t iVar15;
    uint64_t uVar16;
    char *pcVar17;
    int64_t *piVar18;
    int64_t iVar19;
    ulong unaff_x30;
    uint16_t auStack_5c [2];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_58 = *(iVar14 + 0x5e0);
    piVar7 = mhi_controller_get_privdata();
    iVar15 = *arg1;
    auStack_5c[0] = 0;
    iVar19 = *piVar7;
    iVar14 = iVar15 + -0xd0;
    if (piVar7[8] == 0) {
        uVar12 = *(iVar15 + 0x2f0);
        piVar9 = devm_kmalloc(iVar15,0x118,0xdc0);
        if (piVar9 == NULL) {
code_r0x08005328:
            uVar16 = 0xfffffff4;
            goto code_r0x0800532c;
        }
        piVar7[8] = piVar9;
        piVar18 = piVar9 + 0x1e;
        *piVar9 = piVar7;
        iVar5 = of_property_read_string(uVar12,"interconnect-names",piVar18);
        if (iVar5 != 0) {
            iVar14 = mhi_controller_get_privdata(arg1);
            _printk(0x8000b3a,"mhi_arch_pcie_init");
            ipc_log_string(*(iVar14 + 0x38),"[E][%s] No interconnect name specified\n","mhi_arch_pcie_init");
            uVar16 = 0xfffffffe;
            goto code_r0x0800532c;
        }
        uVar16 = of_icc_get(*arg1,piVar9[0x1e]);
        piVar9[0x1d] = uVar16;
        if (0xfffffffffffff000 < uVar16) {
            iVar14 = mhi_controller_get_privdata(arg1);
            _printk(0x8000a10,"mhi_arch_pcie_init",*piVar18,uVar16 & 0xffffffff);
            ipc_log_string(*(iVar14 + 0x38),"[E][%s] Interconnect path for %s not found, ret: %d\n",
                           "mhi_arch_pcie_init",*piVar18,uVar16 & 0xffffffff);
            goto code_r0x0800532c;
        }
        iVar10 = devm_kmalloc(*arg1,0x28,0xdc0);
        piVar9[0x1f] = iVar10;
        if (iVar10 == 0) goto code_r0x08005328;
        uVar6 = of_property_read_variable_u32_array(uVar12,"qcom,mhi-bus-bw-cfg",iVar10,10,0);
        if (uVar6 < 0) {
            uVar16 = uVar6;
            iVar14 = mhi_controller_get_privdata(arg1);
            _printk(0x80013a3,"mhi_arch_pcie_init");
            ipc_log_string(*(iVar14 + 0x38),"[E][%s] Invalid bus BW config table\n","mhi_arch_pcie_init");
            goto code_r0x0800532c;
        }
        cVar3 = *(iVar19 + 0x30);
        piVar9[0xc] = iVar14;
        piVar9[0x11] = arg1;
        uVar13 = 0xc;
        if (cVar3 != '\0') {
            uVar13 = 4;
        }
        *(piVar9 + 0xb) = uVar13;
        piVar9[0xe] = sym.mhi_arch_pci_link_state_cb.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt;
        iVar5 = msm_pcie_register_event(piVar9 + 9);
        if (iVar5 != 0) {
            iVar19 = mhi_controller_get_privdata(arg1);
            _printk(0x8000774,"mhi_arch_pcie_init");
            ipc_log_string(*(iVar19 + 0x38),"[E][%s] Failed to register for link events\n","mhi_arch_pcie_init");
        }
        *(piVar9 + 0x19) = 0;
        __init_swait_queue_head(piVar9 + 0x1a,"&x->wait",obj.modem_qcom_sdx65_mhi_events);
        piVar9[0x16] = sym.mhi_arch_pm_notifier.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt;
        register_pm_notifier(piVar9 + 0x16);
        complete_all(piVar9 + 0x19);
        uVar16 = devm_register_esoc_client(*arg1,0x8000c9b);
        piVar9[1] = uVar16;
        pcVar17 = "[E][%s] Failed to register esoc client\n";
        uVar12 = 0x80011e4;
        if ((uVar16 == 0) || (0xfffffffffffff000 < uVar16)) {
code_r0x08005484:
            iVar19 = mhi_controller_get_privdata(arg1);
            _printk(uVar12,"mhi_arch_pcie_init");
            ipc_log_string(*(iVar19 + 0x38),pcVar17,"mhi_arch_pcie_init");
        }
        else {
            piVar9[3] = arg1;
            *(piVar9 + 4) = 0;
            piVar9[5] = sym.mhi_arch_esoc_ops_power_on.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt;
            piVar9[6] = sym.mhi_arch_esoc_ops_power_off.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt;
            piVar9[8] = sym.mhi_arch_esoc_ops_mdm_error.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt;
            iVar5 = esoc_register_client_hook(uVar16,piVar9 + 2);
            if (iVar5 != 0) {
                pcVar17 = "[E][%s] Failed to register esoc ops\n";
                uVar12 = 0x8001438;
                goto code_r0x08005484;
            }
        }
        msm_pcie_pm_control(3,*(*(iVar15 + -0xc0) + 0xf8),iVar14,0,0);
        mhi_controller_set_bw_scale_cb(arg1,sym.mhi_arch_bw_scale.017a381a7ab6d34ff4daeb2f184c5672.cfi_jt);
        __mhi_driver_register(obj.mhi_bl_driver,obj.__this_module);
    }
    uVar8 = pcie_capability_read_word(iVar14,0x12,auStack_5c);
    uVar16 = uVar8 & 0xffffffff;
    if (uVar8 == 0) {
        *(arg1 + 0x1c0) = auStack_5c[0] & 0xf;
        *(arg1 + 0x1c4) = auStack_5c[0] >> 4 & 0x3f;
        uVar16 = sym.mhi_arch_set_bus_request(arg1,auStack_5c[0] & 0xf);
        uVar16 = uVar16 & 0xffffffff;
    }
code_r0x0800532c:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_58) {
        return uVar16 & 0xffffffff;
    }
    piVar11 = __stack_chk_fail();
    *extraout_x18 = sym.mhi_arch_pci_link_state_cb;
    piVar7 = *(piVar11 + 4);
    iVar14 = mhi_controller_get_privdata(piVar7);
    if (*piVar11 == 8) {
        iVar14 = mhi_controller_get_privdata(piVar7);
        ipc_log_string(*(iVar14 + 0x38),"[I][%s] Received PCIE_L1SS_TIMEOUT signal\n","mhi_arch_pci_link_state_cb");
        iVar14 = *piVar7;
        uVar12 = ktime_get_mono_fast_ns();
        *(iVar14 + 0x218) = uVar12;
        uVar16 = __pm_runtime_suspend(*piVar7,9);
    }
    else if (*piVar11 == 4) {
        iVar15 = mhi_controller_get_privdata(piVar7);
        uVar16 = ipc_log_string(*(iVar15 + 0x38),"[I][%s] Received PCIE_WAKE signal\n","mhi_arch_pci_link_state_cb");
        if (*(iVar14 + 0x48) != '\0') {
            uVar16 = __pm_runtime_resume(*piVar7,5);
            puVar1 = *piVar7 + 0x1f8;
            uVar8 = *puVar1;
            do {
                uVar6 = uVar8;
                if (uVar6 == 0) {
                    return uVar16;
                }
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar2 = *puVar1;
                    uVar16 = uVar2;
                    if (uVar2 != uVar6) goto code_r0x08005560;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = uVar6 - 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                DataMemoryBarrier(2,3);
code_r0x08005560:
                uVar8 = uVar16;
            } while (uVar6 != uVar2);
        }
    }
    else {
        iVar14 = mhi_controller_get_privdata(piVar7);
        uVar16 = ipc_log_string(*(iVar14 + 0x38),"[I][%s] Unhandled event: 0x%x\n","mhi_arch_pci_link_state_cb",
                                *piVar11);
    }
    return uVar16;
}


// ===== sym.mhi_arch_pci_link_state_cb @ 0x080054bc (size 348) =====

void sym.mhi_arch_pci_link_state_cb(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar10 = *(arg1 + 0x10);
    iVar5 = mhi_controller_get_privdata(piVar10);
    if (*arg1 == 8) {
        iVar5 = mhi_controller_get_privdata(piVar10);
        ipc_log_string(*(iVar5 + 0x38),"[I][%s] Received PCIE_L1SS_TIMEOUT signal\n","mhi_arch_pci_link_state_cb");
        iVar5 = *piVar10;
        uVar7 = ktime_get_mono_fast_ns();
        *(iVar5 + 0x218) = uVar7;
        __pm_runtime_suspend(*piVar10,9);
    }
    else if (*arg1 == 4) {
        iVar6 = mhi_controller_get_privdata(piVar10);
        ipc_log_string(*(iVar6 + 0x38),"[I][%s] Received PCIE_WAKE signal\n","mhi_arch_pci_link_state_cb");
        if (*(iVar5 + 0x48) != '\0') {
            __pm_runtime_resume(*piVar10,5);
            puVar1 = *piVar10 + 0x1f8;
            uVar9 = *puVar1;
            do {
                uVar8 = uVar9;
                if (uVar8 == 0) {
                    return;
                }
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar2 = *puVar1;
                    uVar9 = uVar2;
                    if (uVar2 != uVar8) goto code_r0x08005560;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = uVar8 - 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                DataMemoryBarrier(2,3);
code_r0x08005560:
            } while (uVar8 != uVar2);
        }
    }
    else {
        iVar5 = mhi_controller_get_privdata(piVar10);
        ipc_log_string(*(iVar5 + 0x38),"[I][%s] Unhandled event: 0x%x\n","mhi_arch_pci_link_state_cb",*arg1);
    }
    return;
}


// ===== sym.mhi_arch_pm_notifier @ 0x08005618 (size 72) =====

ulong sym.mhi_arch_pm_notifier(int64_t arg1,uint32_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 4) {
        complete_all(arg1 + 0x18);
    }
    else if (arg2 == 3) {
        *(arg1 + 0x18) = 0;
    }
    return 0;
}


// ===== sym.mhi_arch_esoc_ops_power_on @ 0x08005660 (size 420) =====

int sym.mhi_arch_esoc_ops_power_on(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char cVar2;
    int iVar3;
    int64_t arg3;
    int64_t iVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3 = mhi_controller_get_privdata();
    iVar8 = arg1 + 0x140;
    iVar7 = *arg1;
    mutex_lock(iVar8);
    cVar2 = *(arg3 + 0x48);
    iVar4 = mhi_controller_get_privdata(arg1);
    if (cVar2 == '\0') {
        uVar1 = arg2 & 1;
        ipc_log_string(*(iVar4 + 0x38),"[I][%s] Enter: mdm_crashed: %d\n","mhi_arch_esoc_ops_power_on",uVar1);
        __pm_runtime_set_status(*arg1,0);
        pm_runtime_enable(*arg1);
        mutex_unlock(iVar8);
        pm_runtime_forbid(*arg1);
        iVar3 = __pm_runtime_resume(*arg1,4);
        if (iVar3 < 0) {
            iVar8 = mhi_controller_get_privdata(arg1);
            _printk(0x80014ab,"mhi_arch_esoc_ops_power_on",iVar3);
            uVar5 = *(iVar8 + 0x38);
            pcVar6 = "[E][%s] Error with rpm resume, ret: %d\n";
        }
        else {
            iVar8 = iVar7 + -0xd0;
            iVar3 = msm_pcie_pm_control(2,*(*(iVar7 + -0xc0) + 0xf8),iVar8,0,0);
            if (iVar3 == 0) {
                *(arg3 + 0x49) = uVar1;
                iVar3 = sym.mhi_qcom_pci_probe(iVar8,arg1,arg3);
                return iVar3;
            }
            iVar8 = mhi_controller_get_privdata(arg1);
            _printk(0x8000c9f,"mhi_arch_esoc_ops_power_on",iVar3);
            uVar5 = *(iVar8 + 0x38);
            pcVar6 = "[E][%s] Failed to resume pcie bus ret: %d\n";
        }
        ipc_log_string(uVar5,pcVar6,"mhi_arch_esoc_ops_power_on",iVar3);
    }
    else {
        ipc_log_string(*(iVar4 + 0x38),"[I][%s] MHI still in active state\n","mhi_arch_esoc_ops_power_on");
        mutex_unlock(iVar8);
        iVar3 = 0;
    }
    return iVar3;
}


// ===== sym.mhi_arch_esoc_ops_power_off @ 0x08005804 (size 660) =====

void sym.mhi_arch_esoc_ops_power_off(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t *piVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar5 = mhi_controller_get_privdata();
    iVar9 = piVar5[8];
    iVar6 = mhi_controller_get_privdata(arg1);
    ipc_log_string(*(iVar6 + 0x38),"[I][%s] Enter: mdm_crashed: %d\n","mhi_arch_esoc_ops_power_off",arg2 & 1);
    pm_stay_awake(*(arg1 + 8) + 0x28);
    wait_for_completion(iVar9 + 200);
    __pm_runtime_resume(*arg1,4);
    iVar6 = arg1 + 0x140;
    mutex_lock(iVar6);
    if (piVar5[9] == '\0') {
        iVar9 = mhi_controller_get_privdata(arg1);
        ipc_log_string(*(iVar9 + 0x38),"[I][%s] Not in active state\n","mhi_arch_esoc_ops_power_off");
        mutex_unlock(iVar6);
        puVar1 = *arg1 + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) {
                return;
            }
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08005a34;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005a34:
        } while (uVar7 != uVar2);
    }
    else {
        *(piVar5 + 9) = 0;
        *(piVar5 + 10) = 0;
        mutex_unlock(iVar6);
        puVar1 = *arg1 + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x080058d0;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080058d0:
        } while (uVar7 != uVar2);
        iVar6 = mhi_controller_get_privdata(arg1);
        ipc_log_string(*(iVar6 + 0x38),"[I][%s] Triggering shutdown process\n","mhi_arch_esoc_ops_power_off");
        mhi_power_down(arg1,(arg2 & 1U) == 0);
        iVar10 = *arg1;
        iVar9 = iVar10 + -0xd0;
        iVar6 = mhi_controller_get_privdata(arg1);
        ipc_log_string(*(iVar6 + 0x38),"[I][%s] Entered\n","mhi_arch_link_off");
        pci_set_power_state(iVar9,3);
        msm_pcie_pm_control(1,*(*(iVar10 + -0xc0) + 0xf8),iVar9,0,0);
        sym.mhi_arch_set_bus_request(arg1,0);
        iVar6 = mhi_controller_get_privdata(arg1);
        ipc_log_string(*(iVar6 + 0x38),"[I][%s] Exited\n","mhi_arch_link_off");
        sym.mhi_arch_pcie_deinit(arg1);
        sym.mhi_deinit_pci_dev(*arg1 + -0xd0,*piVar5);
        pm_relax(*(arg1 + 8) + 0x28);
    }
    return;
}


// ===== sym.mhi_arch_esoc_ops_mdm_error @ 0x08005a98 (size 88) =====

void sym.mhi_arch_esoc_ops_mdm_error(int64_t arg1)

{
    uint uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = mhi_controller_get_privdata();
    uVar3 = *(iVar2 + 0x38);
    uVar1 = mhi_report_error(arg1);
    ipc_log_string(uVar3,"[I][%s] Enter: mdm asserted: ret: %d\n","mhi_arch_esoc_ops_mdm_error",uVar1);
    return;
}


// ===== sym.mhi_arch_bw_scale @ 0x08005af0 (size 136) =====

int sym.mhi_arch_bw_scale(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = msm_pcie_set_link_bandwidth(*arg1 + -0xd0,*arg2,*(arg2 + 4));
    if (iVar1 == 0) {
        sym.mhi_arch_set_bus_request(arg1,*arg2);
        iVar2 = mhi_controller_get_privdata(arg1);
        ipc_log_string(*(iVar2 + 0x38),"[I][%s] BW changed to speed:0x%x width:0x%x\n","mhi_arch_pcie_scale_bw",*arg2
                       ,*(arg2 + 4));
    }
    return iVar1;
}


// ===== sym.mhi_arch_link_suspend @ 0x08005b78 (size 428) =====

int sym.mhi_arch_link_suspend(int64_t arg1)

{
    char cVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = mhi_controller_get_privdata();
    iVar8 = *arg1;
    iVar9 = piVar3[8];
    iVar10 = *piVar3;
    iVar7 = iVar8 + -0xd0;
    iVar4 = mhi_controller_get_privdata(arg1);
    if (*(iVar4 + 0x4c) < 4) {
        pcVar6 = *(reloc..str.3.llvm.9036777326681490570 + *(iVar4 + 0x4c) * 8);
    }
    else {
        pcVar6 = "Invalid";
    }
    ipc_log_string(*(iVar4 + 0x38),"[I][%s] Entered with suspend_mode:%s\n","mhi_arch_link_suspend",pcVar6);
    if (*(iVar10 + 0x30) == '\0') {
        msm_pcie_l1ss_timeout_disable(iVar7);
        cVar1 = *(piVar3 + 0x4a);
    }
    else {
        cVar1 = *(piVar3 + 0x4a);
    }
    if ((cVar1 == '\0') && (*(piVar3 + 0x4c) == 1)) {
        pci_clear_master(iVar7);
        iVar2 = pci_save_state(iVar7);
        if (iVar2 == 0) {
            uVar5 = pci_store_saved_state(iVar7);
            *(iVar9 + 0xa8) = uVar5;
            pci_disable_device(iVar7);
            pci_set_power_state(iVar7,3);
            msm_pcie_pm_control(1,*(*(iVar8 + -0xc0) + 0xf8),iVar7,0,0);
            sym.mhi_arch_set_bus_request(arg1,0);
        }
        else {
            iVar4 = mhi_controller_get_privdata(arg1);
            _printk(0x8000d00,"mhi_arch_link_suspend",iVar2);
            ipc_log_string(*(iVar4 + 0x38),"[E][%s] Failed with pci_save_state, ret:%d\n","mhi_arch_link_suspend",
                           iVar2);
            if (*(iVar10 + 0x30) == '\0') {
                msm_pcie_l1ss_timeout_enable(iVar7);
            }
        }
    }
    else {
        iVar2 = 0;
    }
    iVar4 = mhi_controller_get_privdata(arg1);
    ipc_log_string(*(iVar4 + 0x38),"[I][%s] Exited with ret:%d\n","mhi_arch_link_suspend",iVar2);
    return iVar2;
}


// ===== sym.mhi_arch_link_resume @ 0x08005d24 (size 688) =====

int sym.mhi_arch_link_resume(int64_t arg1)

{
    int iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = mhi_controller_get_privdata();
    iVar8 = *piVar2;
    iVar7 = *arg1;
    iVar3 = mhi_controller_get_privdata(arg1);
    if (*(iVar3 + 0x4c) < 4) {
        pcVar6 = *(reloc..str.3.llvm.9036777326681490570 + *(iVar3 + 0x4c) * 8);
    }
    else {
        pcVar6 = "Invalid";
    }
    ipc_log_string(*(iVar3 + 0x38),"[I][%s] Entered with suspend_mode: %s\n","mhi_arch_link_resume",pcVar6);
    if ((*(piVar2 + 0x4a) == '\0') && (*(piVar2 + 0x4c) == 1)) {
        iVar3 = mhi_controller_get_privdata(arg1);
        iVar10 = *arg1;
        iVar9 = *(iVar3 + 0x40);
        iVar3 = iVar10 + -0xd0;
        iVar1 = sym.mhi_arch_set_bus_request(arg1,*(arg1 + 0x1c0));
        if (iVar1 != 0) {
            iVar4 = mhi_controller_get_privdata(arg1);
            ipc_log_string(*(iVar4 + 0x38),"[I][%s] Could not set bus frequency, ret:%d\n","__mhi_arch_link_resume",
                           iVar1);
        }
        iVar1 = msm_pcie_pm_control(2,*(*(iVar10 + -0xc0) + 0xf8),iVar3,0,0);
        if (iVar1 == 0) {
            iVar1 = pci_set_power_state(iVar3,0);
            if (iVar1 == 0) {
                iVar1 = pci_enable_device(iVar3);
                if (iVar1 == 0) {
                    iVar1 = pci_load_and_free_saved_state(iVar3,iVar9 + 0xa8);
                    if (iVar1 != 0) {
                        iVar9 = mhi_controller_get_privdata(arg1);
                        ipc_log_string(*(iVar9 + 0x38),"[I][%s] Failed to load saved cfg state\n",
                                       "__mhi_arch_link_resume");
                    }
                    pci_restore_state(iVar3);
                    pci_set_master(iVar3);
                    goto code_r0x08005e78;
                }
                iVar3 = mhi_controller_get_privdata(arg1);
                _printk(0x8000eb8,"__mhi_arch_link_resume",iVar1);
                uVar5 = *(iVar3 + 0x38);
                pcVar6 = "[E][%s] Failed to enable device, ret:%d\n";
            }
            else {
                iVar3 = mhi_controller_get_privdata(arg1);
                _printk(0x80010f8,"__mhi_arch_link_resume",iVar1);
                uVar5 = *(iVar3 + 0x38);
                pcVar6 = "[E][%s] Failed to set PCI_D0 state, ret:%d\n";
            }
        }
        else {
            iVar3 = mhi_controller_get_privdata(arg1);
            _printk(0x80016da,"__mhi_arch_link_resume",iVar1);
            uVar5 = *(iVar3 + 0x38);
            pcVar6 = "[E][%s] Link training failed, ret:%d\n";
        }
        ipc_log_string(uVar5,pcVar6,"__mhi_arch_link_resume",iVar1);
        iVar3 = mhi_controller_get_privdata(arg1);
        _printk(0x8000d2e,"mhi_arch_link_resume",iVar1);
        ipc_log_string(*(iVar3 + 0x38),"[E][%s] Link training failed, ret: %d\n","mhi_arch_link_resume",iVar1);
    }
    else {
code_r0x08005e78:
        if (*(iVar8 + 0x30) == '\0') {
            msm_pcie_l1ss_timeout_enable(iVar7 + -0xd0);
        }
        iVar3 = mhi_controller_get_privdata(arg1);
        ipc_log_string(*(iVar3 + 0x38),"[I][%s] Exited with ret: %d\n","mhi_arch_link_resume",0);
        iVar1 = 0;
    }
    return iVar1;
}


// ===== sym.mhi_arch_time_get @ 0x08005fd4 (size 32) =====

void sym.mhi_arch_time_get(void)

{
    ulong uVar1;
    
    InstructionSynchronizationBarrier();
    uVar1 = cntvct_el0;
    return;
}


// ===== sym.mhi_arch_link_lpm_disable @ 0x08005ff4 (size 44) =====

void sym.mhi_arch_link_lpm_disable(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    msm_pcie_prevent_l1(*arg1 + -0xd0);
    return;
}


// ===== sym.mhi_arch_link_lpm_enable @ 0x08006020 (size 48) =====

ulong sym.mhi_arch_link_lpm_enable(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    msm_pcie_allow_l1(*arg1 + -0xd0);
    return 0;
}


// ===== sym.mhi_bl_probe @ 0x08006050 (size 188) =====

int sym.mhi_bl_probe(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x10);
    iVar2 = mhi_controller_get_privdata(iVar4);
    iVar5 = *(iVar2 + 0x40);
    *(iVar5 + 0x108) = arg1;
    iVar2 = *(arg1 + 0x98);
    if (iVar2 == 0) {
        iVar2 = *(arg1 + 0x28);
    }
    uVar3 = ipc_log_context_create(0x19,iVar2,0);
    *(iVar5 + 0x100) = uVar3;
    ipc_log_string(uVar3,"Host: Entered SBL, Session ID:0x%x\n",*(iVar4 + 0x120));
    iVar1 = mhi_prepare_for_transfer(arg1,0);
    if (iVar1 == 0) {
        iVar2 = 0x1000;
        if (*(arg2 + 0x20) != 0) {
            iVar2 = *(arg2 + 0x20);
        }
        *(iVar5 + 0x110) = iVar2;
        iVar1 = sym.mhi_bl_queue_inbound(arg1,iVar2);
        if (iVar1 != 0) {
            mhi_unprepare_from_transfer(arg1);
        }
    }
    return iVar1;
}


// ===== sym.mhi_bl_remove @ 0x0800610c (size 84) =====

void sym.mhi_bl_remove(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = mhi_controller_get_privdata(*(arg1 + 0x10));
    iVar1 = *(iVar1 + 0x40);
    *(iVar1 + 0x108) = 0;
    ipc_log_string(*(iVar1 + 0x100),"Host: Remove notification\n");
    mhi_unprepare_from_transfer(arg1);
    return;
}


// ===== sym.mhi_bl_dummy_cb @ 0x08006160 (size 12) =====

void sym.mhi_bl_dummy_cb(void)

{
    return;
}


// ===== sym.mhi_bl_dl_cb @ 0x0800616c (size 424) =====

//WARNING: Control flow encountered bad instruction data

void sym.mhi_bl_dl_cb(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong uVar4;
    ulong unaff_x30;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    uVar4 = *(arg1 + 0x10);
    iVar2 = mhi_controller_get_privdata(uVar4);
    iVar3 = *arg2;
    iVar2 = *(iVar2 + 0x40);
    iStack_60 = iVar3;
    if (*(arg2 + 0x14) == -0x6b) {
        kfree();
    }
    else {
        *(*(arg2 + 8) + iVar3 + -1) = 0;
        if (*(arg2 + 8) < 0xff) {
            ipc_log_string(*(iVar2 + 0x100),"%s %s","Dev->Host: ",iVar3);
        }
        else {
            iVar3 = strsep(&iStack_60,0x8001317);
            while (iVar3 != 0) {
                ipc_log_string(*(iVar2 + 0x100),"%s %s","Dev->Host: ",iVar3);
                iVar3 = strsep(&iStack_60,0x8001317);
            }
            iVar3 = *arg2;
            iStack_60 = iVar3;
        }
        iVar1 = mhi_queue_buf(arg1,2,iVar3,*(iVar2 + 0x110),2);
        if (iVar1 != 0) {
            kfree(iStack_60);
            iVar2 = mhi_controller_get_privdata(uVar4);
            _printk(0x800085f,"mhi_bl_dl_cb",iVar1);
            ipc_log_string(*(iVar2 + 0x38),"[E][%s] Failed to recycle BL channel buffer: %d\n","mhi_bl_dl_cb",iVar1);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module @ 0x08006324 (size 60) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __pci_register_driver(obj.mhi_pcie_driver,obj.__this_module,"mhi_cntrl_qcom");
    return;
}


// ===== sym.cleanup_module @ 0x08006360 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pci_unregister_driver(obj.mhi_pcie_driver);
    return;
}

