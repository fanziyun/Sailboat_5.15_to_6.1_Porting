// decompiled from icc-bcm-voter by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 560) =====

//WARNING: Switch with 1 destination removed at 0x080022d4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x15b902bbeaf3be61) {
        if (arg1 < -0x218c0108fde83420) {
            if (arg1 != -0x708761f88da6c7f3) {
                if (arg1 == -0x6b3c0828daad1601) {
                    if ((pcVar1 + -0x8001268 >> 3 | pcVar1 << 0x3d) < 3) {
                        return;
                    }
                }
                else if ((arg1 == -0x3557318fb8d07b71) && ((pcVar1 + -0x80012a0 >> 3 | pcVar1 << 0x3d) < 2)) {
                    return;
                }
                goto code_r0x08002294;
            }
            pcVar2 = sym.cmp_vcd.cfd5555e020f0256ce9ef8093ee77d43.cfi_jt;
        }
        else if (arg1 == -0x218c0108fde83420) {
            pcVar2 = sym.trace_event_raw_init.cfi_jt;
        }
        else if (arg1 == -0xcdf2fca7d70a903) {
            pcVar2 = sym.qcom_icc_bcm_voter_clear_init.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08002294;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x3dd1a39e589289fe) {
        if (arg1 == 0x15b902bbeaf3be61) {
            pcVar2 = sym.qcom_icc_bcm_voter_add.cfi_jt;
        }
        else if (arg1 == 0x1731a3b9bde4b19c) {
            pcVar2 = sym.of_bcm_voter_get.cfi_jt;
        }
        else {
            if (arg1 != 0x1c2b0952efa24c7a) goto code_r0x08002294;
            pcVar2 = sym.trace_event_reg.cfi_jt;
        }
    }
    else if (arg1 == 0x3dd1a39e589289fe) {
        pcVar2 = sym.trace_raw_output_bcm_voter_commit.cfd5555e020f0256ce9ef8093ee77d43.cfi_jt;
    }
    else if (arg1 == 0x4572170542ecbbfe) {
        pcVar2 = sym.qcom_icc_bcm_voter_commit.cfi_jt;
    }
    else {
        if (arg1 != 0x5d371e75aa4f289d) goto code_r0x08002294;
        pcVar2 = sym.__traceiter_bcm_voter_commit.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002294:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80022e8);
    (*pcVar1)();
}


// ===== sym.qcom_icc_bcm_voter_add.cfi_jt @ 0x08001238 (size 8) =====

void sym.qcom_icc_bcm_voter_add.cfi_jt(code *param_1,int64_t param_2)

{
    int64_t *piVar1;
    uint64_t uVar2;
    code *pcVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 != NULL) {
        mutex_lock(obj.bcm_voter_lock);
        for (pcVar3 = _obj.bcm_voters; (pcVar3 != obj.bcm_voters && (pcVar3 + -0x60 != param_1)); pcVar3 = *pcVar3) {
        }
        mutex_unlock(obj.bcm_voter_lock);
        if (pcVar3 != obj.bcm_voters) {
            mutex_lock(param_1 + 0x10);
            piVar1 = param_2 + 0x60;
            if (piVar1 == *piVar1) {
                piVar4 = *(param_1 + 0x48);
                uVar2 = __list_add_valid(piVar1,piVar4,param_1 + 0x40);
                if ((uVar2 & 1) != 0) {
                    *(param_1 + 0x48) = piVar1;
                    *(param_2 + 0x60) = param_1 + 0x40;
                    *(param_2 + 0x68) = piVar4;
                    *piVar4 = piVar1;
                }
            }
            piVar1 = param_2 + 0x70;
            if (piVar1 == *piVar1) {
                piVar4 = *(param_1 + 0x58);
                uVar2 = __list_add_valid(piVar1,piVar4,param_1 + 0x50);
                if ((uVar2 & 1) != 0) {
                    *(param_1 + 0x58) = piVar1;
                    *(param_2 + 0x70) = param_1 + 0x50;
                    *(param_2 + 0x78) = piVar4;
                    *piVar4 = piVar1;
                }
            }
            mutex_unlock(param_1 + 0x10);
        }
    }
    return;
}


// ===== sym.trace_event_raw_init.cfi_jt @ 0x08001240 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_raw_init.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.__traceiter_bcm_voter_commit.cfi_jt @ 0x08001248 (size 8) =====

ulong sym.__traceiter_bcm_voter_commit.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80023e8;
    piVar1 = *0x80023e8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.init_module.cfi_jt @ 0x08001250 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.qcom_icc_bcm_voter_probe.cfd5555e020f0256ce9ef8093ee77d43.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.trace_raw_output_bcm_voter_commit.cfd5555e020f0256ce9ef8093ee77d43.cfi_jt @ 0x08001258 (size 8) =====

void sym.trace_raw_output_bcm_voter_commit.cfd5555e020f0256ce9ef8093ee77d43.cfi_jt
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
        trace_event_printf(param_1,"%s cmd_addr=0x%x cmd_data=0x%x cmd_wait=%u\n",iVar2 + *(iVar2 + 8),*(iVar2 + 0xc)
                           ,*(iVar2 + 0x10),*(iVar2 + 0x14));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.of_bcm_voter_get.cfi_jt @ 0x08001260 (size 8) =====

code * sym.of_bcm_voter_get.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (iVar3 = *(param_1 + 0x2f0), iVar3 == 0)) {
        pcVar2 = 0xffffffffffffffed;
    }
    else if ((param_2 == 0) || (iVar1 = of_property_match_string(iVar3,"qcom,bcm-voter-names",param_2), -1 < iVar1))
    {
        iVar3 = of_parse_phandle(iVar3,"qcom,bcm-voters");
        mutex_lock(obj.bcm_voter_lock);
        for (pcVar2 = _obj.bcm_voters; pcVar2 != obj.bcm_voters; pcVar2 = *pcVar2) {
            if (*(pcVar2 + -0x58) == iVar3) {
                pcVar2 = pcVar2 + -0x60;
                goto code_r0x08001690;
            }
        }
        pcVar2 = 0xfffffffffffffdfb;
code_r0x08001690:
        mutex_unlock(obj.bcm_voter_lock);
    }
    else {
        pcVar2 = iVar1;
    }
    return pcVar2;
}


// ===== sym.trace_event_raw_event_bcm_voter_commit.cfd5555e020f0256ce9ef8093ee77d43.cfi_jt @ 0x08001268 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08001524)

void sym.trace_event_raw_event_bcm_voter_commit.cfd5555e020f0256ce9ef8093ee77d43.cfi_jt
               (int64_t param_1,char *param_2,uint *param_3)

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
    uint *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
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
    uVar10 = *(param_1 + 0x48);
    if ((uVar10 >> 8 & 1) == 0) {
        puVar9 = param_3;
        if ((uVar10 >> 7 & 1) != 0) {
            puVar9 = NULL;
            event_triggers_call(param_1,0,0,0);
        }
        if (((uVar10 >> 6 & 1) != 0) ||
           (((uVar10 >> 9 & 1) != 0 && (uVar6 = trace_event_ignore_this_pid(param_1), (uVar6 & 1) != 0))))
        goto code_r0x08001404;
    }
    pcVar2 = "(null)";
    if (param_2 != NULL) {
        pcVar2 = param_2;
    }
    iVar5 = strlen(pcVar2);
    puVar9 = iVar5 + 1 + 0x18;
    iVar7 = trace_event_buffer_reserve(&uStack_68,param_1);
    if (iVar7 != 0) {
        *(iVar7 + 8) = (iVar5 + 1) * 0x10000 | 0x18;
        strcpy(iVar7 + 0x18,pcVar2);
        *(iVar7 + 0xc) = *param_3;
        *(iVar7 + 0x10) = param_3[1];
        *(iVar7 + 0x14) = param_3[2];
        trace_event_buffer_commit(&uStack_68);
    }
code_r0x08001404:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return;
    }
    auVar11 = __stack_chk_fail();
    iVar8 = auVar11._0_8_;
    *extraout_x18 = sym.perf_trace_bcm_voter_commit;
    pcStack_b8 = sym.perf_trace_bcm_voter_commit;
    iVar7 = sp_el0;
    pcVar2 = "(null)";
    if (auVar11._8_8_ != NULL) {
        pcVar2 = auVar11._8_8_;
    }
    iStack_c8 = *(iVar7 + 0x5e0);
    iStack_d0 = 0;
    uStack_d4 = 0;
    puStack_c0 = &stack0xffffffffffffffd0;
    iVar5 = strlen(pcVar2);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(iVar8 + 0x78);
    if ((*(iVar8 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar3 = (iVar5 + 0x24U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(iVar3,&iStack_d0,&uStack_d4);
        if (iVar7 != 0) {
            uVar6 = _trace_event_raw_init & 0x3f;
            *(iStack_d0 + 0xe8) = &puStack_c0;
            *(iStack_d0 + 0xf8) = auStack_e0;
            *(iStack_d0 + 0x100) = ~(-1L << uVar6) & 0x8001438;
            *(iStack_d0 + 0x108) = 5;
            *(iVar7 + 8) = iVar5 * 0x10000 + 0x10018;
            strcpy(iVar7 + 0x18,pcVar2);
            *(iVar7 + 0xc) = *puVar9;
            *(iVar7 + 0x10) = puVar9[1];
            *(iVar7 + 0x14) = puVar9[2];
            perf_trace_run_bpf_submit(iVar7,iVar3,uStack_d4,iVar8,1,iStack_d0,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_c8) {
        __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_00 = 0x80015b8;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_bcm_voter_commit.cfd5555e020f0256ce9ef8093ee77d43.cfi_jt @ 0x08001270 (size 8) =====

void sym.__bpf_trace_bcm_voter_commit.cfd5555e020f0256ce9ef8093ee77d43.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2();
    return;
}


// ===== sym.perf_trace_bcm_voter_commit.cfd5555e020f0256ce9ef8093ee77d43.cfi_jt @ 0x08001278 (size 8) =====

void sym.perf_trace_bcm_voter_commit.cfd5555e020f0256ce9ef8093ee77d43.cfi_jt
               (int64_t param_1,char *param_2,uint *param_3)

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
        iVar4 = (iVar6 + 0x24U & 0xfffffff8) - 4;
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
            *(iVar7 + 8) = iVar6 * 0x10000 + 0x10018;
            strcpy(iVar7 + 0x18,pcVar2);
            *(iVar7 + 0xc) = *param_3;
            *(iVar7 + 0x10) = param_3[1];
            *(iVar7 + 0x14) = param_3[2];
            perf_trace_run_bpf_submit(iVar7,iVar4,uStack_64,param_1,1,iStack_60,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail();
    uVar5 = tpidr_el2;
    *extraout_x18 = 0x80015b8;
    bpf_trace_run2(in_tmp_ldXn);
    return;
}


// ===== sym.qcom_icc_bcm_voter_commit.cfi_jt @ 0x08001280 (size 8) =====

int sym.qcom_icc_bcm_voter_commit.cfi_jt(code *param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    code cVar4;
    char cVar5;
    int iVar6;
    int iVar7;
    uint64_t uVar8;
    int64_t extraout_x1;
    code *pcVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint8_t uVar12;
    int64_t iVar13;
    code *pcVar14;
    int64_t iVar15;
    ulong uVar16;
    ulong *in_x18;
    uint64_t uVar17;
    code *pcVar18;
    code *pcVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    ulong *puVar22;
    uint64_t uVar23;
    code *pcVar24;
    ulong unaff_x30;
    uchar auVar25 [16];
    ushort uStack_3cc;
    uchar uStack_3ca;
    uchar auStack_3c8 [768];
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    uint uStack_a0;
    uint64_t auStack_98 [7];
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    auStack_98[6] = *(iVar15 + 0x5e0);
    pcVar9 = 0x300;
    uStack_a0 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_c8 = 0;
    memset(auStack_3c8,0);
    if (param_1 == NULL) {
        iVar6 = 0;
        goto code_r0x08001c8c;
    }
    mutex_lock(obj.bcm_voter_lock);
    for (pcVar14 = _obj.bcm_voters; (pcVar14 != obj.bcm_voters && (pcVar14 + -0x60 != param_1)); pcVar14 = *pcVar14) {
    }
    mutex_unlock(obj.bcm_voter_lock);
    if (pcVar14 == obj.bcm_voters) {
        iVar6 = -0x13;
        goto code_r0x08001c8c;
    }
    mutex_lock(param_1 + 0x10);
    pcVar14 = param_1 + 0x40;
    for (pcVar9 = *pcVar14; pcVar14 != pcVar9; pcVar9 = *pcVar9) {
        iVar15 = 0;
        cVar4 = param_1[0x74];
        auStack_98[4] = 0;
        auStack_98[5] = 0;
        auStack_98[2] = 0;
        auStack_98[3] = 0;
        auStack_98[0] = 0;
        auStack_98[1] = 0;
        uStack_3ca = 0;
        uStack_3cc = 0;
        do {
            iVar10 = *(pcVar9 + 0x28);
            if (iVar10 == 0) {
                uVar8 = auStack_98[iVar15 + 3];
            }
            else {
                uVar8 = auStack_98[iVar15 + 3];
                uVar11 = auStack_98[iVar15];
                uVar12 = *(&uStack_3cc + iVar15);
                pcVar24 = pcVar9 + 0x30;
                do {
                    iVar13 = *pcVar24;
                    iVar1 = iVar13 + iVar15 * 8;
                    uVar17 = *(iVar13 + 0x10e);
                    uVar23 = *(iVar13 + 0x10c) * uVar17;
                    uVar20 = *(iVar1 + 0x110) * *(pcVar9 + -8);
                    if (uVar20 == 0 || uVar23 <= uVar20) {
                        uVar21 = 0;
                        if (uVar23 != 0) {
                            uVar21 = uVar20 / uVar23;
                        }
                    }
                    else {
                        uVar21 = 1;
                    }
                    if (uVar8 <= uVar21) {
                        uVar8 = uVar21;
                    }
                    uVar20 = *(iVar1 + 0x128) * *(pcVar9 + -8);
                    if (uVar20 == 0 || uVar17 <= uVar20) {
                        uVar23 = 0;
                        if (uVar17 != 0) {
                            uVar23 = uVar20 / uVar17;
                        }
                    }
                    else {
                        uVar23 = 1;
                    }
                    if (uVar11 <= uVar23) {
                        uVar11 = uVar23;
                    }
                    iVar10 = iVar10 + -1;
                    pcVar24 = pcVar24 + 8;
                    uVar12 = *(iVar13 + iVar15 + 0x140) | uVar12;
                } while (iVar10 != 0);
                auStack_98[iVar15 + 3] = uVar8;
                auStack_98[iVar15] = uVar11;
                *(&uStack_3cc + iVar15) = uVar12;
            }
            uVar17 = *(pcVar9 + -0xc);
            uVar8 = *(pcVar9 + -0x20) * uVar8;
            uVar11 = 0;
            if (uVar17 != 0) {
                uVar11 = uVar8 / uVar17;
            }
            uVar23 = auStack_98[iVar15];
            uVar20 = 1;
            if (uVar8 == 0 || uVar17 <= uVar8) {
                uVar20 = uVar11;
            }
            *(pcVar9 + (iVar15 + -10) * 8) = uVar20;
            uVar23 = *(pcVar9 + -0x20) * uVar23;
            uVar8 = *(pcVar9 + -0xc);
            if ((uVar23 == 0) || (uVar8 <= uVar23)) {
                uVar11 = 0;
                if (uVar8 != 0) {
                    uVar11 = uVar23 / uVar8;
                }
            }
            else {
                uVar11 = 1;
            }
            pcVar24 = pcVar9 + (iVar15 + -7) * 8;
            *pcVar24 = uVar11;
            if ((*(pcVar9 + -0x18) != 0) && (uVar20 != 0 || uVar11 != 0)) {
                *(pcVar9 + (iVar15 + -10) * 8) = 0;
                cVar5 = *(&uStack_3cc + iVar15);
                uVar3 = *(pcVar9 + -0x18);
                *pcVar24 = uVar3;
                if (cVar5 != '\0') {
                    *pcVar24 = *(pcVar9 + -0x14) | uVar3;
                }
            }
            iVar15 = iVar15 + 1;
        } while (iVar15 != 3);
        if ((pcVar9[-0xf] != 0x0) || (pcVar9[-0xe] != 0x0)) {
            if (cVar4 == 0x0) {
                if ((*(pcVar9 + -0x50) != 0) || (*(pcVar9 + -0x38) != 0)) goto code_r0x080018b0;
                iVar15 = -0x30;
                uVar16 = 1;
                *(pcVar9 + -0x50) = 1;
                *(pcVar9 + -0x48) = 1;
                *(pcVar9 + -0x38) = 1;
            }
            else {
                *(pcVar9 + -0x50) = 16000;
                *(pcVar9 + -0x48) = 16000;
                iVar15 = -0x28;
                uVar16 = 16000;
                *(pcVar9 + -0x40) = 16000;
                *(pcVar9 + -0x38) = 16000;
                *(pcVar9 + -0x30) = 16000;
            }
            *(pcVar9 + iVar15) = uVar16;
        }
code_r0x080018b0:
    }
    list_sort(0,pcVar14,sym.cmp_vcd.cfd5555e020f0256ce9ef8093ee77d43.cfi_jt);
    pcVar9 = auStack_3c8;
    sym.tcs_list_gen(param_1,0,pcVar9,&uStack_c8);
    if (uStack_c8 == 0) {
        iVar6 = 0;
    }
    else {
        auVar25 = rpmh_invalidate(*param_1);
        sym.qcom_icc_bcm_log(2,auVar25,&uStack_c8);
        pcVar9 = auStack_3c8;
        iVar6 = rpmh_write_batch(*param_1,2,pcVar9,&uStack_c8);
        if ((iVar6 == -0x10) || (iVar6 == 0)) {
            pcVar24 = *pcVar14;
            while (pcVar14 != pcVar24) {
                pcVar18 = *pcVar24;
                uVar8 = __list_del_entry_valid(pcVar24);
                if ((uVar8 & 1) != 0) {
                    iVar15 = *pcVar24;
                    piVar2 = *(pcVar24 + 8);
                    *(iVar15 + 8) = piVar2;
                    *piVar2 = iVar15;
                }
                *pcVar24 = pcVar24;
                *(pcVar24 + 8) = pcVar24;
                pcVar24 = pcVar18;
            }
            pcVar24 = *(param_1 + 0x50);
            while (pcVar18 = pcVar24, param_1 + 0x50 != pcVar18) {
                pcVar24 = *pcVar18;
                if ((*(pcVar18 + -0x58) == *(pcVar18 + -0x50)) && (*(pcVar18 + -0x40) == *(pcVar18 + -0x38))) {
                    uVar8 = __list_del_entry_valid(pcVar18);
                    if ((uVar8 & 1) != 0) {
                        iVar15 = *pcVar18;
                        piVar2 = *(pcVar18 + 8);
                        *(iVar15 + 8) = piVar2;
                        *piVar2 = iVar15;
                    }
                    *pcVar18 = pcVar18;
                    *(pcVar18 + 8) = pcVar18;
                }
                else {
                    puVar22 = *(param_1 + 0x48);
                    pcVar19 = pcVar18 + -0x10;
                    pcVar9 = pcVar14;
                    uVar8 = __list_add_valid(pcVar19,puVar22);
                    if ((uVar8 & 1) != 0) {
                        *(param_1 + 0x48) = pcVar19;
                        *(pcVar18 + -0x10) = pcVar14;
                        *(pcVar18 + -8) = puVar22;
                        *puVar22 = pcVar19;
                    }
                }
            }
            if (pcVar14 != *pcVar14) {
                list_sort(0,pcVar14,sym.cmp_vcd.cfd5555e020f0256ce9ef8093ee77d43.cfi_jt);
                auVar25 = sym.tcs_list_gen(param_1,1,auStack_3c8,&uStack_c8);
                sym.qcom_icc_bcm_log(1,auVar25,&uStack_c8);
                pcVar9 = auStack_3c8;
                iVar6 = rpmh_write_batch(*param_1,1,pcVar9,&uStack_c8);
                if (iVar6 != 0) {
                    uVar16 = 0x8000443;
                    goto code_r0x08001d14;
                }
                auVar25 = sym.tcs_list_gen(param_1,2,auStack_3c8,&uStack_c8);
                sym.qcom_icc_bcm_log(0,auVar25,&uStack_c8);
                pcVar9 = auStack_3c8;
                iVar7 = rpmh_write_batch(*param_1,0,pcVar9,&uStack_c8);
                if (iVar7 != 0) {
                    _printk(0x8000525,iVar7);
                    iVar6 = iVar7;
                }
            }
        }
        else {
            uVar16 = 0x80004ad;
code_r0x08001d14:
            _printk(uVar16,iVar6);
        }
    }
    pcVar24 = *pcVar14;
    while (pcVar14 != pcVar24) {
        pcVar18 = *pcVar24;
        uVar8 = __list_del_entry_valid(pcVar24);
        if ((uVar8 & 1) != 0) {
            iVar15 = *pcVar24;
            piVar2 = *(pcVar24 + 8);
            *(iVar15 + 8) = piVar2;
            *piVar2 = iVar15;
        }
        *pcVar24 = pcVar24;
        *(pcVar24 + 8) = pcVar24;
        pcVar24 = pcVar18;
    }
    mutex_unlock(param_1 + 0x10);
code_r0x08001c8c:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) != auStack_98[6]) {
        __stack_chk_fail();
        return *(extraout_x1 + -6) - pcVar9[-6];
    }
    return iVar6;
}


// ===== sym.trace_event_reg.cfi_jt @ 0x08001288 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_reg.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcom_icc_bcm_voter_clear_init.cfi_jt @ 0x08001290 (size 8) =====

void sym.qcom_icc_bcm_voter_clear_init.cfi_jt(code *param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 != NULL) {
        mutex_lock(obj.bcm_voter_lock);
        for (pcVar1 = _obj.bcm_voters; (pcVar1 != obj.bcm_voters && (pcVar1 + -0x60 != param_1)); pcVar1 = *pcVar1) {
        }
        mutex_unlock(obj.bcm_voter_lock);
        if (pcVar1 != obj.bcm_voters) {
            mutex_lock(param_1 + 0x10);
            param_1[0x74] = 0x0;
            mutex_unlock(param_1 + 0x10);
        }
    }
    return;
}


// ===== sym.cmp_vcd.cfd5555e020f0256ce9ef8093ee77d43.cfi_jt @ 0x08001298 (size 8) =====

int sym.cmp_vcd.cfd5555e020f0256ce9ef8093ee77d43.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3)

{
    return *(param_2 + -6) - *(param_3 + -6);
}


// ===== sym.qcom_icc_bcm_voter_remove.cfd5555e020f0256ce9ef8093ee77d43.cfi_jt @ 0x080012a0 (size 8) =====

ulong sym.qcom_icc_bcm_voter_remove.cfd5555e020f0256ce9ef8093ee77d43.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong *in_x18;
    code *pcVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x300);
    mutex_lock(obj.bcm_voter_lock);
    pcVar3 = obj.bcm_voters;
    do {
        pcVar3 = *pcVar3;
        if (pcVar3 == obj.bcm_voters) goto code_r0x0800226c;
    } while (*(pcVar3 + -0x58) != iVar4);
    uVar2 = __list_del_entry_valid(pcVar3);
    if ((uVar2 & 1) != 0) {
        iVar4 = *pcVar3;
        piVar1 = *(pcVar3 + 8);
        *(iVar4 + 8) = piVar1;
        *piVar1 = iVar4;
    }
    *pcVar3 = 0xdead000000000100;
    *(pcVar3 + 8) = 0xdead000000000122;
code_r0x0800226c:
    mutex_unlock(obj.bcm_voter_lock);
    return 0;
}


// ===== sym.qcom_icc_bcm_voter_probe.cfd5555e020f0256ce9ef8093ee77d43.cfi_jt @ 0x080012a8 (size 8) =====

ulong sym.qcom_icc_bcm_voter_probe.cfd5555e020f0256ce9ef8093ee77d43.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int iVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(param_1 + 0x300);
    piVar4 = devm_kmalloc(param_1 + 0x10,0x78,0xdc0);
    if (piVar4 == NULL) {
        uVar6 = 0xfffffff4;
    }
    else {
        *piVar4 = param_1 + 0x10;
        piVar4[1] = iVar7;
        *(piVar4 + 0x74) = 1;
        iVar3 = of_property_read_variable_u32_array(iVar7,"qcom,tcs-wait",piVar4 + 0xe,1,0);
        if (iVar3 < 0) {
            *(piVar4 + 0xe) = 3;
        }
        __mutex_init(piVar4 + 2,"&voter->lock",reloc.__traceiter_bcm_voter_commit.cfi_jt);
        piVar4[8] = piVar4 + 8;
        piVar4[9] = piVar4 + 8;
        piVar4[10] = piVar4 + 10;
        piVar4[0xb] = piVar4 + 10;
        mutex_lock(obj.bcm_voter_lock);
        piVar2 = *0x8000330;
        piVar1 = piVar4 + 0xc;
        uVar5 = __list_add_valid(piVar1,*0x8000330,obj.bcm_voters);
        if ((uVar5 & 1) != 0) {
            *0x8000330 = piVar1;
            piVar4[0xc] = obj.bcm_voters;
            piVar4[0xd] = piVar2;
            *piVar2 = piVar1;
        }
        mutex_unlock(obj.bcm_voter_lock);
        uVar6 = 0;
    }
    return uVar6;
}


// ===== sym.__traceiter_bcm_voter_commit @ 0x080012b0 (size 104) =====

ulong sym.__traceiter_bcm_voter_commit(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80023e8;
    piVar1 = *0x80023e8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2,arg3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.trace_event_raw_event_bcm_voter_commit @ 0x08001320 (size 280) =====

//WARNING: Removing unreachable block (ram,0x08001524)

void sym.trace_event_raw_event_bcm_voter_commit(int64_t arg1,int64_t arg2,int64_t arg3)

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
    uint *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
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
    uVar10 = *(arg1 + 0x48);
    if ((uVar10 >> 8 & 1) == 0) {
        puVar9 = arg3;
        if ((uVar10 >> 7 & 1) != 0) {
            puVar9 = NULL;
            event_triggers_call(arg1,0,0,0);
        }
        if (((uVar10 >> 6 & 1) != 0) ||
           (((uVar10 >> 9 & 1) != 0 && (uVar6 = trace_event_ignore_this_pid(arg1), (uVar6 & 1) != 0))))
        goto code_r0x08001404;
    }
    pcVar1 = "(null)";
    if (arg2 != 0) {
        pcVar1 = arg2;
    }
    iVar5 = strlen(pcVar1);
    puVar9 = iVar5 + 1 + 0x18;
    iVar7 = trace_event_buffer_reserve(&uStack_68,arg1);
    if (iVar7 != 0) {
        *(iVar7 + 8) = (iVar5 + 1) * 0x10000 | 0x18;
        strcpy(iVar7 + 0x18,pcVar1);
        *(iVar7 + 0xc) = *arg3;
        *(iVar7 + 0x10) = *(arg3 + 4);
        *(iVar7 + 0x14) = *(arg3 + 8);
        trace_event_buffer_commit(&uStack_68);
    }
code_r0x08001404:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return;
    }
    auVar11 = __stack_chk_fail();
    iVar8 = auVar11._0_8_;
    *extraout_x18 = sym.perf_trace_bcm_voter_commit;
    pcStack_b8 = sym.perf_trace_bcm_voter_commit;
    iVar7 = sp_el0;
    pcVar1 = "(null)";
    if (auVar11._8_8_ != NULL) {
        pcVar1 = auVar11._8_8_;
    }
    iStack_c8 = *(iVar7 + 0x5e0);
    iStack_d0 = 0;
    uStack_d4 = 0;
    puStack_c0 = &stack0xffffffffffffffd0;
    iVar5 = strlen(pcVar1);
    iVar7 = tpidr_el1;
    piVar2 = iVar7 + *(iVar8 + 0x78);
    if ((*(iVar8 + 0x80) != 0) || (*piVar2 != 0)) {
        iVar3 = (iVar5 + 0x24U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(iVar3,&iStack_d0,&uStack_d4);
        if (iVar7 != 0) {
            uVar6 = _trace_event_raw_init & 0x3f;
            *(iStack_d0 + 0xe8) = &puStack_c0;
            *(iStack_d0 + 0xf8) = auStack_e0;
            *(iStack_d0 + 0x100) = ~(-1L << uVar6) & 0x8001438;
            *(iStack_d0 + 0x108) = 5;
            *(iVar7 + 8) = iVar5 * 0x10000 + 0x10018;
            strcpy(iVar7 + 0x18,pcVar1);
            *(iVar7 + 0xc) = *puVar9;
            *(iVar7 + 0x10) = puVar9[1];
            *(iVar7 + 0x14) = puVar9[2];
            perf_trace_run_bpf_submit(iVar7,iVar3,uStack_d4,iVar8,1,iStack_d0,piVar2,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_c8) {
        __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_00 = 0x80015b8;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_bcm_voter_commit @ 0x08001438 (size 396) =====

void sym.perf_trace_bcm_voter_commit(int64_t arg1,uint32_t arg2,int64_t arg3)

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
    uVar2 = 0x8000561;
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
        iVar4 = (iVar6 + 0x24U & 0xfffffff8) - 4;
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
            *(iVar7 + 8) = iVar6 * 0x10000 + 0x10018;
            strcpy(iVar7 + 0x18,uVar2);
            *(iVar7 + 0xc) = *arg3;
            *(iVar7 + 0x10) = *(arg3 + 4);
            *(iVar7 + 0x14) = *(arg3 + 8);
            perf_trace_run_bpf_submit(iVar7,iVar4,uStack_64,arg1,1,iStack_60,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail();
    uVar5 = tpidr_el2;
    *extraout_x18 = 0x80015b8;
    bpf_trace_run2(in_tmp_ldXn);
    return;
}


// ===== sym.__bpf_trace_bcm_voter_commit @ 0x080015c4 (size 36) =====

void sym.__bpf_trace_bcm_voter_commit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2();
    return;
}


// ===== sym.of_bcm_voter_get @ 0x080015e8 (size 204) =====

code * sym.of_bcm_voter_get(int64_t arg1,int64_t arg2)

{
    int iVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (iVar3 = *(arg1 + 0x2f0), iVar3 == 0)) {
        pcVar2 = 0xffffffffffffffed;
    }
    else if ((arg2 == 0) || (iVar1 = of_property_match_string(iVar3,"qcom,bcm-voter-names",arg2), -1 < iVar1)) {
        iVar3 = of_parse_phandle(iVar3,"qcom,bcm-voters");
        mutex_lock(obj.bcm_voter_lock);
        for (pcVar2 = _obj.bcm_voters; pcVar2 != obj.bcm_voters; pcVar2 = *pcVar2) {
            if (*(pcVar2 + -0x58) == iVar3) {
                pcVar2 = pcVar2 + -0x60;
                goto code_r0x08001690;
            }
        }
        pcVar2 = 0xfffffffffffffdfb;
code_r0x08001690:
        mutex_unlock(obj.bcm_voter_lock);
    }
    else {
        pcVar2 = iVar1;
    }
    return pcVar2;
}


// ===== sym.qcom_icc_bcm_voter_add @ 0x080016b4 (size 272) =====

void sym.qcom_icc_bcm_voter_add(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint64_t uVar2;
    code *pcVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        mutex_lock(obj.bcm_voter_lock);
        for (pcVar3 = _obj.bcm_voters; (pcVar3 != obj.bcm_voters && (pcVar3 + -0x60 != arg1)); pcVar3 = *pcVar3) {
        }
        mutex_unlock(obj.bcm_voter_lock);
        if (pcVar3 != obj.bcm_voters) {
            mutex_lock(arg1 + 0x10);
            piVar1 = arg2 + 0x60;
            if (piVar1 == *piVar1) {
                piVar4 = *(arg1 + 0x48);
                uVar2 = __list_add_valid(piVar1,piVar4,arg1 + 0x40);
                if ((uVar2 & 1) != 0) {
                    *(arg1 + 0x48) = piVar1;
                    *(arg2 + 0x60) = arg1 + 0x40;
                    *(arg2 + 0x68) = piVar4;
                    *piVar4 = piVar1;
                }
            }
            piVar1 = arg2 + 0x70;
            if (piVar1 == *piVar1) {
                piVar4 = *(arg1 + 0x58);
                uVar2 = __list_add_valid(piVar1,piVar4,arg1 + 0x50);
                if ((uVar2 & 1) != 0) {
                    *(arg1 + 0x58) = piVar1;
                    *(arg2 + 0x70) = arg1 + 0x50;
                    *(arg2 + 0x78) = piVar4;
                    *piVar4 = piVar1;
                }
            }
            mutex_unlock(arg1 + 0x10);
        }
    }
    return;
}


// ===== sym.qcom_icc_bcm_voter_commit @ 0x080017cc (size 1372) =====

int sym.qcom_icc_bcm_voter_commit(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    char cVar3;
    char cVar4;
    int iVar5;
    int iVar6;
    uint64_t *puVar7;
    uint64_t uVar8;
    int64_t extraout_x1;
    int64_t *piVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint8_t uVar12;
    int64_t iVar13;
    code *pcVar14;
    int64_t iVar15;
    ulong uVar16;
    ulong *in_x18;
    int64_t *piVar17;
    uint64_t uVar18;
    int64_t *piVar19;
    int64_t *piVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    ulong *puVar23;
    uint64_t uVar24;
    int64_t *piVar25;
    ulong unaff_x30;
    uchar auVar26 [16];
    ushort uStack_3cc;
    uchar uStack_3ca;
    int64_t aiStack_3c8 [96];
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    uint uStack_a0;
    uint64_t auStack_98 [7];
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    auStack_98[6] = *(iVar15 + 0x5e0);
    piVar9 = 0x300;
    uStack_a0 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_c8 = 0;
    memset(aiStack_3c8,0);
    if (arg1 == 0) {
        iVar5 = 0;
        goto code_r0x08001c8c;
    }
    mutex_lock(obj.bcm_voter_lock);
    for (pcVar14 = _obj.bcm_voters; (pcVar14 != obj.bcm_voters && (pcVar14 + -0x60 != arg1)); pcVar14 = *pcVar14) {
    }
    mutex_unlock(obj.bcm_voter_lock);
    if (pcVar14 == obj.bcm_voters) {
        iVar5 = -0x13;
        goto code_r0x08001c8c;
    }
    mutex_lock(arg1 + 0x10);
    piVar17 = arg1 + 0x40;
    for (piVar9 = *piVar17; piVar17 != piVar9; piVar9 = *piVar9) {
        iVar15 = 0;
        cVar3 = *(arg1 + 0x74);
        auStack_98[4] = 0;
        auStack_98[5] = 0;
        auStack_98[2] = 0;
        auStack_98[3] = 0;
        auStack_98[0] = 0;
        auStack_98[1] = 0;
        uStack_3ca = 0;
        uStack_3cc = 0;
        do {
            iVar10 = piVar9[5];
            if (iVar10 == 0) {
                uVar8 = auStack_98[iVar15 + 3];
            }
            else {
                uVar8 = auStack_98[iVar15 + 3];
                uVar11 = auStack_98[iVar15];
                uVar12 = *(&uStack_3cc + iVar15);
                piVar25 = piVar9 + 6;
                do {
                    iVar13 = *piVar25;
                    iVar1 = iVar13 + iVar15 * 8;
                    uVar18 = *(iVar13 + 0x10e);
                    uVar24 = *(iVar13 + 0x10c) * uVar18;
                    uVar21 = *(iVar1 + 0x110) * *(piVar9 + -1);
                    if (uVar21 == 0 || uVar24 <= uVar21) {
                        uVar22 = 0;
                        if (uVar24 != 0) {
                            uVar22 = uVar21 / uVar24;
                        }
                    }
                    else {
                        uVar22 = 1;
                    }
                    if (uVar8 <= uVar22) {
                        uVar8 = uVar22;
                    }
                    uVar21 = *(iVar1 + 0x128) * *(piVar9 + -1);
                    if (uVar21 == 0 || uVar18 <= uVar21) {
                        uVar24 = 0;
                        if (uVar18 != 0) {
                            uVar24 = uVar21 / uVar18;
                        }
                    }
                    else {
                        uVar24 = 1;
                    }
                    if (uVar11 <= uVar24) {
                        uVar11 = uVar24;
                    }
                    iVar10 = iVar10 + -1;
                    piVar25 = piVar25 + 1;
                    uVar12 = *(iVar13 + iVar15 + 0x140) | uVar12;
                } while (iVar10 != 0);
                auStack_98[iVar15 + 3] = uVar8;
                auStack_98[iVar15] = uVar11;
                *(&uStack_3cc + iVar15) = uVar12;
            }
            uVar18 = *(piVar9 + -0xc);
            uVar8 = piVar9[-4] * uVar8;
            uVar11 = 0;
            if (uVar18 != 0) {
                uVar11 = uVar8 / uVar18;
            }
            uVar24 = auStack_98[iVar15];
            uVar21 = 1;
            if (uVar8 == 0 || uVar18 <= uVar8) {
                uVar21 = uVar11;
            }
            piVar9[iVar15 + -10] = uVar21;
            uVar24 = piVar9[-4] * uVar24;
            uVar8 = *(piVar9 + -0xc);
            if ((uVar24 == 0) || (uVar8 <= uVar24)) {
                uVar11 = 0;
                if (uVar8 != 0) {
                    uVar11 = uVar24 / uVar8;
                }
            }
            else {
                uVar11 = 1;
            }
            puVar7 = piVar9 + iVar15 + -7;
            *puVar7 = uVar11;
            if ((piVar9[-3] != 0) && (uVar21 != 0 || uVar11 != 0)) {
                piVar9[iVar15 + -10] = 0;
                cVar4 = *(&uStack_3cc + iVar15);
                uVar2 = *(piVar9 + -3);
                *puVar7 = uVar2;
                if (cVar4 != '\0') {
                    *puVar7 = *(piVar9 + -0x14) | uVar2;
                }
            }
            iVar15 = iVar15 + 1;
        } while (iVar15 != 3);
        if ((*(piVar9 + -0xf) != '\0') || (*(piVar9 + -0xe) != '\0')) {
            if (cVar3 == '\0') {
                if ((piVar9[-10] != 0) || (piVar9[-7] != 0)) goto code_r0x080018b0;
                iVar15 = -0x30;
                uVar16 = 1;
                piVar9[-10] = 1;
                piVar9[-9] = 1;
                piVar9[-7] = 1;
            }
            else {
                piVar9[-10] = 16000;
                piVar9[-9] = 16000;
                iVar15 = -0x28;
                uVar16 = 16000;
                piVar9[-8] = 16000;
                piVar9[-7] = 16000;
                piVar9[-6] = 16000;
            }
            *(piVar9 + iVar15) = uVar16;
        }
code_r0x080018b0:
    }
    list_sort(0,piVar17,sym.cmp_vcd.cfd5555e020f0256ce9ef8093ee77d43.cfi_jt);
    piVar9 = aiStack_3c8;
    sym.tcs_list_gen(arg1,0,piVar9,&uStack_c8);
    if (uStack_c8 == 0) {
        iVar5 = 0;
    }
    else {
        auVar26 = rpmh_invalidate(*arg1);
        sym.qcom_icc_bcm_log(2,auVar26,&uStack_c8);
        piVar9 = aiStack_3c8;
        iVar5 = rpmh_write_batch(*arg1,2,piVar9,&uStack_c8);
        if ((iVar5 == -0x10) || (iVar5 == 0)) {
            piVar25 = *piVar17;
            while (piVar17 != piVar25) {
                piVar19 = *piVar25;
                uVar8 = __list_del_entry_valid(piVar25);
                if ((uVar8 & 1) != 0) {
                    iVar15 = *piVar25;
                    piVar20 = piVar25[1];
                    *(iVar15 + 8) = piVar20;
                    *piVar20 = iVar15;
                }
                *piVar25 = piVar25;
                piVar25[1] = piVar25;
                piVar25 = piVar19;
            }
            piVar25 = *(arg1 + 0x50);
            while (piVar19 = piVar25, arg1 + 0x50 != piVar19) {
                piVar25 = *piVar19;
                if ((piVar19[-0xb] == piVar19[-10]) && (piVar19[-8] == piVar19[-7])) {
                    uVar8 = __list_del_entry_valid(piVar19);
                    if ((uVar8 & 1) != 0) {
                        iVar15 = *piVar19;
                        piVar20 = piVar19[1];
                        *(iVar15 + 8) = piVar20;
                        *piVar20 = iVar15;
                    }
                    *piVar19 = piVar19;
                    piVar19[1] = piVar19;
                }
                else {
                    puVar23 = *(arg1 + 0x48);
                    piVar20 = piVar19 + -2;
                    piVar9 = piVar17;
                    uVar8 = __list_add_valid(piVar20,puVar23);
                    if ((uVar8 & 1) != 0) {
                        *(arg1 + 0x48) = piVar20;
                        piVar19[-2] = piVar17;
                        piVar19[-1] = puVar23;
                        *puVar23 = piVar20;
                    }
                }
            }
            if (piVar17 != *piVar17) {
                list_sort(0,piVar17,sym.cmp_vcd.cfd5555e020f0256ce9ef8093ee77d43.cfi_jt);
                auVar26 = sym.tcs_list_gen(arg1,1,aiStack_3c8,&uStack_c8);
                sym.qcom_icc_bcm_log(1,auVar26,&uStack_c8);
                piVar9 = aiStack_3c8;
                iVar5 = rpmh_write_batch(*arg1,1,piVar9,&uStack_c8);
                if (iVar5 != 0) {
                    uVar16 = 0x8000443;
                    goto code_r0x08001d14;
                }
                auVar26 = sym.tcs_list_gen(arg1,2,aiStack_3c8,&uStack_c8);
                sym.qcom_icc_bcm_log(0,auVar26,&uStack_c8);
                piVar9 = aiStack_3c8;
                iVar6 = rpmh_write_batch(*arg1,0,piVar9,&uStack_c8);
                if (iVar6 != 0) {
                    _printk(0x8000525,iVar6);
                    iVar5 = iVar6;
                }
            }
        }
        else {
            uVar16 = 0x80004ad;
code_r0x08001d14:
            _printk(uVar16,iVar5);
        }
    }
    piVar25 = *piVar17;
    while (piVar17 != piVar25) {
        piVar19 = *piVar25;
        uVar8 = __list_del_entry_valid(piVar25);
        if ((uVar8 & 1) != 0) {
            iVar15 = *piVar25;
            piVar20 = piVar25[1];
            *(iVar15 + 8) = piVar20;
            *piVar20 = iVar15;
        }
        *piVar25 = piVar25;
        piVar25[1] = piVar25;
        piVar25 = piVar19;
    }
    mutex_unlock(arg1 + 0x10);
code_r0x08001c8c:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) != auStack_98[6]) {
        __stack_chk_fail();
        return *(extraout_x1 + -6) - *(piVar9 + -6);
    }
    return iVar5;
}


// ===== sym.cmp_vcd @ 0x08001d28 (size 24) =====

int sym.cmp_vcd(ulong noname_0,int64_t arg1,int64_t arg2)

{
    return *(arg1 + -6) - *(arg2 + -6);
}


// ===== sym.tcs_list_gen @ 0x08001d40 (size 292) =====

void sym.tcs_list_gen(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    uint uVar3;
    bool bVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    int64_t iVar10;
    int iVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    
    *(arg4 + 0x28) = 0;
    *(arg4 + 0x18) = 0;
    *(arg4 + 0x20) = 0;
    *(arg4 + 8) = 0;
    *(arg4 + 0x10) = 0;
    *arg4 = 0;
    piVar8 = arg1 + 0x40;
    piVar9 = *piVar8;
    if (piVar8 != piVar9) {
        iVar10 = 0;
        iVar11 = 0;
        do {
            if ((*piVar9 == piVar8) || (*(piVar9 + -6) != *(*piVar9 + -6))) {
                iVar11 = 0;
                bVar4 = true;
                uVar13 = (1L << (arg2 & 0x3fU) & *(arg1 + 0x70)) != 0;
            }
            else {
                bVar4 = false;
                uVar13 = 0;
                iVar11 = iVar11 + 1;
            }
            if (arg3 != NULL) {
                uVar7 = piVar9[(arg2 & 0xffffffffU) - 10];
                uVar6 = piVar9[(arg2 & 0xffffffffU) - 7];
                uVar12 = 0x40000000;
                if (!bVar4) {
                    uVar12 = 0;
                }
                uVar2 = uVar7;
                if (0x3ffe < uVar7) {
                    uVar2 = 0x3fff;
                }
                uVar5 = uVar6;
                if (0x3ffe < uVar6) {
                    uVar5 = 0x3fff;
                }
                uVar3 = *(piVar9 + -0x54);
                *(arg3 + 8) = uVar13;
                *arg3 = uVar3;
                *(arg3 + 4) = uVar12 | (uVar6 != 0 || uVar7 != 0) << 0x1d | uVar5 | (uVar2 & 0x3fff) << 0xe;
            }
            iVar1 = *(arg4 + iVar10 * 4) + 1;
            *(arg4 + iVar10 * 4) = iVar1;
            if (0xf < iVar1) {
                if (bVar4) {
                    iVar10 = iVar10 + 1;
                }
                else {
                    *(arg4 + iVar10 * 4) = iVar1 - iVar11;
                    iVar10 = iVar10 + 1;
                    *(arg4 + iVar10 * 4) = iVar11;
                }
            }
            piVar9 = *piVar9;
            arg3 = arg3 + 0xc;
        } while (piVar8 != piVar9);
    }
    return;
}


// ===== sym.qcom_icc_bcm_log @ 0x08001e64 (size 360) =====

void sym.qcom_icc_bcm_log(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong uVar1;
    int64_t in_x1;
    int iVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_x1 != 0) && (arg2 != 0)) {
        iVar2 = -1;
        do {
            iVar2 = iVar2 + 1;
        } while (*(arg2 + iVar2 * 4) != 0);
        if (0 < iVar2) {
            iVar3 = 0;
            uVar1 = sp_el0;
            do {
                iVar3 = iVar3 + 1;
            } while (iVar2 != iVar3);
        }
    }
    return;
}


// ===== sym.qcom_icc_bcm_voter_clear_init @ 0x08001fe4 (size 144) =====

void sym.qcom_icc_bcm_voter_clear_init(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        mutex_lock(obj.bcm_voter_lock);
        for (pcVar1 = _obj.bcm_voters; (pcVar1 != obj.bcm_voters && (pcVar1 + -0x60 != arg1)); pcVar1 = *pcVar1) {
        }
        mutex_unlock(obj.bcm_voter_lock);
        if (pcVar1 != obj.bcm_voters) {
            mutex_lock(arg1 + 0x10);
            *(arg1 + 0x74) = 0;
            mutex_unlock(arg1 + 0x10);
        }
    }
    return;
}


// ===== sym.trace_raw_output_bcm_voter_commit @ 0x08002074 (size 120) =====

void sym.trace_raw_output_bcm_voter_commit(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"%s cmd_addr=0x%x cmd_data=0x%x cmd_wait=%u\n",iVar2 + *(iVar2 + 8),*(iVar2 + 0xc),
                           *(iVar2 + 0x10),*(iVar2 + 0x14));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.qcom_icc_bcm_voter_probe @ 0x080020ec (size 268) =====

ulong sym.qcom_icc_bcm_voter_probe(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int iVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(arg1 + 0x300);
    piVar4 = devm_kmalloc(arg1 + 0x10,0x78,0xdc0);
    if (piVar4 == NULL) {
        uVar6 = 0xfffffff4;
    }
    else {
        *piVar4 = arg1 + 0x10;
        piVar4[1] = iVar7;
        *(piVar4 + 0x74) = 1;
        iVar3 = of_property_read_variable_u32_array(iVar7,"qcom,tcs-wait",piVar4 + 0xe,1,0);
        if (iVar3 < 0) {
            *(piVar4 + 0xe) = 3;
        }
        __mutex_init(piVar4 + 2,"&voter->lock",reloc.__traceiter_bcm_voter_commit.cfi_jt);
        piVar4[8] = piVar4 + 8;
        piVar4[9] = piVar4 + 8;
        piVar4[10] = piVar4 + 10;
        piVar4[0xb] = piVar4 + 10;
        mutex_lock(obj.bcm_voter_lock);
        piVar2 = *0x8000330;
        piVar1 = piVar4 + 0xc;
        uVar5 = __list_add_valid(piVar1,*0x8000330,obj.bcm_voters);
        if ((uVar5 & 1) != 0) {
            *0x8000330 = piVar1;
            piVar4[0xc] = obj.bcm_voters;
            piVar4[0xd] = piVar2;
            *piVar2 = piVar1;
        }
        mutex_unlock(obj.bcm_voter_lock);
        uVar6 = 0;
    }
    return uVar6;
}


// ===== sym.qcom_icc_bcm_voter_remove @ 0x080021f8 (size 152) =====

ulong sym.qcom_icc_bcm_voter_remove(int64_t arg1)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong *in_x18;
    code *pcVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x300);
    mutex_lock(obj.bcm_voter_lock);
    pcVar3 = obj.bcm_voters;
    do {
        pcVar3 = *pcVar3;
        if (pcVar3 == obj.bcm_voters) goto code_r0x0800226c;
    } while (*(pcVar3 + -0x58) != iVar4);
    uVar2 = __list_del_entry_valid(pcVar3);
    if ((uVar2 & 1) != 0) {
        iVar4 = *pcVar3;
        piVar1 = *(pcVar3 + 8);
        *(iVar4 + 8) = piVar1;
        *piVar1 = iVar4;
    }
    *pcVar3 = 0xdead000000000100;
    *(pcVar3 + 8) = 0xdead000000000122;
code_r0x0800226c:
    mutex_unlock(obj.bcm_voter_lock);
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08002290 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080022d4

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
    //switch table (4 cases) at 0x8000428
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80022e8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x0800235c (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.qcom_icc_bcm_voter_probe.cfd5555e020f0256ce9ef8093ee77d43.cfi_jt,obj.__this_module);
    return;
}

