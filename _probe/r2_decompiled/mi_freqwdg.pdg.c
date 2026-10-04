// decompiled from mi_freqwdg by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 544) =====

//WARNING: Switch with 1 destination removed at 0x080023c4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x321969b888d4949e) {
        if (arg1 < -0x8dc801903aca538) {
            if (arg1 == -0x550b9e52359ac614) {
                pcVar2 = sym.do_update_timeout_request.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt;
            }
            else if (arg1 == -0x2ee0710dce68437c) {
                pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
            }
            else {
                if (arg1 != -0x24a90b955a236a59) goto code_r0x08002384;
                pcVar2 = sym.mi_freq_qos_remove_req.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x8dc801903aca538) {
                if ((pcVar1 + -0x8001260 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08002384;
            }
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x08002384;
                pcVar2 = sym.seq_read.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x5233d5bc7887ae44) {
        if (arg1 == 0x321969b888d4949e) {
            pcVar2 = sym.seq_lseek.cfi_jt;
        }
        else if (arg1 == 0x3f73955fa520f471) {
            pcVar2 = sym.mi_freq_qos_add_req.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt;
        }
        else {
            if (arg1 != 0x4de45ac5c057a3b8) goto code_r0x08002384;
            pcVar2 = sym.fqos_wdg_update_bite_timeout.cfi_jt;
        }
    }
    else if (arg1 == 0x5233d5bc7887ae44) {
        pcVar2 = sym.freq_qos_debug_show.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt;
    }
    else if (arg1 == 0x6c0b020464e91003) {
        pcVar2 = sym.mi_freq_qos_update_req.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002384;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002384:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80023d8);
    (*pcVar1)();
}


// ===== sym.seq_lseek.cfi_jt @ 0x08001228 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x08001230 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001238 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    obj.fqos_init_suc = 0x0;
    if (*0x8005000 != 0) {
        proc_remove();
    }
    *0x8005000 = 0;
    _printk(0x80003c6,"freq_qos_exit");
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001240 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800035c);
    *0x8005000 = alloc_workqueue("fqos_wdg_wq",0x10,0);
    if (*0x8005000 == 0) {
        uVar1 = 0xfffffff2;
        *0x8005000 = 0;
    }
    else {
        tracepoint_probe_register
                  (__tracepoint_android_vh_freq_qos_add_request,
                   sym.mi_freq_qos_add_req.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt,0);
        tracepoint_probe_register
                  (__tracepoint_android_vh_freq_qos_update_request,
                   sym.mi_freq_qos_update_req.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt,0);
        tracepoint_probe_register
                  (__tracepoint_android_vh_freq_qos_remove_request,
                   sym.mi_freq_qos_remove_req.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt,0);
        *0x8005000 = proc_create("show_mi_freq_qos",0x1b4,0,obj.freq_qos_debug_proc_ops);
        uVar1 = 0;
        obj.fqos_init_suc = 0x1;
    }
    return uVar1;
}


// ===== sym.mi_freq_qos_remove_req.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt @ 0x08001248 (size 8) =====

void sym.mi_freq_qos_remove_req.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt(ulong param_1,int64_t param_2)

{
    code *pcVar1;
    ulong uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.fqos_init_suc == 0x1 && _segment.ehdr != 0) {
        uVar2 = _raw_spin_lock_irqsave(obj.mi_fqos_lock);
        uVar3 = *0x8005000;
        if (0 < *0x8005000) {
            uVar5 = 0;
            iVar4 = 0;
            do {
                if (iVar4 == 100) {
code_r0x080019e0:
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x80019e4);
                    (*pcVar1)();
                }
                if (*(uVar5 + 0x8000170) == param_2) {
                    if (99 < iVar4) goto code_r0x08001940;
                    if (100 < iVar4) goto code_r0x080019e0;
                    if (uVar5 + 0x10 < 0x5781) {
                        *(uVar5 + 0x80000a8) = 0;
                        if ((*(uVar5 + 0x80000e8) & 1) != 0) {
                            cancel_delayed_work();
                            uVar3 = *0x8005000;
                        }
                        if (uVar5 < 0x56a9) {
                            *(uVar5 + 0x8000170) = 0;
                            *(uVar5 + 0x80000d0) = 0;
                            *(uVar5 + 0x80000d8) = 0;
                            *(uVar5 + 0x80000e0) = 0;
                            goto code_r0x08001940;
                        }
                    }
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(1,0x80019e8);
                    (*pcVar1)();
                }
                iVar4 = iVar4 + 1;
                uVar5 = uVar5 + 0xe0;
            } while (*0x8005000 * 0xe0 - uVar5 != 0);
        }
        iVar4 = 100;
code_r0x08001940:
        if (iVar4 == uVar3 - 1) {
            *0x8005000 = iVar4;
        }
        *(param_2 + 0x38) = 0;
        *(param_2 + 0x40) = 100;
        _raw_spin_unlock_irqrestore(obj.mi_fqos_lock,uVar2);
    }
    return;
}


// ===== sym.freq_qos_debug_show.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt @ 0x08001250 (size 8) =====

uint sym.freq_qos_debug_show.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt(ulong param_1,ulong param_2,uint32_t *param_3)

{
    uint64_t *puVar1;
    char *pcVar2;
    char *pcVar3;
    uint32_t *puVar4;
    ulong uVar5;
    uint32_t uVar6;
    code *pcVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong uVar10;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint64_t uVar11;
    uint *puVar12;
    ulong extraout_x8;
    uint64_t uVar13;
    ulong *in_x18;
    uint64_t *puVar14;
    uint64_t *puVar15;
    int iVar16;
    uint uVar17;
    int iVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    uint32_t uStack_74;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    cpus_read_lock();
    uStack_70 = _single_release;
    seq_printf(param_1,"id:      value: stat            ");
    seq_printf(param_1,"pid[   process name]");
    seq_printf(param_1,"    \t uid time");
    seq_printf(param_1,"       out times\n");
    uVar8 = cpumask_next(0xffffffff,&uStack_70);
    *param_3 = extraout_w8;
    if (uVar8 < extraout_w8) {
        uStack_74 = 0;
        do {
            while( true ) {
                uVar8 = uVar8 & 0xffffffff;
                iVar9 = cpufreq_cpu_get(uVar8);
                if (iVar9 != 0) break;
code_r0x08001ef8:
                uVar8 = cpumask_next(uVar8,&uStack_70);
                *param_3 = extraout_w8_00;
                if (extraout_w8_00 <= uVar8) goto code_r0x080022f8;
            }
            puVar15 = iVar9 + 0xa0;
            uStack_70 = uStack_70 & (*(iVar9 + 8) ^ 0xffffffff);
            uVar10 = 0x8000214;
            if ((puVar15 == NULL) || (0xfffffffffffff000 < puVar15)) {
code_r0x08002344:
                _printk(uVar10,"freq_qos_debug_show");
                cpufreq_cpu_put(iVar9);
                uVar17 = 0xffffffea;
                break;
            }
            puVar1 = iVar9 + 0x110;
            uVar10 = 0x800011a;
            if ((puVar1 == NULL) || (uVar10 = 0x800011a, 0xfffffffffffff000 < puVar1)) goto code_r0x08002344;
            if ((puVar15 == *puVar15) || (puVar1 == *puVar1)) {
                seq_puts(param_1,"Empty!\n");
                cpufreq_cpu_put(iVar9);
                goto code_r0x08001ef8;
            }
            uVar10 = _raw_spin_lock_irqsave(obj.mi_fqos_lock);
            seq_printf(param_1,"---------------%s------------\n",*(uStack_74 * 8 + 0x8000490));
            puVar14 = *(iVar9 + 0xa0);
            pcVar2 = "Min_limit";
            if (*(iVar9 + 0xbc) != 1) {
                pcVar2 = "Unknown";
            }
            pcVar3 = "Max_limit";
            if (*(iVar9 + 0xbc) != 2) {
                pcVar3 = pcVar2;
            }
            if (puVar15 == puVar14) {
                iVar16 = 0;
                iVar18 = 0;
            }
            else {
                iVar18 = 0;
                iVar16 = 0;
                do {
                    uVar6 = puVar14[4];
                    uVar11 = uVar6;
                    if ((uVar6 < 100) && (puVar14[3] == 0xabcddcba)) {
                        if (100 < uVar6) goto code_r0x08002364;
                        uVar13 = uVar11 * 0xe0;
                        uVar5 = 0x8000195;
                        if (puVar14[-3] != *(iVar9 + 0xb4)) {
                            iVar18 = iVar18 + 1;
                            uVar5 = 0x8000112;
                        }
                        if ((0x5780 < (uVar13 | 4)) || (0x5780 < (uVar13 | 8))) goto code_r0x08002360;
                        if (0x5780 < (uVar13 | 0x14)) goto code_r0x08002360;
                        iVar16 = iVar16 + 1;
                        seq_printf(param_1,"%2d: %10d: %3s %15d[%15s] %15d %10lu %8d\n",iVar16,puVar14[-3],uVar5,
                                   *(uVar11 * 0xe0 + 0x800009c),
                                   "6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar11 * 0xe0 + 0x1c,
                                   *(uVar11 * 0xe0 + 0x80000a0),
                                   (_seq_lseek - *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar11 * 0xe0)) / 0xfa,
                                   *(uVar11 * 0xe0 + 0x80000ac));
                    }
                    puVar14 = *puVar14;
                } while (puVar15 != puVar14);
            }
            if (puVar15 == *puVar15) {
                puVar12 = iVar9 + 0xb8;
            }
            else {
                if (*(iVar9 + 0xbc) == 1) {
                    uVar11 = *(iVar9 + 0xa8);
                }
                else {
                    if (*(iVar9 + 0xbc) != 2) goto code_r0x0800236c;
                    uVar11 = *puVar15;
                }
                puVar12 = uVar11 - 0x18;
            }
            seq_printf(param_1,"Type=%s, Value=%d, Requests: active=%d / total=%d\n\n",pcVar3,*puVar12,iVar18,
                       iVar16);
            puVar15 = *(iVar9 + 0x110);
            puVar4 = "Min_limit";
            if (*(iVar9 + 300) != 1) {
                puVar4 = "Unknown";
            }
            param_3 = "Max_limit";
            if (*(iVar9 + 300) != 2) {
                param_3 = puVar4;
            }
            if (puVar1 == puVar15) {
                iVar16 = 0;
                iVar18 = 0;
            }
            else {
                iVar18 = 0;
                iVar16 = 0;
                do {
                    uVar6 = puVar15[4];
                    uVar11 = uVar6;
                    if ((uVar6 < 100) && (puVar15[3] == 0xabcddcba)) {
                        if (100 < uVar6) {
code_r0x08002364:
    //WARNING: Does not return
                            pcVar7 = SoftwareBreakpoint(0x5512,0x8002368);
                            (*pcVar7)();
                        }
                        uVar13 = uVar11 * 0xe0;
                        uVar5 = 0x8000195;
                        if (puVar15[-3] != *(iVar9 + 0x124)) {
                            iVar18 = iVar18 + 1;
                            uVar5 = 0x8000112;
                        }
                        if ((0x5780 < (uVar13 | 4)) || (0x5780 < (uVar13 | 8))) {
code_r0x08002360:
    //WARNING: Does not return
                            pcVar7 = SoftwareBreakpoint(1,0x8002364);
                            (*pcVar7)();
                        }
                        if (0x5780 < (uVar13 | 0x14)) goto code_r0x08002360;
                        iVar16 = iVar16 + 1;
                        seq_printf(param_1,"%2d: %10d: %3s %15d[%15s] %15d %10lu %8d\n",iVar16,puVar15[-3],uVar5,
                                   *(uVar11 * 0xe0 + 0x800009c),
                                   "6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar11 * 0xe0 + 0x1c,
                                   *(uVar11 * 0xe0 + 0x80000a0),
                                   (_seq_lseek - *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar11 * 0xe0)) / 0xfa,
                                   *(uVar11 * 0xe0 + 0x80000ac));
                    }
                    puVar15 = *puVar15;
                } while (puVar1 != puVar15);
            }
            if (puVar1 == *puVar1) {
                puVar12 = iVar9 + 0x128;
            }
            else {
                if (*(iVar9 + 300) == 2) {
                    uVar11 = *puVar1;
                }
                else {
                    if (*(iVar9 + 300) != 1) goto code_r0x0800236c;
                    uVar11 = *(iVar9 + 0x118);
                }
                puVar12 = uVar11 - 0x18;
            }
            uStack_74 = (uStack_74 + 1) % 3;
            seq_printf(param_1,"Type=%s, Value=%d, Requests: active=%d / total=%d\n\n",param_3,*puVar12,iVar18,
                       iVar16);
            _raw_spin_unlock_irqrestore(obj.mi_fqos_lock,uVar10);
            cpufreq_cpu_put(iVar9);
            auVar19 = cpumask_next(uVar8,&uStack_70);
            uVar8 = auVar19._0_8_;
            uVar17 = 0;
            *auVar19._8_8_ = extraout_x8;
        } while (auVar19._0_4_ < extraout_x8);
    }
    else {
code_r0x080022f8:
        uVar17 = 0;
    }
    cpus_read_unlock();
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar17;
    }
    __stack_chk_fail();
code_r0x0800236c:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x800,0x8002370);
    (*pcVar7)();
}


// ===== sym.mi_freq_qos_update_req.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt @ 0x08001258 (size 8) =====

void sym.mi_freq_qos_update_req.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt(ulong param_1,uint32_t *param_2,int param_3)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong uVar8;
    ulong *in_x18;
    uint64_t *puVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.fqos_init_suc == 0x1 && _segment.ehdr != 0) {
        if (*(param_2 + 0xe) == 0xabcddcba) {
            uVar3 = 0;
        }
        else {
            if (_segment.ehdr != 0) {
                iVar6 = sp_el0;
                _printk(0x80000e0,*(iVar6 + 0x5d8));
            }
            uVar3 = sym.get_reqcpu_freq(*(param_2 + 0xc),*param_2);
            if (uVar3 == 0) {
                return;
            }
            uVar8 = _raw_spin_lock_irqsave(obj.mi_fqos_lock);
            uVar4 = sym.insert_mi_fqos_dogs(param_2,uVar3);
            param_2[0x10] = uVar4;
            param_2[0xe] = 0xabcddcba;
            param_2[0xf] = 0;
            _raw_spin_unlock_irqrestore(obj.mi_fqos_lock,uVar8);
            if (uVar4 < 100) {
                if (100 < uVar4) {
code_r0x08001880:
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x8001884);
                    (*pcVar2)();
                }
                if (0x5780 < (uVar4 * 0xe0 | 0x18)) {
code_r0x08001884:
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(1,0x8001888);
                    (*pcVar2)();
                }
                iVar6 = uVar4 * 0xe0;
                iVar1 = sp_el0;
                *(iVar6 + 0x80000b0) = *param_2 != 1;
                uVar8 = *(iVar1 + 0x7a8);
                *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + iVar6 + 0x24) = *(iVar1 + 0x7b0);
                *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + iVar6 + 0x1c) = uVar8;
            }
        }
        if (0 < *0x8005000) {
            uVar10 = 0;
            iVar6 = 0;
            do {
                if (iVar6 == 100) goto code_r0x08001880;
                if (*(uVar10 + 0x8000170) == param_2) {
                    if (99 < iVar6) {
                        return;
                    }
                    if (100 < iVar6) goto code_r0x08001880;
                    if (0x5780 < uVar10 + 4) goto code_r0x08001884;
                    iVar6 = sp_el0;
                    if (*(uVar10 + 0x800009c) != *(iVar6 + 0x5d8)) {
                        *(uVar10 + 0x800009c) = *(iVar6 + 0x5d8);
                        uVar8 = *(iVar6 + 0x7a8);
                        *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar10 + 0x24) = *(iVar6 + 0x7b0);
                        *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar10 + 0x1c) = uVar8;
                        if (0x5780 < uVar10 + 8) goto code_r0x08001884;
                        *(uVar10 + 0x80000a0) = *(*(iVar6 + 0x798) + 4) % 0x100000;
                    }
                    iVar6 = _seq_lseek;
                    if (*param_2 != 1) {
                        return;
                    }
                    if (0x5760 < uVar10) goto code_r0x08001884;
                    if (*("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar10) == 0) {
                        *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar10) = _seq_lseek;
                        if (uVar10 + 0xc < 0x5781) {
                            *(uVar10 + 0x80000a4) = uVar3 < param_3;
                            uVar4 = _segment.ehdr;
                            if (param_3 <= uVar3) {
                                return;
                            }
                            if (uVar10 < 0x5751) {
                                uVar8 = CONCAT44(*0x8005004,*0x8005000);
                                *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar10 + 0x10) = iVar6;
                                queue_delayed_work_on(0x20,uVar8,uVar10 + 0x80000e8,uVar4);
                                return;
                            }
                        }
                        goto code_r0x08001884;
                    }
                    uVar7 = _seq_lseek - *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar10);
                    if (uVar3 < param_3) {
                        if (0x5780 < uVar10 + 0xc) goto code_r0x08001884;
                        puVar9 = uVar10 + 0x80000e8;
                        uVar5 = _segment.ehdr;
                        if ((*(uVar10 + 0x80000a4) == 0) || (uVar5 <= uVar7)) {
                            if ((*puVar9 & 1) != 0) goto code_r0x08001740;
                        }
                        else if ((*puVar9 & 1) != 0) {
                            cancel_delayed_work(puVar9);
                            uVar5 = _segment.ehdr;
                        }
                        if (0x5750 < uVar10) goto code_r0x08001884;
                        uVar8 = CONCAT44(*0x8005004,*0x8005000);
                        *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar10 + 0x10) = iVar6;
                        queue_delayed_work_on(0x20,uVar8,puVar9,uVar5);
                    }
                    else {
                        if (_segment.ehdr <= uVar7) {
                            *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar10) = _seq_lseek;
                            if (uVar10 + 0xc < 0x5781) goto code_r0x08001744;
                            goto code_r0x08001884;
                        }
                        if (0x5780 < uVar10 + 0xc) goto code_r0x08001884;
                        if ((*(uVar10 + 0x80000a4) != 0) && ((*(uVar10 + 0x80000e8) & 1) != 0)) {
                            cancel_delayed_work();
                        }
                    }
code_r0x08001740:
                    *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar10) = iVar6;
code_r0x08001744:
                    *(uVar10 + 0x80000a4) = uVar3 < param_3;
                    return;
                }
                iVar6 = iVar6 + 1;
                uVar10 = uVar10 + 0xe0;
            } while (*0x8005000 * 0xe0 - uVar10 != 0);
        }
    }
    return;
}


// ===== sym.single_release.cfi_jt @ 0x08001260 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.freq_qos_debug_open.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt @ 0x08001268 (size 8) =====

void sym.freq_qos_debug_open.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt(ulong param_1,ulong param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = PDE_DATA();
    single_open(param_2,sym.freq_qos_debug_show.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt,uVar1);
    return;
}


// ===== sym.seq_read.cfi_jt @ 0x08001270 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.fqos_wdg_update_bite_timeout.cfi_jt @ 0x08001278 (size 8) =====

void sym.fqos_wdg_update_bite_timeout.cfi_jt(int64_t param_1,int64_t param_2)

{
    char *pcVar1;
    code *pcVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < *0x8005000) {
        uVar4 = 0;
        iVar5 = 0xd8;
        piVar3 = 0x8000170;
        do {
            if (uVar4 == 100) {
code_r0x080013bc:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x80013c0);
                (*pcVar2)();
            }
            if (*piVar3 == param_1) {
                if (99 < uVar4) {
                    return;
                }
                if (uVar4 < 100) {
                    if (iVar5 - 0xd8U < 0x5759) {
                        piVar3[-0x16] = param_2;
                        _printk(0x8000102);
                        if (param_1 != 0) {
                            __rcu_read_lock();
                            iVar5 = find_task_by_vpid();
                            pcVar1 = "Deadtask";
                            if (iVar5 != 0) {
                                pcVar1 = iVar5 + 0x7a8;
                            }
                            _printk(0x8000276,pcVar1);
                            __rcu_read_unlock();
                            _printk(0x800032f);
                            _printk(0x80003ed);
                            _printk(0x8000345,*(param_1 + 8));
                            _printk(0x80003cf);
                            _printk(0x80003a9);
                        }
                        _printk(0x80001f0,param_2);
                        return;
                    }
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(1,0x80013c4);
                    (*pcVar2)();
                }
                goto code_r0x080013bc;
            }
            uVar4 = uVar4 + 1;
            piVar3 = piVar3 + 0x1c;
            iVar5 = iVar5 + 0xe0;
        } while (*0x8005000 != uVar4);
    }
    return;
}


// ===== sym.mi_freq_qos_add_req.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt @ 0x08001280 (size 8) =====

void sym.mi_freq_qos_add_req.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt
               (ulong param_1,ulong param_2,int *param_3,int param_4,ulong param_5,int param_6)

{
    int iVar1;
    int64_t iVar2;
    code *pcVar3;
    uint32_t uVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint64_t arg2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((-1 < param_6) && (obj.fqos_init_suc != 0x0 && _segment.ehdr != 0)) {
        iVar6 = *(param_3 + 0xc);
        arg2 = 0;
        if (iVar6 != 0xa0) {
            iVar1 = *param_3;
            __rcu_read_lock();
            if (iVar1 == 2) {
                arg2 = *(iVar6 + -0x78);
            }
            else if (iVar1 == 1) {
                arg2 = *(iVar6 + -0x74);
            }
            else {
                arg2 = 0;
            }
            __rcu_read_unlock();
        }
        uVar5 = _raw_spin_lock_irqsave(obj.mi_fqos_lock);
        uVar4 = sym.insert_mi_fqos_dogs(param_3,arg2);
        param_3[0x10] = uVar4;
        param_3[0xe] = -0x54322346;
        param_3[0xf] = 0;
        _raw_spin_unlock_irqrestore(obj.mi_fqos_lock,uVar5);
        if (uVar4 < 100) {
            if (99 < uVar4) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8001500);
                (*pcVar3)();
            }
            if (0x5780 < (uVar4 * 0xe0 | 0x18)) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(1,0x8001504);
                (*pcVar3)();
            }
            iVar6 = uVar4 * 0xe0;
            iVar2 = sp_el0;
            *(iVar6 + 0x80000b0) = param_4 != 1;
            uVar5 = *(iVar2 + 0x7a8);
            *(iVar6 + 0x80000dc) = *(iVar2 + 0x7b0);
            *(iVar6 + 0x80000d4) = uVar5;
        }
    }
    return;
}


// ===== sym.do_update_timeout_request.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt @ 0x08001288 (size 8) =====

void sym.do_update_timeout_request.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt(uint64_t *param_1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = _seq_lseek;
    if (_segment.ehdr != 0) {
        _printk(0x80002a9,param_1[-10],param_1[-6],param_1[-4]);
    }
    uVar2 = param_1[-6];
    if (((uVar2 != param_1[-4]) && (*(param_1 + -0x44) != 0)) && (uVar3 = _segment.ehdr, (*param_1 & 1) == 0)) {
        param_1[-4] = uVar2;
        queue_delayed_work_on(0x20,*0x8005000,param_1,(uVar2 - iVar1) + uVar3);
    }
    *(param_1 + -0x3c) = *(param_1 + -0x3c) + 1;
    if (_segment.ehdr != 0) {
        _printk(obj.mi_fqos_dogs);
    }
    return;
}


// ===== sym.fqos_wdg_update_bite_timeout @ 0x08001290 (size 308) =====

void sym.fqos_wdg_update_bite_timeout(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    code *pcVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < *0x8005000) {
        uVar4 = 0;
        iVar5 = 0xd8;
        piVar3 = 0x8000170;
        do {
            if (uVar4 == 100) {
code_r0x080013bc:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x80013c0);
                (*pcVar2)();
            }
            if (*piVar3 == arg1) {
                if (99 < uVar4) {
                    return;
                }
                if (uVar4 < 100) {
                    if (iVar5 - 0xd8U < 0x5759) {
                        piVar3[-0x16] = arg2;
                        _printk(0x8000102);
                        if (arg1 != 0) {
                            __rcu_read_lock();
                            iVar5 = find_task_by_vpid();
                            pcVar1 = "Deadtask";
                            if (iVar5 != 0) {
                                pcVar1 = iVar5 + 0x7a8;
                            }
                            _printk(0x8000276,pcVar1);
                            __rcu_read_unlock();
                            _printk(0x800032f);
                            _printk(0x80003ed);
                            _printk(0x8000345,*(arg1 + 8));
                            _printk(0x80003cf);
                            _printk(0x80003a9);
                        }
                        _printk(0x80001f0,arg2);
                        return;
                    }
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(1,0x80013c4);
                    (*pcVar2)();
                }
                goto code_r0x080013bc;
            }
            uVar4 = uVar4 + 1;
            piVar3 = piVar3 + 0x1c;
            iVar5 = iVar5 + 0xe0;
        } while (*0x8005000 != uVar4);
    }
    return;
}


// ===== sym.mi_freq_qos_add_req @ 0x080013c4 (size 320) =====

void sym.mi_freq_qos_add_req(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    code *pcVar3;
    uint32_t uVar4;
    ulong uVar5;
    int in_w5;
    int64_t iVar6;
    ulong *in_x18;
    uint64_t arg2_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((-1 < in_w5) && (obj.fqos_init_suc != 0x0 && _segment.ehdr != 0)) {
        iVar6 = *(arg1 + 0x30);
        arg2_00 = 0;
        if (iVar6 != 0xa0) {
            iVar1 = *arg1;
            __rcu_read_lock();
            if (iVar1 == 2) {
                arg2_00 = *(iVar6 + -0x78);
            }
            else if (iVar1 == 1) {
                arg2_00 = *(iVar6 + -0x74);
            }
            else {
                arg2_00 = 0;
            }
            noname_1 = __rcu_read_unlock();
        }
        uVar5 = _raw_spin_lock_irqsave(noname_1,obj.mi_fqos_lock);
        uVar4 = sym.insert_mi_fqos_dogs(arg1,arg2_00);
        *(arg1 + 0x40) = uVar4;
        *(arg1 + 0x38) = 0xabcddcba;
        _raw_spin_unlock_irqrestore(obj.mi_fqos_lock,uVar5);
        if (uVar4 < 100) {
            if (99 < uVar4) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8001500);
                (*pcVar3)();
            }
            if (0x5780 < (uVar4 * 0xe0 | 0x18)) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(1,0x8001504);
                (*pcVar3)();
            }
            iVar6 = uVar4 * 0xe0;
            iVar2 = sp_el0;
            *(iVar6 + 0x80000b0) = arg2 != 1;
            uVar5 = *(iVar2 + 0x7a8);
            *(iVar6 + 0x80000dc) = *(iVar2 + 0x7b0);
            *(iVar6 + 0x80000d4) = uVar5;
        }
    }
    return;
}


// ===== sym.mi_freq_qos_update_req @ 0x08001504 (size 924) =====

int64_t sym.mi_freq_qos_update_req(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    code *pcVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong uVar9;
    ulong *in_x18;
    uint64_t *puVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.fqos_init_suc == 0x1 && _segment.ehdr != 0) {
        iVar2 = arg3;
        if (*(arg2 + 0x38) == 0xabcddcba) {
            iVar4 = 0;
        }
        else {
            if (_segment.ehdr != 0) {
                iVar7 = sp_el0;
                _printk(0x80000e0,*(iVar7 + 0x5d8));
            }
            pcVar3 = sym.get_reqcpu_freq(*(arg2 + 0x30),*arg2);
            iVar4 = pcVar3;
            if (iVar4 == 0) {
                return pcVar3;
            }
            uVar9 = _raw_spin_lock_irqsave(obj.mi_fqos_lock);
            uVar5 = sym.insert_mi_fqos_dogs(arg2,pcVar3 & 0xffffffff);
            *(arg2 + 0x40) = uVar5;
            *(arg2 + 0x38) = 0xabcddcba;
            arg1 = _raw_spin_unlock_irqrestore(obj.mi_fqos_lock,uVar9);
            if (uVar5 < 100) {
                if (100 < uVar5) {
code_r0x08001880:
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8001884);
                    (*pcVar3)();
                }
                if (0x5780 < (uVar5 * 0xe0 | 0x18)) {
code_r0x08001884:
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(1,0x8001888);
                    (*pcVar3)();
                }
                iVar7 = uVar5 * 0xe0;
                iVar1 = sp_el0;
                *(iVar7 + 0x80000b0) = *arg2 != 1;
                uVar9 = *(iVar1 + 0x7a8);
                *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + iVar7 + 0x24) = *(iVar1 + 0x7b0);
                *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + iVar7 + 0x1c) = uVar9;
            }
        }
        if (0 < *0x8005000) {
            uVar11 = 0;
            iVar7 = 0;
            do {
                if (iVar7 == 100) goto code_r0x08001880;
                if (*(uVar11 + 0x8000170) == arg2) {
                    if (99 < iVar7) {
                        return arg1;
                    }
                    if (100 < iVar7) goto code_r0x08001880;
                    if (0x5780 < uVar11 + 4) goto code_r0x08001884;
                    iVar7 = sp_el0;
                    if (*(uVar11 + 0x800009c) != *(iVar7 + 0x5d8)) {
                        *(uVar11 + 0x800009c) = *(iVar7 + 0x5d8);
                        uVar9 = *(iVar7 + 0x7a8);
                        *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar11 + 0x24) = *(iVar7 + 0x7b0);
                        *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar11 + 0x1c) = uVar9;
                        if (0x5780 < uVar11 + 8) goto code_r0x08001884;
                        *(uVar11 + 0x80000a0) = *(*(iVar7 + 0x798) + 4) % 0x100000;
                    }
                    iVar7 = _seq_lseek;
                    if (*arg2 != 1) {
                        return arg1;
                    }
                    if (0x5760 < uVar11) goto code_r0x08001884;
                    if (*("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar11) == 0) {
                        *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar11) = _seq_lseek;
                        if (uVar11 + 0xc < 0x5781) {
                            *(uVar11 + 0x80000a4) = iVar4 < iVar2;
                            uVar5 = _segment.ehdr;
                            if (iVar2 <= iVar4) {
                                return arg1;
                            }
                            if (uVar11 < 0x5751) {
                                uVar9 = CONCAT44(*0x8005004,*0x8005000);
                                *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar11 + 0x10) = iVar7;
                                pcVar3 = queue_delayed_work_on(0x20,uVar9,uVar11 + 0x80000e8,uVar5);
                                return pcVar3;
                            }
                        }
                        goto code_r0x08001884;
                    }
                    uVar8 = _seq_lseek - *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar11);
                    if (iVar4 < iVar2) {
                        if (0x5780 < uVar11 + 0xc) goto code_r0x08001884;
                        puVar10 = uVar11 + 0x80000e8;
                        uVar6 = _segment.ehdr;
                        if ((*(uVar11 + 0x80000a4) == 0) || (uVar6 <= uVar8)) {
                            if ((*puVar10 & 1) != 0) goto code_r0x08001740;
                        }
                        else if ((*puVar10 & 1) != 0) {
                            cancel_delayed_work(puVar10);
                            uVar6 = _segment.ehdr;
                        }
                        if (0x5750 < uVar11) goto code_r0x08001884;
                        uVar9 = CONCAT44(*0x8005004,*0x8005000);
                        *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar11 + 0x10) = iVar7;
                        arg1 = queue_delayed_work_on(0x20,uVar9,puVar10,uVar6);
                    }
                    else {
                        if (_segment.ehdr <= uVar8) {
                            *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar11) = _seq_lseek;
                            if (uVar11 + 0xc < 0x5781) goto code_r0x08001744;
                            goto code_r0x08001884;
                        }
                        if (0x5780 < uVar11 + 0xc) goto code_r0x08001884;
                        arg1 = obj.mi_fqos_dogs + uVar11;
                        if ((*(uVar11 + 0x80000a4) != 0) && (arg1 = uVar11 + 0x80000e8, (*arg1 & 1) != 0)) {
                            arg1 = cancel_delayed_work();
                        }
                    }
code_r0x08001740:
                    *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar11) = iVar7;
code_r0x08001744:
                    *(uVar11 + 0x80000a4) = iVar4 < iVar2;
                    return arg1;
                }
                iVar7 = iVar7 + 1;
                uVar11 = uVar11 + 0xe0;
            } while (*0x8005000 * 0xe0 - uVar11 != 0);
        }
    }
    return arg1;
}


// ===== sym.mi_freq_qos_remove_req @ 0x080018a0 (size 328) =====

void sym.mi_freq_qos_remove_req(ulong noname_0,int64_t arg1)

{
    code *pcVar1;
    ulong uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.fqos_init_suc == 0x1 && _segment.ehdr != 0) {
        uVar2 = _raw_spin_lock_irqsave(obj.mi_fqos_lock);
        uVar3 = *0x8005000;
        if (0 < *0x8005000) {
            uVar5 = 0;
            iVar4 = 0;
            do {
                if (iVar4 == 100) {
code_r0x080019e0:
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x80019e4);
                    (*pcVar1)();
                }
                if (*(uVar5 + 0x8000170) == arg1) {
                    if (99 < iVar4) goto code_r0x08001940;
                    if (100 < iVar4) goto code_r0x080019e0;
                    if (uVar5 + 0x10 < 0x5781) {
                        *(uVar5 + 0x80000a8) = 0;
                        if ((*(uVar5 + 0x80000e8) & 1) != 0) {
                            cancel_delayed_work();
                            uVar3 = *0x8005000;
                        }
                        if (uVar5 < 0x56a9) {
                            *(uVar5 + 0x8000170) = 0;
                            *(uVar5 + 0x80000d0) = 0;
                            *(uVar5 + 0x80000d8) = 0;
                            *(uVar5 + 0x80000e0) = 0;
                            goto code_r0x08001940;
                        }
                    }
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(1,0x80019e8);
                    (*pcVar1)();
                }
                iVar4 = iVar4 + 1;
                uVar5 = uVar5 + 0xe0;
            } while (*0x8005000 * 0xe0 - uVar5 != 0);
        }
        iVar4 = 100;
code_r0x08001940:
        if (iVar4 == uVar3 - 1) {
            *0x8005000 = iVar4;
        }
        *(arg1 + 0x38) = 0;
        *(arg1 + 0x40) = 100;
        _raw_spin_unlock_irqrestore(obj.mi_fqos_lock,uVar2);
    }
    return;
}


// ===== sym.get_reqcpu_freq @ 0x080019e8 (size 108) =====

uint sym.get_reqcpu_freq(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    uint uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0xa0) {
        uVar1 = 0;
    }
    else {
        __rcu_read_lock();
        if (arg2 == 2) {
            uVar1 = *(arg1 + -0x78);
        }
        else if (arg2 == 1) {
            uVar1 = *(arg1 + -0x74);
        }
        else {
            uVar1 = 0;
        }
        __rcu_read_unlock();
    }
    return uVar1;
}


// ===== sym.insert_mi_fqos_dogs @ 0x08001a54 (size 592) =====

uint64_t sym.insert_mi_fqos_dogs(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    bool bVar4;
    uint64_t uVar5;
    uint64_t *puVar6;
    char *pcVar7;
    ulong *in_x18;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar8 = *0x8005000;
    if (0 < *0x8005000) {
        uVar5 = 0;
        puVar6 = 0x8000170;
        do {
            if (uVar5 == 100) goto code_r0x08001b00;
            if (*puVar6 == arg1) {
                if (uVar5 < 100) {
                    return uVar5 & 0xffffffff;
                }
                break;
            }
            uVar5 = uVar5 + 1;
            puVar6 = puVar6 + 0x1c;
        } while (uVar8 != uVar5);
        if (99 < *0x8005000) {
            _printk(0x8000143);
            return 100;
        }
        uVar5 = 0;
        pcVar7 = 0x80000a8;
        do {
            if (uVar5 == 100) goto code_r0x08001b00;
            if (*pcVar7 == '\0') {
                uVar8 = uVar5 & 0xffffffff;
                goto code_r0x08001b08;
            }
            uVar5 = uVar5 + 1;
            pcVar7 = pcVar7 + 0xe0;
        } while (uVar8 != uVar5);
    }
    uVar1 = *0x8005000 + 1;
    bVar4 = *0x8005000 < 0x65;
    *0x8005000 = uVar1;
    if (bVar4) {
code_r0x08001b08:
        uVar5 = uVar8 * 0xe0;
        if (((uVar5 | 0x10) < 0x5781) && (*(uVar8 * 0xe0 + 0x80000a8) = 1, uVar5 < 0x56a9)) {
            *(uVar8 * 0xe0 + 0x8000170) = arg1;
            if ((uVar8 != 100) && (*(obj.mi_fqos_dogs + uVar8 * 0xe0) = uVar8, (uVar5 | 4) < 0x5781)) {
                iVar2 = sp_el0;
                *(uVar8 * 0xe0 + 0x800009c) = *(iVar2 + 0x5d8);
                if (((uVar5 | 8) < 0x5781) &&
                   (*(uVar8 * 0xe0 + 0x80000a0) = *(*(iVar2 + 0x798) + 4) % 0x100000, (uVar5 | 0xc) < 0x5781)) {
                    *(uVar8 * 0xe0 + 0x80000a4) = 0;
                    *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar8 * 0xe0 + 0x18) = arg2;
                    if ((uVar5 | 0x14) < 0x5781) {
                        iVar2 = uVar8 * 0xe0;
                        *(iVar2 + 0x80000ac) = 0;
                        pcVar7 = "6fqos_wdg: insert_mi_fqos_dogs->i : %d," + iVar2;
                        pcVar7[0] = '\0';
                        pcVar7[1] = '\0';
                        pcVar7[2] = '\0';
                        pcVar7[3] = '\0';
                        pcVar7[4] = '\0';
                        pcVar7[5] = '\0';
                        pcVar7[6] = '\0';
                        pcVar7[7] = '\0';
                        pcVar7 = "6fqos_wdg: insert_mi_fqos_dogs->i : %d," + iVar2 + 0x10;
                        pcVar7[0] = '\0';
                        pcVar7[1] = '\0';
                        pcVar7[2] = '\0';
                        pcVar7[3] = '\0';
                        pcVar7[4] = '\0';
                        pcVar7[5] = '\0';
                        pcVar7[6] = '\0';
                        pcVar7[7] = '\0';
                        *(iVar2 + 0x80000e8) = 0xfffffffe0;
                        *(iVar2 + 0x80000f0) = iVar2 + 0x80000f0;
                        *(iVar2 + 0x80000f8) = iVar2 + 0x80000f0;
                        *(iVar2 + 0x8000100) = sym.do_update_timeout_request.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt;
                        init_timer_key(iVar2 + 0x8000118,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                        pcVar7 = "6fqos_wdg: insert_mi_fqos_dogs->i : %d," + iVar2 + 0x24;
                        pcVar7[0] = '\0';
                        pcVar7[1] = '\0';
                        pcVar7[2] = '\0';
                        pcVar7[3] = '\0';
                        pcVar7[4] = '\0';
                        pcVar7[5] = '\0';
                        pcVar7[6] = '\0';
                        pcVar7[7] = '\0';
                        pcVar7 = "6fqos_wdg: insert_mi_fqos_dogs->i : %d," + iVar2 + 0x1c;
                        pcVar7[0] = '\0';
                        pcVar7[1] = '\0';
                        pcVar7[2] = '\0';
                        pcVar7[3] = '\0';
                        pcVar7[4] = '\0';
                        pcVar7[5] = '\0';
                        pcVar7[6] = '\0';
                        pcVar7[7] = '\0';
                        if (_segment.ehdr != 0) {
                            _printk(0x80000b7,uVar8);
                        }
                        return uVar8;
                    }
                }
            }
        }
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(1,0x8001ca4);
        (*pcVar3)();
    }
code_r0x08001b00:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8001b04);
    (*pcVar3)();
}


// ===== sym.do_update_timeout_request @ 0x08001ca4 (size 208) =====

void sym.do_update_timeout_request(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = _seq_lseek;
    if (_segment.ehdr != 0) {
        _printk(0x80002a9,*(arg1 + -0x50),*(arg1 + -0x30),*(arg1 + -0x20));
    }
    iVar2 = *(arg1 + -0x30);
    if (((iVar2 != *(arg1 + -0x20)) && (*(arg1 + -0x44) != 0)) && (uVar3 = _segment.ehdr, (*arg1 & 1) == 0)) {
        *(arg1 + -0x20) = iVar2;
        queue_delayed_work_on(0x20,*0x8005000,arg1,(iVar2 - iVar1) + uVar3);
    }
    *(arg1 + -0x3c) = *(arg1 + -0x3c) + 1;
    if (_segment.ehdr != 0) {
        _printk(obj.mi_fqos_dogs);
    }
    return;
}


// ===== sym.freq_qos_debug_open @ 0x08001d74 (size 68) =====

void sym.freq_qos_debug_open(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = PDE_DATA();
    single_open(arg1,sym.freq_qos_debug_show.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt,uVar1);
    return;
}


// ===== sym.freq_qos_debug_show @ 0x08001db8 (size 1464) =====

uint sym.freq_qos_debug_show(int64_t arg1)

{
    uint64_t *puVar1;
    char *pcVar2;
    char *pcVar3;
    uint32_t *puVar4;
    ulong uVar5;
    uint32_t uVar6;
    code *pcVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong uVar10;
    uint32_t *in_x2;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint64_t uVar11;
    uint *puVar12;
    ulong extraout_x8;
    uint64_t uVar13;
    ulong *in_x18;
    uint64_t *puVar14;
    uint64_t *puVar15;
    int iVar16;
    uint uVar17;
    int iVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    uint32_t uStack_74;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    cpus_read_lock();
    uStack_70 = _single_release;
    seq_printf(arg1,"id:      value: stat            ");
    seq_printf(arg1,"pid[   process name]");
    seq_printf(arg1,"    \t uid time");
    seq_printf(arg1,"       out times\n");
    uVar8 = cpumask_next(0xffffffff,&uStack_70);
    *in_x2 = extraout_w8;
    if (uVar8 < extraout_w8) {
        uStack_74 = 0;
        do {
            while( true ) {
                uVar8 = uVar8 & 0xffffffff;
                iVar9 = cpufreq_cpu_get(uVar8);
                if (iVar9 != 0) break;
code_r0x08001ef8:
                uVar8 = cpumask_next(uVar8,&uStack_70);
                *in_x2 = extraout_w8_00;
                if (extraout_w8_00 <= uVar8) goto code_r0x080022f8;
            }
            puVar15 = iVar9 + 0xa0;
            uStack_70 = uStack_70 & (*(iVar9 + 8) ^ 0xffffffff);
            uVar10 = 0x8000214;
            if ((puVar15 == NULL) || (0xfffffffffffff000 < puVar15)) {
code_r0x08002344:
                _printk(uVar10,"freq_qos_debug_show");
                cpufreq_cpu_put(iVar9);
                uVar17 = 0xffffffea;
                break;
            }
            puVar1 = iVar9 + 0x110;
            uVar10 = 0x800011a;
            if ((puVar1 == NULL) || (uVar10 = 0x800011a, 0xfffffffffffff000 < puVar1)) goto code_r0x08002344;
            if ((puVar15 == *puVar15) || (puVar1 == *puVar1)) {
                seq_puts(arg1,"Empty!\n");
                cpufreq_cpu_put(iVar9);
                goto code_r0x08001ef8;
            }
            uVar10 = _raw_spin_lock_irqsave(obj.mi_fqos_lock);
            seq_printf(arg1,"---------------%s------------\n",*(uStack_74 * 8 + 0x8000490));
            puVar14 = *(iVar9 + 0xa0);
            pcVar2 = "Min_limit";
            if (*(iVar9 + 0xbc) != 1) {
                pcVar2 = "Unknown";
            }
            pcVar3 = "Max_limit";
            if (*(iVar9 + 0xbc) != 2) {
                pcVar3 = pcVar2;
            }
            if (puVar15 == puVar14) {
                iVar16 = 0;
                iVar18 = 0;
            }
            else {
                iVar18 = 0;
                iVar16 = 0;
                do {
                    uVar6 = puVar14[4];
                    uVar11 = uVar6;
                    if ((uVar6 < 100) && (puVar14[3] == 0xabcddcba)) {
                        if (100 < uVar6) goto code_r0x08002364;
                        uVar13 = uVar11 * 0xe0;
                        uVar5 = 0x8000195;
                        if (puVar14[-3] != *(iVar9 + 0xb4)) {
                            iVar18 = iVar18 + 1;
                            uVar5 = 0x8000112;
                        }
                        if ((0x5780 < (uVar13 | 4)) || (0x5780 < (uVar13 | 8))) goto code_r0x08002360;
                        if (0x5780 < (uVar13 | 0x14)) goto code_r0x08002360;
                        iVar16 = iVar16 + 1;
                        seq_printf(arg1,"%2d: %10d: %3s %15d[%15s] %15d %10lu %8d\n",iVar16,puVar14[-3],uVar5,
                                   *(uVar11 * 0xe0 + 0x800009c),
                                   "6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar11 * 0xe0 + 0x1c,
                                   *(uVar11 * 0xe0 + 0x80000a0),
                                   (_seq_lseek - *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar11 * 0xe0)) / 0xfa,
                                   *(uVar11 * 0xe0 + 0x80000ac));
                    }
                    puVar14 = *puVar14;
                } while (puVar15 != puVar14);
            }
            if (puVar15 == *puVar15) {
                puVar12 = iVar9 + 0xb8;
            }
            else {
                if (*(iVar9 + 0xbc) == 1) {
                    uVar11 = *(iVar9 + 0xa8);
                }
                else {
                    if (*(iVar9 + 0xbc) != 2) goto code_r0x0800236c;
                    uVar11 = *puVar15;
                }
                puVar12 = uVar11 - 0x18;
            }
            seq_printf(arg1,"Type=%s, Value=%d, Requests: active=%d / total=%d\n\n",pcVar3,*puVar12,iVar18,iVar16);
            puVar15 = *(iVar9 + 0x110);
            puVar4 = "Min_limit";
            if (*(iVar9 + 300) != 1) {
                puVar4 = "Unknown";
            }
            in_x2 = "Max_limit";
            if (*(iVar9 + 300) != 2) {
                in_x2 = puVar4;
            }
            if (puVar1 == puVar15) {
                iVar16 = 0;
                iVar18 = 0;
            }
            else {
                iVar18 = 0;
                iVar16 = 0;
                do {
                    uVar6 = puVar15[4];
                    uVar11 = uVar6;
                    if ((uVar6 < 100) && (puVar15[3] == 0xabcddcba)) {
                        if (100 < uVar6) {
code_r0x08002364:
    //WARNING: Does not return
                            pcVar7 = SoftwareBreakpoint(0x5512,0x8002368);
                            (*pcVar7)();
                        }
                        uVar13 = uVar11 * 0xe0;
                        uVar5 = 0x8000195;
                        if (puVar15[-3] != *(iVar9 + 0x124)) {
                            iVar18 = iVar18 + 1;
                            uVar5 = 0x8000112;
                        }
                        if ((0x5780 < (uVar13 | 4)) || (0x5780 < (uVar13 | 8))) {
code_r0x08002360:
    //WARNING: Does not return
                            pcVar7 = SoftwareBreakpoint(1,0x8002364);
                            (*pcVar7)();
                        }
                        if (0x5780 < (uVar13 | 0x14)) goto code_r0x08002360;
                        iVar16 = iVar16 + 1;
                        seq_printf(arg1,"%2d: %10d: %3s %15d[%15s] %15d %10lu %8d\n",iVar16,puVar15[-3],uVar5,
                                   *(uVar11 * 0xe0 + 0x800009c),
                                   "6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar11 * 0xe0 + 0x1c,
                                   *(uVar11 * 0xe0 + 0x80000a0),
                                   (_seq_lseek - *("6fqos_wdg: insert_mi_fqos_dogs->i : %d," + uVar11 * 0xe0)) / 0xfa,
                                   *(uVar11 * 0xe0 + 0x80000ac));
                    }
                    puVar15 = *puVar15;
                } while (puVar1 != puVar15);
            }
            if (puVar1 == *puVar1) {
                puVar12 = iVar9 + 0x128;
            }
            else {
                if (*(iVar9 + 300) == 2) {
                    uVar11 = *puVar1;
                }
                else {
                    if (*(iVar9 + 300) != 1) goto code_r0x0800236c;
                    uVar11 = *(iVar9 + 0x118);
                }
                puVar12 = uVar11 - 0x18;
            }
            uStack_74 = (uStack_74 + 1) % 3;
            seq_printf(arg1,"Type=%s, Value=%d, Requests: active=%d / total=%d\n\n",in_x2,*puVar12,iVar18,iVar16);
            _raw_spin_unlock_irqrestore(obj.mi_fqos_lock,uVar10);
            cpufreq_cpu_put(iVar9);
            auVar19 = cpumask_next(uVar8,&uStack_70);
            uVar8 = auVar19._0_8_;
            uVar17 = 0;
            *auVar19._8_8_ = extraout_x8;
        } while (auVar19._0_4_ < extraout_x8);
    }
    else {
code_r0x080022f8:
        uVar17 = 0;
    }
    cpus_read_unlock();
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar17;
    }
    __stack_chk_fail();
code_r0x0800236c:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x800,0x8002370);
    (*pcVar7)();
}


// ===== sym.__cfi_check_fail @ 0x08002380 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080023c4

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
    //switch table (4 cases) at 0x8000402
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80023d8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002404 (size 212) =====

ulong sym.init_module(void)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800035c);
    *0x8005000 = alloc_workqueue("fqos_wdg_wq",0x10,0);
    if (*0x8005000 == 0) {
        uVar1 = 0xfffffff2;
        *0x8005000 = 0;
    }
    else {
        tracepoint_probe_register
                  (__tracepoint_android_vh_freq_qos_add_request,
                   sym.mi_freq_qos_add_req.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt,0);
        tracepoint_probe_register
                  (__tracepoint_android_vh_freq_qos_update_request,
                   sym.mi_freq_qos_update_req.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt,0);
        tracepoint_probe_register
                  (__tracepoint_android_vh_freq_qos_remove_request,
                   sym.mi_freq_qos_remove_req.a0fc1f118e01b4a63da0bebee1c2b7ff.cfi_jt,0);
        *0x8005000 = proc_create("show_mi_freq_qos",0x1b4,0,obj.freq_qos_debug_proc_ops);
        uVar1 = 0;
        obj.fqos_init_suc = 0x1;
    }
    return uVar1;
}


// ===== sym.cleanup_module @ 0x080024d8 (size 88) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    obj.fqos_init_suc = 0x0;
    if (*0x8005000 != 0) {
        proc_remove();
    }
    *0x8005000 = 0;
    _printk(0x80003c6,"freq_qos_exit");
    return;
}

