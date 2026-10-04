// decompiled from secure_buffer by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 872) =====

//WARNING: Switch with 1 destination removed at 0x08004004

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x1c2b0952efa24c7a) {
        if (arg1 < -0x3521cc33629c19e6) {
            if (arg1 < -0x53ad5ddc8982beb3) {
                if (arg1 != -0x7213d81ea47bcc32) {
                    if (arg1 != -0x6a2f46c858167ad7) goto code_r0x08003fc4;
                    pcVar2 = sym.__bpf_trace_hyp_assign_batch_end.801afa04171e6efcad6cc48fd88c71f5.cfi_jt;
                    goto code_r0x08002318;
                }
                pcVar2 = sym.__traceiter_hyp_assign_batch_start.cfi_jt;
            }
            else if (arg1 == -0x53ad5ddc8982beb3) {
                pcVar2 = sym.__traceiter_hyp_assign_end.cfi_jt;
            }
            else {
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x08003fc4;
                pcVar2 = sym.qcom_secure_buffer_probe.801afa04171e6efcad6cc48fd88c71f5.cfi_jt;
            }
        }
        else if (arg1 < -0x218c0108fde83420) {
            if (arg1 == -0x3521cc33629c19e6) {
                pcVar2 = sym.msm_secure_vmid_to_string.cfi_jt;
            }
            else {
                if (arg1 != -0x27c02f02f947af67) goto code_r0x08003fc4;
                pcVar2 = sym.__traceiter_hyp_assign_info.cfi_jt;
            }
        }
        else if (arg1 == -0x218c0108fde83420) {
            pcVar2 = sym.trace_event_raw_init.cfi_jt;
        }
        else {
            if (arg1 == 0x14d57c675fc6291) {
                pcVar2 = sym.perf_trace_hyp_assign_end.801afa04171e6efcad6cc48fd88c71f5.cfi_jt;
                goto code_r0x08002318;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08003fc4;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x66552ba038433de1) {
        if (arg1 < 0x3dd1a39e589289fe) {
            if (arg1 == 0x1c2b0952efa24c7a) {
                pcVar2 = sym.trace_event_reg.cfi_jt;
            }
            else {
                if (arg1 != 0x396ec6eb9166a969) goto code_r0x08003fc4;
                pcVar2 = sym.hyp_assign_phys.cfi_jt;
            }
        }
        else {
            if (arg1 == 0x3dd1a39e589289fe) {
                if ((pcVar1 + -0x8002420 >> 3 | pcVar1 << 0x3d) < 4) {
                    return;
                }
                goto code_r0x08003fc4;
            }
            if (arg1 != 0x480956f0d9150e6a) goto code_r0x08003fc4;
            pcVar2 = sym.__traceiter_hyp_assign_batch_end.cfi_jt;
        }
    }
    else if (arg1 < 0x758e1bd5e1a82fbd) {
        if (arg1 == 0x66552ba038433de1) {
            pcVar2 = sym.perf_trace_hyp_assign_batch_start.801afa04171e6efcad6cc48fd88c71f5.cfi_jt;
            goto code_r0x08002318;
        }
        if (arg1 != 0x699a23fb28c2683c) goto code_r0x08003fc4;
        pcVar2 = sym.hyp_assign_table.cfi_jt;
    }
    else {
        if (arg1 == 0x758e1bd5e1a82fbd) {
            pcVar2 = sym.perf_trace_hyp_assign_info.801afa04171e6efcad6cc48fd88c71f5.cfi_jt;
code_r0x08002318:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08003fc4;
        }
        if (arg1 == 0x77c30cb837e57aa5) {
            pcVar2 = sym.msm_secure_get_vmid_perms.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08003fc4;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08003fc4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004018);
    (*pcVar1)();
}


// ===== sym.__traceiter_hyp_assign_end.cfi_jt @ 0x08002370 (size 8) =====

ulong sym.__traceiter_hyp_assign_end.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8004250;
    piVar1 = *0x8004250;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_hyp_assign_batch_end.cfi_jt @ 0x08002378 (size 8) =====

ulong sym.__traceiter_hyp_assign_batch_end.cfi_jt(ulong param_1,uint param_2,ulong param_3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8004208;
    piVar1 = *0x8004208;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.trace_event_raw_init.cfi_jt @ 0x08002380 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_raw_init.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.hyp_assign_phys.cfi_jt @ 0x08002388 (size 8) =====

char * sym.hyp_assign_phys.cfi_jt(uint64_t param_1,uint param_2,int64_t param_3,uint64_t param_4,int64_t param_5)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    char *pcVar5;
    ulong unaff_x30;
    uint64_t *puStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    puStack_68 = NULL;
    uStack_60 = 0;
    if (_segment.ehdr == 0) {
        pcVar5 = 0xfffffdfb;
    }
    else {
        uVar1 = sg_alloc_table(&puStack_68,1,0xcc0);
        pcVar5 = uVar1;
        if (uVar1 == 0) {
            iVar4 = _event_triggers_call >> 0xc;
            *(puStack_68 + 1) = 0;
            *(puStack_68 + 0xc) = param_2;
            *puStack_68 = ((param_1 >> 6 & 0x3ffffffffffffc0) + iVar4 * -0x40 | *puStack_68 & 3) - 0x200000000;
            uVar3 = sym.hyp_assign_table(&puStack_68,param_3,param_4 & 0xffffffff,param_5);
            pcVar5 = uVar3 & 0xffffffff;
            sg_free_table(&puStack_68);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return pcVar5;
    }
    iVar2 = __stack_chk_fail();
    if (iVar2 + 1U < 0x2d) {
        return *((iVar2 + 1U) * 8 + 0x80010e0);
    }
    return "Unknown VMID";
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002390 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_secure_buffer_probe.801afa04171e6efcad6cc48fd88c71f5.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002398 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.qcom_secure_buffer_probe.801afa04171e6efcad6cc48fd88c71f5.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.__traceiter_hyp_assign_batch_start.cfi_jt @ 0x080023a0 (size 8) =====

ulong sym.__traceiter_hyp_assign_batch_start.cfi_jt(ulong param_1,ulong param_2,uint param_3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80041c0;
    piVar1 = *0x80041c0;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_hyp_assign_info.cfi_jt @ 0x080023a8 (size 8) =====

ulong sym.__traceiter_hyp_assign_info.cfi_jt
                (ulong param_1,ulong param_2,uint param_3,ulong param_4,ulong param_5,uint param_6)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8004178;
    piVar1 = *0x8004178;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5,param_6);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.msm_secure_vmid_to_string.cfi_jt @ 0x080023b0 (size 8) =====

char * sym.msm_secure_vmid_to_string.cfi_jt(int param_1)

{
    if (param_1 + 1U < 0x2d) {
        return *((param_1 + 1U) * 8 + 0x80010e0);
    }
    return "Unknown VMID";
}


// ===== sym.perf_trace_hyp_assign_info.801afa04171e6efcad6cc48fd88c71f5.cfi_jt @ 0x080023b8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08002db0)
//WARNING: Removing unreachable block (ram,0x08002b5c)
//WARNING: Removing unreachable block (ram,0x08002fa4)

void sym.perf_trace_hyp_assign_info.801afa04171e6efcad6cc48fd88c71f5.cfi_jt
               (int64_t param_1,ulong param_2,uint32_t *param_3,ulong param_4,ulong param_5,uint32_t param_6)

{
    uint32_t uVar1;
    ulong in_tmp_ldXn;
    int64_t iVar2;
    uint64_t uVar3;
    uint32_t *puVar4;
    uint32_t *puVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    int iVar11;
    uint64_t unaff_x20;
    uint32_t uVar12;
    uint64_t unaff_x22;
    ulong uVar13;
    ulong uVar14;
    uint64_t uVar15;
    uint64_t unaff_x24;
    uint64_t uVar16;
    uint64_t unaff_x30;
    uchar auVar17 [16];
    uchar auVar18 [16];
    uchar auStack_300 [12];
    uint32_t uStack_2f4;
    int64_t iStack_2f0;
    int64_t iStack_2e8;
    ulong **ppuStack_2e0;
    code *pcStack_2d8;
    code *pcStack_2d0;
    ulong uStack_2c0;
    uchar auStack_2b8 [16];
    uint32_t *puStack_2a8;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    ulong uStack_270;
    int64_t iStack_268;
    ulong **ppuStack_260;
    ulong uStack_258;
    int64_t *piStack_250;
    uint64_t uStack_248;
    uint32_t *puStack_240;
    int64_t iStack_238;
    uchar auStack_230 [12];
    uint32_t uStack_224;
    int64_t iStack_220;
    int64_t iStack_218;
    ulong **ppuStack_210;
    code *pcStack_208;
    uint64_t uStack_200;
    ulong uStack_1f0;
    int64_t iStack_1e8;
    uint64_t uStack_1e0;
    uint32_t *puStack_1d8;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    int64_t iStack_198;
    ulong **ppuStack_190;
    ulong uStack_188;
    int64_t iStack_180;
    ulong uStack_178;
    int64_t *piStack_170;
    int64_t iStack_168;
    uchar auStack_160 [12];
    uint32_t uStack_154;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    code *pcStack_138;
    uint64_t uStack_130;
    uint64_t uStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    uint64_t uStack_110;
    int64_t iStack_108;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    ulong uStack_b8;
    uint64_t uStack_b0;
    int64_t *piStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_98;
    uchar auStack_90 [8];
    ulong uStack_88;
    ulong uStack_80;
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    uVar15 = param_6;
    uVar16 = param_3 & 0xffffffff;
    iStack_70 = 0;
    uStack_74 = 0;
    iVar2 = tpidr_el1;
    piVar7 = iVar2 + *(param_1 + 0x78);
    uStack_88 = param_4;
    uStack_80 = param_5;
    if ((*(param_1 + 0x80) != 0) || (*piVar7 != 0)) {
        iVar11 = param_3;
        uVar12 = iVar11 * 4;
        unaff_x22 = uVar12;
        uVar1 = param_6 * 4 + uVar12;
        unaff_x20 = uVar1;
        param_3 = &uStack_74;
        unaff_x24 = (param_6 * 4 + uVar1 + 0x27 & 0xfffffff8) - 4;
        iVar2 = perf_trace_buf_alloc(unaff_x24,&iStack_70);
        if (iVar2 != 0) {
            uVar12 = uVar12 + 0x1c;
            unaff_x22 = uVar12;
            uVar6 = -1L << (_trace_event_raw_init & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            uVar3 = (~uVar6 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar6 | unaff_x30;
            }
            *(iStack_70 + 0xf8) = auStack_90;
            *(iStack_70 + 0x100) = uVar3;
            *(iStack_70 + 0x108) = 5;
            *(iVar2 + 8) = iVar11;
            *(iVar2 + 0xc) = param_6;
            *(iVar2 + 0x10) = iVar11 << 0x12 | 0x1c;
            *(iVar2 + 0x14) = param_6 << 0x12 | uVar12;
            *(iVar2 + 0x18) = uVar1 + 0x1c | param_6 << 0x12;
            memcpy(iVar2 + 0x1c,param_2,-(uVar16 >> 0x1f) & 0xfffffffc00000000 | uVar16 << 2);
            uVar15 = -(param_6 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
            memcpy(iVar2 + (uVar12 & 0xfffc),uStack_88,uVar15);
            memcpy(iVar2 + *(iVar2 + 0x18),uStack_80,uVar15);
            param_3 = uStack_74;
            perf_trace_run_bpf_submit(iVar2,unaff_x24,param_3,param_1,1,iStack_70,piVar7,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar10 = auVar17._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18 = 0x800294c;
    uStack_b8 = 0x800294c;
    iVar2 = sp_el0;
    iStack_c8 = *(iVar2 + 0x5e0);
    uVar13 = *(iVar10 + 0x48);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uVar12 = uVar13;
    puStack_c0 = &stack0xffffffffffffffa0;
    uStack_b0 = unaff_x22;
    piStack_a8 = piVar7;
    uStack_a0 = unaff_x20;
    iStack_98 = param_1;
    if ((uVar12 >> 8 & 1) == 0) {
        puVar4 = param_3;
        if ((uVar12 >> 7 & 1) != 0) {
            puVar4 = NULL;
            event_triggers_call(iVar10,0,0,0);
        }
        if (((uVar12 >> 6 & 1) == 0) &&
           (((uVar12 >> 9 & 1) == 0 || (uVar16 = trace_event_ignore_this_pid(iVar10), (uVar16 & 1) == 0))))
        goto code_r0x080029cc;
    }
    else {
code_r0x080029cc:
        iVar11 = param_3;
        puVar4 = (iVar11 << 4) + 0x20;
        iVar2 = trace_event_buffer_reserve(&uStack_f8,iVar10);
        if (iVar2 != 0) {
            uVar12 = iVar11 * 8 + 0x20;
            *(iVar2 + 8) = iVar11;
            *(iVar2 + 0x10) = 0;
            *(iVar2 + 0x18) = iVar11 << 0x13 | 0x20;
            *(iVar2 + 0x1c) = uVar12 | iVar11 << 0x13;
            if (iVar11 != 0) {
                uVar16 = param_3 & 0xffffffff;
                piVar7 = auVar17._8_8_ + 8;
                iVar9 = iVar2;
                do {
                    uVar16 = uVar16 - 1;
                    *(iVar9 + 0x20) = piVar7[-1];
                    *(iVar9 + (uVar12 & 0xfff8)) = *piVar7;
                    iVar9 = iVar9 + 8;
                    *(iVar2 + 0x10) = *(iVar2 + 0x10) + *piVar7;
                    piVar7 = piVar7 + 2;
                } while (uVar16 != 0);
            }
            trace_event_buffer_commit(&uStack_f8);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar9 = auVar18._0_8_;
    *extraout_x18_00 = sym.perf_trace_hyp_assign_batch_start;
    pcStack_138 = sym.perf_trace_hyp_assign_batch_start;
    iVar2 = sp_el0;
    iStack_148 = *(iVar2 + 0x5e0);
    uVar16 = puVar4 & 0xffffffff;
    iStack_150 = 0;
    uStack_154 = 0;
    iVar2 = tpidr_el1;
    piVar7 = iVar2 + *(iVar9 + 0x78);
    ppuStack_140 = &puStack_c0;
    uStack_130 = unaff_x24;
    uStack_128 = uVar15;
    uStack_120 = uVar13;
    iStack_118 = iVar10;
    uStack_110 = param_3 & 0xffffffff;
    if ((*(iVar9 + 0x80) != 0) || (*piVar7 != 0)) {
        iVar11 = puVar4;
        puVar4 = &uStack_154;
        uVar15 = CONCAT44(0,iVar11 * 0x10 + 0x24);
        iStack_108 = auVar17._8_8_;
        iVar2 = perf_trace_buf_alloc(uVar15,&iStack_150);
        auVar17._8_8_ = iStack_108;
        auVar17._0_8_ = uVar15;
        if (iVar2 != 0) {
            uVar3 = _trace_event_raw_init & 0x3f;
            *(iStack_150 + 0xe8) = &ppuStack_140;
            *(iStack_150 + 0xf8) = auStack_160;
            uVar12 = iVar11 * 8 + 0x20;
            *(iStack_150 + 0x100) = ~(-1L << uVar3) & 0x8002a84;
            *(iStack_150 + 0x108) = 5;
            *(iVar2 + 0x18) = iVar11 << 0x13 | 0x20;
            *(iVar2 + 0x1c) = uVar12 | iVar11 << 0x13;
            *(iVar2 + 8) = iVar11;
            *(iVar2 + 0x10) = 0;
            if (iVar11 != 0) {
                uVar3 = uVar16;
                piVar8 = auVar18._8_8_ + 8;
                iVar10 = iVar2;
                do {
                    uVar3 = uVar3 - 1;
                    *(iVar10 + 0x20) = piVar8[-1];
                    *(iVar10 + (uVar12 & 0xfff8)) = *piVar8;
                    iVar10 = iVar10 + 8;
                    *(iVar2 + 0x10) = *(iVar2 + 0x10) + *piVar8;
                    piVar8 = piVar8 + 2;
                } while (uVar3 != 0);
            }
            puVar4 = uStack_154;
            perf_trace_run_bpf_submit(iVar2,uVar15,puVar4,iVar9,1,iStack_150,piVar7,0);
            auVar17._8_8_ = iStack_108;
        }
    }
    iStack_108 = auVar17._8_8_;
    uVar13 = auVar17._0_8_;
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_148) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar10 = auVar17._0_8_;
    uVar14 = tpidr_el2;
    *extraout_x18_01 = 0x8002c10;
    uStack_188 = 0x8002c10;
    iVar2 = sp_el0;
    iStack_198 = *(iVar2 + 0x5e0);
    uVar15 = auVar17._8_8_ & 0xffffffff;
    uVar14 = *(iVar10 + 0x48);
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uVar12 = uVar14;
    ppuStack_190 = &ppuStack_140;
    uStack_178 = uVar13;
    piStack_170 = piVar7;
    if ((uVar12 >> 8 & 1) == 0) {
        puVar5 = puVar4;
        if ((uVar12 >> 7 & 1) != 0) {
            puVar5 = NULL;
            iStack_180 = auVar18._8_8_;
            iStack_168 = iVar9;
            event_triggers_call(iVar10,0,0,0);
            auVar18._8_8_ = iStack_180;
            auVar18._0_8_ = iStack_168;
        }
        iStack_180 = auVar18._8_8_;
        iStack_168 = auVar18._0_8_;
        if (((uVar12 >> 6 & 1) == 0) &&
           (((uVar12 >> 9 & 1) == 0 ||
            (uVar3 = trace_event_ignore_this_pid(iVar10), auVar18._8_8_ = iStack_180, auVar18._0_8_ = iStack_168,
            (uVar3 & 1) == 0)))) goto code_r0x08002c90;
    }
    else {
code_r0x08002c90:
        iStack_180 = auVar18._8_8_;
        iStack_168 = auVar18._0_8_;
        puVar5 = 0x18;
        iVar2 = trace_event_buffer_reserve(&uStack_1c8,iVar10);
        auVar18._8_8_ = iStack_180;
        auVar18._0_8_ = iStack_168;
        if (iVar2 != 0) {
            *(iVar2 + 8) = auVar17._8_4_;
            *(iVar2 + 0x10) = puVar4;
            trace_event_buffer_commit(&uStack_1c8);
            auVar18._8_8_ = iStack_180;
            auVar18._0_8_ = iStack_168;
        }
    }
    iStack_180 = auVar18._8_8_;
    iStack_168 = auVar18._0_8_;
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_198) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar9 = auVar17._0_8_;
    *extraout_x18_02 = sym.perf_trace_hyp_assign_batch_end;
    pcStack_208 = sym.perf_trace_hyp_assign_batch_end;
    iVar2 = sp_el0;
    iStack_218 = *(iVar2 + 0x5e0);
    uVar3 = auVar17._8_8_ & 0xffffffff;
    iStack_220 = 0;
    uStack_224 = 0;
    iVar2 = tpidr_el1;
    piVar7 = iVar2 + *(iVar9 + 0x78);
    ppuStack_210 = &ppuStack_190;
    uStack_200 = uVar16;
    uStack_1f0 = uVar14;
    iStack_1e8 = iVar10;
    uStack_1e0 = uVar15;
    puStack_1d8 = puVar4;
    if ((*(iVar9 + 0x80) != 0) || (puVar4 = puVar5, *piVar7 != 0)) {
        puVar4 = &uStack_224;
        iVar2 = perf_trace_buf_alloc(0x1c,&iStack_220);
        uVar15 = _trace_event_raw_init;
        if (iVar2 != 0) {
            *(iStack_220 + 0xe8) = &ppuStack_210;
            puVar4 = uStack_224;
            *(iStack_220 + 0xf8) = auStack_230;
            *(iStack_220 + 0x100) = ~(-1L << (uVar15 & 0x3f)) & 0x8002ce8;
            *(iStack_220 + 0x108) = 5;
            *(iVar2 + 8) = auVar17._8_4_;
            *(iVar2 + 0x10) = puVar5;
            perf_trace_run_bpf_submit(iVar2,0x1c,puVar4,iVar9,1,iStack_220,piVar7,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_218) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar10 = auVar17._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18_03 = 0x8002e08;
    uStack_258 = 0x8002e08;
    iVar2 = sp_el0;
    iStack_268 = *(iVar2 + 0x5e0);
    uVar13 = *(iVar10 + 0x48);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    uVar12 = uVar13;
    ppuStack_260 = &ppuStack_210;
    piStack_250 = piVar7;
    uStack_248 = uVar3;
    puStack_240 = puVar5;
    iStack_238 = iVar9;
    if ((uVar12 >> 8 & 1) == 0) {
        puVar5 = puVar4;
        if ((uVar12 >> 7 & 1) != 0) {
            puVar5 = NULL;
            event_triggers_call(iVar10,0,0,0);
        }
        if (((uVar12 >> 6 & 1) != 0) ||
           (((uVar12 >> 9 & 1) != 0 && (uVar15 = trace_event_ignore_this_pid(iVar10), (uVar15 & 1) != 0))))
        goto code_r0x08002ea8;
    }
    puVar5 = 0x18;
    iVar2 = trace_event_buffer_reserve(&uStack_298,iVar10);
    if (iVar2 != 0) {
        *(iVar2 + 8) = auVar17._8_8_;
        *(iVar2 + 0x10) = puVar4;
        trace_event_buffer_commit(&uStack_298);
    }
code_r0x08002ea8:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_268) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar10 = auVar18._0_8_;
    *extraout_x18_04 = sym.perf_trace_hyp_assign_end;
    pcStack_2d8 = sym.perf_trace_hyp_assign_end;
    pcStack_2d0 = sym.perf_trace_hyp_assign_batch_end;
    iVar2 = sp_el0;
    iStack_2e8 = *(iVar2 + 0x5e0);
    iStack_2f0 = 0;
    uStack_2f4 = 0;
    iVar2 = tpidr_el1;
    piVar7 = iVar2 + *(iVar10 + 0x78);
    ppuStack_2e0 = &ppuStack_260;
    uStack_2c0 = uVar13;
    puStack_2a8 = puVar4;
    auStack_2b8 = auVar17;
    if ((*(iVar10 + 0x80) != 0) || (puVar4 = puVar5, *piVar7 != 0)) {
        puVar4 = &uStack_2f4;
        iVar2 = perf_trace_buf_alloc(0x1c,&iStack_2f0,puVar4);
        uVar15 = _trace_event_raw_init;
        if (iVar2 != 0) {
            *(iStack_2f0 + 0xe8) = &ppuStack_2e0;
            puVar4 = uStack_2f4;
            *(iStack_2f0 + 0xf8) = auStack_300;
            *(iStack_2f0 + 0x100) = ~(-1L << (uVar15 & 0x3f)) & 0x8002edc;
            *(iStack_2f0 + 0x108) = 5;
            *(iVar2 + 8) = auVar18._8_8_;
            *(iVar2 + 0x10) = puVar5;
            perf_trace_run_bpf_submit(iVar2,0x1c,puVar4,iVar10,1,iStack_2f0,piVar7,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_2e8) {
        auVar17 = __stack_chk_fail();
        uVar13 = tpidr_el2;
        *extraout_x18_05 = 0x8002ff8;
        bpf_trace_run5(in_tmp_ldXn,auVar17._0_8_,auVar17._8_8_,puVar4 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_hyp_assign_info.801afa04171e6efcad6cc48fd88c71f5.cfi_jt @ 0x080023c0 (size 8) =====

void sym.__bpf_trace_hyp_assign_info.801afa04171e6efcad6cc48fd88c71f5.cfi_jt
               (ulong param_1,ulong param_2,uint param_3,ulong param_4,ulong param_5,uint param_6)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run5(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
}


// ===== sym.trace_event_raw_event_hyp_assign_info.801afa04171e6efcad6cc48fd88c71f5.cfi_jt @ 0x080023c8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08002db0)
//WARNING: Removing unreachable block (ram,0x08002888)
//WARNING: Removing unreachable block (ram,0x08002b5c)
//WARNING: Removing unreachable block (ram,0x08002fa4)

void sym.trace_event_raw_event_hyp_assign_info.801afa04171e6efcad6cc48fd88c71f5.cfi_jt
               (uint64_t param_1,uint64_t param_2,uint32_t *param_3,uint64_t param_4,ulong param_5,uint64_t param_6
               )

{
    uint32_t uVar1;
    ulong in_tmp_ldXn;
    uint64_t uVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    uint32_t *puVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    int iVar11;
    int iVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    ulong uVar15;
    ulong uVar16;
    int iVar17;
    uint64_t uVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    uchar auVar20 [16];
    uchar auStack_390 [12];
    uint32_t uStack_384;
    int64_t iStack_380;
    int64_t iStack_378;
    ulong **ppuStack_370;
    code *pcStack_368;
    code *pcStack_360;
    ulong uStack_350;
    uchar auStack_348 [16];
    uint32_t *puStack_338;
    ulong uStack_328;
    ulong uStack_320;
    ulong uStack_318;
    ulong uStack_310;
    ulong uStack_308;
    ulong uStack_300;
    int64_t iStack_2f8;
    ulong **ppuStack_2f0;
    ulong uStack_2e8;
    int64_t *piStack_2e0;
    uint64_t uStack_2d8;
    uint32_t *puStack_2d0;
    int64_t iStack_2c8;
    uchar auStack_2c0 [12];
    uint32_t uStack_2b4;
    int64_t iStack_2b0;
    int64_t iStack_2a8;
    ulong **ppuStack_2a0;
    code *pcStack_298;
    uint64_t uStack_290;
    ulong uStack_280;
    int64_t iStack_278;
    uint64_t uStack_270;
    uint32_t *puStack_268;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    int64_t iStack_228;
    ulong **ppuStack_220;
    ulong uStack_218;
    int64_t iStack_210;
    ulong uStack_208;
    int64_t *piStack_200;
    int64_t iStack_1f8;
    uchar auStack_1f0 [12];
    uint32_t uStack_1e4;
    int64_t iStack_1e0;
    int64_t iStack_1d8;
    ulong **ppuStack_1d0;
    code *pcStack_1c8;
    uint64_t uStack_1c0;
    uint64_t uStack_1b8;
    ulong uStack_1b0;
    int64_t iStack_1a8;
    uint64_t uStack_1a0;
    int64_t iStack_198;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    int64_t iStack_158;
    uchar **ppuStack_150;
    ulong uStack_148;
    uint64_t uStack_140;
    int64_t *piStack_138;
    uint64_t uStack_130;
    int64_t iStack_128;
    uchar auStack_120 [8];
    uint64_t uStack_118;
    ulong uStack_110;
    uint32_t uStack_104;
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar14 = *(param_1 + 0x48);
    uVar6 = param_4;
    uVar15 = param_5;
    uVar13 = param_6;
    if ((uVar14 >> 8 & 1) == 0) {
        puVar4 = param_3;
        if ((uVar14 >> 7 & 1) != 0) {
            puVar4 = NULL;
            uVar6 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar14 >> 6 & 1) == 0) &&
           (((uVar14 >> 9 & 1) == 0 || (uVar2 = trace_event_ignore_this_pid(param_1), (uVar2 & 1) == 0))))
        goto code_r0x080026c0;
    }
    else {
code_r0x080026c0:
        iVar17 = param_3;
        iVar12 = param_6;
        iVar11 = iVar12 * 4 + iVar17 * 4;
        puVar4 = iVar11 + iVar12 * 4 + 0x1c;
        uVar2 = trace_event_buffer_reserve(&uStack_88,param_1);
        if (uVar2 != 0) {
            uVar14 = iVar17 * 4 + 0x1c;
            *(uVar2 + 0x10) = iVar17 << 0x12 | 0x1c;
            *(uVar2 + 0x14) = iVar12 << 0x12 | uVar14;
            *(uVar2 + 0x18) = iVar11 + 0x1cU | iVar12 << 0x12;
            *(uVar2 + 8) = iVar17;
            *(uVar2 + 0xc) = iVar12;
            memcpy(uVar2 + 0x1c,param_2,
                   -((param_3 & 0xffffffff) >> 0x1f) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2);
            puVar4 = -((param_6 & 0xffffffff) >> 0x1f) & 0xfffffffc00000000 | (param_6 & 0xffffffff) << 2;
            memcpy(uVar2 + (uVar14 & 0xfffc),param_4,puVar4);
            memcpy(uVar2 + *(uVar2 + 0x18),param_5);
            trace_event_buffer_commit(&uStack_88);
            param_1 = uVar2;
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar9 = auVar19._0_8_;
    *extraout_x18 = sym.perf_trace_hyp_assign_info;
    pcStack_e8 = sym.perf_trace_hyp_assign_info;
    iVar3 = sp_el0;
    iStack_f8 = *(iVar3 + 0x5e0);
    uVar2 = uVar13 & 0xffffffff;
    uVar18 = puVar4 & 0xffffffff;
    iStack_100 = 0;
    uStack_104 = 0;
    iVar3 = tpidr_el1;
    piVar7 = iVar3 + *(iVar9 + 0x78);
    uStack_118 = uVar6;
    uStack_110 = uVar15;
    puStack_f0 = &stack0xffffffffffffffb0;
    if ((*(iVar9 + 0x80) != 0) || (*piVar7 != 0)) {
        iVar12 = puVar4;
        uVar14 = iVar12 * 4;
        param_2 = uVar14;
        iVar11 = uVar13;
        uVar1 = iVar11 * 4 + uVar14;
        param_4 = uVar1;
        puVar4 = &uStack_104;
        param_1 = (iVar11 * 4 + uVar1 + 0x27 & 0xfffffff8) - 4;
        iVar3 = perf_trace_buf_alloc(param_1,&iStack_100);
        if (iVar3 != 0) {
            uVar14 = uVar14 + 0x1c;
            param_2 = uVar14;
            uVar6 = _trace_event_raw_init & 0x3f;
            *(iStack_100 + 0xe8) = &puStack_f0;
            *(iStack_100 + 0xf8) = auStack_120;
            *(iStack_100 + 0x100) = ~(-1L << uVar6) & 0x8002794;
            *(iStack_100 + 0x108) = 5;
            *(iVar3 + 8) = iVar12;
            *(iVar3 + 0xc) = iVar11;
            *(iVar3 + 0x10) = iVar12 << 0x12 | 0x1c;
            *(iVar3 + 0x14) = iVar11 << 0x12 | uVar14;
            *(iVar3 + 0x18) = uVar1 + 0x1c | iVar11 << 0x12;
            memcpy(iVar3 + 0x1c,auVar19._8_8_,-(uVar18 >> 0x1f) & 0xfffffffc00000000 | uVar18 << 2);
            uVar2 = -(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar2 << 2;
            memcpy(iVar3 + (uVar14 & 0xfffc),uStack_118,uVar2);
            memcpy(iVar3 + *(iVar3 + 0x18),uStack_110,uVar2);
            puVar4 = uStack_104;
            perf_trace_run_bpf_submit(iVar3,param_1,puVar4,iVar9,1,iStack_100,piVar7,0);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar10 = auVar19._0_8_;
    uVar15 = tpidr_el2;
    *extraout_x18_00 = 0x800294c;
    uStack_148 = 0x800294c;
    iVar3 = sp_el0;
    iStack_158 = *(iVar3 + 0x5e0);
    uVar15 = *(iVar10 + 0x48);
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uVar14 = uVar15;
    ppuStack_150 = &puStack_f0;
    uStack_140 = param_2;
    piStack_138 = piVar7;
    uStack_130 = param_4;
    iStack_128 = iVar9;
    if ((uVar14 >> 8 & 1) == 0) {
        puVar5 = puVar4;
        if ((uVar14 >> 7 & 1) != 0) {
            puVar5 = NULL;
            event_triggers_call(iVar10,0,0,0);
        }
        if (((uVar14 >> 6 & 1) == 0) &&
           (((uVar14 >> 9 & 1) == 0 || (uVar6 = trace_event_ignore_this_pid(iVar10), (uVar6 & 1) == 0))))
        goto code_r0x080029cc;
    }
    else {
code_r0x080029cc:
        iVar11 = puVar4;
        puVar5 = (iVar11 << 4) + 0x20;
        iVar3 = trace_event_buffer_reserve(&uStack_188,iVar10);
        if (iVar3 != 0) {
            uVar14 = iVar11 * 8 + 0x20;
            *(iVar3 + 8) = iVar11;
            *(iVar3 + 0x10) = 0;
            *(iVar3 + 0x18) = iVar11 << 0x13 | 0x20;
            *(iVar3 + 0x1c) = uVar14 | iVar11 << 0x13;
            if (iVar11 != 0) {
                uVar6 = puVar4 & 0xffffffff;
                piVar7 = auVar19._8_8_ + 8;
                iVar9 = iVar3;
                do {
                    uVar6 = uVar6 - 1;
                    *(iVar9 + 0x20) = piVar7[-1];
                    *(iVar9 + (uVar14 & 0xfff8)) = *piVar7;
                    iVar9 = iVar9 + 8;
                    *(iVar3 + 0x10) = *(iVar3 + 0x10) + *piVar7;
                    piVar7 = piVar7 + 2;
                } while (uVar6 != 0);
            }
            trace_event_buffer_commit(&uStack_188);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_158) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar9 = auVar20._0_8_;
    *extraout_x18_01 = sym.perf_trace_hyp_assign_batch_start;
    pcStack_1c8 = sym.perf_trace_hyp_assign_batch_start;
    iVar3 = sp_el0;
    iStack_1d8 = *(iVar3 + 0x5e0);
    uVar6 = puVar5 & 0xffffffff;
    iStack_1e0 = 0;
    uStack_1e4 = 0;
    iVar3 = tpidr_el1;
    piVar7 = iVar3 + *(iVar9 + 0x78);
    ppuStack_1d0 = &ppuStack_150;
    uStack_1c0 = param_1;
    uStack_1b8 = uVar2;
    uStack_1b0 = uVar15;
    iStack_1a8 = iVar10;
    uStack_1a0 = puVar4 & 0xffffffff;
    if ((*(iVar9 + 0x80) != 0) || (*piVar7 != 0)) {
        iVar11 = puVar5;
        puVar5 = &uStack_1e4;
        uVar13 = CONCAT44(0,iVar11 * 0x10 + 0x24);
        iStack_198 = auVar19._8_8_;
        iVar3 = perf_trace_buf_alloc(uVar13,&iStack_1e0);
        auVar19._8_8_ = iStack_198;
        auVar19._0_8_ = uVar13;
        if (iVar3 != 0) {
            uVar2 = _trace_event_raw_init & 0x3f;
            *(iStack_1e0 + 0xe8) = &ppuStack_1d0;
            *(iStack_1e0 + 0xf8) = auStack_1f0;
            uVar14 = iVar11 * 8 + 0x20;
            *(iStack_1e0 + 0x100) = ~(-1L << uVar2) & 0x8002a84;
            *(iStack_1e0 + 0x108) = 5;
            *(iVar3 + 0x18) = iVar11 << 0x13 | 0x20;
            *(iVar3 + 0x1c) = uVar14 | iVar11 << 0x13;
            *(iVar3 + 8) = iVar11;
            *(iVar3 + 0x10) = 0;
            if (iVar11 != 0) {
                uVar2 = uVar6;
                piVar8 = auVar20._8_8_ + 8;
                iVar10 = iVar3;
                do {
                    uVar2 = uVar2 - 1;
                    *(iVar10 + 0x20) = piVar8[-1];
                    *(iVar10 + (uVar14 & 0xfff8)) = *piVar8;
                    iVar10 = iVar10 + 8;
                    *(iVar3 + 0x10) = *(iVar3 + 0x10) + *piVar8;
                    piVar8 = piVar8 + 2;
                } while (uVar2 != 0);
            }
            puVar5 = uStack_1e4;
            perf_trace_run_bpf_submit(iVar3,uVar13,puVar5,iVar9,1,iStack_1e0,piVar7,0);
            auVar19._8_8_ = iStack_198;
        }
    }
    iStack_198 = auVar19._8_8_;
    uVar15 = auVar19._0_8_;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_1d8) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar10 = auVar19._0_8_;
    uVar16 = tpidr_el2;
    *extraout_x18_02 = 0x8002c10;
    uStack_218 = 0x8002c10;
    iVar3 = sp_el0;
    iStack_228 = *(iVar3 + 0x5e0);
    uVar13 = auVar19._8_8_ & 0xffffffff;
    uVar16 = *(iVar10 + 0x48);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uVar14 = uVar16;
    ppuStack_220 = &ppuStack_1d0;
    uStack_208 = uVar15;
    piStack_200 = piVar7;
    if ((uVar14 >> 8 & 1) == 0) {
        puVar4 = puVar5;
        if ((uVar14 >> 7 & 1) != 0) {
            puVar4 = NULL;
            iStack_210 = auVar20._8_8_;
            iStack_1f8 = iVar9;
            event_triggers_call(iVar10,0,0,0);
            auVar20._8_8_ = iStack_210;
            auVar20._0_8_ = iStack_1f8;
        }
        iStack_210 = auVar20._8_8_;
        iStack_1f8 = auVar20._0_8_;
        if (((uVar14 >> 6 & 1) == 0) &&
           (((uVar14 >> 9 & 1) == 0 ||
            (uVar2 = trace_event_ignore_this_pid(iVar10), auVar20._8_8_ = iStack_210, auVar20._0_8_ = iStack_1f8,
            (uVar2 & 1) == 0)))) goto code_r0x08002c90;
    }
    else {
code_r0x08002c90:
        iStack_210 = auVar20._8_8_;
        iStack_1f8 = auVar20._0_8_;
        puVar4 = 0x18;
        iVar3 = trace_event_buffer_reserve(&uStack_258,iVar10);
        auVar20._8_8_ = iStack_210;
        auVar20._0_8_ = iStack_1f8;
        if (iVar3 != 0) {
            *(iVar3 + 8) = auVar19._8_4_;
            *(iVar3 + 0x10) = puVar5;
            trace_event_buffer_commit(&uStack_258);
            auVar20._8_8_ = iStack_210;
            auVar20._0_8_ = iStack_1f8;
        }
    }
    iStack_210 = auVar20._8_8_;
    iStack_1f8 = auVar20._0_8_;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_228) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar9 = auVar19._0_8_;
    *extraout_x18_03 = sym.perf_trace_hyp_assign_batch_end;
    pcStack_298 = sym.perf_trace_hyp_assign_batch_end;
    iVar3 = sp_el0;
    iStack_2a8 = *(iVar3 + 0x5e0);
    uVar2 = auVar19._8_8_ & 0xffffffff;
    iStack_2b0 = 0;
    uStack_2b4 = 0;
    iVar3 = tpidr_el1;
    piVar7 = iVar3 + *(iVar9 + 0x78);
    ppuStack_2a0 = &ppuStack_220;
    uStack_290 = uVar6;
    uStack_280 = uVar16;
    iStack_278 = iVar10;
    uStack_270 = uVar13;
    puStack_268 = puVar5;
    if ((*(iVar9 + 0x80) != 0) || (puVar5 = puVar4, *piVar7 != 0)) {
        puVar5 = &uStack_2b4;
        iVar3 = perf_trace_buf_alloc(0x1c,&iStack_2b0);
        uVar6 = _trace_event_raw_init;
        if (iVar3 != 0) {
            *(iStack_2b0 + 0xe8) = &ppuStack_2a0;
            puVar5 = uStack_2b4;
            *(iStack_2b0 + 0xf8) = auStack_2c0;
            *(iStack_2b0 + 0x100) = ~(-1L << (uVar6 & 0x3f)) & 0x8002ce8;
            *(iStack_2b0 + 0x108) = 5;
            *(iVar3 + 8) = auVar19._8_4_;
            *(iVar3 + 0x10) = puVar4;
            perf_trace_run_bpf_submit(iVar3,0x1c,puVar5,iVar9,1,iStack_2b0,piVar7,0);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_2a8) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar10 = auVar19._0_8_;
    uVar15 = tpidr_el2;
    *extraout_x18_04 = 0x8002e08;
    uStack_2e8 = 0x8002e08;
    iVar3 = sp_el0;
    iStack_2f8 = *(iVar3 + 0x5e0);
    uVar15 = *(iVar10 + 0x48);
    uStack_308 = 0;
    uStack_300 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
    uVar14 = uVar15;
    ppuStack_2f0 = &ppuStack_2a0;
    piStack_2e0 = piVar7;
    uStack_2d8 = uVar2;
    puStack_2d0 = puVar4;
    iStack_2c8 = iVar9;
    if ((uVar14 >> 8 & 1) == 0) {
        puVar4 = puVar5;
        if ((uVar14 >> 7 & 1) != 0) {
            puVar4 = NULL;
            event_triggers_call(iVar10,0,0,0);
        }
        if (((uVar14 >> 6 & 1) != 0) ||
           (((uVar14 >> 9 & 1) != 0 && (uVar6 = trace_event_ignore_this_pid(iVar10), (uVar6 & 1) != 0))))
        goto code_r0x08002ea8;
    }
    puVar4 = 0x18;
    iVar3 = trace_event_buffer_reserve(&uStack_328,iVar10);
    if (iVar3 != 0) {
        *(iVar3 + 8) = auVar19._8_8_;
        *(iVar3 + 0x10) = puVar5;
        trace_event_buffer_commit(&uStack_328);
    }
code_r0x08002ea8:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_2f8) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar9 = auVar20._0_8_;
    *extraout_x18_05 = sym.perf_trace_hyp_assign_end;
    pcStack_368 = sym.perf_trace_hyp_assign_end;
    pcStack_360 = sym.perf_trace_hyp_assign_batch_end;
    iVar3 = sp_el0;
    iStack_378 = *(iVar3 + 0x5e0);
    iStack_380 = 0;
    uStack_384 = 0;
    iVar3 = tpidr_el1;
    piVar7 = iVar3 + *(iVar9 + 0x78);
    ppuStack_370 = &ppuStack_2f0;
    uStack_350 = uVar15;
    puStack_338 = puVar5;
    auStack_348 = auVar19;
    if ((*(iVar9 + 0x80) != 0) || (puVar5 = puVar4, *piVar7 != 0)) {
        puVar5 = &uStack_384;
        iVar3 = perf_trace_buf_alloc(0x1c,&iStack_380,puVar5);
        uVar6 = _trace_event_raw_init;
        if (iVar3 != 0) {
            *(iStack_380 + 0xe8) = &ppuStack_370;
            puVar5 = uStack_384;
            *(iStack_380 + 0xf8) = auStack_390;
            *(iStack_380 + 0x100) = ~(-1L << (uVar6 & 0x3f)) & 0x8002edc;
            *(iStack_380 + 0x108) = 5;
            *(iVar3 + 8) = auVar20._8_8_;
            *(iVar3 + 0x10) = puVar4;
            perf_trace_run_bpf_submit(iVar3,0x1c,puVar5,iVar9,1,iStack_380,piVar7,0);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_378) {
        auVar19 = __stack_chk_fail();
        uVar15 = tpidr_el2;
        *extraout_x18_06 = 0x8002ff8;
        bpf_trace_run5(in_tmp_ldXn,auVar19._0_8_,auVar19._8_8_,puVar5 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_hyp_assign_batch_end.801afa04171e6efcad6cc48fd88c71f5.cfi_jt @ 0x080023d0 (size 8) =====

void sym.__bpf_trace_hyp_assign_batch_end.801afa04171e6efcad6cc48fd88c71f5.cfi_jt(ulong param_1,uint param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2(param_1,param_2);
    return;
}


// ===== sym.trace_event_raw_event_hyp_assign_batch_end.801afa04171e6efcad6cc48fd88c71f5.cfi_jt @ 0x080023d8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08002db0)
//WARNING: Removing unreachable block (ram,0x08002fa4)

void sym.trace_event_raw_event_hyp_assign_batch_end.801afa04171e6efcad6cc48fd88c71f5.cfi_jt
               (int64_t param_1,uint param_2,uint32_t *param_3)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint32_t *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint32_t uVar9;
    ulong uVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar auVar12 [16];
    uchar auStack_1a0 [12];
    uint32_t uStack_194;
    int64_t iStack_190;
    int64_t iStack_188;
    ulong **ppuStack_180;
    code *pcStack_178;
    code *pcStack_170;
    ulong uStack_160;
    uchar auStack_158 [16];
    uint32_t *puStack_148;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    ulong uStack_f8;
    int64_t *piStack_f0;
    uint64_t uStack_e8;
    uint32_t *puStack_e0;
    int64_t iStack_d8;
    uchar auStack_d0 [12];
    uint32_t uStack_c4;
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar9 = *(param_1 + 0x48);
    if ((uVar9 >> 8 & 1) == 0) {
        puVar7 = param_3;
        if ((uVar9 >> 7 & 1) != 0) {
            puVar7 = NULL;
            event_triggers_call(param_1,0,0,0);
        }
        if (((uVar9 >> 6 & 1) == 0) &&
           (((uVar9 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(param_1), (uVar3 & 1) == 0))))
        goto code_r0x08002c90;
    }
    else {
code_r0x08002c90:
        puVar7 = 0x18;
        iVar4 = trace_event_buffer_reserve(&uStack_68,param_1);
        if (iVar4 != 0) {
            *(iVar4 + 8) = param_2;
            *(iVar4 + 0x10) = param_3;
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar11 = __stack_chk_fail();
    iVar5 = auVar11._0_8_;
    *extraout_x18 = sym.perf_trace_hyp_assign_batch_end;
    pcStack_a8 = sym.perf_trace_hyp_assign_batch_end;
    iVar4 = sp_el0;
    iStack_b8 = *(iVar4 + 0x5e0);
    uVar3 = auVar11._8_8_ & 0xffffffff;
    iStack_c0 = 0;
    uStack_c4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    puStack_b0 = &stack0xffffffffffffffd0;
    if ((*(iVar5 + 0x80) != 0) || (puVar8 = puVar7, *piVar1 != 0)) {
        puVar8 = &uStack_c4;
        iVar4 = perf_trace_buf_alloc(0x1c,&iStack_c0);
        uVar2 = _trace_event_raw_init;
        if (iVar4 != 0) {
            *(iStack_c0 + 0xe8) = &puStack_b0;
            puVar8 = uStack_c4;
            *(iStack_c0 + 0xf8) = auStack_d0;
            *(iStack_c0 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x8002ce8;
            *(iStack_c0 + 0x108) = 5;
            *(iVar4 + 8) = auVar11._8_4_;
            *(iVar4 + 0x10) = puVar7;
            perf_trace_run_bpf_submit(iVar4,0x1c,puVar8,iVar5,1,iStack_c0,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar11 = __stack_chk_fail();
    iVar6 = auVar11._0_8_;
    uVar10 = tpidr_el2;
    *extraout_x18_00 = 0x8002e08;
    uStack_f8 = 0x8002e08;
    iVar4 = sp_el0;
    iStack_108 = *(iVar4 + 0x5e0);
    uVar10 = *(iVar6 + 0x48);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uVar9 = uVar10;
    ppuStack_100 = &puStack_b0;
    piStack_f0 = piVar1;
    uStack_e8 = uVar3;
    puStack_e0 = puVar7;
    iStack_d8 = iVar5;
    if ((uVar9 >> 8 & 1) == 0) {
        puVar7 = puVar8;
        if ((uVar9 >> 7 & 1) != 0) {
            puVar7 = NULL;
            event_triggers_call(iVar6,0,0,0);
        }
        if (((uVar9 >> 6 & 1) != 0) ||
           (((uVar9 >> 9 & 1) != 0 && (uVar3 = trace_event_ignore_this_pid(iVar6), (uVar3 & 1) != 0))))
        goto code_r0x08002ea8;
    }
    puVar7 = 0x18;
    iVar4 = trace_event_buffer_reserve(&uStack_138,iVar6);
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar11._8_8_;
        *(iVar4 + 0x10) = puVar8;
        trace_event_buffer_commit(&uStack_138);
    }
code_r0x08002ea8:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_108) {
        return;
    }
    auVar12 = __stack_chk_fail();
    iVar5 = auVar12._0_8_;
    *extraout_x18_01 = sym.perf_trace_hyp_assign_end;
    pcStack_178 = sym.perf_trace_hyp_assign_end;
    pcStack_170 = sym.perf_trace_hyp_assign_batch_end;
    iVar4 = sp_el0;
    iStack_188 = *(iVar4 + 0x5e0);
    iStack_190 = 0;
    uStack_194 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    ppuStack_180 = &ppuStack_100;
    uStack_160 = uVar10;
    puStack_148 = puVar8;
    auStack_158 = auVar11;
    if ((*(iVar5 + 0x80) != 0) || (puVar8 = puVar7, *piVar1 != 0)) {
        puVar8 = &uStack_194;
        iVar4 = perf_trace_buf_alloc(0x1c,&iStack_190,puVar8);
        uVar3 = _trace_event_raw_init;
        if (iVar4 != 0) {
            *(iStack_190 + 0xe8) = &ppuStack_180;
            puVar8 = uStack_194;
            *(iStack_190 + 0xf8) = auStack_1a0;
            *(iStack_190 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8002edc;
            *(iStack_190 + 0x108) = 5;
            *(iVar4 + 8) = auVar12._8_8_;
            *(iVar4 + 0x10) = puVar7;
            perf_trace_run_bpf_submit(iVar4,0x1c,puVar8,iVar5,1,iStack_190,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_188) {
        auVar11 = __stack_chk_fail();
        uVar10 = tpidr_el2;
        *extraout_x18_02 = 0x8002ff8;
        bpf_trace_run5(in_tmp_ldXn,auVar11._0_8_,auVar11._8_8_,puVar8 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_hyp_assign_batch_end.801afa04171e6efcad6cc48fd88c71f5.cfi_jt @ 0x080023e0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08002fa4)

void sym.perf_trace_hyp_assign_batch_end.801afa04171e6efcad6cc48fd88c71f5.cfi_jt
               (int64_t param_1,uint32_t param_2,uint32_t *param_3)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    uint32_t *puVar7;
    uint64_t uVar8;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar9;
    uint32_t uVar10;
    uint64_t unaff_x30;
    uchar auVar11 [16];
    uchar auStack_130 [12];
    uint32_t uStack_124;
    int64_t iStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    code *pcStack_108;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    ulong uStack_88;
    int64_t *piStack_80;
    uint64_t uStack_78;
    uint32_t *puStack_70;
    int64_t iStack_68;
    uchar auStack_60 [12];
    uint32_t uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uVar9 = param_2;
    iStack_50 = 0;
    uStack_54 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (puVar6 = param_3, *piVar1 != 0)) {
        puVar6 = &uStack_54;
        iVar4 = perf_trace_buf_alloc(0x1c,&iStack_50);
        uVar2 = _trace_event_raw_init;
        if (iVar4 != 0) {
            *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            puVar6 = uStack_54;
            uVar8 = -1L << (uVar2 & 0x3f);
            uVar2 = (~uVar8 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar2 = uVar8 | unaff_x30;
            }
            *(iStack_50 + 0xf8) = auStack_60;
            *(iStack_50 + 0x100) = uVar2;
            *(iStack_50 + 0x108) = 5;
            *(iVar4 + 8) = param_2;
            *(iVar4 + 0x10) = param_3;
            perf_trace_run_bpf_submit(iVar4,0x1c,puVar6,param_1,1,iStack_50,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    auVar11 = __stack_chk_fail();
    iVar5 = auVar11._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x8002e08;
    uStack_88 = 0x8002e08;
    iVar4 = sp_el0;
    iStack_98 = *(iVar4 + 0x5e0);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uVar10 = *(iVar5 + 0x48);
    puStack_90 = &stack0xffffffffffffffc0;
    piStack_80 = piVar1;
    uStack_78 = uVar9;
    puStack_70 = param_3;
    iStack_68 = param_1;
    if ((uVar10 >> 8 & 1) == 0) {
        puVar7 = puVar6;
        if ((uVar10 >> 7 & 1) != 0) {
            puVar7 = NULL;
            event_triggers_call(iVar5,0,0,0);
        }
        if (((uVar10 >> 6 & 1) != 0) ||
           (((uVar10 >> 9 & 1) != 0 && (uVar9 = trace_event_ignore_this_pid(iVar5), (uVar9 & 1) != 0))))
        goto code_r0x08002ea8;
    }
    puVar7 = 0x18;
    iVar4 = trace_event_buffer_reserve(&uStack_c8,iVar5);
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar11._8_8_;
        *(iVar4 + 0x10) = puVar6;
        trace_event_buffer_commit(&uStack_c8);
    }
code_r0x08002ea8:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_98) {
        return;
    }
    auVar11 = __stack_chk_fail();
    iVar5 = auVar11._0_8_;
    *extraout_x18_00 = sym.perf_trace_hyp_assign_end;
    pcStack_108 = sym.perf_trace_hyp_assign_end;
    iVar4 = sp_el0;
    iStack_118 = *(iVar4 + 0x5e0);
    iStack_120 = 0;
    uStack_124 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    ppuStack_110 = &puStack_90;
    if ((*(iVar5 + 0x80) != 0) || (puVar6 = puVar7, *piVar1 != 0)) {
        puVar6 = &uStack_124;
        iVar4 = perf_trace_buf_alloc(0x1c,&iStack_120,puVar6);
        uVar9 = _trace_event_raw_init;
        if (iVar4 != 0) {
            *(iStack_120 + 0xe8) = &ppuStack_110;
            puVar6 = uStack_124;
            *(iStack_120 + 0xf8) = auStack_130;
            *(iStack_120 + 0x100) = ~(-1L << (uVar9 & 0x3f)) & 0x8002edc;
            *(iStack_120 + 0x108) = 5;
            *(iVar4 + 8) = auVar11._8_8_;
            *(iVar4 + 0x10) = puVar7;
            perf_trace_run_bpf_submit(iVar4,0x1c,puVar6,iVar5,1,iStack_120,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_118) {
        auVar11 = __stack_chk_fail();
        uVar3 = tpidr_el2;
        *extraout_x18_01 = 0x8002ff8;
        bpf_trace_run5(in_tmp_ldXn,auVar11._0_8_,auVar11._8_8_,puVar6 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.msm_secure_get_vmid_perms.cfi_jt @ 0x080023e8 (size 8) =====

ulong sym.msm_secure_get_vmid_perms.cfi_jt(int param_1)

{
    if (param_1 != 0x11) {
        if (param_1 == 0x2a) {
            return 7;
        }
        if ((param_1 != 0x1d) || (reloc.__traceiter_hyp_assign_batch_start.cfi_jt == 0x0)) {
            return 6;
        }
    }
    return 4;
}


// ===== sym.qcom_secure_buffer_probe.801afa04171e6efcad6cc48fd88c71f5.cfi_jt @ 0x080023f0 (size 8) =====

int sym.qcom_secure_buffer_probe.801afa04171e6efcad6cc48fd88c71f5.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = dma_set_mask(param_1 + 0x10,0xffffffffffffffff);
    if (iVar1 == 0) {
        _segment.ehdr = param_1 + 0x10;
        iVar2 = of_find_property(*(param_1 + 0x300),"qcom,vmid-cp-camera-preview-ro",0);
        reloc.__traceiter_hyp_assign_batch_start.cfi_jt = iVar2 != 0;
    }
    return iVar1;
}


// ===== sym.perf_trace_hyp_assign_end.801afa04171e6efcad6cc48fd88c71f5.cfi_jt @ 0x080023f8 (size 8) =====

void sym.perf_trace_hyp_assign_end.801afa04171e6efcad6cc48fd88c71f5.cfi_jt
               (int64_t param_1,ulong param_2,uint32_t *param_3)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int64_t iVar4;
    uint32_t *puVar5;
    uint64_t uVar6;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar7 [16];
    uchar auStack_60 [12];
    uint32_t uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iStack_50 = 0;
    uStack_54 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (puVar5 = param_3, *piVar1 != 0)) {
        puVar5 = &uStack_54;
        iVar4 = perf_trace_buf_alloc(0x1c,&iStack_50,puVar5);
        uVar2 = _trace_event_raw_init;
        if (iVar4 != 0) {
            *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            puVar5 = uStack_54;
            uVar6 = -1L << (uVar2 & 0x3f);
            uVar2 = (~uVar6 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar2 = uVar6 | unaff_x30;
            }
            *(iStack_50 + 0xf8) = auStack_60;
            *(iStack_50 + 0x100) = uVar2;
            *(iStack_50 + 0x108) = 5;
            *(iVar4 + 8) = param_2;
            *(iVar4 + 0x10) = param_3;
            perf_trace_run_bpf_submit(iVar4,0x1c,puVar5,param_1,1,iStack_50,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    auVar7 = __stack_chk_fail();
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x8002ff8;
    bpf_trace_run5(in_tmp_ldXn,auVar7._0_8_,auVar7._8_8_,puVar5 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_hyp_assign_end.801afa04171e6efcad6cc48fd88c71f5.cfi_jt @ 0x08002400 (size 8) =====

void sym.__bpf_trace_hyp_assign_end.801afa04171e6efcad6cc48fd88c71f5.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2();
    return;
}


// ===== sym.trace_event_raw_event_hyp_assign_end.801afa04171e6efcad6cc48fd88c71f5.cfi_jt @ 0x08002408 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08002fa4)

void sym.trace_event_raw_event_hyp_assign_end.801afa04171e6efcad6cc48fd88c71f5.cfi_jt
               (int64_t param_1,ulong param_2,uint32_t *param_3)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    uint32_t *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uchar auStack_d0 [12];
    uint32_t uStack_c4;
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar8 = *(param_1 + 0x48);
    if ((uVar8 >> 8 & 1) == 0) {
        puVar6 = param_3;
        if ((uVar8 >> 7 & 1) != 0) {
            puVar6 = NULL;
            event_triggers_call(param_1,0,0,0);
        }
        if (((uVar8 >> 6 & 1) != 0) ||
           (((uVar8 >> 9 & 1) != 0 && (uVar3 = trace_event_ignore_this_pid(param_1), (uVar3 & 1) != 0))))
        goto code_r0x08002ea8;
    }
    puVar6 = 0x18;
    iVar4 = trace_event_buffer_reserve(&uStack_68,param_1);
    if (iVar4 != 0) {
        *(iVar4 + 8) = param_2;
        *(iVar4 + 0x10) = param_3;
        trace_event_buffer_commit(&uStack_68);
    }
code_r0x08002ea8:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar9 = __stack_chk_fail();
    iVar5 = auVar9._0_8_;
    *extraout_x18 = sym.perf_trace_hyp_assign_end;
    pcStack_a8 = sym.perf_trace_hyp_assign_end;
    iVar4 = sp_el0;
    iStack_b8 = *(iVar4 + 0x5e0);
    iStack_c0 = 0;
    uStack_c4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    puStack_b0 = &stack0xffffffffffffffd0;
    if ((*(iVar5 + 0x80) != 0) || (puVar7 = puVar6, *piVar1 != 0)) {
        puVar7 = &uStack_c4;
        iVar4 = perf_trace_buf_alloc(0x1c,&iStack_c0,puVar7);
        uVar3 = _trace_event_raw_init;
        if (iVar4 != 0) {
            *(iStack_c0 + 0xe8) = &puStack_b0;
            puVar7 = uStack_c4;
            *(iStack_c0 + 0xf8) = auStack_d0;
            *(iStack_c0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8002edc;
            *(iStack_c0 + 0x108) = 5;
            *(iVar4 + 8) = auVar9._8_8_;
            *(iVar4 + 0x10) = puVar6;
            perf_trace_run_bpf_submit(iVar4,0x1c,puVar7,iVar5,1,iStack_c0,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_b8) {
        auVar9 = __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_00 = 0x8002ff8;
        bpf_trace_run5(in_tmp_ldXn,auVar9._0_8_,auVar9._8_8_,puVar7 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.hyp_assign_table.cfi_jt @ 0x08002410 (size 8) =====

int sym.hyp_assign_table.cfi_jt
              (int64_t *param_1,int64_t param_2,uint32_t param_3,uint *param_4,uint *param_5,uint32_t param_6)

{
    int64_t iVar1;
    uint uVar2;
    uint uVar3;
    int64_t *piVar4;
    code *pcVar5;
    int iVar6;
    uint64_t arg2;
    uint64_t uVar7;
    int64_t iVar8;
    uint *arg2_00;
    int64_t iVar9;
    ulong uVar10;
    int64_t arg2_01;
    uint64_t uVar11;
    uint *puVar12;
    uint *puVar13;
    uint *puVar14;
    ulong *in_x18;
    int iVar15;
    uint64_t arg3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == NULL) {
        return -0x205;
    }
    if (param_1 != NULL) {
        if (param_6 == 0) {
            return -0x16;
        }
        if (param_5 == NULL) {
            return -0x16;
        }
        if (param_4 == NULL) {
            return -0x16;
        }
        if (param_3 == 0) {
            return -0x16;
        }
        if (param_2 == 0) {
            return -0x16;
        }
        if (*param_1 == 0) {
            return -0x16;
        }
        if (param_1[1] != 0) {
            arg3 = -(param_3 >> 0x1f) & 0xfffffffc00000000 | param_3 << 2;
            arg2 = kmemdup(param_2,arg3,0xcc0);
            piVar4 = _segment.ehdr;
            if (arg2 == 0) {
                return -0xc;
            }
            uVar7 = is_vmalloc_addr();
            if (((uVar7 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                obj.dma_map_single_attrs.__already_done = 0x1;
                uVar10 = dev_driver_string(piVar4);
                iVar8 = piVar4[0xe];
                if (iVar8 == 0) {
                    iVar8 = *piVar4;
                }
                __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar10,iVar8);
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x80033a0);
                (*pcVar5)();
            }
            if (((uVar7 & 1) == 0) &&
               (iVar8 = dma_map_page_attrs(piVar4,(((arg2 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) -
                                                   0x200000000,arg2 & 0xfff,arg3,1,0), iVar8 != -1)) {
                uVar7 = param_6 * 0x18;
                if (uVar7 < 0x1001) {
                    arg2_00 = __kmalloc(uVar7,0xdc0);
                    if (arg2_00 == NULL) {
                        iVar6 = -0xc;
                    }
                    else {
                        iVar15 = param_6 - 1;
                        if (0 < param_6) {
                            uVar11 = param_6;
                            puVar12 = param_5;
                            puVar13 = param_4;
                            puVar14 = arg2_00;
                            do {
                                if (puVar14 != NULL) {
                                    uVar2 = *puVar13;
                                    *(puVar14 + 2) = 0;
                                    uVar3 = *puVar12;
                                    puVar14[4] = 0;
                                    *puVar14 = uVar2;
                                    puVar14[1] = uVar3;
                                }
                                uVar11 = uVar11 - 1;
                                puVar14 = puVar14 + 6;
                                puVar13 = puVar13 + 1;
                                puVar12 = puVar12 + 1;
                            } while (uVar11 != 0);
                        }
                        iVar9 = sym.dma_map_single_attrs(_segment.ehdr,arg2_00,uVar7);
                        if (iVar9 == -1) {
                            iVar6 = -0xc;
                        }
                        else {
                            sym.trace_hyp_assign_info(param_2,param_3,param_4,param_5,param_6);
                            iVar6 = sym.batched_hyp_assign(param_1,arg2,arg3,arg2_00);
                            if (iVar6 == 0) {
                                arg2_01 = 0xeeeeeeee;
                                do {
                                    if (iVar15 == -1) goto code_r0x08003310;
                                    iVar1 = iVar15;
                                    iVar15 = iVar15 + -1;
                                } while (param_4[iVar1] != 3);
                                arg2_01 = 0;
code_r0x08003310:
                                sym.set_each_page_of_sg(param_1,arg2_01);
                            }
                            dma_unmap_page_attrs(_segment.ehdr,iVar9,uVar7,1,0);
                        }
                        kfree(arg2_00);
                    }
                }
                else {
                    iVar6 = -0xc;
                }
                dma_unmap_page_attrs(_segment.ehdr,iVar8,arg3,1,0);
            }
            else {
                iVar6 = -0xc;
            }
            kfree(arg2);
            return iVar6;
        }
    }
    return -0x16;
}


// ===== sym.trace_event_reg.cfi_jt @ 0x08002418 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_reg.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.trace_raw_output_hyp_assign_info.801afa04171e6efcad6cc48fd88c71f5.cfi_jt @ 0x08002420 (size 8) =====

void sym.trace_raw_output_hyp_assign_info.801afa04171e6efcad6cc48fd88c71f5.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_1 + 0x20e8);
    iVar2 = trace_raw_output_prep(param_1,param_3);
    if (iVar2 == 1) {
        iVar1 = param_1 + 0x88;
        uVar3 = trace_print_array_seq(iVar1,iVar6 + *(iVar6 + 0x10),*(iVar6 + 8),4);
        uVar4 = trace_print_array_seq(iVar1,iVar6 + *(iVar6 + 0x14),*(iVar6 + 0xc),4);
        uVar5 = trace_print_array_seq(iVar1,iVar6 + *(iVar6 + 0x18),*(iVar6 + 0xc),4);
        trace_event_printf(param_1,"srcVMIDs: %s dstVMIDs: %s dstPerms: %s\n",uVar3,uVar4,uVar5);
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_hyp_assign_batch_end.801afa04171e6efcad6cc48fd88c71f5.cfi_jt @ 0x08002428 (size 8) =====

void sym.trace_raw_output_hyp_assign_batch_end.801afa04171e6efcad6cc48fd88c71f5.cfi_jt
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
        trace_event_printf(param_1,"ret: %d time delta: %lld us\n",*(iVar2 + 8),*(iVar2 + 0x10));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_hyp_assign_batch_start.801afa04171e6efcad6cc48fd88c71f5.cfi_jt @ 0x08002430 (size 8) =====

void sym.trace_raw_output_hyp_assign_batch_start.801afa04171e6efcad6cc48fd88c71f5.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    uint uVar1;
    int iVar2;
    ulong uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_1 + 0x20e8);
    iVar2 = trace_raw_output_prep(param_1,param_3);
    if (iVar2 == 1) {
        uVar1 = *(iVar6 + 8);
        uVar5 = *(iVar6 + 0x10);
        uVar3 = trace_print_array_seq(param_1 + 0x88,iVar6 + *(iVar6 + 0x18),uVar1,8);
        uVar4 = trace_print_array_seq(param_1 + 0x88,iVar6 + *(iVar6 + 0x1c),*(iVar6 + 8),8);
        trace_event_printf(param_1,"num entries: %d batch size: %llu phys addrs: %s sizes: %s\n",uVar1,uVar5,uVar3,
                           uVar4);
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_hyp_assign_end.801afa04171e6efcad6cc48fd88c71f5.cfi_jt @ 0x08002438 (size 8) =====

void sym.trace_raw_output_hyp_assign_end.801afa04171e6efcad6cc48fd88c71f5.cfi_jt
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
        trace_event_printf(param_1,"total time delta: %lld us avg batch delta: %lld us\n",*(iVar2 + 8),
                           *(iVar2 + 0x10));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.perf_trace_hyp_assign_batch_start.801afa04171e6efcad6cc48fd88c71f5.cfi_jt @ 0x08002440 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08002db0)
//WARNING: Removing unreachable block (ram,0x08002fa4)

void sym.perf_trace_hyp_assign_batch_start.801afa04171e6efcad6cc48fd88c71f5.cfi_jt
               (int64_t param_1,int64_t param_2,uint32_t *param_3)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    uint32_t *puVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar9;
    uint64_t unaff_x21;
    uint32_t uVar10;
    ulong uVar11;
    int iVar12;
    uint64_t uVar13;
    uint64_t unaff_x30;
    uchar auVar14 [16];
    uchar auVar15 [16];
    uchar auStack_200 [12];
    uint32_t uStack_1f4;
    int64_t iStack_1f0;
    int64_t iStack_1e8;
    ulong **ppuStack_1e0;
    code *pcStack_1d8;
    code *pcStack_1d0;
    ulong uStack_1c0;
    uchar auStack_1b8 [16];
    uint32_t *puStack_1a8;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    int64_t iStack_168;
    ulong **ppuStack_160;
    ulong uStack_158;
    int64_t *piStack_150;
    uint64_t uStack_148;
    uint32_t *puStack_140;
    int64_t iStack_138;
    uchar auStack_130 [12];
    uint32_t uStack_124;
    int64_t iStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    code *pcStack_108;
    uint64_t uStack_100;
    ulong uStack_f0;
    int64_t iStack_e8;
    uint64_t uStack_e0;
    uint32_t *puStack_d8;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    ulong uStack_88;
    int64_t iStack_80;
    uint64_t uStack_78;
    int64_t *piStack_70;
    int64_t iStack_68;
    uchar auStack_60 [12];
    uint32_t uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    uVar13 = param_3 & 0xffffffff;
    iStack_50 = 0;
    uStack_54 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar12 = param_3;
        param_3 = &uStack_54;
        unaff_x21 = iVar12 * 0x10 + 0x24;
        iVar2 = perf_trace_buf_alloc(unaff_x21,&iStack_50);
        if (iVar2 != 0) {
            uVar6 = -1L << (_trace_event_raw_init & 0x3f);
            *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            *(iStack_50 + 0xf8) = auStack_60;
            uVar9 = (~uVar6 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar9 = uVar6 | unaff_x30;
            }
            uVar10 = iVar12 * 8 + 0x20;
            *(iStack_50 + 0x100) = uVar9;
            *(iStack_50 + 0x108) = 5;
            *(iVar2 + 0x18) = iVar12 << 0x13 | 0x20;
            *(iVar2 + 0x1c) = uVar10 | iVar12 << 0x13;
            *(iVar2 + 8) = iVar12;
            *(iVar2 + 0x10) = 0;
            if (iVar12 != 0) {
                uVar9 = uVar13;
                piVar7 = param_2 + 8;
                iVar8 = iVar2;
                do {
                    uVar9 = uVar9 - 1;
                    *(iVar8 + 0x20) = piVar7[-1];
                    *(iVar8 + (uVar10 & 0xfff8)) = *piVar7;
                    iVar8 = iVar8 + 8;
                    *(iVar2 + 0x10) = *(iVar2 + 0x10) + *piVar7;
                    piVar7 = piVar7 + 2;
                } while (uVar9 != 0);
            }
            param_3 = uStack_54;
            perf_trace_run_bpf_submit(iVar2,unaff_x21,param_3,param_1,1,iStack_50,piVar1,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return;
    }
    auVar14 = __stack_chk_fail();
    iVar8 = auVar14._0_8_;
    uVar11 = tpidr_el2;
    *extraout_x18 = 0x8002c10;
    uStack_88 = 0x8002c10;
    iVar2 = sp_el0;
    iStack_98 = *(iVar2 + 0x5e0);
    uVar9 = auVar14._8_8_ & 0xffffffff;
    uVar11 = *(iVar8 + 0x48);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uVar10 = uVar11;
    puStack_90 = &stack0xffffffffffffffc0;
    iStack_80 = param_2;
    uStack_78 = unaff_x21;
    piStack_70 = piVar1;
    iStack_68 = param_1;
    if ((uVar10 >> 8 & 1) == 0) {
        puVar4 = param_3;
        if ((uVar10 >> 7 & 1) != 0) {
            puVar4 = NULL;
            event_triggers_call(iVar8,0,0,0);
        }
        if (((uVar10 >> 6 & 1) == 0) &&
           (((uVar10 >> 9 & 1) == 0 || (uVar6 = trace_event_ignore_this_pid(iVar8), (uVar6 & 1) == 0))))
        goto code_r0x08002c90;
    }
    else {
code_r0x08002c90:
        puVar4 = 0x18;
        iVar2 = trace_event_buffer_reserve(&uStack_c8,iVar8);
        if (iVar2 != 0) {
            *(iVar2 + 8) = auVar14._8_4_;
            *(iVar2 + 0x10) = param_3;
            trace_event_buffer_commit(&uStack_c8);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_98) {
        return;
    }
    auVar14 = __stack_chk_fail();
    iVar3 = auVar14._0_8_;
    *extraout_x18_00 = sym.perf_trace_hyp_assign_batch_end;
    pcStack_108 = sym.perf_trace_hyp_assign_batch_end;
    iVar2 = sp_el0;
    iStack_118 = *(iVar2 + 0x5e0);
    uVar6 = auVar14._8_8_ & 0xffffffff;
    iStack_120 = 0;
    uStack_124 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(iVar3 + 0x78);
    ppuStack_110 = &puStack_90;
    uStack_100 = uVar13;
    uStack_f0 = uVar11;
    iStack_e8 = iVar8;
    uStack_e0 = uVar9;
    puStack_d8 = param_3;
    if ((*(iVar3 + 0x80) != 0) || (puVar5 = puVar4, *piVar1 != 0)) {
        puVar5 = &uStack_124;
        iVar2 = perf_trace_buf_alloc(0x1c,&iStack_120);
        uVar13 = _trace_event_raw_init;
        if (iVar2 != 0) {
            *(iStack_120 + 0xe8) = &ppuStack_110;
            puVar5 = uStack_124;
            *(iStack_120 + 0xf8) = auStack_130;
            *(iStack_120 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x8002ce8;
            *(iStack_120 + 0x108) = 5;
            *(iVar2 + 8) = auVar14._8_4_;
            *(iVar2 + 0x10) = puVar4;
            perf_trace_run_bpf_submit(iVar2,0x1c,puVar5,iVar3,1,iStack_120,piVar1,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_118) {
        return;
    }
    auVar14 = __stack_chk_fail();
    iVar8 = auVar14._0_8_;
    uVar11 = tpidr_el2;
    *extraout_x18_01 = 0x8002e08;
    uStack_158 = 0x8002e08;
    iVar2 = sp_el0;
    iStack_168 = *(iVar2 + 0x5e0);
    uVar11 = *(iVar8 + 0x48);
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uVar10 = uVar11;
    ppuStack_160 = &ppuStack_110;
    piStack_150 = piVar1;
    uStack_148 = uVar6;
    puStack_140 = puVar4;
    iStack_138 = iVar3;
    if ((uVar10 >> 8 & 1) == 0) {
        puVar4 = puVar5;
        if ((uVar10 >> 7 & 1) != 0) {
            puVar4 = NULL;
            event_triggers_call(iVar8,0,0,0);
        }
        if (((uVar10 >> 6 & 1) != 0) ||
           (((uVar10 >> 9 & 1) != 0 && (uVar13 = trace_event_ignore_this_pid(iVar8), (uVar13 & 1) != 0))))
        goto code_r0x08002ea8;
    }
    puVar4 = 0x18;
    iVar2 = trace_event_buffer_reserve(&uStack_198,iVar8);
    if (iVar2 != 0) {
        *(iVar2 + 8) = auVar14._8_8_;
        *(iVar2 + 0x10) = puVar5;
        trace_event_buffer_commit(&uStack_198);
    }
code_r0x08002ea8:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_168) {
        return;
    }
    auVar15 = __stack_chk_fail();
    iVar8 = auVar15._0_8_;
    *extraout_x18_02 = sym.perf_trace_hyp_assign_end;
    pcStack_1d8 = sym.perf_trace_hyp_assign_end;
    pcStack_1d0 = sym.perf_trace_hyp_assign_batch_end;
    iVar2 = sp_el0;
    iStack_1e8 = *(iVar2 + 0x5e0);
    iStack_1f0 = 0;
    uStack_1f4 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(iVar8 + 0x78);
    ppuStack_1e0 = &ppuStack_160;
    uStack_1c0 = uVar11;
    puStack_1a8 = puVar5;
    auStack_1b8 = auVar14;
    if ((*(iVar8 + 0x80) != 0) || (puVar5 = puVar4, *piVar1 != 0)) {
        puVar5 = &uStack_1f4;
        iVar2 = perf_trace_buf_alloc(0x1c,&iStack_1f0,puVar5);
        uVar13 = _trace_event_raw_init;
        if (iVar2 != 0) {
            *(iStack_1f0 + 0xe8) = &ppuStack_1e0;
            puVar5 = uStack_1f4;
            *(iStack_1f0 + 0xf8) = auStack_200;
            *(iStack_1f0 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x8002edc;
            *(iStack_1f0 + 0x108) = 5;
            *(iVar2 + 8) = auVar15._8_8_;
            *(iVar2 + 0x10) = puVar4;
            perf_trace_run_bpf_submit(iVar2,0x1c,puVar5,iVar8,1,iStack_1f0,piVar1,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_1e8) {
        auVar14 = __stack_chk_fail();
        uVar11 = tpidr_el2;
        *extraout_x18_03 = 0x8002ff8;
        bpf_trace_run5(in_tmp_ldXn,auVar14._0_8_,auVar14._8_8_,puVar5 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_hyp_assign_batch_start.801afa04171e6efcad6cc48fd88c71f5.cfi_jt @ 0x08002448 (size 8) =====

void sym.__bpf_trace_hyp_assign_batch_start.801afa04171e6efcad6cc48fd88c71f5.cfi_jt
               (ulong param_1,ulong param_2,uint param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2(param_1,param_2,param_3);
    return;
}


// ===== sym.trace_event_raw_event_hyp_assign_batch_start.801afa04171e6efcad6cc48fd88c71f5.cfi_jt @ 0x08002450 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08002db0)
//WARNING: Removing unreachable block (ram,0x08002b5c)
//WARNING: Removing unreachable block (ram,0x08002fa4)

void sym.trace_event_raw_event_hyp_assign_batch_start.801afa04171e6efcad6cc48fd88c71f5.cfi_jt
               (uint64_t param_1,int64_t param_2,uint32_t *param_3)

{
    ulong in_tmp_ldXn;
    uint64_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint32_t *puVar4;
    uint32_t *puVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    int iVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    ulong uVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    uchar auVar15 [16];
    uchar auStack_270 [12];
    uint32_t uStack_264;
    int64_t iStack_260;
    int64_t iStack_258;
    ulong **ppuStack_250;
    code *pcStack_248;
    code *pcStack_240;
    ulong uStack_230;
    uchar auStack_228 [16];
    uint32_t *puStack_218;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    int64_t iStack_1d8;
    ulong **ppuStack_1d0;
    ulong uStack_1c8;
    int64_t *piStack_1c0;
    uint64_t uStack_1b8;
    uint32_t *puStack_1b0;
    int64_t iStack_1a8;
    uchar auStack_1a0 [12];
    uint32_t uStack_194;
    int64_t iStack_190;
    int64_t iStack_188;
    ulong **ppuStack_180;
    code *pcStack_178;
    uint64_t uStack_170;
    ulong uStack_160;
    int64_t iStack_158;
    uint64_t uStack_150;
    uint32_t *puStack_148;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    ulong uStack_f8;
    int64_t iStack_f0;
    uint64_t uStack_e8;
    int64_t *piStack_e0;
    int64_t iStack_d8;
    uchar auStack_d0 [12];
    uint32_t uStack_c4;
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar12 = *(param_1 + 0x48);
    if ((uVar12 >> 8 & 1) == 0) {
        puVar4 = param_3;
        if ((uVar12 >> 7 & 1) != 0) {
            puVar4 = NULL;
            event_triggers_call(param_1,0,0,0);
        }
        if (((uVar12 >> 6 & 1) == 0) &&
           (((uVar12 >> 9 & 1) == 0 || (uVar1 = trace_event_ignore_this_pid(param_1), (uVar1 & 1) == 0))))
        goto code_r0x080029cc;
    }
    else {
code_r0x080029cc:
        iVar10 = param_3;
        puVar4 = (iVar10 << 4) + 0x20;
        iVar2 = trace_event_buffer_reserve(&uStack_68,param_1);
        if (iVar2 != 0) {
            uVar12 = iVar10 * 8 + 0x20;
            *(iVar2 + 8) = iVar10;
            *(iVar2 + 0x10) = 0;
            *(iVar2 + 0x18) = iVar10 << 0x13 | 0x20;
            *(iVar2 + 0x1c) = uVar12 | iVar10 << 0x13;
            if (iVar10 != 0) {
                uVar1 = param_3 & 0xffffffff;
                piVar6 = param_2 + 8;
                iVar8 = iVar2;
                do {
                    uVar1 = uVar1 - 1;
                    *(iVar8 + 0x20) = piVar6[-1];
                    *(iVar8 + (uVar12 & 0xfff8)) = *piVar6;
                    iVar8 = iVar8 + 8;
                    *(iVar2 + 0x10) = *(iVar2 + 0x10) + *piVar6;
                    piVar6 = piVar6 + 2;
                } while (uVar1 != 0);
            }
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    auVar14 = __stack_chk_fail();
    iVar8 = auVar14._0_8_;
    *extraout_x18 = sym.perf_trace_hyp_assign_batch_start;
    pcStack_a8 = sym.perf_trace_hyp_assign_batch_start;
    iVar2 = sp_el0;
    iStack_b8 = *(iVar2 + 0x5e0);
    uVar1 = puVar4 & 0xffffffff;
    iStack_c0 = 0;
    uStack_c4 = 0;
    iVar2 = tpidr_el1;
    piVar6 = iVar2 + *(iVar8 + 0x78);
    puStack_b0 = &stack0xffffffffffffffd0;
    if ((*(iVar8 + 0x80) != 0) || (*piVar6 != 0)) {
        iVar10 = puVar4;
        puVar4 = &uStack_c4;
        param_1 = iVar10 * 0x10 + 0x24;
        iVar2 = perf_trace_buf_alloc(param_1,&iStack_c0);
        if (iVar2 != 0) {
            uVar11 = _trace_event_raw_init & 0x3f;
            *(iStack_c0 + 0xe8) = &puStack_b0;
            *(iStack_c0 + 0xf8) = auStack_d0;
            uVar12 = iVar10 * 8 + 0x20;
            *(iStack_c0 + 0x100) = ~(-1L << uVar11) & 0x8002a84;
            *(iStack_c0 + 0x108) = 5;
            *(iVar2 + 0x18) = iVar10 << 0x13 | 0x20;
            *(iVar2 + 0x1c) = uVar12 | iVar10 << 0x13;
            *(iVar2 + 8) = iVar10;
            *(iVar2 + 0x10) = 0;
            if (iVar10 != 0) {
                uVar11 = uVar1;
                piVar7 = auVar14._8_8_ + 8;
                iVar9 = iVar2;
                do {
                    uVar11 = uVar11 - 1;
                    *(iVar9 + 0x20) = piVar7[-1];
                    *(iVar9 + (uVar12 & 0xfff8)) = *piVar7;
                    iVar9 = iVar9 + 8;
                    *(iVar2 + 0x10) = *(iVar2 + 0x10) + *piVar7;
                    piVar7 = piVar7 + 2;
                } while (uVar11 != 0);
            }
            puVar4 = uStack_c4;
            perf_trace_run_bpf_submit(iVar2,param_1,puVar4,iVar8,1,iStack_c0,piVar6,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar15 = __stack_chk_fail();
    iVar9 = auVar15._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18_00 = 0x8002c10;
    uStack_f8 = 0x8002c10;
    iVar2 = sp_el0;
    iStack_108 = *(iVar2 + 0x5e0);
    uVar11 = auVar15._8_8_ & 0xffffffff;
    uVar13 = *(iVar9 + 0x48);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uVar12 = uVar13;
    ppuStack_100 = &puStack_b0;
    uStack_e8 = param_1;
    piStack_e0 = piVar6;
    if ((uVar12 >> 8 & 1) == 0) {
        puVar5 = puVar4;
        if ((uVar12 >> 7 & 1) != 0) {
            puVar5 = NULL;
            iStack_f0 = auVar14._8_8_;
            iStack_d8 = iVar8;
            event_triggers_call(iVar9,0,0,0);
            auVar14._8_8_ = iStack_f0;
            auVar14._0_8_ = iStack_d8;
        }
        iStack_f0 = auVar14._8_8_;
        iStack_d8 = auVar14._0_8_;
        if (((uVar12 >> 6 & 1) == 0) &&
           (((uVar12 >> 9 & 1) == 0 ||
            (uVar3 = trace_event_ignore_this_pid(iVar9), auVar14._8_8_ = iStack_f0, auVar14._0_8_ = iStack_d8,
            (uVar3 & 1) == 0)))) goto code_r0x08002c90;
    }
    else {
code_r0x08002c90:
        iStack_f0 = auVar14._8_8_;
        iStack_d8 = auVar14._0_8_;
        puVar5 = 0x18;
        iVar2 = trace_event_buffer_reserve(&uStack_138,iVar9);
        auVar14._8_8_ = iStack_f0;
        auVar14._0_8_ = iStack_d8;
        if (iVar2 != 0) {
            *(iVar2 + 8) = auVar15._8_4_;
            *(iVar2 + 0x10) = puVar4;
            trace_event_buffer_commit(&uStack_138);
            auVar14._8_8_ = iStack_f0;
            auVar14._0_8_ = iStack_d8;
        }
    }
    iStack_f0 = auVar14._8_8_;
    iStack_d8 = auVar14._0_8_;
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_108) {
        return;
    }
    auVar14 = __stack_chk_fail();
    iVar8 = auVar14._0_8_;
    *extraout_x18_01 = sym.perf_trace_hyp_assign_batch_end;
    pcStack_178 = sym.perf_trace_hyp_assign_batch_end;
    iVar2 = sp_el0;
    iStack_188 = *(iVar2 + 0x5e0);
    uVar3 = auVar14._8_8_ & 0xffffffff;
    iStack_190 = 0;
    uStack_194 = 0;
    iVar2 = tpidr_el1;
    piVar6 = iVar2 + *(iVar8 + 0x78);
    ppuStack_180 = &ppuStack_100;
    uStack_170 = uVar1;
    uStack_160 = uVar13;
    iStack_158 = iVar9;
    uStack_150 = uVar11;
    puStack_148 = puVar4;
    if ((*(iVar8 + 0x80) != 0) || (puVar4 = puVar5, *piVar6 != 0)) {
        puVar4 = &uStack_194;
        iVar2 = perf_trace_buf_alloc(0x1c,&iStack_190);
        uVar1 = _trace_event_raw_init;
        if (iVar2 != 0) {
            *(iStack_190 + 0xe8) = &ppuStack_180;
            puVar4 = uStack_194;
            *(iStack_190 + 0xf8) = auStack_1a0;
            *(iStack_190 + 0x100) = ~(-1L << (uVar1 & 0x3f)) & 0x8002ce8;
            *(iStack_190 + 0x108) = 5;
            *(iVar2 + 8) = auVar14._8_4_;
            *(iVar2 + 0x10) = puVar5;
            perf_trace_run_bpf_submit(iVar2,0x1c,puVar4,iVar8,1,iStack_190,piVar6,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_188) {
        return;
    }
    auVar14 = __stack_chk_fail();
    iVar9 = auVar14._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18_02 = 0x8002e08;
    uStack_1c8 = 0x8002e08;
    iVar2 = sp_el0;
    iStack_1d8 = *(iVar2 + 0x5e0);
    uVar13 = *(iVar9 + 0x48);
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uVar12 = uVar13;
    ppuStack_1d0 = &ppuStack_180;
    piStack_1c0 = piVar6;
    uStack_1b8 = uVar3;
    puStack_1b0 = puVar5;
    iStack_1a8 = iVar8;
    if ((uVar12 >> 8 & 1) == 0) {
        puVar5 = puVar4;
        if ((uVar12 >> 7 & 1) != 0) {
            puVar5 = NULL;
            event_triggers_call(iVar9,0,0,0);
        }
        if (((uVar12 >> 6 & 1) != 0) ||
           (((uVar12 >> 9 & 1) != 0 && (uVar1 = trace_event_ignore_this_pid(iVar9), (uVar1 & 1) != 0))))
        goto code_r0x08002ea8;
    }
    puVar5 = 0x18;
    iVar2 = trace_event_buffer_reserve(&uStack_208,iVar9);
    if (iVar2 != 0) {
        *(iVar2 + 8) = auVar14._8_8_;
        *(iVar2 + 0x10) = puVar4;
        trace_event_buffer_commit(&uStack_208);
    }
code_r0x08002ea8:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_1d8) {
        return;
    }
    auVar15 = __stack_chk_fail();
    iVar8 = auVar15._0_8_;
    *extraout_x18_03 = sym.perf_trace_hyp_assign_end;
    pcStack_248 = sym.perf_trace_hyp_assign_end;
    pcStack_240 = sym.perf_trace_hyp_assign_batch_end;
    iVar2 = sp_el0;
    iStack_258 = *(iVar2 + 0x5e0);
    iStack_260 = 0;
    uStack_264 = 0;
    iVar2 = tpidr_el1;
    piVar6 = iVar2 + *(iVar8 + 0x78);
    ppuStack_250 = &ppuStack_1d0;
    uStack_230 = uVar13;
    puStack_218 = puVar4;
    auStack_228 = auVar14;
    if ((*(iVar8 + 0x80) != 0) || (puVar4 = puVar5, *piVar6 != 0)) {
        puVar4 = &uStack_264;
        iVar2 = perf_trace_buf_alloc(0x1c,&iStack_260,puVar4);
        uVar1 = _trace_event_raw_init;
        if (iVar2 != 0) {
            *(iStack_260 + 0xe8) = &ppuStack_250;
            puVar4 = uStack_264;
            *(iStack_260 + 0xf8) = auStack_270;
            *(iStack_260 + 0x100) = ~(-1L << (uVar1 & 0x3f)) & 0x8002edc;
            *(iStack_260 + 0x108) = 5;
            *(iVar2 + 8) = auVar15._8_8_;
            *(iVar2 + 0x10) = puVar5;
            perf_trace_run_bpf_submit(iVar2,0x1c,puVar4,iVar8,1,iStack_260,piVar6,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_258) {
        auVar14 = __stack_chk_fail();
        uVar13 = tpidr_el2;
        *extraout_x18_04 = 0x8002ff8;
        bpf_trace_run5(in_tmp_ldXn,auVar14._0_8_,auVar14._8_8_,puVar4 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__traceiter_hyp_assign_info @ 0x08002458 (size 136) =====

ulong sym.__traceiter_hyp_assign_info(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8004178 != NULL) {
        piVar1 = *0x8004178;
        do {
            (**piVar1)(piVar1[1],arg2,arg3 & 0xffffffff,arg4);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_hyp_assign_batch_start @ 0x080024e8 (size 104) =====

ulong sym.__traceiter_hyp_assign_batch_start(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x80041c0 != NULL) {
        piVar1 = *0x80041c0;
        do {
            (**piVar1)(piVar1[1],arg2,arg3 & 0xffffffff);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_hyp_assign_batch_end @ 0x08002558 (size 104) =====

ulong sym.__traceiter_hyp_assign_batch_end(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8004208 != NULL) {
        piVar1 = *0x8004208;
        do {
            (**piVar1)(piVar1[1],arg2 & 0xffffffff,arg3);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_hyp_assign_end @ 0x080025c8 (size 104) =====

ulong sym.__traceiter_hyp_assign_end(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8004250;
    piVar1 = *0x8004250;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2,arg3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.trace_event_raw_event_hyp_assign_info @ 0x08002638 (size 348) =====

//WARNING: Removing unreachable block (ram,0x08002db0)
//WARNING: Removing unreachable block (ram,0x08002888)
//WARNING: Removing unreachable block (ram,0x08002b5c)
//WARNING: Removing unreachable block (ram,0x08002fa4)

void sym.trace_event_raw_event_hyp_assign_info(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    ulong in_tmp_ldXn;
    uint64_t uVar2;
    uint64_t uVar3;
    uint32_t *puVar4;
    uint32_t *puVar5;
    int64_t iVar6;
    ulong in_x4;
    uint64_t in_x5;
    int64_t *piVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    int iVar11;
    int iVar12;
    uint32_t uVar13;
    ulong uVar14;
    ulong uVar15;
    int iVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    uchar auVar19 [16];
    uchar auStack_390 [12];
    uint32_t uStack_384;
    int64_t iStack_380;
    int64_t iStack_378;
    ulong **ppuStack_370;
    code *pcStack_368;
    code *pcStack_360;
    ulong uStack_350;
    uchar auStack_348 [16];
    uint32_t *puStack_338;
    ulong uStack_328;
    ulong uStack_320;
    ulong uStack_318;
    ulong uStack_310;
    ulong uStack_308;
    ulong uStack_300;
    int64_t iStack_2f8;
    ulong **ppuStack_2f0;
    ulong uStack_2e8;
    int64_t *piStack_2e0;
    uint64_t uStack_2d8;
    uint32_t *puStack_2d0;
    int64_t iStack_2c8;
    uchar auStack_2c0 [12];
    uint32_t uStack_2b4;
    int64_t iStack_2b0;
    int64_t iStack_2a8;
    ulong **ppuStack_2a0;
    code *pcStack_298;
    uint64_t uStack_290;
    ulong uStack_280;
    int64_t iStack_278;
    uint64_t uStack_270;
    uint32_t *puStack_268;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    int64_t iStack_228;
    ulong **ppuStack_220;
    ulong uStack_218;
    int64_t iStack_210;
    ulong uStack_208;
    int64_t *piStack_200;
    int64_t iStack_1f8;
    uchar auStack_1f0 [12];
    uint32_t uStack_1e4;
    int64_t iStack_1e0;
    int64_t iStack_1d8;
    ulong **ppuStack_1d0;
    code *pcStack_1c8;
    uint64_t uStack_1c0;
    uint64_t uStack_1b8;
    ulong uStack_1b0;
    int64_t iStack_1a8;
    uint64_t uStack_1a0;
    int64_t iStack_198;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    int64_t iStack_158;
    uchar **ppuStack_150;
    ulong uStack_148;
    uint64_t uStack_140;
    int64_t *piStack_138;
    uint64_t uStack_130;
    int64_t iStack_128;
    uchar auStack_120 [8];
    int64_t iStack_118;
    ulong uStack_110;
    uint32_t uStack_104;
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
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
    uVar13 = *(arg1 + 0x48);
    iVar6 = arg4;
    uVar3 = in_x5;
    if ((uVar13 >> 8 & 1) == 0) {
        puVar4 = arg3;
        if ((uVar13 >> 7 & 1) != 0) {
            puVar4 = NULL;
            iVar6 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar13 >> 6 & 1) == 0) &&
           (((uVar13 >> 9 & 1) == 0 || (uVar2 = trace_event_ignore_this_pid(arg1), (uVar2 & 1) == 0))))
        goto code_r0x080026c0;
    }
    else {
code_r0x080026c0:
        iVar16 = arg3;
        iVar12 = in_x5;
        iVar11 = iVar12 * 4 + iVar16 * 4;
        puVar4 = iVar11 + iVar12 * 4 + 0x1c;
        uVar2 = trace_event_buffer_reserve(&uStack_88,arg1);
        if (uVar2 != 0) {
            uVar13 = iVar16 * 4 + 0x1c;
            *(uVar2 + 0x10) = iVar16 << 0x12 | 0x1c;
            *(uVar2 + 0x14) = iVar12 << 0x12 | uVar13;
            *(uVar2 + 0x18) = iVar11 + 0x1cU | iVar12 << 0x12;
            *(uVar2 + 8) = iVar16;
            *(uVar2 + 0xc) = iVar12;
            memcpy(uVar2 + 0x1c,arg2,-((arg3 & 0xffffffffU) >> 0x1f) & 0xfffffffc00000000 | (arg3 & 0xffffffffU) << 2)
            ;
            puVar4 = -((in_x5 & 0xffffffff) >> 0x1f) & 0xfffffffc00000000 | (in_x5 & 0xffffffff) << 2;
            memcpy(uVar2 + (uVar13 & 0xfffc),arg4,puVar4);
            memcpy(uVar2 + *(uVar2 + 0x18));
            trace_event_buffer_commit(&uStack_88);
            arg1 = uVar2;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_58) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar9 = auVar18._0_8_;
    *extraout_x18 = sym.perf_trace_hyp_assign_info;
    pcStack_e8 = sym.perf_trace_hyp_assign_info;
    iVar10 = sp_el0;
    iStack_f8 = *(iVar10 + 0x5e0);
    uVar2 = uVar3 & 0xffffffff;
    uVar17 = puVar4 & 0xffffffff;
    iStack_100 = 0;
    uStack_104 = 0;
    iVar10 = tpidr_el1;
    piVar7 = iVar10 + *(iVar9 + 0x78);
    iStack_118 = iVar6;
    puStack_f0 = &stack0xffffffffffffffb0;
    if ((*(iVar9 + 0x80) != 0) || (*piVar7 != 0)) {
        iVar12 = puVar4;
        uVar13 = iVar12 * 4;
        arg2 = uVar13;
        iVar11 = uVar3;
        uVar1 = iVar11 * 4 + uVar13;
        arg4 = uVar1;
        puVar4 = &uStack_104;
        arg1 = (iVar11 * 4 + uVar1 + 0x27 & 0xfffffff8) - 4;
        uStack_110 = in_x4;
        iVar6 = perf_trace_buf_alloc(arg1,&iStack_100);
        if (iVar6 != 0) {
            uVar13 = uVar13 + 0x1c;
            arg2 = uVar13;
            uVar3 = _trace_event_raw_init & 0x3f;
            *(iStack_100 + 0xe8) = &puStack_f0;
            *(iStack_100 + 0xf8) = auStack_120;
            *(iStack_100 + 0x100) = ~(-1L << uVar3) & 0x8002794;
            *(iStack_100 + 0x108) = 5;
            *(iVar6 + 8) = iVar12;
            *(iVar6 + 0xc) = iVar11;
            *(iVar6 + 0x10) = iVar12 << 0x12 | 0x1c;
            *(iVar6 + 0x14) = iVar11 << 0x12 | uVar13;
            *(iVar6 + 0x18) = uVar1 + 0x1c | iVar11 << 0x12;
            memcpy(iVar6 + 0x1c,auVar18._8_8_,-(uVar17 >> 0x1f) & 0xfffffffc00000000 | uVar17 << 2);
            uVar2 = -(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar2 << 2;
            memcpy(iVar6 + (uVar13 & 0xfffc),iStack_118,uVar2);
            memcpy(iVar6 + *(iVar6 + 0x18),uStack_110,uVar2);
            puVar4 = uStack_104;
            perf_trace_run_bpf_submit(iVar6,arg1,puVar4,iVar9,1,iStack_100,piVar7,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar10 = auVar18._0_8_;
    uVar14 = tpidr_el2;
    *extraout_x18_00 = 0x800294c;
    uStack_148 = 0x800294c;
    iVar6 = sp_el0;
    iStack_158 = *(iVar6 + 0x5e0);
    uVar14 = *(iVar10 + 0x48);
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uVar13 = uVar14;
    ppuStack_150 = &puStack_f0;
    uStack_140 = arg2;
    piStack_138 = piVar7;
    uStack_130 = arg4;
    iStack_128 = iVar9;
    if ((uVar13 >> 8 & 1) == 0) {
        puVar5 = puVar4;
        if ((uVar13 >> 7 & 1) != 0) {
            puVar5 = NULL;
            event_triggers_call(iVar10,0,0,0);
        }
        if (((uVar13 >> 6 & 1) == 0) &&
           (((uVar13 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(iVar10), (uVar3 & 1) == 0))))
        goto code_r0x080029cc;
    }
    else {
code_r0x080029cc:
        iVar11 = puVar4;
        puVar5 = (iVar11 << 4) + 0x20;
        iVar6 = trace_event_buffer_reserve(&uStack_188,iVar10);
        if (iVar6 != 0) {
            uVar13 = iVar11 * 8 + 0x20;
            *(iVar6 + 8) = iVar11;
            *(iVar6 + 0x10) = 0;
            *(iVar6 + 0x18) = iVar11 << 0x13 | 0x20;
            *(iVar6 + 0x1c) = uVar13 | iVar11 << 0x13;
            if (iVar11 != 0) {
                uVar3 = puVar4 & 0xffffffff;
                piVar7 = auVar18._8_8_ + 8;
                iVar9 = iVar6;
                do {
                    uVar3 = uVar3 - 1;
                    *(iVar9 + 0x20) = piVar7[-1];
                    *(iVar9 + (uVar13 & 0xfff8)) = *piVar7;
                    iVar9 = iVar9 + 8;
                    *(iVar6 + 0x10) = *(iVar6 + 0x10) + *piVar7;
                    piVar7 = piVar7 + 2;
                } while (uVar3 != 0);
            }
            trace_event_buffer_commit(&uStack_188);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_158) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar9 = auVar19._0_8_;
    *extraout_x18_01 = sym.perf_trace_hyp_assign_batch_start;
    pcStack_1c8 = sym.perf_trace_hyp_assign_batch_start;
    iVar6 = sp_el0;
    iStack_1d8 = *(iVar6 + 0x5e0);
    uVar3 = puVar5 & 0xffffffff;
    iStack_1e0 = 0;
    uStack_1e4 = 0;
    iVar6 = tpidr_el1;
    piVar7 = iVar6 + *(iVar9 + 0x78);
    ppuStack_1d0 = &ppuStack_150;
    uStack_1c0 = arg1;
    uStack_1b8 = uVar2;
    uStack_1b0 = uVar14;
    iStack_1a8 = iVar10;
    uStack_1a0 = puVar4 & 0xffffffff;
    if ((*(iVar9 + 0x80) != 0) || (*piVar7 != 0)) {
        iVar11 = puVar5;
        puVar5 = &uStack_1e4;
        uVar2 = CONCAT44(0,iVar11 * 0x10 + 0x24);
        iStack_198 = auVar18._8_8_;
        iVar6 = perf_trace_buf_alloc(uVar2,&iStack_1e0);
        auVar18._8_8_ = iStack_198;
        auVar18._0_8_ = uVar2;
        if (iVar6 != 0) {
            uVar17 = _trace_event_raw_init & 0x3f;
            *(iStack_1e0 + 0xe8) = &ppuStack_1d0;
            *(iStack_1e0 + 0xf8) = auStack_1f0;
            uVar13 = iVar11 * 8 + 0x20;
            *(iStack_1e0 + 0x100) = ~(-1L << uVar17) & 0x8002a84;
            *(iStack_1e0 + 0x108) = 5;
            *(iVar6 + 0x18) = iVar11 << 0x13 | 0x20;
            *(iVar6 + 0x1c) = uVar13 | iVar11 << 0x13;
            *(iVar6 + 8) = iVar11;
            *(iVar6 + 0x10) = 0;
            if (iVar11 != 0) {
                uVar17 = uVar3;
                piVar8 = auVar19._8_8_ + 8;
                iVar10 = iVar6;
                do {
                    uVar17 = uVar17 - 1;
                    *(iVar10 + 0x20) = piVar8[-1];
                    *(iVar10 + (uVar13 & 0xfff8)) = *piVar8;
                    iVar10 = iVar10 + 8;
                    *(iVar6 + 0x10) = *(iVar6 + 0x10) + *piVar8;
                    piVar8 = piVar8 + 2;
                } while (uVar17 != 0);
            }
            puVar5 = uStack_1e4;
            perf_trace_run_bpf_submit(iVar6,uVar2,puVar5,iVar9,1,iStack_1e0,piVar7,0);
            auVar18._8_8_ = iStack_198;
        }
    }
    iStack_198 = auVar18._8_8_;
    uVar14 = auVar18._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_1d8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar10 = auVar18._0_8_;
    uVar15 = tpidr_el2;
    *extraout_x18_02 = 0x8002c10;
    uStack_218 = 0x8002c10;
    iVar6 = sp_el0;
    iStack_228 = *(iVar6 + 0x5e0);
    uVar2 = auVar18._8_8_ & 0xffffffff;
    uVar15 = *(iVar10 + 0x48);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uVar13 = uVar15;
    ppuStack_220 = &ppuStack_1d0;
    uStack_208 = uVar14;
    piStack_200 = piVar7;
    if ((uVar13 >> 8 & 1) == 0) {
        puVar4 = puVar5;
        if ((uVar13 >> 7 & 1) != 0) {
            puVar4 = NULL;
            iStack_210 = auVar19._8_8_;
            iStack_1f8 = iVar9;
            event_triggers_call(iVar10,0,0,0);
            auVar19._8_8_ = iStack_210;
            auVar19._0_8_ = iStack_1f8;
        }
        iStack_210 = auVar19._8_8_;
        iStack_1f8 = auVar19._0_8_;
        if (((uVar13 >> 6 & 1) == 0) &&
           (((uVar13 >> 9 & 1) == 0 ||
            (uVar17 = trace_event_ignore_this_pid(iVar10), auVar19._8_8_ = iStack_210, auVar19._0_8_ = iStack_1f8,
            (uVar17 & 1) == 0)))) goto code_r0x08002c90;
    }
    else {
code_r0x08002c90:
        iStack_210 = auVar19._8_8_;
        iStack_1f8 = auVar19._0_8_;
        puVar4 = 0x18;
        iVar6 = trace_event_buffer_reserve(&uStack_258,iVar10);
        auVar19._8_8_ = iStack_210;
        auVar19._0_8_ = iStack_1f8;
        if (iVar6 != 0) {
            *(iVar6 + 8) = auVar18._8_4_;
            *(iVar6 + 0x10) = puVar5;
            trace_event_buffer_commit(&uStack_258);
            auVar19._8_8_ = iStack_210;
            auVar19._0_8_ = iStack_1f8;
        }
    }
    iStack_210 = auVar19._8_8_;
    iStack_1f8 = auVar19._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_228) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar9 = auVar18._0_8_;
    *extraout_x18_03 = sym.perf_trace_hyp_assign_batch_end;
    pcStack_298 = sym.perf_trace_hyp_assign_batch_end;
    iVar6 = sp_el0;
    iStack_2a8 = *(iVar6 + 0x5e0);
    uVar17 = auVar18._8_8_ & 0xffffffff;
    iStack_2b0 = 0;
    uStack_2b4 = 0;
    iVar6 = tpidr_el1;
    piVar7 = iVar6 + *(iVar9 + 0x78);
    ppuStack_2a0 = &ppuStack_220;
    uStack_290 = uVar3;
    uStack_280 = uVar15;
    iStack_278 = iVar10;
    uStack_270 = uVar2;
    puStack_268 = puVar5;
    if ((*(iVar9 + 0x80) != 0) || (puVar5 = puVar4, *piVar7 != 0)) {
        puVar5 = &uStack_2b4;
        iVar6 = perf_trace_buf_alloc(0x1c,&iStack_2b0);
        uVar3 = _trace_event_raw_init;
        if (iVar6 != 0) {
            *(iStack_2b0 + 0xe8) = &ppuStack_2a0;
            puVar5 = uStack_2b4;
            *(iStack_2b0 + 0xf8) = auStack_2c0;
            *(iStack_2b0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8002ce8;
            *(iStack_2b0 + 0x108) = 5;
            *(iVar6 + 8) = auVar18._8_4_;
            *(iVar6 + 0x10) = puVar4;
            perf_trace_run_bpf_submit(iVar6,0x1c,puVar5,iVar9,1,iStack_2b0,piVar7,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_2a8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar10 = auVar18._0_8_;
    uVar14 = tpidr_el2;
    *extraout_x18_04 = 0x8002e08;
    uStack_2e8 = 0x8002e08;
    iVar6 = sp_el0;
    iStack_2f8 = *(iVar6 + 0x5e0);
    uVar14 = *(iVar10 + 0x48);
    uStack_308 = 0;
    uStack_300 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
    uVar13 = uVar14;
    ppuStack_2f0 = &ppuStack_2a0;
    piStack_2e0 = piVar7;
    uStack_2d8 = uVar17;
    puStack_2d0 = puVar4;
    iStack_2c8 = iVar9;
    if ((uVar13 >> 8 & 1) == 0) {
        puVar4 = puVar5;
        if ((uVar13 >> 7 & 1) != 0) {
            puVar4 = NULL;
            event_triggers_call(iVar10,0,0,0);
        }
        if (((uVar13 >> 6 & 1) != 0) ||
           (((uVar13 >> 9 & 1) != 0 && (uVar3 = trace_event_ignore_this_pid(iVar10), (uVar3 & 1) != 0))))
        goto code_r0x08002ea8;
    }
    puVar4 = 0x18;
    iVar6 = trace_event_buffer_reserve(&uStack_328,iVar10);
    if (iVar6 != 0) {
        *(iVar6 + 8) = auVar18._8_8_;
        *(iVar6 + 0x10) = puVar5;
        trace_event_buffer_commit(&uStack_328);
    }
code_r0x08002ea8:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_2f8) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar10 = auVar19._0_8_;
    *extraout_x18_05 = sym.perf_trace_hyp_assign_end;
    pcStack_368 = sym.perf_trace_hyp_assign_end;
    pcStack_360 = sym.perf_trace_hyp_assign_batch_end;
    iVar6 = sp_el0;
    iStack_378 = *(iVar6 + 0x5e0);
    iStack_380 = 0;
    uStack_384 = 0;
    iVar6 = tpidr_el1;
    piVar7 = iVar6 + *(iVar10 + 0x78);
    ppuStack_370 = &ppuStack_2f0;
    uStack_350 = uVar14;
    puStack_338 = puVar5;
    auStack_348 = auVar18;
    if ((*(iVar10 + 0x80) != 0) || (puVar5 = puVar4, *piVar7 != 0)) {
        puVar5 = &uStack_384;
        iVar6 = perf_trace_buf_alloc(0x1c,&iStack_380,puVar5);
        uVar3 = _trace_event_raw_init;
        if (iVar6 != 0) {
            *(iStack_380 + 0xe8) = &ppuStack_370;
            puVar5 = uStack_384;
            *(iStack_380 + 0xf8) = auStack_390;
            *(iStack_380 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8002edc;
            *(iStack_380 + 0x108) = 5;
            *(iVar6 + 8) = auVar19._8_8_;
            *(iVar6 + 0x10) = puVar4;
            perf_trace_run_bpf_submit(iVar6,0x1c,puVar5,iVar10,1,iStack_380,piVar7,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_378) {
        auVar18 = __stack_chk_fail();
        uVar14 = tpidr_el2;
        *extraout_x18_06 = 0x8002ff8;
        bpf_trace_run5(in_tmp_ldXn,auVar18._0_8_,auVar18._8_8_,puVar5 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_hyp_assign_info @ 0x08002794 (size 452) =====

//WARNING: Removing unreachable block (ram,0x08002db0)
//WARNING: Removing unreachable block (ram,0x08002b5c)
//WARNING: Removing unreachable block (ram,0x08002fa4)

void sym.perf_trace_hyp_assign_info(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    ulong in_tmp_ldXn;
    int64_t iVar2;
    uint64_t uVar3;
    uchar *puVar4;
    uchar *puVar5;
    ulong in_x4;
    uint32_t in_w5;
    uint64_t uVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    int iVar11;
    uint64_t unaff_x20;
    uint32_t uVar12;
    uint64_t unaff_x22;
    ulong uVar13;
    ulong uVar14;
    uint64_t uVar15;
    uint64_t unaff_x24;
    uint64_t uVar16;
    uint64_t unaff_x30;
    uchar auVar17 [16];
    uchar auVar18 [16];
    uchar auStack_300 [12];
    uint32_t uStack_2f4;
    int64_t iStack_2f0;
    int64_t iStack_2e8;
    uchar *puStack_2e0;
    code *pcStack_2d8;
    code *pcStack_2d0;
    ulong uStack_2c0;
    uchar auStack_2b8 [16];
    uchar *puStack_2a8;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    ulong uStack_270;
    int64_t iStack_268;
    uchar *puStack_260;
    ulong uStack_258;
    int64_t *piStack_250;
    uint64_t uStack_248;
    uchar *puStack_240;
    int64_t iStack_238;
    uchar auStack_230 [12];
    uint32_t uStack_224;
    int64_t iStack_220;
    int64_t iStack_218;
    uchar *puStack_210;
    code *pcStack_208;
    uint64_t uStack_200;
    ulong uStack_1f0;
    int64_t iStack_1e8;
    uint64_t uStack_1e0;
    uchar *puStack_1d8;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    int64_t iStack_198;
    uchar *puStack_190;
    ulong uStack_188;
    int64_t iStack_180;
    ulong uStack_178;
    int64_t *piStack_170;
    int64_t iStack_168;
    uchar auStack_160 [12];
    uint32_t uStack_154;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar *puStack_140;
    code *pcStack_138;
    uint64_t uStack_130;
    uint64_t uStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    uint64_t uStack_110;
    int64_t iStack_108;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    ulong uStack_b8;
    uint64_t uStack_b0;
    int64_t *piStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_98;
    uchar auStack_90 [8];
    int64_t iStack_88;
    ulong uStack_80;
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    uVar15 = in_w5;
    uVar16 = arg3 & 0xffffffff;
    iStack_70 = 0;
    uStack_74 = 0;
    iVar2 = tpidr_el1;
    piVar7 = iVar2 + *(arg1 + 0x78);
    iStack_88 = arg4;
    if ((*(arg1 + 0x80) != 0) || (*piVar7 != 0)) {
        iVar11 = arg3;
        uVar12 = iVar11 * 4;
        unaff_x22 = uVar12;
        uVar1 = in_w5 * 4 + uVar12;
        unaff_x20 = uVar1;
        arg3 = &stack0xffffffffffffff8c;
        unaff_x24 = (in_w5 * 4 + uVar1 + 0x27 & 0xfffffff8) - 4;
        uStack_80 = in_x4;
        iVar2 = perf_trace_buf_alloc(unaff_x24,&stack0xffffffffffffff90);
        if (iVar2 != 0) {
            uVar12 = uVar12 + 0x1c;
            unaff_x22 = uVar12;
            uVar6 = -1L << (_trace_event_raw_init & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            uVar3 = (~uVar6 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar6 | unaff_x30;
            }
            *(iStack_70 + 0xf8) = &stack0xffffffffffffff70;
            *(iStack_70 + 0x100) = uVar3;
            *(iStack_70 + 0x108) = 5;
            *(iVar2 + 8) = iVar11;
            *(iVar2 + 0xc) = in_w5;
            *(iVar2 + 0x10) = iVar11 << 0x12 | 0x1c;
            *(iVar2 + 0x14) = in_w5 << 0x12 | uVar12;
            *(iVar2 + 0x18) = uVar1 + 0x1c | in_w5 << 0x12;
            memcpy(iVar2 + 0x1c,arg2,-(uVar16 >> 0x1f) & 0xfffffffc00000000 | uVar16 << 2);
            uVar15 = -(in_w5 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
            memcpy(iVar2 + (uVar12 & 0xfffc),iStack_88,uVar15);
            memcpy(iVar2 + *(iVar2 + 0x18),uStack_80,uVar15);
            arg3 = uStack_74;
            perf_trace_run_bpf_submit(iVar2,unaff_x24,arg3,arg1,1,iStack_70,piVar7,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar10 = auVar17._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18 = 0x800294c;
    uStack_b8 = 0x800294c;
    iVar2 = sp_el0;
    iStack_c8 = *(iVar2 + 0x5e0);
    uVar13 = *(iVar10 + 0x48);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uVar12 = uVar13;
    puStack_c0 = &stack0xffffffffffffffa0;
    uStack_b0 = unaff_x22;
    piStack_a8 = piVar7;
    uStack_a0 = unaff_x20;
    iStack_98 = arg1;
    if ((uVar12 >> 8 & 1) == 0) {
        puVar4 = arg3;
        if ((uVar12 >> 7 & 1) != 0) {
            puVar4 = NULL;
            event_triggers_call(iVar10,0,0,0);
        }
        if (((uVar12 >> 6 & 1) == 0) &&
           (((uVar12 >> 9 & 1) == 0 || (uVar16 = trace_event_ignore_this_pid(iVar10), (uVar16 & 1) == 0))))
        goto code_r0x080029cc;
    }
    else {
code_r0x080029cc:
        iVar11 = arg3;
        puVar4 = (iVar11 << 4) + 0x20;
        iVar2 = trace_event_buffer_reserve(&stack0xffffffffffffff08,iVar10);
        if (iVar2 != 0) {
            uVar12 = iVar11 * 8 + 0x20;
            *(iVar2 + 8) = iVar11;
            *(iVar2 + 0x10) = 0;
            *(iVar2 + 0x18) = iVar11 << 0x13 | 0x20;
            *(iVar2 + 0x1c) = uVar12 | iVar11 << 0x13;
            if (iVar11 != 0) {
                uVar16 = arg3 & 0xffffffff;
                piVar7 = auVar17._8_8_ + 8;
                iVar9 = iVar2;
                do {
                    uVar16 = uVar16 - 1;
                    *(iVar9 + 0x20) = piVar7[-1];
                    *(iVar9 + (uVar12 & 0xfff8)) = *piVar7;
                    iVar9 = iVar9 + 8;
                    *(iVar2 + 0x10) = *(iVar2 + 0x10) + *piVar7;
                    piVar7 = piVar7 + 2;
                } while (uVar16 != 0);
            }
            trace_event_buffer_commit(&stack0xffffffffffffff08);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar9 = auVar18._0_8_;
    *extraout_x18_00 = sym.perf_trace_hyp_assign_batch_start;
    pcStack_138 = sym.perf_trace_hyp_assign_batch_start;
    iVar2 = sp_el0;
    iStack_148 = *(iVar2 + 0x5e0);
    uVar16 = puVar4 & 0xffffffff;
    iStack_150 = 0;
    uStack_154 = 0;
    iVar2 = tpidr_el1;
    piVar7 = iVar2 + *(iVar9 + 0x78);
    puStack_140 = &stack0xffffffffffffff40;
    uStack_130 = unaff_x24;
    uStack_128 = uVar15;
    uStack_120 = uVar13;
    iStack_118 = iVar10;
    uStack_110 = arg3 & 0xffffffff;
    if ((*(iVar9 + 0x80) != 0) || (*piVar7 != 0)) {
        iVar11 = puVar4;
        puVar4 = &stack0xfffffffffffffeac;
        uVar15 = CONCAT44(0,iVar11 * 0x10 + 0x24);
        iStack_108 = auVar17._8_8_;
        iVar2 = perf_trace_buf_alloc(uVar15,&stack0xfffffffffffffeb0);
        auVar17._8_8_ = iStack_108;
        auVar17._0_8_ = uVar15;
        if (iVar2 != 0) {
            uVar3 = _trace_event_raw_init & 0x3f;
            *(iStack_150 + 0xe8) = &stack0xfffffffffffffec0;
            *(iStack_150 + 0xf8) = &stack0xfffffffffffffea0;
            uVar12 = iVar11 * 8 + 0x20;
            *(iStack_150 + 0x100) = ~(-1L << uVar3) & 0x8002a84;
            *(iStack_150 + 0x108) = 5;
            *(iVar2 + 0x18) = iVar11 << 0x13 | 0x20;
            *(iVar2 + 0x1c) = uVar12 | iVar11 << 0x13;
            *(iVar2 + 8) = iVar11;
            *(iVar2 + 0x10) = 0;
            if (iVar11 != 0) {
                uVar3 = uVar16;
                piVar8 = auVar18._8_8_ + 8;
                iVar10 = iVar2;
                do {
                    uVar3 = uVar3 - 1;
                    *(iVar10 + 0x20) = piVar8[-1];
                    *(iVar10 + (uVar12 & 0xfff8)) = *piVar8;
                    iVar10 = iVar10 + 8;
                    *(iVar2 + 0x10) = *(iVar2 + 0x10) + *piVar8;
                    piVar8 = piVar8 + 2;
                } while (uVar3 != 0);
            }
            puVar4 = uStack_154;
            perf_trace_run_bpf_submit(iVar2,uVar15,puVar4,iVar9,1,iStack_150,piVar7,0);
            auVar17._8_8_ = iStack_108;
        }
    }
    iStack_108 = auVar17._8_8_;
    uVar13 = auVar17._0_8_;
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_148) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar10 = auVar17._0_8_;
    uVar14 = tpidr_el2;
    *extraout_x18_01 = 0x8002c10;
    uStack_188 = 0x8002c10;
    iVar2 = sp_el0;
    iStack_198 = *(iVar2 + 0x5e0);
    uVar15 = auVar17._8_8_ & 0xffffffff;
    uVar14 = *(iVar10 + 0x48);
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uVar12 = uVar14;
    puStack_190 = &stack0xfffffffffffffec0;
    uStack_178 = uVar13;
    piStack_170 = piVar7;
    if ((uVar12 >> 8 & 1) == 0) {
        puVar5 = puVar4;
        if ((uVar12 >> 7 & 1) != 0) {
            puVar5 = NULL;
            iStack_180 = auVar18._8_8_;
            iStack_168 = iVar9;
            event_triggers_call(iVar10,0,0,0);
            auVar18._8_8_ = iStack_180;
            auVar18._0_8_ = iStack_168;
        }
        iStack_180 = auVar18._8_8_;
        iStack_168 = auVar18._0_8_;
        if (((uVar12 >> 6 & 1) == 0) &&
           (((uVar12 >> 9 & 1) == 0 ||
            (uVar3 = trace_event_ignore_this_pid(iVar10), auVar18._8_8_ = iStack_180, auVar18._0_8_ = iStack_168,
            (uVar3 & 1) == 0)))) goto code_r0x08002c90;
    }
    else {
code_r0x08002c90:
        iStack_180 = auVar18._8_8_;
        iStack_168 = auVar18._0_8_;
        puVar5 = 0x18;
        iVar2 = trace_event_buffer_reserve(&stack0xfffffffffffffe38,iVar10);
        auVar18._8_8_ = iStack_180;
        auVar18._0_8_ = iStack_168;
        if (iVar2 != 0) {
            *(iVar2 + 8) = auVar17._8_4_;
            *(iVar2 + 0x10) = puVar4;
            trace_event_buffer_commit(&stack0xfffffffffffffe38);
            auVar18._8_8_ = iStack_180;
            auVar18._0_8_ = iStack_168;
        }
    }
    iStack_180 = auVar18._8_8_;
    iStack_168 = auVar18._0_8_;
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_198) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar9 = auVar17._0_8_;
    *extraout_x18_02 = sym.perf_trace_hyp_assign_batch_end;
    pcStack_208 = sym.perf_trace_hyp_assign_batch_end;
    iVar2 = sp_el0;
    iStack_218 = *(iVar2 + 0x5e0);
    uVar3 = auVar17._8_8_ & 0xffffffff;
    iStack_220 = 0;
    uStack_224 = 0;
    iVar2 = tpidr_el1;
    piVar7 = iVar2 + *(iVar9 + 0x78);
    puStack_210 = &stack0xfffffffffffffe70;
    uStack_200 = uVar16;
    uStack_1f0 = uVar14;
    iStack_1e8 = iVar10;
    uStack_1e0 = uVar15;
    puStack_1d8 = puVar4;
    if ((*(iVar9 + 0x80) != 0) || (puVar4 = puVar5, *piVar7 != 0)) {
        puVar4 = &stack0xfffffffffffffddc;
        iVar2 = perf_trace_buf_alloc(0x1c,&stack0xfffffffffffffde0);
        uVar15 = _trace_event_raw_init;
        if (iVar2 != 0) {
            *(iStack_220 + 0xe8) = &stack0xfffffffffffffdf0;
            puVar4 = uStack_224;
            *(iStack_220 + 0xf8) = &stack0xfffffffffffffdd0;
            *(iStack_220 + 0x100) = ~(-1L << (uVar15 & 0x3f)) & 0x8002ce8;
            *(iStack_220 + 0x108) = 5;
            *(iVar2 + 8) = auVar17._8_4_;
            *(iVar2 + 0x10) = puVar5;
            perf_trace_run_bpf_submit(iVar2,0x1c,puVar4,iVar9,1,iStack_220,piVar7,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_218) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar10 = auVar17._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18_03 = 0x8002e08;
    uStack_258 = 0x8002e08;
    iVar2 = sp_el0;
    iStack_268 = *(iVar2 + 0x5e0);
    uVar13 = *(iVar10 + 0x48);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    uVar12 = uVar13;
    puStack_260 = &stack0xfffffffffffffdf0;
    piStack_250 = piVar7;
    uStack_248 = uVar3;
    puStack_240 = puVar5;
    iStack_238 = iVar9;
    if ((uVar12 >> 8 & 1) == 0) {
        puVar5 = puVar4;
        if ((uVar12 >> 7 & 1) != 0) {
            puVar5 = NULL;
            event_triggers_call(iVar10,0,0,0);
        }
        if (((uVar12 >> 6 & 1) != 0) ||
           (((uVar12 >> 9 & 1) != 0 && (uVar15 = trace_event_ignore_this_pid(iVar10), (uVar15 & 1) != 0))))
        goto code_r0x08002ea8;
    }
    puVar5 = 0x18;
    iVar2 = trace_event_buffer_reserve(&stack0xfffffffffffffd68,iVar10);
    if (iVar2 != 0) {
        *(iVar2 + 8) = auVar17._8_8_;
        *(iVar2 + 0x10) = puVar4;
        trace_event_buffer_commit(&stack0xfffffffffffffd68);
    }
code_r0x08002ea8:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_268) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar10 = auVar18._0_8_;
    *extraout_x18_04 = sym.perf_trace_hyp_assign_end;
    pcStack_2d8 = sym.perf_trace_hyp_assign_end;
    pcStack_2d0 = sym.perf_trace_hyp_assign_batch_end;
    iVar2 = sp_el0;
    iStack_2e8 = *(iVar2 + 0x5e0);
    iStack_2f0 = 0;
    uStack_2f4 = 0;
    iVar2 = tpidr_el1;
    piVar7 = iVar2 + *(iVar10 + 0x78);
    puStack_2e0 = &stack0xfffffffffffffda0;
    uStack_2c0 = uVar13;
    puStack_2a8 = puVar4;
    auStack_2b8 = auVar17;
    if ((*(iVar10 + 0x80) != 0) || (puVar4 = puVar5, *piVar7 != 0)) {
        puVar4 = &stack0xfffffffffffffd0c;
        iVar2 = perf_trace_buf_alloc(0x1c,&stack0xfffffffffffffd10,puVar4);
        uVar15 = _trace_event_raw_init;
        if (iVar2 != 0) {
            *(iStack_2f0 + 0xe8) = &stack0xfffffffffffffd20;
            puVar4 = uStack_2f4;
            *(iStack_2f0 + 0xf8) = &stack0xfffffffffffffd00;
            *(iStack_2f0 + 0x100) = ~(-1L << (uVar15 & 0x3f)) & 0x8002edc;
            *(iStack_2f0 + 0x108) = 5;
            *(iVar2 + 8) = auVar18._8_8_;
            *(iVar2 + 0x10) = puVar5;
            perf_trace_run_bpf_submit(iVar2,0x1c,puVar4,iVar10,1,iStack_2f0,piVar7,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_2e8) {
        auVar17 = __stack_chk_fail();
        uVar13 = tpidr_el2;
        *extraout_x18_05 = 0x8002ff8;
        bpf_trace_run5(in_tmp_ldXn,auVar17._0_8_,auVar17._8_8_,puVar4 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_hyp_assign_batch_start @ 0x08002958 (size 300) =====

//WARNING: Removing unreachable block (ram,0x08002db0)
//WARNING: Removing unreachable block (ram,0x08002b5c)
//WARNING: Removing unreachable block (ram,0x08002fa4)

void sym.trace_event_raw_event_hyp_assign_batch_start(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong in_tmp_ldXn;
    uint64_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint32_t *puVar4;
    uint32_t *puVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    int iVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    ulong uVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    uchar auVar15 [16];
    uchar auStack_270 [12];
    uint32_t uStack_264;
    int64_t iStack_260;
    int64_t iStack_258;
    ulong **ppuStack_250;
    code *pcStack_248;
    code *pcStack_240;
    ulong uStack_230;
    uchar auStack_228 [16];
    uint32_t *puStack_218;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    int64_t iStack_1d8;
    ulong **ppuStack_1d0;
    ulong uStack_1c8;
    int64_t *piStack_1c0;
    uint64_t uStack_1b8;
    uint32_t *puStack_1b0;
    int64_t iStack_1a8;
    uchar auStack_1a0 [12];
    uint32_t uStack_194;
    int64_t iStack_190;
    int64_t iStack_188;
    ulong **ppuStack_180;
    code *pcStack_178;
    uint64_t uStack_170;
    ulong uStack_160;
    int64_t iStack_158;
    uint64_t uStack_150;
    uint32_t *puStack_148;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    ulong uStack_f8;
    int64_t iStack_f0;
    uint64_t uStack_e8;
    int64_t *piStack_e0;
    int64_t iStack_d8;
    uchar auStack_d0 [12];
    uint32_t uStack_c4;
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar12 = *(arg1 + 0x48);
    if ((uVar12 >> 8 & 1) == 0) {
        puVar4 = arg3;
        if ((uVar12 >> 7 & 1) != 0) {
            puVar4 = NULL;
            event_triggers_call(arg1,0,0,0);
        }
        if (((uVar12 >> 6 & 1) == 0) &&
           (((uVar12 >> 9 & 1) == 0 || (uVar1 = trace_event_ignore_this_pid(arg1), (uVar1 & 1) == 0))))
        goto code_r0x080029cc;
    }
    else {
code_r0x080029cc:
        iVar10 = arg3;
        puVar4 = (iVar10 << 4) + 0x20;
        iVar2 = trace_event_buffer_reserve(&uStack_68,arg1);
        if (iVar2 != 0) {
            uVar12 = iVar10 * 8 + 0x20;
            *(iVar2 + 8) = iVar10;
            *(iVar2 + 0x10) = 0;
            *(iVar2 + 0x18) = iVar10 << 0x13 | 0x20;
            *(iVar2 + 0x1c) = uVar12 | iVar10 << 0x13;
            if (iVar10 != 0) {
                uVar1 = arg3 & 0xffffffff;
                piVar6 = arg2 + 8;
                iVar8 = iVar2;
                do {
                    uVar1 = uVar1 - 1;
                    *(iVar8 + 0x20) = piVar6[-1];
                    *(iVar8 + (uVar12 & 0xfff8)) = *piVar6;
                    iVar8 = iVar8 + 8;
                    *(iVar2 + 0x10) = *(iVar2 + 0x10) + *piVar6;
                    piVar6 = piVar6 + 2;
                } while (uVar1 != 0);
            }
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    auVar14 = __stack_chk_fail();
    iVar8 = auVar14._0_8_;
    *extraout_x18 = sym.perf_trace_hyp_assign_batch_start;
    pcStack_a8 = sym.perf_trace_hyp_assign_batch_start;
    iVar2 = sp_el0;
    iStack_b8 = *(iVar2 + 0x5e0);
    uVar1 = puVar4 & 0xffffffff;
    iStack_c0 = 0;
    uStack_c4 = 0;
    iVar2 = tpidr_el1;
    piVar6 = iVar2 + *(iVar8 + 0x78);
    puStack_b0 = &stack0xffffffffffffffd0;
    if ((*(iVar8 + 0x80) != 0) || (*piVar6 != 0)) {
        iVar10 = puVar4;
        puVar4 = &uStack_c4;
        arg1 = iVar10 * 0x10 + 0x24;
        iVar2 = perf_trace_buf_alloc(arg1,&iStack_c0);
        if (iVar2 != 0) {
            uVar11 = _trace_event_raw_init & 0x3f;
            *(iStack_c0 + 0xe8) = &puStack_b0;
            *(iStack_c0 + 0xf8) = auStack_d0;
            uVar12 = iVar10 * 8 + 0x20;
            *(iStack_c0 + 0x100) = ~(-1L << uVar11) & 0x8002a84;
            *(iStack_c0 + 0x108) = 5;
            *(iVar2 + 0x18) = iVar10 << 0x13 | 0x20;
            *(iVar2 + 0x1c) = uVar12 | iVar10 << 0x13;
            *(iVar2 + 8) = iVar10;
            *(iVar2 + 0x10) = 0;
            if (iVar10 != 0) {
                uVar11 = uVar1;
                piVar7 = auVar14._8_8_ + 8;
                iVar9 = iVar2;
                do {
                    uVar11 = uVar11 - 1;
                    *(iVar9 + 0x20) = piVar7[-1];
                    *(iVar9 + (uVar12 & 0xfff8)) = *piVar7;
                    iVar9 = iVar9 + 8;
                    *(iVar2 + 0x10) = *(iVar2 + 0x10) + *piVar7;
                    piVar7 = piVar7 + 2;
                } while (uVar11 != 0);
            }
            puVar4 = uStack_c4;
            perf_trace_run_bpf_submit(iVar2,arg1,puVar4,iVar8,1,iStack_c0,piVar6,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar15 = __stack_chk_fail();
    iVar9 = auVar15._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18_00 = 0x8002c10;
    uStack_f8 = 0x8002c10;
    iVar2 = sp_el0;
    iStack_108 = *(iVar2 + 0x5e0);
    uVar11 = auVar15._8_8_ & 0xffffffff;
    uVar13 = *(iVar9 + 0x48);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uVar12 = uVar13;
    ppuStack_100 = &puStack_b0;
    uStack_e8 = arg1;
    piStack_e0 = piVar6;
    if ((uVar12 >> 8 & 1) == 0) {
        puVar5 = puVar4;
        if ((uVar12 >> 7 & 1) != 0) {
            puVar5 = NULL;
            iStack_f0 = auVar14._8_8_;
            iStack_d8 = iVar8;
            event_triggers_call(iVar9,0,0,0);
            auVar14._8_8_ = iStack_f0;
            auVar14._0_8_ = iStack_d8;
        }
        iStack_f0 = auVar14._8_8_;
        iStack_d8 = auVar14._0_8_;
        if (((uVar12 >> 6 & 1) == 0) &&
           (((uVar12 >> 9 & 1) == 0 ||
            (uVar3 = trace_event_ignore_this_pid(iVar9), auVar14._8_8_ = iStack_f0, auVar14._0_8_ = iStack_d8,
            (uVar3 & 1) == 0)))) goto code_r0x08002c90;
    }
    else {
code_r0x08002c90:
        iStack_f0 = auVar14._8_8_;
        iStack_d8 = auVar14._0_8_;
        puVar5 = 0x18;
        iVar2 = trace_event_buffer_reserve(&uStack_138,iVar9);
        auVar14._8_8_ = iStack_f0;
        auVar14._0_8_ = iStack_d8;
        if (iVar2 != 0) {
            *(iVar2 + 8) = auVar15._8_4_;
            *(iVar2 + 0x10) = puVar4;
            trace_event_buffer_commit(&uStack_138);
            auVar14._8_8_ = iStack_f0;
            auVar14._0_8_ = iStack_d8;
        }
    }
    iStack_f0 = auVar14._8_8_;
    iStack_d8 = auVar14._0_8_;
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_108) {
        return;
    }
    auVar14 = __stack_chk_fail();
    iVar8 = auVar14._0_8_;
    *extraout_x18_01 = sym.perf_trace_hyp_assign_batch_end;
    pcStack_178 = sym.perf_trace_hyp_assign_batch_end;
    iVar2 = sp_el0;
    iStack_188 = *(iVar2 + 0x5e0);
    uVar3 = auVar14._8_8_ & 0xffffffff;
    iStack_190 = 0;
    uStack_194 = 0;
    iVar2 = tpidr_el1;
    piVar6 = iVar2 + *(iVar8 + 0x78);
    ppuStack_180 = &ppuStack_100;
    uStack_170 = uVar1;
    uStack_160 = uVar13;
    iStack_158 = iVar9;
    uStack_150 = uVar11;
    puStack_148 = puVar4;
    if ((*(iVar8 + 0x80) != 0) || (puVar4 = puVar5, *piVar6 != 0)) {
        puVar4 = &uStack_194;
        iVar2 = perf_trace_buf_alloc(0x1c,&iStack_190);
        uVar1 = _trace_event_raw_init;
        if (iVar2 != 0) {
            *(iStack_190 + 0xe8) = &ppuStack_180;
            puVar4 = uStack_194;
            *(iStack_190 + 0xf8) = auStack_1a0;
            *(iStack_190 + 0x100) = ~(-1L << (uVar1 & 0x3f)) & 0x8002ce8;
            *(iStack_190 + 0x108) = 5;
            *(iVar2 + 8) = auVar14._8_4_;
            *(iVar2 + 0x10) = puVar5;
            perf_trace_run_bpf_submit(iVar2,0x1c,puVar4,iVar8,1,iStack_190,piVar6,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_188) {
        return;
    }
    auVar14 = __stack_chk_fail();
    iVar9 = auVar14._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18_02 = 0x8002e08;
    uStack_1c8 = 0x8002e08;
    iVar2 = sp_el0;
    iStack_1d8 = *(iVar2 + 0x5e0);
    uVar13 = *(iVar9 + 0x48);
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uVar12 = uVar13;
    ppuStack_1d0 = &ppuStack_180;
    piStack_1c0 = piVar6;
    uStack_1b8 = uVar3;
    puStack_1b0 = puVar5;
    iStack_1a8 = iVar8;
    if ((uVar12 >> 8 & 1) == 0) {
        puVar5 = puVar4;
        if ((uVar12 >> 7 & 1) != 0) {
            puVar5 = NULL;
            event_triggers_call(iVar9,0,0,0);
        }
        if (((uVar12 >> 6 & 1) != 0) ||
           (((uVar12 >> 9 & 1) != 0 && (uVar1 = trace_event_ignore_this_pid(iVar9), (uVar1 & 1) != 0))))
        goto code_r0x08002ea8;
    }
    puVar5 = 0x18;
    iVar2 = trace_event_buffer_reserve(&uStack_208,iVar9);
    if (iVar2 != 0) {
        *(iVar2 + 8) = auVar14._8_8_;
        *(iVar2 + 0x10) = puVar4;
        trace_event_buffer_commit(&uStack_208);
    }
code_r0x08002ea8:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_1d8) {
        return;
    }
    auVar15 = __stack_chk_fail();
    iVar8 = auVar15._0_8_;
    *extraout_x18_03 = sym.perf_trace_hyp_assign_end;
    pcStack_248 = sym.perf_trace_hyp_assign_end;
    pcStack_240 = sym.perf_trace_hyp_assign_batch_end;
    iVar2 = sp_el0;
    iStack_258 = *(iVar2 + 0x5e0);
    iStack_260 = 0;
    uStack_264 = 0;
    iVar2 = tpidr_el1;
    piVar6 = iVar2 + *(iVar8 + 0x78);
    ppuStack_250 = &ppuStack_1d0;
    uStack_230 = uVar13;
    puStack_218 = puVar4;
    auStack_228 = auVar14;
    if ((*(iVar8 + 0x80) != 0) || (puVar4 = puVar5, *piVar6 != 0)) {
        puVar4 = &uStack_264;
        iVar2 = perf_trace_buf_alloc(0x1c,&iStack_260,puVar4);
        uVar1 = _trace_event_raw_init;
        if (iVar2 != 0) {
            *(iStack_260 + 0xe8) = &ppuStack_250;
            puVar4 = uStack_264;
            *(iStack_260 + 0xf8) = auStack_270;
            *(iStack_260 + 0x100) = ~(-1L << (uVar1 & 0x3f)) & 0x8002edc;
            *(iStack_260 + 0x108) = 5;
            *(iVar2 + 8) = auVar15._8_8_;
            *(iVar2 + 0x10) = puVar5;
            perf_trace_run_bpf_submit(iVar2,0x1c,puVar4,iVar8,1,iStack_260,piVar6,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_258) {
        auVar14 = __stack_chk_fail();
        uVar13 = tpidr_el2;
        *extraout_x18_04 = 0x8002ff8;
        bpf_trace_run5(in_tmp_ldXn,auVar14._0_8_,auVar14._8_8_,puVar4 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_hyp_assign_batch_start @ 0x08002a84 (size 408) =====

//WARNING: Removing unreachable block (ram,0x08002db0)
//WARNING: Removing unreachable block (ram,0x08002fa4)

void sym.perf_trace_hyp_assign_batch_start(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    int64_t iVar2;
    int64_t iVar3;
    uchar *puVar4;
    uchar *puVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar9;
    uint64_t unaff_x21;
    uint32_t uVar10;
    ulong uVar11;
    int iVar12;
    uint64_t uVar13;
    uint64_t unaff_x30;
    uchar auVar14 [16];
    uchar auVar15 [16];
    uchar auStack_200 [12];
    uint32_t uStack_1f4;
    int64_t iStack_1f0;
    int64_t iStack_1e8;
    uchar *puStack_1e0;
    code *pcStack_1d8;
    code *pcStack_1d0;
    ulong uStack_1c0;
    uchar auStack_1b8 [16];
    uchar *puStack_1a8;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    int64_t iStack_168;
    uchar *puStack_160;
    ulong uStack_158;
    int64_t *piStack_150;
    uint64_t uStack_148;
    uchar *puStack_140;
    int64_t iStack_138;
    uchar auStack_130 [12];
    uint32_t uStack_124;
    int64_t iStack_120;
    int64_t iStack_118;
    uchar *puStack_110;
    code *pcStack_108;
    uint64_t uStack_100;
    ulong uStack_f0;
    int64_t iStack_e8;
    uint64_t uStack_e0;
    uchar *puStack_d8;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    ulong uStack_88;
    int64_t iStack_80;
    uint64_t uStack_78;
    int64_t *piStack_70;
    int64_t iStack_68;
    uchar auStack_60 [12];
    uint32_t uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    uVar13 = arg3 & 0xffffffff;
    iStack_50 = 0;
    uStack_54 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar12 = arg3;
        arg3 = &stack0xffffffffffffffac;
        unaff_x21 = iVar12 * 0x10 + 0x24;
        iVar2 = perf_trace_buf_alloc(unaff_x21,&stack0xffffffffffffffb0);
        if (iVar2 != 0) {
            uVar6 = -1L << (_trace_event_raw_init & 0x3f);
            *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            *(iStack_50 + 0xf8) = &stack0xffffffffffffffa0;
            uVar9 = (~uVar6 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar9 = uVar6 | unaff_x30;
            }
            uVar10 = iVar12 * 8 + 0x20;
            *(iStack_50 + 0x100) = uVar9;
            *(iStack_50 + 0x108) = 5;
            *(iVar2 + 0x18) = iVar12 << 0x13 | 0x20;
            *(iVar2 + 0x1c) = uVar10 | iVar12 << 0x13;
            *(iVar2 + 8) = iVar12;
            *(iVar2 + 0x10) = 0;
            if (iVar12 != 0) {
                uVar9 = uVar13;
                piVar7 = arg2 + 8;
                iVar8 = iVar2;
                do {
                    uVar9 = uVar9 - 1;
                    *(iVar8 + 0x20) = piVar7[-1];
                    *(iVar8 + (uVar10 & 0xfff8)) = *piVar7;
                    iVar8 = iVar8 + 8;
                    *(iVar2 + 0x10) = *(iVar2 + 0x10) + *piVar7;
                    piVar7 = piVar7 + 2;
                } while (uVar9 != 0);
            }
            arg3 = uStack_54;
            perf_trace_run_bpf_submit(iVar2,unaff_x21,arg3,arg1,1,iStack_50,piVar1,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return;
    }
    auVar14 = __stack_chk_fail();
    iVar8 = auVar14._0_8_;
    uVar11 = tpidr_el2;
    *extraout_x18 = 0x8002c10;
    uStack_88 = 0x8002c10;
    iVar2 = sp_el0;
    iStack_98 = *(iVar2 + 0x5e0);
    uVar9 = auVar14._8_8_ & 0xffffffff;
    uVar11 = *(iVar8 + 0x48);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uVar10 = uVar11;
    puStack_90 = &stack0xffffffffffffffc0;
    iStack_80 = arg2;
    uStack_78 = unaff_x21;
    piStack_70 = piVar1;
    iStack_68 = arg1;
    if ((uVar10 >> 8 & 1) == 0) {
        puVar4 = arg3;
        if ((uVar10 >> 7 & 1) != 0) {
            puVar4 = NULL;
            event_triggers_call(iVar8,0,0,0);
        }
        if (((uVar10 >> 6 & 1) == 0) &&
           (((uVar10 >> 9 & 1) == 0 || (uVar6 = trace_event_ignore_this_pid(iVar8), (uVar6 & 1) == 0))))
        goto code_r0x08002c90;
    }
    else {
code_r0x08002c90:
        puVar4 = 0x18;
        iVar2 = trace_event_buffer_reserve(&stack0xffffffffffffff38,iVar8);
        if (iVar2 != 0) {
            *(iVar2 + 8) = auVar14._8_4_;
            *(iVar2 + 0x10) = arg3;
            trace_event_buffer_commit(&stack0xffffffffffffff38);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_98) {
        return;
    }
    auVar14 = __stack_chk_fail();
    iVar3 = auVar14._0_8_;
    *extraout_x18_00 = sym.perf_trace_hyp_assign_batch_end;
    pcStack_108 = sym.perf_trace_hyp_assign_batch_end;
    iVar2 = sp_el0;
    iStack_118 = *(iVar2 + 0x5e0);
    uVar6 = auVar14._8_8_ & 0xffffffff;
    iStack_120 = 0;
    uStack_124 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(iVar3 + 0x78);
    puStack_110 = &stack0xffffffffffffff70;
    uStack_100 = uVar13;
    uStack_f0 = uVar11;
    iStack_e8 = iVar8;
    uStack_e0 = uVar9;
    puStack_d8 = arg3;
    if ((*(iVar3 + 0x80) != 0) || (puVar5 = puVar4, *piVar1 != 0)) {
        puVar5 = &stack0xfffffffffffffedc;
        iVar2 = perf_trace_buf_alloc(0x1c,&stack0xfffffffffffffee0);
        uVar13 = _trace_event_raw_init;
        if (iVar2 != 0) {
            *(iStack_120 + 0xe8) = &stack0xfffffffffffffef0;
            puVar5 = uStack_124;
            *(iStack_120 + 0xf8) = &stack0xfffffffffffffed0;
            *(iStack_120 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x8002ce8;
            *(iStack_120 + 0x108) = 5;
            *(iVar2 + 8) = auVar14._8_4_;
            *(iVar2 + 0x10) = puVar4;
            perf_trace_run_bpf_submit(iVar2,0x1c,puVar5,iVar3,1,iStack_120,piVar1,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_118) {
        return;
    }
    auVar14 = __stack_chk_fail();
    iVar8 = auVar14._0_8_;
    uVar11 = tpidr_el2;
    *extraout_x18_01 = 0x8002e08;
    uStack_158 = 0x8002e08;
    iVar2 = sp_el0;
    iStack_168 = *(iVar2 + 0x5e0);
    uVar11 = *(iVar8 + 0x48);
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uVar10 = uVar11;
    puStack_160 = &stack0xfffffffffffffef0;
    piStack_150 = piVar1;
    uStack_148 = uVar6;
    puStack_140 = puVar4;
    iStack_138 = iVar3;
    if ((uVar10 >> 8 & 1) == 0) {
        puVar4 = puVar5;
        if ((uVar10 >> 7 & 1) != 0) {
            puVar4 = NULL;
            event_triggers_call(iVar8,0,0,0);
        }
        if (((uVar10 >> 6 & 1) != 0) ||
           (((uVar10 >> 9 & 1) != 0 && (uVar13 = trace_event_ignore_this_pid(iVar8), (uVar13 & 1) != 0))))
        goto code_r0x08002ea8;
    }
    puVar4 = 0x18;
    iVar2 = trace_event_buffer_reserve(&stack0xfffffffffffffe68,iVar8);
    if (iVar2 != 0) {
        *(iVar2 + 8) = auVar14._8_8_;
        *(iVar2 + 0x10) = puVar5;
        trace_event_buffer_commit(&stack0xfffffffffffffe68);
    }
code_r0x08002ea8:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_168) {
        return;
    }
    auVar15 = __stack_chk_fail();
    iVar8 = auVar15._0_8_;
    *extraout_x18_02 = sym.perf_trace_hyp_assign_end;
    pcStack_1d8 = sym.perf_trace_hyp_assign_end;
    pcStack_1d0 = sym.perf_trace_hyp_assign_batch_end;
    iVar2 = sp_el0;
    iStack_1e8 = *(iVar2 + 0x5e0);
    iStack_1f0 = 0;
    uStack_1f4 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(iVar8 + 0x78);
    puStack_1e0 = &stack0xfffffffffffffea0;
    uStack_1c0 = uVar11;
    puStack_1a8 = puVar5;
    auStack_1b8 = auVar14;
    if ((*(iVar8 + 0x80) != 0) || (puVar5 = puVar4, *piVar1 != 0)) {
        puVar5 = &stack0xfffffffffffffe0c;
        iVar2 = perf_trace_buf_alloc(0x1c,&stack0xfffffffffffffe10,puVar5);
        uVar13 = _trace_event_raw_init;
        if (iVar2 != 0) {
            *(iStack_1f0 + 0xe8) = &stack0xfffffffffffffe20;
            puVar5 = uStack_1f4;
            *(iStack_1f0 + 0xf8) = &stack0xfffffffffffffe00;
            *(iStack_1f0 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x8002edc;
            *(iStack_1f0 + 0x108) = 5;
            *(iVar2 + 8) = auVar15._8_8_;
            *(iVar2 + 0x10) = puVar4;
            perf_trace_run_bpf_submit(iVar2,0x1c,puVar5,iVar8,1,iStack_1f0,piVar1,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_1e8) {
        auVar14 = __stack_chk_fail();
        uVar11 = tpidr_el2;
        *extraout_x18_03 = 0x8002ff8;
        bpf_trace_run5(in_tmp_ldXn,auVar14._0_8_,auVar14._8_8_,puVar5 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_hyp_assign_batch_end @ 0x08002c1c (size 204) =====

//WARNING: Removing unreachable block (ram,0x08002db0)
//WARNING: Removing unreachable block (ram,0x08002fa4)

void sym.trace_event_raw_event_hyp_assign_batch_end(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint32_t *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint32_t uVar9;
    ulong uVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar auVar12 [16];
    uchar auStack_1a0 [12];
    uint32_t uStack_194;
    int64_t iStack_190;
    int64_t iStack_188;
    ulong **ppuStack_180;
    code *pcStack_178;
    code *pcStack_170;
    ulong uStack_160;
    uchar auStack_158 [16];
    uint32_t *puStack_148;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    ulong uStack_f8;
    int64_t *piStack_f0;
    uint64_t uStack_e8;
    uint32_t *puStack_e0;
    int64_t iStack_d8;
    uchar auStack_d0 [12];
    uint32_t uStack_c4;
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar9 = *(arg1 + 0x48);
    if ((uVar9 >> 8 & 1) == 0) {
        puVar7 = arg3;
        if ((uVar9 >> 7 & 1) != 0) {
            puVar7 = NULL;
            event_triggers_call(arg1,0,0,0);
        }
        if (((uVar9 >> 6 & 1) == 0) &&
           (((uVar9 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(arg1), (uVar3 & 1) == 0))))
        goto code_r0x08002c90;
    }
    else {
code_r0x08002c90:
        puVar7 = 0x18;
        iVar4 = trace_event_buffer_reserve(&uStack_68,arg1);
        if (iVar4 != 0) {
            *(iVar4 + 8) = arg2;
            *(iVar4 + 0x10) = arg3;
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar11 = __stack_chk_fail();
    iVar5 = auVar11._0_8_;
    *extraout_x18 = sym.perf_trace_hyp_assign_batch_end;
    pcStack_a8 = sym.perf_trace_hyp_assign_batch_end;
    iVar4 = sp_el0;
    iStack_b8 = *(iVar4 + 0x5e0);
    uVar3 = auVar11._8_8_ & 0xffffffff;
    iStack_c0 = 0;
    uStack_c4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    puStack_b0 = &stack0xffffffffffffffd0;
    if ((*(iVar5 + 0x80) != 0) || (puVar8 = puVar7, *piVar1 != 0)) {
        puVar8 = &uStack_c4;
        iVar4 = perf_trace_buf_alloc(0x1c,&iStack_c0);
        uVar2 = _trace_event_raw_init;
        if (iVar4 != 0) {
            *(iStack_c0 + 0xe8) = &puStack_b0;
            puVar8 = uStack_c4;
            *(iStack_c0 + 0xf8) = auStack_d0;
            *(iStack_c0 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x8002ce8;
            *(iStack_c0 + 0x108) = 5;
            *(iVar4 + 8) = auVar11._8_4_;
            *(iVar4 + 0x10) = puVar7;
            perf_trace_run_bpf_submit(iVar4,0x1c,puVar8,iVar5,1,iStack_c0,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar11 = __stack_chk_fail();
    iVar6 = auVar11._0_8_;
    uVar10 = tpidr_el2;
    *extraout_x18_00 = 0x8002e08;
    uStack_f8 = 0x8002e08;
    iVar4 = sp_el0;
    iStack_108 = *(iVar4 + 0x5e0);
    uVar10 = *(iVar6 + 0x48);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uVar9 = uVar10;
    ppuStack_100 = &puStack_b0;
    piStack_f0 = piVar1;
    uStack_e8 = uVar3;
    puStack_e0 = puVar7;
    iStack_d8 = iVar5;
    if ((uVar9 >> 8 & 1) == 0) {
        puVar7 = puVar8;
        if ((uVar9 >> 7 & 1) != 0) {
            puVar7 = NULL;
            event_triggers_call(iVar6,0,0,0);
        }
        if (((uVar9 >> 6 & 1) != 0) ||
           (((uVar9 >> 9 & 1) != 0 && (uVar3 = trace_event_ignore_this_pid(iVar6), (uVar3 & 1) != 0))))
        goto code_r0x08002ea8;
    }
    puVar7 = 0x18;
    iVar4 = trace_event_buffer_reserve(&uStack_138,iVar6);
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar11._8_8_;
        *(iVar4 + 0x10) = puVar8;
        trace_event_buffer_commit(&uStack_138);
    }
code_r0x08002ea8:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_108) {
        return;
    }
    auVar12 = __stack_chk_fail();
    iVar5 = auVar12._0_8_;
    *extraout_x18_01 = sym.perf_trace_hyp_assign_end;
    pcStack_178 = sym.perf_trace_hyp_assign_end;
    pcStack_170 = sym.perf_trace_hyp_assign_batch_end;
    iVar4 = sp_el0;
    iStack_188 = *(iVar4 + 0x5e0);
    iStack_190 = 0;
    uStack_194 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    ppuStack_180 = &ppuStack_100;
    uStack_160 = uVar10;
    puStack_148 = puVar8;
    auStack_158 = auVar11;
    if ((*(iVar5 + 0x80) != 0) || (puVar8 = puVar7, *piVar1 != 0)) {
        puVar8 = &uStack_194;
        iVar4 = perf_trace_buf_alloc(0x1c,&iStack_190,puVar8);
        uVar3 = _trace_event_raw_init;
        if (iVar4 != 0) {
            *(iStack_190 + 0xe8) = &ppuStack_180;
            puVar8 = uStack_194;
            *(iStack_190 + 0xf8) = auStack_1a0;
            *(iStack_190 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8002edc;
            *(iStack_190 + 0x108) = 5;
            *(iVar4 + 8) = auVar12._8_8_;
            *(iVar4 + 0x10) = puVar7;
            perf_trace_run_bpf_submit(iVar4,0x1c,puVar8,iVar5,1,iStack_190,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_188) {
        auVar11 = __stack_chk_fail();
        uVar10 = tpidr_el2;
        *extraout_x18_02 = 0x8002ff8;
        bpf_trace_run5(in_tmp_ldXn,auVar11._0_8_,auVar11._8_8_,puVar8 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_hyp_assign_batch_end @ 0x08002ce8 (size 300) =====

//WARNING: Removing unreachable block (ram,0x08002fa4)

void sym.perf_trace_hyp_assign_batch_end(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int64_t iVar4;
    int64_t iVar5;
    uchar *puVar6;
    uchar *puVar7;
    uint64_t uVar8;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar9;
    uint32_t uVar10;
    uint64_t unaff_x30;
    uchar auVar11 [16];
    uchar auStack_130 [12];
    uint32_t uStack_124;
    int64_t iStack_120;
    int64_t iStack_118;
    uchar *puStack_110;
    code *pcStack_108;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    ulong uStack_88;
    int64_t *piStack_80;
    uint64_t uStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    uchar auStack_60 [12];
    uint32_t uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uVar9 = arg2 & 0xffffffff;
    iStack_50 = 0;
    uStack_54 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (puVar6 = arg3, *piVar1 != 0)) {
        puVar6 = &stack0xffffffffffffffac;
        iVar4 = perf_trace_buf_alloc(0x1c,&stack0xffffffffffffffb0);
        uVar2 = _trace_event_raw_init;
        if (iVar4 != 0) {
            *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            puVar6 = uStack_54;
            uVar8 = -1L << (uVar2 & 0x3f);
            uVar2 = (~uVar8 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar2 = uVar8 | unaff_x30;
            }
            *(iStack_50 + 0xf8) = &stack0xffffffffffffffa0;
            *(iStack_50 + 0x100) = uVar2;
            *(iStack_50 + 0x108) = 5;
            *(iVar4 + 8) = arg2;
            *(iVar4 + 0x10) = arg3;
            perf_trace_run_bpf_submit(iVar4,0x1c,puVar6,arg1,1,iStack_50,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    auVar11 = __stack_chk_fail();
    iVar5 = auVar11._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x8002e08;
    uStack_88 = 0x8002e08;
    iVar4 = sp_el0;
    iStack_98 = *(iVar4 + 0x5e0);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uVar10 = *(iVar5 + 0x48);
    puStack_90 = &stack0xffffffffffffffc0;
    piStack_80 = piVar1;
    uStack_78 = uVar9;
    iStack_70 = arg3;
    iStack_68 = arg1;
    if ((uVar10 >> 8 & 1) == 0) {
        puVar7 = puVar6;
        if ((uVar10 >> 7 & 1) != 0) {
            puVar7 = NULL;
            event_triggers_call(iVar5,0,0,0);
        }
        if (((uVar10 >> 6 & 1) != 0) ||
           (((uVar10 >> 9 & 1) != 0 && (uVar9 = trace_event_ignore_this_pid(iVar5), (uVar9 & 1) != 0))))
        goto code_r0x08002ea8;
    }
    puVar7 = 0x18;
    iVar4 = trace_event_buffer_reserve(&stack0xffffffffffffff38,iVar5);
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar11._8_8_;
        *(iVar4 + 0x10) = puVar6;
        trace_event_buffer_commit(&stack0xffffffffffffff38);
    }
code_r0x08002ea8:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_98) {
        return;
    }
    auVar11 = __stack_chk_fail();
    iVar5 = auVar11._0_8_;
    *extraout_x18_00 = sym.perf_trace_hyp_assign_end;
    pcStack_108 = sym.perf_trace_hyp_assign_end;
    iVar4 = sp_el0;
    iStack_118 = *(iVar4 + 0x5e0);
    iStack_120 = 0;
    uStack_124 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    puStack_110 = &stack0xffffffffffffff70;
    if ((*(iVar5 + 0x80) != 0) || (puVar6 = puVar7, *piVar1 != 0)) {
        puVar6 = &stack0xfffffffffffffedc;
        iVar4 = perf_trace_buf_alloc(0x1c,&stack0xfffffffffffffee0,puVar6);
        uVar9 = _trace_event_raw_init;
        if (iVar4 != 0) {
            *(iStack_120 + 0xe8) = &stack0xfffffffffffffef0;
            puVar6 = uStack_124;
            *(iStack_120 + 0xf8) = &stack0xfffffffffffffed0;
            *(iStack_120 + 0x100) = ~(-1L << (uVar9 & 0x3f)) & 0x8002edc;
            *(iStack_120 + 0x108) = 5;
            *(iVar4 + 8) = auVar11._8_8_;
            *(iVar4 + 0x10) = puVar7;
            perf_trace_run_bpf_submit(iVar4,0x1c,puVar6,iVar5,1,iStack_120,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_118) {
        auVar11 = __stack_chk_fail();
        uVar3 = tpidr_el2;
        *extraout_x18_01 = 0x8002ff8;
        bpf_trace_run5(in_tmp_ldXn,auVar11._0_8_,auVar11._8_8_,puVar6 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_hyp_assign_end @ 0x08002e14 (size 200) =====

//WARNING: Removing unreachable block (ram,0x08002fa4)

void sym.trace_event_raw_event_hyp_assign_end(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    uint32_t *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uchar auStack_d0 [12];
    uint32_t uStack_c4;
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar8 = *(arg1 + 0x48);
    if ((uVar8 >> 8 & 1) == 0) {
        puVar6 = arg3;
        if ((uVar8 >> 7 & 1) != 0) {
            puVar6 = NULL;
            event_triggers_call(arg1,0,0,0);
        }
        if (((uVar8 >> 6 & 1) != 0) ||
           (((uVar8 >> 9 & 1) != 0 && (uVar3 = trace_event_ignore_this_pid(arg1), (uVar3 & 1) != 0))))
        goto code_r0x08002ea8;
    }
    puVar6 = 0x18;
    iVar4 = trace_event_buffer_reserve(&uStack_68,arg1);
    if (iVar4 != 0) {
        *(iVar4 + 8) = arg2;
        *(iVar4 + 0x10) = arg3;
        trace_event_buffer_commit(&uStack_68);
    }
code_r0x08002ea8:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar9 = __stack_chk_fail();
    iVar5 = auVar9._0_8_;
    *extraout_x18 = sym.perf_trace_hyp_assign_end;
    pcStack_a8 = sym.perf_trace_hyp_assign_end;
    iVar4 = sp_el0;
    iStack_b8 = *(iVar4 + 0x5e0);
    iStack_c0 = 0;
    uStack_c4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    puStack_b0 = &stack0xffffffffffffffd0;
    if ((*(iVar5 + 0x80) != 0) || (puVar7 = puVar6, *piVar1 != 0)) {
        puVar7 = &uStack_c4;
        iVar4 = perf_trace_buf_alloc(0x1c,&iStack_c0,puVar7);
        uVar3 = _trace_event_raw_init;
        if (iVar4 != 0) {
            *(iStack_c0 + 0xe8) = &puStack_b0;
            puVar7 = uStack_c4;
            *(iStack_c0 + 0xf8) = auStack_d0;
            *(iStack_c0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8002edc;
            *(iStack_c0 + 0x108) = 5;
            *(iVar4 + 8) = auVar9._8_8_;
            *(iVar4 + 0x10) = puVar6;
            perf_trace_run_bpf_submit(iVar4,0x1c,puVar7,iVar5,1,iStack_c0,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_b8) {
        auVar9 = __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_00 = 0x8002ff8;
        bpf_trace_run5(in_tmp_ldXn,auVar9._0_8_,auVar9._8_8_,puVar7 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_hyp_assign_end @ 0x08002edc (size 296) =====

void sym.perf_trace_hyp_assign_end(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int64_t iVar4;
    uchar *puVar5;
    uint64_t uVar6;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar7 [16];
    uchar auStack_60 [12];
    uint32_t uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iStack_50 = 0;
    uStack_54 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (puVar5 = arg3, *piVar1 != 0)) {
        puVar5 = &stack0xffffffffffffffac;
        iVar4 = perf_trace_buf_alloc(0x1c,&stack0xffffffffffffffb0,puVar5);
        uVar2 = _trace_event_raw_init;
        if (iVar4 != 0) {
            *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            puVar5 = uStack_54;
            uVar6 = -1L << (uVar2 & 0x3f);
            uVar2 = (~uVar6 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar2 = uVar6 | unaff_x30;
            }
            *(iStack_50 + 0xf8) = &stack0xffffffffffffffa0;
            *(iStack_50 + 0x100) = uVar2;
            *(iStack_50 + 0x108) = 5;
            *(iVar4 + 8) = arg2;
            *(iVar4 + 0x10) = arg3;
            perf_trace_run_bpf_submit(iVar4,0x1c,puVar5,arg1,1,iStack_50,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    auVar7 = __stack_chk_fail();
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x8002ff8;
    bpf_trace_run5(in_tmp_ldXn,auVar7._0_8_,auVar7._8_8_,puVar5 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_hyp_assign_info @ 0x08003004 (size 44) =====

void sym.__bpf_trace_hyp_assign_info(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong in_x0;
    ulong in_x1;
    ulong in_x3;
    ulong in_x4;
    uint in_w5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run5(in_x0,in_x1,arg1 & 0xffffffff,in_x3,in_x4,in_w5);
    return;
}


// ===== sym.__bpf_trace_hyp_assign_batch_start @ 0x08003030 (size 40) =====

void sym.__bpf_trace_hyp_assign_batch_start(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong in_x0;
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2(in_x0,in_x1,arg1 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_hyp_assign_batch_end @ 0x08003058 (size 40) =====

void sym.__bpf_trace_hyp_assign_batch_end(ulong noname_0,int64_t arg1)

{
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2(in_x0,arg1 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_hyp_assign_end @ 0x08003080 (size 36) =====

void sym.__bpf_trace_hyp_assign_end(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2();
    return;
}


// ===== sym.page_accessible @ 0x080030a4 (size 56) =====

bool sym.page_accessible(int64_t arg1)

{
    return *(arg1 * 0x40 + (_event_triggers_call >> 0xc) * -0x40 + -0x1ffffffd8) != 0xeeeeeeee;
}


// ===== sym.hyp_assign_table @ 0x080030dc (size 728) =====

int sym.hyp_assign_table(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint uVar2;
    uint uVar3;
    int64_t *piVar4;
    code *pcVar5;
    int iVar6;
    uint64_t arg2_00;
    uint64_t uVar7;
    int64_t iVar8;
    uint *arg2_01;
    int64_t iVar9;
    ulong uVar10;
    int64_t arg2_02;
    uint *in_x4;
    uint32_t in_w5;
    uint64_t uVar11;
    uint *puVar12;
    uint *puVar13;
    ulong *in_x18;
    uint64_t uVar14;
    int iVar15;
    uint64_t arg3_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == NULL) {
        return -0x205;
    }
    if (arg1 != 0) {
        if (in_w5 == 0) {
            return -0x16;
        }
        if (in_x4 == NULL) {
            return -0x16;
        }
        if (arg4 == 0) {
            return -0x16;
        }
        uVar14 = arg3 & 0xffffffff;
        if (arg3 == 0) {
            return -0x16;
        }
        if (arg2 == 0) {
            return -0x16;
        }
        if (*arg1 == 0) {
            return -0x16;
        }
        if (*(arg1 + 8) != 0) {
            arg3_00 = -(uVar14 >> 0x1f) & 0xfffffffc00000000 | uVar14 << 2;
            arg2_00 = kmemdup(arg2,arg3_00,0xcc0);
            piVar4 = _segment.ehdr;
            if (arg2_00 == 0) {
                return -0xc;
            }
            uVar7 = is_vmalloc_addr();
            if (((uVar7 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                obj.dma_map_single_attrs.__already_done = 0x1;
                uVar10 = dev_driver_string(piVar4);
                iVar8 = piVar4[0xe];
                if (iVar8 == 0) {
                    iVar8 = *piVar4;
                }
                __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar10,iVar8);
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x80033a0);
                (*pcVar5)();
            }
            if (((uVar7 & 1) == 0) &&
               (iVar8 = dma_map_page_attrs(piVar4,(((arg2_00 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) -
                                                   0x200000000,arg2_00 & 0xfff,arg3_00,1,0), iVar8 != -1)) {
                uVar7 = in_w5 * 0x18;
                if (uVar7 < 0x1001) {
                    arg2_01 = __kmalloc(uVar7,0xdc0);
                    if (arg2_01 == NULL) {
                        iVar6 = -0xc;
                    }
                    else {
                        iVar15 = in_w5 - 1;
                        if (0 < in_w5) {
                            uVar11 = in_w5;
                            puVar12 = arg4;
                            puVar13 = arg2_01;
                            do {
                                if (puVar13 != NULL) {
                                    uVar2 = *puVar12;
                                    *(puVar13 + 2) = 0;
                                    uVar3 = *in_x4;
                                    puVar13[4] = 0;
                                    *puVar13 = uVar2;
                                    puVar13[1] = uVar3;
                                }
                                uVar11 = uVar11 - 1;
                                puVar13 = puVar13 + 6;
                                puVar12 = puVar12 + 1;
                                in_x4 = in_x4 + 1;
                            } while (uVar11 != 0);
                        }
                        iVar9 = sym.dma_map_single_attrs(_segment.ehdr,arg2_01,uVar7);
                        if (iVar9 == -1) {
                            iVar6 = -0xc;
                        }
                        else {
                            sym.trace_hyp_assign_info(arg2,uVar14,arg4);
                            iVar6 = sym.batched_hyp_assign(arg1,arg2_00,arg3_00,arg2_01);
                            if (iVar6 == 0) {
                                arg2_02 = 0xeeeeeeee;
                                do {
                                    if (iVar15 == -1) goto code_r0x08003310;
                                    iVar1 = iVar15;
                                    iVar15 = iVar15 + -1;
                                } while (*(arg4 + iVar1 * 4) != 3);
                                arg2_02 = 0;
code_r0x08003310:
                                sym.set_each_page_of_sg(arg1,arg2_02);
                            }
                            dma_unmap_page_attrs(_segment.ehdr,iVar9,uVar7,1,0);
                        }
                        kfree(arg2_01);
                    }
                }
                else {
                    iVar6 = -0xc;
                }
                dma_unmap_page_attrs(_segment.ehdr,iVar8,arg3_00,1,0);
            }
            else {
                iVar6 = -0xc;
            }
            kfree(arg2_00);
            return iVar6;
        }
    }
    return -0x16;
}


// ===== sym.dma_map_single_attrs @ 0x080033b4 (size 204) =====

ulong sym.dma_map_single_attrs(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = is_vmalloc_addr(arg2);
    if (((uVar2 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
        obj.dma_map_single_attrs.__already_done = 0x1;
        uVar3 = dev_driver_string(arg1);
        iVar4 = *(arg1 + 0x70);
        if (iVar4 == 0) {
            iVar4 = *arg1;
        }
        __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar3,iVar4);
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8003430);
        (*pcVar1)();
    }
    if ((uVar2 & 1) == 0) {
        uVar3 = dma_map_page_attrs(arg1,(((arg2 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000,
                                   arg2 & 0xfff,arg3,1,0);
    }
    else {
        uVar3 = 0xffffffffffffffff;
    }
    return uVar3;
}


// ===== sym.trace_hyp_assign_info @ 0x08003480 (size 60) =====

void sym.trace_hyp_assign_info(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    return;
}


// ===== sym.batched_hyp_assign @ 0x08003580 (size 1096) =====

uint sym.batched_hyp_assign(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    code *pcVar4;
    int iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    ulong in_x4;
    int64_t iVar9;
    uint64_t uVar10;
    ulong *in_x18;
    uint uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint64_t *puVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar14 = *arg1;
    uVar6 = kmem_cache_alloc_trace(_trace_event_buffer_reserve,0xdc0,0x200);
    if (uVar6 == 0) {
        uVar11 = 0xfffffff4;
    }
    else {
        ktime_get();
        if (*(arg1 + 8) == 0) {
            uVar11 = 0;
        }
        else {
            iVar13 = 0;
            uVar8 = sp_el0;
            do {
                iVar12 = 0;
                iVar3 = 0;
                uVar7 = 0;
                do {
                    uVar10 = uVar7;
                    iVar9 = iVar3;
                    if (uVar6 + iVar9 != 0) {
                        uVar1 = *(puVar14 + 0xc);
                        *(uVar6 + iVar9) =
                             ((*puVar14 & 0x3fffffffffffffc) + (_event_triggers_call >> 0xc) * 0x40) * 0x40 +
                             0x8000000000;
                        (uVar6 + iVar9)[1] = uVar1;
                    }
                    uVar1 = *(puVar14 + 0xc);
                    puVar14 = sg_next(puVar14);
                    piVar2 = _segment.ehdr;
                    if ((puVar14 == NULL) || (0x1e < uVar10)) break;
                    iVar12 = iVar12 + uVar1;
                    iVar3 = iVar9 + 0x10;
                    uVar7 = uVar10 + 1;
                } while (iVar12 + *(puVar14 + 0xc) < 0x200000);
                uVar7 = is_vmalloc_addr(uVar6);
                if (((uVar7 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                    obj.dma_map_single_attrs.__already_done = 0x1;
                    uVar8 = dev_driver_string(piVar2);
                    iVar13 = piVar2[0xe];
                    if (iVar13 == 0) {
                        iVar13 = *piVar2;
                    }
                    __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar8,iVar13);
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x80037bc);
                    (*pcVar4)();
                }
                if ((uVar7 & 1) != 0) {
code_r0x08003920:
                    uVar11 = 0xffffff9d;
                    goto code_r0x08003944;
                }
                iVar9 = iVar9 + 0x10;
                iVar12 = dma_map_page_attrs(piVar2,(((uVar6 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) -
                                                    0x200000000,uVar6 & 0xff8,iVar9,1,0);
                if (iVar12 == -1) goto code_r0x08003920;
                ktime_get();
                iVar5 = qcom_scm_assign_mem_regions(uVar6,iVar9,arg2,arg3,arg4,in_x4);
                ktime_get();
                dma_unmap_page_attrs(_segment.ehdr,iVar12,iVar9,1,0);
                if (iVar5 != 0) {
                    _printk(0x8000d40,"batched_hyp_assign",iVar5);
                    uVar11 = 0xffffff9d;
                    goto code_r0x08003944;
                }
                iVar13 = (iVar13 + 1) + uVar10;
            } while (iVar13 < *(arg1 + 8));
            uVar11 = 0;
        }
code_r0x08003944:
        ktime_get();
        kfree(uVar6);
    }
    return uVar11;
}


// ===== sym.set_each_page_of_sg @ 0x08003aa4 (size 152) =====

void sym.set_each_page_of_sg(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    uint32_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 8) != 0) {
        uVar4 = 0;
        puVar1 = *arg1;
        do {
            uVar3 = *(puVar1 + 0xc) >> 0xc;
            if ((*(puVar1 + 0xc) & 0xfff) != 0) {
                uVar3 = uVar3 + 1;
            }
            if (uVar3 != 0) {
                iVar2 = uVar3 * 0x40 + -0x18;
                do {
                    *((*puVar1 & 0xfffffffffffffffc) + iVar2) = arg2;
                    iVar2 = iVar2 + -0x40;
                } while (iVar2 != -0x18);
            }
            uVar4 = uVar4 + 1;
            puVar1 = sg_next();
        } while (uVar4 < *(arg1 + 8));
    }
    return;
}


// ===== sym.hyp_assign_phys @ 0x08003b3c (size 280) =====

char * sym.hyp_assign_phys(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t in_x4;
    int64_t iVar4;
    ulong *in_x18;
    char *pcVar5;
    ulong unaff_x30;
    uint64_t *puStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    puStack_68 = NULL;
    uStack_60 = 0;
    if (_segment.ehdr == 0) {
        pcVar5 = 0xfffffdfb;
    }
    else {
        uVar1 = sg_alloc_table(&puStack_68,1,0xcc0);
        pcVar5 = uVar1;
        if (uVar1 == 0) {
            iVar4 = _event_triggers_call >> 0xc;
            *(puStack_68 + 1) = 0;
            *(puStack_68 + 0xc) = arg2;
            *puStack_68 = ((arg1 >> 6 & 0x3ffffffffffffc0) + iVar4 * -0x40 | *puStack_68 & 3) - 0x200000000;
            uVar3 = sym.hyp_assign_table(&puStack_68,arg3,arg4 & 0xffffffff,in_x4);
            pcVar5 = uVar3 & 0xffffffff;
            sg_free_table(&puStack_68);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return pcVar5;
    }
    iVar2 = __stack_chk_fail();
    if (iVar2 + 1U < 0x2d) {
        return *((iVar2 + 1U) * 8 + 0x80010e0);
    }
    return "Unknown VMID";
}


// ===== sym.msm_secure_vmid_to_string @ 0x08003c54 (size 52) =====

char * sym.msm_secure_vmid_to_string(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = arg1 + 1;
    if (uVar1 < 0x2d) {
        return *(uVar1 * 8 + 0x80010e0);
    }
    return "Unknown VMID";
}


// ===== sym.msm_secure_get_vmid_perms @ 0x08003c88 (size 72) =====

ulong sym.msm_secure_get_vmid_perms(uint32_t arg1)

{
    if (arg1 != 0x11) {
        if (arg1 == 0x2a) {
            return 7;
        }
        if ((arg1 != 0x1d) || (reloc.__traceiter_hyp_assign_batch_start.cfi_jt == 0x0)) {
            return 6;
        }
    }
    return 4;
}


// ===== sym.trace_raw_output_hyp_assign_info @ 0x08003cd0 (size 208) =====

void sym.trace_raw_output_hyp_assign_info(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x20e8);
    iVar2 = trace_raw_output_prep(arg1,arg2);
    if (iVar2 == 1) {
        iVar1 = arg1 + 0x88;
        uVar3 = trace_print_array_seq(iVar1,iVar6 + *(iVar6 + 0x10),*(iVar6 + 8),4);
        uVar4 = trace_print_array_seq(iVar1,iVar6 + *(iVar6 + 0x14),*(iVar6 + 0xc),4);
        uVar5 = trace_print_array_seq(iVar1,iVar6 + *(iVar6 + 0x18),*(iVar6 + 0xc),4);
        trace_event_printf(arg1,"srcVMIDs: %s dstVMIDs: %s dstPerms: %s\n",uVar3,uVar4,uVar5);
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_hyp_assign_batch_start @ 0x08003da0 (size 200) =====

void sym.trace_raw_output_hyp_assign_batch_start(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint uVar1;
    int iVar2;
    ulong uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x20e8);
    iVar2 = trace_raw_output_prep(arg1,arg2);
    if (iVar2 == 1) {
        uVar1 = *(iVar6 + 8);
        uVar5 = *(iVar6 + 0x10);
        uVar3 = trace_print_array_seq(arg1 + 0x88,iVar6 + *(iVar6 + 0x18),uVar1,8);
        uVar4 = trace_print_array_seq(arg1 + 0x88,iVar6 + *(iVar6 + 0x1c),*(iVar6 + 8),8);
        trace_event_printf(arg1,"num entries: %d batch size: %llu phys addrs: %s sizes: %s\n",uVar1,uVar5,uVar3,
                           uVar4);
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_hyp_assign_batch_end @ 0x08003e68 (size 112) =====

void sym.trace_raw_output_hyp_assign_batch_end(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"ret: %d time delta: %lld us\n",*(iVar2 + 8),*(iVar2 + 0x10));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_hyp_assign_end @ 0x08003ed8 (size 108) =====

void sym.trace_raw_output_hyp_assign_end(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"total time delta: %lld us avg batch delta: %lld us\n",*(iVar2 + 8),*(iVar2 + 0x10));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.qcom_secure_buffer_probe @ 0x08003f44 (size 124) =====

int sym.qcom_secure_buffer_probe(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = dma_set_mask(arg1 + 0x10,0xffffffffffffffff);
    if (iVar1 == 0) {
        _segment.ehdr = arg1 + 0x10;
        iVar2 = of_find_property(*(arg1 + 0x300),"qcom,vmid-cp-camera-preview-ro",0);
        reloc.__traceiter_hyp_assign_batch_start.cfi_jt = iVar2 != 0;
    }
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x08003fc0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08004004

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
    //switch table (4 cases) at 0x8000f37
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004018);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x0800408c (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.qcom_secure_buffer_probe.801afa04171e6efcad6cc48fd88c71f5.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080040c0 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_secure_buffer_probe.801afa04171e6efcad6cc48fd88c71f5.cfi_jt);
    return;
}

