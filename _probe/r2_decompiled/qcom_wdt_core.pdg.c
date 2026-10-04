// decompiled from qcom_wdt_core by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 680) =====

//WARNING: Switch with 1 destination removed at 0x0800308c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x2fea680ab0869bc2) {
        if (arg1 < -0x550b9e52359ac614) {
            if (arg1 != -0x7f8174fea8415663) {
                if (arg1 == -0x66d421a09845f9f8) {
                    pcVar2 = sym.wakeup_enable_show.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt;
                }
                else {
                    if (arg1 != -0x57be845bca9148ef) goto code_r0x0800304c;
                    pcVar2 = sym.qcom_wdt_pet_resume.cfi_jt;
                }
code_r0x08001270:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x0800304c;
            }
            pcVar2 = sym.swap_irq_info_fn.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt;
        }
        else if (arg1 < -0x3987c0e26ee29729) {
            if (arg1 == -0x550b9e52359ac614) {
                pcVar2 = sym.compute_irq_stat.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt;
            }
            else {
                if (arg1 != -0x410a65462fa38697) goto code_r0x0800304c;
                pcVar2 = sym.__typeid__ZTSFiPKvS0_E_global_addr;
            }
        }
        else {
            if (arg1 == -0x3987c0e26ee29729) {
                pcVar2 = sym.qcom_wdt_bark_handler.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt;
                goto code_r0x08001270;
            }
            if (arg1 != -0x3557318fb8d07b71) goto code_r0x0800304c;
            pcVar2 = sym.qcom_wdt_remove.cfi_jt;
        }
    }
    else if (arg1 < 0x4c550309df1cf4c1) {
        if (arg1 != -0x2fea680ab0869bc2) {
            if (arg1 == -0x2ee0710dce68437c) {
                pcVar2 = sym.qcom_wdt_user_pet_bite.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt;
            }
            else {
                if (arg1 != 0x1e3d0ffe3d0499e9) goto code_r0x0800304c;
                pcVar2 = sym.qcom_wdt_disable_set.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt;
            }
            goto code_r0x08001270;
        }
        pcVar2 = sym.qcom_wdt_register.cfi_jt;
    }
    else if (arg1 < 0x7d57972cd3914fb1) {
        if (arg1 == 0x4c550309df1cf4c1) {
            pcVar2 = sym.qcom_wdt_keep_alive_response.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt;
        }
        else {
            if (arg1 != 0x641d19c7be126e92) goto code_r0x0800304c;
            pcVar2 = sym.qcom_wdt_kthread.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x7d57972cd3914fb1) {
            if ((pcVar1 + -0x8001330 >> 3 | pcVar1 << 0x3d) < 5) {
                return;
            }
            goto code_r0x0800304c;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800304c;
        pcVar2 = sym.qcom_wdt_trigger_bite.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800304c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80030a0);
    (*pcVar1)();
}


// ===== sym.qcom_wdt_register.cfi_jt @ 0x080012b0 (size 8) =====

uint64_t sym.qcom_wdt_register.cfi_jt(int64_t param_1,int64_t param_2,code *param_3)

{
    uint8_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    code *pcVar9;
    uint uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar11;
    int64_t iVar12;
    ulong *puVar13;
    ulong *puVar14;
    code *pcVar15;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    iStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    iStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    if (((param_1 == 0) || (param_2 == 0)) || (param_3 == NULL)) {
        _printk(0x8000536);
        uVar6 = 0xffffffea;
        pcVar9 = param_3;
        goto code_r0x08002278;
    }
    uVar5 = platform_get_irq(param_1,0);
    *(param_2 + 0x20) = uVar5;
    uVar1 = irq_check_status_bit(uVar5,0x200);
    *(param_2 + 0x18) = 0x4e2000003a98;
    *(param_2 + 0x24) = 1;
    *(param_2 + 0x27) = uVar1 & 1;
    *(param_2 + 0x26) = 1;
    _dev_err(*(param_2 + 8),"wdog bark_time %d",20000);
    _dev_err(*(param_2 + 8),"wdog pet_time %d",*(param_2 + 0x18));
    pcVar9 = 0xffffffff;
    _segment.ehdr = param_2;
    *(param_2 + 8) = param_1 + 0x10;
    *(param_1 + 0xa8) = param_2;
    *(param_2 + 0x30) = 0;
    uVar6 = kthread_create_on_node
                      (sym.qcom_wdt_kthread.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt,param_2,0xffffffff,param_3);
    *(param_2 + 0xd8) = uVar6;
    if (0xfffffffffffff000 < uVar6) goto code_r0x08002278;
    if (*(param_2 + 0x27) == '\0') {
        pcVar9 = sym.qcom_wdt_bark_handler.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt;
        uVar2 = devm_request_threaded_irq
                          (*(param_2 + 8),*(param_2 + 0x20),
                           sym.qcom_wdt_bark_handler.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt,0,0x4001,
                           "apps_wdog_bark",param_2);
        if (uVar2 == 0) {
code_r0x08002250:
            *(_segment.ehdr + 0x10a0) = 0;
            uVar7 = register_pm_notifier(reloc.qcom_wdt_hibernation_notifier.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt);
            uVar6 = uVar7 & 0xffffffff;
            if (uVar7 == 0) {
                *(param_2 + 0x3d0) = 0xfffffffe0;
                *(param_2 + 0x3d8) = param_2 + 0x3d8;
                *(param_2 + 0x3e0) = param_2 + 0x3d8;
                *(param_2 + 1000) = sym.compute_irq_stat.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt;
                *(param_2 + 0x1060) = 0;
                iVar12 = __msecs_to_jiffies(*(param_2 + 0x18));
                pcVar9 = **(param_2 + 0x10);
                __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar9,0x80003a0);
                (*pcVar9)(*(param_2 + 0x1c),param_2);
                pcVar9 = *(*(param_2 + 0x10) + 8);
                __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar9,0x80003c0);
                (*pcVar9)(*(param_2 + 0x1c) + 10000,param_2);
                puVar11 = param_2 + 0x70;
                *puVar11 = sym.qcom_wdt_panic_handler.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt;
                *(param_2 + 0x80) = 0x7ffffffe;
                atomic_notifier_chain_register(panic_notifier_list,puVar11);
                *(param_2 + 0x98) = 0x7ffffffe;
                puVar13 = param_2 + 0x88;
                *puVar13 = sym.qcom_wdt_die_handler.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt;
                register_die_notifier(puVar13);
                puVar14 = param_2 + 0xb8;
                *puVar14 = sym.restart_wdog_handler.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt;
                *(param_2 + 200) = 0xff;
                register_restart_handler(puVar14);
                __mutex_init(param_2 + 0x38,"&wdog_dd->disable_lock",obj.dev_attr_disable);
                __init_waitqueue_head(param_2 + 0x118,"&wdog_dd->pet_complete",obj.dev_attr_disable);
                *(param_2 + 0xd1) = 0;
                *(param_2 + 0x3cc) = 0;
                *(param_2 + 0x130) = 0x100;
                *(param_2 + 0x3c8) = 0;
                wake_up_process(*(param_2 + 0xd8));
                iVar8 = param_2 + 0xe0;
                init_timer_key(iVar8,sym.qcom_wdt_pet_task_wakeup.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt,0,0,0);
                *(param_2 + 0xf0) = _del_timer_sync + iVar12;
                add_timer(iVar8);
                init_timer_key(param_2 + 0x1068,sym.qcom_wdt_user_pet_bite.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt,0,
                               0,0);
                pcVar15 = *(*(param_2 + 0x10) + 0x18);
                pcVar9 = 0x80003e0;
                uVar10 = 3;
                if (*(param_2 + 0x26) == '\0') {
                    uVar10 = 1;
                }
                __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar15,0x80003e0);
                uVar2 = (*pcVar15)(uVar10,param_2);
                if (uVar2 == 0) {
                    pcVar9 = *(*(param_2 + 0x10) + 0x10);
                    __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar9,0x8000400);
                    (*pcVar9)(param_2);
                    uVar5 = sched_clock();
                    *(param_2 + 0x28) = uVar5;
                    *(param_2 + 0xd0) = 1;
                    iVar4 = device_create_file(*(param_2 + 8),obj.dev_attr_disable);
                    iVar3 = device_create_file(*(param_2 + 8),obj.dev_attr_wakeup_enable);
                    if (iVar3 != 0 || iVar4 != 0) {
                        _dev_err(*(param_2 + 8),"cannot create sysfs attribute\n");
                    }
                    if (*(param_2 + 0x27) != '\0') {
                        enable_percpu_irq(*(param_2 + 0x20),0);
                    }
                    *(param_2 + 0xa0) = sym.qcom_wdt_cpu_pm_notify.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt;
                    cpu_pm_register_notifier();
                    _dev_info(*(param_2 + 8),"QCOM Apps Watchdog Initialized\n");
                    pcVar9 = 0xd;
                    strlcpy(&uStack_88,"KWDOGDATA",0xd);
                    iVar8 = (param_2 << 8) >> 8;
                    uVar6 = iVar8 + 0x8000000000;
                    iStack_68 = ___msecs_to_jiffies + uVar6;
                    if (uVar6 >> 0x26 != 0) {
                        iStack_68 = iVar8 - _cpu_pm_unregister_notifier;
                    }
                    uStack_60 = 0x10a8;
                    iStack_70 = param_2;
                    iVar4 = msm_minidump_add_region(&uStack_88);
                    if (iVar4 < 0) {
                        _dev_err(*(param_2 + 8),"Failed to add Wdt data in Minidump\n");
                    }
                    uVar6 = 0;
                    goto code_r0x08002278;
                }
                uVar6 = uVar2;
                atomic_notifier_chain_unregister(panic_notifier_list,puVar11);
                unregister_die_notifier(puVar13);
                unregister_restart_handler(puVar14);
                if (*(param_2 + 0x27) != '\0') {
                    free_percpu_irq(*(param_2 + 0x20),*(param_2 + 0x68));
                    free_percpu(*(param_2 + 0x68));
                }
                del_timer_sync(iVar8);
                flush_work(param_2 + 0x3d0);
                _dev_err(*(param_2 + 8),"Failed Initializing QCOM Apps Watchdog\n");
            }
        }
        else {
            pcVar9 = uVar2;
            _dev_err(*(param_2 + 8),"failed to request bark irq: %d\n",pcVar9);
            uVar6 = 0xffffffea;
        }
    }
    else {
        iVar8 = __alloc_percpu(8,8);
        *(param_2 + 0x68) = iVar8;
        if (iVar8 == 0) {
            _dev_err(*(param_2 + 8),"failed to allocate cpu data\n");
            uVar6 = 0xfffffff4;
        }
        else {
            iVar12 = tpidr_el1;
            *(iVar12 + iVar8) = param_2;
            pcVar9 = NULL;
            uVar2 = __request_percpu_irq
                              (*(param_2 + 0x20),sym.qcom_wdt_ppi_bark.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt,0,
                               "apps_wdog_bark",*(param_2 + 0x68));
            if (uVar2 == 0) goto code_r0x08002250;
            uVar6 = uVar2;
            _dev_err(*(param_2 + 8),"failed to request bark irq\n");
            free_percpu(*(param_2 + 0x68));
        }
    }
    kthread_stop(*(param_2 + 0xd8));
code_r0x08002278:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_58) {
        iVar8 = __stack_chk_fail();
        uVar5 = tpidr_el2;
        *extraout_x18 = 0x8002674;
        iVar12 = *(iVar8 + 0x98);
        iVar8 = iVar12 + 0x38;
        mutex_lock(uVar5,iVar8);
        iVar4 = scnprintf(pcVar9,0x1000,0x8000749,*(iVar12 + 0xd0) ^ 1);
        mutex_unlock(iVar8);
        return iVar4;
    }
    return uVar6 & 0xffffffff;
}


// ===== sym.compute_irq_stat.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt @ 0x080012b8 (size 8) =====

void sym.compute_irq_stat.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,code *param_4)

{
    int *piVar1;
    uint *puVar2;
    uint32_t uVar3;
    uint uVar4;
    int iVar5;
    char cVar6;
    bool bVar7;
    uint32_t uVar8;
    code *pcVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int iVar12;
    int64_t iVar13;
    int64_t iVar14;
    uint64_t uVar15;
    uint64_t extraout_x8;
    int *piVar16;
    int *extraout_x8_00;
    int *extraout_x8_01;
    ulong uVar17;
    int *extraout_x8_02;
    int *piVar18;
    int *extraout_x8_03;
    int *extraout_x8_04;
    int *extraout_x8_05;
    uint64_t extraout_x8_06;
    uint64_t extraout_x8_07;
    uint64_t extraout_x8_08;
    uint64_t extraout_x8_09;
    uint64_t extraout_x8_10;
    uint64_t extraout_x8_11;
    uint64_t uVar19;
    ulong *in_x18;
    int64_t iVar20;
    int *piVar21;
    int *piVar22;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar22 = param_1 + 0xc90;
    Hint_Prefetch(piVar22,2,0,1);
    do {
        iVar12 = *piVar22;
        cVar6 = '\x01';
        bVar7 = ExclusiveMonitorPass(piVar22,0x10);
        if (bVar7) {
            *piVar22 = 1;
            cVar6 = ExclusiveMonitorsStatus();
        }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar12 == 0) {
        __rcu_read_lock();
        *param_4 = extraout_x8;
        if (0 < extraout_x8) {
            uVar11 = 0;
            iVar12 = 0;
            piVar22 = param_1 + 0x30;
            piVar1 = param_1 + 0x4f0;
            do {
                iVar13 = irq_to_desc(iVar12);
                piVar16 = extraout_x8_00;
                if ((iVar13 != 0) && (uVar10 = kstat_irqs_usr(iVar12), piVar16 = extraout_x8_01, uVar10 != 0)) {
                    if (uVar11 < 10) {
                        iVar20 = uVar11;
                        piVar22[iVar20 * 0x26] = iVar12;
                        (piVar22 + iVar20 * 0x26)[1] = uVar10;
                        uVar17 = 0;
                        if (*(iVar13 + 0x78) != 0) {
                            uVar17 = *(*(iVar13 + 0x78) + 0x50);
                        }
                        *(piVar22 + iVar20 * 0x26 + 0x22) = uVar17;
                        uVar17 = 0;
                        if (*(iVar13 + 0x48) != 0) {
                            uVar17 = *(*(iVar13 + 0x48) + 8);
                        }
                        iVar14 = 0xffffffff;
                        *(piVar22 + iVar20 * 0x26 + 0x24) = uVar17;
                        while( true ) {
                            uVar10 = cpumask_next(iVar14,__cpu_possible_mask);
                            *param_4 = extraout_x8_02;
                            if (extraout_x8_02 <= uVar10) break;
                            if (0x1f < uVar10) goto code_r0x08001fd4;
                            iVar14 = uVar10;
                            piVar22[iVar20 * 0x26 + iVar14 + 2] = *(*(__per_cpu_offset + iVar14 * 8) + *(iVar13 + 0x68))
                            ;
                        }
                        uVar11 = uVar11 + 1;
                        piVar16 = extraout_x8_02;
                        if (uVar11 == 10) {
                            param_4 = sym.__typeid__ZTSFiPKvS0_E_global_addr;
                            uVar11 = 10;
                            sort(piVar22,10,0x98,sym.__typeid__ZTSFiPKvS0_E_global_addr,
                                 sym.swap_irq_info_fn.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt);
                            piVar16 = extraout_x8_03;
                        }
                    }
                    else {
                        uVar15 = 10;
                        piVar16 = piVar22;
                        do {
                            piVar18 = piVar16 + (uVar15 >> 1) * 0x26;
                            uVar3 = piVar18[1];
                            uVar8 = uVar10;
                            if (uVar10 == uVar3) break;
                            uVar19 = uVar15 - (uVar10 < uVar3);
                            piVar21 = piVar18 + 0x26;
                            if (uVar10 >= uVar3) {
                                piVar21 = piVar16;
                            }
                            uVar15 = uVar19 >> 1;
                            piVar16 = piVar21;
                            uVar8 = uVar3;
                        } while (1 < uVar19);
                        piVar16 = NULL;
                        if (piVar18 != NULL) {
                            piVar16 = piVar18 + 0x26;
                            if (param_1 + 0x588U <= piVar18) {
                                piVar16 = NULL;
                            }
                            if (uVar10 <= uVar8) {
                                piVar18 = piVar16;
                            }
                            piVar16 = piVar1;
                            piVar21 = piVar1;
                            if ((piVar18 <= piVar1 && piVar18 != NULL) && piVar18 < param_1 + 0x588U) {
                                do {
                                    memcpy(piVar21 + 0x26,piVar21,0x98);
                                    piVar21 = piVar21 + -0x26;
                                    piVar16 = extraout_x8_04;
                                } while (piVar18 <= piVar21);
                            }
                            if (piVar18 != NULL) {
                                *piVar18 = iVar12;
                                piVar18[1] = uVar10;
                                uVar17 = 0;
                                if (*(iVar13 + 0x78) != 0) {
                                    uVar17 = *(*(iVar13 + 0x78) + 0x50);
                                }
                                *(piVar18 + 0x22) = uVar17;
                                uVar17 = 0;
                                if (*(iVar13 + 0x48) != 0) {
                                    uVar17 = *(*(iVar13 + 0x48) + 8);
                                }
                                iVar20 = 0xffffffff;
                                *(piVar18 + 0x24) = uVar17;
                                while( true ) {
                                    uVar10 = cpumask_next(iVar20,__cpu_possible_mask);
                                    *param_4 = extraout_x8_05;
                                    piVar16 = extraout_x8_05;
                                    if (extraout_x8_05 <= uVar10) break;
                                    if (0x1f < uVar10) goto code_r0x08001fd4;
                                    iVar20 = uVar10;
                                    piVar18[iVar20 + 2] = *(*(__per_cpu_offset + iVar20 * 8) + *(iVar13 + 0x68));
                                }
                            }
                        }
                    }
                }
                *param_4 = piVar16;
                iVar12 = iVar12 + 1;
            } while (iVar12 < piVar16);
        }
        __rcu_read_unlock();
        uVar15 = cpumask_next(0xffffffff,__cpu_possible_mask);
        *param_4 = extraout_x8_06;
        if (uVar15 < extraout_x8_06) {
            do {
                if (0x1f < uVar15) goto code_r0x08001fd4;
                *(param_1 + 0xc10 + (uVar15 & 0xffffffff) * 4) =
                     *(kstat + *(__per_cpu_offset + (uVar15 & 0xffffffff) * 8));
                uVar15 = cpumask_next(uVar15,__cpu_possible_mask);
                *param_4 = extraout_x8_07;
            } while (uVar15 < extraout_x8_07);
        }
        uVar11 = nr_ipi_get();
        iVar13 = ipi_desc_get();
        if (0 < uVar11) {
            uVar15 = 0;
            iVar20 = param_1 + 0x620;
            do {
                if (uVar15 == 10) goto code_r0x08001fd4;
                *(iVar20 + uVar15 * 0x98) = uVar15;
                piVar22 = iVar20 + uVar15 * 0x98 + 4;
                *piVar22 = 0;
                uVar4 = *(*(iVar13 + uVar15 * 8) + 0x34);
                uVar10 = cpumask_next(0xffffffff,__cpu_possible_mask);
                *param_4 = extraout_x8_08;
                if (uVar10 < extraout_x8_08) {
                    do {
                        iVar12 = kstat_irqs_cpu(uVar4,uVar10);
                        if (0x1f < uVar10) goto code_r0x08001fd4;
                        iVar5 = *piVar22;
                        *(iVar20 + uVar15 * 0x98 + uVar10 * 4 + 8) = iVar12;
                        *piVar22 = iVar5 + iVar12;
                        uVar10 = cpumask_next(uVar10,__cpu_possible_mask);
                        *param_4 = extraout_x8_09;
                    } while (uVar10 < extraout_x8_09);
                }
                uVar15 = uVar15 + 1;
            } while (uVar15 != uVar11);
        }
        _printk(0x800074d);
        iVar13 = 0;
        do {
            iVar20 = param_1 + iVar13;
            if (*(iVar20 + 0xb8) == 0) {
                _printk(0x80007b7,*(iVar20 + 0x30),*(iVar20 + 0x34));
            }
            else {
                param_4 = *(iVar20 + 0x30);
                pcVar9 = *(iVar20 + 0x34);
                if (*(iVar20 + 0xc0) == 0) {
                    _printk(0x80008c6,*(iVar20 + 0xb8),param_4);
                    param_4 = pcVar9;
                }
                else {
                    _printk(0x80006a9);
                }
            }
            iVar13 = iVar13 + 0x98;
        } while (iVar13 != 0x5f0);
        _printk(0x800080f);
        _printk(0x800078b);
        uVar11 = cpumask_next(0xffffffff,__cpu_possible_mask);
        *param_4 = extraout_x8_10;
        if (uVar11 < extraout_x8_10) {
            do {
                uVar15 = uVar11;
                if (0x1f < uVar11) goto code_r0x08001fd4;
                _printk(0x80007b7,uVar15,*(param_1 + uVar15 * 4 + 0xc10));
                uVar11 = cpumask_next(uVar15,__cpu_possible_mask);
                *param_4 = extraout_x8_11;
            } while (uVar11 < extraout_x8_11);
        }
        _printk(0x800080f);
        _printk(0x800085b);
        iVar12 = nr_ipi_get();
        if (((((0 < iVar12) && (_printk(0x80007b7,*(param_1 + 0x620),*(param_1 + 0x624)), iVar12 != 1)) &&
             (_printk(0x80007b7,*(param_1 + 0x6b8),*(param_1 + 0x6bc)), iVar12 != 2)) &&
            ((((_printk(0x80007b7,*(param_1 + 0x750),*(param_1 + 0x754)), iVar12 != 3 &&
               (_printk(0x80007b7,*(param_1 + 0x7e8),*(param_1 + 0x7ec)), iVar12 != 4)) &&
              ((_printk(0x80007b7,*(param_1 + 0x880),*(param_1 + 0x884)), iVar12 != 5 &&
               ((_printk(0x80007b7,*(param_1 + 0x918),*(param_1 + 0x91c)), iVar12 != 6 &&
                (_printk(0x80007b7,*(param_1 + 0x9b0),*(param_1 + 0x9b4)), iVar12 != 7)))))) &&
             (_printk(0x80007b7,*(param_1 + 0xa48),*(param_1 + 0xa4c)), iVar12 != 8)))) &&
           (((_printk(0x80007b7,*(param_1 + 0xae0),*(param_1 + 0xae4)), iVar12 != 9 &&
             (_printk(0x80007b7,*(param_1 + 0xb78),*(param_1 + 0xb7c)), iVar12 != 10)) &&
            (_printk(0x80007b7,*(param_1 + 0xc10),*(param_1 + 0xc14)), iVar12 != 0xb)))) {
code_r0x08001fd4:
    //WARNING: Does not return
            pcVar9 = SoftwareBreakpoint(0x5512,0x8001fd8);
            (*pcVar9)();
        }
        _printk(0x800080f);
        puVar2 = param_1 + 0xc90;
        Hint_Prefetch(puVar2,2,0,1);
        do {
            cVar6 = '\x01';
            bVar7 = ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
                *puVar2 = 0;
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        DataMemoryBarrier(2,3);
    }
    return;
}


// ===== sym.qcom_wdt_remove.cfi_jt @ 0x080012c0 (size 8) =====

ulong sym.qcom_wdt_remove.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xa8);
    cpu_pm_unregister_notifier(arg1 + 0xa0);
    mutex_lock(arg1 + 0x38);
    if (*(arg1 + 0xd0) != '\0') {
        sym.qcom_wdt_disable(arg1);
    }
    mutex_unlock(arg1 + 0x38);
    device_remove_file(*(arg1 + 8),obj.dev_attr_disable);
    if (*(arg1 + 0x27) != '\0') {
        free_percpu(*(arg1 + 0x68));
    }
    irq_dispose_mapping(*(arg1 + 0x20));
    _dev_info(*(arg1 + 8),"QCOM Apps Watchdog Exit - Deactivated\n");
    del_timer_sync(arg1 + 0xe0);
    if (*(arg1 + 0xd1) != '\0') {
        del_timer_sync(arg1 + 0x1068);
    }
    *(arg1 + 0x130) = 0x101;
    kthread_stop(*(arg1 + 0xd8));
    flush_work(arg1 + 0x3d0);
    return 0;
}


// ===== sym.qcom_wdt_kthread.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt @ 0x080012c8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

ulong sym.qcom_wdt_kthread.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,uint32_t *param_4)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    char cVar7;
    uint32_t extraout_w8;
    ulong *in_x18;
    uint32_t unaff_w25;
    ulong unaff_x30;
    int64_t iStack_a8;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint auStack_70 [2];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    uVar6 = sp_el0;
    auStack_70[0] = 99;
    sched_setscheduler(uVar6,1,auStack_70);
    uVar4 = kthread_should_stop();
    if ((uVar4 & 1) == 0) {
        iVar1 = param_1 + 0x118;
        iStack_a8 = 0;
        do {
            cVar7 = *(param_1 + 0x130);
            while (cVar7 == '\0') {
                uStack_80 = 0;
                uStack_78 = 0;
                uStack_90 = 0;
                uStack_88 = 0;
                uStack_98 = 0;
                init_wait_entry(&uStack_98,0);
                while( true ) {
                    iVar5 = prepare_to_wait_event(iVar1,&uStack_98,1);
                    if (*(param_1 + 0x130) != '\0') {
                        finish_wait(iVar1,&uStack_98);
                        goto code_r0x08003258;
                    }
                    if (iVar5 != 0) break;
                    schedule();
                }
                cVar7 = '\0';
                if (iVar5 == 0) break;
            }
code_r0x08003258:
            uVar6 = sched_clock();
            *(param_1 + 0x140) = uVar6;
            iVar5 = 0xffffffff;
            while( true ) {
                uVar3 = cpumask_next(iVar5,__cpu_present_mask);
                *param_4 = extraout_w8;
                if (extraout_w8 <= uVar3) break;
                if (0x1f < uVar3) goto code_r0x080033f0;
                iVar5 = uVar3;
                *(param_1 + 0x248 + iVar5 * 8) = 0;
                *(param_1 + 0x148 + iVar5 * 8) = 0;
            }
            if (*(param_1 + 0x24) != '\0') {
                *(param_1 + 0x30) = 0;
                uVar3 = 0xffffffff;
                DataMemoryBarrier(2,3);
                *param_4 = unaff_w25;
                while (uVar3 = cpumask_next(uVar3,__cpu_online_mask), uVar3 < unaff_w25) {
                    if (0x1f < uVar3) {
code_r0x080033f0:
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x5512,0x80033f4);
                        (*pcVar2)();
                    }
                    if (*(param_1 + uVar3 * 4 + 0x348) == 0) {
                        uVar6 = sched_clock();
                        param_4 = 0x1;
                        *(param_1 + uVar3 * 8 + 0x148) = uVar6;
                        smp_call_function_single
                                  (uVar3,sym.qcom_wdt_keep_alive_response.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt,
                                   param_1);
                        *param_4 = unaff_w25;
                    }
                }
            }
            cVar7 = *(param_1 + 0x131);
            while (cVar7 == '\0') {
                uStack_80 = 0;
                uStack_78 = 0;
                uStack_90 = 0;
                uStack_88 = 0;
                uStack_98 = 0;
                init_wait_entry(&uStack_98,0);
                while( true ) {
                    iVar5 = prepare_to_wait_event(iVar1,&uStack_98,1);
                    if (*(param_1 + 0x131) != '\0') {
                        finish_wait(iVar1,&uStack_98);
                        goto code_r0x08003364;
                    }
                    if (iVar5 != 0) break;
                    schedule();
                }
                cVar7 = '\0';
                if (iVar5 == 0) break;
            }
code_r0x08003364:
            *(param_1 + 0x130) = 0;
            *(param_1 + 0x131) = *(param_1 + 0xd1) ^ 1;
            if (*(param_1 + 0xd0) != '\0') {
                iStack_a8 = __msecs_to_jiffies(*(param_1 + 0x18));
                pcVar2 = *(*(param_1 + 0x10) + 0x10);
                __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar2,0x8000380);
                (*pcVar2)(param_1);
                uVar6 = sched_clock();
                *(param_1 + 0x28) = uVar6;
            }
            uVar4 = kthread_should_stop();
            if ((uVar4 & 1) == 0) {
                _raw_spin_lock(param_1 + 0x3cc);
                if (*(param_1 + 0x3c8) == '\0') {
                    mod_timer(param_1 + 0xe0,_del_timer_sync + iStack_a8);
                }
                _raw_spin_unlock(param_1 + 0x3cc);
            }
            queue_work_on(0x20,_free_percpu,param_1 + 0x3d0);
            uVar4 = kthread_should_stop();
        } while ((uVar4 & 1) == 0);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return 0;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.swap_irq_info_fn.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt @ 0x080012d0 (size 8) =====

void sym.swap_irq_info_fn.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt(ulong param_1,ulong param_2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    code *pcVar6;
    int64_t iVar7;
    ulong uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auStack_c0 [152];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    memcpy(auStack_c0,param_1,0x98);
    memcpy(param_1,param_2,0x98);
    memcpy(param_2,auStack_c0,0x98);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_wdt_keep_alive_response;
    iVar5 = tpidr_el1;
    uVar2 = *(cpu_number + iVar5);
    puVar1 = iVar7 + (uVar2 >> 3 & 0x1ffffff8) + 0x30;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = *puVar1 | 1L << (uVar2 & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    uVar8 = sched_clock();
    if (uVar2 < 0x20) {
        *(iVar7 + uVar2 * 8 + 0x248) = uVar8;
        DataMemoryBarrier(2,3);
        return;
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8002928);
    (*pcVar6)();
}


// ===== sym.qcom_wdt_trigger_bite.cfi_jt @ 0x080012d8 (size 8) =====

void sym.qcom_wdt_trigger_bite.cfi_jt(void)

{
    bool bVar1;
    ulong *in_x18;
    code *pcVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        return;
    }
    sym.compute_irq_stat(_segment.ehdr + 0x3d0);
    _dev_err(*(_segment.ehdr + 8),"Causing a QCOM Apps Watchdog bite!\n");
    pcVar2 = *(*(_segment.ehdr + 0x10) + 0x28);
    __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar2,0x80002e0);
    (*pcVar2)(_segment.ehdr);
    pcVar2 = *(*(_segment.ehdr + 0x10) + 8);
    __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar2,0x8000300);
    (*pcVar2)(1,_segment.ehdr);
    pcVar2 = *(*(_segment.ehdr + 0x10) + 0x10);
    __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar2,0x8000320);
    (*pcVar2)(_segment.ehdr);
    iVar3 = -10000;
    do {
        __const_udelay(0x418958);
        bVar1 = iVar3 != -1;
        iVar3 = iVar3 + 1;
    } while (bVar1);
    do {
        __const_udelay(0x10c7);
    } while( true );
}


// ===== sym.wakeup_enable_show.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt @ 0x080012e0 (size 8) =====

int64_t sym.wakeup_enable_show.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000749,*(*(param_1 + 0x98) + 0x26));
    return iVar1;
}


// ===== sym.qcom_wdt_disable_get.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt @ 0x080012e8 (size 8) =====

int64_t sym.qcom_wdt_disable_get.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x98);
    iVar1 = iVar3 + 0x38;
    mutex_lock(iVar1);
    iVar2 = scnprintf(param_3,0x1000,0x8000749,*(iVar3 + 0xd0) ^ 1);
    mutex_unlock(iVar1);
    return iVar2;
}


// ===== sym.qcom_wdt_disable_set.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt @ 0x080012f0 (size 8) =====

uint64_t sym.qcom_wdt_disable_set.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    char acStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iVar5 = *(param_1 + 0x98);
    acStack_3c[0] = '\0';
    iVar4 = kstrtou8(param_3,10,acStack_3c);
    if (iVar4 == 0) {
        if (acStack_3c[0] == '\x01') {
            mutex_lock(iVar5 + 0x38);
            if (*(iVar5 + 0xd0) == '\0') {
                _dev_err(*(iVar5 + 8),"MSM Apps Watchdog already disabled\n");
            }
            else {
                iVar4 = qcom_scm_sec_wdog_deactivate();
                if (iVar4 != 0) {
                    _dev_err(*(iVar5 + 8),"Failed to deactivate secure wdog, ret = %d\n",iVar4);
                }
                sym.qcom_wdt_disable(iVar5);
            }
            mutex_unlock(iVar5 + 0x38);
        }
        else {
            _printk(0x8000895);
            param_4 = 0xffffffffffffffea;
        }
    }
    else {
        _dev_err(*(iVar5 + 8),"invalid user input\n");
        param_4 = iVar4;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return param_4;
    }
    auVar6 = __stack_chk_fail();
    uVar2 = *(auVar6._0_8_ + 4);
    uVar3 = *(auVar6._8_8_ + 4);
    uVar1 = -(uVar3 < uVar2);
    if (uVar2 < uVar3) {
        uVar1 = 1;
    }
    return uVar1;
}


// ===== sym.wakeup_enable_store.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt @ 0x080012f8 (size 8) =====

uchar * sym.wakeup_enable_store.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,uchar *param_4)

{
    int iVar1;
    uchar *puVar2;
    uint uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    code *pcVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint8_t auStack_4c [4];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iVar4 = *(param_1 + 0x98);
    auStack_4c[0] = 0;
    iVar1 = kstrtou8(param_3,10,auStack_4c);
    if ((iVar1 == 0) && (auStack_4c[0] < 2)) {
        mutex_lock(iVar4 + 0x38);
        *(iVar4 + 0x26) = auStack_4c[0] != 0;
        if (*(iVar4 + 0xd0) != '\0') {
            pcVar5 = *(*(iVar4 + 0x10) + 0x18);
            uVar3 = 3;
            if (auStack_4c[0] == 0) {
                uVar3 = 1;
            }
            __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar5,0x80004a0);
            (*pcVar5)(uVar3,iVar4);
        }
        mutex_unlock(iVar4 + 0x38);
    }
    else {
        _dev_err(*(iVar4 + 8),"invalid user input\n");
        if (iVar1 == 0) {
            iVar1 = -0x16;
        }
        param_4 = iVar1;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_48) {
        auVar6 = __stack_chk_fail();
        puVar2 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar2 != NULL) {
            switch(*puVar2) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar2,auVar6._8_8_,0);
                break;
            default:
                return puVar2;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5502,0x80030a0);
        (*pcVar5)();
    }
    return param_4;
}


// ===== sym.__typeid__ZTSFiPKvS0_E_global_addr @ 0x08001300 (size 8) =====

int sym.__typeid__ZTSFiPKvS0_E_global_addr(int64_t param_1,int64_t param_2)

{
    int iVar1;
    
    iVar1 = -(*(param_2 + 4) < *(param_1 + 4));
    if (*(param_1 + 4) < *(param_2 + 4)) {
        iVar1 = 1;
    }
    return iVar1;
}


// ===== sym.qcom_wdt_pet_resume.cfi_jt @ 0x08001308 (size 8) =====

ulong sym.qcom_wdt_pet_resume.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x98);
    if (iVar3 != 0) {
        if (*(iVar3 + 0xd1) != '\0') {
            iVar1 = __msecs_to_jiffies(*(iVar3 + 0x1c) + 3000);
            *(iVar3 + 0x1078) = _del_timer_sync + iVar1;
            add_timer(iVar3 + 0x1068);
        }
        iVar1 = __msecs_to_jiffies(*(iVar3 + 0x18));
        _raw_spin_lock(iVar3 + 0x3cc);
        *(iVar3 + 0xf0) = _del_timer_sync + iVar1;
        add_timer(iVar3 + 0xe0);
        *(iVar3 + 0x3c8) = 0;
        _raw_spin_unlock(iVar3 + 0x3cc);
        if (*(iVar3 + 0x26) == '\0') {
            pcVar4 = *(*(iVar3 + 0x10) + 0x18);
            __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar4,0x80002a0);
            (*pcVar4)(1,iVar3);
            pcVar4 = *(*(iVar3 + 0x10) + 0x10);
            __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar4,0x80002c0);
            (*pcVar4)(iVar3);
            *(iVar3 + 0xd0) = 1;
        }
        else {
            if (*(iVar3 + 0x10a0) != '\0') {
                pcVar4 = **(iVar3 + 0x10);
                __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar4,0x8000220);
                (*pcVar4)(*(iVar3 + 0x1c),iVar3);
                pcVar4 = *(*(iVar3 + 0x10) + 8);
                __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar4,0x8000240);
                (*pcVar4)(*(iVar3 + 0x1c) + 3000,iVar3);
                pcVar4 = *(*(iVar3 + 0x10) + 0x18);
                __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar4,0x8000260);
                (*pcVar4)(3,iVar3);
                *(iVar3 + 0xd0) = 1;
            }
            pcVar4 = *(*(iVar3 + 0x10) + 0x10);
            __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar4,0x8000280);
            (*pcVar4)(iVar3);
        }
        uVar2 = sched_clock();
        *(iVar3 + 0x28) = uVar2;
    }
    return 0;
}


// ===== sym.qcom_wdt_pet_suspend.cfi_jt @ 0x08001310 (size 8) =====

ulong sym.qcom_wdt_pet_suspend.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    if (iVar2 == 0) {
        return 0;
    }
    if (*(iVar2 + 0xd1) != '\0') {
        del_timer_sync(iVar2 + 0x1068);
    }
    _raw_spin_lock(iVar2 + 0x3cc);
    *(iVar2 + 0x3c8) = 1;
    _raw_spin_unlock(iVar2 + 0x3cc);
    pcVar3 = *(*(iVar2 + 0x10) + 0x10);
    __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar3,0x80001c0);
    (*pcVar3)(iVar2);
    del_timer_sync(iVar2 + 0xe0);
    if (*(iVar2 + 0x26) == '\0') {
        uVar1 = 0x8000200;
    }
    else {
        if (*(iVar2 + 0x10a0) == '\0') goto code_r0x08001440;
        uVar1 = 0x80001e0;
    }
    pcVar3 = *(*(iVar2 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar3,uVar1);
    (*pcVar3)(iVar2);
    *(iVar2 + 0xd0) = 0;
code_r0x08001440:
    uVar1 = sched_clock();
    *(iVar2 + 0x28) = uVar1;
    return 0;
}


// ===== sym.qcom_wdt_keep_alive_response.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt @ 0x08001318 (size 8) =====

void sym.qcom_wdt_keep_alive_response.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    code *pcVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = tpidr_el1;
    uVar2 = *(cpu_number + iVar5);
    puVar1 = param_1 + (uVar2 >> 3 & 0x1ffffff8) + 0x30;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = *puVar1 | 1L << (uVar2 & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    uVar7 = sched_clock();
    if (uVar2 < 0x20) {
        *(param_1 + uVar2 * 8 + 0x248) = uVar7;
        DataMemoryBarrier(2,3);
        return;
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8002928);
    (*pcVar6)();
}


// ===== sym.qcom_wdt_bark_handler.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt @ 0x08001320 (size 8) =====

ulong sym.qcom_wdt_bark_handler.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt(ulong param_1,int64_t param_2)

{
    char cVar1;
    uint64_t uVar2;
    uint *puVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *puVar5;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = sched_clock();
    _dev_err(*(param_2 + 8),"QCOM Apps Watchdog bark! Now = %lu.%06lu\n",uVar2 / 1000000000,
             (uVar2 + (uVar2 / 1000000000) * -1000000000) / 1000);
    uVar4 = *(param_2 + 0x28);
    uVar2 = uVar4 / 1000000000;
    *(param_2 + 0x28) = uVar2;
    puVar3 = (uVar4 + uVar2 * -1000000000) / 1000;
    _dev_err(*(param_2 + 8),"QCOM Apps Watchdog last pet at %lu.%06lu\n");
    console_verbose();
    __rcu_read_lock();
    for (puVar5 = *0x800e578; puVar5 != 0x800e578; puVar5 = *puVar5) {
        for (puVar6 = *(puVar5[100] + 0x10); puVar5[100] + 0x10 != puVar6; puVar6 = *puVar6) {
            touch_softlockup_watchdog();
            if (*(puVar6 + -0xce) == 2) {
                sched_show_task(puVar6 + -0xd3);
            }
        }
    }
    __rcu_read_unlock();
    if (*(param_2 + 0x24) == '\0') {
        cVar1 = *(param_2 + 0x3c8);
    }
    else {
        *puVar3 = puVar3;
        scnprintf(del_timer_sync,obj.dev_attr_disable,0x20,"%*pb1");
        _dev_info(*(param_2 + 8),"cpu alive mask from last pet %s\n",obj.dev_attr_disable);
        cVar1 = *(param_2 + 0x3c8);
    }
    if (cVar1 != '\0') {
        _dev_info(*(param_2 + 8),"Suspend in progress\n");
    }
    md_dump_process();
    sym.qcom_wdt_trigger_bite();
    return 1;
}


// ===== sym.qcom_wdt_ppi_bark.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt @ 0x08001328 (size 8) =====

ulong sym.qcom_wdt_ppi_bark.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t noname_0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    noname_0 = tpidr_el1;
    sym.qcom_wdt_bark_handler(noname_0,*(noname_0 + param_2));
    return 1;
}


// ===== sym.restart_wdog_handler.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt @ 0x08001330 (size 8) =====

ulong sym.restart_wdog_handler.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + -0x93) != '\0') {
        _printk(0x800079f);
        sym.qcom_wdt_trigger_bite();
    }
    return 0;
}


// ===== sym.qcom_wdt_cpu_pm_notify.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt @ 0x08001338 (size 8) =====

ulong sym.qcom_wdt_cpu_pm_notify.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    uint uVar4;
    
    iVar2 = tpidr_el1;
    uVar1 = *(cpu_number + iVar2);
    if (param_2 - 1U < 2) {
        if (0x1f < uVar1) {
code_r0x08002d80:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x8002d84);
            (*pcVar3)();
        }
        uVar4 = 0;
    }
    else {
        if (param_2 != 0) {
            return 1;
        }
        if (0x1f < uVar1) goto code_r0x08002d80;
        uVar4 = 1;
    }
    *(param_1 + uVar1 * 4 + 0x2a8) = uVar4;
    return 1;
}


// ===== sym.qcom_wdt_panic_handler.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt @ 0x08001340 (size 8) =====

ulong sym.qcom_wdt_panic_handler.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,int *param_4)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    code *pcVar4;
    int unaff_w21;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = param_1 + -0x70;
    *(param_1 + -0x4b) = 1;
    iVar2 = *(param_1 + -0x60);
    *param_4 = unaff_w21;
    if (unaff_w21 == 0) {
        pcVar4 = *(iVar2 + 0x20);
        __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar4,0x8000420);
        (*pcVar4)(iVar3);
    }
    else {
        pcVar4 = *(iVar2 + 0x10);
        __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar4,0x8000440);
        (*pcVar4)(iVar3);
        pcVar4 = **(param_1 + -0x60);
        __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar4,0x8000460);
        iVar1 = unaff_w21 * 1000 + 10000;
        (*pcVar4)(iVar1,iVar3);
        pcVar4 = *(*(param_1 + -0x60) + 8);
        __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar4,0x8000480);
        (*pcVar4)(iVar1,iVar3);
    }
    return 0;
}


// ===== sym.qcom_wdt_hibernation_notifier.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt @ 0x08001348 (size 8) =====

ulong sym.qcom_wdt_hibernation_notifier.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt(ulong param_1,ulong param_2)

{
    uchar uVar1;
    
    uVar1 = 1;
    switch(param_2) {
    case 1:
        break;
    case 3:
        if ((pm_suspend_global_flags & 1) == 0) {
            return 1;
        }
        uVar1 = 1;
        break;
    case 4:
        if ((pm_suspend_global_flags & 1) == 0) {
            return 1;
        }
    case 2:
        uVar1 = 0;
        break;
    default:
        goto code_r0x08002df8;
    }
    *(_segment.ehdr + 0x10a0) = uVar1;
code_r0x08002df8:
    return 1;
}


// ===== sym.qcom_wdt_die_handler.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt @ 0x08001350 (size 8) =====

ulong sym.qcom_wdt_die_handler.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + -0x88;
    pcVar2 = *(*(param_1 + -0x78) + 0x10);
    __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar2,0x8000440);
    (*pcVar2)(iVar1);
    pcVar2 = **(param_1 + -0x78);
    __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar2,0x8000460);
    (*pcVar2)(15000,iVar1);
    pcVar2 = *(*(param_1 + -0x78) + 8);
    __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar2,0x8000480);
    (*pcVar2)(15000,iVar1);
    return 0;
}


// ===== sym.qcom_wdt_user_pet_bite.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt @ 0x08001358 (size 8) =====

void sym.qcom_wdt_user_pet_bite.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + -0xf37) == '\0') {
        _dev_info(*(param_1 + -0x1060),"QCOM Apps Watchdog user pet timeout!\n");
        sym.qcom_wdt_trigger_bite();
    }
    return;
}


// ===== sym.qcom_wdt_pet_task_wakeup.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt @ 0x08001360 (size 8) =====

void sym.qcom_wdt_pet_task_wakeup.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x50) = 1;
    uVar1 = sched_clock();
    *(param_1 + 0x58) = uVar1;
    __wake_up(param_1 + 0x38,3,1,0);
    return;
}


// ===== sym.qcom_wdt_pet_suspend @ 0x08001368 (size 248) =====

ulong sym.qcom_wdt_pet_suspend(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    if (iVar2 == 0) {
        return 0;
    }
    if (*(iVar2 + 0xd1) != '\0') {
        del_timer_sync(iVar2 + 0x1068);
    }
    _raw_spin_lock(iVar2 + 0x3cc);
    *(iVar2 + 0x3c8) = 1;
    _raw_spin_unlock(iVar2 + 0x3cc);
    pcVar3 = *(*(iVar2 + 0x10) + 0x10);
    __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar3,0x80001c0);
    (*pcVar3)(iVar2);
    del_timer_sync(iVar2 + 0xe0);
    if (*(iVar2 + 0x26) == '\0') {
        uVar1 = 0x8000200;
    }
    else {
        if (*(iVar2 + 0x10a0) == '\0') goto code_r0x08001440;
        uVar1 = 0x80001e0;
    }
    pcVar3 = *(*(iVar2 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar3,uVar1);
    (*pcVar3)(iVar2);
    *(iVar2 + 0xd0) = 0;
code_r0x08001440:
    uVar1 = sched_clock();
    *(iVar2 + 0x28) = uVar1;
    return 0;
}


// ===== sym.qcom_wdt_pet_resume @ 0x08001460 (size 520) =====

ulong sym.qcom_wdt_pet_resume(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x98);
    if (iVar3 != 0) {
        if (*(iVar3 + 0xd1) != '\0') {
            iVar1 = __msecs_to_jiffies(*(iVar3 + 0x1c) + 3000);
            *(iVar3 + 0x1078) = _del_timer_sync + iVar1;
            add_timer(iVar3 + 0x1068);
        }
        iVar1 = __msecs_to_jiffies(*(iVar3 + 0x18));
        _raw_spin_lock(iVar3 + 0x3cc);
        *(iVar3 + 0xf0) = _del_timer_sync + iVar1;
        add_timer(iVar3 + 0xe0);
        *(iVar3 + 0x3c8) = 0;
        _raw_spin_unlock(iVar3 + 0x3cc);
        if (*(iVar3 + 0x26) == '\0') {
            pcVar4 = *(*(iVar3 + 0x10) + 0x18);
            __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar4,0x80002a0);
            (*pcVar4)(1,iVar3);
            pcVar4 = *(*(iVar3 + 0x10) + 0x10);
            __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar4,0x80002c0);
            (*pcVar4)(iVar3);
            *(iVar3 + 0xd0) = 1;
        }
        else {
            if (*(iVar3 + 0x10a0) != '\0') {
                pcVar4 = **(iVar3 + 0x10);
                __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar4,0x8000220);
                (*pcVar4)(*(iVar3 + 0x1c),iVar3);
                pcVar4 = *(*(iVar3 + 0x10) + 8);
                __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar4,0x8000240);
                (*pcVar4)(*(iVar3 + 0x1c) + 3000,iVar3);
                pcVar4 = *(*(iVar3 + 0x10) + 0x18);
                __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar4,0x8000260);
                (*pcVar4)(3,iVar3);
                *(iVar3 + 0xd0) = 1;
            }
            pcVar4 = *(*(iVar3 + 0x10) + 0x10);
            __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar4,0x8000280);
            (*pcVar4)(iVar3);
        }
        uVar2 = sched_clock();
        *(iVar3 + 0x28) = uVar2;
    }
    return 0;
}


// ===== sym.qcom_wdt_remove @ 0x08001668 (size 200) =====

ulong sym.qcom_wdt_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xa8);
    cpu_pm_unregister_notifier(arg1_00 + 0xa0);
    mutex_lock(arg1_00 + 0x38);
    if (*(arg1_00 + 0xd0) != '\0') {
        sym.qcom_wdt_disable(arg1_00);
    }
    mutex_unlock(arg1_00 + 0x38);
    device_remove_file(*(arg1_00 + 8),obj.dev_attr_disable);
    if (*(arg1_00 + 0x27) != '\0') {
        free_percpu(*(arg1_00 + 0x68));
    }
    irq_dispose_mapping(*(arg1_00 + 0x20));
    _dev_info(*(arg1_00 + 8),"QCOM Apps Watchdog Exit - Deactivated\n");
    del_timer_sync(arg1_00 + 0xe0);
    if (*(arg1_00 + 0xd1) != '\0') {
        del_timer_sync(arg1_00 + 0x1068);
    }
    *(arg1_00 + 0x130) = 0x101;
    kthread_stop(*(arg1_00 + 0xd8));
    flush_work(arg1_00 + 0x3d0);
    return 0;
}


// ===== sym.qcom_wdt_disable @ 0x08001730 (size 272) =====

void sym.qcom_wdt_disable(int64_t arg1)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(*(arg1 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar1,0x8000340);
    (*pcVar1)(arg1);
    if (*(arg1 + 0x27) == '\0') {
        devm_free_irq(*(arg1 + 8),*(arg1 + 0x20),arg1);
    }
    else {
        disable_percpu_irq(*(arg1 + 0x20));
        free_percpu_irq(*(arg1 + 0x20),*(arg1 + 0x68));
    }
    *(arg1 + 0xd0) = 0;
    DataMemoryBarrier(2,3);
    atomic_notifier_chain_unregister(panic_notifier_list,arg1 + 0x70);
    unregister_die_notifier(arg1 + 0x88);
    unregister_restart_handler(arg1 + 0xb8);
    del_timer_sync(arg1 + 0xe0);
    if (*(arg1 + 0xd1) != '\0') {
        del_timer_sync(arg1 + 0x1068);
    }
    pcVar1 = *(*(arg1 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar1,0x8000360);
    (*pcVar1)(arg1);
    _dev_err(*(arg1 + 8),"QCOM Apps Watchdog deactivated\n");
    return;
}


// ===== sym.qcom_wdt_trigger_bite @ 0x08001840 (size 276) =====

void sym.qcom_wdt_trigger_bite(void)

{
    bool bVar1;
    ulong *in_x18;
    code *pcVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        return;
    }
    sym.compute_irq_stat(_segment.ehdr + 0x3d0);
    _dev_err(*(_segment.ehdr + 8),"Causing a QCOM Apps Watchdog bite!\n");
    pcVar2 = *(*(_segment.ehdr + 0x10) + 0x28);
    __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar2,0x80002e0);
    (*pcVar2)(_segment.ehdr);
    pcVar2 = *(*(_segment.ehdr + 0x10) + 8);
    __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar2,0x8000300);
    (*pcVar2)(1,_segment.ehdr);
    pcVar2 = *(*(_segment.ehdr + 0x10) + 0x10);
    __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar2,0x8000320);
    (*pcVar2)(_segment.ehdr);
    iVar3 = -10000;
    do {
        __const_udelay(0x418958);
        bVar1 = iVar3 != -1;
        iVar3 = iVar3 + 1;
    } while (bVar1);
    do {
        __const_udelay(0x10c7);
    } while( true );
}


// ===== sym.compute_irq_stat @ 0x08001954 (size 1668) =====

void sym.compute_irq_stat(int64_t arg1)

{
    int *piVar1;
    uint *puVar2;
    uint32_t uVar3;
    uint uVar4;
    int iVar5;
    char cVar6;
    bool bVar7;
    uint32_t uVar8;
    code *pcVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int iVar12;
    int64_t iVar13;
    int64_t iVar14;
    uint64_t uVar15;
    code *in_x3;
    uint64_t extraout_x8;
    int *piVar16;
    int *extraout_x8_00;
    int *extraout_x8_01;
    ulong uVar17;
    int *extraout_x8_02;
    int *piVar18;
    int *extraout_x8_03;
    int *extraout_x8_04;
    int *extraout_x8_05;
    uint64_t extraout_x8_06;
    uint64_t extraout_x8_07;
    uint64_t extraout_x8_08;
    uint64_t extraout_x8_09;
    uint64_t extraout_x8_10;
    uint64_t extraout_x8_11;
    uint64_t uVar19;
    ulong *in_x18;
    int64_t iVar20;
    int *piVar21;
    int *piVar22;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar22 = arg1 + 0xc90;
    Hint_Prefetch(piVar22,2,0,1);
    do {
        iVar12 = *piVar22;
        cVar6 = '\x01';
        bVar7 = ExclusiveMonitorPass(piVar22,0x10);
        if (bVar7) {
            *piVar22 = 1;
            cVar6 = ExclusiveMonitorsStatus();
        }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar12 == 0) {
        __rcu_read_lock();
        *in_x3 = extraout_x8;
        if (0 < extraout_x8) {
            uVar11 = 0;
            iVar12 = 0;
            piVar22 = arg1 + 0x30;
            piVar1 = arg1 + 0x4f0;
            do {
                iVar13 = irq_to_desc(iVar12);
                piVar16 = extraout_x8_00;
                if ((iVar13 != 0) && (uVar10 = kstat_irqs_usr(iVar12), piVar16 = extraout_x8_01, uVar10 != 0)) {
                    if (uVar11 < 10) {
                        iVar20 = uVar11;
                        piVar22[iVar20 * 0x26] = iVar12;
                        (piVar22 + iVar20 * 0x26)[1] = uVar10;
                        uVar17 = 0;
                        if (*(iVar13 + 0x78) != 0) {
                            uVar17 = *(*(iVar13 + 0x78) + 0x50);
                        }
                        *(piVar22 + iVar20 * 0x26 + 0x22) = uVar17;
                        uVar17 = 0;
                        if (*(iVar13 + 0x48) != 0) {
                            uVar17 = *(*(iVar13 + 0x48) + 8);
                        }
                        iVar14 = 0xffffffff;
                        *(piVar22 + iVar20 * 0x26 + 0x24) = uVar17;
                        while( true ) {
                            uVar10 = cpumask_next(iVar14,__cpu_possible_mask);
                            *in_x3 = extraout_x8_02;
                            if (extraout_x8_02 <= uVar10) break;
                            if (0x1f < uVar10) goto code_r0x08001fd4;
                            iVar14 = uVar10;
                            piVar22[iVar20 * 0x26 + iVar14 + 2] = *(*(__per_cpu_offset + iVar14 * 8) + *(iVar13 + 0x68))
                            ;
                        }
                        uVar11 = uVar11 + 1;
                        piVar16 = extraout_x8_02;
                        if (uVar11 == 10) {
                            in_x3 = sym.__typeid__ZTSFiPKvS0_E_global_addr;
                            uVar11 = 10;
                            sort(piVar22,10,0x98,sym.__typeid__ZTSFiPKvS0_E_global_addr,
                                 sym.swap_irq_info_fn.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt);
                            piVar16 = extraout_x8_03;
                        }
                    }
                    else {
                        uVar15 = 10;
                        piVar16 = piVar22;
                        do {
                            piVar18 = piVar16 + (uVar15 >> 1) * 0x26;
                            uVar3 = piVar18[1];
                            uVar8 = uVar10;
                            if (uVar10 == uVar3) break;
                            uVar19 = uVar15 - (uVar10 < uVar3);
                            piVar21 = piVar18 + 0x26;
                            if (uVar10 >= uVar3) {
                                piVar21 = piVar16;
                            }
                            uVar15 = uVar19 >> 1;
                            piVar16 = piVar21;
                            uVar8 = uVar3;
                        } while (1 < uVar19);
                        piVar16 = NULL;
                        if (piVar18 != NULL) {
                            piVar16 = piVar18 + 0x26;
                            if (arg1 + 0x588U <= piVar18) {
                                piVar16 = NULL;
                            }
                            if (uVar10 <= uVar8) {
                                piVar18 = piVar16;
                            }
                            piVar16 = piVar1;
                            piVar21 = piVar1;
                            if ((piVar18 <= piVar1 && piVar18 != NULL) && piVar18 < arg1 + 0x588U) {
                                do {
                                    memcpy(piVar21 + 0x26,piVar21,0x98);
                                    piVar21 = piVar21 + -0x26;
                                    piVar16 = extraout_x8_04;
                                } while (piVar18 <= piVar21);
                            }
                            if (piVar18 != NULL) {
                                *piVar18 = iVar12;
                                piVar18[1] = uVar10;
                                uVar17 = 0;
                                if (*(iVar13 + 0x78) != 0) {
                                    uVar17 = *(*(iVar13 + 0x78) + 0x50);
                                }
                                *(piVar18 + 0x22) = uVar17;
                                uVar17 = 0;
                                if (*(iVar13 + 0x48) != 0) {
                                    uVar17 = *(*(iVar13 + 0x48) + 8);
                                }
                                iVar20 = 0xffffffff;
                                *(piVar18 + 0x24) = uVar17;
                                while( true ) {
                                    uVar10 = cpumask_next(iVar20,__cpu_possible_mask);
                                    *in_x3 = extraout_x8_05;
                                    piVar16 = extraout_x8_05;
                                    if (extraout_x8_05 <= uVar10) break;
                                    if (0x1f < uVar10) goto code_r0x08001fd4;
                                    iVar20 = uVar10;
                                    piVar18[iVar20 + 2] = *(*(__per_cpu_offset + iVar20 * 8) + *(iVar13 + 0x68));
                                }
                            }
                        }
                    }
                }
                *in_x3 = piVar16;
                iVar12 = iVar12 + 1;
            } while (iVar12 < piVar16);
        }
        __rcu_read_unlock();
        uVar15 = cpumask_next(0xffffffff,__cpu_possible_mask);
        *in_x3 = extraout_x8_06;
        if (uVar15 < extraout_x8_06) {
            do {
                if (0x1f < uVar15) goto code_r0x08001fd4;
                *(arg1 + 0xc10 + (uVar15 & 0xffffffff) * 4) = *(kstat + *(__per_cpu_offset + (uVar15 & 0xffffffff) * 8))
                ;
                uVar15 = cpumask_next(uVar15,__cpu_possible_mask);
                *in_x3 = extraout_x8_07;
            } while (uVar15 < extraout_x8_07);
        }
        uVar11 = nr_ipi_get();
        iVar13 = ipi_desc_get();
        if (0 < uVar11) {
            uVar15 = 0;
            iVar20 = arg1 + 0x620;
            do {
                if (uVar15 == 10) goto code_r0x08001fd4;
                *(iVar20 + uVar15 * 0x98) = uVar15;
                piVar22 = iVar20 + uVar15 * 0x98 + 4;
                *piVar22 = 0;
                uVar4 = *(*(iVar13 + uVar15 * 8) + 0x34);
                uVar10 = cpumask_next(0xffffffff,__cpu_possible_mask);
                *in_x3 = extraout_x8_08;
                if (uVar10 < extraout_x8_08) {
                    do {
                        iVar12 = kstat_irqs_cpu(uVar4,uVar10);
                        if (0x1f < uVar10) goto code_r0x08001fd4;
                        iVar5 = *piVar22;
                        *(iVar20 + uVar15 * 0x98 + uVar10 * 4 + 8) = iVar12;
                        *piVar22 = iVar5 + iVar12;
                        uVar10 = cpumask_next(uVar10,__cpu_possible_mask);
                        *in_x3 = extraout_x8_09;
                    } while (uVar10 < extraout_x8_09);
                }
                uVar15 = uVar15 + 1;
            } while (uVar15 != uVar11);
        }
        _printk(0x800074d);
        iVar13 = 0;
        do {
            iVar20 = arg1 + iVar13;
            if (*(iVar20 + 0xb8) == 0) {
                _printk(0x80007b7,*(iVar20 + 0x30),*(iVar20 + 0x34));
            }
            else {
                in_x3 = *(iVar20 + 0x30);
                pcVar9 = *(iVar20 + 0x34);
                if (*(iVar20 + 0xc0) == 0) {
                    _printk(0x80008c6,*(iVar20 + 0xb8),in_x3);
                    in_x3 = pcVar9;
                }
                else {
                    _printk(0x80006a9);
                }
            }
            iVar13 = iVar13 + 0x98;
        } while (iVar13 != 0x5f0);
        _printk(0x800080f);
        _printk(0x800078b);
        uVar11 = cpumask_next(0xffffffff,__cpu_possible_mask);
        *in_x3 = extraout_x8_10;
        if (uVar11 < extraout_x8_10) {
            do {
                uVar15 = uVar11;
                if (0x1f < uVar11) goto code_r0x08001fd4;
                _printk(0x80007b7,uVar15,*(arg1 + uVar15 * 4 + 0xc10));
                uVar11 = cpumask_next(uVar15,__cpu_possible_mask);
                *in_x3 = extraout_x8_11;
            } while (uVar11 < extraout_x8_11);
        }
        _printk(0x800080f);
        _printk(0x800085b);
        iVar12 = nr_ipi_get();
        if (((((0 < iVar12) && (_printk(0x80007b7,*(arg1 + 0x620),*(arg1 + 0x624)), iVar12 != 1)) &&
             (_printk(0x80007b7,*(arg1 + 0x6b8),*(arg1 + 0x6bc)), iVar12 != 2)) &&
            ((((_printk(0x80007b7,*(arg1 + 0x750),*(arg1 + 0x754)), iVar12 != 3 &&
               (_printk(0x80007b7,*(arg1 + 0x7e8),*(arg1 + 0x7ec)), iVar12 != 4)) &&
              ((_printk(0x80007b7,*(arg1 + 0x880),*(arg1 + 0x884)), iVar12 != 5 &&
               ((_printk(0x80007b7,*(arg1 + 0x918),*(arg1 + 0x91c)), iVar12 != 6 &&
                (_printk(0x80007b7,*(arg1 + 0x9b0),*(arg1 + 0x9b4)), iVar12 != 7)))))) &&
             (_printk(0x80007b7,*(arg1 + 0xa48),*(arg1 + 0xa4c)), iVar12 != 8)))) &&
           (((_printk(0x80007b7,*(arg1 + 0xae0),*(arg1 + 0xae4)), iVar12 != 9 &&
             (_printk(0x80007b7,*(arg1 + 0xb78),*(arg1 + 0xb7c)), iVar12 != 10)) &&
            (_printk(0x80007b7,*(arg1 + 0xc10),*(arg1 + 0xc14)), iVar12 != 0xb)))) {
code_r0x08001fd4:
    //WARNING: Does not return
            pcVar9 = SoftwareBreakpoint(0x5512,0x8001fd8);
            (*pcVar9)();
        }
        _printk(0x800080f);
        puVar2 = arg1 + 0xc90;
        Hint_Prefetch(puVar2,2,0,1);
        do {
            cVar6 = '\x01';
            bVar7 = ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
                *puVar2 = 0;
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        DataMemoryBarrier(2,3);
    }
    return;
}


// ===== sym.show_state_filter_wdt @ 0x08002000 (size 164) =====

void sym.show_state_filter_wdt(int64_t arg1)

{
    ulong *in_x18;
    ulong *puVar1;
    ulong *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __rcu_read_lock();
    for (puVar1 = *0x800e578; puVar1 != 0x800e578; puVar1 = *puVar1) {
        for (puVar2 = *(puVar1[100] + 0x10); puVar1[100] + 0x10 != puVar2; puVar2 = *puVar2) {
            touch_softlockup_watchdog();
            if (*(puVar2 + -0xce) == arg1) {
                sched_show_task(puVar2 + -0xd3);
            }
        }
    }
    __rcu_read_unlock();
    return;
}


// ===== sym.qcom_wdt_register @ 0x080020b4 (size 1476) =====

uint64_t sym.qcom_wdt_register(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    code *pcVar9;
    uint uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar11;
    int64_t iVar12;
    ulong *puVar13;
    ulong *puVar14;
    code *pcVar15;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    iStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    iStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        _printk(0x8000536);
        uVar6 = 0xffffffea;
        pcVar9 = arg3;
        goto code_r0x08002278;
    }
    uVar5 = platform_get_irq(arg1,0);
    *(arg2 + 0x20) = uVar5;
    uVar1 = irq_check_status_bit(uVar5,0x200);
    *(arg2 + 0x18) = 0x4e2000003a98;
    *(arg2 + 0x24) = 1;
    *(arg2 + 0x27) = uVar1 & 1;
    *(arg2 + 0x26) = 1;
    _dev_err(*(arg2 + 8),"wdog bark_time %d",20000);
    _dev_err(*(arg2 + 8),"wdog pet_time %d",*(arg2 + 0x18));
    pcVar9 = 0xffffffff;
    _segment.ehdr = arg2;
    *(arg2 + 8) = arg1 + 0x10;
    *(arg1 + 0xa8) = arg2;
    *(arg2 + 0x30) = 0;
    uVar6 = kthread_create_on_node(sym.qcom_wdt_kthread.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt,arg2,0xffffffff,arg3)
    ;
    *(arg2 + 0xd8) = uVar6;
    if (0xfffffffffffff000 < uVar6) goto code_r0x08002278;
    if (*(arg2 + 0x27) == '\0') {
        pcVar9 = sym.qcom_wdt_bark_handler.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt;
        uVar2 = devm_request_threaded_irq
                          (*(arg2 + 8),*(arg2 + 0x20),
                           sym.qcom_wdt_bark_handler.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt,0,0x4001,
                           "apps_wdog_bark",arg2);
        if (uVar2 == 0) {
code_r0x08002250:
            *(_segment.ehdr + 0x10a0) = 0;
            uVar7 = register_pm_notifier(reloc.qcom_wdt_hibernation_notifier.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt);
            uVar6 = uVar7 & 0xffffffff;
            if (uVar7 == 0) {
                *(arg2 + 0x3d0) = 0xfffffffe0;
                *(arg2 + 0x3d8) = arg2 + 0x3d8;
                *(arg2 + 0x3e0) = arg2 + 0x3d8;
                *(arg2 + 1000) = sym.compute_irq_stat.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt;
                *(arg2 + 0x1060) = 0;
                iVar12 = __msecs_to_jiffies(*(arg2 + 0x18));
                pcVar9 = **(arg2 + 0x10);
                __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar9,0x80003a0);
                (*pcVar9)(*(arg2 + 0x1c),arg2);
                pcVar9 = *(*(arg2 + 0x10) + 8);
                __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar9,0x80003c0);
                (*pcVar9)(*(arg2 + 0x1c) + 10000,arg2);
                puVar11 = arg2 + 0x70;
                *puVar11 = sym.qcom_wdt_panic_handler.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt;
                *(arg2 + 0x80) = 0x7ffffffe;
                atomic_notifier_chain_register(panic_notifier_list,puVar11);
                *(arg2 + 0x98) = 0x7ffffffe;
                puVar13 = arg2 + 0x88;
                *puVar13 = sym.qcom_wdt_die_handler.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt;
                register_die_notifier(puVar13);
                puVar14 = arg2 + 0xb8;
                *puVar14 = sym.restart_wdog_handler.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt;
                *(arg2 + 200) = 0xff;
                register_restart_handler(puVar14);
                __mutex_init(arg2 + 0x38,"&wdog_dd->disable_lock",obj.dev_attr_disable);
                __init_waitqueue_head(arg2 + 0x118,"&wdog_dd->pet_complete",obj.dev_attr_disable);
                *(arg2 + 0xd1) = 0;
                *(arg2 + 0x3cc) = 0;
                *(arg2 + 0x130) = 0x100;
                *(arg2 + 0x3c8) = 0;
                wake_up_process(*(arg2 + 0xd8));
                iVar8 = arg2 + 0xe0;
                init_timer_key(iVar8,sym.qcom_wdt_pet_task_wakeup.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt,0,0,0);
                *(arg2 + 0xf0) = _del_timer_sync + iVar12;
                add_timer(iVar8);
                init_timer_key(arg2 + 0x1068,sym.qcom_wdt_user_pet_bite.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt,0,0,
                               0);
                pcVar15 = *(*(arg2 + 0x10) + 0x18);
                pcVar9 = 0x80003e0;
                uVar10 = 3;
                if (*(arg2 + 0x26) == '\0') {
                    uVar10 = 1;
                }
                __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar15,0x80003e0);
                uVar2 = (*pcVar15)(uVar10,arg2);
                if (uVar2 == 0) {
                    pcVar9 = *(*(arg2 + 0x10) + 0x10);
                    __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar9,0x8000400);
                    (*pcVar9)(arg2);
                    uVar5 = sched_clock();
                    *(arg2 + 0x28) = uVar5;
                    *(arg2 + 0xd0) = 1;
                    iVar4 = device_create_file(*(arg2 + 8),obj.dev_attr_disable);
                    iVar3 = device_create_file(*(arg2 + 8),obj.dev_attr_wakeup_enable);
                    if (iVar3 != 0 || iVar4 != 0) {
                        _dev_err(*(arg2 + 8),"cannot create sysfs attribute\n");
                    }
                    if (*(arg2 + 0x27) != '\0') {
                        enable_percpu_irq(*(arg2 + 0x20),0);
                    }
                    *(arg2 + 0xa0) = sym.qcom_wdt_cpu_pm_notify.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt;
                    cpu_pm_register_notifier();
                    _dev_info(*(arg2 + 8),"QCOM Apps Watchdog Initialized\n");
                    pcVar9 = 0xd;
                    strlcpy(&stack0xffffffffffffff78,"KWDOGDATA",0xd);
                    iVar8 = (arg2 << 8) >> 8;
                    uVar6 = iVar8 + 0x8000000000;
                    iStack_68 = ___msecs_to_jiffies + uVar6;
                    if (uVar6 >> 0x26 != 0) {
                        iStack_68 = iVar8 - _cpu_pm_unregister_notifier;
                    }
                    uStack_60 = 0x10a8;
                    iStack_70 = arg2;
                    iVar4 = msm_minidump_add_region(&stack0xffffffffffffff78);
                    if (iVar4 < 0) {
                        _dev_err(*(arg2 + 8),"Failed to add Wdt data in Minidump\n");
                    }
                    uVar6 = 0;
                    goto code_r0x08002278;
                }
                uVar6 = uVar2;
                atomic_notifier_chain_unregister(panic_notifier_list,puVar11);
                unregister_die_notifier(puVar13);
                unregister_restart_handler(puVar14);
                if (*(arg2 + 0x27) != '\0') {
                    free_percpu_irq(*(arg2 + 0x20),*(arg2 + 0x68));
                    free_percpu(*(arg2 + 0x68));
                }
                del_timer_sync(iVar8);
                flush_work(arg2 + 0x3d0);
                _dev_err(*(arg2 + 8),"Failed Initializing QCOM Apps Watchdog\n");
            }
        }
        else {
            pcVar9 = uVar2;
            _dev_err(*(arg2 + 8),"failed to request bark irq: %d\n",pcVar9);
            uVar6 = 0xffffffea;
        }
    }
    else {
        iVar8 = __alloc_percpu(8,8);
        *(arg2 + 0x68) = iVar8;
        if (iVar8 == 0) {
            _dev_err(*(arg2 + 8),"failed to allocate cpu data\n");
            uVar6 = 0xfffffff4;
        }
        else {
            iVar12 = tpidr_el1;
            *(iVar12 + iVar8) = arg2;
            pcVar9 = NULL;
            uVar2 = __request_percpu_irq
                              (*(arg2 + 0x20),sym.qcom_wdt_ppi_bark.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt,0,
                               "apps_wdog_bark",*(arg2 + 0x68));
            if (uVar2 == 0) goto code_r0x08002250;
            uVar6 = uVar2;
            _dev_err(*(arg2 + 8),"failed to request bark irq\n");
            free_percpu(*(arg2 + 0x68));
        }
    }
    kthread_stop(*(arg2 + 0xd8));
code_r0x08002278:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_58) {
        iVar8 = __stack_chk_fail();
        uVar5 = tpidr_el2;
        *extraout_x18 = 0x8002674;
        iVar12 = *(iVar8 + 0x98);
        iVar8 = iVar12 + 0x38;
        mutex_lock(uVar5,iVar8);
        iVar4 = scnprintf(pcVar9,0x1000,0x8000749,*(iVar12 + 0xd0) ^ 1);
        mutex_unlock(iVar8);
        return iVar4;
    }
    return uVar6 & 0xffffffff;
}


// ===== sym.qcom_wdt_disable_get @ 0x08002678 (size 112) =====

int64_t sym.qcom_wdt_disable_get(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x98);
    iVar1 = iVar3 + 0x38;
    mutex_lock(iVar1);
    iVar2 = scnprintf(arg2,0x1000,0x8000749,*(iVar3 + 0xd0) ^ 1);
    mutex_unlock(iVar1);
    return iVar2;
}


// ===== sym.qcom_wdt_disable_set @ 0x080026e8 (size 280) =====

uint64_t sym.qcom_wdt_disable_set(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    char acStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iVar5 = *(arg1 + 0x98);
    acStack_3c[0] = '\0';
    iVar4 = kstrtou8(arg2,10,acStack_3c);
    if (iVar4 == 0) {
        if (acStack_3c[0] == '\x01') {
            mutex_lock(iVar5 + 0x38);
            if (*(iVar5 + 0xd0) == '\0') {
                _dev_err(*(iVar5 + 8),"MSM Apps Watchdog already disabled\n");
            }
            else {
                iVar4 = qcom_scm_sec_wdog_deactivate();
                if (iVar4 != 0) {
                    _dev_err(*(iVar5 + 8),"Failed to deactivate secure wdog, ret = %d\n",iVar4);
                }
                sym.qcom_wdt_disable(iVar5);
            }
            mutex_unlock(iVar5 + 0x38);
        }
        else {
            _printk(0x8000895);
            arg3 = 0xffffffffffffffea;
        }
    }
    else {
        _dev_err(*(iVar5 + 8),"invalid user input\n");
        arg3 = iVar4;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return arg3;
    }
    auVar6 = __stack_chk_fail();
    uVar2 = *(auVar6._0_8_ + 4);
    uVar3 = *(auVar6._8_8_ + 4);
    uVar1 = -(uVar3 < uVar2);
    if (uVar2 < uVar3) {
        uVar1 = 1;
    }
    return uVar1;
}


// ===== sym.cmp_irq_info_fn @ 0x08002800 (size 32) =====

int sym.cmp_irq_info_fn(int64_t arg1,int64_t arg2)

{
    int iVar1;
    
    iVar1 = -(*(arg2 + 4) < *(arg1 + 4));
    if (*(arg1 + 4) < *(arg2 + 4)) {
        iVar1 = 1;
    }
    return iVar1;
}


// ===== sym.swap_irq_info_fn @ 0x08002820 (size 140) =====

void sym.swap_irq_info_fn(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    code *pcVar6;
    int64_t iVar7;
    ulong uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auStack_c0 [152];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    memcpy(auStack_c0,arg1,0x98);
    memcpy(arg1,arg2,0x98);
    memcpy(arg2,auStack_c0,0x98);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_wdt_keep_alive_response;
    iVar5 = tpidr_el1;
    uVar2 = *(cpu_number + iVar5);
    puVar1 = iVar7 + (uVar2 >> 3 & 0x1ffffff8) + 0x30;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = *puVar1 | 1L << (uVar2 & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    uVar8 = sched_clock();
    if (uVar2 < 0x20) {
        *(iVar7 + uVar2 * 8 + 0x248) = uVar8;
        DataMemoryBarrier(2,3);
        return;
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8002928);
    (*pcVar6)();
}


// ===== sym.qcom_wdt_keep_alive_response @ 0x080028ac (size 164) =====

void sym.qcom_wdt_keep_alive_response(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    code *pcVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = tpidr_el1;
    uVar2 = *(cpu_number + iVar5);
    puVar1 = arg1 + (uVar2 >> 3 & 0x1ffffff8) + 0x30;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = *puVar1 | 1L << (uVar2 & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    uVar7 = sched_clock();
    if (uVar2 < 0x20) {
        *(arg1 + uVar2 * 8 + 0x248) = uVar7;
        DataMemoryBarrier(2,3);
        return;
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8002928);
    (*pcVar6)();
}


// ===== sym.qcom_wdt_ppi_bark @ 0x08002950 (size 48) =====

ulong sym.qcom_wdt_ppi_bark(int64_t arg1)

{
    int64_t noname_0;
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    noname_0 = tpidr_el1;
    sym.qcom_wdt_bark_handler(noname_0,*(noname_0 + in_x1));
    return 1;
}


// ===== sym.qcom_wdt_bark_handler @ 0x08002984 (size 408) =====

ulong sym.qcom_wdt_bark_handler(ulong noname_0,int64_t arg1)

{
    char cVar1;
    uint64_t uVar2;
    uint *puVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *puVar5;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = sched_clock();
    _dev_err(*(arg1 + 8),"QCOM Apps Watchdog bark! Now = %lu.%06lu\n",uVar2 / 1000000000,
             (uVar2 + (uVar2 / 1000000000) * -1000000000) / 1000);
    uVar4 = *(arg1 + 0x28);
    uVar2 = uVar4 / 1000000000;
    *(arg1 + 0x28) = uVar2;
    puVar3 = (uVar4 + uVar2 * -1000000000) / 1000;
    _dev_err(*(arg1 + 8),"QCOM Apps Watchdog last pet at %lu.%06lu\n");
    console_verbose();
    __rcu_read_lock();
    for (puVar5 = *0x800e578; puVar5 != 0x800e578; puVar5 = *puVar5) {
        for (puVar6 = *(puVar5[100] + 0x10); puVar5[100] + 0x10 != puVar6; puVar6 = *puVar6) {
            touch_softlockup_watchdog();
            if (*(puVar6 + -0xce) == 2) {
                sched_show_task(puVar6 + -0xd3);
            }
        }
    }
    __rcu_read_unlock();
    if (*(arg1 + 0x24) == '\0') {
        cVar1 = *(arg1 + 0x3c8);
    }
    else {
        *puVar3 = puVar3;
        scnprintf(del_timer_sync,obj.dev_attr_disable,0x20,"%*pb1");
        _dev_info(*(arg1 + 8),"cpu alive mask from last pet %s\n",obj.dev_attr_disable);
        cVar1 = *(arg1 + 0x3c8);
    }
    if (cVar1 != '\0') {
        _dev_info(*(arg1 + 8),"Suspend in progress\n");
    }
    md_dump_process();
    sym.qcom_wdt_trigger_bite();
    return 1;
}


// ===== sym.qcom_wdt_panic_handler @ 0x08002b2c (size 288) =====

ulong sym.qcom_wdt_panic_handler(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    code *pcVar4;
    int unaff_w21;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = arg1 + -0x70;
    *(arg1 + -0x4b) = 1;
    iVar2 = *(arg1 + -0x60);
    *arg2 = unaff_w21;
    if (unaff_w21 == 0) {
        pcVar4 = *(iVar2 + 0x20);
        __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar4,0x8000420);
        (*pcVar4)(iVar3);
    }
    else {
        pcVar4 = *(iVar2 + 0x10);
        __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar4,0x8000440);
        (*pcVar4)(iVar3);
        pcVar4 = **(arg1 + -0x60);
        __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar4,0x8000460);
        iVar1 = unaff_w21 * 1000 + 10000;
        (*pcVar4)(iVar1,iVar3);
        pcVar4 = *(*(arg1 + -0x60) + 8);
        __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar4,0x8000480);
        (*pcVar4)(iVar1,iVar3);
    }
    return 0;
}


// ===== sym.restart_wdog_handler @ 0x08002c4c (size 64) =====

ulong sym.restart_wdog_handler(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + -0x93) != '\0') {
        _printk(0x800079f);
        sym.qcom_wdt_trigger_bite();
    }
    return 0;
}


// ===== sym.qcom_wdt_pet_task_wakeup @ 0x08002c8c (size 84) =====

void sym.qcom_wdt_pet_task_wakeup(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x50) = 1;
    uVar1 = sched_clock();
    *(arg1 + 0x58) = uVar1;
    __wake_up(arg1 + 0x38,3,1,0);
    return;
}


// ===== sym.qcom_wdt_user_pet_bite @ 0x08002ce0 (size 72) =====

void sym.qcom_wdt_user_pet_bite(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + -0xf37) == '\0') {
        _dev_info(*(arg1 + -0x1060),"QCOM Apps Watchdog user pet timeout!\n");
        sym.qcom_wdt_trigger_bite();
    }
    return;
}


// ===== sym.qcom_wdt_cpu_pm_notify @ 0x08002d28 (size 92) =====

ulong sym.qcom_wdt_cpu_pm_notify(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    uint uVar4;
    
    iVar2 = tpidr_el1;
    uVar1 = *(cpu_number + iVar2);
    if (arg2 - 1U < 2) {
        if (0x1f < uVar1) {
code_r0x08002d80:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x8002d84);
            (*pcVar3)();
        }
        uVar4 = 0;
    }
    else {
        if (arg2 != 0) {
            return 1;
        }
        if (0x1f < uVar1) goto code_r0x08002d80;
        uVar4 = 1;
    }
    *(arg1 + uVar1 * 4 + 0x2a8) = uVar4;
    return 1;
}


// ===== sym.qcom_wdt_hibernation_notifier @ 0x08002d88 (size 124) =====

ulong sym.qcom_wdt_hibernation_notifier(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    
    if (arg2 - 1U < 4) {
        uVar1 = 1;
    //switch table (4 cases) at 0x80004c0
        switch(*(arg2 + 0x80004bf) * 4 + 0x8002db4) {
        case 0x8002db8:
            if ((pm_suspend_global_flags & 1) == 0) {
                return 1;
            }
            uVar1 = 1;
            break;
        case 0x8002dd0:
            if ((pm_suspend_global_flags & 1) == 0) {
                return 1;
            }
        case 0x8002de0:
            uVar1 = 0;
        }
        *(_segment.ehdr + 0x10a0) = uVar1;
    }
    return 1;
}


// ===== sym.qcom_wdt_die_handler @ 0x08002e04 (size 212) =====

ulong sym.qcom_wdt_die_handler(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + -0x88;
    pcVar2 = *(*(arg1 + -0x78) + 0x10);
    __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar2,0x8000440);
    (*pcVar2)(iVar1);
    pcVar2 = **(arg1 + -0x78);
    __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar2,0x8000460);
    (*pcVar2)(15000,iVar1);
    pcVar2 = *(*(arg1 + -0x78) + 8);
    __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar2,0x8000480);
    (*pcVar2)(15000,iVar1);
    return 0;
}


// ===== sym.wakeup_enable_show @ 0x08002ed8 (size 68) =====

int64_t sym.wakeup_enable_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000749,*(*(arg1 + 0x98) + 0x26));
    return iVar1;
}


// ===== sym.wakeup_enable_store @ 0x08002f1c (size 300) =====

uchar * sym.wakeup_enable_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uchar *puVar2;
    uint uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    code *pcVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint8_t auStack_4c [4];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iVar4 = *(arg1 + 0x98);
    auStack_4c[0] = 0;
    iVar1 = kstrtou8(arg2,10,auStack_4c);
    if ((iVar1 == 0) && (auStack_4c[0] < 2)) {
        mutex_lock(iVar4 + 0x38);
        *(iVar4 + 0x26) = auStack_4c[0] != 0;
        if (*(iVar4 + 0xd0) != '\0') {
            pcVar5 = *(*(iVar4 + 0x10) + 0x18);
            uVar3 = 3;
            if (auStack_4c[0] == 0) {
                uVar3 = 1;
            }
            __cfi_slowpath_diag(0xe6e993d2e1f9204,pcVar5,0x80004a0);
            (*pcVar5)(uVar3,iVar4);
        }
        mutex_unlock(iVar4 + 0x38);
    }
    else {
        _dev_err(*(iVar4 + 8),"invalid user input\n");
        if (iVar1 == 0) {
            iVar1 = -0x16;
        }
        arg3 = iVar1;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_48) {
        auVar6 = __stack_chk_fail();
        puVar2 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar2 != NULL) {
            switch(*puVar2) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar2,auVar6._8_8_,0);
                break;
            default:
                return puVar2;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5502,0x80030a0);
        (*pcVar5)();
    }
    return arg3;
}


// ===== sym.__cfi_check_fail @ 0x08003048 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800308c

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
    //switch table (4 cases) at 0x80004c4
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80030a0);
    (*pcVar1)();
}


// ===== sym.qcom_wdt_kthread @ 0x08003108 (size 756) =====

//WARNING: Control flow encountered bad instruction data

ulong sym.qcom_wdt_kthread(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    uint32_t *in_x3;
    char cVar7;
    uint32_t extraout_w8;
    ulong *in_x18;
    uint32_t unaff_w25;
    ulong unaff_x30;
    int64_t iStack_a8;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint auStack_70 [2];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    uVar6 = sp_el0;
    auStack_70[0] = 99;
    sched_setscheduler(uVar6,1,auStack_70);
    uVar4 = kthread_should_stop();
    if ((uVar4 & 1) == 0) {
        iVar1 = arg1 + 0x118;
        iStack_a8 = 0;
        do {
            cVar7 = *(arg1 + 0x130);
            while (cVar7 == '\0') {
                uStack_80 = 0;
                uStack_78 = 0;
                uStack_90 = 0;
                uStack_88 = 0;
                uStack_98 = 0;
                init_wait_entry(&uStack_98,0);
                while( true ) {
                    iVar5 = prepare_to_wait_event(iVar1,&uStack_98,1);
                    if (*(arg1 + 0x130) != '\0') {
                        finish_wait(iVar1,&uStack_98);
                        goto code_r0x08003258;
                    }
                    if (iVar5 != 0) break;
                    schedule();
                }
                cVar7 = '\0';
                if (iVar5 == 0) break;
            }
code_r0x08003258:
            uVar6 = sched_clock();
            *(arg1 + 0x140) = uVar6;
            iVar5 = 0xffffffff;
            while( true ) {
                uVar3 = cpumask_next(iVar5,__cpu_present_mask);
                *in_x3 = extraout_w8;
                if (extraout_w8 <= uVar3) break;
                if (0x1f < uVar3) goto code_r0x080033f0;
                iVar5 = uVar3;
                *(arg1 + 0x248 + iVar5 * 8) = 0;
                *(arg1 + 0x148 + iVar5 * 8) = 0;
            }
            if (*(arg1 + 0x24) != '\0') {
                *(arg1 + 0x30) = 0;
                uVar3 = 0xffffffff;
                DataMemoryBarrier(2,3);
                *in_x3 = unaff_w25;
                while (uVar3 = cpumask_next(uVar3,__cpu_online_mask), uVar3 < unaff_w25) {
                    if (0x1f < uVar3) {
code_r0x080033f0:
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x5512,0x80033f4);
                        (*pcVar2)();
                    }
                    if (*(arg1 + uVar3 * 4 + 0x348) == 0) {
                        uVar6 = sched_clock();
                        in_x3 = 0x1;
                        *(arg1 + uVar3 * 8 + 0x148) = uVar6;
                        smp_call_function_single
                                  (uVar3,sym.qcom_wdt_keep_alive_response.96f2afadbd7ab5806d208c98c89c60ad.cfi_jt,arg1
                                  );
                        *in_x3 = unaff_w25;
                    }
                }
            }
            cVar7 = *(arg1 + 0x131);
            while (cVar7 == '\0') {
                uStack_80 = 0;
                uStack_78 = 0;
                uStack_90 = 0;
                uStack_88 = 0;
                uStack_98 = 0;
                init_wait_entry(&uStack_98,0);
                while( true ) {
                    iVar5 = prepare_to_wait_event(iVar1,&uStack_98,1);
                    if (*(arg1 + 0x131) != '\0') {
                        finish_wait(iVar1,&uStack_98);
                        goto code_r0x08003364;
                    }
                    if (iVar5 != 0) break;
                    schedule();
                }
                cVar7 = '\0';
                if (iVar5 == 0) break;
            }
code_r0x08003364:
            *(arg1 + 0x130) = 0;
            *(arg1 + 0x131) = *(arg1 + 0xd1) ^ 1;
            if (*(arg1 + 0xd0) != '\0') {
                iStack_a8 = __msecs_to_jiffies(*(arg1 + 0x18));
                pcVar2 = *(*(arg1 + 0x10) + 0x10);
                __cfi_slowpath_diag(0x30111ff2ee80e047,pcVar2,0x8000380);
                (*pcVar2)(arg1);
                uVar6 = sched_clock();
                *(arg1 + 0x28) = uVar6;
            }
            uVar4 = kthread_should_stop();
            if ((uVar4 & 1) == 0) {
                _raw_spin_lock(arg1 + 0x3cc);
                if (*(arg1 + 0x3c8) == '\0') {
                    mod_timer(arg1 + 0xe0,_del_timer_sync + iStack_a8);
                }
                _raw_spin_unlock(arg1 + 0x3cc);
            }
            queue_work_on(0x20,_free_percpu,arg1 + 0x3d0);
            uVar4 = kthread_should_stop();
        } while ((uVar4 & 1) == 0);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return 0;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    //[23] -r-- section size 192 named .modinfo
    halt_baddata();
}

