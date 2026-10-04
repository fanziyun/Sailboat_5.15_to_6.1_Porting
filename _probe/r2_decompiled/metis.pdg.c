// decompiled from metis by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08005000 (size 3416) =====

//WARNING: Switch with 1 destination removed at 0x08008a9c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x18928d58faff3b35) {
        if (arg1 < -0x2ee7a8f462803124) {
            if (arg1 < -0x550b9e52359ac614) {
                if (arg1 < -0x66e7b71a0df6633c) {
                    if (arg1 < -0x7283fcec77539740) {
                        if (arg1 != -0x7e6780a33a19801d) {
                            if (arg1 != -0x7946ee14de9d94fb) goto code_r0x08008a5c;
                            pcVar2 = sym.unregister_rvh_mi_try_to_wake_up.cfi_jt;
code_r0x08005d2c:
                            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 6) {
                                return;
                            }
                            goto code_r0x08008a5c;
                        }
                        pcVar2 = sym.mi_set_cpus_allowed_comm.cfi_jt;
                    }
                    else if (arg1 == -0x7283fcec77539740) {
                        pcVar2 = sym.register_game_enqueue_hooks.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x6b278c79305abfb8) goto code_r0x08008a5c;
                        pcVar2 = sym.mi_sched_setaffinity.cfi_jt;
                    }
                }
                else if (arg1 < -0x6251978493c0a9c3) {
                    if (arg1 == -0x66e7b71a0df6633c) {
                        pcVar2 = sym.__typeid__ZTSFPivE_global_addr;
                    }
                    else {
                        if (arg1 != -0x63da5167d048b4db) goto code_r0x08008a5c;
                        pcVar2 = sym.mi_pick_next_task_fair_hook.cfi_jt;
                    }
                }
                else {
                    if (arg1 == -0x6251978493c0a9c3) {
                        pcVar2 = sym.oem_rvh_try_to_wake_up_success.cfi_jt;
                        goto code_r0x08005d2c;
                    }
                    if (arg1 != -0x5c7fa406e14fe9d2) goto code_r0x08008a5c;
                    pcVar2 = sym.cpu_to_cluster.cfi_jt;
                }
            }
            else {
                if (arg1 < -0x4854df95af14cd3b) {
                    if (arg1 < -0x4e200718841f2198) {
                        if (arg1 != -0x550b9e52359ac614) {
                            if (arg1 != -0x54909f7036e85493) goto code_r0x08008a5c;
                            pcVar2 = sym.mi_lock_rwsem_wake_finish_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt;
                            goto code_r0x08005bb8;
                        }
                        pcVar2 = sym.do_adjust_freq_delayed.b1e49afbd87934ed80dab30c248d2d24.cfi_jt;
                    }
                    else {
                        if (arg1 == -0x4e200718841f2198) {
                            pcVar2 = sym.walt_mi_irq_task_rq_balance_hook.cfi_jt;
                            goto code_r0x08005d48;
                        }
                        if (arg1 != -0x4d3e55c950c37990) goto code_r0x08008a5c;
                        pcVar2 = sym.mi_binder_restore_vip_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt;
                    }
code_r0x08005c7c:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                        return;
                    }
                    goto code_r0x08008a5c;
                }
                if (arg1 < -0x3b406808ceeb32a5) {
                    if (arg1 == -0x4854df95af14cd3b) {
                        pcVar2 = sym.before_enqueue_vip_task.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x4741d0a73e8aff42) goto code_r0x08008a5c;
                        pcVar2 = sym.get_vtask_monitor_status.cfi_jt;
                    }
                }
                else if (arg1 == -0x3b406808ceeb32a5) {
                    pcVar2 = sym.task_pid.aac6a73137e7abde2329e591bee8c57a.cfi_jt;
                }
                else if (arg1 == -0x34548de2741d348b) {
                    pcVar2 = sym.get_metis_limit.cfi_jt;
                }
                else {
                    if (arg1 != -0x339c2e8918efa2d1) goto code_r0x08008a5c;
                    pcVar2 = sym.mi_futex_wait_end.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt;
                }
            }
        }
        else if (arg1 < -0x9bf2e6e44b91567) {
            if (arg1 < -0x259e9075afc4d0e8) {
                if (arg1 < -0x2cafd16bb7bf1842) {
                    if (arg1 == -0x2ee7a8f462803124) {
                        pcVar2 = sym.register_game_wake_f.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x2ee0710dce68437c) goto code_r0x08008a5c;
                        pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
                    }
                }
                else if (arg1 == -0x2cafd16bb7bf1842) {
                    pcVar2 = sym.mi_futex_wake_traverse_plist.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt;
                }
                else {
                    if (arg1 != -0x2a774c5b08cba6fb) goto code_r0x08008a5c;
                    pcVar2 = sym.register_update_perflock_freq_hook.cfi_jt;
                }
            }
            else if (arg1 < -0x131241da9de23b1f) {
                if (arg1 == -0x259e9075afc4d0e8) {
                    pcVar2 = sym.mi_schedule_hook.cfi_jt;
                }
                else {
                    if (arg1 != -0x20f1b32ad1c4dacf) goto code_r0x08008a5c;
                    pcVar2 = sym.register_corectl_boost_hook.cfi_jt;
                }
            }
            else if (arg1 == -0x131241da9de23b1f) {
                pcVar2 = sym.register_get_perflock_last_freqs_hook.cfi_jt;
            }
            else if (arg1 == -0x11a95c0029f9571f) {
                pcVar2 = sym.mi_dequeue_task_fair_hook.cfi_jt;
            }
            else {
                if (arg1 != -0x9bfd33a423ca8dd) goto code_r0x08008a5c;
                pcVar2 = sym.mi_alter_futex_plist_add.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt;
            }
        }
        else if (arg1 < -0x890743871a4a53) {
            if (arg1 < -0x59bef8c941b4f68) {
                if (arg1 != -0x9bf2e6e44b91567) {
                    if ((arg1 == -0x8dc801903aca538) && ((pcVar1 + -0x8006050 >> 3 | pcVar1 << 0x3d) < 8)) {
                        return;
                    }
                    goto code_r0x08008a5c;
                }
                pcVar2 = sym.mi_do_futex.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt;
            }
            else {
                if (arg1 != -0x59bef8c941b4f68) {
                    if (arg1 != -0x207a72c8321b496) goto code_r0x08008a5c;
                    pcVar2 = sym.metis_set_common_persist_vip.cfi_jt;
                    goto code_r0x08005c7c;
                }
                pcVar2 = sym.oem_should_update_freq.cfi_jt;
            }
        }
        else {
            if (arg1 < 0x3e81ac7c0c27e87) {
                if (arg1 != -0x890743871a4a53) {
                    if ((arg1 == 0x2b3a43e29242445) && ((pcVar1 + -0x8006110 >> 3 | pcVar1 << 0x3d) < 10)) {
                        return;
                    }
                    goto code_r0x08008a5c;
                }
                pcVar2 = sym.metis_link_ioctl.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt;
                goto code_r0x08005c7c;
            }
            if (arg1 == 0x3e81ac7c0c27e87) {
                pcVar2 = sym.mi_mutex_list_add_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt;
            }
            else if (arg1 == 0x7ff5a213d37b1a6) {
                pcVar2 = sym.seq_read.cfi_jt;
            }
            else {
                if (arg1 != 0xd1d8d35e67b4003) goto code_r0x08008a5c;
                pcVar2 = sym.find_energy_hook.877fa0db602420247113046bf2a65355.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x3d66494c8ff65011) {
        if (arg1 < 0x2f67d9c06998431f) {
            if (arg1 < 0x1d7ed092cb04d3f1) {
                if (arg1 < 0x199c66976d43c92e) {
                    if (arg1 == 0x18928d58faff3b35) {
                        pcVar2 = sym.mi_mutex_wait_start_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt;
                    }
                    else {
                        if (arg1 != 0x1963ca7eee976ad5) goto code_r0x08008a5c;
                        pcVar2 = sym.metis_update_top_task_info.cfi_jt;
                    }
                }
                else {
                    if (arg1 == 0x199c66976d43c92e) {
                        if ((pcVar1 + -0x8005f98 >> 3 | pcVar1 << 0x3d) < 9) {
                            return;
                        }
                        goto code_r0x08008a5c;
                    }
                    if (arg1 != 0x19e9081ee75ef79b) goto code_r0x08008a5c;
                    pcVar2 = sym.fas_sched_clock.cfi_jt;
                }
            }
            else if (arg1 < 0x2bcb77f4d94771ee) {
                if (arg1 == 0x1d7ed092cb04d3f1) {
                    pcVar2 = sym.proc_write_fas.877fa0db602420247113046bf2a65355.cfi_jt;
                }
                else {
                    if (arg1 != 0x2904d84de5814dca) goto code_r0x08008a5c;
                    pcVar2 = sym.mi_check_preempt_tick_hook.877fa0db602420247113046bf2a65355.cfi_jt;
                }
            }
            else if (arg1 == 0x2bcb77f4d94771ee) {
                pcVar2 = sym.__typeid__ZTSFvP2rqP11task_structE_global_addr;
            }
            else {
                if (arg1 != 0x2f64a8c860b00226) goto code_r0x08008a5c;
                pcVar2 = sym.mi_select_task_rq_fair.cfi_jt;
            }
        }
        else if (arg1 < 0x379d36f049eb9a81) {
            if (arg1 < 0x3020da4bfb511f2a) {
                if (arg1 != 0x2f67d9c06998431f) {
                    if (arg1 != 0x2fee179f101c3684) goto code_r0x08008a5c;
                    pcVar2 = sym.mi_set_fas_req.cfi_jt;
                    goto code_r0x08005c7c;
                }
                pcVar2 = sym.mi_check_preempt_wakeup_hook.cfi_jt;
            }
            else if (arg1 == 0x3020da4bfb511f2a) {
                pcVar2 = sym.mi_rt_mutex_wait_start_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt;
            }
            else {
                if (arg1 != 0x321969b888d4949e) goto code_r0x08008a5c;
                pcVar2 = sym.seq_lseek.cfi_jt;
            }
        }
        else if (arg1 < 0x39db8fb237f58650) {
            if (arg1 == 0x379d36f049eb9a81) {
                pcVar2 = sym.metis_mmap.877fa0db602420247113046bf2a65355.cfi_jt;
                goto code_r0x08005c7c;
            }
            if (arg1 != 0x3928e7d35a69039f) goto code_r0x08008a5c;
            pcVar2 = sym.register_mi_enqueue_entity_hook.cfi_jt;
        }
        else if (arg1 == 0x39db8fb237f58650) {
            pcVar2 = sym.mi_cpuset_fork.cfi_jt;
        }
        else {
            if (arg1 != 0x39e63916c3db07da) {
                if (arg1 != 0x3c8dc8327504ab6a) goto code_r0x08008a5c;
                pcVar2 = sym.mi_rb_enqueue_entity_hook.877fa0db602420247113046bf2a65355.cfi_jt;
                goto code_r0x08005c7c;
            }
            pcVar2 = sym.queue_for_boost_cluster.b1e49afbd87934ed80dab30c248d2d24.cfi_jt;
        }
    }
    else if (arg1 < 0x5da29e222b2678a5) {
        if (arg1 < 0x51194c237bab9abb) {
            if (arg1 < 0x4a220a35dbe7fc62) {
                if (arg1 == 0x3d66494c8ff65011) {
                    pcVar2 = sym.proc_viptask_cpus_set.aac6a73137e7abde2329e591bee8c57a.cfi_jt;
                }
                else {
                    if (arg1 != 0x3fe778f11b06059b) goto code_r0x08008a5c;
                    pcVar2 = sym.metis_choose_cpu_fastpath.cfi_jt;
                }
            }
            else {
                if (arg1 == 0x4a220a35dbe7fc62) {
                    if ((pcVar1 + -0x8005f60 >> 3 | pcVar1 << 0x3d) < 7) {
                        return;
                    }
                    goto code_r0x08008a5c;
                }
                if (arg1 != 0x4e70a88b98a09cfa) goto code_r0x08008a5c;
                pcVar2 = sym.mi_scheduler_tick_hook.cfi_jt;
            }
        }
        else if (arg1 < 0x5553dbe82c8014c7) {
            if (arg1 != 0x51194c237bab9abb) {
                if (arg1 != 0x5233d5bc7887ae44) goto code_r0x08008a5c;
                pcVar2 = sym.proc_show_fas.877fa0db602420247113046bf2a65355.cfi_jt;
code_r0x08005bb8:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x08008a5c;
            }
            pcVar2 = sym.register_mi_walt_get_indicies.cfi_jt;
        }
        else if (arg1 == 0x5553dbe82c8014c7) {
            pcVar2 = sym.walt_get_indicies_hook.877fa0db602420247113046bf2a65355.cfi_jt;
        }
        else if (arg1 == 0x566309adc43cb195) {
            pcVar2 = sym.boost_cluster.cfi_jt;
        }
        else {
            if (arg1 != 0x578002e8cef638c7) goto code_r0x08008a5c;
            pcVar2 = sym.register_game_binder_f.cfi_jt;
        }
    }
    else if (arg1 < 0x6e9810b85546f85e) {
        if (arg1 < 0x65e6a52c66963467) {
            if (arg1 == 0x5da29e222b2678a5) {
                pcVar2 = sym.register_mi_find_energy_efficient_cpu.cfi_jt;
            }
            else {
                if (arg1 != 0x641d19c7be126e92) goto code_r0x08008a5c;
                pcVar2 = sym.fboost_run.b1e49afbd87934ed80dab30c248d2d24.cfi_jt;
            }
        }
        else if (arg1 == 0x65e6a52c66963467) {
            pcVar2 = sym.register_mi_dequeue_task_fair_hook.cfi_jt;
        }
        else {
            if (arg1 != 0x6680ad5ba94e2267) goto code_r0x08008a5c;
            pcVar2 = sym.register_rvh_mi_try_to_wake_up.cfi_jt;
        }
    }
    else if (arg1 < 0x795d765ce9e8553c) {
        if (arg1 != 0x6e9810b85546f85e) {
            if (arg1 != 0x737a1841ea9b412b) goto code_r0x08008a5c;
            pcVar2 = sym.mi_futex_sleep_start.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt;
            goto code_r0x08005c7c;
        }
        pcVar2 = sym.get_fboost_duration.cfi_jt;
    }
    else {
        if (arg1 != 0x795d765ce9e8553c) {
            if (arg1 != 0x7d57972cd3914fb1) {
                if ((arg1 == 0x7e04a0fb7ad8bcd5) && ((pcVar1 + -0x80060b0 >> 3 | pcVar1 << 0x3d) < 0xc)) {
                    return;
                }
                goto code_r0x08008a5c;
            }
            pcVar2 = sym.metis_freq_qos_request_init.b1e49afbd87934ed80dab30c248d2d24.cfi_jt;
            goto code_r0x08005bb8;
        }
        pcVar2 = sym.mi_rwsem_list_add_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt;
    }
code_r0x08005d48:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08008a5c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8008ab0);
    (*pcVar1)();
}


// ===== sym.boost_cluster.cfi_jt @ 0x08005d60 (size 8) =====

void sym.boost_cluster.cfi_jt(uint32_t param_1,uint param_2,uint param_3,int param_4)

{
    uint *puVar1;
    code *pcVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (3 < param_1) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x800bc04);
        (*pcVar2)();
    }
    if (*0x8001000 == 0) {
        return;
    }
    if (param_1 < 3) {
        uVar5 = param_1;
        *(obj.bcluster_stat + uVar5 * 8) = param_2;
        if ((uVar5 << 3 | 4) < 0x19) {
            puVar1 = uVar5 * 8 + 0x8016b3c;
            *puVar1 = param_3;
            if (param_4 == 0) {
                if (*0x8016b34 == 0) {
                    *0x8016000 = 1;
                }
                uVar4 = _raw_spin_lock_irqsave(obj.fboost_pending_lock);
                obj.fboost_pending = 0x1;
                _raw_spin_unlock_irqrestore(obj.fboost_pending_lock,uVar4);
                wake_up_process(CONCAT44(*0x8016004,*0x8016000));
                return;
            }
            uVar3 = hrtimer_active(obj.boost_timers + uVar5 * 0x58);
            if ((uVar3 & 1) != 0) {
                return;
            }
            if ((uVar5 * 0x58 < 0xbd) &&
               (*(uVar5 * 0x58 + 0x8016bbc) = *(obj.bcluster_stat + uVar5 * 8), uVar5 * 0x58 < 0xb9)) {
                *(uVar5 * 0x58 + 0x8016bc0) = *puVar1;
                if (*0x8016b34 == 0) {
                    *0x8016000 = 1;
                }
                hrtimer_start_range_ns(obj.boost_timers + uVar5 * 0x58,param_4 * 1000000,0,1);
                return;
            }
        }
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(1,0x800bc00);
    (*pcVar2)();
}


// ===== sym.mi_alter_futex_plist_add.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt @ 0x08005d68 (size 8) =====

void sym.mi_alter_futex_plist_add.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt
               (ulong param_1,int64_t param_2,int64_t *param_3,char *param_4)

{
    int64_t iVar1;
    uint uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    char cVar6;
    ulong *in_x18;
    int64_t *piVar7;
    uint uVar8;
    int64_t iVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*param_4 == '\0') {
        iVar1 = sp_el0;
        uVar5 = sym.mi_vip_task(iVar1);
        if ((((uVar5 & 1) != 0) || (uVar5 = sym.mi_link_vip_task(iVar1), (uVar5 & 1) != 0)) &&
           (1 < *(iVar1 + 0x420) - 1U)) {
            if (param_3 != *param_3) {
                uVar8 = 0;
                uVar3 = 1;
                piVar7 = *param_3;
                do {
                    piVar10 = *piVar7;
                    if (((piVar7[7] == 0) || (piVar7[8] == 0)) &&
                       ((iVar9 = piVar7[2], 1 < *(iVar9 + 0x420) - 1U &&
                        ((uVar5 = sym.mi_vip_task(iVar9), (uVar5 & 1) == 0 &&
                         (uVar5 = sym.mi_link_vip_task(iVar9), (uVar5 & 1) == 0)))))) {
                        if (*0x8001000 != 0) {
                            iVar9 = piVar7[2];
                            uVar2 = *(iVar9 + 0x5d8);
                            uVar5 = sym.mi_vip_task(iVar9);
                            if ((uVar5 & 1) == 0) {
                                uVar4 = sym.mi_link_vip_task(iVar9);
                                uVar4 = uVar4 & 1;
                            }
                            else {
                                uVar4 = 1;
                            }
                            _printk(0x8002c08,uVar8,uVar3,uVar2,uVar4,piVar7[2] + 0x7a8,*(iVar1 + 0x5d8),
                                    iVar1 + 0x7a8);
                        }
                        piVar7 = piVar7[1];
                        iVar1 = param_2 + 0x18;
                        iVar9 = *piVar7;
                        uVar5 = __list_add_valid(iVar1,piVar7,iVar9);
                        if ((uVar5 & 1) == 0) {
                            cVar6 = '\x01';
                        }
                        else {
                            *(iVar9 + 8) = iVar1;
                            cVar6 = '\x01';
                            *(param_2 + 0x18) = iVar9;
                            *(param_2 + 0x20) = piVar7;
                            *piVar7 = iVar1;
                        }
                        goto code_r0x080072fc;
                    }
                    iVar9 = piVar7[2];
                    uVar8 = *(iVar9 + 0x5d8);
                    uVar5 = sym.mi_vip_task(iVar9);
                    if ((uVar5 & 1) == 0) {
                        uVar3 = sym.mi_link_vip_task(iVar9);
                    }
                    else {
                        uVar3 = 1;
                    }
                    uVar3 = uVar3 & 1;
                    piVar7 = piVar10;
                } while (param_3 != piVar10);
            }
            cVar6 = '\0';
code_r0x080072fc:
            *param_4 = cVar6;
        }
    }
    return;
}


// ===== sym.mi_rt_mutex_wait_start_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt @ 0x08005d70 (size 8) =====

void sym.mi_rt_mutex_wait_start_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t arg1;
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = sp_el0;
    uVar1 = sym.mi_vip_task(arg1);
    if (((uVar1 & 1) != 0) || (uVar1 = sym.mi_link_vip_task(arg1), (uVar1 & 1) != 0)) {
        if (param_2 == 0) {
            uVar1 = 0;
        }
        else {
            uVar1 = *(param_2 + 0x18) & 0xfffffffffffffffe;
        }
        sym.do_set_lock_vip(uVar1,arg1,0x80029a3);
    }
    return;
}


// ===== sym.walt_mi_irq_task_rq_balance_hook.cfi_jt @ 0x08005d78 (size 8) =====

ulong sym.walt_mi_irq_task_rq_balance_hook.cfi_jt(int64_t param_1,uint32_t param_2)

{
    uint32_t *puVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong *unaff_x20;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        return 0;
    }
    if (param_2 < 0) {
        return 0;
    }
    *unaff_x20 = seq_read;
    if (0x805efff < param_2) {
        return 0;
    }
    puVar1 = param_1 + 0x38;
    if (*puVar1 == 0) {
        return 0;
    }
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = uVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (uVar8 == 0) {
        uVar7 = 2;
code_r0x0800e96c:
        refcount_warn_saturate(puVar1,uVar7);
    }
    else if ((uVar8 + 1 | uVar8) < 0) {
        uVar7 = 1;
        goto code_r0x0800e96c;
    }
    iVar5 = get_mi_task_struct(param_1);
    if ((iVar5 == 0) || ((*(iVar5 + 0x12) >> 3 & 1) == 0)) {
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = uVar8 - 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (uVar8 == 1) {
            DataMemoryBarrier(2,1);
            goto code_r0x0800e928;
        }
    }
    else {
        if (0x1f < param_2) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x800e95c);
            (*pcVar4)();
        }
        if (((*(__per_cpu_offset + param_2 * 8) != -0x805f1c0) &&
            (iVar5 = *(*(__per_cpu_offset + param_2 * 8) + 0x805fc60), iVar5 != 0)) &&
           (uVar6 = task_may_not_preempt(iVar5,param_2), (uVar6 & 1) != 0)) {
            if (*0x8016000 != 0) {
                _printk(0x8003a35,param_1 + 0x7a8,*(param_1 + 0x5d8),param_2);
            }
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar8 = *puVar1;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = uVar8 - 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if (uVar8 == 1) {
                DataMemoryBarrier(2,1);
                __put_task_struct(param_1);
                return 1;
            }
            if (uVar8 < 1) {
                refcount_warn_saturate(puVar1,3);
                return 1;
            }
            return 1;
        }
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = uVar8 - 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (uVar8 == 1) {
            DataMemoryBarrier(2,1);
code_r0x0800e928:
            __put_task_struct(param_1);
            return 0;
        }
    }
    if (uVar8 < 1) {
        refcount_warn_saturate(puVar1,3);
    }
    return 0;
}


// ===== sym.oem_should_update_freq.cfi_jt @ 0x08005d80 (size 8) =====

bool sym.oem_should_update_freq.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = get_cluster_type(*(param_1 + 0x1c));
    uVar1 = 0;
    if (uVar3 < 4) {
        uVar1 = uVar3;
    }
    if (uVar1 < 3) {
        return *(param_1 + 0x3c) < *(obj.perf_min_freq + uVar1 * 4);
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800bd5c);
    (*pcVar2)();
}


// ===== sym.seq_read.cfi_jt @ 0x08005d88 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.find_energy_hook.877fa0db602420247113046bf2a65355.cfi_jt @ 0x08005d90 (size 8) =====

void sym.find_energy_hook.877fa0db602420247113046bf2a65355.cfi_jt(int64_t param_1,uint8_t *param_2)

{
    uint8_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*param_2 == 0) {
        uVar1 = sym.metis_xxx_task.llvm.15631448280779817747(param_1,0x700);
    }
    else {
        uVar1 = 1;
    }
    *param_2 = uVar1 & 1;
    return;
}


// ===== sym.get_fboost_duration.cfi_jt @ 0x08005d98 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800f3ac)
//WARNING: Removing unreachable block (ram,0x0800f3b4)
//WARNING: Removing unreachable block (ram,0x0800f3f8)

ulong sym.get_fboost_duration.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    return 0;
}


// ===== sym.mi_futex_wait_end.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt @ 0x08005da0 (size 8) =====

void sym.mi_futex_wait_end.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt(void)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = sp_el0;
    iVar5 = get_mi_task_struct(uVar6);
    if (iVar5 == 0) {
        return;
    }
    *(iVar5 + 0x1c8) = 0;
    if (*(iVar5 + 0x1c4) < 1) goto code_r0x08007cc4;
    __rcu_read_lock();
    uVar6 = find_vpid(*(iVar5 + 0x1c4));
    iVar7 = pid_task(uVar6,0);
    if ((iVar7 != 0) && (puVar1 = iVar7 + 0x38, *puVar1 != 0)) {
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar2 = *puVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar2 == 0) {
            uVar6 = 2;
code_r0x08007c98:
            refcount_warn_saturate(puVar1,uVar6);
        }
        else if ((uVar2 + 1 | uVar2) < 0) {
            uVar6 = 1;
            goto code_r0x08007c98;
        }
        iVar8 = get_mi_task_struct(iVar7);
        if (iVar8 != 0) {
            __rcu_read_lock();
            *(iVar8 + 0x10) = *(iVar8 + 0x10) & 0xffffbfff;
            __rcu_read_unlock();
            if (*0x8001000 != 0) {
                _printk(0x8001b79,"art-mutex",*(iVar7 + 0x5d8),iVar7 + 0x7a8);
            }
        }
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar2 = *puVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar2 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar2 == 1) {
            DataMemoryBarrier(2,1);
            __put_task_struct(iVar7);
        }
        else if (uVar2 < 1) {
            refcount_warn_saturate(puVar1,3);
        }
    }
    __rcu_read_unlock();
code_r0x08007cc4:
    *(iVar5 + 0x1c4) = 0;
    return;
}


// ===== sym.task_pid.aac6a73137e7abde2329e591bee8c57a.cfi_jt @ 0x08005da8 (size 8) =====

ulong sym.task_pid.aac6a73137e7abde2329e591bee8c57a.cfi_jt(int64_t param_1)

{
    return *(param_1 + 0x640);
}


// ===== sym.get_vtask_monitor_status.cfi_jt @ 0x08005db0 (size 8) =====

code sym.get_vtask_monitor_status.cfi_jt(ulong *param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 != NULL) {
        uVar1 = __usecs_to_jiffies(*0x8016000);
        *param_1 = uVar1;
    }
    return obj.vtask_monitor;
}


// ===== sym.mi_schedule_hook.cfi_jt @ 0x08005db8 (size 8) =====

void sym.mi_schedule_hook.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    int iVar1;
    uint uVar2;
    uint32_t uVar3;
    bool bVar4;
    code *pcVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    uint64_t uVar13;
    int64_t iVar14;
    ulong uVar15;
    uint64_t uVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    int64_t iVar19;
    int iVar20;
    uint64_t uVar21;
    code *pcVar22;
    uint64_t *puVar23;
    int64_t *piVar24;
    uint64_t *puVar25;
    int iVar26;
    uint64_t uVar27;
    ulong *in_x18;
    uint32_t uVar28;
    uint64_t uVar29;
    int64_t iVar30;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = sym.fas_sched_clock();
    if (*0x8016000 == 0) {
        return;
    }
    uVar17 = *(param_3 + 0xba8);
    iVar7 = get_mi_task_struct(param_2);
    if (0x1f < uVar17) goto code_r0x080121b8;
    if ((iVar7 == 0) || (*(iVar7 + 10) == '\0')) {
        bVar4 = false;
    }
    else {
        iVar30 = *(iVar7 + 0x1a0);
        iVar14 = *(__per_cpu_offset + uVar17 * 8);
        uVar29 = (uVar6 - iVar30) / 1000000000;
        uVar28 = uVar29;
        if (*(param_2 + 0x420) - 1U < 2) {
            if (*0x8016000 != 0) {
                _printk(0x80019f8,*(param_2 + 0x5d8),iVar30,uVar6,uVar29 & 0xffffffff,uVar17);
            }
            if (uVar28 < *0x8001000) {
code_r0x08011b60:
                bVar4 = false;
            }
            else {
                uVar17 = *(iVar14 + 0x8014de0) % 10;
                *(iVar14 + 0x8014de0) = uVar17;
                if (9 < uVar17) goto code_r0x080121b8;
                bVar4 = false;
                iVar30 = uVar17 * 0x18 + iVar14;
                *(obj.metis_runqueues + iVar30 + 0x548) = *(param_2 + 0x5d8);
                *(obj.metis_runqueues + iVar30 + 0x558) = uVar28;
                *(obj.metis_runqueues + iVar30 + 0x550) = uVar6;
                *(iVar14 + 0x8014de0) = uVar17 + 1;
            }
        }
        else {
            iVar19 = get_mi_task_struct(param_2);
            if (((iVar19 != 0) && ((*(iVar19 + 0x10) & 0x107020) != 0)) || (*(param_2 + 0x5d8) == 0)) {
                bVar4 = false;
                goto code_r0x08011d10;
            }
            if (*0x8016000 != 0) {
                _printk(0x8001cc2,*(param_2 + 0x5d8),iVar30,uVar6,uVar29 & 0xffffffff,uVar17);
            }
            if (uVar28 < *0x8001000) {
                if (uVar28 < *0x8001000 / 3) goto code_r0x08011b60;
                if (uVar28 < 3) {
                    if (4 < uVar28) goto code_r0x080121b8;
                    uVar29 = uVar29 & 0xffffffff;
                }
                else {
                    uVar29 = 3;
                }
                bVar4 = false;
            }
            else {
                uVar17 = *(iVar14 + 0x8014ddc) % 10;
                *(iVar14 + 0x8014ddc) = uVar17;
                if (9 < uVar17) goto code_r0x080121b8;
                uVar2 = *(iVar14 + 0x8014e08);
                iVar30 = uVar17 * 0x18 + iVar14;
                *(obj.metis_runqueues + iVar30 + 0x458) = *(param_2 + 0x5d8);
                uVar15 = *(iVar14 + 0x8014de8);
                *(obj.metis_runqueues + iVar30 + 0x468) = uVar28;
                *(obj.metis_runqueues + iVar30 + 0x638) = uVar2;
                *(obj.metis_runqueues + iVar30 + 0x460) = uVar6;
                *(obj.metis_runqueues + iVar30 + 0x648) = uVar15;
                *(obj.metis_runqueues + iVar30 + 0x640) = uVar6;
                *(iVar14 + 0x8014ddc) = uVar17 + 1;
                if (uVar28 < 3) {
                    if (4 < uVar28) goto code_r0x080121b8;
                    uVar29 = uVar29 & 0xffffffff;
                }
                else {
                    uVar29 = 3;
                }
                bVar4 = true;
            }
            iVar14 = uVar29 * 4 + iVar14;
            *(obj.metis_runqueues + iVar14 + 0xa8) = *(obj.metis_runqueues + iVar14 + 0xa8) + 1;
        }
        *(iVar7 + 10) = 0;
    }
code_r0x08011d10:
    uVar17 = *(param_3 + 0xba8);
    if (uVar17 < 0x20) {
        iVar7 = *(__per_cpu_offset + uVar17 * 8);
        pcVar5 = obj.metis_runqueues + iVar7;
        uVar28 = *(iVar7 + 0x8014dd0);
        uVar29 = uVar28;
        if (uVar28 < 0xb) {
            if (*(iVar7 + 0x8014dd8) == '\0') {
                uVar3 = *(iVar7 + 0x8014dd4);
                uVar9 = uVar3;
                if (0xb < uVar3) goto code_r0x080121b8;
                iVar14 = uVar6 - *(iVar7 + 0x8014dc8);
                *(pcVar5 + (uVar9 * 5 + 0x4d) * 8) = *(param_1 + 0x5d8);
                *(pcVar5 + (uVar9 * 5 + 0x50) * 8) = iVar14;
                *(pcVar5 + (uVar9 * 5 + 0x51) * 8) = uVar6;
                iVar20 = *0x8016000;
                uVar15 = *(param_1 + 0x7a8);
                *(pcVar5 + uVar9 * 0x28 + 0x274) = *(param_1 + 0x7b0);
                *(pcVar5 + uVar9 * 0x28 + 0x26c) = uVar15;
                *(iVar7 + 0x8014dd4) = uVar3 + 1 + ((uVar3 + 1 & 0xff) / 10) * -10 & 0xff;
                if ((iVar20 != 0) && (*0x8016000 < 1000)) {
                    _printk(0x8001f62,uVar17,uVar9,*(param_1 + 0x5d8),uVar6);
                    *0x8016000 = *0x8016000 + 1;
                }
                if (*(param_1 + 0x420) - 1U < 2) {
                    iVar30 = 0;
                }
                else {
                    iVar30 = get_mi_task_struct(param_1);
                    if ((iVar30 == 0) || ((*(iVar30 + 0x10) & 0x107020) == 0)) {
                        iVar30 = 2;
                        if (*(param_1 + 0x5d8) != 0) {
                            iVar30 = 3;
                        }
                    }
                    else {
                        iVar30 = 1;
                    }
                }
                uVar18 = *pcVar5;
                uVar9 = uVar18 + iVar14;
                uVar16 = *(pcVar5 + (uVar29 * 5 + 0x1b) * 8) + 300000000;
                if (uVar16 < uVar9) {
                    uVar21 = ((uVar9 - 300000000) - *(pcVar5 + (uVar29 * 5 + 0x1b) * 8)) / 300000000;
                    iVar20 = uVar21;
                    if (iVar20 == 0) {
                        iVar19 = iVar7 + 0x8014e98 + uVar29 * 0x28 + iVar30 * 8;
                        iVar11 = *(iVar7 + 0x8014e90);
                        uVar17 = uVar28 + 1 + ((uVar28 + 1 & 0xff) / 10) * -10;
                        piVar24 = iVar7 + 0x8014e78;
                        iVar12 = *piVar24;
                        puVar25 = iVar7 + 0x8014e98 + (uVar17 & 0xff) * 0x28;
                        iVar8 = *(iVar7 + 0x8014e80);
                        iVar10 = *(iVar7 + 0x8014e88);
                        *(iVar19 + 8) = *(iVar19 + 8) + (uVar16 - uVar18);
                        uVar29 = puVar25[2];
                        uVar21 = puVar25[3];
                        puVar23 = puVar25 + 1;
                        uVar13 = *puVar23;
                        puVar25[2] = 0;
                        puVar25[3] = 0;
                        uVar27 = puVar25[4];
                        puVar25[4] = 0;
                        *puVar23 = 0;
                        puVar23[iVar30] = iVar14 - (uVar16 - uVar18);
                        *(iVar7 + 0x8014e80) = iVar8 - uVar29;
                        *(iVar7 + 0x8014e88) = iVar10 - uVar21;
                        *(iVar7 + 0x8014e90) = iVar11 - uVar27;
                        *piVar24 = iVar12 - uVar13;
                        *(iVar7 + 0x8014dd0) = uVar17 & 0xff;
                        iVar19 = piVar24[iVar30];
                        *puVar25 = uVar16;
                        piVar24[iVar30] = iVar19 + iVar14;
                        *pcVar5 = uVar9;
                    }
                    else {
                        iVar19 = uVar16 - uVar18;
                        iVar1 = uVar28 + iVar20 + 1;
                        iVar26 = uVar28 + 1;
                        *(pcVar5 + (uVar29 * 5 + iVar30 + 0x1c) * 8) =
                             *(pcVar5 + (uVar29 * 5 + iVar30 + 0x1c) * 8) + iVar19;
                        if (iVar1 <= iVar26) {
    //WARNING: Does not return
                            pcVar5 = SoftwareBreakpoint(1,0x80121e4);
                            (*pcVar5)();
                        }
                        do {
                            uVar17 = iVar26 % 10;
                            if (10 < uVar17) goto code_r0x080121b8;
                            iVar26 = iVar26 + 1;
                            uVar28 = uVar21 - 1;
                            uVar21 = uVar28;
                            iVar11 = *(iVar7 + 0x8014e78) - *(pcVar5 + (uVar17 * 5 + 0x1c) * 8);
                            *(iVar7 + 0x8014e78) = iVar11;
                            iVar8 = *(iVar7 + 0x8014e80) - *(pcVar5 + (uVar17 * 5 + 0x1d) * 8);
                            *(iVar7 + 0x8014e80) = iVar8;
                            iVar12 = *(iVar7 + 0x8014e88) - *(pcVar5 + (uVar17 * 5 + 0x1e) * 8);
                            *(iVar7 + 0x8014e88) = iVar12;
                            iVar10 = *(iVar7 + 0x8014e90) - *(pcVar5 + (uVar17 * 5 + 0x1f) * 8);
                            *(iVar7 + 0x8014e90) = iVar10;
                            *(pcVar5 + (uVar17 * 5 + 0x1b) * 8) = uVar16;
                            *(pcVar5 + (uVar17 * 5 + 0x1c) * 8) = 0;
                            uVar16 = uVar16 + 300000000;
                            *(pcVar5 + (uVar17 * 5 + 0x1e) * 8) = 0;
                            *(pcVar5 + (uVar17 * 5 + 0x1f) * 8) = 0;
                            *(pcVar5 + (uVar17 * 5 + 0x1d) * 8) = 0;
                            *(pcVar5 + (uVar17 * 5 + 0x1c) * 8 + iVar30 * 8) = 300000000;
                        } while (uVar28 != 0);
                        uVar17 = iVar1 % 10;
                        if (10 < uVar17) goto code_r0x080121b8;
                        pcVar22 = pcVar5 + (uVar17 * 5 + 0x1c) * 8;
                        piVar24 = iVar7 + 0x8014e78;
                        *piVar24 = iVar11 - *pcVar22;
                        *(iVar7 + 0x8014e80) = iVar8 - *(pcVar5 + (uVar17 * 5 + 0x1d) * 8);
                        *(iVar7 + 0x8014e88) = iVar12 - *(pcVar5 + (uVar17 * 5 + 0x1e) * 8);
                        *(iVar7 + 0x8014e90) = iVar10 - *(pcVar5 + (uVar17 * 5 + 0x1f) * 8);
                        *(pcVar5 + (uVar17 * 5 + 0x1e) * 8) = 0;
                        *(pcVar5 + (uVar17 * 5 + 0x1f) * 8) = 0;
                        *pcVar22 = 0;
                        *(pcVar5 + (uVar17 * 5 + 0x1d) * 8) = 0;
                        *(pcVar22 + iVar30 * 8) = (iVar14 - iVar19) + iVar20 * -300000000;
                        *pcVar5 = uVar9;
                        *(iVar7 + 0x8014dd0) = uVar17;
                        iVar19 = piVar24[iVar30];
                        *(pcVar5 + (uVar17 * 5 + 0x1b) * 8) = uVar16;
                        piVar24[iVar30] = iVar19 + iVar14;
                    }
                }
                else {
                    *(pcVar5 + (uVar29 * 5 + iVar30 + 0x1c) * 8) = *(pcVar5 + (uVar29 * 5 + iVar30 + 0x1c) * 8) + iVar14
                    ;
                    *pcVar5 = uVar9;
                    *(pcVar5 + (iVar30 + 0x17) * 8) = *(pcVar5 + (iVar30 + 0x17) * 8) + iVar14;
                }
            }
            else {
                if (*0x8016000 != 0) {
                    _printk(0x8002eac);
                }
                *(iVar7 + 0x8014e98) = uVar6;
                *pcVar5 = uVar6;
                *(iVar7 + 0x8014dd8) = 0;
            }
            if (bVar4) {
                uVar9 = *(iVar7 + 0x8014e78);
                uVar16 = *(iVar7 + 0x8014e80);
                uVar29 = uVar16;
                if (uVar9 >= uVar16) {
                    uVar29 = uVar9;
                }
                uVar21 = *(iVar7 + 0x8014e88);
                uVar18 = uVar21;
                if (uVar21 <= uVar29) {
                    uVar18 = uVar29;
                }
                uVar17 = 2;
                if (uVar21 <= uVar29) {
                    uVar17 = uVar9 < uVar16;
                }
                uVar28 = 3;
                if (*(iVar7 + 0x8014e90) <= uVar18) {
                    uVar28 = uVar17;
                }
                if (uVar28 == 1) {
                    *(iVar7 + 0x8014e5c) = *(iVar7 + 0x8014e5c) + 1;
                    if (*0x8001000 != 0) {
                        *(iVar7 + 0x8015210) = uVar6;
                        *(iVar7 + 0x8015208) = 0;
                    }
                }
                else {
                    *(pcVar5 + uVar28 * 4 + 0x98) = *(pcVar5 + uVar28 * 4 + 0x98) + 1;
                }
            }
            *(iVar7 + 0x8014dc8) = uVar6;
            return;
        }
    }
code_r0x080121b8:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x80121bc);
    (*pcVar5)();
}


// ===== sym.proc_viptask_cpus_set.aac6a73137e7abde2329e591bee8c57a.cfi_jt @ 0x08005dc0 (size 8) =====

uint sym.proc_viptask_cpus_set.aac6a73137e7abde2329e591bee8c57a.cfi_jt(void)

{
    code *pcVar1;
    char cVar2;
    bool bVar3;
    uint uVar4;
    uint32_t uVar5;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    ulong *in_x18;
    uint64_t uVar6;
    uint32_t *unaff_x21;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = proc_dointvec();
    *0x8001000 = 0;
    uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *unaff_x21 = extraout_w8;
    if ((uVar5 < extraout_w8) && (uVar5 < *0x8001000)) {
        do {
            uVar6 = uVar5;
            pcVar1 = obj.viptask_use_cpumask + (uVar5 >> 3 & 0x1ffffff8);
            Hint_Prefetch(pcVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(pcVar1,0x10);
                if (bVar3) {
                    *pcVar1 = *pcVar1 | 1L << (uVar6 & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            _printk(0x80039dc,uVar6);
            uVar5 = cpumask_next(uVar6,__cpu_possible_mask);
            *0x80039dc = extraout_w8_00;
        } while ((uVar5 < extraout_w8_00) && (uVar5 < *0x8001000));
    }
    return uVar4;
}


// ===== sym.mi_rwsem_list_add_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt @ 0x08005dc8 (size 8) =====

void sym.mi_rwsem_list_add_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt
               (ulong param_1,int64_t *param_2,int64_t param_3,uchar *param_4)

{
    int64_t *piVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 != NULL) && (param_3 != 0)) {
        iVar4 = sp_el0;
        uVar3 = sym.mi_vip_task(iVar4);
        if (((uVar3 & 1) != 0) || (uVar3 = sym.mi_lock_vip_task(iVar4), (uVar3 & 1) != 0)) {
            piVar1 = param_3 + 0x18;
            piVar7 = *(param_3 + 0x20);
            do {
                piVar6 = piVar7;
                if (piVar6 == piVar1) {
                    iVar4 = *piVar1;
                    uVar3 = __list_add_valid(param_2,piVar1,iVar4);
                    if ((uVar3 & 1) != 0) {
                        *(iVar4 + 8) = param_2;
                        *param_2 = iVar4;
                        param_2[1] = piVar1;
                        *piVar1 = param_2;
                    }
                    goto code_r0x08006e88;
                }
                if (piVar6 == NULL) {
                    return;
                }
                iVar4 = piVar6[2];
                if (iVar4 == 0) {
                    return;
                }
                piVar7 = piVar6[1];
                iVar2 = *(iVar4 + 0x420);
                uVar3 = sym.mi_vip_task(iVar4);
                uVar5 = sym.mi_lock_vip_task(piVar6[2]);
            } while (((((uVar3 & 1) == 0) && ((uVar5 & 1) == 0)) && (piVar6[6] == '\0')) && (1 < iVar2 - 1U));
            iVar4 = *piVar6;
            uVar3 = __list_add_valid(param_2,piVar6,iVar4);
            if ((uVar3 & 1) != 0) {
                *(iVar4 + 8) = param_2;
                *param_2 = iVar4;
                param_2[1] = piVar6;
                *piVar6 = param_2;
            }
code_r0x08006e88:
            *param_4 = 1;
        }
    }
    return;
}


// ===== sym.__typeid__ZTSFvP2rqP11task_structE_global_addr @ 0x08005dd0 (size 8) =====

void sym.__typeid__ZTSFvP2rqP11task_structE_global_addr(void)

{
    return;
}


// ===== sym.mi_futex_sleep_start.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt @ 0x08005dd8 (size 8) =====

void sym.mi_futex_sleep_start.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt(ulong param_1,int64_t param_2)

{
    uint32_t *puVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t arg1;
    int64_t iVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = sym.mi_vip_task(param_2);
    if (((uVar4 & 1) == 0) && (uVar4 = sym.mi_link_vip_task(param_2), (uVar4 & 1) == 0)) {
        return;
    }
    iVar5 = get_mi_task_struct(param_2);
    if (iVar5 == 0) {
        return;
    }
    if (*(iVar5 + 0x1c8) != 0x6f) {
        return;
    }
    if (*(iVar5 + 0x1c4) < 1) {
        return;
    }
    __rcu_read_lock();
    uVar6 = find_vpid(*(iVar5 + 0x1c4));
    arg1 = pid_task(uVar6,0);
    if ((arg1 == 0) || (puVar1 = arg1 + 0x38, *puVar1 == 0)) {
        __rcu_read_unlock();
        return;
    }
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = uVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (uVar8 == 0) {
        uVar6 = 2;
code_r0x0800784c:
        refcount_warn_saturate(puVar1,uVar6);
    }
    else if ((uVar8 + 1 | uVar8) < 0) {
        uVar6 = 1;
        goto code_r0x0800784c;
    }
    __rcu_read_unlock();
    iVar7 = get_mi_task_struct(arg1);
    if (iVar7 == 0) {
        sym.put_task_struct(arg1);
        return;
    }
    uVar4 = sym.mi_art_mutex_vip_task(arg1);
    if ((uVar4 & 1) != 0) {
        if (*0x8001000 != 0) {
            _printk(0x800223b,*(arg1 + 0x5d8),arg1 + 0x7a8,*(param_2 + 0x5d8),param_2 + 0x7a8);
        }
        *(iVar5 + 0x1c8) = 0x70;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = uVar8 - 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (uVar8 == 1) {
            DataMemoryBarrier(2,1);
            goto code_r0x08007774;
        }
        goto code_r0x08007884;
    }
    iVar7 = get_mi_task_struct(arg1);
    if (iVar7 == 0) {
code_r0x080077d0:
        if (*0x8001000 != 0) {
            _printk(0x800396c,*(arg1 + 0x5d8),arg1 + 0x7a8,*(param_2 + 0x5d8),param_2 + 0x7a8);
        }
    }
    else {
        __rcu_read_lock();
        *(iVar7 + 0x1b8) = _seq_read + 0xf;
        *(iVar7 + 0x10) = *(iVar7 + 0x10) | 0x4000;
        __rcu_read_unlock();
        sym.mi_resched_vip_task(arg1);
        if (*0x8001000 != 0) {
            _printk(0x8003928,"art-mutex",*(arg1 + 0x5d8),arg1 + 0x7a8);
            goto code_r0x080077d0;
        }
    }
    DataMemoryBarrier(2,3);
    if (*(iVar5 + 0x1c8) != 0x6f) {
        iVar7 = get_mi_task_struct(arg1);
        if (iVar7 != 0) {
            __rcu_read_lock();
            *(iVar7 + 0x10) = *(iVar7 + 0x10) & 0xffffbfff;
            __rcu_read_unlock();
            if (*0x8001000 == 0) goto code_r0x0800774c;
            _printk(0x8001b79,"art-mutex",*(arg1 + 0x5d8),arg1 + 0x7a8);
        }
        if (*0x8001000 != 0) {
            _printk(0x800318e,*(arg1 + 0x5d8),arg1 + 0x7a8,*(param_2 + 0x5d8),param_2 + 0x7a8);
        }
    }
code_r0x0800774c:
    *(iVar5 + 0x1c8) = 0x70;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (uVar8 == 1) {
        DataMemoryBarrier(2,1);
code_r0x08007774:
        __put_task_struct(arg1);
        return;
    }
code_r0x08007884:
    if (uVar8 < 1) {
        refcount_warn_saturate(puVar1,3);
    }
    return;
}


// ===== sym.mi_lock_try_to_wake_up_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt @ 0x08005de0 (size 8) =====

void sym.mi_lock_try_to_wake_up_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt(void)

{
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = sp_el0;
    sym.mi_lock_vip_finish_common(arg1);
    return;
}


// ===== sym.mi_sched_setaffinity.cfi_jt @ 0x08005de8 (size 8) =====

void sym.mi_sched_setaffinity.cfi_jt(ulong param_1,int64_t param_2,uint32_t *param_3,uint *param_4)

{
    uint32_t *puVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    char cVar6;
    bool bVar7;
    int64_t iVar8;
    code *pcVar9;
    int iVar10;
    uint32_t uVar11;
    uint *puVar12;
    ulong uVar13;
    ulong *in_x18;
    uint64_t uVar14;
    int64_t iVar15;
    ulong unaff_x30;
    uint64_t uStack_80;
    uint64_t uStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    puVar1 = param_2 + 0x38;
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar11 = *puVar1;
        cVar6 = '\x01';
        bVar7 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
            *puVar1 = uVar11 + 1;
            cVar6 = ExclusiveMonitorsStatus();
        }
    } while (cVar6 != '\0');
    if (uVar11 == 0) {
        uVar13 = 2;
code_r0x08008e48:
        refcount_warn_saturate(puVar1,uVar13);
    }
    else if ((uVar11 + 1 | uVar11) < 0) {
        uVar13 = 1;
        goto code_r0x08008e48;
    }
    puVar12 = get_mi_task_struct(param_2);
    if ((puVar12 != NULL) && ((*(param_2 + 0x3f) >> 2 & 1) == 0)) {
        iVar8 = sp_el0;
        iVar15 = *(iVar8 + 0x798);
        __rcu_read_lock();
        iVar10 = *(iVar15 + 0x14);
        if (iVar10 == *(*(param_2 + 0x790) + 0x14)) {
            __rcu_read_unlock();
        }
        else {
            iVar2 = *(*(param_2 + 0x790) + 4);
            __rcu_read_unlock();
            if (iVar10 != iVar2) {
                __rcu_read_lock();
                uVar14 = ns_capable(*(*(param_2 + 0x790) + 0x88),0x17);
                __rcu_read_unlock();
                if ((uVar14 & 1) == 0) goto code_r0x08008d6c;
            }
        }
        if (*0x8001000 != 0) {
            __rcu_read_lock();
            uVar3 = *(*(iVar8 + 0x790) + 4);
            __rcu_read_unlock();
            uVar4 = *(iVar8 + 0x5d8);
            __rcu_read_lock();
            uVar5 = *(*(param_2 + 0x790) + 4);
            __rcu_read_unlock();
            _printk(0x8003229,iVar8 + 0x7a8,uVar3,uVar4,param_2 + 0x7a8,uVar5,*(param_2 + 0x5d8));
            _printk(0x8003643,*param_3);
        }
        iVar10 = sym.unbind_cpu_affinity_task(param_2);
        if (iVar10 != 0) {
            cpuset_cpus_allowed(param_2,&uStack_70);
            uVar14 = *param_3 & uStack_70;
            uStack_80 = ___cpu_active_mask & uVar14;
            uStack_78 = uVar14;
            uVar11 = cpumask_next_and(0xffffffff,__cpu_active_mask,&uStack_80);
            *puVar12 = 0x805f000;
            if (uVar11 < 0x805f000) {
                cpuset_cpus_allowed(param_2,&uStack_70);
                if ((uVar14 & (uStack_70 ^ 0xffffffffffffffff)) != 0) {
                    uStack_78 = uStack_70;
                    uVar14 = uStack_70;
                }
            }
            uVar13 = *(puVar12 + 6);
            if (((**(puVar12 + 10) >> 0x16 & 1) == 0) && (*(puVar12 + 6) = uVar14, (**(puVar12 + 10) >> 0x16 & 1) != 0)
               ) {
                if (*0x8001000 != 0) goto code_r0x08008ec0;
                *(puVar12 + 6) = uVar13;
            }
            *param_4 = 1;
            if (*0x8001000 != 0) {
                _printk(0x8003018,&uStack_78);
            }
        }
    }
code_r0x08008d6c:
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar11 = *puVar1;
        cVar6 = '\x01';
        bVar7 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
            *puVar1 = uVar11 - 1;
            cVar6 = ExclusiveMonitorsStatus();
        }
    } while (cVar6 != '\0');
    if (uVar11 == 1) {
        DataMemoryBarrier(2,1);
        __put_task_struct(param_2);
    }
    else if (uVar11 < 1) {
        refcount_warn_saturate(puVar1,3);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail();
code_r0x08008ec0:
    //WARNING: Does not return
    pcVar9 = SoftwareBreakpoint(0x800,0x8008ec4);
    (*pcVar9)();
}


// ===== sym.register_update_perflock_freq_hook.cfi_jt @ 0x08005df0 (size 8) =====

void sym.register_update_perflock_freq_hook.cfi_jt(ulong param_1)

{
    *0x8016000 = param_1;
    return;
}


// ===== sym.mi_set_cpus_allowed_comm.cfi_jt @ 0x08005df8 (size 8) =====

void sym.mi_set_cpus_allowed_comm.cfi_jt(ulong param_1,ulong param_2,ulong *param_3)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = get_mi_task_struct(param_2);
    if (iVar1 != 0) {
        *(iVar1 + 0x10) = *(iVar1 + 0x10) & 0xfffffffd;
        *(iVar1 + 0x18) = *param_3;
    }
    return;
}


// ===== sym.mi_select_task_rq_fair.cfi_jt @ 0x08005e00 (size 8) =====

void sym.mi_select_task_rq_fair.cfi_jt(ulong *param_1,ulong param_2,ulong param_3,uint param_4)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    code *pcVar5;
    int iVar6;
    uint uVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong unaff_x30;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    uStack_50 = 0;
    if ((param_1 != NULL) && (puVar1 = param_1 + 7, *puVar1 != 0)) {
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar2 = *puVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar2 == 0) {
            uVar10 = 2;
code_r0x080093d4:
            refcount_warn_saturate(puVar1,uVar10);
        }
        else if ((uVar2 + 1 | uVar2) < 0) {
            uVar10 = 1;
            goto code_r0x080093d4;
        }
        iVar8 = get_mi_task_struct(param_1);
        if (iVar8 == 0) {
            sym.put_task_struct_1(param_1);
        }
        else {
            iVar6 = sym.unbind_cpu_affinity_task(param_1);
            uVar2 = *(iVar8 + 0x10);
            if (iVar6 == 0) {
                if ((uVar2 >> 1 & 1) != 0) {
                    *(iVar8 + 0x10) = uVar2 & 0xfffffffd;
                    uVar12 = param_1[0x87];
                    uVar11 = uVar12;
                    if ((*param_1 >> 0x16 & 1) == 0) {
                        uVar11 = *(iVar8 + 0x18);
                        param_1[0x87] = uVar11;
                        if ((*param_1 >> 0x16 & 1) != 0) {
                            if (*0x8001000 != 0) {
    //WARNING: Does not return
                                pcVar5 = SoftwareBreakpoint(0x800,0x800944c);
                                (*pcVar5)();
                            }
                            param_1[0x87] = uVar12;
                            uVar11 = uVar12;
                        }
                    }
code_r0x080092b0:
                    uVar7 = __sw_hweight64(uVar11 & 0xffffffff);
                    *(param_1 + 0x424) = uVar7;
                }
            }
            else if ((uVar2 >> 1 & 1) == 0) {
                *(iVar8 + 0x10) = uVar2 | 2;
                uVar10 = *(iVar8 + 0x18);
                if (((**(iVar8 + 0x28) >> 0x16 & 1) == 0) &&
                   (*(iVar8 + 0x18) = param_1[0x87], (**(iVar8 + 0x28) >> 0x16 & 1) != 0)) {
                    if (*0x8001000 != 0) goto code_r0x08009444;
                    *(iVar8 + 0x18) = uVar10;
                }
                __rcu_read_lock();
                uVar2 = *(param_1[0xf2] + 4);
                __rcu_read_unlock();
                if (((obj.cluster_core_init_suc == 0x1) && (iVar9 = get_mi_task_struct(param_1), iVar9 != 0)) &&
                   ((*param_1 >> 0x16 & 1) == 0)) {
                    if ((*0x8001000 == 0) || (uVar11 = _update_rq_clock, *0x8001000 != uVar2)) {
                        if ((*(iVar9 + 0x10) >> 2 & 1) == 0) {
                            if (0xc34 < uVar2 >> 6) goto code_r0x08009324;
                            uVar11 = uVar2 >> 6;
                            uVar12 = 1L << (uVar2 & 0x3f);
                            if ((*(obj.cluster_affinity_uid_mlist + uVar11 * 8) & uVar12) == 0) {
                                if ((*(uVar11 * 8 + 0x800a790) & uVar12) == 0) {
                                    if ((*(uVar11 * 8 + 0x8010938) & uVar12) == 0) goto code_r0x08009324;
                                    iVar8 = 3;
                                }
                                else {
                                    iVar8 = 1;
                                }
                            }
                            else {
                                iVar8 = 2;
                            }
                            uVar11 = *(obj.cluster_affinity_cpumask + iVar8 * 8);
                        }
                        else {
                            uStack_50 = *(iVar9 + 0x20);
                            uVar11 = uStack_50;
                            if (*0x8001000 != 0) {
                                _printk(0x8002d88,*(param_1 + 0xbb),param_1 + 0xf5,&uStack_50);
                                uVar11 = uStack_50;
                            }
                        }
                    }
                    uStack_50 = uVar11;
                    uVar10 = param_1[0x87];
                    uVar11 = uStack_50;
                    if (((*param_1 >> 0x16 & 1) == 0) && (param_1[0x87] = uStack_50, (*param_1 >> 0x16 & 1) != 0)) {
                        if (*0x8001000 != 0) {
    //WARNING: Does not return
                            pcVar5 = SoftwareBreakpoint(0x800,0x8009450);
                            (*pcVar5)();
                        }
                        param_1[0x87] = uVar10;
                    }
                    goto code_r0x080092b0;
                }
code_r0x08009324:
                *(iVar8 + 0x10) = *(iVar8 + 0x10) & 0xfffffffd;
            }
            if (*0x8001000 != 0) {
                _printk(0x80025a2,param_1 + 0xf5,*(param_1 + 0xbb),param_1[0x87],*(param_1 + 0x424));
            }
            pcVar5 = CONCAT44(*0x8001004,*0x8001000);
            if (pcVar5 != NULL) {
                __cfi_slowpath_diag(0x544af760e34e6c4f,pcVar5,0x80017e0);
                (*pcVar5)(param_1,param_4);
            }
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar2 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar2 == 1) {
                DataMemoryBarrier(2,1);
                __put_task_struct(param_1);
            }
            else if (uVar2 < 1) {
                refcount_warn_saturate(puVar1,3);
            }
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail();
code_r0x08009444:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x800,0x8009448);
    (*pcVar5)();
}


// ===== sym.get_metis_limit.cfi_jt @ 0x08005e08 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800f26c)
//WARNING: Removing unreachable block (ram,0x0800f290)
//WARNING: Removing unreachable block (ram,0x0800f2d4)
//WARNING: Removing unreachable block (ram,0x0800f2e0)
//WARNING: Removing unreachable block (ram,0x0800f2f0)
//WARNING: Removing unreachable block (ram,0x0800f308)
//WARNING: Removing unreachable block (ram,0x0800f330)
//WARNING: Removing unreachable block (ram,0x0800f338)
//WARNING: Removing unreachable block (ram,0x0800f370)
//WARNING: Removing unreachable block (ram,0x0800f310)
//WARNING: Removing unreachable block (ram,0x0800f318)
//WARNING: Removing unreachable block (ram,0x0800f374)
//WARNING: Removing unreachable block (ram,0x0800f320)

ulong sym.get_metis_limit.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    return 0xffffffffffffffff;
}


// ===== sym.before_enqueue_vip_task.cfi_jt @ 0x08005e10 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800d948)
//WARNING: Removing unreachable block (ram,0x0800d958)
//WARNING: Removing unreachable block (ram,0x0800d994)

void sym.before_enqueue_vip_task.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3)

{
    uint32_t arg1;
    int iVar1;
    uint32_t arg1_00;
    code *pcVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = get_mi_task_struct(param_3);
    if (iVar4 != 0) {
        if (obj.fas_ktime_suspended == 0x1) {
            iVar5 = *0x8016000;
        }
        else {
            iVar5 = sched_clock();
        }
        *(iVar4 + 0x1a0) = iVar5;
        pcVar2 = CONCAT44(*0x8016004,*0x8016000);
        *(iVar4 + 10) = 1;
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x176c3ca4ecb522c8,pcVar2,0x80018e0);
            (*pcVar2)(param_3,param_2);
        }
        if (((((*(iVar4 + 0x10) >> 6 & 1) != 0) && (*(iVar4 + 0x28) != 0)) &&
            (iVar5 = get_mi_task_struct(), iVar5 != 0)) && ((*0x8016000 != 0 && (*(iVar5 + 0xc) == *0x8016000)))) {
            if ((*(iVar4 + 0x10) >> 6 & 1) != 0) {
                *(iVar4 + 0x10) = *(iVar4 + 0x10) & 0xffffff9f | 0x20;
            }
            if (*0x8016000 != 0) {
                _printk(0x8002f81,*(*(iVar4 + 0x28) + 0x5d8));
            }
        }
        uVar6 = sym.metis_xxx_task.llvm.15631448280779817747(param_3,0x100);
        if ((uVar6 & 1) != 0) {
            iVar1 = *(param_2 + 0xba8);
            get_cluster_type(*0x8016000);
            get_cluster_type(iVar1);
            *0x8016000 = iVar1;
        }
        iVar5 = get_mi_task_struct(param_3);
        if ((iVar5 != 0) && ((*(iVar5 + 0x12) & 1) != 0)) {
            arg1_00 = *(iVar4 + 0x1c0);
            uVar3 = get_cluster_type(*(param_2 + 0xba8));
            arg1 = 0;
            if (uVar3 < 4) {
                arg1 = uVar3;
            }
            if (*0x8016000 != 0) {
                _printk(0x8002cc3,*(param_3 + 0x5d8),arg1_00,arg1);
            }
            if (arg1_00 != 0xffffffff) {
                sym.restore_boost_cluster(arg1_00);
            }
            if (arg1_00 != arg1) {
                sym.boost_cluster(arg1,1,1,1);
                *(iVar4 + 0x1c0) = arg1;
            }
        }
        if (*0x8016000 != 0) {
            _printk(0x8003797,*(param_3 + 0x5d8));
        }
    }
    return;
}


// ===== sym.walt_get_indicies_hook.877fa0db602420247113046bf2a65355.cfi_jt @ 0x08005e18 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0801058c)
//WARNING: Removing unreachable block (ram,0x080106bc)
//WARNING: Removing unreachable block (ram,0x080106cc)
//WARNING: Removing unreachable block (ram,0x0801070c)
//WARNING: Removing unreachable block (ram,0x0801059c)
//WARNING: Removing unreachable block (ram,0x080105dc)

void sym.walt_get_indicies_hook.877fa0db602420247113046bf2a65355.cfi_jt
               (ulong *param_1,uint *param_2,uint *param_3,ulong param_4,uchar *param_5)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uchar uVar4;
    uint uVar5;
    uint uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8016000 == 0) {
        return;
    }
    if ((*param_1 >> 0x16 & 1) != 0) {
        uVar4 = 0;
        goto code_r0x08010528;
    }
    iVar2 = get_mi_task_struct(param_1);
    if ((iVar2 != 0) && ((*(iVar2 + 0x12) >> 4 & 1) != 0)) {
        return;
    }
    uVar3 = sym.metis_clboost_task(param_1);
    if ((uVar3 & 1) == 0) {
        iVar2 = get_mi_task_struct(param_1);
        if ((iVar2 != 0) && ((*(iVar2 + 0x11) >> 2 & 1) != 0)) {
            if ((_seq_read - *(iVar2 + 0x1b8) < 0) || (_seq_read - *(iVar2 + 0x198) < 0)) {
                uVar6 = 1;
                uVar5 = 1;
                goto code_r0x0801051c;
            }
            if (((param_1 != NULL) && (iVar2 = get_mi_task_struct(param_1), iVar1 = *0x8016000, iVar2 != 0)) &&
               (*(iVar2 + 0x10) = *(iVar2 + 0x10) & 0xfffffbff, iVar1 != 0)) {
                _printk(0x8002dd2,*(param_1 + 0xbb),param_1 + 0xf5);
            }
        }
        uVar3 = sym.metis_xxx_task.llvm.15631448280779817747(param_1,0x100);
        if ((uVar3 & 1) == 0) {
            uVar3 = sym.metis_xxx_task.llvm.15631448280779817747(param_1,0x200);
            if ((uVar3 & 1) != 0) {
                uVar4 = 1;
                *param_2 = 1;
                *param_3 = 2;
                goto code_r0x08010528;
            }
            uVar3 = sym.metis_xxx_task.llvm.15631448280779817747(param_1,0x700);
            if ((uVar3 & 1) != 0) {
                uVar4 = 1;
                *param_2 = 1;
                *param_3 = 1;
                goto code_r0x08010528;
            }
            uVar3 = sym.metis_xxx_task.llvm.15631448280779817747(param_1,0x10);
            if ((((uVar3 & 1) == 0) && (uVar3 = sym.in_frame_boost(uVar3), (uVar3 & 1) == 0)) &&
               (uVar3 = sym.metis_bg_task(param_1), (uVar3 & 1) == 0)) {
                return;
            }
            uVar6 = 0;
            uVar5 = 0;
        }
        else {
            uVar5 = 2;
            uVar6 = 1;
        }
    }
    else {
        uVar5 = 2;
        uVar6 = 1;
    }
code_r0x0801051c:
    *param_2 = uVar6;
    *param_3 = uVar5;
    uVar4 = 1;
code_r0x08010528:
    *param_5 = uVar4;
    return;
}


// ===== sym.fboost_run.b1e49afbd87934ed80dab30c248d2d24.cfi_jt @ 0x08005e20 (size 8) =====

ulong sym.fboost_run.b1e49afbd87934ed80dab30c248d2d24.cfi_jt(void)

{
    code *pcVar1;
    int iVar2;
    uint uVar3;
    int64_t iVar4;
    bool bVar5;
    bool bVar6;
    int iVar7;
    ulong uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong uVar11;
    ulong *in_x18;
    int64_t arg1;
    code *pcVar12;
    int *piVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    do {
        *(iVar4 + 0x28) = 1;
        DataMemoryBarrier(2,3);
        uVar8 = _raw_spin_lock_irqsave(obj.fboost_pending_lock);
        if (obj.fboost_pending == 0x0) {
            _raw_spin_unlock_irqrestore(obj.fboost_pending_lock,uVar8);
            schedule();
            uVar9 = kthread_should_stop();
            if ((uVar9 & 1) != 0) {
                return 0;
            }
            uVar8 = _raw_spin_lock_irqsave(obj.fboost_pending_lock);
        }
        *(iVar4 + 0x28) = 0;
        DataMemoryBarrier(2,3);
        obj.fboost_pending = 0x0;
        iVar10 = _raw_spin_unlock_irqrestore(obj.fboost_pending_lock,uVar8);
        if (_obj.fboost_exe_mode != 0) {
            arg1 = 1;
            bVar5 = false;
            do {
                pcVar1 = obj.bcluster_stat + arg1 * 8;
                piVar13 = arg1 * 8 + 0x8016b3c;
                iVar2 = *piVar13;
                if (*pcVar1 != 0 || iVar2 != 0) {
                    if (*0x8016000 != 0) {
                        uVar3 = *(obj.min_cluster_freqs + arg1 * 4);
                        iVar10 = ktime_get();
                        iVar10 = _printk(0x8001e7a,arg1,iVar2,uVar3,0x196,iVar10 / 1000);
                        if (*0x8016000 != 0) {
                            *(obj.cluster_states + arg1 * 4) = 1;
                            iVar10 = sym.reset_perflock_req(1);
                        }
                    }
                    if ((*pcVar1 != 0) && (pcVar12 = CONCAT44(*0x8016004,*0x8016000), pcVar12 != NULL)) {
                        __cfi_slowpath_diag(0x9c2ff6c65e783d8c,pcVar12,0x8001800);
                        iVar10 = (*pcVar12)(arg1,1);
                    }
                    if (*piVar13 == 2) {
                        uVar9 = 0;
code_r0x08014a3c:
                        iVar10 = sym.metis_update_policy_online(arg1,uVar9,0);
                    }
                    else if (*piVar13 == 1) {
                        uVar9 = *(obj.min_cluster_freqs + arg1 * 4);
                        goto code_r0x08014a3c;
                    }
                    *piVar13 = 0;
                    pcVar12 = obj.rem_cluster_works + arg1 * 0x90;
                    *pcVar1 = 0;
                    if ((*pcVar12 & 1) != 0) {
                        iVar10 = cancel_delayed_work(pcVar12);
                    }
                    iVar2 = *0x8001000;
                    iVar7 = sym.get_fboost_duration(iVar10);
                    if (*0x8016000 != 0) {
                        _printk(0x80029e7,iVar2 - iVar7,0x1b5);
                    }
                    uVar8 = CONCAT44(*0x8016004,*0x8016000);
                    uVar11 = __msecs_to_jiffies(iVar2 - iVar7);
                    iVar10 = queue_delayed_work_on(0x20,uVar8,pcVar12,uVar11);
                }
                arg1 = 2;
                bVar6 = !bVar5;
                bVar5 = true;
            } while (bVar6);
        }
        if (*0x8016b34 != 0) {
            uVar9 = hrtimer_active(0x8016bc8);
            if ((uVar9 & 1) != 0) {
                hrtimer_cancel(0x8016bc8);
            }
            if (*0x8016000 != 0) {
                *0x8016000 = 0;
                sym.reset_perflock_req(0);
            }
            sym.metis_update_policy_online(1,0,0xffffffff);
            pcVar1 = CONCAT44(*0x8016004,*0x8016000);
            if (pcVar1 != NULL) {
                __cfi_slowpath_diag(0x9c2ff6c65e783d8c,pcVar1,0x80018a0);
                (*pcVar1)(1,0);
            }
            if (*0x8016000 != 0) {
                iVar10 = ktime_get();
                _printk(0x8003574,0x104,iVar10 / 1000);
            }
            *0x8001000 = 0xffffffffffffffff;
            if ((*0x8016000 & 1) != 0) {
                cancel_delayed_work(0x8016d08);
            }
            uVar9 = hrtimer_active(0x8016c20);
            if ((uVar9 & 1) != 0) {
                hrtimer_cancel(0x8016c20);
            }
            if (*0x8016000 != 0) {
                *0x8016000 = 0;
                sym.reset_perflock_req(0);
            }
            sym.metis_update_policy_online(2,0,0xffffffff);
            pcVar1 = CONCAT44(*0x8016004,*0x8016000);
            if (pcVar1 != NULL) {
                __cfi_slowpath_diag(0x9c2ff6c65e783d8c,pcVar1,0x80018a0);
                (*pcVar1)(2,0);
            }
            if (*0x8016000 != 0) {
                iVar10 = ktime_get();
                _printk(0x8003574,0x104,iVar10 / 1000);
            }
            *0x8001000 = 0xffffffffffffffff;
            if ((*0x8016000 & 1) != 0) {
                cancel_delayed_work(0x8016d98);
            }
        }
        _obj.fboost_exe_mode = 0;
        *0x8016b34 = 0;
    } while( true );
}


// ===== sym.mi_cpuset_fork.cfi_jt @ 0x08005e28 (size 8) =====

void sym.mi_cpuset_fork.cfi_jt(ulong param_1,ulong param_2,uint *param_3)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sp_el0;
    iVar2 = get_mi_task_struct(uVar1);
    if ((iVar2 == 0) || ((*(iVar2 + 0x10) >> 1 & 1) == 0)) {
        *param_3 = 0;
    }
    else {
        *param_3 = 1;
        set_cpus_allowed_ptr(param_2,iVar2 + 0x18);
    }
    return;
}


// ===== sym.register_game_binder_f.cfi_jt @ 0x08005e30 (size 8) =====

void sym.register_game_binder_f.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002f1b,"register_game_binder_f");
    *0x8001000 = param_1;
    return;
}


// ===== sym.register_corectl_boost_hook.cfi_jt @ 0x08005e38 (size 8) =====

void sym.register_corectl_boost_hook.cfi_jt(ulong param_1)

{
    *0x8016000 = param_1;
    return;
}


// ===== sym.cpu_to_cluster.cfi_jt @ 0x08005e40 (size 8) =====

uint32_t sym.cpu_to_cluster.cfi_jt(void)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = get_cluster_type();
    uVar1 = 0;
    if (uVar2 < 4) {
        uVar1 = uVar2;
    }
    return uVar1;
}


// ===== sym.metis_set_common_persist_vip.cfi_jt @ 0x08005e48 (size 8) =====

void sym.metis_set_common_persist_vip.cfi_jt(int64_t param_1)

{
    uint32_t arg1;
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _printk(0x8001b40);
    }
    else {
        arg1 = *(param_1 + 0x5d8);
        _raw_spin_lock(obj.persist_vip_lock);
        iVar1 = sym.__set_common_persist_vip(arg1,param_1);
        _raw_spin_unlock(obj.persist_vip_lock);
        if (iVar1 == 0) {
            _printk(0x8002018,arg1,param_1 + 0x7a8);
        }
        else {
            _printk(0x8002edb,arg1,iVar1);
        }
    }
    return;
}


// ===== sym.mi_resched_vip_task.cfi_jt @ 0x08005e50 (size 8) =====

uint64_t sym.mi_resched_vip_task.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uVar2 = 0;
    if (param_1 != 0) {
        iVar1 = task_rq_lock(param_1,&uStack_38);
        update_rq_clock();
        if ((*(iVar1 + 0xaa0) != param_1) && (*(param_1 + 0x78) == 1)) {
            deactivate_task(iVar1,param_1,10);
            activate_task(iVar1,param_1,10);
            resched_curr(iVar1);
        }
        if (2 < *(iVar1 + 0xac8)) {
            uStack_30 = CONCAT44(uStack_30._4_4_,4);
        }
        raw_spin_rq_unlock(iVar1);
        uVar2 = _raw_spin_unlock_irqrestore(param_1 + 0x884,uStack_38);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        iVar1 = __stack_chk_fail();
        *extraout_x18 = sym.mi_lock_vip_task;
        uVar2 = 0;
        if (iVar1 != 0) {
            iVar3 = get_mi_task_struct();
            uVar2 = 0;
            if (iVar3 != 0) {
                if (_seq_read - *(iVar3 + 0x1b8) < 0) {
                    uVar2 = *(iVar3 + 0x10) >> 0xc & 1;
                }
                else {
                    if ((*(iVar3 + 0x10) >> 0xc & 1) != 0) {
                        iVar3 = get_mi_task_struct(iVar1);
                        if (iVar3 == 0) {
                            return 0;
                        }
                        __rcu_read_lock();
                        *(iVar3 + 0x10) = *(iVar3 + 0x10) & 0xffffefff;
                        __rcu_read_unlock();
                        if (*0x8001000 != 0) {
                            _printk(0x8001b79,"lock",*(iVar1 + 0x5d8),iVar1 + 0x7a8);
                        }
                    }
                    uVar2 = 0;
                }
            }
        }
        return uVar2;
    }
    return uVar2;
}


// ===== sym.metis_link_ioctl.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt @ 0x08005e58 (size 8) =====

ulong sym.metis_link_ioctl.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt(ulong param_1,char param_2,int64_t param_3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_40 = 0;
    if (*0x8016000 == 0) goto code_r0x08008220;
    if (*0x8001000 != 0) {
        _printk(0x8003313,param_2);
    }
    if (param_2 == '\x01') {
        *0x8001000 = *0x8001000 + 1;
        sym.do_clean_art_mutex_vip_task();
        if (*0x8001000 == 0) goto code_r0x08008220;
        uVar2 = 0x8003495;
    }
    else {
        if (param_2 != '\0') goto code_r0x08008220;
        iVar1 = sym._copy_from_user(&uStack_40,param_3);
        if (iVar1 == 0) {
            *0x8001000 = *0x8001000 + 1;
            sym.do_set_art_mutex_vip_task(uStack_40 & 0xffffffff);
            if (*0x8001000 != 0) {
                _printk(0x80031f6,uStack_40);
            }
            goto code_r0x08008220;
        }
        uVar2 = 0x8003476;
    }
    _printk(uVar2);
code_r0x08008220:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return 0;
    }
    __stack_chk_fail();
    return 0;
}


// ===== sym.metis_ioctl.877fa0db602420247113046bf2a65355.cfi_jt @ 0x08005e60 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08010c48)
//WARNING: Removing unreachable block (ram,0x08010974)
//WARNING: Removing unreachable block (ram,0x080109b0)
//WARNING: Removing unreachable block (ram,0x08011008)
//WARNING: Removing unreachable block (ram,0x080109b8)
//WARNING: Removing unreachable block (ram,0x08010964)
//WARNING: Removing unreachable block (ram,0x08010a28)
//WARNING: Removing unreachable block (ram,0x08010c54)
//WARNING: Removing unreachable block (ram,0x08010c90)
//WARNING: Removing unreachable block (ram,0x08011034)
//WARNING: Removing unreachable block (ram,0x08010c98)

void sym.metis_ioctl.877fa0db602420247113046bf2a65355.cfi_jt(ulong param_1,uint32_t param_2,int64_t param_3)

{
    uint uVar1;
    uint uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint32_t uVar11;
    ulong *in_x18;
    uint64_t unaff_x19;
    uint32_t *unaff_x20;
    uint64_t uVar12;
    ulong unaff_x30;
    ulong uStack_68;
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_58 = *(iVar10 + 0x5e0);
    uStack_68 = 0;
    if (*0x8016000 == 0) {
        uVar7 = 0xffffffffffffffff;
        uVar9 = *0x8016000;
        goto code_r0x08011148;
    }
    unaff_x19 = sp_el0;
    unaff_x20 = param_2 & 0xff;
    uVar1 = *(*(unaff_x19 + 0x798) + 4);
    if (*0x8016000 != 0) {
        uVar2 = *(unaff_x19 + 0x5d8);
        iVar10 = ktime_get();
        _printk(0x8002e75,uVar1,uVar2,0x74a,unaff_x20,iVar10 / 1000);
    }
    uVar7 = 0;
    uVar9 = *0x8016000;
    switch(param_2 & 0xff) {
    case 0:
        obj.vtask_monitor = 0x1;
        iVar8 = ktime_get(0);
        iVar10 = tpidr_el1;
        *0x8016004 = iVar8 / 1000 >> 0x20;
        *0x8016000 = CONCAT44(*0x8016004,*(cpu_number + iVar10));
    case 1:
    case 2:
        if (*0x8016000 != 0) {
            _printk(0x8003a03,*0x8016000 & 0xffffffff,uVar1);
        }
        *0x8016000 = CONCAT44(*0x8016004,uVar1);
        sym.metis_set_vip_thread(unaff_x19,unaff_x20,1);
        break;
    case 3:
        unaff_x19 = 0x8016000;
        unaff_x20 = 0x8016000;
        obj.vtask_monitor = 0x0;
        iVar10 = ktime_get(0);
        bVar4 = *0x8016000 != 0;
        *0x8016000 = iVar10 / 1000;
        if (bVar4) {
            _printk(0x8001f3c,0);
        }
        break;
    default:
        goto code_r0x08011148;
    case 6:
        iVar10 = ktime_get(0);
        unaff_x19 = 0x8016000;
        unaff_x20 = 0x8016000;
        uVar7 = 0;
        uVar9 = iVar10 / 1000;
        if (uVar9 <= *0x8016000) goto code_r0x08011148;
        if (*0x8016000 <= uVar9) goto code_r0x08011148;
        uVar12 = *0x8001000;
        *0x8016000 = uVar9;
        iVar10 = ktime_get(0);
        if ((uVar12 * -1000 - uVar9) + iVar10 / 1000 < 0) {
            if (*0x8016000 != 0) {
                _printk(0x80022e4,*0x8016000,*0x8016000,*0x8016000);
            }
            unaff_x20 = 0x8001700;
            unaff_x19 = 0x80016e8;
            *0x80016e8 = *0x8001700;
            sym.restore_boost_cluster(1);
            *0x80016f0 = *0x8001708;
            sym.restore_boost_cluster(2);
            uVar6 = get_cluster_type(*0x8016000 & 0xffffffff);
            uVar11 = 0;
            if (uVar6 < 4) {
                uVar11 = uVar6;
            }
            sym.boost_cluster(uVar11,1,1,0);
            bVar4 = *0x8016000 != 0;
            if (bVar4) {
                _printk("thermal boost limit 1 %lu, 2 %lu\n",*0x80016e8,*0x80016f0);
            }
        }
        break;
    case 7:
        if ((param_2 & 0x3fff0000) == 0x80000) {
            iVar10 = sym._copy_from_user_1(&uStack_68,param_3,8);
            if (iVar10 != 0) goto code_r0x08010ee0;
            __rcu_read_lock();
            unaff_x20 = uStack_68 & 0xffffffff;
            uVar9 = find_task_by_vpid(unaff_x20);
            if (uVar9 == 0) {
                __rcu_read_unlock();
                _printk(0x80035c4,unaff_x20);
                uVar7 = 0xffffffffffffffea;
                uVar9 = *0x8016000;
                goto code_r0x08011148;
            }
            sym.get_task_struct(uVar9);
            if (*0x8016000 != 0) {
                _printk(0x8003708,unaff_x20,uVar9 + 0x7a8,_seq_read,_seq_read + uStack_68._4_4_ * 0xfa);
            }
            __rcu_read_unlock();
            sym.metis_set_vip_thread(uVar9,7,uStack_68 >> 0x20);
            sym.put_task_struct_2(uVar9);
            unaff_x19 = uVar9;
            break;
        }
        goto code_r0x08010f78;
    case 8:
        iVar10 = sym._copy_from_user_1(&uStack_68,param_3,8);
        uVar9 = uStack_68;
        if (iVar10 != 0) {
code_r0x08010ee0:
            uVar7 = 0xfffffffffffffff2;
            uVar9 = *0x8016000;
            goto code_r0x08011148;
        }
        unaff_x20 = uStack_68 & 0xffffffff;
        if ((uStack_68 != 0) && (uStack_68 != *(unaff_x19 + 0x5d8))) {
            if (uStack_68 < 1) goto code_r0x08010f78;
            __rcu_read_lock();
            unaff_x19 = find_task_by_vpid(uVar9 & 0xffffffff);
            __rcu_read_unlock();
        }
        if ((unaff_x19 == 0) || (unaff_x20 = unaff_x19 + 0x38, *unaff_x20 == 0)) goto code_r0x08010f78;
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar11 = *unaff_x20;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar4) {
                *unaff_x20 = uVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar11 == 0) {
            uVar7 = 2;
code_r0x080110a4:
            refcount_warn_saturate(unaff_x20,uVar7);
        }
        else if ((uVar11 + 1 | uVar11) < 0) {
            uVar7 = 1;
            goto code_r0x080110a4;
        }
        uVar11 = (uStack_68._4_4_ * 0xfa) / 1000;
        if ((uStack_68._4_4_ * 0xfa) / 1000 < 0x33) {
            uVar11 = 0x32;
        }
        iVar10 = get_mi_task_struct(unaff_x19);
        if (iVar10 != 0) {
            if (0x7c < uVar11) {
                uVar11 = 0x7d;
            }
            *0x8016000 = _seq_read + uVar11;
            iVar5 = *0x8016000;
            *(iVar10 + 0x1b8) = _seq_read + uVar11;
            *(iVar10 + 0x10) = *(iVar10 + 0x10) | 0x400;
            if (iVar5 != 0) {
                _printk(0x8001ebd,*(unaff_x19 + 0x5d8),unaff_x19 + 0x7a8);
            }
        }
        sym.mi_resched_vip_task(unaff_x19);
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar11 = *unaff_x20;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar4) {
                *unaff_x20 = uVar11 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar11 == 1) {
            DataMemoryBarrier(2,1);
            __put_task_struct(unaff_x19);
        }
        else if (uVar11 < 1) {
            refcount_warn_saturate(unaff_x20,3);
        }
        else {
        }
        if (*0x8016000 != 0) {
            uStack_68._4_4_ = uStack_68 >> 0x20;
            uVar1 = uStack_68._4_4_;
            _printk(0x8002402,*(unaff_x19 + 0x5d8),unaff_x19 + 0x7a8,uVar1);
        }
        break;
    case 9:
        if (*0x8016000 != 0) {
            _printk(0x800254c,*(unaff_x19 + 0x5d8),unaff_x19 + 0x7a8);
        }
        if (unaff_x19 != 0) {
            iVar10 = get_mi_task_struct(unaff_x19);
            uVar7 = 0;
            uVar9 = *0x8016000;
            if (iVar10 == 0) goto code_r0x08011148;
            iVar5 = *0x8016000;
            *(iVar10 + 0x10) = *(iVar10 + 0x10) & 0xfffffbff;
            if (iVar5 != 0) {
                _printk(0x8002dd2,*(unaff_x19 + 0x5d8),unaff_x19 + 0x7a8);
            }
        }
        break;
    case 0xc:
        iVar10 = sym._copy_from_user_1(&uStack_68,param_3,8);
        if (iVar10 != 0) goto code_r0x08010ee0;
        uStack_5c = uStack_68;
        uVar11 = (uStack_68._4_4_ * 0xfa) / 1000;
        if (0x18 < uVar11) {
            uVar11 = 0x19;
        }
        unaff_x19 = uVar11;
        if (*0x8016000 != 0) {
            _printk(0x8003864,uStack_68 & 0xffffffff,unaff_x19);
        }
        sym.mi_vip_task_req(&uStack_5c,1,unaff_x19);
        break;
    case 0xd:
        iVar10 = sym._copy_from_user_1(&uStack_68,param_3,8);
        uVar9 = uStack_68;
        if (iVar10 != 0) goto code_r0x08010ee0;
        iVar5 = uStack_68;
        unaff_x20 = uStack_68 & 0xffffffff;
        __rcu_read_lock();
        if (iVar5 == *(unaff_x19 + 0x5d8)) {
code_r0x08010e2c:
            if ((unaff_x19 != 0) && (unaff_x20 = unaff_x19 + 0x38, *unaff_x20 != 0)) {
                Hint_Prefetch(unaff_x20,2,0,1);
                do {
                    uVar11 = *unaff_x20;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
                    if (bVar4) {
                        *unaff_x20 = uVar11 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                if (uVar11 == 0) {
                    uVar7 = 2;
                }
                else {
                    if (-1 < (uVar11 + 1 | uVar11)) goto code_r0x08010e5c;
                    uVar7 = 1;
                }
                refcount_warn_saturate(unaff_x20,uVar7);
code_r0x08010e5c:
                __rcu_read_unlock();
                if (*0x8016000 != 0) {
                    _printk(0x8001ef9,*(unaff_x19 + 0x5d8),unaff_x19 + 0x7a8);
                }
                iVar10 = get_mi_task_struct(unaff_x19);
                if (iVar10 == 0) goto code_r0x08010e9c;
                goto code_r0x08011198;
            }
        }
        else if (0 < iVar5) {
            unaff_x19 = find_task_by_vpid(uVar9 & 0xffffffff);
            goto code_r0x08010e2c;
        }
        __rcu_read_unlock();
code_r0x08010f78:
        uVar7 = 0xffffffffffffffea;
        uVar9 = *0x8016000;
        goto code_r0x08011148;
    }
    while( true ) {
        uVar7 = 0;
        uVar9 = *0x8016000;
code_r0x08011148:
        *0x8016000 = uVar9;
        iVar10 = sp_el0;
        if (*(iVar10 + 0x5e0) == iStack_58) break;
        iVar10 = __stack_chk_fail(uVar7);
code_r0x08011198:
        Hint_Prefetch(0x8016f18,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(0x8016f18,0x10);
            if (bVar4) {
                cVar3 = ExclusiveMonitorsStatus();
                _obj.mi_dynamic_vip_num = _obj.mi_dynamic_vip_num + -1;
            }
        } while (cVar3 != '\0');
        *(iVar10 + 0x10) = *(iVar10 + 0x10) & 0xffff7fff;
code_r0x08010e9c:
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar11 = *unaff_x20;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar4) {
                *unaff_x20 = uVar11 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar11 == 1) {
            DataMemoryBarrier(2,1);
            __put_task_struct(unaff_x19);
        }
        else if (uVar11 < 1) {
            refcount_warn_saturate(unaff_x20,3);
        }
    }
    return;
}


// ===== sym.metis_update_top_task_info.cfi_jt @ 0x08005e68 (size 8) =====

void sym.metis_update_top_task_info.cfi_jt
               (int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,uint64_t param_5)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    code *pcVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong *in_x18;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8016000 == 0) {
        return;
    }
    if ((*(*(param_2 + 0xaa0) + 0x3c) >> 1 & 1) != 0) {
        return;
    }
    if (*0x8001000 == 0) {
        *0x8001000 = 0;
    }
    uVar1 = *(param_2 + 0xba8);
    if (0x1f < uVar1) goto code_r0x08011870;
    iVar8 = *(__per_cpu_offset + uVar1 * 8);
    iVar6 = *(iVar8 + 0x8014df8);
    uVar5 = *(iVar8 + 0x8014e00);
    uVar11 = param_4 - iVar6;
    if ((param_4 < uVar5) || (uVar11 < 0)) {
        _printk_deferred("Metis-BUG CPU%d; wclock=%llu(0x%llx) l_clock=%llu(0x%llx), w_start=%llu(0x%llx)",uVar1,
                         param_4,param_4,uVar5,uVar5,iVar6,iVar6);
    }
    uVar5 = *0x8001000;
    *(iVar8 + 0x8014e00) = param_4;
    if (uVar5 <= uVar11) {
        iVar2 = 0;
        if (uVar5 != 0) {
            iVar2 = uVar11 / uVar5;
        }
        *(iVar8 + 0x8014df8) = *(iVar8 + 0x8014df8) + iVar2 * uVar5;
        if (0x1f < *(param_2 + 0xba8)) goto code_r0x08011870;
        iVar6 = *(__per_cpu_offset + *(param_2 + 0xba8) * 8);
        if (iVar2 < 2) {
            *(iVar6 + 0x8014e18) = *(iVar6 + 0x8014e40);
            *(iVar6 + 0x8014e20) = *(iVar6 + 0x8014e48);
            *(iVar6 + 0x8014e28) = *(iVar6 + 0x8014e50);
            *(iVar6 + 0x8014e08) = *(iVar6 + 0x8014e30);
            *(iVar6 + 0x8014e10) = *(iVar6 + 0x8014e38);
            *(iVar6 + 0x8014e30) = 0;
            *(iVar6 + 0x8014de8) = *(iVar6 + 0x8014df0);
            *(iVar6 + 0x8014df0) = 0;
            *0x8001000 = *0x8001000 * 1000000000 >> 1;
        }
        else {
            *(iVar6 + 0x8014e08) = 0;
            *(iVar6 + 0x8014e30) = 0;
            *(iVar6 + 0x8014de8) = 0;
            *(iVar6 + 0x8014df0) = 0;
        }
    }
    if (0x1f < *(param_2 + 0xba8)) goto code_r0x08011870;
    iVar8 = *(__per_cpu_offset + *(param_2 + 0xba8) * 8);
    iVar6 = get_mi_task_struct(param_1);
    if (iVar6 == 0) {
        return;
    }
    uVar5 = *(iVar8 + 0x8014df8);
    uVar1 = 1000000000;
    if (*0x8001000 != 0) {
        uVar1 = *0x8001000;
    }
    uVar11 = uVar1;
    if ((param_3 & 1) == 0) {
        if (uVar5 <= param_5) {
            return;
        }
        if (*(param_2 + 0xba8) < 0x20) {
            iVar8 = *(__per_cpu_offset + *(param_2 + 0xba8) * 8);
            uVar1 = *(iVar6 + 0x1a8);
            uVar5 = uVar1;
            iVar6 = get_mi_task_struct(param_1);
            if (uVar1 == 0) {
                return;
            }
            if ((*(param_1 + 0x3c) >> 1 & 1) != 0) {
                return;
            }
            if (iVar6 == 0) {
                return;
            }
            if (*(iVar8 + 0x8014de8) <= uVar5) {
                *(iVar8 + 0x8014de8) = uVar5;
                *(iVar8 + 0x8014e08) = *(param_1 + 0x5d8);
                uVar9 = *(param_1 + 0x7a8);
                *(iVar8 + 0x8014e14) = *(param_1 + 0x7b0);
                *(iVar8 + 0x8014e0c) = uVar9;
            }
            *(iVar6 + 0x1a8) = 0;
            *(iVar6 + 0x1b0) = uVar5;
            return;
        }
        goto code_r0x08011870;
    }
    uVar10 = uVar5 - param_5;
    if (uVar5 < param_5 || uVar10 == 0) {
        if (0x1f < *(param_2 + 0xba8)) goto code_r0x08011870;
        iVar8 = *(__per_cpu_offset + *(param_2 + 0xba8) * 8);
        iVar6 = get_mi_task_struct(param_1);
        if (iVar6 == 0) {
            return;
        }
        iVar7 = *(iVar6 + 0x1a8);
        iVar3 = -param_5;
        goto code_r0x0801179c;
    }
    iVar2 = 0;
    if (uVar11 != 0) {
        iVar2 = uVar10 / uVar11;
    }
    if (iVar2 == 0) {
        uVar10 = *(iVar6 + 0x1a8) + uVar10;
        if (*0x8001000 < uVar10) {
            uVar10 = *0x8001000;
        }
        *(iVar6 + 0x1a8) = uVar10;
        if (0x1f < *(param_2 + 0xba8)) goto code_r0x08011870;
        iVar6 = *(__per_cpu_offset + *(param_2 + 0xba8) * 8);
        iVar8 = get_mi_task_struct(param_1);
        if (((uVar10 != 0) && ((*(param_1 + 0x3c) >> 1 & 1) == 0)) && (iVar8 != 0)) {
            uVar11 = uVar10 & 0xffffffff;
            goto code_r0x0801174c;
        }
    }
    else {
        if (0x1f < *(param_2 + 0xba8)) goto code_r0x08011870;
        iVar6 = *(__per_cpu_offset + *(param_2 + 0xba8) * 8);
        iVar8 = get_mi_task_struct(param_1);
        if (((*(param_1 + 0x3c) >> 1 & 1) == 0) && (iVar8 != 0)) {
code_r0x0801174c:
            if (*(iVar6 + 0x8014de8) <= uVar11) {
                *(iVar6 + 0x8014de8) = uVar11;
                *(iVar6 + 0x8014e08) = *(param_1 + 0x5d8);
                uVar9 = *(param_1 + 0x7a8);
                *(iVar6 + 0x8014e14) = *(param_1 + 0x7b0);
                *(iVar6 + 0x8014e0c) = uVar9;
            }
            *(iVar8 + 0x1a8) = 0;
            *(iVar8 + 0x1b0) = uVar11;
        }
    }
    if (*(param_2 + 0xba8) < 0x20) {
        iVar8 = *(__per_cpu_offset + *(param_2 + 0xba8) * 8);
        iVar6 = get_mi_task_struct(param_1);
        if (iVar6 == 0) {
            return;
        }
        iVar7 = *(iVar6 + 0x1a8);
        iVar3 = -uVar5;
code_r0x0801179c:
        uVar11 = *0x8001000;
        uVar5 = iVar7 + param_4 + iVar3;
        *(iVar6 + 0x1a8) = uVar5;
        if (uVar11 < uVar5) {
            *(iVar6 + 0x1a8) = uVar11;
            uVar5 = uVar11;
        }
        if (*(iVar8 + 0x8014df0) < uVar5) {
            *(iVar8 + 0x8014df0) = uVar5;
            *(iVar8 + 0x8014e30) = *(param_1 + 0x5d8);
            uVar9 = *(param_1 + 0x7a8);
            *(iVar8 + 0x8014e3c) = *(param_1 + 0x7b0);
            *(iVar8 + 0x8014e34) = uVar9;
        }
        return;
    }
code_r0x08011870:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8011874);
    (*pcVar4)();
}


// ===== sym.seq_lseek.cfi_jt @ 0x08005e70 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.register_mi_find_energy_efficient_cpu.cfi_jt @ 0x08005e78 (size 8) =====

void sym.register_mi_find_energy_efficient_cpu.cfi_jt(uint32_t param_1,ulong param_2)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 < 2) {
        _printk(0x8002b2d,"register_mi_find_energy_efficient_cpu");
        if (1 < param_1) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x800f000);
            (*pcVar1)();
        }
        *(obj.wake_render_func + param_1 * 8) = param_2;
    }
    else {
        _printk(0x8002852);
    }
    return;
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x08005e80 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.register_rvh_mi_try_to_wake_up.cfi_jt @ 0x08005e88 (size 8) =====

void sym.register_rvh_mi_try_to_wake_up.cfi_jt(uint32_t param_1,ulong param_2)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 < 2) {
        *in_x18 = unaff_x30;
        *(obj.mi_try_to_wake_up_func + param_1 * 8) = param_2;
        _printk(0x8002049,"register_rvh_mi_try_to_wake_up",param_1);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8006984);
    (*pcVar1)();
}


// ===== sym.mi_futex_wake_traverse_plist.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt @ 0x08005e90 (size 8) =====

void sym.mi_futex_wake_traverse_plist.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt
               (ulong param_1,int64_t *param_2,ulong param_3,int64_t *param_4,uint32_t param_5)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    int iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong uVar9;
    int64_t *piVar10;
    ulong *in_x18;
    int64_t *piVar11;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 != *param_2) {
        iVar5 = sp_el0;
        piVar10 = *param_2;
        do {
            piVar11 = *piVar10;
            if ((((param_4 != NULL) && (piVar10 + 4 != NULL)) && (piVar10[5] == param_4[1])) &&
               ((piVar10[4] == *param_4 && (piVar10[6] == param_4[2])))) {
                if (piVar10[7] != 0) {
                    return;
                }
                if (piVar10[8] != 0) {
                    return;
                }
                if ((*(piVar10 + 10) & param_5) != 0) {
                    arg1 = piVar10[2];
                    puVar1 = arg1 + 0x38;
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        uVar2 = *puVar1;
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                            *puVar1 = uVar2 + 1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    if (uVar2 == 0) {
                        uVar9 = 2;
code_r0x08007b10:
                        refcount_warn_saturate(puVar1,uVar9);
                    }
                    else if ((uVar2 + 1 | uVar2) < 0) {
                        uVar9 = 1;
                        goto code_r0x08007b10;
                    }
                    iVar7 = get_mi_task_struct(arg1);
                    if (iVar7 == 0) {
code_r0x08007aa0:
                        sym.put_task_struct(arg1);
                    }
                    else {
                        if ((*(iVar7 + 0x1c8) - 0x6fU < 2) && (*(iVar7 + 0x1c4) == *(iVar5 + 0x5d8))) {
                            iVar8 = get_mi_task_struct(iVar5);
                            if (iVar8 == 0) goto code_r0x08007aa0;
                            *(iVar7 + 0x1c8) = 0x70;
                            DataMemoryBarrier(2,3);
                            if ((iVar5 != 0) && (iVar8 = get_mi_task_struct(iVar5), iVar8 != 0)) {
                                __rcu_read_lock();
                                *(iVar8 + 0x10) = *(iVar8 + 0x10) & 0xffffbfff;
                                __rcu_read_unlock();
                                if (*0x8001000 == 0) {
                                    *(iVar7 + 0x1c4) = 0;
                                    goto code_r0x08007a6c;
                                }
                                _printk(0x8001b79,"art-mutex",*(iVar5 + 0x5d8),iVar5 + 0x7a8);
                            }
                            iVar6 = *0x8001000;
                            *(iVar7 + 0x1c4) = 0;
                            if (iVar6 != 0) {
                                _printk(0x800276c,*(iVar5 + 0x5d8),iVar5 + 0x7a8,*(arg1 + 0x5d8),arg1 + 0x7a8);
                            }
                        }
code_r0x08007a6c:
                        Hint_Prefetch(puVar1,2,0,1);
                        do {
                            uVar2 = *puVar1;
                            cVar3 = '\x01';
                            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar4) {
                                *puVar1 = uVar2 - 1;
                                cVar3 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar3 != '\0');
                        if (uVar2 == 1) {
                            DataMemoryBarrier(2,1);
                            __put_task_struct(arg1);
                        }
                        else if (uVar2 < 1) {
                            refcount_warn_saturate(puVar1,3);
                        }
                    }
                }
            }
            piVar10 = piVar11;
        } while (param_2 != piVar11);
    }
    return;
}


// ===== sym.register_game_wake_f.cfi_jt @ 0x08005e98 (size 8) =====

void sym.register_game_wake_f.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80029a9,"register_game_wake_f");
    *0x8001000 = param_1;
    return;
}


// ===== sym.__typeid__ZTSFPivE_global_addr @ 0x08005ea0 (size 8) =====

code * sym.__typeid__ZTSFPivE_global_addr(void)

{
    return obj.cluster_states;
}


// ===== sym.register_game_enqueue_hooks.cfi_jt @ 0x08005ea8 (size 8) =====

void sym.register_game_enqueue_hooks.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8016000 = param_1;
    _printk(0x8002b2d,"register_game_enqueue_hooks");
    return;
}


// ===== sym.metis_choose_cpu_fastpath.cfi_jt @ 0x08005eb0 (size 8) =====

uint64_t sym.metis_choose_cpu_fastpath.cfi_jt(uint32_t param_1,ulong *param_2,int64_t *param_3)

{
    uint32_t *puVar1;
    uint uVar2;
    uint64_t uVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong extraout_x1;
    ulong uVar11;
    uint64_t uVar12;
    uint64_t extraout_x8;
    uint64_t extraout_x8_00;
    uint32_t *puVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t *puVar14;
    uint32_t *puVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    if (0x1f < param_1) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5512,0x800eea0);
        (*pcVar4)();
    }
    iVar9 = *param_3;
    puVar1 = param_3[1];
    uStack_70 = 0;
    puVar15 = param_3[4];
    uVar17 = *(*(__per_cpu_offset + param_1 * 8) + 0x805fd10);
    iVar8 = get_mi_task_struct(param_2);
    if ((iVar8 == 0) || ((*(iVar8 + 0x11) >> 2 & 1) == 0)) {
code_r0x0800ed64:
        puVar14 = 0xffffffff;
    }
    else {
        if ((-1 < _seq_read - *(iVar8 + 0x1b8)) && (-1 < _seq_read - *(iVar8 + 0x198))) {
code_r0x0800ebd8:
            if ((param_2 != NULL) && (iVar9 = get_mi_task_struct(param_2), iVar5 = *0x8016000, iVar9 != 0)) {
                *(iVar9 + 0x10) = *(iVar9 + 0x10) & 0xfffffbff;
                if (iVar5 == 0) {
                    puVar14 = 0xffffffff;
                    goto code_r0x0800ed74;
                }
                _printk(0x8002dd2,*(param_2 + 0xbb),param_2 + 0xf5);
            }
            goto code_r0x0800ed64;
        }
        if (CONCAT44(*0x8016004,*0x8016000) == 0) goto code_r0x0800ed64;
        puVar13 = param_2[0x85];
        uVar7 = *puVar15;
        uVar6 = *puVar1;
        *puVar1 = seq_read;
        uVar16 = (uVar7 ^ 0xffffffff) & 0x805f000 & *puVar13 & (uVar6 ^ 0xffffffff);
        if ((*param_2 >> 0x16 & 1) != 0) {
            uStack_70 = uVar16;
            puVar14 = system_32bit_el0_cpumask();
            uVar16 = *puVar14 & uVar16;
        }
        puVar14 = param_2[0xb];
        uVar10 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar3 = (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = uVar16 >> (puVar14 & 0x3f);
        uVar7 = 0x20;
        if (uVar16 != 0) {
            uVar7 = LZCOUNT((((uVar3 & 0xff000000ff000000) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8) >> 0x10 |
                            ((uVar10 & 0xf0f0f0f0f0f0f0f0) >> 0xc) << 0x10) << 0x20);
        }
        uStack_70 = uVar16;
        if (((uVar12 & 1) == 0) ||
           (iVar5 = available_idle_cpu(puVar14 & 0xffffffff), uVar12 = extraout_x8, iVar5 == 0)) {
            *puVar14 = uVar12;
            if (uVar12 <= uVar7) goto code_r0x0800ed64;
            pcVar4 = CONCAT44(*0x8016004,*0x8016000);
            __cfi_slowpath_diag(0x81ac49cffe75c30a,pcVar4,0x8001900);
            uVar16 = (*pcVar4)(uVar7,param_2);
            puVar14 = 0xffffffff;
            do {
                uVar6 = cpumask_next(puVar14,&uStack_70);
                *puVar14 = extraout_x8_00;
                if (extraout_x8_00 <= uVar6) {
                    if (uVar17 <= uVar16 + iVar9) {
                        iVar9 = get_mi_task_struct(param_2);
                        if ((iVar9 == 0) || ((*(iVar9 + 0x11) >> 2 & 1) == 0)) goto code_r0x0800ed64;
                        if (-1 < _seq_read - *(iVar9 + 0x1b8)) {
                            puVar14 = uVar7;
                            if (-1 < _seq_read - *(iVar9 + 0x198)) goto code_r0x0800ebd8;
                            break;
                        }
                    }
                    puVar14 = uVar7;
                    break;
                }
                puVar14 = uVar6;
                pcVar4 = CONCAT44(*0x8016004,*0x8016000);
                __cfi_slowpath_diag(0x81ac49cffe75c30a,pcVar4,0x8001920);
                uVar10 = (*pcVar4)(puVar14,param_2);
                if (uVar16 <= uVar10) {
                    uVar6 = uVar7;
                    uVar10 = uVar16;
                }
                uVar16 = uVar10;
                iVar5 = available_idle_cpu(puVar14);
                uVar7 = uVar6;
            } while (iVar5 == 0);
        }
    }
    if (*0x8016000 == 0) goto code_r0x0800ed74;
    uVar2 = *(param_2 + 0xbb);
    iVar9 = get_mi_task_struct(param_2);
    if ((iVar9 == 0) || ((*(iVar9 + 0x11) >> 2 & 1) == 0)) {
code_r0x0800edd0:
        uVar11 = 0;
    }
    else {
        if ((-1 < _seq_read - *(iVar9 + 0x1b8)) && (-1 < _seq_read - *(iVar9 + 0x198))) {
            if (((param_2 != NULL) && (iVar9 = get_mi_task_struct(param_2), iVar5 = *0x8016000, iVar9 != 0)) &&
               (*(iVar9 + 0x10) = *(iVar9 + 0x10) & 0xfffffbff, iVar5 != 0)) {
                _printk(0x8002dd2,*(param_2 + 0xbb),param_2 + 0xf5);
            }
            goto code_r0x0800edd0;
        }
        uVar11 = 1;
    }
    _printk("pid: %d, task:%s, isDynamicVIP:%d, choose_cpu:%d",uVar2,param_2 + 0xf5,uVar11,puVar14 & 0xffffffff);
code_r0x0800ed74:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return puVar14 & 0xffffffff;
    }
    uVar7 = __stack_chk_fail();
    *extraout_x18 = 0x800eea4;
    if (uVar7 < 2) {
        uVar17 = _printk(0x8002b2d,"register_mi_walt_get_indicies");
        if (1 < uVar7) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x800ef1c);
            (*pcVar4)();
        }
        *(obj.mi_walt_get_indicies_func + uVar7 * 8) = extraout_x1;
    }
    else {
        uVar17 = _printk(0x8002852);
    }
    return uVar17;
}


// ===== sym.mi_pick_next_task_fair_hook.cfi_jt @ 0x08005eb8 (size 8) =====

void sym.mi_pick_next_task_fair_hook.cfi_jt
               (ulong param_1,int64_t param_2,int64_t *param_3,int64_t *param_4,uchar *param_5,uint32_t param_6)

{
    code *pcVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 0xba8) < 0x20) {
        iVar2 = *(__per_cpu_offset + *(param_2 + 0xba8) * 8);
        iVar3 = *(iVar2 + 0x805f314);
        sym.prio_sched_check(runqueues + iVar2);
        if ((*(iVar2 + 0x8015208) == '\0' || iVar3 == 0) || (iVar3 == 0x178)) {
            iVar2 = 0;
            iVar3 = *param_3;
        }
        else {
            iVar2 = *(iVar3 + -0x150);
            iVar3 = *param_3;
        }
        if (((((iVar3 == 0) || (iVar3 = get_mi_task_struct(), iVar3 == 0)) ||
             ((*(iVar3 + 0xc) != 1000 && (*(iVar3 + 0xc) != 0)))) || (*0x8001000 != 0)) && (iVar2 != 0)) {
            iVar3 = iVar2 + 0xc0;
            *param_3 = iVar2;
            *param_4 = iVar3;
            if ((param_6 & 1) != 0) {
                while (iVar3 != 0) {
                    set_next_entity(*(iVar3 + 0x150));
                    iVar3 = *(*param_4 + 0x148);
                    *param_4 = iVar3;
                }
            }
            *param_5 = 1;
        }
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800df50);
    (*pcVar1)();
}


// ===== sym.register_get_perflock_last_freqs_hook.cfi_jt @ 0x08005ec0 (size 8) =====

void sym.register_get_perflock_last_freqs_hook.cfi_jt(ulong param_1)

{
    *0x8016000 = param_1;
    return;
}


// ===== sym.mi_check_preempt_tick_hook.877fa0db602420247113046bf2a65355.cfi_jt @ 0x08005ec8 (size 8) =====

void sym.mi_check_preempt_tick_hook.877fa0db602420247113046bf2a65355.cfi_jt
               (ulong param_1,ulong param_2,uint64_t *param_3,uchar *param_4,uint64_t param_5,int64_t param_6)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_5 <= *param_3) &&
       (uVar1 = sym.mi_check_preempt_tick(*(*(param_6 + 0x130) + 0xba8),param_4), (uVar1 & 1) != 0)) {
        resched_curr(*(param_6 + 0x130));
        *param_4 = 1;
    }
    return;
}


// ===== sym.register_mi_walt_get_indicies.cfi_jt @ 0x08005ed0 (size 8) =====

void sym.register_mi_walt_get_indicies.cfi_jt(uint32_t param_1,ulong param_2)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 < 2) {
        _printk(0x8002b2d,"register_mi_walt_get_indicies");
        if (1 < param_1) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x800ef1c);
            (*pcVar1)();
        }
        *(obj.mi_walt_get_indicies_func + param_1 * 8) = param_2;
    }
    else {
        _printk(0x8002852);
    }
    return;
}


// ===== sym.mi_binder_restore_vip_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt @ 0x08005ed8 (size 8) =====

void sym.mi_binder_restore_vip_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt
               (ulong param_1,ulong param_2,int64_t param_3)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_3 == 0) {
        return;
    }
    puVar1 = param_3 + 0x38;
    if (*puVar1 == 0) {
        return;
    }
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar7 = 2;
    }
    else {
        if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08006fec;
        uVar7 = 1;
    }
    refcount_warn_saturate(puVar1,uVar7);
code_r0x08006fec:
    uVar5 = sym.mi_binder_vip_task(param_3);
    if (((uVar5 & 1) != 0) && (iVar6 = get_mi_task_struct(param_3), iVar6 != 0)) {
        __rcu_read_lock();
        *(iVar6 + 0x10) = *(iVar6 + 0x10) & 0xffffdfff;
        __rcu_read_unlock();
        if (*0x8001000 != 0) {
            _printk(0x8001b79,"binder",*(param_3 + 0x5d8),param_3 + 0x7a8);
        }
    }
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 - 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 1) {
        DataMemoryBarrier(2,1);
        __put_task_struct(param_3);
    }
    else if (uVar2 < 1) {
        refcount_warn_saturate(puVar1,3);
    }
    return;
}


// ===== sym.mi_binder_set_vip_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt @ 0x08005ee0 (size 8) =====

void sym.mi_binder_set_vip_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *0x8001000;
    if (*0x8001000 != NULL) {
        __cfi_slowpath_diag(0xf3ed3a3be49c8edd,*0x8001000,0x80017c0);
        (*pcVar1)(param_2,param_3);
    }
    if ((param_2 != 0) && (param_3 != 0)) {
        sym.do_set_binder_vip(param_2,param_3);
    }
    return;
}


// ===== sym.oem_rvh_try_to_wake_up_success.cfi_jt @ 0x08005ee8 (size 8) =====

uint32_t sym.oem_rvh_try_to_wake_up_success.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = get_cluster_type(*(param_1 + 0x58));
    uVar1 = 0;
    if (uVar3 < 4) {
        uVar1 = uVar3;
    }
    uVar3 = sym.metis_xxx_task.llvm.15631448280779817747(param_1,0x100);
    if ((uVar3 & 1) != 0) {
        if (2 < uVar1) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x800bcfc);
            (*pcVar2)();
        }
        *(obj.perf_min_freq + uVar1 * 4) = *(obj.user_min_freq + uVar1 * 4);
    }
    return uVar3 & 1;
}


// ===== sym.mi_art_mutex_vip_task.cfi_jt @ 0x08005ef0 (size 8) =====

uint32_t sym.mi_art_mutex_vip_task.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 0;
    if (param_1 != 0) {
        iVar2 = get_mi_task_struct();
        uVar1 = 0;
        if (iVar2 != 0) {
            if (_seq_read - *(iVar2 + 0x1b8) < 0) {
                uVar1 = *(iVar2 + 0x10) >> 0xe & 1;
            }
            else {
                if ((*(iVar2 + 0x10) >> 0xe & 1) != 0) {
                    iVar2 = get_mi_task_struct(param_1);
                    if (iVar2 == 0) {
                        return 0;
                    }
                    __rcu_read_lock();
                    *(iVar2 + 0x10) = *(iVar2 + 0x10) & 0xffffbfff;
                    __rcu_read_unlock();
                    if (*0x8001000 != 0) {
                        _printk(0x8001b79,"art-mutex",*(param_1 + 0x5d8),param_1 + 0x7a8);
                    }
                }
                uVar1 = 0;
            }
        }
    }
    return uVar1;
}


// ===== sym.mi_lock_vip_task.cfi_jt @ 0x08005ef8 (size 8) =====

uint32_t sym.mi_lock_vip_task.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 0;
    if (param_1 != 0) {
        iVar2 = get_mi_task_struct();
        uVar1 = 0;
        if (iVar2 != 0) {
            if (_seq_read - *(iVar2 + 0x1b8) < 0) {
                uVar1 = *(iVar2 + 0x10) >> 0xc & 1;
            }
            else {
                if ((*(iVar2 + 0x10) >> 0xc & 1) != 0) {
                    iVar2 = get_mi_task_struct(param_1);
                    if (iVar2 == 0) {
                        return 0;
                    }
                    __rcu_read_lock();
                    *(iVar2 + 0x10) = *(iVar2 + 0x10) & 0xffffefff;
                    __rcu_read_unlock();
                    if (*0x8001000 != 0) {
                        _printk(0x8001b79,"lock",*(param_1 + 0x5d8),param_1 + 0x7a8);
                    }
                }
                uVar1 = 0;
            }
        }
    }
    return uVar1;
}


// ===== sym.mi_vip_task.cfi_jt @ 0x08005f00 (size 8) =====

bool sym.mi_vip_task.cfi_jt(int64_t param_1)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong *in_x18;
    uint32_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = get_mi_task_struct();
    if (iVar3 == 0) {
        return false;
    }
    iVar4 = get_mi_task_struct(param_1);
    if (((iVar4 == 0) || (*0x8016000 == 0)) || (*(iVar4 + 0xc) != *0x8016000)) {
        uVar7 = 0;
    }
    else {
        uVar7 = *(iVar3 + 0x10) >> 5 & 1;
    }
    iVar3 = get_mi_task_struct(param_1);
    if (iVar3 == 0) {
        uVar5 = 0;
    }
    else {
        uVar5 = *(iVar3 + 0x10) >> 0x11 & 1;
    }
    iVar3 = get_mi_task_struct(param_1);
    if (iVar3 == 0) {
        uVar6 = 0;
    }
    else {
        uVar6 = *(iVar3 + 0x10) >> 0x14 & 1;
    }
    iVar3 = get_mi_task_struct(param_1);
    if ((iVar3 != 0) && ((*(iVar3 + 0x11) >> 2 & 1) != 0)) {
        if ((_seq_read - *(iVar3 + 0x1b8) < 0) || (_seq_read - *(iVar3 + 0x198) < 0)) {
            bVar1 = true;
            goto code_r0x0800d284;
        }
        if (((param_1 != 0) && (iVar3 = get_mi_task_struct(param_1), iVar2 = *0x8016000, iVar3 != 0)) &&
           (*(iVar3 + 0x10) = *(iVar3 + 0x10) & 0xfffffbff, iVar2 != 0)) {
            _printk(0x8002dd2,*(param_1 + 0x5d8),param_1 + 0x7a8);
        }
    }
    bVar1 = false;
code_r0x0800d284:
    return ((uVar5 != 0 || uVar7 != 0) || uVar6 != 0) || bVar1;
}


// ===== sym.set_mi_rq_balance_irq_task.cfi_jt @ 0x08005f08 (size 8) =====

ulong sym.set_mi_rq_balance_irq_task.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0;
    if ((param_1 != 0) && (iVar1 = get_mi_task_struct(), uVar2 = 0, iVar1 != 0)) {
        __rcu_read_lock();
        *(iVar1 + 0x10) = *(iVar1 + 0x10) | 0x80000;
        __rcu_read_unlock();
        uVar2 = 1;
    }
    return uVar2;
}


// ===== sym.mi_binder_vip_task.cfi_jt @ 0x08005f10 (size 8) =====

uint32_t sym.mi_binder_vip_task.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 0;
    if (param_1 != 0) {
        iVar2 = get_mi_task_struct();
        uVar1 = 0;
        if (iVar2 != 0) {
            if (_seq_read - *(iVar2 + 0x1b8) < 0) {
                uVar1 = *(iVar2 + 0x10) >> 0xd & 1;
            }
            else {
                if ((*(iVar2 + 0x10) >> 0xd & 1) != 0) {
                    iVar2 = get_mi_task_struct(param_1);
                    if (iVar2 == 0) {
                        return 0;
                    }
                    __rcu_read_lock();
                    *(iVar2 + 0x10) = *(iVar2 + 0x10) & 0xffffdfff;
                    __rcu_read_unlock();
                    if (*0x8001000 != 0) {
                        _printk(0x8001b79,"binder",*(param_1 + 0x5d8),param_1 + 0x7a8);
                    }
                }
                uVar1 = 0;
            }
        }
    }
    return uVar1;
}


// ===== sym.mi_dequeue_task_fair_hook.cfi_jt @ 0x08005f18 (size 8) =====

void sym.mi_dequeue_task_fair_hook.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = get_mi_task_struct(param_2);
    if ((iVar4 != 0) && ((*(iVar4 + 0x10) >> 7 & 1) != 0)) {
        *(iVar4 + 0x10) = *(iVar4 + 0x10) & 0xffffff5f;
    }
    iVar4 = get_mi_task_struct(param_2);
    if (iVar4 != 0) {
        *(iVar4 + 0x1a0) = 0;
        uVar3 = get_cluster_type(*(param_1 + 0xba8));
        uVar1 = 0;
        if (uVar3 < 4) {
            uVar1 = uVar3;
        }
        uVar5 = sym.metis_xxx_task.llvm.15631448280779817747(param_2,0x100);
        if ((uVar5 & 1) != 0) {
            if (2 < uVar1) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x800dd9c);
                (*pcVar2)();
            }
            *(obj.perf_min_freq + uVar1 * 4) = 0;
        }
    }
    return;
}


// ===== sym.metis_mmap.877fa0db602420247113046bf2a65355.cfi_jt @ 0x08005f20 (size 8) =====

ulong sym.metis_mmap.877fa0db602420247113046bf2a65355.cfi_jt(void)

{
    return 0;
}


// ===== sym.metis_link_mmap.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt @ 0x08005f28 (size 8) =====

ulong sym.metis_link_mmap.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt(void)

{
    return 0;
}


// ===== sym.mi_mutex_wait_start_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt @ 0x08005f30 (size 8) =====

void sym.mi_mutex_wait_start_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt(ulong param_1,uint64_t *param_2)

{
    int64_t arg1;
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = sp_el0;
    uVar1 = sym.mi_vip_task(arg1);
    if (((uVar1 & 1) != 0) || (uVar1 = sym.mi_link_vip_task(arg1), (uVar1 & 1) != 0)) {
        if (param_2 == NULL) {
            uVar1 = 0;
        }
        else {
            uVar1 = *param_2 & 0xfffffffffffffff8;
        }
        sym.do_set_lock_vip(uVar1,arg1,0x80029a3);
    }
    return;
}


// ===== sym.proc_show_fas.877fa0db602420247113046bf2a65355.cfi_jt @ 0x08005f38 (size 8) =====

ulong sym.proc_show_fas.877fa0db602420247113046bf2a65355.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_printf(param_1,"forground app uid:%d\n",*0x8016000);
    return 0;
}


// ===== sym.runtime_info_debug_show.2b6473c3def53e73fda9ad8cc2d103f8.cfi_jt @ 0x08005f40 (size 8) =====

ulong sym.runtime_info_debug_show.2b6473c3def53e73fda9ad8cc2d103f8.cfi_jt(ulong *param_1)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    code *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *param_1 = seq_read;
    do {
        if (0x805efff < uVar3) {
            seq_printf(param_1,0x8002f5b);
            return 0;
        }
        if (0x1f < uVar3) {
code_r0x080127c0:
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x80127c4);
            (*pcVar2)();
        }
        iVar4 = *(__per_cpu_offset + uVar3 * 8);
        pcVar2 = obj.metis_runqueues + iVar4;
        seq_printf(param_1,"\ncpu_index: %d\n",uVar3);
        seq_printf(param_1,"%-4s: %-10lu number_of_times:%6lu\n",0x80037e4,*(iVar4 + 0x8014e78),*(iVar4 + 0x8014e58)
                  );
        seq_printf(param_1,"%-4s: %-10lu number_of_times:%6lu\n",0x80026b2,*(iVar4 + 0x8014e80),*(iVar4 + 0x8014e5c)
                  );
        seq_printf(param_1,"%-4s: %-10lu number_of_times:%6lu\n","IDLE",*(iVar4 + 0x8014e88),*(iVar4 + 0x8014e60));
        seq_printf(param_1,"%-4s: %-10lu number_of_times:%6lu\n","NORM",*(iVar4 + 0x8014e90),*(iVar4 + 0x8014e64));
        seq_printf(param_1,0x8002f5b);
        seq_printf(param_1,"\n-----the longest running tasks in the 3s of the current time-----\n");
        seq_printf(param_1,"top_task_pid:%-6ld",*(iVar4 + 0x8014e08));
        seq_printf(param_1,"top_task_runtime:%-12ld",*(iVar4 + 0x8014de8));
        seq_printf(param_1,0x8002f5b);
        seq_printf(param_1,0x8002f5b);
        seq_printf(param_1,"-----rq recently scheduled tasks-----\n");
        uVar1 = *(iVar4 + 0x8014dd4);
        uVar5 = uVar1;
        if (uVar1 < 10) {
            iVar6 = uVar1;
            pcVar7 = pcVar2 + uVar5 * 0x28 + 0x280;
            do {
                if (0xb < iVar6) goto code_r0x080127c0;
                seq_printf(param_1,"pid:%-6d",*(pcVar7 + -0x18));
                seq_printf(param_1,"comm:%15s",pcVar7 + -0x14);
                seq_printf(param_1,"  runtime(ns):%-12llu\n",*pcVar7);
                iVar6 = iVar6 + 1;
                pcVar7 = pcVar7 + 0x28;
            } while (iVar6 != 10);
            uVar5 = *(iVar4 + 0x8014dd4);
            if (0 < *(iVar4 + 0x8014dd4)) goto code_r0x0801263c;
        }
        else {
code_r0x0801263c:
            iVar6 = 0;
            do {
                if (iVar6 == 0x1e0) goto code_r0x080127c0;
                seq_printf(param_1,"pid:%-6d",*(pcVar2 + iVar6 + 0x268));
                seq_printf(param_1,"comm:%15s",pcVar2 + iVar6 + 0x26c);
                seq_printf(param_1,"  runtime(ns):%-12llu\n",*(pcVar2 + iVar6 + 0x280));
                iVar6 = iVar6 + 0x28;
            } while (uVar5 * 0x28 - iVar6 != 0);
        }
        seq_printf(param_1,"-----abnorm rt_tasks-----\n");
        uVar1 = *(iVar4 + 0x8014de0);
        uVar5 = uVar1;
        if (uVar1 < 10) {
            iVar6 = uVar1;
            pcVar7 = pcVar2 + uVar5 * 0x18 + 0x558;
            do {
                if (9 < iVar6) goto code_r0x080127c0;
                if (*(pcVar7 + -0x10) != 0) {
                    seq_printf(param_1,"pid:%-6ld");
                    seq_printf(param_1,"time(s):%-4ld",*pcVar7);
                    seq_printf(param_1,"happen_time(ns):%-12lld\n",*(pcVar7 + -8));
                }
                iVar6 = iVar6 + 1;
                pcVar7 = pcVar7 + 0x18;
            } while (iVar6 != 10);
            uVar5 = *(iVar4 + 0x8014de0);
            if (0 < *(iVar4 + 0x8014de0)) goto code_r0x08012720;
        }
        else {
code_r0x08012720:
            iVar6 = 0;
            do {
                if (iVar6 == 0xf0) goto code_r0x080127c0;
                if (*(pcVar2 + iVar6 + 0x548) != 0) {
                    seq_printf(param_1,"pid:%-6ld");
                    seq_printf(param_1,"time(s):%-4ld",*(pcVar2 + iVar6 + 0x558));
                    seq_printf(param_1,"happen_time(ns):%-12lld\n",*(pcVar2 + iVar6 + 0x550));
                }
                iVar6 = iVar6 + 0x18;
            } while (uVar5 * 0x18 - iVar6 != 0);
        }
        seq_printf(param_1,"-----abnorml norm_task-----\n");
        sym.do_print_record_abnorm_task_info(param_1,*(iVar4 + 0x8014ddc),10,pcVar2);
        sym.do_print_record_abnorm_task_info(param_1,0,*(iVar4 + 0x8014ddc),pcVar2);
        seq_printf(param_1,"\n1~2s :%2d\n",*(iVar4 + 0x8014e6c));
        seq_printf(param_1,"2~3s :%2d\n",*(iVar4 + 0x8014e70));
        seq_printf(param_1," >3s :%2d\n",*(iVar4 + 0x8014e74));
        seq_printf(param_1,"\n-----tasks running continuously for more than 3s-----\n");
        seq_printf(param_1,"rt_task_pid:%-6ld",*(iVar4 + 0x80151b8));
        seq_printf(param_1,"  runlongtime(ns):%-12llu",*(iVar4 + 0x80151d0));
        seq_printf(param_1,"  happen_time(ns):%-12llu\n",*(iVar4 + 0x80151d8));
        seq_printf(param_1,"other_task_pid:%-6ld",*(iVar4 + 0x80151e0));
        seq_printf(param_1,"  runlongtime(ns):%-12llu",*(iVar4 + 0x80151f8));
        seq_printf(param_1,"  happen_time(ns):%-12llu",*(iVar4 + 0x8015200));
        seq_printf(param_1,0x8002f5b);
        uVar3 = cpumask_next(uVar3,__cpu_possible_mask);
        *param_1 = seq_read;
    } while( true );
}


// ===== sym.mi_art_mutex_debug_show.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt @ 0x08005f48 (size 8) =====

ulong sym.mi_art_mutex_debug_show.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt(ulong param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(obj.mi_art_mutex_lock);
    seq_printf(param_1,"\n------------mi art mutex contention statistics------------");
    seq_printf(param_1,"\n vtsk set   times : \t %6d",*0x8001000);
    seq_printf(param_1,"\n vtsk unset times : \t %6d\n",*0x8001000);
    seq_printf(param_1,0x8002f5b);
    _raw_spin_unlock_irqrestore(obj.mi_art_mutex_lock,uVar1);
    return 0;
}


// ===== sym.do_adjust_freq_delayed.b1e49afbd87934ed80dab30c248d2d24.cfi_jt @ 0x08005f50 (size 8) =====

void sym.do_adjust_freq_delayed.b1e49afbd87934ed80dab30c248d2d24.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    int64_t iVar4;
    ulong *in_x18;
    uint64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(param_1 + 0x88);
    arg1 = uVar1;
    if (*0x8016000 != 0) {
        if (2 < uVar1) goto code_r0x0800c318;
        *(obj.cluster_states + arg1 * 4) = 0;
        sym.reset_perflock_req(0);
    }
    sym.metis_update_policy_online(arg1,0,0xffffffff);
    pcVar3 = CONCAT44(*0x8016004,*0x8016000);
    if (pcVar3 != NULL) {
        __cfi_slowpath_diag(0x9c2ff6c65e783d8c,pcVar3,0x80018c0);
        (*pcVar3)(arg1,0);
    }
    iVar2 = *0x8016000;
    if (uVar1 < 3) {
        *(obj.thermal_limit_freq + arg1 * 8) = 0xffffffffffffffff;
        if (iVar2 != 0) {
            iVar4 = ktime_get();
            _printk(0x80036a2,0x186,iVar4 / 1000);
        }
        return;
    }
code_r0x0800c318:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x800c31c);
    (*pcVar3)();
}


// ===== sym.finish_fboost_workfn.b1e49afbd87934ed80dab30c248d2d24.cfi_jt @ 0x08005f58 (size 8) =====

void sym.finish_fboost_workfn.b1e49afbd87934ed80dab30c248d2d24.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cpufreq_unregister_notifier(reloc.metis_freq_qos_request_init.b1e49afbd87934ed80dab30c248d2d24.cfi_jt,1);
    _printk(0x8002c9d);
    return;
}


// ===== sym.get_rebind_task.aac6a73137e7abde2329e591bee8c57a.cfi_jt @ 0x08005f60 (size 8) =====

int sym.get_rebind_task.aac6a73137e7abde2329e591bee8c57a.cfi_jt(char *param_1,ulong *param_2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t iVar9;
    int iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 != 0) {
        iVar9 = sp_el0;
        iVar8 = iVar9 + 0x7a8;
        uVar6 = strlen(iVar8);
        iVar7 = strnstr(iVar8,"PowerKeeper",uVar6);
        if (iVar7 == 0) {
            _printk(0x8001ab7,iVar8,*(iVar9 + 0x5d8));
            return 0;
        }
    }
    iVar8 = sp_el0;
    _printk(0x8001ab7,iVar8 + 0x7a8,*(iVar8 + 0x5d8));
    uVar6 = *param_2;
    iVar4 = strlen(uVar6);
    iVar9 = iVar4;
    iVar8 = strnstr(uVar6,"show_rebind_task_lit",iVar9);
    if (iVar8 == 0) {
        iVar8 = strnstr(*param_2,"show_rebind_task_mid",iVar9);
        if (iVar8 == 0) {
            iVar8 = strnstr(*param_2,"show_rebind_task_big",iVar9);
            uVar6 = str.need_show_rebind_task__biglitmid__n._16_8_;
            if (iVar8 == 0) {
                uVar1 = CONCAT35(str.need_show_rebind_task__biglitmid__n._29_3_,
                                 str.need_show_rebind_task__biglitmid__n._24_5_);
                *(param_1 + 0x1d) =
                     CONCAT53(str.need_show_rebind_task__biglitmid__n._32_5_,
                              str.need_show_rebind_task__biglitmid__n._29_3_);
                uVar3 = str.need_show_rebind_task__biglitmid__n._8_8_;
                uVar2 = str.need_show_rebind_task__biglitmid__n._0_8_;
                *(param_1 + 0x10) = uVar6;
                *(param_1 + 0x18) = uVar1;
                *param_1 = uVar2;
                *(param_1 + 8) = uVar3;
                return 0x24;
            }
            iVar4 = _find_first_bit(obj.rebind_task_blist,0x8000);
            if (iVar4 < 0x8000) {
                iVar10 = 0;
                do {
                    iVar5 = snprintf(param_1 + iVar10,0x1000 - iVar10,0x8001aed,iVar4);
                    iVar10 = iVar5 + iVar10;
                    iVar4 = _find_next_bit(obj.rebind_task_blist,0,0x8000,iVar4 + 1,0,0);
                } while (iVar4 < 0x8000);
                goto code_r0x08009f74;
            }
        }
        else {
            iVar4 = _find_first_bit(obj.rebind_task_mlist,0x8000);
            if (iVar4 < 0x8000) {
                iVar10 = 0;
                do {
                    iVar5 = snprintf(param_1 + iVar10,0x1000 - iVar10,0x8001aed,iVar4);
                    iVar10 = iVar5 + iVar10;
                    iVar4 = _find_next_bit(obj.rebind_task_mlist,0,0x8000,iVar4 + 1,0,0);
                } while (iVar4 < 0x8000);
                goto code_r0x08009f74;
            }
        }
    }
    else {
        iVar4 = _find_first_bit(obj.rebind_task_llist,0x8000);
        if (iVar4 < 0x8000) {
            iVar10 = 0;
            do {
                iVar5 = snprintf(param_1 + iVar10,0x1000 - iVar10,0x8001aed,iVar4);
                iVar10 = iVar5 + iVar10;
                iVar4 = _find_next_bit(obj.rebind_task_llist,0,0x8000,iVar4 + 1,0,0);
            } while (iVar4 < 0x8000);
            goto code_r0x08009f74;
        }
    }
    iVar10 = 0;
code_r0x08009f74:
    iVar4 = snprintf(param_1 + iVar10,0x1000 - iVar10,0x8002f5b);
    return iVar4 + iVar10;
}


// ===== sym.get_common_persist_vip_task.118381c7bf2d563806cf4808beffb578.cfi_jt @ 0x08005f68 (size 8) =====

int sym.get_common_persist_vip_task.118381c7bf2d563806cf4808beffb578.cfi_jt(uint *param_1)

{
    bool bVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    int iVar7;
    int iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.persist_vip_lock);
    bVar6 = *0x8016000 == 0;
    if (*0x8016000 == 0) {
        iVar7 = 0;
    }
    else {
        iVar7 = sprintf(param_1,0x800330f);
    }
    bVar1 = *0x8016000 != 0;
    if (bVar1) {
        iVar8 = sprintf(param_1 + iVar7,0x800330f);
        iVar7 = iVar8 + iVar7;
    }
    bVar2 = *0x8016000 != 0;
    if (bVar2) {
        iVar8 = sprintf(param_1 + iVar7,0x800330f);
        iVar7 = iVar8 + iVar7;
    }
    bVar3 = *0x8016000 != 0;
    if (bVar3) {
        iVar8 = sprintf(param_1 + iVar7,0x800330f);
        iVar7 = iVar8 + iVar7;
    }
    bVar4 = *0x8016000 != 0;
    if (bVar4) {
        iVar8 = sprintf(param_1 + iVar7,0x800330f);
        iVar7 = iVar8 + iVar7;
    }
    bVar5 = *0x8016000 != 0;
    if (bVar5) {
        iVar8 = sprintf(param_1 + iVar7,0x800330f);
        iVar7 = iVar8 + iVar7;
    }
    if (*0x8016000 == 0) {
        _raw_spin_unlock(obj.persist_vip_lock);
        if (!bVar5 && (!bVar4 && (!bVar3 && (!bVar2 && (!bVar1 && bVar6))))) {
            *(param_1 + 3) = 0xa7974;
            *param_1 = 0x74706d65;
            return 6;
        }
    }
    else {
        iVar8 = sprintf(param_1 + iVar7,0x800330f);
        iVar7 = iVar8 + iVar7;
        if (*0x8016000 != 0) {
            iVar8 = sprintf(param_1 + iVar7,0x800330f);
            iVar7 = iVar8 + iVar7;
        }
        _raw_spin_unlock(obj.persist_vip_lock);
    }
    if (0 < iVar7) {
        *(param_1 + (iVar7 - 1)) = 10;
    }
    return iVar7;
}


// ===== sym.get_therm_break_enable.877fa0db602420247113046bf2a65355.cfi_jt @ 0x08005f70 (size 8) =====

uint sym.get_therm_break_enable.877fa0db602420247113046bf2a65355.cfi_jt(ulong param_1,ulong *param_2)

{
    uint uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = *param_2;
    iVar2 = strlen(uVar4);
    iVar3 = strnstr(uVar4,"is_break_enable",iVar2);
    uVar1 = 0;
    if (iVar3 != 0) {
        uVar1 = *0x8016000;
    }
    return uVar1;
}


// ===== sym.get_clus_affinity_uidlist.aac6a73137e7abde2329e591bee8c57a.cfi_jt @ 0x08005f78 (size 8) =====

int sym.get_clus_affinity_uidlist.aac6a73137e7abde2329e591bee8c57a.cfi_jt(char *param_1,ulong *param_2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t iVar9;
    int iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 != 0) {
        iVar9 = sp_el0;
        iVar8 = iVar9 + 0x7a8;
        uVar6 = strlen(iVar8);
        iVar7 = strnstr(iVar8,"PowerKeeper",uVar6);
        if (iVar7 == 0) {
            _printk(0x8002ae0,iVar8,*(iVar9 + 0x5d8));
            return 0;
        }
    }
    iVar8 = sp_el0;
    _printk(0x8002ae0,iVar8 + 0x7a8,*(iVar8 + 0x5d8));
    uVar6 = *param_2;
    iVar4 = strlen(uVar6);
    iVar9 = iVar4;
    iVar8 = strnstr(uVar6,"show_lclus_affinity_uidlist",iVar9);
    if (iVar8 == 0) {
        iVar8 = strnstr(*param_2,"show_mclus_affinity_uidlist",iVar9);
        if (iVar8 == 0) {
            iVar8 = strnstr(*param_2,"show_bclus_affinity_uidlist",iVar9);
            uVar3 = str.need_show__blm_clus_affinity_uidlist_n._24_8_;
            uVar6 = str.need_show__blm_clus_affinity_uidlist_n._16_8_;
            if (iVar8 == 0) {
                *(param_1 + 0x20) = str.need_show__blm_clus_affinity_uidlist_n._32_8_;
                uVar2 = str.need_show__blm_clus_affinity_uidlist_n._8_8_;
                uVar1 = str.need_show__blm_clus_affinity_uidlist_n._0_8_;
                *(param_1 + 0x10) = uVar6;
                *(param_1 + 0x18) = uVar3;
                *param_1 = uVar1;
                *(param_1 + 8) = uVar2;
                return 0x27;
            }
            iVar4 = _find_first_bit(0x8010938,200000);
            if (iVar4 < 200000) {
                iVar10 = 0;
                do {
                    iVar5 = snprintf(param_1 + iVar10,0x1000 - iVar10,0x8001aed,iVar4);
                    iVar10 = iVar5 + iVar10;
                    iVar4 = _find_next_bit(0x8010938,0,200000,iVar4 + 1,0,0);
                } while (iVar4 < 200000);
                goto code_r0x0800b15c;
            }
        }
        else {
            iVar4 = _find_first_bit(obj.cluster_affinity_uid_mlist,200000);
            if (iVar4 < 200000) {
                iVar10 = 0;
                do {
                    iVar5 = snprintf(param_1 + iVar10,0x1000 - iVar10,0x8001aed,iVar4);
                    iVar10 = iVar5 + iVar10;
                    iVar4 = _find_next_bit(obj.cluster_affinity_uid_mlist,0,200000,iVar4 + 1,0,0);
                } while (iVar4 < 200000);
                goto code_r0x0800b15c;
            }
        }
    }
    else {
        iVar4 = _find_first_bit(0x800a790,200000);
        if (iVar4 < 200000) {
            iVar10 = 0;
            do {
                iVar5 = snprintf(param_1 + iVar10,0x1000 - iVar10,0x8001aed,iVar4);
                iVar10 = iVar5 + iVar10;
                iVar4 = _find_next_bit(0x800a790,0,200000,iVar4 + 1,0,0);
            } while (iVar4 < 200000);
            goto code_r0x0800b15c;
        }
    }
    iVar10 = 0;
code_r0x0800b15c:
    iVar4 = snprintf(param_1 + iVar10,0x1000 - iVar10,0x8002f5b);
    return iVar4 + iVar10;
}


// ===== sym.get_fboost_enable.877fa0db602420247113046bf2a65355.cfi_jt @ 0x08005f80 (size 8) =====

uint sym.get_fboost_enable.877fa0db602420247113046bf2a65355.cfi_jt(void)

{
    return *0x8016000;
}


// ===== sym.get_mi_viptask.877fa0db602420247113046bf2a65355.cfi_jt @ 0x08005f88 (size 8) =====

int sym.get_mi_viptask.877fa0db602420247113046bf2a65355.cfi_jt(int64_t param_1)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_1,0x1000,"%u:%d ",_obj.mi_viptask,_obj.mi_dynamic_vip_num);
    iVar2 = snprintf(param_1 + iVar1,0x1000 - iVar1,"%u:%d ",*0x8016f5c,_obj.mi_dynamic_vip_num);
    iVar2 = iVar2 + iVar1;
    iVar1 = snprintf(param_1 + iVar2,0x1000 - iVar2,"%u:%d ",*0x8016f60,_obj.mi_dynamic_vip_num);
    iVar1 = iVar1 + iVar2;
    iVar2 = snprintf(param_1 + iVar1,0x1000 - iVar1,0x8002f5b);
    return iVar2 + iVar1;
}


// ===== sym.get_link_vip_enable.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt @ 0x08005f90 (size 8) =====

uint sym.get_link_vip_enable.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt(void)

{
    return *0x8001000;
}


// ===== sym.set_rebind_task.aac6a73137e7abde2329e591bee8c57a.cfi_jt @ 0x08005f98 (size 8) =====

void sym.set_rebind_task.aac6a73137e7abde2329e591bee8c57a.cfi_jt(uint64_t param_1,ulong *param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    char *pcVar3;
    bool bVar4;
    code *pcVar5;
    int iVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong *in_x18;
    uint32_t arg4;
    uint32_t uVar11;
    int64_t iVar12;
    uint64_t arg2;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    uStack_6c = 0;
    if (*0x8001000 == 0) {
code_r0x080098f0:
        iVar9 = sp_el0;
        _printk(0x8002933,iVar9 + 0x7a8,*(iVar9 + 0x5d8));
        uVar7 = *param_2;
        iVar6 = strlen(uVar7);
        iVar12 = iVar6;
        iVar9 = strnstr(uVar7,"add_rebind_task_lit",iVar12);
        if (iVar9 != 0) {
            bVar4 = false;
            arg4 = 0;
            uVar11 = 1;
code_r0x08009a28:
            arg2 = 0xffffffff;
            uVar10 = param_1;
            do {
                uVar10 = strchr(uVar10 + 1,0x3a);
                uVar1 = arg2 + 1;
                arg2 = uVar1;
            } while (uVar10 != 0);
            iVar6 = strlen(param_1);
            if (bVar4) {
                memset(obj.rebind_task_blist,0,0x1000);
                memset(obj.rebind_task_mlist,0,0x1000);
                memset(obj.rebind_task_llist,0,0x1000);
            }
            else {
                if (*0x8001000 != 0) {
                    _printk(0x80026b6,uVar11);
                }
                iVar9 = uVar11 * 0x14;
                pcVar5 = obj.mi_rebind_task + iVar9;
                *(iVar9 + 0x8001588) = 0;
                *pcVar5 = 0;
                *(iVar9 + 0x8001580) = 0;
                if (uVar1 == 0) {
                    iVar6 = sscanf(param_1,0x8002100,&uStack_6c);
                    if (iVar6 == 1) {
                        pcVar3 = "unbind";
                        if (arg4 == 0) {
                            pcVar3 = "rebind";
                        }
                        _printk(0x800337a,uStack_6c,pcVar3,uVar11);
                        *pcVar5 = uStack_6c;
                        if (uStack_6c >> 0xf == 0) {
                            if (arg4 == 0) {
                                sym.add_to_rebind_task_list(uStack_6c,uVar11);
                            }
                            else {
                                sym.clear_rebind_task_list(uStack_6c,uVar11);
                            }
                            arg2 = 1;
                            goto code_r0x08009cd4;
                        }
                    }
code_r0x08009b98:
                    uVar7 = 0xffffffea;
                    goto code_r0x08009b9c;
                }
                uVar14 = uVar11;
                uVar10 = param_1 + iVar6;
                if (uVar1 < 1) {
                    arg2 = 0;
                }
                else {
                    uVar13 = 0;
                    do {
                        iVar6 = sscanf(param_1,0x8001c54,&uStack_6c);
                        if ((iVar6 != 1) || (uStack_6c >> 0xf != 0)) goto code_r0x08009b98;
                        if (arg4 == 0) {
                            sym.add_to_rebind_task_list(uStack_6c,uVar11);
                        }
                        else {
                            sym.clear_rebind_task_list(uStack_6c,uVar11);
                        }
                        uVar2 = uVar13 + 1;
                        *(obj.mi_rebind_task + uVar13 * 4 + uVar14 * 0x14) = uStack_6c;
                        _printk(0x80024df,uVar2 & 0xffffffff,uStack_6c,uVar11);
                        iVar9 = strchr(param_1 + 1,0x3a);
                        param_1 = iVar9 + 1;
                        if (uVar10 <= param_1) goto code_r0x08009a8c;
                        if (uVar13 == 4) {
                            arg2 = 5;
                            goto code_r0x08009cd4;
                        }
                        uVar13 = uVar2;
                    } while (arg2 != uVar2);
                }
                if (param_1 < uVar10) {
                    iVar6 = sscanf(param_1,0x8001c54,&uStack_6c);
                    if ((iVar6 != 1) || (uStack_6c >> 0xf != 0)) goto code_r0x08009b98;
                    if (arg4 == 0) {
                        sym.add_to_rebind_task_list(uStack_6c,uVar11);
                    }
                    else {
                        sym.clear_rebind_task_list(uStack_6c,uVar11);
                    }
                    if (0x4f < uVar14 * 0x14 + arg2 * 4) goto code_r0x08009cfc;
                    uVar1 = arg2 + 1;
                    *(obj.mi_rebind_task + arg2 * 4 + uVar14 * 0x14) = uStack_6c;
                    _printk(0x800231c,uVar1,uStack_6c,uVar11);
                    arg2 = uVar1;
                }
code_r0x08009cd4:
                sym.rebind_task_req(pcVar5,arg2,uVar11,arg4);
            }
            goto code_r0x08009a8c;
        }
        iVar9 = strnstr(*param_2,"add_rebind_task_mid",iVar12);
        if (iVar9 != 0) {
            bVar4 = false;
            arg4 = 0;
            uVar11 = 2;
            goto code_r0x08009a28;
        }
        iVar9 = strnstr(*param_2,"add_rebind_task_big",iVar12);
        if (iVar9 != 0) {
            bVar4 = false;
            arg4 = 0;
            uVar11 = 3;
            goto code_r0x08009a28;
        }
        iVar9 = strnstr(*param_2,"reset_rebind_task",iVar12);
        if (iVar9 != 0) {
            arg4 = 0;
            uVar11 = 0;
            bVar4 = true;
            goto code_r0x08009a28;
        }
        iVar9 = strnstr(*param_2,"del_rebind_task_lit",iVar12);
        if (iVar9 != 0) {
            bVar4 = false;
            arg4 = 1;
            uVar11 = 1;
            goto code_r0x08009a28;
        }
        iVar9 = strnstr(*param_2,"del_rebind_task_mid",iVar12);
        if (iVar9 != 0) {
            uVar11 = 2;
code_r0x08009a24:
            bVar4 = false;
            arg4 = 1;
            goto code_r0x08009a28;
        }
        iVar9 = strnstr(*param_2,"del_rebind_task_big",iVar12);
        uVar7 = 0;
        if (iVar9 != 0) {
            uVar11 = 3;
            goto code_r0x08009a24;
        }
    }
    else {
        iVar12 = sp_el0;
        iVar9 = iVar12 + 0x7a8;
        uVar7 = strlen(iVar9);
        iVar8 = strnstr(iVar9,"PowerKeeper",uVar7);
        if (iVar8 != 0) goto code_r0x080098f0;
        _printk(0x8002933,iVar9,*(iVar12 + 0x5d8));
code_r0x08009a8c:
        uVar7 = 0;
    }
code_r0x08009b9c:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail(uVar7);
code_r0x08009cfc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(1,0x8009d00);
    (*pcVar5)();
}


// ===== sym.set_clus_affinity_uidlist.aac6a73137e7abde2329e591bee8c57a.cfi_jt @ 0x08005fa0 (size 8) =====

int sym.set_clus_affinity_uidlist.aac6a73137e7abde2329e591bee8c57a.cfi_jt(uint64_t param_1,ulong *param_2)

{
    bool bVar1;
    bool bVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    ulong uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    code *pcVar12;
    char *pcVar13;
    int64_t iVar14;
    ulong *puVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_58 = *(iVar14 + 0x5e0);
    uStack_5c = 0;
    if (*0x8001000 != 0) {
        iVar16 = sp_el0;
        iVar14 = iVar16 + 0x7a8;
        uVar9 = strlen(iVar14);
        iVar10 = strnstr(iVar14,"PowerKeeper",uVar9);
        if (iVar10 != 0) goto code_r0x0800aafc;
        _printk(0x8003044,iVar14,*(iVar16 + 0x5d8));
        goto code_r0x0800aaf4;
    }
code_r0x0800aafc:
    iVar14 = sp_el0;
    _printk(0x8003044,iVar14 + 0x7a8,*(iVar14 + 0x5d8));
    uVar9 = *param_2;
    iVar7 = strlen(uVar9);
    iVar16 = iVar7;
    iVar14 = strnstr(uVar9,"add_lclus_affinity_uidlist",iVar16);
    if (iVar14 == 0) {
        iVar14 = strnstr(*param_2,"add_mclus_affinity_uidlist",iVar16);
        if (iVar14 != 0) {
            bVar2 = false;
            bVar1 = false;
            iVar14 = 2;
            goto code_r0x0800ac34;
        }
        iVar14 = strnstr(*param_2,"add_bclus_affinity_uidlist",iVar16);
        if (iVar14 != 0) {
            bVar2 = false;
            bVar1 = false;
            iVar14 = 3;
            goto code_r0x0800ac34;
        }
        iVar14 = strnstr(*param_2,"reset_clus_affinity_uidlist",iVar16);
        if (iVar14 != 0) {
            bVar2 = false;
            iVar14 = 0;
            bVar1 = true;
            goto code_r0x0800ac34;
        }
        iVar14 = strnstr(*param_2,"del_lclus_affinity_uidlist",iVar16);
        if (iVar14 != 0) {
            bVar1 = false;
            bVar2 = true;
            iVar14 = 1;
            goto code_r0x0800ac34;
        }
        iVar14 = strnstr(*param_2,"del_mclus_affinity_uidlist",iVar16);
        if (iVar14 != 0) {
            iVar14 = 2;
code_r0x0800ac30:
            bVar1 = false;
            bVar2 = true;
            goto code_r0x0800ac34;
        }
        iVar14 = strnstr(*param_2,"del_bclus_affinity_uidlist",iVar16);
        iVar7 = 0;
        if (iVar14 != 0) {
            iVar14 = 3;
            goto code_r0x0800ac30;
        }
    }
    else {
        bVar2 = false;
        bVar1 = false;
        iVar14 = 1;
code_r0x0800ac34:
        iVar7 = -1;
        uVar11 = param_1;
        do {
            uVar11 = strchr(uVar11 + 1,0x3a);
            iVar7 = iVar7 + 1;
        } while (uVar11 != 0);
        if (iVar7 == 0) {
            iVar7 = sscanf(param_1,0x8002100,&uStack_5c);
            if (iVar7 == 1) {
                if (!bVar1) {
                    if (bVar2) {
                        sym.del_uid_from_list(uStack_5c,iVar14);
                    }
                    else {
                        sym.add_uid_to_list(uStack_5c,iVar14);
                    }
                    goto code_r0x0800aaf4;
                }
                if (uStack_5c == 1) {
code_r0x0800ae78:
                    pcVar12 = obj.cluster_affinity_uid_llist;
                }
                else if (uStack_5c == 3) {
                    pcVar12 = obj.cluster_affinity_uid_blist;
                }
                else {
                    if (uStack_5c != 2) {
                        memset(0x8010938,0,25000);
                        memset(obj.cluster_affinity_uid_mlist,0,25000);
                        goto code_r0x0800ae78;
                    }
                    pcVar12 = obj.cluster_affinity_uid_mlist;
                }
                memset(pcVar12,0,25000);
                goto code_r0x0800aaf4;
            }
code_r0x0800adf0:
            iVar7 = -0x16;
        }
        else {
            iVar6 = strlen(param_1);
            uVar11 = param_1 + iVar6;
            if (bVar2) {
                iVar6 = 0;
                iVar8 = iVar6;
                if (0 < iVar7) {
                    do {
                        iVar8 = sscanf(param_1,0x8001c54,&uStack_5c);
                        if (iVar8 != 1) goto code_r0x0800adf0;
                        sym.del_uid_from_list(uStack_5c,iVar14);
                        _printk(0x8002838,iVar6,uStack_5c);
                        iVar16 = strchr(param_1 + 1,0x3a);
                        param_1 = iVar16 + 1;
                        iVar8 = iVar6;
                    } while ((param_1 < uVar11) && (iVar6 = iVar6 + 1, iVar8 = iVar7, iVar7 != iVar6));
                }
                if (param_1 < uVar11) {
                    iVar7 = sscanf(param_1,0x8001c54,&uStack_5c);
                    if (iVar7 != 1) goto code_r0x0800adf0;
                    sym.del_uid_from_list(uStack_5c,iVar14);
code_r0x0800ae9c:
                    _printk(0x80034bd,iVar8,uStack_5c);
                }
            }
            else {
                iVar6 = 0;
                iVar8 = iVar6;
                if (0 < iVar7) {
                    do {
                        iVar8 = sscanf(param_1,0x8001c54,&uStack_5c);
                        if (iVar8 != 1) goto code_r0x0800adf0;
                        sym.add_uid_to_list(uStack_5c,iVar14);
                        _printk(0x8002838,iVar6,uStack_5c);
                        iVar16 = strchr(param_1 + 1,0x3a);
                        param_1 = iVar16 + 1;
                        iVar8 = iVar6;
                    } while ((param_1 < uVar11) && (iVar6 = iVar6 + 1, iVar8 = iVar7, iVar7 != iVar6));
                }
                if (param_1 < uVar11) {
                    iVar7 = sscanf(param_1,0x8001c54,&uStack_5c);
                    if (iVar7 != 1) goto code_r0x0800adf0;
                    sym.add_uid_to_list(uStack_5c,iVar14);
                    goto code_r0x0800ae9c;
                }
            }
code_r0x0800aaf4:
            iVar7 = 0;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_58) {
        return iVar7;
    }
    auVar17 = __stack_chk_fail(iVar7);
    puVar15 = auVar17._8_8_;
    pcVar13 = auVar17._0_8_;
    *extraout_x18 = sym.get_clus_affinity_uidlist;
    if (*0x8001000 != 0) {
        iVar16 = sp_el0;
        iVar14 = iVar16 + 0x7a8;
        uVar9 = strlen(iVar14);
        iVar10 = strnstr(iVar14,"PowerKeeper",uVar9);
        if (iVar10 == 0) {
            _printk(0x8002ae0,iVar14,*(iVar16 + 0x5d8));
            return 0;
        }
    }
    iVar14 = sp_el0;
    _printk(0x8002ae0,iVar14 + 0x7a8,*(iVar14 + 0x5d8));
    uVar9 = *puVar15;
    iVar7 = strlen(uVar9);
    iVar16 = iVar7;
    iVar14 = strnstr(uVar9,"show_lclus_affinity_uidlist",iVar16);
    if (iVar14 == 0) {
        iVar14 = strnstr(*puVar15,"show_mclus_affinity_uidlist",iVar16);
        if (iVar14 == 0) {
            iVar14 = strnstr(*puVar15,"show_bclus_affinity_uidlist",iVar16);
            uVar5 = str.need_show__blm_clus_affinity_uidlist_n._24_8_;
            uVar9 = str.need_show__blm_clus_affinity_uidlist_n._16_8_;
            if (iVar14 == 0) {
                *(pcVar13 + 0x20) = str.need_show__blm_clus_affinity_uidlist_n._32_8_;
                uVar4 = str.need_show__blm_clus_affinity_uidlist_n._8_8_;
                uVar3 = str.need_show__blm_clus_affinity_uidlist_n._0_8_;
                *(pcVar13 + 0x10) = uVar9;
                *(pcVar13 + 0x18) = uVar5;
                *pcVar13 = uVar3;
                *(pcVar13 + 8) = uVar4;
                return 0x27;
            }
            iVar7 = _find_first_bit(0x8010938,200000);
            if (iVar7 < 200000) {
                iVar6 = 0;
                do {
                    iVar8 = snprintf(pcVar13 + iVar6,0x1000 - iVar6,0x8001aed,iVar7);
                    iVar6 = iVar8 + iVar6;
                    iVar7 = _find_next_bit(0x8010938,0,200000,iVar7 + 1,0,0);
                } while (iVar7 < 200000);
                goto code_r0x0800b15c;
            }
        }
        else {
            iVar7 = _find_first_bit(obj.cluster_affinity_uid_mlist,200000);
            if (iVar7 < 200000) {
                iVar6 = 0;
                do {
                    iVar8 = snprintf(pcVar13 + iVar6,0x1000 - iVar6,0x8001aed,iVar7);
                    iVar6 = iVar8 + iVar6;
                    iVar7 = _find_next_bit(obj.cluster_affinity_uid_mlist,0,200000,iVar7 + 1,0,0);
                } while (iVar7 < 200000);
                goto code_r0x0800b15c;
            }
        }
    }
    else {
        iVar7 = _find_first_bit(0x800a790,200000);
        if (iVar7 < 200000) {
            iVar6 = 0;
            do {
                iVar8 = snprintf(pcVar13 + iVar6,0x1000 - iVar6,0x8001aed,iVar7);
                iVar6 = iVar8 + iVar6;
                iVar7 = _find_next_bit(0x800a790,0,200000,iVar7 + 1,0,0);
            } while (iVar7 < 200000);
            goto code_r0x0800b15c;
        }
    }
    iVar6 = 0;
code_r0x0800b15c:
    iVar7 = snprintf(pcVar13 + iVar6,0x1000 - iVar6,0x8002f5b);
    return iVar7 + iVar6;
}


// ===== sym.set_link_vip_enable.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt @ 0x08005fa8 (size 8) =====

uint sym.set_link_vip_enable.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt(ulong param_1)

{
    int64_t iVar1;
    int iVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    uint uStack_1c;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    uStack_1c = 0;
    iVar2 = sscanf(param_1,0x8002100,&uStack_1c);
    if (iVar2 == 1) {
        uVar3 = 0;
        *0x8001000 = uStack_1c;
    }
    else {
        uVar3 = 0xffffffea;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return uVar3;
    }
    __stack_chk_fail(uVar3);
    return *0x8001000;
}


// ===== sym.set_mi_vip_task_req.877fa0db602420247113046bf2a65355.cfi_jt @ 0x08005fb0 (size 8) =====

int sym.set_mi_vip_task_req.877fa0db602420247113046bf2a65355.cfi_jt(uint64_t param_1)

{
    int iVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    code *arg1;
    uint32_t arg2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iVar2 = 1;
    uStack_40 = 0;
    uVar3 = param_1;
    do {
        uVar3 = strchr(uVar3 + 1,0x3a);
        iVar2 = iVar2 + -1;
    } while (uVar3 != 0);
    if (iVar2 == 0) {
        iVar2 = sscanf(param_1,"%u-%u\n",&uStack_40 + 4,&uStack_40);
        if (iVar2 != 2) goto code_r0x0800f5d8;
        _printk(0x8002cfa,uStack_40._4_4_,uStack_40 & 0xffffffff);
        uVar3 = uStack_40 & 0xffffffff;
        arg1 = &uStack_40 + 4;
        arg2 = 1;
        *0x8016000 = uStack_40._4_4_;
code_r0x0800f658:
        sym.mi_vip_task_req(arg1,arg2,uVar3);
    }
    else {
        iVar1 = strlen(param_1);
        uVar3 = param_1 + iVar1;
        if (-iVar2 < 1) {
            iVar4 = 0;
            if (param_1 < uVar3) {
code_r0x0800f5b8:
                iVar2 = sscanf(param_1,"%u-%u",&uStack_40 + 4,&uStack_40);
                if (iVar2 != 2) goto code_r0x0800f5d8;
                arg2 = iVar4 + 1;
                *(obj.mi_viptask + iVar4 * 4) = uStack_40._4_4_;
                _printk(0x8002063,arg2,uStack_40._4_4_,uStack_40 & 0xffffffff);
                uVar3 = uStack_40 & 0xffffffff;
            }
            else {
code_r0x0800f648:
                arg2 = iVar4;
                uVar3 = 0;
            }
            arg1 = obj.mi_viptask;
            goto code_r0x0800f658;
        }
        iVar1 = sscanf(param_1,0x8001c54,&uStack_40 + 4);
        if (iVar1 != 1) goto code_r0x0800f5d8;
        *0x8016000 = uStack_40._4_4_;
        _printk(0x8002d18,1);
        iVar4 = strchr(param_1 + 1,0x3a);
        param_1 = iVar4 + 1;
        if (uVar3 <= param_1) goto code_r0x0800f65c;
        if (iVar2 == -1) {
            iVar4 = 1;
joined_r0x0800f644:
            if (uVar3 <= param_1) goto code_r0x0800f648;
            goto code_r0x0800f5b8;
        }
        iVar1 = sscanf(param_1,0x8001c54,&uStack_40 + 4);
        if (iVar1 != 1) goto code_r0x0800f5d8;
        *0x8016000 = uStack_40._4_4_;
        _printk(0x8002d18,2);
        iVar4 = strchr(iVar4 + 2,0x3a);
        param_1 = iVar4 + 1;
        if (uVar3 <= param_1) goto code_r0x0800f65c;
        if (iVar2 == -2) {
            iVar4 = 2;
            goto joined_r0x0800f644;
        }
        iVar2 = sscanf(param_1,0x8001c54,&uStack_40 + 4);
        if (iVar2 != 1) {
code_r0x0800f5d8:
            iVar2 = -0x16;
            goto code_r0x0800f5dc;
        }
        *0x8016000 = uStack_40._4_4_;
        _printk(0x8002d18,3);
        iVar4 = strchr(iVar4 + 2,0x3a);
        if (iVar4 + 1U < uVar3) {
            iVar4 = strchr(iVar4 + 2,0x2d);
            if (iVar4 + 1U < uVar3) {
                iVar2 = sscanf(iVar4 + 1U,0x8001c54,&uStack_40);
                if (iVar2 == 1) {
                    _printk(0x80035a6,3,uStack_40 & 0xffffffff);
                    uVar3 = uStack_40 & 0xffffffff;
                    arg1 = obj.mi_viptask;
                    arg2 = 3;
                    goto code_r0x0800f658;
                }
                goto code_r0x0800f5d8;
            }
        }
    }
code_r0x0800f65c:
    iVar2 = 0;
code_r0x0800f5dc:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    iVar4 = __stack_chk_fail(iVar2);
    *extraout_x18 = sym.get_mi_viptask;
    iVar1 = snprintf(iVar4,0x1000,"%u:%d ",_obj.mi_viptask,_obj.mi_dynamic_vip_num);
    iVar2 = snprintf(iVar4 + iVar1,0x1000 - iVar1,"%u:%d ",*0x8016f5c,_obj.mi_dynamic_vip_num);
    iVar2 = iVar2 + iVar1;
    iVar1 = snprintf(iVar4 + iVar2,0x1000 - iVar2,"%u:%d ",*0x8016f60,_obj.mi_dynamic_vip_num);
    iVar1 = iVar1 + iVar2;
    iVar2 = snprintf(iVar4 + iVar1,0x1000 - iVar1,0x8002f5b);
    return iVar2 + iVar1;
}


// ===== sym.set_therm_break_enable.877fa0db602420247113046bf2a65355.cfi_jt @ 0x08005fb8 (size 8) =====

uint sym.set_therm_break_enable.877fa0db602420247113046bf2a65355.cfi_jt(ulong param_1,ulong *param_2)

{
    uint32_t uVar1;
    int iVar2;
    uint uVar3;
    int64_t iVar4;
    ulong *extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar5;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_2c = 0;
    iVar2 = sscanf(param_1,0x8002100,&uStack_2c);
    if (iVar2 == 1) {
        uVar5 = *param_2;
        iVar2 = strlen(uVar5);
        iVar4 = strnstr(uVar5,"is_break_enable",iVar2);
        uVar3 = 0;
        if (iVar4 != 0) {
            uVar3 = 0;
            *0x8016000 = uStack_2c;
        }
    }
    else {
        uVar3 = 0xffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    __stack_chk_fail(uVar3);
    *extraout_x18 = sym.get_therm_break_enable;
    uVar5 = *extraout_x1;
    iVar2 = strlen(uVar5);
    iVar4 = strnstr(uVar5,"is_break_enable",iVar2);
    uVar1 = 0;
    if (iVar4 != 0) {
        uVar1 = *0x8016000;
    }
    return uVar1;
}


// ===== sym.set_efboost.877fa0db602420247113046bf2a65355.cfi_jt @ 0x08005fc0 (size 8) =====

ulong sym.set_efboost.877fa0db602420247113046bf2a65355.cfi_jt(uint64_t param_1,ulong *param_2)

{
    uint32_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar10;
    uint64_t arg3;
    uint64_t uVar11;
    ulong uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar9 = *(iVar6 + 0x5e0);
    uVar12 = *param_2;
    iVar4 = strlen(uVar12);
    uVar11 = iVar4;
    uVar7 = uVar11;
    iVar6 = strnstr(uVar12,"add_mi_viptask_sched_priority");
    if (iVar6 == 0) {
        uVar7 = uVar11;
        iVar6 = strnstr(*param_2,"add_mi_viptask_enqueue_boost");
        if (iVar6 == 0) {
            uVar7 = uVar11;
            iVar6 = strnstr(*param_2,"del_mi_viptask_enqueue_boost");
            if (iVar6 == 0) {
                uVar7 = uVar11;
                iVar6 = strnstr(*param_2,"del_mi_viptask_sched_priority");
                if (iVar6 == 0) {
                    uVar7 = uVar11;
                    iVar6 = strnstr(*param_2,"del_mi_viptask_sched_lit_core");
                    if (iVar6 == 0) {
                        iVar6 = strnstr(*param_2,"add_mi_viptask_sched_lit_core");
                        arg3 = 0;
                        iVar6 = (iVar6 != 0) << 4;
                    }
                    else {
                        arg3 = 1;
                        iVar6 = 0x10;
                        uVar11 = uVar7;
                    }
                }
                else {
                    arg3 = 1;
                    iVar6 = 0x20000;
                    uVar11 = uVar7;
                }
            }
            else {
                arg3 = 1;
                iVar6 = 0x10000;
                uVar11 = uVar7;
            }
        }
        else {
            arg3 = 0;
            iVar6 = 0x10000;
            uVar11 = uVar7;
        }
    }
    else {
        arg3 = 0;
        iVar6 = 0x20000;
        uVar11 = uVar7;
    }
    iVar4 = -1;
    uVar7 = param_1;
    do {
        uVar7 = strchr(uVar7 + 1,0x3a);
        iVar4 = iVar4 + 1;
    } while (uVar7 != 0);
    if (iVar4 == 0) {
        uVar12 = 0x8002100;
code_r0x0800fc00:
        uVar11 = 0;
        iVar4 = sscanf(param_1,uVar12);
        if (iVar4 == 1) {
            sym.set_mi_efboost(0,iVar6,arg3);
            uVar11 = arg3;
            goto code_r0x0800fc20;
        }
code_r0x0800fc28:
        uVar12 = 0xffffffea;
    }
    else {
        iVar5 = strlen(param_1);
        uVar7 = param_1 + iVar5;
        if (0 < iVar4) {
            do {
                uVar11 = 0;
                iVar5 = sscanf(param_1,0x8001c54);
                if (iVar5 != 1) goto code_r0x0800fc28;
                uVar11 = arg3;
                iVar5 = sym.set_mi_efboost(0,iVar6,arg3);
                if (iVar5 != 1) {
                    iVar8 = strchr(param_1 + 1,0x3a);
                    param_1 = iVar8 + 1;
                    if (uVar7 <= param_1) break;
                }
                iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
        }
        if (param_1 < uVar7) {
            uVar12 = 0x8001c54;
            goto code_r0x0800fc00;
        }
code_r0x0800fc20:
        uVar12 = 0;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iVar9) {
        return uVar12;
    }
    auVar13 = __stack_chk_fail(uVar12);
    iVar9 = auVar13._8_8_;
    *extraout_x18 = sym.set_mi_efboost;
    uVar7 = auVar13._0_8_ & 0xffffffff;
    __rcu_read_lock();
    iVar6 = find_task_by_vpid(uVar7);
    if (iVar6 == 0) {
        __rcu_read_unlock();
        _printk(0x80035c4,uVar7);
        return 1;
    }
    puVar1 = iVar6 + 0x38;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = uVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (uVar10 == 0) {
        uVar12 = 2;
    }
    else {
        if (-1 < (uVar10 + 1 | uVar10)) goto code_r0x0800fcc4;
        uVar12 = 1;
    }
    refcount_warn_saturate(puVar1,uVar12);
code_r0x0800fcc4:
    __rcu_read_unlock();
    if ((uVar11 & 1) == 0) {
        sym.set_mi_vip_task(iVar6,0xffffffff,iVar9);
    }
    else {
        iVar8 = get_mi_task_struct();
        if (iVar8 != 0) {
            uVar10 = auVar13._8_4_;
            if ((uVar10 >> 0xf & 1) != 0) {
                Hint_Prefetch(0x8016f18,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(0x8016f18,0x10);
                    if (bVar3) {
                        cVar2 = ExclusiveMonitorsStatus();
                        _obj.mi_dynamic_vip_num = _obj.mi_dynamic_vip_num + -1;
                    }
                } while (cVar2 != '\0');
            }
            if ((uVar10 >> 0x11 & 1) != 0) {
                Hint_Prefetch(0x8016f08,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(0x8016f08,0x10);
                    if (bVar3) {
                        cVar2 = ExclusiveMonitorsStatus();
                        _obj.mi_sdk_eboost_vip_num = _obj.mi_sdk_eboost_vip_num + -1;
                    }
                } while (cVar2 != '\0');
            }
            if ((uVar10 >> 0x10 & 1) != 0) {
                *(iVar8 + 0x1c0) = 0xffffffff;
            }
            iVar4 = *0x8016000;
            *(iVar8 + 0x10) = *(iVar8 + 0x10) & (~uVar10 | 0x40000);
            if ((iVar4 != 0) && (iVar9 == 0x20000)) {
                _printk(0x8002b73,CONCAT44(*0x8016f0c,_obj.mi_sdk_eboost_vip_num),*(iVar6 + 0x5d8),iVar6 + 0x7a8);
            }
        }
    }
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = uVar10 - 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (uVar10 == 1) {
        DataMemoryBarrier(2,1);
        __put_task_struct(iVar6);
    }
    else if (uVar10 < 1) {
        refcount_warn_saturate(puVar1,3);
    }
    if (*0x8016000 != 0) {
        _printk(0x8002d34,uVar7,iVar9);
    }
    return 0;
}


// ===== sym.set_clear_persist_vip_task.118381c7bf2d563806cf4808beffb578.cfi_jt @ 0x08005fc8 (size 8) =====

void sym.set_clear_persist_vip_task.118381c7bf2d563806cf4808beffb578.cfi_jt(ulong param_1)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    code *pcVar8;
    ulong *in_x18;
    int64_t unaff_x19;
    uint32_t *unaff_x20;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    iStack_2c = 0;
    iVar4 = sscanf(param_1,0x8002100,&iStack_2c);
    uVar5 = 0xffffffea;
    iVar6 = unaff_x19;
    if (iVar4 != 1) goto code_r0x08013468;
    if (iStack_2c == 0) goto code_r0x08013468;
    _raw_spin_lock(obj.persist_vip_lock);
    pcVar8 = obj.persist_vip_pids;
    if (((((_obj.persist_vip_pids != iStack_2c) && (pcVar8 = 0x8016f94, *0x8016f94 != iStack_2c)) &&
         (pcVar8 = 0x8016f98, *0x8016f98 != iStack_2c)) &&
        ((pcVar8 = 0x8016f9c, *0x8016f9c != iStack_2c && (pcVar8 = 0x8016fa0, *0x8016fa0 != iStack_2c)))) &&
       ((pcVar8 = 0x8016fa4, *0x8016fa4 != iStack_2c &&
        ((pcVar8 = 0x8016fa8, *0x8016fa8 != iStack_2c && (pcVar8 = 0x8016fac, *0x8016fac != iStack_2c))))))
    goto code_r0x08013458;
    *pcVar8 = 0;
    __rcu_read_lock();
    iVar6 = find_task_by_vpid(iStack_2c);
    if (iVar6 == 0) goto code_r0x08013454;
    unaff_x20 = iVar6 + 0x38;
    do {
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar1 = *unaff_x20;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar3) {
                *unaff_x20 = uVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (uVar1 == 0) {
            uVar5 = 2;
code_r0x0801342c:
            refcount_warn_saturate(unaff_x20,uVar5);
        }
        else if ((uVar1 + 1 | uVar1) < 0) {
            uVar5 = 1;
            goto code_r0x0801342c;
        }
        iVar7 = get_mi_task_struct(iVar6);
        if (iVar7 == 0) {
            _printk(0x8002d54,iStack_2c);
        }
        else {
            *(iVar7 + 0x10) = *(iVar7 + 0x10) & 0xffefffff;
        }
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar1 = *unaff_x20;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar3) {
                *unaff_x20 = uVar1 - 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        unaff_x19 = iVar6;
        if (uVar1 == 1) {
            DataMemoryBarrier(2,1);
            __put_task_struct(iVar6);
        }
        else if (uVar1 < 1) {
            refcount_warn_saturate(unaff_x20,3);
        }
code_r0x08013454:
        __rcu_read_unlock();
code_r0x08013458:
        _raw_spin_unlock(obj.persist_vip_lock);
        uVar5 = 0;
        iVar6 = unaff_x19;
code_r0x08013468:
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iStack_28) {
            return;
        }
        __stack_chk_fail(uVar5);
    } while( true );
}


// ===== sym.set_common_persist_vip_task.118381c7bf2d563806cf4808beffb578.cfi_jt @ 0x08005fd0 (size 8) =====

int sym.set_common_persist_vip_task.118381c7bf2d563806cf4808beffb578.cfi_jt(ulong param_1)

{
    bool bVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    int iVar7;
    int iVar8;
    int64_t iVar9;
    uint *puVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    uStack_2c = 0;
    iVar7 = sscanf(param_1,0x8002100,&uStack_2c);
    iVar8 = -0x16;
    if ((iVar7 == 1) && (uStack_2c != 0)) {
        __rcu_read_lock();
        iVar9 = find_task_by_vpid(uStack_2c);
        if (iVar9 == 0) {
            iVar8 = -3;
        }
        else {
            _raw_spin_lock(obj.persist_vip_lock);
            iVar8 = sym.__set_common_persist_vip(uStack_2c,iVar9);
            _raw_spin_unlock(obj.persist_vip_lock);
        }
        __rcu_read_unlock();
        _printk(0x8002a7b,uStack_2c,iVar8);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_28) {
        puVar10 = __stack_chk_fail();
        *extraout_x18 = sym.get_common_persist_vip_task;
        _raw_spin_lock(obj.persist_vip_lock);
        bVar6 = *0x8016000 == 0;
        if (*0x8016000 == 0) {
            iVar7 = 0;
        }
        else {
            iVar7 = sprintf(puVar10,0x800330f);
        }
        bVar1 = *0x8016000 != 0;
        if (bVar1) {
            iVar8 = sprintf(puVar10 + iVar7,0x800330f);
            iVar7 = iVar8 + iVar7;
        }
        bVar2 = *0x8016000 != 0;
        if (bVar2) {
            iVar8 = sprintf(puVar10 + iVar7,0x800330f);
            iVar7 = iVar8 + iVar7;
        }
        bVar3 = *0x8016000 != 0;
        if (bVar3) {
            iVar8 = sprintf(puVar10 + iVar7,0x800330f);
            iVar7 = iVar8 + iVar7;
        }
        bVar4 = *0x8016000 != 0;
        if (bVar4) {
            iVar8 = sprintf(puVar10 + iVar7,0x800330f);
            iVar7 = iVar8 + iVar7;
        }
        bVar5 = *0x8016000 != 0;
        if (bVar5) {
            iVar8 = sprintf(puVar10 + iVar7,0x800330f);
            iVar7 = iVar8 + iVar7;
        }
        if (*0x8016000 == 0) {
            _raw_spin_unlock(obj.persist_vip_lock);
            if (!bVar5 && (!bVar4 && (!bVar3 && (!bVar2 && (!bVar1 && bVar6))))) {
                *(puVar10 + 3) = 0xa7974;
                *puVar10 = 0x74706d65;
                return 6;
            }
        }
        else {
            iVar8 = sprintf(puVar10 + iVar7,0x800330f);
            iVar7 = iVar8 + iVar7;
            if (*0x8016000 != 0) {
                iVar8 = sprintf(puVar10 + iVar7,0x800330f);
                iVar7 = iVar8 + iVar7;
            }
            _raw_spin_unlock(obj.persist_vip_lock);
        }
        if (0 < iVar7) {
            *(puVar10 + (iVar7 - 1)) = 10;
        }
        return iVar7;
    }
    return iVar8;
}


// ===== sym.set_fboost_enable.877fa0db602420247113046bf2a65355.cfi_jt @ 0x08005fd8 (size 8) =====

uint sym.set_fboost_enable.877fa0db602420247113046bf2a65355.cfi_jt(ulong param_1)

{
    int64_t iVar1;
    int iVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    uint uStack_1c;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    uStack_1c = 0;
    iVar2 = sscanf(param_1,0x8002100,&uStack_1c);
    if (iVar2 == 1) {
        uVar3 = 0;
        *0x8016000 = uStack_1c;
    }
    else {
        uVar3 = 0xffffffea;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return uVar3;
    }
    __stack_chk_fail(uVar3);
    return *0x8016000;
}


// ===== sym.metis_freq_qos_request_init.b1e49afbd87934ed80dab30c248d2d24.cfi_jt @ 0x08005fe0 (size 8) =====

int sym.metis_freq_qos_request_init.b1e49afbd87934ed80dab30c248d2d24.cfi_jt(ulong param_1,int64_t param_2)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    ulong uVar7;
    uint64_t uVar8;
    char *pcVar9;
    ulong *in_x18;
    uint *unaff_x21;
    uint *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0) {
        *0x8016e50 = 0;
        _obj.nb_max_limit = sym.cpufreq_notifier_max.b1e49afbd87934ed80dab30c248d2d24.cfi_jt;
        *0x8016e58 = sym.cpufreq_notifier_max.b1e49afbd87934ed80dab30c248d2d24.cfi_jt;
        *0x8016e70 = 1;
        *0x8016e78 = sym.cpufreq_notifier_max.b1e49afbd87934ed80dab30c248d2d24.cfi_jt;
        *0x8016e90 = 2;
        uVar3 = cpumask_next(0xffffffff,__cpu_present_mask);
        *unaff_x21 = 0x805f000;
        while (uVar3 < 0x805f000) {
            iVar6 = cpufreq_cpu_get(uVar3);
            if (iVar6 == 0) {
                _printk(0x8002165,"metis_freq_qos_request_init",uVar3);
                iVar5 = -0xb;
code_r0x0800cafc:
                uVar3 = cpumask_next(0xffffffff,__cpu_present_mask);
                ___cpu_present_mask = 0x805f000;
                if (0x805efff < uVar3) {
                    ___cpu_present_mask = 0x805f000;
                    return iVar5;
                }
                puVar10 = uVar3;
                while (puVar10 < 0x20) {
                    iVar6 = *(__per_cpu_offset + puVar10 * 8);
                    if (((iVar6 != -0x8014d00) && (*(iVar6 + 0x8014d30) != 0)) &&
                       (*(iVar6 + 0x8014d30) < 0xfffffffffffff001)) {
                        freq_qos_remove_request();
                        iVar6 = *(__per_cpu_offset + puVar10 * 8);
                    }
                    if (((iVar6 != -0x8014d48) && (*(iVar6 + 0x8014d78) != 0)) &&
                       (*(iVar6 + 0x8014d78) < 0xfffffffffffff001)) {
                        freq_qos_remove_request();
                    }
                    uVar3 = cpumask_next(puVar10,__cpu_present_mask);
                    puVar10 = uVar3;
                    *puVar10 = 0x805f000;
                    if (0x805efff < uVar3) {
                        return iVar5;
                    }
                }
code_r0x0800cb9c:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x800cba0);
                (*pcVar2)();
            }
            uVar4 = get_cluster_type(*(iVar6 + 0x1c));
            uVar1 = 0;
            if (uVar4 < 4) {
                uVar1 = uVar4;
            }
            uVar8 = uVar1;
            if (2 < uVar1) goto code_r0x0800cb9c;
            if (0x60 < (uVar8 << 5 | 0x1c)) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(1,0x800cba4);
                (*pcVar2)();
            }
            pcVar9 = uVar8 * 0x20 + 0x8016e54;
            if (*pcVar9 == '\0') {
                *pcVar9 = '\x01';
                freq_qos_add_notifier(iVar6 + 0xa0,2,obj.nb_max_limit + uVar8 * 0x20);
            }
            *0x8016000 = *0x8016000 & (*(iVar6 + 8) ^ 0xffffffff);
            if (0x1f < uVar3) goto code_r0x0800cb9c;
            iVar5 = freq_qos_add_request(iVar6 + 0xa0,obj.metis_req_min + *(__per_cpu_offset + uVar3 * 8),1,0);
            if (iVar5 < 0) {
                uVar7 = 0x8001d9d;
code_r0x0800cae4:
                _printk(uVar7,"metis_freq_qos_request_init",iVar5);
                cpufreq_cpu_put(iVar6);
                goto code_r0x0800cafc;
            }
            iVar5 = freq_qos_add_request
                              (iVar6 + 0xa0,obj.metis_req_max + *(__per_cpu_offset + uVar3 * 8),2,0x7fffffff);
            if (iVar5 < 0) {
                uVar7 = 0x8001c57;
                goto code_r0x0800cae4;
            }
            cpufreq_cpu_put(iVar6);
            uVar3 = cpumask_next(uVar3,__cpu_present_mask);
            ___cpu_present_mask = 0x805f000;
        }
        _printk(0x8003812);
        if (*0x8016000 == 0) {
            queue_work_on(0x20,_raw_spin_rq_unlock,obj.finish_fboost_work);
        }
    }
    return 0;
}


// ===== sym.kmsg_runtime_info_debug_show.2b6473c3def53e73fda9ad8cc2d103f8.cfi_jt @ 0x08005fe8 (size 8) =====

ulong sym.kmsg_runtime_info_debug_show.2b6473c3def53e73fda9ad8cc2d103f8.cfi_jt(void)

{
    int iVar1;
    int64_t iVar2;
    code *pcVar3;
    bool bVar4;
    uint32_t uVar5;
    ulong extraout_x8;
    ulong extraout_x8_00;
    int64_t iVar6;
    ulong *in_x18;
    ulong *unaff_x19;
    ulong *puVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *unaff_x19 = extraout_x8;
    if (uVar5 < extraout_x8) {
        do {
            puVar7 = uVar5;
            if (0x1f < uVar5) goto code_r0x08012cb4;
            iVar6 = *(__per_cpu_offset + puVar7 * 8);
            if ((((*(iVar6 + 0x8014e58) != 0) || (*(iVar6 + 0x8014e5c) != 0)) || (*(iVar6 + 0x8014e60) != 0)) ||
               (*(iVar6 + 0x8014e64) != 0)) {
                _printk(0x80038c5,puVar7);
                uVar5 = *(iVar6 + 0x8014de0);
                if (uVar5 < 10) {
                    iVar8 = uVar5;
                    pcVar3 = obj.metis_runqueues + uVar5 * 0x18 + iVar6 + 0x550;
                    do {
                        if (9 < iVar8) goto code_r0x08012cb4;
                        if (*(pcVar3 + -8) != 0) {
                            _printk(0x80028ce,*(pcVar3 + -8),*pcVar3);
                        }
                        iVar8 = iVar8 + 1;
                        pcVar3 = pcVar3 + 0x18;
                    } while (iVar8 != 10);
                    uVar5 = *(iVar6 + 0x8014de0);
                    if (0 < uVar5) goto code_r0x08012a00;
                }
                else {
code_r0x08012a00:
                    if (*(iVar6 + 0x8015308) != 0) {
                        _printk(0x80028ce,*(iVar6 + 0x8015308),*(iVar6 + 0x8015310));
                    }
                    if (uVar5 != 1) {
                        if (*(iVar6 + 0x8015320) != 0) {
                            _printk(0x80028ce,*(iVar6 + 0x8015320),*(iVar6 + 0x8015328));
                        }
                        if (uVar5 != 2) {
                            if (*(iVar6 + 0x8015338) != 0) {
                                _printk(0x80028ce,*(iVar6 + 0x8015338),*(iVar6 + 0x8015340));
                            }
                            if (uVar5 != 3) {
                                if (*(iVar6 + 0x8015350) != 0) {
                                    _printk(0x80028ce,*(iVar6 + 0x8015350),*(iVar6 + 0x8015358));
                                }
                                if (uVar5 != 4) {
                                    if (*(iVar6 + 0x8015368) != 0) {
                                        _printk(0x80028ce,*(iVar6 + 0x8015368),*(iVar6 + 0x8015370));
                                    }
                                    if (uVar5 != 5) {
                                        if (*(iVar6 + 0x8015380) != 0) {
                                            _printk(0x80028ce,*(iVar6 + 0x8015380),*(iVar6 + 0x8015388));
                                        }
                                        if (uVar5 != 6) {
                                            if (*(iVar6 + 0x8015398) != 0) {
                                                _printk(0x80028ce,*(iVar6 + 0x8015398),*(iVar6 + 0x80153a0));
                                            }
                                            if (uVar5 != 7) {
                                                if (*(iVar6 + 0x80153b0) != 0) {
                                                    _printk(0x80028ce,*(iVar6 + 0x80153b0),*(iVar6 + 0x80153b8));
                                                }
                                                if (uVar5 != 8) {
                                                    if (*(iVar6 + 0x80153c8) != 0) {
                                                        _printk(0x80028ce,*(iVar6 + 0x80153c8),*(iVar6 + 0x80153d0));
                                                    }
                                                    if (uVar5 != 9) {
                                                        if (*(iVar6 + 0x80153e0) != 0) {
                                                            _printk(0x80028ce,*(iVar6 + 0x80153e0),
                                                                    *(iVar6 + 0x80153e8));
                                                        }
                                                        if (uVar5 != 10) {
code_r0x08012cb4:
    //WARNING: Does not return
                                                            pcVar3 = SoftwareBreakpoint(0x5512,0x8012cb8);
                                                            (*pcVar3)();
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
                }
                uVar5 = *(iVar6 + 0x8014ddc);
                if (uVar5 < 10) {
                    iVar8 = uVar5 + -10;
                    pcVar3 = obj.metis_runqueues + uVar5 * 0x18 + iVar6 + 0x458;
                    do {
                        if (9 < uVar5) goto code_r0x08012cb4;
                        if (*pcVar3 != 0) {
                            _printk(0x8002472,*pcVar3,*(pcVar3 + 0x10),*(pcVar3 + 0x1e0),*(pcVar3 + 0x1e8));
                        }
                        bVar4 = iVar8 != -1;
                        iVar8 = iVar8 + 1;
                        pcVar3 = pcVar3 + 0x18;
                        uVar5 = uVar5 + 1;
                    } while (bVar4);
                    uVar5 = *(iVar6 + 0x8014ddc);
                    if (0 < uVar5) goto code_r0x08012c40;
                }
                else {
code_r0x08012c40:
                    iVar8 = 0;
                    do {
                        if (iVar8 == 0xf0) goto code_r0x08012cb4;
                        iVar2 = iVar8 + iVar6;
                        iVar1 = *(obj.metis_runqueues + iVar2 + 0x458);
                        if (iVar1 != 0) {
                            _printk(0x8002472,iVar1,*(obj.metis_runqueues + iVar2 + 0x468),
                                    *(obj.metis_runqueues + iVar2 + 0x638),*(obj.metis_runqueues + iVar2 + 0x640));
                        }
                        iVar8 = iVar8 + 0x18;
                    } while (uVar5 * 0x18 - iVar8 != 0);
                }
                if (*(iVar6 + 0x80151b8) != 0) {
                    _printk(0x8001fb8,*(iVar6 + 0x80151b8),*(iVar6 + 0x80151d0),*(iVar6 + 0x80151d8));
                }
            }
            uVar5 = cpumask_next(puVar7,__cpu_possible_mask);
            *puVar7 = extraout_x8_00;
        } while (uVar5 < extraout_x8_00);
    }
    return 0;
}


// ===== sym.cpufreq_notifier_max.b1e49afbd87934ed80dab30c248d2d24.cfi_jt @ 0x08005ff0 (size 8) =====

ulong sym.cpufreq_notifier_max.b1e49afbd87934ed80dab30c248d2d24.cfi_jt(int64_t param_1,ulong param_2)

{
    code *pcVar1;
    
    if (*(param_1 + 0x18) < 3) {
        *(obj.max_limit_freq + *(param_1 + 0x18) * 8) = param_2;
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800cbd0);
    (*pcVar1)();
}


// ===== sym.mi_check_preempt_wakeup_hook.cfi_jt @ 0x08005ff8 (size 8) =====

void sym.mi_check_preempt_wakeup_hook.cfi_jt
               (ulong param_1,int64_t param_2,int64_t param_3,uint8_t *param_4,uchar *param_5)

{
    code *pcVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    uchar *in_stack_00000010;
    
    *in_x18 = unaff_x30;
    sym.prio_sched_check(param_2);
    if (0x1f < *(param_2 + 0xba8)) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x800d558);
        (*pcVar1)();
    }
    uVar5 = 0;
    if (*(*(__per_cpu_offset + *(param_2 + 0xba8) * 8) + 0x8015208) == '\0') goto code_r0x0800d530;
    arg1 = *(param_2 + 0xaa0);
    if (arg1 == 0) {
        uVar5 = 0;
        uVar2 = 0;
        if (param_3 != 0) goto code_r0x0800d4e4;
        goto code_r0x0800d52c;
    }
    uVar4 = sym.mi_vip_task(arg1);
    if ((uVar4 & 1) == 0) {
        uVar2 = sym.mi_art_mutex_vip_task(arg1);
        if (param_3 != 0) goto code_r0x0800d4e4;
        if ((uVar2 & 1) == 0) {
            uVar5 = 0;
            goto code_r0x0800d52c;
        }
code_r0x0800d518:
        uVar5 = 0;
        *param_5 = 1;
        *in_stack_00000010 = 1;
    }
    else {
        if (param_3 == 0) goto code_r0x0800d518;
        uVar2 = 1;
code_r0x0800d4e4:
        uVar4 = sym.mi_vip_task(param_3);
        if ((uVar4 & 1) == 0) {
            uVar3 = sym.mi_art_mutex_vip_task(param_3);
            uVar5 = (uVar2 ^ 1) & uVar3;
            if ((((uVar2 ^ 1) & 1) == 0) && ((uVar3 & 1) == 0)) goto code_r0x0800d518;
        }
        else {
            uVar5 = uVar2 ^ 1;
        }
    }
code_r0x0800d52c:
    uVar5 = uVar5 & 1;
code_r0x0800d530:
    *param_4 = uVar5;
    return;
}


// ===== sym.mi_lock_rwsem_wake_finish_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt @ 0x08006000 (size 8) =====

void sym.mi_lock_rwsem_wake_finish_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt(void)

{
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = sp_el0;
    sym.mi_lock_vip_finish_common(arg1);
    return;
}


// ===== sym.mi_rwsem_write_wait_start_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt @ 0x08006008 (size 8) =====

void sym.mi_rwsem_write_wait_start_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt(ulong param_1,uint64_t *param_2)

{
    int64_t arg1;
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 != NULL) {
        arg1 = sp_el0;
        uVar1 = sym.mi_vip_task(arg1);
        if ((((uVar1 & 1) != 0) || (uVar1 = sym.mi_link_vip_task(arg1), (uVar1 & 1) != 0)) && ((*param_2 & 1) != 0)) {
            sym.do_set_lock_vip(param_2[1] & 0xfffffffffffffffc,arg1,0x8002fa0);
        }
    }
    return;
}


// ===== sym.mi_rwsem_read_wait_start_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt @ 0x08006010 (size 8) =====

void sym.mi_rwsem_read_wait_start_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt(ulong param_1,uint64_t *param_2)

{
    int64_t arg1;
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 != NULL) {
        arg1 = sp_el0;
        uVar1 = sym.mi_vip_task(arg1);
        if ((((uVar1 & 1) != 0) || (uVar1 = sym.mi_link_vip_task(arg1), (uVar1 & 1) != 0)) && ((*param_2 & 1) != 0)) {
            sym.do_set_lock_vip(param_2[1] & 0xfffffffffffffffc,arg1,0x8002fa0);
        }
    }
    return;
}


// ===== sym.unregister_rvh_mi_try_to_wake_up.cfi_jt @ 0x08006018 (size 8) =====

void sym.unregister_rvh_mi_try_to_wake_up.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 < 2) {
        *in_x18 = unaff_x30;
        *(obj.mi_try_to_wake_up_func + param_1 * 8) = 0;
        _printk(0x8002049,"unregister_rvh_mi_try_to_wake_up",param_1);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80069d8);
    (*pcVar1)();
}


// ===== sym.unregister_mi_walt_get_indicies.cfi_jt @ 0x08006020 (size 8) =====

void sym.unregister_mi_walt_get_indicies.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 < 2) {
        _printk(0x8002b2d,"unregister_mi_walt_get_indicies");
        if (1 < param_1) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x800ef8c);
            (*pcVar1)();
        }
        *(obj.mi_walt_get_indicies_func + param_1 * 8) = 0;
    }
    else {
        _printk(0x8002969);
    }
    return;
}


// ===== sym.unregister_mi_find_energy_efficient_cpu.cfi_jt @ 0x08006028 (size 8) =====

void sym.unregister_mi_find_energy_efficient_cpu.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 < 2) {
        _printk(0x8002b2d,"unregister_mi_find_energy_efficient_cpu");
        if (1 < param_1) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x800f070);
            (*pcVar1)();
        }
        *(obj.wake_render_func + param_1 * 8) = 0;
    }
    else {
        _printk(0x8002969);
    }
    return;
}


// ===== sym.restore_boost_cluster.cfi_jt @ 0x08006030 (size 8) =====

void sym.restore_boost_cluster.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    uint64_t uVar2;
    
    if (3 < param_1) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x800bc70);
        (*pcVar1)();
    }
    if (*0x8001000 != 0) {
        uVar2 = param_1;
        if ((0x18 < (uVar2 << 3 | 4)) || (*(uVar2 * 8 + 0x8016b3c) = 2, 2 < param_1)) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(1,0x800bc6c);
            (*pcVar1)();
        }
        *(obj.bcluster_stat + uVar2 * 8) = 1;
    }
    return;
}


// ===== sym.set_foreground_app.cfi_jt @ 0x08006038 (size 8) =====

void sym.set_foreground_app.cfi_jt(uint param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8016000 != 0) {
        _printk(0x8003a03,*0x8016000,param_1);
    }
    *0x8016000 = param_1;
    return;
}


// ===== sym.unregister_mi_dequeue_task_fair_hook.cfi_jt @ 0x08006040 (size 8) =====

void sym.unregister_mi_dequeue_task_fair_hook.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 < 2) {
        _printk(0x8002b2d,"unregister_mi_dequeue_task_fair_hook");
        if (1 < param_1) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x800f238);
            (*pcVar1)();
        }
        *(obj.mi_dequeue_task_fair_func + param_1 * 8) = 0;
    }
    else {
        _printk(0x8002852);
    }
    return;
}


// ===== sym.mi_scheduler_tick_hook.cfi_jt @ 0x08006048 (size 8) =====

void sym.mi_scheduler_tick_hook.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8016000 != 0) {
        iVar6 = *0x8001000;
        iVar3 = get_mi_task_struct(*(param_1 + 0xaa0));
        if (0x1f < *(param_1 + 0xba8)) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x80119c8);
            (*pcVar1)();
        }
        if (iVar3 != 0) {
            iVar3 = *(__per_cpu_offset + *(param_1 + 0xba8) * 8);
            iVar4 = sym.fas_sched_clock();
            uVar7 = iVar4 - *(iVar3 + 0x8014dc8);
            if (uVar7 < iVar6 * 1000000000) {
                if (*0x8016000 != 0) {
                    _printk(0x80028a5);
                    _printk(0x80035f4,*(param_1 + 0xba8),*(*(param_1 + 0xaa0) + 0x5d8),uVar7);
                }
            }
            else {
                if (*0x8016000 != 0) {
                    _printk(0x80028a5);
                    _printk(0x80035f4,*(param_1 + 0xba8),*(*(param_1 + 0xaa0) + 0x5d8),uVar7);
                }
                iVar6 = 400;
                if (1 < *(*(param_1 + 0xaa0) + 0x420) - 1U) {
                    iVar6 = 0x1b8;
                }
                iVar6 = iVar6 + iVar3;
                *(obj.metis_runqueues + iVar6 + 0x268) = *(*(param_1 + 0xaa0) + 0x5d8);
                *(obj.metis_runqueues + iVar6 + 0x280) = uVar7;
                *(obj.metis_runqueues + iVar6 + 0x288) = iVar4;
                uVar5 = *(*(param_1 + 0xaa0) + 0x7a8);
                *(obj.metis_runqueues + iVar6 + 0x274) = *(*(param_1 + 0xaa0) + 0x7b0);
                *(obj.metis_runqueues + iVar6 + 0x26c) = uVar5;
                uVar2 = sym.get_thread_type(*(param_1 + 0xaa0));
                if (uVar2 == 1) {
                    *(iVar3 + 0x8014e5c) = *(iVar3 + 0x8014e5c) + 1;
                    if (*0x8001000 != 0) {
                        *(iVar3 + 0x8015210) = iVar4;
                        *(iVar3 + 0x8015208) = 0;
                    }
                }
                else {
                    iVar3 = uVar2 * 4 + iVar3;
                    *(obj.metis_runqueues + iVar3 + 0x98) = *(obj.metis_runqueues + iVar3 + 0x98) + 1;
                }
            }
        }
    }
    return;
}


// ===== sym.mi_art_mutex_debug_open.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt @ 0x08006050 (size 8) =====

void sym.mi_art_mutex_debug_open.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt(ulong param_1,ulong param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = PDE_DATA();
    single_open(param_2,sym.mi_art_mutex_debug_show.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,uVar1);
    return;
}


// ===== sym.runtime_info_debug_open.2b6473c3def53e73fda9ad8cc2d103f8.cfi_jt @ 0x08006058 (size 8) =====

void sym.runtime_info_debug_open.2b6473c3def53e73fda9ad8cc2d103f8.cfi_jt(ulong param_1,ulong param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = PDE_DATA();
    single_open(param_2,sym.runtime_info_debug_show.2b6473c3def53e73fda9ad8cc2d103f8.cfi_jt,uVar1);
    return;
}


// ===== sym.metis_link_release.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt @ 0x08006060 (size 8) =====

ulong sym.metis_link_release.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt(void)

{
    return 0;
}


// ===== sym.single_release.cfi_jt @ 0x08006068 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.metis_link_open.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt @ 0x08006070 (size 8) =====

ulong sym.metis_link_open.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt(void)

{
    return 0;
}


// ===== sym.metis_open.877fa0db602420247113046bf2a65355.cfi_jt @ 0x08006078 (size 8) =====

ulong sym.metis_open.877fa0db602420247113046bf2a65355.cfi_jt(void)

{
    return 0;
}


// ===== sym.metis_release.877fa0db602420247113046bf2a65355.cfi_jt @ 0x08006080 (size 8) =====

ulong sym.metis_release.877fa0db602420247113046bf2a65355.cfi_jt(void)

{
    return 0;
}


// ===== sym.proc_open_fas.877fa0db602420247113046bf2a65355.cfi_jt @ 0x08006088 (size 8) =====

void sym.proc_open_fas.877fa0db602420247113046bf2a65355.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.proc_show_fas.877fa0db602420247113046bf2a65355.cfi_jt,0);
    return;
}


// ===== sym.queue_for_boost_cluster.b1e49afbd87934ed80dab30c248d2d24.cfi_jt @ 0x08006090 (size 8) =====

ulong sym.queue_for_boost_cluster.b1e49afbd87934ed80dab30c248d2d24.cfi_jt(void)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8016000 != 0) {
        iVar2 = ktime_get();
        _printk(0x8001b02,0x146,iVar2 / 1000);
    }
    if (_obj.fboost_exe_mode + *0x8016b34 != 0) {
        uVar1 = _raw_spin_lock_irqsave(obj.fboost_pending_lock);
        obj.fboost_pending = 0x1;
        _raw_spin_unlock_irqrestore(obj.fboost_pending_lock,uVar1);
        wake_up_process(CONCAT44(*0x8016004,*0x8016000));
    }
    return 0;
}


// ===== sym.mi_do_futex.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt @ 0x08006098 (size 8) =====

void sym.mi_do_futex.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt
               (ulong param_1,int param_2,uint8_t *param_3,uint *param_4)

{
    uint64_t uVar1;
    ulong *arg1;
    int iVar2;
    bool bVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint *puVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 == 0) && ((*param_3 & 1) == 0)) {
        arg1 = sp_el0;
        uVar4 = sym.mi_vip_task(arg1);
        if ((((uVar4 & 1) != 0) || (uVar4 = sym.mi_link_vip_task(arg1), (uVar4 & 1) != 0)) &&
           ((iVar5 = get_mi_task_struct(arg1), param_4 != NULL && (iVar5 != 0)))) {
            *(arg1 + 0x15a) = *(arg1 + 0x15a) + 1;
            uVar4 = (param_4 << 8) >> 8;
            if (((*(arg1 + 0x3e) >> 5 & 1) != 0) || (puVar6 = param_4, (*arg1 >> 0x1a & 1) != 0)) {
                puVar6 = param_4 & uVar4;
            }
            bVar3 = 0xfffffffffffffffb < puVar6;
            puVar6 = puVar6 + 1;
            uVar1 = 0;
            if (!bVar3 || puVar6 == NULL) {
                uVar1 = 0x7fffffffff;
            }
            if (bVar3) {
                puVar6 = 0xffffffffffffffff;
            }
            if ((CARRY8(puVar6,~uVar1) || CARRY8(puVar6 + ~uVar1,bVar3)) && puVar6 != uVar1 + !bVar3) {
                *(iVar5 + 0x1c4) = 0;
                *(arg1 + 0x15a) = *(arg1 + 0x15a) + -1;
                _printk(0x8002104,*(arg1 + 0xbb),arg1 + 0xf5);
            }
            else {
                puVar6 = param_4;
                if ((param_4 & uVar4 & 0xffffff8000000000) != 0) {
                    puVar6 = NULL;
                }
                if ((_delayed_work_timer_fn >> 0x18 & 1) == 0) {
                    uVar4 = daif;
                    if ((uVar4 & 0x80) == 0) {
                        uVar1 = daif;
                        daif = uVar1 | 0xc0;
                    }
                    uVar1 = ttbr1_el1;
                    ttbr1_el1 = arg1[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    ttbr0_el1 = arg1[1];
                    InstructionSynchronizationBarrier();
                    daif = uVar4;
                }
                if ((_delayed_work_timer_fn >> 0x18 & 1) == 0) {
                    uVar4 = daif;
                    if ((uVar4 & 0x80) == 0) {
                        uVar1 = daif;
                        daif = uVar1 | 0xc0;
                    }
                    uVar1 = ttbr1_el1;
                    ttbr0_el1 = (uVar1 & 0xffffffffffff) - 0x1000;
                    InstructionSynchronizationBarrier();
                    ttbr1_el1 = uVar1 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    daif = uVar4;
                }
                *(iVar5 + 0x1c4) = *puVar6;
                iVar2 = *0x8001000;
                *(arg1 + 0x15a) = *(arg1 + 0x15a) + -1;
                *(iVar5 + 0x1c8) = 0x6f;
                if (iVar2 != 0) {
                    _printk(0x800314c,param_4,*(arg1 + 0xbb),arg1 + 0xf5);
                }
            }
        }
    }
    return;
}


// ===== sym.register_mi_dequeue_task_fair_hook.cfi_jt @ 0x080060a0 (size 8) =====

void sym.register_mi_dequeue_task_fair_hook.cfi_jt(uint32_t param_1,ulong param_2)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 < 2) {
        _printk(0x8002b2d,"register_mi_dequeue_task_fair_hook");
        if (1 < param_1) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x800f1c8);
            (*pcVar1)();
        }
        *(obj.mi_dequeue_task_fair_func + param_1 * 8) = param_2;
    }
    else {
        _printk(0x8002852);
    }
    return;
}


// ===== sym.proc_write_fas.877fa0db602420247113046bf2a65355.cfi_jt @ 0x080060a8 (size 8) =====

uint64_t sym.proc_write_fas.877fa0db602420247113046bf2a65355.cfi_jt(ulong param_1,int64_t param_2,uint64_t param_3)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int iStack_3c;
    unkbyte5 Stack_38;
    unkbyte3 Stack_33;
    unkbyte5 Stack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    if (0xb < param_3) {
        param_3 = 0xc;
    }
    iStack_28 = *(iVar3 + 0x5e0);
    iStack_3c = 0;
    Stack_38 = 0;
    Stack_33 = 0;
    Stack_30 = 0;
    __check_object_size(&Stack_38,param_3,0);
    iVar3 = sym._copy_from_user_1(&Stack_38,param_2,param_3);
    if (iVar3 == 0) {
        uVar4 = strim(&Stack_38);
        iVar2 = kstrtoint(uVar4,0,&iStack_3c);
        iVar1 = iStack_3c;
        if (iVar2 == 0) {
            if (iStack_3c < 10000) {
                param_3 = 0xffffffffffffffea;
                iVar1 = *0x8016000;
            }
            else if (*0x8016000 != 0) {
                _printk(0x8003a03,*0x8016000,iStack_3c);
            }
        }
        else {
            iVar1 = *0x8016000;
            if (iVar2 < 0) {
                param_3 = iVar2;
            }
        }
    }
    else {
        param_3 = 0xfffffffffffffff2;
        iVar1 = *0x8016000;
    }
    *0x8016000 = iVar1;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_28) {
        uVar4 = __stack_chk_fail();
        *extraout_x18 = sym.proc_show_fas;
        seq_printf(uVar4,"forground app uid:%d\n",*0x8016000);
        return 0;
    }
    return param_3;
}


// ===== sym.metis_common_api_exit.cfi_jt @ 0x080060b0 (size 8) =====

void sym.metis_common_api_exit.cfi_jt(void)

{
    return;
}


// ===== sym.unregister_game_enqueue_hooks.cfi_jt @ 0x080060b8 (size 8) =====

void sym.unregister_game_enqueue_hooks.cfi_jt(void)

{
    *0x8016000 = 0;
    return;
}


// ===== sym.unregister_mi_enqueue_entity_hook.cfi_jt @ 0x080060c0 (size 8) =====

void sym.unregister_mi_enqueue_entity_hook.cfi_jt(void)

{
    *0x8016000 = 0;
    return;
}


// ===== sym.unregister_game_wake_f.cfi_jt @ 0x080060c8 (size 8) =====

void sym.unregister_game_wake_f.cfi_jt(void)

{
    *0x8001000 = 0;
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080060d0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.metis_link_exit();
    unregister_sysctl_table(*0x8001000);
    *0x8001000 = 0;
    sym.metis_doublecyc_exit();
    sym.metis_fboost_exit();
    sym.fas_exit();
    _printk(0x8002b2d,"unregister_mi_enqueue_task_fair_hook");
    *0x8016000 = 0;
    _printk(0x8002b2d,"unregister_mi_dequeue_task_fair_hook");
    *0x8016000 = 0;
    _printk(0x8002b2d,"unregister_mi_find_energy_efficient_cpu");
    *0x8016000 = 0;
    _printk(0x8002b2d,"unregister_mi_walt_get_indicies");
    *0x8016000 = 0;
    misc_deregister(obj.metis_misc);
    return;
}


// ===== sym.metis_link_exit.cfi_jt @ 0x080060d8 (size 8) =====

void sym.metis_link_exit.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    misc_deregister(obj.link_debug);
    if (*0x8001000 != 0) {
        proc_remove();
    }
    *0x8001000 = 0;
    _printk(0x8002049,"unregister_rvh_mi_try_to_wake_up",1);
    *0x8001000 = 0;
    _printk(0x8002f31,"metis_link_exit");
    return;
}


// ===== sym.clu_aff_exit.cfi_jt @ 0x080060e0 (size 8) =====

void sym.clu_aff_exit.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_sysctl_table(*0x8001000);
    *0x8001000 = 0;
    return;
}


// ===== sym.metis_fboost_exit.cfi_jt @ 0x080060e8 (size 8) =====

void sym.metis_fboost_exit.cfi_jt(void)

{
    code *pcVar1;
    uint32_t uVar2;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    int64_t iVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    flush_workqueue(*0x8016000);
    destroy_workqueue(*0x8016000);
    uVar2 = cpumask_next(0xffffffff,__cpu_present_mask);
    _seq_read = extraout_w8;
    if (uVar2 < extraout_w8) {
        do {
            uVar4 = uVar2;
            if (0x1f < uVar2) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x800c438);
                (*pcVar1)();
            }
            iVar3 = *(__per_cpu_offset + uVar4 * 8);
            if (((iVar3 != -0x8014d00) && (*(iVar3 + 0x8014d30) != 0)) && (*(iVar3 + 0x8014d30) < 0xfffffffffffff001)) {
                freq_qos_remove_request();
                iVar3 = *(__per_cpu_offset + uVar4 * 8);
            }
            if (((iVar3 != -0x8014d48) && (*(iVar3 + 0x8014d78) != 0)) && (*(iVar3 + 0x8014d78) < 0xfffffffffffff001)) {
                freq_qos_remove_request();
            }
            uVar2 = cpumask_next(uVar4,__cpu_present_mask);
            _seq_read = extraout_w8_00;
        } while (uVar2 < extraout_w8_00);
    }
    _printk(0x8002f5d,0x2f5);
    return;
}


// ===== sym.unregister_game_binder_f.cfi_jt @ 0x080060f0 (size 8) =====

void sym.unregister_game_binder_f.cfi_jt(void)

{
    *0x8001000 = 0;
    return;
}


// ===== sym.del_cluster.cfi_jt @ 0x080060f8 (size 8) =====

void sym.del_cluster.cfi_jt(void)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _obj.fboost_exe_mode = 0;
    *0x8016b34 = 1;
    uVar1 = _raw_spin_lock_irqsave(obj.fboost_pending_lock);
    obj.fboost_pending = 0x1;
    _raw_spin_unlock_irqrestore(obj.fboost_pending_lock,uVar1);
    wake_up_process(*0x8016000);
    return;
}


// ===== sym.fas_resume.877fa0db602420247113046bf2a65355.cfi_jt @ 0x08006100 (size 8) =====

void sym.fas_resume.877fa0db602420247113046bf2a65355.cfi_jt(void)

{
    obj.fas_ktime_suspended = 0x0;
    return;
}


// ===== sym.metis_doublecyc_exit.cfi_jt @ 0x08006108 (size 8) =====

void sym.metis_doublecyc_exit.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8016000 != 0) {
        proc_remove();
    }
    *0x8016000 = 0;
    atomic_notifier_chain_unregister
              (panic_notifier_list,reloc.kmsg_runtime_info_debug_show.2b6473c3def53e73fda9ad8cc2d103f8.cfi_jt);
    _printk(0x80032e2,"metis_doublecyc_exit");
    return;
}


// ===== sym.fas_suspend.877fa0db602420247113046bf2a65355.cfi_jt @ 0x08006110 (size 8) =====

ulong sym.fas_suspend.877fa0db602420247113046bf2a65355.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8016000 = ktime_get();
    obj.fas_ktime_suspended = 0x1;
    return 0;
}


// ===== sym.get_mi_link_boost_enable.cfi_jt @ 0x08006118 (size 8) =====

bool sym.get_mi_link_boost_enable.cfi_jt(void)

{
    if (*0x8016000 != 0) {
        return _seq_read - *0x8016000 < 0 || 0 < _obj.mi_sdk_eboost_vip_num;
    }
    return false;
}


// ===== sym.get_mi_fboost_enable.cfi_jt @ 0x08006120 (size 8) =====

uint sym.get_mi_fboost_enable.cfi_jt(void)

{
    return *0x8016000;
}


// ===== sym.metis_doublecyc_init.cfi_jt @ 0x08006128 (size 8) =====

ulong sym.metis_doublecyc_init.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8016000 = proc_create("show_mi_runtime_info",0x1b4,0,obj.runtime_info_debug_proc_ops.llvm.9401989785295868975)
    ;
    atomic_notifier_chain_register
              (panic_notifier_list,reloc.kmsg_runtime_info_debug_show.2b6473c3def53e73fda9ad8cc2d103f8.cfi_jt);
    _printk(obj..str.3.llvm.9401989785295868975,"metis_doublecyc_init");
    return 0;
}


// ===== sym.get_foreground_uid.cfi_jt @ 0x08006130 (size 8) =====

uint sym.get_foreground_uid.cfi_jt(void)

{
    return *0x8016000;
}


// ===== sym.metis_fboost_init.cfi_jt @ 0x08006138 (size 8) =====

uint64_t sym.metis_fboost_init.cfi_jt(void)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    uint32_t *puVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong uVar8;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint32_t extraout_w8_01;
    uint32_t extraout_w8_02;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar9;
    uint32_t *unaff_x21;
    ulong unaff_x30;
    uint auStack_70 [2];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    auStack_70[0] = 99;
    *0x8016000 = *0x8016004 << 0x20;
    uVar4 = kthread_create_on_node
                      (sym.fboost_run.b1e49afbd87934ed80dab30c248d2d24.cfi_jt,0,0xffffffff,"fboost_thread");
    uVar9 = uVar4;
    if (0xfffffffffffff000 < uVar4) goto code_r0x0800bdd0;
    wake_up_process(uVar4);
    *0x8016000 = uVar4;
    sched_setscheduler_nocheck(uVar4,1,auStack_70);
    *0x8016000 = _update_rq_clock;
    uVar2 = cpumask_next(0xffffffff,__cpu_present_mask);
    *unaff_x21 = extraout_w8;
    if (uVar2 < extraout_w8) {
        while( true ) {
            uVar9 = uVar2;
            puVar5 = cpufreq_cpu_get(uVar9);
            if (puVar5 == NULL) break;
            if (0x1f < uVar2) goto code_r0x0800c158;
            iVar3 = freq_qos_add_request(puVar5 + 0x28,obj.metis_req_min + *(__per_cpu_offset + uVar9 * 8),1,0);
            unaff_x21 = puVar5;
            if (iVar3 < 0) {
                uVar6 = 0x8001d9d;
code_r0x0800bf40:
                _printk(uVar6,"metis_freq_qos_request_init_first",iVar3);
                cpufreq_cpu_put(puVar5);
                goto code_r0x0800bf54;
            }
            iVar3 = freq_qos_add_request
                              (puVar5 + 0x28,obj.metis_req_max + *(__per_cpu_offset + uVar2 * 8),2,0x7fffffff);
            if (iVar3 < 0) {
                uVar6 = 0x8001c57;
                goto code_r0x0800bf40;
            }
            cpufreq_cpu_put(puVar5);
            uVar2 = cpumask_next(uVar2,__cpu_present_mask);
            *puVar5 = extraout_w8_00;
            if (extraout_w8_00 <= uVar2) goto code_r0x0800c000;
        }
        _printk(0x8002165,"metis_freq_qos_request_init_first",uVar9);
code_r0x0800bf54:
        uVar2 = cpumask_next(0xffffffff,__cpu_present_mask);
        *unaff_x21 = extraout_w8_01;
        if (uVar2 < extraout_w8_01) {
            do {
                puVar5 = uVar2;
                if (0x1f < uVar2) {
code_r0x0800c158:
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x800c15c);
                    (*pcVar1)();
                }
                iVar7 = *(__per_cpu_offset + puVar5 * 8);
                if (((iVar7 != -0x8014d00) && (*(iVar7 + 0x8014d30) != 0)) &&
                   (*(iVar7 + 0x8014d30) < 0xfffffffffffff001)) {
                    freq_qos_remove_request();
                    iVar7 = *(__per_cpu_offset + puVar5 * 8);
                    unaff_x21 = puVar5;
                }
                if (((iVar7 != -0x8014d48) && (*(iVar7 + 0x8014d78) != 0)) &&
                   (*(iVar7 + 0x8014d78) < 0xfffffffffffff001)) {
                    freq_qos_remove_request();
                }
                uVar2 = cpumask_next(puVar5,__cpu_present_mask);
                *unaff_x21 = extraout_w8_02;
            } while (uVar2 < extraout_w8_02);
        }
        uVar2 = cpufreq_register_notifier(reloc.metis_freq_qos_request_init.b1e49afbd87934ed80dab30c248d2d24.cfi_jt,1);
        if (uVar2 == 0) goto code_r0x0800c000;
        uVar6 = 0x80029bc;
        uVar8 = 0x2d3;
    }
    else {
code_r0x0800c000:
        hrtimer_init(obj.boost_timers,1,1);
        *0x8016b98 = sym.queue_for_boost_cluster.b1e49afbd87934ed80dab30c248d2d24.cfi_jt;
        *0x8016bb8 = 0;
        _obj.rem_cluster_works = 0xfffffffe0;
        *0x8016c80 = 0x8016c80;
        *0x8016c88 = 0x8016c80;
        *0x8016c90 = sym.do_adjust_freq_delayed.b1e49afbd87934ed80dab30c248d2d24.cfi_jt;
        init_timer_key(0x8016ca8,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
        *0x8016d00 = 0;
        hrtimer_init(0x8016bc8,1,1);
        *0x8016bf0 = sym.queue_for_boost_cluster.b1e49afbd87934ed80dab30c248d2d24.cfi_jt;
        *0x8016c10 = 1;
        *0x8016d08 = 0xfffffffe0;
        *0x8016d10 = 0x8016d10;
        *0x8016d18 = 0x8016d10;
        *0x8016d20 = sym.do_adjust_freq_delayed.b1e49afbd87934ed80dab30c248d2d24.cfi_jt;
        init_timer_key(0x8016d38,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
        *0x8016d90 = 1;
        hrtimer_init(0x8016c20,1,1);
        *0x8016c48 = sym.queue_for_boost_cluster.b1e49afbd87934ed80dab30c248d2d24.cfi_jt;
        *0x8016d98 = 0xfffffffe0;
        *0x8016c68 = 2;
        *0x8016da0 = 0x8016da0;
        *0x8016da8 = 0x8016da0;
        *0x8016db0 = sym.do_adjust_freq_delayed.b1e49afbd87934ed80dab30c248d2d24.cfi_jt;
        init_timer_key(0x8016dc8,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
        *0x8016e20 = 2;
        *0x8016000 = alloc_workqueue("metis_wq",0x10,0);
        uVar8 = 0x2e9;
        uVar2 = 0xfffffff2;
        if (*0x8016000 != 0) {
            uVar2 = 0;
        }
        uVar6 = 0x800308a;
    }
    uVar4 = uVar2;
    _printk(uVar6,uVar8);
    uVar9 = *0x8016000;
code_r0x0800bdd0:
    *0x8016000 = uVar9;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return uVar4 & 0xffffffff;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.queue_for_boost_cluster;
    if (*0x8016000 != 0) {
        iVar7 = ktime_get();
        _printk(0x8001b02,0x146,iVar7 / 1000);
    }
    if (_obj.fboost_exe_mode + *0x8016b34 != 0) {
        uVar6 = _raw_spin_lock_irqsave(obj.fboost_pending_lock);
        obj.fboost_pending = 0x1;
        _raw_spin_unlock_irqrestore(obj.fboost_pending_lock,uVar6);
        wake_up_process(*0x8016000);
    }
    return 0;
}


// ===== sym.init_module.cfi_jt @ 0x08006140 (size 8) =====

uint sym.init_module.cfi_jt(void)

{
    uint uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002b2d,"register_mi_enqueue_task_fair_hook");
    *0x8016000 = NULL;
    _printk(0x8002b2d,"register_mi_dequeue_task_fair_hook");
    *0x8016000 = sym.mi_dequeue_task_fair_hook.cfi_jt;
    _printk(0x8002b2d,"register_mi_find_energy_efficient_cpu");
    *0x8016000 = sym.find_energy_hook.877fa0db602420247113046bf2a65355.cfi_jt;
    _printk(0x8002b2d,"register_mi_walt_get_indicies");
    *0x8016000 = sym.walt_get_indicies_hook.877fa0db602420247113046bf2a65355.cfi_jt;
    sym.metis_link_init();
    sym.metis_doublecyc_init();
    sym.clu_aff_init();
    sym.metis_fboost_init();
    sym.fas_init();
    uVar1 = misc_register(obj.metis_misc);
    iVar2 = ktime_get();
    *0x8016000 = iVar2 / 1000;
    return uVar1;
}


// ===== sym.metis_common_api_init.cfi_jt @ 0x08006148 (size 8) =====

ulong sym.metis_common_api_init.cfi_jt(void)

{
    return 0;
}


// ===== sym.clu_aff_init.cfi_jt @ 0x08006150 (size 8) =====

ulong sym.clu_aff_init.cfi_jt(void)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    code *pcVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    ulong extraout_x8;
    ulong extraout_x8_00;
    code *extraout_x8_01;
    code *extraout_x8_02;
    code *extraout_x8_03;
    code *pcVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint64_t extraout_x9;
    ulong *in_x18;
    code *unaff_x19;
    int *piVar10;
    ulong *unaff_x21;
    ulong *puVar11;
    code *unaff_x25;
    ulong unaff_x30;
    code *pcStack_88;
    int64_t iStack_80;
    uint64_t uStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    uVar6 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *unaff_x21 = extraout_x8;
    if (extraout_x8 <= uVar6) goto code_r0x08009544;
    piVar10 = 0x8001000;
    puVar11 = 0x1;
    unaff_x19 = __cpu_possible_mask;
    pcVar4 = obj.viptask_use_cpumask;
    do {
        if (*piVar10 < uVar6) goto code_r0x08009500;
        pcVar7 = pcVar4 + ((uVar6 & 0xffffffff) >> 3 & 0x1ffffff8);
        uVar9 = puVar11 << (uVar6 & 0x3f);
        while( true ) {
            Hint_Prefetch(pcVar7,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(pcVar7,0x10);
                if (bVar2) {
                    *pcVar7 = *pcVar7 | uVar9;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
code_r0x08009500:
            uVar6 = cpumask_next(uVar6,unaff_x19);
            *puVar11 = extraout_x8_00;
            if (uVar6 < extraout_x8_00) break;
code_r0x08009544:
            *0x8001000 = register_sysctl_table(obj.ctl_root);
            uStack_70 = _update_rq_clock;
            _printk(0x80034d9,"cluster_core_init");
            piVar10 = 0xffffffff;
            puVar11 = 0x20;
            pcVar4 = 0x8001af1;
            pcStack_88 = NULL;
            iStack_80 = 0;
            uStack_78 = 1;
            do {
                *0x20 = seq_read;
                do {
                    uVar5 = cpumask_next(piVar10,&uStack_70);
                    if (unaff_x25 <= uVar5) goto code_r0x0800974c;
                    piVar10 = uVar5;
                    if (0x1f < uVar5) {
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(0x5512,0x8009810);
                        (*pcVar4)();
                    }
                    pcVar7 = cpumask_next_and + piVar10 * 0x30;
                    if ((*(cpumask_next_and + piVar10 * 0x30) & 0xf7fa0fff) != 0) {
                        pcVar7 = __cpu_online_mask;
                    }
                    unaff_x19 = pcVar7;
                    if ((*(ns_capable + piVar10 * 0x30) != -1) &&
                       (unaff_x19 = __cpu_possible_mask + uVar5 * 0x30,
                       (*(__cpu_possible_mask + uVar5 * 0x30) & (*pcVar7 ^ 0xffffffff)) != 0)) {
                        unaff_x19 = pcVar7;
                    }
                    uVar9 = *unaff_x19;
                    uVar6 = (uVar9 & 0xaaaaaaaa) >> 1 | (uVar9 & 0x55555555) << 1;
                    uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
                    uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
                    uVar8 = 0x20;
                    if ((uVar9 & 0xffffffff) != 0) {
                        uVar8 = LZCOUNT((uVar6 >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10) << 0x20);
                    }
                } while (uVar5 != uVar8);
                pcVar7 = obj.cluster_core_mask + iStack_80 * 8;
                *pcVar7 = uVar9;
                _printk(0x8002db6,uStack_78);
                uVar5 = cpumask_next(0xffffffff,pcVar7);
                if (uVar5 < extraout_w8) {
                    do {
                        _printk(0x8001af1,uVar5);
                        uVar5 = cpumask_next(uVar5,pcVar7);
                    } while (uVar5 < extraout_w8_00);
                }
                _printk(0x8003673);
                uStack_70 = uStack_70 & (*unaff_x19 ^ 0xffffffff);
                unaff_x19 = *unaff_x19 | pcStack_88;
                _printk(0x8003558,uStack_78 & 0xffffffff);
                unaff_x25 = obj.cluster_affinity_cpumask + uStack_78 * 8;
                *unaff_x25 = unaff_x19;
                uVar5 = cpumask_next(0xffffffff,unaff_x25);
                *0x20 = extraout_x8_01;
                if (uVar5 < extraout_x8_01) {
                    do {
                        _printk(0x8001af1,uVar5);
                        uVar5 = cpumask_next(uVar5,unaff_x25);
                        *0x20 = extraout_x8_02;
                    } while (uVar5 < extraout_x8_02);
                }
                _printk(0x8003673);
                uStack_78 = uStack_78 + 1;
                iStack_80 = iStack_80 + 1;
                pcStack_88 = unaff_x19;
            } while (iStack_80 != 3);
code_r0x0800974c:
            *0x80045e0 = *0x80045e0 & (*0x80045d0 ^ 0xffffffff);
            obj.cluster_core_init_suc = 0x1;
            android_rvh_probe_register(__tracepoint_android_rvh_cpuset_fork,sym.mi_cpuset_fork.cfi_jt,0);
            tracepoint_probe_register
                      (__tracepoint_android_vh_sched_setaffinity_early,sym.mi_sched_setaffinity.cfi_jt,0);
            android_rvh_probe_register
                      (__tracepoint_android_rvh_set_cpus_allowed_comm,sym.mi_set_cpus_allowed_comm.cfi_jt,0);
            _printk(0x800375f,"clu_aff_init");
            iVar3 = sp_el0;
            if (*(iVar3 + 0x5e0) == iStack_68) {
                return 0;
            }
            uVar6 = __stack_chk_fail();
            pcVar7 = extraout_x8_03;
            uVar9 = extraout_x9;
        }
    } while( true );
}


// ===== sym.metis_link_init.cfi_jt @ 0x08006158 (size 8) =====

ulong sym.metis_link_init.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    tracepoint_probe_register
              (__tracepoint_android_vh_alter_mutex_list_add,
               sym.mi_mutex_list_add_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_mutex_wait_start,
               sym.mi_mutex_wait_start_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_rtmutex_wait_start,
               sym.mi_rt_mutex_wait_start_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_alter_rwsem_list_add,
               sym.mi_rwsem_list_add_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_rwsem_write_wait_start,
               sym.mi_rwsem_write_wait_start_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_rwsem_read_wait_start,
               sym.mi_rwsem_read_wait_start_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_binder_restore_priority,
               sym.mi_binder_restore_vip_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_binder_set_priority,
               sym.mi_binder_set_vip_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_rwsem_wake_finish,
               sym.mi_lock_rwsem_wake_finish_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    *0x8001000 = sym.mi_lock_try_to_wake_up_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt;
    _printk(0x8002049,"register_rvh_mi_try_to_wake_up",1);
    tracepoint_probe_register
              (__tracepoint_android_vh_alter_futex_plist_add,
               sym.mi_alter_futex_plist_add.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_do_futex,sym.mi_do_futex.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_futex_sleep_start,
               sym.mi_futex_sleep_start.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_futex_wake_traverse_plist,
               sym.mi_futex_wake_traverse_plist.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_futex_wait_end,sym.mi_futex_wait_end.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0)
    ;
    misc_register(obj.link_debug);
    *0x8001000 = proc_create("show_mi_art_mutex_info",0x1b4,0,obj.mi_art_mutex_debug_proc_ops);
    _printk(0x8003622,"metis_link_init");
    return 0;
}


// ===== sym.fas_sched_clock.cfi_jt @ 0x08006160 (size 8) =====

int64_t sym.fas_sched_clock.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.fas_ktime_suspended == 0x1) {
        iVar1 = *0x8016000;
    }
    else {
        iVar1 = sched_clock();
    }
    return iVar1;
}


// ===== sym.mi_mutex_list_add_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt @ 0x08006168 (size 8) =====

void sym.mi_mutex_list_add_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt
               (ulong param_1,int64_t param_2,int64_t *param_3,ulong *param_4,uchar *param_5)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *puVar5;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_2 != 0) && (param_3 != NULL)) && (param_4 != NULL)) {
        iVar4 = sp_el0;
        uVar1 = sym.mi_vip_task(iVar4);
        if (((uVar1 & 1) != 0) || (uVar1 = sym.mi_lock_vip_task(iVar4), (uVar1 & 1) != 0)) {
            puVar6 = *param_4;
            do {
                puVar5 = puVar6;
                if (puVar5 == param_4) {
                    piVar3 = param_4[1];
                    uVar1 = __list_add_valid(param_3,piVar3,param_4);
                    if ((uVar1 & 1) != 0) {
                        param_4[1] = param_3;
                        *param_3 = param_4;
                        param_3[1] = piVar3;
                        *piVar3 = param_3;
                    }
                    goto code_r0x08006c90;
                }
                if (puVar5 == NULL) {
                    return;
                }
                if (puVar5[2] == 0) {
                    return;
                }
                puVar6 = *puVar5;
                uVar1 = sym.mi_vip_task(puVar5[2]);
                uVar2 = sym.mi_lock_vip_task(puVar5[2]);
            } while (((uVar1 & 1) != 0) || ((uVar2 & 1) != 0));
            piVar3 = puVar5[1];
            iVar4 = *piVar3;
            uVar1 = __list_add_valid(param_3,piVar3,iVar4);
            if ((uVar1 & 1) != 0) {
                *(iVar4 + 8) = param_3;
                *param_3 = iVar4;
                param_3[1] = piVar3;
                *piVar3 = param_3;
            }
code_r0x08006c90:
            *param_5 = 1;
        }
    }
    return;
}


// ===== sym.register_mi_enqueue_entity_hook.cfi_jt @ 0x08006170 (size 8) =====

void sym.register_mi_enqueue_entity_hook.cfi_jt(ulong param_1)

{
    *0x8016000 = param_1;
    return;
}


// ===== sym.mi_rb_enqueue_entity_hook.877fa0db602420247113046bf2a65355.cfi_jt @ 0x08006178 (size 8) =====

void sym.mi_rb_enqueue_entity_hook.877fa0db602420247113046bf2a65355.cfi_jt
               (ulong param_1,int64_t param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_3 + 0x158) == 0) {
        sym.__enqueue_vip_task(*(*(param_2 + 0x130) + 0xba8),param_3 + -0xc0);
    }
    return;
}


// ===== sym.mi_rb_dequeue_entity_hook.877fa0db602420247113046bf2a65355.cfi_jt @ 0x08006180 (size 8) =====

void sym.mi_rb_dequeue_entity_hook.877fa0db602420247113046bf2a65355.cfi_jt
               (ulong param_1,int64_t param_2,int64_t param_3)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_3 + 0x158) == 0) {
        uVar2 = *(*(param_2 + 0x130) + 0xba8);
        if (0x1f < uVar2) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x800e6c8);
            (*pcVar3)();
        }
        iVar6 = *(__per_cpu_offset + uVar2 * 8);
        iVar4 = get_mi_task_struct_unsafe(param_3 + -0xc0);
        if ((iVar4 != 0) && (*(iVar4 + 400) != '\0')) {
            iVar1 = iVar4 + 0x178;
            if (*(iVar6 + 0x805f314) == iVar1) {
                uVar5 = rb_next(iVar1);
                *(iVar6 + 0x805f314) = uVar5;
            }
            rb_erase(iVar1,iVar6 + 0x805f30c);
            *(iVar4 + 400) = 0;
            if (*0x8016000 != 0) {
                _printk(0x80021a1,*(param_3 + 0x518));
            }
        }
        pcVar3 = CONCAT44(*0x8016004,*0x8016000);
        if (pcVar3 != NULL) {
            if (pcVar3 != sym.__typeid__ZTSFvP2rqP11task_structE_global_addr) {
                __cfi_slowpath_diag(0x2bcb77f4d94771ee,pcVar3,0x8001940);
            }
            if ((*(param_3 + 0x158) != 0) && (obj.task_of.__already_done == 0x0)) {
                obj.task_of.__already_done = 0x1;
                __warn_printk("!entity_is_task(se)");
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x800,0x800e6ac);
                (*pcVar3)();
            }
            (*pcVar3)(*(param_2 + 0x130),param_3 + -0xc0);
        }
    }
    return;
}


// ===== sym.mi_set_fas_req.cfi_jt @ 0x08006188 (size 8) =====

void sym.mi_set_fas_req.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x28);
    if (((*(param_1 + 0x10) >> 6 & 1) == 0) && (uVar1 = sym.mi_vip_task(arg1), (uVar1 & 1) == 0)) {
        if (*0x8016000 != 0) {
            _printk(0x8001dd9,arg1 + 0x7a8,*(arg1 + 0x5d8));
        }
        *(param_1 + 0x10) = *(param_1 + 0x10) | 0x40;
    }
    else if (*0x8016000 != 0) {
        _printk(0x800261f,arg1 + 0x7a8,*(arg1 + 0x5d8));
    }
    return;
}


// ===== sym.mi_clean_fas_req.cfi_jt @ 0x08006190 (size 8) =====

void sym.mi_clean_fas_req.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (-1 < *(param_1 + 0x10)) {
        arg1 = *(param_1 + 0x28);
        uVar1 = sym.mi_vip_task(arg1);
        if ((uVar1 & 1) != 0) {
            if (*0x8016000 != 0) {
                _printk(0x8001c93,arg1 + 0x7a8,*(arg1 + 0x5d8));
            }
            *(param_1 + 0x10) = *(param_1 + 0x10) | 0x80;
        }
    }
    return;
}


// ===== sym.register_game_binder_f @ 0x08006198 (size 72) =====

void sym.register_game_binder_f(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002f1b,"register_game_binder_f");
    *0x8001000 = arg1;
    return;
}


// ===== sym.unregister_game_binder_f @ 0x080061e0 (size 20) =====

void sym.unregister_game_binder_f(void)

{
    *0x8001000 = 0;
    return;
}


// ===== sym.mi_resched_vip_task @ 0x080061f4 (size 216) =====

uint64_t sym.mi_resched_vip_task(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uVar2 = 0;
    if (arg1 != 0) {
        iVar1 = task_rq_lock(arg1,&uStack_38);
        update_rq_clock();
        if ((*(iVar1 + 0xaa0) != arg1) && (*(arg1 + 0x78) == 1)) {
            deactivate_task(iVar1,arg1,10);
            activate_task(iVar1,arg1,10);
            resched_curr(iVar1);
        }
        if (2 < *(iVar1 + 0xac8)) {
            uStack_30 = CONCAT44(uStack_30._4_4_,4);
        }
        raw_spin_rq_unlock(iVar1);
        uVar2 = _raw_spin_unlock_irqrestore(arg1 + 0x884,uStack_38);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        iVar1 = __stack_chk_fail();
        *extraout_x18 = sym.mi_lock_vip_task;
        uVar2 = 0;
        if (iVar1 != 0) {
            iVar3 = get_mi_task_struct();
            uVar2 = 0;
            if (iVar3 != 0) {
                if (_seq_read - *(iVar3 + 0x1b8) < 0) {
                    uVar2 = *(iVar3 + 0x10) >> 0xc & 1;
                }
                else {
                    if ((*(iVar3 + 0x10) >> 0xc & 1) != 0) {
                        iVar3 = get_mi_task_struct(iVar1);
                        if (iVar3 == 0) {
                            return 0;
                        }
                        __rcu_read_lock();
                        *(iVar3 + 0x10) = *(iVar3 + 0x10) & 0xffffefff;
                        __rcu_read_unlock();
                        if (*0x8001000 != 0) {
                            _printk(0x8001b79,"lock",*(iVar1 + 0x5d8),iVar1 + 0x7a8);
                        }
                    }
                    uVar2 = 0;
                }
            }
        }
        return uVar2;
    }
    return uVar2;
}


// ===== sym.mi_lock_vip_task @ 0x080062cc (size 176) =====

uint32_t sym.mi_lock_vip_task(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 0;
    if (arg1 != 0) {
        iVar2 = get_mi_task_struct();
        uVar1 = 0;
        if (iVar2 != 0) {
            if (_seq_read - *(iVar2 + 0x1b8) < 0) {
                uVar1 = *(iVar2 + 0x10) >> 0xc & 1;
            }
            else {
                if ((*(iVar2 + 0x10) >> 0xc & 1) != 0) {
                    iVar2 = get_mi_task_struct(arg1);
                    if (iVar2 == 0) {
                        return 0;
                    }
                    __rcu_read_lock();
                    *(iVar2 + 0x10) = *(iVar2 + 0x10) & 0xffffefff;
                    __rcu_read_unlock();
                    if (*0x8001000 != 0) {
                        _printk(0x8001b79,"lock",*(arg1 + 0x5d8),arg1 + 0x7a8);
                    }
                }
                uVar1 = 0;
            }
        }
    }
    return uVar1;
}


// ===== sym.mi_binder_vip_task @ 0x0800637c (size 176) =====

uint32_t sym.mi_binder_vip_task(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 0;
    if (arg1 != 0) {
        iVar2 = get_mi_task_struct();
        uVar1 = 0;
        if (iVar2 != 0) {
            if (_seq_read - *(iVar2 + 0x1b8) < 0) {
                uVar1 = *(iVar2 + 0x10) >> 0xd & 1;
            }
            else {
                if ((*(iVar2 + 0x10) >> 0xd & 1) != 0) {
                    iVar2 = get_mi_task_struct(arg1);
                    if (iVar2 == 0) {
                        return 0;
                    }
                    __rcu_read_lock();
                    *(iVar2 + 0x10) = *(iVar2 + 0x10) & 0xffffdfff;
                    __rcu_read_unlock();
                    if (*0x8001000 != 0) {
                        _printk(0x8001b79,"binder",*(arg1 + 0x5d8),arg1 + 0x7a8);
                    }
                }
                uVar1 = 0;
            }
        }
    }
    return uVar1;
}


// ===== sym.do_set_binder_vip @ 0x0800642c (size 480) =====

void sym.do_set_binder_vip(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        return;
    }
    puVar1 = arg2 + 0x38;
    if (*puVar1 == 0) {
        return;
    }
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar7 = 2;
code_r0x0800657c:
        refcount_warn_saturate(puVar1,uVar7);
        iVar8 = *(arg1 + 0x20);
    }
    else {
        if ((uVar2 + 1 | uVar2) < 0) {
            uVar7 = 1;
            goto code_r0x0800657c;
        }
        iVar8 = *(arg1 + 0x20);
    }
    if ((((iVar8 != 0) && (iVar8 = *(iVar8 + 0x198), iVar8 != 0)) &&
        ((uVar5 = sym.mi_vip_task(iVar8), (uVar5 & 1) != 0 || (uVar5 = sym.mi_link_vip_task(iVar8), (uVar5 & 1) != 0))
        )) && ((*(arg1 + 0x5c) & 1) == 0)) {
        iVar6 = get_mi_task_struct(arg2);
        if (iVar6 != 0) {
            __rcu_read_lock();
            *(iVar6 + 0x1b8) = _seq_read + 0x4b;
            *(iVar6 + 0x10) = *(iVar6 + 0x10) | 0x2000;
            __rcu_read_unlock();
            sym.mi_resched_vip_task(arg2);
            if (*0x8001000 == 0) goto code_r0x080064f8;
            _printk(0x8003928,"binder",*(arg2 + 0x5d8),arg2 + 0x7a8);
        }
        if (*0x8001000 != 0) {
            _printk(0x80038e1,*(arg2 + 0x5d8),*(iVar8 + 0x5d8),iVar8 + 0x7a8);
        }
    }
code_r0x080064f8:
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 - 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 1) {
        DataMemoryBarrier(2,1);
        __put_task_struct(arg2);
    }
    else if (uVar2 < 1) {
        refcount_warn_saturate(puVar1,3);
    }
    return;
}


// ===== sym.mi_link_vip_task @ 0x0800660c (size 184) =====

bool sym.mi_link_vip_task(int64_t arg1)

{
    uint32_t uVar1;
    bool bVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bVar2 = false;
    if (arg1 != 0) {
        iVar3 = get_mi_task_struct();
        bVar2 = false;
        if (iVar3 != 0) {
            uVar1 = *(iVar3 + 0x10) & 0x7000;
            if (_seq_read - *(iVar3 + 0x1b8) < 0) {
                bVar2 = uVar1 != 0;
            }
            else {
                if (uVar1 != 0) {
                    iVar3 = get_mi_task_struct(arg1);
                    if (iVar3 == 0) {
                        return false;
                    }
                    __rcu_read_lock();
                    *(iVar3 + 0x10) = *(iVar3 + 0x10) & 0xffff8fff;
                    __rcu_read_unlock();
                    if (*0x8001000 != 0) {
                        _printk(0x8001b79,"link",*(arg1 + 0x5d8),arg1 + 0x7a8);
                    }
                }
                bVar2 = false;
            }
        }
    }
    return bVar2;
}


// ===== sym.put_task_struct @ 0x080066c4 (size 148) =====

void sym.put_task_struct(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = arg1 + 0x38;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (iVar2 == 1) {
        DataMemoryBarrier(2,1);
        __put_task_struct(arg1);
    }
    else if (iVar2 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    return;
}


// ===== sym.put_task_struct_1 @ 0x08006758 (size 148) =====

void sym.put_task_struct_1(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = arg1 + 0x38;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (iVar2 == 1) {
        DataMemoryBarrier(2,1);
        __put_task_struct(arg1);
    }
    else if (iVar2 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    return;
}


// ===== sym.put_task_struct_2 @ 0x080067ec (size 148) =====

void sym.put_task_struct_2(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = arg1 + 0x38;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (iVar2 == 1) {
        DataMemoryBarrier(2,1);
        __put_task_struct(arg1);
    }
    else if (iVar2 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    return;
}


// ===== sym.mi_art_mutex_vip_task @ 0x08006880 (size 176) =====

uint32_t sym.mi_art_mutex_vip_task(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 0;
    if (arg1 != 0) {
        iVar2 = get_mi_task_struct();
        uVar1 = 0;
        if (iVar2 != 0) {
            if (_seq_read - *(iVar2 + 0x1b8) < 0) {
                uVar1 = *(iVar2 + 0x10) >> 0xe & 1;
            }
            else {
                if ((*(iVar2 + 0x10) >> 0xe & 1) != 0) {
                    iVar2 = get_mi_task_struct(arg1);
                    if (iVar2 == 0) {
                        return 0;
                    }
                    __rcu_read_lock();
                    *(iVar2 + 0x10) = *(iVar2 + 0x10) & 0xffffbfff;
                    __rcu_read_unlock();
                    if (*0x8001000 != 0) {
                        _printk(0x8001b79,"art-mutex",*(arg1 + 0x5d8),arg1 + 0x7a8);
                    }
                }
                uVar1 = 0;
            }
        }
    }
    return uVar1;
}


// ===== sym.register_rvh_mi_try_to_wake_up @ 0x08006930 (size 84) =====

void sym.register_rvh_mi_try_to_wake_up(uint32_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 2) {
        *in_x18 = unaff_x30;
        *(obj.mi_try_to_wake_up_func + arg1 * 8) = arg2;
        _printk(0x8002049,"register_rvh_mi_try_to_wake_up",arg1);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8006984);
    (*pcVar1)();
}


// ===== sym.unregister_rvh_mi_try_to_wake_up @ 0x08006984 (size 84) =====

void sym.unregister_rvh_mi_try_to_wake_up(uint32_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 2) {
        *in_x18 = unaff_x30;
        *(obj.mi_try_to_wake_up_func + arg1 * 8) = 0;
        _printk(0x8002049,"unregister_rvh_mi_try_to_wake_up",arg1);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80069d8);
    (*pcVar1)();
}


// ===== sym.metis_link_init @ 0x080069d8 (size 480) =====

ulong sym.metis_link_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    tracepoint_probe_register
              (__tracepoint_android_vh_alter_mutex_list_add,
               sym.mi_mutex_list_add_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_mutex_wait_start,
               sym.mi_mutex_wait_start_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_rtmutex_wait_start,
               sym.mi_rt_mutex_wait_start_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_alter_rwsem_list_add,
               sym.mi_rwsem_list_add_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_rwsem_write_wait_start,
               sym.mi_rwsem_write_wait_start_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_rwsem_read_wait_start,
               sym.mi_rwsem_read_wait_start_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_binder_restore_priority,
               sym.mi_binder_restore_vip_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_binder_set_priority,
               sym.mi_binder_set_vip_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_rwsem_wake_finish,
               sym.mi_lock_rwsem_wake_finish_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    *0x8001000 = sym.mi_lock_try_to_wake_up_hook.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt;
    _printk(0x8002049,"register_rvh_mi_try_to_wake_up",1);
    tracepoint_probe_register
              (__tracepoint_android_vh_alter_futex_plist_add,
               sym.mi_alter_futex_plist_add.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_do_futex,sym.mi_do_futex.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_futex_sleep_start,
               sym.mi_futex_sleep_start.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_futex_wake_traverse_plist,
               sym.mi_futex_wake_traverse_plist.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_futex_wait_end,sym.mi_futex_wait_end.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,0)
    ;
    misc_register(obj.link_debug);
    *0x8001000 = proc_create("show_mi_art_mutex_info",0x1b4,0,obj.mi_art_mutex_debug_proc_ops);
    _printk(0x8003622,"metis_link_init");
    return 0;
}


// ===== sym.mi_mutex_list_add_hook @ 0x08006bb8 (size 252) =====

uchar  [16] sym.mi_mutex_list_add_hook(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t in_x1;
    uchar *in_x4;
    ulong *in_x18;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar auVar6 [16];
    uchar extraout_q0_01 [16];
    uchar extraout_q0_02 [16];
    uchar extraout_q0_03 [16];
    
    *in_x18 = unaff_x30;
    if (((in_x1 != 0) && (arg1 != 0)) && (arg2 != 0)) {
        iVar3 = sp_el0;
        uVar1 = sym.mi_vip_task(iVar3);
        auVar6 = extraout_q0;
        if (((uVar1 & 1) != 0) ||
           (uVar1 = sym.mi_lock_vip_task(iVar3), noname_1 = extraout_q0_00, auVar6 = extraout_q0_00, (uVar1 & 1) != 0
           )) {
            piVar5 = *arg2;
            do {
                piVar4 = piVar5;
                if (piVar4 == arg2) {
                    piVar5 = *(arg2 + 8);
                    uVar1 = __list_add_valid(arg1,piVar5,arg2);
                    noname_1 = extraout_q0_03;
                    if ((uVar1 & 1) != 0) {
                        *(arg2 + 8) = arg1;
                        *arg1 = arg2;
                        *(arg1 + 8) = piVar5;
                        *piVar5 = arg1;
                    }
                    goto code_r0x08006c90;
                }
                if (piVar4 == NULL) {
                    return auVar6;
                }
                if (piVar4[2] == 0) {
                    return auVar6;
                }
                piVar5 = *piVar4;
                uVar1 = sym.mi_vip_task(piVar4[2]);
                uVar2 = sym.mi_lock_vip_task(piVar4[2]);
                auVar6 = extraout_q0_01;
            } while (((uVar1 & 1) != 0) || ((uVar2 & 1) != 0));
            piVar5 = piVar4[1];
            iVar3 = *piVar5;
            uVar1 = __list_add_valid(arg1,piVar5,iVar3);
            noname_1 = extraout_q0_02;
            if ((uVar1 & 1) != 0) {
                *(iVar3 + 8) = arg1;
                *arg1 = iVar3;
                *(arg1 + 8) = piVar5;
                *piVar5 = arg1;
            }
code_r0x08006c90:
            *in_x4 = 1;
        }
    }
    return noname_1;
}


// ===== sym.mi_mutex_wait_start_hook @ 0x08006cb4 (size 108) =====

void sym.mi_mutex_wait_start_hook(ulong noname_0,int64_t arg1)

{
    int64_t arg1_00;
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = sp_el0;
    uVar1 = sym.mi_vip_task(arg1_00);
    if (((uVar1 & 1) != 0) || (uVar1 = sym.mi_link_vip_task(arg1_00), (uVar1 & 1) != 0)) {
        if (arg1 == 0) {
            uVar1 = 0;
        }
        else {
            uVar1 = *arg1 & 0xfffffffffffffff8;
        }
        sym.do_set_lock_vip(uVar1,arg1_00,0x80029a3);
    }
    return;
}


// ===== sym.mi_rt_mutex_wait_start_hook @ 0x08006d24 (size 112) =====

void sym.mi_rt_mutex_wait_start_hook(ulong noname_0,int64_t arg1)

{
    int64_t arg1_00;
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = sp_el0;
    uVar1 = sym.mi_vip_task(arg1_00);
    if (((uVar1 & 1) != 0) || (uVar1 = sym.mi_link_vip_task(arg1_00), (uVar1 & 1) != 0)) {
        if (arg1 == 0) {
            uVar1 = 0;
        }
        else {
            uVar1 = *(arg1 + 0x18) & 0xfffffffffffffffe;
        }
        sym.do_set_lock_vip(uVar1,arg1_00,0x80029a3);
    }
    return;
}


// ===== sym.mi_rwsem_list_add_hook @ 0x08006d98 (size 280) =====

void sym.mi_rwsem_list_add_hook(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && (arg2 != 0)) {
        iVar4 = sp_el0;
        uVar3 = sym.mi_vip_task(iVar4);
        if (((uVar3 & 1) != 0) || (uVar3 = sym.mi_lock_vip_task(iVar4), (uVar3 & 1) != 0)) {
            piVar1 = arg2 + 0x18;
            piVar7 = *(arg2 + 0x20);
            do {
                piVar6 = piVar7;
                if (piVar6 == piVar1) {
                    iVar4 = *piVar1;
                    uVar3 = __list_add_valid(arg1,piVar1,iVar4);
                    if ((uVar3 & 1) != 0) {
                        *(iVar4 + 8) = arg1;
                        *arg1 = iVar4;
                        *(arg1 + 8) = piVar1;
                        *piVar1 = arg1;
                    }
                    goto code_r0x08006e88;
                }
                if (piVar6 == NULL) {
                    return;
                }
                iVar4 = piVar6[2];
                if (iVar4 == 0) {
                    return;
                }
                piVar7 = piVar6[1];
                iVar2 = *(iVar4 + 0x420);
                uVar3 = sym.mi_vip_task(iVar4);
                uVar5 = sym.mi_lock_vip_task(piVar6[2]);
            } while (((((uVar3 & 1) == 0) && ((uVar5 & 1) == 0)) && (piVar6[6] == '\0')) && (1 < iVar2 - 1U));
            iVar4 = *piVar6;
            uVar3 = __list_add_valid(arg1,piVar6,iVar4);
            if ((uVar3 & 1) != 0) {
                *(iVar4 + 8) = arg1;
                *arg1 = iVar4;
                *(arg1 + 8) = piVar6;
                *piVar6 = arg1;
            }
code_r0x08006e88:
            *arg3 = 1;
        }
    }
    return;
}


// ===== sym.mi_rwsem_write_wait_start_hook @ 0x08006eb0 (size 112) =====

void sym.mi_rwsem_write_wait_start_hook(ulong noname_0,int64_t arg1)

{
    int64_t arg1_00;
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        arg1_00 = sp_el0;
        uVar1 = sym.mi_vip_task(arg1_00);
        if ((((uVar1 & 1) != 0) || (uVar1 = sym.mi_link_vip_task(arg1_00), (uVar1 & 1) != 0)) && ((*arg1 & 1) != 0)) {
            sym.do_set_lock_vip(*(arg1 + 8) & 0xfffffffffffffffc,arg1_00,0x8002fa0);
        }
    }
    return;
}


// ===== sym.mi_rwsem_read_wait_start_hook @ 0x08006f28 (size 112) =====

void sym.mi_rwsem_read_wait_start_hook(ulong noname_0,int64_t arg1)

{
    int64_t arg1_00;
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        arg1_00 = sp_el0;
        uVar1 = sym.mi_vip_task(arg1_00);
        if ((((uVar1 & 1) != 0) || (uVar1 = sym.mi_link_vip_task(arg1_00), (uVar1 & 1) != 0)) && ((*arg1 & 1) != 0)) {
            sym.do_set_lock_vip(*(arg1 + 8) & 0xfffffffffffffffc,arg1_00,0x8002fa0);
        }
    }
    return;
}


// ===== sym.mi_binder_restore_vip_hook @ 0x08006fa0 (size 368) =====

uchar  [16] sym.mi_binder_restore_vip_hook(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar auVar8 [16];
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return noname_1;
    }
    puVar1 = arg1 + 0x38;
    if (*puVar1 == 0) {
        return noname_1;
    }
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar7 = 2;
    }
    else {
        if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08006fec;
        uVar7 = 1;
    }
    refcount_warn_saturate(puVar1,uVar7);
code_r0x08006fec:
    uVar5 = sym.mi_binder_vip_task(arg1);
    auVar8 = extraout_q0;
    if (((uVar5 & 1) != 0) && (iVar6 = get_mi_task_struct(arg1), auVar8 = extraout_q0_00, iVar6 != 0)) {
        __rcu_read_lock();
        *(iVar6 + 0x10) = *(iVar6 + 0x10) & 0xffffdfff;
        auVar8 = __rcu_read_unlock();
        if (*0x8001000 != 0) {
            auVar8 = _printk(0x8001b79,"binder",*(arg1 + 0x5d8),arg1 + 0x7a8);
        }
    }
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 - 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 1) {
        DataMemoryBarrier(2,1);
        auVar8 = __put_task_struct(arg1);
    }
    else if (uVar2 < 1) {
        auVar8 = refcount_warn_saturate(puVar1,3);
    }
    return auVar8;
}


// ===== sym.mi_binder_set_vip_hook @ 0x08007110 (size 132) =====

void sym.mi_binder_set_vip_hook(ulong noname_0,int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *0x8001000;
    if (*0x8001000 != NULL) {
        __cfi_slowpath_diag(0xf3ed3a3be49c8edd,*0x8001000,0x80017c0);
        (*pcVar1)(arg1,arg2);
    }
    if ((arg1 != 0) && (arg2 != 0)) {
        sym.do_set_binder_vip(arg1,arg2);
    }
    return;
}


// ===== sym.mi_lock_rwsem_wake_finish_hook @ 0x08007194 (size 40) =====

void sym.mi_lock_rwsem_wake_finish_hook(void)

{
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = sp_el0;
    sym.mi_lock_vip_finish_common(arg1);
    return;
}


// ===== sym.mi_lock_try_to_wake_up_hook @ 0x080071bc (size 40) =====

void sym.mi_lock_try_to_wake_up_hook(void)

{
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = sp_el0;
    sym.mi_lock_vip_finish_common(arg1);
    return;
}


// ===== sym.mi_alter_futex_plist_add @ 0x080071e4 (size 444) =====

void sym.mi_alter_futex_plist_add(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uchar uVar6;
    ulong *in_x18;
    int64_t *piVar7;
    uint uVar8;
    int64_t iVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*arg3 == '\0') {
        iVar1 = sp_el0;
        uVar5 = sym.mi_vip_task(iVar1);
        if ((((uVar5 & 1) != 0) || (uVar5 = sym.mi_link_vip_task(iVar1), (uVar5 & 1) != 0)) &&
           (1 < *(iVar1 + 0x420) - 1U)) {
            if (arg2 != *arg2) {
                uVar8 = 0;
                uVar3 = 1;
                piVar7 = *arg2;
                do {
                    piVar10 = *piVar7;
                    if (((piVar7[7] == 0) || (piVar7[8] == 0)) &&
                       ((iVar9 = piVar7[2], 1 < *(iVar9 + 0x420) - 1U &&
                        ((uVar5 = sym.mi_vip_task(iVar9), (uVar5 & 1) == 0 &&
                         (uVar5 = sym.mi_link_vip_task(iVar9), (uVar5 & 1) == 0)))))) {
                        if (*0x8001000 != 0) {
                            iVar9 = piVar7[2];
                            uVar2 = *(iVar9 + 0x5d8);
                            uVar5 = sym.mi_vip_task(iVar9);
                            if ((uVar5 & 1) == 0) {
                                uVar4 = sym.mi_link_vip_task(iVar9);
                                uVar4 = uVar4 & 1;
                            }
                            else {
                                uVar4 = 1;
                            }
                            _printk(0x8002c08,uVar8,uVar3,uVar2,uVar4,piVar7[2] + 0x7a8,*(iVar1 + 0x5d8),
                                    iVar1 + 0x7a8);
                        }
                        piVar7 = piVar7[1];
                        iVar1 = arg1 + 0x18;
                        iVar9 = *piVar7;
                        uVar5 = __list_add_valid(iVar1,piVar7,iVar9);
                        if ((uVar5 & 1) == 0) {
                            uVar6 = 1;
                        }
                        else {
                            *(iVar9 + 8) = iVar1;
                            uVar6 = 1;
                            *(arg1 + 0x18) = iVar9;
                            *(arg1 + 0x20) = piVar7;
                            *piVar7 = iVar1;
                        }
                        goto code_r0x080072fc;
                    }
                    iVar9 = piVar7[2];
                    uVar8 = *(iVar9 + 0x5d8);
                    uVar5 = sym.mi_vip_task(iVar9);
                    if ((uVar5 & 1) == 0) {
                        uVar3 = sym.mi_link_vip_task(iVar9);
                    }
                    else {
                        uVar3 = 1;
                    }
                    uVar3 = uVar3 & 1;
                    piVar7 = piVar10;
                } while (arg2 != piVar10);
            }
            uVar6 = 0;
code_r0x080072fc:
            *arg3 = uVar6;
        }
    }
    return;
}


// ===== sym.mi_do_futex @ 0x080073a0 (size 488) =====

uchar  [16] sym.mi_do_futex(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint *puVar2;
    ulong *arg1_00;
    int iVar3;
    bool bVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int in_w1;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    
    *in_x18 = unaff_x30;
    if ((in_w1 == 0) && ((*arg1 & 1) == 0)) {
        arg1_00 = sp_el0;
        uVar5 = sym.mi_vip_task(arg1_00);
        if ((((uVar5 & 1) != 0) || (uVar5 = sym.mi_link_vip_task(arg1_00), noname_1 = extraout_q0, (uVar5 & 1) != 0))
           && ((iVar6 = get_mi_task_struct(arg1_00), noname_1 = extraout_q0_00, arg2 != 0 && (iVar6 != 0)))) {
            *(arg1_00 + 0x15a) = *(arg1_00 + 0x15a) + 1;
            uVar5 = (arg2 << 8) >> 8;
            if (((*(arg1_00 + 0x3e) >> 5 & 1) != 0) || (uVar7 = arg2, (*arg1_00 >> 0x1a & 1) != 0)) {
                uVar7 = arg2 & uVar5;
            }
            bVar4 = 0xfffffffffffffffb < uVar7;
            uVar7 = uVar7 + 4;
            uVar1 = 0;
            if (!bVar4 || uVar7 == 0) {
                uVar1 = 0x7fffffffff;
            }
            if (bVar4) {
                uVar7 = 0xffffffffffffffff;
            }
            if ((CARRY8(uVar7,~uVar1) || CARRY8(uVar7 + ~uVar1,bVar4)) && uVar7 != uVar1 + !bVar4) {
                *(iVar6 + 0x1c4) = 0;
                *(arg1_00 + 0x15a) = *(arg1_00 + 0x15a) + -1;
                noname_1 = _printk(0x8002104,*(arg1_00 + 0xbb),arg1_00 + 0xf5);
            }
            else {
                puVar2 = arg2;
                if ((arg2 & uVar5 & 0xffffff8000000000) != 0) {
                    puVar2 = NULL;
                }
                if ((_delayed_work_timer_fn >> 0x18 & 1) == 0) {
                    uVar5 = daif;
                    if ((uVar5 & 0x80) == 0) {
                        uVar7 = daif;
                        daif = uVar7 | 0xc0;
                    }
                    uVar7 = ttbr1_el1;
                    ttbr1_el1 = arg1_00[1] & 0xffff000000000000 | uVar7 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    ttbr0_el1 = arg1_00[1];
                    InstructionSynchronizationBarrier();
                    daif = uVar5;
                }
                if ((_delayed_work_timer_fn >> 0x18 & 1) == 0) {
                    uVar5 = daif;
                    if ((uVar5 & 0x80) == 0) {
                        uVar7 = daif;
                        daif = uVar7 | 0xc0;
                    }
                    uVar7 = ttbr1_el1;
                    ttbr0_el1 = (uVar7 & 0xffffffffffff) - 0x1000;
                    InstructionSynchronizationBarrier();
                    ttbr1_el1 = uVar7 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    daif = uVar5;
                }
                *(iVar6 + 0x1c4) = *puVar2;
                iVar3 = *0x8001000;
                *(arg1_00 + 0x15a) = *(arg1_00 + 0x15a) + -1;
                *(iVar6 + 0x1c8) = 0x6f;
                if (iVar3 != 0) {
                    noname_1 = _printk(0x800314c,arg2,*(arg1_00 + 0xbb),arg1_00 + 0xf5);
                }
            }
        }
    }
    return noname_1;
}


// ===== sym.mi_futex_sleep_start @ 0x080075c4 (size 832) =====

void sym.mi_futex_sleep_start(ulong noname_0,int64_t arg1)

{
    uint32_t *puVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t arg1_00;
    int64_t iVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = sym.mi_vip_task(arg1);
    if (((uVar4 & 1) == 0) && (uVar4 = sym.mi_link_vip_task(arg1), (uVar4 & 1) == 0)) {
        return;
    }
    iVar5 = get_mi_task_struct(arg1);
    if (iVar5 == 0) {
        return;
    }
    if (*(iVar5 + 0x1c8) != 0x6f) {
        return;
    }
    if (*(iVar5 + 0x1c4) < 1) {
        return;
    }
    __rcu_read_lock();
    uVar6 = find_vpid(*(iVar5 + 0x1c4));
    arg1_00 = pid_task(uVar6,0);
    if ((arg1_00 == 0) || (puVar1 = arg1_00 + 0x38, *puVar1 == 0)) {
        __rcu_read_unlock();
        return;
    }
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = uVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (uVar8 == 0) {
        uVar6 = 2;
code_r0x0800784c:
        refcount_warn_saturate(puVar1,uVar6);
    }
    else if ((uVar8 + 1 | uVar8) < 0) {
        uVar6 = 1;
        goto code_r0x0800784c;
    }
    __rcu_read_unlock();
    iVar7 = get_mi_task_struct(arg1_00);
    if (iVar7 == 0) {
        sym.put_task_struct(arg1_00);
        return;
    }
    uVar4 = sym.mi_art_mutex_vip_task(arg1_00);
    if ((uVar4 & 1) != 0) {
        if (*0x8001000 != 0) {
            _printk(0x800223b,*(arg1_00 + 0x5d8),arg1_00 + 0x7a8,*(arg1 + 0x5d8),arg1 + 0x7a8);
        }
        *(iVar5 + 0x1c8) = 0x70;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = uVar8 - 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (uVar8 == 1) {
            DataMemoryBarrier(2,1);
            goto code_r0x08007774;
        }
        goto code_r0x08007884;
    }
    iVar7 = get_mi_task_struct(arg1_00);
    if (iVar7 == 0) {
code_r0x080077d0:
        if (*0x8001000 != 0) {
            _printk(0x800396c,*(arg1_00 + 0x5d8),arg1_00 + 0x7a8,*(arg1 + 0x5d8),arg1 + 0x7a8);
        }
    }
    else {
        __rcu_read_lock();
        *(iVar7 + 0x1b8) = _seq_read + 0xf;
        *(iVar7 + 0x10) = *(iVar7 + 0x10) | 0x4000;
        __rcu_read_unlock();
        sym.mi_resched_vip_task(arg1_00);
        if (*0x8001000 != 0) {
            _printk(0x8003928,"art-mutex",*(arg1_00 + 0x5d8),arg1_00 + 0x7a8);
            goto code_r0x080077d0;
        }
    }
    DataMemoryBarrier(2,3);
    if (*(iVar5 + 0x1c8) != 0x6f) {
        iVar7 = get_mi_task_struct(arg1_00);
        if (iVar7 != 0) {
            __rcu_read_lock();
            *(iVar7 + 0x10) = *(iVar7 + 0x10) & 0xffffbfff;
            __rcu_read_unlock();
            if (*0x8001000 == 0) goto code_r0x0800774c;
            _printk(0x8001b79,"art-mutex",*(arg1_00 + 0x5d8),arg1_00 + 0x7a8);
        }
        if (*0x8001000 != 0) {
            _printk(0x800318e,*(arg1_00 + 0x5d8),arg1_00 + 0x7a8,*(arg1 + 0x5d8),arg1 + 0x7a8);
        }
    }
code_r0x0800774c:
    *(iVar5 + 0x1c8) = 0x70;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (uVar8 == 1) {
        DataMemoryBarrier(2,1);
code_r0x08007774:
        __put_task_struct(arg1_00);
        return;
    }
code_r0x08007884:
    if (uVar8 < 1) {
        refcount_warn_saturate(puVar1,3);
    }
    return;
}


// ===== sym.mi_futex_wake_traverse_plist @ 0x08007904 (size 640) =====

void sym.mi_futex_wake_traverse_plist(ulong noname_0,uint32_t arg1,uchar noname_2 [16],int64_t arg2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    int iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t *puVar9;
    ulong uVar10;
    uint32_t in_w4;
    uint64_t *puVar11;
    ulong *in_x18;
    uint64_t *puVar12;
    uint64_t arg1_00;
    ulong unaff_x30;
    
    puVar9 = arg1;
    *in_x18 = unaff_x30;
    if (puVar9 != *puVar9) {
        iVar5 = sp_el0;
        puVar11 = *puVar9;
        do {
            puVar12 = *puVar11;
            if ((((arg2 != 0) && (puVar11 + 4 != NULL)) && (puVar11[5] == *(arg2 + 8))) &&
               ((puVar11[4] == *arg2 && (puVar11[6] == *(arg2 + 0x10))))) {
                if (puVar11[7] != 0) {
                    return;
                }
                if (puVar11[8] != 0) {
                    return;
                }
                if ((puVar11[10] & in_w4) != 0) {
                    arg1_00 = puVar11[2];
                    puVar1 = arg1_00 + 0x38;
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        uVar2 = *puVar1;
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                            *puVar1 = uVar2 + 1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    if (uVar2 == 0) {
                        uVar10 = 2;
code_r0x08007b10:
                        refcount_warn_saturate(puVar1,uVar10);
                    }
                    else if ((uVar2 + 1 | uVar2) < 0) {
                        uVar10 = 1;
                        goto code_r0x08007b10;
                    }
                    iVar7 = get_mi_task_struct(arg1_00);
                    if (iVar7 == 0) {
code_r0x08007aa0:
                        sym.put_task_struct(arg1_00);
                    }
                    else {
                        if ((*(iVar7 + 0x1c8) - 0x6fU < 2) && (*(iVar7 + 0x1c4) == *(iVar5 + 0x5d8))) {
                            iVar8 = get_mi_task_struct(iVar5);
                            if (iVar8 == 0) goto code_r0x08007aa0;
                            *(iVar7 + 0x1c8) = 0x70;
                            DataMemoryBarrier(2,3);
                            if ((iVar5 != 0) && (iVar8 = get_mi_task_struct(iVar5), iVar8 != 0)) {
                                __rcu_read_lock();
                                *(iVar8 + 0x10) = *(iVar8 + 0x10) & 0xffffbfff;
                                __rcu_read_unlock();
                                if (*0x8001000 == 0) {
                                    *(iVar7 + 0x1c4) = 0;
                                    goto code_r0x08007a6c;
                                }
                                _printk(0x8001b79,"art-mutex",*(iVar5 + 0x5d8),iVar5 + 0x7a8);
                            }
                            iVar6 = *0x8001000;
                            *(iVar7 + 0x1c4) = 0;
                            if (iVar6 != 0) {
                                _printk(0x800276c,*(iVar5 + 0x5d8),iVar5 + 0x7a8,*(arg1_00 + 0x5d8),arg1_00 + 0x7a8)
                                ;
                            }
                        }
code_r0x08007a6c:
                        Hint_Prefetch(puVar1,2,0,1);
                        do {
                            uVar2 = *puVar1;
                            cVar3 = '\x01';
                            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar4) {
                                *puVar1 = uVar2 - 1;
                                cVar3 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar3 != '\0');
                        if (uVar2 == 1) {
                            DataMemoryBarrier(2,1);
                            __put_task_struct(arg1_00);
                        }
                        else if (uVar2 < 1) {
                            refcount_warn_saturate(puVar1,3);
                        }
                    }
                }
            }
            puVar11 = puVar12;
        } while (puVar9 != puVar12);
    }
    return;
}


// ===== sym.mi_futex_wait_end @ 0x08007b84 (size 416) =====

void sym.mi_futex_wait_end(void)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = sp_el0;
    iVar5 = get_mi_task_struct(uVar6);
    if (iVar5 == 0) {
        return;
    }
    *(iVar5 + 0x1c8) = 0;
    if (*(iVar5 + 0x1c4) < 1) goto code_r0x08007cc4;
    __rcu_read_lock();
    uVar6 = find_vpid(*(iVar5 + 0x1c4));
    iVar7 = pid_task(uVar6,0);
    if ((iVar7 != 0) && (puVar1 = iVar7 + 0x38, *puVar1 != 0)) {
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar2 = *puVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar2 == 0) {
            uVar6 = 2;
code_r0x08007c98:
            refcount_warn_saturate(puVar1,uVar6);
        }
        else if ((uVar2 + 1 | uVar2) < 0) {
            uVar6 = 1;
            goto code_r0x08007c98;
        }
        iVar8 = get_mi_task_struct(iVar7);
        if (iVar8 != 0) {
            __rcu_read_lock();
            *(iVar8 + 0x10) = *(iVar8 + 0x10) & 0xffffbfff;
            __rcu_read_unlock();
            if (*0x8001000 != 0) {
                _printk(0x8001b79,"art-mutex",*(iVar7 + 0x5d8),iVar7 + 0x7a8);
            }
        }
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar2 = *puVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar2 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar2 == 1) {
            DataMemoryBarrier(2,1);
            __put_task_struct(iVar7);
        }
        else if (uVar2 < 1) {
            refcount_warn_saturate(puVar1,3);
        }
    }
    __rcu_read_unlock();
code_r0x08007cc4:
    *(iVar5 + 0x1c4) = 0;
    return;
}


// ===== sym.metis_link_exit @ 0x08007d24 (size 124) =====

void sym.metis_link_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    misc_deregister(obj.link_debug);
    if (*0x8001000 != 0) {
        proc_remove();
    }
    *0x8001000 = 0;
    _printk(0x8002049,"unregister_rvh_mi_try_to_wake_up",1);
    *0x8001000 = 0;
    _printk(0x8002f31,"metis_link_exit");
    return;
}


// ===== sym.set_link_vip_enable @ 0x08007da0 (size 128) =====

uint sym.set_link_vip_enable(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    uint uStack_1c;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    uStack_1c = 0;
    iVar2 = sscanf(arg1,0x8002100,&uStack_1c);
    if (iVar2 == 1) {
        uVar3 = 0;
        *0x8001000 = uStack_1c;
    }
    else {
        uVar3 = 0xffffffea;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return uVar3;
    }
    __stack_chk_fail(uVar3);
    return *0x8001000;
}


// ===== sym.get_link_vip_enable @ 0x08007e20 (size 20) =====

uint sym.get_link_vip_enable(void)

{
    return *0x8001000;
}


// ===== sym.do_set_lock_vip @ 0x08007e34 (size 448) =====

void sym.do_set_lock_vip(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return;
    }
    if (arg2 == 0) {
        return;
    }
    puVar1 = arg1 + 0x38;
    if (*puVar1 == 0) {
        return;
    }
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar7 = 2;
code_r0x08007f6c:
        refcount_warn_saturate(puVar1,uVar7);
    }
    else if ((uVar2 + 1 | uVar2) < 0) {
        uVar7 = 1;
        goto code_r0x08007f6c;
    }
    uVar5 = sym.mi_lock_vip_task(arg1);
    if ((uVar5 & 1) == 0) {
        iVar6 = get_mi_task_struct(arg1);
        if (iVar6 != 0) {
            __rcu_read_lock();
            *(iVar6 + 0x1b8) = _seq_read + 0x4b;
            *(iVar6 + 0x10) = *(iVar6 + 0x10) | 0x1000;
            __rcu_read_unlock();
            sym.mi_resched_vip_task(arg1);
            if (*0x8001000 == 0) goto code_r0x08007ee4;
            _printk(0x8003928,"lock",*(arg1 + 0x5d8),arg1 + 0x7a8);
        }
        if (*0x8001000 != 0) {
            _printk(0x80027ee,arg3,*(arg1 + 0x5d8),*(arg2 + 0x5d8),arg2 + 0x7a8);
        }
    }
code_r0x08007ee4:
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 - 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 1) {
        DataMemoryBarrier(2,1);
        __put_task_struct(arg1);
    }
    else if (uVar2 < 1) {
        refcount_warn_saturate(puVar1,3);
    }
    return;
}


// ===== sym.mi_lock_vip_finish_common @ 0x08007ff4 (size 368) =====

void sym.mi_lock_vip_finish_common(int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return;
    }
    puVar1 = arg1 + 0x38;
    if (*puVar1 == 0) {
        return;
    }
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar7 = 2;
    }
    else {
        if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08008040;
        uVar7 = 1;
    }
    refcount_warn_saturate(puVar1,uVar7);
code_r0x08008040:
    uVar5 = sym.mi_lock_vip_task(arg1);
    if (((uVar5 & 1) != 0) && (iVar6 = get_mi_task_struct(arg1), iVar6 != 0)) {
        __rcu_read_lock();
        *(iVar6 + 0x10) = *(iVar6 + 0x10) & 0xffffefff;
        __rcu_read_unlock();
        if (*0x8001000 != 0) {
            _printk(0x8001b79,"lock",*(arg1 + 0x5d8),arg1 + 0x7a8);
        }
    }
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 - 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 1) {
        DataMemoryBarrier(2,1);
        __put_task_struct(arg1);
    }
    else if (uVar2 < 1) {
        refcount_warn_saturate(puVar1,3);
    }
    return;
}


// ===== sym.metis_link_ioctl @ 0x08008164 (size 292) =====

ulong sym.metis_link_ioctl(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_40 = 0;
    if (*0x8016000 == 0) goto code_r0x08008220;
    if (*0x8001000 != 0) {
        _printk(0x8003313,arg1 & 0xff);
    }
    if ((arg1 & 0xff) == 1) {
        *0x8001000 = *0x8001000 + 1;
        sym.do_clean_art_mutex_vip_task();
        if (*0x8001000 == 0) goto code_r0x08008220;
        uVar2 = 0x8003495;
    }
    else {
        if ((arg1 & 0xffU) != 0) goto code_r0x08008220;
        iVar1 = sym._copy_from_user(&uStack_40,arg2);
        if (iVar1 == 0) {
            *0x8001000 = *0x8001000 + 1;
            sym.do_set_art_mutex_vip_task(uStack_40 & 0xffffffff);
            if (*0x8001000 != 0) {
                _printk(0x80031f6,uStack_40);
            }
            goto code_r0x08008220;
        }
        uVar2 = 0x8003476;
    }
    _printk(uVar2);
code_r0x08008220:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return 0;
    }
    __stack_chk_fail();
    return 0;
}


// ===== sym.metis_link_mmap @ 0x08008288 (size 16) =====

ulong sym.metis_link_mmap(int64_t arg1)

{
    return 0;
}


// ===== sym.metis_link_open @ 0x08008298 (size 16) =====

ulong sym.metis_link_open(int64_t arg1)

{
    return 0;
}


// ===== sym.metis_link_release @ 0x080082a8 (size 16) =====

ulong sym.metis_link_release(int64_t arg1)

{
    return 0;
}


// ===== sym.do_set_art_mutex_vip_task @ 0x080082b8 (size 444) =====

void sym.do_set_art_mutex_vip_task(int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    int64_t arg1_00;
    int64_t iVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 1) {
        return;
    }
    if (*0x8001000 != 0) {
        return;
    }
    uVar5 = find_vpid();
    arg1_00 = pid_task(uVar5,0);
    if (arg1_00 == 0) {
        return;
    }
    puVar1 = arg1_00 + 0x38;
    if (*puVar1 == 0) {
        return;
    }
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar5 = 2;
    }
    else {
        if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08008328;
        uVar5 = 1;
    }
    refcount_warn_saturate(puVar1,uVar5);
code_r0x08008328:
    iVar6 = get_mi_task_struct(arg1_00);
    if (((iVar6 != 0) && (uVar7 = sym.mi_art_mutex_vip_task(arg1_00), (uVar7 & 1) == 0)) &&
       (*0x8001000 = arg1, iVar6 = get_mi_task_struct(arg1_00), iVar6 != 0)) {
        __rcu_read_lock();
        *(iVar6 + 0x1b8) = _seq_read + 0x4b;
        *(iVar6 + 0x10) = *(iVar6 + 0x10) | 0x4000;
        __rcu_read_unlock();
        sym.mi_resched_vip_task(arg1_00);
        if (*0x8001000 != 0) {
            _printk(0x8003928,"art-mutex",*(arg1_00 + 0x5d8),arg1_00 + 0x7a8);
        }
    }
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 - 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 1) {
        DataMemoryBarrier(2,1);
        __put_task_struct(arg1_00);
    }
    else if (uVar2 < 1) {
        refcount_warn_saturate(puVar1,3);
    }
    return;
}


// ===== sym.do_clean_art_mutex_vip_task @ 0x08008474 (size 412) =====

void sym.do_clean_art_mutex_vip_task(void)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    int64_t arg1;
    int64_t iVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 < 1) {
        *0x8001000 = 0;
        return;
    }
    uVar5 = find_vpid();
    arg1 = pid_task(uVar5,0);
    if (arg1 == 0) {
        *0x8001000 = 0;
        return;
    }
    puVar1 = arg1 + 0x38;
    if (*puVar1 == 0) {
        *0x8001000 = 0;
        return;
    }
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar5 = 2;
    }
    else {
        if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x080084dc;
        uVar5 = 1;
    }
    refcount_warn_saturate(puVar1,uVar5);
code_r0x080084dc:
    iVar6 = get_mi_task_struct(arg1);
    if (((iVar6 != 0) && (uVar7 = sym.mi_art_mutex_vip_task(arg1), (uVar7 & 1) != 0)) &&
       (iVar6 = get_mi_task_struct(arg1), iVar6 != 0)) {
        __rcu_read_lock();
        *(iVar6 + 0x10) = *(iVar6 + 0x10) & 0xffffbfff;
        __rcu_read_unlock();
        if (*0x8001000 != 0) {
            _printk(0x8001b79,"art-mutex",*(arg1 + 0x5d8),arg1 + 0x7a8);
        }
    }
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 - 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 1) {
        DataMemoryBarrier(2,1);
        __put_task_struct(arg1);
    }
    else if (uVar2 < 1) {
        refcount_warn_saturate(puVar1,3);
    }
    *0x8001000 = 0;
    return;
}


// ===== sym._copy_from_user @ 0x08008610 (size 364) =====

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
    bVar4 = 0xfffffffffffffff7 < uVar6;
    uVar6 = uVar6 + 8;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    if ((CARRY8(uVar6,~uVar1) || CARRY8(uVar6 + ~uVar1,bVar4)) && uVar6 != uVar1 + !bVar4) {
        iVar5 = 8;
    }
    else {
        if ((_delayed_work_timer_fn >> 0x18 & 1) == 0) {
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
        iVar5 = __arch_copy_from_user(arg1,arg2,8);
        if ((_delayed_work_timer_fn >> 0x18 & 1) == 0) {
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
    memset((arg1 - iVar5) + 8,0,iVar5);
    return iVar5;
}


// ===== sym._copy_from_user_1 @ 0x080087b8 (size 376) =====

int64_t sym._copy_from_user_1(int64_t arg1,int64_t arg2,int64_t arg3)

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
        if ((_delayed_work_timer_fn >> 0x18 & 1) == 0) {
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
        if ((_delayed_work_timer_fn >> 0x18 & 1) == 0) {
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


// ===== sym.mi_art_mutex_debug_open @ 0x0800896c (size 68) =====

void sym.mi_art_mutex_debug_open(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = PDE_DATA();
    single_open(arg1,sym.mi_art_mutex_debug_show.eee5bcbe65854363b2a4eeb5e9ef8187.cfi_jt,uVar1);
    return;
}


// ===== sym.mi_art_mutex_debug_show @ 0x080089b0 (size 168) =====

ulong sym.mi_art_mutex_debug_show(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(obj.mi_art_mutex_lock);
    seq_printf(arg1,"\n------------mi art mutex contention statistics------------");
    seq_printf(arg1,"\n vtsk set   times : \t %6d",*0x8001000);
    seq_printf(arg1,"\n vtsk unset times : \t %6d\n",*0x8001000);
    seq_printf(arg1,0x8002f5b);
    _raw_spin_unlock_irqrestore(obj.mi_art_mutex_lock,uVar1);
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08008a58 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08008a9c

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
    //switch table (4 cases) at 0x8001960
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8008ab0);
    (*pcVar1)();
}


// ===== sym.register_game_wake_f @ 0x08008ab0 (size 72) =====

void sym.register_game_wake_f(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80029a9,"register_game_wake_f");
    *0x8001000 = arg1;
    return;
}


// ===== sym.unregister_game_wake_f @ 0x08008af8 (size 20) =====

void sym.unregister_game_wake_f(void)

{
    *0x8001000 = 0;
    return;
}


// ===== sym.cpu_coregroup_mask @ 0x08008b0c (size 112) =====

code * sym.cpu_coregroup_mask(uint32_t arg1)

{
    code *pcVar1;
    code *pcVar2;
    
    if (0x1f < arg1) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x8008b7c);
        (*pcVar1)();
    }
    pcVar1 = cpumask_next_and + arg1 * 0x30;
    if ((*(cpumask_next_and + arg1 * 0x30) & (___cpu_online_mask ^ 0xffffffff)) != 0) {
        pcVar1 = __cpu_online_mask;
    }
    pcVar2 = pcVar1;
    if ((*(ns_capable + arg1 * 0x30) != -1) &&
       (pcVar2 = __cpu_possible_mask + arg1 * 0x30,
       (*(__cpu_possible_mask + arg1 * 0x30) & (*pcVar1 ^ 0xffffffff)) != 0)) {
        pcVar2 = pcVar1;
    }
    return pcVar2;
}


// ===== sym.mi_cpuset_fork @ 0x08008b7c (size 96) =====

void sym.mi_cpuset_fork(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sp_el0;
    iVar2 = get_mi_task_struct(uVar1);
    if ((iVar2 == 0) || ((*(iVar2 + 0x10) >> 1 & 1) == 0)) {
        *arg2 = 0;
    }
    else {
        *arg2 = 1;
        set_cpus_allowed_ptr(arg1,iVar2 + 0x18);
    }
    return;
}


// ===== sym.mi_sched_setaffinity @ 0x08008bdc (size 808) =====

void sym.mi_sched_setaffinity(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    char cVar6;
    bool bVar7;
    int64_t iVar8;
    code *pcVar9;
    int iVar10;
    uint32_t uVar11;
    uint *puVar12;
    ulong uVar13;
    ulong *in_x18;
    uint64_t uVar14;
    int64_t iVar15;
    ulong unaff_x30;
    uint64_t uStack_80;
    uint64_t uStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    puVar1 = arg1 + 0x38;
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar11 = *puVar1;
        cVar6 = '\x01';
        bVar7 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
            *puVar1 = uVar11 + 1;
            cVar6 = ExclusiveMonitorsStatus();
        }
    } while (cVar6 != '\0');
    if (uVar11 == 0) {
        uVar13 = 2;
code_r0x08008e48:
        refcount_warn_saturate(puVar1,uVar13);
    }
    else if ((uVar11 + 1 | uVar11) < 0) {
        uVar13 = 1;
        goto code_r0x08008e48;
    }
    puVar12 = get_mi_task_struct(arg1);
    if ((puVar12 != NULL) && ((*(arg1 + 0x3f) >> 2 & 1) == 0)) {
        iVar8 = sp_el0;
        iVar15 = *(iVar8 + 0x798);
        __rcu_read_lock();
        iVar10 = *(iVar15 + 0x14);
        if (iVar10 == *(*(arg1 + 0x790) + 0x14)) {
            __rcu_read_unlock();
        }
        else {
            iVar2 = *(*(arg1 + 0x790) + 4);
            __rcu_read_unlock();
            if (iVar10 != iVar2) {
                __rcu_read_lock();
                uVar14 = ns_capable(*(*(arg1 + 0x790) + 0x88),0x17);
                __rcu_read_unlock();
                if ((uVar14 & 1) == 0) goto code_r0x08008d6c;
            }
        }
        if (*0x8001000 != 0) {
            __rcu_read_lock();
            uVar3 = *(*(iVar8 + 0x790) + 4);
            __rcu_read_unlock();
            uVar4 = *(iVar8 + 0x5d8);
            __rcu_read_lock();
            uVar5 = *(*(arg1 + 0x790) + 4);
            __rcu_read_unlock();
            _printk(0x8003229,iVar8 + 0x7a8,uVar3,uVar4,arg1 + 0x7a8,uVar5,*(arg1 + 0x5d8));
            _printk(0x8003643,*arg2);
        }
        iVar10 = sym.unbind_cpu_affinity_task(arg1);
        if (iVar10 != 0) {
            cpuset_cpus_allowed(arg1,&uStack_70);
            uVar14 = *arg2 & uStack_70;
            uStack_80 = ___cpu_active_mask & uVar14;
            uStack_78 = uVar14;
            uVar11 = cpumask_next_and(0xffffffff,__cpu_active_mask,&uStack_80);
            *puVar12 = 0x805f000;
            if (uVar11 < 0x805f000) {
                cpuset_cpus_allowed(arg1,&uStack_70);
                if ((uVar14 & (uStack_70 ^ 0xffffffffffffffff)) != 0) {
                    uStack_78 = uStack_70;
                    uVar14 = uStack_70;
                }
            }
            uVar13 = *(puVar12 + 6);
            if (((**(puVar12 + 10) >> 0x16 & 1) == 0) && (*(puVar12 + 6) = uVar14, (**(puVar12 + 10) >> 0x16 & 1) != 0)
               ) {
                if (*0x8001000 != 0) goto code_r0x08008ec0;
                *(puVar12 + 6) = uVar13;
            }
            *arg3 = 1;
            if (*0x8001000 != 0) {
                _printk(0x8003018,&uStack_78);
            }
        }
    }
code_r0x08008d6c:
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar11 = *puVar1;
        cVar6 = '\x01';
        bVar7 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
            *puVar1 = uVar11 - 1;
            cVar6 = ExclusiveMonitorsStatus();
        }
    } while (cVar6 != '\0');
    if (uVar11 == 1) {
        DataMemoryBarrier(2,1);
        __put_task_struct(arg1);
    }
    else if (uVar11 < 1) {
        refcount_warn_saturate(puVar1,3);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail();
code_r0x08008ec0:
    //WARNING: Does not return
    pcVar9 = SoftwareBreakpoint(0x800,0x8008ec4);
    (*pcVar9)();
}


// ===== sym.unbind_cpu_affinity_task @ 0x08008f04 (size 352) =====

uint32_t sym.unbind_cpu_affinity_task(int64_t arg1)

{
    char *pcVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return 0;
    }
    if (*(arg1 + 0x38) != 0) {
        iVar4 = get_mi_task_struct(arg1);
        if (iVar4 == 0) {
            return 0;
        }
        if ((*arg1 >> 0x16 & 1) == 0) {
            __rcu_read_lock();
            uVar2 = *(*(arg1 + 0x790) + 4);
            __rcu_read_unlock();
            if ((*0x8001000 != 0) && (*0x8001000 == uVar2)) {
code_r0x08008fc8:
                if (*0x8001000 == 0) {
                    return 1;
                }
                iVar3 = sym.uid_type(uVar2);
                pcVar1 = "minor_window_app";
                if (iVar3 != 0) {
                    pcVar1 = "in uidlist";
                }
                _printk(0x8002b18,pcVar1);
                return 1;
            }
            if (uVar2 >> 6 < 0xc35) {
                uVar5 = uVar2 >> 6;
                uVar6 = 1L << (uVar2 & 0x3f);
                if ((((*(obj.cluster_affinity_uid_mlist + uVar5 * 8) & uVar6) != 0) ||
                    ((*(uVar5 * 8 + 0x800a790) & uVar6) != 0)) || ((*(uVar5 * 8 + 0x8010938) & uVar6) != 0))
                goto code_r0x08008fc8;
            }
            if ((*0x8001000 != 0) && ((*(iVar4 + 0x10) >> 2 & 1) != 0)) {
                _printk(0x8001bd0,*(arg1 + 0x5d8),arg1 + 0x7a8);
            }
            return *(iVar4 + 0x10) & 4;
        }
    }
    return 0;
}


// ===== sym.mi_set_cpus_allowed_comm @ 0x0800906c (size 76) =====

void sym.mi_set_cpus_allowed_comm(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = get_mi_task_struct(arg1);
    if (iVar1 != 0) {
        *(iVar1 + 0x10) = *(iVar1 + 0x10) & 0xfffffffd;
        *(iVar1 + 0x18) = *arg2;
    }
    return;
}


// ===== sym.mi_select_task_rq_fair @ 0x080090b8 (size 976) =====

void sym.mi_select_task_rq_fair(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    code *pcVar5;
    int iVar6;
    uint uVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong unaff_x30;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    uStack_50 = 0;
    if ((arg1 != 0) && (puVar1 = arg1 + 0x38, *puVar1 != 0)) {
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar2 = *puVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar2 == 0) {
            uVar10 = 2;
code_r0x080093d4:
            noname_1 = refcount_warn_saturate(puVar1,uVar10);
        }
        else if ((uVar2 + 1 | uVar2) < 0) {
            uVar10 = 1;
            goto code_r0x080093d4;
        }
        iVar8 = get_mi_task_struct(noname_1,arg1);
        if (iVar8 == 0) {
            sym.put_task_struct_1(arg1);
        }
        else {
            iVar6 = sym.unbind_cpu_affinity_task(arg1);
            uVar2 = *(iVar8 + 0x10);
            if (iVar6 == 0) {
                if ((uVar2 >> 1 & 1) != 0) {
                    *(iVar8 + 0x10) = uVar2 & 0xfffffffd;
                    uVar12 = *(arg1 + 0x438);
                    uVar11 = uVar12;
                    if ((*arg1 >> 0x16 & 1) == 0) {
                        uVar11 = *(iVar8 + 0x18);
                        *(arg1 + 0x438) = uVar11;
                        if ((*arg1 >> 0x16 & 1) != 0) {
                            if (*0x8001000 != 0) {
    //WARNING: Does not return
                                pcVar5 = SoftwareBreakpoint(0x800,0x800944c);
                                (*pcVar5)();
                            }
                            *(arg1 + 0x438) = uVar12;
                            uVar11 = uVar12;
                        }
                    }
code_r0x080092b0:
                    uVar7 = __sw_hweight64(uVar11 & 0xffffffff);
                    *(arg1 + 0x424) = uVar7;
                }
            }
            else if ((uVar2 >> 1 & 1) == 0) {
                *(iVar8 + 0x10) = uVar2 | 2;
                uVar10 = *(iVar8 + 0x18);
                if (((**(iVar8 + 0x28) >> 0x16 & 1) == 0) &&
                   (*(iVar8 + 0x18) = *(arg1 + 0x438), (**(iVar8 + 0x28) >> 0x16 & 1) != 0)) {
                    if (*0x8001000 != 0) goto code_r0x08009444;
                    *(iVar8 + 0x18) = uVar10;
                }
                __rcu_read_lock();
                uVar2 = *(*(arg1 + 0x790) + 4);
                __rcu_read_unlock();
                if (((obj.cluster_core_init_suc == 0x1) && (iVar9 = get_mi_task_struct(arg1), iVar9 != 0)) &&
                   ((*arg1 >> 0x16 & 1) == 0)) {
                    if ((*0x8001000 == 0) || (uVar11 = _update_rq_clock, *0x8001000 != uVar2)) {
                        if ((*(iVar9 + 0x10) >> 2 & 1) == 0) {
                            if (0xc34 < uVar2 >> 6) goto code_r0x08009324;
                            uVar11 = uVar2 >> 6;
                            uVar12 = 1L << (uVar2 & 0x3f);
                            if ((*(obj.cluster_affinity_uid_mlist + uVar11 * 8) & uVar12) == 0) {
                                if ((*(uVar11 * 8 + 0x800a790) & uVar12) == 0) {
                                    if ((*(uVar11 * 8 + 0x8010938) & uVar12) == 0) goto code_r0x08009324;
                                    iVar8 = 3;
                                }
                                else {
                                    iVar8 = 1;
                                }
                            }
                            else {
                                iVar8 = 2;
                            }
                            uVar11 = *(obj.cluster_affinity_cpumask + iVar8 * 8);
                        }
                        else {
                            uStack_50 = *(iVar9 + 0x20);
                            uVar11 = uStack_50;
                            if (*0x8001000 != 0) {
                                _printk(0x8002d88,*(arg1 + 0x5d8),arg1 + 0x7a8,&uStack_50);
                                uVar11 = uStack_50;
                            }
                        }
                    }
                    uStack_50 = uVar11;
                    uVar10 = *(arg1 + 0x438);
                    uVar11 = uStack_50;
                    if (((*arg1 >> 0x16 & 1) == 0) && (*(arg1 + 0x438) = uStack_50, (*arg1 >> 0x16 & 1) != 0)) {
                        if (*0x8001000 != 0) {
    //WARNING: Does not return
                            pcVar5 = SoftwareBreakpoint(0x800,0x8009450);
                            (*pcVar5)();
                        }
                        *(arg1 + 0x438) = uVar10;
                    }
                    goto code_r0x080092b0;
                }
code_r0x08009324:
                *(iVar8 + 0x10) = *(iVar8 + 0x10) & 0xfffffffd;
            }
            if (*0x8001000 != 0) {
                _printk(0x80025a2,arg1 + 0x7a8,*(arg1 + 0x5d8),*(arg1 + 0x438),*(arg1 + 0x424));
            }
            pcVar5 = CONCAT44(*0x8001004,*0x8001000);
            if (pcVar5 != NULL) {
                __cfi_slowpath_diag(0x544af760e34e6c4f,pcVar5,0x80017e0);
                (*pcVar5)(arg1,arg2 & 0xffffffff);
            }
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar2 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar2 == 1) {
                DataMemoryBarrier(2,1);
                __put_task_struct(arg1);
            }
            else if (uVar2 < 1) {
                refcount_warn_saturate(puVar1,3);
            }
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail();
code_r0x08009444:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x800,0x8009448);
    (*pcVar5)();
}


// ===== sym.clu_aff_init @ 0x08009488 (size 932) =====

ulong sym.clu_aff_init(void)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    code *pcVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    ulong extraout_x8;
    ulong extraout_x8_00;
    code *extraout_x8_01;
    code *extraout_x8_02;
    code *extraout_x8_03;
    code *pcVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint64_t extraout_x9;
    ulong *in_x18;
    code *unaff_x19;
    int *piVar10;
    ulong *unaff_x21;
    ulong *puVar11;
    code *unaff_x25;
    ulong unaff_x30;
    code *pcStack_88;
    int64_t iStack_80;
    uint64_t uStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    uVar6 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *unaff_x21 = extraout_x8;
    if (extraout_x8 <= uVar6) goto code_r0x08009544;
    piVar10 = 0x8001000;
    puVar11 = 0x1;
    unaff_x19 = __cpu_possible_mask;
    pcVar4 = obj.viptask_use_cpumask;
    do {
        if (*piVar10 < uVar6) goto code_r0x08009500;
        pcVar7 = pcVar4 + ((uVar6 & 0xffffffff) >> 3 & 0x1ffffff8);
        uVar9 = puVar11 << (uVar6 & 0x3f);
        while( true ) {
            Hint_Prefetch(pcVar7,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(pcVar7,0x10);
                if (bVar2) {
                    *pcVar7 = *pcVar7 | uVar9;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
code_r0x08009500:
            uVar6 = cpumask_next(uVar6,unaff_x19);
            *puVar11 = extraout_x8_00;
            if (uVar6 < extraout_x8_00) break;
code_r0x08009544:
            *0x8001000 = register_sysctl_table(obj.ctl_root);
            uStack_70 = _update_rq_clock;
            _printk(0x80034d9,"cluster_core_init");
            piVar10 = 0xffffffff;
            puVar11 = 0x20;
            pcVar4 = 0x8001af1;
            pcStack_88 = NULL;
            iStack_80 = 0;
            uStack_78 = 1;
            do {
                *0x20 = seq_read;
                do {
                    uVar5 = cpumask_next(piVar10,&uStack_70);
                    if (unaff_x25 <= uVar5) goto code_r0x0800974c;
                    piVar10 = uVar5;
                    if (0x1f < uVar5) {
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(0x5512,0x8009810);
                        (*pcVar4)();
                    }
                    pcVar7 = cpumask_next_and + piVar10 * 0x30;
                    if ((*(cpumask_next_and + piVar10 * 0x30) & 0xf7fa0fff) != 0) {
                        pcVar7 = __cpu_online_mask;
                    }
                    unaff_x19 = pcVar7;
                    if ((*(ns_capable + piVar10 * 0x30) != -1) &&
                       (unaff_x19 = __cpu_possible_mask + uVar5 * 0x30,
                       (*(__cpu_possible_mask + uVar5 * 0x30) & (*pcVar7 ^ 0xffffffff)) != 0)) {
                        unaff_x19 = pcVar7;
                    }
                    uVar9 = *unaff_x19;
                    uVar6 = (uVar9 & 0xaaaaaaaa) >> 1 | (uVar9 & 0x55555555) << 1;
                    uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
                    uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
                    uVar8 = 0x20;
                    if ((uVar9 & 0xffffffff) != 0) {
                        uVar8 = LZCOUNT((uVar6 >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10) << 0x20);
                    }
                } while (uVar5 != uVar8);
                pcVar7 = obj.cluster_core_mask + iStack_80 * 8;
                *pcVar7 = uVar9;
                _printk(0x8002db6,uStack_78);
                uVar5 = cpumask_next(0xffffffff,pcVar7);
                if (uVar5 < extraout_w8) {
                    do {
                        _printk(0x8001af1,uVar5);
                        uVar5 = cpumask_next(uVar5,pcVar7);
                    } while (uVar5 < extraout_w8_00);
                }
                _printk(0x8003673);
                uStack_70 = uStack_70 & (*unaff_x19 ^ 0xffffffff);
                unaff_x19 = *unaff_x19 | pcStack_88;
                _printk(0x8003558,uStack_78 & 0xffffffff);
                unaff_x25 = obj.cluster_affinity_cpumask + uStack_78 * 8;
                *unaff_x25 = unaff_x19;
                uVar5 = cpumask_next(0xffffffff,unaff_x25);
                *0x20 = extraout_x8_01;
                if (uVar5 < extraout_x8_01) {
                    do {
                        _printk(0x8001af1,uVar5);
                        uVar5 = cpumask_next(uVar5,unaff_x25);
                        *0x20 = extraout_x8_02;
                    } while (uVar5 < extraout_x8_02);
                }
                _printk(0x8003673);
                uStack_78 = uStack_78 + 1;
                iStack_80 = iStack_80 + 1;
                pcStack_88 = unaff_x19;
            } while (iStack_80 != 3);
code_r0x0800974c:
            *0x80045e0 = *0x80045e0 & (*0x80045d0 ^ 0xffffffff);
            obj.cluster_core_init_suc = 0x1;
            android_rvh_probe_register(__tracepoint_android_rvh_cpuset_fork,sym.mi_cpuset_fork.cfi_jt,0);
            tracepoint_probe_register
                      (__tracepoint_android_vh_sched_setaffinity_early,sym.mi_sched_setaffinity.cfi_jt,0);
            android_rvh_probe_register
                      (__tracepoint_android_rvh_set_cpus_allowed_comm,sym.mi_set_cpus_allowed_comm.cfi_jt,0);
            _printk(0x800375f,"clu_aff_init");
            iVar3 = sp_el0;
            if (*(iVar3 + 0x5e0) == iStack_68) {
                return 0;
            }
            uVar6 = __stack_chk_fail();
            pcVar7 = extraout_x8_03;
            uVar9 = extraout_x9;
        }
    } while( true );
}


// ===== sym.clu_aff_exit @ 0x0800982c (size 56) =====

void sym.clu_aff_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_sysctl_table(*0x8001000);
    *0x8001000 = 0;
    return;
}


// ===== sym.set_rebind_task @ 0x08009864 (size 1180) =====

void sym.set_rebind_task(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    char *pcVar4;
    bool bVar5;
    code *pcVar6;
    int iVar7;
    ulong uVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong *in_x18;
    uint32_t arg4;
    uint32_t uVar11;
    int64_t iVar12;
    uint64_t arg2_00;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    uStack_6c = 0;
    if (*0x8001000 == 0) {
code_r0x080098f0:
        iVar10 = sp_el0;
        _printk(0x8002933,iVar10 + 0x7a8,*(iVar10 + 0x5d8));
        uVar8 = *arg2;
        iVar7 = strlen(uVar8);
        iVar12 = iVar7;
        iVar10 = strnstr(uVar8,"add_rebind_task_lit",iVar12);
        if (iVar10 != 0) {
            bVar5 = false;
            arg4 = 0;
            uVar11 = 1;
code_r0x08009a28:
            arg2_00 = 0xffffffff;
            iVar10 = arg1;
            do {
                iVar10 = strchr(iVar10 + 1,0x3a);
                uVar2 = arg2_00 + 1;
                arg2_00 = uVar2;
            } while (iVar10 != 0);
            iVar7 = strlen(arg1);
            if (bVar5) {
                memset(obj.rebind_task_blist,0,0x1000);
                memset(obj.rebind_task_mlist,0,0x1000);
                memset(obj.rebind_task_llist,0,0x1000);
            }
            else {
                if (*0x8001000 != 0) {
                    _printk(0x80026b6,uVar11);
                }
                iVar10 = uVar11 * 0x14;
                pcVar6 = obj.mi_rebind_task + iVar10;
                *(iVar10 + 0x8001588) = 0;
                *pcVar6 = 0;
                *(iVar10 + 0x8001580) = 0;
                if (uVar2 == 0) {
                    iVar7 = sscanf(arg1,0x8002100,&uStack_6c);
                    if (iVar7 == 1) {
                        pcVar4 = "unbind";
                        if (arg4 == 0) {
                            pcVar4 = "rebind";
                        }
                        _printk(0x800337a,uStack_6c,pcVar4,uVar11);
                        *pcVar6 = uStack_6c;
                        if (uStack_6c >> 0xf == 0) {
                            if (arg4 == 0) {
                                sym.add_to_rebind_task_list(uStack_6c,uVar11);
                            }
                            else {
                                sym.clear_rebind_task_list(uStack_6c,uVar11);
                            }
                            arg2_00 = 1;
                            goto code_r0x08009cd4;
                        }
                    }
code_r0x08009b98:
                    uVar8 = 0xffffffea;
                    goto code_r0x08009b9c;
                }
                uVar14 = uVar11;
                uVar1 = arg1 + iVar7;
                if (uVar2 < 1) {
                    arg2_00 = 0;
                }
                else {
                    uVar13 = 0;
                    do {
                        iVar7 = sscanf(arg1,0x8001c54,&uStack_6c);
                        if ((iVar7 != 1) || (uStack_6c >> 0xf != 0)) goto code_r0x08009b98;
                        if (arg4 == 0) {
                            sym.add_to_rebind_task_list(uStack_6c,uVar11);
                        }
                        else {
                            sym.clear_rebind_task_list(uStack_6c,uVar11);
                        }
                        uVar3 = uVar13 + 1;
                        *(obj.mi_rebind_task + uVar13 * 4 + uVar14 * 0x14) = uStack_6c;
                        _printk(0x80024df,uVar3 & 0xffffffff,uStack_6c,uVar11);
                        arg1 = strchr(arg1 + 1,0x3a);
                        arg1 = arg1 + 1;
                        if (uVar1 <= arg1) goto code_r0x08009a8c;
                        if (uVar13 == 4) {
                            arg2_00 = 5;
                            goto code_r0x08009cd4;
                        }
                        uVar13 = uVar3;
                    } while (arg2_00 != uVar3);
                }
                if (arg1 < uVar1) {
                    iVar7 = sscanf(arg1,0x8001c54,&uStack_6c);
                    if ((iVar7 != 1) || (uStack_6c >> 0xf != 0)) goto code_r0x08009b98;
                    if (arg4 == 0) {
                        sym.add_to_rebind_task_list(uStack_6c,uVar11);
                    }
                    else {
                        sym.clear_rebind_task_list(uStack_6c,uVar11);
                    }
                    if (0x4f < uVar14 * 0x14 + arg2_00 * 4) goto code_r0x08009cfc;
                    uVar2 = arg2_00 + 1;
                    *(obj.mi_rebind_task + arg2_00 * 4 + uVar14 * 0x14) = uStack_6c;
                    _printk(0x800231c,uVar2,uStack_6c,uVar11);
                    arg2_00 = uVar2;
                }
code_r0x08009cd4:
                sym.rebind_task_req(pcVar6,arg2_00,uVar11,arg4);
            }
            goto code_r0x08009a8c;
        }
        iVar10 = strnstr(*arg2,"add_rebind_task_mid",iVar12);
        if (iVar10 != 0) {
            bVar5 = false;
            arg4 = 0;
            uVar11 = 2;
            goto code_r0x08009a28;
        }
        iVar10 = strnstr(*arg2,"add_rebind_task_big",iVar12);
        if (iVar10 != 0) {
            bVar5 = false;
            arg4 = 0;
            uVar11 = 3;
            goto code_r0x08009a28;
        }
        iVar10 = strnstr(*arg2,"reset_rebind_task",iVar12);
        if (iVar10 != 0) {
            arg4 = 0;
            uVar11 = 0;
            bVar5 = true;
            goto code_r0x08009a28;
        }
        iVar10 = strnstr(*arg2,"del_rebind_task_lit",iVar12);
        if (iVar10 != 0) {
            bVar5 = false;
            arg4 = 1;
            uVar11 = 1;
            goto code_r0x08009a28;
        }
        iVar10 = strnstr(*arg2,"del_rebind_task_mid",iVar12);
        if (iVar10 != 0) {
            uVar11 = 2;
code_r0x08009a24:
            bVar5 = false;
            arg4 = 1;
            goto code_r0x08009a28;
        }
        iVar10 = strnstr(*arg2,"del_rebind_task_big",iVar12);
        uVar8 = 0;
        if (iVar10 != 0) {
            uVar11 = 3;
            goto code_r0x08009a24;
        }
    }
    else {
        iVar12 = sp_el0;
        iVar10 = iVar12 + 0x7a8;
        uVar8 = strlen(iVar10);
        iVar9 = strnstr(iVar10,"PowerKeeper",uVar8);
        if (iVar9 != 0) goto code_r0x080098f0;
        _printk(0x8002933,iVar10,*(iVar12 + 0x5d8));
code_r0x08009a8c:
        uVar8 = 0;
    }
code_r0x08009b9c:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail(uVar8);
code_r0x08009cfc:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(1,0x8009d00);
    (*pcVar6)();
}


// ===== sym.get_rebind_task @ 0x08009d00 (size 736) =====

int sym.get_rebind_task(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t iVar9;
    int iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 != 0) {
        iVar9 = sp_el0;
        iVar8 = iVar9 + 0x7a8;
        uVar6 = strlen(iVar8);
        iVar7 = strnstr(iVar8,"PowerKeeper",uVar6);
        if (iVar7 == 0) {
            _printk(0x8001ab7,iVar8,*(iVar9 + 0x5d8));
            return 0;
        }
    }
    iVar8 = sp_el0;
    _printk(0x8001ab7,iVar8 + 0x7a8,*(iVar8 + 0x5d8));
    uVar6 = *arg2;
    iVar4 = strlen(uVar6);
    iVar9 = iVar4;
    iVar8 = strnstr(uVar6,"show_rebind_task_lit",iVar9);
    if (iVar8 == 0) {
        iVar8 = strnstr(*arg2,"show_rebind_task_mid",iVar9);
        if (iVar8 == 0) {
            iVar8 = strnstr(*arg2,"show_rebind_task_big",iVar9);
            uVar6 = str.need_show_rebind_task__biglitmid__n._16_8_;
            if (iVar8 == 0) {
                uVar1 = CONCAT35(str.need_show_rebind_task__biglitmid__n._29_3_,
                                 str.need_show_rebind_task__biglitmid__n._24_5_);
                *(arg1 + 0x1d) =
                     CONCAT53(str.need_show_rebind_task__biglitmid__n._32_5_,
                              str.need_show_rebind_task__biglitmid__n._29_3_);
                uVar3 = str.need_show_rebind_task__biglitmid__n._8_8_;
                uVar2 = str.need_show_rebind_task__biglitmid__n._0_8_;
                *(arg1 + 0x10) = uVar6;
                *(arg1 + 0x18) = uVar1;
                *arg1 = uVar2;
                *(arg1 + 8) = uVar3;
                return 0x24;
            }
            iVar4 = _find_first_bit(obj.rebind_task_blist,0x8000);
            if (iVar4 < 0x8000) {
                iVar10 = 0;
                do {
                    iVar5 = snprintf(arg1 + iVar10,0x1000 - iVar10,0x8001aed,iVar4);
                    iVar10 = iVar5 + iVar10;
                    iVar4 = _find_next_bit(obj.rebind_task_blist,0,0x8000,iVar4 + 1,0,0);
                } while (iVar4 < 0x8000);
                goto code_r0x08009f74;
            }
        }
        else {
            iVar4 = _find_first_bit(obj.rebind_task_mlist,0x8000);
            if (iVar4 < 0x8000) {
                iVar10 = 0;
                do {
                    iVar5 = snprintf(arg1 + iVar10,0x1000 - iVar10,0x8001aed,iVar4);
                    iVar10 = iVar5 + iVar10;
                    iVar4 = _find_next_bit(obj.rebind_task_mlist,0,0x8000,iVar4 + 1,0,0);
                } while (iVar4 < 0x8000);
                goto code_r0x08009f74;
            }
        }
    }
    else {
        iVar4 = _find_first_bit(obj.rebind_task_llist,0x8000);
        if (iVar4 < 0x8000) {
            iVar10 = 0;
            do {
                iVar5 = snprintf(arg1 + iVar10,0x1000 - iVar10,0x8001aed,iVar4);
                iVar10 = iVar5 + iVar10;
                iVar4 = _find_next_bit(obj.rebind_task_llist,0,0x8000,iVar4 + 1,0,0);
            } while (iVar4 < 0x8000);
            goto code_r0x08009f74;
        }
    }
    iVar10 = 0;
code_r0x08009f74:
    iVar4 = snprintf(arg1 + iVar10,0x1000 - iVar10,0x8002f5b);
    return iVar4 + iVar10;
}


// ===== sym.clear_rebind_task_list @ 0x08009fe0 (size 548) =====

void sym.clear_rebind_task_list(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    int iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = arg1 & 0xffffffff;
    iVar5 = arg2;
    if (iVar5 == 1) {
        pcVar1 = obj.rebind_task_llist + (uVar4 >> 3 & 0x1ffffff8);
        Hint_Prefetch(pcVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(pcVar1,0x10);
            if (bVar3) {
                *pcVar1 = *pcVar1 & (1L << (arg1 & 0x3fU) ^ 0xffffffffffffffffU);
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    else if (iVar5 == 3) {
        pcVar1 = obj.rebind_task_blist + (uVar4 >> 3 & 0x1ffffff8);
        Hint_Prefetch(pcVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(pcVar1,0x10);
            if (bVar3) {
                *pcVar1 = *pcVar1 & (1L << (arg1 & 0x3fU) ^ 0xffffffffffffffffU);
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    else if (iVar5 == 2) {
        pcVar1 = obj.rebind_task_mlist + (uVar4 >> 3 & 0x1ffffff8);
        Hint_Prefetch(pcVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(pcVar1,0x10);
            if (bVar3) {
                *pcVar1 = *pcVar1 & (1L << (arg1 & 0x3fU) ^ 0xffffffffffffffffU);
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    else {
        uVar4 = uVar4 >> 6;
        pcVar1 = obj.rebind_task_blist + uVar4 * 8;
        uVar6 = 1L << (arg1 & 0x3fU);
        Hint_Prefetch(pcVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(pcVar1,0x10);
            if (bVar3) {
                *pcVar1 = *pcVar1 & (uVar6 ^ 0xffffffffffffffff);
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        pcVar1 = obj.rebind_task_mlist + uVar4 * 8;
        Hint_Prefetch(pcVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(pcVar1,0x10);
            if (bVar3) {
                *pcVar1 = *pcVar1 & (uVar6 ^ 0xffffffffffffffff);
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        pcVar1 = obj.rebind_task_llist + uVar4 * 8;
        Hint_Prefetch(pcVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(pcVar1,0x10);
            if (bVar3) {
                *pcVar1 = *pcVar1 & (uVar6 ^ 0xffffffffffffffff);
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    if (*0x8001000 != 0) {
        _printk(0x8003396);
    }
    return;
}


// ===== sym.add_to_rebind_task_list @ 0x0800a204 (size 1436) =====

void sym.add_to_rebind_task_list(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    code *pcVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    ulong *puVar6;
    ulong uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int iVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar11 = arg2 & 0xffffffff;
    uVar12 = arg1 & 0xffffffff;
    __rcu_read_lock();
    puVar6 = find_task_by_vpid(uVar12);
    if (puVar6 == NULL) {
        __rcu_read_unlock();
        return;
    }
    puVar1 = puVar6 + 7;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar3 = *puVar1;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
            *puVar1 = uVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    if (uVar3 == 0) {
        uVar7 = 2;
    }
    else {
        if (-1 < (uVar3 + 1 | uVar3)) goto code_r0x0800a260;
        uVar7 = 1;
    }
    refcount_warn_saturate(puVar1,uVar7);
code_r0x0800a260:
    iVar10 = arg2;
    if (*0x8001000 != 0) {
        _printk(0x80027c9,sym.task_pid.aac6a73137e7abde2329e591bee8c57a.cfi_jt,puVar6 + 0xf5,"add ",
                *(uVar11 * 8 + 0x80042c8));
    }
    __rcu_read_unlock();
    if ((*puVar6 >> 0x16 & 1) == 0) {
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar3 = *puVar1;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
                *puVar1 = uVar3 - 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        if (uVar3 == 1) {
            DataMemoryBarrier(2,1);
            __put_task_struct(puVar6);
        }
        else if (uVar3 < 1) {
            refcount_warn_saturate(puVar1,3);
        }
        if (iVar10 == 1) {
            uVar9 = uVar12 >> 6;
            pcVar2 = obj.rebind_task_blist + uVar9 * 8;
            uVar8 = 1L << (arg1 & 0x3fU);
            Hint_Prefetch(pcVar2,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar5) {
                    *pcVar2 = *pcVar2 & (uVar8 ^ 0xffffffffffffffff);
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            pcVar2 = obj.rebind_task_mlist + uVar9 * 8;
            Hint_Prefetch(pcVar2,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar5) {
                    *pcVar2 = *pcVar2 & (uVar8 ^ 0xffffffffffffffff);
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            pcVar2 = obj.rebind_task_llist + uVar9 * 8;
            Hint_Prefetch(pcVar2,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar5) {
                    *pcVar2 = *pcVar2 | uVar8;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
        else if (iVar10 == 3) {
            uVar9 = uVar12 >> 6;
            pcVar2 = obj.rebind_task_llist + uVar9 * 8;
            uVar8 = 1L << (arg1 & 0x3fU);
            Hint_Prefetch(pcVar2,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar5) {
                    *pcVar2 = *pcVar2 & (uVar8 ^ 0xffffffffffffffff);
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            pcVar2 = obj.rebind_task_mlist + uVar9 * 8;
            Hint_Prefetch(pcVar2,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar5) {
                    *pcVar2 = *pcVar2 & (uVar8 ^ 0xffffffffffffffff);
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            pcVar2 = obj.rebind_task_blist + uVar9 * 8;
            Hint_Prefetch(pcVar2,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar5) {
                    *pcVar2 = *pcVar2 | uVar8;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
        else if (iVar10 == 2) {
            uVar9 = uVar12 >> 6;
            pcVar2 = obj.rebind_task_blist + uVar9 * 8;
            uVar8 = 1L << (arg1 & 0x3fU);
            Hint_Prefetch(pcVar2,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar5) {
                    *pcVar2 = *pcVar2 & (uVar8 ^ 0xffffffffffffffff);
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            pcVar2 = obj.rebind_task_llist + uVar9 * 8;
            Hint_Prefetch(pcVar2,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar5) {
                    *pcVar2 = *pcVar2 & (uVar8 ^ 0xffffffffffffffff);
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            pcVar2 = obj.rebind_task_mlist + uVar9 * 8;
            Hint_Prefetch(pcVar2,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar5) {
                    *pcVar2 = *pcVar2 | uVar8;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
        else {
            uVar9 = uVar12 >> 6;
            pcVar2 = obj.rebind_task_llist + uVar9 * 8;
            uVar8 = 1L << (arg1 & 0x3fU);
            Hint_Prefetch(pcVar2,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar5) {
                    *pcVar2 = *pcVar2 & (uVar8 ^ 0xffffffffffffffff);
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            pcVar2 = obj.rebind_task_mlist + uVar9 * 8;
            Hint_Prefetch(pcVar2,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar5) {
                    *pcVar2 = *pcVar2 & (uVar8 ^ 0xffffffffffffffff);
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            pcVar2 = obj.rebind_task_blist + uVar9 * 8;
            Hint_Prefetch(pcVar2,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar5) {
                    *pcVar2 = *pcVar2 & (uVar8 ^ 0xffffffffffffffff);
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
        if (*0x8001000 != 0) {
            _printk(0x8002e2e,uVar12,uVar11);
        }
        return;
    }
    if (*0x8001000 != 0) {
        _printk(0x800197f,sym.task_pid.aac6a73137e7abde2329e591bee8c57a.cfi_jt,puVar6 + 0xf5,"add ",
                *(uVar11 * 8 + 0x80042c8));
    }
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar3 = *puVar1;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
            *puVar1 = uVar3 - 1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    if (uVar3 != 1) {
        if (0 < uVar3) {
            return;
        }
        refcount_warn_saturate(puVar1,3);
        return;
    }
    DataMemoryBarrier(2,1);
    __put_task_struct(puVar6);
    return;
}


// ===== sym.rebind_task_req @ 0x0800a7a0 (size 704) =====

void sym.rebind_task_req(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint32_t *puVar1;
    char *pcVar2;
    char cVar3;
    bool bVar4;
    code *pcVar5;
    uint uVar6;
    ulong *arg1_00;
    int64_t iVar7;
    ulong uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    ulong *in_x18;
    uint64_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 < 6) {
        if (arg1 != 0) {
            pcVar2 = "unbind";
            if ((arg4 & 1) == 0) {
                pcVar2 = "rebind";
            }
            if (0 < arg2) {
                uVar11 = arg2 & 0xffffffff;
                uVar9 = 0;
                if ((arg4 & 1) == 0) {
                    uVar9 = 4;
                }
                do {
                    __rcu_read_lock();
                    uVar6 = *arg1;
                    arg1_00 = find_task_by_vpid(uVar6);
                    if (arg1_00 == NULL) {
                        __rcu_read_unlock();
                    }
                    else {
                        puVar1 = arg1_00 + 7;
                        Hint_Prefetch(puVar1,2,0,1);
                        do {
                            uVar10 = *puVar1;
                            cVar3 = '\x01';
                            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar4) {
                                *puVar1 = uVar10 + 1;
                                cVar3 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar3 != '\0');
                        if (uVar10 == 0) {
                            uVar8 = 2;
code_r0x0800a97c:
                            refcount_warn_saturate(puVar1,uVar8);
                        }
                        else if ((uVar10 + 1 | uVar10) < 0) {
                            uVar8 = 1;
                            goto code_r0x0800a97c;
                        }
                        if (*0x8001000 != 0) {
                            _printk(0x80027c9,uVar6,arg1_00 + 0xf5,pcVar2,*((arg3 & 0xffffffffU) * 8 + 0x80042c8));
                        }
                        __rcu_read_unlock();
                        iVar7 = get_mi_task_struct(arg1_00);
                        if (iVar7 == 0) {
                            sym.put_task_struct_1(arg1_00);
                        }
                        else {
                            if ((*arg1_00 >> 0x16 & 1) == 0) {
                                uVar8 = *(iVar7 + 0x20);
                                if (((**(iVar7 + 0x28) >> 0x16 & 1) == 0) &&
                                   (*(iVar7 + 0x20) = *(obj.cluster_affinity_cpumask + (arg3 & 0xffffffffU) * 8),
                                   (**(iVar7 + 0x28) >> 0x16 & 1) != 0)) {
                                    if (*0x8001000 != 0) {
    //WARNING: Does not return
                                        pcVar5 = SoftwareBreakpoint(0x800,0x800aa18);
                                        (*pcVar5)();
                                    }
                                    *(iVar7 + 0x20) = uVar8;
                                }
                                *(iVar7 + 0x10) = *(iVar7 + 0x10) & 0xfffffffd;
                                set_cpus_allowed_ptr(arg1_00,iVar7 + 0x18);
                                uVar6 = __sw_hweight64(*(arg1_00 + 0x87));
                                *(arg1_00 + 0x424) = uVar6;
                                *(iVar7 + 0x10) = *(iVar7 + 0x10) & 0xfffffffb | uVar9;
                                Hint_Prefetch(puVar1,2,0,1);
                                do {
                                    uVar10 = *puVar1;
                                    cVar3 = '\x01';
                                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                                    if (bVar4) {
                                        *puVar1 = uVar10 - 1;
                                        cVar3 = ExclusiveMonitorsStatus();
                                    }
                                } while (cVar3 != '\0');
                                if (uVar10 != 1) {
code_r0x0800a818:
                                    if (uVar10 < 1) {
                                        refcount_warn_saturate(puVar1,3);
                                    }
                                    goto code_r0x0800a820;
                                }
                                DataMemoryBarrier(2,1);
                            }
                            else {
                                Hint_Prefetch(puVar1,2,0,1);
                                do {
                                    uVar10 = *puVar1;
                                    cVar3 = '\x01';
                                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                                    if (bVar4) {
                                        *puVar1 = uVar10 - 1;
                                        cVar3 = ExclusiveMonitorsStatus();
                                    }
                                } while (cVar3 != '\0');
                                if (uVar10 != 1) goto code_r0x0800a818;
                                DataMemoryBarrier(2,1);
                            }
                            __put_task_struct(arg1_00);
                        }
                    }
code_r0x0800a820:
                    uVar11 = uVar11 - 1;
                    arg1 = arg1 + 4;
                } while (uVar11 != 0);
            }
        }
    }
    else {
        _printk(0x8002342);
    }
    return;
}


// ===== sym.task_pid @ 0x0800aa60 (size 16) =====

ulong sym.task_pid(int64_t arg1)

{
    return *(arg1 + 0x640);
}


// ===== sym.set_clus_affinity_uidlist @ 0x0800aa70 (size 1096) =====

int sym.set_clus_affinity_uidlist(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    bool bVar2;
    bool bVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    ulong uVar10;
    int64_t iVar11;
    code *pcVar12;
    char *pcVar13;
    int64_t iVar14;
    ulong *puVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_58 = *(iVar14 + 0x5e0);
    uStack_5c = 0;
    if (*0x8001000 != 0) {
        iVar16 = sp_el0;
        iVar14 = iVar16 + 0x7a8;
        uVar10 = strlen(iVar14);
        iVar11 = strnstr(iVar14,"PowerKeeper",uVar10);
        if (iVar11 != 0) goto code_r0x0800aafc;
        _printk(0x8003044,iVar14,*(iVar16 + 0x5d8));
        goto code_r0x0800aaf4;
    }
code_r0x0800aafc:
    iVar14 = sp_el0;
    _printk(0x8003044,iVar14 + 0x7a8,*(iVar14 + 0x5d8));
    uVar10 = *arg2;
    iVar8 = strlen(uVar10);
    iVar16 = iVar8;
    iVar14 = strnstr(uVar10,"add_lclus_affinity_uidlist",iVar16);
    if (iVar14 == 0) {
        iVar14 = strnstr(*arg2,"add_mclus_affinity_uidlist",iVar16);
        if (iVar14 != 0) {
            bVar3 = false;
            bVar2 = false;
            iVar14 = 2;
            goto code_r0x0800ac34;
        }
        iVar14 = strnstr(*arg2,"add_bclus_affinity_uidlist",iVar16);
        if (iVar14 != 0) {
            bVar3 = false;
            bVar2 = false;
            iVar14 = 3;
            goto code_r0x0800ac34;
        }
        iVar14 = strnstr(*arg2,"reset_clus_affinity_uidlist",iVar16);
        if (iVar14 != 0) {
            bVar3 = false;
            iVar14 = 0;
            bVar2 = true;
            goto code_r0x0800ac34;
        }
        iVar14 = strnstr(*arg2,"del_lclus_affinity_uidlist",iVar16);
        if (iVar14 != 0) {
            bVar2 = false;
            bVar3 = true;
            iVar14 = 1;
            goto code_r0x0800ac34;
        }
        iVar14 = strnstr(*arg2,"del_mclus_affinity_uidlist",iVar16);
        if (iVar14 != 0) {
            iVar14 = 2;
code_r0x0800ac30:
            bVar2 = false;
            bVar3 = true;
            goto code_r0x0800ac34;
        }
        iVar14 = strnstr(*arg2,"del_bclus_affinity_uidlist",iVar16);
        iVar8 = 0;
        if (iVar14 != 0) {
            iVar14 = 3;
            goto code_r0x0800ac30;
        }
    }
    else {
        bVar3 = false;
        bVar2 = false;
        iVar14 = 1;
code_r0x0800ac34:
        iVar8 = -1;
        iVar16 = arg1;
        do {
            iVar16 = strchr(iVar16 + 1,0x3a);
            iVar8 = iVar8 + 1;
        } while (iVar16 != 0);
        if (iVar8 == 0) {
            iVar8 = sscanf(arg1,0x8002100,&uStack_5c);
            if (iVar8 == 1) {
                if (!bVar2) {
                    if (bVar3) {
                        sym.del_uid_from_list(uStack_5c,iVar14);
                    }
                    else {
                        sym.add_uid_to_list(uStack_5c,iVar14);
                    }
                    goto code_r0x0800aaf4;
                }
                if (uStack_5c == 1) {
code_r0x0800ae78:
                    pcVar12 = obj.cluster_affinity_uid_llist;
                }
                else if (uStack_5c == 3) {
                    pcVar12 = obj.cluster_affinity_uid_blist;
                }
                else {
                    if (uStack_5c != 2) {
                        memset(0x8010938,0,25000);
                        memset(obj.cluster_affinity_uid_mlist,0,25000);
                        goto code_r0x0800ae78;
                    }
                    pcVar12 = obj.cluster_affinity_uid_mlist;
                }
                memset(pcVar12,0,25000);
                goto code_r0x0800aaf4;
            }
code_r0x0800adf0:
            iVar8 = -0x16;
        }
        else {
            iVar7 = strlen(arg1);
            uVar1 = arg1 + iVar7;
            if (bVar3) {
                iVar7 = 0;
                iVar9 = iVar7;
                if (0 < iVar8) {
                    do {
                        iVar9 = sscanf(arg1,0x8001c54,&uStack_5c);
                        if (iVar9 != 1) goto code_r0x0800adf0;
                        sym.del_uid_from_list(uStack_5c,iVar14);
                        _printk(0x8002838,iVar7,uStack_5c);
                        arg1 = strchr(arg1 + 1,0x3a);
                        arg1 = arg1 + 1;
                        iVar9 = iVar7;
                    } while ((arg1 < uVar1) && (iVar7 = iVar7 + 1, iVar9 = iVar8, iVar8 != iVar7));
                }
                if (arg1 < uVar1) {
                    iVar8 = sscanf(arg1,0x8001c54,&uStack_5c);
                    if (iVar8 != 1) goto code_r0x0800adf0;
                    sym.del_uid_from_list(uStack_5c,iVar14);
code_r0x0800ae9c:
                    _printk(0x80034bd,iVar9,uStack_5c);
                }
            }
            else {
                iVar7 = 0;
                iVar9 = iVar7;
                if (0 < iVar8) {
                    do {
                        iVar9 = sscanf(arg1,0x8001c54,&uStack_5c);
                        if (iVar9 != 1) goto code_r0x0800adf0;
                        sym.add_uid_to_list(uStack_5c,iVar14);
                        _printk(0x8002838,iVar7,uStack_5c);
                        arg1 = strchr(arg1 + 1,0x3a);
                        arg1 = arg1 + 1;
                        iVar9 = iVar7;
                    } while ((arg1 < uVar1) && (iVar7 = iVar7 + 1, iVar9 = iVar8, iVar8 != iVar7));
                }
                if (arg1 < uVar1) {
                    iVar8 = sscanf(arg1,0x8001c54,&uStack_5c);
                    if (iVar8 != 1) goto code_r0x0800adf0;
                    sym.add_uid_to_list(uStack_5c,iVar14);
                    goto code_r0x0800ae9c;
                }
            }
code_r0x0800aaf4:
            iVar8 = 0;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_58) {
        return iVar8;
    }
    auVar17 = __stack_chk_fail(iVar8);
    puVar15 = auVar17._8_8_;
    pcVar13 = auVar17._0_8_;
    *extraout_x18 = sym.get_clus_affinity_uidlist;
    if (*0x8001000 != 0) {
        iVar16 = sp_el0;
        iVar14 = iVar16 + 0x7a8;
        uVar10 = strlen(iVar14);
        iVar11 = strnstr(iVar14,"PowerKeeper",uVar10);
        if (iVar11 == 0) {
            _printk(0x8002ae0,iVar14,*(iVar16 + 0x5d8));
            return 0;
        }
    }
    iVar14 = sp_el0;
    _printk(0x8002ae0,iVar14 + 0x7a8,*(iVar14 + 0x5d8));
    uVar10 = *puVar15;
    iVar8 = strlen(uVar10);
    iVar16 = iVar8;
    iVar14 = strnstr(uVar10,"show_lclus_affinity_uidlist",iVar16);
    if (iVar14 == 0) {
        iVar14 = strnstr(*puVar15,"show_mclus_affinity_uidlist",iVar16);
        if (iVar14 == 0) {
            iVar14 = strnstr(*puVar15,"show_bclus_affinity_uidlist",iVar16);
            uVar6 = str.need_show__blm_clus_affinity_uidlist_n._24_8_;
            uVar10 = str.need_show__blm_clus_affinity_uidlist_n._16_8_;
            if (iVar14 == 0) {
                *(pcVar13 + 0x20) = str.need_show__blm_clus_affinity_uidlist_n._32_8_;
                uVar5 = str.need_show__blm_clus_affinity_uidlist_n._8_8_;
                uVar4 = str.need_show__blm_clus_affinity_uidlist_n._0_8_;
                *(pcVar13 + 0x10) = uVar10;
                *(pcVar13 + 0x18) = uVar6;
                *pcVar13 = uVar4;
                *(pcVar13 + 8) = uVar5;
                return 0x27;
            }
            iVar8 = _find_first_bit(0x8010938,200000);
            if (iVar8 < 200000) {
                iVar7 = 0;
                do {
                    iVar9 = snprintf(pcVar13 + iVar7,0x1000 - iVar7,0x8001aed,iVar8);
                    iVar7 = iVar9 + iVar7;
                    iVar8 = _find_next_bit(0x8010938,0,200000,iVar8 + 1,0,0);
                } while (iVar8 < 200000);
                goto code_r0x0800b15c;
            }
        }
        else {
            iVar8 = _find_first_bit(obj.cluster_affinity_uid_mlist,200000);
            if (iVar8 < 200000) {
                iVar7 = 0;
                do {
                    iVar9 = snprintf(pcVar13 + iVar7,0x1000 - iVar7,0x8001aed,iVar8);
                    iVar7 = iVar9 + iVar7;
                    iVar8 = _find_next_bit(obj.cluster_affinity_uid_mlist,0,200000,iVar8 + 1,0,0);
                } while (iVar8 < 200000);
                goto code_r0x0800b15c;
            }
        }
    }
    else {
        iVar8 = _find_first_bit(0x800a790,200000);
        if (iVar8 < 200000) {
            iVar7 = 0;
            do {
                iVar9 = snprintf(pcVar13 + iVar7,0x1000 - iVar7,0x8001aed,iVar8);
                iVar7 = iVar9 + iVar7;
                iVar8 = _find_next_bit(0x800a790,0,200000,iVar8 + 1,0,0);
            } while (iVar8 < 200000);
            goto code_r0x0800b15c;
        }
    }
    iVar7 = 0;
code_r0x0800b15c:
    iVar8 = snprintf(pcVar13 + iVar7,0x1000 - iVar7,0x8002f5b);
    return iVar8 + iVar7;
}


// ===== sym.get_clus_affinity_uidlist @ 0x0800aeb8 (size 784) =====

int sym.get_clus_affinity_uidlist(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t iVar9;
    int iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 != 0) {
        iVar9 = sp_el0;
        iVar8 = iVar9 + 0x7a8;
        uVar6 = strlen(iVar8);
        iVar7 = strnstr(iVar8,"PowerKeeper",uVar6);
        if (iVar7 == 0) {
            _printk(0x8002ae0,iVar8,*(iVar9 + 0x5d8));
            return 0;
        }
    }
    iVar8 = sp_el0;
    _printk(0x8002ae0,iVar8 + 0x7a8,*(iVar8 + 0x5d8));
    uVar6 = *arg2;
    iVar4 = strlen(uVar6);
    iVar9 = iVar4;
    iVar8 = strnstr(uVar6,"show_lclus_affinity_uidlist",iVar9);
    if (iVar8 == 0) {
        iVar8 = strnstr(*arg2,"show_mclus_affinity_uidlist",iVar9);
        if (iVar8 == 0) {
            iVar8 = strnstr(*arg2,"show_bclus_affinity_uidlist",iVar9);
            uVar3 = str.need_show__blm_clus_affinity_uidlist_n._24_8_;
            uVar6 = str.need_show__blm_clus_affinity_uidlist_n._16_8_;
            if (iVar8 == 0) {
                *(arg1 + 0x20) = str.need_show__blm_clus_affinity_uidlist_n._32_8_;
                uVar2 = str.need_show__blm_clus_affinity_uidlist_n._8_8_;
                uVar1 = str.need_show__blm_clus_affinity_uidlist_n._0_8_;
                *(arg1 + 0x10) = uVar6;
                *(arg1 + 0x18) = uVar3;
                *arg1 = uVar1;
                *(arg1 + 8) = uVar2;
                return 0x27;
            }
            iVar4 = _find_first_bit(0x8010938,200000);
            if (iVar4 < 200000) {
                iVar10 = 0;
                do {
                    iVar5 = snprintf(arg1 + iVar10,0x1000 - iVar10,0x8001aed,iVar4);
                    iVar10 = iVar5 + iVar10;
                    iVar4 = _find_next_bit(0x8010938,0,200000,iVar4 + 1,0,0);
                } while (iVar4 < 200000);
                goto code_r0x0800b15c;
            }
        }
        else {
            iVar4 = _find_first_bit(obj.cluster_affinity_uid_mlist,200000);
            if (iVar4 < 200000) {
                iVar10 = 0;
                do {
                    iVar5 = snprintf(arg1 + iVar10,0x1000 - iVar10,0x8001aed,iVar4);
                    iVar10 = iVar5 + iVar10;
                    iVar4 = _find_next_bit(obj.cluster_affinity_uid_mlist,0,200000,iVar4 + 1,0,0);
                } while (iVar4 < 200000);
                goto code_r0x0800b15c;
            }
        }
    }
    else {
        iVar4 = _find_first_bit(0x800a790,200000);
        if (iVar4 < 200000) {
            iVar10 = 0;
            do {
                iVar5 = snprintf(arg1 + iVar10,0x1000 - iVar10,0x8001aed,iVar4);
                iVar10 = iVar5 + iVar10;
                iVar4 = _find_next_bit(0x800a790,0,200000,iVar4 + 1,0,0);
            } while (iVar4 < 200000);
            goto code_r0x0800b15c;
        }
    }
    iVar10 = 0;
code_r0x0800b15c:
    iVar4 = snprintf(arg1 + iVar10,0x1000 - iVar10,0x8002f5b);
    return iVar4 + iVar10;
}


// ===== sym.del_uid_from_list @ 0x0800b1c8 (size 592) =====

void sym.del_uid_from_list(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    uint64_t *puVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    int iVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = arg1 & 0xffffffff;
    if (arg1 < 200000) {
        iVar6 = arg2;
        if (iVar6 == 1) {
            puVar2 = (uVar5 >> 3 & 0x1ffffff8) + 0x800a790;
            Hint_Prefetch(puVar2,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar4) {
                    *puVar2 = *puVar2 & (1L << (arg1 & 0x3fU) ^ 0xffffffffffffffffU);
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
        else if (iVar6 == 3) {
            puVar2 = (uVar5 >> 3 & 0x1ffffff8) + 0x8010938;
            Hint_Prefetch(puVar2,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar4) {
                    *puVar2 = *puVar2 & (1L << (arg1 & 0x3fU) ^ 0xffffffffffffffffU);
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
        else if (iVar6 == 2) {
            pcVar1 = obj.cluster_affinity_uid_mlist + (uVar5 >> 3 & 0x1ffffff8);
            Hint_Prefetch(pcVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(pcVar1,0x10);
                if (bVar4) {
                    *pcVar1 = *pcVar1 & (1L << (arg1 & 0x3fU) ^ 0xffffffffffffffffU);
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
        else {
            uVar5 = uVar5 >> 6;
            puVar2 = uVar5 * 8 + 0x8010938;
            uVar7 = 1L << (arg1 & 0x3fU);
            Hint_Prefetch(puVar2,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar4) {
                    *puVar2 = *puVar2 & (uVar7 ^ 0xffffffffffffffff);
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            pcVar1 = obj.cluster_affinity_uid_mlist + uVar5 * 8;
            Hint_Prefetch(pcVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(pcVar1,0x10);
                if (bVar4) {
                    *pcVar1 = *pcVar1 & (uVar7 ^ 0xffffffffffffffff);
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            puVar2 = uVar5 * 8 + 0x800a790;
            Hint_Prefetch(puVar2,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar4) {
                    *puVar2 = *puVar2 & (uVar7 ^ 0xffffffffffffffff);
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
        if (*0x8001000 != 0) {
            _printk(0x8002abc);
        }
    }
    else if (*0x8001000 != 0) {
        _printk(0x8003527);
    }
    return;
}


// ===== sym.add_uid_to_list @ 0x0800b418 (size 1004) =====

void sym.add_uid_to_list(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    code *pcVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    uint64_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar9 = arg1 & 0xffffffff;
    if (arg1 < 200000) {
        iVar5 = arg2;
        iVar6 = find_user(uVar9);
        if (iVar6 != 0) {
            uVar7 = is_32B_user(uVar9);
            if ((uVar7 & 1) == 0) {
                uVar7 = uVar9 >> 6;
                if (iVar5 == 1) {
                    pcVar2 = obj.cluster_affinity_uid_mlist + uVar7 * 8;
                    uVar8 = 1L << (arg1 & 0x3fU);
                    Hint_Prefetch(pcVar2,2,0,1);
                    do {
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(pcVar2,0x10);
                        if (bVar4) {
                            *pcVar2 = *pcVar2 & (uVar8 ^ 0xffffffffffffffff);
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    puVar1 = uVar7 * 8 + 0x8010938;
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                            *puVar1 = *puVar1 & (uVar8 ^ 0xffffffffffffffff);
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    puVar1 = uVar7 * 8 + 0x800a790;
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                            *puVar1 = *puVar1 | uVar8;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                }
                else if (iVar5 == 3) {
                    puVar1 = uVar7 * 8 + 0x800a790;
                    uVar8 = 1L << (arg1 & 0x3fU);
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                            *puVar1 = *puVar1 & (uVar8 ^ 0xffffffffffffffff);
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    pcVar2 = obj.cluster_affinity_uid_mlist + uVar7 * 8;
                    Hint_Prefetch(pcVar2,2,0,1);
                    do {
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(pcVar2,0x10);
                        if (bVar4) {
                            *pcVar2 = *pcVar2 & (uVar8 ^ 0xffffffffffffffff);
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    puVar1 = uVar7 * 8 + 0x8010938;
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                            *puVar1 = *puVar1 | uVar8;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                }
                else if (iVar5 == 2) {
                    puVar1 = uVar7 * 8 + 0x800a790;
                    uVar8 = 1L << (arg1 & 0x3fU);
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                            *puVar1 = *puVar1 & (uVar8 ^ 0xffffffffffffffff);
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    puVar1 = uVar7 * 8 + 0x8010938;
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                            *puVar1 = *puVar1 & (uVar8 ^ 0xffffffffffffffff);
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    pcVar2 = obj.cluster_affinity_uid_mlist + uVar7 * 8;
                    Hint_Prefetch(pcVar2,2,0,1);
                    do {
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(pcVar2,0x10);
                        if (bVar4) {
                            *pcVar2 = *pcVar2 | uVar8;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                }
                else {
                    pcVar2 = obj.cluster_affinity_uid_mlist + uVar7 * 8;
                    uVar8 = 1L << (arg1 & 0x3fU);
                    Hint_Prefetch(pcVar2,2,0,1);
                    do {
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(pcVar2,0x10);
                        if (bVar4) {
                            *pcVar2 = *pcVar2 & (uVar8 ^ 0xffffffffffffffff);
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    puVar1 = uVar7 * 8 + 0x8010938;
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                            *puVar1 = *puVar1 & (uVar8 ^ 0xffffffffffffffff);
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    puVar1 = uVar7 * 8 + 0x800a790;
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                            *puVar1 = *puVar1 & (uVar8 ^ 0xffffffffffffffff);
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                }
                if (*0x8001000 != 0) {
                    _printk(0x80037e7,uVar9,arg2 & 0xffffffff);
                }
            }
            free_uid(iVar6);
        }
    }
    else if (*0x8001000 != 0) {
        _printk(0x8003527,uVar9);
    }
    return;
}


// ===== sym.uid_type @ 0x0800b804 (size 132) =====

uint sym.uid_type(int64_t arg1)

{
    uint uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    uVar2 = arg1 >> 6 & 0x3ffffff;
    if (0xc34 < uVar2) {
        return 0;
    }
    uVar3 = 1L << (arg1 & 0x3fU);
    if ((*(obj.cluster_affinity_uid_mlist + uVar2 * 8) & uVar3) != 0) {
        return 2;
    }
    if ((*(uVar2 * 8 + 0x800a790) & uVar3) != 0) {
        return 1;
    }
    uVar1 = 0;
    if ((*(uVar2 * 8 + 0x8010938) & uVar3) != 0) {
        uVar1 = 3;
    }
    return uVar1;
}


// ===== sym.proc_viptask_cpus_set @ 0x0800b888 (size 288) =====

uint sym.proc_viptask_cpus_set(void)

{
    code *pcVar1;
    char cVar2;
    bool bVar3;
    uint uVar4;
    uint32_t uVar5;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    ulong *in_x18;
    uint64_t uVar6;
    uint32_t *unaff_x21;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = proc_dointvec();
    *0x8001000 = 0;
    uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *unaff_x21 = extraout_w8;
    if ((uVar5 < extraout_w8) && (uVar5 < *0x8001000)) {
        do {
            uVar6 = uVar5;
            pcVar1 = obj.viptask_use_cpumask + (uVar5 >> 3 & 0x1ffffff8);
            Hint_Prefetch(pcVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(pcVar1,0x10);
                if (bVar3) {
                    *pcVar1 = *pcVar1 | 1L << (uVar6 & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            _printk(0x80039dc,uVar6);
            uVar5 = cpumask_next(uVar6,__cpu_possible_mask);
            *0x80039dc = extraout_w8_00;
        } while ((uVar5 < extraout_w8_00) && (uVar5 < *0x8001000));
    }
    return uVar4;
}


// ===== sym.register_corectl_boost_hook @ 0x0800b9a8 (size 20) =====

void sym.register_corectl_boost_hook(int64_t arg1)

{
    *0x8016000 = arg1;
    return;
}


// ===== sym.register_update_perflock_freq_hook @ 0x0800b9bc (size 20) =====

void sym.register_update_perflock_freq_hook(int64_t arg1)

{
    *0x8016000 = arg1;
    return;
}


// ===== sym.register_get_perflock_last_freqs_hook @ 0x0800b9d0 (size 20) =====

void sym.register_get_perflock_last_freqs_hook(int64_t arg1)

{
    *0x8016000 = arg1;
    return;
}


// ===== sym.get_frame_boost_end @ 0x0800b9e4 (size 24) =====

void sym.get_frame_boost_end(int64_t arg1)

{
    *arg1 = *0x8001000;
    return;
}


// ===== sym.cpu_to_cluster @ 0x0800b9fc (size 44) =====

uint32_t sym.cpu_to_cluster(void)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = get_cluster_type();
    uVar1 = 0;
    if (uVar2 < 4) {
        uVar1 = uVar2;
    }
    return uVar1;
}


// ===== sym.del_cluster @ 0x0800ba28 (size 108) =====

void sym.del_cluster(void)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _obj.fboost_exe_mode = 0;
    *0x8016b34 = 1;
    uVar1 = _raw_spin_lock_irqsave(obj.fboost_pending_lock);
    obj.fboost_pending = 0x1;
    _raw_spin_unlock_irqrestore(obj.fboost_pending_lock,uVar1);
    wake_up_process(*0x8016000);
    return;
}


// ===== sym.boost_cluster @ 0x0800ba94 (size 368) =====

void sym.boost_cluster(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    code *pcVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (3 < arg1) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x800bc04);
        (*pcVar2)();
    }
    if (*0x8001000 == 0) {
        return;
    }
    if (arg1 < 3) {
        uVar5 = arg1;
        *(obj.bcluster_stat + uVar5 * 8) = arg2;
        if ((uVar5 << 3 | 4) < 0x19) {
            puVar1 = uVar5 * 8 + 0x8016b3c;
            *puVar1 = arg3;
            if (arg4 == 0) {
                if (*0x8016b34 == 0) {
                    *0x8016000 = 1;
                }
                uVar4 = _raw_spin_lock_irqsave(obj.fboost_pending_lock);
                obj.fboost_pending = 0x1;
                _raw_spin_unlock_irqrestore(obj.fboost_pending_lock,uVar4);
                wake_up_process(CONCAT44(*0x8016004,*0x8016000));
                return;
            }
            uVar3 = hrtimer_active(obj.boost_timers + uVar5 * 0x58);
            if ((uVar3 & 1) != 0) {
                return;
            }
            if ((uVar5 * 0x58 < 0xbd) &&
               (*(uVar5 * 0x58 + 0x8016bbc) = *(obj.bcluster_stat + uVar5 * 8), uVar5 * 0x58 < 0xb9)) {
                *(uVar5 * 0x58 + 0x8016bc0) = *puVar1;
                if (*0x8016b34 == 0) {
                    *0x8016000 = 1;
                }
                hrtimer_start_range_ns(obj.boost_timers + uVar5 * 0x58,arg4 * 1000000,0,1);
                return;
            }
        }
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(1,0x800bc00);
    (*pcVar2)();
}


// ===== sym.restore_boost_cluster @ 0x0800bc0c (size 100) =====

void sym.restore_boost_cluster(uint32_t arg1)

{
    code *pcVar1;
    uint64_t uVar2;
    
    if (3 < arg1) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x800bc70);
        (*pcVar1)();
    }
    if (*0x8001000 != 0) {
        uVar2 = arg1;
        if ((0x18 < (uVar2 << 3 | 4)) || (*(uVar2 * 8 + 0x8016b3c) = 2, 2 < arg1)) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(1,0x800bc6c);
            (*pcVar1)();
        }
        *(obj.bcluster_stat + uVar2 * 8) = 1;
    }
    return;
}


// ===== sym.get_frmboost_sta_hook @ 0x0800bc70 (size 20) =====

code * sym.get_frmboost_sta_hook(void)

{
    return obj.cluster_states;
}


// ===== sym.oem_rvh_try_to_wake_up_success @ 0x0800bc84 (size 120) =====

uint32_t sym.oem_rvh_try_to_wake_up_success(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = get_cluster_type(*(arg1 + 0x58));
    uVar1 = 0;
    if (uVar3 < 4) {
        uVar1 = uVar3;
    }
    uVar3 = sym.metis_xxx_task.llvm.15631448280779817747(arg1,0x100);
    if ((uVar3 & 1) != 0) {
        if (2 < uVar1) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x800bcfc);
            (*pcVar2)();
        }
        *(obj.perf_min_freq + uVar1 * 4) = *(obj.user_min_freq + uVar1 * 4);
    }
    return uVar3 & 1;
}


// ===== sym.oem_should_update_freq @ 0x0800bcfc (size 96) =====

bool sym.oem_should_update_freq(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = get_cluster_type(*(arg1 + 0x1c));
    uVar1 = 0;
    if (uVar3 < 4) {
        uVar1 = uVar3;
    }
    if (uVar1 < 3) {
        return *(arg1 + 0x3c) < *(obj.perf_min_freq + uVar1 * 4);
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800bd5c);
    (*pcVar2)();
}


// ===== sym.metis_fboost_init @ 0x0800bd5c (size 1028) =====

uint64_t sym.metis_fboost_init(void)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    uint32_t *puVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong uVar8;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint32_t extraout_w8_01;
    uint32_t extraout_w8_02;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar9;
    uint32_t *unaff_x21;
    ulong unaff_x30;
    uint auStack_70 [2];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    auStack_70[0] = 99;
    *0x8016000 = *0x8016004 << 0x20;
    uVar4 = kthread_create_on_node
                      (sym.fboost_run.b1e49afbd87934ed80dab30c248d2d24.cfi_jt,0,0xffffffff,"fboost_thread");
    uVar9 = uVar4;
    if (0xfffffffffffff000 < uVar4) goto code_r0x0800bdd0;
    wake_up_process(uVar4);
    *0x8016000 = uVar4;
    sched_setscheduler_nocheck(uVar4,1,auStack_70);
    *0x8016000 = _update_rq_clock;
    uVar2 = cpumask_next(0xffffffff,__cpu_present_mask);
    *unaff_x21 = extraout_w8;
    if (uVar2 < extraout_w8) {
        while( true ) {
            uVar9 = uVar2;
            puVar5 = cpufreq_cpu_get(uVar9);
            if (puVar5 == NULL) break;
            if (0x1f < uVar2) goto code_r0x0800c158;
            iVar3 = freq_qos_add_request(puVar5 + 0x28,obj.metis_req_min + *(__per_cpu_offset + uVar9 * 8),1,0);
            unaff_x21 = puVar5;
            if (iVar3 < 0) {
                uVar6 = 0x8001d9d;
code_r0x0800bf40:
                _printk(uVar6,"metis_freq_qos_request_init_first",iVar3);
                cpufreq_cpu_put(puVar5);
                goto code_r0x0800bf54;
            }
            iVar3 = freq_qos_add_request
                              (puVar5 + 0x28,obj.metis_req_max + *(__per_cpu_offset + uVar2 * 8),2,0x7fffffff);
            if (iVar3 < 0) {
                uVar6 = 0x8001c57;
                goto code_r0x0800bf40;
            }
            cpufreq_cpu_put(puVar5);
            uVar2 = cpumask_next(uVar2,__cpu_present_mask);
            *puVar5 = extraout_w8_00;
            if (extraout_w8_00 <= uVar2) goto code_r0x0800c000;
        }
        _printk(0x8002165,"metis_freq_qos_request_init_first",uVar9);
code_r0x0800bf54:
        uVar2 = cpumask_next(0xffffffff,__cpu_present_mask);
        *unaff_x21 = extraout_w8_01;
        if (uVar2 < extraout_w8_01) {
            do {
                puVar5 = uVar2;
                if (0x1f < uVar2) {
code_r0x0800c158:
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x800c15c);
                    (*pcVar1)();
                }
                iVar7 = *(__per_cpu_offset + puVar5 * 8);
                if (((iVar7 != -0x8014d00) && (*(iVar7 + 0x8014d30) != 0)) &&
                   (*(iVar7 + 0x8014d30) < 0xfffffffffffff001)) {
                    freq_qos_remove_request();
                    iVar7 = *(__per_cpu_offset + puVar5 * 8);
                    unaff_x21 = puVar5;
                }
                if (((iVar7 != -0x8014d48) && (*(iVar7 + 0x8014d78) != 0)) &&
                   (*(iVar7 + 0x8014d78) < 0xfffffffffffff001)) {
                    freq_qos_remove_request();
                }
                uVar2 = cpumask_next(puVar5,__cpu_present_mask);
                *unaff_x21 = extraout_w8_02;
            } while (uVar2 < extraout_w8_02);
        }
        uVar2 = cpufreq_register_notifier(reloc.metis_freq_qos_request_init.b1e49afbd87934ed80dab30c248d2d24.cfi_jt,1);
        if (uVar2 == 0) goto code_r0x0800c000;
        uVar6 = 0x80029bc;
        uVar8 = 0x2d3;
    }
    else {
code_r0x0800c000:
        hrtimer_init(obj.boost_timers,1,1);
        *0x8016b98 = sym.queue_for_boost_cluster.b1e49afbd87934ed80dab30c248d2d24.cfi_jt;
        *0x8016bb8 = 0;
        _obj.rem_cluster_works = 0xfffffffe0;
        *0x8016c80 = 0x8016c80;
        *0x8016c88 = 0x8016c80;
        *0x8016c90 = sym.do_adjust_freq_delayed.b1e49afbd87934ed80dab30c248d2d24.cfi_jt;
        init_timer_key(0x8016ca8,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
        *0x8016d00 = 0;
        hrtimer_init(0x8016bc8,1,1);
        *0x8016bf0 = sym.queue_for_boost_cluster.b1e49afbd87934ed80dab30c248d2d24.cfi_jt;
        *0x8016c10 = 1;
        *0x8016d08 = 0xfffffffe0;
        *0x8016d10 = 0x8016d10;
        *0x8016d18 = 0x8016d10;
        *0x8016d20 = sym.do_adjust_freq_delayed.b1e49afbd87934ed80dab30c248d2d24.cfi_jt;
        init_timer_key(0x8016d38,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
        *0x8016d90 = 1;
        hrtimer_init(0x8016c20,1,1);
        *0x8016c48 = sym.queue_for_boost_cluster.b1e49afbd87934ed80dab30c248d2d24.cfi_jt;
        *0x8016d98 = 0xfffffffe0;
        *0x8016c68 = 2;
        *0x8016da0 = 0x8016da0;
        *0x8016da8 = 0x8016da0;
        *0x8016db0 = sym.do_adjust_freq_delayed.b1e49afbd87934ed80dab30c248d2d24.cfi_jt;
        init_timer_key(0x8016dc8,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
        *0x8016e20 = 2;
        *0x8016000 = alloc_workqueue("metis_wq",0x10,0);
        uVar8 = 0x2e9;
        uVar2 = 0xfffffff2;
        if (*0x8016000 != 0) {
            uVar2 = 0;
        }
        uVar6 = 0x800308a;
    }
    uVar4 = uVar2;
    _printk(uVar6,uVar8);
    uVar9 = *0x8016000;
code_r0x0800bdd0:
    *0x8016000 = uVar9;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return uVar4 & 0xffffffff;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.queue_for_boost_cluster;
    if (*0x8016000 != 0) {
        iVar7 = ktime_get();
        _printk(0x8001b02,0x146,iVar7 / 1000);
    }
    if (_obj.fboost_exe_mode + *0x8016b34 != 0) {
        uVar6 = _raw_spin_lock_irqsave(obj.fboost_pending_lock);
        obj.fboost_pending = 0x1;
        _raw_spin_unlock_irqrestore(obj.fboost_pending_lock,uVar6);
        wake_up_process(*0x8016000);
    }
    return 0;
}


// ===== sym.queue_for_boost_cluster @ 0x0800c160 (size 188) =====

ulong sym.queue_for_boost_cluster(void)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8016000 != 0) {
        iVar2 = ktime_get();
        _printk(0x8001b02,0x146,iVar2 / 1000);
    }
    if (_obj.fboost_exe_mode + *0x8016b34 != 0) {
        uVar1 = _raw_spin_lock_irqsave(obj.fboost_pending_lock);
        obj.fboost_pending = 0x1;
        _raw_spin_unlock_irqrestore(obj.fboost_pending_lock,uVar1);
        wake_up_process(CONCAT44(*0x8016004,*0x8016000));
    }
    return 0;
}


// ===== sym.do_adjust_freq_delayed @ 0x0800c224 (size 248) =====

void sym.do_adjust_freq_delayed(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    int64_t iVar4;
    ulong *in_x18;
    uint64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0x88);
    arg1_00 = uVar1;
    if (*0x8016000 != 0) {
        if (2 < uVar1) goto code_r0x0800c318;
        *(obj.cluster_states + arg1_00 * 4) = 0;
        sym.reset_perflock_req(0);
    }
    sym.metis_update_policy_online(arg1_00,0,0xffffffff);
    pcVar3 = CONCAT44(*0x8016004,*0x8016000);
    if (pcVar3 != NULL) {
        __cfi_slowpath_diag(0x9c2ff6c65e783d8c,pcVar3,0x80018c0);
        (*pcVar3)(arg1_00,0);
    }
    iVar2 = *0x8016000;
    if (uVar1 < 3) {
        *(obj.thermal_limit_freq + arg1_00 * 8) = 0xffffffffffffffff;
        if (iVar2 != 0) {
            iVar4 = ktime_get();
            _printk(0x80036a2,0x186,iVar4 / 1000);
        }
        return;
    }
code_r0x0800c318:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x800c31c);
    (*pcVar3)();
}


// ===== sym.metis_fboost_exit @ 0x0800c31c (size 284) =====

void sym.metis_fboost_exit(void)

{
    code *pcVar1;
    uint32_t uVar2;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    int64_t iVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    flush_workqueue(*0x8016000);
    destroy_workqueue(*0x8016000);
    uVar2 = cpumask_next(0xffffffff,__cpu_present_mask);
    _seq_read = extraout_w8;
    if (uVar2 < extraout_w8) {
        do {
            uVar4 = uVar2;
            if (0x1f < uVar2) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x800c438);
                (*pcVar1)();
            }
            iVar3 = *(__per_cpu_offset + uVar4 * 8);
            if (((iVar3 != -0x8014d00) && (*(iVar3 + 0x8014d30) != 0)) && (*(iVar3 + 0x8014d30) < 0xfffffffffffff001)) {
                freq_qos_remove_request();
                iVar3 = *(__per_cpu_offset + uVar4 * 8);
            }
            if (((iVar3 != -0x8014d48) && (*(iVar3 + 0x8014d78) != 0)) && (*(iVar3 + 0x8014d78) < 0xfffffffffffff001)) {
                freq_qos_remove_request();
            }
            uVar2 = cpumask_next(uVar4,__cpu_present_mask);
            _seq_read = extraout_w8_00;
        } while (uVar2 < extraout_w8_00);
    }
    _printk(0x8002f5d,0x2f5);
    return;
}


// ===== sym.reset_perflock_req @ 0x0800c438 (size 724) =====

void sym.reset_perflock_req(int64_t arg1)

{
    code *pcVar1;
    bool bVar2;
    int *piVar3;
    int64_t iVar4;
    ulong *in_x18;
    int iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *0x8016000;
    if (*0x8016000 != sym.__typeid__ZTSFPivE_global_addr) {
        __cfi_slowpath_diag(0x991848e5f2099cc4,*0x8016000,0x8001820);
    }
    piVar3 = (*pcVar1)();
    pcVar1 = *0x8016000;
    iVar5 = *piVar3;
    if (((iVar5 != 0) || (piVar3[1] != 0)) || (piVar3[2] != 0)) {
        if ((arg1 & 1U) == 0) {
            do {
                pcVar1 = *0x8016000;
                __cfi_slowpath_diag(0xfb7f1def4717b486,*0x8016000,0x8001860);
                (*pcVar1)(0,iVar5);
                pcVar1 = *0x8016000;
                if (*0x8016000 != sym.__typeid__ZTSFPivE_global_addr) {
                    __cfi_slowpath_diag(0x991848e5f2099cc4,*0x8016000,0x8001880);
                }
                piVar3 = (*pcVar1)();
                bVar2 = iVar5 != *piVar3;
                iVar5 = *piVar3;
            } while (bVar2);
            iVar5 = piVar3[1];
            do {
                pcVar1 = *0x8016000;
                __cfi_slowpath_diag(0xfb7f1def4717b486,*0x8016000,0x8001860);
                (*pcVar1)(1,iVar5);
                pcVar1 = *0x8016000;
                if (*0x8016000 != sym.__typeid__ZTSFPivE_global_addr) {
                    __cfi_slowpath_diag(0x991848e5f2099cc4,*0x8016000,0x8001880);
                }
                iVar4 = (*pcVar1)();
                bVar2 = iVar5 != *(iVar4 + 4);
                iVar5 = *(iVar4 + 4);
            } while (bVar2);
            iVar5 = *(iVar4 + 8);
            do {
                pcVar1 = *0x8016000;
                __cfi_slowpath_diag(0xfb7f1def4717b486,*0x8016000,0x8001860);
                (*pcVar1)(2,iVar5);
                pcVar1 = *0x8016000;
                if (*0x8016000 != sym.__typeid__ZTSFPivE_global_addr) {
                    __cfi_slowpath_diag(0x991848e5f2099cc4,*0x8016000,0x8001880);
                }
                iVar4 = (*pcVar1)();
                bVar2 = iVar5 != *(iVar4 + 8);
                iVar5 = *(iVar4 + 8);
            } while (bVar2);
        }
        else {
            __cfi_slowpath_diag(0xfb7f1def4717b486,*0x8016000,0x8001840);
            (*pcVar1)(0,0);
            pcVar1 = *0x8016000;
            __cfi_slowpath_diag(0xfb7f1def4717b486,*0x8016000,0x8001840);
            (*pcVar1)(1,0);
            pcVar1 = *0x8016000;
            __cfi_slowpath_diag(0xfb7f1def4717b486,*0x8016000,0x8001840);
            (*pcVar1)(2,0);
        }
    }
    return;
}


// ===== sym.metis_update_policy_online @ 0x0800c70c (size 448) =====

void sym.metis_update_policy_online(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    code *pcVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    ulong uVar8;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint32_t uVar9;
    ulong *in_x18;
    int iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cpus_read_lock();
    iVar10 = 0;
    uVar4 = 0xffffffff;
    do {
        do {
            uVar4 = cpumask_next(uVar4,__cpu_online_mask);
            *(arg3 & 0xffffffffU) = extraout_w8;
            if (extraout_w8 <= uVar4) {
code_r0x0800c84c:
                cpus_read_unlock();
                return;
            }
            puVar6 = sym.cpu_coregroup_mask(uVar4);
            *(arg3 & 0xffffffffU) = extraout_w8_00;
            uVar1 = *puVar6 & extraout_w8_00;
            uVar2 = (uVar1 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar1 & 0x5555555555555555) << 1;
            uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
            uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
            uVar9 = 0x20;
            if (uVar1 != 0) {
                uVar9 = LZCOUNT((uVar2 >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10) << 0x20);
            }
        } while (uVar4 != uVar9);
        if ((iVar10 == arg1) && (iVar7 = cpufreq_cpu_get(uVar4), iVar7 != 0)) {
            if (*(iVar7 + 0x1c) < 0x20) {
                freq_qos_update_request
                          (obj.metis_req_min + *(__per_cpu_offset + *(iVar7 + 0x1c) * 8),arg2 & 0xffffffffU);
                if (arg3 == 0) {
                    uVar4 = sym.get_metis_limit(*(iVar7 + 0x1c));
                }
                else {
                    uVar4 = 0xffffffff;
                }
                uVar1 = *(iVar7 + 0x28);
                if (uVar4 <= *(iVar7 + 0x28)) {
                    uVar1 = uVar4;
                }
                if (*(iVar7 + 0x1c) < 0x20) {
                    if (uVar1 != 0) {
                        freq_qos_update_request(obj.metis_req_max + *(__per_cpu_offset + *(iVar7 + 0x1c) * 8),uVar1);
                    }
                    if (*0x8016000 != 0) {
                        uVar9 = *(iVar7 + 0x1c);
                        uVar8 = sym.get_metis_limit(uVar9);
                        uVar5 = get_cluster_type(*(iVar7 + 0x1c));
                        uVar4 = 0;
                        if (uVar5 < 4) {
                            uVar4 = uVar5;
                        }
                        if (2 < uVar4) goto code_r0x0800c8c8;
                        _printk("metis_max ...%d %d %d %lu %lu\n",arg2 & 0xffffffffU,uVar1,uVar9,uVar8,
                                *(obj.thermal_limit_freq + uVar4 * 8));
                    }
                    cpufreq_cpu_put(iVar7);
                    cpufreq_update_policy(*(iVar7 + 0x1c));
                    goto code_r0x0800c84c;
                }
            }
code_r0x0800c8c8:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x800c8cc);
            (*pcVar3)();
        }
        iVar10 = iVar10 + 1;
    } while( true );
}


// ===== sym.metis_freq_qos_request_init @ 0x0800c8cc (size 728) =====

int sym.metis_freq_qos_request_init(ulong param_1,int64_t param_2)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    ulong uVar7;
    uint64_t uVar8;
    char *pcVar9;
    ulong *in_x18;
    uint *unaff_x21;
    uint *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0) {
        *0x8016e50 = 0;
        _obj.nb_max_limit = sym.cpufreq_notifier_max.b1e49afbd87934ed80dab30c248d2d24.cfi_jt;
        *0x8016e58 = sym.cpufreq_notifier_max.b1e49afbd87934ed80dab30c248d2d24.cfi_jt;
        *0x8016e70 = 1;
        *0x8016e78 = sym.cpufreq_notifier_max.b1e49afbd87934ed80dab30c248d2d24.cfi_jt;
        *0x8016e90 = 2;
        uVar3 = cpumask_next(0xffffffff,__cpu_present_mask);
        *unaff_x21 = 0x805f000;
        while (uVar3 < 0x805f000) {
            iVar6 = cpufreq_cpu_get(uVar3);
            if (iVar6 == 0) {
                _printk(0x8002165,"metis_freq_qos_request_init",uVar3);
                iVar5 = -0xb;
code_r0x0800cafc:
                uVar3 = cpumask_next(0xffffffff,__cpu_present_mask);
                ___cpu_present_mask = 0x805f000;
                if (0x805efff < uVar3) {
                    ___cpu_present_mask = 0x805f000;
                    return iVar5;
                }
                puVar10 = uVar3;
                while (puVar10 < 0x20) {
                    iVar6 = *(__per_cpu_offset + puVar10 * 8);
                    if (((iVar6 != -0x8014d00) && (*(iVar6 + 0x8014d30) != 0)) &&
                       (*(iVar6 + 0x8014d30) < 0xfffffffffffff001)) {
                        freq_qos_remove_request();
                        iVar6 = *(__per_cpu_offset + puVar10 * 8);
                    }
                    if (((iVar6 != -0x8014d48) && (*(iVar6 + 0x8014d78) != 0)) &&
                       (*(iVar6 + 0x8014d78) < 0xfffffffffffff001)) {
                        freq_qos_remove_request();
                    }
                    uVar3 = cpumask_next(puVar10,__cpu_present_mask);
                    puVar10 = uVar3;
                    *puVar10 = 0x805f000;
                    if (0x805efff < uVar3) {
                        return iVar5;
                    }
                }
code_r0x0800cb9c:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x800cba0);
                (*pcVar2)();
            }
            uVar4 = get_cluster_type(*(iVar6 + 0x1c));
            uVar1 = 0;
            if (uVar4 < 4) {
                uVar1 = uVar4;
            }
            uVar8 = uVar1;
            if (2 < uVar1) goto code_r0x0800cb9c;
            if (0x60 < (uVar8 << 5 | 0x1c)) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(1,0x800cba4);
                (*pcVar2)();
            }
            pcVar9 = uVar8 * 0x20 + 0x8016e54;
            if (*pcVar9 == '\0') {
                *pcVar9 = '\x01';
                freq_qos_add_notifier(iVar6 + 0xa0,2,obj.nb_max_limit + uVar8 * 0x20);
            }
            *0x8016000 = *0x8016000 & (*(iVar6 + 8) ^ 0xffffffff);
            if (0x1f < uVar3) goto code_r0x0800cb9c;
            iVar5 = freq_qos_add_request(iVar6 + 0xa0,obj.metis_req_min + *(__per_cpu_offset + uVar3 * 8),1,0);
            if (iVar5 < 0) {
                uVar7 = 0x8001d9d;
code_r0x0800cae4:
                _printk(uVar7,"metis_freq_qos_request_init",iVar5);
                cpufreq_cpu_put(iVar6);
                goto code_r0x0800cafc;
            }
            iVar5 = freq_qos_add_request
                              (iVar6 + 0xa0,obj.metis_req_max + *(__per_cpu_offset + uVar3 * 8),2,0x7fffffff);
            if (iVar5 < 0) {
                uVar7 = 0x8001c57;
                goto code_r0x0800cae4;
            }
            cpufreq_cpu_put(iVar6);
            uVar3 = cpumask_next(uVar3,__cpu_present_mask);
            ___cpu_present_mask = 0x805f000;
        }
        _printk(0x8003812);
        if (*0x8016000 == 0) {
            queue_work_on(0x20,_raw_spin_rq_unlock,obj.finish_fboost_work);
        }
    }
    return 0;
}


// ===== sym.cpufreq_notifier_max @ 0x0800cba4 (size 44) =====

ulong sym.cpufreq_notifier_max(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    
    if (*(arg1 + 0x18) < 3) {
        *(obj.max_limit_freq + *(arg1 + 0x18) * 8) = arg2;
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800cbd0);
    (*pcVar1)();
}


// ===== sym.finish_fboost_workfn @ 0x0800cbd0 (size 60) =====

void sym.finish_fboost_workfn(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cpufreq_unregister_notifier(reloc.metis_freq_qos_request_init.b1e49afbd87934ed80dab30c248d2d24.cfi_jt,1);
    _printk(0x8002c9d);
    return;
}


// ===== sym.register_game_enqueue_hooks @ 0x0800cc0c (size 60) =====

void sym.register_game_enqueue_hooks(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8016000 = arg1;
    _printk(0x8002b2d,"register_game_enqueue_hooks");
    return;
}


// ===== sym.unregister_game_enqueue_hooks @ 0x0800cc48 (size 20) =====

void sym.unregister_game_enqueue_hooks(void)

{
    *0x8016000 = 0;
    return;
}


// ===== sym.get_mi_fboost_enable @ 0x0800cc5c (size 20) =====

uint sym.get_mi_fboost_enable(void)

{
    return *0x8016000;
}


// ===== sym.metis_preempt_sysprocess @ 0x0800cc70 (size 20) =====

uint sym.metis_preempt_sysprocess(void)

{
    return *0x8001000;
}


// ===== sym.get_mi_link_boost_enable @ 0x0800cc84 (size 88) =====

bool sym.get_mi_link_boost_enable(int64_t arg1)

{
    if (*0x8016000 != 0) {
        return _seq_read - *0x8016000 < 0 || 0 < _obj.mi_sdk_eboost_vip_num;
    }
    return false;
}


// ===== sym.set_mi_vip_task @ 0x0800cce0 (size 332) =====

void sym.set_mi_vip_task(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    uint32_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        iVar4 = get_mi_task_struct();
        if (iVar4 != 0) {
            if (arg2 != 0) {
                *(iVar4 + 0x1b8) = _seq_read + (arg2 & 0xffffffffU);
            }
            iVar3 = *0x8016000;
            uVar5 = arg3;
            if (((uVar5 >> 0xf & 1) != 0) && (-1 < *(iVar4 + 0x11))) {
                Hint_Prefetch(0x8016f18,2,0,1);
                do {
                    cVar1 = '\x01';
                    bVar2 = ExclusiveMonitorPass(0x8016f18,0x10);
                    if (bVar2) {
                        cVar1 = ExclusiveMonitorsStatus();
                        _obj.mi_dynamic_vip_num = _obj.mi_dynamic_vip_num + 1;
                    }
                } while (cVar1 != '\0');
            }
            if (((uVar5 >> 0x11 & 1) != 0) && ((*(iVar4 + 0x12) >> 1 & 1) == 0)) {
                Hint_Prefetch(0x8016f08,2,0,1);
                do {
                    cVar1 = '\x01';
                    bVar2 = ExclusiveMonitorPass(0x8016f08,0x10);
                    if (bVar2) {
                        cVar1 = ExclusiveMonitorsStatus();
                        _obj.mi_sdk_eboost_vip_num = _obj.mi_sdk_eboost_vip_num + 1;
                    }
                } while (cVar1 != '\0');
            }
            *(iVar4 + 0x10) = *(iVar4 + 0x10) | uVar5 | 0x40000;
            if ((iVar3 != 0) && (arg3 == 0x20000)) {
                _printk(0x80025dc,CONCAT44(*0x8016f0c,_obj.mi_sdk_eboost_vip_num),*(arg1 + 0x5d8),arg1 + 0x7a8);
            }
        }
    }
    return;
}


// ===== sym.fas_sched_clock @ 0x0800ce2c (size 64) =====

int64_t sym.fas_sched_clock(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.fas_ktime_suspended == 0x1) {
        iVar1 = *0x8016000;
    }
    else {
        iVar1 = sched_clock();
    }
    return iVar1;
}


// ===== sym.set_mi_dynamic_vip_task @ 0x0800ce6c (size 144) =====

void sym.set_mi_dynamic_vip_task(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        iVar2 = get_mi_task_struct();
        if (iVar2 != 0) {
            *0x8016000 = _seq_read + (arg2 & 0xffffffffU);
            iVar1 = *0x8016000;
            *(iVar2 + 0x1b8) = _seq_read + (arg2 & 0xffffffffU);
            *(iVar2 + 0x10) = *(iVar2 + 0x10) | 0x400;
            if (iVar1 != 0) {
                _printk(0x8001ebd,*(arg1 + 0x5d8),arg1 + 0x7a8);
            }
        }
    }
    return;
}


// ===== sym.clean_mi_dynamic_vip_task @ 0x0800cefc (size 104) =====

void sym.clean_mi_dynamic_vip_task(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && (iVar2 = get_mi_task_struct(), iVar1 = *0x8016000, iVar2 != 0)) {
        *(iVar2 + 0x10) = *(iVar2 + 0x10) & 0xfffffbff;
        if (iVar1 != 0) {
            _printk(0x8002dd2,*(arg1 + 0x5d8),arg1 + 0x7a8);
        }
    }
    return;
}


// ===== sym.mi_dynamic_vip_task @ 0x0800cf64 (size 172) =====

ulong sym.mi_dynamic_vip_task(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = get_mi_task_struct();
    if ((iVar2 != 0) && ((*(iVar2 + 0x11) >> 2 & 1) != 0)) {
        if ((_seq_read - *(iVar2 + 0x1b8) < 0) || (_seq_read - *(iVar2 + 0x198) < 0)) {
            return 1;
        }
        if (arg1 != 0) {
            iVar2 = get_mi_task_struct(arg1);
            iVar1 = *0x8016000;
            if (iVar2 == 0) {
                return 0;
            }
            *(iVar2 + 0x10) = *(iVar2 + 0x10) & 0xfffffbff;
            if (iVar1 != 0) {
                _printk(0x8002dd2,*(arg1 + 0x5d8),arg1 + 0x7a8);
            }
        }
    }
    return 0;
}


// ===== sym.mi_dynamic_vtask_prio_sched_start @ 0x0800d010 (size 196) =====

void sym.mi_dynamic_vtask_prio_sched_start(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2 * 0xfa;
    uVar4 = uVar1 / 1000;
    if (uVar1 / 1000 < 0x33) {
        uVar4 = 0x32;
    }
    if (0x7c < uVar4) {
        uVar4 = 0x7d;
    }
    if ((arg1 != 0) && (iVar3 = get_mi_task_struct(arg1), iVar3 != 0)) {
        *0x8016000 = _seq_read + uVar4;
        iVar2 = *0x8016000;
        *(iVar3 + 0x1b8) = _seq_read + uVar4;
        *(iVar3 + 0x10) = *(iVar3 + 0x10) | 0x400;
        if (iVar2 != 0) {
            _printk(0x8001ebd,*(arg1 + 0x5d8),arg1 + 0x7a8);
        }
    }
    sym.mi_resched_vip_task(arg1);
    return;
}


// ===== sym.mi_dynamic_vtask_prio_sched_end @ 0x0800d0d4 (size 104) =====

void sym.mi_dynamic_vtask_prio_sched_end(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && (iVar2 = get_mi_task_struct(), iVar1 = *0x8016000, iVar2 != 0)) {
        *(iVar2 + 0x10) = *(iVar2 + 0x10) & 0xfffffbff;
        if (iVar1 != 0) {
            _printk(0x8002dd2,*(arg1 + 0x5d8),arg1 + 0x7a8);
        }
    }
    return;
}


// ===== sym.mi_set_fas_req @ 0x0800d13c (size 152) =====

void sym.mi_set_fas_req(int64_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x28);
    if (((*(arg1 + 0x10) >> 6 & 1) == 0) && (uVar1 = sym.mi_vip_task(arg1_00), (uVar1 & 1) == 0)) {
        if (*0x8016000 != 0) {
            _printk(0x8001dd9,arg1_00 + 0x7a8,*(arg1_00 + 0x5d8));
        }
        *(arg1 + 0x10) = *(arg1 + 0x10) | 0x40;
    }
    else if (*0x8016000 != 0) {
        _printk(0x800261f,arg1_00 + 0x7a8,*(arg1_00 + 0x5d8));
    }
    return;
}


// ===== sym.mi_vip_task @ 0x0800d1d4 (size 316) =====

bool sym.mi_vip_task(int64_t arg1)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong *in_x18;
    uint32_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = get_mi_task_struct();
    if (iVar3 == 0) {
        return false;
    }
    iVar4 = get_mi_task_struct(arg1);
    if (((iVar4 == 0) || (*0x8016000 == 0)) || (*(iVar4 + 0xc) != *0x8016000)) {
        uVar7 = 0;
    }
    else {
        uVar7 = *(iVar3 + 0x10) >> 5 & 1;
    }
    iVar3 = get_mi_task_struct(arg1);
    if (iVar3 == 0) {
        uVar5 = 0;
    }
    else {
        uVar5 = *(iVar3 + 0x10) >> 0x11 & 1;
    }
    iVar3 = get_mi_task_struct(arg1);
    if (iVar3 == 0) {
        uVar6 = 0;
    }
    else {
        uVar6 = *(iVar3 + 0x10) >> 0x14 & 1;
    }
    iVar3 = get_mi_task_struct(arg1);
    if ((iVar3 != 0) && ((*(iVar3 + 0x11) >> 2 & 1) != 0)) {
        if ((_seq_read - *(iVar3 + 0x1b8) < 0) || (_seq_read - *(iVar3 + 0x198) < 0)) {
            bVar1 = true;
            goto code_r0x0800d284;
        }
        if (((arg1 != 0) && (iVar3 = get_mi_task_struct(arg1), iVar2 = *0x8016000, iVar3 != 0)) &&
           (*(iVar3 + 0x10) = *(iVar3 + 0x10) & 0xfffffbff, iVar2 != 0)) {
            _printk(0x8002dd2,*(arg1 + 0x5d8),arg1 + 0x7a8);
        }
    }
    bVar1 = false;
code_r0x0800d284:
    return ((uVar5 != 0 || uVar7 != 0) || uVar6 != 0) || bVar1;
}


// ===== sym.mi_clean_fas_req @ 0x0800d310 (size 116) =====

void sym.mi_clean_fas_req(int64_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (-1 < *(arg1 + 0x10)) {
        arg1_00 = *(arg1 + 0x28);
        uVar1 = sym.mi_vip_task(arg1_00);
        if ((uVar1 & 1) != 0) {
            if (*0x8016000 != 0) {
                _printk(0x8001c93,arg1_00 + 0x7a8,*(arg1_00 + 0x5d8));
            }
            *(arg1 + 0x10) = *(arg1 + 0x10) | 0x80;
        }
    }
    return;
}


// ===== sym.mi_preempt_wakeup @ 0x0800d384 (size 200) =====

uint32_t sym.mi_preempt_wakeup(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar4 = 0;
        uVar1 = 0;
        if (arg2 == 0) goto code_r0x0800d428;
code_r0x0800d3e4:
        uVar3 = sym.mi_vip_task(arg2);
        if ((uVar3 & 1) != 0) {
            uVar4 = uVar1 ^ 1;
            goto code_r0x0800d428;
        }
        uVar2 = sym.mi_art_mutex_vip_task(arg2);
        uVar4 = (uVar1 ^ 1) & uVar2;
        if ((((uVar1 ^ 1) & 1) != 0) || ((uVar2 & 1) != 0)) goto code_r0x0800d428;
    }
    else {
        uVar3 = sym.mi_vip_task(arg1);
        if ((uVar3 & 1) == 0) {
            uVar1 = sym.mi_art_mutex_vip_task(arg1);
            if (arg2 != 0) goto code_r0x0800d3e4;
            if ((uVar1 & 1) == 0) {
                uVar4 = 0;
                goto code_r0x0800d428;
            }
        }
        else if (arg2 != 0) {
            uVar1 = 1;
            goto code_r0x0800d3e4;
        }
    }
    uVar4 = 0;
    *arg4 = 1;
    *arg3 = 1;
code_r0x0800d428:
    return uVar4 & 1;
}


// ===== sym.mi_check_preempt_wakeup_hook @ 0x0800d44c (size 268) =====

void sym.mi_check_preempt_wakeup_hook(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    uchar *in_x4;
    uint8_t uVar5;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    uchar *in_stack_00000010;
    
    *in_x18 = unaff_x30;
    sym.prio_sched_check(arg1);
    if (0x1f < *(arg1 + 0xba8)) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x800d558);
        (*pcVar1)();
    }
    uVar5 = 0;
    if (*(*(__per_cpu_offset + *(arg1 + 0xba8) * 8) + 0x8015208) == '\0') goto code_r0x0800d530;
    arg1_00 = *(arg1 + 0xaa0);
    if (arg1_00 == 0) {
        uVar5 = 0;
        uVar2 = 0;
        if (arg2 != 0) goto code_r0x0800d4e4;
        goto code_r0x0800d52c;
    }
    uVar4 = sym.mi_vip_task(arg1_00);
    if ((uVar4 & 1) == 0) {
        uVar2 = sym.mi_art_mutex_vip_task(arg1_00);
        if (arg2 != 0) goto code_r0x0800d4e4;
        if ((uVar2 & 1) == 0) {
            uVar5 = 0;
            goto code_r0x0800d52c;
        }
code_r0x0800d518:
        uVar5 = 0;
        *in_x4 = 1;
        *in_stack_00000010 = 1;
    }
    else {
        if (arg2 == 0) goto code_r0x0800d518;
        uVar2 = 1;
code_r0x0800d4e4:
        uVar4 = sym.mi_vip_task(arg2);
        if ((uVar4 & 1) == 0) {
            uVar3 = sym.mi_art_mutex_vip_task(arg2);
            uVar5 = (uVar2 ^ 1) & uVar3;
            if ((((uVar2 ^ 1) & 1) == 0) && ((uVar3 & 1) == 0)) goto code_r0x0800d518;
        }
        else {
            uVar5 = uVar2 ^ 1;
        }
    }
code_r0x0800d52c:
    uVar5 = uVar5 & 1;
code_r0x0800d530:
    *arg3 = uVar5;
    return;
}


// ===== sym.prio_sched_check @ 0x0800d558 (size 324) =====

void sym.prio_sched_check(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0xba8);
    if (0x1f < uVar1) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x800d690);
        (*pcVar3)();
    }
    iVar5 = *(__per_cpu_offset + uVar1 * 8);
    if (*(iVar5 + 0x8015208) == '\0') {
        iVar6 = *(iVar5 + 0x8015210);
        if (*0x8016000 != 0) {
            _printk(0x80026fc,"prio_sched_check",uVar1);
        }
        if (iVar6 != 0) {
            if (*0x8016000 != 0) {
                if (obj.fas_ktime_suspended == 0x1) {
                    iVar4 = *0x8016000;
                }
                else {
                    iVar4 = sched_clock();
                }
                iVar2 = sp_el0;
                _printk(0x8002bb8,uVar1,iVar4,iVar6,*(iVar2 + 0x5d8),iVar2 + 0x7a8);
            }
            if (obj.fas_ktime_suspended == 0x1) {
                iVar4 = *0x8016000;
            }
            else {
                iVar4 = sched_clock();
            }
            if (999999999 < iVar4 - iVar6) {
                if (*0x8016000 != 0) {
                    _printk(0x8002a2e,uVar1);
                }
                *(iVar5 + 0x8015210) = 0;
                *(iVar5 + 0x8015208) = 1;
            }
        }
    }
    return;
}


// ===== sym.__enqueue_vip_task @ 0x0800d69c (size 368) =====

void sym.__enqueue_vip_task(uint32_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    bool bVar2;
    code *pcVar3;
    bool bVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong *in_x18;
    int64_t iVar11;
    ulong unaff_x30;
    
    if (0x1f < arg1) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x800d80c);
        (*pcVar3)();
    }
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        return;
    }
    iVar11 = *(__per_cpu_offset + arg1 * 8);
    uVar5 = sym.mi_lock_vip_task(arg2);
    if (((uVar5 & 1) == 0) && (uVar5 = sym.mi_binder_vip_task(arg2), (uVar5 & 1) == 0)) {
        uVar5 = sym.mi_art_mutex_vip_task(arg2);
        uVar7 = sym.mi_vip_task(arg2);
        if (((uVar7 & 1) == 0) && ((uVar5 & 1) == 0)) {
            return;
        }
    }
    else {
        sym.mi_vip_task(arg2);
    }
    iVar6 = get_mi_task_struct(arg2);
    if (iVar6 == 0) {
        return;
    }
    if (*(iVar6 + 400) != '\0') {
        return;
    }
    piVar1 = iVar11 + 0x805f30c;
    *(iVar6 + 400) = 1;
    iVar8 = *piVar1;
    if (iVar8 == 0) {
        *(iVar6 + 0x180) = 0;
        *(iVar6 + 0x188) = 0;
        *(iVar6 + 0x178) = 0;
        *piVar1 = iVar6 + 0x178;
    }
    else {
        bVar2 = true;
        do {
            do {
                do {
                    iVar9 = iVar8;
                    iVar8 = iVar9;
                } while (iVar9 == 0x178);
                iVar10 = *(iVar9 + -0x150);
            } while (iVar10 == 0);
            if (iVar10 == -0xc0) {
                *(iVar6 + 400) = 0;
                return;
            }
            bVar4 = *(arg2 + 0x110) - *(iVar10 + 0x110) < 0;
            iVar10 = 8;
            if (bVar4) {
                iVar10 = 0x10;
            }
            bVar2 = bVar4 & bVar2;
            iVar8 = *(iVar9 + iVar10);
        } while (*(iVar9 + iVar10) != 0);
        *(iVar6 + 0x178) = iVar9;
        *(iVar6 + 0x180) = 0;
        *(iVar6 + 0x188) = 0;
        *(iVar9 + iVar10) = iVar6 + 0x178;
        if (!bVar2) goto code_r0x0800d7c0;
    }
    *(iVar11 + 0x805f314) = iVar6 + 0x178;
code_r0x0800d7c0:
    rb_insert_color(iVar6 + 0x178);
    if (*0x8016000 != 0) {
        _printk(0x80023d9,*(arg2 + 0x5d8));
    }
    return;
}


// ===== sym.before_enqueue_vip_task @ 0x0800d80c (size 656) =====

//WARNING: Removing unreachable block (ram,0x0800d948)
//WARNING: Removing unreachable block (ram,0x0800d958)
//WARNING: Removing unreachable block (ram,0x0800d994)

void sym.before_enqueue_vip_task(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t arg1_00;
    int iVar1;
    uint32_t arg1_01;
    code *pcVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = get_mi_task_struct(arg2);
    if (iVar4 != 0) {
        if (obj.fas_ktime_suspended == 0x1) {
            iVar5 = *0x8016000;
        }
        else {
            iVar5 = sched_clock();
        }
        *(iVar4 + 0x1a0) = iVar5;
        pcVar2 = CONCAT44(*0x8016004,*0x8016000);
        *(iVar4 + 10) = 1;
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x176c3ca4ecb522c8,pcVar2,0x80018e0);
            (*pcVar2)(arg2,arg1);
        }
        if (((((*(iVar4 + 0x10) >> 6 & 1) != 0) && (*(iVar4 + 0x28) != 0)) &&
            (iVar5 = get_mi_task_struct(), iVar5 != 0)) && ((*0x8016000 != 0 && (*(iVar5 + 0xc) == *0x8016000)))) {
            if ((*(iVar4 + 0x10) >> 6 & 1) != 0) {
                *(iVar4 + 0x10) = *(iVar4 + 0x10) & 0xffffff9f | 0x20;
            }
            if (*0x8016000 != 0) {
                _printk(0x8002f81,*(*(iVar4 + 0x28) + 0x5d8));
            }
        }
        uVar6 = sym.metis_xxx_task.llvm.15631448280779817747(arg2,0x100);
        if ((uVar6 & 1) != 0) {
            iVar1 = *(arg1 + 0xba8);
            get_cluster_type(*0x8016000);
            get_cluster_type(iVar1);
            *0x8016000 = iVar1;
        }
        iVar5 = get_mi_task_struct(arg2);
        if ((iVar5 != 0) && ((*(iVar5 + 0x12) & 1) != 0)) {
            arg1_01 = *(iVar4 + 0x1c0);
            uVar3 = get_cluster_type(*(arg1 + 0xba8));
            arg1_00 = 0;
            if (uVar3 < 4) {
                arg1_00 = uVar3;
            }
            if (*0x8016000 != 0) {
                _printk(0x8002cc3,*(arg2 + 0x5d8),arg1_01,arg1_00);
            }
            if (arg1_01 != 0xffffffff) {
                sym.restore_boost_cluster(arg1_01);
            }
            if (arg1_01 != arg1_00) {
                sym.boost_cluster(arg1_00,1,1,1);
                *(iVar4 + 0x1c0) = arg1_00;
            }
        }
        if (*0x8016000 != 0) {
            _printk(0x8003797,*(arg2 + 0x5d8));
        }
    }
    return;
}


// ===== sym.in_frame_boost @ 0x0800da9c (size 144) =====

//WARNING: Removing unreachable block (ram,0x0800dacc)
//WARNING: Removing unreachable block (ram,0x0800dadc)

ulong sym.in_frame_boost(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    return 0;
}


// ===== sym.__dequeue_vip_task @ 0x0800db2c (size 192) =====

void sym.__dequeue_vip_task(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    if (arg1 < 0x20) {
        *in_x18 = unaff_x30;
        iVar5 = *(__per_cpu_offset + arg1 * 8);
        iVar3 = get_mi_task_struct_unsafe(arg2);
        if ((iVar3 != 0) && (*(iVar3 + 400) != '\0')) {
            iVar1 = iVar3 + 0x178;
            if (*(iVar5 + 0x805f314) == iVar1) {
                uVar4 = rb_next(iVar1);
                *(iVar5 + 0x805f314) = uVar4;
            }
            rb_erase(iVar1,iVar5 + 0x805f30c);
            *(iVar3 + 400) = 0;
            if (*0x8016000 != 0) {
                _printk(0x80021a1,*(arg2 + 0x5d8));
            }
        }
        return;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800dbec);
    (*pcVar2)();
}


// ===== sym.register_mi_enqueue_entity_hook @ 0x0800dbec (size 20) =====

void sym.register_mi_enqueue_entity_hook(int64_t arg1)

{
    *0x8016000 = arg1;
    return;
}


// ===== sym.unregister_mi_enqueue_entity_hook @ 0x0800dc00 (size 20) =====

void sym.unregister_mi_enqueue_entity_hook(void)

{
    *0x8016000 = 0;
    return;
}


// ===== sym.dequeue_vip_task @ 0x0800dc14 (size 64) =====

void sym.dequeue_vip_task(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = get_mi_task_struct(arg1);
    if ((iVar1 != 0) && ((*(iVar1 + 0x10) >> 7 & 1) != 0)) {
        *(iVar1 + 0x10) = *(iVar1 + 0x10) & 0xffffff5f;
    }
    return;
}


// ===== sym.mi_monitor_hook @ 0x0800dc54 (size 120) =====

void sym.mi_monitor_hook(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = get_mi_task_struct(arg2);
    if (iVar4 != 0) {
        *(iVar4 + 0x1a0) = 0;
        uVar3 = get_cluster_type(*(arg1 + 0xba8));
        uVar1 = 0;
        if (uVar3 < 4) {
            uVar1 = uVar3;
        }
        uVar5 = sym.metis_xxx_task.llvm.15631448280779817747(arg2,0x100);
        if ((uVar5 & 1) != 0) {
            if (2 < uVar1) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x800dccc);
                (*pcVar2)();
            }
            *(obj.perf_min_freq + uVar1 * 4) = 0;
        }
    }
    return;
}


// ===== sym.metis_sup_task @ 0x0800dccc (size 44) =====

uint32_t sym.metis_sup_task(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.metis_xxx_task.llvm.15631448280779817747(arg1,0x100);
    return uVar1 & 1;
}


// ===== sym.mi_enqueue_task_fair_hook @ 0x0800dcf8 (size 12) =====

void sym.mi_enqueue_task_fair_hook(void)

{
    return;
}


// ===== sym.mi_dequeue_task_fair_hook @ 0x0800dd04 (size 152) =====

void sym.mi_dequeue_task_fair_hook(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = get_mi_task_struct(arg2);
    if ((iVar4 != 0) && ((*(iVar4 + 0x10) >> 7 & 1) != 0)) {
        *(iVar4 + 0x10) = *(iVar4 + 0x10) & 0xffffff5f;
    }
    iVar4 = get_mi_task_struct(arg2);
    if (iVar4 != 0) {
        *(iVar4 + 0x1a0) = 0;
        uVar3 = get_cluster_type(*(arg1 + 0xba8));
        uVar1 = 0;
        if (uVar3 < 4) {
            uVar1 = uVar3;
        }
        uVar5 = sym.metis_xxx_task.llvm.15631448280779817747(arg2,0x100);
        if ((uVar5 & 1) != 0) {
            if (2 < uVar1) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x800dd9c);
                (*pcVar2)();
            }
            *(obj.perf_min_freq + uVar1 * 4) = 0;
        }
    }
    return;
}


// ===== sym.mi_pick_task_fair @ 0x0800dd9c (size 148) =====

ulong sym.mi_pick_task_fair(uint32_t arg1)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    if (arg1 < 0x20) {
        *in_x18 = unaff_x30;
        iVar3 = *(__per_cpu_offset + arg1 * 8);
        iVar4 = *(iVar3 + 0x805f314);
        sym.prio_sched_check(runqueues + iVar3);
        if ((*(iVar3 + 0x8015208) == '\0' || iVar4 == 0) || (iVar4 == 0x178)) {
            uVar2 = 0;
        }
        else {
            uVar2 = *(iVar4 + -0x150);
        }
        return uVar2;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800de30);
    (*pcVar1)();
}


// ===== sym.mi_pick_next_task_fair_hook @ 0x0800de30 (size 288) =====

void sym.mi_pick_next_task_fair_hook(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    uchar *in_x4;
    uint32_t in_w5;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0xba8) < 0x20) {
        iVar2 = *(__per_cpu_offset + *(arg1 + 0xba8) * 8);
        iVar3 = *(iVar2 + 0x805f314);
        sym.prio_sched_check(runqueues + iVar2);
        if ((*(iVar2 + 0x8015208) == '\0' || iVar3 == 0) || (iVar3 == 0x178)) {
            iVar2 = 0;
            iVar3 = *arg2;
        }
        else {
            iVar2 = *(iVar3 + -0x150);
            iVar3 = *arg2;
        }
        if (((((iVar3 == 0) || (iVar3 = get_mi_task_struct(), iVar3 == 0)) ||
             ((*(iVar3 + 0xc) != 1000 && (*(iVar3 + 0xc) != 0)))) || (*0x8001000 != 0)) && (iVar2 != 0)) {
            iVar3 = iVar2 + 0xc0;
            *arg2 = iVar2;
            *arg3 = iVar3;
            if ((in_w5 & 1) != 0) {
                while (iVar3 != 0) {
                    set_next_entity(*(iVar3 + 0x150));
                    iVar3 = *(*arg3 + 0x148);
                    *arg3 = iVar3;
                }
            }
            *in_x4 = 1;
        }
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800df50);
    (*pcVar1)();
}


// ===== sym.mi_check_preempt_tick @ 0x0800df50 (size 300) =====

//WARNING: Type propagation algorithm not settling

ulong sym.mi_check_preempt_tick(uint32_t arg1,int64_t arg2)

{
    code *pcVar1;
    uint32_t uVar2;
    int64_t arg1_00;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    if (0x1f < arg1) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x800e07c);
        (*pcVar1)();
    }
    *in_x18 = unaff_x30;
    iVar4 = *(__per_cpu_offset + arg1 * 8);
    iVar5 = *(iVar4 + 0x805f314);
    sym.prio_sched_check(runqueues + iVar4);
    if ((*(iVar4 + 0x8015208) == '\0' || iVar5 == 0) || (iVar5 == 0x178)) {
        iVar5 = 0;
        arg1_00 = *(iVar4 + 0x805fc60);
    }
    else {
        iVar5 = *(iVar5 + -0x150);
        arg1_00 = *(iVar4 + 0x805fc60);
    }
    if (arg1_00 == 0) {
        uVar2 = 0;
    }
    else {
        uVar3 = sym.mi_vip_task(arg1_00);
        if ((uVar3 & 1) == 0) {
            uVar2 = sym.mi_art_mutex_vip_task(*(iVar4 + 0x805fc60));
        }
        else {
            uVar2 = 1;
        }
    }
    if (iVar5 == 0) {
        iVar5 = 0;
    }
    else {
        iVar5 = get_mi_task_struct(iVar5);
    }
    if ((uVar2 & 1) == 0) {
        if ((iVar5 != 0) && (2000000 < *(iVar4 + 0x805fc90) - *(iVar5 + 0x1a0))) {
            return 1;
        }
    }
    else if (iVar5 == 0) {
        *arg2 = 1;
        return 0;
    }
    return 0;
}


// ===== sym.mi_persist_task @ 0x0800e07c (size 48) =====

uint8_t sym.mi_persist_task(void)

{
    uint8_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = get_mi_task_struct();
    uVar1 = 0;
    if (iVar2 != 0) {
        uVar1 = *(iVar2 + 0x12) >> 4 & 1;
    }
    return uVar1;
}


// ===== sym.get_foreground_uid @ 0x0800e0ac (size 20) =====

uint sym.get_foreground_uid(void)

{
    return *0x8016000;
}


// ===== sym.set_foreground_app @ 0x0800e0c0 (size 88) =====

void sym.set_foreground_app(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8016000 != 0) {
        _printk(0x8003a03,*0x8016000,arg1 & 0xffffffff);
    }
    *0x8016000 = arg1;
    return;
}


// ===== sym.fas_init @ 0x0800e118 (size 1080) =====

ulong sym.fas_init(void)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong extraout_x8;
    int64_t iVar3;
    ulong extraout_x8_00;
    ulong *in_x18;
    ulong *unaff_x20;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *unaff_x20 = extraout_x8;
    if (uVar2 < extraout_x8) {
        do {
            if (0x1f < uVar2) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x800e550);
                (*pcVar1)();
            }
            iVar4 = uVar2 * 8;
            iVar3 = *(__per_cpu_offset + iVar4);
            *(__tracepoint_android_rvh_enqueue_task + iVar3) = 0;
            *(__warn_printk + iVar3) = 0;
            *(set_next_entity + iVar3) = 0;
            *(__tracepoint_android_rvh_dequeue_entity + iVar3) = 0;
            *(get_mi_task_struct_unsafe + iVar3) = 0;
            *(rb_erase + iVar3) = 0;
            *(mi_runqueues + iVar3) = 0;
            memset(task_may_not_preempt + iVar3,0,0x118);
            *(iVar3 + 0x805f30c) = 0;
            *(iVar3 + 0x805f314) = 0;
            *(iVar3 + 0x805f31c) = 0;
            iVar4 = *(__per_cpu_offset + iVar4);
            *(iVar4 + 0x8015218) = 0;
            *(iVar4 + 0x80154e0) = 0;
            *(iVar4 + 0x80154d8) = 0;
            *(iVar4 + 0x8015210) = 0;
            *(iVar4 + 0x8015060) = 0;
            *(iVar4 + 0x8015058) = 0;
            *(iVar4 + 0x8015050) = 0;
            *(iVar4 + 0x8015048) = 0;
            *(iVar4 + 0x8015040) = 0;
            *(iVar4 + 0x8015088) = 0;
            *(iVar4 + 0x8015080) = 0;
            *(iVar4 + 0x8015078) = 0;
            *(iVar4 + 0x8015070) = 0;
            *(iVar4 + 0x8015068) = 0;
            *(iVar4 + 0x80150b0) = 0;
            *(iVar4 + 0x80150a8) = 0;
            *(iVar4 + 0x80150a0) = 0;
            *(iVar4 + 0x8015098) = 0;
            *(iVar4 + 0x8015090) = 0;
            *(iVar4 + 0x80150d8) = 0;
            *(iVar4 + 0x80150d0) = 0;
            *(iVar4 + 0x80150c8) = 0;
            *(iVar4 + 0x80150c0) = 0;
            *(iVar4 + 0x80150b8) = 0;
            *(iVar4 + 0x8015100) = 0;
            *(iVar4 + 0x80150f8) = 0;
            *(iVar4 + 0x80150f0) = 0;
            *(iVar4 + 0x80150e8) = 0;
            *(iVar4 + 0x80150e0) = 0;
            *(iVar4 + 0x8015128) = 0;
            *(iVar4 + 0x8015120) = 0;
            *(iVar4 + 0x8015118) = 0;
            *(iVar4 + 0x8015110) = 0;
            *(iVar4 + 0x8015108) = 0;
            *(iVar4 + 0x8015150) = 0;
            *(iVar4 + 0x8015148) = 0;
            *(iVar4 + 0x8015138) = 0;
            *(iVar4 + 0x8015130) = 0;
            *(iVar4 + 0x8015140) = 0;
            *(iVar4 + 0x8015178) = 0;
            *(iVar4 + 0x8015170) = 0;
            *(iVar4 + 0x8015168) = 0;
            *(iVar4 + 0x8015160) = 0;
            *(iVar4 + 0x8015158) = 0;
            *(iVar4 + 0x8015180) = 0;
            *(iVar4 + 0x8015188) = 0;
            *(iVar4 + 0x8015190) = 0;
            *(iVar4 + 0x8015198) = 0;
            *(iVar4 + 0x80151a0) = 0;
            *(iVar4 + 0x80151a8) = 0;
            *(iVar4 + 0x80151b0) = 0;
            *(iVar4 + 0x80151b8) = 0;
            *(iVar4 + 0x80151c0) = 0;
            *(iVar4 + 0x80151c8) = 0;
            *(iVar4 + 0x80151d0) = 0;
            *(iVar4 + 0x80151d8) = 0;
            *(iVar4 + 0x80151e0) = 0;
            *(iVar4 + 0x80151e8) = 0;
            *(iVar4 + 0x80151f0) = 0;
            *(iVar4 + 0x8015200) = 0;
            *(iVar4 + 0x80151f8) = 0;
            memset(iVar4 + 0x8014e58,0,0x1e4);
            *(iVar4 + 0x8015220) = 0;
            *(iVar4 + 0x8015228) = 0;
            *(iVar4 + 0x8015230) = 0;
            *(iVar4 + 0x8015238) = 0;
            *(iVar4 + 0x8015240) = 0;
            *(iVar4 + 0x8015248) = 0;
            *(iVar4 + 0x8015250) = 0;
            *(iVar4 + 0x8015258) = 0;
            *(iVar4 + 0x8015260) = 0;
            *(iVar4 + 0x8015268) = 0;
            *(iVar4 + 0x8015270) = 0;
            *(iVar4 + 0x8015278) = 0;
            *(iVar4 + 0x8015280) = 0;
            *(iVar4 + 0x8015288) = 0;
            *(iVar4 + 0x8015290) = 0;
            *(iVar4 + 0x80152a8) = 0;
            *(iVar4 + 0x80152a0) = 0;
            *(iVar4 + 0x8015298) = 0;
            *(iVar4 + 0x80152c0) = 0;
            *(iVar4 + 0x80152b8) = 0;
            *(iVar4 + 0x80152b0) = 0;
            *(iVar4 + 0x80152d8) = 0;
            *(iVar4 + 0x80152d0) = 0;
            *(iVar4 + 0x80152c8) = 0;
            *(iVar4 + 0x80152f0) = 0;
            *(iVar4 + 0x80152e8) = 0;
            *(iVar4 + 0x80152e0) = 0;
            *(iVar4 + 0x8015308) = 0;
            *(iVar4 + 0x8015300) = 0;
            *(iVar4 + 0x80152f8) = 0;
            *(iVar4 + 0x8015310) = 0;
            *(iVar4 + 0x8015318) = 0;
            *(iVar4 + 0x8015320) = 0;
            *(iVar4 + 0x8015328) = 0;
            *(iVar4 + 0x8015330) = 0;
            *(iVar4 + 0x8015338) = 0;
            *(iVar4 + 0x8015350) = 0;
            *(iVar4 + 0x8015348) = 0;
            *(iVar4 + 0x8015340) = 0;
            *(iVar4 + 0x8015368) = 0;
            *(iVar4 + 0x8015360) = 0;
            *(iVar4 + 0x8015358) = 0;
            *(iVar4 + 0x8015380) = 0;
            *(iVar4 + 0x8015378) = 0;
            *(iVar4 + 0x8015370) = 0;
            *(iVar4 + 0x8015398) = 0;
            *(iVar4 + 0x8015390) = 0;
            *(iVar4 + 0x8015388) = 0;
            *(iVar4 + 0x80153a8) = 0;
            *(iVar4 + 0x80153a0) = 0;
            *(iVar4 + 0x80153b0) = 0;
            *(iVar4 + 0x80153c8) = 0;
            *(iVar4 + 0x80153c0) = 0;
            *(iVar4 + 0x80153b8) = 0;
            *(iVar4 + 0x80153e0) = 0;
            *(iVar4 + 0x80153d8) = 0;
            *(iVar4 + 0x80153d0) = 0;
            *(iVar4 + 0x80153f8) = 0;
            *(iVar4 + 0x80153f0) = 0;
            *(iVar4 + 0x80153e8) = 0;
            *(iVar4 + 0x8015410) = 0;
            *(iVar4 + 0x8015408) = 0;
            *(iVar4 + 0x8015400) = 0;
            *(iVar4 + 0x8015428) = 0;
            *(iVar4 + 0x8015420) = 0;
            *(iVar4 + 0x8015418) = 0;
            *(iVar4 + 0x8015438) = 0;
            *(iVar4 + 0x8015430) = 0;
            *(iVar4 + 0x8015440) = 0;
            *(iVar4 + 0x8015458) = 0;
            *(iVar4 + 0x8015450) = 0;
            *(iVar4 + 0x8015448) = 0;
            *(iVar4 + 0x8015470) = 0;
            *(iVar4 + 0x8015468) = 0;
            *(iVar4 + 0x8015460) = 0;
            *(iVar4 + 0x8015478) = 0;
            *(iVar4 + 0x8015480) = 0;
            *(iVar4 + 0x8015488) = 0;
            *(iVar4 + 0x8015490) = 0;
            *(iVar4 + 0x8015498) = 0;
            *(iVar4 + 0x80154a0) = 0;
            *(iVar4 + 0x80154a8) = 0;
            *(iVar4 + 0x80154b0) = 0;
            *(iVar4 + 0x80154b8) = 0;
            *(iVar4 + 0x80154c0) = 0;
            *(iVar4 + 0x80154c8) = 0;
            *(iVar4 + 0x80154d0) = 0;
            *(iVar4 + 0x8015208) = 1;
            *(iVar4 + 0x8014dc8) = 0;
            *(iVar4 + 0x8014dd0) = 0;
            *(iVar4 + 0x8014dd8) = 1;
            *(obj.metis_runqueues + iVar4) = 0;
            *(iVar4 + 0x8014ddc) = 0;
            *(iVar4 + 0x8014e30) = 0;
            *(iVar4 + 0x8014e08) = 0;
            *(iVar4 + 0x8014df8) = 0;
            *(iVar4 + 0x8014e00) = 0;
            *(iVar4 + 0x8014de8) = 0;
            *(iVar4 + 0x8014df0) = 0;
            *(iVar3 + 0x805f2fc) = 0;
            *(iVar3 + 0x805f304) = 0;
            uVar2 = cpumask_next(uVar2,__cpu_possible_mask);
            ___cpu_possible_mask = extraout_x8_00;
        } while (uVar2 < extraout_x8_00);
    }
    *0x8016000 = proc_create(0x8002f7d,0x1a4,0,obj.proc_fas_op);
    if (*0x8016000 == 0) {
        _printk(0x80036dd);
    }
    android_rvh_probe_register
              (__tracepoint_android_rvh_enqueue_entity,
               sym.mi_rb_enqueue_entity_hook.877fa0db602420247113046bf2a65355.cfi_jt,0);
    android_rvh_probe_register
              (__tracepoint_android_rvh_dequeue_entity,
               sym.mi_rb_dequeue_entity_hook.877fa0db602420247113046bf2a65355.cfi_jt,0);
    android_rvh_probe_register
              (__tracepoint_android_rvh_check_preempt_tick,
               sym.mi_check_preempt_tick_hook.877fa0db602420247113046bf2a65355.cfi_jt,0);
    android_rvh_probe_register(__tracepoint_android_rvh_enqueue_task,sym.before_enqueue_vip_task.cfi_jt,0);
    register_syscore_ops(obj.fas_syscore_ops);
    _printk(0x80032a5,"fas_init");
    return 0;
}


// ===== sym.mi_rb_enqueue_entity_hook @ 0x0800e550 (size 56) =====

void sym.mi_rb_enqueue_entity_hook(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg2 + 0x158) == 0) {
        sym.__enqueue_vip_task(*(*(arg1 + 0x130) + 0xba8),arg2 + -0xc0);
    }
    return;
}


// ===== sym.mi_rb_dequeue_entity_hook @ 0x0800e588 (size 364) =====

void sym.mi_rb_dequeue_entity_hook(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg2 + 0x158) == 0) {
        uVar2 = *(*(arg1 + 0x130) + 0xba8);
        if (0x1f < uVar2) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x800e6c8);
            (*pcVar3)();
        }
        iVar6 = *(__per_cpu_offset + uVar2 * 8);
        iVar4 = get_mi_task_struct_unsafe(arg2 + -0xc0);
        if ((iVar4 != 0) && (*(iVar4 + 400) != '\0')) {
            iVar1 = iVar4 + 0x178;
            if (*(iVar6 + 0x805f314) == iVar1) {
                uVar5 = rb_next(iVar1);
                *(iVar6 + 0x805f314) = uVar5;
            }
            rb_erase(iVar1,iVar6 + 0x805f30c);
            *(iVar4 + 400) = 0;
            if (*0x8016000 != 0) {
                _printk(0x80021a1,*(arg2 + 0x518));
            }
        }
        pcVar3 = CONCAT44(*0x8016004,*0x8016000);
        if (pcVar3 != NULL) {
            if (pcVar3 != sym.__typeid__ZTSFvP2rqP11task_structE_global_addr) {
                __cfi_slowpath_diag(0x2bcb77f4d94771ee,pcVar3,0x8001940);
            }
            if ((*(arg2 + 0x158) != 0) && (obj.task_of.__already_done == 0x0)) {
                obj.task_of.__already_done = 0x1;
                __warn_printk("!entity_is_task(se)");
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x800,0x800e6ac);
                (*pcVar3)();
            }
            (*pcVar3)(*(arg1 + 0x130),arg2 + -0xc0);
        }
    }
    return;
}


// ===== sym.mi_check_preempt_tick_hook @ 0x0800e6f4 (size 96) =====

uchar  [16] sym.mi_check_preempt_tick_hook(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t in_x4;
    int64_t in_x5;
    ulong *in_x18;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    
    *in_x18 = unaff_x30;
    if ((in_x4 <= *arg1) &&
       (uVar1 = sym.mi_check_preempt_tick(*(*(in_x5 + 0x130) + 0xba8),arg2), noname_1 = extraout_q0, (uVar1 & 1) != 0
       )) {
        noname_1 = resched_curr(*(in_x5 + 0x130));
        *arg2 = 1;
    }
    return noname_1;
}


// ===== sym.fas_exit @ 0x0800e754 (size 80) =====

void sym.fas_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8016000 != 0) {
        proc_remove();
    }
    unregister_syscore_ops(obj.fas_syscore_ops);
    _printk(0x8002e58,"fas_exit");
    return;
}


// ===== sym.set_mi_rq_balance_irq_task @ 0x0800e7a4 (size 80) =====

ulong sym.set_mi_rq_balance_irq_task(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0;
    if ((param_1 != 0) && (iVar1 = get_mi_task_struct(), uVar2 = 0, iVar1 != 0)) {
        __rcu_read_lock();
        *(iVar1 + 0x10) = *(iVar1 + 0x10) | 0x80000;
        __rcu_read_unlock();
        uVar2 = 1;
    }
    return uVar2;
}


// ===== sym.walt_mi_irq_task_rq_balance_hook @ 0x0800e7f4 (size 640) =====

ulong sym.walt_mi_irq_task_rq_balance_hook(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    code *pcVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong uVar8;
    uint32_t uVar9;
    ulong *in_x18;
    ulong *unaff_x20;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return 0;
    }
    uVar9 = arg2;
    if (uVar9 < 0) {
        return 0;
    }
    *unaff_x20 = seq_read;
    if (0x805efff < uVar9) {
        return 0;
    }
    puVar1 = arg1 + 0x38;
    if (*puVar1 == 0) {
        return 0;
    }
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar8 = 2;
code_r0x0800e96c:
        refcount_warn_saturate(puVar1,uVar8);
    }
    else if ((uVar2 + 1 | uVar2) < 0) {
        uVar8 = 1;
        goto code_r0x0800e96c;
    }
    iVar6 = get_mi_task_struct(arg1);
    if ((iVar6 == 0) || ((*(iVar6 + 0x12) >> 3 & 1) == 0)) {
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar9 = *puVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar9 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar9 == 1) {
            DataMemoryBarrier(2,1);
            goto code_r0x0800e928;
        }
    }
    else {
        if (0x1f < uVar9) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x5512,0x800e95c);
            (*pcVar5)();
        }
        if (((*(__per_cpu_offset + (arg2 & 0xffffffffU) * 8) != -0x805f1c0) &&
            (iVar6 = *(*(__per_cpu_offset + (arg2 & 0xffffffffU) * 8) + 0x805fc60), iVar6 != 0)) &&
           (uVar7 = task_may_not_preempt(iVar6,arg2 & 0xffffffff), (uVar7 & 1) != 0)) {
            if (*0x8016000 != 0) {
                _printk(0x8003a35,arg1 + 0x7a8,*(arg1 + 0x5d8),arg2 & 0xffffffff);
            }
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar9 = *puVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar9 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar9 == 1) {
                DataMemoryBarrier(2,1);
                __put_task_struct(arg1);
                return 1;
            }
            if (uVar9 < 1) {
                refcount_warn_saturate(puVar1,3);
                return 1;
            }
            return 1;
        }
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar9 = *puVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar9 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar9 == 1) {
            DataMemoryBarrier(2,1);
code_r0x0800e928:
            __put_task_struct(arg1);
            return 0;
        }
    }
    if (uVar9 < 1) {
        refcount_warn_saturate(puVar1,3);
    }
    return 0;
}


// ===== sym.get_task_struct @ 0x0800ea74 (size 124) =====

void sym.get_task_struct(int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = arg1 + 0x38;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar5 = 2;
    }
    else {
        if (-1 < (uVar2 + 1 | uVar2)) {
            return;
        }
        uVar5 = 1;
    }
    refcount_warn_saturate(puVar1,uVar5);
    return;
}


// ===== sym.get_vtask_monitor_status @ 0x0800eaf0 (size 72) =====

code sym.get_vtask_monitor_status(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        uVar1 = __usecs_to_jiffies(*0x8016000);
        *arg1 = uVar1;
    }
    return obj.vtask_monitor;
}


// ===== sym.metis_choose_cpu_fastpath @ 0x0800eb38 (size 880) =====

uint64_t sym.metis_choose_cpu_fastpath(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint uVar2;
    uint64_t uVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong extraout_x1;
    ulong uVar11;
    uint64_t uVar12;
    uint64_t extraout_x8;
    uint64_t extraout_x8_00;
    uint32_t *puVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t *puVar14;
    uint32_t *puVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    if (0x1f < arg1) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5512,0x800eea0);
        (*pcVar4)();
    }
    iVar9 = *arg3;
    puVar1 = *(arg3 + 8);
    uStack_70 = 0;
    puVar15 = *(arg3 + 0x20);
    uVar17 = *(*(__per_cpu_offset + arg1 * 8) + 0x805fd10);
    iVar8 = get_mi_task_struct(arg2);
    if ((iVar8 == 0) || ((*(iVar8 + 0x11) >> 2 & 1) == 0)) {
code_r0x0800ed64:
        puVar14 = 0xffffffff;
    }
    else {
        if ((-1 < _seq_read - *(iVar8 + 0x1b8)) && (-1 < _seq_read - *(iVar8 + 0x198))) {
code_r0x0800ebd8:
            if ((arg2 != 0) && (iVar9 = get_mi_task_struct(arg2), iVar5 = *0x8016000, iVar9 != 0)) {
                *(iVar9 + 0x10) = *(iVar9 + 0x10) & 0xfffffbff;
                if (iVar5 == 0) {
                    puVar14 = 0xffffffff;
                    goto code_r0x0800ed74;
                }
                _printk(0x8002dd2,*(arg2 + 0x5d8),arg2 + 0x7a8);
            }
            goto code_r0x0800ed64;
        }
        if (CONCAT44(*0x8016004,*0x8016000) == 0) goto code_r0x0800ed64;
        puVar13 = *(arg2 + 0x428);
        uVar7 = *puVar15;
        uVar6 = *puVar1;
        *puVar1 = seq_read;
        uVar16 = (uVar7 ^ 0xffffffff) & 0x805f000 & *puVar13 & (uVar6 ^ 0xffffffff);
        if ((*arg2 >> 0x16 & 1) != 0) {
            uStack_70 = uVar16;
            puVar14 = system_32bit_el0_cpumask();
            uVar16 = *puVar14 & uVar16;
        }
        puVar14 = *(arg2 + 0x58);
        uVar10 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar3 = (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = uVar16 >> (puVar14 & 0x3f);
        uVar7 = 0x20;
        if (uVar16 != 0) {
            uVar7 = LZCOUNT((((uVar3 & 0xff000000ff000000) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8) >> 0x10 |
                            ((uVar10 & 0xf0f0f0f0f0f0f0f0) >> 0xc) << 0x10) << 0x20);
        }
        uStack_70 = uVar16;
        if (((uVar12 & 1) == 0) ||
           (iVar5 = available_idle_cpu(puVar14 & 0xffffffff), uVar12 = extraout_x8, iVar5 == 0)) {
            *puVar14 = uVar12;
            if (uVar12 <= uVar7) goto code_r0x0800ed64;
            pcVar4 = CONCAT44(*0x8016004,*0x8016000);
            __cfi_slowpath_diag(0x81ac49cffe75c30a,pcVar4,0x8001900);
            uVar16 = (*pcVar4)(uVar7,arg2);
            puVar14 = 0xffffffff;
            do {
                uVar6 = cpumask_next(puVar14,&stack0xffffffffffffff90);
                *puVar14 = extraout_x8_00;
                if (extraout_x8_00 <= uVar6) {
                    if (uVar17 <= uVar16 + iVar9) {
                        iVar9 = get_mi_task_struct(arg2);
                        if ((iVar9 == 0) || ((*(iVar9 + 0x11) >> 2 & 1) == 0)) goto code_r0x0800ed64;
                        if (-1 < _seq_read - *(iVar9 + 0x1b8)) {
                            puVar14 = uVar7;
                            if (-1 < _seq_read - *(iVar9 + 0x198)) goto code_r0x0800ebd8;
                            break;
                        }
                    }
                    puVar14 = uVar7;
                    break;
                }
                puVar14 = uVar6;
                pcVar4 = CONCAT44(*0x8016004,*0x8016000);
                __cfi_slowpath_diag(0x81ac49cffe75c30a,pcVar4,0x8001920);
                uVar10 = (*pcVar4)(puVar14,arg2);
                if (uVar16 <= uVar10) {
                    uVar6 = uVar7;
                    uVar10 = uVar16;
                }
                uVar16 = uVar10;
                iVar5 = available_idle_cpu(puVar14);
                uVar7 = uVar6;
            } while (iVar5 == 0);
        }
    }
    if (*0x8016000 == 0) goto code_r0x0800ed74;
    uVar2 = *(arg2 + 0x5d8);
    iVar9 = get_mi_task_struct(arg2);
    if ((iVar9 == 0) || ((*(iVar9 + 0x11) >> 2 & 1) == 0)) {
code_r0x0800edd0:
        uVar11 = 0;
    }
    else {
        if ((-1 < _seq_read - *(iVar9 + 0x1b8)) && (-1 < _seq_read - *(iVar9 + 0x198))) {
            if (((arg2 != 0) && (iVar9 = get_mi_task_struct(arg2), iVar5 = *0x8016000, iVar9 != 0)) &&
               (*(iVar9 + 0x10) = *(iVar9 + 0x10) & 0xfffffbff, iVar5 != 0)) {
                _printk(0x8002dd2,*(arg2 + 0x5d8),arg2 + 0x7a8);
            }
            goto code_r0x0800edd0;
        }
        uVar11 = 1;
    }
    _printk("pid: %d, task:%s, isDynamicVIP:%d, choose_cpu:%d",uVar2,arg2 + 0x7a8,uVar11,puVar14 & 0xffffffff);
code_r0x0800ed74:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return puVar14 & 0xffffffff;
    }
    uVar7 = __stack_chk_fail();
    *extraout_x18 = 0x800eea4;
    if (uVar7 < 2) {
        uVar17 = _printk(0x8002b2d,"register_mi_walt_get_indicies");
        if (1 < uVar7) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x800ef1c);
            (*pcVar4)();
        }
        *(obj.mi_walt_get_indicies_func + uVar7 * 8) = extraout_x1;
    }
    else {
        uVar17 = _printk(0x8002852);
    }
    return uVar17;
}


// ===== sym.register_mi_walt_get_indicies @ 0x0800eea8 (size 116) =====

void sym.register_mi_walt_get_indicies(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 2) {
        _printk(0x8002b2d,"register_mi_walt_get_indicies");
        if (1 < arg1) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x800ef1c);
            (*pcVar1)();
        }
        *(obj.mi_walt_get_indicies_func + (arg1 & 0xffffffffU) * 8) = arg2;
    }
    else {
        _printk(0x8002852);
    }
    return;
}


// ===== sym.unregister_mi_walt_get_indicies @ 0x0800ef1c (size 112) =====

void sym.unregister_mi_walt_get_indicies(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 2) {
        _printk(0x8002b2d,"unregister_mi_walt_get_indicies");
        if (1 < arg1) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x800ef8c);
            (*pcVar1)();
        }
        *(obj.mi_walt_get_indicies_func + (arg1 & 0xffffffffU) * 8) = 0;
    }
    else {
        _printk(0x8002969);
    }
    return;
}


// ===== sym.register_mi_find_energy_efficient_cpu @ 0x0800ef8c (size 116) =====

void sym.register_mi_find_energy_efficient_cpu(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 2) {
        _printk(0x8002b2d,"register_mi_find_energy_efficient_cpu");
        if (1 < arg1) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x800f000);
            (*pcVar1)();
        }
        *(obj.wake_render_func + (arg1 & 0xffffffffU) * 8) = arg2;
    }
    else {
        _printk(0x8002852);
    }
    return;
}


// ===== sym.unregister_mi_find_energy_efficient_cpu @ 0x0800f000 (size 112) =====

void sym.unregister_mi_find_energy_efficient_cpu(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 2) {
        _printk(0x8002b2d,"unregister_mi_find_energy_efficient_cpu");
        if (1 < arg1) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x800f070);
            (*pcVar1)();
        }
        *(obj.wake_render_func + (arg1 & 0xffffffffU) * 8) = 0;
    }
    else {
        _printk(0x8002969);
    }
    return;
}


// ===== sym.register_mi_enqueue_task_fair_hook @ 0x0800f070 (size 116) =====

void sym.register_mi_enqueue_task_fair_hook(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 2) {
        _printk(0x8002b2d,"register_mi_enqueue_task_fair_hook");
        if (1 < arg1) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x800f0e4);
            (*pcVar1)();
        }
        *(obj.mi_enqueue_task_fair_func + (arg1 & 0xffffffffU) * 8) = arg2;
    }
    else {
        _printk(0x8002852);
    }
    return;
}


// ===== sym.unregister_mi_enqueue_task_fair_hook @ 0x0800f0e4 (size 112) =====

void sym.unregister_mi_enqueue_task_fair_hook(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 2) {
        _printk(0x8002b2d,"unregister_mi_enqueue_task_fair_hook");
        if (1 < arg1) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x800f154);
            (*pcVar1)();
        }
        *(obj.mi_enqueue_task_fair_func + (arg1 & 0xffffffffU) * 8) = 0;
    }
    else {
        _printk(0x8002852);
    }
    return;
}


// ===== sym.register_mi_dequeue_task_fair_hook @ 0x0800f154 (size 116) =====

void sym.register_mi_dequeue_task_fair_hook(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 2) {
        _printk(0x8002b2d,"register_mi_dequeue_task_fair_hook");
        if (1 < arg1) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x800f1c8);
            (*pcVar1)();
        }
        *(obj.mi_dequeue_task_fair_func + (arg1 & 0xffffffffU) * 8) = arg2;
    }
    else {
        _printk(0x8002852);
    }
    return;
}


// ===== sym.unregister_mi_dequeue_task_fair_hook @ 0x0800f1c8 (size 112) =====

void sym.unregister_mi_dequeue_task_fair_hook(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 2) {
        _printk(0x8002b2d,"unregister_mi_dequeue_task_fair_hook");
        if (1 < arg1) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x800f238);
            (*pcVar1)();
        }
        *(obj.mi_dequeue_task_fair_func + (arg1 & 0xffffffffU) * 8) = 0;
    }
    else {
        _printk(0x8002852);
    }
    return;
}


// ===== sym.get_metis_limit @ 0x0800f238 (size 320) =====

//WARNING: Removing unreachable block (ram,0x0800f26c)
//WARNING: Removing unreachable block (ram,0x0800f290)
//WARNING: Removing unreachable block (ram,0x0800f2d4)
//WARNING: Removing unreachable block (ram,0x0800f2e0)
//WARNING: Removing unreachable block (ram,0x0800f2f0)
//WARNING: Removing unreachable block (ram,0x0800f308)
//WARNING: Removing unreachable block (ram,0x0800f330)
//WARNING: Removing unreachable block (ram,0x0800f338)
//WARNING: Removing unreachable block (ram,0x0800f370)
//WARNING: Removing unreachable block (ram,0x0800f310)
//WARNING: Removing unreachable block (ram,0x0800f318)
//WARNING: Removing unreachable block (ram,0x0800f374)
//WARNING: Removing unreachable block (ram,0x0800f320)

ulong sym.get_metis_limit(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    return 0xffffffffffffffff;
}


// ===== sym.get_fboost_duration @ 0x0800f378 (size 196) =====

//WARNING: Removing unreachable block (ram,0x0800f3ac)
//WARNING: Removing unreachable block (ram,0x0800f3b4)
//WARNING: Removing unreachable block (ram,0x0800f3f8)

ulong sym.get_fboost_duration(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    return 0;
}


// ===== sym.set_mi_vip_task_req @ 0x0800f43c (size 728) =====

int sym.set_mi_vip_task_req(int64_t arg1)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    code *arg1_00;
    uint32_t arg2;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar2 = 1;
    uStack_40 = 0;
    iVar3 = arg1;
    do {
        iVar3 = strchr(iVar3 + 1,0x3a);
        iVar2 = iVar2 + -1;
    } while (iVar3 != 0);
    if (iVar2 == 0) {
        iVar2 = sscanf(arg1,"%u-%u\n",&uStack_40 + 4,&uStack_40);
        if (iVar2 != 2) goto code_r0x0800f5d8;
        _printk(0x8002cfa,uStack_40._4_4_,uStack_40 & 0xffffffff);
        uVar4 = uStack_40 & 0xffffffff;
        arg1_00 = &uStack_40 + 4;
        arg2 = 1;
        *0x8016000 = uStack_40._4_4_;
code_r0x0800f658:
        sym.mi_vip_task_req(arg1_00,arg2,uVar4);
    }
    else {
        iVar1 = strlen(arg1);
        uVar4 = arg1 + iVar1;
        if (-iVar2 < 1) {
            iVar3 = 0;
            if (arg1 < uVar4) {
code_r0x0800f5b8:
                iVar2 = sscanf(arg1,"%u-%u",&uStack_40 + 4,&uStack_40);
                if (iVar2 != 2) goto code_r0x0800f5d8;
                arg2 = iVar3 + 1;
                *(obj.mi_viptask + iVar3 * 4) = uStack_40._4_4_;
                _printk(0x8002063,arg2,uStack_40._4_4_,uStack_40 & 0xffffffff);
                uVar4 = uStack_40 & 0xffffffff;
            }
            else {
code_r0x0800f648:
                arg2 = iVar3;
                uVar4 = 0;
            }
            arg1_00 = obj.mi_viptask;
            goto code_r0x0800f658;
        }
        iVar1 = sscanf(arg1,0x8001c54,&uStack_40 + 4);
        if (iVar1 != 1) goto code_r0x0800f5d8;
        *0x8016000 = uStack_40._4_4_;
        _printk(0x8002d18,1);
        iVar3 = strchr(arg1 + 1,0x3a);
        arg1 = iVar3 + 1;
        if (uVar4 <= arg1) goto code_r0x0800f65c;
        if (iVar2 == -1) {
            iVar3 = 1;
joined_r0x0800f644:
            if (uVar4 <= arg1) goto code_r0x0800f648;
            goto code_r0x0800f5b8;
        }
        iVar1 = sscanf(arg1,0x8001c54,&uStack_40 + 4);
        if (iVar1 != 1) goto code_r0x0800f5d8;
        *0x8016000 = uStack_40._4_4_;
        _printk(0x8002d18,2);
        iVar3 = strchr(iVar3 + 2,0x3a);
        arg1 = iVar3 + 1;
        if (uVar4 <= arg1) goto code_r0x0800f65c;
        if (iVar2 == -2) {
            iVar3 = 2;
            goto joined_r0x0800f644;
        }
        iVar2 = sscanf(arg1,0x8001c54,&uStack_40 + 4);
        if (iVar2 != 1) {
code_r0x0800f5d8:
            iVar2 = -0x16;
            goto code_r0x0800f5dc;
        }
        *0x8016000 = uStack_40._4_4_;
        _printk(0x8002d18,3);
        iVar3 = strchr(iVar3 + 2,0x3a);
        if (iVar3 + 1U < uVar4) {
            iVar3 = strchr(iVar3 + 2,0x2d);
            if (iVar3 + 1U < uVar4) {
                iVar2 = sscanf(iVar3 + 1U,0x8001c54,&uStack_40);
                if (iVar2 == 1) {
                    _printk(0x80035a6,3,uStack_40 & 0xffffffff);
                    uVar4 = uStack_40 & 0xffffffff;
                    arg1_00 = obj.mi_viptask;
                    arg2 = 3;
                    goto code_r0x0800f658;
                }
                goto code_r0x0800f5d8;
            }
        }
    }
code_r0x0800f65c:
    iVar2 = 0;
code_r0x0800f5dc:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    iVar3 = __stack_chk_fail(iVar2);
    *extraout_x18 = sym.get_mi_viptask;
    iVar1 = snprintf(iVar3,0x1000,"%u:%d ",_obj.mi_viptask,_obj.mi_dynamic_vip_num);
    iVar2 = snprintf(iVar3 + iVar1,0x1000 - iVar1,"%u:%d ",*0x8016f5c,_obj.mi_dynamic_vip_num);
    iVar2 = iVar2 + iVar1;
    iVar1 = snprintf(iVar3 + iVar2,0x1000 - iVar2,"%u:%d ",*0x8016f60,_obj.mi_dynamic_vip_num);
    iVar1 = iVar1 + iVar2;
    iVar2 = snprintf(iVar3 + iVar1,0x1000 - iVar1,0x8002f5b);
    return iVar2 + iVar1;
}


// ===== sym.get_mi_viptask @ 0x0800f714 (size 204) =====

int sym.get_mi_viptask(int64_t arg1)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,"%u:%d ",_obj.mi_viptask,_obj.mi_dynamic_vip_num);
    iVar2 = snprintf(arg1 + iVar1,0x1000 - iVar1,"%u:%d ",*0x8016f5c,_obj.mi_dynamic_vip_num);
    iVar2 = iVar2 + iVar1;
    iVar1 = snprintf(arg1 + iVar2,0x1000 - iVar2,"%u:%d ",*0x8016f60,_obj.mi_dynamic_vip_num);
    iVar1 = iVar1 + iVar2;
    iVar2 = snprintf(arg1 + iVar1,0x1000 - iVar1,0x8002f5b);
    return iVar2 + iVar1;
}


// ===== sym.mi_vip_task_req @ 0x0800f7ec (size 576) =====

void sym.mi_vip_task_req(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong uVar8;
    uint32_t uVar9;
    ulong *in_x18;
    uint32_t uVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 < 6) {
        if (arg1 != 0) {
            uVar9 = arg3;
            if (0x752 < (arg3 >> 3 & 0x1fffffff)) {
                uVar9 = 15000;
            }
            if (uVar9 == 0) {
                uVar9 = 0x1e;
            }
            if (arg2 != 0) {
                uVar10 = 0;
                do {
                    __rcu_read_lock();
                    uVar2 = *(arg1 + uVar10 * 4);
                    iVar6 = find_task_by_vpid(uVar2);
                    if (iVar6 == 0) {
                        __rcu_read_unlock();
                        _printk(0x80035c4,uVar2);
                    }
                    else {
                        puVar1 = iVar6 + 0x38;
                        Hint_Prefetch(puVar1,2,0,1);
                        do {
                            uVar3 = *puVar1;
                            cVar4 = '\x01';
                            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar5) {
                                *puVar1 = uVar3 + 1;
                                cVar4 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar4 != '\0');
                        if (uVar3 == 0) {
                            uVar8 = 2;
code_r0x0800f958:
                            refcount_warn_saturate(puVar1,uVar8);
                        }
                        else if ((uVar3 + 1 | uVar3) < 0) {
                            uVar8 = 1;
                            goto code_r0x0800f958;
                        }
                        _printk(0x8003708,uVar2,iVar6 + 0x7a8,_seq_read,_seq_read + uVar9);
                        __rcu_read_unlock();
                        iVar7 = get_mi_task_struct(iVar6);
                        if (iVar7 != 0) {
                            *(iVar7 + 0x1b8) = _seq_read + uVar9;
                            if (-1 < *(iVar7 + 0x11)) {
                                Hint_Prefetch(0x8016f18,2,0,1);
                                do {
                                    cVar4 = '\x01';
                                    bVar5 = ExclusiveMonitorPass(0x8016f18,0x10);
                                    if (bVar5) {
                                        cVar4 = ExclusiveMonitorsStatus();
                                        _obj.mi_dynamic_vip_num = _obj.mi_dynamic_vip_num + 1;
                                    }
                                } while (cVar4 != '\0');
                            }
                            *(iVar7 + 0x10) = *(iVar7 + 0x10) | 0x48000;
                        }
                        Hint_Prefetch(puVar1,2,0,1);
                        do {
                            uVar3 = *puVar1;
                            cVar4 = '\x01';
                            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar5) {
                                *puVar1 = uVar3 - 1;
                                cVar4 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar4 != '\0');
                        if (uVar3 == 1) {
                            DataMemoryBarrier(2,1);
                            __put_task_struct(iVar6);
                        }
                        else if (uVar3 < 1) {
                            refcount_warn_saturate(puVar1,3);
                        }
                    }
                    uVar10 = uVar10 + 1;
                } while (arg2 != uVar10);
            }
        }
    }
    else {
        _printk(0x8002527);
    }
    return;
}


// ===== sym.set_efboost @ 0x0800fa2c (size 568) =====

ulong sym.set_efboost(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar9;
    uint32_t uVar10;
    uint64_t arg3;
    uint64_t uVar11;
    ulong uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar8 = *(iVar6 + 0x5e0);
    uVar12 = *arg2;
    iVar4 = strlen(uVar12);
    uVar11 = iVar4;
    uVar9 = uVar11;
    iVar6 = strnstr(uVar12,"add_mi_viptask_sched_priority");
    if (iVar6 == 0) {
        uVar9 = uVar11;
        iVar6 = strnstr(*arg2,"add_mi_viptask_enqueue_boost");
        if (iVar6 == 0) {
            uVar9 = uVar11;
            iVar6 = strnstr(*arg2,"del_mi_viptask_enqueue_boost");
            if (iVar6 == 0) {
                uVar9 = uVar11;
                iVar6 = strnstr(*arg2,"del_mi_viptask_sched_priority");
                if (iVar6 == 0) {
                    uVar9 = uVar11;
                    iVar6 = strnstr(*arg2,"del_mi_viptask_sched_lit_core");
                    if (iVar6 == 0) {
                        iVar6 = strnstr(*arg2,"add_mi_viptask_sched_lit_core");
                        arg3 = 0;
                        iVar6 = (iVar6 != 0) << 4;
                    }
                    else {
                        arg3 = 1;
                        iVar6 = 0x10;
                        uVar11 = uVar9;
                    }
                }
                else {
                    arg3 = 1;
                    iVar6 = 0x20000;
                    uVar11 = uVar9;
                }
            }
            else {
                arg3 = 1;
                iVar6 = 0x10000;
                uVar11 = uVar9;
            }
        }
        else {
            arg3 = 0;
            iVar6 = 0x10000;
            uVar11 = uVar9;
        }
    }
    else {
        arg3 = 0;
        iVar6 = 0x20000;
        uVar11 = uVar9;
    }
    iVar4 = -1;
    iVar7 = arg1;
    do {
        iVar7 = strchr(iVar7 + 1,0x3a);
        iVar4 = iVar4 + 1;
    } while (iVar7 != 0);
    if (iVar4 == 0) {
        uVar12 = 0x8002100;
code_r0x0800fc00:
        uVar11 = 0;
        iVar4 = sscanf(arg1,uVar12);
        if (iVar4 == 1) {
            sym.set_mi_efboost(0,iVar6,arg3);
            uVar11 = arg3;
            goto code_r0x0800fc20;
        }
code_r0x0800fc28:
        uVar12 = 0xffffffea;
    }
    else {
        iVar5 = strlen(arg1);
        uVar9 = arg1 + iVar5;
        if (0 < iVar4) {
            do {
                uVar11 = 0;
                iVar5 = sscanf(arg1,0x8001c54);
                if (iVar5 != 1) goto code_r0x0800fc28;
                uVar11 = arg3;
                iVar5 = sym.set_mi_efboost(0,iVar6,arg3);
                if (iVar5 != 1) {
                    arg1 = strchr(arg1 + 1,0x3a);
                    arg1 = arg1 + 1;
                    if (uVar9 <= arg1) break;
                }
                iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
        }
        if (arg1 < uVar9) {
            uVar12 = 0x8001c54;
            goto code_r0x0800fc00;
        }
code_r0x0800fc20:
        uVar12 = 0;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iVar8) {
        return uVar12;
    }
    auVar13 = __stack_chk_fail(uVar12);
    iVar8 = auVar13._8_8_;
    *extraout_x18 = sym.set_mi_efboost;
    uVar9 = auVar13._0_8_ & 0xffffffff;
    __rcu_read_lock();
    iVar6 = find_task_by_vpid(uVar9);
    if (iVar6 == 0) {
        __rcu_read_unlock();
        _printk(0x80035c4,uVar9);
        return 1;
    }
    puVar1 = iVar6 + 0x38;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = uVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (uVar10 == 0) {
        uVar12 = 2;
    }
    else {
        if (-1 < (uVar10 + 1 | uVar10)) goto code_r0x0800fcc4;
        uVar12 = 1;
    }
    refcount_warn_saturate(puVar1,uVar12);
code_r0x0800fcc4:
    __rcu_read_unlock();
    if ((uVar11 & 1) == 0) {
        sym.set_mi_vip_task(iVar6,0xffffffff,iVar8);
    }
    else {
        iVar7 = get_mi_task_struct();
        if (iVar7 != 0) {
            uVar10 = auVar13._8_4_;
            if ((uVar10 >> 0xf & 1) != 0) {
                Hint_Prefetch(0x8016f18,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(0x8016f18,0x10);
                    if (bVar3) {
                        cVar2 = ExclusiveMonitorsStatus();
                        _obj.mi_dynamic_vip_num = _obj.mi_dynamic_vip_num + -1;
                    }
                } while (cVar2 != '\0');
            }
            if ((uVar10 >> 0x11 & 1) != 0) {
                Hint_Prefetch(0x8016f08,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(0x8016f08,0x10);
                    if (bVar3) {
                        cVar2 = ExclusiveMonitorsStatus();
                        _obj.mi_sdk_eboost_vip_num = _obj.mi_sdk_eboost_vip_num + -1;
                    }
                } while (cVar2 != '\0');
            }
            if ((uVar10 >> 0x10 & 1) != 0) {
                *(iVar7 + 0x1c0) = 0xffffffff;
            }
            iVar4 = *0x8016000;
            *(iVar7 + 0x10) = *(iVar7 + 0x10) & (~uVar10 | 0x40000);
            if ((iVar4 != 0) && (iVar8 == 0x20000)) {
                _printk(0x8002b73,CONCAT44(*0x8016f0c,_obj.mi_sdk_eboost_vip_num),*(iVar6 + 0x5d8),iVar6 + 0x7a8);
            }
        }
    }
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = uVar10 - 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (uVar10 == 1) {
        DataMemoryBarrier(2,1);
        __put_task_struct(iVar6);
    }
    else if (uVar10 < 1) {
        refcount_warn_saturate(puVar1,3);
    }
    if (*0x8016000 != 0) {
        _printk(0x8002d34,uVar9,iVar8);
    }
    return 0;
}


// ===== sym.set_mi_efboost @ 0x0800fc64 (size 676) =====

ulong sym.set_mi_efboost(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int64_t arg1_00;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    uint64_t uVar7;
    uint32_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = arg1 & 0xffffffff;
    __rcu_read_lock();
    arg1_00 = find_task_by_vpid(uVar7);
    if (arg1_00 == 0) {
        __rcu_read_unlock();
        _printk(0x80035c4,uVar7);
        return 1;
    }
    puVar1 = arg1_00 + 0x38;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = uVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (uVar8 == 0) {
        uVar6 = 2;
    }
    else {
        if (-1 < (uVar8 + 1 | uVar8)) goto code_r0x0800fcc4;
        uVar6 = 1;
    }
    refcount_warn_saturate(puVar1,uVar6);
code_r0x0800fcc4:
    __rcu_read_unlock();
    if ((arg3 & 1U) == 0) {
        sym.set_mi_vip_task(arg1_00,0xffffffff,arg2);
    }
    else {
        iVar5 = get_mi_task_struct();
        if (iVar5 != 0) {
            uVar8 = arg2;
            if ((uVar8 >> 0xf & 1) != 0) {
                Hint_Prefetch(0x8016f18,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(0x8016f18,0x10);
                    if (bVar3) {
                        cVar2 = ExclusiveMonitorsStatus();
                        _obj.mi_dynamic_vip_num = _obj.mi_dynamic_vip_num + -1;
                    }
                } while (cVar2 != '\0');
            }
            if ((uVar8 >> 0x11 & 1) != 0) {
                Hint_Prefetch(0x8016f08,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(0x8016f08,0x10);
                    if (bVar3) {
                        cVar2 = ExclusiveMonitorsStatus();
                        _obj.mi_sdk_eboost_vip_num = _obj.mi_sdk_eboost_vip_num + -1;
                    }
                } while (cVar2 != '\0');
            }
            if ((uVar8 >> 0x10 & 1) != 0) {
                *(iVar5 + 0x1c0) = 0xffffffff;
            }
            iVar4 = *0x8016000;
            *(iVar5 + 0x10) = *(iVar5 + 0x10) & (~uVar8 | 0x40000);
            if ((iVar4 != 0) && (arg2 == 0x20000)) {
                _printk(0x8002b73,CONCAT44(*0x8016f0c,_obj.mi_sdk_eboost_vip_num),*(arg1_00 + 0x5d8),arg1_00 + 0x7a8
                       );
            }
        }
    }
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (uVar8 == 1) {
        DataMemoryBarrier(2,1);
        __put_task_struct(arg1_00);
    }
    else if (uVar8 < 1) {
        refcount_warn_saturate(puVar1,3);
    }
    if (*0x8016000 != 0) {
        _printk(0x8002d34,uVar7,arg2);
    }
    return 0;
}


// ===== sym.set_therm_break_enable @ 0x0800ff08 (size 176) =====

uint sym.set_therm_break_enable(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint uVar3;
    int64_t iVar4;
    ulong *extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar5;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_2c = 0;
    iVar2 = sscanf(arg1,0x8002100,&uStack_2c);
    if (iVar2 == 1) {
        uVar5 = *arg2;
        iVar2 = strlen(uVar5);
        iVar4 = strnstr(uVar5,"is_break_enable",iVar2);
        uVar3 = 0;
        if (iVar4 != 0) {
            uVar3 = 0;
            *0x8016000 = uStack_2c;
        }
    }
    else {
        uVar3 = 0xffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    __stack_chk_fail(uVar3);
    *extraout_x18 = sym.get_therm_break_enable;
    uVar5 = *extraout_x1;
    iVar2 = strlen(uVar5);
    iVar4 = strnstr(uVar5,"is_break_enable",iVar2);
    uVar1 = 0;
    if (iVar4 != 0) {
        uVar1 = *0x8016000;
    }
    return uVar1;
}


// ===== sym.get_therm_break_enable @ 0x0800ffb8 (size 88) =====

uint sym.get_therm_break_enable(ulong noname_0,int64_t arg1)

{
    uint uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = *arg1;
    iVar2 = strlen(uVar4);
    iVar3 = strnstr(uVar4,"is_break_enable",iVar2);
    uVar1 = 0;
    if (iVar3 != 0) {
        uVar1 = *0x8016000;
    }
    return uVar1;
}


// ===== sym.proc_open_fas @ 0x08010010 (size 52) =====

void sym.proc_open_fas(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg1,sym.proc_show_fas.877fa0db602420247113046bf2a65355.cfi_jt,0);
    return;
}


// ===== sym.proc_write_fas @ 0x08010044 (size 272) =====

uint64_t sym.proc_write_fas(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t arg3;
    ulong unaff_x30;
    int iStack_3c;
    unkbyte5 Stack_38;
    unkbyte3 Stack_33;
    unkbyte5 Stack_30;
    int64_t iStack_28;
    
    arg3 = arg2;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    if (0xb < arg3) {
        arg3 = 0xc;
    }
    iStack_28 = *(iVar3 + 0x5e0);
    iStack_3c = 0;
    Stack_38 = 0;
    Stack_33 = 0;
    Stack_30 = 0;
    __check_object_size(&Stack_38,arg3,0);
    iVar3 = sym._copy_from_user_1(&Stack_38,arg1,arg3);
    if (iVar3 == 0) {
        uVar4 = strim(&Stack_38);
        iVar2 = kstrtoint(uVar4,0,&iStack_3c);
        iVar1 = iStack_3c;
        if (iVar2 == 0) {
            if (iStack_3c < 10000) {
                arg3 = 0xffffffffffffffea;
                iVar1 = *0x8016000;
            }
            else if (*0x8016000 != 0) {
                _printk(0x8003a03,*0x8016000,iStack_3c);
            }
        }
        else {
            iVar1 = *0x8016000;
            if (iVar2 < 0) {
                arg3 = iVar2;
            }
        }
    }
    else {
        arg3 = 0xfffffffffffffff2;
        iVar1 = *0x8016000;
    }
    *0x8016000 = iVar1;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_28) {
        uVar4 = __stack_chk_fail();
        *extraout_x18 = sym.proc_show_fas;
        seq_printf(uVar4,"forground app uid:%d\n",*0x8016000);
        return 0;
    }
    return arg3;
}


// ===== sym.proc_show_fas @ 0x08010154 (size 56) =====

ulong sym.proc_show_fas(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_printf(param_1,"forground app uid:%d\n",*0x8016000);
    return 0;
}


// ===== sym.fas_suspend @ 0x0801018c (size 64) =====

ulong sym.fas_suspend(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8016000 = ktime_get();
    obj.fas_ktime_suspended = 0x1;
    return 0;
}


// ===== sym.fas_resume @ 0x080101cc (size 20) =====

void sym.fas_resume(int64_t arg1)

{
    obj.fas_ktime_suspended = 0x0;
    return;
}


// ===== sym.metis_xxx_task.llvm.15631448280779817747 @ 0x080101e0 (size 500) =====

bool sym.metis_xxx_task.llvm.15631448280779817747(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int iVar2;
    code *pcVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0x58);
    iVar5 = get_mi_task_struct();
    if ((iVar5 != 0) && ((*(iVar5 + 0x12) >> 2 & 1) != 0)) {
        iVar5 = get_mi_task_struct(arg1);
        if (iVar5 == 0) {
            return false;
        }
        uVar7 = *(iVar5 + 0x10);
code_r0x08010330:
        return (uVar7 & arg2) != 0;
    }
    iVar5 = get_mi_task_struct(arg1);
    if (iVar5 == 0) {
        return false;
    }
    if ((*0x8016000 == 0) || (*(iVar5 + 0xc) != *0x8016000)) {
        return false;
    }
    iVar5 = get_mi_task_struct(arg1);
    if (iVar5 == 0) {
        return false;
    }
    if (_seq_read - *(iVar5 + 0x198) < 0) {
        uVar7 = *(iVar5 + 0x10);
        goto code_r0x08010330;
    }
    uVar4 = get_cluster_type(uVar1);
    uVar7 = 0;
    if (uVar4 < 4) {
        uVar7 = uVar4;
    }
    if ((*(iVar5 + 0x11) & 3) != 0) {
        if (2 < uVar7) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x80103d4);
            (*pcVar3)();
        }
        *(obj.perf_min_freq + uVar7 * 4) = 0;
    }
    *(iVar5 + 0x198) = 0;
    if (arg1 == 0) {
        return false;
    }
    iVar5 = get_mi_task_struct(arg1);
    if (iVar5 == 0) {
        return false;
    }
    uVar7 = *(iVar5 + 0x10);
    if ((uVar7 >> 0xb & 1) != 0) {
        uVar7 = uVar7 & 0xfffff7ff;
        *(iVar5 + 0x10) = uVar7;
    }
    if ((uVar7 >> 7 & 1) == 0) {
        iVar8 = *(iVar5 + 0x28);
        uVar6 = sym.mi_vip_task(iVar8);
        if ((uVar6 & 1) != 0) {
            if (*0x8016000 != 0) {
                _printk(0x8001c93,iVar8 + 0x7a8,*(iVar8 + 0x5d8));
            }
            *(iVar5 + 0x10) = *(iVar5 + 0x10) | 0x80;
        }
    }
    iVar8 = get_mi_task_struct(arg1);
    if ((iVar8 != 0) && ((*(iVar8 + 0x11) >> 2 & 1) != 0)) {
        if ((_seq_read - *(iVar8 + 0x1b8) < 0) || (_seq_read - *(iVar8 + 0x198) < 0)) {
            uVar7 = 0xfffffcff;
            goto code_r0x080102fc;
        }
        iVar8 = get_mi_task_struct(arg1);
        iVar2 = *0x8016000;
        if ((iVar8 != 0) && (*(iVar8 + 0x10) = *(iVar8 + 0x10) & 0xfffffbff, iVar2 != 0)) {
            _printk(0x8002dd2,*(arg1 + 0x5d8),arg1 + 0x7a8);
        }
    }
    uVar7 = 0xfffff8ff;
code_r0x080102fc:
    *(iVar5 + 0x10) = *(iVar5 + 0x10) & uVar7;
    return false;
}


// ===== sym.set_fboost_enable @ 0x080103d4 (size 128) =====

uint sym.set_fboost_enable(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    uint uStack_1c;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    uStack_1c = 0;
    iVar2 = sscanf(arg1,0x8002100,&uStack_1c);
    if (iVar2 == 1) {
        uVar3 = 0;
        *0x8016000 = uStack_1c;
    }
    else {
        uVar3 = 0xffffffea;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return uVar3;
    }
    __stack_chk_fail(uVar3);
    return *0x8016000;
}


// ===== sym.get_fboost_enable @ 0x08010454 (size 20) =====

uint sym.get_fboost_enable(void)

{
    return *0x8016000;
}


// ===== sym.find_energy_hook @ 0x08010468 (size 76) =====

void sym.find_energy_hook(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*arg2 == '\0') {
        uVar1 = sym.metis_xxx_task.llvm.15631448280779817747(arg1,0x700);
    }
    else {
        uVar1 = 1;
    }
    *arg2 = uVar1 & 1;
    return;
}


// ===== sym.walt_get_indicies_hook @ 0x080104b4 (size 672) =====

//WARNING: Removing unreachable block (ram,0x0801058c)
//WARNING: Removing unreachable block (ram,0x080106bc)
//WARNING: Removing unreachable block (ram,0x080106cc)
//WARNING: Removing unreachable block (ram,0x0801070c)
//WARNING: Removing unreachable block (ram,0x0801059c)
//WARNING: Removing unreachable block (ram,0x080105dc)

void sym.walt_get_indicies_hook(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uchar *in_x4;
    uchar uVar4;
    uint uVar5;
    uint uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8016000 == 0) {
        return;
    }
    if ((*arg1 >> 0x16 & 1) != 0) {
        uVar4 = 0;
        goto code_r0x08010528;
    }
    iVar2 = get_mi_task_struct(arg1);
    if ((iVar2 != 0) && ((*(iVar2 + 0x12) >> 4 & 1) != 0)) {
        return;
    }
    uVar3 = sym.metis_clboost_task(arg1);
    if ((uVar3 & 1) == 0) {
        iVar2 = get_mi_task_struct(arg1);
        if ((iVar2 != 0) && ((*(iVar2 + 0x11) >> 2 & 1) != 0)) {
            if ((_seq_read - *(iVar2 + 0x1b8) < 0) || (_seq_read - *(iVar2 + 0x198) < 0)) {
                uVar6 = 1;
                uVar5 = 1;
                goto code_r0x0801051c;
            }
            if (((arg1 != 0) && (iVar2 = get_mi_task_struct(arg1), iVar1 = *0x8016000, iVar2 != 0)) &&
               (*(iVar2 + 0x10) = *(iVar2 + 0x10) & 0xfffffbff, iVar1 != 0)) {
                _printk(0x8002dd2,*(arg1 + 0x5d8),arg1 + 0x7a8);
            }
        }
        uVar3 = sym.metis_xxx_task.llvm.15631448280779817747(arg1,0x100);
        if ((uVar3 & 1) == 0) {
            uVar3 = sym.metis_xxx_task.llvm.15631448280779817747(arg1,0x200);
            if ((uVar3 & 1) != 0) {
                uVar4 = 1;
                *arg2 = 1;
                *arg3 = 2;
                goto code_r0x08010528;
            }
            uVar3 = sym.metis_xxx_task.llvm.15631448280779817747(arg1,0x700);
            if ((uVar3 & 1) != 0) {
                uVar4 = 1;
                *arg2 = 1;
                *arg3 = 1;
                goto code_r0x08010528;
            }
            uVar3 = sym.metis_xxx_task.llvm.15631448280779817747(arg1,0x10);
            if ((((uVar3 & 1) == 0) && (uVar3 = sym.in_frame_boost(uVar3), (uVar3 & 1) == 0)) &&
               (uVar3 = sym.metis_bg_task(arg1), (uVar3 & 1) == 0)) {
                return;
            }
            uVar6 = 0;
            uVar5 = 0;
        }
        else {
            uVar5 = 2;
            uVar6 = 1;
        }
    }
    else {
        uVar5 = 2;
        uVar6 = 1;
    }
code_r0x0801051c:
    *arg2 = uVar6;
    *arg3 = uVar5;
    uVar4 = 1;
code_r0x08010528:
    *in_x4 = uVar4;
    return;
}


// ===== sym.metis_clboost_task @ 0x08010754 (size 232) =====

uint8_t sym.metis_clboost_task(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = get_mi_task_struct();
    if (iVar3 != 0) {
        if (_seq_read - *(iVar3 + 0x1b8) < 0) {
            return *(iVar3 + 0x11) >> 7;
        }
        iVar3 = get_mi_task_struct(arg1);
        if (iVar3 != 0) {
            *(iVar3 + 0x1c0) = 0xffffffff;
            *(iVar3 + 0x10) = *(iVar3 + 0x10) & 0xfffeffff;
        }
        iVar3 = get_mi_task_struct(arg1);
        if (iVar3 != 0) {
            Hint_Prefetch(0x8016f18,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(0x8016f18,0x10);
                if (bVar2) {
                    cVar1 = ExclusiveMonitorsStatus();
                    _obj.mi_dynamic_vip_num = _obj.mi_dynamic_vip_num + -1;
                }
            } while (cVar1 != '\0');
            *(iVar3 + 0x10) = *(iVar3 + 0x10) & 0xffff7fff;
            return 0;
        }
    }
    return 0;
}


// ===== sym.metis_bg_task @ 0x0801083c (size 124) =====

bool sym.metis_bg_task(int64_t arg1)

{
    bool bVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = get_mi_task_struct();
    bVar1 = false;
    if ((iVar2 != 0) && (*0x8016000 != 0)) {
        if ((*arg1 >> 0x16 & 1) == 0) {
            bVar1 = 10000 < *(iVar2 + 0xc) && *0x8016000 != *(iVar2 + 0xc);
        }
        else {
            bVar1 = false;
        }
    }
    return bVar1;
}


// ===== sym.metis_ioctl @ 0x080108b8 (size 2424) =====

//WARNING: Removing unreachable block (ram,0x08010c48)
//WARNING: Removing unreachable block (ram,0x08010974)
//WARNING: Removing unreachable block (ram,0x080109b0)
//WARNING: Removing unreachable block (ram,0x08011008)
//WARNING: Removing unreachable block (ram,0x080109b8)
//WARNING: Removing unreachable block (ram,0x08010964)
//WARNING: Removing unreachable block (ram,0x08010a28)
//WARNING: Removing unreachable block (ram,0x08010c54)
//WARNING: Removing unreachable block (ram,0x08010c90)
//WARNING: Removing unreachable block (ram,0x08011034)
//WARNING: Removing unreachable block (ram,0x08010c98)

void sym.metis_ioctl(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint uVar1;
    uint uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint32_t uVar11;
    ulong *in_x18;
    uint64_t unaff_x19;
    uint32_t *unaff_x20;
    uint64_t uVar12;
    ulong unaff_x30;
    ulong uStack_68;
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_58 = *(iVar10 + 0x5e0);
    uStack_68 = 0;
    if (*0x8016000 == 0) {
        uVar7 = 0xffffffffffffffff;
        uVar9 = *0x8016000;
        goto code_r0x08011148;
    }
    unaff_x19 = sp_el0;
    uVar11 = arg1;
    unaff_x20 = uVar11 & 0xff;
    uVar1 = *(*(unaff_x19 + 0x798) + 4);
    if (*0x8016000 != 0) {
        uVar2 = *(unaff_x19 + 0x5d8);
        iVar10 = ktime_get();
        _printk(0x8002e75,uVar1,uVar2,0x74a,unaff_x20,iVar10 / 1000);
    }
    uVar7 = 0;
    uVar9 = *0x8016000;
    if (0xd < (uVar11 & 0xff)) goto code_r0x08011148;
    //switch table (13 cases) at 0x8003dc0
    switch(*((arg1 & 0xffU) * 4 + 0x8003dc0) + 0x8010938) {
    case 0x801094c:
        obj.vtask_monitor = 0x1;
        iVar8 = ktime_get(0);
        iVar10 = tpidr_el1;
        *0x8016004 = iVar8 / 1000 >> 0x20;
        *0x8016000 = CONCAT44(*0x8016004,*(cpu_number + iVar10));
    case 0x8010a08:
        if (*0x8016000 != 0) {
            _printk(0x8003a03,*0x8016000 & 0xffffffff,uVar1);
        }
        *0x8016000 = CONCAT44(*0x8016004,uVar1);
        sym.metis_set_vip_thread(unaff_x19,unaff_x20,1);
        break;
    case 0x8010a54:
        if ((uVar11 & 0x3fff0000) == 0x80000) {
            iVar10 = sym._copy_from_user_1(&stack0xffffffffffffff98,arg2,8);
            if (iVar10 != 0) goto code_r0x08010ee0;
            __rcu_read_lock();
            unaff_x20 = uStack_68 & 0xffffffff;
            uVar9 = find_task_by_vpid(unaff_x20);
            if (uVar9 == 0) {
                __rcu_read_unlock();
                _printk(0x80035c4,unaff_x20);
                uVar7 = 0xffffffffffffffea;
                uVar9 = *0x8016000;
                goto code_r0x08011148;
            }
            sym.get_task_struct(uVar9);
            if (*0x8016000 != 0) {
                _printk(0x8003708,unaff_x20,uVar9 + 0x7a8,_seq_read,_seq_read + uStack_68._4_4_ * 0xfa);
            }
            __rcu_read_unlock();
            sym.metis_set_vip_thread(uVar9,7,uStack_68 >> 0x20);
            sym.put_task_struct_2(uVar9);
            unaff_x19 = uVar9;
            break;
        }
        goto code_r0x08010f78;
    case 0x8010abc:
        iVar10 = sym._copy_from_user_1(&stack0xffffffffffffff98,arg2,8);
        uVar9 = uStack_68;
        if (iVar10 != 0) {
code_r0x08010ee0:
            uVar7 = 0xfffffffffffffff2;
            uVar9 = *0x8016000;
            goto code_r0x08011148;
        }
        unaff_x20 = uStack_68 & 0xffffffff;
        if ((uStack_68 != 0) && (uStack_68 != *(unaff_x19 + 0x5d8))) {
            if (uStack_68 < 1) goto code_r0x08010f78;
            __rcu_read_lock();
            unaff_x19 = find_task_by_vpid(uVar9 & 0xffffffff);
            __rcu_read_unlock();
        }
        if ((unaff_x19 == 0) || (unaff_x20 = unaff_x19 + 0x38, *unaff_x20 == 0)) goto code_r0x08010f78;
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar11 = *unaff_x20;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar4) {
                *unaff_x20 = uVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar11 == 0) {
            uVar7 = 2;
code_r0x080110a4:
            refcount_warn_saturate(unaff_x20,uVar7);
        }
        else if ((uVar11 + 1 | uVar11) < 0) {
            uVar7 = 1;
            goto code_r0x080110a4;
        }
        uVar11 = (uStack_68._4_4_ * 0xfa) / 1000;
        if ((uStack_68._4_4_ * 0xfa) / 1000 < 0x33) {
            uVar11 = 0x32;
        }
        iVar10 = get_mi_task_struct(unaff_x19);
        if (iVar10 != 0) {
            if (0x7c < uVar11) {
                uVar11 = 0x7d;
            }
            *0x8016000 = _seq_read + uVar11;
            iVar5 = *0x8016000;
            *(iVar10 + 0x1b8) = _seq_read + uVar11;
            *(iVar10 + 0x10) = *(iVar10 + 0x10) | 0x400;
            if (iVar5 != 0) {
                _printk(0x8001ebd,*(unaff_x19 + 0x5d8),unaff_x19 + 0x7a8);
            }
        }
        sym.mi_resched_vip_task(unaff_x19);
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar11 = *unaff_x20;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar4) {
                *unaff_x20 = uVar11 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar11 == 1) {
            DataMemoryBarrier(2,1);
            __put_task_struct(unaff_x19);
        }
        else if (uVar11 < 1) {
            refcount_warn_saturate(unaff_x20,3);
        }
        else {
        }
        if (*0x8016000 != 0) {
            uStack_68._4_4_ = uStack_68 >> 0x20;
            uVar1 = uStack_68._4_4_;
            _printk(0x8002402,*(unaff_x19 + 0x5d8),unaff_x19 + 0x7a8,uVar1);
        }
        break;
    case 0x8010be4:
        if (*0x8016000 != 0) {
            _printk(0x800254c,*(unaff_x19 + 0x5d8),unaff_x19 + 0x7a8);
        }
        if (unaff_x19 != 0) {
            iVar10 = get_mi_task_struct(unaff_x19);
            uVar7 = 0;
            uVar9 = *0x8016000;
            if (iVar10 == 0) goto code_r0x08011148;
            iVar5 = *0x8016000;
            *(iVar10 + 0x10) = *(iVar10 + 0x10) & 0xfffffbff;
            if (iVar5 != 0) {
                _printk(0x8002dd2,*(unaff_x19 + 0x5d8),unaff_x19 + 0x7a8);
            }
        }
        break;
    case 0x8010c2c:
        unaff_x19 = 0x8016000;
        unaff_x20 = 0x8016000;
        obj.vtask_monitor = 0x0;
        iVar10 = ktime_get(0);
        bVar4 = *0x8016000 != 0;
        *0x8016000 = iVar10 / 1000;
        if (bVar4) {
            _printk(0x8001f3c,0);
        }
        break;
    case 0x8010cec:
        iVar10 = ktime_get(0);
        unaff_x19 = 0x8016000;
        unaff_x20 = 0x8016000;
        uVar7 = 0;
        uVar9 = iVar10 / 1000;
        if (uVar9 <= *0x8016000) goto code_r0x08011148;
        if (*0x8016000 <= uVar9) goto code_r0x08011148;
        uVar12 = *0x8001000;
        *0x8016000 = uVar9;
        iVar10 = ktime_get(0);
        if ((uVar12 * -1000 - uVar9) + iVar10 / 1000 < 0) {
            if (*0x8016000 != 0) {
                _printk(0x80022e4,*0x8016000,*0x8016000,*0x8016000);
            }
            unaff_x20 = 0x8001700;
            unaff_x19 = 0x80016e8;
            *0x80016e8 = *0x8001700;
            sym.restore_boost_cluster(1);
            *0x80016f0 = *0x8001708;
            sym.restore_boost_cluster(2);
            uVar6 = get_cluster_type(*0x8016000 & 0xffffffff);
            uVar11 = 0;
            if (uVar6 < 4) {
                uVar11 = uVar6;
            }
            sym.boost_cluster(uVar11,1,1,0);
            bVar4 = *0x8016000 != 0;
            if (bVar4) {
                _printk("thermal boost limit 1 %lu, 2 %lu\n",*0x80016e8,*0x80016f0);
            }
        }
        break;
    case 0x8010df0:
        iVar10 = sym._copy_from_user_1(&stack0xffffffffffffff98,arg2,8);
        uVar9 = uStack_68;
        if (iVar10 != 0) goto code_r0x08010ee0;
        iVar5 = uStack_68;
        unaff_x20 = uStack_68 & 0xffffffff;
        __rcu_read_lock();
        if (iVar5 == *(unaff_x19 + 0x5d8)) {
code_r0x08010e2c:
            if ((unaff_x19 != 0) && (unaff_x20 = unaff_x19 + 0x38, *unaff_x20 != 0)) {
                Hint_Prefetch(unaff_x20,2,0,1);
                do {
                    uVar11 = *unaff_x20;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
                    if (bVar4) {
                        *unaff_x20 = uVar11 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                if (uVar11 == 0) {
                    uVar7 = 2;
                }
                else {
                    if (-1 < (uVar11 + 1 | uVar11)) goto code_r0x08010e5c;
                    uVar7 = 1;
                }
                refcount_warn_saturate(unaff_x20,uVar7);
code_r0x08010e5c:
                __rcu_read_unlock();
                if (*0x8016000 != 0) {
                    _printk(0x8001ef9,*(unaff_x19 + 0x5d8),unaff_x19 + 0x7a8);
                }
                iVar10 = get_mi_task_struct(unaff_x19);
                if (iVar10 == 0) goto code_r0x08010e9c;
                goto code_r0x08011198;
            }
        }
        else if (0 < iVar5) {
            unaff_x19 = find_task_by_vpid(uVar9 & 0xffffffff);
            goto code_r0x08010e2c;
        }
        __rcu_read_unlock();
code_r0x08010f78:
        uVar7 = 0xffffffffffffffea;
        uVar9 = *0x8016000;
        goto code_r0x08011148;
    case 0x8010ecc:
        iVar10 = sym._copy_from_user_1(&stack0xffffffffffffff98,arg2,8);
        if (iVar10 != 0) goto code_r0x08010ee0;
        uStack_5c = uStack_68;
        uVar11 = (uStack_68._4_4_ * 0xfa) / 1000;
        if (0x18 < uVar11) {
            uVar11 = 0x19;
        }
        unaff_x19 = uVar11;
        if (*0x8016000 != 0) {
            _printk(0x8003864,uStack_68 & 0xffffffff,unaff_x19);
        }
        sym.mi_vip_task_req(&stack0xffffffffffffffa4,1,unaff_x19);
        break;
    case 0x8011148:
        goto code_r0x08011148;
    }
    while( true ) {
        uVar7 = 0;
        uVar9 = *0x8016000;
code_r0x08011148:
        *0x8016000 = uVar9;
        iVar10 = sp_el0;
        if (*(iVar10 + 0x5e0) == iStack_58) break;
        iVar10 = __stack_chk_fail(uVar7);
code_r0x08011198:
        Hint_Prefetch(0x8016f18,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(0x8016f18,0x10);
            if (bVar4) {
                cVar3 = ExclusiveMonitorsStatus();
                _obj.mi_dynamic_vip_num = _obj.mi_dynamic_vip_num + -1;
            }
        } while (cVar3 != '\0');
        *(iVar10 + 0x10) = *(iVar10 + 0x10) & 0xffff7fff;
code_r0x08010e9c:
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar11 = *unaff_x20;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar4) {
                *unaff_x20 = uVar11 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar11 == 1) {
            DataMemoryBarrier(2,1);
            __put_task_struct(unaff_x19);
        }
        else if (uVar11 < 1) {
            refcount_warn_saturate(unaff_x20,3);
        }
    }
    return;
}


// ===== sym.metis_mmap @ 0x08011230 (size 16) =====

ulong sym.metis_mmap(int64_t arg1)

{
    return 0;
}


// ===== sym.metis_open @ 0x08011240 (size 16) =====

ulong sym.metis_open(int64_t arg1)

{
    return 0;
}


// ===== sym.metis_release @ 0x08011250 (size 16) =====

ulong sym.metis_release(int64_t arg1)

{
    return 0;
}


// ===== sym.metis_set_vip_thread @ 0x08011260 (size 352) =====

void sym.metis_set_vip_thread(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    int iVar5;
    int64_t arg2_00;
    uint64_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return;
    }
    uVar7 = arg3;
    iVar5 = arg2;
    arg2_00 = get_mi_task_struct();
    if (arg2_00 == 0) {
        return;
    }
    iVar1 = _seq_read + 0xfa;
    *(arg2_00 + 0x198) = iVar1;
    if (iVar5 == 7) {
        uVar2 = 0;
        if (uVar7 != 0) {
            uVar2 = uVar7 * 0xfa - 0xfa;
        }
        uVar3 = 0x7436;
        if (uVar7 < 0x79) {
            uVar3 = uVar2;
        }
        uVar4 = *(arg2_00 + 0x10);
        arg1_00 = *(arg2_00 + 0x28);
        *(arg2_00 + 0x198) = iVar1 + uVar3;
    }
    else {
        if (iVar5 == 1) {
            sym.task_metis_boost(arg1,arg2_00);
            uVar7 = 0x200;
            goto code_r0x08011368;
        }
        if (iVar5 == 0) {
            sym.task_metis_boost(arg1,arg2_00);
            uVar7 = 0x100;
            goto code_r0x08011368;
        }
        uVar4 = *(arg2_00 + 0x10);
        arg1_00 = *(arg2_00 + 0x28);
    }
    if ((uVar4 >> 6 & 1) == 0) {
        uVar6 = sym.mi_vip_task(arg1_00);
        if ((uVar6 & 1) == 0) {
            if (*0x8016000 != 0) {
                _printk(0x8001dd9,arg1_00 + 0x7a8,*(arg1_00 + 0x5d8));
            }
            uVar7 = 0x400;
            *(arg2_00 + 0x10) = *(arg2_00 + 0x10) | 0x40;
            goto code_r0x08011368;
        }
    }
    if (*0x8016000 == 0) {
        uVar7 = 0x400;
    }
    else {
        _printk(0x800261f,arg1_00 + 0x7a8,*(arg1_00 + 0x5d8));
        uVar7 = 0x400;
    }
code_r0x08011368:
    *(arg2_00 + 0x10) = *(arg2_00 + 0x10) | uVar7;
    return;
}


// ===== sym.task_metis_boost @ 0x080113c0 (size 300) =====

//WARNING: Removing unreachable block (ram,0x080113f8)
//WARNING: Removing unreachable block (ram,0x08011400)
//WARNING: Removing unreachable block (ram,0x080114b8)
//WARNING: Removing unreachable block (ram,0x080114cc)

void sym.task_metis_boost(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg2 + 0x10);
    if ((uVar2 >> 0xb & 1) != 0) {
        uVar2 = uVar2 & 0xfffff7ff;
        *(arg2 + 0x10) = uVar2;
    }
    arg1_00 = *(arg2 + 0x28);
    if (((uVar2 >> 6 & 1) == 0) && (uVar1 = sym.mi_vip_task(arg1_00), (uVar1 & 1) == 0)) {
        if (*0x8016000 != 0) {
            _printk(0x8001dd9,arg1_00 + 0x7a8,*(arg1_00 + 0x5d8));
        }
        *(arg2 + 0x10) = *(arg2 + 0x10) | 0x40;
    }
    else if (*0x8016000 != 0) {
        _printk(0x800261f,arg1_00 + 0x7a8,*(arg1_00 + 0x5d8));
    }
    return;
}


// ===== sym.metis_update_top_task_info @ 0x080114ec (size 904) =====

void sym.metis_update_top_task_info(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    code *pcVar4;
    uint64_t in_x4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong *in_x18;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8016000 == 0) {
        return;
    }
    if ((*(*(arg2 + 0xaa0) + 0x3c) >> 1 & 1) != 0) {
        return;
    }
    if (*0x8001000 == 0) {
        *0x8001000 = 0;
    }
    uVar1 = *(arg2 + 0xba8);
    if (0x1f < uVar1) goto code_r0x08011870;
    iVar8 = *(__per_cpu_offset + uVar1 * 8);
    iVar6 = *(iVar8 + 0x8014df8);
    uVar5 = *(iVar8 + 0x8014e00);
    uVar11 = arg4 - iVar6;
    if ((arg4 < uVar5) || (uVar11 < 0)) {
        _printk_deferred("Metis-BUG CPU%d; wclock=%llu(0x%llx) l_clock=%llu(0x%llx), w_start=%llu(0x%llx)",uVar1,arg4
                         ,arg4,uVar5,uVar5,iVar6,iVar6);
    }
    uVar5 = *0x8001000;
    *(iVar8 + 0x8014e00) = arg4;
    if (uVar5 <= uVar11) {
        iVar2 = 0;
        if (uVar5 != 0) {
            iVar2 = uVar11 / uVar5;
        }
        *(iVar8 + 0x8014df8) = *(iVar8 + 0x8014df8) + iVar2 * uVar5;
        if (0x1f < *(arg2 + 0xba8)) goto code_r0x08011870;
        iVar6 = *(__per_cpu_offset + *(arg2 + 0xba8) * 8);
        if (iVar2 < 2) {
            *(iVar6 + 0x8014e18) = *(iVar6 + 0x8014e40);
            *(iVar6 + 0x8014e20) = *(iVar6 + 0x8014e48);
            *(iVar6 + 0x8014e28) = *(iVar6 + 0x8014e50);
            *(iVar6 + 0x8014e08) = *(iVar6 + 0x8014e30);
            *(iVar6 + 0x8014e10) = *(iVar6 + 0x8014e38);
            *(iVar6 + 0x8014e30) = 0;
            *(iVar6 + 0x8014de8) = *(iVar6 + 0x8014df0);
            *(iVar6 + 0x8014df0) = 0;
            *0x8001000 = *0x8001000 * 1000000000 >> 1;
        }
        else {
            *(iVar6 + 0x8014e08) = 0;
            *(iVar6 + 0x8014e30) = 0;
            *(iVar6 + 0x8014de8) = 0;
            *(iVar6 + 0x8014df0) = 0;
        }
    }
    if (0x1f < *(arg2 + 0xba8)) goto code_r0x08011870;
    iVar8 = *(__per_cpu_offset + *(arg2 + 0xba8) * 8);
    iVar6 = get_mi_task_struct(arg1);
    if (iVar6 == 0) {
        return;
    }
    uVar5 = *(iVar8 + 0x8014df8);
    uVar1 = 1000000000;
    if (*0x8001000 != 0) {
        uVar1 = *0x8001000;
    }
    uVar11 = uVar1;
    if ((arg3 & 1U) == 0) {
        if (uVar5 <= in_x4) {
            return;
        }
        if (*(arg2 + 0xba8) < 0x20) {
            iVar8 = *(__per_cpu_offset + *(arg2 + 0xba8) * 8);
            uVar1 = *(iVar6 + 0x1a8);
            uVar5 = uVar1;
            iVar6 = get_mi_task_struct(arg1);
            if (uVar1 == 0) {
                return;
            }
            if ((*(arg1 + 0x3c) >> 1 & 1) != 0) {
                return;
            }
            if (iVar6 == 0) {
                return;
            }
            if (*(iVar8 + 0x8014de8) <= uVar5) {
                *(iVar8 + 0x8014de8) = uVar5;
                *(iVar8 + 0x8014e08) = *(arg1 + 0x5d8);
                uVar9 = *(arg1 + 0x7a8);
                *(iVar8 + 0x8014e14) = *(arg1 + 0x7b0);
                *(iVar8 + 0x8014e0c) = uVar9;
            }
            *(iVar6 + 0x1a8) = 0;
            *(iVar6 + 0x1b0) = uVar5;
            return;
        }
        goto code_r0x08011870;
    }
    uVar10 = uVar5 - in_x4;
    if (uVar5 < in_x4 || uVar10 == 0) {
        if (0x1f < *(arg2 + 0xba8)) goto code_r0x08011870;
        iVar8 = *(__per_cpu_offset + *(arg2 + 0xba8) * 8);
        iVar6 = get_mi_task_struct(arg1);
        if (iVar6 == 0) {
            return;
        }
        iVar7 = *(iVar6 + 0x1a8);
        iVar3 = -in_x4;
        goto code_r0x0801179c;
    }
    iVar2 = 0;
    if (uVar11 != 0) {
        iVar2 = uVar10 / uVar11;
    }
    if (iVar2 == 0) {
        uVar10 = *(iVar6 + 0x1a8) + uVar10;
        if (*0x8001000 < uVar10) {
            uVar10 = *0x8001000;
        }
        *(iVar6 + 0x1a8) = uVar10;
        if (0x1f < *(arg2 + 0xba8)) goto code_r0x08011870;
        iVar6 = *(__per_cpu_offset + *(arg2 + 0xba8) * 8);
        iVar8 = get_mi_task_struct(arg1);
        if (((uVar10 != 0) && ((*(arg1 + 0x3c) >> 1 & 1) == 0)) && (iVar8 != 0)) {
            uVar11 = uVar10 & 0xffffffff;
            goto code_r0x0801174c;
        }
    }
    else {
        if (0x1f < *(arg2 + 0xba8)) goto code_r0x08011870;
        iVar6 = *(__per_cpu_offset + *(arg2 + 0xba8) * 8);
        iVar8 = get_mi_task_struct(arg1);
        if (((*(arg1 + 0x3c) >> 1 & 1) == 0) && (iVar8 != 0)) {
code_r0x0801174c:
            if (*(iVar6 + 0x8014de8) <= uVar11) {
                *(iVar6 + 0x8014de8) = uVar11;
                *(iVar6 + 0x8014e08) = *(arg1 + 0x5d8);
                uVar9 = *(arg1 + 0x7a8);
                *(iVar6 + 0x8014e14) = *(arg1 + 0x7b0);
                *(iVar6 + 0x8014e0c) = uVar9;
            }
            *(iVar8 + 0x1a8) = 0;
            *(iVar8 + 0x1b0) = uVar11;
        }
    }
    if (*(arg2 + 0xba8) < 0x20) {
        iVar8 = *(__per_cpu_offset + *(arg2 + 0xba8) * 8);
        iVar6 = get_mi_task_struct(arg1);
        if (iVar6 == 0) {
            return;
        }
        iVar7 = *(iVar6 + 0x1a8);
        iVar3 = -uVar5;
code_r0x0801179c:
        uVar11 = *0x8001000;
        uVar5 = iVar7 + arg4 + iVar3;
        *(iVar6 + 0x1a8) = uVar5;
        if (uVar11 < uVar5) {
            *(iVar6 + 0x1a8) = uVar11;
            uVar5 = uVar11;
        }
        if (*(iVar8 + 0x8014df0) < uVar5) {
            *(iVar8 + 0x8014df0) = uVar5;
            *(iVar8 + 0x8014e30) = *(arg1 + 0x5d8);
            uVar9 = *(arg1 + 0x7a8);
            *(iVar8 + 0x8014e3c) = *(arg1 + 0x7b0);
            *(iVar8 + 0x8014e34) = uVar9;
        }
        return;
    }
code_r0x08011870:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8011874);
    (*pcVar4)();
}


// ===== sym.mi_scheduler_tick_hook @ 0x08011874 (size 420) =====

void sym.mi_scheduler_tick_hook(int64_t arg1)

{
    code *pcVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8016000 != 0) {
        iVar6 = *0x8001000;
        iVar3 = get_mi_task_struct(*(arg1 + 0xaa0));
        if (0x1f < *(arg1 + 0xba8)) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x80119c8);
            (*pcVar1)();
        }
        if (iVar3 != 0) {
            iVar3 = *(__per_cpu_offset + *(arg1 + 0xba8) * 8);
            iVar4 = sym.fas_sched_clock();
            uVar7 = iVar4 - *(iVar3 + 0x8014dc8);
            if (uVar7 < iVar6 * 1000000000) {
                if (*0x8016000 != 0) {
                    _printk(0x80028a5);
                    _printk(0x80035f4,*(arg1 + 0xba8),*(*(arg1 + 0xaa0) + 0x5d8),uVar7);
                }
            }
            else {
                if (*0x8016000 != 0) {
                    _printk(0x80028a5);
                    _printk(0x80035f4,*(arg1 + 0xba8),*(*(arg1 + 0xaa0) + 0x5d8),uVar7);
                }
                iVar6 = 400;
                if (1 < *(*(arg1 + 0xaa0) + 0x420) - 1U) {
                    iVar6 = 0x1b8;
                }
                iVar6 = iVar6 + iVar3;
                *(obj.metis_runqueues + iVar6 + 0x268) = *(*(arg1 + 0xaa0) + 0x5d8);
                *(obj.metis_runqueues + iVar6 + 0x280) = uVar7;
                *(obj.metis_runqueues + iVar6 + 0x288) = iVar4;
                uVar5 = *(*(arg1 + 0xaa0) + 0x7a8);
                *(obj.metis_runqueues + iVar6 + 0x274) = *(*(arg1 + 0xaa0) + 0x7b0);
                *(obj.metis_runqueues + iVar6 + 0x26c) = uVar5;
                uVar2 = sym.get_thread_type(*(arg1 + 0xaa0));
                if (uVar2 == 1) {
                    *(iVar3 + 0x8014e5c) = *(iVar3 + 0x8014e5c) + 1;
                    if (*0x8001000 != 0) {
                        *(iVar3 + 0x8015210) = iVar4;
                        *(iVar3 + 0x8015208) = 0;
                    }
                }
                else {
                    iVar3 = uVar2 * 4 + iVar3;
                    *(obj.metis_runqueues + iVar3 + 0x98) = *(obj.metis_runqueues + iVar3 + 0x98) + 1;
                }
            }
        }
    }
    return;
}


// ===== sym.get_thread_type @ 0x08011a18 (size 120) =====

uint sym.get_thread_type(int64_t arg1)

{
    int64_t iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x420) - 1U < 2) {
        uVar2 = 0;
    }
    else {
        iVar1 = get_mi_task_struct();
        if ((iVar1 == 0) || ((*(iVar1 + 0x10) & 0x107020) == 0)) {
            uVar2 = 2;
            if (*(arg1 + 0x5d8) != 0) {
                uVar2 = 3;
            }
        }
        else {
            uVar2 = 1;
        }
    }
    return uVar2;
}


// ===== sym.mi_schedule_hook @ 0x08011a90 (size 1876) =====

void sym.mi_schedule_hook(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint uVar2;
    uint32_t uVar3;
    bool bVar4;
    code *pcVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    uint64_t uVar13;
    int64_t iVar14;
    ulong uVar15;
    uint64_t uVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    int64_t iVar19;
    int iVar20;
    uint64_t uVar21;
    code *pcVar22;
    uint64_t *puVar23;
    int64_t *piVar24;
    uint64_t *puVar25;
    int iVar26;
    uint64_t uVar27;
    ulong *in_x18;
    uint32_t uVar28;
    uint64_t uVar29;
    int64_t iVar30;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = sym.fas_sched_clock();
    if (*0x8016000 == 0) {
        return;
    }
    uVar17 = *(arg3 + 0xba8);
    iVar7 = get_mi_task_struct(arg2);
    if (0x1f < uVar17) goto code_r0x080121b8;
    if ((iVar7 == 0) || (*(iVar7 + 10) == '\0')) {
        bVar4 = false;
    }
    else {
        iVar30 = *(iVar7 + 0x1a0);
        iVar14 = *(__per_cpu_offset + uVar17 * 8);
        uVar29 = (uVar6 - iVar30) / 1000000000;
        uVar28 = uVar29;
        if (*(arg2 + 0x420) - 1U < 2) {
            if (*0x8016000 != 0) {
                _printk(0x80019f8,*(arg2 + 0x5d8),iVar30,uVar6,uVar29 & 0xffffffff,uVar17);
            }
            if (uVar28 < *0x8001000) {
code_r0x08011b60:
                bVar4 = false;
            }
            else {
                uVar17 = *(iVar14 + 0x8014de0) % 10;
                *(iVar14 + 0x8014de0) = uVar17;
                if (9 < uVar17) goto code_r0x080121b8;
                bVar4 = false;
                iVar30 = uVar17 * 0x18 + iVar14;
                *(obj.metis_runqueues + iVar30 + 0x548) = *(arg2 + 0x5d8);
                *(obj.metis_runqueues + iVar30 + 0x558) = uVar28;
                *(obj.metis_runqueues + iVar30 + 0x550) = uVar6;
                *(iVar14 + 0x8014de0) = uVar17 + 1;
            }
        }
        else {
            iVar19 = get_mi_task_struct(arg2);
            if (((iVar19 != 0) && ((*(iVar19 + 0x10) & 0x107020) != 0)) || (*(arg2 + 0x5d8) == 0)) {
                bVar4 = false;
                goto code_r0x08011d10;
            }
            if (*0x8016000 != 0) {
                _printk(0x8001cc2,*(arg2 + 0x5d8),iVar30,uVar6,uVar29 & 0xffffffff,uVar17);
            }
            if (uVar28 < *0x8001000) {
                if (uVar28 < *0x8001000 / 3) goto code_r0x08011b60;
                if (uVar28 < 3) {
                    if (4 < uVar28) goto code_r0x080121b8;
                    uVar29 = uVar29 & 0xffffffff;
                }
                else {
                    uVar29 = 3;
                }
                bVar4 = false;
            }
            else {
                uVar17 = *(iVar14 + 0x8014ddc) % 10;
                *(iVar14 + 0x8014ddc) = uVar17;
                if (9 < uVar17) goto code_r0x080121b8;
                uVar2 = *(iVar14 + 0x8014e08);
                iVar30 = uVar17 * 0x18 + iVar14;
                *(obj.metis_runqueues + iVar30 + 0x458) = *(arg2 + 0x5d8);
                uVar15 = *(iVar14 + 0x8014de8);
                *(obj.metis_runqueues + iVar30 + 0x468) = uVar28;
                *(obj.metis_runqueues + iVar30 + 0x638) = uVar2;
                *(obj.metis_runqueues + iVar30 + 0x460) = uVar6;
                *(obj.metis_runqueues + iVar30 + 0x648) = uVar15;
                *(obj.metis_runqueues + iVar30 + 0x640) = uVar6;
                *(iVar14 + 0x8014ddc) = uVar17 + 1;
                if (uVar28 < 3) {
                    if (4 < uVar28) goto code_r0x080121b8;
                    uVar29 = uVar29 & 0xffffffff;
                }
                else {
                    uVar29 = 3;
                }
                bVar4 = true;
            }
            iVar14 = uVar29 * 4 + iVar14;
            *(obj.metis_runqueues + iVar14 + 0xa8) = *(obj.metis_runqueues + iVar14 + 0xa8) + 1;
        }
        *(iVar7 + 10) = 0;
    }
code_r0x08011d10:
    uVar17 = *(arg3 + 0xba8);
    if (uVar17 < 0x20) {
        iVar7 = *(__per_cpu_offset + uVar17 * 8);
        pcVar5 = obj.metis_runqueues + iVar7;
        uVar28 = *(iVar7 + 0x8014dd0);
        uVar29 = uVar28;
        if (uVar28 < 0xb) {
            if (*(iVar7 + 0x8014dd8) == '\0') {
                uVar3 = *(iVar7 + 0x8014dd4);
                uVar9 = uVar3;
                if (0xb < uVar3) goto code_r0x080121b8;
                iVar14 = uVar6 - *(iVar7 + 0x8014dc8);
                *(pcVar5 + (uVar9 * 5 + 0x4d) * 8) = *(arg1 + 0x5d8);
                *(pcVar5 + (uVar9 * 5 + 0x50) * 8) = iVar14;
                *(pcVar5 + (uVar9 * 5 + 0x51) * 8) = uVar6;
                iVar20 = *0x8016000;
                uVar15 = *(arg1 + 0x7a8);
                *(pcVar5 + uVar9 * 0x28 + 0x274) = *(arg1 + 0x7b0);
                *(pcVar5 + uVar9 * 0x28 + 0x26c) = uVar15;
                *(iVar7 + 0x8014dd4) = uVar3 + 1 + ((uVar3 + 1 & 0xff) / 10) * -10 & 0xff;
                if ((iVar20 != 0) && (*0x8016000 < 1000)) {
                    _printk(0x8001f62,uVar17,uVar9,*(arg1 + 0x5d8),uVar6);
                    *0x8016000 = *0x8016000 + 1;
                }
                if (*(arg1 + 0x420) - 1U < 2) {
                    iVar30 = 0;
                }
                else {
                    iVar30 = get_mi_task_struct(arg1);
                    if ((iVar30 == 0) || ((*(iVar30 + 0x10) & 0x107020) == 0)) {
                        iVar30 = 2;
                        if (*(arg1 + 0x5d8) != 0) {
                            iVar30 = 3;
                        }
                    }
                    else {
                        iVar30 = 1;
                    }
                }
                uVar18 = *pcVar5;
                uVar9 = uVar18 + iVar14;
                uVar16 = *(pcVar5 + (uVar29 * 5 + 0x1b) * 8) + 300000000;
                if (uVar16 < uVar9) {
                    uVar21 = ((uVar9 - 300000000) - *(pcVar5 + (uVar29 * 5 + 0x1b) * 8)) / 300000000;
                    iVar20 = uVar21;
                    if (iVar20 == 0) {
                        iVar19 = iVar7 + 0x8014e98 + uVar29 * 0x28 + iVar30 * 8;
                        iVar11 = *(iVar7 + 0x8014e90);
                        uVar17 = uVar28 + 1 + ((uVar28 + 1 & 0xff) / 10) * -10;
                        piVar24 = iVar7 + 0x8014e78;
                        iVar12 = *piVar24;
                        puVar25 = iVar7 + 0x8014e98 + (uVar17 & 0xff) * 0x28;
                        iVar8 = *(iVar7 + 0x8014e80);
                        iVar10 = *(iVar7 + 0x8014e88);
                        *(iVar19 + 8) = *(iVar19 + 8) + (uVar16 - uVar18);
                        uVar29 = puVar25[2];
                        uVar21 = puVar25[3];
                        puVar23 = puVar25 + 1;
                        uVar13 = *puVar23;
                        puVar25[2] = 0;
                        puVar25[3] = 0;
                        uVar27 = puVar25[4];
                        puVar25[4] = 0;
                        *puVar23 = 0;
                        puVar23[iVar30] = iVar14 - (uVar16 - uVar18);
                        *(iVar7 + 0x8014e80) = iVar8 - uVar29;
                        *(iVar7 + 0x8014e88) = iVar10 - uVar21;
                        *(iVar7 + 0x8014e90) = iVar11 - uVar27;
                        *piVar24 = iVar12 - uVar13;
                        *(iVar7 + 0x8014dd0) = uVar17 & 0xff;
                        iVar19 = piVar24[iVar30];
                        *puVar25 = uVar16;
                        piVar24[iVar30] = iVar19 + iVar14;
                        *pcVar5 = uVar9;
                    }
                    else {
                        iVar19 = uVar16 - uVar18;
                        iVar1 = uVar28 + iVar20 + 1;
                        iVar26 = uVar28 + 1;
                        *(pcVar5 + (uVar29 * 5 + iVar30 + 0x1c) * 8) =
                             *(pcVar5 + (uVar29 * 5 + iVar30 + 0x1c) * 8) + iVar19;
                        if (iVar1 <= iVar26) {
    //WARNING: Does not return
                            pcVar5 = SoftwareBreakpoint(1,0x80121e4);
                            (*pcVar5)();
                        }
                        do {
                            uVar17 = iVar26 % 10;
                            if (10 < uVar17) goto code_r0x080121b8;
                            iVar26 = iVar26 + 1;
                            uVar28 = uVar21 - 1;
                            uVar21 = uVar28;
                            iVar11 = *(iVar7 + 0x8014e78) - *(pcVar5 + (uVar17 * 5 + 0x1c) * 8);
                            *(iVar7 + 0x8014e78) = iVar11;
                            iVar8 = *(iVar7 + 0x8014e80) - *(pcVar5 + (uVar17 * 5 + 0x1d) * 8);
                            *(iVar7 + 0x8014e80) = iVar8;
                            iVar12 = *(iVar7 + 0x8014e88) - *(pcVar5 + (uVar17 * 5 + 0x1e) * 8);
                            *(iVar7 + 0x8014e88) = iVar12;
                            iVar10 = *(iVar7 + 0x8014e90) - *(pcVar5 + (uVar17 * 5 + 0x1f) * 8);
                            *(iVar7 + 0x8014e90) = iVar10;
                            *(pcVar5 + (uVar17 * 5 + 0x1b) * 8) = uVar16;
                            *(pcVar5 + (uVar17 * 5 + 0x1c) * 8) = 0;
                            uVar16 = uVar16 + 300000000;
                            *(pcVar5 + (uVar17 * 5 + 0x1e) * 8) = 0;
                            *(pcVar5 + (uVar17 * 5 + 0x1f) * 8) = 0;
                            *(pcVar5 + (uVar17 * 5 + 0x1d) * 8) = 0;
                            *(pcVar5 + (uVar17 * 5 + 0x1c) * 8 + iVar30 * 8) = 300000000;
                        } while (uVar28 != 0);
                        uVar17 = iVar1 % 10;
                        if (10 < uVar17) goto code_r0x080121b8;
                        pcVar22 = pcVar5 + (uVar17 * 5 + 0x1c) * 8;
                        piVar24 = iVar7 + 0x8014e78;
                        *piVar24 = iVar11 - *pcVar22;
                        *(iVar7 + 0x8014e80) = iVar8 - *(pcVar5 + (uVar17 * 5 + 0x1d) * 8);
                        *(iVar7 + 0x8014e88) = iVar12 - *(pcVar5 + (uVar17 * 5 + 0x1e) * 8);
                        *(iVar7 + 0x8014e90) = iVar10 - *(pcVar5 + (uVar17 * 5 + 0x1f) * 8);
                        *(pcVar5 + (uVar17 * 5 + 0x1e) * 8) = 0;
                        *(pcVar5 + (uVar17 * 5 + 0x1f) * 8) = 0;
                        *pcVar22 = 0;
                        *(pcVar5 + (uVar17 * 5 + 0x1d) * 8) = 0;
                        *(pcVar22 + iVar30 * 8) = (iVar14 - iVar19) + iVar20 * -300000000;
                        *pcVar5 = uVar9;
                        *(iVar7 + 0x8014dd0) = uVar17;
                        iVar19 = piVar24[iVar30];
                        *(pcVar5 + (uVar17 * 5 + 0x1b) * 8) = uVar16;
                        piVar24[iVar30] = iVar19 + iVar14;
                    }
                }
                else {
                    *(pcVar5 + (uVar29 * 5 + iVar30 + 0x1c) * 8) = *(pcVar5 + (uVar29 * 5 + iVar30 + 0x1c) * 8) + iVar14
                    ;
                    *pcVar5 = uVar9;
                    *(pcVar5 + (iVar30 + 0x17) * 8) = *(pcVar5 + (iVar30 + 0x17) * 8) + iVar14;
                }
            }
            else {
                if (*0x8016000 != 0) {
                    _printk(0x8002eac);
                }
                *(iVar7 + 0x8014e98) = uVar6;
                *pcVar5 = uVar6;
                *(iVar7 + 0x8014dd8) = 0;
            }
            if (bVar4) {
                uVar9 = *(iVar7 + 0x8014e78);
                uVar16 = *(iVar7 + 0x8014e80);
                uVar29 = uVar16;
                if (uVar9 >= uVar16) {
                    uVar29 = uVar9;
                }
                uVar21 = *(iVar7 + 0x8014e88);
                uVar18 = uVar21;
                if (uVar21 <= uVar29) {
                    uVar18 = uVar29;
                }
                uVar17 = 2;
                if (uVar21 <= uVar29) {
                    uVar17 = uVar9 < uVar16;
                }
                uVar28 = 3;
                if (*(iVar7 + 0x8014e90) <= uVar18) {
                    uVar28 = uVar17;
                }
                if (uVar28 == 1) {
                    *(iVar7 + 0x8014e5c) = *(iVar7 + 0x8014e5c) + 1;
                    if (*0x8001000 != 0) {
                        *(iVar7 + 0x8015210) = uVar6;
                        *(iVar7 + 0x8015208) = 0;
                    }
                }
                else {
                    *(pcVar5 + uVar28 * 4 + 0x98) = *(pcVar5 + uVar28 * 4 + 0x98) + 1;
                }
            }
            *(iVar7 + 0x8014dc8) = uVar6;
            return;
        }
    }
code_r0x080121b8:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x80121bc);
    (*pcVar5)();
}


// ===== sym.metis_doublecyc_init @ 0x080121e4 (size 112) =====

ulong sym.metis_doublecyc_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8016000 = proc_create("show_mi_runtime_info",0x1b4,0,obj.runtime_info_debug_proc_ops.llvm.9401989785295868975)
    ;
    atomic_notifier_chain_register
              (panic_notifier_list,reloc.kmsg_runtime_info_debug_show.2b6473c3def53e73fda9ad8cc2d103f8.cfi_jt);
    _printk(obj..str.3.llvm.9401989785295868975,"metis_doublecyc_init");
    return 0;
}


// ===== sym.metis_doublecyc_exit @ 0x08012254 (size 100) =====

void sym.metis_doublecyc_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8016000 != 0) {
        proc_remove();
    }
    *0x8016000 = 0;
    atomic_notifier_chain_unregister
              (panic_notifier_list,reloc.kmsg_runtime_info_debug_show.2b6473c3def53e73fda9ad8cc2d103f8.cfi_jt);
    _printk(0x80032e2,"metis_doublecyc_exit");
    return;
}


// ===== sym.runtime_info_debug_open @ 0x080122b8 (size 68) =====

void sym.runtime_info_debug_open(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = PDE_DATA();
    single_open(arg1,sym.runtime_info_debug_show.2b6473c3def53e73fda9ad8cc2d103f8.cfi_jt,uVar1);
    return;
}


// ===== sym.runtime_info_debug_show @ 0x080122fc (size 1224) =====

ulong sym.runtime_info_debug_show(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    code *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *arg1 = seq_read;
    do {
        if (0x805efff < uVar3) {
            seq_printf(arg1,0x8002f5b);
            return 0;
        }
        if (0x1f < uVar3) {
code_r0x080127c0:
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x80127c4);
            (*pcVar2)();
        }
        iVar4 = *(__per_cpu_offset + uVar3 * 8);
        pcVar2 = obj.metis_runqueues + iVar4;
        seq_printf(arg1,"\ncpu_index: %d\n",uVar3);
        seq_printf(arg1,"%-4s: %-10lu number_of_times:%6lu\n",0x80037e4,*(iVar4 + 0x8014e78),*(iVar4 + 0x8014e58));
        seq_printf(arg1,"%-4s: %-10lu number_of_times:%6lu\n",0x80026b2,*(iVar4 + 0x8014e80),*(iVar4 + 0x8014e5c));
        seq_printf(arg1,"%-4s: %-10lu number_of_times:%6lu\n","IDLE",*(iVar4 + 0x8014e88),*(iVar4 + 0x8014e60));
        seq_printf(arg1,"%-4s: %-10lu number_of_times:%6lu\n","NORM",*(iVar4 + 0x8014e90),*(iVar4 + 0x8014e64));
        seq_printf(arg1,0x8002f5b);
        seq_printf(arg1,"\n-----the longest running tasks in the 3s of the current time-----\n");
        seq_printf(arg1,"top_task_pid:%-6ld",*(iVar4 + 0x8014e08));
        seq_printf(arg1,"top_task_runtime:%-12ld",*(iVar4 + 0x8014de8));
        seq_printf(arg1,0x8002f5b);
        seq_printf(arg1,0x8002f5b);
        seq_printf(arg1,"-----rq recently scheduled tasks-----\n");
        uVar1 = *(iVar4 + 0x8014dd4);
        uVar5 = uVar1;
        if (uVar1 < 10) {
            iVar6 = uVar1;
            pcVar7 = pcVar2 + uVar5 * 0x28 + 0x280;
            do {
                if (0xb < iVar6) goto code_r0x080127c0;
                seq_printf(arg1,"pid:%-6d",*(pcVar7 + -0x18));
                seq_printf(arg1,"comm:%15s",pcVar7 + -0x14);
                seq_printf(arg1,"  runtime(ns):%-12llu\n",*pcVar7);
                iVar6 = iVar6 + 1;
                pcVar7 = pcVar7 + 0x28;
            } while (iVar6 != 10);
            uVar5 = *(iVar4 + 0x8014dd4);
            if (0 < *(iVar4 + 0x8014dd4)) goto code_r0x0801263c;
        }
        else {
code_r0x0801263c:
            iVar6 = 0;
            do {
                if (iVar6 == 0x1e0) goto code_r0x080127c0;
                seq_printf(arg1,"pid:%-6d",*(pcVar2 + iVar6 + 0x268));
                seq_printf(arg1,"comm:%15s",pcVar2 + iVar6 + 0x26c);
                seq_printf(arg1,"  runtime(ns):%-12llu\n",*(pcVar2 + iVar6 + 0x280));
                iVar6 = iVar6 + 0x28;
            } while (uVar5 * 0x28 - iVar6 != 0);
        }
        seq_printf(arg1,"-----abnorm rt_tasks-----\n");
        uVar1 = *(iVar4 + 0x8014de0);
        uVar5 = uVar1;
        if (uVar1 < 10) {
            iVar6 = uVar1;
            pcVar7 = pcVar2 + uVar5 * 0x18 + 0x558;
            do {
                if (9 < iVar6) goto code_r0x080127c0;
                if (*(pcVar7 + -0x10) != 0) {
                    seq_printf(arg1,"pid:%-6ld");
                    seq_printf(arg1,"time(s):%-4ld",*pcVar7);
                    seq_printf(arg1,"happen_time(ns):%-12lld\n",*(pcVar7 + -8));
                }
                iVar6 = iVar6 + 1;
                pcVar7 = pcVar7 + 0x18;
            } while (iVar6 != 10);
            uVar5 = *(iVar4 + 0x8014de0);
            if (0 < *(iVar4 + 0x8014de0)) goto code_r0x08012720;
        }
        else {
code_r0x08012720:
            iVar6 = 0;
            do {
                if (iVar6 == 0xf0) goto code_r0x080127c0;
                if (*(pcVar2 + iVar6 + 0x548) != 0) {
                    seq_printf(arg1,"pid:%-6ld");
                    seq_printf(arg1,"time(s):%-4ld",*(pcVar2 + iVar6 + 0x558));
                    seq_printf(arg1,"happen_time(ns):%-12lld\n",*(pcVar2 + iVar6 + 0x550));
                }
                iVar6 = iVar6 + 0x18;
            } while (uVar5 * 0x18 - iVar6 != 0);
        }
        seq_printf(arg1,"-----abnorml norm_task-----\n");
        sym.do_print_record_abnorm_task_info(arg1,*(iVar4 + 0x8014ddc),10,pcVar2);
        sym.do_print_record_abnorm_task_info(arg1,0,*(iVar4 + 0x8014ddc),pcVar2);
        seq_printf(arg1,"\n1~2s :%2d\n",*(iVar4 + 0x8014e6c));
        seq_printf(arg1,"2~3s :%2d\n",*(iVar4 + 0x8014e70));
        seq_printf(arg1," >3s :%2d\n",*(iVar4 + 0x8014e74));
        seq_printf(arg1,"\n-----tasks running continuously for more than 3s-----\n");
        seq_printf(arg1,"rt_task_pid:%-6ld",*(iVar4 + 0x80151b8));
        seq_printf(arg1,"  runlongtime(ns):%-12llu",*(iVar4 + 0x80151d0));
        seq_printf(arg1,"  happen_time(ns):%-12llu\n",*(iVar4 + 0x80151d8));
        seq_printf(arg1,"other_task_pid:%-6ld",*(iVar4 + 0x80151e0));
        seq_printf(arg1,"  runlongtime(ns):%-12llu",*(iVar4 + 0x80151f8));
        seq_printf(arg1,"  happen_time(ns):%-12llu",*(iVar4 + 0x8015200));
        seq_printf(arg1,0x8002f5b);
        uVar3 = cpumask_next(uVar3,__cpu_possible_mask);
        *arg1 = seq_read;
    } while( true );
}


// ===== sym.do_print_record_abnorm_task_info @ 0x080127c4 (size 268) =====

void sym.do_print_record_abnorm_task_info(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    uint64_t uVar3;
    int64_t iVar4;
    int *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = arg2;
    if (iVar2 < arg3) {
        uVar3 = arg2 & 0xffffffff;
        iVar4 = arg3 - iVar2;
        piVar5 = arg4 + iVar2 * 0x18 + 0x458;
        do {
            if (9 < uVar3) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x80128d0);
                (*pcVar1)();
            }
            if (*piVar5 != 0) {
                seq_printf(arg1,"pid:%-6ld");
                seq_printf(arg1,"time(s):%-4ld",*(piVar5 + 4));
                seq_printf(arg1,"top_task_pid:%-6ld",piVar5[0x78]);
                seq_printf(arg1,"top_task_runtime(ns):%-12llu",*(piVar5 + 0x7c));
                seq_printf(arg1," happen_time(ns):%-12llu\n",*(piVar5 + 0x7a));
            }
            iVar4 = iVar4 + -1;
            uVar3 = uVar3 + 1;
            piVar5 = piVar5 + 6;
        } while (iVar4 != 0);
    }
    return;
}


// ===== sym.kmsg_runtime_info_debug_show @ 0x080128d0 (size 1000) =====

ulong sym.kmsg_runtime_info_debug_show(void)

{
    int iVar1;
    int64_t iVar2;
    code *pcVar3;
    bool bVar4;
    uint32_t uVar5;
    ulong extraout_x8;
    ulong extraout_x8_00;
    int64_t iVar6;
    ulong *in_x18;
    ulong *unaff_x19;
    ulong *puVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *unaff_x19 = extraout_x8;
    if (uVar5 < extraout_x8) {
        do {
            puVar7 = uVar5;
            if (0x1f < uVar5) goto code_r0x08012cb4;
            iVar6 = *(__per_cpu_offset + puVar7 * 8);
            if ((((*(iVar6 + 0x8014e58) != 0) || (*(iVar6 + 0x8014e5c) != 0)) || (*(iVar6 + 0x8014e60) != 0)) ||
               (*(iVar6 + 0x8014e64) != 0)) {
                _printk(0x80038c5,puVar7);
                uVar5 = *(iVar6 + 0x8014de0);
                if (uVar5 < 10) {
                    iVar8 = uVar5;
                    pcVar3 = obj.metis_runqueues + uVar5 * 0x18 + iVar6 + 0x550;
                    do {
                        if (9 < iVar8) goto code_r0x08012cb4;
                        if (*(pcVar3 + -8) != 0) {
                            _printk(0x80028ce,*(pcVar3 + -8),*pcVar3);
                        }
                        iVar8 = iVar8 + 1;
                        pcVar3 = pcVar3 + 0x18;
                    } while (iVar8 != 10);
                    uVar5 = *(iVar6 + 0x8014de0);
                    if (0 < uVar5) goto code_r0x08012a00;
                }
                else {
code_r0x08012a00:
                    if (*(iVar6 + 0x8015308) != 0) {
                        _printk(0x80028ce,*(iVar6 + 0x8015308),*(iVar6 + 0x8015310));
                    }
                    if (uVar5 != 1) {
                        if (*(iVar6 + 0x8015320) != 0) {
                            _printk(0x80028ce,*(iVar6 + 0x8015320),*(iVar6 + 0x8015328));
                        }
                        if (uVar5 != 2) {
                            if (*(iVar6 + 0x8015338) != 0) {
                                _printk(0x80028ce,*(iVar6 + 0x8015338),*(iVar6 + 0x8015340));
                            }
                            if (uVar5 != 3) {
                                if (*(iVar6 + 0x8015350) != 0) {
                                    _printk(0x80028ce,*(iVar6 + 0x8015350),*(iVar6 + 0x8015358));
                                }
                                if (uVar5 != 4) {
                                    if (*(iVar6 + 0x8015368) != 0) {
                                        _printk(0x80028ce,*(iVar6 + 0x8015368),*(iVar6 + 0x8015370));
                                    }
                                    if (uVar5 != 5) {
                                        if (*(iVar6 + 0x8015380) != 0) {
                                            _printk(0x80028ce,*(iVar6 + 0x8015380),*(iVar6 + 0x8015388));
                                        }
                                        if (uVar5 != 6) {
                                            if (*(iVar6 + 0x8015398) != 0) {
                                                _printk(0x80028ce,*(iVar6 + 0x8015398),*(iVar6 + 0x80153a0));
                                            }
                                            if (uVar5 != 7) {
                                                if (*(iVar6 + 0x80153b0) != 0) {
                                                    _printk(0x80028ce,*(iVar6 + 0x80153b0),*(iVar6 + 0x80153b8));
                                                }
                                                if (uVar5 != 8) {
                                                    if (*(iVar6 + 0x80153c8) != 0) {
                                                        _printk(0x80028ce,*(iVar6 + 0x80153c8),*(iVar6 + 0x80153d0));
                                                    }
                                                    if (uVar5 != 9) {
                                                        if (*(iVar6 + 0x80153e0) != 0) {
                                                            _printk(0x80028ce,*(iVar6 + 0x80153e0),
                                                                    *(iVar6 + 0x80153e8));
                                                        }
                                                        if (uVar5 != 10) {
code_r0x08012cb4:
    //WARNING: Does not return
                                                            pcVar3 = SoftwareBreakpoint(0x5512,0x8012cb8);
                                                            (*pcVar3)();
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
                }
                uVar5 = *(iVar6 + 0x8014ddc);
                if (uVar5 < 10) {
                    iVar8 = uVar5 + -10;
                    pcVar3 = obj.metis_runqueues + uVar5 * 0x18 + iVar6 + 0x458;
                    do {
                        if (9 < uVar5) goto code_r0x08012cb4;
                        if (*pcVar3 != 0) {
                            _printk(0x8002472,*pcVar3,*(pcVar3 + 0x10),*(pcVar3 + 0x1e0),*(pcVar3 + 0x1e8));
                        }
                        bVar4 = iVar8 != -1;
                        iVar8 = iVar8 + 1;
                        pcVar3 = pcVar3 + 0x18;
                        uVar5 = uVar5 + 1;
                    } while (bVar4);
                    uVar5 = *(iVar6 + 0x8014ddc);
                    if (0 < uVar5) goto code_r0x08012c40;
                }
                else {
code_r0x08012c40:
                    iVar8 = 0;
                    do {
                        if (iVar8 == 0xf0) goto code_r0x08012cb4;
                        iVar2 = iVar8 + iVar6;
                        iVar1 = *(obj.metis_runqueues + iVar2 + 0x458);
                        if (iVar1 != 0) {
                            _printk(0x8002472,iVar1,*(obj.metis_runqueues + iVar2 + 0x468),
                                    *(obj.metis_runqueues + iVar2 + 0x638),*(obj.metis_runqueues + iVar2 + 0x640));
                        }
                        iVar8 = iVar8 + 0x18;
                    } while (uVar5 * 0x18 - iVar8 != 0);
                }
                if (*(iVar6 + 0x80151b8) != 0) {
                    _printk(0x8001fb8,*(iVar6 + 0x80151b8),*(iVar6 + 0x80151d0),*(iVar6 + 0x80151d8));
                }
            }
            uVar5 = cpumask_next(puVar7,__cpu_possible_mask);
            *puVar7 = extraout_x8_00;
        } while (uVar5 < extraout_x8_00);
    }
    return 0;
}


// ===== sym.metis_set_common_persist_vip @ 0x08012cb8 (size 164) =====

void sym.metis_set_common_persist_vip(int64_t arg1)

{
    uint32_t arg1_00;
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8001b40);
    }
    else {
        arg1_00 = *(arg1 + 0x5d8);
        _raw_spin_lock(obj.persist_vip_lock);
        iVar1 = sym.__set_common_persist_vip(arg1_00,arg1);
        _raw_spin_unlock(obj.persist_vip_lock);
        if (iVar1 == 0) {
            _printk(0x8002018,arg1_00,arg1 + 0x7a8);
        }
        else {
            _printk(0x8002edb,arg1_00,iVar1);
        }
    }
    return;
}


// ===== sym.__set_common_persist_vip @ 0x08012d5c (size 612) =====

//WARNING: Removing unreachable block (ram,0x08012dd0)

ulong sym.__set_common_persist_vip(uint32_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((*0x8016000 == arg1) || (*0x8016000 == arg1)) || (*0x8016000 == arg1)) || (*0x8016000 == arg1)) {
        return 0xffffffef;
    }
    uVar3 = 3;
    if (*0x8016000 != 0 || -1 < -(*0x8016000 != 0)) {
        uVar3 = -(*0x8016000 != 0);
    }
    if (*0x8016000 == arg1) {
        return 0xffffffef;
    }
    uVar2 = 4;
    if (*0x8016000 != 0 || -1 < uVar3) {
        uVar2 = uVar3;
    }
    if (*0x8016000 == arg1) {
        return 0xffffffef;
    }
    uVar3 = 5;
    if (*0x8016000 != 0 || -1 < uVar2) {
        uVar3 = uVar2;
    }
    if (*0x8016000 == arg1) {
        return 0xffffffef;
    }
    uVar2 = 6;
    if (*0x8016000 != 0 || -1 < uVar3) {
        uVar2 = uVar3;
    }
    if (*0x8016000 == arg1) {
        return 0xffffffef;
    }
    uVar3 = 7;
    if (*0x8016000 != 0 || -1 < uVar2) {
        uVar3 = uVar2;
    }
    if (uVar3 < 0) {
        return 0xffffffe4;
    }
    puVar1 = arg2 + 0x38;
    *(obj.persist_vip_pids + uVar3 * 4) = arg1;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
            *puVar1 = uVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    if (uVar2 == 0) {
        uVar7 = 2;
    }
    else {
        if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08012ee4;
        uVar7 = 1;
    }
    refcount_warn_saturate(puVar1,uVar7);
code_r0x08012ee4:
    iVar6 = get_mi_task_struct(arg2);
    if (iVar6 == 0) {
        uVar7 = 0xfffffff2;
        *(obj.persist_vip_pids + uVar3 * 4) = 0;
    }
    else {
        uVar7 = 0;
        *(iVar6 + 0x10) = *(iVar6 + 0x10) | 0x100000;
    }
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar3 = *puVar1;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
            *puVar1 = uVar3 - 1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    if (uVar3 == 1) {
        DataMemoryBarrier(2,1);
        __put_task_struct(arg2);
        return uVar7;
    }
    if (uVar3 < 1) {
        refcount_warn_saturate(puVar1,3);
        return uVar7;
    }
    return uVar7;
}


// ===== sym.metis_common_api_init @ 0x08012fc0 (size 16) =====

ulong sym.metis_common_api_init(int64_t arg1)

{
    return 0;
}


// ===== sym.metis_common_api_exit @ 0x08012fd0 (size 12) =====

void sym.metis_common_api_exit(void)

{
    return;
}


// ===== sym.set_common_persist_vip_task @ 0x08012fdc (size 224) =====

int sym.set_common_persist_vip_task(int64_t arg1)

{
    bool bVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    int iVar7;
    int iVar8;
    int64_t iVar9;
    uint *puVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    uStack_2c = 0;
    iVar7 = sscanf(arg1,0x8002100,&uStack_2c);
    iVar8 = -0x16;
    if ((iVar7 == 1) && (uStack_2c != 0)) {
        __rcu_read_lock();
        iVar9 = find_task_by_vpid(uStack_2c);
        if (iVar9 == 0) {
            iVar8 = -3;
        }
        else {
            _raw_spin_lock(obj.persist_vip_lock);
            iVar8 = sym.__set_common_persist_vip(uStack_2c,iVar9);
            _raw_spin_unlock(obj.persist_vip_lock);
        }
        __rcu_read_unlock();
        _printk(0x8002a7b,uStack_2c,iVar8);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_28) {
        puVar10 = __stack_chk_fail();
        *extraout_x18 = sym.get_common_persist_vip_task;
        _raw_spin_lock(obj.persist_vip_lock);
        bVar6 = *0x8016000 == 0;
        if (*0x8016000 == 0) {
            iVar7 = 0;
        }
        else {
            iVar7 = sprintf(puVar10,0x800330f);
        }
        bVar1 = *0x8016000 != 0;
        if (bVar1) {
            iVar8 = sprintf(puVar10 + iVar7,0x800330f);
            iVar7 = iVar8 + iVar7;
        }
        bVar2 = *0x8016000 != 0;
        if (bVar2) {
            iVar8 = sprintf(puVar10 + iVar7,0x800330f);
            iVar7 = iVar8 + iVar7;
        }
        bVar3 = *0x8016000 != 0;
        if (bVar3) {
            iVar8 = sprintf(puVar10 + iVar7,0x800330f);
            iVar7 = iVar8 + iVar7;
        }
        bVar4 = *0x8016000 != 0;
        if (bVar4) {
            iVar8 = sprintf(puVar10 + iVar7,0x800330f);
            iVar7 = iVar8 + iVar7;
        }
        bVar5 = *0x8016000 != 0;
        if (bVar5) {
            iVar8 = sprintf(puVar10 + iVar7,0x800330f);
            iVar7 = iVar8 + iVar7;
        }
        if (*0x8016000 == 0) {
            _raw_spin_unlock(obj.persist_vip_lock);
            if (!bVar5 && (!bVar4 && (!bVar3 && (!bVar2 && (!bVar1 && bVar6))))) {
                *(puVar10 + 3) = 0xa7974;
                *puVar10 = 0x74706d65;
                return 6;
            }
        }
        else {
            iVar8 = sprintf(puVar10 + iVar7,0x800330f);
            iVar7 = iVar8 + iVar7;
            if (*0x8016000 != 0) {
                iVar8 = sprintf(puVar10 + iVar7,0x800330f);
                iVar7 = iVar8 + iVar7;
            }
            _raw_spin_unlock(obj.persist_vip_lock);
        }
        if (0 < iVar7) {
            *(puVar10 + (iVar7 - 1)) = 10;
        }
        return iVar7;
    }
    return iVar8;
}


// ===== sym.get_common_persist_vip_task @ 0x080130bc (size 452) =====

int sym.get_common_persist_vip_task(int64_t arg1)

{
    bool bVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    int iVar7;
    int iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.persist_vip_lock);
    bVar6 = *0x8016000 == 0;
    if (*0x8016000 == 0) {
        iVar7 = 0;
    }
    else {
        iVar7 = sprintf(arg1,0x800330f);
    }
    bVar1 = *0x8016000 != 0;
    if (bVar1) {
        iVar8 = sprintf(arg1 + iVar7,0x800330f);
        iVar7 = iVar8 + iVar7;
    }
    bVar2 = *0x8016000 != 0;
    if (bVar2) {
        iVar8 = sprintf(arg1 + iVar7,0x800330f);
        iVar7 = iVar8 + iVar7;
    }
    bVar3 = *0x8016000 != 0;
    if (bVar3) {
        iVar8 = sprintf(arg1 + iVar7,0x800330f);
        iVar7 = iVar8 + iVar7;
    }
    bVar4 = *0x8016000 != 0;
    if (bVar4) {
        iVar8 = sprintf(arg1 + iVar7,0x800330f);
        iVar7 = iVar8 + iVar7;
    }
    bVar5 = *0x8016000 != 0;
    if (bVar5) {
        iVar8 = sprintf(arg1 + iVar7,0x800330f);
        iVar7 = iVar8 + iVar7;
    }
    if (*0x8016000 == 0) {
        _raw_spin_unlock(obj.persist_vip_lock);
        if (!bVar5 && (!bVar4 && (!bVar3 && (!bVar2 && (!bVar1 && bVar6))))) {
            *(arg1 + 3) = 0xa7974;
            *arg1 = 0x74706d65;
            return 6;
        }
    }
    else {
        iVar8 = sprintf(arg1 + iVar7,0x800330f);
        iVar7 = iVar8 + iVar7;
        if (*0x8016000 != 0) {
            iVar8 = sprintf(arg1 + iVar7,0x800330f);
            iVar7 = iVar8 + iVar7;
        }
        _raw_spin_unlock(obj.persist_vip_lock);
    }
    if (0 < iVar7) {
        *(arg1 + (iVar7 - 1)) = 10;
    }
    return iVar7;
}


// ===== sym.set_clear_persist_vip_task @ 0x08013280 (size 600) =====

void sym.set_clear_persist_vip_task(int64_t arg1)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    code *pcVar8;
    ulong *in_x18;
    int64_t unaff_x19;
    uint32_t *unaff_x20;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    iStack_2c = 0;
    iVar4 = sscanf(arg1,0x8002100,&iStack_2c);
    uVar5 = 0xffffffea;
    iVar6 = unaff_x19;
    if (iVar4 != 1) goto code_r0x08013468;
    if (iStack_2c == 0) goto code_r0x08013468;
    _raw_spin_lock(obj.persist_vip_lock);
    pcVar8 = obj.persist_vip_pids;
    if (((((_obj.persist_vip_pids != iStack_2c) && (pcVar8 = 0x8016f94, *0x8016f94 != iStack_2c)) &&
         (pcVar8 = 0x8016f98, *0x8016f98 != iStack_2c)) &&
        ((pcVar8 = 0x8016f9c, *0x8016f9c != iStack_2c && (pcVar8 = 0x8016fa0, *0x8016fa0 != iStack_2c)))) &&
       ((pcVar8 = 0x8016fa4, *0x8016fa4 != iStack_2c &&
        ((pcVar8 = 0x8016fa8, *0x8016fa8 != iStack_2c && (pcVar8 = 0x8016fac, *0x8016fac != iStack_2c))))))
    goto code_r0x08013458;
    *pcVar8 = 0;
    __rcu_read_lock();
    iVar6 = find_task_by_vpid(iStack_2c);
    if (iVar6 == 0) goto code_r0x08013454;
    unaff_x20 = iVar6 + 0x38;
    do {
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar1 = *unaff_x20;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar3) {
                *unaff_x20 = uVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (uVar1 == 0) {
            uVar5 = 2;
code_r0x0801342c:
            refcount_warn_saturate(unaff_x20,uVar5);
        }
        else if ((uVar1 + 1 | uVar1) < 0) {
            uVar5 = 1;
            goto code_r0x0801342c;
        }
        iVar7 = get_mi_task_struct(iVar6);
        if (iVar7 == 0) {
            _printk(0x8002d54,iStack_2c);
        }
        else {
            *(iVar7 + 0x10) = *(iVar7 + 0x10) & 0xffefffff;
        }
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar1 = *unaff_x20;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar3) {
                *unaff_x20 = uVar1 - 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        unaff_x19 = iVar6;
        if (uVar1 == 1) {
            DataMemoryBarrier(2,1);
            __put_task_struct(iVar6);
        }
        else if (uVar1 < 1) {
            refcount_warn_saturate(unaff_x20,3);
        }
code_r0x08013454:
        __rcu_read_unlock();
code_r0x08013458:
        _raw_spin_unlock(obj.persist_vip_lock);
        uVar5 = 0;
        iVar6 = unaff_x19;
code_r0x08013468:
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iStack_28) {
            return;
        }
        __stack_chk_fail(uVar5);
    } while( true );
}


// ===== sym.fboost_run @ 0x08014870 (size 1140) =====

ulong sym.fboost_run(void)

{
    code *pcVar1;
    int iVar2;
    uint uVar3;
    int64_t iVar4;
    bool bVar5;
    bool bVar6;
    int iVar7;
    ulong uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong uVar11;
    ulong *in_x18;
    int64_t arg1;
    code *pcVar12;
    int *piVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    do {
        *(iVar4 + 0x28) = 1;
        DataMemoryBarrier(2,3);
        uVar8 = _raw_spin_lock_irqsave(obj.fboost_pending_lock);
        if (obj.fboost_pending == 0x0) {
            _raw_spin_unlock_irqrestore(obj.fboost_pending_lock,uVar8);
            schedule();
            uVar9 = kthread_should_stop();
            if ((uVar9 & 1) != 0) {
                return 0;
            }
            uVar8 = _raw_spin_lock_irqsave(obj.fboost_pending_lock);
        }
        *(iVar4 + 0x28) = 0;
        DataMemoryBarrier(2,3);
        obj.fboost_pending = 0x0;
        iVar10 = _raw_spin_unlock_irqrestore(obj.fboost_pending_lock,uVar8);
        if (_obj.fboost_exe_mode != 0) {
            arg1 = 1;
            bVar5 = false;
            do {
                pcVar1 = obj.bcluster_stat + arg1 * 8;
                piVar13 = arg1 * 8 + 0x8016b3c;
                iVar2 = *piVar13;
                if (*pcVar1 != 0 || iVar2 != 0) {
                    if (*0x8016000 != 0) {
                        uVar3 = *(obj.min_cluster_freqs + arg1 * 4);
                        iVar10 = ktime_get();
                        iVar10 = _printk(0x8001e7a,arg1,iVar2,uVar3,0x196,iVar10 / 1000);
                        if (*0x8016000 != 0) {
                            *(obj.cluster_states + arg1 * 4) = 1;
                            iVar10 = sym.reset_perflock_req(1);
                        }
                    }
                    if ((*pcVar1 != 0) && (pcVar12 = CONCAT44(*0x8016004,*0x8016000), pcVar12 != NULL)) {
                        __cfi_slowpath_diag(0x9c2ff6c65e783d8c,pcVar12,0x8001800);
                        iVar10 = (*pcVar12)(arg1,1);
                    }
                    if (*piVar13 == 2) {
                        uVar9 = 0;
code_r0x08014a3c:
                        iVar10 = sym.metis_update_policy_online(arg1,uVar9,0);
                    }
                    else if (*piVar13 == 1) {
                        uVar9 = *(obj.min_cluster_freqs + arg1 * 4);
                        goto code_r0x08014a3c;
                    }
                    *piVar13 = 0;
                    pcVar12 = obj.rem_cluster_works + arg1 * 0x90;
                    *pcVar1 = 0;
                    if ((*pcVar12 & 1) != 0) {
                        iVar10 = cancel_delayed_work(pcVar12);
                    }
                    iVar2 = *0x8001000;
                    iVar7 = sym.get_fboost_duration(iVar10);
                    if (*0x8016000 != 0) {
                        _printk(0x80029e7,iVar2 - iVar7,0x1b5);
                    }
                    uVar8 = CONCAT44(*0x8016004,*0x8016000);
                    uVar11 = __msecs_to_jiffies(iVar2 - iVar7);
                    iVar10 = queue_delayed_work_on(0x20,uVar8,pcVar12,uVar11);
                }
                arg1 = 2;
                bVar6 = !bVar5;
                bVar5 = true;
            } while (bVar6);
        }
        if (*0x8016b34 != 0) {
            uVar9 = hrtimer_active(0x8016bc8);
            if ((uVar9 & 1) != 0) {
                hrtimer_cancel(0x8016bc8);
            }
            if (*0x8016000 != 0) {
                *0x8016000 = 0;
                sym.reset_perflock_req(0);
            }
            sym.metis_update_policy_online(1,0,0xffffffff);
            pcVar1 = CONCAT44(*0x8016004,*0x8016000);
            if (pcVar1 != NULL) {
                __cfi_slowpath_diag(0x9c2ff6c65e783d8c,pcVar1,0x80018a0);
                (*pcVar1)(1,0);
            }
            if (*0x8016000 != 0) {
                iVar10 = ktime_get();
                _printk(0x8003574,0x104,iVar10 / 1000);
            }
            *0x8001000 = 0xffffffffffffffff;
            if ((*0x8016000 & 1) != 0) {
                cancel_delayed_work(0x8016d08);
            }
            uVar9 = hrtimer_active(0x8016c20);
            if ((uVar9 & 1) != 0) {
                hrtimer_cancel(0x8016c20);
            }
            if (*0x8016000 != 0) {
                *0x8016000 = 0;
                sym.reset_perflock_req(0);
            }
            sym.metis_update_policy_online(2,0,0xffffffff);
            pcVar1 = CONCAT44(*0x8016004,*0x8016000);
            if (pcVar1 != NULL) {
                __cfi_slowpath_diag(0x9c2ff6c65e783d8c,pcVar1,0x80018a0);
                (*pcVar1)(2,0);
            }
            if (*0x8016000 != 0) {
                iVar10 = ktime_get();
                _printk(0x8003574,0x104,iVar10 / 1000);
            }
            *0x8001000 = 0xffffffffffffffff;
            if ((*0x8016000 & 1) != 0) {
                cancel_delayed_work(0x8016d98);
            }
        }
        _obj.fboost_exe_mode = 0;
        *0x8016b34 = 0;
    } while( true );
}


// ===== sym.init_module @ 0x080154e8 (size 248) =====

uint sym.init_module(void)

{
    uint uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002b2d,"register_mi_enqueue_task_fair_hook");
    *0x8016000 = NULL;
    _printk(0x8002b2d,"register_mi_dequeue_task_fair_hook");
    *0x8016000 = sym.mi_dequeue_task_fair_hook.cfi_jt;
    _printk(0x8002b2d,"register_mi_find_energy_efficient_cpu");
    *0x8016000 = sym.find_energy_hook.877fa0db602420247113046bf2a65355.cfi_jt;
    _printk(0x8002b2d,"register_mi_walt_get_indicies");
    *0x8016000 = sym.walt_get_indicies_hook.877fa0db602420247113046bf2a65355.cfi_jt;
    sym.metis_link_init();
    sym.metis_doublecyc_init();
    sym.clu_aff_init();
    sym.metis_fboost_init();
    sym.fas_init();
    uVar1 = misc_register(obj.metis_misc);
    iVar2 = ktime_get();
    *0x8016000 = iVar2 / 1000;
    return uVar1;
}


// ===== sym.cleanup_module @ 0x080155e0 (size 188) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.metis_link_exit();
    unregister_sysctl_table(*0x8001000);
    *0x8001000 = 0;
    sym.metis_doublecyc_exit();
    sym.metis_fboost_exit();
    sym.fas_exit();
    _printk(0x8002b2d,"unregister_mi_enqueue_task_fair_hook");
    *0x8016000 = 0;
    _printk(0x8002b2d,"unregister_mi_dequeue_task_fair_hook");
    *0x8016000 = 0;
    _printk(0x8002b2d,"unregister_mi_find_energy_efficient_cpu");
    *0x8016000 = 0;
    _printk(0x8002b2d,"unregister_mi_walt_get_indicies");
    *0x8016000 = 0;
    misc_deregister(obj.metis_misc);
    return;
}

