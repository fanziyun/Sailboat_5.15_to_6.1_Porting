// decompiled from qcom_lpm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 1636) =====

//WARNING: Switch with 1 destination removed at 0x080049a0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x1481e883b463ad02) {
        if (arg1 < -0x2feba1a6c2f6364d) {
            if (-0x53c887a672ae5244 < arg1) {
                if (arg1 < -0x3ac6cba3b2270458) {
                    if (arg1 != -0x53c887a672ae5243) {
                        if ((arg1 == -0x51d6c860e6adef6c) && ((pcVar1 + -0x8002810 >> 3 | pcVar1 << 0x3d) < 6)) {
                            return;
                        }
                        goto code_r0x08004960;
                    }
                    pcVar2 = sym.lpm_online_cpu.54f5299e1f581feb01b94162fe215419.cfi_jt;
                }
                else {
                    if (arg1 == -0x3ac6cba3b2270458) {
                        pcVar2 = sym.__traceiter_lpm_gov_select.cfi_jt;
                        goto code_r0x08002654;
                    }
                    if (arg1 != -0x3557318fb8d07b71) goto code_r0x08004960;
                    pcVar2 = sym.lpm_cluster_gov_probe.93919d071927d692c25ddf044f89175d.cfi_jt;
                }
                goto code_r0x080025a8;
            }
            if (arg1 < -0x62ba9e61d591f871) {
                if (arg1 == -0x7ea503cc15978c92) {
                    pcVar2 = sym.lpm_select.54f5299e1f581feb01b94162fe215419.cfi_jt;
                }
                else {
                    if (arg1 != -0x6977c38b1b1eb290) goto code_r0x08004960;
                    pcVar2 = sym.lpm_idle_exit.54f5299e1f581feb01b94162fe215419.cfi_jt;
                }
            }
            else if (arg1 == -0x62ba9e61d591f871) {
                pcVar2 = sym.__traceiter_gov_pred_hist.cfi_jt;
            }
            else {
                if (arg1 != -0x55d285f549aa806f) goto code_r0x08004960;
                pcVar2 = sym.ipi_entry.54f5299e1f581feb01b94162fe215419.cfi_jt;
            }
        }
        else if (arg1 < -0x218c0108fde83420) {
            if (arg1 < -0x28afe6d5c0ef66b4) {
                if (arg1 == -0x2feba1a6c2f6364d) {
                    pcVar2 = sym.trace_event_raw_event_cluster_pred_select.93919d071927d692c25ddf044f89175d.cfi_jt;
                    goto code_r0x08002624;
                }
                if (arg1 != -0x29bbde323c1d7b3c) goto code_r0x08004960;
                pcVar2 = sym.qcom_lpm_suspend_trace.54f5299e1f581feb01b94162fe215419.cfi_jt;
            }
            else {
                if (arg1 == -0x28afe6d5c0ef66b4) {
                    pcVar2 = sym.__bpf_trace_gov_pred_select.54f5299e1f581feb01b94162fe215419.cfi_jt;
                    goto code_r0x08002624;
                }
                if (arg1 != -0x22f7fba7a6850af2) goto code_r0x08004960;
                pcVar2 = sym.__traceiter_cluster_pred_hist.cfi_jt;
            }
        }
        else if (arg1 < -0x1cdca90faf499109) {
            if (arg1 == -0x218c0108fde83420) {
                pcVar2 = sym.trace_event_raw_init.cfi_jt;
            }
            else {
                if (arg1 != -0x20b0e7c6690bd759) goto code_r0x08004960;
                pcVar2 = sym.ipi_raise.54f5299e1f581feb01b94162fe215419.cfi_jt;
            }
        }
        else if (arg1 == -0x1cdca90faf499109) {
            pcVar2 = sym.__traceiter_cluster_pred_select.cfi_jt;
        }
        else {
            if (arg1 != -0x149e901c8e33d8e4) goto code_r0x08004960;
            pcVar2 = sym.__typeid__ZTSFvP7lpm_cpuE_global_addr;
        }
    }
    else if (arg1 < 0x39e63916c3db07da) {
        if (0x10fe79a84564f5a0 < arg1) {
            if (arg1 < 0x1b6c344e75cfc4ea) {
                if (arg1 == 0x10fe79a84564f5a1) {
                    pcVar2 = sym.perf_trace_lpm_gov_select.54f5299e1f581feb01b94162fe215419.cfi_jt;
                }
                else {
                    if (arg1 != 0x12d9405a40cc1172) goto code_r0x08004960;
                    pcVar2 = sym.__bpf_trace_gov_pred_hist.54f5299e1f581feb01b94162fe215419.cfi_jt;
                }
            }
            else {
                if (arg1 != 0x1b6c344e75cfc4ea) {
                    if (arg1 != 0x1c2b0952efa24c7a) goto code_r0x08004960;
                    pcVar2 = sym.trace_event_reg.cfi_jt;
                    goto code_r0x08002654;
                }
                pcVar2 = sym.prediction_disabled_store.15fd167cf514ad861e583ee1acf79061.cfi_jt;
            }
code_r0x08002624:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08004960;
        }
        if (arg1 < -0x31a55969004d7b3) {
            if (arg1 != -0x1481e883b463ad02) {
                if (arg1 != -0xec78b8726b9c1e8) goto code_r0x08004960;
                pcVar2 = sym.cluster_idle_get.15fd167cf514ad861e583ee1acf79061.cfi_jt;
                goto code_r0x08002624;
            }
            pcVar2 = sym.lpm_reflect.54f5299e1f581feb01b94162fe215419.cfi_jt;
        }
        else if (arg1 == -0x31a55969004d7b3) {
            pcVar2 = sym.lpm_disable_device.54f5299e1f581feb01b94162fe215419.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08004960;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else {
        if (0x6b29eeab91d2fba7 < arg1) {
            if (arg1 < 0x78a7f3b866f1638e) {
                if (arg1 == 0x6b29eeab91d2fba8) {
                    pcVar2 = sym.perf_trace_cluster_pred_hist.93919d071927d692c25ddf044f89175d.cfi_jt;
                    goto code_r0x08002624;
                }
                if (arg1 != 0x73fd32b30b1899ed) goto code_r0x08004960;
                pcVar2 = sym.__traceiter_cluster_enter.cfi_jt;
            }
            else {
                if (arg1 == 0x78a7f3b866f1638e) {
                    pcVar2 = sym.lpm_idle_enter.54f5299e1f581feb01b94162fe215419.cfi_jt;
                    goto code_r0x08002654;
                }
                if (arg1 == 0x7d57972cd3914fb1) {
                    pcVar2 = sym.lpm_cpu_qos_notify.54f5299e1f581feb01b94162fe215419.cfi_jt;
                }
                else {
                    if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08004960;
                    pcVar2 = sym.__typeid__ZTSFvvE_global_addr;
                }
            }
code_r0x080025a8:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08004960;
        }
        if (arg1 < 0x59829aefc02c8cd5) {
            if (arg1 != 0x39e63916c3db07da) {
                if ((arg1 == 0x3dd1a39e589289fe) && ((pcVar1 + -0x80027d8 >> 3 | pcVar1 << 0x3d) < 7)) {
                    return;
                }
                goto code_r0x08004960;
            }
            pcVar2 = sym.biastimer_fn.54f5299e1f581feb01b94162fe215419.cfi_jt;
            goto code_r0x08002624;
        }
        if (arg1 == 0x59829aefc02c8cd5) {
            pcVar2 = sym.lpm_enable_device.54f5299e1f581feb01b94162fe215419.cfi_jt;
        }
        else {
            if (arg1 != 0x5f6ad84a3d1285fa) goto code_r0x08004960;
            pcVar2 = sym.__traceiter_gov_pred_select.cfi_jt;
        }
    }
code_r0x08002654:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08004960:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80049b4);
    (*pcVar1)();
}


// ===== sym.lpm_disable_device.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x08002670 (size 8) =====

void sym.lpm_disable_device.54f5299e1f581feb01b94162fe215419.cfi_jt(ulong param_1,int64_t param_2)

{
    code *pcVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x22;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 4) < 0x20) {
        uVar2 = 0xffffffff;
        _trace_event_raw_init = unaff_x22;
        *(*(__per_cpu_offset + *(param_2 + 4) * 8) + 0x80072fc) = 0xffffffff00000000;
        while( true ) {
            uVar2 = cpumask_next(uVar2,__cpu_possible_mask);
            if (unaff_x22 <= uVar2) {
                if (reloc.__traceiter_lpm_gov_select.cfi_jt != 0x1) {
                    return;
                }
                tracepoint_probe_unregister
                          (__tracepoint_ipi_raise,sym.ipi_raise.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
                tracepoint_probe_unregister
                          (__tracepoint_ipi_entry,sym.ipi_entry.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
                tracepoint_probe_unregister
                          (__tracepoint_android_vh_cpu_idle_enter,
                           sym.lpm_idle_enter.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
                tracepoint_probe_unregister
                          (__tracepoint_android_vh_cpu_idle_exit,
                           sym.lpm_idle_exit.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
                if ((_segment.ehdr != 0) && (pcVar1 = *(_segment.ehdr + 0x10), pcVar1 != NULL)) {
                    if (1 < (pcVar1 + -0x8002868 >> 3 | pcVar1 << 0x3d)) {
                        __cfi_slowpath_diag(0x7e04a0fb7ad8bcd5,pcVar1,0x80012e0);
                    }
                    (*pcVar1)();
                }
                reloc.__traceiter_lpm_gov_select.cfi_jt = 0x0;
                return;
            }
            if (0x1f < uVar2) break;
            if (*(*(__per_cpu_offset + (uVar2 & 0xffffffff) * 8) + 0x80072fc) != 0) {
                return;
            }
        }
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80038f4);
    (*pcVar1)();
}


// ===== sym.lpm_reflect.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x08002678 (size 8) =====

void sym.lpm_reflect.54f5299e1f581feb01b94162fe215419.cfi_jt(void)

{
    return;
}


// ===== sym.__traceiter_cluster_pred_hist.cfi_jt @ 0x08002680 (size 8) =====

ulong sym.__traceiter_cluster_pred_hist.cfi_jt(ulong param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8006e70;
    piVar1 = *0x8006e70;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.trace_event_raw_init.cfi_jt @ 0x08002688 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_raw_init.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpm_select.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x08002690 (size 8) =====

uint64_t sym.lpm_select.54f5299e1f581feb01b94162fe215419.cfi_jt(code *param_1,int64_t param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    code *pcVar10;
    code *extraout_x9;
    uint32_t uVar11;
    ulong *in_x18;
    uint32_t uVar12;
    uint32_t uVar13;
    int64_t iVar14;
    uint64_t uVar15;
    code *pcVar16;
    uint64_t uVar17;
    ulong unaff_x28;
    ulong unaff_x30;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    iVar3 = tpidr_el1;
    uVar15 = 0xffffffff;
    pcVar10 = cpu_bit_bitmap + (*(param_2 + 4) & 0x3f) * 8;
    pcVar16 = pcVar10 + (8 - (*(param_2 + 4) >> 3 & 0x1ffffff8));
    uVar5 = 2000000000;
    do {
        uVar17 = uVar5;
        *pcVar10 = unaff_x28;
        do {
            uVar5 = cpumask_next(uVar15,pcVar16);
            if (unaff_x28 <= uVar5) {
                uStack_78 = 0;
                pcVar16 = obj.lpm_cpu_data + iVar3;
                if (pcVar16 == NULL) {
                    uVar5 = 0;
                    goto code_r0x08003b74;
                }
                *(iVar3 + 0x8007338) = 0;
                *(iVar3 + 0x8007344) = 0;
                uVar7 = ktime_get();
                *(iVar3 + 0x8007428) = uVar7;
                uVar15 = tick_nohz_get_sleep_length(&uStack_78);
                sym.update_cpu_history(pcVar16);
                uVar5 = *(param_2 + 4);
                if (0x1f < *(param_2 + 4)) goto code_r0x08003fa8;
                uStack_70 = 0;
                iVar14 = *(__per_cpu_offset + uVar5 * 8);
                if ((obj.suspend_in_progress & 1) == 0) {
                    if ((_trace_event_buffer_reserve >> (uVar5 & 0x3f) & 1) == 0) {
code_r0x08003be0:
                        uVar12 = *(param_1 + 0x428);
                        uVar5 = uVar12 - 1;
                        if (uVar12 - 1 < 1) goto code_r0x08003e84;
                        goto code_r0x08003c2c;
                    }
                    if ((-1 < uVar15) && (obj.sleep_disabled == 0x0)) {
                        iVar4 = sched_lpm_disallowed_time(uVar5,&uStack_70);
                        if (iVar4 != 0) goto code_r0x08003be0;
                        *(iVar14 + 0x8007300) = 0;
                        *(iVar14 + 0x8007430) = uStack_70;
                    }
                }
                uVar5 = 0;
                goto code_r0x08003a80;
            }
            uVar15 = uVar5 & 0xffffffff;
        } while ((*(__cpu_active_mask + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) == 0);
        uVar6 = cpuidle_governor_latency_req(uVar15);
        pcVar10 = extraout_x9;
        uVar5 = uVar6 / 1000;
        if (uVar17 <= uVar6 / 1000) {
            uVar5 = uVar17;
        }
    } while( true );
code_r0x08003c2c:
    if (9 < uVar5) goto code_r0x08003fa8;
    if (((*(param_2 + uVar5 * 0x40 + 0x30) == 0) && (*(param_1 + uVar5 * 0x68 + 0x5c) <= (uVar17 * 1000) / 1000)) &&
       (*(param_1 + uVar5 * 0x68 + 0x50) <= uVar15)) {
        if (((*(__cpu_active_mask + (*(param_2 + 4) >> 3 & 0x1ffffff8)) >> (*(param_2 + 4) & 0x3f) & 1) != 0) &&
           (*(iVar3 + 0x8007344) == '\0')) {
            if (obj.prediction_disabled == 0x0) {
                if (*(iVar3 + 0x8007340) == 0) {
                    iVar14 = *(iVar3 + 0x8007320);
                    if (*(iVar14 + 0x50) <= uVar15) {
                        if (*(iVar3 + 0x8007400) < 5) {
                            *(iVar3 + 0x8007438) = 0;
                        }
                        else {
                            iVar8 = sym.find_deviation(pcVar16,iVar3 + 0x80073ec,uVar15);
                            *(iVar3 + 0x8007338) = iVar8;
                            if (iVar8 == 0) {
                                if (1 < *(iVar14 + 0x428)) {
                                    iVar8 = 0;
                                    do {
                                        if (iVar8 == 0x410) goto code_r0x08003fa8;
                                        uVar13 = *(iVar14 + 0xcc + iVar8);
                                        if (*(iVar3 + 0x80073d8) * 0x68 + -0x68 == iVar8) {
                                            uVar1 = *(iVar3 + 0x80073ec);
                                            uVar11 = uVar1 < uVar13;
                                            if (uVar1 >= uVar13) {
                                                uVar1 = 0;
                                            }
                                            uVar6 = uVar1;
                                        }
                                        else {
                                            uVar11 = 0;
                                            uVar6 = 0;
                                        }
                                        if ((*(iVar3 + 0x80073dc) * 0x68 + -0x68 == iVar8) &&
                                           (*(iVar3 + 0x80073f0) < uVar13)) {
                                            uVar11 = uVar11 + 1;
                                            uVar6 = uVar6 + *(iVar3 + 0x80073f0);
                                        }
                                        if ((*(iVar3 + 0x80073e0) * 0x68 + -0x68 == iVar8) &&
                                           (*(iVar3 + 0x80073f4) < uVar13)) {
                                            uVar11 = uVar11 + 1;
                                            uVar6 = uVar6 + *(iVar3 + 0x80073f4);
                                        }
                                        if ((*(iVar3 + 0x80073e4) * 0x68 + -0x68 == iVar8) &&
                                           (*(iVar3 + 0x80073f8) < uVar13)) {
                                            uVar11 = uVar11 + 1;
                                            uVar6 = uVar6 + *(iVar3 + 0x80073f8);
                                        }
                                        if ((*(iVar3 + 0x80073e8) * 0x68 + -0x68 == iVar8) &&
                                           (*(iVar3 + 0x80073fc) < uVar13)) {
                                            uVar11 = uVar11 + 1;
                                            uVar6 = uVar6 + *(iVar3 + 0x80073fc);
                                        }
                                        if (2 < uVar11) {
                                            uVar9 = uVar11;
                                            uVar2 = 0;
                                            if (uVar9 != 0) {
                                                uVar2 = uVar6 / uVar9;
                                            }
                                            *(iVar3 + 0x8007338) = uVar2;
                                            *(iVar3 + 0x8007438) = *(iVar3 + 0x8007428) + uVar2;
                                            if (uVar9 <= uVar6) goto code_r0x08003e48;
                                            break;
                                        }
                                        iVar8 = iVar8 + 0x68;
                                    } while (*(iVar14 + 0x428) * 0x68 + -0x68 != iVar8);
                                }
                                uVar7 = sym.find_deviation(pcVar16,iVar3 + 0x8007408,uVar15);
                                *(iVar3 + 0x8007338) = uVar7;
                            }
                        }
                    }
                }
                else {
                    *(iVar3 + 0x8007340) = 0;
                    *(iVar3 + 0x8007345) = 1;
                    *(iVar3 + 0x8007438) = 0;
                }
            }
code_r0x08003e48:
            *(iVar3 + 0x8007344) = 1;
        }
        if ((*(iVar3 + 0x8007338) == 0) || (*(param_1 + uVar5 * 0x68 + 100) <= *(iVar3 + 0x8007338)))
        goto code_r0x08003e84;
    }
    uVar12 = uVar5;
    uVar5 = uVar5 - 1;
    if (uVar5 < 1) goto code_r0x08003e6c;
    goto code_r0x08003c2c;
code_r0x08003e6c:
    uVar5 = 0;
    uVar12 = 1;
code_r0x08003e84:
    uVar13 = uVar5;
    *(iVar3 + 0x8007300) = uVar13;
    iVar14 = *(iVar3 + 0x8007428) + (uVar15 / 1000) * 1000;
    *(iVar3 + 0x8007330) = iVar14;
    if ((*(iVar3 + 0x8007338) != 0) && (uVar13 < *(*(iVar3 + 0x8007320) + 0x428) - 1U)) {
        if (*(iVar3 + 0x8007438) < iVar14) {
            *(iVar3 + 0x8007330) = *(iVar3 + 0x8007438);
        }
        if (10 < uVar13) {
code_r0x08003fa8:
    //WARNING: Does not return
            pcVar16 = SoftwareBreakpoint(0x5512,0x8003fac);
            (*pcVar16)();
        }
        uVar11 = *(iVar3 + 0x8007338) + 100;
        uVar1 = *(*(iVar3 + 0x8007320) + (uVar5 & 0xffffffff) * 0x68 + uVar12 * 0x68 + 100) - 1;
        uVar12 = uVar1;
        if (uVar11 <= uVar1) {
            uVar12 = uVar11;
        }
        uVar11 = uVar15 / 1000;
        if ((uVar12 < uVar11) && (uVar1 < uVar11 - uVar12)) {
            iVar14 = tpidr_el1;
            *(iVar14 + 0x8007370) = sym.histtimer_fn.54f5299e1f581feb01b94162fe215419.cfi_jt;
            hrtimer_start_range_ns(iVar14 + 0x8007348,uVar12 * 1000,0,3);
            uVar13 = *(iVar3 + 0x8007300);
        }
    }
    if (((uVar13 == *(param_1 + 0x428) - 1U) && (_segment.ehdr != NULL)) && (param_1 = *_segment.ehdr, param_1 != NULL)
       ) {
        if (param_1 != sym.__typeid__ZTSFvP7lpm_cpuE_global_addr) goto code_r0x08003fb0;
        goto code_r0x08003f88;
    }
code_r0x08003a80:
    while( true ) {
        if ((*(pcVar16 + 8) == 0) && (uVar15 = *(pcVar16 + 0x138), uVar15 != 0)) {
            iVar3 = tpidr_el1;
            *(iVar3 + 0x80073b8) = sym.biastimer_fn.54f5299e1f581feb01b94162fe215419.cfi_jt;
            hrtimer_start_range_ns(iVar3 + 0x8007390,uVar15 & 0xffffffff,0,3);
        }
        pcVar16 = *(pcVar16 + 0x40);
code_r0x08003b74:
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iStack_68) break;
        __stack_chk_fail();
code_r0x08003fb0:
        __cfi_slowpath_diag(0xeb616fe371cc271c,param_1,0x8001300);
code_r0x08003f88:
        (*param_1)(pcVar16);
    }
    return uVar5 & 0xffffffff;
}


// ===== sym.init_module.cfi_jt @ 0x08002698 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.create_global_sysfs_nodes();
    if (iVar1 == 0) {
        _segment.ehdr = reloc.update_cluster_select.cfi_jt;
        iVar1 = cpuidle_register_governor(obj.lpm_governor);
        if (iVar1 == 0) {
            iVar1 = tracepoint_probe_register
                              (__tracepoint_suspend_resume,
                               sym.qcom_lpm_suspend_trace.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
            if (iVar1 == 0) {
                iVar1 = __cpuhp_setup_state(0xc0,"qcom-cpu-lpm",1,
                                            sym.lpm_online_cpu.54f5299e1f581feb01b94162fe215419.cfi_jt,
                                            sym.lpm_offline_cpu.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
                if (-1 < iVar1) {
                    return 0;
                }
                tracepoint_probe_unregister
                          (__tracepoint_suspend_resume,
                           sym.qcom_lpm_suspend_trace.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
            }
        }
        if (_segment.ehdr == reloc.update_cluster_select.cfi_jt) {
            _segment.ehdr = NULL;
        }
        kobject_put(_segment.ehdr);
    }
    return iVar1;
}


// ===== sym.lpm_enable_device.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x080026a0 (size 8) =====

int sym.lpm_enable_device.54f5299e1f581feb01b94162fe215419.cfi_jt(ulong param_1,int64_t param_2)

{
    uint uVar1;
    int iVar2;
    code *pcVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0x1f < *(param_2 + 4)) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x800378c);
        (*pcVar3)();
    }
    iVar5 = *(__per_cpu_offset + *(param_2 + 4) * 8);
    hrtimer_init(iVar5 + 0x8007348,1,1);
    hrtimer_init(iVar5 + 0x8007390,1,1);
    if ((reloc.__traceiter_lpm_gov_select.cfi_jt & 1) == 0) {
        iVar2 = tracepoint_probe_register
                          (__tracepoint_ipi_raise,sym.ipi_raise.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
        if (iVar2 != 0) {
            return iVar2;
        }
        iVar2 = tracepoint_probe_register
                          (__tracepoint_ipi_entry,sym.ipi_entry.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
        if (iVar2 == 0) {
            iVar2 = tracepoint_probe_register_prio
                              (__tracepoint_android_vh_cpu_idle_enter,
                               sym.lpm_idle_enter.54f5299e1f581feb01b94162fe215419.cfi_jt,0,0x80000000);
            if (iVar2 == 0) {
                iVar2 = tracepoint_probe_register_prio
                                  (__tracepoint_android_vh_cpu_idle_exit,
                                   sym.lpm_idle_exit.54f5299e1f581feb01b94162fe215419.cfi_jt,0,0x80000000);
                if (iVar2 == 0) {
                    if ((_segment.ehdr != 0) && (pcVar3 = *(_segment.ehdr + 8), pcVar3 != NULL)) {
                        if (1 < (pcVar3 + -0x8002868 >> 3 | pcVar3 << 0x3d)) {
                            __cfi_slowpath_diag(0x7e04a0fb7ad8bcd5,pcVar3,0x80012c0);
                        }
                        (*pcVar3)();
                    }
                    reloc.__traceiter_lpm_gov_select.cfi_jt = 0x1;
                    goto code_r0x08003600;
                }
                tracepoint_probe_unregister
                          (__tracepoint_ipi_raise,sym.ipi_raise.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
                tracepoint_probe_unregister
                          (__tracepoint_ipi_entry,sym.ipi_entry.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
                pcVar3 = __tracepoint_android_vh_cpu_idle_enter;
                pcVar4 = sym.lpm_idle_enter.54f5299e1f581feb01b94162fe215419.cfi_jt;
            }
            else {
                tracepoint_probe_unregister
                          (__tracepoint_ipi_raise,sym.ipi_raise.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
                pcVar3 = __tracepoint_ipi_entry;
                pcVar4 = sym.ipi_entry.54f5299e1f581feb01b94162fe215419.cfi_jt;
            }
        }
        else {
            pcVar3 = __tracepoint_ipi_raise;
            pcVar4 = sym.ipi_raise.54f5299e1f581feb01b94162fe215419.cfi_jt;
        }
        tracepoint_probe_unregister(pcVar3,pcVar4,0);
    }
    else {
code_r0x08003600:
        iVar2 = 0;
        uVar1 = *(param_2 + 4);
        *(iVar5 + 0x8007320) = param_1;
        *(iVar5 + 0x8007328) = param_2;
        *(obj.lpm_cpu_data + iVar5) = uVar1;
        *(iVar5 + 0x80072fc) = 0xffffffff00000001;
    }
    return iVar2;
}


// ===== sym.__typeid__ZTSFvP7lpm_cpuE_global_addr @ 0x080026a8 (size 8) =====

void sym.__typeid__ZTSFvP7lpm_cpuE_global_addr(uint32_t *param_1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    ulong *in_x18;
    uint32_t unaff_w23;
    code *pcVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_obj.cluster_dev_list != obj.cluster_dev_list) {
        uVar1 = *param_1;
        pcVar8 = _obj.cluster_dev_list;
        do {
            if ((pcVar8[0x15] != 0x0) &&
               ((*(*(pcVar8 + -0x128) + (uVar1 >> 6) * 8 + 0x528) & 1L << (uVar1 & 0x3f)) != 0)) {
                _raw_spin_lock(pcVar8 + 0x10);
                *(pcVar8 + -0x50) = *(param_1 + 0x4c);
                if (7 < uVar1) {
code_r0x080056f0:
    //WARNING: Does not return
                    pcVar8 = SoftwareBreakpoint(0x5512,0x80056f4);
                    (*pcVar8)();
                }
                puVar6 = *(param_1 + 0xe);
                iVar7 = *(pcVar8 + -0x128);
                *(pcVar8 + (uVar1 - 9) * 8) = puVar6;
                iVar7 = iVar7 + 0x528;
                *puVar6 = unaff_w23;
                uVar4 = cpumask_next_and(trace_event_raw_init,0xffffffff,iVar7,__cpu_online_mask);
                uVar3 = uVar4;
                iVar2 = 0x7fffffffffffffff;
                while (uVar3 < unaff_w23) {
                    if (7 < uVar4) goto code_r0x080056f0;
                    iVar5 = *(pcVar8 + -0x1b8 + ((uVar4 & 0xffffffff) + 0x2e) * 8);
                    if (iVar2 <= iVar5) {
                        iVar5 = iVar2;
                    }
                    uVar4 = cpumask_next_and(uVar4,iVar7,__cpu_online_mask);
                    iVar2 = iVar5;
                    uVar3 = uVar4;
                }
                iVar7 = *(pcVar8 + -0x58);
                if (iVar2 <= iVar7 || iVar7 == 0) {
                    iVar7 = iVar2;
                }
                *(pcVar8 + -0x60) = iVar7;
                dev_pm_genpd_set_next_wakeup(*(pcVar8 + -0x1b8));
                _raw_spin_unlock(pcVar8 + 0x10);
            }
            pcVar8 = *pcVar8;
        } while (pcVar8 != obj.cluster_dev_list);
    }
    return;
}


// ===== sym.lpm_cpu_qos_notify.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x080026b0 (size 8) =====

ulong sym.lpm_cpu_qos_notify.54f5299e1f581feb01b94162fe215419.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + -0xc) != 0) {
        iVar3 = sp_el0;
        uVar1 = *(param_1 + -0x10);
        *(iVar3 + 0x10) = *(iVar3 + 0x10) + 1;
        iVar2 = tpidr_el1;
        if (uVar1 != *(cpu_number + iVar2)) {
            uVar4 = 1L << (uVar1 & 0x3f);
            if (((*(__cpu_online_mask + (uVar1 >> 6) * 8) & uVar4) != 0) &&
               ((*(__cpu_active_mask + (uVar1 >> 6) * 8) & uVar4) != 0)) {
                wake_up_if_idle();
            }
        }
        iVar2 = *(iVar3 + 0x10) + -1;
        *(iVar3 + 0x10) = iVar2;
        if ((iVar2 == 0) || (*(iVar3 + 0x10) == 0)) {
            preempt_schedule();
        }
    }
    return 1;
}


// ===== sym.cluster_power_cb.93919d071927d692c25ddf044f89175d.cfi_jt @ 0x080026b8 (size 8) =====

ulong sym.cluster_power_cb.93919d071927d692c25ddf044f89175d.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    bool bVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int iVar13;
    int64_t iVar14;
    ulong *in_x18;
    uint32_t unaff_w22;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar12 = *(param_1 + -0x30);
    if (param_2 == 0) {
        if (3 < *(iVar12 + 0x5b4)) {
code_r0x0800605c:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x8006060);
            (*pcVar3)();
        }
        if (*(param_1 + *(iVar12 + 0x5b4) + 0xf0) == '\0') {
            return 0x8002;
        }
        if (*(iVar12 + 0x51c) != 0) {
            sym.clear_cpu_predict_history();
            *(param_1 + -0xa8) = 0;
            *(param_1 + -0x98) = 0;
            *(param_1 + -0x90) = 0;
            *(param_1 + -0x80) = 0;
            *(param_1 + -0x78) = 0;
            *(param_1 + -0xa0) = 0xffffffff;
            *(param_1 + -0x88) = 0xffffffff;
            *(param_1 + -0x70) = 0xffffffff;
            *(param_1 + -0x68) = 0;
            *(param_1 + -0x60) = 0;
            *(param_1 + -0x58) = 0xffffffff;
            *(param_1 + -0x50) = 0;
            *(param_1 + -0x48) = 0;
            *(param_1 + -0x40) = 0xffffffff;
            *(param_1 + -0x38) = 0;
            *(param_1 + -0xb8) = 0;
            *(param_1 + -0xac) = 0;
            *(param_1 + -0xb4) = 0;
            return 1;
        }
        _trace_event_raw_init = unaff_w22;
        uVar10 = cpumask_next(0xffffffff,iVar12 + 0x528);
        uVar5 = uVar10;
        while (uVar5 < unaff_w22) {
            if ((*(__cpu_online_mask + (uVar10 >> 6 & 0x3ffffff) * 8) >> (uVar10 & 0x3f) & 1) != 0) {
                if (0x1f < uVar10) goto code_r0x0800605c;
                if (*(*(__per_cpu_offset + (uVar10 & 0xffffffff) * 8) + 0x8007440) != '\0') {
                    return 0x8002;
                }
            }
            uVar10 = cpumask_next(uVar10,iVar12 + 0x528);
            uVar5 = uVar10;
        }
        uVar7 = ktime_get();
        *(param_1 + 0xa8) = uVar7;
        sym.cluster_power_down(param_1 + -0xc0);
    }
    else if (param_2 == 1) {
        uVar7 = tpidr_el1;
    }
    else if ((param_2 == 3) && (uVar7 = tpidr_el1, *(*(param_1 + -0x30) + 0x51c) == 0)) {
        uVar7 = ktime_get();
        *(param_1 + 0xa8) = uVar7;
        iVar12 = __hrtimer_get_remaining(param_1 + 0x48,0);
        if (999 < iVar12) {
            hrtimer_try_to_cancel(param_1 + 0x48);
        }
        sym.update_cluster_history(param_1 + -0xc0);
        iVar14 = *(param_1 + -0x30);
        uVar5 = *(iVar14 + 0x5b4);
        *(param_1 + 0xa0) = 0x7fffffffffffffff;
        *(param_1 + 0x10c) = 0;
        iVar12 = *(param_1 + 0xa8);
        if (obj.prediction_disabled == 0x0) {
            if (*(param_1 + -0xb4) != '\0') {
                *(param_1 + -0xb4) = 0x100;
                return 1;
            }
            iVar13 = *(param_1 + -0xac);
            if (iVar13 == 5) {
                iVar2 = iVar12 / 1000;
                if (iVar2 - *(param_1 + -0x98) < 0x9c41) {
                    iVar13 = 5;
                }
                else {
                    iVar13 = 4;
                    *(param_1 + -0xac) = 4;
                }
                if (40000 < iVar2 - *(param_1 + -0x80)) {
                    iVar13 = iVar13 + -1;
                    *(param_1 + -0xac) = iVar13;
                }
                if (40000 < iVar2 - *(param_1 + -0x68)) {
                    iVar13 = iVar13 + -1;
                    *(param_1 + -0xac) = iVar13;
                }
                if (40000 < iVar2 - *(param_1 + -0x50)) {
                    iVar13 = iVar13 + -1;
                    *(param_1 + -0xac) = iVar13;
                }
                if (40000 < iVar2 - *(param_1 + -0x38)) {
                    *(param_1 + -0xac) = iVar13 + -1;
                    return 1;
                }
            }
            if (4 < iVar13) {
                uVar1 = *(iVar14 + 0x5b0);
                if (uVar5 < uVar1 - 1) {
                    iVar12 = iVar12 * 1000 +
                             (*(param_1 + -0x90) + *(param_1 + -0xa8) + *(param_1 + -0x78) + *(param_1 + -0x60) +
                             *(param_1 + -0x48)) / 5;
                }
                else {
                    if (uVar1 < 2) {
                        return 1;
                    }
                    uVar5 = 1;
                    while( true ) {
                        uVar10 = *(*(iVar14 + 0x5a0) + uVar5 * 0x40 + 0x10);
                        if (*(param_1 + -0xa0) == uVar5) {
                            uVar8 = *(param_1 + -0xa8);
                            uVar9 = uVar10 / 1000;
                            bVar4 = uVar8 < uVar10 % 1000;
                            uVar6 = bVar4;
                            if (!bVar4) {
                                uVar8 = 0;
                            }
                        }
                        else {
                            uVar6 = 0;
                            uVar8 = 0;
                            uVar9 = uVar10;
                        }
                        if (*(param_1 + -0x88) == uVar5) {
                            uVar10 = uVar9 / 1000;
                            uVar11 = uVar9 % 1000;
                            uVar9 = uVar10;
                            if (*(param_1 + -0x90) < uVar11) {
                                uVar6 = uVar6 + 1;
                                uVar8 = *(param_1 + -0x90) + uVar8;
                            }
                        }
                        if (*(param_1 + -0x70) == uVar5) {
                            uVar11 = uVar9 / 1000;
                            uVar10 = uVar9 % 1000;
                            uVar9 = uVar11;
                            if (*(param_1 + -0x78) < uVar10) {
                                uVar6 = uVar6 + 1;
                                uVar8 = *(param_1 + -0x78) + uVar8;
                            }
                        }
                        if (*(param_1 + -0x58) == uVar5) {
                            uVar10 = uVar9 / 1000;
                            uVar11 = uVar9 % 1000;
                            uVar9 = uVar10;
                            if (*(param_1 + -0x60) < uVar11) {
                                uVar6 = uVar6 + 1;
                                uVar8 = *(param_1 + -0x60) + uVar8;
                            }
                        }
                        if ((*(param_1 + -0x40) == uVar5) && (*(param_1 + -0x48) < uVar9 % 1000)) {
                            uVar6 = uVar6 + 1;
                            uVar8 = *(param_1 + -0x48) + uVar8;
                        }
                        if (3 < uVar6) break;
                        uVar5 = uVar5 + 1;
                        if (uVar1 == uVar5) {
                            return 1;
                        }
                    }
                    uVar10 = 0;
                    if (uVar6 != 0) {
                        uVar10 = uVar8 / uVar6;
                    }
                    iVar12 = iVar12 + uVar10 * 1000;
                }
                *(param_1 + 0xa0) = iVar12;
                *(param_1 + 0x10c) = 1;
                return 1;
            }
        }
    }
    return 1;
}


// ===== sym.lpm_idle_enter.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x080026c0 (size 8) =====

void sym.lpm_idle_enter.54f5299e1f581feb01b94162fe215419.cfi_jt(ulong param_1,uint *param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = tpidr_el1;
    if (*(iVar1 + 0x8007440) != '\0') {
        *param_2 = 0;
    }
    return;
}


// ===== sym.ipi_raise.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x080026c8 (size 8) =====

void sym.ipi_raise.54f5299e1f581feb01b94162fe215419.cfi_jt(ulong param_1,ulong param_2)

{
    int iVar1;
    uchar auVar2 [16];
    code *pcVar3;
    uint32_t uVar4;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t *extraout_x9;
    uint32_t *extraout_x9_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.suspend_in_progress & 1) == 0) {
        uVar4 = cpumask_next(0xffffffff);
        *extraout_x9 = extraout_w8;
        if (uVar4 < extraout_w8) {
            do {
                if (0x1f < uVar4) {
code_r0x080041d0:
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x80041d4);
                    (*pcVar3)();
                }
                iVar5 = uVar4 * 8;
                *(*(__per_cpu_offset + iVar5) + 0x8007440) = 1;
                iVar6 = *(__per_cpu_offset + iVar5);
                iVar5 = ktime_get();
                if (4 < *(iVar6 + 0x800741c)) goto code_r0x080041d0;
                auVar2 = SEXT816(iVar5 - *(iVar6 + 0x8007420)) * SEXT816(0x20c49ba5e353f7cf);
                *(iVar6 + *(iVar6 + 0x800741c) * 4 + 0x8007408) = (auVar2._8_8_ >> 7) - (auVar2._12_4_ >> 0x1f);
                *(iVar6 + 0x8007420) = iVar5;
                iVar1 = 0;
                if (*(iVar6 + 0x800741c) + 1U < 5) {
                    iVar1 = *(iVar6 + 0x800741c) + 1;
                }
                *(iVar6 + 0x800741c) = iVar1;
                uVar4 = cpumask_next(uVar4,param_2);
                *extraout_x9_00 = extraout_w8_00;
            } while (uVar4 < extraout_w8_00);
        }
    }
    return;
}


// ===== sym.lpm_online_cpu.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x080026d0 (size 8) =====

ulong sym.lpm_online_cpu.54f5299e1f581feb01b94162fe215419.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    int64_t iVar2;
    ulong *puVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    if (param_1 < 0x20) {
        *in_x18 = unaff_x30;
        iVar4 = *(__per_cpu_offset + param_1 * 8);
        iVar2 = get_cpu_device();
        if ((iVar2 != 0) && (iVar4 != -0x80072f8)) {
            puVar3 = iVar4 + 0x8007308;
            *puVar3 = sym.lpm_cpu_qos_notify.54f5299e1f581feb01b94162fe215419.cfi_jt;
            dev_pm_qos_add_notifier(iVar2,puVar3,1);
        }
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800351c);
    (*pcVar1)();
}


// ===== sym.lpm_offline_cpu.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x080026d8 (size 8) =====

ulong sym.lpm_offline_cpu.54f5299e1f581feb01b94162fe215419.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    if (param_1 < 0x20) {
        *in_x18 = unaff_x30;
        iVar3 = *(__per_cpu_offset + param_1 * 8);
        iVar2 = get_cpu_device();
        if ((iVar2 != 0) && (iVar3 != -0x80072f8)) {
            dev_pm_qos_remove_notifier(iVar2,iVar3 + 0x8007308,1);
        }
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8003588);
    (*pcVar1)();
}


// ===== sym.__traceiter_cluster_pred_select.cfi_jt @ 0x080026e0 (size 8) =====

ulong sym.__traceiter_cluster_pred_select.cfi_jt
                (ulong param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8006e28;
    piVar1 = *0x8006e28;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5,param_6);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.trace_event_raw_event_cluster_pred_select.93919d071927d692c25ddf044f89175d.cfi_jt @ 0x080026e8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080051a8)
//WARNING: Removing unreachable block (ram,0x08004d80)
//WARNING: Removing unreachable block (ram,0x08004f9c)
//WARNING: Removing unreachable block (ram,0x080053b0)

void sym.trace_event_raw_event_cluster_pred_select.93919d071927d692c25ddf044f89175d.cfi_jt
               (int64_t param_1,uint param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,uint64_t param_6)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint uVar3;
    uint uVar4;
    ulong in_tmp_ldXn;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint32_t uVar21;
    uint64_t uVar22;
    uint64_t uVar23;
    ulong uVar24;
    uint64_t uVar25;
    ulong unaff_x30;
    uchar auVar26 [16];
    uchar auVar27 [12];
    uchar auStack_3b0 [12];
    uint32_t uStack_3a4;
    uint64_t uStack_3a0;
    int64_t iStack_398;
    ulong **ppuStack_390;
    code *pcStack_388;
    code *pcStack_380;
    ulong uStack_378;
    int64_t iStack_370;
    uint64_t uStack_368;
    uint64_t uStack_360;
    uint64_t uStack_358;
    ulong uStack_348;
    ulong uStack_340;
    ulong uStack_338;
    ulong uStack_330;
    ulong uStack_328;
    ulong uStack_320;
    int64_t iStack_318;
    ulong **ppuStack_310;
    ulong uStack_308;
    int64_t *piStack_300;
    uint64_t uStack_2f0;
    uint64_t uStack_2e8;
    uint64_t uStack_2e0;
    uint64_t uStack_2d8;
    uchar auStack_2d0 [12];
    uint32_t uStack_2c4;
    uint64_t uStack_2c0;
    int64_t iStack_2b8;
    ulong **ppuStack_2b0;
    code *pcStack_2a8;
    int64_t *piStack_2a0;
    ulong uStack_298;
    int64_t iStack_290;
    uint64_t uStack_288;
    uint64_t uStack_280;
    uint64_t uStack_278;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    int64_t iStack_238;
    ulong **ppuStack_230;
    ulong uStack_228;
    uint64_t uStack_220;
    uint64_t uStack_210;
    uint64_t uStack_208;
    uint64_t uStack_200;
    uint64_t uStack_1f8;
    uchar auStack_1f0 [12];
    uint32_t uStack_1e4;
    uint64_t uStack_1e0;
    int64_t iStack_1d8;
    ulong **ppuStack_1d0;
    code *pcStack_1c8;
    uint64_t uStack_1c0;
    ulong uStack_1b0;
    int64_t iStack_1a8;
    uint64_t uStack_1a0;
    uint64_t uStack_198;
    uint64_t uStack_190;
    uint64_t uStack_188;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    ulong uStack_138;
    int64_t *piStack_130;
    uint64_t uStack_128;
    uint64_t uStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uchar auStack_100 [12];
    uint32_t uStack_f4;
    uint64_t uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar21 = *(param_1 + 0x48);
    uVar12 = param_4;
    uVar17 = param_5;
    uVar19 = param_6;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar9 = param_3;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar12 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar5 = trace_event_ignore_this_pid(param_1), (uVar5 & 1) == 0))))
        goto code_r0x08004c44;
    }
    else {
code_r0x08004c44:
        puVar9 = 0x1c;
        iVar6 = trace_event_buffer_reserve(&uStack_88,param_1);
        if (iVar6 != 0) {
            *(iVar6 + 8) = param_2;
            *(iVar6 + 0xc) = param_3;
            *(iVar6 + 0x10) = param_4;
            *(iVar6 + 0x14) = param_5;
            *(iVar6 + 0x18) = param_6;
            trace_event_buffer_commit(&uStack_88);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar8 = auVar26._0_8_;
    *extraout_x18 = sym.perf_trace_cluster_pred_select;
    pcStack_d8 = sym.perf_trace_cluster_pred_select;
    iVar6 = sp_el0;
    iStack_e8 = *(iVar6 + 0x5e0);
    uVar15 = uVar19 & 0xffffffff;
    uVar16 = uVar17 & 0xffffffff;
    uVar18 = uVar12 & 0xffffffff;
    uVar22 = puVar9 & 0xffffffff;
    uStack_f0 = 0;
    uStack_f4 = 0;
    uVar25 = auVar26._8_8_ & 0xffffffff;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar8 + 0x78);
    uVar5 = uVar12;
    uVar13 = uVar17;
    uVar14 = uVar19;
    puStack_e0 = &stack0xffffffffffffffb0;
    if ((*(uVar8 + 0x80) != 0) || (puVar10 = puVar9, *piVar1 != 0)) {
        puVar10 = &uStack_f4;
        iVar6 = perf_trace_buf_alloc(0x1c,&uStack_f0);
        uVar20 = _trace_event_raw_init;
        if (iVar6 != 0) {
            *(uStack_f0 + 0xe8) = &puStack_e0;
            puVar10 = uStack_f4;
            uVar13 = 1;
            *(uStack_f0 + 0xf8) = auStack_100;
            *(uStack_f0 + 0x100) = ~(-1L << (uVar20 & 0x3f)) & 0x8004ca8;
            *(uStack_f0 + 0x108) = 5;
            *(iVar6 + 8) = auVar26._8_4_;
            *(iVar6 + 0xc) = puVar9;
            *(iVar6 + 0x10) = uVar12;
            *(iVar6 + 0x14) = uVar17;
            *(iVar6 + 0x18) = uVar19;
            uVar5 = uVar8;
            uVar14 = uStack_f0;
            perf_trace_run_bpf_submit(iVar6,0x1c);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar7 = auVar26._0_8_;
    uVar24 = tpidr_el2;
    *extraout_x18_00 = 0x8004de0;
    uStack_138 = 0x8004de0;
    iVar6 = sp_el0;
    iStack_148 = *(iVar6 + 0x5e0);
    uVar19 = auVar26._8_8_ & 0xffffffff;
    uVar24 = *(iVar7 + 0x48);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uVar21 = uVar24;
    uVar12 = uVar5;
    uVar17 = uVar13;
    ppuStack_140 = &puStack_e0;
    piStack_130 = piVar1;
    uStack_128 = uVar22;
    uStack_120 = uVar18;
    uStack_118 = uVar16;
    uStack_110 = uVar15;
    uStack_108 = uVar8;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar9 = puVar10;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar12 = 0;
            event_triggers_call(iVar7,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar8 = trace_event_ignore_this_pid(iVar7), (uVar8 & 1) == 0))))
        goto code_r0x08004e6c;
    }
    else {
code_r0x08004e6c:
        puVar9 = 0x18;
        iVar6 = trace_event_buffer_reserve(&uStack_178,iVar7);
        if (iVar6 != 0) {
            *(iVar6 + 8) = auVar26._8_4_;
            *(iVar6 + 0xc) = puVar10;
            *(iVar6 + 0x10) = uVar5;
            *(iVar6 + 0x14) = uVar13;
            trace_event_buffer_commit(&uStack_178);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_148) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar16 = auVar26._0_8_;
    *extraout_x18_01 = sym.perf_trace_cluster_pred_hist;
    pcStack_1c8 = sym.perf_trace_cluster_pred_hist;
    iVar6 = sp_el0;
    iStack_1d8 = *(iVar6 + 0x5e0);
    uVar18 = uVar17 & 0xffffffff;
    uVar22 = uVar12 & 0xffffffff;
    uVar20 = puVar9 & 0xffffffff;
    uVar23 = auVar26._8_8_ & 0xffffffff;
    uStack_1e0 = 0;
    uStack_1e4 = 0;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar16 + 0x78);
    uVar8 = uVar12;
    uVar15 = uVar17;
    ppuStack_1d0 = &ppuStack_140;
    uStack_1c0 = uVar25;
    uStack_1b0 = uVar24;
    iStack_1a8 = iVar7;
    uStack_1a0 = uVar19;
    uStack_198 = puVar10 & 0xffffffff;
    uStack_190 = uVar5 & 0xffffffff;
    uStack_188 = uVar13 & 0xffffffff;
    if ((*(uVar16 + 0x80) != 0) || (puVar11 = puVar9, *piVar1 != 0)) {
        puVar11 = &uStack_1e4;
        iVar6 = perf_trace_buf_alloc(0x1c,&uStack_1e0);
        uVar19 = _trace_event_raw_init;
        if (iVar6 != 0) {
            *(uStack_1e0 + 0xe8) = &ppuStack_1d0;
            puVar11 = uStack_1e4;
            uVar15 = 1;
            *(uStack_1e0 + 0xf8) = auStack_1f0;
            *(uStack_1e0 + 0x100) = ~(-1L << (uVar19 & 0x3f)) & 0x8004ec8;
            *(uStack_1e0 + 0x108) = 5;
            *(iVar6 + 8) = auVar26._8_4_;
            *(iVar6 + 0xc) = puVar9;
            *(iVar6 + 0x10) = uVar12;
            *(iVar6 + 0x14) = uVar17;
            uVar8 = uVar16;
            uVar14 = uStack_1e0;
            perf_trace_run_bpf_submit(iVar6,0x1c,puVar11,uVar16,1,uStack_1e0,piVar1,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_1d8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar7 = auVar26._0_8_;
    uVar24 = tpidr_el2;
    *extraout_x18_02 = 0x8004ff8;
    uStack_228 = 0x8004ff8;
    iVar6 = sp_el0;
    iStack_238 = *(iVar6 + 0x5e0);
    uVar17 = auVar26._8_8_ & 0xffffffff;
    uVar24 = *(iVar7 + 0x48);
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    uVar21 = uVar24;
    uVar12 = uVar8;
    ppuStack_230 = &ppuStack_1d0;
    uStack_220 = uVar23;
    uStack_210 = uVar20;
    uStack_208 = uVar22;
    uStack_200 = uVar18;
    uStack_1f8 = uVar16;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar9 = puVar11;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar12 = 0;
            event_triggers_call(iVar7,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar19 = trace_event_ignore_this_pid(iVar7), (uVar19 & 1) == 0))))
        goto code_r0x08005080;
    }
    else {
code_r0x08005080:
        puVar9 = 0x14;
        iVar6 = trace_event_buffer_reserve(&uStack_268,iVar7);
        if (iVar6 != 0) {
            *(iVar6 + 8) = auVar26._8_4_;
            *(iVar6 + 0xc) = puVar11;
            *(iVar6 + 0x10) = uVar8;
            trace_event_buffer_commit(&uStack_268);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_238) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar5 = auVar26._0_8_;
    *extraout_x18_03 = sym.perf_trace_cluster_exit;
    pcStack_2a8 = sym.perf_trace_cluster_exit;
    iVar6 = sp_el0;
    iStack_2b8 = *(iVar6 + 0x5e0);
    uVar13 = uVar12 & 0xffffffff;
    uVar16 = puVar9 & 0xffffffff;
    uVar18 = auVar26._8_8_ & 0xffffffff;
    uStack_2c0 = 0;
    uStack_2c4 = 0;
    iVar6 = tpidr_el1;
    piVar2 = iVar6 + *(uVar5 + 0x78);
    uVar19 = uVar12;
    ppuStack_2b0 = &ppuStack_230;
    piStack_2a0 = piVar1;
    uStack_298 = uVar24;
    iStack_290 = iVar7;
    uStack_288 = uVar17;
    uStack_280 = puVar11 & 0xffffffff;
    uStack_278 = uVar8 & 0xffffffff;
    if ((*(uVar5 + 0x80) != 0) || (puVar10 = puVar9, *piVar2 != 0)) {
        puVar10 = &uStack_2c4;
        iVar6 = perf_trace_buf_alloc(0x14,&uStack_2c0);
        uVar17 = _trace_event_raw_init;
        if (iVar6 != 0) {
            *(uStack_2c0 + 0xe8) = &ppuStack_2b0;
            puVar10 = uStack_2c4;
            uVar15 = 1;
            *(uStack_2c0 + 0xf8) = auStack_2d0;
            *(uStack_2c0 + 0x100) = ~(-1L << (uVar17 & 0x3f)) & 0x80050dc;
            *(uStack_2c0 + 0x108) = 5;
            *(iVar6 + 8) = auVar26._8_4_;
            *(iVar6 + 0xc) = puVar9;
            *(iVar6 + 0x10) = uVar12;
            uVar19 = uVar5;
            uVar14 = uStack_2c0;
            perf_trace_run_bpf_submit(iVar6,0x14,puVar10,uVar5,1,uStack_2c0,piVar2,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_2b8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar7 = auVar26._0_8_;
    uVar24 = tpidr_el2;
    *extraout_x18_04 = 0x8005200;
    uStack_308 = 0x8005200;
    iVar6 = sp_el0;
    iStack_318 = *(iVar6 + 0x5e0);
    uVar17 = auVar26._8_8_ & 0xffffffff;
    uVar24 = *(iVar7 + 0x48);
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_348 = 0;
    uStack_340 = 0;
    uVar21 = uVar24;
    uVar12 = uVar19;
    ppuStack_310 = &ppuStack_2b0;
    piStack_300 = piVar2;
    uStack_2f0 = uVar18;
    uStack_2e8 = uVar16;
    uStack_2e0 = uVar13;
    uStack_2d8 = uVar5;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar9 = puVar10;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar12 = 0;
            event_triggers_call(iVar7,0);
        }
        if (((uVar21 >> 6 & 1) != 0) ||
           (((uVar21 >> 9 & 1) != 0 && (uVar5 = trace_event_ignore_this_pid(iVar7), (uVar5 & 1) != 0))))
        goto code_r0x080052ac;
    }
    puVar9 = 0x14;
    iVar6 = trace_event_buffer_reserve(&uStack_348,iVar7);
    if (iVar6 != 0) {
        *(iVar6 + 8) = auVar26._8_4_;
        *(iVar6 + 0xc) = puVar10;
        *(iVar6 + 0x10) = uVar19;
        trace_event_buffer_commit(&uStack_348);
    }
code_r0x080052ac:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_318) {
        return;
    }
    auVar27 = __stack_chk_fail();
    uVar5 = auVar27._0_8_;
    *extraout_x18_05 = sym.perf_trace_cluster_enter;
    pcStack_388 = sym.perf_trace_cluster_enter;
    pcStack_380 = sym.perf_trace_cluster_exit;
    iVar6 = sp_el0;
    iStack_398 = *(iVar6 + 0x5e0);
    uVar4 = uVar12;
    uVar3 = SUB84(puVar9,0);
    uStack_3a0 = 0;
    uStack_3a4 = 0;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar5 + 0x78);
    ppuStack_390 = &ppuStack_310;
    uStack_378 = uVar24;
    iStack_370 = iVar7;
    uStack_368 = uVar17;
    uStack_360 = puVar10 & 0xffffffff;
    uStack_358 = uVar19 & 0xffffffff;
    if ((*(uVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar9 = &uStack_3a4;
        iVar6 = perf_trace_buf_alloc(0x14,&uStack_3a0,puVar9);
        uVar17 = _trace_event_raw_init;
        if (iVar6 != 0) {
            *(uStack_3a0 + 0xe8) = &ppuStack_390;
            puVar9 = uStack_3a4;
            uVar15 = 1;
            *(uStack_3a0 + 0xf8) = auStack_3b0;
            *(uStack_3a0 + 0x100) = ~(-1L << (uVar17 & 0x3f)) & 0x80052e4;
            *(uStack_3a0 + 0x108) = 5;
            *(iVar6 + 8) = auVar27._8_4_;
            *(iVar6 + 0xc) = uVar3;
            *(iVar6 + 0x10) = uVar4;
            uVar14 = uStack_3a0;
            perf_trace_run_bpf_submit(iVar6,0x14,puVar9,uVar5,1,uStack_3a0,piVar1,0);
            uVar12 = uVar5;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_398) {
        auVar26 = __stack_chk_fail();
        uVar24 = tpidr_el2;
        *extraout_x18_06 = 0x8005408;
        bpf_trace_run5(in_tmp_ldXn,auVar26._0_8_,auVar26._8_8_ & 0xffffffff,puVar9 & 0xffffffff,uVar12 & 0xffffffff
                       ,uVar15 & 0xffffffff,uVar14 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_cluster_pred_select.93919d071927d692c25ddf044f89175d.cfi_jt @ 0x080026f0 (size 8) =====

void sym.__bpf_trace_cluster_pred_select.93919d071927d692c25ddf044f89175d.cfi_jt
               (ulong param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run5(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
}


// ===== sym.perf_trace_cluster_pred_select.93919d071927d692c25ddf044f89175d.cfi_jt @ 0x080026f8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080051a8)
//WARNING: Removing unreachable block (ram,0x08004f9c)
//WARNING: Removing unreachable block (ram,0x080053b0)

void sym.perf_trace_cluster_pred_select.93919d071927d692c25ddf044f89175d.cfi_jt
               (uint64_t param_1,uint32_t param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,
               uint64_t param_6)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint uVar3;
    uint uVar4;
    ulong in_tmp_ldXn;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint32_t uVar21;
    uint64_t uVar22;
    uint64_t uVar23;
    ulong uVar24;
    uint64_t unaff_x30;
    uchar auVar25 [16];
    uchar auVar26 [12];
    uchar auStack_320 [12];
    uint32_t uStack_314;
    uint64_t uStack_310;
    int64_t iStack_308;
    ulong **ppuStack_300;
    code *pcStack_2f8;
    code *pcStack_2f0;
    ulong uStack_2e8;
    int64_t iStack_2e0;
    uint64_t uStack_2d8;
    uint64_t uStack_2d0;
    uint64_t uStack_2c8;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    int64_t iStack_288;
    ulong **ppuStack_280;
    ulong uStack_278;
    int64_t *piStack_270;
    uint64_t uStack_260;
    uint64_t uStack_258;
    uint64_t uStack_250;
    uint64_t uStack_248;
    uchar auStack_240 [12];
    uint32_t uStack_234;
    uint64_t uStack_230;
    int64_t iStack_228;
    ulong **ppuStack_220;
    code *pcStack_218;
    int64_t *piStack_210;
    ulong uStack_208;
    int64_t iStack_200;
    uint64_t uStack_1f8;
    uint64_t uStack_1f0;
    uint64_t uStack_1e8;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    int64_t iStack_1a8;
    ulong **ppuStack_1a0;
    ulong uStack_198;
    uint64_t uStack_190;
    uint64_t uStack_180;
    uint64_t uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    uchar auStack_160 [12];
    uint32_t uStack_154;
    uint64_t uStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    code *pcStack_138;
    uint64_t uStack_130;
    ulong uStack_120;
    int64_t iStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    int64_t *piStack_a0;
    uint64_t uStack_98;
    uint64_t uStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    uint64_t uStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    uVar14 = param_6 & 0xffffffff;
    uVar15 = param_5 & 0xffffffff;
    uVar18 = param_4 & 0xffffffff;
    uVar22 = param_3 & 0xffffffff;
    uStack_60 = 0;
    uStack_64 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(param_1 + 0x78);
    uVar11 = param_4;
    uVar12 = param_5;
    uVar13 = param_6;
    if ((*(param_1 + 0x80) != 0) || (puVar7 = param_3, *piVar1 != 0)) {
        puVar7 = &uStack_64;
        iVar5 = perf_trace_buf_alloc(0x1c,&uStack_60);
        uVar10 = _trace_event_raw_init;
        if (iVar5 != 0) {
            *(uStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            puVar7 = uStack_64;
            uVar13 = -1L << (uVar10 & 0x3f);
            uVar12 = 1;
            uVar11 = (~uVar13 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar11 = uVar13 | unaff_x30;
            }
            *(uStack_60 + 0xf8) = auStack_70;
            *(uStack_60 + 0x100) = uVar11;
            *(uStack_60 + 0x108) = 5;
            *(iVar5 + 8) = param_2;
            *(iVar5 + 0xc) = param_3;
            *(iVar5 + 0x10) = param_4;
            *(iVar5 + 0x14) = param_5;
            *(iVar5 + 0x18) = param_6;
            uVar11 = param_1;
            uVar13 = uStack_60;
            perf_trace_run_bpf_submit(iVar5,0x1c);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar6 = auVar25._0_8_;
    uVar24 = tpidr_el2;
    *extraout_x18 = 0x8004de0;
    uStack_a8 = 0x8004de0;
    iVar5 = sp_el0;
    iStack_b8 = *(iVar5 + 0x5e0);
    uVar19 = auVar25._8_8_ & 0xffffffff;
    uVar24 = *(iVar6 + 0x48);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar21 = uVar24;
    uVar10 = uVar11;
    uVar17 = uVar12;
    puStack_b0 = &stack0xffffffffffffffb0;
    piStack_a0 = piVar1;
    uStack_98 = uVar22;
    uStack_90 = uVar18;
    uStack_88 = uVar15;
    uStack_80 = uVar14;
    uStack_78 = param_1;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar8 = puVar7;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar10 = 0;
            event_triggers_call(iVar6,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar14 = trace_event_ignore_this_pid(iVar6), (uVar14 & 1) == 0))))
        goto code_r0x08004e6c;
    }
    else {
code_r0x08004e6c:
        puVar8 = 0x18;
        iVar5 = trace_event_buffer_reserve(&uStack_e8,iVar6);
        if (iVar5 != 0) {
            *(iVar5 + 8) = auVar25._8_4_;
            *(iVar5 + 0xc) = puVar7;
            *(iVar5 + 0x10) = uVar11;
            *(iVar5 + 0x14) = uVar12;
            trace_event_buffer_commit(&uStack_e8);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar18 = auVar25._0_8_;
    *extraout_x18_00 = sym.perf_trace_cluster_pred_hist;
    pcStack_138 = sym.perf_trace_cluster_pred_hist;
    iVar5 = sp_el0;
    iStack_148 = *(iVar5 + 0x5e0);
    uVar22 = uVar17 & 0xffffffff;
    uVar16 = uVar10 & 0xffffffff;
    uVar20 = puVar8 & 0xffffffff;
    uVar23 = auVar25._8_8_ & 0xffffffff;
    uStack_150 = 0;
    uStack_154 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(uVar18 + 0x78);
    uVar14 = uVar10;
    uVar15 = uVar17;
    ppuStack_140 = &puStack_b0;
    uStack_130 = param_2;
    uStack_120 = uVar24;
    iStack_118 = iVar6;
    uStack_110 = uVar19;
    uStack_108 = puVar7 & 0xffffffff;
    uStack_100 = uVar11 & 0xffffffff;
    uStack_f8 = uVar12 & 0xffffffff;
    if ((*(uVar18 + 0x80) != 0) || (puVar9 = puVar8, *piVar1 != 0)) {
        puVar9 = &uStack_154;
        iVar5 = perf_trace_buf_alloc(0x1c,&uStack_150);
        uVar11 = _trace_event_raw_init;
        if (iVar5 != 0) {
            *(uStack_150 + 0xe8) = &ppuStack_140;
            puVar9 = uStack_154;
            uVar15 = 1;
            *(uStack_150 + 0xf8) = auStack_160;
            *(uStack_150 + 0x100) = ~(-1L << (uVar11 & 0x3f)) & 0x8004ec8;
            *(uStack_150 + 0x108) = 5;
            *(iVar5 + 8) = auVar25._8_4_;
            *(iVar5 + 0xc) = puVar8;
            *(iVar5 + 0x10) = uVar10;
            *(iVar5 + 0x14) = uVar17;
            uVar14 = uVar18;
            uVar13 = uStack_150;
            perf_trace_run_bpf_submit(iVar5,0x1c,puVar9,uVar18,1,uStack_150,piVar1,0);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_148) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar6 = auVar25._0_8_;
    uVar24 = tpidr_el2;
    *extraout_x18_01 = 0x8004ff8;
    uStack_198 = 0x8004ff8;
    iVar5 = sp_el0;
    iStack_1a8 = *(iVar5 + 0x5e0);
    uVar12 = auVar25._8_8_ & 0xffffffff;
    uVar24 = *(iVar6 + 0x48);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uVar21 = uVar24;
    uVar11 = uVar14;
    ppuStack_1a0 = &ppuStack_140;
    uStack_190 = uVar23;
    uStack_180 = uVar20;
    uStack_178 = uVar16;
    uStack_170 = uVar22;
    uStack_168 = uVar18;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar7 = puVar9;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar7 = NULL;
            uVar11 = 0;
            event_triggers_call(iVar6,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar18 = trace_event_ignore_this_pid(iVar6), (uVar18 & 1) == 0))))
        goto code_r0x08005080;
    }
    else {
code_r0x08005080:
        puVar7 = 0x14;
        iVar5 = trace_event_buffer_reserve(&uStack_1d8,iVar6);
        if (iVar5 != 0) {
            *(iVar5 + 8) = auVar25._8_4_;
            *(iVar5 + 0xc) = puVar9;
            *(iVar5 + 0x10) = uVar14;
            trace_event_buffer_commit(&uStack_1d8);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_1a8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar22 = auVar25._0_8_;
    *extraout_x18_02 = sym.perf_trace_cluster_exit;
    pcStack_218 = sym.perf_trace_cluster_exit;
    iVar5 = sp_el0;
    iStack_228 = *(iVar5 + 0x5e0);
    uVar10 = uVar11 & 0xffffffff;
    uVar17 = puVar7 & 0xffffffff;
    uVar19 = auVar25._8_8_ & 0xffffffff;
    uStack_230 = 0;
    uStack_234 = 0;
    iVar5 = tpidr_el1;
    piVar2 = iVar5 + *(uVar22 + 0x78);
    uVar18 = uVar11;
    ppuStack_220 = &ppuStack_1a0;
    piStack_210 = piVar1;
    uStack_208 = uVar24;
    iStack_200 = iVar6;
    uStack_1f8 = uVar12;
    uStack_1f0 = puVar9 & 0xffffffff;
    uStack_1e8 = uVar14 & 0xffffffff;
    if ((*(uVar22 + 0x80) != 0) || (puVar8 = puVar7, *piVar2 != 0)) {
        puVar8 = &uStack_234;
        iVar5 = perf_trace_buf_alloc(0x14,&uStack_230);
        uVar12 = _trace_event_raw_init;
        if (iVar5 != 0) {
            *(uStack_230 + 0xe8) = &ppuStack_220;
            puVar8 = uStack_234;
            uVar15 = 1;
            *(uStack_230 + 0xf8) = auStack_240;
            *(uStack_230 + 0x100) = ~(-1L << (uVar12 & 0x3f)) & 0x80050dc;
            *(uStack_230 + 0x108) = 5;
            *(iVar5 + 8) = auVar25._8_4_;
            *(iVar5 + 0xc) = puVar7;
            *(iVar5 + 0x10) = uVar11;
            uVar18 = uVar22;
            uVar13 = uStack_230;
            perf_trace_run_bpf_submit(iVar5,0x14,puVar8,uVar22,1,uStack_230,piVar2,0);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_228) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar6 = auVar25._0_8_;
    uVar24 = tpidr_el2;
    *extraout_x18_03 = 0x8005200;
    uStack_278 = 0x8005200;
    iVar5 = sp_el0;
    iStack_288 = *(iVar5 + 0x5e0);
    uVar12 = auVar25._8_8_ & 0xffffffff;
    uVar24 = *(iVar6 + 0x48);
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uVar21 = uVar24;
    uVar11 = uVar18;
    ppuStack_280 = &ppuStack_220;
    piStack_270 = piVar2;
    uStack_260 = uVar19;
    uStack_258 = uVar17;
    uStack_250 = uVar10;
    uStack_248 = uVar22;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar7 = puVar8;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar7 = NULL;
            uVar11 = 0;
            event_triggers_call(iVar6,0);
        }
        if (((uVar21 >> 6 & 1) != 0) ||
           (((uVar21 >> 9 & 1) != 0 && (uVar14 = trace_event_ignore_this_pid(iVar6), (uVar14 & 1) != 0))))
        goto code_r0x080052ac;
    }
    puVar7 = 0x14;
    iVar5 = trace_event_buffer_reserve(&uStack_2b8,iVar6);
    if (iVar5 != 0) {
        *(iVar5 + 8) = auVar25._8_4_;
        *(iVar5 + 0xc) = puVar8;
        *(iVar5 + 0x10) = uVar18;
        trace_event_buffer_commit(&uStack_2b8);
    }
code_r0x080052ac:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_288) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar14 = auVar26._0_8_;
    *extraout_x18_04 = sym.perf_trace_cluster_enter;
    pcStack_2f8 = sym.perf_trace_cluster_enter;
    pcStack_2f0 = sym.perf_trace_cluster_exit;
    iVar5 = sp_el0;
    iStack_308 = *(iVar5 + 0x5e0);
    uVar4 = uVar11;
    uVar3 = SUB84(puVar7,0);
    uStack_310 = 0;
    uStack_314 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(uVar14 + 0x78);
    ppuStack_300 = &ppuStack_280;
    uStack_2e8 = uVar24;
    iStack_2e0 = iVar6;
    uStack_2d8 = uVar12;
    uStack_2d0 = puVar8 & 0xffffffff;
    uStack_2c8 = uVar18 & 0xffffffff;
    if ((*(uVar14 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar7 = &uStack_314;
        iVar5 = perf_trace_buf_alloc(0x14,&uStack_310,puVar7);
        uVar12 = _trace_event_raw_init;
        if (iVar5 != 0) {
            *(uStack_310 + 0xe8) = &ppuStack_300;
            puVar7 = uStack_314;
            uVar15 = 1;
            *(uStack_310 + 0xf8) = auStack_320;
            *(uStack_310 + 0x100) = ~(-1L << (uVar12 & 0x3f)) & 0x80052e4;
            *(uStack_310 + 0x108) = 5;
            *(iVar5 + 8) = auVar26._8_4_;
            *(iVar5 + 0xc) = uVar3;
            *(iVar5 + 0x10) = uVar4;
            uVar13 = uStack_310;
            perf_trace_run_bpf_submit(iVar5,0x14,puVar7,uVar14,1,uStack_310,piVar1,0);
            uVar11 = uVar14;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_308) {
        auVar25 = __stack_chk_fail();
        uVar24 = tpidr_el2;
        *extraout_x18_05 = 0x8005408;
        bpf_trace_run5(in_tmp_ldXn,auVar25._0_8_,auVar25._8_8_ & 0xffffffff,puVar7 & 0xffffffff,uVar11 & 0xffffffff
                       ,uVar15 & 0xffffffff,uVar13 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_gov_pred_select.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x08002700 (size 8) =====

void sym.__bpf_trace_gov_pred_select.54f5299e1f581feb01b94162fe215419.cfi_jt
               (ulong param_1,uint param_2,ulong param_3,uint param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.trace_event_raw_event_gov_pred_select.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x08002708 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08002db8)
//WARNING: Removing unreachable block (ram,0x08002fc4)

void sym.trace_event_raw_event_gov_pred_select.54f5299e1f581feb01b94162fe215419.cfi_jt
               (int64_t param_1,uint param_2,uint32_t *param_3,uint64_t param_4)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint uVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint uVar11;
    uint uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t uVar14;
    uint64_t uVar15;
    uint32_t uVar16;
    ulong uVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    uchar auVar19 [12];
    uchar auStack_1c0 [12];
    uint uStack_1b4;
    int64_t iStack_1b0;
    int64_t iStack_1a8;
    ulong **ppuStack_1a0;
    code *pcStack_198;
    code *pcStack_190;
    ulong uStack_188;
    int64_t iStack_180;
    uint64_t uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    int64_t iStack_128;
    uchar **ppuStack_120;
    ulong uStack_118;
    int64_t *piStack_110;
    uint64_t uStack_100;
    uint32_t *puStack_f8;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    uchar auStack_e0 [12];
    uint32_t uStack_d4;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar16 = *(param_1 + 0x48);
    uVar13 = param_4;
    if ((uVar16 >> 8 & 1) == 0) {
        puVar9 = param_3;
        if ((uVar16 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar13 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar16 >> 6 & 1) == 0) &&
           (((uVar16 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(param_1), (uVar3 & 1) == 0))))
        goto code_r0x08002c8c;
    }
    else {
code_r0x08002c8c:
        puVar9 = 0x20;
        iVar4 = trace_event_buffer_reserve(&uStack_78,param_1);
        if (iVar4 != 0) {
            *(iVar4 + 8) = param_2;
            *(iVar4 + 0x10) = param_3;
            *(iVar4 + 0x18) = param_4;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    auVar18 = __stack_chk_fail();
    uVar6 = auVar18._0_8_;
    *extraout_x18 = sym.perf_trace_gov_pred_select;
    pcStack_b8 = sym.perf_trace_gov_pred_select;
    iVar4 = sp_el0;
    iStack_c8 = *(iVar4 + 0x5e0);
    uVar14 = uVar13 & 0xffffffff;
    uVar15 = auVar18._8_8_ & 0xffffffff;
    iStack_d0 = 0;
    uStack_d4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(uVar6 + 0x78);
    uVar3 = uVar13;
    puStack_c0 = &stack0xffffffffffffffc0;
    if ((*(uVar6 + 0x80) != 0) || (puVar10 = puVar9, *piVar1 != 0)) {
        puVar10 = &uStack_d4;
        iVar4 = perf_trace_buf_alloc(0x24,&iStack_d0);
        uVar2 = _trace_event_raw_init;
        if (iVar4 != 0) {
            *(iStack_d0 + 0xe8) = &puStack_c0;
            puVar10 = uStack_d4;
            *(iStack_d0 + 0xf8) = auStack_e0;
            *(iStack_d0 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x8002cec;
            *(iStack_d0 + 0x108) = 5;
            *(iVar4 + 8) = auVar18._8_4_;
            *(iVar4 + 0x10) = puVar9;
            *(iVar4 + 0x18) = uVar13;
            uVar3 = uVar6;
            perf_trace_run_bpf_submit(iVar4,0x24,puVar10,uVar6,1,iStack_d0,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar5 = auVar18._0_8_;
    uVar11 = uVar3;
    uVar17 = tpidr_el2;
    *extraout_x18_00 = 0x8002e14;
    uStack_118 = 0x8002e14;
    iVar4 = sp_el0;
    iStack_128 = *(iVar4 + 0x5e0);
    uVar13 = auVar18._8_8_ & 0xffffffff;
    uVar17 = *(iVar5 + 0x48);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uVar16 = uVar17;
    uVar12 = uVar11;
    ppuStack_120 = &puStack_c0;
    piStack_110 = piVar1;
    uStack_100 = uVar15;
    puStack_f8 = puVar9;
    uStack_f0 = uVar14;
    uStack_e8 = uVar6;
    if ((uVar16 >> 8 & 1) == 0) {
        uVar8 = puVar10;
        if ((uVar16 >> 7 & 1) != 0) {
            uVar8 = 0;
            uVar12 = 0;
            event_triggers_call(iVar5,0);
        }
        if (((uVar16 >> 6 & 1) != 0) ||
           (((uVar16 >> 9 & 1) != 0 && (uVar6 = trace_event_ignore_this_pid(iVar5), (uVar6 & 1) != 0))))
        goto code_r0x08002ec0;
    }
    uVar8 = 0x14;
    iVar4 = trace_event_buffer_reserve(&uStack_158,iVar5);
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar18._8_4_;
        *(iVar4 + 0xc) = puVar10;
        *(iVar4 + 0x10) = uVar11;
        trace_event_buffer_commit(&uStack_158);
    }
code_r0x08002ec0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_128) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar7 = auVar19._0_8_;
    *extraout_x18_01 = sym.perf_trace_gov_pred_hist;
    pcStack_198 = sym.perf_trace_gov_pred_hist;
    pcStack_190 = sym.perf_trace_gov_pred_select;
    iVar4 = sp_el0;
    iStack_1a8 = *(iVar4 + 0x5e0);
    iStack_1b0 = 0;
    uStack_1b4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar7 + 0x78);
    ppuStack_1a0 = &ppuStack_120;
    uStack_188 = uVar17;
    iStack_180 = iVar5;
    uStack_178 = uVar13;
    uStack_170 = puVar10 & 0xffffffff;
    uStack_168 = uVar3 & 0xffffffff;
    if (((*(iVar7 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x14,&iStack_1b0,&uStack_1b4), uVar13 = _trace_event_raw_init, iVar4 != 0)) {
        *(iStack_1b0 + 0xe8) = &ppuStack_1a0;
        *(iStack_1b0 + 0xf8) = auStack_1c0;
        *(iStack_1b0 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x8002ef8;
        *(iStack_1b0 + 0x108) = 5;
        *(iVar4 + 8) = auVar19._8_4_;
        *(iVar4 + 0xc) = uVar8;
        *(iVar4 + 0x10) = uVar12;
        perf_trace_run_bpf_submit(iVar4,0x14,uStack_1b4,iVar7,1,iStack_1b0,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_1a8) {
        auVar18 = __stack_chk_fail();
        uVar17 = tpidr_el2;
        *extraout_x18_02 = 0x800301c;
        bpf_trace_run4(in_tmp_ldXn,auVar18._0_8_,auVar18._8_8_ & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_gov_pred_select.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x08002710 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08002fc4)

void sym.perf_trace_gov_pred_select.54f5299e1f581feb01b94162fe215419.cfi_jt
               (int64_t param_1,uint32_t param_2,uint32_t *param_3,uint32_t param_4)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int64_t iVar4;
    uint uVar5;
    uint uVar6;
    uint32_t *puVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    uint64_t unaff_x30;
    uchar auVar15 [12];
    uchar auVar16 [16];
    uchar auStack_140 [12];
    uint uStack_134;
    int64_t iStack_130;
    int64_t iStack_128;
    uchar **ppuStack_120;
    code *pcStack_118;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    ulong uStack_98;
    int64_t *piStack_90;
    uint64_t uStack_80;
    uint32_t *puStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    uchar auStack_60 [12];
    uint32_t uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uVar12 = param_4;
    uVar13 = param_2;
    iStack_50 = 0;
    uStack_54 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(param_1 + 0x78);
    uVar8 = param_4;
    if ((*(param_1 + 0x80) != 0) || (puVar7 = param_3, *piVar1 != 0)) {
        puVar7 = &uStack_54;
        iVar4 = perf_trace_buf_alloc(0x24,&iStack_50);
        uVar2 = _trace_event_raw_init;
        if (iVar4 != 0) {
            *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            puVar7 = uStack_54;
            uVar11 = -1L << (uVar2 & 0x3f);
            uVar2 = (~uVar11 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar2 = uVar11 | unaff_x30;
            }
            *(iStack_50 + 0xf8) = auStack_60;
            *(iStack_50 + 0x100) = uVar2;
            *(iStack_50 + 0x108) = 5;
            *(iVar4 + 8) = param_2;
            *(iVar4 + 0x10) = param_3;
            *(iVar4 + 0x18) = param_4;
            iVar10 = param_1;
            perf_trace_run_bpf_submit(iVar4,0x24,puVar7,param_1,1,iStack_50,piVar1,0);
            uVar8 = iVar10;
        }
    }
    uVar5 = SUB84(puVar7,0);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    auVar15 = __stack_chk_fail();
    iVar10 = auVar15._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x8002e14;
    uStack_98 = 0x8002e14;
    iVar4 = sp_el0;
    iStack_a8 = *(iVar4 + 0x5e0);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uVar14 = *(iVar10 + 0x48);
    uVar9 = uVar8;
    puStack_a0 = &stack0xffffffffffffffc0;
    piStack_90 = piVar1;
    uStack_80 = uVar13;
    puStack_78 = param_3;
    uStack_70 = uVar12;
    iStack_68 = param_1;
    if ((uVar14 >> 8 & 1) == 0) {
        uVar6 = uVar5;
        if ((uVar14 >> 7 & 1) != 0) {
            uVar6 = 0;
            uVar9 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar14 >> 6 & 1) != 0) ||
           (((uVar14 >> 9 & 1) != 0 && (uVar12 = trace_event_ignore_this_pid(iVar10), (uVar12 & 1) != 0))))
        goto code_r0x08002ec0;
    }
    uVar6 = 0x14;
    iVar4 = trace_event_buffer_reserve(&uStack_d8,iVar10);
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar15._8_4_;
        *(iVar4 + 0xc) = uVar5;
        *(iVar4 + 0x10) = uVar8;
        trace_event_buffer_commit(&uStack_d8);
    }
code_r0x08002ec0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_a8) {
        return;
    }
    auVar15 = __stack_chk_fail();
    iVar10 = auVar15._0_8_;
    *extraout_x18_00 = sym.perf_trace_gov_pred_hist;
    pcStack_118 = sym.perf_trace_gov_pred_hist;
    iVar4 = sp_el0;
    iStack_128 = *(iVar4 + 0x5e0);
    iStack_130 = 0;
    uStack_134 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar10 + 0x78);
    ppuStack_120 = &puStack_a0;
    if (((*(iVar10 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x14,&iStack_130,&uStack_134), uVar12 = _trace_event_raw_init, iVar4 != 0)) {
        *(iStack_130 + 0xe8) = &ppuStack_120;
        *(iStack_130 + 0xf8) = auStack_140;
        *(iStack_130 + 0x100) = ~(-1L << (uVar12 & 0x3f)) & 0x8002ef8;
        *(iStack_130 + 0x108) = 5;
        *(iVar4 + 8) = auVar15._8_4_;
        *(iVar4 + 0xc) = uVar6;
        *(iVar4 + 0x10) = uVar9;
        perf_trace_run_bpf_submit(iVar4,0x14,uStack_134,iVar10,1,iStack_130,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_128) {
        auVar16 = __stack_chk_fail();
        uVar3 = tpidr_el2;
        *extraout_x18_01 = 0x800301c;
        bpf_trace_run4(in_tmp_ldXn,auVar16._0_8_,auVar16._8_8_ & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__traceiter_lpm_gov_select.cfi_jt @ 0x08002718 (size 8) =====

ulong sym.__traceiter_lpm_gov_select.cfi_jt(ulong param_1,uint param_2,ulong param_3,ulong param_4,ulong param_5)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8006d50;
    piVar1 = *0x8006d50;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.perf_trace_lpm_gov_select.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x08002720 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08002db8)
//WARNING: Removing unreachable block (ram,0x08002fc4)

void sym.perf_trace_lpm_gov_select.54f5299e1f581feb01b94162fe215419.cfi_jt
               (uint64_t param_1,uint32_t param_2,uint32_t *param_3,uint64_t param_4,ulong param_5)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong in_tmp_ldXn;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint uVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint uVar10;
    uint uVar11;
    uint64_t uVar12;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    ulong uVar19;
    uint64_t unaff_x30;
    uchar auVar20 [16];
    uchar auVar21 [12];
    uchar auStack_230 [12];
    uint uStack_224;
    int64_t iStack_220;
    int64_t iStack_218;
    ulong **ppuStack_210;
    code *pcStack_208;
    code *pcStack_200;
    ulong uStack_1f8;
    int64_t iStack_1f0;
    uint64_t uStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    int64_t iStack_198;
    ulong **ppuStack_190;
    ulong uStack_188;
    int64_t *piStack_180;
    uint64_t uStack_170;
    uint32_t *puStack_168;
    uint64_t uStack_160;
    uint64_t uStack_158;
    uchar auStack_150 [12];
    uint32_t uStack_144;
    int64_t iStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    code *pcStack_128;
    int64_t *piStack_120;
    ulong uStack_118;
    int64_t iStack_110;
    uint64_t uStack_108;
    uint32_t *puStack_100;
    uint64_t uStack_f8;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    uint64_t uStack_a0;
    uint32_t *puStack_90;
    uint64_t uStack_88;
    ulong uStack_80;
    uint64_t uStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    uVar18 = param_2;
    iStack_60 = 0;
    uStack_64 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(param_1 + 0x78);
    uVar15 = param_4;
    if ((*(param_1 + 0x80) != 0) || (puVar8 = param_3, *piVar1 != 0)) {
        puVar8 = &uStack_64;
        iVar3 = perf_trace_buf_alloc(0x2c,&iStack_60);
        uVar12 = _trace_event_raw_init;
        if (iVar3 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            puVar8 = uStack_64;
            uVar12 = -1L << (uVar12 & 0x3f);
            uVar15 = (~uVar12 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar15 = uVar12 | unaff_x30;
            }
            *(iStack_60 + 0xf8) = auStack_70;
            *(iStack_60 + 0x100) = uVar15;
            *(iStack_60 + 0x108) = 5;
            *(iVar3 + 8) = param_2;
            *(iVar3 + 0x10) = param_3;
            *(iVar3 + 0x18) = param_4;
            *(iVar3 + 0x20) = param_5;
            uVar15 = param_1;
            perf_trace_run_bpf_submit(iVar3,0x2c,puVar8,param_1,1,iStack_60,piVar1,0);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar4 = auVar20._0_8_;
    uVar19 = tpidr_el2;
    *extraout_x18 = 0x8002c04;
    uStack_a8 = 0x8002c04;
    iVar3 = sp_el0;
    iStack_b8 = *(iVar3 + 0x5e0);
    uVar14 = auVar20._8_8_ & 0xffffffff;
    uVar19 = *(iVar4 + 0x48);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar17 = uVar19;
    uVar12 = uVar15;
    puStack_b0 = &stack0xffffffffffffffb0;
    uStack_a0 = uVar18;
    puStack_90 = param_3;
    uStack_88 = param_4;
    uStack_80 = param_5;
    uStack_78 = param_1;
    if ((uVar17 >> 8 & 1) == 0) {
        puVar9 = puVar8;
        if ((uVar17 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar12 = 0;
            event_triggers_call(iVar4,0);
        }
        if (((uVar17 >> 6 & 1) == 0) &&
           (((uVar17 >> 9 & 1) == 0 || (uVar18 = trace_event_ignore_this_pid(iVar4), (uVar18 & 1) == 0))))
        goto code_r0x08002c8c;
    }
    else {
code_r0x08002c8c:
        puVar9 = 0x20;
        iVar3 = trace_event_buffer_reserve(&uStack_e8,iVar4);
        if (iVar3 != 0) {
            *(iVar3 + 8) = auVar20._8_4_;
            *(iVar3 + 0x10) = puVar8;
            *(iVar3 + 0x18) = uVar15;
            trace_event_buffer_commit(&uStack_e8);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar20 = __stack_chk_fail();
    uVar5 = auVar20._0_8_;
    *extraout_x18_00 = sym.perf_trace_gov_pred_select;
    pcStack_128 = sym.perf_trace_gov_pred_select;
    iVar3 = sp_el0;
    iStack_138 = *(iVar3 + 0x5e0);
    uVar13 = uVar12 & 0xffffffff;
    uVar16 = auVar20._8_8_ & 0xffffffff;
    iStack_140 = 0;
    uStack_144 = 0;
    iVar3 = tpidr_el1;
    piVar2 = iVar3 + *(uVar5 + 0x78);
    uVar18 = uVar12;
    ppuStack_130 = &puStack_b0;
    piStack_120 = piVar1;
    uStack_118 = uVar19;
    iStack_110 = iVar4;
    uStack_108 = uVar14;
    puStack_100 = puVar8;
    uStack_f8 = uVar15 & 0xffffffff;
    if ((*(uVar5 + 0x80) != 0) || (puVar8 = puVar9, *piVar2 != 0)) {
        puVar8 = &uStack_144;
        iVar3 = perf_trace_buf_alloc(0x24,&iStack_140);
        uVar15 = _trace_event_raw_init;
        if (iVar3 != 0) {
            *(iStack_140 + 0xe8) = &ppuStack_130;
            puVar8 = uStack_144;
            *(iStack_140 + 0xf8) = auStack_150;
            *(iStack_140 + 0x100) = ~(-1L << (uVar15 & 0x3f)) & 0x8002cec;
            *(iStack_140 + 0x108) = 5;
            *(iVar3 + 8) = auVar20._8_4_;
            *(iVar3 + 0x10) = puVar9;
            *(iVar3 + 0x18) = uVar12;
            uVar18 = uVar5;
            perf_trace_run_bpf_submit(iVar3,0x24,puVar8,uVar5,1,iStack_140,piVar2,0);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_138) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar4 = auVar20._0_8_;
    uVar10 = uVar18;
    uVar19 = tpidr_el2;
    *extraout_x18_01 = 0x8002e14;
    uStack_188 = 0x8002e14;
    iVar3 = sp_el0;
    iStack_198 = *(iVar3 + 0x5e0);
    uVar15 = auVar20._8_8_ & 0xffffffff;
    uVar19 = *(iVar4 + 0x48);
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uVar17 = uVar19;
    uVar11 = uVar10;
    ppuStack_190 = &ppuStack_130;
    piStack_180 = piVar2;
    uStack_170 = uVar16;
    puStack_168 = puVar9;
    uStack_160 = uVar13;
    uStack_158 = uVar5;
    if ((uVar17 >> 8 & 1) == 0) {
        uVar7 = puVar8;
        if ((uVar17 >> 7 & 1) != 0) {
            uVar7 = 0;
            uVar11 = 0;
            event_triggers_call(iVar4,0);
        }
        if (((uVar17 >> 6 & 1) != 0) ||
           (((uVar17 >> 9 & 1) != 0 && (uVar12 = trace_event_ignore_this_pid(iVar4), (uVar12 & 1) != 0))))
        goto code_r0x08002ec0;
    }
    uVar7 = 0x14;
    iVar3 = trace_event_buffer_reserve(&uStack_1c8,iVar4);
    if (iVar3 != 0) {
        *(iVar3 + 8) = auVar20._8_4_;
        *(iVar3 + 0xc) = puVar8;
        *(iVar3 + 0x10) = uVar10;
        trace_event_buffer_commit(&uStack_1c8);
    }
code_r0x08002ec0:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_198) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar6 = auVar21._0_8_;
    *extraout_x18_02 = sym.perf_trace_gov_pred_hist;
    pcStack_208 = sym.perf_trace_gov_pred_hist;
    pcStack_200 = sym.perf_trace_gov_pred_select;
    iVar3 = sp_el0;
    iStack_218 = *(iVar3 + 0x5e0);
    iStack_220 = 0;
    uStack_224 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(iVar6 + 0x78);
    ppuStack_210 = &ppuStack_190;
    uStack_1f8 = uVar19;
    iStack_1f0 = iVar4;
    uStack_1e8 = uVar15;
    uStack_1e0 = puVar8 & 0xffffffff;
    uStack_1d8 = uVar18 & 0xffffffff;
    if (((*(iVar6 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar3 = perf_trace_buf_alloc(0x14,&iStack_220,&uStack_224), uVar15 = _trace_event_raw_init, iVar3 != 0)) {
        *(iStack_220 + 0xe8) = &ppuStack_210;
        *(iStack_220 + 0xf8) = auStack_230;
        *(iStack_220 + 0x100) = ~(-1L << (uVar15 & 0x3f)) & 0x8002ef8;
        *(iStack_220 + 0x108) = 5;
        *(iVar3 + 8) = auVar21._8_4_;
        *(iVar3 + 0xc) = uVar7;
        *(iVar3 + 0x10) = uVar11;
        perf_trace_run_bpf_submit(iVar3,0x14,uStack_224,iVar6,1,iStack_220,piVar1,0);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_218) {
        auVar20 = __stack_chk_fail();
        uVar19 = tpidr_el2;
        *extraout_x18_03 = 0x800301c;
        bpf_trace_run4(in_tmp_ldXn,auVar20._0_8_,auVar20._8_8_ & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_lpm_gov_select.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x08002728 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08002db8)
//WARNING: Removing unreachable block (ram,0x08002ba4)
//WARNING: Removing unreachable block (ram,0x08002fc4)

void sym.trace_event_raw_event_lpm_gov_select.54f5299e1f581feb01b94162fe215419.cfi_jt
               (int64_t param_1,uint param_2,uint32_t *param_3,uint64_t param_4,ulong param_5)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint uVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint uVar11;
    uint uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar15;
    uint64_t uVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    ulong uVar19;
    ulong uVar20;
    ulong unaff_x30;
    uchar auVar21 [16];
    uchar auVar22 [12];
    uchar auStack_2b0 [12];
    uint uStack_2a4;
    int64_t iStack_2a0;
    int64_t iStack_298;
    ulong **ppuStack_290;
    code *pcStack_288;
    code *pcStack_280;
    ulong uStack_278;
    int64_t iStack_270;
    uint64_t uStack_268;
    uint64_t uStack_260;
    uint64_t uStack_258;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    int64_t iStack_218;
    ulong **ppuStack_210;
    ulong uStack_208;
    int64_t *piStack_200;
    uint64_t uStack_1f0;
    uint32_t *puStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uchar auStack_1d0 [12];
    uint32_t uStack_1c4;
    int64_t iStack_1c0;
    int64_t iStack_1b8;
    ulong **ppuStack_1b0;
    code *pcStack_1a8;
    int64_t *piStack_1a0;
    ulong uStack_198;
    int64_t iStack_190;
    uint64_t uStack_188;
    uint32_t *puStack_180;
    uint64_t uStack_178;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    ulong uStack_128;
    uint64_t uStack_120;
    uint32_t *puStack_110;
    uint64_t uStack_108;
    ulong uStack_100;
    uint64_t uStack_f8;
    uchar auStack_f0 [12];
    uint32_t uStack_e4;
    int64_t iStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar17 = *(param_1 + 0x48);
    uVar13 = param_4;
    uVar20 = param_5;
    if ((uVar17 >> 8 & 1) == 0) {
        puVar9 = param_3;
        if ((uVar17 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar13 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar17 >> 6 & 1) == 0) &&
           (((uVar17 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(param_1), (uVar3 & 1) == 0))))
        goto code_r0x08002a70;
    }
    else {
code_r0x08002a70:
        puVar9 = 0x28;
        iVar4 = trace_event_buffer_reserve(&uStack_78,param_1);
        if (iVar4 != 0) {
            *(iVar4 + 8) = param_2;
            *(iVar4 + 0x10) = param_3;
            *(iVar4 + 0x18) = param_4;
            *(iVar4 + 0x20) = param_5;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    auVar21 = __stack_chk_fail();
    uVar6 = auVar21._0_8_;
    *extraout_x18 = sym.perf_trace_lpm_gov_select;
    pcStack_c8 = sym.perf_trace_lpm_gov_select;
    iVar4 = sp_el0;
    iStack_d8 = *(iVar4 + 0x5e0);
    uVar18 = auVar21._8_8_ & 0xffffffff;
    iStack_e0 = 0;
    uStack_e4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(uVar6 + 0x78);
    uVar3 = uVar13;
    puStack_d0 = &stack0xffffffffffffffc0;
    if ((*(uVar6 + 0x80) != 0) || (puVar10 = puVar9, *piVar1 != 0)) {
        puVar10 = &uStack_e4;
        iVar4 = perf_trace_buf_alloc(0x2c,&iStack_e0);
        uVar14 = _trace_event_raw_init;
        if (iVar4 != 0) {
            *(iStack_e0 + 0xe8) = &puStack_d0;
            puVar10 = uStack_e4;
            *(iStack_e0 + 0xf8) = auStack_f0;
            *(iStack_e0 + 0x100) = ~(-1L << (uVar14 & 0x3f)) & 0x8002ad0;
            *(iStack_e0 + 0x108) = 5;
            *(iVar4 + 8) = auVar21._8_4_;
            *(iVar4 + 0x10) = puVar9;
            *(iVar4 + 0x18) = uVar13;
            *(iVar4 + 0x20) = uVar20;
            uVar3 = uVar6;
            perf_trace_run_bpf_submit(iVar4,0x2c,puVar10,uVar6,1,iStack_e0,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar5 = auVar21._0_8_;
    uVar19 = tpidr_el2;
    *extraout_x18_00 = 0x8002c04;
    uStack_128 = 0x8002c04;
    iVar4 = sp_el0;
    iStack_138 = *(iVar4 + 0x5e0);
    uVar15 = auVar21._8_8_ & 0xffffffff;
    uVar19 = *(iVar5 + 0x48);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uVar17 = uVar19;
    uVar14 = uVar3;
    ppuStack_130 = &puStack_d0;
    uStack_120 = uVar18;
    puStack_110 = puVar9;
    uStack_108 = uVar13;
    uStack_100 = uVar20;
    uStack_f8 = uVar6;
    if ((uVar17 >> 8 & 1) == 0) {
        puVar9 = puVar10;
        if ((uVar17 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar14 = 0;
            event_triggers_call(iVar5,0);
        }
        if (((uVar17 >> 6 & 1) == 0) &&
           (((uVar17 >> 9 & 1) == 0 || (uVar13 = trace_event_ignore_this_pid(iVar5), (uVar13 & 1) == 0))))
        goto code_r0x08002c8c;
    }
    else {
code_r0x08002c8c:
        puVar9 = 0x20;
        iVar4 = trace_event_buffer_reserve(&uStack_168,iVar5);
        if (iVar4 != 0) {
            *(iVar4 + 8) = auVar21._8_4_;
            *(iVar4 + 0x10) = puVar10;
            *(iVar4 + 0x18) = uVar3;
            trace_event_buffer_commit(&uStack_168);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_138) {
        return;
    }
    auVar21 = __stack_chk_fail();
    uVar6 = auVar21._0_8_;
    *extraout_x18_01 = sym.perf_trace_gov_pred_select;
    pcStack_1a8 = sym.perf_trace_gov_pred_select;
    iVar4 = sp_el0;
    iStack_1b8 = *(iVar4 + 0x5e0);
    uVar18 = uVar14 & 0xffffffff;
    uVar16 = auVar21._8_8_ & 0xffffffff;
    iStack_1c0 = 0;
    uStack_1c4 = 0;
    iVar4 = tpidr_el1;
    piVar2 = iVar4 + *(uVar6 + 0x78);
    uVar13 = uVar14;
    ppuStack_1b0 = &ppuStack_130;
    piStack_1a0 = piVar1;
    uStack_198 = uVar19;
    iStack_190 = iVar5;
    uStack_188 = uVar15;
    puStack_180 = puVar10;
    uStack_178 = uVar3 & 0xffffffff;
    if ((*(uVar6 + 0x80) != 0) || (puVar10 = puVar9, *piVar2 != 0)) {
        puVar10 = &uStack_1c4;
        iVar4 = perf_trace_buf_alloc(0x24,&iStack_1c0);
        uVar3 = _trace_event_raw_init;
        if (iVar4 != 0) {
            *(iStack_1c0 + 0xe8) = &ppuStack_1b0;
            puVar10 = uStack_1c4;
            *(iStack_1c0 + 0xf8) = auStack_1d0;
            *(iStack_1c0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8002cec;
            *(iStack_1c0 + 0x108) = 5;
            *(iVar4 + 8) = auVar21._8_4_;
            *(iVar4 + 0x10) = puVar9;
            *(iVar4 + 0x18) = uVar14;
            uVar13 = uVar6;
            perf_trace_run_bpf_submit(iVar4,0x24,puVar10,uVar6,1,iStack_1c0,piVar2,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar5 = auVar21._0_8_;
    uVar11 = uVar13;
    uVar20 = tpidr_el2;
    *extraout_x18_02 = 0x8002e14;
    uStack_208 = 0x8002e14;
    iVar4 = sp_el0;
    iStack_218 = *(iVar4 + 0x5e0);
    uVar3 = auVar21._8_8_ & 0xffffffff;
    uVar20 = *(iVar5 + 0x48);
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uVar17 = uVar20;
    uVar12 = uVar11;
    ppuStack_210 = &ppuStack_1b0;
    piStack_200 = piVar2;
    uStack_1f0 = uVar16;
    puStack_1e8 = puVar9;
    uStack_1e0 = uVar18;
    uStack_1d8 = uVar6;
    if ((uVar17 >> 8 & 1) == 0) {
        uVar8 = puVar10;
        if ((uVar17 >> 7 & 1) != 0) {
            uVar8 = 0;
            uVar12 = 0;
            event_triggers_call(iVar5,0);
        }
        if (((uVar17 >> 6 & 1) != 0) ||
           (((uVar17 >> 9 & 1) != 0 && (uVar6 = trace_event_ignore_this_pid(iVar5), (uVar6 & 1) != 0))))
        goto code_r0x08002ec0;
    }
    uVar8 = 0x14;
    iVar4 = trace_event_buffer_reserve(&uStack_248,iVar5);
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar21._8_4_;
        *(iVar4 + 0xc) = puVar10;
        *(iVar4 + 0x10) = uVar11;
        trace_event_buffer_commit(&uStack_248);
    }
code_r0x08002ec0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_218) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar7 = auVar22._0_8_;
    *extraout_x18_03 = sym.perf_trace_gov_pred_hist;
    pcStack_288 = sym.perf_trace_gov_pred_hist;
    pcStack_280 = sym.perf_trace_gov_pred_select;
    iVar4 = sp_el0;
    iStack_298 = *(iVar4 + 0x5e0);
    iStack_2a0 = 0;
    uStack_2a4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar7 + 0x78);
    ppuStack_290 = &ppuStack_210;
    uStack_278 = uVar20;
    iStack_270 = iVar5;
    uStack_268 = uVar3;
    uStack_260 = puVar10 & 0xffffffff;
    uStack_258 = uVar13 & 0xffffffff;
    if (((*(iVar7 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x14,&iStack_2a0,&uStack_2a4), uVar13 = _trace_event_raw_init, iVar4 != 0)) {
        *(iStack_2a0 + 0xe8) = &ppuStack_290;
        *(iStack_2a0 + 0xf8) = auStack_2b0;
        *(iStack_2a0 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x8002ef8;
        *(iStack_2a0 + 0x108) = 5;
        *(iVar4 + 8) = auVar22._8_4_;
        *(iVar4 + 0xc) = uVar8;
        *(iVar4 + 0x10) = uVar12;
        perf_trace_run_bpf_submit(iVar4,0x14,uStack_2a4,iVar7,1,iStack_2a0,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_298) {
        auVar21 = __stack_chk_fail();
        uVar20 = tpidr_el2;
        *extraout_x18_04 = 0x800301c;
        bpf_trace_run4(in_tmp_ldXn,auVar21._0_8_,auVar21._8_8_ & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_lpm_gov_select.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x08002730 (size 8) =====

void sym.__bpf_trace_lpm_gov_select.54f5299e1f581feb01b94162fe215419.cfi_jt(ulong param_1,uint param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4(param_1,param_2);
    return;
}


// ===== sym.__traceiter_gov_pred_hist.cfi_jt @ 0x08002738 (size 8) =====

ulong sym.__traceiter_gov_pred_hist.cfi_jt(ulong param_1,uint param_2,uint param_3,uint param_4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8006de0;
    piVar1 = *0x8006de0;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_4,param_3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.cluster_idle_get.15fd167cf514ad861e583ee1acf79061.cfi_jt @ 0x08002740 (size 8) =====

int64_t sym.cluster_idle_get.15fd167cf514ad861e583ee1acf79061.cfi_jt(ulong param_1,int64_t param_2,ulong param_3)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + -8) < 4) {
        iVar2 = scnprintf(param_3,0x1000,0x8001514,*(*(param_2 + -0x18) + *(param_2 + -8) + 0x1b0) ^ 1);
        return iVar2;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8006948);
    (*pcVar1)();
}


// ===== sym.sleep_disabled_show.15fd167cf514ad861e583ee1acf79061.cfi_jt @ 0x08002748 (size 8) =====

int64_t sym.sleep_disabled_show.15fd167cf514ad861e583ee1acf79061.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8001497,obj.sleep_disabled);
    return iVar1;
}


// ===== sym.prediction_disabled_show.15fd167cf514ad861e583ee1acf79061.cfi_jt @ 0x08002750 (size 8) =====

int64_t sym.prediction_disabled_show.15fd167cf514ad861e583ee1acf79061.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8001497,obj.prediction_disabled);
    return iVar1;
}


// ===== sym.biastimer_fn.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x08002758 (size 8) =====

ulong sym.biastimer_fn.54f5299e1f581feb01b94162fe215419.cfi_jt(void)

{
    return 0;
}


// ===== sym.histtimer_fn.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x08002760 (size 8) =====

ulong sym.histtimer_fn.54f5299e1f581feb01b94162fe215419.cfi_jt(void)

{
    int64_t iVar1;
    
    iVar1 = tpidr_el1;
    *(iVar1 + 0x8007340) = 1;
    return 0;
}


// ===== sym.clusttimer_fn.93919d071927d692c25ddf044f89175d.cfi_jt @ 0x08002768 (size 8) =====

ulong sym.clusttimer_fn.93919d071927d692c25ddf044f89175d.cfi_jt(int64_t param_1)

{
    *(param_1 + -0xfc) = 1;
    return 0;
}


// ===== sym.__traceiter_gov_pred_select.cfi_jt @ 0x08002770 (size 8) =====

ulong sym.__traceiter_gov_pred_select.cfi_jt(ulong param_1,uint param_2,ulong param_3,uint param_4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8006d98;
    piVar1 = *0x8006d98;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.perf_trace_cluster_pred_hist.93919d071927d692c25ddf044f89175d.cfi_jt @ 0x08002778 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080051a8)
//WARNING: Removing unreachable block (ram,0x080053b0)

void sym.perf_trace_cluster_pred_hist.93919d071927d692c25ddf044f89175d.cfi_jt
               (uint64_t param_1,uint32_t param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,
               uint64_t param_6)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint uVar3;
    uint uVar4;
    ulong in_tmp_ldXn;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    ulong uVar20;
    uint64_t unaff_x30;
    uchar auVar21 [16];
    uchar auVar22 [12];
    uchar auStack_230 [12];
    uint32_t uStack_224;
    uint64_t uStack_220;
    int64_t iStack_218;
    ulong **ppuStack_210;
    code *pcStack_208;
    code *pcStack_200;
    ulong uStack_1f8;
    int64_t iStack_1f0;
    uint64_t uStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    int64_t iStack_198;
    ulong **ppuStack_190;
    ulong uStack_188;
    int64_t *piStack_180;
    uint64_t uStack_170;
    uint64_t uStack_168;
    uint64_t uStack_160;
    uint64_t uStack_158;
    uchar auStack_150 [12];
    uint32_t uStack_144;
    uint64_t uStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    code *pcStack_128;
    int64_t *piStack_120;
    ulong uStack_118;
    int64_t iStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    uint64_t uStack_a0;
    uint64_t uStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    uint64_t uStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    uVar13 = param_5 & 0xffffffff;
    uVar14 = param_4 & 0xffffffff;
    uVar16 = param_3 & 0xffffffff;
    uVar19 = param_2;
    uStack_60 = 0;
    uStack_64 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(param_1 + 0x78);
    uVar10 = param_4;
    uVar11 = param_5;
    if ((*(param_1 + 0x80) != 0) || (puVar7 = param_3, *piVar1 != 0)) {
        puVar7 = &uStack_64;
        iVar5 = perf_trace_buf_alloc(0x1c,&uStack_60);
        uVar12 = _trace_event_raw_init;
        if (iVar5 != 0) {
            *(uStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            puVar7 = uStack_64;
            uVar12 = -1L << (uVar12 & 0x3f);
            uVar11 = 1;
            uVar10 = (~uVar12 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar10 = uVar12 | unaff_x30;
            }
            *(uStack_60 + 0xf8) = auStack_70;
            *(uStack_60 + 0x100) = uVar10;
            *(uStack_60 + 0x108) = 5;
            *(iVar5 + 8) = param_2;
            *(iVar5 + 0xc) = param_3;
            *(iVar5 + 0x10) = param_4;
            *(iVar5 + 0x14) = param_5;
            uVar10 = param_1;
            param_6 = uStack_60;
            perf_trace_run_bpf_submit(iVar5,0x1c,puVar7,param_1,1,uStack_60,piVar1,0);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar6 = auVar21._0_8_;
    uVar20 = tpidr_el2;
    *extraout_x18 = 0x8004ff8;
    uStack_a8 = 0x8004ff8;
    iVar5 = sp_el0;
    iStack_b8 = *(iVar5 + 0x5e0);
    uVar15 = auVar21._8_8_ & 0xffffffff;
    uVar20 = *(iVar6 + 0x48);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar18 = uVar20;
    uVar12 = uVar10;
    puStack_b0 = &stack0xffffffffffffffb0;
    uStack_a0 = uVar19;
    uStack_90 = uVar16;
    uStack_88 = uVar14;
    uStack_80 = uVar13;
    uStack_78 = param_1;
    if ((uVar18 >> 8 & 1) == 0) {
        puVar8 = puVar7;
        if ((uVar18 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar12 = 0;
            event_triggers_call(iVar6,0);
        }
        if (((uVar18 >> 6 & 1) == 0) &&
           (((uVar18 >> 9 & 1) == 0 || (uVar13 = trace_event_ignore_this_pid(iVar6), (uVar13 & 1) == 0))))
        goto code_r0x08005080;
    }
    else {
code_r0x08005080:
        puVar8 = 0x14;
        iVar5 = trace_event_buffer_reserve(&uStack_e8,iVar6);
        if (iVar5 != 0) {
            *(iVar5 + 8) = auVar21._8_4_;
            *(iVar5 + 0xc) = puVar7;
            *(iVar5 + 0x10) = uVar10;
            trace_event_buffer_commit(&uStack_e8);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar21 = __stack_chk_fail();
    uVar14 = auVar21._0_8_;
    *extraout_x18_00 = sym.perf_trace_cluster_exit;
    pcStack_128 = sym.perf_trace_cluster_exit;
    iVar5 = sp_el0;
    iStack_138 = *(iVar5 + 0x5e0);
    uVar16 = uVar12 & 0xffffffff;
    uVar19 = puVar8 & 0xffffffff;
    uVar17 = auVar21._8_8_ & 0xffffffff;
    uStack_140 = 0;
    uStack_144 = 0;
    iVar5 = tpidr_el1;
    piVar2 = iVar5 + *(uVar14 + 0x78);
    uVar13 = uVar12;
    ppuStack_130 = &puStack_b0;
    piStack_120 = piVar1;
    uStack_118 = uVar20;
    iStack_110 = iVar6;
    uStack_108 = uVar15;
    uStack_100 = puVar7 & 0xffffffff;
    uStack_f8 = uVar10 & 0xffffffff;
    if ((*(uVar14 + 0x80) != 0) || (puVar9 = puVar8, *piVar2 != 0)) {
        puVar9 = &uStack_144;
        iVar5 = perf_trace_buf_alloc(0x14,&uStack_140);
        uVar10 = _trace_event_raw_init;
        if (iVar5 != 0) {
            *(uStack_140 + 0xe8) = &ppuStack_130;
            puVar9 = uStack_144;
            uVar11 = 1;
            *(uStack_140 + 0xf8) = auStack_150;
            *(uStack_140 + 0x100) = ~(-1L << (uVar10 & 0x3f)) & 0x80050dc;
            *(uStack_140 + 0x108) = 5;
            *(iVar5 + 8) = auVar21._8_4_;
            *(iVar5 + 0xc) = puVar8;
            *(iVar5 + 0x10) = uVar12;
            uVar13 = uVar14;
            param_6 = uStack_140;
            perf_trace_run_bpf_submit(iVar5,0x14,puVar9,uVar14,1,uStack_140,piVar2,0);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_138) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar6 = auVar21._0_8_;
    uVar20 = tpidr_el2;
    *extraout_x18_01 = 0x8005200;
    uStack_188 = 0x8005200;
    iVar5 = sp_el0;
    iStack_198 = *(iVar5 + 0x5e0);
    uVar12 = auVar21._8_8_ & 0xffffffff;
    uVar20 = *(iVar6 + 0x48);
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uVar18 = uVar20;
    uVar10 = uVar13;
    ppuStack_190 = &ppuStack_130;
    piStack_180 = piVar2;
    uStack_170 = uVar17;
    uStack_168 = uVar19;
    uStack_160 = uVar16;
    uStack_158 = uVar14;
    if ((uVar18 >> 8 & 1) == 0) {
        puVar7 = puVar9;
        if ((uVar18 >> 7 & 1) != 0) {
            puVar7 = NULL;
            uVar10 = 0;
            event_triggers_call(iVar6,0);
        }
        if (((uVar18 >> 6 & 1) != 0) ||
           (((uVar18 >> 9 & 1) != 0 && (uVar14 = trace_event_ignore_this_pid(iVar6), (uVar14 & 1) != 0))))
        goto code_r0x080052ac;
    }
    puVar7 = 0x14;
    iVar5 = trace_event_buffer_reserve(&uStack_1c8,iVar6);
    if (iVar5 != 0) {
        *(iVar5 + 8) = auVar21._8_4_;
        *(iVar5 + 0xc) = puVar9;
        *(iVar5 + 0x10) = uVar13;
        trace_event_buffer_commit(&uStack_1c8);
    }
code_r0x080052ac:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_198) {
        return;
    }
    auVar22 = __stack_chk_fail();
    uVar14 = auVar22._0_8_;
    *extraout_x18_02 = sym.perf_trace_cluster_enter;
    pcStack_208 = sym.perf_trace_cluster_enter;
    pcStack_200 = sym.perf_trace_cluster_exit;
    iVar5 = sp_el0;
    iStack_218 = *(iVar5 + 0x5e0);
    uVar4 = uVar10;
    uVar3 = SUB84(puVar7,0);
    uStack_220 = 0;
    uStack_224 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(uVar14 + 0x78);
    ppuStack_210 = &ppuStack_190;
    uStack_1f8 = uVar20;
    iStack_1f0 = iVar6;
    uStack_1e8 = uVar12;
    uStack_1e0 = puVar9 & 0xffffffff;
    uStack_1d8 = uVar13 & 0xffffffff;
    if ((*(uVar14 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar7 = &uStack_224;
        iVar5 = perf_trace_buf_alloc(0x14,&uStack_220,puVar7);
        uVar13 = _trace_event_raw_init;
        if (iVar5 != 0) {
            *(uStack_220 + 0xe8) = &ppuStack_210;
            puVar7 = uStack_224;
            uVar11 = 1;
            *(uStack_220 + 0xf8) = auStack_230;
            *(uStack_220 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x80052e4;
            *(uStack_220 + 0x108) = 5;
            *(iVar5 + 8) = auVar22._8_4_;
            *(iVar5 + 0xc) = uVar3;
            *(iVar5 + 0x10) = uVar4;
            param_6 = uStack_220;
            perf_trace_run_bpf_submit(iVar5,0x14,puVar7,uVar14,1,uStack_220,piVar1,0);
            uVar10 = uVar14;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_218) {
        auVar21 = __stack_chk_fail();
        uVar20 = tpidr_el2;
        *extraout_x18_03 = 0x8005408;
        bpf_trace_run5(in_tmp_ldXn,auVar21._0_8_,auVar21._8_8_ & 0xffffffff,puVar7 & 0xffffffff,uVar10 & 0xffffffff
                       ,uVar11 & 0xffffffff,param_6 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_cluster_pred_hist.93919d071927d692c25ddf044f89175d.cfi_jt @ 0x08002780 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080051a8)
//WARNING: Removing unreachable block (ram,0x08004f9c)
//WARNING: Removing unreachable block (ram,0x080053b0)

void sym.trace_event_raw_event_cluster_pred_hist.93919d071927d692c25ddf044f89175d.cfi_jt
               (int64_t param_1,uint param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,uint64_t param_6)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint uVar3;
    uint uVar4;
    uint64_t uVar5;
    ulong in_tmp_ldXn;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint32_t *puVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint32_t uVar19;
    uint64_t uVar20;
    ulong uVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    uchar auVar23 [12];
    uchar auStack_2b0 [12];
    uint32_t uStack_2a4;
    uint64_t uStack_2a0;
    int64_t iStack_298;
    ulong **ppuStack_290;
    code *pcStack_288;
    code *pcStack_280;
    ulong uStack_278;
    int64_t iStack_270;
    uint64_t uStack_268;
    uint64_t uStack_260;
    uint64_t uStack_258;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    int64_t iStack_218;
    ulong **ppuStack_210;
    ulong uStack_208;
    int64_t *piStack_200;
    uint64_t uStack_1f0;
    uint64_t uStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uchar auStack_1d0 [12];
    uint32_t uStack_1c4;
    uint64_t uStack_1c0;
    int64_t iStack_1b8;
    ulong **ppuStack_1b0;
    code *pcStack_1a8;
    int64_t *piStack_1a0;
    ulong uStack_198;
    int64_t iStack_190;
    uint64_t uStack_188;
    uint64_t uStack_180;
    uint64_t uStack_178;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    ulong uStack_128;
    uint64_t uStack_120;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    uchar auStack_f0 [12];
    uint32_t uStack_e4;
    uint64_t uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar19 = *(param_1 + 0x48);
    uVar13 = param_4;
    uVar17 = param_5;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar10 = param_3;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar13 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar6 = trace_event_ignore_this_pid(param_1), (uVar6 & 1) == 0))))
        goto code_r0x08004e6c;
    }
    else {
code_r0x08004e6c:
        puVar10 = 0x18;
        iVar7 = trace_event_buffer_reserve(&uStack_78,param_1);
        if (iVar7 != 0) {
            *(iVar7 + 8) = param_2;
            *(iVar7 + 0xc) = param_3;
            *(iVar7 + 0x10) = param_4;
            *(iVar7 + 0x14) = param_5;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return;
    }
    auVar22 = __stack_chk_fail();
    uVar9 = auVar22._0_8_;
    *extraout_x18 = sym.perf_trace_cluster_pred_hist;
    pcStack_c8 = sym.perf_trace_cluster_pred_hist;
    iVar7 = sp_el0;
    iStack_d8 = *(iVar7 + 0x5e0);
    uVar15 = uVar17 & 0xffffffff;
    uVar16 = uVar13 & 0xffffffff;
    uVar18 = puVar10 & 0xffffffff;
    uVar20 = auVar22._8_8_ & 0xffffffff;
    uStack_e0 = 0;
    uStack_e4 = 0;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar9 + 0x78);
    uVar6 = uVar13;
    uVar14 = uVar17;
    puStack_d0 = &stack0xffffffffffffffc0;
    if ((*(uVar9 + 0x80) != 0) || (puVar11 = puVar10, *piVar1 != 0)) {
        puVar11 = &uStack_e4;
        iVar7 = perf_trace_buf_alloc(0x1c,&uStack_e0);
        uVar5 = _trace_event_raw_init;
        if (iVar7 != 0) {
            *(uStack_e0 + 0xe8) = &puStack_d0;
            puVar11 = uStack_e4;
            uVar14 = 1;
            *(uStack_e0 + 0xf8) = auStack_f0;
            *(uStack_e0 + 0x100) = ~(-1L << (uVar5 & 0x3f)) & 0x8004ec8;
            *(uStack_e0 + 0x108) = 5;
            *(iVar7 + 8) = auVar22._8_4_;
            *(iVar7 + 0xc) = puVar10;
            *(iVar7 + 0x10) = uVar13;
            *(iVar7 + 0x14) = uVar17;
            uVar6 = uVar9;
            param_6 = uStack_e0;
            perf_trace_run_bpf_submit(iVar7,0x1c,puVar11,uVar9,1,uStack_e0,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar8 = auVar22._0_8_;
    uVar21 = tpidr_el2;
    *extraout_x18_00 = 0x8004ff8;
    uStack_128 = 0x8004ff8;
    iVar7 = sp_el0;
    iStack_138 = *(iVar7 + 0x5e0);
    uVar17 = auVar22._8_8_ & 0xffffffff;
    uVar21 = *(iVar8 + 0x48);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uVar19 = uVar21;
    uVar13 = uVar6;
    ppuStack_130 = &puStack_d0;
    uStack_120 = uVar20;
    uStack_110 = uVar18;
    uStack_108 = uVar16;
    uStack_100 = uVar15;
    uStack_f8 = uVar9;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar10 = puVar11;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar13 = 0;
            event_triggers_call(iVar8,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar9 = trace_event_ignore_this_pid(iVar8), (uVar9 & 1) == 0))))
        goto code_r0x08005080;
    }
    else {
code_r0x08005080:
        puVar10 = 0x14;
        iVar7 = trace_event_buffer_reserve(&uStack_168,iVar8);
        if (iVar7 != 0) {
            *(iVar7 + 8) = auVar22._8_4_;
            *(iVar7 + 0xc) = puVar11;
            *(iVar7 + 0x10) = uVar6;
            trace_event_buffer_commit(&uStack_168);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_138) {
        return;
    }
    auVar22 = __stack_chk_fail();
    uVar15 = auVar22._0_8_;
    *extraout_x18_01 = sym.perf_trace_cluster_exit;
    pcStack_1a8 = sym.perf_trace_cluster_exit;
    iVar7 = sp_el0;
    iStack_1b8 = *(iVar7 + 0x5e0);
    uVar16 = uVar13 & 0xffffffff;
    uVar18 = puVar10 & 0xffffffff;
    uVar20 = auVar22._8_8_ & 0xffffffff;
    uStack_1c0 = 0;
    uStack_1c4 = 0;
    iVar7 = tpidr_el1;
    piVar2 = iVar7 + *(uVar15 + 0x78);
    uVar9 = uVar13;
    ppuStack_1b0 = &ppuStack_130;
    piStack_1a0 = piVar1;
    uStack_198 = uVar21;
    iStack_190 = iVar8;
    uStack_188 = uVar17;
    uStack_180 = puVar11 & 0xffffffff;
    uStack_178 = uVar6 & 0xffffffff;
    if ((*(uVar15 + 0x80) != 0) || (puVar12 = puVar10, *piVar2 != 0)) {
        puVar12 = &uStack_1c4;
        iVar7 = perf_trace_buf_alloc(0x14,&uStack_1c0);
        uVar17 = _trace_event_raw_init;
        if (iVar7 != 0) {
            *(uStack_1c0 + 0xe8) = &ppuStack_1b0;
            puVar12 = uStack_1c4;
            uVar14 = 1;
            *(uStack_1c0 + 0xf8) = auStack_1d0;
            *(uStack_1c0 + 0x100) = ~(-1L << (uVar17 & 0x3f)) & 0x80050dc;
            *(uStack_1c0 + 0x108) = 5;
            *(iVar7 + 8) = auVar22._8_4_;
            *(iVar7 + 0xc) = puVar10;
            *(iVar7 + 0x10) = uVar13;
            uVar9 = uVar15;
            param_6 = uStack_1c0;
            perf_trace_run_bpf_submit(iVar7,0x14,puVar12,uVar15,1,uStack_1c0,piVar2,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar8 = auVar22._0_8_;
    uVar21 = tpidr_el2;
    *extraout_x18_02 = 0x8005200;
    uStack_208 = 0x8005200;
    iVar7 = sp_el0;
    iStack_218 = *(iVar7 + 0x5e0);
    uVar17 = auVar22._8_8_ & 0xffffffff;
    uVar21 = *(iVar8 + 0x48);
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uVar19 = uVar21;
    uVar13 = uVar9;
    ppuStack_210 = &ppuStack_1b0;
    piStack_200 = piVar2;
    uStack_1f0 = uVar20;
    uStack_1e8 = uVar18;
    uStack_1e0 = uVar16;
    uStack_1d8 = uVar15;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar10 = puVar12;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar13 = 0;
            event_triggers_call(iVar8,0);
        }
        if (((uVar19 >> 6 & 1) != 0) ||
           (((uVar19 >> 9 & 1) != 0 && (uVar6 = trace_event_ignore_this_pid(iVar8), (uVar6 & 1) != 0))))
        goto code_r0x080052ac;
    }
    puVar10 = 0x14;
    iVar7 = trace_event_buffer_reserve(&uStack_248,iVar8);
    if (iVar7 != 0) {
        *(iVar7 + 8) = auVar22._8_4_;
        *(iVar7 + 0xc) = puVar12;
        *(iVar7 + 0x10) = uVar9;
        trace_event_buffer_commit(&uStack_248);
    }
code_r0x080052ac:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_218) {
        return;
    }
    auVar23 = __stack_chk_fail();
    uVar6 = auVar23._0_8_;
    *extraout_x18_03 = sym.perf_trace_cluster_enter;
    pcStack_288 = sym.perf_trace_cluster_enter;
    pcStack_280 = sym.perf_trace_cluster_exit;
    iVar7 = sp_el0;
    iStack_298 = *(iVar7 + 0x5e0);
    uVar4 = uVar13;
    uVar3 = SUB84(puVar10,0);
    uStack_2a0 = 0;
    uStack_2a4 = 0;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar6 + 0x78);
    ppuStack_290 = &ppuStack_210;
    uStack_278 = uVar21;
    iStack_270 = iVar8;
    uStack_268 = uVar17;
    uStack_260 = puVar12 & 0xffffffff;
    uStack_258 = uVar9 & 0xffffffff;
    if ((*(uVar6 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar10 = &uStack_2a4;
        iVar7 = perf_trace_buf_alloc(0x14,&uStack_2a0,puVar10);
        uVar17 = _trace_event_raw_init;
        if (iVar7 != 0) {
            *(uStack_2a0 + 0xe8) = &ppuStack_290;
            puVar10 = uStack_2a4;
            uVar14 = 1;
            *(uStack_2a0 + 0xf8) = auStack_2b0;
            *(uStack_2a0 + 0x100) = ~(-1L << (uVar17 & 0x3f)) & 0x80052e4;
            *(uStack_2a0 + 0x108) = 5;
            *(iVar7 + 8) = auVar23._8_4_;
            *(iVar7 + 0xc) = uVar3;
            *(iVar7 + 0x10) = uVar4;
            param_6 = uStack_2a0;
            perf_trace_run_bpf_submit(iVar7,0x14,puVar10,uVar6,1,uStack_2a0,piVar1,0);
            uVar13 = uVar6;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_298) {
        auVar22 = __stack_chk_fail();
        uVar21 = tpidr_el2;
        *extraout_x18_04 = 0x8005408;
        bpf_trace_run5(in_tmp_ldXn,auVar22._0_8_,auVar22._8_8_ & 0xffffffff,puVar10 & 0xffffffff,uVar13 & 0xffffffff
                       ,uVar14 & 0xffffffff,param_6 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_cluster_pred_hist.93919d071927d692c25ddf044f89175d.cfi_jt @ 0x08002788 (size 8) =====

void sym.__bpf_trace_cluster_pred_hist.93919d071927d692c25ddf044f89175d.cfi_jt
               (ulong param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4(param_1,param_2,param_3,param_4,param_5);
    return;
}


// ===== sym.lpm_cluster_gov_probe.93919d071927d692c25ddf044f89175d.cfi_jt @ 0x08002790 (size 8) =====

int sym.lpm_cluster_gov_probe.93919d071927d692c25ddf044f89175d.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    int64_t *arg1;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    param_1 = param_1 + 0x10;
    arg1 = devm_kmalloc(param_1,0x1d0,0xdc0);
    if (arg1 == NULL) {
        iVar4 = -0xc;
    }
    else {
        *(arg1 + 0x39) = 0;
        *arg1 = param_1;
        arg1[0x2c] = 0x7fffffffffffffff;
        pm_runtime_enable(param_1);
        hrtimer_init(arg1 + 0x21,1,1);
        iVar7 = *(*arg1 + 0x260);
        arg1[0x18] = sym.cluster_power_cb.93919d071927d692c25ddf044f89175d.cfi_jt;
        arg1[0x12] = iVar7 + -0x390;
        *(iVar7 + 0x208) = *(iVar7 + 0x208) | 0x40;
        iVar4 = dev_pm_genpd_add_notifier(*arg1);
        if ((iVar4 == 0) && (iVar5 = sym.create_cluster_sysfs_nodes(arg1), piVar2 = *0x8001128, iVar5 == 0)) {
            piVar1 = arg1 + 0x37;
            uVar6 = __list_add_valid(piVar1,*0x8001128,obj.cluster_dev_list);
            if ((uVar6 & 1) != 0) {
                *0x8001128 = piVar1;
                arg1[0x37] = obj.cluster_dev_list;
                arg1[0x38] = piVar2;
                *piVar2 = piVar1;
            }
            iVar7 = arg1[0x12];
            *(arg1 + 0x1cd) = 1;
            if ((((*(iVar7 + 0x5b0) != 0) && (*(arg1 + 0x36) = 1, 1 < *(iVar7 + 0x5b0))) &&
                (*(arg1 + 0x1b1) = 1, 2 < *(iVar7 + 0x5b0))) &&
               ((*(arg1 + 0x1b2) = 1, 3 < *(iVar7 + 0x5b0) && (*(arg1 + 0x1b3) = 1, 4 < *(iVar7 + 0x5b0))))) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8005ad0);
                (*pcVar3)();
            }
            iVar4 = 0;
        }
        else {
            __pm_runtime_disable(param_1,1);
        }
    }
    return iVar4;
}


// ===== sym.lpm_cluster_gov_remove.93919d071927d692c25ddf044f89175d.cfi_jt @ 0x08002798 (size 8) =====

ulong sym.lpm_cluster_gov_remove.93919d071927d692c25ddf044f89175d.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    code *arg1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_obj.cluster_dev_list != obj.cluster_dev_list) {
        pcVar4 = _obj.cluster_dev_list;
        do {
            if (*(pcVar4 + -0x128) == *(param_1 + 0x270) + -0x390) {
                arg1 = pcVar4 + -0x1b8;
                if (arg1 == NULL) {
                    return 0xffffffed;
                }
                __pm_runtime_disable(param_1 + 0x10,1);
                iVar3 = *(pcVar4 + -0x128);
                *(iVar3 + 0x598) = *(iVar3 + 0x598) & 0xffffffbf;
                sym.remove_cluster_sysfs_nodes(arg1);
                dev_pm_genpd_remove_notifier(*arg1);
                uVar2 = __list_del_entry_valid(pcVar4);
                if ((uVar2 & 1) != 0) {
                    iVar3 = *pcVar4;
                    piVar1 = *(pcVar4 + 8);
                    *(iVar3 + 8) = piVar1;
                    *piVar1 = iVar3;
                }
                *pcVar4 = -0x2152ffffffffff00;
                *(pcVar4 + 8) = -0x2152fffffffffede;
                return 0;
            }
            pcVar4 = *pcVar4;
        } while (pcVar4 != obj.cluster_dev_list);
    }
    return 0xffffffed;
}


// ===== sym.qcom_lpm_suspend_trace.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x080027a0 (size 8) =====

void sym.qcom_lpm_suspend_trace.54f5299e1f581feb01b94162fe215419.cfi_jt(void)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t in_w3;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong extraout_x8_01;
    ulong extraout_x8_02;
    ulong *extraout_x9;
    ulong *extraout_x9_00;
    ulong *extraout_x9_01;
    ulong *extraout_x9_02;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_w3 & 1) == 0) {
        iVar1 = strcmp("dpm_resume_early");
        if (iVar1 == 0) {
            obj.suspend_in_progress = 0x0;
            uVar2 = cpumask_next(0xffffffff,__cpu_online_mask);
            *extraout_x9_01 = extraout_x8_01;
            if (uVar2 < extraout_x8_01) {
                do {
                    wake_up_if_idle(uVar2);
                    uVar2 = cpumask_next(uVar2,__cpu_online_mask);
                    *extraout_x9_02 = extraout_x8_02;
                } while (uVar2 < extraout_x8_02);
            }
        }
    }
    else {
        iVar1 = strcmp("dpm_suspend_late");
        if (iVar1 == 0) {
            obj.suspend_in_progress = 0x1;
            uVar2 = cpumask_next(0xffffffff,__cpu_online_mask);
            *extraout_x9 = extraout_x8;
            if (uVar2 < extraout_x8) {
                do {
                    wake_up_if_idle(uVar2);
                    uVar2 = cpumask_next(uVar2,__cpu_online_mask);
                    *extraout_x9_00 = extraout_x8_00;
                } while (uVar2 < extraout_x8_00);
            }
        }
    }
    return;
}


// ===== sym.__traceiter_cluster_enter.cfi_jt @ 0x080027a8 (size 8) =====

ulong sym.__traceiter_cluster_enter.cfi_jt(ulong param_1,uint param_2,uint param_3,uint param_4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8006f00;
    piVar1 = *0x8006f00;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_cluster_exit.cfi_jt @ 0x080027b0 (size 8) =====

ulong sym.__traceiter_cluster_exit.cfi_jt(ulong param_1,uint param_2,uint param_3,uint param_4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8006eb8;
    piVar1 = *0x8006eb8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.lpm_idle_exit.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x080027b8 (size 8) =====

void sym.lpm_idle_exit.54f5299e1f581feb01b94162fe215419.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    code *pcVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_3 + 4) < 0x20) {
        if (*(*(__per_cpu_offset + *(param_3 + 4) * 8) + 0x80072fc) != 0) {
            iVar1 = tpidr_el1;
            iVar1 = iVar1 + 0x8007348;
            uVar3 = hrtimer_active(iVar1);
            if (((uVar3 & 1) != 0) && (iVar4 = __hrtimer_get_remaining(iVar1,0), 999 < iVar4)) {
                hrtimer_try_to_cancel(iVar1);
            }
            iVar1 = tpidr_el1;
            if (*(iVar1 + 0x8007430) != 0) {
                *(iVar1 + 0x8007430) = 0;
                iVar4 = __hrtimer_get_remaining(iVar1 + 0x8007390,0);
                if (999 < iVar4) {
                    hrtimer_try_to_cancel(iVar1 + 0x8007390);
                }
            }
        }
        return;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800440c);
    (*pcVar2)();
}


// ===== sym.__bpf_trace_gov_pred_hist.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x080027c0 (size 8) =====

void sym.__bpf_trace_gov_pred_hist.54f5299e1f581feb01b94162fe215419.cfi_jt
               (ulong param_1,uint param_2,uint param_3,uint param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(param_1,param_2,param_4,param_3);
    return;
}


// ===== sym.trace_event_raw_event_gov_pred_hist.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x080027c8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08002fc4)

void sym.trace_event_raw_event_gov_pred_hist.54f5299e1f581feb01b94162fe215419.cfi_jt
               (int64_t param_1,uint param_2,uint param_3,uint param_4)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint uVar6;
    uint uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar8;
    ulong unaff_x30;
    uchar auVar9 [12];
    uchar auVar10 [16];
    uchar auStack_e0 [12];
    uint uStack_d4;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar8 = *(param_1 + 0x48);
    uVar7 = param_4;
    if ((uVar8 >> 8 & 1) == 0) {
        uVar6 = param_3;
        if ((uVar8 >> 7 & 1) != 0) {
            uVar6 = 0;
            uVar7 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar8 >> 6 & 1) != 0) ||
           (((uVar8 >> 9 & 1) != 0 && (uVar3 = trace_event_ignore_this_pid(param_1), (uVar3 & 1) != 0))))
        goto code_r0x08002ec0;
    }
    uVar6 = 0x14;
    iVar4 = trace_event_buffer_reserve(&uStack_78,param_1);
    if (iVar4 != 0) {
        *(iVar4 + 8) = param_2;
        *(iVar4 + 0xc) = param_3;
        *(iVar4 + 0x10) = param_4;
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x08002ec0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    auVar9 = __stack_chk_fail();
    iVar5 = auVar9._0_8_;
    *extraout_x18 = sym.perf_trace_gov_pred_hist;
    pcStack_b8 = sym.perf_trace_gov_pred_hist;
    iVar4 = sp_el0;
    iStack_c8 = *(iVar4 + 0x5e0);
    iStack_d0 = 0;
    uStack_d4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    puStack_c0 = &stack0xffffffffffffffc0;
    if (((*(iVar5 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x14,&iStack_d0,&uStack_d4), uVar3 = _trace_event_raw_init, iVar4 != 0)) {
        *(iStack_d0 + 0xe8) = &puStack_c0;
        *(iStack_d0 + 0xf8) = auStack_e0;
        *(iStack_d0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8002ef8;
        *(iStack_d0 + 0x108) = 5;
        *(iVar4 + 8) = auVar9._8_4_;
        *(iVar4 + 0xc) = uVar6;
        *(iVar4 + 0x10) = uVar7;
        perf_trace_run_bpf_submit(iVar4,0x14,uStack_d4,iVar5,1,iStack_d0,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_c8) {
        auVar10 = __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_00 = 0x800301c;
        bpf_trace_run4(in_tmp_ldXn,auVar10._0_8_,auVar10._8_8_ & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_gov_pred_hist.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x080027d0 (size 8) =====

void sym.perf_trace_gov_pred_hist.54f5299e1f581feb01b94162fe215419.cfi_jt
               (int64_t param_1,uint param_2,uint param_3,uint param_4)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar6 [16];
    uchar auStack_60 [12];
    uint uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iStack_50 = 0;
    uStack_54 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(param_1 + 0x78);
    if (((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x14,&iStack_50,&uStack_54), uVar2 = _trace_event_raw_init, iVar4 != 0)) {
        *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
        uVar5 = -1L << (uVar2 & 0x3f);
        uVar2 = (~uVar5 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar5 | unaff_x30;
        }
        *(iStack_50 + 0xf8) = auStack_60;
        *(iStack_50 + 0x100) = uVar2;
        *(iStack_50 + 0x108) = 5;
        *(iVar4 + 8) = param_2;
        *(iVar4 + 0xc) = param_3;
        *(iVar4 + 0x10) = param_4;
        perf_trace_run_bpf_submit(iVar4,0x14,uStack_54,param_1,1,iStack_50,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    auVar6 = __stack_chk_fail();
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x800301c;
    bpf_trace_run4(in_tmp_ldXn,auVar6._0_8_,auVar6._8_8_ & 0xffffffff);
    return;
}


// ===== sym.trace_raw_output_cluster_pred_select.93919d071927d692c25ddf044f89175d.cfi_jt @ 0x080027d8 (size 8) =====

void sym.trace_raw_output_cluster_pred_select.93919d071927d692c25ddf044f89175d.cfi_jt
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
        trace_event_printf(param_1,"idx:%d sleep_time:%u latency:%u pred:%d pred_us:%u\n",*(iVar2 + 8),*(iVar2 + 0xc)
                           ,*(iVar2 + 0x10),*(iVar2 + 0x14),*(iVar2 + 0x18));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_gov_pred_select.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x080027e0 (size 8) =====

void sym.trace_raw_output_gov_pred_select.54f5299e1f581feb01b94162fe215419.cfi_jt
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
        trace_event_printf(param_1,"pred:%u time:%lu tmr_time:%u\n",*(iVar2 + 8),*(iVar2 + 0x10),*(iVar2 + 0x18));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_lpm_gov_select.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x080027e8 (size 8) =====

void sym.trace_raw_output_lpm_gov_select.54f5299e1f581feb01b94162fe215419.cfi_jt
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
        trace_event_printf(param_1,"state:%d qos-us:%lld sleep-us:%llu reason:%#x\n",*(iVar2 + 8),*(iVar2 + 0x10),
                           *(iVar2 + 0x18),*(iVar2 + 0x20));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_cluster_exit.93919d071927d692c25ddf044f89175d.cfi_jt @ 0x080027f0 (size 8) =====

void sym.trace_raw_output_cluster_exit.93919d071927d692c25ddf044f89175d.cfi_jt
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
        trace_event_printf(param_1,"first cpu:%d idx:%u suspend_param:0x%x\n",*(iVar2 + 8),*(iVar2 + 0xc),
                           *(iVar2 + 0x10));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_cluster_pred_hist.93919d071927d692c25ddf044f89175d.cfi_jt @ 0x080027f8 (size 8) =====

void sym.trace_raw_output_cluster_pred_hist.93919d071927d692c25ddf044f89175d.cfi_jt
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
        trace_event_printf(param_1,"idx:%d resi:%u sample:%u tmr:%u\n",*(iVar2 + 8),*(iVar2 + 0xc),*(iVar2 + 0x10),
                           *(iVar2 + 0x14));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_gov_pred_hist.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x08002800 (size 8) =====

void sym.trace_raw_output_gov_pred_hist.54f5299e1f581feb01b94162fe215419.cfi_jt
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
        trace_event_printf(param_1,"idx:%d residency=%d, tmr=%d\n",*(iVar2 + 8),*(iVar2 + 0xc),*(iVar2 + 0x10));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_cluster_enter.93919d071927d692c25ddf044f89175d.cfi_jt @ 0x08002808 (size 8) =====

void sym.trace_raw_output_cluster_enter.93919d071927d692c25ddf044f89175d.cfi_jt
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
        trace_event_printf(param_1,"last cpu:%d idx:%u suspend_param:0x%x\n",*(iVar2 + 8),*(iVar2 + 0xc),
                           *(iVar2 + 0x10));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.perf_trace_cluster_exit.93919d071927d692c25ddf044f89175d.cfi_jt @ 0x08002810 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080053b0)

void sym.perf_trace_cluster_exit.93919d071927d692c25ddf044f89175d.cfi_jt
               (uint64_t param_1,uint32_t param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,
               uint64_t param_6)

{
    int64_t *piVar1;
    ulong uVar2;
    uint uVar3;
    uint uVar4;
    ulong in_tmp_ldXn;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint32_t *puVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    uint64_t unaff_x30;
    uchar auVar15 [12];
    uchar auVar16 [16];
    uchar auStack_140 [12];
    uint32_t uStack_134;
    uint64_t uStack_130;
    int64_t iStack_128;
    uchar **ppuStack_120;
    code *pcStack_118;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    ulong uStack_98;
    int64_t *piStack_90;
    uint64_t uStack_80;
    uint64_t uStack_78;
    uint64_t uStack_70;
    uint64_t uStack_68;
    uchar auStack_60 [12];
    uint32_t uStack_54;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uVar11 = param_4 & 0xffffffff;
    uVar12 = param_3 & 0xffffffff;
    uVar13 = param_2;
    uStack_50 = 0;
    uStack_54 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(param_1 + 0x78);
    uVar9 = param_4;
    if ((*(param_1 + 0x80) != 0) || (puVar7 = param_3, *piVar1 != 0)) {
        puVar7 = &uStack_54;
        iVar5 = perf_trace_buf_alloc(0x14,&uStack_50);
        uVar10 = _trace_event_raw_init;
        if (iVar5 != 0) {
            *(uStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            puVar7 = uStack_54;
            uVar10 = -1L << (uVar10 & 0x3f);
            param_5 = 1;
            uVar9 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar9 = uVar10 | unaff_x30;
            }
            *(uStack_50 + 0xf8) = auStack_60;
            *(uStack_50 + 0x100) = uVar9;
            *(uStack_50 + 0x108) = 5;
            *(iVar5 + 8) = param_2;
            *(iVar5 + 0xc) = param_3;
            *(iVar5 + 0x10) = param_4;
            uVar9 = param_1;
            param_6 = uStack_50;
            perf_trace_run_bpf_submit(iVar5,0x14,puVar7,param_1,1,uStack_50,piVar1,0);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return;
    }
    auVar15 = __stack_chk_fail();
    iVar6 = auVar15._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18 = 0x8005200;
    uStack_98 = 0x8005200;
    iVar5 = sp_el0;
    iStack_a8 = *(iVar5 + 0x5e0);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uVar14 = *(iVar6 + 0x48);
    uVar10 = uVar9;
    puStack_a0 = &stack0xffffffffffffffc0;
    piStack_90 = piVar1;
    uStack_80 = uVar13;
    uStack_78 = uVar12;
    uStack_70 = uVar11;
    uStack_68 = param_1;
    if ((uVar14 >> 8 & 1) == 0) {
        puVar8 = puVar7;
        if ((uVar14 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar10 = 0;
            event_triggers_call(iVar6,0);
        }
        if (((uVar14 >> 6 & 1) != 0) ||
           (((uVar14 >> 9 & 1) != 0 && (uVar11 = trace_event_ignore_this_pid(iVar6), (uVar11 & 1) != 0))))
        goto code_r0x080052ac;
    }
    puVar8 = 0x14;
    iVar5 = trace_event_buffer_reserve(&uStack_d8,iVar6);
    if (iVar5 != 0) {
        *(iVar5 + 8) = auVar15._8_4_;
        *(iVar5 + 0xc) = puVar7;
        *(iVar5 + 0x10) = uVar9;
        trace_event_buffer_commit(&uStack_d8);
    }
code_r0x080052ac:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_a8) {
        return;
    }
    auVar15 = __stack_chk_fail();
    uVar9 = auVar15._0_8_;
    *extraout_x18_00 = sym.perf_trace_cluster_enter;
    pcStack_118 = sym.perf_trace_cluster_enter;
    iVar5 = sp_el0;
    iStack_128 = *(iVar5 + 0x5e0);
    uVar4 = uVar10;
    uVar3 = SUB84(puVar8,0);
    uStack_130 = 0;
    uStack_134 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(uVar9 + 0x78);
    ppuStack_120 = &puStack_a0;
    if ((*(uVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &uStack_134;
        iVar5 = perf_trace_buf_alloc(0x14,&uStack_130,puVar8);
        uVar11 = _trace_event_raw_init;
        if (iVar5 != 0) {
            *(uStack_130 + 0xe8) = &ppuStack_120;
            puVar8 = uStack_134;
            param_5 = 1;
            *(uStack_130 + 0xf8) = auStack_140;
            *(uStack_130 + 0x100) = ~(-1L << (uVar11 & 0x3f)) & 0x80052e4;
            *(uStack_130 + 0x108) = 5;
            *(iVar5 + 8) = auVar15._8_4_;
            *(iVar5 + 0xc) = uVar3;
            *(iVar5 + 0x10) = uVar4;
            param_6 = uStack_130;
            perf_trace_run_bpf_submit(iVar5,0x14,puVar8,uVar9,1,uStack_130,piVar1,0);
            uVar10 = uVar9;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_128) {
        auVar16 = __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_01 = 0x8005408;
        bpf_trace_run5(in_tmp_ldXn,auVar16._0_8_,auVar16._8_8_ & 0xffffffff,puVar8 & 0xffffffff,uVar10 & 0xffffffff
                       ,param_5 & 0xffffffff,param_6 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_cluster_exit.93919d071927d692c25ddf044f89175d.cfi_jt @ 0x08002818 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080051a8)
//WARNING: Removing unreachable block (ram,0x080053b0)

void sym.trace_event_raw_event_cluster_exit.93919d071927d692c25ddf044f89175d.cfi_jt
               (int64_t param_1,uint param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,uint64_t param_6)

{
    int64_t *piVar1;
    uint uVar2;
    uint uVar3;
    ulong in_tmp_ldXn;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint32_t uVar15;
    ulong uVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    uchar auVar18 [12];
    uchar auStack_1c0 [12];
    uint32_t uStack_1b4;
    uint64_t uStack_1b0;
    int64_t iStack_1a8;
    ulong **ppuStack_1a0;
    code *pcStack_198;
    code *pcStack_190;
    ulong uStack_188;
    int64_t iStack_180;
    uint64_t uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    int64_t iStack_128;
    uchar **ppuStack_120;
    ulong uStack_118;
    int64_t *piStack_110;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    uchar auStack_e0 [12];
    uint32_t uStack_d4;
    uint64_t uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar15 = *(param_1 + 0x48);
    uVar10 = param_4;
    if ((uVar15 >> 8 & 1) == 0) {
        puVar8 = param_3;
        if ((uVar15 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar10 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar15 >> 6 & 1) == 0) &&
           (((uVar15 >> 9 & 1) == 0 || (uVar4 = trace_event_ignore_this_pid(param_1), (uVar4 & 1) == 0))))
        goto code_r0x08005080;
    }
    else {
code_r0x08005080:
        puVar8 = 0x14;
        iVar5 = trace_event_buffer_reserve(&uStack_78,param_1);
        if (iVar5 != 0) {
            *(iVar5 + 8) = param_2;
            *(iVar5 + 0xc) = param_3;
            *(iVar5 + 0x10) = param_4;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return;
    }
    auVar17 = __stack_chk_fail();
    uVar7 = auVar17._0_8_;
    *extraout_x18 = sym.perf_trace_cluster_exit;
    pcStack_b8 = sym.perf_trace_cluster_exit;
    iVar5 = sp_el0;
    iStack_c8 = *(iVar5 + 0x5e0);
    uVar11 = uVar10 & 0xffffffff;
    uVar12 = puVar8 & 0xffffffff;
    uVar14 = auVar17._8_8_ & 0xffffffff;
    uStack_d0 = 0;
    uStack_d4 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(uVar7 + 0x78);
    uVar4 = uVar10;
    puStack_c0 = &stack0xffffffffffffffc0;
    if ((*(uVar7 + 0x80) != 0) || (puVar9 = puVar8, *piVar1 != 0)) {
        puVar9 = &uStack_d4;
        iVar5 = perf_trace_buf_alloc(0x14,&uStack_d0);
        uVar13 = _trace_event_raw_init;
        if (iVar5 != 0) {
            *(uStack_d0 + 0xe8) = &puStack_c0;
            puVar9 = uStack_d4;
            param_5 = 1;
            *(uStack_d0 + 0xf8) = auStack_e0;
            *(uStack_d0 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x80050dc;
            *(uStack_d0 + 0x108) = 5;
            *(iVar5 + 8) = auVar17._8_4_;
            *(iVar5 + 0xc) = puVar8;
            *(iVar5 + 0x10) = uVar10;
            uVar4 = uVar7;
            param_6 = uStack_d0;
            perf_trace_run_bpf_submit(iVar5,0x14,puVar9,uVar7,1,uStack_d0,piVar1,0);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar6 = auVar17._0_8_;
    uVar16 = tpidr_el2;
    *extraout_x18_00 = 0x8005200;
    uStack_118 = 0x8005200;
    iVar5 = sp_el0;
    iStack_128 = *(iVar5 + 0x5e0);
    uVar13 = auVar17._8_8_ & 0xffffffff;
    uVar16 = *(iVar6 + 0x48);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uVar15 = uVar16;
    uVar10 = uVar4;
    ppuStack_120 = &puStack_c0;
    piStack_110 = piVar1;
    uStack_100 = uVar14;
    uStack_f8 = uVar12;
    uStack_f0 = uVar11;
    uStack_e8 = uVar7;
    if ((uVar15 >> 8 & 1) == 0) {
        puVar8 = puVar9;
        if ((uVar15 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar10 = 0;
            event_triggers_call(iVar6,0);
        }
        if (((uVar15 >> 6 & 1) != 0) ||
           (((uVar15 >> 9 & 1) != 0 && (uVar7 = trace_event_ignore_this_pid(iVar6), (uVar7 & 1) != 0))))
        goto code_r0x080052ac;
    }
    puVar8 = 0x14;
    iVar5 = trace_event_buffer_reserve(&uStack_158,iVar6);
    if (iVar5 != 0) {
        *(iVar5 + 8) = auVar17._8_4_;
        *(iVar5 + 0xc) = puVar9;
        *(iVar5 + 0x10) = uVar4;
        trace_event_buffer_commit(&uStack_158);
    }
code_r0x080052ac:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_128) {
        return;
    }
    auVar18 = __stack_chk_fail();
    uVar7 = auVar18._0_8_;
    *extraout_x18_01 = sym.perf_trace_cluster_enter;
    pcStack_198 = sym.perf_trace_cluster_enter;
    pcStack_190 = sym.perf_trace_cluster_exit;
    iVar5 = sp_el0;
    iStack_1a8 = *(iVar5 + 0x5e0);
    uVar3 = uVar10;
    uVar2 = SUB84(puVar8,0);
    uStack_1b0 = 0;
    uStack_1b4 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(uVar7 + 0x78);
    ppuStack_1a0 = &ppuStack_120;
    uStack_188 = uVar16;
    iStack_180 = iVar6;
    uStack_178 = uVar13;
    uStack_170 = puVar9 & 0xffffffff;
    uStack_168 = uVar4 & 0xffffffff;
    if ((*(uVar7 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &uStack_1b4;
        iVar5 = perf_trace_buf_alloc(0x14,&uStack_1b0,puVar8);
        uVar4 = _trace_event_raw_init;
        if (iVar5 != 0) {
            *(uStack_1b0 + 0xe8) = &ppuStack_1a0;
            puVar8 = uStack_1b4;
            param_5 = 1;
            *(uStack_1b0 + 0xf8) = auStack_1c0;
            *(uStack_1b0 + 0x100) = ~(-1L << (uVar4 & 0x3f)) & 0x80052e4;
            *(uStack_1b0 + 0x108) = 5;
            *(iVar5 + 8) = auVar18._8_4_;
            *(iVar5 + 0xc) = uVar2;
            *(iVar5 + 0x10) = uVar3;
            param_6 = uStack_1b0;
            perf_trace_run_bpf_submit(iVar5,0x14,puVar8,uVar7,1,uStack_1b0,piVar1,0);
            uVar10 = uVar7;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_1a8) {
        auVar17 = __stack_chk_fail();
        uVar16 = tpidr_el2;
        *extraout_x18_02 = 0x8005408;
        bpf_trace_run5(in_tmp_ldXn,auVar17._0_8_,auVar17._8_8_ & 0xffffffff,puVar8 & 0xffffffff,uVar10 & 0xffffffff
                       ,param_5 & 0xffffffff,param_6 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_cluster_enter.93919d071927d692c25ddf044f89175d.cfi_jt @ 0x08002820 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080053b0)

void sym.trace_event_raw_event_cluster_enter.93919d071927d692c25ddf044f89175d.cfi_jt
               (int64_t param_1,uint param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,uint64_t param_6)

{
    int64_t *piVar1;
    ulong uVar2;
    uint uVar3;
    uint uVar4;
    uint64_t uVar5;
    ulong in_tmp_ldXn;
    uint64_t uVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar10;
    ulong unaff_x30;
    uchar auVar11 [12];
    uchar auVar12 [16];
    uchar auStack_e0 [12];
    uint32_t uStack_d4;
    uint64_t uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar10 = *(param_1 + 0x48);
    uVar9 = param_4;
    if ((uVar10 >> 8 & 1) == 0) {
        puVar8 = param_3;
        if ((uVar10 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar9 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar10 >> 6 & 1) != 0) ||
           (((uVar10 >> 9 & 1) != 0 && (uVar6 = trace_event_ignore_this_pid(param_1), (uVar6 & 1) != 0))))
        goto code_r0x080052ac;
    }
    puVar8 = 0x14;
    iVar7 = trace_event_buffer_reserve(&uStack_78,param_1);
    if (iVar7 != 0) {
        *(iVar7 + 8) = param_2;
        *(iVar7 + 0xc) = param_3;
        *(iVar7 + 0x10) = param_4;
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x080052ac:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return;
    }
    auVar11 = __stack_chk_fail();
    uVar6 = auVar11._0_8_;
    *extraout_x18 = sym.perf_trace_cluster_enter;
    pcStack_b8 = sym.perf_trace_cluster_enter;
    iVar7 = sp_el0;
    iStack_c8 = *(iVar7 + 0x5e0);
    uVar4 = uVar9;
    uVar3 = SUB84(puVar8,0);
    uStack_d0 = 0;
    uStack_d4 = 0;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar6 + 0x78);
    puStack_c0 = &stack0xffffffffffffffc0;
    if ((*(uVar6 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &uStack_d4;
        iVar7 = perf_trace_buf_alloc(0x14,&uStack_d0,puVar8);
        uVar5 = _trace_event_raw_init;
        if (iVar7 != 0) {
            *(uStack_d0 + 0xe8) = &puStack_c0;
            puVar8 = uStack_d4;
            param_5 = 1;
            *(uStack_d0 + 0xf8) = auStack_e0;
            *(uStack_d0 + 0x100) = ~(-1L << (uVar5 & 0x3f)) & 0x80052e4;
            *(uStack_d0 + 0x108) = 5;
            *(iVar7 + 8) = auVar11._8_4_;
            *(iVar7 + 0xc) = uVar3;
            *(iVar7 + 0x10) = uVar4;
            param_6 = uStack_d0;
            perf_trace_run_bpf_submit(iVar7,0x14,puVar8,uVar6,1,uStack_d0,piVar1,0);
            uVar9 = uVar6;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_c8) {
        auVar12 = __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_00 = 0x8005408;
        bpf_trace_run5(in_tmp_ldXn,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar8 & 0xffffffff,uVar9 & 0xffffffff,
                       param_5 & 0xffffffff,param_6 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_cluster_enter.93919d071927d692c25ddf044f89175d.cfi_jt @ 0x08002828 (size 8) =====

void sym.__bpf_trace_cluster_enter.93919d071927d692c25ddf044f89175d.cfi_jt
               (ulong param_1,uint param_2,uint param_3,uint param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.__bpf_trace_cluster_exit.93919d071927d692c25ddf044f89175d.cfi_jt @ 0x08002830 (size 8) =====

void sym.__bpf_trace_cluster_exit.93919d071927d692c25ddf044f89175d.cfi_jt
               (ulong param_1,uint param_2,uint param_3,uint param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.perf_trace_cluster_enter.93919d071927d692c25ddf044f89175d.cfi_jt @ 0x08002838 (size 8) =====

void sym.perf_trace_cluster_enter.93919d071927d692c25ddf044f89175d.cfi_jt
               (uint64_t param_1,uint param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,uint64_t param_6)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint uVar4;
    uint uVar5;
    ulong in_tmp_ldXn;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar8 [16];
    uchar auStack_60 [12];
    uint32_t uStack_54;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    uVar5 = param_4;
    uVar4 = SUB84(param_3,0);
    uStack_50 = 0;
    uStack_54 = 0;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_54;
        iVar6 = perf_trace_buf_alloc(0x14,&uStack_50,param_3);
        uVar2 = _trace_event_raw_init;
        if (iVar6 != 0) {
            *(uStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            param_3 = uStack_54;
            uVar7 = -1L << (uVar2 & 0x3f);
            param_5 = 1;
            uVar2 = (~uVar7 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar2 = uVar7 | unaff_x30;
            }
            *(uStack_50 + 0xf8) = auStack_60;
            *(uStack_50 + 0x100) = uVar2;
            *(uStack_50 + 0x108) = 5;
            *(iVar6 + 8) = param_2;
            *(iVar6 + 0xc) = uVar4;
            *(iVar6 + 0x10) = uVar5;
            param_6 = uStack_50;
            perf_trace_run_bpf_submit(iVar6,0x14,param_3,param_1,1,uStack_50,piVar1,0);
            param_4 = param_1;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return;
    }
    auVar8 = __stack_chk_fail();
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x8005408;
    bpf_trace_run5(in_tmp_ldXn,auVar8._0_8_,auVar8._8_8_ & 0xffffffff,param_3 & 0xffffffff,param_4 & 0xffffffff,
                   param_5 & 0xffffffff,param_6 & 0xffffffff);
    return;
}


// ===== sym.trace_event_reg.cfi_jt @ 0x08002840 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_reg.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.ipi_entry.54f5299e1f581feb01b94162fe215419.cfi_jt @ 0x08002848 (size 8) =====

void sym.ipi_entry.54f5299e1f581feb01b94162fe215419.cfi_jt(void)

{
    int64_t iVar1;
    code *pcVar2;
    
    if ((obj.suspend_in_progress & 1) == 0) {
        iVar1 = tpidr_el1;
        if (0x1f < *(cpu_number + iVar1)) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x8004224);
            (*pcVar2)();
        }
        *(*(__per_cpu_offset + *(cpu_number + iVar1) * 8) + 0x8007440) = 0;
    }
    return;
}


// ===== sym.prediction_disabled_store.15fd167cf514ad861e583ee1acf79061.cfi_jt @ 0x08002850 (size 8) =====

//WARNING: Control flow encountered bad instruction data

int64_t sym.prediction_disabled_store.15fd167cf514ad861e583ee1acf79061.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    auStack_2c[0] = 0x0;
    iVar2 = kstrtobool(param_3,auStack_2c);
    if (iVar2 == 0) {
        obj.prediction_disabled = auStack_2c[0];
    }
    else {
        _printk(0x8001589);
        param_4 = iVar2;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return param_4;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.sleep_disabled_store.15fd167cf514ad861e583ee1acf79061.cfi_jt @ 0x08002858 (size 8) =====

int64_t sym.sleep_disabled_store.15fd167cf514ad861e583ee1acf79061.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    auStack_2c[0] = 0x0;
    iVar2 = kstrtobool(param_3,auStack_2c);
    if (iVar2 == 0) {
        obj.sleep_disabled = auStack_2c[0];
    }
    else {
        _printk(0x8001589);
        param_4 = iVar2;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.prediction_disabled_show;
    iVar2 = scnprintf(param_3,0x1000,0x8001497,obj.prediction_disabled);
    return iVar2;
}


// ===== sym.cluster_idle_set.15fd167cf514ad861e583ee1acf79061.cfi_jt @ 0x08002860 (size 8) =====

ulong sym.cluster_idle_set.15fd167cf514ad861e583ee1acf79061.cfi_jt
                (ulong param_1,int64_t param_2,ulong param_3,ulong param_4)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    uint8_t auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    auStack_2c[0] = 0;
    iVar3 = kstrtobool(param_3,auStack_2c);
    if (iVar3 == 0) {
        if (3 < *(param_2 + -8)) goto code_r0x080069e4;
        *(*(param_2 + -0x18) + *(param_2 + -8) + 0x1b0) = auStack_2c[0] ^ 1;
    }
    else {
        param_4 = 0xffffffffffffffea;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return param_4;
    }
    __stack_chk_fail();
code_r0x080069e4:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80069e8);
    (*pcVar2)();
}


// ===== sym.__typeid__ZTSFvvE_global_addr @ 0x08002868 (size 8) =====

void sym.__typeid__ZTSFvvE_global_addr(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.lpm_cluster_gov_probe.93919d071927d692c25ddf044f89175d.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cluster_gov_disable.93919d071927d692c25ddf044f89175d.cfi_jt @ 0x08002870 (size 8) =====

void sym.cluster_gov_disable.93919d071927d692c25ddf044f89175d.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.lpm_cluster_gov_probe.93919d071927d692c25ddf044f89175d.cfi_jt);
    return;
}


// ===== sym.__traceiter_lpm_gov_select @ 0x08002878 (size 128) =====

ulong sym.__traceiter_lpm_gov_select(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8006d50 != NULL) {
        piVar1 = *0x8006d50;
        do {
            (**piVar1)(piVar1[1],arg2 & 0xffffffff,arg3,arg4);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_gov_pred_select @ 0x08002900 (size 112) =====

ulong sym.__traceiter_gov_pred_select(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8006d98 != NULL) {
        piVar1 = *0x8006d98;
        do {
            (**piVar1)(piVar1[1],arg2 & 0xffffffff,arg3,arg4 & 0xffffffff);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_gov_pred_hist @ 0x08002978 (size 112) =====

ulong sym.__traceiter_gov_pred_hist(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8006de0 != NULL) {
        piVar1 = *0x8006de0;
        do {
            (**piVar1)(piVar1[1],arg2 & 0xffffffff,arg4 & 0xffffffff,arg3 & 0xffffffff);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.trace_event_raw_event_lpm_gov_select @ 0x080029f0 (size 224) =====

//WARNING: Removing unreachable block (ram,0x08002db8)
//WARNING: Removing unreachable block (ram,0x08002ba4)
//WARNING: Removing unreachable block (ram,0x08002fc4)

void sym.trace_event_raw_event_lpm_gov_select(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint uVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint uVar11;
    uint uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong in_x4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar15;
    uint64_t uVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    ulong uVar19;
    ulong unaff_x30;
    uchar auVar20 [16];
    uchar auVar21 [12];
    uchar auStack_2b0 [12];
    uint uStack_2a4;
    int64_t iStack_2a0;
    int64_t iStack_298;
    ulong **ppuStack_290;
    code *pcStack_288;
    code *pcStack_280;
    ulong uStack_278;
    int64_t iStack_270;
    uint64_t uStack_268;
    uint64_t uStack_260;
    uint64_t uStack_258;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    int64_t iStack_218;
    ulong **ppuStack_210;
    ulong uStack_208;
    int64_t *piStack_200;
    uint64_t uStack_1f0;
    uint32_t *puStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uchar auStack_1d0 [12];
    uint32_t uStack_1c4;
    int64_t iStack_1c0;
    int64_t iStack_1b8;
    ulong **ppuStack_1b0;
    code *pcStack_1a8;
    int64_t *piStack_1a0;
    ulong uStack_198;
    int64_t iStack_190;
    uint64_t uStack_188;
    uint32_t *puStack_180;
    uint64_t uStack_178;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    ulong uStack_128;
    uint64_t uStack_120;
    uint32_t *puStack_110;
    uint64_t uStack_108;
    uint64_t uStack_f8;
    uchar auStack_f0 [12];
    uint32_t uStack_e4;
    int64_t iStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar17 = *(arg1 + 0x48);
    uVar13 = arg4;
    uVar19 = in_x4;
    if ((uVar17 >> 8 & 1) == 0) {
        puVar9 = arg3;
        if ((uVar17 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar13 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar17 >> 6 & 1) == 0) &&
           (((uVar17 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(arg1), (uVar3 & 1) == 0))))
        goto code_r0x08002a70;
    }
    else {
code_r0x08002a70:
        puVar9 = 0x28;
        iVar4 = trace_event_buffer_reserve(&uStack_78,arg1);
        if (iVar4 != 0) {
            *(iVar4 + 8) = arg2;
            *(iVar4 + 0x10) = arg3;
            *(iVar4 + 0x18) = arg4;
            *(iVar4 + 0x20) = in_x4;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    auVar20 = __stack_chk_fail();
    uVar6 = auVar20._0_8_;
    *extraout_x18 = sym.perf_trace_lpm_gov_select;
    pcStack_c8 = sym.perf_trace_lpm_gov_select;
    iVar4 = sp_el0;
    iStack_d8 = *(iVar4 + 0x5e0);
    uVar18 = auVar20._8_8_ & 0xffffffff;
    iStack_e0 = 0;
    uStack_e4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(uVar6 + 0x78);
    uVar3 = uVar13;
    puStack_d0 = &stack0xffffffffffffffc0;
    if ((*(uVar6 + 0x80) != 0) || (puVar10 = puVar9, *piVar1 != 0)) {
        puVar10 = &uStack_e4;
        iVar4 = perf_trace_buf_alloc(0x2c,&iStack_e0);
        uVar14 = _trace_event_raw_init;
        if (iVar4 != 0) {
            *(iStack_e0 + 0xe8) = &puStack_d0;
            puVar10 = uStack_e4;
            *(iStack_e0 + 0xf8) = auStack_f0;
            *(iStack_e0 + 0x100) = ~(-1L << (uVar14 & 0x3f)) & 0x8002ad0;
            *(iStack_e0 + 0x108) = 5;
            *(iVar4 + 8) = auVar20._8_4_;
            *(iVar4 + 0x10) = puVar9;
            *(iVar4 + 0x18) = uVar13;
            *(iVar4 + 0x20) = uVar19;
            uVar3 = uVar6;
            perf_trace_run_bpf_submit(iVar4,0x2c,puVar10,uVar6,1,iStack_e0,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar5 = auVar20._0_8_;
    uVar19 = tpidr_el2;
    *extraout_x18_00 = 0x8002c04;
    uStack_128 = 0x8002c04;
    iVar4 = sp_el0;
    iStack_138 = *(iVar4 + 0x5e0);
    uVar15 = auVar20._8_8_ & 0xffffffff;
    uVar19 = *(iVar5 + 0x48);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uVar17 = uVar19;
    uVar14 = uVar3;
    ppuStack_130 = &puStack_d0;
    uStack_120 = uVar18;
    puStack_110 = puVar9;
    uStack_108 = uVar13;
    uStack_f8 = uVar6;
    if ((uVar17 >> 8 & 1) == 0) {
        puVar9 = puVar10;
        if ((uVar17 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar14 = 0;
            event_triggers_call(iVar5,0);
        }
        if (((uVar17 >> 6 & 1) == 0) &&
           (((uVar17 >> 9 & 1) == 0 || (uVar13 = trace_event_ignore_this_pid(iVar5), (uVar13 & 1) == 0))))
        goto code_r0x08002c8c;
    }
    else {
code_r0x08002c8c:
        puVar9 = 0x20;
        iVar4 = trace_event_buffer_reserve(&uStack_168,iVar5);
        if (iVar4 != 0) {
            *(iVar4 + 8) = auVar20._8_4_;
            *(iVar4 + 0x10) = puVar10;
            *(iVar4 + 0x18) = uVar3;
            trace_event_buffer_commit(&uStack_168);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_138) {
        return;
    }
    auVar20 = __stack_chk_fail();
    uVar6 = auVar20._0_8_;
    *extraout_x18_01 = sym.perf_trace_gov_pred_select;
    pcStack_1a8 = sym.perf_trace_gov_pred_select;
    iVar4 = sp_el0;
    iStack_1b8 = *(iVar4 + 0x5e0);
    uVar18 = uVar14 & 0xffffffff;
    uVar16 = auVar20._8_8_ & 0xffffffff;
    iStack_1c0 = 0;
    uStack_1c4 = 0;
    iVar4 = tpidr_el1;
    piVar2 = iVar4 + *(uVar6 + 0x78);
    uVar13 = uVar14;
    ppuStack_1b0 = &ppuStack_130;
    piStack_1a0 = piVar1;
    uStack_198 = uVar19;
    iStack_190 = iVar5;
    uStack_188 = uVar15;
    puStack_180 = puVar10;
    uStack_178 = uVar3 & 0xffffffff;
    if ((*(uVar6 + 0x80) != 0) || (puVar10 = puVar9, *piVar2 != 0)) {
        puVar10 = &uStack_1c4;
        iVar4 = perf_trace_buf_alloc(0x24,&iStack_1c0);
        uVar3 = _trace_event_raw_init;
        if (iVar4 != 0) {
            *(iStack_1c0 + 0xe8) = &ppuStack_1b0;
            puVar10 = uStack_1c4;
            *(iStack_1c0 + 0xf8) = auStack_1d0;
            *(iStack_1c0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8002cec;
            *(iStack_1c0 + 0x108) = 5;
            *(iVar4 + 8) = auVar20._8_4_;
            *(iVar4 + 0x10) = puVar9;
            *(iVar4 + 0x18) = uVar14;
            uVar13 = uVar6;
            perf_trace_run_bpf_submit(iVar4,0x24,puVar10,uVar6,1,iStack_1c0,piVar2,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar5 = auVar20._0_8_;
    uVar11 = uVar13;
    uVar19 = tpidr_el2;
    *extraout_x18_02 = 0x8002e14;
    uStack_208 = 0x8002e14;
    iVar4 = sp_el0;
    iStack_218 = *(iVar4 + 0x5e0);
    uVar3 = auVar20._8_8_ & 0xffffffff;
    uVar19 = *(iVar5 + 0x48);
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uVar17 = uVar19;
    uVar12 = uVar11;
    ppuStack_210 = &ppuStack_1b0;
    piStack_200 = piVar2;
    uStack_1f0 = uVar16;
    puStack_1e8 = puVar9;
    uStack_1e0 = uVar18;
    uStack_1d8 = uVar6;
    if ((uVar17 >> 8 & 1) == 0) {
        uVar8 = puVar10;
        if ((uVar17 >> 7 & 1) != 0) {
            uVar8 = 0;
            uVar12 = 0;
            event_triggers_call(iVar5,0);
        }
        if (((uVar17 >> 6 & 1) != 0) ||
           (((uVar17 >> 9 & 1) != 0 && (uVar6 = trace_event_ignore_this_pid(iVar5), (uVar6 & 1) != 0))))
        goto code_r0x08002ec0;
    }
    uVar8 = 0x14;
    iVar4 = trace_event_buffer_reserve(&uStack_248,iVar5);
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar20._8_4_;
        *(iVar4 + 0xc) = puVar10;
        *(iVar4 + 0x10) = uVar11;
        trace_event_buffer_commit(&uStack_248);
    }
code_r0x08002ec0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_218) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar7 = auVar21._0_8_;
    *extraout_x18_03 = sym.perf_trace_gov_pred_hist;
    pcStack_288 = sym.perf_trace_gov_pred_hist;
    pcStack_280 = sym.perf_trace_gov_pred_select;
    iVar4 = sp_el0;
    iStack_298 = *(iVar4 + 0x5e0);
    iStack_2a0 = 0;
    uStack_2a4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar7 + 0x78);
    ppuStack_290 = &ppuStack_210;
    uStack_278 = uVar19;
    iStack_270 = iVar5;
    uStack_268 = uVar3;
    uStack_260 = puVar10 & 0xffffffff;
    uStack_258 = uVar13 & 0xffffffff;
    if (((*(iVar7 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x14,&iStack_2a0,&uStack_2a4), uVar13 = _trace_event_raw_init, iVar4 != 0)) {
        *(iStack_2a0 + 0xe8) = &ppuStack_290;
        *(iStack_2a0 + 0xf8) = auStack_2b0;
        *(iStack_2a0 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x8002ef8;
        *(iStack_2a0 + 0x108) = 5;
        *(iVar4 + 8) = auVar21._8_4_;
        *(iVar4 + 0xc) = uVar8;
        *(iVar4 + 0x10) = uVar12;
        perf_trace_run_bpf_submit(iVar4,0x14,uStack_2a4,iVar7,1,iStack_2a0,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_298) {
        auVar20 = __stack_chk_fail();
        uVar19 = tpidr_el2;
        *extraout_x18_04 = 0x800301c;
        bpf_trace_run4(in_tmp_ldXn,auVar20._0_8_,auVar20._8_8_ & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_lpm_gov_select @ 0x08002ad0 (size 320) =====

//WARNING: Removing unreachable block (ram,0x08002db8)
//WARNING: Removing unreachable block (ram,0x08002fc4)

void sym.perf_trace_lpm_gov_select(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong in_tmp_ldXn;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint uVar7;
    uchar *puVar8;
    uchar *puVar9;
    uint uVar10;
    uint uVar11;
    ulong in_x4;
    uint64_t uVar12;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    ulong uVar19;
    uint64_t unaff_x30;
    uchar auVar20 [16];
    uchar auVar21 [12];
    uchar auStack_230 [12];
    uint uStack_224;
    int64_t iStack_220;
    int64_t iStack_218;
    uchar *puStack_210;
    code *pcStack_208;
    code *pcStack_200;
    ulong uStack_1f8;
    int64_t iStack_1f0;
    uint64_t uStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    int64_t iStack_198;
    uchar *puStack_190;
    ulong uStack_188;
    int64_t *piStack_180;
    uint64_t uStack_170;
    uchar *puStack_168;
    uint64_t uStack_160;
    uint64_t uStack_158;
    uchar auStack_150 [12];
    uint32_t uStack_144;
    int64_t iStack_140;
    int64_t iStack_138;
    uchar *puStack_130;
    code *pcStack_128;
    int64_t *piStack_120;
    ulong uStack_118;
    int64_t iStack_110;
    uint64_t uStack_108;
    uchar *puStack_100;
    uint64_t uStack_f8;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_90;
    int64_t iStack_88;
    int64_t iStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    uVar18 = arg2 & 0xffffffff;
    iStack_60 = 0;
    uStack_64 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(arg1 + 0x78);
    uVar15 = arg4;
    if ((*(arg1 + 0x80) != 0) || (puVar8 = arg3, *piVar1 != 0)) {
        puVar8 = &stack0xffffffffffffff9c;
        iVar3 = perf_trace_buf_alloc(0x2c,&stack0xffffffffffffffa0);
        uVar12 = _trace_event_raw_init;
        if (iVar3 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            puVar8 = uStack_64;
            uVar12 = -1L << (uVar12 & 0x3f);
            uVar15 = (~uVar12 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar15 = uVar12 | unaff_x30;
            }
            *(iStack_60 + 0xf8) = &stack0xffffffffffffff90;
            *(iStack_60 + 0x100) = uVar15;
            *(iStack_60 + 0x108) = 5;
            *(iVar3 + 8) = arg2;
            *(iVar3 + 0x10) = arg3;
            *(iVar3 + 0x18) = arg4;
            *(iVar3 + 0x20) = in_x4;
            uVar15 = arg1;
            perf_trace_run_bpf_submit(iVar3,0x2c,puVar8,arg1,1,iStack_60,piVar1,0);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar4 = auVar20._0_8_;
    uVar19 = tpidr_el2;
    *extraout_x18 = 0x8002c04;
    uStack_a8 = 0x8002c04;
    iVar3 = sp_el0;
    iStack_b8 = *(iVar3 + 0x5e0);
    uVar14 = auVar20._8_8_ & 0xffffffff;
    uVar19 = *(iVar4 + 0x48);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar17 = uVar19;
    uVar12 = uVar15;
    puStack_b0 = &stack0xffffffffffffffb0;
    uStack_a0 = uVar18;
    iStack_90 = arg3;
    iStack_88 = arg4;
    iStack_78 = arg1;
    if ((uVar17 >> 8 & 1) == 0) {
        puVar9 = puVar8;
        if ((uVar17 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar12 = 0;
            event_triggers_call(iVar4,0);
        }
        if (((uVar17 >> 6 & 1) == 0) &&
           (((uVar17 >> 9 & 1) == 0 || (uVar18 = trace_event_ignore_this_pid(iVar4), (uVar18 & 1) == 0))))
        goto code_r0x08002c8c;
    }
    else {
code_r0x08002c8c:
        puVar9 = 0x20;
        iVar3 = trace_event_buffer_reserve(&stack0xffffffffffffff18,iVar4);
        if (iVar3 != 0) {
            *(iVar3 + 8) = auVar20._8_4_;
            *(iVar3 + 0x10) = puVar8;
            *(iVar3 + 0x18) = uVar15;
            trace_event_buffer_commit(&stack0xffffffffffffff18);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar20 = __stack_chk_fail();
    uVar5 = auVar20._0_8_;
    *extraout_x18_00 = sym.perf_trace_gov_pred_select;
    pcStack_128 = sym.perf_trace_gov_pred_select;
    iVar3 = sp_el0;
    iStack_138 = *(iVar3 + 0x5e0);
    uVar13 = uVar12 & 0xffffffff;
    uVar16 = auVar20._8_8_ & 0xffffffff;
    iStack_140 = 0;
    uStack_144 = 0;
    iVar3 = tpidr_el1;
    piVar2 = iVar3 + *(uVar5 + 0x78);
    uVar18 = uVar12;
    puStack_130 = &stack0xffffffffffffff50;
    piStack_120 = piVar1;
    uStack_118 = uVar19;
    iStack_110 = iVar4;
    uStack_108 = uVar14;
    puStack_100 = puVar8;
    uStack_f8 = uVar15 & 0xffffffff;
    if ((*(uVar5 + 0x80) != 0) || (puVar8 = puVar9, *piVar2 != 0)) {
        puVar8 = &stack0xfffffffffffffebc;
        iVar3 = perf_trace_buf_alloc(0x24,&stack0xfffffffffffffec0);
        uVar15 = _trace_event_raw_init;
        if (iVar3 != 0) {
            *(iStack_140 + 0xe8) = &stack0xfffffffffffffed0;
            puVar8 = uStack_144;
            *(iStack_140 + 0xf8) = &stack0xfffffffffffffeb0;
            *(iStack_140 + 0x100) = ~(-1L << (uVar15 & 0x3f)) & 0x8002cec;
            *(iStack_140 + 0x108) = 5;
            *(iVar3 + 8) = auVar20._8_4_;
            *(iVar3 + 0x10) = puVar9;
            *(iVar3 + 0x18) = uVar12;
            uVar18 = uVar5;
            perf_trace_run_bpf_submit(iVar3,0x24,puVar8,uVar5,1,iStack_140,piVar2,0);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_138) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar4 = auVar20._0_8_;
    uVar10 = uVar18;
    uVar19 = tpidr_el2;
    *extraout_x18_01 = 0x8002e14;
    uStack_188 = 0x8002e14;
    iVar3 = sp_el0;
    iStack_198 = *(iVar3 + 0x5e0);
    uVar15 = auVar20._8_8_ & 0xffffffff;
    uVar19 = *(iVar4 + 0x48);
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uVar17 = uVar19;
    uVar11 = uVar10;
    puStack_190 = &stack0xfffffffffffffed0;
    piStack_180 = piVar2;
    uStack_170 = uVar16;
    puStack_168 = puVar9;
    uStack_160 = uVar13;
    uStack_158 = uVar5;
    if ((uVar17 >> 8 & 1) == 0) {
        uVar7 = puVar8;
        if ((uVar17 >> 7 & 1) != 0) {
            uVar7 = 0;
            uVar11 = 0;
            event_triggers_call(iVar4,0);
        }
        if (((uVar17 >> 6 & 1) != 0) ||
           (((uVar17 >> 9 & 1) != 0 && (uVar12 = trace_event_ignore_this_pid(iVar4), (uVar12 & 1) != 0))))
        goto code_r0x08002ec0;
    }
    uVar7 = 0x14;
    iVar3 = trace_event_buffer_reserve(&stack0xfffffffffffffe38,iVar4);
    if (iVar3 != 0) {
        *(iVar3 + 8) = auVar20._8_4_;
        *(iVar3 + 0xc) = puVar8;
        *(iVar3 + 0x10) = uVar10;
        trace_event_buffer_commit(&stack0xfffffffffffffe38);
    }
code_r0x08002ec0:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_198) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar6 = auVar21._0_8_;
    *extraout_x18_02 = sym.perf_trace_gov_pred_hist;
    pcStack_208 = sym.perf_trace_gov_pred_hist;
    pcStack_200 = sym.perf_trace_gov_pred_select;
    iVar3 = sp_el0;
    iStack_218 = *(iVar3 + 0x5e0);
    iStack_220 = 0;
    uStack_224 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(iVar6 + 0x78);
    puStack_210 = &stack0xfffffffffffffe70;
    uStack_1f8 = uVar19;
    iStack_1f0 = iVar4;
    uStack_1e8 = uVar15;
    uStack_1e0 = puVar8 & 0xffffffff;
    uStack_1d8 = uVar18 & 0xffffffff;
    if (((*(iVar6 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar3 = perf_trace_buf_alloc(0x14,&stack0xfffffffffffffde0,&stack0xfffffffffffffddc),
       uVar15 = _trace_event_raw_init, iVar3 != 0)) {
        *(iStack_220 + 0xe8) = &stack0xfffffffffffffdf0;
        *(iStack_220 + 0xf8) = &stack0xfffffffffffffdd0;
        *(iStack_220 + 0x100) = ~(-1L << (uVar15 & 0x3f)) & 0x8002ef8;
        *(iStack_220 + 0x108) = 5;
        *(iVar3 + 8) = auVar21._8_4_;
        *(iVar3 + 0xc) = uVar7;
        *(iVar3 + 0x10) = uVar11;
        perf_trace_run_bpf_submit(iVar3,0x14,uStack_224,iVar6,1,iStack_220,piVar1,0);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_218) {
        auVar20 = __stack_chk_fail();
        uVar19 = tpidr_el2;
        *extraout_x18_03 = 0x800301c;
        bpf_trace_run4(in_tmp_ldXn,auVar20._0_8_,auVar20._8_8_ & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_gov_pred_select @ 0x08002c10 (size 220) =====

//WARNING: Removing unreachable block (ram,0x08002db8)
//WARNING: Removing unreachable block (ram,0x08002fc4)

void sym.trace_event_raw_event_gov_pred_select(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint uVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint uVar11;
    uint uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t uVar14;
    uint64_t uVar15;
    uint32_t uVar16;
    ulong uVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    uchar auVar19 [12];
    uchar auStack_1c0 [12];
    uint uStack_1b4;
    int64_t iStack_1b0;
    int64_t iStack_1a8;
    ulong **ppuStack_1a0;
    code *pcStack_198;
    code *pcStack_190;
    ulong uStack_188;
    int64_t iStack_180;
    uint64_t uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    int64_t iStack_128;
    uchar **ppuStack_120;
    ulong uStack_118;
    int64_t *piStack_110;
    uint64_t uStack_100;
    uint32_t *puStack_f8;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    uchar auStack_e0 [12];
    uint32_t uStack_d4;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar16 = *(arg1 + 0x48);
    uVar13 = arg4;
    if ((uVar16 >> 8 & 1) == 0) {
        puVar9 = arg3;
        if ((uVar16 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar13 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar16 >> 6 & 1) == 0) &&
           (((uVar16 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(arg1), (uVar3 & 1) == 0))))
        goto code_r0x08002c8c;
    }
    else {
code_r0x08002c8c:
        puVar9 = 0x20;
        iVar4 = trace_event_buffer_reserve(&uStack_78,arg1);
        if (iVar4 != 0) {
            *(iVar4 + 8) = arg2;
            *(iVar4 + 0x10) = arg3;
            *(iVar4 + 0x18) = arg4;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    auVar18 = __stack_chk_fail();
    uVar6 = auVar18._0_8_;
    *extraout_x18 = sym.perf_trace_gov_pred_select;
    pcStack_b8 = sym.perf_trace_gov_pred_select;
    iVar4 = sp_el0;
    iStack_c8 = *(iVar4 + 0x5e0);
    uVar14 = uVar13 & 0xffffffff;
    uVar15 = auVar18._8_8_ & 0xffffffff;
    iStack_d0 = 0;
    uStack_d4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(uVar6 + 0x78);
    uVar3 = uVar13;
    puStack_c0 = &stack0xffffffffffffffc0;
    if ((*(uVar6 + 0x80) != 0) || (puVar10 = puVar9, *piVar1 != 0)) {
        puVar10 = &uStack_d4;
        iVar4 = perf_trace_buf_alloc(0x24,&iStack_d0);
        uVar2 = _trace_event_raw_init;
        if (iVar4 != 0) {
            *(iStack_d0 + 0xe8) = &puStack_c0;
            puVar10 = uStack_d4;
            *(iStack_d0 + 0xf8) = auStack_e0;
            *(iStack_d0 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x8002cec;
            *(iStack_d0 + 0x108) = 5;
            *(iVar4 + 8) = auVar18._8_4_;
            *(iVar4 + 0x10) = puVar9;
            *(iVar4 + 0x18) = uVar13;
            uVar3 = uVar6;
            perf_trace_run_bpf_submit(iVar4,0x24,puVar10,uVar6,1,iStack_d0,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar5 = auVar18._0_8_;
    uVar11 = uVar3;
    uVar17 = tpidr_el2;
    *extraout_x18_00 = 0x8002e14;
    uStack_118 = 0x8002e14;
    iVar4 = sp_el0;
    iStack_128 = *(iVar4 + 0x5e0);
    uVar13 = auVar18._8_8_ & 0xffffffff;
    uVar17 = *(iVar5 + 0x48);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uVar16 = uVar17;
    uVar12 = uVar11;
    ppuStack_120 = &puStack_c0;
    piStack_110 = piVar1;
    uStack_100 = uVar15;
    puStack_f8 = puVar9;
    uStack_f0 = uVar14;
    uStack_e8 = uVar6;
    if ((uVar16 >> 8 & 1) == 0) {
        uVar8 = puVar10;
        if ((uVar16 >> 7 & 1) != 0) {
            uVar8 = 0;
            uVar12 = 0;
            event_triggers_call(iVar5,0);
        }
        if (((uVar16 >> 6 & 1) != 0) ||
           (((uVar16 >> 9 & 1) != 0 && (uVar6 = trace_event_ignore_this_pid(iVar5), (uVar6 & 1) != 0))))
        goto code_r0x08002ec0;
    }
    uVar8 = 0x14;
    iVar4 = trace_event_buffer_reserve(&uStack_158,iVar5);
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar18._8_4_;
        *(iVar4 + 0xc) = puVar10;
        *(iVar4 + 0x10) = uVar11;
        trace_event_buffer_commit(&uStack_158);
    }
code_r0x08002ec0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_128) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar7 = auVar19._0_8_;
    *extraout_x18_01 = sym.perf_trace_gov_pred_hist;
    pcStack_198 = sym.perf_trace_gov_pred_hist;
    pcStack_190 = sym.perf_trace_gov_pred_select;
    iVar4 = sp_el0;
    iStack_1a8 = *(iVar4 + 0x5e0);
    iStack_1b0 = 0;
    uStack_1b4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar7 + 0x78);
    ppuStack_1a0 = &ppuStack_120;
    uStack_188 = uVar17;
    iStack_180 = iVar5;
    uStack_178 = uVar13;
    uStack_170 = puVar10 & 0xffffffff;
    uStack_168 = uVar3 & 0xffffffff;
    if (((*(iVar7 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x14,&iStack_1b0,&uStack_1b4), uVar13 = _trace_event_raw_init, iVar4 != 0)) {
        *(iStack_1b0 + 0xe8) = &ppuStack_1a0;
        *(iStack_1b0 + 0xf8) = auStack_1c0;
        *(iStack_1b0 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x8002ef8;
        *(iStack_1b0 + 0x108) = 5;
        *(iVar4 + 8) = auVar19._8_4_;
        *(iVar4 + 0xc) = uVar8;
        *(iVar4 + 0x10) = uVar12;
        perf_trace_run_bpf_submit(iVar4,0x14,uStack_1b4,iVar7,1,iStack_1b0,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_1a8) {
        auVar18 = __stack_chk_fail();
        uVar17 = tpidr_el2;
        *extraout_x18_02 = 0x800301c;
        bpf_trace_run4(in_tmp_ldXn,auVar18._0_8_,auVar18._8_8_ & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_gov_pred_select @ 0x08002cec (size 308) =====

//WARNING: Removing unreachable block (ram,0x08002fc4)

void sym.perf_trace_gov_pred_select(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int64_t iVar4;
    uint uVar5;
    uint uVar6;
    uchar *puVar7;
    uint uVar8;
    uint uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    uint64_t unaff_x30;
    uchar auVar15 [12];
    uchar auVar16 [16];
    uchar auStack_140 [12];
    uint uStack_134;
    int64_t iStack_130;
    int64_t iStack_128;
    uchar *puStack_120;
    code *pcStack_118;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    ulong uStack_98;
    int64_t *piStack_90;
    uint64_t uStack_80;
    int64_t iStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    uchar auStack_60 [12];
    uint32_t uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    
    uVar5 = arg4;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uVar12 = arg4 & 0xffffffff;
    uVar13 = arg2 & 0xffffffff;
    iStack_50 = 0;
    uStack_54 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(arg1 + 0x78);
    uVar8 = uVar5;
    if ((*(arg1 + 0x80) != 0) || (puVar7 = arg3, *piVar1 != 0)) {
        puVar7 = &stack0xffffffffffffffac;
        iVar4 = perf_trace_buf_alloc(0x24,&stack0xffffffffffffffb0);
        uVar2 = _trace_event_raw_init;
        if (iVar4 != 0) {
            *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            puVar7 = uStack_54;
            uVar11 = -1L << (uVar2 & 0x3f);
            uVar2 = (~uVar11 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar2 = uVar11 | unaff_x30;
            }
            *(iStack_50 + 0xf8) = &stack0xffffffffffffffa0;
            *(iStack_50 + 0x100) = uVar2;
            *(iStack_50 + 0x108) = 5;
            *(iVar4 + 8) = arg2;
            *(iVar4 + 0x10) = arg3;
            *(iVar4 + 0x18) = uVar5;
            iVar10 = arg1;
            perf_trace_run_bpf_submit(iVar4,0x24,puVar7,arg1,1,iStack_50,piVar1,0);
            uVar8 = iVar10;
        }
    }
    uVar5 = SUB84(puVar7,0);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    auVar15 = __stack_chk_fail();
    iVar10 = auVar15._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x8002e14;
    uStack_98 = 0x8002e14;
    iVar4 = sp_el0;
    iStack_a8 = *(iVar4 + 0x5e0);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uVar14 = *(iVar10 + 0x48);
    uVar9 = uVar8;
    puStack_a0 = &stack0xffffffffffffffc0;
    piStack_90 = piVar1;
    uStack_80 = uVar13;
    iStack_78 = arg3;
    uStack_70 = uVar12;
    iStack_68 = arg1;
    if ((uVar14 >> 8 & 1) == 0) {
        uVar6 = uVar5;
        if ((uVar14 >> 7 & 1) != 0) {
            uVar6 = 0;
            uVar9 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar14 >> 6 & 1) != 0) ||
           (((uVar14 >> 9 & 1) != 0 && (uVar12 = trace_event_ignore_this_pid(iVar10), (uVar12 & 1) != 0))))
        goto code_r0x08002ec0;
    }
    uVar6 = 0x14;
    iVar4 = trace_event_buffer_reserve(&stack0xffffffffffffff28,iVar10);
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar15._8_4_;
        *(iVar4 + 0xc) = uVar5;
        *(iVar4 + 0x10) = uVar8;
        trace_event_buffer_commit(&stack0xffffffffffffff28);
    }
code_r0x08002ec0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_a8) {
        return;
    }
    auVar15 = __stack_chk_fail();
    iVar10 = auVar15._0_8_;
    *extraout_x18_00 = sym.perf_trace_gov_pred_hist;
    pcStack_118 = sym.perf_trace_gov_pred_hist;
    iVar4 = sp_el0;
    iStack_128 = *(iVar4 + 0x5e0);
    iStack_130 = 0;
    uStack_134 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar10 + 0x78);
    puStack_120 = &stack0xffffffffffffff60;
    if (((*(iVar10 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x14,&stack0xfffffffffffffed0,&stack0xfffffffffffffecc),
       uVar12 = _trace_event_raw_init, iVar4 != 0)) {
        *(iStack_130 + 0xe8) = &stack0xfffffffffffffee0;
        *(iStack_130 + 0xf8) = &stack0xfffffffffffffec0;
        *(iStack_130 + 0x100) = ~(-1L << (uVar12 & 0x3f)) & 0x8002ef8;
        *(iStack_130 + 0x108) = 5;
        *(iVar4 + 8) = auVar15._8_4_;
        *(iVar4 + 0xc) = uVar6;
        *(iVar4 + 0x10) = uVar9;
        perf_trace_run_bpf_submit(iVar4,0x14,uStack_134,iVar10,1,iStack_130,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_128) {
        auVar16 = __stack_chk_fail();
        uVar3 = tpidr_el2;
        *extraout_x18_01 = 0x800301c;
        bpf_trace_run4(in_tmp_ldXn,auVar16._0_8_,auVar16._8_8_ & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_gov_pred_hist @ 0x08002e20 (size 216) =====

//WARNING: Removing unreachable block (ram,0x08002fc4)

void sym.trace_event_raw_event_gov_pred_hist(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar9;
    ulong unaff_x30;
    uchar auVar10 [12];
    uchar auVar11 [16];
    uchar auStack_e0 [12];
    uint uStack_d4;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    uVar7 = arg4;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar9 = *(arg1 + 0x48);
    uVar8 = uVar7;
    if ((uVar9 >> 8 & 1) == 0) {
        uVar6 = arg3;
        if ((uVar9 >> 7 & 1) != 0) {
            uVar6 = 0;
            uVar8 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar9 >> 6 & 1) != 0) ||
           (((uVar9 >> 9 & 1) != 0 && (uVar3 = trace_event_ignore_this_pid(arg1), (uVar3 & 1) != 0))))
        goto code_r0x08002ec0;
    }
    uVar6 = 0x14;
    iVar4 = trace_event_buffer_reserve(&uStack_78,arg1);
    if (iVar4 != 0) {
        *(iVar4 + 8) = arg2;
        *(iVar4 + 0xc) = arg3;
        *(iVar4 + 0x10) = uVar7;
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x08002ec0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    auVar10 = __stack_chk_fail();
    iVar5 = auVar10._0_8_;
    *extraout_x18 = sym.perf_trace_gov_pred_hist;
    pcStack_b8 = sym.perf_trace_gov_pred_hist;
    iVar4 = sp_el0;
    iStack_c8 = *(iVar4 + 0x5e0);
    iStack_d0 = 0;
    uStack_d4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    puStack_c0 = &stack0xffffffffffffffc0;
    if (((*(iVar5 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x14,&iStack_d0,&uStack_d4), uVar3 = _trace_event_raw_init, iVar4 != 0)) {
        *(iStack_d0 + 0xe8) = &puStack_c0;
        *(iStack_d0 + 0xf8) = auStack_e0;
        *(iStack_d0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8002ef8;
        *(iStack_d0 + 0x108) = 5;
        *(iVar4 + 8) = auVar10._8_4_;
        *(iVar4 + 0xc) = uVar6;
        *(iVar4 + 0x10) = uVar8;
        perf_trace_run_bpf_submit(iVar4,0x14,uStack_d4,iVar5,1,iStack_d0,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_c8) {
        auVar11 = __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_00 = 0x800301c;
        bpf_trace_run4(in_tmp_ldXn,auVar11._0_8_,auVar11._8_8_ & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_gov_pred_hist @ 0x08002ef8 (size 304) =====

void sym.perf_trace_gov_pred_hist(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar6 [16];
    uchar auStack_60 [12];
    uint uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iStack_50 = 0;
    uStack_54 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(arg1 + 0x78);
    if (((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x14,&stack0xffffffffffffffb0,&stack0xffffffffffffffac),
       uVar2 = _trace_event_raw_init, iVar4 != 0)) {
        *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
        uVar5 = -1L << (uVar2 & 0x3f);
        uVar2 = (~uVar5 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar5 | unaff_x30;
        }
        *(iStack_50 + 0xf8) = &stack0xffffffffffffffa0;
        *(iStack_50 + 0x100) = uVar2;
        *(iStack_50 + 0x108) = 5;
        *(iVar4 + 8) = arg2;
        *(iVar4 + 0xc) = arg3;
        *(iVar4 + 0x10) = arg4;
        perf_trace_run_bpf_submit(iVar4,0x14,uStack_54,arg1,1,iStack_50,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    auVar6 = __stack_chk_fail();
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x800301c;
    bpf_trace_run4(in_tmp_ldXn,auVar6._0_8_,auVar6._8_8_ & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_lpm_gov_select @ 0x08003028 (size 40) =====

void sym.__bpf_trace_lpm_gov_select(ulong noname_0,int64_t arg1)

{
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4(in_x0,arg1 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_gov_pred_select @ 0x08003050 (size 44) =====

void sym.__bpf_trace_gov_pred_select(ulong noname_0,int64_t arg1,uchar noname_2 [16],int64_t arg2)

{
    ulong in_x0;
    ulong in_x2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(in_x0,arg1 & 0xffffffff,in_x2,arg2 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_gov_pred_hist @ 0x0800307c (size 52) =====

void sym.__bpf_trace_gov_pred_hist(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(in_x0,arg1 & 0xffffffff,arg3 & 0xffffffff,arg2 & 0xffffffff);
    return;
}


// ===== sym.clear_cpu_predict_history @ 0x080030b0 (size 168) =====

void sym.clear_cpu_predict_history(void)

{
    int64_t iVar1;
    ulong uVar2;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong *extraout_x9;
    ulong *extraout_x9_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.prediction_disabled == 0x0) {
        uVar2 = cpumask_next(0xffffffff,__cpu_possible_mask);
        *extraout_x9 = extraout_x8;
        if (uVar2 < extraout_x8) {
            do {
                iVar1 = tpidr_el1;
                *(iVar1 + 0x80073d8) = 0xffffffffffffffff;
                *(iVar1 + 0x80073e0) = 0xffffffffffffffff;
                *(iVar1 + 0x80073e8) = 0xffffffff;
                *(iVar1 + 0x80073ec) = 0;
                *(iVar1 + 0x80073f4) = 0;
                *(iVar1 + 0x80073fc) = 0;
                *(iVar1 + 0x8007404) = 0;
                *(iVar1 + 0x8007438) = 0;
                uVar2 = cpumask_next(uVar2,__cpu_possible_mask);
                *extraout_x9_00 = extraout_x8_00;
            } while (uVar2 < extraout_x8_00);
        }
    }
    return;
}


// ===== sym.update_ipi_history @ 0x0800315c (size 164) =====

void sym.update_ipi_history(uint32_t arg1)

{
    int iVar1;
    uchar auVar2 [16];
    code *pcVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 0x20) {
        iVar5 = *(__per_cpu_offset + arg1 * 8);
        iVar4 = ktime_get();
        if (*(iVar5 + 0x800741c) < 5) {
            auVar2 = SEXT816(iVar4 - *(iVar5 + 0x8007420)) * SEXT816(0x20c49ba5e353f7cf);
            *(iVar5 + *(iVar5 + 0x800741c) * 4 + 0x8007408) = (auVar2._8_8_ >> 7) - (auVar2._12_4_ >> 0x1f);
            *(iVar5 + 0x8007420) = iVar4;
            iVar1 = 0;
            if (*(iVar5 + 0x800741c) + 1U < 5) {
                iVar1 = *(iVar5 + 0x800741c) + 1;
            }
            *(iVar5 + 0x800741c) = iVar1;
            return;
        }
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8003200);
    (*pcVar3)();
}


// ===== sym.unregister_cluster_governor_ops @ 0x08003200 (size 40) =====

void sym.unregister_cluster_governor_ops(uint32_t arg1)

{
    if (_segment.ehdr != arg1) {
        return;
    }
    _segment.ehdr = 0;
    return;
}


// ===== sym.register_cluster_governor_ops @ 0x08003228 (size 28) =====

void sym.register_cluster_governor_ops(int64_t arg1)

{
    if (arg1 != 0) {
        _segment.ehdr = arg1;
    }
    return;
}


// ===== sym.trace_raw_output_lpm_gov_select @ 0x08003244 (size 116) =====

void sym.trace_raw_output_lpm_gov_select(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"state:%d qos-us:%lld sleep-us:%llu reason:%#x\n",*(iVar2 + 8),*(iVar2 + 0x10),
                           *(iVar2 + 0x18),*(iVar2 + 0x20));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_gov_pred_select @ 0x080032b8 (size 116) =====

void sym.trace_raw_output_gov_pred_select(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"pred:%u time:%lu tmr_time:%u\n",*(iVar2 + 8),*(iVar2 + 0x10),*(iVar2 + 0x18));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_gov_pred_hist @ 0x0800332c (size 112) =====

void sym.trace_raw_output_gov_pred_hist(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"idx:%d residency=%d, tmr=%d\n",*(iVar2 + 8),*(iVar2 + 0xc),*(iVar2 + 0x10));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.qcom_lpm_suspend_trace @ 0x0800339c (size 268) =====

void sym.qcom_lpm_suspend_trace(void)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t in_w3;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong extraout_x8_01;
    ulong extraout_x8_02;
    ulong *extraout_x9;
    ulong *extraout_x9_00;
    ulong *extraout_x9_01;
    ulong *extraout_x9_02;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_w3 & 1) == 0) {
        iVar1 = strcmp("dpm_resume_early");
        if (iVar1 == 0) {
            obj.suspend_in_progress = 0x0;
            uVar2 = cpumask_next(0xffffffff,__cpu_online_mask);
            *extraout_x9_01 = extraout_x8_01;
            if (uVar2 < extraout_x8_01) {
                do {
                    wake_up_if_idle(uVar2);
                    uVar2 = cpumask_next(uVar2,__cpu_online_mask);
                    *extraout_x9_02 = extraout_x8_02;
                } while (uVar2 < extraout_x8_02);
            }
        }
    }
    else {
        iVar1 = strcmp("dpm_suspend_late");
        if (iVar1 == 0) {
            obj.suspend_in_progress = 0x1;
            uVar2 = cpumask_next(0xffffffff,__cpu_online_mask);
            *extraout_x9 = extraout_x8;
            if (uVar2 < extraout_x8) {
                do {
                    wake_up_if_idle(uVar2);
                    uVar2 = cpumask_next(uVar2,__cpu_online_mask);
                    *extraout_x9_00 = extraout_x8_00;
                } while (uVar2 < extraout_x8_00);
            }
        }
    }
    return;
}


// ===== sym.lpm_online_cpu @ 0x080034a8 (size 116) =====

ulong sym.lpm_online_cpu(uint32_t arg1)

{
    code *pcVar1;
    int64_t iVar2;
    ulong *puVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    if (arg1 < 0x20) {
        *in_x18 = unaff_x30;
        iVar4 = *(__per_cpu_offset + arg1 * 8);
        iVar2 = get_cpu_device();
        if ((iVar2 != 0) && (iVar4 != -0x80072f8)) {
            puVar3 = iVar4 + 0x8007308;
            *puVar3 = sym.lpm_cpu_qos_notify.54f5299e1f581feb01b94162fe215419.cfi_jt;
            dev_pm_qos_add_notifier(iVar2,puVar3,1);
        }
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800351c);
    (*pcVar1)();
}


// ===== sym.lpm_offline_cpu @ 0x0800351c (size 108) =====

ulong sym.lpm_offline_cpu(uint32_t arg1)

{
    code *pcVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    if (arg1 < 0x20) {
        *in_x18 = unaff_x30;
        iVar3 = *(__per_cpu_offset + arg1 * 8);
        iVar2 = get_cpu_device();
        if ((iVar2 != 0) && (iVar3 != -0x80072f8)) {
            dev_pm_qos_remove_notifier(iVar2,iVar3 + 0x8007308,1);
        }
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8003588);
    (*pcVar1)();
}


// ===== sym.lpm_enable_device @ 0x08003588 (size 552) =====

int sym.lpm_enable_device(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int iVar2;
    code *pcVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0x1f < *(arg2 + 4)) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x800378c);
        (*pcVar3)();
    }
    iVar5 = *(__per_cpu_offset + *(arg2 + 4) * 8);
    hrtimer_init(iVar5 + 0x8007348,1,1);
    hrtimer_init(iVar5 + 0x8007390,1,1);
    if ((reloc.__traceiter_lpm_gov_select.cfi_jt & 1) == 0) {
        iVar2 = tracepoint_probe_register
                          (__tracepoint_ipi_raise,sym.ipi_raise.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
        if (iVar2 != 0) {
            return iVar2;
        }
        iVar2 = tracepoint_probe_register
                          (__tracepoint_ipi_entry,sym.ipi_entry.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
        if (iVar2 == 0) {
            iVar2 = tracepoint_probe_register_prio
                              (__tracepoint_android_vh_cpu_idle_enter,
                               sym.lpm_idle_enter.54f5299e1f581feb01b94162fe215419.cfi_jt,0,0x80000000);
            if (iVar2 == 0) {
                iVar2 = tracepoint_probe_register_prio
                                  (__tracepoint_android_vh_cpu_idle_exit,
                                   sym.lpm_idle_exit.54f5299e1f581feb01b94162fe215419.cfi_jt,0,0x80000000);
                if (iVar2 == 0) {
                    if ((_segment.ehdr != 0) && (pcVar3 = *(_segment.ehdr + 8), pcVar3 != NULL)) {
                        if (1 < (pcVar3 + -0x8002868 >> 3 | pcVar3 << 0x3d)) {
                            __cfi_slowpath_diag(0x7e04a0fb7ad8bcd5,pcVar3,0x80012c0);
                        }
                        (*pcVar3)();
                    }
                    reloc.__traceiter_lpm_gov_select.cfi_jt = 0x1;
                    goto code_r0x08003600;
                }
                tracepoint_probe_unregister
                          (__tracepoint_ipi_raise,sym.ipi_raise.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
                tracepoint_probe_unregister
                          (__tracepoint_ipi_entry,sym.ipi_entry.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
                pcVar3 = __tracepoint_android_vh_cpu_idle_enter;
                pcVar4 = sym.lpm_idle_enter.54f5299e1f581feb01b94162fe215419.cfi_jt;
            }
            else {
                tracepoint_probe_unregister
                          (__tracepoint_ipi_raise,sym.ipi_raise.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
                pcVar3 = __tracepoint_ipi_entry;
                pcVar4 = sym.ipi_entry.54f5299e1f581feb01b94162fe215419.cfi_jt;
            }
        }
        else {
            pcVar3 = __tracepoint_ipi_raise;
            pcVar4 = sym.ipi_raise.54f5299e1f581feb01b94162fe215419.cfi_jt;
        }
        tracepoint_probe_unregister(pcVar3,pcVar4,0);
    }
    else {
code_r0x08003600:
        iVar2 = 0;
        uVar1 = *(arg2 + 4);
        *(iVar5 + 0x8007320) = arg1;
        *(iVar5 + 0x8007328) = arg2;
        *(obj.lpm_cpu_data + iVar5) = uVar1;
        *(iVar5 + 0x80072fc) = 0xffffffff00000001;
    }
    return iVar2;
}


// ===== sym.lpm_disable_device @ 0x080037b0 (size 360) =====

void sym.lpm_disable_device(ulong noname_0,int64_t arg1)

{
    code *pcVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x22;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 4) < 0x20) {
        uVar2 = 0xffffffff;
        _trace_event_raw_init = unaff_x22;
        *(*(__per_cpu_offset + *(arg1 + 4) * 8) + 0x80072fc) = 0xffffffff00000000;
        while( true ) {
            uVar2 = cpumask_next(uVar2,__cpu_possible_mask);
            if (unaff_x22 <= uVar2) {
                if (reloc.__traceiter_lpm_gov_select.cfi_jt != 0x1) {
                    return;
                }
                tracepoint_probe_unregister
                          (__tracepoint_ipi_raise,sym.ipi_raise.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
                tracepoint_probe_unregister
                          (__tracepoint_ipi_entry,sym.ipi_entry.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
                tracepoint_probe_unregister
                          (__tracepoint_android_vh_cpu_idle_enter,
                           sym.lpm_idle_enter.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
                tracepoint_probe_unregister
                          (__tracepoint_android_vh_cpu_idle_exit,
                           sym.lpm_idle_exit.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
                if ((_segment.ehdr != 0) && (pcVar1 = *(_segment.ehdr + 0x10), pcVar1 != NULL)) {
                    if (1 < (pcVar1 + -0x8002868 >> 3 | pcVar1 << 0x3d)) {
                        __cfi_slowpath_diag(0x7e04a0fb7ad8bcd5,pcVar1,0x80012e0);
                    }
                    (*pcVar1)();
                }
                reloc.__traceiter_lpm_gov_select.cfi_jt = 0x0;
                return;
            }
            if (0x1f < uVar2) break;
            if (*(*(__per_cpu_offset + (uVar2 & 0xffffffff) * 8) + 0x80072fc) != 0) {
                return;
            }
        }
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80038f4);
    (*pcVar1)();
}


// ===== sym.lpm_select @ 0x08003918 (size 1724) =====

uint64_t sym.lpm_select(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    code *pcVar10;
    code *extraout_x9;
    uint32_t uVar11;
    ulong *in_x18;
    uint32_t uVar12;
    uint32_t uVar13;
    int64_t iVar14;
    uint64_t uVar15;
    code *pcVar16;
    uint64_t uVar17;
    ulong unaff_x28;
    ulong unaff_x30;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    iVar3 = tpidr_el1;
    uVar15 = 0xffffffff;
    pcVar10 = cpu_bit_bitmap + (*(arg2 + 4) & 0x3f) * 8;
    pcVar16 = pcVar10 + (8 - (*(arg2 + 4) >> 3 & 0x1ffffff8));
    uVar5 = 2000000000;
    do {
        uVar17 = uVar5;
        *pcVar10 = unaff_x28;
        do {
            uVar5 = cpumask_next(uVar15,pcVar16);
            if (unaff_x28 <= uVar5) {
                uStack_78 = 0;
                pcVar16 = obj.lpm_cpu_data + iVar3;
                if (pcVar16 == NULL) {
                    uVar5 = 0;
                    goto code_r0x08003b74;
                }
                *(iVar3 + 0x8007338) = 0;
                *(iVar3 + 0x8007344) = 0;
                uVar7 = ktime_get();
                *(iVar3 + 0x8007428) = uVar7;
                uVar15 = tick_nohz_get_sleep_length(&uStack_78);
                sym.update_cpu_history(pcVar16);
                uVar5 = *(arg2 + 4);
                if (0x1f < *(arg2 + 4)) goto code_r0x08003fa8;
                uStack_70 = 0;
                iVar14 = *(__per_cpu_offset + uVar5 * 8);
                if ((obj.suspend_in_progress & 1) == 0) {
                    if ((_trace_event_buffer_reserve >> (uVar5 & 0x3f) & 1) == 0) {
code_r0x08003be0:
                        uVar12 = *(arg1 + 0x428);
                        uVar5 = uVar12 - 1;
                        if (uVar12 - 1 < 1) goto code_r0x08003e84;
                        goto code_r0x08003c2c;
                    }
                    if ((-1 < uVar15) && (obj.sleep_disabled == 0x0)) {
                        iVar4 = sched_lpm_disallowed_time(uVar5,&uStack_70);
                        if (iVar4 != 0) goto code_r0x08003be0;
                        *(iVar14 + 0x8007300) = 0;
                        *(iVar14 + 0x8007430) = uStack_70;
                    }
                }
                uVar5 = 0;
                goto code_r0x08003a80;
            }
            uVar15 = uVar5 & 0xffffffff;
        } while ((*(__cpu_active_mask + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) == 0);
        uVar6 = cpuidle_governor_latency_req(uVar15);
        pcVar10 = extraout_x9;
        uVar5 = uVar6 / 1000;
        if (uVar17 <= uVar6 / 1000) {
            uVar5 = uVar17;
        }
    } while( true );
code_r0x08003c2c:
    if (9 < uVar5) goto code_r0x08003fa8;
    if (((*(arg2 + uVar5 * 0x40 + 0x30) == 0) && (*(arg1 + uVar5 * 0x68 + 0x5c) <= (uVar17 * 1000) / 1000)) &&
       (*(arg1 + uVar5 * 0x68 + 0x50) <= uVar15)) {
        if (((*(__cpu_active_mask + (*(arg2 + 4) >> 3 & 0x1ffffff8)) >> (*(arg2 + 4) & 0x3f) & 1) != 0) &&
           (*(iVar3 + 0x8007344) == '\0')) {
            if (obj.prediction_disabled == 0x0) {
                if (*(iVar3 + 0x8007340) == 0) {
                    iVar14 = *(iVar3 + 0x8007320);
                    if (*(iVar14 + 0x50) <= uVar15) {
                        if (*(iVar3 + 0x8007400) < 5) {
                            *(iVar3 + 0x8007438) = 0;
                        }
                        else {
                            iVar8 = sym.find_deviation(pcVar16,iVar3 + 0x80073ec,uVar15);
                            *(iVar3 + 0x8007338) = iVar8;
                            if (iVar8 == 0) {
                                if (1 < *(iVar14 + 0x428)) {
                                    iVar8 = 0;
                                    do {
                                        if (iVar8 == 0x410) goto code_r0x08003fa8;
                                        uVar13 = *(iVar14 + 0xcc + iVar8);
                                        if (*(iVar3 + 0x80073d8) * 0x68 + -0x68 == iVar8) {
                                            uVar1 = *(iVar3 + 0x80073ec);
                                            uVar11 = uVar1 < uVar13;
                                            if (uVar1 >= uVar13) {
                                                uVar1 = 0;
                                            }
                                            uVar6 = uVar1;
                                        }
                                        else {
                                            uVar11 = 0;
                                            uVar6 = 0;
                                        }
                                        if ((*(iVar3 + 0x80073dc) * 0x68 + -0x68 == iVar8) &&
                                           (*(iVar3 + 0x80073f0) < uVar13)) {
                                            uVar11 = uVar11 + 1;
                                            uVar6 = uVar6 + *(iVar3 + 0x80073f0);
                                        }
                                        if ((*(iVar3 + 0x80073e0) * 0x68 + -0x68 == iVar8) &&
                                           (*(iVar3 + 0x80073f4) < uVar13)) {
                                            uVar11 = uVar11 + 1;
                                            uVar6 = uVar6 + *(iVar3 + 0x80073f4);
                                        }
                                        if ((*(iVar3 + 0x80073e4) * 0x68 + -0x68 == iVar8) &&
                                           (*(iVar3 + 0x80073f8) < uVar13)) {
                                            uVar11 = uVar11 + 1;
                                            uVar6 = uVar6 + *(iVar3 + 0x80073f8);
                                        }
                                        if ((*(iVar3 + 0x80073e8) * 0x68 + -0x68 == iVar8) &&
                                           (*(iVar3 + 0x80073fc) < uVar13)) {
                                            uVar11 = uVar11 + 1;
                                            uVar6 = uVar6 + *(iVar3 + 0x80073fc);
                                        }
                                        if (2 < uVar11) {
                                            uVar9 = uVar11;
                                            uVar2 = 0;
                                            if (uVar9 != 0) {
                                                uVar2 = uVar6 / uVar9;
                                            }
                                            *(iVar3 + 0x8007338) = uVar2;
                                            *(iVar3 + 0x8007438) = *(iVar3 + 0x8007428) + uVar2;
                                            if (uVar9 <= uVar6) goto code_r0x08003e48;
                                            break;
                                        }
                                        iVar8 = iVar8 + 0x68;
                                    } while (*(iVar14 + 0x428) * 0x68 + -0x68 != iVar8);
                                }
                                uVar7 = sym.find_deviation(pcVar16,iVar3 + 0x8007408,uVar15);
                                *(iVar3 + 0x8007338) = uVar7;
                            }
                        }
                    }
                }
                else {
                    *(iVar3 + 0x8007340) = 0;
                    *(iVar3 + 0x8007345) = 1;
                    *(iVar3 + 0x8007438) = 0;
                }
            }
code_r0x08003e48:
            *(iVar3 + 0x8007344) = 1;
        }
        if ((*(iVar3 + 0x8007338) == 0) || (*(arg1 + uVar5 * 0x68 + 100) <= *(iVar3 + 0x8007338)))
        goto code_r0x08003e84;
    }
    uVar12 = uVar5;
    uVar5 = uVar5 - 1;
    if (uVar5 < 1) goto code_r0x08003e6c;
    goto code_r0x08003c2c;
code_r0x08003e6c:
    uVar5 = 0;
    uVar12 = 1;
code_r0x08003e84:
    uVar13 = uVar5;
    *(iVar3 + 0x8007300) = uVar13;
    iVar14 = *(iVar3 + 0x8007428) + (uVar15 / 1000) * 1000;
    *(iVar3 + 0x8007330) = iVar14;
    if ((*(iVar3 + 0x8007338) != 0) && (uVar13 < *(*(iVar3 + 0x8007320) + 0x428) - 1U)) {
        if (*(iVar3 + 0x8007438) < iVar14) {
            *(iVar3 + 0x8007330) = *(iVar3 + 0x8007438);
        }
        if (10 < uVar13) {
code_r0x08003fa8:
    //WARNING: Does not return
            pcVar16 = SoftwareBreakpoint(0x5512,0x8003fac);
            (*pcVar16)();
        }
        uVar11 = *(iVar3 + 0x8007338) + 100;
        uVar1 = *(*(iVar3 + 0x8007320) + (uVar5 & 0xffffffff) * 0x68 + uVar12 * 0x68 + 100) - 1;
        uVar12 = uVar1;
        if (uVar11 <= uVar1) {
            uVar12 = uVar11;
        }
        uVar11 = uVar15 / 1000;
        if ((uVar12 < uVar11) && (uVar1 < uVar11 - uVar12)) {
            iVar14 = tpidr_el1;
            *(iVar14 + 0x8007370) = sym.histtimer_fn.54f5299e1f581feb01b94162fe215419.cfi_jt;
            hrtimer_start_range_ns(iVar14 + 0x8007348,uVar12 * 1000,0,3);
            uVar13 = *(iVar3 + 0x8007300);
        }
    }
    if (((uVar13 == *(arg1 + 0x428) - 1U) && (_segment.ehdr != NULL)) && (arg1 = *_segment.ehdr, arg1 != NULL)) {
        if (arg1 != sym.__typeid__ZTSFvP7lpm_cpuE_global_addr) goto code_r0x08003fb0;
        goto code_r0x08003f88;
    }
code_r0x08003a80:
    while( true ) {
        if ((*(pcVar16 + 8) == 0) && (uVar15 = *(pcVar16 + 0x138), uVar15 != 0)) {
            iVar3 = tpidr_el1;
            *(iVar3 + 0x80073b8) = sym.biastimer_fn.54f5299e1f581feb01b94162fe215419.cfi_jt;
            hrtimer_start_range_ns(iVar3 + 0x8007390,uVar15 & 0xffffffff,0,3);
        }
        pcVar16 = *(pcVar16 + 0x40);
code_r0x08003b74:
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iStack_68) break;
        __stack_chk_fail();
code_r0x08003fb0:
        __cfi_slowpath_diag(0xeb616fe371cc271c,arg1,0x8001300);
code_r0x08003f88:
        (*arg1)(pcVar16);
    }
    return uVar5 & 0xffffffff;
}


// ===== sym.lpm_reflect @ 0x080040ac (size 12) =====

void sym.lpm_reflect(void)

{
    return;
}


// ===== sym.ipi_raise @ 0x080040b8 (size 284) =====

void sym.ipi_raise(ulong noname_0,int64_t arg1)

{
    int iVar1;
    uchar auVar2 [16];
    code *pcVar3;
    uint32_t uVar4;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t *extraout_x9;
    uint32_t *extraout_x9_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.suspend_in_progress & 1) == 0) {
        uVar4 = cpumask_next(0xffffffff);
        *extraout_x9 = extraout_w8;
        if (uVar4 < extraout_w8) {
            do {
                if (0x1f < uVar4) {
code_r0x080041d0:
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x80041d4);
                    (*pcVar3)();
                }
                iVar5 = uVar4 * 8;
                *(*(__per_cpu_offset + iVar5) + 0x8007440) = 1;
                iVar6 = *(__per_cpu_offset + iVar5);
                iVar5 = ktime_get();
                if (4 < *(iVar6 + 0x800741c)) goto code_r0x080041d0;
                auVar2 = SEXT816(iVar5 - *(iVar6 + 0x8007420)) * SEXT816(0x20c49ba5e353f7cf);
                *(iVar6 + *(iVar6 + 0x800741c) * 4 + 0x8007408) = (auVar2._8_8_ >> 7) - (auVar2._12_4_ >> 0x1f);
                *(iVar6 + 0x8007420) = iVar5;
                iVar1 = 0;
                if (*(iVar6 + 0x800741c) + 1U < 5) {
                    iVar1 = *(iVar6 + 0x800741c) + 1;
                }
                *(iVar6 + 0x800741c) = iVar1;
                uVar4 = cpumask_next(uVar4,arg1);
                *extraout_x9_00 = extraout_w8_00;
            } while (uVar4 < extraout_w8_00);
        }
    }
    return;
}


// ===== sym.ipi_entry @ 0x080041d4 (size 80) =====

void sym.ipi_entry(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    
    if ((obj.suspend_in_progress & 1) == 0) {
        iVar1 = tpidr_el1;
        if (0x1f < *(cpu_number + iVar1)) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x8004224);
            (*pcVar2)();
        }
        *(*(__per_cpu_offset + *(cpu_number + iVar1) * 8) + 0x8007440) = 0;
    }
    return;
}


// ===== sym.lpm_idle_enter @ 0x08004228 (size 96) =====

void sym.lpm_idle_enter(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = tpidr_el1;
    if (*(iVar1 + 0x8007440) != '\0') {
        *arg2 = 0;
    }
    return;
}


// ===== sym.lpm_idle_exit @ 0x0800434c (size 192) =====

uchar  [16] sym.lpm_idle_exit(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar extraout_q0_01 [16];
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 4) < 0x20) {
        if (*(*(__per_cpu_offset + *(arg1 + 4) * 8) + 0x80072fc) != 0) {
            iVar1 = tpidr_el1;
            iVar1 = iVar1 + 0x8007348;
            uVar3 = hrtimer_active(iVar1);
            noname_1 = extraout_q0;
            if (((uVar3 & 1) != 0) &&
               (iVar4 = __hrtimer_get_remaining(iVar1,0), noname_1 = extraout_q0_00, 999 < iVar4)) {
                noname_1 = hrtimer_try_to_cancel(iVar1);
            }
            iVar1 = tpidr_el1;
            if (*(iVar1 + 0x8007430) != 0) {
                *(iVar1 + 0x8007430) = 0;
                iVar4 = __hrtimer_get_remaining(iVar1 + 0x8007390,0);
                noname_1 = extraout_q0_01;
                if (999 < iVar4) {
                    noname_1 = hrtimer_try_to_cancel(iVar1 + 0x8007390);
                }
            }
        }
        return noname_1;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800440c);
    (*pcVar2)();
}


// ===== sym.update_cpu_history @ 0x08004414 (size 356) =====

void sym.update_cpu_history(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    code *pcVar6;
    int iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.sleep_disabled == 0x0) && (obj.prediction_disabled == 0x0)) {
        uVar3 = *(arg1 + 8);
        if ((-1 < uVar3) && (uVar3 <= *(*(arg1 + 0x28) + 0x428) + -1)) {
            if (uVar3 < 0xb) {
                uVar4 = *(*(arg1 + 0x28) + uVar3 * 0x68 + 0x5c);
                uVar5 = *(*(arg1 + 0x30) + 0x18) / 1000;
                if (uVar5 <= uVar4) {
                    uVar4 = 0;
                }
                iVar7 = uVar5 - uVar4;
                uVar4 = *(arg1 + 0x10c);
                if (*(arg1 + 0x4d) == '\0') {
                    if (4 < uVar4) goto code_r0x08004574;
                    *(arg1 + uVar4 * 4 + 0xf4) = iVar7;
                }
                else {
                    uVar2 = 4;
                    if (uVar4 != 0) {
                        uVar2 = uVar4 - 1;
                    }
                    *(arg1 + 0x10c) = uVar2;
                    if (4 < uVar2) goto code_r0x08004574;
                    iVar1 = arg1 + uVar2 * 4;
                    *(arg1 + 0x4d) = 0;
                    *(iVar1 + 0xf4) = *(iVar1 + 0xf4) + iVar7;
                }
                if ((*(arg1 + 0x10c) < 5) && (*(arg1 + *(arg1 + 0x10c) * 4 + 0xe0) = uVar3, *(arg1 + 0x10c) < 5)) {
                    if (*(arg1 + 0x108) < 5) {
                        *(arg1 + 0x108) = *(arg1 + 0x108) + 1;
                    }
                    iVar7 = 0;
                    if (*(arg1 + 0x10c) + 1U < 5) {
                        iVar7 = *(arg1 + 0x10c) + 1;
                    }
                    *(arg1 + 0x10c) = iVar7;
                    return;
                }
            }
code_r0x08004574:
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x5512,0x8004578);
            (*pcVar6)();
        }
    }
    return;
}


// ===== sym.find_deviation @ 0x08004640 (size 524) =====

uint64_t sym.find_deviation(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    code *pcVar17;
    uint64_t uVar18;
    uint32_t uVar19;
    ulong *in_x18;
    int64_t iVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    uint64_t uVar23;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar20 = *(arg1 + 0x28);
    uVar13 = *(iVar20 + 0x428) - 1;
    if (10 < uVar13) {
    //WARNING: Does not return
        pcVar17 = SoftwareBreakpoint(0x5512,0x800484c);
        (*pcVar17)();
    }
    uVar21 = 0x7fffffffffffffff;
    while( true ) {
        uVar9 = *arg2;
        uVar11 = *(arg2 + 8);
        uVar10 = *(arg2 + 8);
        uVar12 = *(arg2 + 0x10);
        uVar22 = *(arg2 + 0x10);
        uVar18 = 0;
        if (uVar9 <= uVar21) {
            uVar18 = uVar9;
        }
        uVar19 = uVar11 <= uVar21;
        if (uVar9 <= uVar21) {
            uVar19 = uVar19 + 1;
        }
        uVar1 = uVar11;
        if (uVar11 <= uVar18) {
            uVar1 = uVar18;
        }
        uVar8 = uVar18;
        if (uVar11 <= uVar21) {
            uVar8 = uVar1;
        }
        uVar1 = 0;
        if (uVar11 <= uVar21) {
            uVar1 = uVar11;
        }
        uVar2 = uVar10;
        if (uVar10 <= uVar8) {
            uVar2 = uVar8;
        }
        if (uVar10 <= uVar21) {
            uVar19 = uVar19 + 1;
        }
        uVar15 = 0;
        if (uVar10 <= uVar21) {
            uVar8 = uVar2;
            uVar15 = uVar10;
        }
        if (uVar12 <= uVar21) {
            uVar19 = uVar19 + 1;
        }
        uVar2 = 0;
        if (uVar12 <= uVar21) {
            uVar2 = uVar12;
        }
        uVar16 = 0;
        if (uVar22 <= uVar21) {
            uVar19 = uVar19 + 1;
            uVar16 = uVar22;
        }
        uVar23 = uVar19;
        uVar14 = 0;
        if (uVar23 != 0) {
            uVar14 = (uVar1 + uVar18 + uVar15 + uVar2 + uVar16) / uVar23;
        }
        iVar3 = 0;
        if (uVar12 <= uVar21) {
            iVar3 = (uVar12 - uVar14) * (uVar12 - uVar14);
        }
        uVar18 = uVar12;
        if (uVar12 <= uVar8) {
            uVar18 = uVar8;
        }
        if (uVar12 <= uVar21) {
            uVar8 = uVar18;
        }
        iVar4 = 0;
        if (uVar9 <= uVar21) {
            iVar4 = (uVar9 - uVar14) * (uVar9 - uVar14);
        }
        iVar5 = 0;
        if (uVar11 <= uVar21) {
            iVar5 = (uVar11 - uVar14) * (uVar11 - uVar14);
        }
        iVar6 = 0;
        if (uVar10 <= uVar21) {
            iVar6 = (uVar10 - uVar14) * (uVar10 - uVar14);
        }
        iVar7 = 0;
        if (uVar22 <= uVar21) {
            iVar7 = (uVar22 - uVar14) * (uVar22 - uVar14);
        }
        uVar18 = 0;
        if (uVar23 != 0) {
            uVar18 = (iVar5 + iVar4 + iVar6 + iVar3 + iVar7) / uVar23;
        }
        uVar18 = int_sqrt(uVar18);
        if ((uVar18 * 6 < uVar14 && 3 < uVar19) || (uVar18 < 0x1f5)) break;
        uVar18 = uVar22;
        if (uVar22 <= uVar8) {
            uVar18 = uVar8;
        }
        if (uVar22 <= uVar21) {
            uVar8 = uVar18;
        }
        uVar21 = uVar8 - 1;
        if (uVar19 < 5) {
            return 0;
        }
    }
    if (arg3 / 1000 <= uVar14) {
        return 0;
    }
    if (*(iVar20 + uVar13 * 0x68 + 100) < uVar14) {
        return 0;
    }
    *(arg1 + 0x140) = *(arg1 + 0x130) / 1000 + uVar14;
    return uVar14;
}


// ===== sym.histtimer_fn @ 0x0800484c (size 40) =====

ulong sym.histtimer_fn(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = tpidr_el1;
    *(iVar1 + 0x8007340) = 1;
    return 0;
}


// ===== sym.biastimer_fn @ 0x08004878 (size 16) =====

ulong sym.biastimer_fn(int64_t arg1)

{
    return 0;
}


// ===== sym.lpm_cpu_qos_notify @ 0x08004888 (size 196) =====

ulong sym.lpm_cpu_qos_notify(uint32_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 - 0xc) != 0) {
        iVar3 = sp_el0;
        uVar1 = *(arg1 - 0x10);
        *(iVar3 + 0x10) = *(iVar3 + 0x10) + 1;
        iVar2 = tpidr_el1;
        if (uVar1 != *(cpu_number + iVar2)) {
            uVar4 = 1L << (uVar1 & 0x3f);
            if (((*(__cpu_online_mask + (uVar1 >> 6) * 8) & uVar4) != 0) &&
               ((*(__cpu_active_mask + (uVar1 >> 6) * 8) & uVar4) != 0)) {
                wake_up_if_idle();
            }
        }
        iVar2 = *(iVar3 + 0x10) + -1;
        *(iVar3 + 0x10) = iVar2;
        if ((iVar2 == 0) || (*(iVar3 + 0x10) == 0)) {
            preempt_schedule();
        }
    }
    return 1;
}


// ===== sym.__cfi_check_fail @ 0x0800495c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080049a0

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
    //switch table (4 cases) at 0x8001320
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80049b4);
    (*pcVar1)();
}


// ===== sym.__traceiter_cluster_pred_select @ 0x080049b4 (size 136) =====

ulong sym.__traceiter_cluster_pred_select(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_w4;
    uint in_w5;
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8006e28 != NULL) {
        piVar1 = *0x8006e28;
        do {
            (**piVar1)(piVar1[1],arg2 & 0xffffffff,arg3 & 0xffffffff,arg4 & 0xffffffff,in_w4,in_w5);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_cluster_pred_hist @ 0x08004a44 (size 128) =====

ulong sym.__traceiter_cluster_pred_hist(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_w4;
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8006e70 != NULL) {
        piVar1 = *0x8006e70;
        do {
            (**piVar1)(piVar1[1],arg2 & 0xffffffff,arg3 & 0xffffffff,arg4 & 0xffffffff,in_w4);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_cluster_exit @ 0x08004acc (size 112) =====

ulong sym.__traceiter_cluster_exit(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8006eb8 != NULL) {
        piVar1 = *0x8006eb8;
        do {
            (**piVar1)(piVar1[1],arg2 & 0xffffffff,arg3 & 0xffffffff,arg4 & 0xffffffff);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_cluster_enter @ 0x08004b44 (size 112) =====

ulong sym.__traceiter_cluster_enter(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8006f00 != NULL) {
        piVar1 = *0x8006f00;
        do {
            (**piVar1)(piVar1[1],arg2 & 0xffffffff,arg3 & 0xffffffff,arg4 & 0xffffffff);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.trace_event_raw_event_cluster_pred_select @ 0x08004bbc (size 236) =====

//WARNING: Removing unreachable block (ram,0x080051a8)
//WARNING: Removing unreachable block (ram,0x08004d80)
//WARNING: Removing unreachable block (ram,0x08004f9c)
//WARNING: Removing unreachable block (ram,0x080053b0)

void sym.trace_event_raw_event_cluster_pred_select(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint uVar3;
    uint uVar4;
    ulong in_tmp_ldXn;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint64_t uVar12;
    uint64_t in_x4;
    uint64_t uVar13;
    uint64_t in_x5;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint32_t uVar21;
    uint64_t uVar22;
    uint64_t uVar23;
    ulong uVar24;
    uint64_t uVar25;
    ulong unaff_x30;
    uchar auVar26 [16];
    uchar auVar27 [12];
    uchar auStack_3b0 [12];
    uint32_t uStack_3a4;
    uint64_t uStack_3a0;
    int64_t iStack_398;
    ulong **ppuStack_390;
    code *pcStack_388;
    code *pcStack_380;
    ulong uStack_378;
    int64_t iStack_370;
    uint64_t uStack_368;
    uint64_t uStack_360;
    uint64_t uStack_358;
    ulong uStack_348;
    ulong uStack_340;
    ulong uStack_338;
    ulong uStack_330;
    ulong uStack_328;
    ulong uStack_320;
    int64_t iStack_318;
    ulong **ppuStack_310;
    ulong uStack_308;
    int64_t *piStack_300;
    uint64_t uStack_2f0;
    uint64_t uStack_2e8;
    uint64_t uStack_2e0;
    uint64_t uStack_2d8;
    uchar auStack_2d0 [12];
    uint32_t uStack_2c4;
    uint64_t uStack_2c0;
    int64_t iStack_2b8;
    ulong **ppuStack_2b0;
    code *pcStack_2a8;
    int64_t *piStack_2a0;
    ulong uStack_298;
    int64_t iStack_290;
    uint64_t uStack_288;
    uint64_t uStack_280;
    uint64_t uStack_278;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    int64_t iStack_238;
    ulong **ppuStack_230;
    ulong uStack_228;
    uint64_t uStack_220;
    uint64_t uStack_210;
    uint64_t uStack_208;
    uint64_t uStack_200;
    uint64_t uStack_1f8;
    uchar auStack_1f0 [12];
    uint32_t uStack_1e4;
    uint64_t uStack_1e0;
    int64_t iStack_1d8;
    ulong **ppuStack_1d0;
    code *pcStack_1c8;
    uint64_t uStack_1c0;
    ulong uStack_1b0;
    int64_t iStack_1a8;
    uint64_t uStack_1a0;
    uint64_t uStack_198;
    uint64_t uStack_190;
    uint64_t uStack_188;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    ulong uStack_138;
    int64_t *piStack_130;
    uint64_t uStack_128;
    uint64_t uStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uchar auStack_100 [12];
    uint32_t uStack_f4;
    uint64_t uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar21 = *(arg1 + 0x48);
    uVar12 = arg4;
    uVar17 = in_x4;
    uVar19 = in_x5;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar9 = arg3;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar12 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar5 = trace_event_ignore_this_pid(arg1), (uVar5 & 1) == 0))))
        goto code_r0x08004c44;
    }
    else {
code_r0x08004c44:
        puVar9 = 0x1c;
        iVar6 = trace_event_buffer_reserve(&uStack_88,arg1);
        if (iVar6 != 0) {
            *(iVar6 + 8) = arg2;
            *(iVar6 + 0xc) = arg3;
            *(iVar6 + 0x10) = arg4;
            *(iVar6 + 0x14) = in_x4;
            *(iVar6 + 0x18) = in_x5;
            trace_event_buffer_commit(&uStack_88);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar8 = auVar26._0_8_;
    *extraout_x18 = sym.perf_trace_cluster_pred_select;
    pcStack_d8 = sym.perf_trace_cluster_pred_select;
    iVar6 = sp_el0;
    iStack_e8 = *(iVar6 + 0x5e0);
    uVar15 = uVar19 & 0xffffffff;
    uVar16 = uVar17 & 0xffffffff;
    uVar18 = uVar12 & 0xffffffff;
    uVar22 = puVar9 & 0xffffffff;
    uStack_f0 = 0;
    uStack_f4 = 0;
    uVar25 = auVar26._8_8_ & 0xffffffff;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar8 + 0x78);
    uVar5 = uVar12;
    uVar13 = uVar17;
    uVar14 = uVar19;
    puStack_e0 = &stack0xffffffffffffffb0;
    if ((*(uVar8 + 0x80) != 0) || (puVar10 = puVar9, *piVar1 != 0)) {
        puVar10 = &uStack_f4;
        iVar6 = perf_trace_buf_alloc(0x1c,&uStack_f0);
        uVar20 = _trace_event_raw_init;
        if (iVar6 != 0) {
            *(uStack_f0 + 0xe8) = &puStack_e0;
            puVar10 = uStack_f4;
            uVar13 = 1;
            *(uStack_f0 + 0xf8) = auStack_100;
            *(uStack_f0 + 0x100) = ~(-1L << (uVar20 & 0x3f)) & 0x8004ca8;
            *(uStack_f0 + 0x108) = 5;
            *(iVar6 + 8) = auVar26._8_4_;
            *(iVar6 + 0xc) = puVar9;
            *(iVar6 + 0x10) = uVar12;
            *(iVar6 + 0x14) = uVar17;
            *(iVar6 + 0x18) = uVar19;
            uVar5 = uVar8;
            uVar14 = uStack_f0;
            perf_trace_run_bpf_submit(iVar6,0x1c);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar7 = auVar26._0_8_;
    uVar24 = tpidr_el2;
    *extraout_x18_00 = 0x8004de0;
    uStack_138 = 0x8004de0;
    iVar6 = sp_el0;
    iStack_148 = *(iVar6 + 0x5e0);
    uVar19 = auVar26._8_8_ & 0xffffffff;
    uVar24 = *(iVar7 + 0x48);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uVar21 = uVar24;
    uVar12 = uVar5;
    uVar17 = uVar13;
    ppuStack_140 = &puStack_e0;
    piStack_130 = piVar1;
    uStack_128 = uVar22;
    uStack_120 = uVar18;
    uStack_118 = uVar16;
    uStack_110 = uVar15;
    uStack_108 = uVar8;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar9 = puVar10;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar12 = 0;
            event_triggers_call(iVar7,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar8 = trace_event_ignore_this_pid(iVar7), (uVar8 & 1) == 0))))
        goto code_r0x08004e6c;
    }
    else {
code_r0x08004e6c:
        puVar9 = 0x18;
        iVar6 = trace_event_buffer_reserve(&uStack_178,iVar7);
        if (iVar6 != 0) {
            *(iVar6 + 8) = auVar26._8_4_;
            *(iVar6 + 0xc) = puVar10;
            *(iVar6 + 0x10) = uVar5;
            *(iVar6 + 0x14) = uVar13;
            trace_event_buffer_commit(&uStack_178);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_148) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar16 = auVar26._0_8_;
    *extraout_x18_01 = sym.perf_trace_cluster_pred_hist;
    pcStack_1c8 = sym.perf_trace_cluster_pred_hist;
    iVar6 = sp_el0;
    iStack_1d8 = *(iVar6 + 0x5e0);
    uVar18 = uVar17 & 0xffffffff;
    uVar22 = uVar12 & 0xffffffff;
    uVar20 = puVar9 & 0xffffffff;
    uVar23 = auVar26._8_8_ & 0xffffffff;
    uStack_1e0 = 0;
    uStack_1e4 = 0;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar16 + 0x78);
    uVar8 = uVar12;
    uVar15 = uVar17;
    ppuStack_1d0 = &ppuStack_140;
    uStack_1c0 = uVar25;
    uStack_1b0 = uVar24;
    iStack_1a8 = iVar7;
    uStack_1a0 = uVar19;
    uStack_198 = puVar10 & 0xffffffff;
    uStack_190 = uVar5 & 0xffffffff;
    uStack_188 = uVar13 & 0xffffffff;
    if ((*(uVar16 + 0x80) != 0) || (puVar11 = puVar9, *piVar1 != 0)) {
        puVar11 = &uStack_1e4;
        iVar6 = perf_trace_buf_alloc(0x1c,&uStack_1e0);
        uVar19 = _trace_event_raw_init;
        if (iVar6 != 0) {
            *(uStack_1e0 + 0xe8) = &ppuStack_1d0;
            puVar11 = uStack_1e4;
            uVar15 = 1;
            *(uStack_1e0 + 0xf8) = auStack_1f0;
            *(uStack_1e0 + 0x100) = ~(-1L << (uVar19 & 0x3f)) & 0x8004ec8;
            *(uStack_1e0 + 0x108) = 5;
            *(iVar6 + 8) = auVar26._8_4_;
            *(iVar6 + 0xc) = puVar9;
            *(iVar6 + 0x10) = uVar12;
            *(iVar6 + 0x14) = uVar17;
            uVar8 = uVar16;
            uVar14 = uStack_1e0;
            perf_trace_run_bpf_submit(iVar6,0x1c,puVar11,uVar16,1,uStack_1e0,piVar1,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_1d8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar7 = auVar26._0_8_;
    uVar24 = tpidr_el2;
    *extraout_x18_02 = 0x8004ff8;
    uStack_228 = 0x8004ff8;
    iVar6 = sp_el0;
    iStack_238 = *(iVar6 + 0x5e0);
    uVar17 = auVar26._8_8_ & 0xffffffff;
    uVar24 = *(iVar7 + 0x48);
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    uVar21 = uVar24;
    uVar12 = uVar8;
    ppuStack_230 = &ppuStack_1d0;
    uStack_220 = uVar23;
    uStack_210 = uVar20;
    uStack_208 = uVar22;
    uStack_200 = uVar18;
    uStack_1f8 = uVar16;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar9 = puVar11;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar12 = 0;
            event_triggers_call(iVar7,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar19 = trace_event_ignore_this_pid(iVar7), (uVar19 & 1) == 0))))
        goto code_r0x08005080;
    }
    else {
code_r0x08005080:
        puVar9 = 0x14;
        iVar6 = trace_event_buffer_reserve(&uStack_268,iVar7);
        if (iVar6 != 0) {
            *(iVar6 + 8) = auVar26._8_4_;
            *(iVar6 + 0xc) = puVar11;
            *(iVar6 + 0x10) = uVar8;
            trace_event_buffer_commit(&uStack_268);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_238) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar5 = auVar26._0_8_;
    *extraout_x18_03 = sym.perf_trace_cluster_exit;
    pcStack_2a8 = sym.perf_trace_cluster_exit;
    iVar6 = sp_el0;
    iStack_2b8 = *(iVar6 + 0x5e0);
    uVar13 = uVar12 & 0xffffffff;
    uVar16 = puVar9 & 0xffffffff;
    uVar18 = auVar26._8_8_ & 0xffffffff;
    uStack_2c0 = 0;
    uStack_2c4 = 0;
    iVar6 = tpidr_el1;
    piVar2 = iVar6 + *(uVar5 + 0x78);
    uVar19 = uVar12;
    ppuStack_2b0 = &ppuStack_230;
    piStack_2a0 = piVar1;
    uStack_298 = uVar24;
    iStack_290 = iVar7;
    uStack_288 = uVar17;
    uStack_280 = puVar11 & 0xffffffff;
    uStack_278 = uVar8 & 0xffffffff;
    if ((*(uVar5 + 0x80) != 0) || (puVar10 = puVar9, *piVar2 != 0)) {
        puVar10 = &uStack_2c4;
        iVar6 = perf_trace_buf_alloc(0x14,&uStack_2c0);
        uVar17 = _trace_event_raw_init;
        if (iVar6 != 0) {
            *(uStack_2c0 + 0xe8) = &ppuStack_2b0;
            puVar10 = uStack_2c4;
            uVar15 = 1;
            *(uStack_2c0 + 0xf8) = auStack_2d0;
            *(uStack_2c0 + 0x100) = ~(-1L << (uVar17 & 0x3f)) & 0x80050dc;
            *(uStack_2c0 + 0x108) = 5;
            *(iVar6 + 8) = auVar26._8_4_;
            *(iVar6 + 0xc) = puVar9;
            *(iVar6 + 0x10) = uVar12;
            uVar19 = uVar5;
            uVar14 = uStack_2c0;
            perf_trace_run_bpf_submit(iVar6,0x14,puVar10,uVar5,1,uStack_2c0,piVar2,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_2b8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar7 = auVar26._0_8_;
    uVar24 = tpidr_el2;
    *extraout_x18_04 = 0x8005200;
    uStack_308 = 0x8005200;
    iVar6 = sp_el0;
    iStack_318 = *(iVar6 + 0x5e0);
    uVar17 = auVar26._8_8_ & 0xffffffff;
    uVar24 = *(iVar7 + 0x48);
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_348 = 0;
    uStack_340 = 0;
    uVar21 = uVar24;
    uVar12 = uVar19;
    ppuStack_310 = &ppuStack_2b0;
    piStack_300 = piVar2;
    uStack_2f0 = uVar18;
    uStack_2e8 = uVar16;
    uStack_2e0 = uVar13;
    uStack_2d8 = uVar5;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar9 = puVar10;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar12 = 0;
            event_triggers_call(iVar7,0);
        }
        if (((uVar21 >> 6 & 1) != 0) ||
           (((uVar21 >> 9 & 1) != 0 && (uVar5 = trace_event_ignore_this_pid(iVar7), (uVar5 & 1) != 0))))
        goto code_r0x080052ac;
    }
    puVar9 = 0x14;
    iVar6 = trace_event_buffer_reserve(&uStack_348,iVar7);
    if (iVar6 != 0) {
        *(iVar6 + 8) = auVar26._8_4_;
        *(iVar6 + 0xc) = puVar10;
        *(iVar6 + 0x10) = uVar19;
        trace_event_buffer_commit(&uStack_348);
    }
code_r0x080052ac:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_318) {
        return;
    }
    auVar27 = __stack_chk_fail();
    uVar5 = auVar27._0_8_;
    *extraout_x18_05 = sym.perf_trace_cluster_enter;
    pcStack_388 = sym.perf_trace_cluster_enter;
    pcStack_380 = sym.perf_trace_cluster_exit;
    iVar6 = sp_el0;
    iStack_398 = *(iVar6 + 0x5e0);
    uVar4 = uVar12;
    uVar3 = SUB84(puVar9,0);
    uStack_3a0 = 0;
    uStack_3a4 = 0;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar5 + 0x78);
    ppuStack_390 = &ppuStack_310;
    uStack_378 = uVar24;
    iStack_370 = iVar7;
    uStack_368 = uVar17;
    uStack_360 = puVar10 & 0xffffffff;
    uStack_358 = uVar19 & 0xffffffff;
    if ((*(uVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar9 = &uStack_3a4;
        iVar6 = perf_trace_buf_alloc(0x14,&uStack_3a0,puVar9);
        uVar17 = _trace_event_raw_init;
        if (iVar6 != 0) {
            *(uStack_3a0 + 0xe8) = &ppuStack_390;
            puVar9 = uStack_3a4;
            uVar15 = 1;
            *(uStack_3a0 + 0xf8) = auStack_3b0;
            *(uStack_3a0 + 0x100) = ~(-1L << (uVar17 & 0x3f)) & 0x80052e4;
            *(uStack_3a0 + 0x108) = 5;
            *(iVar6 + 8) = auVar27._8_4_;
            *(iVar6 + 0xc) = uVar3;
            *(iVar6 + 0x10) = uVar4;
            uVar14 = uStack_3a0;
            perf_trace_run_bpf_submit(iVar6,0x14,puVar9,uVar5,1,uStack_3a0,piVar1,0);
            uVar12 = uVar5;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_398) {
        auVar26 = __stack_chk_fail();
        uVar24 = tpidr_el2;
        *extraout_x18_06 = 0x8005408;
        bpf_trace_run5(in_tmp_ldXn,auVar26._0_8_,auVar26._8_8_ & 0xffffffff,puVar9 & 0xffffffff,uVar12 & 0xffffffff
                       ,uVar15 & 0xffffffff,uVar14 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_cluster_pred_select @ 0x08004ca8 (size 324) =====

//WARNING: Removing unreachable block (ram,0x080051a8)
//WARNING: Removing unreachable block (ram,0x08004f9c)
//WARNING: Removing unreachable block (ram,0x080053b0)

void sym.perf_trace_cluster_pred_select(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint uVar3;
    uint uVar4;
    ulong in_tmp_ldXn;
    int64_t iVar5;
    int64_t iVar6;
    uchar *puVar7;
    uchar *puVar8;
    uchar *puVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t in_x4;
    uint64_t uVar12;
    uint64_t in_x5;
    uint64_t uVar13;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint32_t uVar21;
    uint64_t uVar22;
    uint64_t uVar23;
    ulong uVar24;
    uint64_t unaff_x30;
    uchar auVar25 [16];
    uchar auVar26 [12];
    uchar auStack_320 [12];
    uint32_t uStack_314;
    uint64_t uStack_310;
    int64_t iStack_308;
    uchar *puStack_300;
    code *pcStack_2f8;
    code *pcStack_2f0;
    ulong uStack_2e8;
    int64_t iStack_2e0;
    uint64_t uStack_2d8;
    uint64_t uStack_2d0;
    uint64_t uStack_2c8;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    int64_t iStack_288;
    uchar *puStack_280;
    ulong uStack_278;
    int64_t *piStack_270;
    uint64_t uStack_260;
    uint64_t uStack_258;
    uint64_t uStack_250;
    uint64_t uStack_248;
    uchar auStack_240 [12];
    uint32_t uStack_234;
    uint64_t uStack_230;
    int64_t iStack_228;
    uchar *puStack_220;
    code *pcStack_218;
    int64_t *piStack_210;
    ulong uStack_208;
    int64_t iStack_200;
    uint64_t uStack_1f8;
    uint64_t uStack_1f0;
    uint64_t uStack_1e8;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    int64_t iStack_1a8;
    uchar *puStack_1a0;
    ulong uStack_198;
    uint64_t uStack_190;
    uint64_t uStack_180;
    uint64_t uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    uchar auStack_160 [12];
    uint32_t uStack_154;
    uint64_t uStack_150;
    int64_t iStack_148;
    uchar *puStack_140;
    code *pcStack_138;
    uint64_t uStack_130;
    ulong uStack_120;
    int64_t iStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    int64_t *piStack_a0;
    uint64_t uStack_98;
    uint64_t uStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    uVar14 = in_x5 & 0xffffffff;
    uVar15 = in_x4 & 0xffffffff;
    uVar18 = arg4 & 0xffffffff;
    uVar22 = arg3 & 0xffffffff;
    uStack_60 = 0;
    uStack_64 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(arg1 + 0x78);
    uVar11 = arg4;
    uVar12 = in_x4;
    uVar13 = in_x5;
    if ((*(arg1 + 0x80) != 0) || (puVar7 = arg3, *piVar1 != 0)) {
        puVar7 = &stack0xffffffffffffff9c;
        iVar5 = perf_trace_buf_alloc(0x1c,&stack0xffffffffffffffa0);
        uVar10 = _trace_event_raw_init;
        if (iVar5 != 0) {
            *(uStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            puVar7 = uStack_64;
            uVar13 = -1L << (uVar10 & 0x3f);
            uVar12 = 1;
            uVar11 = (~uVar13 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar11 = uVar13 | unaff_x30;
            }
            *(uStack_60 + 0xf8) = &stack0xffffffffffffff90;
            *(uStack_60 + 0x100) = uVar11;
            *(uStack_60 + 0x108) = 5;
            *(iVar5 + 8) = arg2;
            *(iVar5 + 0xc) = arg3;
            *(iVar5 + 0x10) = arg4;
            *(iVar5 + 0x14) = in_x4;
            *(iVar5 + 0x18) = in_x5;
            uVar11 = arg1;
            uVar13 = uStack_60;
            perf_trace_run_bpf_submit(iVar5,0x1c);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar6 = auVar25._0_8_;
    uVar24 = tpidr_el2;
    *extraout_x18 = 0x8004de0;
    uStack_a8 = 0x8004de0;
    iVar5 = sp_el0;
    iStack_b8 = *(iVar5 + 0x5e0);
    uVar19 = auVar25._8_8_ & 0xffffffff;
    uVar24 = *(iVar6 + 0x48);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar21 = uVar24;
    uVar10 = uVar11;
    uVar17 = uVar12;
    puStack_b0 = &stack0xffffffffffffffb0;
    piStack_a0 = piVar1;
    uStack_98 = uVar22;
    uStack_90 = uVar18;
    uStack_88 = uVar15;
    uStack_80 = uVar14;
    iStack_78 = arg1;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar8 = puVar7;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar10 = 0;
            event_triggers_call(iVar6,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar14 = trace_event_ignore_this_pid(iVar6), (uVar14 & 1) == 0))))
        goto code_r0x08004e6c;
    }
    else {
code_r0x08004e6c:
        puVar8 = 0x18;
        iVar5 = trace_event_buffer_reserve(&stack0xffffffffffffff18,iVar6);
        if (iVar5 != 0) {
            *(iVar5 + 8) = auVar25._8_4_;
            *(iVar5 + 0xc) = puVar7;
            *(iVar5 + 0x10) = uVar11;
            *(iVar5 + 0x14) = uVar12;
            trace_event_buffer_commit(&stack0xffffffffffffff18);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar18 = auVar25._0_8_;
    *extraout_x18_00 = sym.perf_trace_cluster_pred_hist;
    pcStack_138 = sym.perf_trace_cluster_pred_hist;
    iVar5 = sp_el0;
    iStack_148 = *(iVar5 + 0x5e0);
    uVar22 = uVar17 & 0xffffffff;
    uVar16 = uVar10 & 0xffffffff;
    uVar20 = puVar8 & 0xffffffff;
    uVar23 = auVar25._8_8_ & 0xffffffff;
    uStack_150 = 0;
    uStack_154 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(uVar18 + 0x78);
    uVar14 = uVar10;
    uVar15 = uVar17;
    puStack_140 = &stack0xffffffffffffff50;
    uStack_130 = arg2 & 0xffffffff;
    uStack_120 = uVar24;
    iStack_118 = iVar6;
    uStack_110 = uVar19;
    uStack_108 = puVar7 & 0xffffffff;
    uStack_100 = uVar11 & 0xffffffff;
    uStack_f8 = uVar12 & 0xffffffff;
    if ((*(uVar18 + 0x80) != 0) || (puVar9 = puVar8, *piVar1 != 0)) {
        puVar9 = &stack0xfffffffffffffeac;
        iVar5 = perf_trace_buf_alloc(0x1c,&stack0xfffffffffffffeb0);
        uVar11 = _trace_event_raw_init;
        if (iVar5 != 0) {
            *(uStack_150 + 0xe8) = &stack0xfffffffffffffec0;
            puVar9 = uStack_154;
            uVar15 = 1;
            *(uStack_150 + 0xf8) = &stack0xfffffffffffffea0;
            *(uStack_150 + 0x100) = ~(-1L << (uVar11 & 0x3f)) & 0x8004ec8;
            *(uStack_150 + 0x108) = 5;
            *(iVar5 + 8) = auVar25._8_4_;
            *(iVar5 + 0xc) = puVar8;
            *(iVar5 + 0x10) = uVar10;
            *(iVar5 + 0x14) = uVar17;
            uVar14 = uVar18;
            uVar13 = uStack_150;
            perf_trace_run_bpf_submit(iVar5,0x1c,puVar9,uVar18,1,uStack_150,piVar1,0);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_148) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar6 = auVar25._0_8_;
    uVar24 = tpidr_el2;
    *extraout_x18_01 = 0x8004ff8;
    uStack_198 = 0x8004ff8;
    iVar5 = sp_el0;
    iStack_1a8 = *(iVar5 + 0x5e0);
    uVar12 = auVar25._8_8_ & 0xffffffff;
    uVar24 = *(iVar6 + 0x48);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uVar21 = uVar24;
    uVar11 = uVar14;
    puStack_1a0 = &stack0xfffffffffffffec0;
    uStack_190 = uVar23;
    uStack_180 = uVar20;
    uStack_178 = uVar16;
    uStack_170 = uVar22;
    uStack_168 = uVar18;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar7 = puVar9;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar7 = NULL;
            uVar11 = 0;
            event_triggers_call(iVar6,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar18 = trace_event_ignore_this_pid(iVar6), (uVar18 & 1) == 0))))
        goto code_r0x08005080;
    }
    else {
code_r0x08005080:
        puVar7 = 0x14;
        iVar5 = trace_event_buffer_reserve(&stack0xfffffffffffffe28,iVar6);
        if (iVar5 != 0) {
            *(iVar5 + 8) = auVar25._8_4_;
            *(iVar5 + 0xc) = puVar9;
            *(iVar5 + 0x10) = uVar14;
            trace_event_buffer_commit(&stack0xfffffffffffffe28);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_1a8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar22 = auVar25._0_8_;
    *extraout_x18_02 = sym.perf_trace_cluster_exit;
    pcStack_218 = sym.perf_trace_cluster_exit;
    iVar5 = sp_el0;
    iStack_228 = *(iVar5 + 0x5e0);
    uVar10 = uVar11 & 0xffffffff;
    uVar17 = puVar7 & 0xffffffff;
    uVar19 = auVar25._8_8_ & 0xffffffff;
    uStack_230 = 0;
    uStack_234 = 0;
    iVar5 = tpidr_el1;
    piVar2 = iVar5 + *(uVar22 + 0x78);
    uVar18 = uVar11;
    puStack_220 = &stack0xfffffffffffffe60;
    piStack_210 = piVar1;
    uStack_208 = uVar24;
    iStack_200 = iVar6;
    uStack_1f8 = uVar12;
    uStack_1f0 = puVar9 & 0xffffffff;
    uStack_1e8 = uVar14 & 0xffffffff;
    if ((*(uVar22 + 0x80) != 0) || (puVar8 = puVar7, *piVar2 != 0)) {
        puVar8 = &stack0xfffffffffffffdcc;
        iVar5 = perf_trace_buf_alloc(0x14,&stack0xfffffffffffffdd0);
        uVar12 = _trace_event_raw_init;
        if (iVar5 != 0) {
            *(uStack_230 + 0xe8) = &stack0xfffffffffffffde0;
            puVar8 = uStack_234;
            uVar15 = 1;
            *(uStack_230 + 0xf8) = &stack0xfffffffffffffdc0;
            *(uStack_230 + 0x100) = ~(-1L << (uVar12 & 0x3f)) & 0x80050dc;
            *(uStack_230 + 0x108) = 5;
            *(iVar5 + 8) = auVar25._8_4_;
            *(iVar5 + 0xc) = puVar7;
            *(iVar5 + 0x10) = uVar11;
            uVar18 = uVar22;
            uVar13 = uStack_230;
            perf_trace_run_bpf_submit(iVar5,0x14,puVar8,uVar22,1,uStack_230,piVar2,0);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_228) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar6 = auVar25._0_8_;
    uVar24 = tpidr_el2;
    *extraout_x18_03 = 0x8005200;
    uStack_278 = 0x8005200;
    iVar5 = sp_el0;
    iStack_288 = *(iVar5 + 0x5e0);
    uVar12 = auVar25._8_8_ & 0xffffffff;
    uVar24 = *(iVar6 + 0x48);
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uVar21 = uVar24;
    uVar11 = uVar18;
    puStack_280 = &stack0xfffffffffffffde0;
    piStack_270 = piVar2;
    uStack_260 = uVar19;
    uStack_258 = uVar17;
    uStack_250 = uVar10;
    uStack_248 = uVar22;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar7 = puVar8;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar7 = NULL;
            uVar11 = 0;
            event_triggers_call(iVar6,0);
        }
        if (((uVar21 >> 6 & 1) != 0) ||
           (((uVar21 >> 9 & 1) != 0 && (uVar14 = trace_event_ignore_this_pid(iVar6), (uVar14 & 1) != 0))))
        goto code_r0x080052ac;
    }
    puVar7 = 0x14;
    iVar5 = trace_event_buffer_reserve(&stack0xfffffffffffffd48,iVar6);
    if (iVar5 != 0) {
        *(iVar5 + 8) = auVar25._8_4_;
        *(iVar5 + 0xc) = puVar8;
        *(iVar5 + 0x10) = uVar18;
        trace_event_buffer_commit(&stack0xfffffffffffffd48);
    }
code_r0x080052ac:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_288) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar14 = auVar26._0_8_;
    *extraout_x18_04 = sym.perf_trace_cluster_enter;
    pcStack_2f8 = sym.perf_trace_cluster_enter;
    pcStack_2f0 = sym.perf_trace_cluster_exit;
    iVar5 = sp_el0;
    iStack_308 = *(iVar5 + 0x5e0);
    uVar4 = uVar11;
    uVar3 = SUB84(puVar7,0);
    uStack_310 = 0;
    uStack_314 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(uVar14 + 0x78);
    puStack_300 = &stack0xfffffffffffffd80;
    uStack_2e8 = uVar24;
    iStack_2e0 = iVar6;
    uStack_2d8 = uVar12;
    uStack_2d0 = puVar8 & 0xffffffff;
    uStack_2c8 = uVar18 & 0xffffffff;
    if ((*(uVar14 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar7 = &stack0xfffffffffffffcec;
        iVar5 = perf_trace_buf_alloc(0x14,&stack0xfffffffffffffcf0,puVar7);
        uVar12 = _trace_event_raw_init;
        if (iVar5 != 0) {
            *(uStack_310 + 0xe8) = &stack0xfffffffffffffd00;
            puVar7 = uStack_314;
            uVar15 = 1;
            *(uStack_310 + 0xf8) = &stack0xfffffffffffffce0;
            *(uStack_310 + 0x100) = ~(-1L << (uVar12 & 0x3f)) & 0x80052e4;
            *(uStack_310 + 0x108) = 5;
            *(iVar5 + 8) = auVar26._8_4_;
            *(iVar5 + 0xc) = uVar3;
            *(iVar5 + 0x10) = uVar4;
            uVar13 = uStack_310;
            perf_trace_run_bpf_submit(iVar5,0x14,puVar7,uVar14,1,uStack_310,piVar1,0);
            uVar11 = uVar14;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_308) {
        auVar25 = __stack_chk_fail();
        uVar24 = tpidr_el2;
        *extraout_x18_05 = 0x8005408;
        bpf_trace_run5(in_tmp_ldXn,auVar25._0_8_,auVar25._8_8_ & 0xffffffff,puVar7 & 0xffffffff,uVar11 & 0xffffffff
                       ,uVar15 & 0xffffffff,uVar13 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_cluster_pred_hist @ 0x08004dec (size 220) =====

//WARNING: Removing unreachable block (ram,0x080051a8)
//WARNING: Removing unreachable block (ram,0x08004f9c)
//WARNING: Removing unreachable block (ram,0x080053b0)

void sym.trace_event_raw_event_cluster_pred_hist(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint uVar3;
    uint uVar4;
    uint64_t uVar5;
    ulong in_tmp_ldXn;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint32_t *puVar12;
    uint64_t uVar13;
    uint64_t in_x4;
    uint64_t uVar14;
    uint64_t in_x5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint32_t uVar19;
    uint64_t uVar20;
    ulong uVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    uchar auVar23 [12];
    uchar auStack_2b0 [12];
    uint32_t uStack_2a4;
    uint64_t uStack_2a0;
    int64_t iStack_298;
    ulong **ppuStack_290;
    code *pcStack_288;
    code *pcStack_280;
    ulong uStack_278;
    int64_t iStack_270;
    uint64_t uStack_268;
    uint64_t uStack_260;
    uint64_t uStack_258;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    int64_t iStack_218;
    ulong **ppuStack_210;
    ulong uStack_208;
    int64_t *piStack_200;
    uint64_t uStack_1f0;
    uint64_t uStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uchar auStack_1d0 [12];
    uint32_t uStack_1c4;
    uint64_t uStack_1c0;
    int64_t iStack_1b8;
    ulong **ppuStack_1b0;
    code *pcStack_1a8;
    int64_t *piStack_1a0;
    ulong uStack_198;
    int64_t iStack_190;
    uint64_t uStack_188;
    uint64_t uStack_180;
    uint64_t uStack_178;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    ulong uStack_128;
    uint64_t uStack_120;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    uchar auStack_f0 [12];
    uint32_t uStack_e4;
    uint64_t uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar19 = *(arg1 + 0x48);
    uVar13 = arg4;
    uVar17 = in_x4;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar10 = arg3;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar13 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar6 = trace_event_ignore_this_pid(arg1), (uVar6 & 1) == 0))))
        goto code_r0x08004e6c;
    }
    else {
code_r0x08004e6c:
        puVar10 = 0x18;
        iVar7 = trace_event_buffer_reserve(&uStack_78,arg1);
        if (iVar7 != 0) {
            *(iVar7 + 8) = arg2;
            *(iVar7 + 0xc) = arg3;
            *(iVar7 + 0x10) = arg4;
            *(iVar7 + 0x14) = in_x4;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return;
    }
    auVar22 = __stack_chk_fail();
    uVar9 = auVar22._0_8_;
    *extraout_x18 = sym.perf_trace_cluster_pred_hist;
    pcStack_c8 = sym.perf_trace_cluster_pred_hist;
    iVar7 = sp_el0;
    iStack_d8 = *(iVar7 + 0x5e0);
    uVar15 = uVar17 & 0xffffffff;
    uVar16 = uVar13 & 0xffffffff;
    uVar18 = puVar10 & 0xffffffff;
    uVar20 = auVar22._8_8_ & 0xffffffff;
    uStack_e0 = 0;
    uStack_e4 = 0;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar9 + 0x78);
    uVar6 = uVar13;
    uVar14 = uVar17;
    puStack_d0 = &stack0xffffffffffffffc0;
    if ((*(uVar9 + 0x80) != 0) || (puVar11 = puVar10, *piVar1 != 0)) {
        puVar11 = &uStack_e4;
        iVar7 = perf_trace_buf_alloc(0x1c,&uStack_e0);
        uVar5 = _trace_event_raw_init;
        if (iVar7 != 0) {
            *(uStack_e0 + 0xe8) = &puStack_d0;
            puVar11 = uStack_e4;
            uVar14 = 1;
            *(uStack_e0 + 0xf8) = auStack_f0;
            *(uStack_e0 + 0x100) = ~(-1L << (uVar5 & 0x3f)) & 0x8004ec8;
            *(uStack_e0 + 0x108) = 5;
            *(iVar7 + 8) = auVar22._8_4_;
            *(iVar7 + 0xc) = puVar10;
            *(iVar7 + 0x10) = uVar13;
            *(iVar7 + 0x14) = uVar17;
            uVar6 = uVar9;
            in_x5 = uStack_e0;
            perf_trace_run_bpf_submit(iVar7,0x1c,puVar11,uVar9,1,uStack_e0,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar8 = auVar22._0_8_;
    uVar21 = tpidr_el2;
    *extraout_x18_00 = 0x8004ff8;
    uStack_128 = 0x8004ff8;
    iVar7 = sp_el0;
    iStack_138 = *(iVar7 + 0x5e0);
    uVar17 = auVar22._8_8_ & 0xffffffff;
    uVar21 = *(iVar8 + 0x48);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uVar19 = uVar21;
    uVar13 = uVar6;
    ppuStack_130 = &puStack_d0;
    uStack_120 = uVar20;
    uStack_110 = uVar18;
    uStack_108 = uVar16;
    uStack_100 = uVar15;
    uStack_f8 = uVar9;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar10 = puVar11;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar13 = 0;
            event_triggers_call(iVar8,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar9 = trace_event_ignore_this_pid(iVar8), (uVar9 & 1) == 0))))
        goto code_r0x08005080;
    }
    else {
code_r0x08005080:
        puVar10 = 0x14;
        iVar7 = trace_event_buffer_reserve(&uStack_168,iVar8);
        if (iVar7 != 0) {
            *(iVar7 + 8) = auVar22._8_4_;
            *(iVar7 + 0xc) = puVar11;
            *(iVar7 + 0x10) = uVar6;
            trace_event_buffer_commit(&uStack_168);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_138) {
        return;
    }
    auVar22 = __stack_chk_fail();
    uVar15 = auVar22._0_8_;
    *extraout_x18_01 = sym.perf_trace_cluster_exit;
    pcStack_1a8 = sym.perf_trace_cluster_exit;
    iVar7 = sp_el0;
    iStack_1b8 = *(iVar7 + 0x5e0);
    uVar16 = uVar13 & 0xffffffff;
    uVar18 = puVar10 & 0xffffffff;
    uVar20 = auVar22._8_8_ & 0xffffffff;
    uStack_1c0 = 0;
    uStack_1c4 = 0;
    iVar7 = tpidr_el1;
    piVar2 = iVar7 + *(uVar15 + 0x78);
    uVar9 = uVar13;
    ppuStack_1b0 = &ppuStack_130;
    piStack_1a0 = piVar1;
    uStack_198 = uVar21;
    iStack_190 = iVar8;
    uStack_188 = uVar17;
    uStack_180 = puVar11 & 0xffffffff;
    uStack_178 = uVar6 & 0xffffffff;
    if ((*(uVar15 + 0x80) != 0) || (puVar12 = puVar10, *piVar2 != 0)) {
        puVar12 = &uStack_1c4;
        iVar7 = perf_trace_buf_alloc(0x14,&uStack_1c0);
        uVar17 = _trace_event_raw_init;
        if (iVar7 != 0) {
            *(uStack_1c0 + 0xe8) = &ppuStack_1b0;
            puVar12 = uStack_1c4;
            uVar14 = 1;
            *(uStack_1c0 + 0xf8) = auStack_1d0;
            *(uStack_1c0 + 0x100) = ~(-1L << (uVar17 & 0x3f)) & 0x80050dc;
            *(uStack_1c0 + 0x108) = 5;
            *(iVar7 + 8) = auVar22._8_4_;
            *(iVar7 + 0xc) = puVar10;
            *(iVar7 + 0x10) = uVar13;
            uVar9 = uVar15;
            in_x5 = uStack_1c0;
            perf_trace_run_bpf_submit(iVar7,0x14,puVar12,uVar15,1,uStack_1c0,piVar2,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar8 = auVar22._0_8_;
    uVar21 = tpidr_el2;
    *extraout_x18_02 = 0x8005200;
    uStack_208 = 0x8005200;
    iVar7 = sp_el0;
    iStack_218 = *(iVar7 + 0x5e0);
    uVar17 = auVar22._8_8_ & 0xffffffff;
    uVar21 = *(iVar8 + 0x48);
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uVar19 = uVar21;
    uVar13 = uVar9;
    ppuStack_210 = &ppuStack_1b0;
    piStack_200 = piVar2;
    uStack_1f0 = uVar20;
    uStack_1e8 = uVar18;
    uStack_1e0 = uVar16;
    uStack_1d8 = uVar15;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar10 = puVar12;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar13 = 0;
            event_triggers_call(iVar8,0);
        }
        if (((uVar19 >> 6 & 1) != 0) ||
           (((uVar19 >> 9 & 1) != 0 && (uVar6 = trace_event_ignore_this_pid(iVar8), (uVar6 & 1) != 0))))
        goto code_r0x080052ac;
    }
    puVar10 = 0x14;
    iVar7 = trace_event_buffer_reserve(&uStack_248,iVar8);
    if (iVar7 != 0) {
        *(iVar7 + 8) = auVar22._8_4_;
        *(iVar7 + 0xc) = puVar12;
        *(iVar7 + 0x10) = uVar9;
        trace_event_buffer_commit(&uStack_248);
    }
code_r0x080052ac:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_218) {
        return;
    }
    auVar23 = __stack_chk_fail();
    uVar6 = auVar23._0_8_;
    *extraout_x18_03 = sym.perf_trace_cluster_enter;
    pcStack_288 = sym.perf_trace_cluster_enter;
    pcStack_280 = sym.perf_trace_cluster_exit;
    iVar7 = sp_el0;
    iStack_298 = *(iVar7 + 0x5e0);
    uVar4 = uVar13;
    uVar3 = SUB84(puVar10,0);
    uStack_2a0 = 0;
    uStack_2a4 = 0;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar6 + 0x78);
    ppuStack_290 = &ppuStack_210;
    uStack_278 = uVar21;
    iStack_270 = iVar8;
    uStack_268 = uVar17;
    uStack_260 = puVar12 & 0xffffffff;
    uStack_258 = uVar9 & 0xffffffff;
    if ((*(uVar6 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar10 = &uStack_2a4;
        iVar7 = perf_trace_buf_alloc(0x14,&uStack_2a0,puVar10);
        uVar17 = _trace_event_raw_init;
        if (iVar7 != 0) {
            *(uStack_2a0 + 0xe8) = &ppuStack_290;
            puVar10 = uStack_2a4;
            uVar14 = 1;
            *(uStack_2a0 + 0xf8) = auStack_2b0;
            *(uStack_2a0 + 0x100) = ~(-1L << (uVar17 & 0x3f)) & 0x80052e4;
            *(uStack_2a0 + 0x108) = 5;
            *(iVar7 + 8) = auVar23._8_4_;
            *(iVar7 + 0xc) = uVar3;
            *(iVar7 + 0x10) = uVar4;
            in_x5 = uStack_2a0;
            perf_trace_run_bpf_submit(iVar7,0x14,puVar10,uVar6,1,uStack_2a0,piVar1,0);
            uVar13 = uVar6;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_298) {
        auVar22 = __stack_chk_fail();
        uVar21 = tpidr_el2;
        *extraout_x18_04 = 0x8005408;
        bpf_trace_run5(in_tmp_ldXn,auVar22._0_8_,auVar22._8_8_ & 0xffffffff,puVar10 & 0xffffffff,uVar13 & 0xffffffff
                       ,uVar14 & 0xffffffff,in_x5 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_cluster_pred_hist @ 0x08004ec8 (size 316) =====

//WARNING: Removing unreachable block (ram,0x080051a8)
//WARNING: Removing unreachable block (ram,0x080053b0)

void sym.perf_trace_cluster_pred_hist(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint uVar3;
    uint uVar4;
    ulong in_tmp_ldXn;
    int64_t iVar5;
    int64_t iVar6;
    uchar *puVar7;
    uchar *puVar8;
    uchar *puVar9;
    uint64_t uVar10;
    uint64_t in_x4;
    uint64_t uVar11;
    uint64_t in_x5;
    uint64_t uVar12;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    ulong uVar20;
    uint64_t unaff_x30;
    uchar auVar21 [16];
    uchar auVar22 [12];
    uchar auStack_230 [12];
    uint32_t uStack_224;
    uint64_t uStack_220;
    int64_t iStack_218;
    uchar *puStack_210;
    code *pcStack_208;
    code *pcStack_200;
    ulong uStack_1f8;
    int64_t iStack_1f0;
    uint64_t uStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    int64_t iStack_198;
    uchar *puStack_190;
    ulong uStack_188;
    int64_t *piStack_180;
    uint64_t uStack_170;
    uint64_t uStack_168;
    uint64_t uStack_160;
    uint64_t uStack_158;
    uchar auStack_150 [12];
    uint32_t uStack_144;
    uint64_t uStack_140;
    int64_t iStack_138;
    uchar *puStack_130;
    code *pcStack_128;
    int64_t *piStack_120;
    ulong uStack_118;
    int64_t iStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    uint64_t uStack_a0;
    uint64_t uStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    uVar13 = in_x4 & 0xffffffff;
    uVar14 = arg4 & 0xffffffff;
    uVar16 = arg3 & 0xffffffff;
    uVar19 = arg2 & 0xffffffff;
    uStack_60 = 0;
    uStack_64 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(arg1 + 0x78);
    uVar10 = arg4;
    uVar11 = in_x4;
    if ((*(arg1 + 0x80) != 0) || (puVar7 = arg3, *piVar1 != 0)) {
        puVar7 = &stack0xffffffffffffff9c;
        iVar5 = perf_trace_buf_alloc(0x1c,&stack0xffffffffffffffa0);
        uVar12 = _trace_event_raw_init;
        if (iVar5 != 0) {
            *(uStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            puVar7 = uStack_64;
            uVar12 = -1L << (uVar12 & 0x3f);
            uVar11 = 1;
            uVar10 = (~uVar12 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar10 = uVar12 | unaff_x30;
            }
            *(uStack_60 + 0xf8) = &stack0xffffffffffffff90;
            *(uStack_60 + 0x100) = uVar10;
            *(uStack_60 + 0x108) = 5;
            *(iVar5 + 8) = arg2;
            *(iVar5 + 0xc) = arg3;
            *(iVar5 + 0x10) = arg4;
            *(iVar5 + 0x14) = in_x4;
            uVar10 = arg1;
            in_x5 = uStack_60;
            perf_trace_run_bpf_submit(iVar5,0x1c,puVar7,arg1,1,uStack_60,piVar1,0);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar6 = auVar21._0_8_;
    uVar20 = tpidr_el2;
    *extraout_x18 = 0x8004ff8;
    uStack_a8 = 0x8004ff8;
    iVar5 = sp_el0;
    iStack_b8 = *(iVar5 + 0x5e0);
    uVar15 = auVar21._8_8_ & 0xffffffff;
    uVar20 = *(iVar6 + 0x48);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar18 = uVar20;
    uVar12 = uVar10;
    puStack_b0 = &stack0xffffffffffffffb0;
    uStack_a0 = uVar19;
    uStack_90 = uVar16;
    uStack_88 = uVar14;
    uStack_80 = uVar13;
    iStack_78 = arg1;
    if ((uVar18 >> 8 & 1) == 0) {
        puVar8 = puVar7;
        if ((uVar18 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar12 = 0;
            event_triggers_call(iVar6,0);
        }
        if (((uVar18 >> 6 & 1) == 0) &&
           (((uVar18 >> 9 & 1) == 0 || (uVar13 = trace_event_ignore_this_pid(iVar6), (uVar13 & 1) == 0))))
        goto code_r0x08005080;
    }
    else {
code_r0x08005080:
        puVar8 = 0x14;
        iVar5 = trace_event_buffer_reserve(&stack0xffffffffffffff18,iVar6);
        if (iVar5 != 0) {
            *(iVar5 + 8) = auVar21._8_4_;
            *(iVar5 + 0xc) = puVar7;
            *(iVar5 + 0x10) = uVar10;
            trace_event_buffer_commit(&stack0xffffffffffffff18);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar21 = __stack_chk_fail();
    uVar14 = auVar21._0_8_;
    *extraout_x18_00 = sym.perf_trace_cluster_exit;
    pcStack_128 = sym.perf_trace_cluster_exit;
    iVar5 = sp_el0;
    iStack_138 = *(iVar5 + 0x5e0);
    uVar16 = uVar12 & 0xffffffff;
    uVar19 = puVar8 & 0xffffffff;
    uVar17 = auVar21._8_8_ & 0xffffffff;
    uStack_140 = 0;
    uStack_144 = 0;
    iVar5 = tpidr_el1;
    piVar2 = iVar5 + *(uVar14 + 0x78);
    uVar13 = uVar12;
    puStack_130 = &stack0xffffffffffffff50;
    piStack_120 = piVar1;
    uStack_118 = uVar20;
    iStack_110 = iVar6;
    uStack_108 = uVar15;
    uStack_100 = puVar7 & 0xffffffff;
    uStack_f8 = uVar10 & 0xffffffff;
    if ((*(uVar14 + 0x80) != 0) || (puVar9 = puVar8, *piVar2 != 0)) {
        puVar9 = &stack0xfffffffffffffebc;
        iVar5 = perf_trace_buf_alloc(0x14,&stack0xfffffffffffffec0);
        uVar10 = _trace_event_raw_init;
        if (iVar5 != 0) {
            *(uStack_140 + 0xe8) = &stack0xfffffffffffffed0;
            puVar9 = uStack_144;
            uVar11 = 1;
            *(uStack_140 + 0xf8) = &stack0xfffffffffffffeb0;
            *(uStack_140 + 0x100) = ~(-1L << (uVar10 & 0x3f)) & 0x80050dc;
            *(uStack_140 + 0x108) = 5;
            *(iVar5 + 8) = auVar21._8_4_;
            *(iVar5 + 0xc) = puVar8;
            *(iVar5 + 0x10) = uVar12;
            uVar13 = uVar14;
            in_x5 = uStack_140;
            perf_trace_run_bpf_submit(iVar5,0x14,puVar9,uVar14,1,uStack_140,piVar2,0);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_138) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar6 = auVar21._0_8_;
    uVar20 = tpidr_el2;
    *extraout_x18_01 = 0x8005200;
    uStack_188 = 0x8005200;
    iVar5 = sp_el0;
    iStack_198 = *(iVar5 + 0x5e0);
    uVar12 = auVar21._8_8_ & 0xffffffff;
    uVar20 = *(iVar6 + 0x48);
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uVar18 = uVar20;
    uVar10 = uVar13;
    puStack_190 = &stack0xfffffffffffffed0;
    piStack_180 = piVar2;
    uStack_170 = uVar17;
    uStack_168 = uVar19;
    uStack_160 = uVar16;
    uStack_158 = uVar14;
    if ((uVar18 >> 8 & 1) == 0) {
        puVar7 = puVar9;
        if ((uVar18 >> 7 & 1) != 0) {
            puVar7 = NULL;
            uVar10 = 0;
            event_triggers_call(iVar6,0);
        }
        if (((uVar18 >> 6 & 1) != 0) ||
           (((uVar18 >> 9 & 1) != 0 && (uVar14 = trace_event_ignore_this_pid(iVar6), (uVar14 & 1) != 0))))
        goto code_r0x080052ac;
    }
    puVar7 = 0x14;
    iVar5 = trace_event_buffer_reserve(&stack0xfffffffffffffe38,iVar6);
    if (iVar5 != 0) {
        *(iVar5 + 8) = auVar21._8_4_;
        *(iVar5 + 0xc) = puVar9;
        *(iVar5 + 0x10) = uVar13;
        trace_event_buffer_commit(&stack0xfffffffffffffe38);
    }
code_r0x080052ac:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_198) {
        return;
    }
    auVar22 = __stack_chk_fail();
    uVar14 = auVar22._0_8_;
    *extraout_x18_02 = sym.perf_trace_cluster_enter;
    pcStack_208 = sym.perf_trace_cluster_enter;
    pcStack_200 = sym.perf_trace_cluster_exit;
    iVar5 = sp_el0;
    iStack_218 = *(iVar5 + 0x5e0);
    uVar4 = uVar10;
    uVar3 = SUB84(puVar7,0);
    uStack_220 = 0;
    uStack_224 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(uVar14 + 0x78);
    puStack_210 = &stack0xfffffffffffffe70;
    uStack_1f8 = uVar20;
    iStack_1f0 = iVar6;
    uStack_1e8 = uVar12;
    uStack_1e0 = puVar9 & 0xffffffff;
    uStack_1d8 = uVar13 & 0xffffffff;
    if ((*(uVar14 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar7 = &stack0xfffffffffffffddc;
        iVar5 = perf_trace_buf_alloc(0x14,&stack0xfffffffffffffde0,puVar7);
        uVar13 = _trace_event_raw_init;
        if (iVar5 != 0) {
            *(uStack_220 + 0xe8) = &stack0xfffffffffffffdf0;
            puVar7 = uStack_224;
            uVar11 = 1;
            *(uStack_220 + 0xf8) = &stack0xfffffffffffffdd0;
            *(uStack_220 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x80052e4;
            *(uStack_220 + 0x108) = 5;
            *(iVar5 + 8) = auVar22._8_4_;
            *(iVar5 + 0xc) = uVar3;
            *(iVar5 + 0x10) = uVar4;
            in_x5 = uStack_220;
            perf_trace_run_bpf_submit(iVar5,0x14,puVar7,uVar14,1,uStack_220,piVar1,0);
            uVar10 = uVar14;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_218) {
        auVar21 = __stack_chk_fail();
        uVar20 = tpidr_el2;
        *extraout_x18_03 = 0x8005408;
        bpf_trace_run5(in_tmp_ldXn,auVar21._0_8_,auVar21._8_8_ & 0xffffffff,puVar7 & 0xffffffff,uVar10 & 0xffffffff
                       ,uVar11 & 0xffffffff,in_x5 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_cluster_exit @ 0x08005004 (size 216) =====

//WARNING: Removing unreachable block (ram,0x080051a8)
//WARNING: Removing unreachable block (ram,0x080053b0)

void sym.trace_event_raw_event_cluster_exit(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint uVar2;
    uint uVar3;
    ulong in_tmp_ldXn;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint64_t uVar10;
    uint64_t in_x4;
    uint64_t in_x5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint32_t uVar15;
    ulong uVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    uchar auVar18 [12];
    uchar auStack_1c0 [12];
    uint32_t uStack_1b4;
    uint64_t uStack_1b0;
    int64_t iStack_1a8;
    ulong **ppuStack_1a0;
    code *pcStack_198;
    code *pcStack_190;
    ulong uStack_188;
    int64_t iStack_180;
    uint64_t uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    int64_t iStack_128;
    uchar **ppuStack_120;
    ulong uStack_118;
    int64_t *piStack_110;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    uchar auStack_e0 [12];
    uint32_t uStack_d4;
    uint64_t uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar15 = *(arg1 + 0x48);
    uVar10 = arg4;
    if ((uVar15 >> 8 & 1) == 0) {
        puVar8 = arg3;
        if ((uVar15 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar10 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar15 >> 6 & 1) == 0) &&
           (((uVar15 >> 9 & 1) == 0 || (uVar4 = trace_event_ignore_this_pid(arg1), (uVar4 & 1) == 0))))
        goto code_r0x08005080;
    }
    else {
code_r0x08005080:
        puVar8 = 0x14;
        iVar5 = trace_event_buffer_reserve(&uStack_78,arg1);
        if (iVar5 != 0) {
            *(iVar5 + 8) = arg2;
            *(iVar5 + 0xc) = arg3;
            *(iVar5 + 0x10) = arg4;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return;
    }
    auVar17 = __stack_chk_fail();
    uVar7 = auVar17._0_8_;
    *extraout_x18 = sym.perf_trace_cluster_exit;
    pcStack_b8 = sym.perf_trace_cluster_exit;
    iVar5 = sp_el0;
    iStack_c8 = *(iVar5 + 0x5e0);
    uVar11 = uVar10 & 0xffffffff;
    uVar12 = puVar8 & 0xffffffff;
    uVar14 = auVar17._8_8_ & 0xffffffff;
    uStack_d0 = 0;
    uStack_d4 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(uVar7 + 0x78);
    uVar4 = uVar10;
    puStack_c0 = &stack0xffffffffffffffc0;
    if ((*(uVar7 + 0x80) != 0) || (puVar9 = puVar8, *piVar1 != 0)) {
        puVar9 = &uStack_d4;
        iVar5 = perf_trace_buf_alloc(0x14,&uStack_d0);
        uVar13 = _trace_event_raw_init;
        if (iVar5 != 0) {
            *(uStack_d0 + 0xe8) = &puStack_c0;
            puVar9 = uStack_d4;
            in_x4 = 1;
            *(uStack_d0 + 0xf8) = auStack_e0;
            *(uStack_d0 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x80050dc;
            *(uStack_d0 + 0x108) = 5;
            *(iVar5 + 8) = auVar17._8_4_;
            *(iVar5 + 0xc) = puVar8;
            *(iVar5 + 0x10) = uVar10;
            uVar4 = uVar7;
            in_x5 = uStack_d0;
            perf_trace_run_bpf_submit(iVar5,0x14,puVar9,uVar7,1,uStack_d0,piVar1,0);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar6 = auVar17._0_8_;
    uVar16 = tpidr_el2;
    *extraout_x18_00 = 0x8005200;
    uStack_118 = 0x8005200;
    iVar5 = sp_el0;
    iStack_128 = *(iVar5 + 0x5e0);
    uVar13 = auVar17._8_8_ & 0xffffffff;
    uVar16 = *(iVar6 + 0x48);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uVar15 = uVar16;
    uVar10 = uVar4;
    ppuStack_120 = &puStack_c0;
    piStack_110 = piVar1;
    uStack_100 = uVar14;
    uStack_f8 = uVar12;
    uStack_f0 = uVar11;
    uStack_e8 = uVar7;
    if ((uVar15 >> 8 & 1) == 0) {
        puVar8 = puVar9;
        if ((uVar15 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar10 = 0;
            event_triggers_call(iVar6,0);
        }
        if (((uVar15 >> 6 & 1) != 0) ||
           (((uVar15 >> 9 & 1) != 0 && (uVar7 = trace_event_ignore_this_pid(iVar6), (uVar7 & 1) != 0))))
        goto code_r0x080052ac;
    }
    puVar8 = 0x14;
    iVar5 = trace_event_buffer_reserve(&uStack_158,iVar6);
    if (iVar5 != 0) {
        *(iVar5 + 8) = auVar17._8_4_;
        *(iVar5 + 0xc) = puVar9;
        *(iVar5 + 0x10) = uVar4;
        trace_event_buffer_commit(&uStack_158);
    }
code_r0x080052ac:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_128) {
        return;
    }
    auVar18 = __stack_chk_fail();
    uVar7 = auVar18._0_8_;
    *extraout_x18_01 = sym.perf_trace_cluster_enter;
    pcStack_198 = sym.perf_trace_cluster_enter;
    pcStack_190 = sym.perf_trace_cluster_exit;
    iVar5 = sp_el0;
    iStack_1a8 = *(iVar5 + 0x5e0);
    uVar3 = uVar10;
    uVar2 = SUB84(puVar8,0);
    uStack_1b0 = 0;
    uStack_1b4 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(uVar7 + 0x78);
    ppuStack_1a0 = &ppuStack_120;
    uStack_188 = uVar16;
    iStack_180 = iVar6;
    uStack_178 = uVar13;
    uStack_170 = puVar9 & 0xffffffff;
    uStack_168 = uVar4 & 0xffffffff;
    if ((*(uVar7 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &uStack_1b4;
        iVar5 = perf_trace_buf_alloc(0x14,&uStack_1b0,puVar8);
        uVar4 = _trace_event_raw_init;
        if (iVar5 != 0) {
            *(uStack_1b0 + 0xe8) = &ppuStack_1a0;
            puVar8 = uStack_1b4;
            in_x4 = 1;
            *(uStack_1b0 + 0xf8) = auStack_1c0;
            *(uStack_1b0 + 0x100) = ~(-1L << (uVar4 & 0x3f)) & 0x80052e4;
            *(uStack_1b0 + 0x108) = 5;
            *(iVar5 + 8) = auVar18._8_4_;
            *(iVar5 + 0xc) = uVar2;
            *(iVar5 + 0x10) = uVar3;
            in_x5 = uStack_1b0;
            perf_trace_run_bpf_submit(iVar5,0x14,puVar8,uVar7,1,uStack_1b0,piVar1,0);
            uVar10 = uVar7;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_1a8) {
        auVar17 = __stack_chk_fail();
        uVar16 = tpidr_el2;
        *extraout_x18_02 = 0x8005408;
        bpf_trace_run5(in_tmp_ldXn,auVar17._0_8_,auVar17._8_8_ & 0xffffffff,puVar8 & 0xffffffff,uVar10 & 0xffffffff
                       ,in_x4 & 0xffffffff,in_x5 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_cluster_exit @ 0x080050dc (size 304) =====

//WARNING: Removing unreachable block (ram,0x080053b0)

void sym.perf_trace_cluster_exit(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong uVar2;
    uint uVar3;
    uint uVar4;
    ulong in_tmp_ldXn;
    int64_t iVar5;
    int64_t iVar6;
    uchar *puVar7;
    uchar *puVar8;
    uint64_t uVar9;
    uint64_t in_x4;
    uint64_t in_x5;
    uint64_t uVar10;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    uint64_t unaff_x30;
    uchar auVar15 [12];
    uchar auVar16 [16];
    uchar auStack_140 [12];
    uint32_t uStack_134;
    uint64_t uStack_130;
    int64_t iStack_128;
    uchar *puStack_120;
    code *pcStack_118;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    ulong uStack_98;
    int64_t *piStack_90;
    uint64_t uStack_80;
    uint64_t uStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    uchar auStack_60 [12];
    uint32_t uStack_54;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uVar11 = arg4 & 0xffffffff;
    uVar12 = arg3 & 0xffffffff;
    uVar13 = arg2 & 0xffffffff;
    uStack_50 = 0;
    uStack_54 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(arg1 + 0x78);
    uVar9 = arg4;
    if ((*(arg1 + 0x80) != 0) || (puVar7 = arg3, *piVar1 != 0)) {
        puVar7 = &stack0xffffffffffffffac;
        iVar5 = perf_trace_buf_alloc(0x14,&stack0xffffffffffffffb0);
        uVar10 = _trace_event_raw_init;
        if (iVar5 != 0) {
            *(uStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            puVar7 = uStack_54;
            uVar10 = -1L << (uVar10 & 0x3f);
            in_x4 = 1;
            uVar9 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar9 = uVar10 | unaff_x30;
            }
            *(uStack_50 + 0xf8) = &stack0xffffffffffffffa0;
            *(uStack_50 + 0x100) = uVar9;
            *(uStack_50 + 0x108) = 5;
            *(iVar5 + 8) = arg2;
            *(iVar5 + 0xc) = arg3;
            *(iVar5 + 0x10) = arg4;
            uVar9 = arg1;
            in_x5 = uStack_50;
            perf_trace_run_bpf_submit(iVar5,0x14,puVar7,arg1,1,uStack_50,piVar1,0);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return;
    }
    auVar15 = __stack_chk_fail();
    iVar6 = auVar15._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18 = 0x8005200;
    uStack_98 = 0x8005200;
    iVar5 = sp_el0;
    iStack_a8 = *(iVar5 + 0x5e0);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uVar14 = *(iVar6 + 0x48);
    uVar10 = uVar9;
    puStack_a0 = &stack0xffffffffffffffc0;
    piStack_90 = piVar1;
    uStack_80 = uVar13;
    uStack_78 = uVar12;
    uStack_70 = uVar11;
    iStack_68 = arg1;
    if ((uVar14 >> 8 & 1) == 0) {
        puVar8 = puVar7;
        if ((uVar14 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar10 = 0;
            event_triggers_call(iVar6,0);
        }
        if (((uVar14 >> 6 & 1) != 0) ||
           (((uVar14 >> 9 & 1) != 0 && (uVar11 = trace_event_ignore_this_pid(iVar6), (uVar11 & 1) != 0))))
        goto code_r0x080052ac;
    }
    puVar8 = 0x14;
    iVar5 = trace_event_buffer_reserve(&stack0xffffffffffffff28,iVar6);
    if (iVar5 != 0) {
        *(iVar5 + 8) = auVar15._8_4_;
        *(iVar5 + 0xc) = puVar7;
        *(iVar5 + 0x10) = uVar9;
        trace_event_buffer_commit(&stack0xffffffffffffff28);
    }
code_r0x080052ac:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_a8) {
        return;
    }
    auVar15 = __stack_chk_fail();
    uVar9 = auVar15._0_8_;
    *extraout_x18_00 = sym.perf_trace_cluster_enter;
    pcStack_118 = sym.perf_trace_cluster_enter;
    iVar5 = sp_el0;
    iStack_128 = *(iVar5 + 0x5e0);
    uVar4 = uVar10;
    uVar3 = SUB84(puVar8,0);
    uStack_130 = 0;
    uStack_134 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(uVar9 + 0x78);
    puStack_120 = &stack0xffffffffffffff60;
    if ((*(uVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &stack0xfffffffffffffecc;
        iVar5 = perf_trace_buf_alloc(0x14,&stack0xfffffffffffffed0,puVar8);
        uVar11 = _trace_event_raw_init;
        if (iVar5 != 0) {
            *(uStack_130 + 0xe8) = &stack0xfffffffffffffee0;
            puVar8 = uStack_134;
            in_x4 = 1;
            *(uStack_130 + 0xf8) = &stack0xfffffffffffffec0;
            *(uStack_130 + 0x100) = ~(-1L << (uVar11 & 0x3f)) & 0x80052e4;
            *(uStack_130 + 0x108) = 5;
            *(iVar5 + 8) = auVar15._8_4_;
            *(iVar5 + 0xc) = uVar3;
            *(iVar5 + 0x10) = uVar4;
            in_x5 = uStack_130;
            perf_trace_run_bpf_submit(iVar5,0x14,puVar8,uVar9,1,uStack_130,piVar1,0);
            uVar10 = uVar9;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_128) {
        auVar16 = __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_01 = 0x8005408;
        bpf_trace_run5(in_tmp_ldXn,auVar16._0_8_,auVar16._8_8_ & 0xffffffff,puVar8 & 0xffffffff,uVar10 & 0xffffffff
                       ,in_x4 & 0xffffffff,in_x5 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_cluster_enter @ 0x0800520c (size 216) =====

//WARNING: Removing unreachable block (ram,0x080053b0)

void sym.trace_event_raw_event_cluster_enter(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong uVar2;
    uint uVar3;
    uint uVar4;
    uint64_t uVar5;
    ulong in_tmp_ldXn;
    uint64_t uVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    uint64_t uVar9;
    uint64_t in_x4;
    uint64_t in_x5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar10;
    ulong unaff_x30;
    uchar auVar11 [12];
    uchar auVar12 [16];
    uchar auStack_e0 [12];
    uint32_t uStack_d4;
    uint64_t uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar10 = *(arg1 + 0x48);
    uVar9 = arg4;
    if ((uVar10 >> 8 & 1) == 0) {
        puVar8 = arg3;
        if ((uVar10 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar9 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar10 >> 6 & 1) != 0) ||
           (((uVar10 >> 9 & 1) != 0 && (uVar6 = trace_event_ignore_this_pid(arg1), (uVar6 & 1) != 0))))
        goto code_r0x080052ac;
    }
    puVar8 = 0x14;
    iVar7 = trace_event_buffer_reserve(&uStack_78,arg1);
    if (iVar7 != 0) {
        *(iVar7 + 8) = arg2;
        *(iVar7 + 0xc) = arg3;
        *(iVar7 + 0x10) = arg4;
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x080052ac:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return;
    }
    auVar11 = __stack_chk_fail();
    uVar6 = auVar11._0_8_;
    *extraout_x18 = sym.perf_trace_cluster_enter;
    pcStack_b8 = sym.perf_trace_cluster_enter;
    iVar7 = sp_el0;
    iStack_c8 = *(iVar7 + 0x5e0);
    uVar4 = uVar9;
    uVar3 = SUB84(puVar8,0);
    uStack_d0 = 0;
    uStack_d4 = 0;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar6 + 0x78);
    puStack_c0 = &stack0xffffffffffffffc0;
    if ((*(uVar6 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &uStack_d4;
        iVar7 = perf_trace_buf_alloc(0x14,&uStack_d0,puVar8);
        uVar5 = _trace_event_raw_init;
        if (iVar7 != 0) {
            *(uStack_d0 + 0xe8) = &puStack_c0;
            puVar8 = uStack_d4;
            in_x4 = 1;
            *(uStack_d0 + 0xf8) = auStack_e0;
            *(uStack_d0 + 0x100) = ~(-1L << (uVar5 & 0x3f)) & 0x80052e4;
            *(uStack_d0 + 0x108) = 5;
            *(iVar7 + 8) = auVar11._8_4_;
            *(iVar7 + 0xc) = uVar3;
            *(iVar7 + 0x10) = uVar4;
            in_x5 = uStack_d0;
            perf_trace_run_bpf_submit(iVar7,0x14,puVar8,uVar6,1,uStack_d0,piVar1,0);
            uVar9 = uVar6;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_c8) {
        auVar12 = __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_00 = 0x8005408;
        bpf_trace_run5(in_tmp_ldXn,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar8 & 0xffffffff,uVar9 & 0xffffffff,
                       in_x4 & 0xffffffff,in_x5 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_cluster_enter @ 0x080052e4 (size 304) =====

void sym.perf_trace_cluster_enter(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint uVar4;
    uint uVar5;
    ulong in_tmp_ldXn;
    int64_t iVar6;
    uint64_t in_x4;
    uint64_t in_x5;
    uint64_t uVar7;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar8 [16];
    uchar auStack_60 [12];
    uint32_t uStack_54;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    uVar5 = arg4;
    uVar4 = arg3;
    uStack_50 = 0;
    uStack_54 = 0;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        arg3 = &stack0xffffffffffffffac;
        iVar6 = perf_trace_buf_alloc(0x14,&stack0xffffffffffffffb0,arg3);
        uVar2 = _trace_event_raw_init;
        if (iVar6 != 0) {
            *(uStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            arg3 = uStack_54;
            uVar7 = -1L << (uVar2 & 0x3f);
            in_x4 = 1;
            uVar2 = (~uVar7 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar2 = uVar7 | unaff_x30;
            }
            *(uStack_50 + 0xf8) = &stack0xffffffffffffffa0;
            *(uStack_50 + 0x100) = uVar2;
            *(uStack_50 + 0x108) = 5;
            *(iVar6 + 8) = arg2;
            *(iVar6 + 0xc) = uVar4;
            *(iVar6 + 0x10) = uVar5;
            in_x5 = uStack_50;
            perf_trace_run_bpf_submit(iVar6,0x14,arg3,arg1,1,uStack_50,piVar1,0);
            arg4 = arg1;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return;
    }
    auVar8 = __stack_chk_fail();
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x8005408;
    bpf_trace_run5(in_tmp_ldXn,auVar8._0_8_,auVar8._8_8_ & 0xffffffff,arg3 & 0xffffffff,arg4 & 0xffffffff,
                   in_x4 & 0xffffffff,in_x5 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_cluster_pred_select @ 0x08005414 (size 56) =====

void sym.__bpf_trace_cluster_pred_select(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong in_x0;
    uint in_w4;
    uint in_w5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run5(in_x0,arg1 & 0xffffffff,arg2 & 0xffffffff,arg3 & 0xffffffff,in_w4,in_w5);
    return;
}


// ===== sym.__bpf_trace_cluster_pred_hist @ 0x0800544c (size 52) =====

void sym.__bpf_trace_cluster_pred_hist(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong in_x0;
    uint in_w4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4(in_x0,arg1 & 0xffffffff,arg2 & 0xffffffff,arg3 & 0xffffffff,in_w4);
    return;
}


// ===== sym.__bpf_trace_cluster_exit @ 0x08005480 (size 48) =====

void sym.__bpf_trace_cluster_exit(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(in_x0,arg1 & 0xffffffff,arg2 & 0xffffffff,arg3 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_cluster_enter @ 0x080054b0 (size 48) =====

void sym.__bpf_trace_cluster_enter(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(in_x0,arg1 & 0xffffffff,arg2 & 0xffffffff,arg3 & 0xffffffff);
    return;
}


// ===== sym.get_cluster_sleep_time @ 0x080054e0 (size 168) =====

int64_t sym.get_cluster_sleep_time(int64_t arg1)

{
    uint32_t *puVar1;
    int64_t iVar2;
    code *pcVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint32_t unaff_w23;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(arg1 + 0x90) + 0x14a;
    **(arg1 + 0x90) = unaff_w23;
    uVar5 = cpumask_next_and(trace_event_raw_init,0xffffffff,puVar1,__cpu_online_mask);
    uVar4 = uVar5;
    iVar2 = 0x7fffffffffffffff;
    while( true ) {
        if (unaff_w23 <= uVar4) {
            return iVar2;
        }
        if (7 < uVar5) break;
        iVar6 = *(arg1 + (uVar5 & 0xffffffff) * 8 + 0x170);
        if (iVar2 <= iVar6) {
            iVar6 = iVar2;
        }
        uVar5 = cpumask_next_and(uVar5,puVar1,__cpu_online_mask);
        uVar4 = uVar5;
        iVar2 = iVar6;
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8005588);
    (*pcVar3)();
}


// ===== sym.update_cluster_select @ 0x08005588 (size 364) =====

void sym.update_cluster_select(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    ulong *in_x18;
    uint32_t unaff_w23;
    code *pcVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_obj.cluster_dev_list != obj.cluster_dev_list) {
        uVar1 = *arg1;
        pcVar8 = _obj.cluster_dev_list;
        do {
            if ((pcVar8[0x15] != 0x0) &&
               ((*(*(pcVar8 + -0x128) + (uVar1 >> 6) * 8 + 0x528) & 1L << (uVar1 & 0x3f)) != 0)) {
                _raw_spin_lock(pcVar8 + 0x10);
                *(pcVar8 + -0x50) = *(arg1 + 0x130);
                if (7 < uVar1) {
code_r0x080056f0:
    //WARNING: Does not return
                    pcVar8 = SoftwareBreakpoint(0x5512,0x80056f4);
                    (*pcVar8)();
                }
                puVar6 = *(arg1 + 0x38);
                iVar7 = *(pcVar8 + -0x128);
                *(pcVar8 + (uVar1 - 9) * 8) = puVar6;
                iVar7 = iVar7 + 0x528;
                *puVar6 = unaff_w23;
                uVar4 = cpumask_next_and(trace_event_raw_init,0xffffffff,iVar7,__cpu_online_mask);
                uVar3 = uVar4;
                iVar2 = 0x7fffffffffffffff;
                while (uVar3 < unaff_w23) {
                    if (7 < uVar4) goto code_r0x080056f0;
                    iVar5 = *(pcVar8 + -0x1b8 + ((uVar4 & 0xffffffff) + 0x2e) * 8);
                    if (iVar2 <= iVar5) {
                        iVar5 = iVar2;
                    }
                    uVar4 = cpumask_next_and(uVar4,iVar7,__cpu_online_mask);
                    iVar2 = iVar5;
                    uVar3 = uVar4;
                }
                iVar7 = *(pcVar8 + -0x58);
                if (iVar2 <= iVar7 || iVar7 == 0) {
                    iVar7 = iVar2;
                }
                *(pcVar8 + -0x60) = iVar7;
                dev_pm_genpd_set_next_wakeup(*(pcVar8 + -0x1b8));
                _raw_spin_unlock(pcVar8 + 0x10);
            }
            pcVar8 = *pcVar8;
        } while (pcVar8 != obj.cluster_dev_list);
    }
    return;
}


// ===== sym.cluster_gov_enable @ 0x080056f4 (size 52) =====

void sym.cluster_gov_enable(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.lpm_cluster_gov_probe.93919d071927d692c25ddf044f89175d.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cluster_gov_disable @ 0x08005728 (size 44) =====

void sym.cluster_gov_disable(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.lpm_cluster_gov_probe.93919d071927d692c25ddf044f89175d.cfi_jt);
    return;
}


// ===== sym.qcom_cluster_lpm_governor_deinit @ 0x08005754 (size 44) =====

void sym.qcom_cluster_lpm_governor_deinit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.unregister_cluster_governor_ops(0x8001130);
    return;
}


// ===== sym.qcom_cluster_lpm_governor_init @ 0x08005780 (size 32) =====

ulong sym.qcom_cluster_lpm_governor_init(int64_t arg1)

{
    _segment.ehdr = reloc.update_cluster_select.cfi_jt;
    return 0;
}


// ===== sym.trace_raw_output_cluster_pred_select @ 0x080057a0 (size 116) =====

void sym.trace_raw_output_cluster_pred_select(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"idx:%d sleep_time:%u latency:%u pred:%d pred_us:%u\n",*(iVar2 + 8),*(iVar2 + 0xc),
                           *(iVar2 + 0x10),*(iVar2 + 0x14),*(iVar2 + 0x18));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_cluster_pred_hist @ 0x08005814 (size 112) =====

void sym.trace_raw_output_cluster_pred_hist(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"idx:%d resi:%u sample:%u tmr:%u\n",*(iVar2 + 8),*(iVar2 + 0xc),*(iVar2 + 0x10),
                           *(iVar2 + 0x14));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_cluster_exit @ 0x08005884 (size 112) =====

void sym.trace_raw_output_cluster_exit(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"first cpu:%d idx:%u suspend_param:0x%x\n",*(iVar2 + 8),*(iVar2 + 0xc),
                           *(iVar2 + 0x10));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_cluster_enter @ 0x080058f4 (size 112) =====

void sym.trace_raw_output_cluster_enter(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"last cpu:%d idx:%u suspend_param:0x%x\n",*(iVar2 + 8),*(iVar2 + 0xc),
                           *(iVar2 + 0x10));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.lpm_cluster_gov_probe @ 0x08005964 (size 364) =====

int sym.lpm_cluster_gov_probe(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    int64_t *arg1_00;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = arg1 + 0x10;
    arg1_00 = devm_kmalloc(arg1,0x1d0,0xdc0);
    if (arg1_00 == NULL) {
        iVar4 = -0xc;
    }
    else {
        *(arg1_00 + 0x39) = 0;
        *arg1_00 = arg1;
        arg1_00[0x2c] = 0x7fffffffffffffff;
        pm_runtime_enable(arg1);
        hrtimer_init(arg1_00 + 0x21,1,1);
        iVar7 = *(*arg1_00 + 0x260);
        arg1_00[0x18] = sym.cluster_power_cb.93919d071927d692c25ddf044f89175d.cfi_jt;
        arg1_00[0x12] = iVar7 + -0x390;
        *(iVar7 + 0x208) = *(iVar7 + 0x208) | 0x40;
        iVar4 = dev_pm_genpd_add_notifier(*arg1_00);
        if ((iVar4 == 0) && (iVar5 = sym.create_cluster_sysfs_nodes(arg1_00), piVar2 = *0x8001128, iVar5 == 0)) {
            piVar1 = arg1_00 + 0x37;
            uVar6 = __list_add_valid(piVar1,*0x8001128,obj.cluster_dev_list);
            if ((uVar6 & 1) != 0) {
                *0x8001128 = piVar1;
                arg1_00[0x37] = obj.cluster_dev_list;
                arg1_00[0x38] = piVar2;
                *piVar2 = piVar1;
            }
            iVar7 = arg1_00[0x12];
            *(arg1_00 + 0x1cd) = 1;
            if ((((*(iVar7 + 0x5b0) != 0) && (*(arg1_00 + 0x36) = 1, 1 < *(iVar7 + 0x5b0))) &&
                (*(arg1_00 + 0x1b1) = 1, 2 < *(iVar7 + 0x5b0))) &&
               ((*(arg1_00 + 0x1b2) = 1, 3 < *(iVar7 + 0x5b0) && (*(arg1_00 + 0x1b3) = 1, 4 < *(iVar7 + 0x5b0))))) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8005ad0);
                (*pcVar3)();
            }
            iVar4 = 0;
        }
        else {
            __pm_runtime_disable(arg1,1);
        }
    }
    return iVar4;
}


// ===== sym.lpm_cluster_gov_remove @ 0x08005ad0 (size 216) =====

ulong sym.lpm_cluster_gov_remove(int64_t arg1)

{
    int64_t *piVar1;
    code *arg1_00;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_obj.cluster_dev_list != obj.cluster_dev_list) {
        pcVar4 = _obj.cluster_dev_list;
        do {
            if (*(pcVar4 + -0x128) == *(arg1 + 0x270) + -0x390) {
                arg1_00 = pcVar4 + -0x1b8;
                if (arg1_00 == NULL) {
                    return 0xffffffed;
                }
                __pm_runtime_disable(arg1 + 0x10,1);
                iVar3 = *(pcVar4 + -0x128);
                *(iVar3 + 0x598) = *(iVar3 + 0x598) & 0xffffffbf;
                sym.remove_cluster_sysfs_nodes(arg1_00);
                dev_pm_genpd_remove_notifier(*arg1_00);
                uVar2 = __list_del_entry_valid(pcVar4);
                if ((uVar2 & 1) != 0) {
                    iVar3 = *pcVar4;
                    piVar1 = *(pcVar4 + 8);
                    *(iVar3 + 8) = piVar1;
                    *piVar1 = iVar3;
                }
                *pcVar4 = -0x2152ffffffffff00;
                *(pcVar4 + 8) = -0x2152fffffffffede;
                return 0;
            }
            pcVar4 = *pcVar4;
        } while (pcVar4 != obj.cluster_dev_list);
    }
    return 0xffffffed;
}


// ===== sym.cluster_power_cb @ 0x08005ba8 (size 1208) =====

ulong sym.cluster_power_cb(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    bool bVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int iVar13;
    int64_t iVar14;
    ulong *in_x18;
    uint32_t unaff_w22;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar12 = *(arg1 + -0x30);
    if (arg2 == 0) {
        if (3 < *(iVar12 + 0x5b4)) {
code_r0x0800605c:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x8006060);
            (*pcVar3)();
        }
        if (*(arg1 + *(iVar12 + 0x5b4) + 0xf0) == '\0') {
            return 0x8002;
        }
        if (*(iVar12 + 0x51c) != 0) {
            sym.clear_cpu_predict_history();
            *(arg1 + -0xa8) = 0;
            *(arg1 + -0x98) = 0;
            *(arg1 + -0x90) = 0;
            *(arg1 + -0x80) = 0;
            *(arg1 + -0x78) = 0;
            *(arg1 + -0xa0) = 0xffffffff;
            *(arg1 + -0x88) = 0xffffffff;
            *(arg1 + -0x70) = 0xffffffff;
            *(arg1 + -0x68) = 0;
            *(arg1 + -0x60) = 0;
            *(arg1 + -0x58) = 0xffffffff;
            *(arg1 + -0x50) = 0;
            *(arg1 + -0x48) = 0;
            *(arg1 + -0x40) = 0xffffffff;
            *(arg1 + -0x38) = 0;
            *(arg1 + -0xb8) = 0;
            *(arg1 + -0xac) = 0;
            *(arg1 + -0xb4) = 0;
            return 1;
        }
        _trace_event_raw_init = unaff_w22;
        uVar10 = cpumask_next(0xffffffff,iVar12 + 0x528);
        uVar5 = uVar10;
        while (uVar5 < unaff_w22) {
            if ((*(__cpu_online_mask + (uVar10 >> 6 & 0x3ffffff) * 8) >> (uVar10 & 0x3f) & 1) != 0) {
                if (0x1f < uVar10) goto code_r0x0800605c;
                if (*(*(__per_cpu_offset + (uVar10 & 0xffffffff) * 8) + 0x8007440) != '\0') {
                    return 0x8002;
                }
            }
            uVar10 = cpumask_next(uVar10,iVar12 + 0x528);
            uVar5 = uVar10;
        }
        uVar7 = ktime_get();
        *(arg1 + 0xa8) = uVar7;
        sym.cluster_power_down(arg1 + -0xc0);
    }
    else if (arg2 == 1) {
        uVar7 = tpidr_el1;
    }
    else if ((arg2 == 3) && (uVar7 = tpidr_el1, *(*(arg1 + -0x30) + 0x51c) == 0)) {
        uVar7 = ktime_get();
        *(arg1 + 0xa8) = uVar7;
        iVar12 = __hrtimer_get_remaining(arg1 + 0x48,0);
        if (999 < iVar12) {
            hrtimer_try_to_cancel(arg1 + 0x48);
        }
        sym.update_cluster_history(arg1 + -0xc0);
        iVar14 = *(arg1 + -0x30);
        uVar5 = *(iVar14 + 0x5b4);
        *(arg1 + 0xa0) = 0x7fffffffffffffff;
        *(arg1 + 0x10c) = 0;
        iVar12 = *(arg1 + 0xa8);
        if (obj.prediction_disabled == 0x0) {
            if (*(arg1 + -0xb4) != '\0') {
                *(arg1 + -0xb4) = 0x100;
                return 1;
            }
            iVar13 = *(arg1 + -0xac);
            if (iVar13 == 5) {
                iVar2 = iVar12 / 1000;
                if (iVar2 - *(arg1 + -0x98) < 0x9c41) {
                    iVar13 = 5;
                }
                else {
                    iVar13 = 4;
                    *(arg1 + -0xac) = 4;
                }
                if (40000 < iVar2 - *(arg1 + -0x80)) {
                    iVar13 = iVar13 + -1;
                    *(arg1 + -0xac) = iVar13;
                }
                if (40000 < iVar2 - *(arg1 + -0x68)) {
                    iVar13 = iVar13 + -1;
                    *(arg1 + -0xac) = iVar13;
                }
                if (40000 < iVar2 - *(arg1 + -0x50)) {
                    iVar13 = iVar13 + -1;
                    *(arg1 + -0xac) = iVar13;
                }
                if (40000 < iVar2 - *(arg1 + -0x38)) {
                    *(arg1 + -0xac) = iVar13 + -1;
                    return 1;
                }
            }
            if (4 < iVar13) {
                uVar1 = *(iVar14 + 0x5b0);
                if (uVar5 < uVar1 - 1) {
                    iVar12 = iVar12 * 1000 +
                             (*(arg1 + -0x90) + *(arg1 + -0xa8) + *(arg1 + -0x78) + *(arg1 + -0x60) + *(arg1 + -0x48)) /
                             5;
                }
                else {
                    if (uVar1 < 2) {
                        return 1;
                    }
                    uVar5 = 1;
                    while( true ) {
                        uVar10 = *(*(iVar14 + 0x5a0) + uVar5 * 0x40 + 0x10);
                        if (*(arg1 + -0xa0) == uVar5) {
                            uVar8 = *(arg1 + -0xa8);
                            uVar9 = uVar10 / 1000;
                            bVar4 = uVar8 < uVar10 % 1000;
                            uVar6 = bVar4;
                            if (!bVar4) {
                                uVar8 = 0;
                            }
                        }
                        else {
                            uVar6 = 0;
                            uVar8 = 0;
                            uVar9 = uVar10;
                        }
                        if (*(arg1 + -0x88) == uVar5) {
                            uVar10 = uVar9 / 1000;
                            uVar11 = uVar9 % 1000;
                            uVar9 = uVar10;
                            if (*(arg1 + -0x90) < uVar11) {
                                uVar6 = uVar6 + 1;
                                uVar8 = *(arg1 + -0x90) + uVar8;
                            }
                        }
                        if (*(arg1 + -0x70) == uVar5) {
                            uVar11 = uVar9 / 1000;
                            uVar10 = uVar9 % 1000;
                            uVar9 = uVar11;
                            if (*(arg1 + -0x78) < uVar10) {
                                uVar6 = uVar6 + 1;
                                uVar8 = *(arg1 + -0x78) + uVar8;
                            }
                        }
                        if (*(arg1 + -0x58) == uVar5) {
                            uVar10 = uVar9 / 1000;
                            uVar11 = uVar9 % 1000;
                            uVar9 = uVar10;
                            if (*(arg1 + -0x60) < uVar11) {
                                uVar6 = uVar6 + 1;
                                uVar8 = *(arg1 + -0x60) + uVar8;
                            }
                        }
                        if ((*(arg1 + -0x40) == uVar5) && (*(arg1 + -0x48) < uVar9 % 1000)) {
                            uVar6 = uVar6 + 1;
                            uVar8 = *(arg1 + -0x48) + uVar8;
                        }
                        if (3 < uVar6) break;
                        uVar5 = uVar5 + 1;
                        if (uVar1 == uVar5) {
                            return 1;
                        }
                    }
                    uVar10 = 0;
                    if (uVar6 != 0) {
                        uVar10 = uVar8 / uVar6;
                    }
                    iVar12 = iVar12 + uVar10 * 1000;
                }
                *(arg1 + 0xa0) = iVar12;
                *(arg1 + 0x10c) = 1;
                return 1;
            }
        }
    }
    return 1;
}


// ===== sym.update_cluster_history @ 0x080061c4 (size 324) =====

void sym.update_cluster_history(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    char cVar5;
    code *pcVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.prediction_disabled == 0x0) {
        iVar2 = *(*(arg1 + 0x90) + 0x5b4);
        uVar3 = *(arg1 + 8);
        uVar7 = uVar3;
        if ((*(arg1 + 0x10) == -1) || (*(arg1 + 0x10) == iVar2)) {
            if (4 < uVar3) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x5512,0x8006308);
                (*pcVar6)();
            }
            cVar5 = *(arg1 + 0xd);
            uVar8 = (*(arg1 + 0x168) - *(arg1 + 0x150)) / 1000;
            *(arg1 + uVar7 * 0x18 + 0x28) = *(arg1 + 0x150) / 1000;
            if (cVar5 == '\0') {
                iVar9 = arg1 + uVar7 * 0x18;
            }
            else {
                *(arg1 + 0xd) = 0;
                uVar1 = 4;
                if (uVar3 != 0) {
                    uVar1 = uVar3 - 1;
                }
                uVar7 = uVar1;
                iVar9 = arg1 + uVar7 * 0x18;
                uVar8 = *(iVar9 + 0x18) + uVar8;
            }
            *(iVar9 + 0x18) = uVar8;
            iVar4 = *(arg1 + 0x14);
            *(arg1 + 0x10) = 0x80000000;
            *(arg1 + uVar7 * 0x18 + 0x20) = iVar2;
            *(arg1 + 0x150) = 0;
            if (iVar4 < 5) {
                *(arg1 + 0x14) = iVar4 + 1;
            }
            iVar2 = 0;
            if (uVar7 + 1 < 5) {
                iVar2 = uVar7 + 1;
            }
            *(arg1 + 8) = iVar2;
        }
    }
    return;
}


// ===== sym.cluster_power_down @ 0x080063d8 (size 288) =====

void sym.cluster_power_down(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x90);
    uVar1 = *(iVar2 + 0x5b4);
    if (-1 < uVar1) {
        *(arg1 + 0x10) = uVar1;
        *(arg1 + 0x150) = *(arg1 + 0x168);
        if (uVar1 < *(iVar2 + 0x5b0) - 1U) {
            if (*(arg1 + 0x158) == *(arg1 + 0x160)) {
                uVar3 = *(*(iVar2 + 0x5a0) + (uVar1 + 1) * 0x40 + 0x10);
                *(arg1 + 0x130) = sym.clusttimer_fn.93919d071927d692c25ddf044f89175d.cfi_jt;
                hrtimer_start_range_ns(arg1 + 0x108,(uVar3 / 1000 + 100) * 1000,0,3);
            }
        }
        else {
            sym.clear_cpu_predict_history();
            *(arg1 + 0x18) = 0;
            *(arg1 + 0x28) = 0;
            *(arg1 + 0x30) = 0;
            *(arg1 + 0x40) = 0;
            *(arg1 + 0x48) = 0;
            *(arg1 + 0x20) = 0xffffffff;
            *(arg1 + 0x38) = 0xffffffff;
            *(arg1 + 0x50) = 0xffffffff;
            *(arg1 + 0x58) = 0;
            *(arg1 + 0x60) = 0;
            *(arg1 + 0x68) = 0xffffffff;
            *(arg1 + 0x70) = 0;
            *(arg1 + 0x78) = 0;
            *(arg1 + 0x80) = 0xffffffff;
            *(arg1 + 0x88) = 0;
            *(arg1 + 8) = 0;
            *(arg1 + 0x14) = 0;
            *(arg1 + 0xc) = 0;
        }
    }
    return;
}


// ===== sym.clusttimer_fn @ 0x080065d4 (size 28) =====

ulong sym.clusttimer_fn(int64_t arg1)

{
    *(arg1 + -0xfc) = 1;
    return 0;
}


// ===== sym.remove_cluster_sysfs_nodes @ 0x080065f0 (size 188) =====

void sym.remove_cluster_sysfs_nodes(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong uVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        iVar3 = *(arg1 + 0x90);
        uVar2 = *(arg1 + 0xb8);
        if (*(iVar3 + 0x5b0) != 0) {
            kobject_put(*(*(arg1 + 0x98) + 8));
            if (1 < *(iVar3 + 0x5b0)) {
                kobject_put(*(*(arg1 + 0xa0) + 8));
                if (2 < *(iVar3 + 0x5b0)) {
                    kobject_put(*(*(arg1 + 0xa8) + 8));
                    if (3 < *(iVar3 + 0x5b0)) {
                        kobject_put(*(*(arg1 + 0xb0) + 8));
                        if (4 < *(iVar3 + 0x5b0)) {
    //WARNING: Does not return
                            pcVar1 = SoftwareBreakpoint(0x5512,0x80066ac);
                            (*pcVar1)();
                        }
                    }
                }
            }
        }
        kobject_put(uVar2);
    }
    return;
}


// ===== sym.create_cluster_sysfs_nodes @ 0x080066ac (size 448) =====

void sym.create_cluster_sysfs_nodes(int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    ulong uStack_78;
    ushort uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    uStack_70 = 0;
    uStack_78 = 0;
    if (_segment.ehdr == 0) {
        uVar7 = 0xfffffdfb;
    }
    else {
        iVar8 = *(arg1 + 0x90);
        iVar3 = kobject_create_and_add(*(iVar8 + 0x508));
        *(arg1 + 0xb8) = iVar3;
        if (iVar3 == 0) {
code_r0x08006824:
            uVar7 = 0xfffffff4;
        }
        else {
            if (*(iVar8 + 0x5b0) != 0) {
                uVar6 = 0;
                do {
                    piVar4 = devm_kmalloc(*arg1,0x48,0xdc0);
                    if (piVar4 == NULL) {
code_r0x0800681c:
                        kobject_put(*(arg1 + 0xb8));
                        goto code_r0x08006824;
                    }
                    *(piVar4 + 2) = uVar6;
                    *piVar4 = arg1;
                    scnprintf(&uStack_78,0x1000,0x80015d3,uVar6 & 0xffffffff);
                    iVar3 = kobject_create_and_add(&uStack_78,*(arg1 + 0xb8));
                    piVar4[1] = iVar3;
                    if (iVar3 == 0) goto code_r0x0800681c;
                    uVar7 = *arg1;
                    iVar3 = devm_kmalloc(uVar7,0x28,0xdc0);
                    piVar4[7] = iVar3;
                    if (iVar3 == 0) {
code_r0x08006814:
                        kobject_put(piVar4[1]);
                        goto code_r0x0800681c;
                    }
                    piVar5 = devm_kmalloc(uVar7,0x10,0xdc0);
                    piVar4[8] = piVar5;
                    if (piVar5 == NULL) goto code_r0x08006814;
                    iVar3 = piVar4[7];
                    piVar4[3] = "disable";
                    *(piVar4 + 4) = 0x1a4;
                    piVar4[5] = sym.cluster_idle_get.15fd167cf514ad861e583ee1acf79061.cfi_jt;
                    piVar4[6] = sym.cluster_idle_set.15fd167cf514ad861e583ee1acf79061.cfi_jt;
                    *piVar5 = piVar4 + 3;
                    piVar5[1] = 0;
                    *(iVar3 + 0x18) = piVar5;
                    iVar2 = sysfs_create_group(piVar4[1],piVar4[7]);
                    if (iVar2 != 0) goto code_r0x08006814;
                    if (uVar6 == 4) {
    //WARNING: Does not return
                        pcVar1 = SoftwareBreakpoint(0x5512,0x8006868);
                        (*pcVar1)();
                    }
                    iVar3 = uVar6 * 8;
                    uVar6 = uVar6 + 1;
                    *(arg1 + iVar3 + 0x98) = piVar4;
                } while (uVar6 < *(iVar8 + 0x5b0));
            }
            uVar7 = 0;
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail(uVar7);
    *extraout_x18 = sym.remove_global_sysfs_nodes;
    kobject_put(_segment.ehdr);
    return;
}


// ===== sym.remove_global_sysfs_nodes @ 0x0800686c (size 44) =====

void sym.remove_global_sysfs_nodes(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kobject_put(_segment.ehdr);
    return;
}


// ===== sym.create_global_sysfs_nodes @ 0x08006898 (size 84) =====

ulong sym.create_global_sysfs_nodes(void)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = kobject_create_and_add("qcom_lpm",___stack_chk_fail);
    if (_segment.ehdr == 0) {
        uVar1 = 0xfffffff4;
    }
    else {
        uVar1 = sysfs_create_group(_segment.ehdr,obj.lpm_gov_attr_group);
    }
    return uVar1;
}


// ===== sym.cluster_idle_get @ 0x080068ec (size 92) =====

int64_t sym.cluster_idle_get(ulong noname_0,int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + -8) < 4) {
        iVar2 = scnprintf(arg2,0x1000,0x8001514,*(*(arg1 + -0x18) + *(arg1 + -8) + 0x1b0) ^ 1);
        return iVar2;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8006948);
    (*pcVar1)();
}


// ===== sym.cluster_idle_set @ 0x08006948 (size 160) =====

int64_t sym.cluster_idle_set(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    uint8_t auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    auStack_2c[0] = 0;
    iVar3 = kstrtobool(arg2,auStack_2c);
    if (iVar3 == 0) {
        if (3 < *(arg1 + -8)) goto code_r0x080069e4;
        *(*(arg1 + -0x18) + *(arg1 + -8) + 0x1b0) = auStack_2c[0] ^ 1;
    }
    else {
        arg3 = -0x16;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return arg3;
    }
    __stack_chk_fail();
code_r0x080069e4:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80069e8);
    (*pcVar2)();
}


// ===== sym.sleep_disabled_show @ 0x080069e8 (size 64) =====

int64_t sym.sleep_disabled_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,0x8001497,obj.sleep_disabled);
    return iVar1;
}


// ===== sym.sleep_disabled_store @ 0x08006a28 (size 148) =====

int64_t sym.sleep_disabled_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    auStack_2c[0] = 0x0;
    iVar2 = kstrtobool(arg1,auStack_2c);
    if (iVar2 == 0) {
        obj.sleep_disabled = auStack_2c[0];
    }
    else {
        _printk(0x8001589);
        arg2 = iVar2;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.prediction_disabled_show;
    iVar2 = scnprintf(arg1,0x1000,0x8001497,obj.prediction_disabled);
    return iVar2;
}


// ===== sym.prediction_disabled_show @ 0x08006abc (size 64) =====

int64_t sym.prediction_disabled_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,0x8001497,obj.prediction_disabled);
    return iVar1;
}


// ===== sym.prediction_disabled_store @ 0x08006afc (size 152) =====

//WARNING: Control flow encountered bad instruction data

int64_t sym.prediction_disabled_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    auStack_2c[0] = 0x0;
    iVar2 = kstrtobool(arg1,auStack_2c);
    if (iVar2 == 0) {
        obj.prediction_disabled = auStack_2c[0];
    }
    else {
        _printk(0x8001589);
        arg2 = iVar2;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    //[07] -r-x section size 1 named .plt
    halt_baddata();
}


// ===== sym.init_module @ 0x08006bb0 (size 240) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.create_global_sysfs_nodes();
    if (iVar1 == 0) {
        _segment.ehdr = reloc.update_cluster_select.cfi_jt;
        iVar1 = cpuidle_register_governor(obj.lpm_governor);
        if (iVar1 == 0) {
            iVar1 = tracepoint_probe_register
                              (__tracepoint_suspend_resume,
                               sym.qcom_lpm_suspend_trace.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
            if (iVar1 == 0) {
                iVar1 = __cpuhp_setup_state(0xc0,"qcom-cpu-lpm",1,
                                            sym.lpm_online_cpu.54f5299e1f581feb01b94162fe215419.cfi_jt,
                                            sym.lpm_offline_cpu.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
                if (-1 < iVar1) {
                    return 0;
                }
                tracepoint_probe_unregister
                          (__tracepoint_suspend_resume,
                           sym.qcom_lpm_suspend_trace.54f5299e1f581feb01b94162fe215419.cfi_jt,0);
            }
        }
        if (_segment.ehdr == reloc.update_cluster_select.cfi_jt) {
            _segment.ehdr = NULL;
        }
        kobject_put(_segment.ehdr);
    }
    return iVar1;
}

