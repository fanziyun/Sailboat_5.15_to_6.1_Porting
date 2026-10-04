// decompiled from rimps_log by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 488) =====

//WARNING: Switch with 1 destination removed at 0x08001f6c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x218c0108fde83420) {
        if (arg1 < -0x550b9e52359ac614) {
            if (arg1 == -0x79593766fa995801) {
                pcVar2 = sym.__traceiter_cpucp_log.cfi_jt;
            }
            else {
                if (arg1 != -0x631f31ee7603c3b1) goto code_r0x08001f2c;
                pcVar2 = sym.rimps_log_rx.864509f23f25987c7355a634e2896b67.cfi_jt;
            }
        }
        else if (arg1 == -0x550b9e52359ac614) {
            pcVar2 = sym.rimps_log_work.864509f23f25987c7355a634e2896b67.cfi_jt;
        }
        else {
            if (arg1 == -0x3557318fb8d07b71) {
                if ((pcVar1 + -0x8001248 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08001f2c;
            }
            if (arg1 != -0x2ee0710dce68437c) goto code_r0x08001f2c;
            pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
        }
    }
    else if (arg1 < 0x1c2b0952efa24c7a) {
        if (arg1 == -0x218c0108fde83420) {
            pcVar2 = sym.trace_event_raw_init.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08001f2c;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 == 0x1c2b0952efa24c7a) {
        pcVar2 = sym.trace_event_reg.cfi_jt;
    }
    else {
        if (arg1 == 0x28b1a0a21d2910a0) {
            if ((pcVar1 + -0x8001218 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08001f2c;
        }
        if (arg1 != 0x3dd1a39e589289fe) goto code_r0x08001f2c;
        pcVar2 = sym.trace_raw_output_cpucp_log.864509f23f25987c7355a634e2896b67.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001f2c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001f80);
    (*pcVar1)();
}


// ===== sym.rimps_log_work.864509f23f25987c7355a634e2896b67.cfi_jt @ 0x080011f0 (size 8) =====

void sym.rimps_log_work.864509f23f25987c7355a634e2896b67.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    code *pcVar6;
    ulong uVar7;
    uint64_t uVar8;
    uchar *puVar9;
    int iVar10;
    uint32_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    uint32_t uVar13;
    int iVar14;
    uint32_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    uchar auStack_474 [1028];
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_70 = *(iVar1 + 0x5e0);
    memset(auStack_474,0,0x401);
    iVar1 = param_1 + 0xc0;
    uVar7 = _raw_spin_lock_irqsave(iVar1);
    if (_obj.full_buffers_list != obj.full_buffers_list) {
        uVar3 = sp_el0;
        do {
            piVar5 = _segment.ehdr;
            uVar8 = __list_del_entry_valid(_segment.ehdr);
            if ((uVar8 & 1) != 0) {
                iVar12 = *piVar5;
                piVar2 = piVar5[1];
                *(iVar12 + 8) = piVar2;
                *piVar2 = iVar12;
            }
            *piVar5 = -0x2152ffffffffff00;
            piVar5[1] = -0x2152fffffffffede;
            _raw_spin_unlock_irqrestore(iVar1,uVar7);
            iVar4 = piVar5[3];
            iVar10 = *(param_1 + 0xb8);
            iVar14 = *(piVar5 + 0x1c) - iVar10;
            iVar12 = piVar5[2] + iVar14;
            if (iVar10 != 0) {
                memcpy(iVar12,*(param_1 + 0xa8),iVar10);
                *(param_1 + 0xb8) = 0;
            }
            uVar13 = iVar4 + iVar10;
            do {
                iVar10 = -1;
                uVar15 = uVar13;
                if (0x3ff < uVar13) {
                    uVar15 = 0x400;
                }
                uVar8 = uVar15;
                do {
                    uVar11 = uVar8;
                    uVar8 = uVar11 - 1;
                    if (uVar11 - 1 < 0) {
                        if (0x3ff < uVar13) goto code_r0x08001c98;
                        *(param_1 + 0xb8) = uVar13;
                        memcpy(*(param_1 + 0xa8),iVar12,uVar13);
                        goto code_r0x08001e64;
                    }
                    iVar10 = iVar10 + 1;
                } while (*(iVar12 + uVar8) != '\n');
                *(iVar12 + uVar8) = 0;
                if (iVar10 == 0) {
code_r0x08001c98:
                    snprintf(auStack_474,uVar15 + 1,0x800039b,iVar12);
                    uVar11 = uVar15;
                }
                iVar14 = uVar11 + iVar14;
                uVar13 = uVar13 - uVar11;
                iVar12 = piVar5[2] + iVar14;
            } while (0 < uVar13);
code_r0x08001e64:
            uVar7 = _raw_spin_lock_irqsave(param_1 + 0xbc);
            piVar2 = *0x8000358;
            uVar8 = __list_add_valid(piVar5,*0x8000358);
            if ((uVar8 & 1) != 0) {
                *0x8000358 = piVar5;
                *piVar5 = obj.free_buffers_list;
                piVar5[1] = piVar2;
                *piVar2 = piVar5;
            }
            _raw_spin_unlock_irqrestore(param_1 + 0xbc,uVar7);
            uVar7 = _raw_spin_lock_irqsave(iVar1);
        } while (_obj.full_buffers_list != obj.full_buffers_list);
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar7);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_70) {
        auVar16 = __stack_chk_fail();
        puVar9 = auVar16._0_8_;
        uVar7 = tpidr_el2;
        uVar7 = tpidr_el2;
        *extraout_x18 = 0x8001ef0;
        if (puVar9 != NULL) {
            switch(*puVar9) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar9,auVar16._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x5502,0x8001f80);
        (*pcVar6)();
    }
    return;
}


// ===== sym.trace_event_raw_init.cfi_jt @ 0x080011f8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_raw_init.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x08001200 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.rimps_log_rx.864509f23f25987c7355a634e2896b67.cfi_jt @ 0x08001208 (size 8) =====

void sym.rimps_log_rx.864509f23f25987c7355a634e2896b67.cfi_jt(int64_t *param_1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *puVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *puVar8;
    ulong uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar8 = *(*param_1 + 0x98);
    iVar6 = puVar8 + 0x104;
    uVar9 = puVar8[0x1a];
    uVar3 = _raw_spin_lock_irqsave(iVar6);
    piVar2 = _segment.ehdr;
    if (_obj.free_buffers_list == obj.free_buffers_list) {
        _raw_spin_unlock_irqrestore(iVar6,uVar3);
    }
    else {
        uVar4 = __list_del_entry_valid(_segment.ehdr);
        if ((uVar4 & 1) != 0) {
            iVar7 = *piVar2;
            piVar1 = piVar2[1];
            *(iVar7 + 8) = piVar1;
            *piVar1 = iVar7;
        }
        *piVar2 = -0x2152ffffffffff00;
        piVar2[1] = -0x2152fffffffffede;
        _raw_spin_unlock_irqrestore(iVar6,uVar3);
        if (piVar2 != NULL) {
            puVar5 = *puVar8;
            uVar4 = **puVar5;
            if (puVar5[1] < uVar4) {
                if (*(puVar8 + 0x1d) < **puVar5) {
                    _printk(0x800037b,"rimps_log_rx");
                    return;
                }
                iVar7 = 1;
                iVar6 = 0;
                *(puVar8 + 0x1c) = 1;
                uVar4 = uVar4 - puVar5[1];
            }
            else {
                iVar7 = 0;
                iVar6 = 4;
                *(puVar8 + 0x1c) = 0;
            }
            __memcpy_fromio(piVar2[2] + *(piVar2 + 0x1c),puVar5[iVar7 * 2] + iVar6,uVar4 - iVar6);
            *(piVar2 + 3) = uVar4 - iVar6;
            uVar3 = _raw_spin_lock_irqsave(puVar8 + 0x21);
            piVar1 = *0x8000368;
            uVar4 = __list_add_valid(piVar2,*0x8000368,obj.full_buffers_list);
            if ((uVar4 & 1) != 0) {
                *0x8000368 = piVar2;
                *piVar2 = obj.full_buffers_list;
                piVar2[1] = piVar1;
                *piVar1 = piVar2;
            }
            _raw_spin_unlock_irqrestore(puVar8 + 0x21,uVar3);
            if ((puVar8[9] & 1) != 0) {
                return;
            }
            queue_delayed_work_on(0x20,_segment.ehdr,puVar8 + 9,0);
            return;
        }
    }
    _dev_err(uVar9,"global buffer full dropping buffers\n");
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001210 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.rimps_log_probe.864509f23f25987c7355a634e2896b67.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.trace_event_raw_event_cpucp_log.864509f23f25987c7355a634e2896b67.cfi_jt @ 0x08001218 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800149c)

void sym.trace_event_raw_event_cpucp_log.864509f23f25987c7355a634e2896b67.cfi_jt(int64_t param_1,char *param_2)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    ulong uVar4;
    ulong in_tmp_ldXn;
    int iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    uchar auStack_e0 [12];
    uint uStack_d4;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar9 = *(param_1 + 0x48);
    if ((uVar9 >> 8 & 1) == 0) {
        if ((uVar9 >> 7 & 1) != 0) {
            event_triggers_call(param_1,0,0,0);
        }
        if (((uVar9 >> 6 & 1) != 0) ||
           (((uVar9 >> 9 & 1) != 0 && (uVar6 = trace_event_ignore_this_pid(param_1), (uVar6 & 1) != 0))))
        goto code_r0x08001380;
    }
    pcVar2 = "(null)";
    if (param_2 != NULL) {
        pcVar2 = param_2;
    }
    iVar5 = strlen(pcVar2);
    iVar7 = trace_event_buffer_reserve(&uStack_68,param_1,iVar5 + 1 + 0xc);
    if (iVar7 != 0) {
        *(iVar7 + 8) = (iVar5 + 1) * 0x10000 | 0xc;
        strcpy(iVar7 + 0xc,pcVar2);
        trace_event_buffer_commit(&uStack_68);
    }
code_r0x08001380:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return;
    }
    auVar10 = __stack_chk_fail();
    iVar8 = auVar10._0_8_;
    *extraout_x18 = sym.perf_trace_cpucp_log;
    pcStack_b8 = sym.perf_trace_cpucp_log;
    iVar7 = sp_el0;
    pcVar2 = "(null)";
    if (auVar10._8_8_ != NULL) {
        pcVar2 = auVar10._8_8_;
    }
    iStack_c8 = *(iVar7 + 0x5e0);
    iStack_d0 = 0;
    uStack_d4 = 0;
    puStack_c0 = &stack0xffffffffffffffd0;
    iVar5 = strlen(pcVar2);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(iVar8 + 0x78);
    if ((*(iVar8 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar3 = (iVar5 + 0x18U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(iVar3,&iStack_d0,&uStack_d4);
        if (iVar7 != 0) {
            uVar6 = _trace_event_raw_init & 0x3f;
            *(iStack_d0 + 0xe8) = &puStack_c0;
            *(iStack_d0 + 0xf8) = auStack_e0;
            *(iStack_d0 + 0x100) = ~(-1L << uVar6) & 0x80013b4;
            *(iStack_d0 + 0x108) = 5;
            *(iVar7 + 8) = iVar5 * 0x10000 + 0x1000c;
            strcpy(iVar7 + 0xc,pcVar2);
            perf_trace_run_bpf_submit(iVar7,iVar3,uStack_d4,iVar8,1,iStack_d0,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_c8) {
        __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_00 = 0x8001518;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_cpucp_log.864509f23f25987c7355a634e2896b67.cfi_jt @ 0x08001220 (size 8) =====

void sym.perf_trace_cpucp_log.864509f23f25987c7355a634e2896b67.cfi_jt(int64_t param_1,char *param_2)

{
    int64_t *piVar1;
    char *pcVar2;
    uint64_t uVar3;
    int iVar4;
    ulong uVar5;
    ulong in_tmp_ldXn;
    int iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auStack_70 [12];
    uint uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    pcVar2 = "(null)";
    if (param_2 != NULL) {
        pcVar2 = param_2;
    }
    iStack_58 = *(iVar7 + 0x5e0);
    iStack_60 = 0;
    uStack_64 = 0;
    iVar6 = strlen(pcVar2);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar4 = (iVar6 + 0x18U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(iVar4,&iStack_60,&uStack_64);
        if (iVar7 != 0) {
            uVar8 = -1L << (_trace_event_raw_init & 0x3f);
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            *(iStack_60 + 0xf8) = auStack_70;
            uVar3 = (~uVar8 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar8 | unaff_x30;
            }
            *(iStack_60 + 0x100) = uVar3;
            *(iStack_60 + 0x108) = 5;
            *(iVar7 + 8) = iVar6 * 0x10000 + 0x1000c;
            strcpy(iVar7 + 0xc,pcVar2);
            perf_trace_run_bpf_submit(iVar7,iVar4,uStack_64,param_1,1,iStack_60,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail();
    uVar5 = tpidr_el2;
    *extraout_x18 = 0x8001518;
    bpf_trace_run1(in_tmp_ldXn);
    return;
}


// ===== sym.__bpf_trace_cpucp_log.864509f23f25987c7355a634e2896b67.cfi_jt @ 0x08001228 (size 8) =====

void sym.__bpf_trace_cpucp_log.864509f23f25987c7355a634e2896b67.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.trace_raw_output_cpucp_log.864509f23f25987c7355a634e2896b67.cfi_jt @ 0x08001230 (size 8) =====

void sym.trace_raw_output_cpucp_log.864509f23f25987c7355a634e2896b67.cfi_jt
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
        trace_event_printf(param_1,"%s\n\n",iVar2 + *(iVar2 + 8));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_event_reg.cfi_jt @ 0x08001238 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_reg.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.__traceiter_cpucp_log.cfi_jt @ 0x08001240 (size 8) =====

ulong sym.__traceiter_cpucp_log.cfi_jt(ulong param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8002008;
    piVar1 = *0x8002008;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.rimps_log_probe.864509f23f25987c7355a634e2896b67.cfi_jt @ 0x08001248 (size 8) =====

uint64_t sym.rimps_log_probe.864509f23f25987c7355a634e2896b67.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t *puVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t *piVar10;
    uint64_t uVar11;
    ulong *in_x18;
    int iVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = param_1 + 0x10;
    piVar8 = devm_kmalloc(iVar2,0x110,0xdc0);
    if (piVar8 != NULL) {
        uVar5 = *(param_1 + 0x3b8);
        piVar8[0x1a] = iVar2;
        iVar9 = __kmalloc(uVar5 << 4,0xdc0);
        if (iVar9 != 0) {
            iVar12 = *(param_1 + 0x3b8);
            *piVar8 = iVar9;
            if (iVar12 == 0) {
code_r0x080016f4:
                iVar14 = devm_kmalloc(iVar2,*(iVar9 + 8) * 4 + 0x1000,0xdc0);
                piVar8[0x1f] = iVar14;
                if (iVar14 != 0) {
                    iVar14 = devm_kmalloc(iVar2,0x400,0xdc0);
                    piVar8[0x1e] = iVar14;
                    if (iVar14 != 0) {
                        iVar12 = *(iVar9 + 8);
                        piVar10 = devm_kmalloc(piVar8[0x1a],0x80,0xdc0);
                        if (piVar10 != NULL) {
                            iVar1 = iVar12 + 0x400;
                            piVar10[2] = piVar8[0x1f];
                            piVar3 = *0x8000358;
                            *(piVar10 + 3) = iVar12;
                            *(piVar10 + 0x1c) = 0x400;
                            uVar11 = __list_add_valid(piVar10,piVar3,obj.free_buffers_list);
                            if ((uVar11 & 1) != 0) {
                                *0x8000358 = piVar10;
                                *piVar10 = obj.free_buffers_list;
                                piVar10[1] = piVar3;
                                *piVar3 = piVar10;
                            }
                            piVar7 = *0x8000358;
                            iVar9 = piVar8[0x1f];
                            piVar3 = piVar10 + 4;
                            *(piVar10 + 7) = iVar12;
                            *(piVar10 + 0x3c) = 0x400;
                            piVar10[6] = iVar9 + iVar1;
                            uVar11 = __list_add_valid(piVar3,piVar7,obj.free_buffers_list);
                            if ((uVar11 & 1) != 0) {
                                *0x8000358 = piVar3;
                                piVar10[4] = obj.free_buffers_list;
                                piVar10[5] = piVar7;
                                *piVar7 = piVar3;
                            }
                            piVar7 = *0x8000358;
                            iVar9 = piVar8[0x1f];
                            piVar3 = piVar10 + 8;
                            *(piVar10 + 0xb) = iVar12;
                            *(piVar10 + 0x5c) = 0x400;
                            piVar10[10] = iVar9 + iVar1 * 2;
                            uVar11 = __list_add_valid(piVar3,piVar7,obj.free_buffers_list);
                            if ((uVar11 & 1) != 0) {
                                *0x8000358 = piVar3;
                                piVar10[8] = obj.free_buffers_list;
                                piVar10[9] = piVar7;
                                *piVar7 = piVar3;
                            }
                            piVar7 = *0x8000358;
                            iVar9 = piVar8[0x1f];
                            piVar3 = piVar10 + 0xc;
                            *(piVar10 + 0xf) = iVar12;
                            *(piVar10 + 0x7c) = 0x400;
                            piVar10[0xe] = iVar9 + iVar1 * 3;
                            uVar11 = __list_add_valid(piVar3,piVar7,obj.free_buffers_list);
                            if ((uVar11 & 1) != 0) {
                                *0x8000358 = piVar3;
                                piVar10[0xc] = obj.free_buffers_list;
                                piVar10[0xd] = piVar7;
                                *piVar7 = piVar3;
                            }
                            *(piVar8 + 4) = 1;
                            piVar8[5] = sym.rimps_log_rx.864509f23f25987c7355a634e2896b67.cfi_jt;
                            piVar8[9] = 0xfffffffe0;
                            *(param_1 + 0xa8) = piVar8;
                            piVar8[1] = iVar2;
                            *(piVar8 + 2) = 0;
                            piVar8[10] = piVar8 + 10;
                            piVar8[0xb] = piVar8 + 10;
                            piVar8[0xc] = sym.rimps_log_work.864509f23f25987c7355a634e2896b67.cfi_jt;
                            init_timer_key(piVar8 + 0xf,sym.delayed_work_timer_fn.cfi_jt,0x280000,0,0);
                            *(piVar8 + 0x104) = 0;
                            _segment.ehdr = alloc_workqueue(0x800039b,0x4000e,1,"rimps_wq");
                            uVar11 = mbox_request_channel(piVar8 + 1,0);
                            piVar8[8] = uVar11;
                            if (uVar11 < 0xfffffffffffff001) {
                                _dev_info(iVar2,"RIMPS logging initialized\n");
                                uVar11 = 0;
                                goto code_r0x08001908;
                            }
                            if (uVar11 == -0x205) {
                                uVar11 = 0xfffffdfb;
                            }
                            else {
                                _dev_err(iVar2,"Failed to request mbox info: %d\n",uVar11 & 0xffffffff);
                            }
                            goto code_r0x08001900;
                        }
                    }
                }
                uVar11 = 0xfffffff4;
            }
            else {
                piVar10 = platform_get_resource(param_1,0x200,0);
                if (piVar10 != NULL) {
                    iVar13 = 0;
                    iVar14 = iVar9;
                    iVar12 = 0;
                    do {
                        uVar11 = devm_ioremap(iVar2,*piVar10,(piVar10[1] - *piVar10) + 1);
                        if (0xfffffffffffff000 < uVar11) {
                            _dev_err(iVar2,"Failed to io remap the region err: %d\n",uVar11 & 0xffffffff);
                            uVar11 = uVar11 & 0xffffffff;
                            goto code_r0x08001900;
                        }
                        puVar4 = iVar14 + iVar13 * 0x10;
                        *puVar4 = uVar11;
                        uVar11 = (piVar10[1] - *piVar10) + 1;
                        puVar4[1] = uVar11;
                        if ((iVar12 != 0) && (uVar11 != iVar12)) {
                            uVar11 = 0xffffffea;
                            goto code_r0x08001900;
                        }
                        uVar6 = *(param_1 + 0x3b8);
                        uVar5 = iVar13 + 1;
                        *(piVar8 + 0xe4) = *(piVar8 + 0xe4) + 1;
                        *(piVar8 + 0x1d) = piVar8[0x1d] + uVar11;
                        if (uVar6 <= uVar5) goto code_r0x080016f4;
                        iVar14 = *piVar8;
                        iVar1 = uVar11;
                        if (iVar12 != 0) {
                            iVar1 = iVar12;
                        }
                        iVar13 = uVar5;
                        piVar10 = platform_get_resource(param_1,0x200);
                        iVar12 = iVar1;
                    } while (piVar10 != NULL);
                }
                _dev_err(iVar2,"Failed to get the device base address\n");
                uVar11 = 0xffffffed;
            }
code_r0x08001900:
            kfree(*piVar8);
            goto code_r0x08001908;
        }
    }
    uVar11 = 0xfffffff4;
code_r0x08001908:
    return uVar11 & 0xffffffff;
}


// ===== sym.rimps_log_remove.864509f23f25987c7355a634e2896b67.cfi_jt @ 0x08001250 (size 8) =====

ulong sym.rimps_log_remove.864509f23f25987c7355a634e2896b67.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mbox_free_channel(*(*(param_1 + 0xa8) + 0x40));
    return 0;
}


// ===== sym.__traceiter_cpucp_log @ 0x08001258 (size 88) =====

ulong sym.__traceiter_cpucp_log(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8002008;
    piVar1 = *0x8002008;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.trace_event_raw_event_cpucp_log @ 0x080012b8 (size 252) =====

//WARNING: Removing unreachable block (ram,0x0800149c)

void sym.trace_event_raw_event_cpucp_log(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    int64_t *piVar2;
    int iVar3;
    ulong uVar4;
    ulong in_tmp_ldXn;
    int iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    uchar auStack_e0 [12];
    uint uStack_d4;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar9 = *(arg1 + 0x48);
    if ((uVar9 >> 8 & 1) == 0) {
        if ((uVar9 >> 7 & 1) != 0) {
            event_triggers_call(arg1,0,0,0);
        }
        if (((uVar9 >> 6 & 1) != 0) ||
           (((uVar9 >> 9 & 1) != 0 && (uVar6 = trace_event_ignore_this_pid(arg1), (uVar6 & 1) != 0))))
        goto code_r0x08001380;
    }
    pcVar1 = "(null)";
    if (arg2 != 0) {
        pcVar1 = arg2;
    }
    iVar5 = strlen(pcVar1);
    iVar7 = trace_event_buffer_reserve(&uStack_68,arg1,iVar5 + 1 + 0xc);
    if (iVar7 != 0) {
        *(iVar7 + 8) = (iVar5 + 1) * 0x10000 | 0xc;
        strcpy(iVar7 + 0xc,pcVar1);
        trace_event_buffer_commit(&uStack_68);
    }
code_r0x08001380:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return;
    }
    auVar10 = __stack_chk_fail();
    iVar8 = auVar10._0_8_;
    *extraout_x18 = sym.perf_trace_cpucp_log;
    pcStack_b8 = sym.perf_trace_cpucp_log;
    iVar7 = sp_el0;
    pcVar1 = "(null)";
    if (auVar10._8_8_ != NULL) {
        pcVar1 = auVar10._8_8_;
    }
    iStack_c8 = *(iVar7 + 0x5e0);
    iStack_d0 = 0;
    uStack_d4 = 0;
    puStack_c0 = &stack0xffffffffffffffd0;
    iVar5 = strlen(pcVar1);
    iVar7 = tpidr_el1;
    piVar2 = iVar7 + *(iVar8 + 0x78);
    if ((*(iVar8 + 0x80) != 0) || (*piVar2 != 0)) {
        iVar3 = (iVar5 + 0x18U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(iVar3,&iStack_d0,&uStack_d4);
        if (iVar7 != 0) {
            uVar6 = _trace_event_raw_init & 0x3f;
            *(iStack_d0 + 0xe8) = &puStack_c0;
            *(iStack_d0 + 0xf8) = auStack_e0;
            *(iStack_d0 + 0x100) = ~(-1L << uVar6) & 0x80013b4;
            *(iStack_d0 + 0x108) = 5;
            *(iVar7 + 8) = iVar5 * 0x10000 + 0x1000c;
            strcpy(iVar7 + 0xc,pcVar1);
            perf_trace_run_bpf_submit(iVar7,iVar3,uStack_d4,iVar8,1,iStack_d0,piVar2,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_c8) {
        __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_00 = 0x8001518;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_cpucp_log @ 0x080013b4 (size 368) =====

void sym.perf_trace_cpucp_log(int64_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int iVar4;
    ulong uVar5;
    ulong in_tmp_ldXn;
    int iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auStack_70 [12];
    uint uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    uVar2 = 0x800045e;
    if (arg2 != 0) {
        uVar2 = arg2;
    }
    iStack_58 = *(iVar7 + 0x5e0);
    iStack_60 = 0;
    uStack_64 = 0;
    iVar6 = strlen(uVar2);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar4 = (iVar6 + 0x18U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(iVar4,&stack0xffffffffffffffa0,&stack0xffffffffffffff9c);
        if (iVar7 != 0) {
            uVar8 = -1L << (_trace_event_raw_init & 0x3f);
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            *(iStack_60 + 0xf8) = &stack0xffffffffffffff90;
            uVar3 = (~uVar8 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar8 | unaff_x30;
            }
            *(iStack_60 + 0x100) = uVar3;
            *(iStack_60 + 0x108) = 5;
            *(iVar7 + 8) = iVar6 * 0x10000 + 0x1000c;
            strcpy(iVar7 + 0xc,uVar2);
            perf_trace_run_bpf_submit(iVar7,iVar4,uStack_64,arg1,1,iStack_60,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail();
    uVar5 = tpidr_el2;
    *extraout_x18 = 0x8001518;
    bpf_trace_run1(in_tmp_ldXn);
    return;
}


// ===== sym.__bpf_trace_cpucp_log @ 0x08001524 (size 36) =====

void sym.__bpf_trace_cpucp_log(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.trace_raw_output_cpucp_log @ 0x08001548 (size 112) =====

void sym.trace_raw_output_cpucp_log(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"%s\n\n",iVar2 + *(iVar2 + 8));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.rimps_log_probe @ 0x080015b8 (size 964) =====

uint64_t sym.rimps_log_probe(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t *puVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t *piVar10;
    uint64_t uVar11;
    ulong *in_x18;
    int iVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = arg1 + 0x10;
    piVar8 = devm_kmalloc(iVar2,0x110,0xdc0);
    if (piVar8 != NULL) {
        uVar5 = *(arg1 + 0x3b8);
        piVar8[0x1a] = iVar2;
        iVar9 = __kmalloc(uVar5 << 4,0xdc0);
        if (iVar9 != 0) {
            iVar12 = *(arg1 + 0x3b8);
            *piVar8 = iVar9;
            if (iVar12 == 0) {
code_r0x080016f4:
                iVar14 = devm_kmalloc(iVar2,*(iVar9 + 8) * 4 + 0x1000,0xdc0);
                piVar8[0x1f] = iVar14;
                if (iVar14 != 0) {
                    iVar14 = devm_kmalloc(iVar2,0x400,0xdc0);
                    piVar8[0x1e] = iVar14;
                    if (iVar14 != 0) {
                        iVar12 = *(iVar9 + 8);
                        piVar10 = devm_kmalloc(piVar8[0x1a],0x80,0xdc0);
                        if (piVar10 != NULL) {
                            iVar1 = iVar12 + 0x400;
                            piVar10[2] = piVar8[0x1f];
                            piVar3 = *0x8000358;
                            *(piVar10 + 3) = iVar12;
                            *(piVar10 + 0x1c) = 0x400;
                            uVar11 = __list_add_valid(piVar10,piVar3,obj.free_buffers_list);
                            if ((uVar11 & 1) != 0) {
                                *0x8000358 = piVar10;
                                *piVar10 = obj.free_buffers_list;
                                piVar10[1] = piVar3;
                                *piVar3 = piVar10;
                            }
                            piVar7 = *0x8000358;
                            iVar9 = piVar8[0x1f];
                            piVar3 = piVar10 + 4;
                            *(piVar10 + 7) = iVar12;
                            *(piVar10 + 0x3c) = 0x400;
                            piVar10[6] = iVar9 + iVar1;
                            uVar11 = __list_add_valid(piVar3,piVar7,obj.free_buffers_list);
                            if ((uVar11 & 1) != 0) {
                                *0x8000358 = piVar3;
                                piVar10[4] = obj.free_buffers_list;
                                piVar10[5] = piVar7;
                                *piVar7 = piVar3;
                            }
                            piVar7 = *0x8000358;
                            iVar9 = piVar8[0x1f];
                            piVar3 = piVar10 + 8;
                            *(piVar10 + 0xb) = iVar12;
                            *(piVar10 + 0x5c) = 0x400;
                            piVar10[10] = iVar9 + iVar1 * 2;
                            uVar11 = __list_add_valid(piVar3,piVar7,obj.free_buffers_list);
                            if ((uVar11 & 1) != 0) {
                                *0x8000358 = piVar3;
                                piVar10[8] = obj.free_buffers_list;
                                piVar10[9] = piVar7;
                                *piVar7 = piVar3;
                            }
                            piVar7 = *0x8000358;
                            iVar9 = piVar8[0x1f];
                            piVar3 = piVar10 + 0xc;
                            *(piVar10 + 0xf) = iVar12;
                            *(piVar10 + 0x7c) = 0x400;
                            piVar10[0xe] = iVar9 + iVar1 * 3;
                            uVar11 = __list_add_valid(piVar3,piVar7,obj.free_buffers_list);
                            if ((uVar11 & 1) != 0) {
                                *0x8000358 = piVar3;
                                piVar10[0xc] = obj.free_buffers_list;
                                piVar10[0xd] = piVar7;
                                *piVar7 = piVar3;
                            }
                            *(piVar8 + 4) = 1;
                            piVar8[5] = sym.rimps_log_rx.864509f23f25987c7355a634e2896b67.cfi_jt;
                            piVar8[9] = 0xfffffffe0;
                            *(arg1 + 0xa8) = piVar8;
                            piVar8[1] = iVar2;
                            *(piVar8 + 2) = 0;
                            piVar8[10] = piVar8 + 10;
                            piVar8[0xb] = piVar8 + 10;
                            piVar8[0xc] = sym.rimps_log_work.864509f23f25987c7355a634e2896b67.cfi_jt;
                            init_timer_key(piVar8 + 0xf,sym.delayed_work_timer_fn.cfi_jt,0x280000,0,0);
                            *(piVar8 + 0x104) = 0;
                            _segment.ehdr = alloc_workqueue(0x800039b,0x4000e,1,"rimps_wq");
                            uVar11 = mbox_request_channel(piVar8 + 1,0);
                            piVar8[8] = uVar11;
                            if (uVar11 < 0xfffffffffffff001) {
                                _dev_info(iVar2,"RIMPS logging initialized\n");
                                uVar11 = 0;
                                goto code_r0x08001908;
                            }
                            if (uVar11 == -0x205) {
                                uVar11 = 0xfffffdfb;
                            }
                            else {
                                _dev_err(iVar2,"Failed to request mbox info: %d\n",uVar11 & 0xffffffff);
                            }
                            goto code_r0x08001900;
                        }
                    }
                }
                uVar11 = 0xfffffff4;
            }
            else {
                piVar10 = platform_get_resource(arg1,0x200,0);
                if (piVar10 != NULL) {
                    iVar13 = 0;
                    iVar14 = iVar9;
                    iVar12 = 0;
                    do {
                        uVar11 = devm_ioremap(iVar2,*piVar10,(piVar10[1] - *piVar10) + 1);
                        if (0xfffffffffffff000 < uVar11) {
                            _dev_err(iVar2,"Failed to io remap the region err: %d\n",uVar11 & 0xffffffff);
                            uVar11 = uVar11 & 0xffffffff;
                            goto code_r0x08001900;
                        }
                        puVar4 = iVar14 + iVar13 * 0x10;
                        *puVar4 = uVar11;
                        uVar11 = (piVar10[1] - *piVar10) + 1;
                        puVar4[1] = uVar11;
                        if ((iVar12 != 0) && (uVar11 != iVar12)) {
                            uVar11 = 0xffffffea;
                            goto code_r0x08001900;
                        }
                        uVar6 = *(arg1 + 0x3b8);
                        uVar5 = iVar13 + 1;
                        *(piVar8 + 0xe4) = *(piVar8 + 0xe4) + 1;
                        *(piVar8 + 0x1d) = piVar8[0x1d] + uVar11;
                        if (uVar6 <= uVar5) goto code_r0x080016f4;
                        iVar14 = *piVar8;
                        iVar1 = uVar11;
                        if (iVar12 != 0) {
                            iVar1 = iVar12;
                        }
                        iVar13 = uVar5;
                        piVar10 = platform_get_resource(arg1,0x200);
                        iVar12 = iVar1;
                    } while (piVar10 != NULL);
                }
                _dev_err(iVar2,"Failed to get the device base address\n");
                uVar11 = 0xffffffed;
            }
code_r0x08001900:
            kfree(*piVar8);
            goto code_r0x08001908;
        }
    }
    uVar11 = 0xfffffff4;
code_r0x08001908:
    return uVar11 & 0xffffffff;
}


// ===== sym.rimps_log_remove @ 0x0800197c (size 48) =====

ulong sym.rimps_log_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mbox_free_channel(*(*(arg1 + 0xa8) + 0x40));
    return 0;
}


// ===== sym.rimps_log_rx @ 0x080019ac (size 440) =====

void sym.rimps_log_rx(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *puVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *puVar8;
    ulong uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar8 = *(*arg1 + 0x98);
    iVar6 = puVar8 + 0x104;
    uVar9 = puVar8[0x1a];
    uVar3 = _raw_spin_lock_irqsave(iVar6);
    piVar2 = _segment.ehdr;
    if (_obj.free_buffers_list == obj.free_buffers_list) {
        _raw_spin_unlock_irqrestore(iVar6,uVar3);
    }
    else {
        uVar4 = __list_del_entry_valid(_segment.ehdr);
        if ((uVar4 & 1) != 0) {
            iVar7 = *piVar2;
            piVar1 = piVar2[1];
            *(iVar7 + 8) = piVar1;
            *piVar1 = iVar7;
        }
        *piVar2 = -0x2152ffffffffff00;
        piVar2[1] = -0x2152fffffffffede;
        _raw_spin_unlock_irqrestore(iVar6,uVar3);
        if (piVar2 != NULL) {
            puVar5 = *puVar8;
            uVar4 = **puVar5;
            if (puVar5[1] < uVar4) {
                if (*(puVar8 + 0x1d) < **puVar5) {
                    _printk(0x800037b,"rimps_log_rx");
                    return;
                }
                iVar7 = 1;
                iVar6 = 0;
                *(puVar8 + 0x1c) = 1;
                uVar4 = uVar4 - puVar5[1];
            }
            else {
                iVar7 = 0;
                iVar6 = 4;
                *(puVar8 + 0x1c) = 0;
            }
            __memcpy_fromio(piVar2[2] + *(piVar2 + 0x1c),puVar5[iVar7 * 2] + iVar6,uVar4 - iVar6);
            *(piVar2 + 3) = uVar4 - iVar6;
            uVar3 = _raw_spin_lock_irqsave(puVar8 + 0x21);
            piVar1 = *0x8000368;
            uVar4 = __list_add_valid(piVar2,*0x8000368,obj.full_buffers_list);
            if ((uVar4 & 1) != 0) {
                *0x8000368 = piVar2;
                *piVar2 = obj.full_buffers_list;
                piVar2[1] = piVar1;
                *piVar1 = piVar2;
            }
            _raw_spin_unlock_irqrestore(puVar8 + 0x21,uVar3);
            if ((puVar8[9] & 1) != 0) {
                return;
            }
            queue_delayed_work_on(0x20,_segment.ehdr,puVar8 + 9,0);
            return;
        }
    }
    _dev_err(uVar9,"global buffer full dropping buffers\n");
    return;
}


// ===== sym.rimps_log_work @ 0x08001b68 (size 960) =====

void sym.rimps_log_work(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    code *pcVar6;
    ulong uVar7;
    uint64_t uVar8;
    uchar *puVar9;
    int iVar10;
    uint32_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    uint32_t uVar13;
    int iVar14;
    uint32_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    uchar auStack_474 [1028];
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_70 = *(iVar1 + 0x5e0);
    memset(&stack0xfffffffffffffb8c,0,0x401);
    iVar1 = arg1 + 0xc0;
    uVar7 = _raw_spin_lock_irqsave(iVar1);
    if (_obj.full_buffers_list != obj.full_buffers_list) {
        uVar3 = sp_el0;
        do {
            piVar5 = _segment.ehdr;
            uVar8 = __list_del_entry_valid(_segment.ehdr);
            if ((uVar8 & 1) != 0) {
                iVar12 = *piVar5;
                piVar2 = piVar5[1];
                *(iVar12 + 8) = piVar2;
                *piVar2 = iVar12;
            }
            *piVar5 = -0x2152ffffffffff00;
            piVar5[1] = -0x2152fffffffffede;
            _raw_spin_unlock_irqrestore(iVar1,uVar7);
            iVar4 = piVar5[3];
            iVar10 = *(arg1 + 0xb8);
            iVar14 = *(piVar5 + 0x1c) - iVar10;
            iVar12 = piVar5[2] + iVar14;
            if (iVar10 != 0) {
                memcpy(iVar12,*(arg1 + 0xa8),iVar10);
                *(arg1 + 0xb8) = 0;
            }
            uVar13 = iVar4 + iVar10;
            do {
                iVar10 = -1;
                uVar15 = uVar13;
                if (0x3ff < uVar13) {
                    uVar15 = 0x400;
                }
                uVar8 = uVar15;
                do {
                    uVar11 = uVar8;
                    uVar8 = uVar11 - 1;
                    if (uVar11 - 1 < 0) {
                        if (0x3ff < uVar13) goto code_r0x08001c98;
                        *(arg1 + 0xb8) = uVar13;
                        memcpy(*(arg1 + 0xa8),iVar12,uVar13);
                        goto code_r0x08001e64;
                    }
                    iVar10 = iVar10 + 1;
                } while (*(iVar12 + uVar8) != '\n');
                *(iVar12 + uVar8) = 0;
                if (iVar10 == 0) {
code_r0x08001c98:
                    snprintf(&stack0xfffffffffffffb8c,uVar15 + 1,0x800039b,iVar12);
                    uVar11 = uVar15;
                }
                iVar14 = uVar11 + iVar14;
                uVar13 = uVar13 - uVar11;
                iVar12 = piVar5[2] + iVar14;
            } while (0 < uVar13);
code_r0x08001e64:
            uVar7 = _raw_spin_lock_irqsave(arg1 + 0xbc);
            piVar2 = *0x8000358;
            uVar8 = __list_add_valid(piVar5,*0x8000358);
            if ((uVar8 & 1) != 0) {
                *0x8000358 = piVar5;
                *piVar5 = obj.free_buffers_list;
                piVar5[1] = piVar2;
                *piVar2 = piVar5;
            }
            _raw_spin_unlock_irqrestore(arg1 + 0xbc,uVar7);
            uVar7 = _raw_spin_lock_irqsave(iVar1);
        } while (_obj.full_buffers_list != obj.full_buffers_list);
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar7);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_70) {
        auVar16 = __stack_chk_fail();
        puVar9 = auVar16._0_8_;
        uVar7 = tpidr_el2;
        uVar7 = tpidr_el2;
        *extraout_x18 = 0x8001ef0;
        if (puVar9 != NULL) {
            switch(*puVar9) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar9,auVar16._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x5502,0x8001f80);
        (*pcVar6)();
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001f28 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001f6c

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
    //switch table (4 cases) at 0x8000370
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001f80);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001f88 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.rimps_log_probe.864509f23f25987c7355a634e2896b67.cfi_jt,obj.__this_module);
    return;
}

